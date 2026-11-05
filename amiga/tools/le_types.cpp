/* The structures Seven Kingdoms reads from and writes to its saved games
 * (and scenarios, tutorials and the hall of fame) as raw memory.
 * amiga/tools/gen_le_tables.py lays this out with clang for 32-bit x86 (the
 * PC's layout, which the files have) and writes amiga/le_tables.cpp from
 * it. Not part of the game build. */
#include <ALL.h>
#include <ODYNARRB.h>
#include <OGAME.h>
#include <OINFO.h>
#include <OPOWER.h>
#include <OWEATHER.h>
#include <OWORLD.h>
#include <OMATRIX.h>
#include <OSPATH.h>
#include <OUNIT.h>
#include <OU_CARA.h>
#include <OU_CART.h>
#include <OU_MONS.h>
#include <OU_VEHI.h>
#include <OU_GOD.h>
#include <OB_HOMIN.h>
#include <OB_FLAME.h>
#include <OFIRM.h>
#include <OF_BASE.h>
#include <OF_CAMP.h>
#include <OF_FACT.h>
#include <OF_INN.h>
#include <OF_MARK.h>
#include <OF_MINE.h>
#include <OF_RESE.h>
#include <OF_WAR.h>
#include <OF_HARB.h>
#include <OF_MONS.h>
#include <OSITE.h>
#include <OTOWN.h>
#include <OGF_V1.h>
#include <OREBEL.h>
#include <ONATION.h>
#include <OSNOWG.h>
#include <OREGION.h>
#include <OREGIONS.h>
#include <ONEWS.h>
#include <OGAMHALL.h>
#include <OTALKRES.h>
#include <OFIRMRES.h>
#include <OTECHRES.h>
#include <OGODRES.h>
#include <PlayerStats.h>
#include <OROCK.h>
#include <OFIRMDIE.h>

#define LE_TYPES(X) \
	X(Game) X(Info) X(Power) X(Weather) X(MagicWeather) X(Location) \
	X(ResultNode) X(TeamInfo) \
	X(UnitCaravan) X(UnitExpCart) X(UnitMonster) X(UnitVehicle) X(UnitGod) \
	X(BulletHoming) X(BulletFlame) \
	X(Worker) X(FirmBase) X(FirmCamp) X(FirmFactory) X(FirmInn) X(FirmMarket) \
	X(FirmMine) X(FirmResearch) X(FirmWar) X(FirmHarbor) X(FirmMonster) \
	X(Site) X(Town) X(Version_1_Town) X(Rebel) X(ActionNode) \
	X(SnowGroundArray) X(RegionInfo) X(RegionStat) X(News) X(EmptyRoom) \
	X(HallFameEntry) X(TalkMsg) X(FirmInfo) X(TechClass) X(TechInfo) \
	X(GodInfo) X(nsPlayerStats::detail::RecordHeader) X(nsPlayerStats::detail::ScenStat) \
	X(Unit) X(Bullet) X(Firm) X(Rock) X(FirmDie)

#define SIZE(T) sizeof(T),
unsigned le_type_sizes[] = { LE_TYPES(SIZE) };
