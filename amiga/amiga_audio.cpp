/*
 * Seven Kingdoms: Ancient Adversaries -- AmigaOS 3.x sound.
 *
 * See amiga_audio.h. The behaviour follows src/openal/openal_audio.cpp:
 * the same three kinds of wave (normal, long, loop), volumes in
 * millibels, panning from -10000 to 10000, loops restarting at a byte
 * offset, fades over a time, and the master volume. Waves are read by
 * upstream's WavStream (8 or 16-bit PCM, mono or stereo, read as
 * little-endian), resampled to the output rate (nearest frame) and mixed
 * to 16-bit stereo.
 *
 * The AmiCradle Team. GPL 2 or later, like Seven Kingdoms.
 */
#include <ALL.h>
#include <OAUDIO.h>
#include <OVGALOCK.h>
#include <dbglog.h>
#include <file_input_stream.h>
#include <mem_input_stream.h>
#include <wav_stream.h>
#include <math.h>
#include <string.h>

DBGLOG_DEFAULT_CHANNEL(Audio);

/* Output: 22050 Hz, 16-bit stereo; the game's waves are 22050 Hz or less. */
enum { OUT_RATE = 22050, OUT_CHANNELS = 2 };
/* How far ahead the queue is kept filled: Sys::yield() comes round at
 * least this often while the game runs, so the queue never runs dry. */
enum { QUEUE_AHEAD_MS = 250 };
enum { MAX_MIX_FRAMES = OUT_RATE * QUEUE_AHEAD_MS / 1000 };

/* 0 dB is 256, -6 dB is 128; -10000 mB and below is silence. */
static int millibels_to_gain(long mb)
{
	if (mb <= -10000)
		return 0;
	if (mb >= 0)
		return 256;
	return (int)(256.0f * powf(10.0f, mb / 2000.0f) + 0.5f);
}

static long gain_to_millibels(float ratio)
{
	if (ratio <= 0.0f)
		return -10000;
	return (long)(2000.0f * log10f(ratio) - 0.5f);
}

static long clamp_long(long v, long lo, long hi)
{
	return v < lo ? lo : (v > hi ? hi : v);
}

//------------------------------------------------------------------//

AmigaAudio::Channel::Channel(WaveType type, AudioStream *as)
	: stream(as), wave_type(type), volume(0), panning(0),
	  fade_frames(0), fade_frames_played(0), looping(false),
	  loop_start_frame(0), ended(false), src_count(0), src_pos(0), frac(0)
{
	src = new int16_t[SRC_FRAMES * 2];
	raw = new uint8_t[SRC_FRAMES * 2 * 2];
}

AmigaAudio::Channel::~Channel()
{
	delete stream;
	delete[] src;
	delete[] raw;
}

/* Reads the next frames of the wave into src as 16-bit samples.
 * Returns false at the end of a wave that does not loop. */
bool AmigaAudio::Channel::refill()
{
	if (ended)
		return false;

	long n = stream->read(raw, SRC_FRAMES);
	if (n <= 0 && looping)
	{
		if (stream->seek(loop_start_frame))
			n = stream->read(raw, SRC_FRAMES);
	}
	if (n <= 0)
	{
		ended = true;
		return false;
	}

	int ch = stream->channels();
	long samples = n * ch;
	if (stream->sample_size() == 1)
	{
		for (long i = 0; i < samples; i++)
			src[i] = (int16_t)((raw[i] - 128) << 8);
	}
	else
	{
		/* WavStream has already put them in the machine's order */
		memcpy(src, raw, samples * 2);
	}

	if (fade_frames != 0)
	{
		for (long i = 0; i < n; i++)
		{
			long left = (long)fade_frames - (long)fade_frames_played;
			if (left < 0)
				left = 0;
			long f = (left << 8) / (long)fade_frames;     /* 256 .. 0 */
			for (int c = 0; c < ch; c++)
				src[i * ch + c] = (int16_t)((src[i * ch + c] * f) >> 8);
			if (fade_frames_played < fade_frames)
				fade_frames_played++;
		}
	}

	src_count = n;
	return true;
}

