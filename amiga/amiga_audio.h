/*
 * Seven Kingdoms: Ancient Adversaries -- AmigaOS 3.x sound.
 *
 * The AudioBase interface (include/audio_base.h) on SDL 2's audio queue,
 * for OpenGPU's SDL2.module, in place of src/openal/openal_audio.cpp:
 * there is no OpenAL on AmigaOS 3. The game's waves are mixed on the
 * game's own task in yield(), as the OpenAL backend streams them there,
 * and queued with SDL_QueueAudio(), so nothing runs on SDL's audio task
 * but SDL itself (libnix's stdio is not for two tasks at once).
 *
 * The AmiCradle Team. GPL 2 or later, like Seven Kingdoms.
 */
#ifndef AMIGA_AUDIO_H
#define AMIGA_AUDIO_H

#include <map>
#include <stdint.h>
#include <SDL.h>
#include <audio_base.h>
#include <audio_stream.h>
#include <input_stream.h>

class AmigaAudio: public AudioBase
{
private:
	enum WaveType {NormalWave, LongWave, LoopWave};

	class Channel
	{
	public:
		AudioStream *stream;
		WaveType wave_type;
		long volume;            // millibels, -10000 to 0
		long panning;           // -10000 to 10000
		size_t fade_frames;     // 0 = not fading
		size_t fade_frames_played;
		bool looping;
		size_t loop_start_frame;
		bool ended;             // the stream has nothing more
		/* source frames, as signed 16-bit, one or two channels */
		int16_t *src;
		long src_count;         // frames in src
		long src_pos;           // next frame in src
		uint32_t frac;          // 16.16 position between src frames
	public:
		Channel(WaveType, AudioStream *);
		~Channel();
		bool refill();
		void mix(int32_t *out, long frames, int out_rate);
	private:
		enum { SRC_FRAMES = 1024 };
		uint8_t *raw;
		Channel(const Channel &);
		Channel &operator=(const Channel &);
	};

	typedef std::map<int, Channel *> ChannelMap;

	enum { MAX_NORMAL = 16, MAX_LONG = 4, MAX_LOOP = 4 };

public:
	AmigaAudio();
	~AmigaAudio();

	int	init();
	void	deinit();

	void	yield();

	int	play_mid(char*);

	int	play_wav(char*, const DsVolume &);
	int	play_wav(short resIdx, const DsVolume &);
	int	play_resided_wav(char *, const DsVolume &);
	int	get_free_wav_ch();
	int	stop_wav(int);
	int	is_wav_playing(int);

	int	play_long_wav(const char*, const DsVolume &);
	int	stop_long_wav(int);
	int	is_long_wav_playing(int);
	void	volume_long_wav(int ch, const DsVolume &);

	int	play_loop_wav(const char *, int repeatOffset, const DsVolume &);
	void	stop_loop_wav(int ch);
	void	volume_loop_wav(int ch, const DsVolume &);
	void	fade_out_loop_wav(int ch, int fadeRate);
	DsVolume get_loop_wav_volume(int ch);
	int	is_loop_wav_fading(int ch);

	int	play_cd(int, int retVolume);

	void	stop_mid();
	void	stop_wav();
	void	stop_cd();

	int	is_mid_playing();
	int	is_wav_playing();
	int	is_cd_playing();

	void	toggle_mid(bool);
	void	toggle_wav(bool);
	void	toggle_cd(bool);

	void	set_mid_volume(int);
	void	set_wav_volume(int);
	void	set_cd_volume(int);

	int	get_wav_volume() const;

private:
	SDL_AudioDeviceID device;
	int out_rate;
	ChannelMap channels;
	int counts[3];
	long wav_volume;        // millibels, -10000 to 0
	int32_t *mix_buf;
	int16_t *out_buf;

	int	play_any_wav(WaveType, const char *, const DsVolume &);
	int	play_any_wav(WaveType, InputStream *, const DsVolume &);
	int	stop_any_wav(int);
	int	new_id();
	void	remove(ChannelMap::iterator);
};

typedef AmigaAudio Audio;

#endif
