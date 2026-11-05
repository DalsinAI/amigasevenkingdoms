/* config.h for the AmigaOS 3.x build, in place of the one configure makes
 * (include/config.h.in). Every source file gets it first (-include), as
 * upstream's GLOBAL_CFLAGS gives configure's. */
#ifndef AMIGA_CONFIG_H
#define AMIGA_CONFIG_H

#define PACKAGE "7kaa"
#define PACKAGE_NAME "Seven Kingdoms: Ancient Adversaries"
#define PACKAGE_VERSION "2.15.6"
#define VERSION "2.15.6"
#define SKVERSION "2.15.6"

/* The data drawer is the program's own: Sys::chdir_to_game_dir() tries
 * this after the current directory. */
#define PACKAGE_DATA_DIR "PROGDIR:"
#define LOCALE_DIR "PROGDIR:locale"

/* SDL 2 (OpenGPU's SDL2.module) does video and input; sound is
 * amiga/amiga_audio.cpp on SDL 2's audio queue (no OpenAL here). */
#define USE_SDL 1
#define USE_AMIGA_AUDIO 1
#define USE_POSIX 1
#define HAVE_SETENV 1
#define HAVE_STRING_STRCASECMP 1

/* No enet, no curl: the multiplayer menu is off, as configure turns it off
 * when it cannot have them (or when the FPU is not a 387). */
#define DISABLE_MULTI_PLAYER 1
#define NO_MEM_CLASS 1
#define REGISTER

#endif