void AmigaAudio::Channel::mix(int32_t *out, long frames, int out_rate)
{
	int gain = millibels_to_gain(volume);
	long pan = clamp_long(panning, -10000, 10000);
	int gl = pan > 0 ? (int)(gain * (10000 - pan) / 10000) : gain;
	int gr = pan < 0 ? (int)(gain * (10000 + pan) / 10000) : gain;
	int ch = stream->channels();
	uint32_t step = ((uint32_t)stream->frame_rate() << 16) / (uint32_t)out_rate;

	if (step == 0)
		step = 1;

	for (long i = 0; i < frames; i++)
	{
		while (src_pos >= src_count)
		{
			src_pos -= src_count;
			src_count = 0;
			if (!refill())
			{
				src_pos = 0;
				return;
			}
		}

		int32_t l, r;
		if (ch == 2)
		{
			l = src[src_pos * 2];
			r = src[src_pos * 2 + 1];
		}
		else
		{
			l = r = src[src_pos];
		}
		out[i * 2]     += (l * gl) >> 8;
		out[i * 2 + 1] += (r * gr) >> 8;

		frac += step;
		src_pos += frac >> 16;
		frac &= 0xffff;
	}
}

//------------------------------------------------------------------//

AmigaAudio::AmigaAudio()
{
	init_flag = false;
	mid_init_flag = false;
	wav_init_flag = false;
	cd_init_flag = false;
	mid_flag = false;
	wav_flag = false;
	cd_flag = false;
	device = 0;
	out_rate = OUT_RATE;
	counts[0] = counts[1] = counts[2] = 0;
	wav_volume = 0;
	mix_buf = NULL;
	out_buf = NULL;
}

AmigaAudio::~AmigaAudio()
{
	if (init_flag)
		deinit();
}

int AmigaAudio::init()
{
	SDL_AudioSpec want, have;

	wav_flag = true;
	mid_flag = true;
	cd_flag = true;

	wav_res.init(DIR_RES"A_WAVE2.RES", 0, 0);

	if (SDL_InitSubSystem(SDL_INIT_AUDIO) != 0)
	{
		ERR("SDL audio: %s\n", SDL_GetError());
		init_flag = false;
		return 0;
	}

	SDL_zero(want);
	want.freq = OUT_RATE;
	want.format = AUDIO_S16SYS;
	want.channels = OUT_CHANNELS;
	want.samples = 1024;
	want.callback = NULL;        /* SDL_QueueAudio() */

	/* SDL converts if the hardware wants something else */
	device = SDL_OpenAudioDevice(NULL, 0, &want, &have, 0);
	if (device == 0)
	{
		ERR("SDL_OpenAudioDevice: %s\n", SDL_GetError());
		SDL_QuitSubSystem(SDL_INIT_AUDIO);
		init_flag = false;
		return 0;
	}
	out_rate = OUT_RATE;

	mix_buf = new int32_t[MAX_MIX_FRAMES * OUT_CHANNELS];
	out_buf = new int16_t[MAX_MIX_FRAMES * OUT_CHANNELS];

	counts[0] = counts[1] = counts[2] = 0;
	wav_volume = 0;
	SDL_PauseAudioDevice(device, 0);

	wav_init_flag = true;
	init_flag = true;
	return 1;
}

void AmigaAudio::deinit()
{
	init_flag = false;
	stop_wav();
	if (device != 0)
	{
		SDL_CloseAudioDevice(device);
		device = 0;
		SDL_QuitSubSystem(SDL_INIT_AUDIO);
	}
	delete[] mix_buf;
	delete[] out_buf;
	mix_buf = NULL;
	out_buf = NULL;
	wav_init_flag = false;
	wav_res.deinit();
}

void AmigaAudio::yield()
{
	if (!wav_init_flag)
		return;

	/* As OpenALAudio::yield(): unlocking the front buffer shows the
	 * frame, and some loops rely on this to update the screen. */
	VgaFrontLock vgaLock;

	long queued = (long)(SDL_GetQueuedAudioSize(device) / (OUT_CHANNELS * 2));
	long frames = MAX_MIX_FRAMES - queued;

	if (!channels.empty() && frames >= 256)
	{
		memset(mix_buf, 0, frames * OUT_CHANNELS * sizeof(int32_t));
		for (ChannelMap::iterator it = channels.begin(); it != channels.end(); ++it)
			it->second->mix(mix_buf, frames, out_rate);

		for (long i = 0; i < frames * OUT_CHANNELS; i++)
		{
			int32_t v = mix_buf[i];
			if (v > 32767) v = 32767;
			else if (v < -32768) v = -32768;
			out_buf[i] = (int16_t)v;
		}
		SDL_QueueAudio(device, out_buf, frames * OUT_CHANNELS * 2);
	}

	for (ChannelMap::iterator it = channels.begin(); it != channels.end();)
	{
		if (it->second->ended)
			remove(it++);
		else
			++it;
	}
}

