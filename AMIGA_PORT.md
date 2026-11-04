Seven Kingdoms: Ancient Adversaries for AmigaOS 3.x
===================================================

Seven Kingdoms: Ancient Adversaries 2.15.6 (upstream
https://github.com/the3dfxdude/7kaa, master at commit
14e6fdfba9481af4dc3a54722614a608776e20bc: the v2.15.6 release plus a
README note, GPL-2.0), the real-time strategy game, for AmigaOS 3.2 on a
68040 or 68060 with an FPU, on OpenGPU's SDL 2.

Status: builds and links; not yet run on an Amiga.


What you need
-------------

- AmigaOS 3.2 (or 3.2.3 with GFOpenUp), a 68040/68060 with an FPU.
- An RTG screen of 800x600 in 16 or 32-bit colour that SDL 2 can open.
- OpenGPU's runtime, which OpenUp installs: opengpu.library and
  LIBS:OpenGPU/SDL2.module (picture, keyboard, mouse and sound, through AHI).
- Fast RAM: about 24 MB for the game (32 MB or more is better), below.
- About 110 MB of disk: the game's data comes with it.


Using it
--------

Open the SevenKingdoms icon, or run it from a Shell (it finds its data
through PROGDIR:, so from any directory). Settings, saved games, the hall
of fame and the scenario records go in the Saves drawer beside the program.
The game opens an 800x600 screen of its own (vga_full_screen_desktop is 0
here; a config.txt in Saves can change it, as on other systems).

Single player only: the multiplayer menu is off (no enet, no curl), as
upstream's configure turns it off where it cannot have them. There is no
music: upstream's music (7kaa-music-2.15, a separate download under its
own terms) can be put in a MUSIC drawer beside the program, in upper-case
names, and is played as on other systems.


How it is built: the route
--------------------------

7KAA draws in 256 colours into its own 800x600 buffer and shows each frame
through SDL 2: an SDL_Window, an SDL_Renderer and a streaming texture
(src/OVGA.cpp), and it reads SDL 2's keys, text input and relative mouse
(src/OMOUSE.cpp). Its SDL 2 code is used unchanged, linked with OpenGPU's
SDL 2 developer kit, as the Aleph One, Crispy Doom and DSDA-Doom ports are.
The other route, our SDL 1.2 shim (acsdl12), would show the 8-bit buffer
with no copy at all, but would need upstream's video and input layers
rewritten (window, renderer, texture, SDL 2 key codes, text input), and
SDL 2 is what OpenGPU runs best. The price: each frame shown is turned from
8 to 16/32 bits and copied (Vga::flip()), so here at most 25 frames a
second are shown (upstream: 60), to leave the 68040 time for the game.

Sound: upstream plays through OpenAL, which AmigaOS 3 does not have.
amiga/amiga_audio.cpp is a new backend behind upstream's AudioBase: the
waves (upstream's WavStream: 8/16-bit PCM from A_WAVE1/2.RES, SOUND and
MUSIC) are mixed on the game's own task, as upstream's OpenAL backend
streams them in Sys::yield(), resampled to 22050 Hz 16-bit stereo, and
queued with SDL_QueueAudio(); nothing runs on SDL's audio task but SDL.
Volume, panning, loops from an offset and fades behave as upstream's.

Why this revision: master is v2.15.6, the last release, plus one commit
that only adds a note to README; DalsinAI/amigasevenkingdoms's main is
seeded from it. Nothing newer is there to choose from.

Dependencies:

