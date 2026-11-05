/* Swapping the structures the game keeps as raw memory in its files
 * between little-endian (the files) and the 68k's order: see amiga_le.h
 * and amiga/le_tables.cpp.
 * The AmiCradle Team. GPL 2 or later, like Seven Kingdoms. */
#include <ALL.h>
#include <OUNITRES.h>
#include <OGODRES.h>
#include <OFIRMID.h>
#include <OSPRTRES.h>
#include <ODYNARR.h>
#include <amiga_le.h>

static void swap_bytes(unsigned char *b, unsigned size)
{
	for (unsigned i = 0, j = size - 1; i < j; i++, j--)
	{
		unsigned char t = b[i];
		b[i] = b[j];
		b[j] = t;
	}
}

static void swap_runs(unsigned char *p, const LeTable &t, size_t from, size_t to)
{
	for (unsigned r = 0; r < t.runs; r++)
	{
		const LeRun &run = t.run[r];
		if (run.size < 2)
			continue;
		for (unsigned k = 0; k < run.count; k++)
		{
			size_t off = run.offset + (size_t)k * run.size;
			if (off >= from && off + run.size <= to)
				swap_bytes(p + off, run.size);
		}
	}
}

void le_swap_table(void *p, const LeTable &t, size_t count)
{
	le_swap_table_stride(p, t, count, t.size);
}

void le_swap_table_stride(void *p, const LeTable &t, size_t count, size_t stride)
{
	unsigned char *b = (unsigned char *)p;
	for (size_t i = 0; i < count; i++, b += stride)
		swap_runs(b, t, 0, t.size);
}

void le_swap_table_part(void *base, const LeTable &t, size_t from, size_t to)
{
	swap_runs((unsigned char *)base, t, from, to);
}

/* As UnitArray::unit_class_size() picks the class. UnitMarine reads its
 * own part through a visitor (src/OGFILE3.cpp). */
const LeTable *le_unit_derived_table(int unitId)
{
	UnitInfo *unitInfo = unit_res[unitId];

	switch (unitId)
	{
	case UNIT_CARAVAN:
		return &le_table_UnitCaravan;
	case UNIT_VESSEL:
	case UNIT_TRANSPORT:
	case UNIT_CARAVEL:
	case UNIT_GALLEON:
		return NULL;
	case UNIT_EXPLOSIVE_CART:
		return &le_table_UnitExpCart;
	default:
		if (unitInfo->is_monster)
			return &le_table_UnitMonster;
		else if (unitInfo->solider_id)
			return &le_table_UnitVehicle;
		else if (god_res.is_god_unit(unitId))
			return &le_table_UnitGod;
		return NULL;
	}
}

/* As FirmArray::firm_class_size(). */
const LeTable *le_firm_derived_table(int firmId)
{
	switch (firmId)
	{
	case FIRM_BASE:		return &le_table_FirmBase;
	case FIRM_CAMP:		return &le_table_FirmCamp;
	case FIRM_FACTORY:	return &le_table_FirmFactory;
	case FIRM_INN:		return &le_table_FirmInn;
	case FIRM_MARKET:	return &le_table_FirmMarket;
	case FIRM_MINE:		return &le_table_FirmMine;
	case FIRM_RESEARCH:	return &le_table_FirmResearch;
	case FIRM_WAR_FACTORY:	return &le_table_FirmWar;
	case FIRM_HARBOR:	return &le_table_FirmHarbor;
	case FIRM_MONSTER:	return &le_table_FirmMonster;
	default:		return NULL;
	}
}

/* As BulletArray::bullet_class_size(). Projectile reads its own part
 * through a visitor. */
const LeTable *le_bullet_derived_table(int spriteId)
{
	SpriteInfo *spriteInfo = sprite_res[spriteId];
	switch (spriteInfo->sprite_sub_type)
	{
	case 'H':	return &le_table_BulletHoming;
	case 'F':	return &le_table_BulletFlame;
	default:	return NULL;
	}
}

void le_swap_dynarray(DynArray *a, const LeTable *t)
{
	if (!a->body_buf || a->last_ele <= 0)
		return;
	if (t)
		le_swap_table_stride(a->body_buf, *t, a->last_ele, a->ele_size);
	else
		le_swap16_array(a->body_buf, (size_t)a->last_ele * a->ele_size / 2);
}