void AmigaAudio::remove(ChannelMap::iterator it)
{
	Channel *c = it->second;
	if (counts[c->wave_type] > 0)
		counts[c->wave_type]--;
	channels.erase(it);
	delete c;
}

int AmigaAudio::new_id()
{
	int id = channels.empty() ? 1 : channels.rbegin()->first + 1;
	if (id < 1)
		id = 1;
	while (channels.find(id) != channels.end())
	{
		id++;
		if (id < 1)
			id = 1;
	}
	return id;
}

static const int max_of_type[3] = { 16, 4, 4 };

int AmigaAudio::play_any_wav(WaveType type, const char *file_name, const DsVolume &vol)
{
	if (!wav_init_flag || counts[type] >= max_of_type[type])
		return 0;

	FileInputStream *in = new FileInputStream;
	if (!in->open(file_name))
	{
		delete in;
		return 0;
	}
	return play_any_wav(type, in, vol);
}

/* Takes in; deletes it when done or on failure. */
int AmigaAudio::play_any_wav(WaveType type, InputStream *in, const DsVolume &vol)
{
	if (!wav_init_flag || counts[type] >= max_of_type[type])
	{
		delete in;
		return 0;
	}

	WavStream *ws = new WavStream;
	if (!ws->open(in))
	{
		delete in;
		delete ws;
		return 0;
	}

	Channel *c = new Channel(type, ws);
	c->volume = clamp_long(vol.ds_vol + wav_volume, -10000, 0);
	c->panning = clamp_long(vol.ds_pan, -10000, 10000);

	int id = new_id();
	channels[id] = c;
	counts[type]++;
	return id;
}

int AmigaAudio::play_mid(char *)
{
	return 0;
}

int AmigaAudio::play_wav(char *file_name, const DsVolume &vol)
{
	if (!wav_init_flag || !wav_flag)
		return 0;
	if (counts[NormalWave] >= MAX_NORMAL)
		return 0;

	if (misc.is_file_exist(file_name))
		return play_any_wav(NormalWave, file_name, vol);

	int idx = wav_res.get_index(file_name);
	if (idx == 0)
		return 0;
	return play_wav((short)idx, vol);
}

int AmigaAudio::play_wav(short index, const DsVolume &vol)
{
	int size;
	char *data;

	if (!wav_init_flag || !wav_flag)
		return 0;
	if (counts[NormalWave] >= MAX_NORMAL)
		return 0;

	if (wav_res.get_file(index, size) == NULL || size <= 0)
		return 0;

	data = new char[size];
	wav_res.set_user_buf(data, size);
	if (wav_res.get_data(index) == NULL)
	{
		wav_res.reset_user_buf();
		delete[] data;
		return 0;
	}
	wav_res.reset_user_buf();

	MemInputStream *in = new MemInputStream;
	in->open(data, size);        /* owns data */
	return play_any_wav(NormalWave, in, vol);
}

int AmigaAudio::play_resided_wav(char *buf, const DsVolume &vol)
{
	if (!wav_init_flag || !wav_flag)
		return 0;
	if (counts[NormalWave] >= MAX_NORMAL)
		return 0;

	/* the size from the RIFF header, little-endian */
	unsigned char *u = reinterpret_cast<unsigned char *>(buf);
	uint32_t size = (uint32_t)u[4] | ((uint32_t)u[5] << 8) |
	                ((uint32_t)u[6] << 16) | ((uint32_t)u[7] << 24);
	size += 8;

	MemInputStream *in = new MemInputStream;
	in->open(buf, size, false);
	return play_any_wav(NormalWave, in, vol);
}

int AmigaAudio::get_free_wav_ch()
{
	if (!wav_init_flag)
		return 0;
	int n = MAX_NORMAL - counts[NormalWave];
	return n > 0 ? n : 0;
}

int AmigaAudio::stop_any_wav(int id)
{
	if (!wav_init_flag)
		return 1;
	ChannelMap::iterator it = channels.find(id);
	if (it != channels.end())
		remove(it);
	return 1;
}

int AmigaAudio::stop_wav(int id)
{
	return stop_any_wav(id);
}

int AmigaAudio::is_wav_playing(int id)
{
	return is_long_wav_playing(id);
}

int AmigaAudio::play_long_wav(const char *file_name, const DsVolume &vol)
{
	return play_any_wav(LongWave, file_name, vol);
}

int AmigaAudio::stop_long_wav(int id)
{
	return stop_any_wav(id);
}

int AmigaAudio::is_long_wav_playing(int id)
{
	return channels.find(id) != channels.end();
}

