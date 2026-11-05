/*
 * Little-endian helpers for the AmigaOS 3.x build of Seven Kingdoms.
 *
 * The game's data (resource files, sprites, databases, scenarios, saved
 * games) is the little-endian DOS original's. On the 68k every 16 and
 * 32-bit number read from it is swapped where it is read, and every one
 * the game writes to a file is written little-endian, so saved games and
 * the scenarios from the PC load alike. Bitmaps keep their little-endian
 * width and height in memory, as the image routines (src/imgfun/generic)
 * read them byte by byte.
 *
 * The AmiCradle Team. GPL 2 or later, like Seven Kingdoms.
 */
#ifndef AMIGA_LE_H
#define AMIGA_LE_H

#include <stdint.h>
#include <stddef.h>

static inline uint16_t le_swap16(uint16_t v)
{
	return (uint16_t)((v >> 8) | (v << 8));
}

static inline uint32_t le_swap32(uint32_t v)
{
	return (v >> 24) | ((v >> 8) & 0xff00u) | ((v << 8) & 0xff0000u) | (v << 24);
}

/* A 16 or 32-bit little-endian number at any address. */
static inline int16_t le_get16(const void *p)
{
	const unsigned char *b = (const unsigned char *)p;
	return (int16_t)(b[0] | (b[1] << 8));
}

static inline uint16_t le_getu16(const void *p)
{
	const unsigned char *b = (const unsigned char *)p;
	return (uint16_t)(b[0] | (b[1] << 8));
}

static inline int32_t le_get32(const void *p)
{
	const unsigned char *b = (const unsigned char *)p;
	return (int32_t)((uint32_t)b[0] | ((uint32_t)b[1] << 8) |
	                 ((uint32_t)b[2] << 16) | ((uint32_t)b[3] << 24));
}

static inline void le_put16(void *p, int v)
{
	unsigned char *b = (unsigned char *)p;
	b[0] = (unsigned char)v;
	b[1] = (unsigned char)(v >> 8);
}

static inline void le_put32(void *p, int32_t v)
{
	unsigned char *b = (unsigned char *)p;
	b[0] = (unsigned char)v;
	b[1] = (unsigned char)(v >> 8);
	b[2] = (unsigned char)(v >> 16);
	b[3] = (unsigned char)(v >> 24);
}

/* Swap a 16, 32 or 64-bit field in place (either way: the swap is its
 * own inverse). Takes the field itself, packed or not, as
 * LE_SWAP(hdr.rec_size). */
#ifdef __cplusplus
template <typename T> static inline T le_swapped(T v)
{
	unsigned char b[sizeof(T)], r[sizeof(T)];
	__builtin_memcpy(b, &v, sizeof(T));
	for (unsigned i = 0; i < sizeof(T); i++)
		r[i] = b[sizeof(T) - 1 - i];
	__builtin_memcpy(&v, r, sizeof(T));
	return v;
}
#define LE_SWAP(field) ((field) = le_swapped(field))
#endif

/* Swap an array of 16 or 32-bit numbers in place. */
static inline void le_swap16_array(void *p, size_t count)
{
	unsigned char *b = (unsigned char *)p;
	for (size_t i = 0; i < count; i++, b += 2)
	{
		unsigned char t = b[0];
		b[0] = b[1];
		b[1] = t;
	}
}

static inline void le_swap32_array(void *p, size_t count)
{
	unsigned char *b = (unsigned char *)p;
	for (size_t i = 0; i < count; i++, b += 4)
	{
		unsigned char t = b[0];
		b[0] = b[3];
		b[3] = t;
		t = b[1];
		b[1] = b[2];
		b[2] = t;
	}
}

/* Where the 16, 32 and 64-bit numbers are in a structure the game keeps
 * as raw memory in its files (amiga/le_tables.cpp, written by
 * amiga/tools/gen_le_tables.py): runs of `count' numbers of `size' bytes
 * from `offset'. */
struct LeRun
{
	unsigned short offset;
	unsigned char size;
	unsigned short count;
};

struct LeTable
{
	const char *name;
	unsigned size;
	unsigned runs;
	const struct LeRun *run;
};

#ifdef __cplusplus
/* Swap `count' structures at p, each table->size bytes apart. */
void le_swap_table(void *p, const LeTable &table, size_t count = 1);
/* Swap the numbers of the structure at base whose offsets are in
 * [from, to): for a derived class's part, read after its base's. */
void le_swap_table_part(void *base, const LeTable &table, size_t from, size_t to);
/* The same, `count' structures of `stride' bytes (a DynArray's elements). */
void le_swap_table_stride(void *p, const LeTable &table, size_t count, size_t stride);

#define LE_TABLE(T) le_table_##T
#define LE_DECLARE_TABLE(T) extern const LeTable le_table_##T;
#define LE_ALL_TABLES(X) \
	X(Game) X(Info) X(Power) X(Weather) X(MagicWeather) X(Location) \
	X(ResultNode) X(TeamInfo) \
	X(UnitCaravan) X(UnitExpCart) X(UnitMonster) X(UnitVehicle) X(UnitGod) \
	X(BulletHoming) X(BulletFlame) \
	X(Worker) X(FirmBase) X(FirmCamp) X(FirmFactory) X(FirmInn) X(FirmMarket) \
	X(FirmMine) X(FirmResearch) X(FirmWar) X(FirmHarbor) X(FirmMonster) \
	X(Site) X(Town) X(Version_1_Town) X(Rebel) X(ActionNode) \
	X(SnowGroundArray) X(RegionInfo) X(RegionStat) X(News) X(EmptyRoom) \
	X(HallFameEntry) X(TalkMsg) X(FirmInfo) X(TechClass) X(TechInfo) \
	X(GodInfo) X(RecordHeader) X(ScenStat) \
	X(Unit) X(Bullet) X(Firm) X(Rock) X(FirmDie)
LE_ALL_TABLES(LE_DECLARE_TABLE)

/* Swap the numbers of `count' T's at p (after reading them, or before and
 * after writing them). */
#define LE_SWAP_STRUCT(T, p, count) le_swap_table((p), le_table_##T, (count))

/* Swap the elements of a DynArray (DynArray::read_file() and write_file()
 * keep them as raw memory): structures by their table, or with NULL,
 * 16-bit numbers. */
class DynArray;
void le_swap_dynarray(DynArray *array, const LeTable *table);

/* For Unit/Firm/Bullet::read_derived_file(): the table of the derived
 * class the object is (by its id), or NULL for none. */
const LeTable *le_unit_derived_table(int unitId);
const LeTable *le_firm_derived_table(int firmId);
const LeTable *le_bullet_derived_table(int spriteId);
#endif

#endif
