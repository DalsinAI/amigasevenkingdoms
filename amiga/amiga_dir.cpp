/* glob() for AmigaOS 3.x: see amiga/glob.h.
 * The AmiCradle Team. GPL 2 or later, like Seven Kingdoms. */
#include <glob.h>
#include <ctype.h>
#include <dirent.h>
#include <stdlib.h>
#include <string.h>

static int match(const char *p, const char *s)
{
	for (; *p; p++, s++)
	{
		if (*p == '*')
		{
			while (p[1] == '*')
				p++;
			if (!p[1])
				return 1;
			for (; *s; s++)
				if (match(p + 1, s))
					return 1;
			return 0;
		}
		if (!*s)
			return 0;
		if (*p != '?' && tolower((unsigned char)*p) != tolower((unsigned char)*s))
			return 0;
	}
	return *s == 0;
}

static int compare(const void *a, const void *b)
{
	return strcmp(*(char *const *)a, *(char *const *)b);
}

extern "C" int glob(const char *pattern, int flags,
                    int (*errfunc)(const char *, int), glob_t *pglob)
{
	(void)errfunc;
	pglob->gl_pathc = 0;
	pglob->gl_pathv = NULL;
	pglob->gl_offs = 0;

	/* split "dir/pattern" or "Volume:pattern" */
	const char *slash = strrchr(pattern, '/');
	const char *colon = strrchr(pattern, ':');
	const char *sep = slash > colon ? slash : colon;
	size_t dirlen = sep ? (size_t)(sep - pattern) + 1 : 0;
	const char *pat = pattern + dirlen;

	char *dir = (char *)malloc(dirlen + 1);
	if (!dir)
		return GLOB_NOSPACE;
	memcpy(dir, pattern, dirlen);
	dir[dirlen] = 0;
	/* "Saves/" opens as "Saves"; "PROGDIR:" stays as it is */
	if (dirlen > 1 && dir[dirlen - 1] == '/')
		dir[dirlen - 1] = 0;

	DIR *d = opendir(dir);
	if (!d)
	{
		free(dir);
		return GLOB_NOMATCH;
	}

	size_t cap = 0;
	struct dirent *e;
	while ((e = readdir(d)) != NULL)
	{
		if (!match(pat, e->d_name))
			continue;
		if (pglob->gl_pathc + 1 >= cap)
		{
			size_t ncap = cap ? cap * 2 : 16;
			char **nv = (char **)realloc(pglob->gl_pathv, ncap * sizeof(char *));
			if (!nv)
				break;
			pglob->gl_pathv = nv;
			cap = ncap;
		}
		size_t n = strlen(e->d_name);
		char *path = (char *)malloc(dirlen + n + 1);
		if (!path)
			break;
		memcpy(path, pattern, dirlen);
		memcpy(path + dirlen, e->d_name, n + 1);
		pglob->gl_pathv[pglob->gl_pathc++] = path;
		pglob->gl_pathv[pglob->gl_pathc] = NULL;
	}
	closedir(d);
	free(dir);

	if (pglob->gl_pathc > 1 && !(flags & GLOB_NOSORT))
		qsort(pglob->gl_pathv, pglob->gl_pathc, sizeof(char *), compare);

	return pglob->gl_pathc ? 0 : GLOB_NOMATCH;
}

extern "C" void globfree(glob_t *pglob)
{
	for (size_t i = 0; i < pglob->gl_pathc; i++)
		free(pglob->gl_pathv[i]);
	free(pglob->gl_pathv);
	pglob->gl_pathv = NULL;
	pglob->gl_pathc = 0;
}
