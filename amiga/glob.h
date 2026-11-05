/* glob() for AmigaOS 3.x: libnix has none. Directory::read() (src/ODIR.cpp)
 * lists saved games with a pattern such as "PROGDIR:Saves/NAME?.SAV" or a star; this does
 * that much: '*' and '?' in the last part only, matched without regard to
 * case as AmigaDOS names are, on opendir()/readdir().
 * The AmiCradle Team. GPL 2 or later, like Seven Kingdoms. */
#ifndef AMIGA_GLOB_H
#define AMIGA_GLOB_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
	size_t gl_pathc;
	char **gl_pathv;
	size_t gl_offs;
} glob_t;

#define GLOB_NOSORT 0x20
#define GLOB_NOSPACE 1
#define GLOB_NOMATCH 3

int glob(const char *pattern, int flags,
         int (*errfunc)(const char *epath, int eerrno), glob_t *pglob);
void globfree(glob_t *pglob);

#ifdef __cplusplus
}
#endif

#endif