/* Sets the volume and panning as given (not attenuated by the master
 * volume), as OpenALAudio::volume_long_wav() does. */
void AmigaAudio::volume_long_wav(int id, const DsVolume &vol)
{
	if (!wav_init_flag)
		return;
	ChannelMap::iterator it = channels.find(id);
	if (it == channels.end())
		return;
	it->second->volume = clamp_long(vol.ds_vol, -10000, 0);
	it->second->panning = clamp_long(vol.ds_pan, -10000, 10000);
}

int AmigaAudio::play_loop_wav(const char *file_name, int repeat_offset, const DsVolume &vol)
{
	if (!wav_init_flag || !wav_flag)
		return 0;
	if (counts[LoopWave] >= MAX_LOOP)
		return 0;

	int id = play_any_wav(LoopWave, file_name, vol);
	if (id == 0)
		return 0;

	Channel *c = channels[id];
	int fs = c->stream->frame_size();
	c->loop_start_frame = fs > 0 && repeat_offset > 0 ? repeat_offset / fs : 0;
	c->looping = true;
	return id;
}

void AmigaAudio::stop_loop_wav(int id)
{
	if (!wav_init_flag)
		return;
	stop_any_wav(id);
}

void AmigaAudio::volume_loop_wav(int id, const DsVolume &vol)
{
	volume_long_wav(id, vol);
}

void AmigaAudio::fade_out_loop_wav(int id, int fade_msec)
{
	if (!wav_init_flag)
		return;
	ChannelMap::iterator it = channels.find(id);
	if (it == channels.end())
		return;
	Channel *c = it->second;
	c->fade_frames_played = 0;
	c->fade_frames = (size_t)c->stream->frame_rate() * (size_t)(fade_msec > 0 ? fade_msec : 1) / 1000;
	if (c->fade_frames == 0)
		c->fade_frames = 1;
}

DsVolume AmigaAudio::get_loop_wav_volume(int id)
{
	if (!wav_init_flag)
		return DsVolume(0, 0);
	ChannelMap::iterator it = channels.find(id);
	if (it == channels.end())
		return DsVolume(0, 0);
	Channel *c = it->second;
	long vol = c->volume;
	if (c->fade_frames != 0)
	{
		float ratio = millibels_to_gain(vol) / 256.0f;
		ratio *= 1.0f - (float)c->fade_frames_played / (float)c->fade_frames;
		vol = gain_to_millibels(ratio);
	}
	return DsVolume(vol, c->panning);
}

int AmigaAudio::is_loop_wav_fading(int id)
{
	if (!wav_init_flag)
		return 0;
	ChannelMap::iterator it = channels.find(id);
	if (it == channels.end())
		return 0;
	return it->second->fade_frames != 0;
}

int AmigaAudio::play_cd(int, int)
{
	return 0;
}

void AmigaAudio::stop_mid()
{
}

void AmigaAudio::stop_wav()
{
	for (ChannelMap::iterator it = channels.begin(); it != channels.end(); ++it)
		delete it->second;
	channels.clear();
	counts[0] = counts[1] = counts[2] = 0;
	if (device != 0)
		SDL_ClearQueuedAudio(device);
}

void AmigaAudio::stop_cd()
{
}

int AmigaAudio::is_mid_playing()
{
	return 0;
}

int AmigaAudio::is_wav_playing()
{
	if (!wav_init_flag)
		return 0;
	return !channels.empty();
}

int AmigaAudio::is_cd_playing()
{
	return 0;
}

void AmigaAudio::toggle_mid(bool)
{
}

void AmigaAudio::toggle_wav(bool flag)
{
	if (!flag)
		stop_wav();
	wav_flag = flag;
}

void AmigaAudio::toggle_cd(bool)
{
}

void AmigaAudio::set_mid_volume(int)
{
}

/* 0 to 100; shifts the waves playing now by the change, as OpenAL's
 * backend scales their gains. */
void AmigaAudio::set_wav_volume(int vol)
{
	if (!wav_init_flag)
		return;
	vol = vol < 0 ? 0 : (vol > 100 ? 100 : vol);
	long mb = vol * 100L - 10000L;
	long diff = mb - wav_volume;
	for (ChannelMap::iterator it = channels.begin(); it != channels.end(); ++it)
		it->second->volume = clamp_long(it->second->volume + diff, -10000, 0);
	wav_volume = mb;
}

int AmigaAudio::get_wav_volume() const
{
	if (!wav_init_flag)
		return 0;
	return (int)((wav_volume + 10000) / 100);
}

void AmigaAudio::set_cd_volume(int)
{
}