- SDL 2: the OpenGPU kit (libSDL2.a, the program's half of SDL2.module).
- Left out: OpenAL (replaced, above), enet and curl (multiplayer), gettext
  (translations: English only), the x86 assembly image routines (the C++
  ones in src/imgfun/generic are used, as upstream's --disable-asm).
- libstdc++ asks for POSIX threads: amiga/pthread_stubs.c (one thread;
  7KAA starts none).
- libnix has no glob(): amiga/glob.h and amiga/amiga_dir.cpp do what the
  saved-game list asks of it (one drawer, '*' and '?', any case).
- GCC turns ColorTable::color_dist_hsv()'s sin() and cos() of a long double
  angle into cexpl(), which libnix's maths library lacks: amiga/mathl.c.

Build (GFOpenAmigaGCC 16.2.0-open4 or later; the defaults are CradleLab's
paths):

    make -f amiga/Makefile.amigaos -j2 \
         STOVE=$HOME/CradleLab/toolchain/openamigagcc-16.2.0-open4-x86_64-linux \
         NDK=$HOME/CradleLab/gfopensdk/OpenNDK/Include_H \
         SDL2KIT=/mnt/amigachrome/team2/deps/opengpu-sdk

Output: build/amigaos/SevenKingdoms/ (SevenKingdoms, ReadMe, README-7kaa,
COPYING.txt, the data drawers ENCYC, ENCYC2, IMAGE, RESOURCE, SCENARIO,
SCENARI2, SOUND, SPRITE and TUTORIAL, an empty Saves, and an icon for each)
and build/amigaos/SevenKingdoms.info. Flags: -noixemul -m68040 -m68881 -O2
-fsigned-char -std=gnu++11 and GCC 16's -fno-tree-loop-distribute-patterns;
amiga/config.h stands in for configure's config.h. Upstream's files build
with the compiler's default warnings, as upstream's configure builds them,
and give none; amiga/ builds with -Wall -Wextra and gives none. The program
passes fpcr_check.py (GCC 16's float-to-int store).

Icons: amiga/icons/icons.json, from the game's own icon
(data/IMAGE/7K_ICON.BMP):

    python3 AMICRADLE/scripts/port_icons.py amiga/icons/icons.json --out amiga/icons


Byte order
----------

7KAA's data is the little-endian PC original's, and nothing upstream swaps
it: it has only run on little-endian machines. On the 68k:

- File::file_get_short/long and file_put_short/long (src/OFILE.cpp), which
  most of the game reads and writes its files through, and the record
  sizes of its structured files, are little-endian. So upstream's
  visitors (FileReader/FileWriter, already little-endian byte by byte) and
  these agree.
- Resource files: the offset tables of Resource and ResourceIdx
  (ORES.cpp, ORESX.cpp), the dBase headers (ODB.cpp: record count, data
  offset, record size; also for the databases inside STD.SET), the
  4-byte bitmap offsets the databases keep in their records (13 files:
  OFIRMRES, OFIRMDIE, OUNITRES, OTOWNRES, OSFRMRES ...), and the font
  headers and glyph offsets (OFONT.cpp).
- Bitmaps keep their little-endian width and height in memory, as the
  image routines (src/imgfun/generic) read and write them byte by byte;
  every place in the game that reads or makes a bitmap's size itself
  (OIMGRES, OBUTTON, OBUTT3D, OVGABUF, OVGABUF2, OWORLD_Z, OGETA, OFLAME,
  OUNITDRW, OMOUSECR, OTOWNRES, OPLANT, OFIRMRES, OFIRMDIE and the
  bitmap_width() helpers of the snow, wall, rock and hill resources, and
  get_bitmap_width() in OVGA.h) does it little-endian.
- Saved games, scenarios and tutorials (the same format) keep about fifty
  structures as raw memory: Game, Info, Power, Weather, the world's
  Location matrix, Town, Version_1_Town, the derived parts of units, firms
  and bullets, workers, sites, rebels, news, rocks, regions, AI actions,
  path nodes, the hall of fame, PLAYSTAT.DAT ... Every one of them is
  #pragma pack(1) (or has no padding), so its layout is the PC's; only the
  byte order differs. amiga/le_tables.cpp lists where each one's 16, 32
  and 64-bit numbers are, written by amiga/tools/gen_le_tables.py from
  clang's layout of them for 32-bit x86, and the 68k build checks it: a
  static_assert on every structure's size and on every member's offset
  (about 1500), so a structure that lays out differently on the 68k stops
  the build. Each raw read swaps after reading; each raw write swaps,
  writes and swaps back. The tool reports bit fields and unions of mixed
  sizes; none of these structures has one.
- Unchecked by design: replay files and the multiplayer messages (only
  with multiplayer), the LZW coder (only in a DEBUG_LZW build).

What could not be checked without running it, for a tester:

- that nothing reads a 16/32-bit number out of resource data in a way the
  searches above (casts, memcpy, struct overlays on the loaded data) did
  not find;
- the derived parts of version-1 scenario files, which upstream reads with
  version-2 sizes (as on the PC);
- saved games written here load on a PC and back (they are meant to).


Memory
------

What 7KAA keeps in memory at once (from its loaders): the bitmaps it reads
whole (firms, rocks, terrain, hills, towns, buttons, icons, cursors, unit
icons: about 4 MB for one terrain set), the sprites of the units and
bullets on the map (up to 7.8 MB if all are loaded), the 800x600 front and
back buffers (480 KB each), the world (200x200 locations of 14 bytes:
560 KB), the 32-bit copy of the screen for SDL (1.9 MB) and SDL's texture
(1.9 MB), the colour tables, and the game's objects: about 20-24 MB in a
big game. The stack is 512 KB (amiga/stack.c).


Changes to upstream
-------------------

Under #ifdef __amigaos__ (and nothing else changes elsewhere, but for
three reads in OFILE.cpp that now start at 0 instead of uninitialised):

- the byte order work above (src/OFILE, ORES, ORESX, ODB, ODYNARRB, OFONT,
  OGFILE, OGFILE2, OGFILE3, OGAMHALL, PlayerStats and the bitmap and
  database readers listed);
- include/OAUDIO.h: the Amiga sound backend;
- src/OSYS.cpp: the settings drawer is PROGDIR:Saves/;
- src/ConfigAdv.cpp: a screen of 800x600, not the desktop's size scaled;
- src/OVGA.cpp: at most 25 frames a second shown;
- src/OMISC.cpp: a drawer that exists already is not an error.
- src/PlayerStats.cpp also refuses a PLAYSTAT.DAT whose record size is not
  its own (it would otherwise allocate what the file says).


What a tester should check first
--------------------------------

1. It starts: the main menu shows with its picture and the right colours,
   the mouse pointer moves, the buttons light (bitmaps, fonts and the
   palette are the first byte-order tests).
2. A new single player game: the map, units walking (sprites), the
   building and unit icons; sound effects play, panned.
3. Save, quit to the menu and load it again; then load a scenario
   (SCENARIO, version 1 files) and a tutorial, and one of SCENARI2
   (version 2): they are PC-written, so they test the saved-game swapping.
4. The hall of fame after a game, and the frame rate (Vga::flip() is the
   cost).


Licence
-------

GPL 2 (COPYING.txt): the source code and the game data alike, as upstream
says. Seven Kingdoms is a trademark of Enlight Software Ltd. The port's
own files in amiga/ are GPL 2 or later, like the game.
