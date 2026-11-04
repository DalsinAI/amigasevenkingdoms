/* Written by amiga/tools/gen_le_tables.py from clang's layout of
 * amiga/tools/le_types.cpp for 32-bit x86: where the numbers are in
 * the structures the game keeps as raw memory in its files. Do not
 * edit; run the tool again when a structure changes. */
#include <stddef.h>
#include <amiga_le.h>
#pragma GCC diagnostic ignored "-Winvalid-offsetof"
#define LE_TABLES_FROM_TOOL
#include "tools/le_types.cpp"

// Game: 2060 bytes on the PC
static_assert(sizeof(Game) == 2060, "Game is laid out differently on the 68k");
static_assert(offsetof(Game, init_flag) == 0, "Game::init_flag moved on the 68k");
static_assert(offsetof(Game, started_flag) == 1, "Game::started_flag moved on the 68k");
static_assert(offsetof(Game, game_mode) == 2, "Game::game_mode moved on the 68k");
static_assert(offsetof(Game, game_has_ended) == 3, "Game::game_has_ended moved on the 68k");
static_assert(offsetof(Game, color_remap_array) == 4, "Game::color_remap_array moved on the 68k");
static const LeRun le_runs_Game[] = {
	{ 0, 0, 0 },
};
const LeTable le_table_Game = { "Game", 2060, 0, le_runs_Game };

// Info: 1350 bytes on the PC
static_assert(sizeof(Info) == 1350, "Info is laid out differently on the 68k");
static_assert(offsetof(Info, game_start_date) == 0, "Info::game_start_date moved on the 68k");
static_assert(offsetof(Info, game_date) == 4, "Info::game_date moved on the 68k");
static_assert(offsetof(Info, game_day) == 8, "Info::game_day moved on the 68k");
static_assert(offsetof(Info, game_month) == 12, "Info::game_month moved on the 68k");
static_assert(offsetof(Info, game_year) == 16, "Info::game_year moved on the 68k");
static_assert(offsetof(Info, goal_deadline) == 20, "Info::goal_deadline moved on the 68k");
static_assert(offsetof(Info, goal_difficulty) == 24, "Info::goal_difficulty moved on the 68k");
static_assert(offsetof(Info, goal_score_bonus) == 26, "Info::goal_score_bonus moved on the 68k");
static_assert(offsetof(Info, week_day) == 28, "Info::week_day moved on the 68k");
static_assert(offsetof(Info, year_day) == 32, "Info::year_day moved on the 68k");
static_assert(offsetof(Info, year_passed) == 36, "Info::year_passed moved on the 68k");
static_assert(offsetof(Info, random_seed) == 40, "Info::random_seed moved on the 68k");
static_assert(offsetof(Info, start_play_time) == 44, "Info::start_play_time moved on the 68k");
static_assert(offsetof(Info, total_play_time) == 48, "Info::total_play_time moved on the 68k");
static_assert(offsetof(Info, viewing_nation_recno) == 52, "Info::viewing_nation_recno moved on the 68k");
static_assert(offsetof(Info, viewing_spy_recno) == 54, "Info::viewing_spy_recno moved on the 68k");
static_assert(offsetof(Info, default_viewing_nation_recno) == 56, "Info::default_viewing_nation_recno moved on the 68k");
static_assert(offsetof(Info, browse_nation_recno) == 58, "Info::browse_nation_recno moved on the 68k");
static_assert(offsetof(Info, browse_race_recno) == 60, "Info::browse_race_recno moved on the 68k");
static_assert(offsetof(Info, browse_firm_recno) == 62, "Info::browse_firm_recno moved on the 68k");
static_assert(offsetof(Info, browse_income_recno) == 64, "Info::browse_income_recno moved on the 68k");
static_assert(offsetof(Info, browse_expense_recno) == 66, "Info::browse_expense_recno moved on the 68k");
static_assert(offsetof(Info, browse_troop_recno) == 68, "Info::browse_troop_recno moved on the 68k");
static_assert(offsetof(Info, browse_unit_recno) == 70, "Info::browse_unit_recno moved on the 68k");
static_assert(offsetof(Info, browse_tech_recno) == 72, "Info::browse_tech_recno moved on the 68k");
static_assert(offsetof(Info, browse_god_recno) == 74, "Info::browse_god_recno moved on the 68k");
static_assert(offsetof(Info, browse_town_recno) == 76, "Info::browse_town_recno moved on the 68k");
static_assert(offsetof(Info, browse_spy_recno) == 78, "Info::browse_spy_recno moved on the 68k");
static_assert(offsetof(Info, browse_caravan_recno) == 80, "Info::browse_caravan_recno moved on the 68k");
static_assert(offsetof(Info, browse_ship_recno) == 82, "Info::browse_ship_recno moved on the 68k");
static_assert(offsetof(Info, browse_talk_msg_recno) == 84, "Info::browse_talk_msg_recno moved on the 68k");
static_assert(offsetof(Info, browse_news_recno) == 86, "Info::browse_news_recno moved on the 68k");
static_assert(offsetof(Info, browse_ai_action_recno) == 88, "Info::browse_ai_action_recno moved on the 68k");
static_assert(offsetof(Info, browse_ai_attack_recno) == 90, "Info::browse_ai_attack_recno moved on the 68k");
static_assert(offsetof(Info, nation_report_mode) == 92, "Info::nation_report_mode moved on the 68k");
static_assert(offsetof(Info, last_talk_nation_recno) == 93, "Info::last_talk_nation_recno moved on the 68k");
static_assert(offsetof(Info, player_reply_mode) == 95, "Info::player_reply_mode moved on the 68k");
static_assert(offsetof(Info, chat_receiver_type) == 96, "Info::chat_receiver_type moved on the 68k");
static_assert(offsetof(Info, player_chat_str) == 97, "Info::player_chat_str moved on the 68k");
static_assert(offsetof(Info, remote_chat_array) == 198, "Info::remote_chat_array moved on the 68k");
static_assert(offsetof(Info, last_write_offset) == 1258, "Info::last_write_offset moved on the 68k");
static_assert(offsetof(Info, info_background_bitmap) == 1259, "Info::info_background_bitmap moved on the 68k");
static_assert(offsetof(Info, report_array) == 1263, "Info::report_array moved on the 68k");
static_assert(offsetof(Info, report_array2) == 1292, "Info::report_array2 moved on the 68k");
static_assert(offsetof(Info, talk_msg_disp_array) == 1321, "Info::talk_msg_disp_array moved on the 68k");
static const LeRun le_runs_Info[] = {
	{ 0, 4, 6 },
	{ 24, 2, 2 },
	{ 28, 4, 6 },
	{ 52, 2, 20 },
	{ 93, 2, 1 },
	{ 198, 4, 1 },
	{ 304, 4, 1 },
	{ 410, 4, 1 },
	{ 516, 4, 1 },
	{ 622, 4, 1 },
	{ 728, 4, 1 },
	{ 834, 4, 1 },
	{ 940, 4, 1 },
	{ 1046, 4, 1 },
	{ 1152, 4, 1 },
	{ 1259, 4, 7 },
	{ 1288, 4, 7 },
	{ 1317, 4, 7 },
	{ 1346, 4, 1 },
};
const LeTable le_table_Info = { "Info", 1350, 19, le_runs_Info };

// Power: 34 bytes on the PC
static_assert(sizeof(Power) == 34, "Power is laid out differently on the 68k");
static_assert(offsetof(Power, command_id) == 0, "Power::command_id moved on the 68k");
static_assert(offsetof(Power, command_unit_recno) == 4, "Power::command_unit_recno moved on the 68k");
static_assert(offsetof(Power, command_para) == 8, "Power::command_para moved on the 68k");
static_assert(offsetof(Power, win_opened) == 12, "Power::win_opened moved on the 68k");
static_assert(offsetof(Power, enable_flag) == 13, "Power::enable_flag moved on the 68k");
static_assert(offsetof(Power, key_str_pos) == 14, "Power::key_str_pos moved on the 68k");
static const LeRun le_runs_Power[] = {
	{ 0, 4, 3 },
	{ 14, 4, 5 },
};
const LeTable le_table_Power = { "Power", 34, 2, le_runs_Power };

// Weather: 35 bytes on the PC
static_assert(sizeof(Weather) == 35, "Weather is laid out differently on the 68k");
static_assert(offsetof(Weather, seed) == 0, "Weather::seed moved on the 68k");
static_assert(offsetof(Weather, season_phase) == 4, "Weather::season_phase moved on the 68k");
static_assert(offsetof(Weather, day_to_quake) == 6, "Weather::day_to_quake moved on the 68k");
static_assert(offsetof(Weather, avg_temp) == 8, "Weather::avg_temp moved on the 68k");
static_assert(offsetof(Weather, temp_amp) == 10, "Weather::temp_amp moved on the 68k");
static_assert(offsetof(Weather, wind_spd) == 12, "Weather::wind_spd moved on the 68k");
static_assert(offsetof(Weather, high_wind_day) == 14, "Weather::high_wind_day moved on the 68k");
static_assert(offsetof(Weather, wind_dir) == 18, "Weather::wind_dir moved on the 68k");
static_assert(offsetof(Weather, windy_speed) == 20, "Weather::windy_speed moved on the 68k");
static_assert(offsetof(Weather, tornado_count) == 22, "Weather::tornado_count moved on the 68k");
static_assert(offsetof(Weather, cur_cloud_str) == 24, "Weather::cur_cloud_str moved on the 68k");
static_assert(offsetof(Weather, cur_cloud_len) == 25, "Weather::cur_cloud_len moved on the 68k");
static_assert(offsetof(Weather, cur_cloud_type) == 26, "Weather::cur_cloud_type moved on the 68k");
static_assert(offsetof(Weather, quake_frequency) == 27, "Weather::quake_frequency moved on the 68k");
static_assert(offsetof(Weather, quake_x) == 31, "Weather::quake_x moved on the 68k");
static_assert(offsetof(Weather, quake_y) == 33, "Weather::quake_y moved on the 68k");
static const LeRun le_runs_Weather[] = {
	{ 0, 4, 1 },
	{ 4, 2, 5 },
	{ 14, 4, 1 },
	{ 18, 2, 3 },
	{ 27, 4, 1 },
	{ 31, 2, 2 },
};
const LeTable le_table_Weather = { "Weather", 35, 6, le_runs_Weather };

// MagicWeather: 11 bytes on the PC
static_assert(sizeof(MagicWeather) == 11, "MagicWeather is laid out differently on the 68k");
static_assert(offsetof(MagicWeather, rain_str) == 0, "MagicWeather::rain_str moved on the 68k");
static_assert(offsetof(MagicWeather, wind_spd) == 1, "MagicWeather::wind_spd moved on the 68k");
static_assert(offsetof(MagicWeather, wind_dir) == 3, "MagicWeather::wind_dir moved on the 68k");
static_assert(offsetof(MagicWeather, rain_day) == 5, "MagicWeather::rain_day moved on the 68k");
static_assert(offsetof(MagicWeather, wind_day) == 7, "MagicWeather::wind_day moved on the 68k");
static_assert(offsetof(MagicWeather, lightning_day) == 9, "MagicWeather::lightning_day moved on the 68k");
static const LeRun le_runs_MagicWeather[] = {
	{ 1, 2, 5 },
};
const LeTable le_table_MagicWeather = { "MagicWeather", 11, 1, le_runs_MagicWeather };

// Location: 14 bytes on the PC
static_assert(sizeof(Location) == 14, "Location is laid out differently on the 68k");
static_assert(offsetof(Location, loc_flag) == 0, "Location::loc_flag moved on the 68k");
static_assert(offsetof(Location, terrain_id) == 2, "Location::terrain_id moved on the 68k");
static_assert(offsetof(Location, cargo_recno) == 4, "Location::cargo_recno moved on the 68k");
static_assert(offsetof(Location, air_cargo_recno) == 6, "Location::air_cargo_recno moved on the 68k");
static_assert(offsetof(Location, extra_para) == 8, "Location::extra_para moved on the 68k");
static_assert(offsetof(Location, fire_level) == 9, "Location::fire_level moved on the 68k");
static_assert(offsetof(Location, flammability) == 10, "Location::flammability moved on the 68k");
static_assert(offsetof(Location, power_nation_recno) == 11, "Location::power_nation_recno moved on the 68k");
static_assert(offsetof(Location, region_id) == 12, "Location::region_id moved on the 68k");
static_assert(offsetof(Location, visit_level) == 13, "Location::visit_level moved on the 68k");
static const LeRun le_runs_Location[] = {
	{ 0, 2, 4 },
};
const LeTable le_table_Location = { "Location", 14, 1, le_runs_Location };

// ResultNode: 4 bytes on the PC
static_assert(sizeof(ResultNode) == 4, "ResultNode is laid out differently on the 68k");
static_assert(offsetof(ResultNode, node_x) == 0, "ResultNode::node_x moved on the 68k");
static_assert(offsetof(ResultNode, node_y) == 2, "ResultNode::node_y moved on the 68k");
static const LeRun le_runs_ResultNode[] = {
	{ 0, 2, 2 },
};
const LeTable le_table_ResultNode = { "ResultNode", 4, 1, le_runs_ResultNode };

// TeamInfo: 23 bytes on the PC
static_assert(sizeof(TeamInfo) == 23, "TeamInfo is laid out differently on the 68k");
static_assert(offsetof(TeamInfo, member_count) == 0, "TeamInfo::member_count moved on the 68k");
static_assert(offsetof(TeamInfo, member_unit_array) == 1, "TeamInfo::member_unit_array moved on the 68k");
static_assert(offsetof(TeamInfo, ai_last_request_defense_date) == 19, "TeamInfo::ai_last_request_defense_date moved on the 68k");
static const LeRun le_runs_TeamInfo[] = {
	{ 1, 2, 9 },
	{ 19, 4, 1 },
};
const LeTable le_table_TeamInfo = { "TeamInfo", 23, 2, le_runs_TeamInfo };

// UnitCaravan: 241 bytes on the PC
static_assert(sizeof(UnitCaravan) == 241, "UnitCaravan is laid out differently on the 68k");
static_assert(offsetof(UnitCaravan, sprite_id) == 4, "UnitCaravan::sprite_id moved on the 68k");
static_assert(offsetof(UnitCaravan, sprite_recno) == 6, "UnitCaravan::sprite_recno moved on the 68k");
static_assert(offsetof(UnitCaravan, mobile_type) == 8, "UnitCaravan::mobile_type moved on the 68k");
static_assert(offsetof(UnitCaravan, cur_action) == 9, "UnitCaravan::cur_action moved on the 68k");
static_assert(offsetof(UnitCaravan, cur_dir) == 10, "UnitCaravan::cur_dir moved on the 68k");
static_assert(offsetof(UnitCaravan, cur_frame) == 11, "UnitCaravan::cur_frame moved on the 68k");
static_assert(offsetof(UnitCaravan, cur_attack) == 12, "UnitCaravan::cur_attack moved on the 68k");
static_assert(offsetof(UnitCaravan, final_dir) == 13, "UnitCaravan::final_dir moved on the 68k");
static_assert(offsetof(UnitCaravan, turn_delay) == 14, "UnitCaravan::turn_delay moved on the 68k");
static_assert(offsetof(UnitCaravan, guard_count) == 15, "UnitCaravan::guard_count moved on the 68k");
static_assert(offsetof(UnitCaravan, remain_attack_delay) == 16, "UnitCaravan::remain_attack_delay moved on the 68k");
static_assert(offsetof(UnitCaravan, remain_frames_per_step) == 17, "UnitCaravan::remain_frames_per_step moved on the 68k");
static_assert(offsetof(UnitCaravan, cur_x) == 18, "UnitCaravan::cur_x moved on the 68k");
static_assert(offsetof(UnitCaravan, cur_y) == 20, "UnitCaravan::cur_y moved on the 68k");
static_assert(offsetof(UnitCaravan, go_x) == 22, "UnitCaravan::go_x moved on the 68k");
static_assert(offsetof(UnitCaravan, go_y) == 24, "UnitCaravan::go_y moved on the 68k");
static_assert(offsetof(UnitCaravan, next_x) == 26, "UnitCaravan::next_x moved on the 68k");
static_assert(offsetof(UnitCaravan, next_y) == 28, "UnitCaravan::next_y moved on the 68k");
static_assert(offsetof(UnitCaravan, sprite_info) == 30, "UnitCaravan::sprite_info moved on the 68k");
static_assert(offsetof(UnitCaravan, caravan_id) == 169, "UnitCaravan::caravan_id moved on the 68k");
static_assert(offsetof(UnitCaravan, journey_status) == 171, "UnitCaravan::journey_status moved on the 68k");
static_assert(offsetof(UnitCaravan, dest_stop_id) == 172, "UnitCaravan::dest_stop_id moved on the 68k");
static_assert(offsetof(UnitCaravan, stop_defined_num) == 173, "UnitCaravan::stop_defined_num moved on the 68k");
static_assert(offsetof(UnitCaravan, wait_count) == 174, "UnitCaravan::wait_count moved on the 68k");
static_assert(offsetof(UnitCaravan, stop_x_loc) == 175, "UnitCaravan::stop_x_loc moved on the 68k");
static_assert(offsetof(UnitCaravan, stop_y_loc) == 177, "UnitCaravan::stop_y_loc moved on the 68k");
static_assert(offsetof(UnitCaravan, stop_array) == 179, "UnitCaravan::stop_array moved on the 68k");
static_assert(offsetof(UnitCaravan, last_set_stop_date) == 221, "UnitCaravan::last_set_stop_date moved on the 68k");
static_assert(offsetof(UnitCaravan, last_load_goods_date) == 225, "UnitCaravan::last_load_goods_date moved on the 68k");
static_assert(offsetof(UnitCaravan, raw_qty_array) == 229, "UnitCaravan::raw_qty_array moved on the 68k");
static_assert(offsetof(UnitCaravan, product_raw_qty_array) == 235, "UnitCaravan::product_raw_qty_array moved on the 68k");
static const LeRun le_runs_UnitCaravan[] = {
	{ 4, 2, 2 },
	{ 18, 2, 6 },
	{ 30, 4, 1 },
	{ 39, 2, 1 },
	{ 41, 4, 2 },
	{ 54, 2, 1 },
	{ 57, 2, 1 },
	{ 60, 2, 3 },
	{ 67, 2, 3 },
	{ 78, 2, 4 },
	{ 88, 4, 1 },
	{ 92, 2, 1 },
	{ 101, 2, 4 },
	{ 109, 4, 1 },
	{ 115, 2, 2 },
	{ 119, 4, 2 },
	{ 127, 2, 2 },
	{ 131, 4, 1 },
	{ 135, 2, 3 },
	{ 142, 2, 7 },
	{ 160, 2, 1 },
	{ 165, 4, 1 },
	{ 169, 2, 1 },
	{ 175, 2, 5 },
	{ 193, 2, 3 },
	{ 207, 2, 3 },
	{ 221, 4, 2 },
	{ 229, 2, 6 },
};
const LeTable le_table_UnitCaravan = { "UnitCaravan", 241, 28, le_runs_UnitCaravan };

// UnitExpCart: 170 bytes on the PC
static_assert(sizeof(UnitExpCart) == 170, "UnitExpCart is laid out differently on the 68k");
static_assert(offsetof(UnitExpCart, sprite_id) == 4, "UnitExpCart::sprite_id moved on the 68k");
static_assert(offsetof(UnitExpCart, sprite_recno) == 6, "UnitExpCart::sprite_recno moved on the 68k");
static_assert(offsetof(UnitExpCart, mobile_type) == 8, "UnitExpCart::mobile_type moved on the 68k");
static_assert(offsetof(UnitExpCart, cur_action) == 9, "UnitExpCart::cur_action moved on the 68k");
static_assert(offsetof(UnitExpCart, cur_dir) == 10, "UnitExpCart::cur_dir moved on the 68k");
static_assert(offsetof(UnitExpCart, cur_frame) == 11, "UnitExpCart::cur_frame moved on the 68k");
static_assert(offsetof(UnitExpCart, cur_attack) == 12, "UnitExpCart::cur_attack moved on the 68k");
static_assert(offsetof(UnitExpCart, final_dir) == 13, "UnitExpCart::final_dir moved on the 68k");
static_assert(offsetof(UnitExpCart, turn_delay) == 14, "UnitExpCart::turn_delay moved on the 68k");
static_assert(offsetof(UnitExpCart, guard_count) == 15, "UnitExpCart::guard_count moved on the 68k");
static_assert(offsetof(UnitExpCart, remain_attack_delay) == 16, "UnitExpCart::remain_attack_delay moved on the 68k");
static_assert(offsetof(UnitExpCart, remain_frames_per_step) == 17, "UnitExpCart::remain_frames_per_step moved on the 68k");
static_assert(offsetof(UnitExpCart, cur_x) == 18, "UnitExpCart::cur_x moved on the 68k");
static_assert(offsetof(UnitExpCart, cur_y) == 20, "UnitExpCart::cur_y moved on the 68k");
static_assert(offsetof(UnitExpCart, go_x) == 22, "UnitExpCart::go_x moved on the 68k");
static_assert(offsetof(UnitExpCart, go_y) == 24, "UnitExpCart::go_y moved on the 68k");
static_assert(offsetof(UnitExpCart, next_x) == 26, "UnitExpCart::next_x moved on the 68k");
static_assert(offsetof(UnitExpCart, next_y) == 28, "UnitExpCart::next_y moved on the 68k");
static_assert(offsetof(UnitExpCart, sprite_info) == 30, "UnitExpCart::sprite_info moved on the 68k");
static_assert(offsetof(UnitExpCart, triggered) == 169, "UnitExpCart::triggered moved on the 68k");
static const LeRun le_runs_UnitExpCart[] = {
	{ 4, 2, 2 },
	{ 18, 2, 6 },
	{ 30, 4, 1 },
	{ 39, 2, 1 },
	{ 41, 4, 2 },
	{ 54, 2, 1 },
	{ 57, 2, 1 },
	{ 60, 2, 3 },
	{ 67, 2, 3 },
	{ 78, 2, 4 },
	{ 88, 4, 1 },
	{ 92, 2, 1 },
	{ 101, 2, 4 },
	{ 109, 4, 1 },
	{ 115, 2, 2 },
	{ 119, 4, 2 },
	{ 127, 2, 2 },
	{ 131, 4, 1 },
	{ 135, 2, 3 },
	{ 142, 2, 7 },
	{ 160, 2, 1 },
	{ 165, 4, 1 },
};
const LeTable le_table_UnitExpCart = { "UnitExpCart", 170, 22, le_runs_UnitExpCart };

// UnitMonster: 170 bytes on the PC
static_assert(sizeof(UnitMonster) == 170, "UnitMonster is laid out differently on the 68k");
static_assert(offsetof(UnitMonster, sprite_id) == 4, "UnitMonster::sprite_id moved on the 68k");
static_assert(offsetof(UnitMonster, sprite_recno) == 6, "UnitMonster::sprite_recno moved on the 68k");
static_assert(offsetof(UnitMonster, mobile_type) == 8, "UnitMonster::mobile_type moved on the 68k");
static_assert(offsetof(UnitMonster, cur_action) == 9, "UnitMonster::cur_action moved on the 68k");
static_assert(offsetof(UnitMonster, cur_dir) == 10, "UnitMonster::cur_dir moved on the 68k");
static_assert(offsetof(UnitMonster, cur_frame) == 11, "UnitMonster::cur_frame moved on the 68k");
static_assert(offsetof(UnitMonster, cur_attack) == 12, "UnitMonster::cur_attack moved on the 68k");
static_assert(offsetof(UnitMonster, final_dir) == 13, "UnitMonster::final_dir moved on the 68k");
static_assert(offsetof(UnitMonster, turn_delay) == 14, "UnitMonster::turn_delay moved on the 68k");
static_assert(offsetof(UnitMonster, guard_count) == 15, "UnitMonster::guard_count moved on the 68k");
static_assert(offsetof(UnitMonster, remain_attack_delay) == 16, "UnitMonster::remain_attack_delay moved on the 68k");
static_assert(offsetof(UnitMonster, remain_frames_per_step) == 17, "UnitMonster::remain_frames_per_step moved on the 68k");
static_assert(offsetof(UnitMonster, cur_x) == 18, "UnitMonster::cur_x moved on the 68k");
static_assert(offsetof(UnitMonster, cur_y) == 20, "UnitMonster::cur_y moved on the 68k");
static_assert(offsetof(UnitMonster, go_x) == 22, "UnitMonster::go_x moved on the 68k");
static_assert(offsetof(UnitMonster, go_y) == 24, "UnitMonster::go_y moved on the 68k");
static_assert(offsetof(UnitMonster, next_x) == 26, "UnitMonster::next_x moved on the 68k");
static_assert(offsetof(UnitMonster, next_y) == 28, "UnitMonster::next_y moved on the 68k");
static_assert(offsetof(UnitMonster, sprite_info) == 30, "UnitMonster::sprite_info moved on the 68k");
static_assert(offsetof(UnitMonster, monster_action_mode) == 169, "UnitMonster::monster_action_mode moved on the 68k");
static const LeRun le_runs_UnitMonster[] = {
	{ 4, 2, 2 },
	{ 18, 2, 6 },
	{ 30, 4, 1 },
	{ 39, 2, 1 },
	{ 41, 4, 2 },
	{ 54, 2, 1 },
	{ 57, 2, 1 },
	{ 60, 2, 3 },
	{ 67, 2, 3 },
	{ 78, 2, 4 },
	{ 88, 4, 1 },
	{ 92, 2, 1 },
	{ 101, 2, 4 },
	{ 109, 4, 1 },
	{ 115, 2, 2 },
	{ 119, 4, 2 },
	{ 127, 2, 2 },
	{ 131, 4, 1 },
	{ 135, 2, 3 },
	{ 142, 2, 7 },
	{ 160, 2, 1 },
	{ 165, 4, 1 },
};
const LeTable le_table_UnitMonster = { "UnitMonster", 170, 22, le_runs_UnitMonster };

// UnitVehicle: 173 bytes on the PC
static_assert(sizeof(UnitVehicle) == 173, "UnitVehicle is laid out differently on the 68k");
static_assert(offsetof(UnitVehicle, sprite_id) == 4, "UnitVehicle::sprite_id moved on the 68k");
static_assert(offsetof(UnitVehicle, sprite_recno) == 6, "UnitVehicle::sprite_recno moved on the 68k");
static_assert(offsetof(UnitVehicle, mobile_type) == 8, "UnitVehicle::mobile_type moved on the 68k");
static_assert(offsetof(UnitVehicle, cur_action) == 9, "UnitVehicle::cur_action moved on the 68k");
static_assert(offsetof(UnitVehicle, cur_dir) == 10, "UnitVehicle::cur_dir moved on the 68k");
static_assert(offsetof(UnitVehicle, cur_frame) == 11, "UnitVehicle::cur_frame moved on the 68k");
static_assert(offsetof(UnitVehicle, cur_attack) == 12, "UnitVehicle::cur_attack moved on the 68k");
static_assert(offsetof(UnitVehicle, final_dir) == 13, "UnitVehicle::final_dir moved on the 68k");
static_assert(offsetof(UnitVehicle, turn_delay) == 14, "UnitVehicle::turn_delay moved on the 68k");
static_assert(offsetof(UnitVehicle, guard_count) == 15, "UnitVehicle::guard_count moved on the 68k");
static_assert(offsetof(UnitVehicle, remain_attack_delay) == 16, "UnitVehicle::remain_attack_delay moved on the 68k");
static_assert(offsetof(UnitVehicle, remain_frames_per_step) == 17, "UnitVehicle::remain_frames_per_step moved on the 68k");
static_assert(offsetof(UnitVehicle, cur_x) == 18, "UnitVehicle::cur_x moved on the 68k");
static_assert(offsetof(UnitVehicle, cur_y) == 20, "UnitVehicle::cur_y moved on the 68k");
static_assert(offsetof(UnitVehicle, go_x) == 22, "UnitVehicle::go_x moved on the 68k");
static_assert(offsetof(UnitVehicle, go_y) == 24, "UnitVehicle::go_y moved on the 68k");
static_assert(offsetof(UnitVehicle, next_x) == 26, "UnitVehicle::next_x moved on the 68k");
static_assert(offsetof(UnitVehicle, next_y) == 28, "UnitVehicle::next_y moved on the 68k");
static_assert(offsetof(UnitVehicle, sprite_info) == 30, "UnitVehicle::sprite_info moved on the 68k");
static_assert(offsetof(UnitVehicle, solider_hit_points) == 169, "UnitVehicle::solider_hit_points moved on the 68k");
static_assert(offsetof(UnitVehicle, vehicle_hit_points) == 171, "UnitVehicle::vehicle_hit_points moved on the 68k");
static const LeRun le_runs_UnitVehicle[] = {
	{ 4, 2, 2 },
	{ 18, 2, 6 },
	{ 30, 4, 1 },
	{ 39, 2, 1 },
	{ 41, 4, 2 },
	{ 54, 2, 1 },
	{ 57, 2, 1 },
	{ 60, 2, 3 },
	{ 67, 2, 3 },
	{ 78, 2, 4 },
	{ 88, 4, 1 },
	{ 92, 2, 1 },
	{ 101, 2, 4 },
	{ 109, 4, 1 },
	{ 115, 2, 2 },
	{ 119, 4, 2 },
	{ 127, 2, 2 },
	{ 131, 4, 1 },
	{ 135, 2, 3 },
	{ 142, 2, 7 },
	{ 160, 2, 1 },
	{ 165, 4, 1 },
	{ 169, 2, 2 },
};
const LeTable le_table_UnitVehicle = { "UnitVehicle", 173, 23, le_runs_UnitVehicle };

// UnitGod: 182 bytes on the PC
static_assert(sizeof(UnitGod) == 182, "UnitGod is laid out differently on the 68k");
static_assert(offsetof(UnitGod, sprite_id) == 4, "UnitGod::sprite_id moved on the 68k");
static_assert(offsetof(UnitGod, sprite_recno) == 6, "UnitGod::sprite_recno moved on the 68k");
static_assert(offsetof(UnitGod, mobile_type) == 8, "UnitGod::mobile_type moved on the 68k");
static_assert(offsetof(UnitGod, cur_action) == 9, "UnitGod::cur_action moved on the 68k");
static_assert(offsetof(UnitGod, cur_dir) == 10, "UnitGod::cur_dir moved on the 68k");
static_assert(offsetof(UnitGod, cur_frame) == 11, "UnitGod::cur_frame moved on the 68k");
static_assert(offsetof(UnitGod, cur_attack) == 12, "UnitGod::cur_attack moved on the 68k");
static_assert(offsetof(UnitGod, final_dir) == 13, "UnitGod::final_dir moved on the 68k");
static_assert(offsetof(UnitGod, turn_delay) == 14, "UnitGod::turn_delay moved on the 68k");
static_assert(offsetof(UnitGod, guard_count) == 15, "UnitGod::guard_count moved on the 68k");
static_assert(offsetof(UnitGod, remain_attack_delay) == 16, "UnitGod::remain_attack_delay moved on the 68k");
static_assert(offsetof(UnitGod, remain_frames_per_step) == 17, "UnitGod::remain_frames_per_step moved on the 68k");
static_assert(offsetof(UnitGod, cur_x) == 18, "UnitGod::cur_x moved on the 68k");
static_assert(offsetof(UnitGod, cur_y) == 20, "UnitGod::cur_y moved on the 68k");
static_assert(offsetof(UnitGod, go_x) == 22, "UnitGod::go_x moved on the 68k");
static_assert(offsetof(UnitGod, go_y) == 24, "UnitGod::go_y moved on the 68k");
static_assert(offsetof(UnitGod, next_x) == 26, "UnitGod::next_x moved on the 68k");
static_assert(offsetof(UnitGod, next_y) == 28, "UnitGod::next_y moved on the 68k");
static_assert(offsetof(UnitGod, sprite_info) == 30, "UnitGod::sprite_info moved on the 68k");
static_assert(offsetof(UnitGod, god_id) == 169, "UnitGod::god_id moved on the 68k");
static_assert(offsetof(UnitGod, base_firm_recno) == 171, "UnitGod::base_firm_recno moved on the 68k");
static_assert(offsetof(UnitGod, cast_power_type) == 173, "UnitGod::cast_power_type moved on the 68k");
static_assert(offsetof(UnitGod, cast_origin_x) == 174, "UnitGod::cast_origin_x moved on the 68k");
static_assert(offsetof(UnitGod, cast_origin_y) == 176, "UnitGod::cast_origin_y moved on the 68k");
static_assert(offsetof(UnitGod, cast_target_x) == 178, "UnitGod::cast_target_x moved on the 68k");
static_assert(offsetof(UnitGod, cast_target_y) == 180, "UnitGod::cast_target_y moved on the 68k");
static const LeRun le_runs_UnitGod[] = {
	{ 4, 2, 2 },
	{ 18, 2, 6 },
	{ 30, 4, 1 },
	{ 39, 2, 1 },
	{ 41, 4, 2 },
	{ 54, 2, 1 },
	{ 57, 2, 1 },
	{ 60, 2, 3 },
	{ 67, 2, 3 },
	{ 78, 2, 4 },
	{ 88, 4, 1 },
	{ 92, 2, 1 },
	{ 101, 2, 4 },
	{ 109, 4, 1 },
	{ 115, 2, 2 },
	{ 119, 4, 2 },
	{ 127, 2, 2 },
	{ 131, 4, 1 },
	{ 135, 2, 3 },
	{ 142, 2, 7 },
	{ 160, 2, 1 },
	{ 165, 4, 1 },
	{ 169, 2, 2 },
	{ 174, 2, 4 },
};
const LeTable le_table_UnitGod = { "UnitGod", 182, 24, le_runs_UnitGod };

// BulletHoming: 67 bytes on the PC
static_assert(sizeof(BulletHoming) == 67, "BulletHoming is laid out differently on the 68k");
static_assert(offsetof(BulletHoming, sprite_id) == 4, "BulletHoming::sprite_id moved on the 68k");
static_assert(offsetof(BulletHoming, sprite_recno) == 6, "BulletHoming::sprite_recno moved on the 68k");
static_assert(offsetof(BulletHoming, mobile_type) == 8, "BulletHoming::mobile_type moved on the 68k");
static_assert(offsetof(BulletHoming, cur_action) == 9, "BulletHoming::cur_action moved on the 68k");
static_assert(offsetof(BulletHoming, cur_dir) == 10, "BulletHoming::cur_dir moved on the 68k");
static_assert(offsetof(BulletHoming, cur_frame) == 11, "BulletHoming::cur_frame moved on the 68k");
static_assert(offsetof(BulletHoming, cur_attack) == 12, "BulletHoming::cur_attack moved on the 68k");
static_assert(offsetof(BulletHoming, final_dir) == 13, "BulletHoming::final_dir moved on the 68k");
static_assert(offsetof(BulletHoming, turn_delay) == 14, "BulletHoming::turn_delay moved on the 68k");
static_assert(offsetof(BulletHoming, guard_count) == 15, "BulletHoming::guard_count moved on the 68k");
static_assert(offsetof(BulletHoming, remain_attack_delay) == 16, "BulletHoming::remain_attack_delay moved on the 68k");
static_assert(offsetof(BulletHoming, remain_frames_per_step) == 17, "BulletHoming::remain_frames_per_step moved on the 68k");
static_assert(offsetof(BulletHoming, cur_x) == 18, "BulletHoming::cur_x moved on the 68k");
static_assert(offsetof(BulletHoming, cur_y) == 20, "BulletHoming::cur_y moved on the 68k");
static_assert(offsetof(BulletHoming, go_x) == 22, "BulletHoming::go_x moved on the 68k");
static_assert(offsetof(BulletHoming, go_y) == 24, "BulletHoming::go_y moved on the 68k");
static_assert(offsetof(BulletHoming, next_x) == 26, "BulletHoming::next_x moved on the 68k");
static_assert(offsetof(BulletHoming, next_y) == 28, "BulletHoming::next_y moved on the 68k");
static_assert(offsetof(BulletHoming, sprite_info) == 30, "BulletHoming::sprite_info moved on the 68k");
static_assert(offsetof(BulletHoming, max_step) == 57, "BulletHoming::max_step moved on the 68k");
static_assert(offsetof(BulletHoming, target_type) == 58, "BulletHoming::target_type moved on the 68k");
static_assert(offsetof(BulletHoming, target_recno) == 59, "BulletHoming::target_recno moved on the 68k");
static_assert(offsetof(BulletHoming, speed) == 61, "BulletHoming::speed moved on the 68k");
static_assert(offsetof(BulletHoming, origin2_x) == 63, "BulletHoming::origin2_x moved on the 68k");
static_assert(offsetof(BulletHoming, origin2_y) == 65, "BulletHoming::origin2_y moved on the 68k");
static const LeRun le_runs_BulletHoming[] = {
	{ 4, 2, 2 },
	{ 18, 2, 6 },
	{ 30, 4, 1 },
	{ 35, 2, 1 },
	{ 38, 4, 1 },
	{ 42, 2, 2 },
	{ 47, 2, 4 },
	{ 59, 2, 4 },
};
const LeTable le_table_BulletHoming = { "BulletHoming", 67, 8, le_runs_BulletHoming };

// BulletFlame: 57 bytes on the PC
static_assert(sizeof(BulletFlame) == 57, "BulletFlame is laid out differently on the 68k");
static_assert(offsetof(BulletFlame, sprite_id) == 4, "BulletFlame::sprite_id moved on the 68k");
static_assert(offsetof(BulletFlame, sprite_recno) == 6, "BulletFlame::sprite_recno moved on the 68k");
static_assert(offsetof(BulletFlame, mobile_type) == 8, "BulletFlame::mobile_type moved on the 68k");
static_assert(offsetof(BulletFlame, cur_action) == 9, "BulletFlame::cur_action moved on the 68k");
static_assert(offsetof(BulletFlame, cur_dir) == 10, "BulletFlame::cur_dir moved on the 68k");
static_assert(offsetof(BulletFlame, cur_frame) == 11, "BulletFlame::cur_frame moved on the 68k");
static_assert(offsetof(BulletFlame, cur_attack) == 12, "BulletFlame::cur_attack moved on the 68k");
static_assert(offsetof(BulletFlame, final_dir) == 13, "BulletFlame::final_dir moved on the 68k");
static_assert(offsetof(BulletFlame, turn_delay) == 14, "BulletFlame::turn_delay moved on the 68k");
static_assert(offsetof(BulletFlame, guard_count) == 15, "BulletFlame::guard_count moved on the 68k");
static_assert(offsetof(BulletFlame, remain_attack_delay) == 16, "BulletFlame::remain_attack_delay moved on the 68k");
static_assert(offsetof(BulletFlame, remain_frames_per_step) == 17, "BulletFlame::remain_frames_per_step moved on the 68k");
static_assert(offsetof(BulletFlame, cur_x) == 18, "BulletFlame::cur_x moved on the 68k");
static_assert(offsetof(BulletFlame, cur_y) == 20, "BulletFlame::cur_y moved on the 68k");
static_assert(offsetof(BulletFlame, go_x) == 22, "BulletFlame::go_x moved on the 68k");
static_assert(offsetof(BulletFlame, go_y) == 24, "BulletFlame::go_y moved on the 68k");
static_assert(offsetof(BulletFlame, next_x) == 26, "BulletFlame::next_x moved on the 68k");
static_assert(offsetof(BulletFlame, next_y) == 28, "BulletFlame::next_y moved on the 68k");
static_assert(offsetof(BulletFlame, sprite_info) == 30, "BulletFlame::sprite_info moved on the 68k");
static const LeRun le_runs_BulletFlame[] = {
	{ 4, 2, 2 },
	{ 18, 2, 6 },
	{ 30, 4, 1 },
	{ 35, 2, 1 },
	{ 38, 4, 1 },
	{ 42, 2, 2 },
	{ 47, 2, 4 },
};
const LeTable le_table_BulletFlame = { "BulletFlame", 57, 7, le_runs_BulletFlame };

// Worker: 20 bytes on the PC
static_assert(sizeof(Worker) == 20, "Worker is laid out differently on the 68k");
static_assert(offsetof(Worker, race_id) == 0, "Worker::race_id moved on the 68k");
static_assert(offsetof(Worker, unit_id) == 1, "Worker::unit_id moved on the 68k");
static_assert(offsetof(Worker, town_recno) == 2, "Worker::town_recno moved on the 68k");
static_assert(offsetof(Worker, name_id) == 4, "Worker::name_id moved on the 68k");
static_assert(offsetof(Worker, skill_id) == 6, "Worker::skill_id moved on the 68k");
static_assert(offsetof(Worker, skill_level) == 7, "Worker::skill_level moved on the 68k");
static_assert(offsetof(Worker, skill_level_minor) == 8, "Worker::skill_level_minor moved on the 68k");
static_assert(offsetof(Worker, skill_potential) == 9, "Worker::skill_potential moved on the 68k");
static_assert(offsetof(Worker, combat_level) == 10, "Worker::combat_level moved on the 68k");
static_assert(offsetof(Worker, combat_level_minor) == 11, "Worker::combat_level_minor moved on the 68k");
static_assert(offsetof(Worker, spy_recno) == 12, "Worker::spy_recno moved on the 68k");
static_assert(offsetof(Worker, rank_id) == 14, "Worker::rank_id moved on the 68k");
static_assert(offsetof(Worker, worker_loyalty) == 15, "Worker::worker_loyalty moved on the 68k");
static_assert(offsetof(Worker, hit_points) == 16, "Worker::hit_points moved on the 68k");
static_assert(offsetof(Worker, extra_para) == 18, "Worker::extra_para moved on the 68k");
static const LeRun le_runs_Worker[] = {
	{ 2, 2, 2 },
	{ 12, 2, 1 },
	{ 16, 2, 2 },
};
const LeTable le_table_Worker = { "Worker", 20, 3, le_runs_Worker };

// FirmBase: 262 bytes on the PC
static_assert(sizeof(FirmBase) == 262, "FirmBase is laid out differently on the 68k");
static_assert(offsetof(FirmBase, firm_id) == 4, "FirmBase::firm_id moved on the 68k");
static_assert(offsetof(FirmBase, firm_build_id) == 5, "FirmBase::firm_build_id moved on the 68k");
static_assert(offsetof(FirmBase, firm_recno) == 7, "FirmBase::firm_recno moved on the 68k");
static_assert(offsetof(FirmBase, firm_ai) == 9, "FirmBase::firm_ai moved on the 68k");
static_assert(offsetof(FirmBase, ai_processed) == 10, "FirmBase::ai_processed moved on the 68k");
static_assert(offsetof(FirmBase, ai_status) == 11, "FirmBase::ai_status moved on the 68k");
static_assert(offsetof(FirmBase, ai_link_checked) == 12, "FirmBase::ai_link_checked moved on the 68k");
static_assert(offsetof(FirmBase, ai_sell_flag) == 13, "FirmBase::ai_sell_flag moved on the 68k");
static_assert(offsetof(FirmBase, race_id) == 14, "FirmBase::race_id moved on the 68k");
static_assert(offsetof(FirmBase, nation_recno) == 15, "FirmBase::nation_recno moved on the 68k");
static_assert(offsetof(FirmBase, closest_town_name_id) == 17, "FirmBase::closest_town_name_id moved on the 68k");
static_assert(offsetof(FirmBase, firm_name_instance_id) == 19, "FirmBase::firm_name_instance_id moved on the 68k");
static_assert(offsetof(FirmBase, loc_x1) == 21, "FirmBase::loc_x1 moved on the 68k");
static_assert(offsetof(FirmBase, loc_y1) == 23, "FirmBase::loc_y1 moved on the 68k");
static_assert(offsetof(FirmBase, loc_x2) == 25, "FirmBase::loc_x2 moved on the 68k");
static_assert(offsetof(FirmBase, loc_y2) == 27, "FirmBase::loc_y2 moved on the 68k");
static_assert(offsetof(FirmBase, abs_x1) == 29, "FirmBase::abs_x1 moved on the 68k");
static_assert(offsetof(FirmBase, abs_y1) == 31, "FirmBase::abs_y1 moved on the 68k");
static_assert(offsetof(FirmBase, abs_x2) == 33, "FirmBase::abs_x2 moved on the 68k");
static_assert(offsetof(FirmBase, abs_y2) == 35, "FirmBase::abs_y2 moved on the 68k");
static_assert(offsetof(FirmBase, center_x) == 37, "FirmBase::center_x moved on the 68k");
static_assert(offsetof(FirmBase, center_y) == 39, "FirmBase::center_y moved on the 68k");
static_assert(offsetof(FirmBase, region_id) == 41, "FirmBase::region_id moved on the 68k");
static_assert(offsetof(FirmBase, cur_frame) == 42, "FirmBase::cur_frame moved on the 68k");
static_assert(offsetof(FirmBase, remain_frame_delay) == 43, "FirmBase::remain_frame_delay moved on the 68k");
static_assert(offsetof(FirmBase, hit_points) == 44, "FirmBase::hit_points moved on the 68k");
static_assert(offsetof(FirmBase, max_hit_points) == 48, "FirmBase::max_hit_points moved on the 68k");
static_assert(offsetof(FirmBase, under_construction) == 52, "FirmBase::under_construction moved on the 68k");
static_assert(offsetof(FirmBase, firm_skill_id) == 53, "FirmBase::firm_skill_id moved on the 68k");
static_assert(offsetof(FirmBase, overseer_recno) == 54, "FirmBase::overseer_recno moved on the 68k");
static_assert(offsetof(FirmBase, overseer_town_recno) == 56, "FirmBase::overseer_town_recno moved on the 68k");
static_assert(offsetof(FirmBase, builder_recno) == 58, "FirmBase::builder_recno moved on the 68k");
static_assert(offsetof(FirmBase, builder_region_id) == 60, "FirmBase::builder_region_id moved on the 68k");
static_assert(offsetof(FirmBase, productivity) == 61, "FirmBase::productivity moved on the 68k");
static_assert(offsetof(FirmBase, worker_array) == 65, "FirmBase::worker_array moved on the 68k");
static_assert(offsetof(FirmBase, worker_count) == 69, "FirmBase::worker_count moved on the 68k");
static_assert(offsetof(FirmBase, selected_worker_id) == 70, "FirmBase::selected_worker_id moved on the 68k");
static_assert(offsetof(FirmBase, player_spy_count) == 71, "FirmBase::player_spy_count moved on the 68k");
static_assert(offsetof(FirmBase, sabotage_level) == 72, "FirmBase::sabotage_level moved on the 68k");
static_assert(offsetof(FirmBase, linked_firm_count) == 73, "FirmBase::linked_firm_count moved on the 68k");
static_assert(offsetof(FirmBase, linked_town_count) == 74, "FirmBase::linked_town_count moved on the 68k");
static_assert(offsetof(FirmBase, linked_firm_array) == 75, "FirmBase::linked_firm_array moved on the 68k");
static_assert(offsetof(FirmBase, linked_town_array) == 121, "FirmBase::linked_town_array moved on the 68k");
static_assert(offsetof(FirmBase, linked_firm_enable_array) == 181, "FirmBase::linked_firm_enable_array moved on the 68k");
static_assert(offsetof(FirmBase, linked_town_enable_array) == 204, "FirmBase::linked_town_enable_array moved on the 68k");
static_assert(offsetof(FirmBase, last_year_income) == 234, "FirmBase::last_year_income moved on the 68k");
static_assert(offsetof(FirmBase, cur_year_income) == 238, "FirmBase::cur_year_income moved on the 68k");
static_assert(offsetof(FirmBase, setup_date) == 242, "FirmBase::setup_date moved on the 68k");
static_assert(offsetof(FirmBase, should_set_power) == 246, "FirmBase::should_set_power moved on the 68k");
static_assert(offsetof(FirmBase, last_attacked_date) == 247, "FirmBase::last_attacked_date moved on the 68k");
static_assert(offsetof(FirmBase, should_close_flag) == 251, "FirmBase::should_close_flag moved on the 68k");
static_assert(offsetof(FirmBase, no_neighbor_space) == 252, "FirmBase::no_neighbor_space moved on the 68k");
static_assert(offsetof(FirmBase, ai_should_build_factory_count) == 253, "FirmBase::ai_should_build_factory_count moved on the 68k");
static_assert(offsetof(FirmBase, god_id) == 254, "FirmBase::god_id moved on the 68k");
static_assert(offsetof(FirmBase, god_unit_recno) == 256, "FirmBase::god_unit_recno moved on the 68k");
static_assert(offsetof(FirmBase, pray_points) == 258, "FirmBase::pray_points moved on the 68k");
static const LeRun le_runs_FirmBase[] = {
	{ 5, 2, 2 },
	{ 15, 2, 13 },
	{ 44, 4, 2 },
	{ 54, 2, 3 },
	{ 61, 4, 2 },
	{ 75, 2, 53 },
	{ 234, 4, 3 },
	{ 247, 4, 1 },
	{ 254, 2, 2 },
	{ 258, 4, 1 },
};
const LeTable le_table_FirmBase = { "FirmBase", 262, 10, le_runs_FirmBase };

// FirmCamp: 327 bytes on the PC
static_assert(sizeof(FirmCamp) == 327, "FirmCamp is laid out differently on the 68k");
static_assert(offsetof(FirmCamp, firm_id) == 4, "FirmCamp::firm_id moved on the 68k");
static_assert(offsetof(FirmCamp, firm_build_id) == 5, "FirmCamp::firm_build_id moved on the 68k");
static_assert(offsetof(FirmCamp, firm_recno) == 7, "FirmCamp::firm_recno moved on the 68k");
static_assert(offsetof(FirmCamp, firm_ai) == 9, "FirmCamp::firm_ai moved on the 68k");
static_assert(offsetof(FirmCamp, ai_processed) == 10, "FirmCamp::ai_processed moved on the 68k");
static_assert(offsetof(FirmCamp, ai_status) == 11, "FirmCamp::ai_status moved on the 68k");
static_assert(offsetof(FirmCamp, ai_link_checked) == 12, "FirmCamp::ai_link_checked moved on the 68k");
static_assert(offsetof(FirmCamp, ai_sell_flag) == 13, "FirmCamp::ai_sell_flag moved on the 68k");
static_assert(offsetof(FirmCamp, race_id) == 14, "FirmCamp::race_id moved on the 68k");
static_assert(offsetof(FirmCamp, nation_recno) == 15, "FirmCamp::nation_recno moved on the 68k");
static_assert(offsetof(FirmCamp, closest_town_name_id) == 17, "FirmCamp::closest_town_name_id moved on the 68k");
static_assert(offsetof(FirmCamp, firm_name_instance_id) == 19, "FirmCamp::firm_name_instance_id moved on the 68k");
static_assert(offsetof(FirmCamp, loc_x1) == 21, "FirmCamp::loc_x1 moved on the 68k");
static_assert(offsetof(FirmCamp, loc_y1) == 23, "FirmCamp::loc_y1 moved on the 68k");
static_assert(offsetof(FirmCamp, loc_x2) == 25, "FirmCamp::loc_x2 moved on the 68k");
static_assert(offsetof(FirmCamp, loc_y2) == 27, "FirmCamp::loc_y2 moved on the 68k");
static_assert(offsetof(FirmCamp, abs_x1) == 29, "FirmCamp::abs_x1 moved on the 68k");
static_assert(offsetof(FirmCamp, abs_y1) == 31, "FirmCamp::abs_y1 moved on the 68k");
static_assert(offsetof(FirmCamp, abs_x2) == 33, "FirmCamp::abs_x2 moved on the 68k");
static_assert(offsetof(FirmCamp, abs_y2) == 35, "FirmCamp::abs_y2 moved on the 68k");
static_assert(offsetof(FirmCamp, center_x) == 37, "FirmCamp::center_x moved on the 68k");
static_assert(offsetof(FirmCamp, center_y) == 39, "FirmCamp::center_y moved on the 68k");
static_assert(offsetof(FirmCamp, region_id) == 41, "FirmCamp::region_id moved on the 68k");
static_assert(offsetof(FirmCamp, cur_frame) == 42, "FirmCamp::cur_frame moved on the 68k");
static_assert(offsetof(FirmCamp, remain_frame_delay) == 43, "FirmCamp::remain_frame_delay moved on the 68k");
static_assert(offsetof(FirmCamp, hit_points) == 44, "FirmCamp::hit_points moved on the 68k");
static_assert(offsetof(FirmCamp, max_hit_points) == 48, "FirmCamp::max_hit_points moved on the 68k");
static_assert(offsetof(FirmCamp, under_construction) == 52, "FirmCamp::under_construction moved on the 68k");
static_assert(offsetof(FirmCamp, firm_skill_id) == 53, "FirmCamp::firm_skill_id moved on the 68k");
static_assert(offsetof(FirmCamp, overseer_recno) == 54, "FirmCamp::overseer_recno moved on the 68k");
static_assert(offsetof(FirmCamp, overseer_town_recno) == 56, "FirmCamp::overseer_town_recno moved on the 68k");
static_assert(offsetof(FirmCamp, builder_recno) == 58, "FirmCamp::builder_recno moved on the 68k");
static_assert(offsetof(FirmCamp, builder_region_id) == 60, "FirmCamp::builder_region_id moved on the 68k");
static_assert(offsetof(FirmCamp, productivity) == 61, "FirmCamp::productivity moved on the 68k");
static_assert(offsetof(FirmCamp, worker_array) == 65, "FirmCamp::worker_array moved on the 68k");
static_assert(offsetof(FirmCamp, worker_count) == 69, "FirmCamp::worker_count moved on the 68k");
static_assert(offsetof(FirmCamp, selected_worker_id) == 70, "FirmCamp::selected_worker_id moved on the 68k");
static_assert(offsetof(FirmCamp, player_spy_count) == 71, "FirmCamp::player_spy_count moved on the 68k");
static_assert(offsetof(FirmCamp, sabotage_level) == 72, "FirmCamp::sabotage_level moved on the 68k");
static_assert(offsetof(FirmCamp, linked_firm_count) == 73, "FirmCamp::linked_firm_count moved on the 68k");
static_assert(offsetof(FirmCamp, linked_town_count) == 74, "FirmCamp::linked_town_count moved on the 68k");
static_assert(offsetof(FirmCamp, linked_firm_array) == 75, "FirmCamp::linked_firm_array moved on the 68k");
static_assert(offsetof(FirmCamp, linked_town_array) == 121, "FirmCamp::linked_town_array moved on the 68k");
static_assert(offsetof(FirmCamp, linked_firm_enable_array) == 181, "FirmCamp::linked_firm_enable_array moved on the 68k");
static_assert(offsetof(FirmCamp, linked_town_enable_array) == 204, "FirmCamp::linked_town_enable_array moved on the 68k");
static_assert(offsetof(FirmCamp, last_year_income) == 234, "FirmCamp::last_year_income moved on the 68k");
static_assert(offsetof(FirmCamp, cur_year_income) == 238, "FirmCamp::cur_year_income moved on the 68k");
static_assert(offsetof(FirmCamp, setup_date) == 242, "FirmCamp::setup_date moved on the 68k");
static_assert(offsetof(FirmCamp, should_set_power) == 246, "FirmCamp::should_set_power moved on the 68k");
static_assert(offsetof(FirmCamp, last_attacked_date) == 247, "FirmCamp::last_attacked_date moved on the 68k");
static_assert(offsetof(FirmCamp, should_close_flag) == 251, "FirmCamp::should_close_flag moved on the 68k");
static_assert(offsetof(FirmCamp, no_neighbor_space) == 252, "FirmCamp::no_neighbor_space moved on the 68k");
static_assert(offsetof(FirmCamp, ai_should_build_factory_count) == 253, "FirmCamp::ai_should_build_factory_count moved on the 68k");
static_assert(offsetof(FirmCamp, defense_array) == 254, "FirmCamp::defense_array moved on the 68k");
static_assert(offsetof(FirmCamp, employ_new_worker) == 281, "FirmCamp::employ_new_worker moved on the 68k");
static_assert(offsetof(FirmCamp, defend_target_recno) == 282, "FirmCamp::defend_target_recno moved on the 68k");
static_assert(offsetof(FirmCamp, defense_flag) == 284, "FirmCamp::defense_flag moved on the 68k");
static_assert(offsetof(FirmCamp, patrol_unit_count) == 285, "FirmCamp::patrol_unit_count moved on the 68k");
static_assert(offsetof(FirmCamp, patrol_unit_array) == 286, "FirmCamp::patrol_unit_array moved on the 68k");
static_assert(offsetof(FirmCamp, coming_unit_count) == 304, "FirmCamp::coming_unit_count moved on the 68k");
static_assert(offsetof(FirmCamp, coming_unit_array) == 305, "FirmCamp::coming_unit_array moved on the 68k");
static_assert(offsetof(FirmCamp, ai_capture_town_recno) == 323, "FirmCamp::ai_capture_town_recno moved on the 68k");
static_assert(offsetof(FirmCamp, ai_recruiting_soldier) == 325, "FirmCamp::ai_recruiting_soldier moved on the 68k");
static_assert(offsetof(FirmCamp, is_attack_camp) == 326, "FirmCamp::is_attack_camp moved on the 68k");
static const LeRun le_runs_FirmCamp[] = {
	{ 5, 2, 2 },
	{ 15, 2, 13 },
	{ 44, 4, 2 },
	{ 54, 2, 3 },
	{ 61, 4, 2 },
	{ 75, 2, 53 },
	{ 234, 4, 3 },
	{ 247, 4, 1 },
	{ 254, 2, 1 },
	{ 257, 2, 1 },
	{ 260, 2, 1 },
	{ 263, 2, 1 },
	{ 266, 2, 1 },
	{ 269, 2, 1 },
	{ 272, 2, 1 },
	{ 275, 2, 1 },
	{ 278, 2, 1 },
	{ 282, 2, 1 },
	{ 286, 2, 9 },
	{ 305, 2, 10 },
};
const LeTable le_table_FirmCamp = { "FirmCamp", 327, 20, le_runs_FirmCamp };

// FirmFactory: 286 bytes on the PC
static_assert(sizeof(FirmFactory) == 286, "FirmFactory is laid out differently on the 68k");
static_assert(offsetof(FirmFactory, firm_id) == 4, "FirmFactory::firm_id moved on the 68k");
static_assert(offsetof(FirmFactory, firm_build_id) == 5, "FirmFactory::firm_build_id moved on the 68k");
static_assert(offsetof(FirmFactory, firm_recno) == 7, "FirmFactory::firm_recno moved on the 68k");
static_assert(offsetof(FirmFactory, firm_ai) == 9, "FirmFactory::firm_ai moved on the 68k");
static_assert(offsetof(FirmFactory, ai_processed) == 10, "FirmFactory::ai_processed moved on the 68k");
static_assert(offsetof(FirmFactory, ai_status) == 11, "FirmFactory::ai_status moved on the 68k");
static_assert(offsetof(FirmFactory, ai_link_checked) == 12, "FirmFactory::ai_link_checked moved on the 68k");
static_assert(offsetof(FirmFactory, ai_sell_flag) == 13, "FirmFactory::ai_sell_flag moved on the 68k");
static_assert(offsetof(FirmFactory, race_id) == 14, "FirmFactory::race_id moved on the 68k");
static_assert(offsetof(FirmFactory, nation_recno) == 15, "FirmFactory::nation_recno moved on the 68k");
static_assert(offsetof(FirmFactory, closest_town_name_id) == 17, "FirmFactory::closest_town_name_id moved on the 68k");
static_assert(offsetof(FirmFactory, firm_name_instance_id) == 19, "FirmFactory::firm_name_instance_id moved on the 68k");
static_assert(offsetof(FirmFactory, loc_x1) == 21, "FirmFactory::loc_x1 moved on the 68k");
static_assert(offsetof(FirmFactory, loc_y1) == 23, "FirmFactory::loc_y1 moved on the 68k");
static_assert(offsetof(FirmFactory, loc_x2) == 25, "FirmFactory::loc_x2 moved on the 68k");
static_assert(offsetof(FirmFactory, loc_y2) == 27, "FirmFactory::loc_y2 moved on the 68k");
static_assert(offsetof(FirmFactory, abs_x1) == 29, "FirmFactory::abs_x1 moved on the 68k");
static_assert(offsetof(FirmFactory, abs_y1) == 31, "FirmFactory::abs_y1 moved on the 68k");
static_assert(offsetof(FirmFactory, abs_x2) == 33, "FirmFactory::abs_x2 moved on the 68k");
static_assert(offsetof(FirmFactory, abs_y2) == 35, "FirmFactory::abs_y2 moved on the 68k");
static_assert(offsetof(FirmFactory, center_x) == 37, "FirmFactory::center_x moved on the 68k");
static_assert(offsetof(FirmFactory, center_y) == 39, "FirmFactory::center_y moved on the 68k");
static_assert(offsetof(FirmFactory, region_id) == 41, "FirmFactory::region_id moved on the 68k");
static_assert(offsetof(FirmFactory, cur_frame) == 42, "FirmFactory::cur_frame moved on the 68k");
static_assert(offsetof(FirmFactory, remain_frame_delay) == 43, "FirmFactory::remain_frame_delay moved on the 68k");
static_assert(offsetof(FirmFactory, hit_points) == 44, "FirmFactory::hit_points moved on the 68k");
static_assert(offsetof(FirmFactory, max_hit_points) == 48, "FirmFactory::max_hit_points moved on the 68k");
static_assert(offsetof(FirmFactory, under_construction) == 52, "FirmFactory::under_construction moved on the 68k");
static_assert(offsetof(FirmFactory, firm_skill_id) == 53, "FirmFactory::firm_skill_id moved on the 68k");
static_assert(offsetof(FirmFactory, overseer_recno) == 54, "FirmFactory::overseer_recno moved on the 68k");
static_assert(offsetof(FirmFactory, overseer_town_recno) == 56, "FirmFactory::overseer_town_recno moved on the 68k");
static_assert(offsetof(FirmFactory, builder_recno) == 58, "FirmFactory::builder_recno moved on the 68k");
static_assert(offsetof(FirmFactory, builder_region_id) == 60, "FirmFactory::builder_region_id moved on the 68k");
static_assert(offsetof(FirmFactory, productivity) == 61, "FirmFactory::productivity moved on the 68k");
static_assert(offsetof(FirmFactory, worker_array) == 65, "FirmFactory::worker_array moved on the 68k");
static_assert(offsetof(FirmFactory, worker_count) == 69, "FirmFactory::worker_count moved on the 68k");
static_assert(offsetof(FirmFactory, selected_worker_id) == 70, "FirmFactory::selected_worker_id moved on the 68k");
static_assert(offsetof(FirmFactory, player_spy_count) == 71, "FirmFactory::player_spy_count moved on the 68k");
static_assert(offsetof(FirmFactory, sabotage_level) == 72, "FirmFactory::sabotage_level moved on the 68k");
static_assert(offsetof(FirmFactory, linked_firm_count) == 73, "FirmFactory::linked_firm_count moved on the 68k");
static_assert(offsetof(FirmFactory, linked_town_count) == 74, "FirmFactory::linked_town_count moved on the 68k");
static_assert(offsetof(FirmFactory, linked_firm_array) == 75, "FirmFactory::linked_firm_array moved on the 68k");
static_assert(offsetof(FirmFactory, linked_town_array) == 121, "FirmFactory::linked_town_array moved on the 68k");
static_assert(offsetof(FirmFactory, linked_firm_enable_array) == 181, "FirmFactory::linked_firm_enable_array moved on the 68k");
static_assert(offsetof(FirmFactory, linked_town_enable_array) == 204, "FirmFactory::linked_town_enable_array moved on the 68k");
static_assert(offsetof(FirmFactory, last_year_income) == 234, "FirmFactory::last_year_income moved on the 68k");
static_assert(offsetof(FirmFactory, cur_year_income) == 238, "FirmFactory::cur_year_income moved on the 68k");
static_assert(offsetof(FirmFactory, setup_date) == 242, "FirmFactory::setup_date moved on the 68k");
static_assert(offsetof(FirmFactory, should_set_power) == 246, "FirmFactory::should_set_power moved on the 68k");
static_assert(offsetof(FirmFactory, last_attacked_date) == 247, "FirmFactory::last_attacked_date moved on the 68k");
static_assert(offsetof(FirmFactory, should_close_flag) == 251, "FirmFactory::should_close_flag moved on the 68k");
static_assert(offsetof(FirmFactory, no_neighbor_space) == 252, "FirmFactory::no_neighbor_space moved on the 68k");
static_assert(offsetof(FirmFactory, ai_should_build_factory_count) == 253, "FirmFactory::ai_should_build_factory_count moved on the 68k");
static_assert(offsetof(FirmFactory, product_raw_id) == 254, "FirmFactory::product_raw_id moved on the 68k");
static_assert(offsetof(FirmFactory, stock_qty) == 258, "FirmFactory::stock_qty moved on the 68k");
static_assert(offsetof(FirmFactory, max_stock_qty) == 262, "FirmFactory::max_stock_qty moved on the 68k");
static_assert(offsetof(FirmFactory, raw_stock_qty) == 266, "FirmFactory::raw_stock_qty moved on the 68k");
static_assert(offsetof(FirmFactory, max_raw_stock_qty) == 270, "FirmFactory::max_raw_stock_qty moved on the 68k");
static_assert(offsetof(FirmFactory, cur_month_production) == 274, "FirmFactory::cur_month_production moved on the 68k");
static_assert(offsetof(FirmFactory, last_month_production) == 278, "FirmFactory::last_month_production moved on the 68k");
static_assert(offsetof(FirmFactory, next_output_link_id) == 282, "FirmFactory::next_output_link_id moved on the 68k");
static_assert(offsetof(FirmFactory, next_output_firm_recno) == 284, "FirmFactory::next_output_firm_recno moved on the 68k");
static const LeRun le_runs_FirmFactory[] = {
	{ 5, 2, 2 },
	{ 15, 2, 13 },
	{ 44, 4, 2 },
	{ 54, 2, 3 },
	{ 61, 4, 2 },
	{ 75, 2, 53 },
	{ 234, 4, 3 },
	{ 247, 4, 1 },
	{ 254, 4, 7 },
	{ 282, 2, 2 },
};
const LeTable le_table_FirmFactory = { "FirmFactory", 286, 10, le_runs_FirmFactory };

// FirmInn: 336 bytes on the PC
static_assert(sizeof(FirmInn) == 336, "FirmInn is laid out differently on the 68k");
static_assert(offsetof(FirmInn, firm_id) == 4, "FirmInn::firm_id moved on the 68k");
static_assert(offsetof(FirmInn, firm_build_id) == 5, "FirmInn::firm_build_id moved on the 68k");
static_assert(offsetof(FirmInn, firm_recno) == 7, "FirmInn::firm_recno moved on the 68k");
static_assert(offsetof(FirmInn, firm_ai) == 9, "FirmInn::firm_ai moved on the 68k");
static_assert(offsetof(FirmInn, ai_processed) == 10, "FirmInn::ai_processed moved on the 68k");
static_assert(offsetof(FirmInn, ai_status) == 11, "FirmInn::ai_status moved on the 68k");
static_assert(offsetof(FirmInn, ai_link_checked) == 12, "FirmInn::ai_link_checked moved on the 68k");
static_assert(offsetof(FirmInn, ai_sell_flag) == 13, "FirmInn::ai_sell_flag moved on the 68k");
static_assert(offsetof(FirmInn, race_id) == 14, "FirmInn::race_id moved on the 68k");
static_assert(offsetof(FirmInn, nation_recno) == 15, "FirmInn::nation_recno moved on the 68k");
static_assert(offsetof(FirmInn, closest_town_name_id) == 17, "FirmInn::closest_town_name_id moved on the 68k");
static_assert(offsetof(FirmInn, firm_name_instance_id) == 19, "FirmInn::firm_name_instance_id moved on the 68k");
static_assert(offsetof(FirmInn, loc_x1) == 21, "FirmInn::loc_x1 moved on the 68k");
static_assert(offsetof(FirmInn, loc_y1) == 23, "FirmInn::loc_y1 moved on the 68k");
static_assert(offsetof(FirmInn, loc_x2) == 25, "FirmInn::loc_x2 moved on the 68k");
static_assert(offsetof(FirmInn, loc_y2) == 27, "FirmInn::loc_y2 moved on the 68k");
static_assert(offsetof(FirmInn, abs_x1) == 29, "FirmInn::abs_x1 moved on the 68k");
static_assert(offsetof(FirmInn, abs_y1) == 31, "FirmInn::abs_y1 moved on the 68k");
static_assert(offsetof(FirmInn, abs_x2) == 33, "FirmInn::abs_x2 moved on the 68k");
static_assert(offsetof(FirmInn, abs_y2) == 35, "FirmInn::abs_y2 moved on the 68k");
static_assert(offsetof(FirmInn, center_x) == 37, "FirmInn::center_x moved on the 68k");
static_assert(offsetof(FirmInn, center_y) == 39, "FirmInn::center_y moved on the 68k");
static_assert(offsetof(FirmInn, region_id) == 41, "FirmInn::region_id moved on the 68k");
static_assert(offsetof(FirmInn, cur_frame) == 42, "FirmInn::cur_frame moved on the 68k");
static_assert(offsetof(FirmInn, remain_frame_delay) == 43, "FirmInn::remain_frame_delay moved on the 68k");
static_assert(offsetof(FirmInn, hit_points) == 44, "FirmInn::hit_points moved on the 68k");
static_assert(offsetof(FirmInn, max_hit_points) == 48, "FirmInn::max_hit_points moved on the 68k");
static_assert(offsetof(FirmInn, under_construction) == 52, "FirmInn::under_construction moved on the 68k");
static_assert(offsetof(FirmInn, firm_skill_id) == 53, "FirmInn::firm_skill_id moved on the 68k");
static_assert(offsetof(FirmInn, overseer_recno) == 54, "FirmInn::overseer_recno moved on the 68k");
static_assert(offsetof(FirmInn, overseer_town_recno) == 56, "FirmInn::overseer_town_recno moved on the 68k");
static_assert(offsetof(FirmInn, builder_recno) == 58, "FirmInn::builder_recno moved on the 68k");
static_assert(offsetof(FirmInn, builder_region_id) == 60, "FirmInn::builder_region_id moved on the 68k");
static_assert(offsetof(FirmInn, productivity) == 61, "FirmInn::productivity moved on the 68k");
static_assert(offsetof(FirmInn, worker_array) == 65, "FirmInn::worker_array moved on the 68k");
static_assert(offsetof(FirmInn, worker_count) == 69, "FirmInn::worker_count moved on the 68k");
static_assert(offsetof(FirmInn, selected_worker_id) == 70, "FirmInn::selected_worker_id moved on the 68k");
static_assert(offsetof(FirmInn, player_spy_count) == 71, "FirmInn::player_spy_count moved on the 68k");
static_assert(offsetof(FirmInn, sabotage_level) == 72, "FirmInn::sabotage_level moved on the 68k");
static_assert(offsetof(FirmInn, linked_firm_count) == 73, "FirmInn::linked_firm_count moved on the 68k");
static_assert(offsetof(FirmInn, linked_town_count) == 74, "FirmInn::linked_town_count moved on the 68k");
static_assert(offsetof(FirmInn, linked_firm_array) == 75, "FirmInn::linked_firm_array moved on the 68k");
static_assert(offsetof(FirmInn, linked_town_array) == 121, "FirmInn::linked_town_array moved on the 68k");
static_assert(offsetof(FirmInn, linked_firm_enable_array) == 181, "FirmInn::linked_firm_enable_array moved on the 68k");
static_assert(offsetof(FirmInn, linked_town_enable_array) == 204, "FirmInn::linked_town_enable_array moved on the 68k");
static_assert(offsetof(FirmInn, last_year_income) == 234, "FirmInn::last_year_income moved on the 68k");
static_assert(offsetof(FirmInn, cur_year_income) == 238, "FirmInn::cur_year_income moved on the 68k");
static_assert(offsetof(FirmInn, setup_date) == 242, "FirmInn::setup_date moved on the 68k");
static_assert(offsetof(FirmInn, should_set_power) == 246, "FirmInn::should_set_power moved on the 68k");
static_assert(offsetof(FirmInn, last_attacked_date) == 247, "FirmInn::last_attacked_date moved on the 68k");
static_assert(offsetof(FirmInn, should_close_flag) == 251, "FirmInn::should_close_flag moved on the 68k");
static_assert(offsetof(FirmInn, no_neighbor_space) == 252, "FirmInn::no_neighbor_space moved on the 68k");
static_assert(offsetof(FirmInn, ai_should_build_factory_count) == 253, "FirmInn::ai_should_build_factory_count moved on the 68k");
static_assert(offsetof(FirmInn, next_skill_id) == 254, "FirmInn::next_skill_id moved on the 68k");
static_assert(offsetof(FirmInn, inn_unit_array) == 256, "FirmInn::inn_unit_array moved on the 68k");
static_assert(offsetof(FirmInn, inn_unit_count) == 334, "FirmInn::inn_unit_count moved on the 68k");
static const LeRun le_runs_FirmInn[] = {
	{ 5, 2, 2 },
	{ 15, 2, 13 },
	{ 44, 4, 2 },
	{ 54, 2, 3 },
	{ 61, 4, 2 },
	{ 75, 2, 53 },
	{ 234, 4, 3 },
	{ 247, 4, 1 },
	{ 254, 2, 1 },
	{ 263, 2, 3 },
	{ 276, 2, 3 },
	{ 289, 2, 3 },
	{ 302, 2, 3 },
	{ 315, 2, 3 },
	{ 328, 2, 4 },
};
const LeTable le_table_FirmInn = { "FirmInn", 336, 15, le_runs_FirmInn };

// FirmMarket: 403 bytes on the PC
static_assert(sizeof(FirmMarket) == 403, "FirmMarket is laid out differently on the 68k");
static_assert(offsetof(FirmMarket, firm_id) == 4, "FirmMarket::firm_id moved on the 68k");
static_assert(offsetof(FirmMarket, firm_build_id) == 5, "FirmMarket::firm_build_id moved on the 68k");
static_assert(offsetof(FirmMarket, firm_recno) == 7, "FirmMarket::firm_recno moved on the 68k");
static_assert(offsetof(FirmMarket, firm_ai) == 9, "FirmMarket::firm_ai moved on the 68k");
static_assert(offsetof(FirmMarket, ai_processed) == 10, "FirmMarket::ai_processed moved on the 68k");
static_assert(offsetof(FirmMarket, ai_status) == 11, "FirmMarket::ai_status moved on the 68k");
static_assert(offsetof(FirmMarket, ai_link_checked) == 12, "FirmMarket::ai_link_checked moved on the 68k");
static_assert(offsetof(FirmMarket, ai_sell_flag) == 13, "FirmMarket::ai_sell_flag moved on the 68k");
static_assert(offsetof(FirmMarket, race_id) == 14, "FirmMarket::race_id moved on the 68k");
static_assert(offsetof(FirmMarket, nation_recno) == 15, "FirmMarket::nation_recno moved on the 68k");
static_assert(offsetof(FirmMarket, closest_town_name_id) == 17, "FirmMarket::closest_town_name_id moved on the 68k");
static_assert(offsetof(FirmMarket, firm_name_instance_id) == 19, "FirmMarket::firm_name_instance_id moved on the 68k");
static_assert(offsetof(FirmMarket, loc_x1) == 21, "FirmMarket::loc_x1 moved on the 68k");
static_assert(offsetof(FirmMarket, loc_y1) == 23, "FirmMarket::loc_y1 moved on the 68k");
static_assert(offsetof(FirmMarket, loc_x2) == 25, "FirmMarket::loc_x2 moved on the 68k");
static_assert(offsetof(FirmMarket, loc_y2) == 27, "FirmMarket::loc_y2 moved on the 68k");
static_assert(offsetof(FirmMarket, abs_x1) == 29, "FirmMarket::abs_x1 moved on the 68k");
static_assert(offsetof(FirmMarket, abs_y1) == 31, "FirmMarket::abs_y1 moved on the 68k");
static_assert(offsetof(FirmMarket, abs_x2) == 33, "FirmMarket::abs_x2 moved on the 68k");
static_assert(offsetof(FirmMarket, abs_y2) == 35, "FirmMarket::abs_y2 moved on the 68k");
static_assert(offsetof(FirmMarket, center_x) == 37, "FirmMarket::center_x moved on the 68k");
static_assert(offsetof(FirmMarket, center_y) == 39, "FirmMarket::center_y moved on the 68k");
static_assert(offsetof(FirmMarket, region_id) == 41, "FirmMarket::region_id moved on the 68k");
static_assert(offsetof(FirmMarket, cur_frame) == 42, "FirmMarket::cur_frame moved on the 68k");
static_assert(offsetof(FirmMarket, remain_frame_delay) == 43, "FirmMarket::remain_frame_delay moved on the 68k");
static_assert(offsetof(FirmMarket, hit_points) == 44, "FirmMarket::hit_points moved on the 68k");
static_assert(offsetof(FirmMarket, max_hit_points) == 48, "FirmMarket::max_hit_points moved on the 68k");
static_assert(offsetof(FirmMarket, under_construction) == 52, "FirmMarket::under_construction moved on the 68k");
static_assert(offsetof(FirmMarket, firm_skill_id) == 53, "FirmMarket::firm_skill_id moved on the 68k");
static_assert(offsetof(FirmMarket, overseer_recno) == 54, "FirmMarket::overseer_recno moved on the 68k");
static_assert(offsetof(FirmMarket, overseer_town_recno) == 56, "FirmMarket::overseer_town_recno moved on the 68k");
static_assert(offsetof(FirmMarket, builder_recno) == 58, "FirmMarket::builder_recno moved on the 68k");
static_assert(offsetof(FirmMarket, builder_region_id) == 60, "FirmMarket::builder_region_id moved on the 68k");
static_assert(offsetof(FirmMarket, productivity) == 61, "FirmMarket::productivity moved on the 68k");
static_assert(offsetof(FirmMarket, worker_array) == 65, "FirmMarket::worker_array moved on the 68k");
static_assert(offsetof(FirmMarket, worker_count) == 69, "FirmMarket::worker_count moved on the 68k");
static_assert(offsetof(FirmMarket, selected_worker_id) == 70, "FirmMarket::selected_worker_id moved on the 68k");
static_assert(offsetof(FirmMarket, player_spy_count) == 71, "FirmMarket::player_spy_count moved on the 68k");
static_assert(offsetof(FirmMarket, sabotage_level) == 72, "FirmMarket::sabotage_level moved on the 68k");
static_assert(offsetof(FirmMarket, linked_firm_count) == 73, "FirmMarket::linked_firm_count moved on the 68k");
static_assert(offsetof(FirmMarket, linked_town_count) == 74, "FirmMarket::linked_town_count moved on the 68k");
static_assert(offsetof(FirmMarket, linked_firm_array) == 75, "FirmMarket::linked_firm_array moved on the 68k");
static_assert(offsetof(FirmMarket, linked_town_array) == 121, "FirmMarket::linked_town_array moved on the 68k");
static_assert(offsetof(FirmMarket, linked_firm_enable_array) == 181, "FirmMarket::linked_firm_enable_array moved on the 68k");
static_assert(offsetof(FirmMarket, linked_town_enable_array) == 204, "FirmMarket::linked_town_enable_array moved on the 68k");
static_assert(offsetof(FirmMarket, last_year_income) == 234, "FirmMarket::last_year_income moved on the 68k");
static_assert(offsetof(FirmMarket, cur_year_income) == 238, "FirmMarket::cur_year_income moved on the 68k");
static_assert(offsetof(FirmMarket, setup_date) == 242, "FirmMarket::setup_date moved on the 68k");
static_assert(offsetof(FirmMarket, should_set_power) == 246, "FirmMarket::should_set_power moved on the 68k");
static_assert(offsetof(FirmMarket, last_attacked_date) == 247, "FirmMarket::last_attacked_date moved on the 68k");
static_assert(offsetof(FirmMarket, should_close_flag) == 251, "FirmMarket::should_close_flag moved on the 68k");
static_assert(offsetof(FirmMarket, no_neighbor_space) == 252, "FirmMarket::no_neighbor_space moved on the 68k");
static_assert(offsetof(FirmMarket, ai_should_build_factory_count) == 253, "FirmMarket::ai_should_build_factory_count moved on the 68k");
static_assert(offsetof(FirmMarket, max_stock_qty) == 254, "FirmMarket::max_stock_qty moved on the 68k");
static_assert(offsetof(FirmMarket, market_goods_array) == 258, "FirmMarket::market_goods_array moved on the 68k");
static_assert(offsetof(FirmMarket, market_raw_array) == 366, "FirmMarket::market_raw_array moved on the 68k");
static_assert(offsetof(FirmMarket, market_product_array) == 378, "FirmMarket::market_product_array moved on the 68k");
static_assert(offsetof(FirmMarket, next_output_link_id) == 390, "FirmMarket::next_output_link_id moved on the 68k");
static_assert(offsetof(FirmMarket, next_output_firm_recno) == 392, "FirmMarket::next_output_firm_recno moved on the 68k");
static_assert(offsetof(FirmMarket, no_linked_town_since_date) == 394, "FirmMarket::no_linked_town_since_date moved on the 68k");
static_assert(offsetof(FirmMarket, last_import_new_goods_date) == 398, "FirmMarket::last_import_new_goods_date moved on the 68k");
static_assert(offsetof(FirmMarket, restock_type) == 402, "FirmMarket::restock_type moved on the 68k");
static const LeRun le_runs_FirmMarket[] = {
	{ 5, 2, 2 },
	{ 15, 2, 13 },
	{ 44, 4, 2 },
	{ 54, 2, 3 },
	{ 61, 4, 2 },
	{ 75, 2, 53 },
	{ 234, 4, 3 },
	{ 247, 4, 1 },
	{ 254, 4, 1 },
	{ 260, 2, 1 },
	{ 262, 4, 8 },
	{ 296, 2, 1 },
	{ 298, 4, 8 },
	{ 332, 2, 1 },
	{ 334, 4, 14 },
	{ 390, 2, 2 },
	{ 394, 4, 2 },
};
const LeTable le_table_FirmMarket = { "FirmMarket", 403, 17, le_runs_FirmMarket };

// FirmMine: 282 bytes on the PC
static_assert(sizeof(FirmMine) == 282, "FirmMine is laid out differently on the 68k");
static_assert(offsetof(FirmMine, firm_id) == 4, "FirmMine::firm_id moved on the 68k");
static_assert(offsetof(FirmMine, firm_build_id) == 5, "FirmMine::firm_build_id moved on the 68k");
static_assert(offsetof(FirmMine, firm_recno) == 7, "FirmMine::firm_recno moved on the 68k");
static_assert(offsetof(FirmMine, firm_ai) == 9, "FirmMine::firm_ai moved on the 68k");
static_assert(offsetof(FirmMine, ai_processed) == 10, "FirmMine::ai_processed moved on the 68k");
static_assert(offsetof(FirmMine, ai_status) == 11, "FirmMine::ai_status moved on the 68k");
static_assert(offsetof(FirmMine, ai_link_checked) == 12, "FirmMine::ai_link_checked moved on the 68k");
static_assert(offsetof(FirmMine, ai_sell_flag) == 13, "FirmMine::ai_sell_flag moved on the 68k");
static_assert(offsetof(FirmMine, race_id) == 14, "FirmMine::race_id moved on the 68k");
static_assert(offsetof(FirmMine, nation_recno) == 15, "FirmMine::nation_recno moved on the 68k");
static_assert(offsetof(FirmMine, closest_town_name_id) == 17, "FirmMine::closest_town_name_id moved on the 68k");
static_assert(offsetof(FirmMine, firm_name_instance_id) == 19, "FirmMine::firm_name_instance_id moved on the 68k");
static_assert(offsetof(FirmMine, loc_x1) == 21, "FirmMine::loc_x1 moved on the 68k");
static_assert(offsetof(FirmMine, loc_y1) == 23, "FirmMine::loc_y1 moved on the 68k");
static_assert(offsetof(FirmMine, loc_x2) == 25, "FirmMine::loc_x2 moved on the 68k");
static_assert(offsetof(FirmMine, loc_y2) == 27, "FirmMine::loc_y2 moved on the 68k");
static_assert(offsetof(FirmMine, abs_x1) == 29, "FirmMine::abs_x1 moved on the 68k");
static_assert(offsetof(FirmMine, abs_y1) == 31, "FirmMine::abs_y1 moved on the 68k");
static_assert(offsetof(FirmMine, abs_x2) == 33, "FirmMine::abs_x2 moved on the 68k");
static_assert(offsetof(FirmMine, abs_y2) == 35, "FirmMine::abs_y2 moved on the 68k");
static_assert(offsetof(FirmMine, center_x) == 37, "FirmMine::center_x moved on the 68k");
static_assert(offsetof(FirmMine, center_y) == 39, "FirmMine::center_y moved on the 68k");
static_assert(offsetof(FirmMine, region_id) == 41, "FirmMine::region_id moved on the 68k");
static_assert(offsetof(FirmMine, cur_frame) == 42, "FirmMine::cur_frame moved on the 68k");
static_assert(offsetof(FirmMine, remain_frame_delay) == 43, "FirmMine::remain_frame_delay moved on the 68k");
static_assert(offsetof(FirmMine, hit_points) == 44, "FirmMine::hit_points moved on the 68k");
static_assert(offsetof(FirmMine, max_hit_points) == 48, "FirmMine::max_hit_points moved on the 68k");
static_assert(offsetof(FirmMine, under_construction) == 52, "FirmMine::under_construction moved on the 68k");
static_assert(offsetof(FirmMine, firm_skill_id) == 53, "FirmMine::firm_skill_id moved on the 68k");
static_assert(offsetof(FirmMine, overseer_recno) == 54, "FirmMine::overseer_recno moved on the 68k");
static_assert(offsetof(FirmMine, overseer_town_recno) == 56, "FirmMine::overseer_town_recno moved on the 68k");
static_assert(offsetof(FirmMine, builder_recno) == 58, "FirmMine::builder_recno moved on the 68k");
static_assert(offsetof(FirmMine, builder_region_id) == 60, "FirmMine::builder_region_id moved on the 68k");
static_assert(offsetof(FirmMine, productivity) == 61, "FirmMine::productivity moved on the 68k");
static_assert(offsetof(FirmMine, worker_array) == 65, "FirmMine::worker_array moved on the 68k");
static_assert(offsetof(FirmMine, worker_count) == 69, "FirmMine::worker_count moved on the 68k");
static_assert(offsetof(FirmMine, selected_worker_id) == 70, "FirmMine::selected_worker_id moved on the 68k");
static_assert(offsetof(FirmMine, player_spy_count) == 71, "FirmMine::player_spy_count moved on the 68k");
static_assert(offsetof(FirmMine, sabotage_level) == 72, "FirmMine::sabotage_level moved on the 68k");
static_assert(offsetof(FirmMine, linked_firm_count) == 73, "FirmMine::linked_firm_count moved on the 68k");
static_assert(offsetof(FirmMine, linked_town_count) == 74, "FirmMine::linked_town_count moved on the 68k");
static_assert(offsetof(FirmMine, linked_firm_array) == 75, "FirmMine::linked_firm_array moved on the 68k");
static_assert(offsetof(FirmMine, linked_town_array) == 121, "FirmMine::linked_town_array moved on the 68k");
static_assert(offsetof(FirmMine, linked_firm_enable_array) == 181, "FirmMine::linked_firm_enable_array moved on the 68k");
static_assert(offsetof(FirmMine, linked_town_enable_array) == 204, "FirmMine::linked_town_enable_array moved on the 68k");
static_assert(offsetof(FirmMine, last_year_income) == 234, "FirmMine::last_year_income moved on the 68k");
static_assert(offsetof(FirmMine, cur_year_income) == 238, "FirmMine::cur_year_income moved on the 68k");
static_assert(offsetof(FirmMine, setup_date) == 242, "FirmMine::setup_date moved on the 68k");
static_assert(offsetof(FirmMine, should_set_power) == 246, "FirmMine::should_set_power moved on the 68k");
static_assert(offsetof(FirmMine, last_attacked_date) == 247, "FirmMine::last_attacked_date moved on the 68k");
static_assert(offsetof(FirmMine, should_close_flag) == 251, "FirmMine::should_close_flag moved on the 68k");
static_assert(offsetof(FirmMine, no_neighbor_space) == 252, "FirmMine::no_neighbor_space moved on the 68k");
static_assert(offsetof(FirmMine, ai_should_build_factory_count) == 253, "FirmMine::ai_should_build_factory_count moved on the 68k");
static_assert(offsetof(FirmMine, raw_id) == 254, "FirmMine::raw_id moved on the 68k");
static_assert(offsetof(FirmMine, site_recno) == 256, "FirmMine::site_recno moved on the 68k");
static_assert(offsetof(FirmMine, reserve_qty) == 258, "FirmMine::reserve_qty moved on the 68k");
static_assert(offsetof(FirmMine, stock_qty) == 262, "FirmMine::stock_qty moved on the 68k");
static_assert(offsetof(FirmMine, max_stock_qty) == 266, "FirmMine::max_stock_qty moved on the 68k");
static_assert(offsetof(FirmMine, next_output_link_id) == 270, "FirmMine::next_output_link_id moved on the 68k");
static_assert(offsetof(FirmMine, next_output_firm_recno) == 272, "FirmMine::next_output_firm_recno moved on the 68k");
static_assert(offsetof(FirmMine, cur_month_production) == 274, "FirmMine::cur_month_production moved on the 68k");
static_assert(offsetof(FirmMine, last_month_production) == 278, "FirmMine::last_month_production moved on the 68k");
static const LeRun le_runs_FirmMine[] = {
	{ 5, 2, 2 },
	{ 15, 2, 13 },
	{ 44, 4, 2 },
	{ 54, 2, 3 },
	{ 61, 4, 2 },
	{ 75, 2, 53 },
	{ 234, 4, 3 },
	{ 247, 4, 1 },
	{ 254, 2, 2 },
	{ 258, 4, 3 },
	{ 270, 2, 2 },
	{ 274, 4, 2 },
};
const LeTable le_table_FirmMine = { "FirmMine", 282, 12, le_runs_FirmMine };

// FirmResearch: 260 bytes on the PC
static_assert(sizeof(FirmResearch) == 260, "FirmResearch is laid out differently on the 68k");
static_assert(offsetof(FirmResearch, firm_id) == 4, "FirmResearch::firm_id moved on the 68k");
static_assert(offsetof(FirmResearch, firm_build_id) == 5, "FirmResearch::firm_build_id moved on the 68k");
static_assert(offsetof(FirmResearch, firm_recno) == 7, "FirmResearch::firm_recno moved on the 68k");
static_assert(offsetof(FirmResearch, firm_ai) == 9, "FirmResearch::firm_ai moved on the 68k");
static_assert(offsetof(FirmResearch, ai_processed) == 10, "FirmResearch::ai_processed moved on the 68k");
static_assert(offsetof(FirmResearch, ai_status) == 11, "FirmResearch::ai_status moved on the 68k");
static_assert(offsetof(FirmResearch, ai_link_checked) == 12, "FirmResearch::ai_link_checked moved on the 68k");
static_assert(offsetof(FirmResearch, ai_sell_flag) == 13, "FirmResearch::ai_sell_flag moved on the 68k");
static_assert(offsetof(FirmResearch, race_id) == 14, "FirmResearch::race_id moved on the 68k");
static_assert(offsetof(FirmResearch, nation_recno) == 15, "FirmResearch::nation_recno moved on the 68k");
static_assert(offsetof(FirmResearch, closest_town_name_id) == 17, "FirmResearch::closest_town_name_id moved on the 68k");
static_assert(offsetof(FirmResearch, firm_name_instance_id) == 19, "FirmResearch::firm_name_instance_id moved on the 68k");
static_assert(offsetof(FirmResearch, loc_x1) == 21, "FirmResearch::loc_x1 moved on the 68k");
static_assert(offsetof(FirmResearch, loc_y1) == 23, "FirmResearch::loc_y1 moved on the 68k");
static_assert(offsetof(FirmResearch, loc_x2) == 25, "FirmResearch::loc_x2 moved on the 68k");
static_assert(offsetof(FirmResearch, loc_y2) == 27, "FirmResearch::loc_y2 moved on the 68k");
static_assert(offsetof(FirmResearch, abs_x1) == 29, "FirmResearch::abs_x1 moved on the 68k");
static_assert(offsetof(FirmResearch, abs_y1) == 31, "FirmResearch::abs_y1 moved on the 68k");
static_assert(offsetof(FirmResearch, abs_x2) == 33, "FirmResearch::abs_x2 moved on the 68k");
static_assert(offsetof(FirmResearch, abs_y2) == 35, "FirmResearch::abs_y2 moved on the 68k");
static_assert(offsetof(FirmResearch, center_x) == 37, "FirmResearch::center_x moved on the 68k");
static_assert(offsetof(FirmResearch, center_y) == 39, "FirmResearch::center_y moved on the 68k");
static_assert(offsetof(FirmResearch, region_id) == 41, "FirmResearch::region_id moved on the 68k");
static_assert(offsetof(FirmResearch, cur_frame) == 42, "FirmResearch::cur_frame moved on the 68k");
static_assert(offsetof(FirmResearch, remain_frame_delay) == 43, "FirmResearch::remain_frame_delay moved on the 68k");
static_assert(offsetof(FirmResearch, hit_points) == 44, "FirmResearch::hit_points moved on the 68k");
static_assert(offsetof(FirmResearch, max_hit_points) == 48, "FirmResearch::max_hit_points moved on the 68k");
static_assert(offsetof(FirmResearch, under_construction) == 52, "FirmResearch::under_construction moved on the 68k");
static_assert(offsetof(FirmResearch, firm_skill_id) == 53, "FirmResearch::firm_skill_id moved on the 68k");
static_assert(offsetof(FirmResearch, overseer_recno) == 54, "FirmResearch::overseer_recno moved on the 68k");
static_assert(offsetof(FirmResearch, overseer_town_recno) == 56, "FirmResearch::overseer_town_recno moved on the 68k");
static_assert(offsetof(FirmResearch, builder_recno) == 58, "FirmResearch::builder_recno moved on the 68k");
static_assert(offsetof(FirmResearch, builder_region_id) == 60, "FirmResearch::builder_region_id moved on the 68k");
static_assert(offsetof(FirmResearch, productivity) == 61, "FirmResearch::productivity moved on the 68k");
static_assert(offsetof(FirmResearch, worker_array) == 65, "FirmResearch::worker_array moved on the 68k");
static_assert(offsetof(FirmResearch, worker_count) == 69, "FirmResearch::worker_count moved on the 68k");
static_assert(offsetof(FirmResearch, selected_worker_id) == 70, "FirmResearch::selected_worker_id moved on the 68k");
static_assert(offsetof(FirmResearch, player_spy_count) == 71, "FirmResearch::player_spy_count moved on the 68k");
static_assert(offsetof(FirmResearch, sabotage_level) == 72, "FirmResearch::sabotage_level moved on the 68k");
static_assert(offsetof(FirmResearch, linked_firm_count) == 73, "FirmResearch::linked_firm_count moved on the 68k");
static_assert(offsetof(FirmResearch, linked_town_count) == 74, "FirmResearch::linked_town_count moved on the 68k");
static_assert(offsetof(FirmResearch, linked_firm_array) == 75, "FirmResearch::linked_firm_array moved on the 68k");
static_assert(offsetof(FirmResearch, linked_town_array) == 121, "FirmResearch::linked_town_array moved on the 68k");
static_assert(offsetof(FirmResearch, linked_firm_enable_array) == 181, "FirmResearch::linked_firm_enable_array moved on the 68k");
static_assert(offsetof(FirmResearch, linked_town_enable_array) == 204, "FirmResearch::linked_town_enable_array moved on the 68k");
static_assert(offsetof(FirmResearch, last_year_income) == 234, "FirmResearch::last_year_income moved on the 68k");
static_assert(offsetof(FirmResearch, cur_year_income) == 238, "FirmResearch::cur_year_income moved on the 68k");
static_assert(offsetof(FirmResearch, setup_date) == 242, "FirmResearch::setup_date moved on the 68k");
static_assert(offsetof(FirmResearch, should_set_power) == 246, "FirmResearch::should_set_power moved on the 68k");
static_assert(offsetof(FirmResearch, last_attacked_date) == 247, "FirmResearch::last_attacked_date moved on the 68k");
static_assert(offsetof(FirmResearch, should_close_flag) == 251, "FirmResearch::should_close_flag moved on the 68k");
static_assert(offsetof(FirmResearch, no_neighbor_space) == 252, "FirmResearch::no_neighbor_space moved on the 68k");
static_assert(offsetof(FirmResearch, ai_should_build_factory_count) == 253, "FirmResearch::ai_should_build_factory_count moved on the 68k");
static_assert(offsetof(FirmResearch, tech_id) == 254, "FirmResearch::tech_id moved on the 68k");
static_assert(offsetof(FirmResearch, complete_percent) == 256, "FirmResearch::complete_percent moved on the 68k");
static const LeRun le_runs_FirmResearch[] = {
	{ 5, 2, 2 },
	{ 15, 2, 13 },
	{ 44, 4, 2 },
	{ 54, 2, 3 },
	{ 61, 4, 2 },
	{ 75, 2, 53 },
	{ 234, 4, 3 },
	{ 247, 4, 1 },
	{ 254, 2, 1 },
	{ 256, 4, 1 },
};
const LeTable le_table_FirmResearch = { "FirmResearch", 260, 10, le_runs_FirmResearch };

// FirmWar: 285 bytes on the PC
static_assert(sizeof(FirmWar) == 285, "FirmWar is laid out differently on the 68k");
static_assert(offsetof(FirmWar, firm_id) == 4, "FirmWar::firm_id moved on the 68k");
static_assert(offsetof(FirmWar, firm_build_id) == 5, "FirmWar::firm_build_id moved on the 68k");
static_assert(offsetof(FirmWar, firm_recno) == 7, "FirmWar::firm_recno moved on the 68k");
static_assert(offsetof(FirmWar, firm_ai) == 9, "FirmWar::firm_ai moved on the 68k");
static_assert(offsetof(FirmWar, ai_processed) == 10, "FirmWar::ai_processed moved on the 68k");
static_assert(offsetof(FirmWar, ai_status) == 11, "FirmWar::ai_status moved on the 68k");
static_assert(offsetof(FirmWar, ai_link_checked) == 12, "FirmWar::ai_link_checked moved on the 68k");
static_assert(offsetof(FirmWar, ai_sell_flag) == 13, "FirmWar::ai_sell_flag moved on the 68k");
static_assert(offsetof(FirmWar, race_id) == 14, "FirmWar::race_id moved on the 68k");
static_assert(offsetof(FirmWar, nation_recno) == 15, "FirmWar::nation_recno moved on the 68k");
static_assert(offsetof(FirmWar, closest_town_name_id) == 17, "FirmWar::closest_town_name_id moved on the 68k");
static_assert(offsetof(FirmWar, firm_name_instance_id) == 19, "FirmWar::firm_name_instance_id moved on the 68k");
static_assert(offsetof(FirmWar, loc_x1) == 21, "FirmWar::loc_x1 moved on the 68k");
static_assert(offsetof(FirmWar, loc_y1) == 23, "FirmWar::loc_y1 moved on the 68k");
static_assert(offsetof(FirmWar, loc_x2) == 25, "FirmWar::loc_x2 moved on the 68k");
static_assert(offsetof(FirmWar, loc_y2) == 27, "FirmWar::loc_y2 moved on the 68k");
static_assert(offsetof(FirmWar, abs_x1) == 29, "FirmWar::abs_x1 moved on the 68k");
static_assert(offsetof(FirmWar, abs_y1) == 31, "FirmWar::abs_y1 moved on the 68k");
static_assert(offsetof(FirmWar, abs_x2) == 33, "FirmWar::abs_x2 moved on the 68k");
static_assert(offsetof(FirmWar, abs_y2) == 35, "FirmWar::abs_y2 moved on the 68k");
static_assert(offsetof(FirmWar, center_x) == 37, "FirmWar::center_x moved on the 68k");
static_assert(offsetof(FirmWar, center_y) == 39, "FirmWar::center_y moved on the 68k");
static_assert(offsetof(FirmWar, region_id) == 41, "FirmWar::region_id moved on the 68k");
static_assert(offsetof(FirmWar, cur_frame) == 42, "FirmWar::cur_frame moved on the 68k");
static_assert(offsetof(FirmWar, remain_frame_delay) == 43, "FirmWar::remain_frame_delay moved on the 68k");
static_assert(offsetof(FirmWar, hit_points) == 44, "FirmWar::hit_points moved on the 68k");
static_assert(offsetof(FirmWar, max_hit_points) == 48, "FirmWar::max_hit_points moved on the 68k");
static_assert(offsetof(FirmWar, under_construction) == 52, "FirmWar::under_construction moved on the 68k");
static_assert(offsetof(FirmWar, firm_skill_id) == 53, "FirmWar::firm_skill_id moved on the 68k");
static_assert(offsetof(FirmWar, overseer_recno) == 54, "FirmWar::overseer_recno moved on the 68k");
static_assert(offsetof(FirmWar, overseer_town_recno) == 56, "FirmWar::overseer_town_recno moved on the 68k");
static_assert(offsetof(FirmWar, builder_recno) == 58, "FirmWar::builder_recno moved on the 68k");
static_assert(offsetof(FirmWar, builder_region_id) == 60, "FirmWar::builder_region_id moved on the 68k");
static_assert(offsetof(FirmWar, productivity) == 61, "FirmWar::productivity moved on the 68k");
static_assert(offsetof(FirmWar, worker_array) == 65, "FirmWar::worker_array moved on the 68k");
static_assert(offsetof(FirmWar, worker_count) == 69, "FirmWar::worker_count moved on the 68k");
static_assert(offsetof(FirmWar, selected_worker_id) == 70, "FirmWar::selected_worker_id moved on the 68k");
static_assert(offsetof(FirmWar, player_spy_count) == 71, "FirmWar::player_spy_count moved on the 68k");
static_assert(offsetof(FirmWar, sabotage_level) == 72, "FirmWar::sabotage_level moved on the 68k");
static_assert(offsetof(FirmWar, linked_firm_count) == 73, "FirmWar::linked_firm_count moved on the 68k");
static_assert(offsetof(FirmWar, linked_town_count) == 74, "FirmWar::linked_town_count moved on the 68k");
static_assert(offsetof(FirmWar, linked_firm_array) == 75, "FirmWar::linked_firm_array moved on the 68k");
static_assert(offsetof(FirmWar, linked_town_array) == 121, "FirmWar::linked_town_array moved on the 68k");
static_assert(offsetof(FirmWar, linked_firm_enable_array) == 181, "FirmWar::linked_firm_enable_array moved on the 68k");
static_assert(offsetof(FirmWar, linked_town_enable_array) == 204, "FirmWar::linked_town_enable_array moved on the 68k");
static_assert(offsetof(FirmWar, last_year_income) == 234, "FirmWar::last_year_income moved on the 68k");
static_assert(offsetof(FirmWar, cur_year_income) == 238, "FirmWar::cur_year_income moved on the 68k");
static_assert(offsetof(FirmWar, setup_date) == 242, "FirmWar::setup_date moved on the 68k");
static_assert(offsetof(FirmWar, should_set_power) == 246, "FirmWar::should_set_power moved on the 68k");
static_assert(offsetof(FirmWar, last_attacked_date) == 247, "FirmWar::last_attacked_date moved on the 68k");
static_assert(offsetof(FirmWar, should_close_flag) == 251, "FirmWar::should_close_flag moved on the 68k");
static_assert(offsetof(FirmWar, no_neighbor_space) == 252, "FirmWar::no_neighbor_space moved on the 68k");
static_assert(offsetof(FirmWar, ai_should_build_factory_count) == 253, "FirmWar::ai_should_build_factory_count moved on the 68k");
static_assert(offsetof(FirmWar, build_unit_id) == 254, "FirmWar::build_unit_id moved on the 68k");
static_assert(offsetof(FirmWar, last_process_build_frame_no) == 256, "FirmWar::last_process_build_frame_no moved on the 68k");
static_assert(offsetof(FirmWar, build_progress_days) == 260, "FirmWar::build_progress_days moved on the 68k");
static_assert(offsetof(FirmWar, build_queue_array) == 264, "FirmWar::build_queue_array moved on the 68k");
static_assert(offsetof(FirmWar, build_queue_count) == 284, "FirmWar::build_queue_count moved on the 68k");
static const LeRun le_runs_FirmWar[] = {
	{ 5, 2, 2 },
	{ 15, 2, 13 },
	{ 44, 4, 2 },
	{ 54, 2, 3 },
	{ 61, 4, 2 },
	{ 75, 2, 53 },
	{ 234, 4, 3 },
	{ 247, 4, 1 },
	{ 254, 2, 1 },
	{ 256, 4, 2 },
};
const LeTable le_table_FirmWar = { "FirmWar", 285, 10, le_runs_FirmWar };

// FirmHarbor: 425 bytes on the PC
static_assert(sizeof(FirmHarbor) == 425, "FirmHarbor is laid out differently on the 68k");
static_assert(offsetof(FirmHarbor, firm_id) == 4, "FirmHarbor::firm_id moved on the 68k");
static_assert(offsetof(FirmHarbor, firm_build_id) == 5, "FirmHarbor::firm_build_id moved on the 68k");
static_assert(offsetof(FirmHarbor, firm_recno) == 7, "FirmHarbor::firm_recno moved on the 68k");
static_assert(offsetof(FirmHarbor, firm_ai) == 9, "FirmHarbor::firm_ai moved on the 68k");
static_assert(offsetof(FirmHarbor, ai_processed) == 10, "FirmHarbor::ai_processed moved on the 68k");
static_assert(offsetof(FirmHarbor, ai_status) == 11, "FirmHarbor::ai_status moved on the 68k");
static_assert(offsetof(FirmHarbor, ai_link_checked) == 12, "FirmHarbor::ai_link_checked moved on the 68k");
static_assert(offsetof(FirmHarbor, ai_sell_flag) == 13, "FirmHarbor::ai_sell_flag moved on the 68k");
static_assert(offsetof(FirmHarbor, race_id) == 14, "FirmHarbor::race_id moved on the 68k");
static_assert(offsetof(FirmHarbor, nation_recno) == 15, "FirmHarbor::nation_recno moved on the 68k");
static_assert(offsetof(FirmHarbor, closest_town_name_id) == 17, "FirmHarbor::closest_town_name_id moved on the 68k");
static_assert(offsetof(FirmHarbor, firm_name_instance_id) == 19, "FirmHarbor::firm_name_instance_id moved on the 68k");
static_assert(offsetof(FirmHarbor, loc_x1) == 21, "FirmHarbor::loc_x1 moved on the 68k");
static_assert(offsetof(FirmHarbor, loc_y1) == 23, "FirmHarbor::loc_y1 moved on the 68k");
static_assert(offsetof(FirmHarbor, loc_x2) == 25, "FirmHarbor::loc_x2 moved on the 68k");
static_assert(offsetof(FirmHarbor, loc_y2) == 27, "FirmHarbor::loc_y2 moved on the 68k");
static_assert(offsetof(FirmHarbor, abs_x1) == 29, "FirmHarbor::abs_x1 moved on the 68k");
static_assert(offsetof(FirmHarbor, abs_y1) == 31, "FirmHarbor::abs_y1 moved on the 68k");
static_assert(offsetof(FirmHarbor, abs_x2) == 33, "FirmHarbor::abs_x2 moved on the 68k");
static_assert(offsetof(FirmHarbor, abs_y2) == 35, "FirmHarbor::abs_y2 moved on the 68k");
static_assert(offsetof(FirmHarbor, center_x) == 37, "FirmHarbor::center_x moved on the 68k");
static_assert(offsetof(FirmHarbor, center_y) == 39, "FirmHarbor::center_y moved on the 68k");
static_assert(offsetof(FirmHarbor, region_id) == 41, "FirmHarbor::region_id moved on the 68k");
static_assert(offsetof(FirmHarbor, cur_frame) == 42, "FirmHarbor::cur_frame moved on the 68k");
static_assert(offsetof(FirmHarbor, remain_frame_delay) == 43, "FirmHarbor::remain_frame_delay moved on the 68k");
static_assert(offsetof(FirmHarbor, hit_points) == 44, "FirmHarbor::hit_points moved on the 68k");
static_assert(offsetof(FirmHarbor, max_hit_points) == 48, "FirmHarbor::max_hit_points moved on the 68k");
static_assert(offsetof(FirmHarbor, under_construction) == 52, "FirmHarbor::under_construction moved on the 68k");
static_assert(offsetof(FirmHarbor, firm_skill_id) == 53, "FirmHarbor::firm_skill_id moved on the 68k");
static_assert(offsetof(FirmHarbor, overseer_recno) == 54, "FirmHarbor::overseer_recno moved on the 68k");
static_assert(offsetof(FirmHarbor, overseer_town_recno) == 56, "FirmHarbor::overseer_town_recno moved on the 68k");
static_assert(offsetof(FirmHarbor, builder_recno) == 58, "FirmHarbor::builder_recno moved on the 68k");
static_assert(offsetof(FirmHarbor, builder_region_id) == 60, "FirmHarbor::builder_region_id moved on the 68k");
static_assert(offsetof(FirmHarbor, productivity) == 61, "FirmHarbor::productivity moved on the 68k");
static_assert(offsetof(FirmHarbor, worker_array) == 65, "FirmHarbor::worker_array moved on the 68k");
static_assert(offsetof(FirmHarbor, worker_count) == 69, "FirmHarbor::worker_count moved on the 68k");
static_assert(offsetof(FirmHarbor, selected_worker_id) == 70, "FirmHarbor::selected_worker_id moved on the 68k");
static_assert(offsetof(FirmHarbor, player_spy_count) == 71, "FirmHarbor::player_spy_count moved on the 68k");
static_assert(offsetof(FirmHarbor, sabotage_level) == 72, "FirmHarbor::sabotage_level moved on the 68k");
static_assert(offsetof(FirmHarbor, linked_firm_count) == 73, "FirmHarbor::linked_firm_count moved on the 68k");
static_assert(offsetof(FirmHarbor, linked_town_count) == 74, "FirmHarbor::linked_town_count moved on the 68k");
static_assert(offsetof(FirmHarbor, linked_firm_array) == 75, "FirmHarbor::linked_firm_array moved on the 68k");
static_assert(offsetof(FirmHarbor, linked_town_array) == 121, "FirmHarbor::linked_town_array moved on the 68k");
static_assert(offsetof(FirmHarbor, linked_firm_enable_array) == 181, "FirmHarbor::linked_firm_enable_array moved on the 68k");
static_assert(offsetof(FirmHarbor, linked_town_enable_array) == 204, "FirmHarbor::linked_town_enable_array moved on the 68k");
static_assert(offsetof(FirmHarbor, last_year_income) == 234, "FirmHarbor::last_year_income moved on the 68k");
static_assert(offsetof(FirmHarbor, cur_year_income) == 238, "FirmHarbor::cur_year_income moved on the 68k");
static_assert(offsetof(FirmHarbor, setup_date) == 242, "FirmHarbor::setup_date moved on the 68k");
static_assert(offsetof(FirmHarbor, should_set_power) == 246, "FirmHarbor::should_set_power moved on the 68k");
static_assert(offsetof(FirmHarbor, last_attacked_date) == 247, "FirmHarbor::last_attacked_date moved on the 68k");
static_assert(offsetof(FirmHarbor, should_close_flag) == 251, "FirmHarbor::should_close_flag moved on the 68k");
static_assert(offsetof(FirmHarbor, no_neighbor_space) == 252, "FirmHarbor::no_neighbor_space moved on the 68k");
static_assert(offsetof(FirmHarbor, ai_should_build_factory_count) == 253, "FirmHarbor::ai_should_build_factory_count moved on the 68k");
static_assert(offsetof(FirmHarbor, ship_recno_array) == 254, "FirmHarbor::ship_recno_array moved on the 68k");
static_assert(offsetof(FirmHarbor, ship_count) == 262, "FirmHarbor::ship_count moved on the 68k");
static_assert(offsetof(FirmHarbor, build_unit_id) == 264, "FirmHarbor::build_unit_id moved on the 68k");
static_assert(offsetof(FirmHarbor, start_build_frame_no) == 266, "FirmHarbor::start_build_frame_no moved on the 68k");
static_assert(offsetof(FirmHarbor, build_queue_array) == 270, "FirmHarbor::build_queue_array moved on the 68k");
static_assert(offsetof(FirmHarbor, build_queue_count) == 280, "FirmHarbor::build_queue_count moved on the 68k");
static_assert(offsetof(FirmHarbor, land_region_id) == 281, "FirmHarbor::land_region_id moved on the 68k");
static_assert(offsetof(FirmHarbor, sea_region_id) == 282, "FirmHarbor::sea_region_id moved on the 68k");
static_assert(offsetof(FirmHarbor, link_checked) == 283, "FirmHarbor::link_checked moved on the 68k");
static_assert(offsetof(FirmHarbor, linked_mine_num) == 284, "FirmHarbor::linked_mine_num moved on the 68k");
static_assert(offsetof(FirmHarbor, linked_factory_num) == 285, "FirmHarbor::linked_factory_num moved on the 68k");
static_assert(offsetof(FirmHarbor, linked_market_num) == 286, "FirmHarbor::linked_market_num moved on the 68k");
static_assert(offsetof(FirmHarbor, linked_mine_array) == 287, "FirmHarbor::linked_mine_array moved on the 68k");
static_assert(offsetof(FirmHarbor, linked_factory_array) == 333, "FirmHarbor::linked_factory_array moved on the 68k");
static_assert(offsetof(FirmHarbor, linked_market_array) == 379, "FirmHarbor::linked_market_array moved on the 68k");
static const LeRun le_runs_FirmHarbor[] = {
	{ 5, 2, 2 },
	{ 15, 2, 13 },
	{ 44, 4, 2 },
	{ 54, 2, 3 },
	{ 61, 4, 2 },
	{ 75, 2, 53 },
	{ 234, 4, 3 },
	{ 247, 4, 1 },
	{ 254, 2, 6 },
	{ 266, 4, 1 },
	{ 287, 2, 69 },
};
const LeTable le_table_FirmHarbor = { "FirmHarbor", 425, 11, le_runs_FirmHarbor };

// FirmMonster: 444 bytes on the PC
static_assert(sizeof(FirmMonster) == 444, "FirmMonster is laid out differently on the 68k");
static_assert(offsetof(FirmMonster, firm_id) == 4, "FirmMonster::firm_id moved on the 68k");
static_assert(offsetof(FirmMonster, firm_build_id) == 5, "FirmMonster::firm_build_id moved on the 68k");
static_assert(offsetof(FirmMonster, firm_recno) == 7, "FirmMonster::firm_recno moved on the 68k");
static_assert(offsetof(FirmMonster, firm_ai) == 9, "FirmMonster::firm_ai moved on the 68k");
static_assert(offsetof(FirmMonster, ai_processed) == 10, "FirmMonster::ai_processed moved on the 68k");
static_assert(offsetof(FirmMonster, ai_status) == 11, "FirmMonster::ai_status moved on the 68k");
static_assert(offsetof(FirmMonster, ai_link_checked) == 12, "FirmMonster::ai_link_checked moved on the 68k");
static_assert(offsetof(FirmMonster, ai_sell_flag) == 13, "FirmMonster::ai_sell_flag moved on the 68k");
static_assert(offsetof(FirmMonster, race_id) == 14, "FirmMonster::race_id moved on the 68k");
static_assert(offsetof(FirmMonster, nation_recno) == 15, "FirmMonster::nation_recno moved on the 68k");
static_assert(offsetof(FirmMonster, closest_town_name_id) == 17, "FirmMonster::closest_town_name_id moved on the 68k");
static_assert(offsetof(FirmMonster, firm_name_instance_id) == 19, "FirmMonster::firm_name_instance_id moved on the 68k");
static_assert(offsetof(FirmMonster, loc_x1) == 21, "FirmMonster::loc_x1 moved on the 68k");
static_assert(offsetof(FirmMonster, loc_y1) == 23, "FirmMonster::loc_y1 moved on the 68k");
static_assert(offsetof(FirmMonster, loc_x2) == 25, "FirmMonster::loc_x2 moved on the 68k");
static_assert(offsetof(FirmMonster, loc_y2) == 27, "FirmMonster::loc_y2 moved on the 68k");
static_assert(offsetof(FirmMonster, abs_x1) == 29, "FirmMonster::abs_x1 moved on the 68k");
static_assert(offsetof(FirmMonster, abs_y1) == 31, "FirmMonster::abs_y1 moved on the 68k");
static_assert(offsetof(FirmMonster, abs_x2) == 33, "FirmMonster::abs_x2 moved on the 68k");
static_assert(offsetof(FirmMonster, abs_y2) == 35, "FirmMonster::abs_y2 moved on the 68k");
static_assert(offsetof(FirmMonster, center_x) == 37, "FirmMonster::center_x moved on the 68k");
static_assert(offsetof(FirmMonster, center_y) == 39, "FirmMonster::center_y moved on the 68k");
static_assert(offsetof(FirmMonster, region_id) == 41, "FirmMonster::region_id moved on the 68k");
static_assert(offsetof(FirmMonster, cur_frame) == 42, "FirmMonster::cur_frame moved on the 68k");
static_assert(offsetof(FirmMonster, remain_frame_delay) == 43, "FirmMonster::remain_frame_delay moved on the 68k");
static_assert(offsetof(FirmMonster, hit_points) == 44, "FirmMonster::hit_points moved on the 68k");
static_assert(offsetof(FirmMonster, max_hit_points) == 48, "FirmMonster::max_hit_points moved on the 68k");
static_assert(offsetof(FirmMonster, under_construction) == 52, "FirmMonster::under_construction moved on the 68k");
static_assert(offsetof(FirmMonster, firm_skill_id) == 53, "FirmMonster::firm_skill_id moved on the 68k");
static_assert(offsetof(FirmMonster, overseer_recno) == 54, "FirmMonster::overseer_recno moved on the 68k");
static_assert(offsetof(FirmMonster, overseer_town_recno) == 56, "FirmMonster::overseer_town_recno moved on the 68k");
static_assert(offsetof(FirmMonster, builder_recno) == 58, "FirmMonster::builder_recno moved on the 68k");
static_assert(offsetof(FirmMonster, builder_region_id) == 60, "FirmMonster::builder_region_id moved on the 68k");
static_assert(offsetof(FirmMonster, productivity) == 61, "FirmMonster::productivity moved on the 68k");
static_assert(offsetof(FirmMonster, worker_array) == 65, "FirmMonster::worker_array moved on the 68k");
static_assert(offsetof(FirmMonster, worker_count) == 69, "FirmMonster::worker_count moved on the 68k");
static_assert(offsetof(FirmMonster, selected_worker_id) == 70, "FirmMonster::selected_worker_id moved on the 68k");
static_assert(offsetof(FirmMonster, player_spy_count) == 71, "FirmMonster::player_spy_count moved on the 68k");
static_assert(offsetof(FirmMonster, sabotage_level) == 72, "FirmMonster::sabotage_level moved on the 68k");
static_assert(offsetof(FirmMonster, linked_firm_count) == 73, "FirmMonster::linked_firm_count moved on the 68k");
static_assert(offsetof(FirmMonster, linked_town_count) == 74, "FirmMonster::linked_town_count moved on the 68k");
static_assert(offsetof(FirmMonster, linked_firm_array) == 75, "FirmMonster::linked_firm_array moved on the 68k");
static_assert(offsetof(FirmMonster, linked_town_array) == 121, "FirmMonster::linked_town_array moved on the 68k");
static_assert(offsetof(FirmMonster, linked_firm_enable_array) == 181, "FirmMonster::linked_firm_enable_array moved on the 68k");
static_assert(offsetof(FirmMonster, linked_town_enable_array) == 204, "FirmMonster::linked_town_enable_array moved on the 68k");
static_assert(offsetof(FirmMonster, last_year_income) == 234, "FirmMonster::last_year_income moved on the 68k");
static_assert(offsetof(FirmMonster, cur_year_income) == 238, "FirmMonster::cur_year_income moved on the 68k");
static_assert(offsetof(FirmMonster, setup_date) == 242, "FirmMonster::setup_date moved on the 68k");
static_assert(offsetof(FirmMonster, should_set_power) == 246, "FirmMonster::should_set_power moved on the 68k");
static_assert(offsetof(FirmMonster, last_attacked_date) == 247, "FirmMonster::last_attacked_date moved on the 68k");
static_assert(offsetof(FirmMonster, should_close_flag) == 251, "FirmMonster::should_close_flag moved on the 68k");
static_assert(offsetof(FirmMonster, no_neighbor_space) == 252, "FirmMonster::no_neighbor_space moved on the 68k");
static_assert(offsetof(FirmMonster, ai_should_build_factory_count) == 253, "FirmMonster::ai_should_build_factory_count moved on the 68k");
static_assert(offsetof(FirmMonster, monster_id) == 254, "FirmMonster::monster_id moved on the 68k");
static_assert(offsetof(FirmMonster, monster_general_count) == 256, "FirmMonster::monster_general_count moved on the 68k");
static_assert(offsetof(FirmMonster, monster_aggressiveness) == 258, "FirmMonster::monster_aggressiveness moved on the 68k");
static_assert(offsetof(FirmMonster, defending_king_count) == 259, "FirmMonster::defending_king_count moved on the 68k");
static_assert(offsetof(FirmMonster, defending_general_count) == 260, "FirmMonster::defending_general_count moved on the 68k");
static_assert(offsetof(FirmMonster, defending_soldier_count) == 261, "FirmMonster::defending_soldier_count moved on the 68k");
static_assert(offsetof(FirmMonster, monster_king) == 262, "FirmMonster::monster_king moved on the 68k");
static_assert(offsetof(FirmMonster, monster_general_array) == 273, "FirmMonster::monster_general_array moved on the 68k");
static_assert(offsetof(FirmMonster, waiting_soldier_count) == 361, "FirmMonster::waiting_soldier_count moved on the 68k");
static_assert(offsetof(FirmMonster, waiting_soldier_array) == 362, "FirmMonster::waiting_soldier_array moved on the 68k");
static_assert(offsetof(FirmMonster, monster_nation_relation) == 422, "FirmMonster::monster_nation_relation moved on the 68k");
static_assert(offsetof(FirmMonster, defend_target_recno) == 423, "FirmMonster::defend_target_recno moved on the 68k");
static_assert(offsetof(FirmMonster, patrol_unit_count) == 425, "FirmMonster::patrol_unit_count moved on the 68k");
static_assert(offsetof(FirmMonster, patrol_unit_array) == 426, "FirmMonster::patrol_unit_array moved on the 68k");
static const LeRun le_runs_FirmMonster[] = {
	{ 5, 2, 2 },
	{ 15, 2, 13 },
	{ 44, 4, 2 },
	{ 54, 2, 3 },
	{ 61, 4, 2 },
	{ 75, 2, 53 },
	{ 234, 4, 3 },
	{ 247, 4, 1 },
	{ 254, 2, 2 },
	{ 264, 2, 1 },
	{ 267, 2, 2 },
	{ 275, 2, 1 },
	{ 278, 2, 2 },
	{ 286, 2, 1 },
	{ 289, 2, 2 },
	{ 297, 2, 1 },
	{ 300, 2, 2 },
	{ 308, 2, 1 },
	{ 311, 2, 2 },
	{ 319, 2, 1 },
	{ 322, 2, 2 },
	{ 330, 2, 1 },
	{ 333, 2, 2 },
	{ 341, 2, 1 },
	{ 344, 2, 2 },
	{ 352, 2, 1 },
	{ 355, 2, 2 },
	{ 362, 2, 30 },
	{ 423, 2, 1 },
	{ 426, 2, 9 },
};
const LeTable le_table_FirmMonster = { "FirmMonster", 444, 30, le_runs_FirmMonster };

// Site: 15 bytes on the PC
static_assert(sizeof(Site) == 15, "Site is laid out differently on the 68k");
static_assert(offsetof(Site, site_recno) == 0, "Site::site_recno moved on the 68k");
static_assert(offsetof(Site, site_type) == 2, "Site::site_type moved on the 68k");
static_assert(offsetof(Site, object_id) == 3, "Site::object_id moved on the 68k");
static_assert(offsetof(Site, reserve_qty) == 5, "Site::reserve_qty moved on the 68k");
static_assert(offsetof(Site, has_mine) == 9, "Site::has_mine moved on the 68k");
static_assert(offsetof(Site, map_x_loc) == 10, "Site::map_x_loc moved on the 68k");
static_assert(offsetof(Site, map_y_loc) == 12, "Site::map_y_loc moved on the 68k");
static_assert(offsetof(Site, region_id) == 14, "Site::region_id moved on the 68k");
static const LeRun le_runs_Site[] = {
	{ 0, 2, 1 },
	{ 3, 2, 1 },
	{ 5, 4, 1 },
	{ 10, 2, 2 },
};
const LeTable le_table_Site = { "Site", 15, 4, le_runs_Site };

// Town: 817 bytes on the PC
static_assert(sizeof(Town) == 817, "Town is laid out differently on the 68k");
static_assert(offsetof(Town, town_recno) == 0, "Town::town_recno moved on the 68k");
static_assert(offsetof(Town, town_name_id) == 2, "Town::town_name_id moved on the 68k");
static_assert(offsetof(Town, nation_recno) == 4, "Town::nation_recno moved on the 68k");
static_assert(offsetof(Town, rebel_recno) == 6, "Town::rebel_recno moved on the 68k");
static_assert(offsetof(Town, race_id) == 8, "Town::race_id moved on the 68k");
static_assert(offsetof(Town, setup_date) == 9, "Town::setup_date moved on the 68k");
static_assert(offsetof(Town, ai_town) == 13, "Town::ai_town moved on the 68k");
static_assert(offsetof(Town, ai_link_checked) == 14, "Town::ai_link_checked moved on the 68k");
static_assert(offsetof(Town, independ_town_nation_relation) == 15, "Town::independ_town_nation_relation moved on the 68k");
static_assert(offsetof(Town, has_linked_own_camp) == 16, "Town::has_linked_own_camp moved on the 68k");
static_assert(offsetof(Town, has_linked_enemy_camp) == 17, "Town::has_linked_enemy_camp moved on the 68k");
static_assert(offsetof(Town, is_base_town) == 18, "Town::is_base_town moved on the 68k");
static_assert(offsetof(Town, loc_x1) == 19, "Town::loc_x1 moved on the 68k");
static_assert(offsetof(Town, loc_y1) == 21, "Town::loc_y1 moved on the 68k");
static_assert(offsetof(Town, loc_x2) == 23, "Town::loc_x2 moved on the 68k");
static_assert(offsetof(Town, loc_y2) == 25, "Town::loc_y2 moved on the 68k");
static_assert(offsetof(Town, abs_x1) == 27, "Town::abs_x1 moved on the 68k");
static_assert(offsetof(Town, abs_y1) == 29, "Town::abs_y1 moved on the 68k");
static_assert(offsetof(Town, abs_x2) == 31, "Town::abs_x2 moved on the 68k");
static_assert(offsetof(Town, abs_y2) == 33, "Town::abs_y2 moved on the 68k");
static_assert(offsetof(Town, center_x) == 35, "Town::center_x moved on the 68k");
static_assert(offsetof(Town, center_y) == 37, "Town::center_y moved on the 68k");
static_assert(offsetof(Town, region_id) == 39, "Town::region_id moved on the 68k");
static_assert(offsetof(Town, layout_id) == 40, "Town::layout_id moved on the 68k");
static_assert(offsetof(Town, first_slot_id) == 42, "Town::first_slot_id moved on the 68k");
static_assert(offsetof(Town, slot_object_id_array) == 44, "Town::slot_object_id_array moved on the 68k");
static_assert(offsetof(Town, population) == 94, "Town::population moved on the 68k");
static_assert(offsetof(Town, jobless_population) == 96, "Town::jobless_population moved on the 68k");
static_assert(offsetof(Town, max_race_pop_array) == 98, "Town::max_race_pop_array moved on the 68k");
static_assert(offsetof(Town, race_pop_array) == 118, "Town::race_pop_array moved on the 68k");
static_assert(offsetof(Town, race_pop_growth_array) == 138, "Town::race_pop_growth_array moved on the 68k");
static_assert(offsetof(Town, jobless_race_pop_array) == 148, "Town::jobless_race_pop_array moved on the 68k");
static_assert(offsetof(Town, race_loyalty_array) == 168, "Town::race_loyalty_array moved on the 68k");
static_assert(offsetof(Town, race_target_loyalty_array) == 208, "Town::race_target_loyalty_array moved on the 68k");
static_assert(offsetof(Town, race_spy_count_array) == 218, "Town::race_spy_count_array moved on the 68k");
static_assert(offsetof(Town, race_resistance_array) == 238, "Town::race_resistance_array moved on the 68k");
static_assert(offsetof(Town, race_target_resistance_array) == 518, "Town::race_target_resistance_array moved on the 68k");
static_assert(offsetof(Town, town_defender_count) == 588, "Town::town_defender_count moved on the 68k");
static_assert(offsetof(Town, last_being_attacked_date) == 590, "Town::last_being_attacked_date moved on the 68k");
static_assert(offsetof(Town, received_hit_count) == 594, "Town::received_hit_count moved on the 68k");
static_assert(offsetof(Town, train_queue_skill_array) == 598, "Town::train_queue_skill_array moved on the 68k");
static_assert(offsetof(Town, train_queue_race_array) == 608, "Town::train_queue_race_array moved on the 68k");
static_assert(offsetof(Town, train_queue_count) == 618, "Town::train_queue_count moved on the 68k");
static_assert(offsetof(Town, train_unit_recno) == 619, "Town::train_unit_recno moved on the 68k");
static_assert(offsetof(Town, train_unit_action_id) == 621, "Town::train_unit_action_id moved on the 68k");
static_assert(offsetof(Town, start_train_frame_no) == 625, "Town::start_train_frame_no moved on the 68k");
static_assert(offsetof(Town, defend_target_recno) == 629, "Town::defend_target_recno moved on the 68k");
static_assert(offsetof(Town, accumulated_collect_tax_penalty) == 631, "Town::accumulated_collect_tax_penalty moved on the 68k");
static_assert(offsetof(Town, accumulated_reward_penalty) == 635, "Town::accumulated_reward_penalty moved on the 68k");
static_assert(offsetof(Town, accumulated_recruit_penalty) == 639, "Town::accumulated_recruit_penalty moved on the 68k");
static_assert(offsetof(Town, accumulated_enemy_grant_penalty) == 643, "Town::accumulated_enemy_grant_penalty moved on the 68k");
static_assert(offsetof(Town, last_rebel_date) == 647, "Town::last_rebel_date moved on the 68k");
static_assert(offsetof(Town, independent_unit_join_nation_min_rating) == 651, "Town::independent_unit_join_nation_min_rating moved on the 68k");
static_assert(offsetof(Town, quality_of_life) == 653, "Town::quality_of_life moved on the 68k");
static_assert(offsetof(Town, auto_collect_tax_loyalty) == 655, "Town::auto_collect_tax_loyalty moved on the 68k");
static_assert(offsetof(Town, auto_grant_loyalty) == 657, "Town::auto_grant_loyalty moved on the 68k");
static_assert(offsetof(Town, town_combat_level) == 659, "Town::town_combat_level moved on the 68k");
static_assert(offsetof(Town, has_product_supply) == 660, "Town::has_product_supply moved on the 68k");
static_assert(offsetof(Town, no_neighbor_space) == 663, "Town::no_neighbor_space moved on the 68k");
static_assert(offsetof(Town, linked_firm_count) == 664, "Town::linked_firm_count moved on the 68k");
static_assert(offsetof(Town, linked_town_count) == 666, "Town::linked_town_count moved on the 68k");
static_assert(offsetof(Town, linked_firm_array) == 668, "Town::linked_firm_array moved on the 68k");
static_assert(offsetof(Town, linked_town_array) == 728, "Town::linked_town_array moved on the 68k");
static_assert(offsetof(Town, linked_firm_enable_array) == 764, "Town::linked_firm_enable_array moved on the 68k");
static_assert(offsetof(Town, linked_town_enable_array) == 794, "Town::linked_town_enable_array moved on the 68k");
static_assert(offsetof(Town, town_network_recno) == 812, "Town::town_network_recno moved on the 68k");
static_assert(offsetof(Town, town_network_pulsed) == 816, "Town::town_network_pulsed moved on the 68k");
static const LeRun le_runs_Town[] = {
	{ 0, 2, 4 },
	{ 9, 4, 1 },
	{ 19, 2, 10 },
	{ 40, 2, 49 },
	{ 148, 2, 10 },
	{ 168, 4, 10 },
	{ 218, 2, 10 },
	{ 238, 4, 70 },
	{ 588, 2, 1 },
	{ 590, 4, 2 },
	{ 619, 2, 1 },
	{ 621, 4, 2 },
	{ 629, 2, 1 },
	{ 631, 4, 5 },
	{ 651, 2, 4 },
	{ 664, 2, 50 },
	{ 812, 4, 1 },
};
const LeTable le_table_Town = { "Town", 817, 17, le_runs_Town };

// Version_1_Town: 665 bytes on the PC
static_assert(sizeof(Version_1_Town) == 665, "Version_1_Town is laid out differently on the 68k");
static_assert(offsetof(Version_1_Town, town_recno) == 0, "Version_1_Town::town_recno moved on the 68k");
static_assert(offsetof(Version_1_Town, town_name_id) == 2, "Version_1_Town::town_name_id moved on the 68k");
static_assert(offsetof(Version_1_Town, nation_recno) == 4, "Version_1_Town::nation_recno moved on the 68k");
static_assert(offsetof(Version_1_Town, rebel_recno) == 6, "Version_1_Town::rebel_recno moved on the 68k");
static_assert(offsetof(Version_1_Town, race_id) == 8, "Version_1_Town::race_id moved on the 68k");
static_assert(offsetof(Version_1_Town, setup_date) == 9, "Version_1_Town::setup_date moved on the 68k");
static_assert(offsetof(Version_1_Town, ai_town) == 13, "Version_1_Town::ai_town moved on the 68k");
static_assert(offsetof(Version_1_Town, ai_link_checked) == 14, "Version_1_Town::ai_link_checked moved on the 68k");
static_assert(offsetof(Version_1_Town, independ_town_nation_relation) == 15, "Version_1_Town::independ_town_nation_relation moved on the 68k");
static_assert(offsetof(Version_1_Town, has_linked_own_camp) == 16, "Version_1_Town::has_linked_own_camp moved on the 68k");
static_assert(offsetof(Version_1_Town, has_linked_enemy_camp) == 17, "Version_1_Town::has_linked_enemy_camp moved on the 68k");
static_assert(offsetof(Version_1_Town, is_base_town) == 18, "Version_1_Town::is_base_town moved on the 68k");
static_assert(offsetof(Version_1_Town, loc_x1) == 19, "Version_1_Town::loc_x1 moved on the 68k");
static_assert(offsetof(Version_1_Town, loc_y1) == 21, "Version_1_Town::loc_y1 moved on the 68k");
static_assert(offsetof(Version_1_Town, loc_x2) == 23, "Version_1_Town::loc_x2 moved on the 68k");
static_assert(offsetof(Version_1_Town, loc_y2) == 25, "Version_1_Town::loc_y2 moved on the 68k");
static_assert(offsetof(Version_1_Town, abs_x1) == 27, "Version_1_Town::abs_x1 moved on the 68k");
static_assert(offsetof(Version_1_Town, abs_y1) == 29, "Version_1_Town::abs_y1 moved on the 68k");
static_assert(offsetof(Version_1_Town, abs_x2) == 31, "Version_1_Town::abs_x2 moved on the 68k");
static_assert(offsetof(Version_1_Town, abs_y2) == 33, "Version_1_Town::abs_y2 moved on the 68k");
static_assert(offsetof(Version_1_Town, center_x) == 35, "Version_1_Town::center_x moved on the 68k");
static_assert(offsetof(Version_1_Town, center_y) == 37, "Version_1_Town::center_y moved on the 68k");
static_assert(offsetof(Version_1_Town, region_id) == 39, "Version_1_Town::region_id moved on the 68k");
static_assert(offsetof(Version_1_Town, layout_id) == 40, "Version_1_Town::layout_id moved on the 68k");
static_assert(offsetof(Version_1_Town, first_slot_id) == 42, "Version_1_Town::first_slot_id moved on the 68k");
static_assert(offsetof(Version_1_Town, slot_object_id_array) == 44, "Version_1_Town::slot_object_id_array moved on the 68k");
static_assert(offsetof(Version_1_Town, population) == 94, "Version_1_Town::population moved on the 68k");
static_assert(offsetof(Version_1_Town, jobless_population) == 96, "Version_1_Town::jobless_population moved on the 68k");
static_assert(offsetof(Version_1_Town, max_race_pop_array) == 98, "Version_1_Town::max_race_pop_array moved on the 68k");
static_assert(offsetof(Version_1_Town, race_pop_array) == 112, "Version_1_Town::race_pop_array moved on the 68k");
static_assert(offsetof(Version_1_Town, race_pop_growth_array) == 126, "Version_1_Town::race_pop_growth_array moved on the 68k");
static_assert(offsetof(Version_1_Town, jobless_race_pop_array) == 133, "Version_1_Town::jobless_race_pop_array moved on the 68k");
static_assert(offsetof(Version_1_Town, race_loyalty_array) == 147, "Version_1_Town::race_loyalty_array moved on the 68k");
static_assert(offsetof(Version_1_Town, race_target_loyalty_array) == 175, "Version_1_Town::race_target_loyalty_array moved on the 68k");
static_assert(offsetof(Version_1_Town, race_spy_count_array) == 182, "Version_1_Town::race_spy_count_array moved on the 68k");
static_assert(offsetof(Version_1_Town, race_resistance_array) == 196, "Version_1_Town::race_resistance_array moved on the 68k");
static_assert(offsetof(Version_1_Town, race_target_resistance_array) == 392, "Version_1_Town::race_target_resistance_array moved on the 68k");
static_assert(offsetof(Version_1_Town, town_defender_count) == 441, "Version_1_Town::town_defender_count moved on the 68k");
static_assert(offsetof(Version_1_Town, last_being_attacked_date) == 443, "Version_1_Town::last_being_attacked_date moved on the 68k");
static_assert(offsetof(Version_1_Town, received_hit_count) == 447, "Version_1_Town::received_hit_count moved on the 68k");
static_assert(offsetof(Version_1_Town, train_queue_skill_array) == 451, "Version_1_Town::train_queue_skill_array moved on the 68k");
static_assert(offsetof(Version_1_Town, train_queue_race_array) == 461, "Version_1_Town::train_queue_race_array moved on the 68k");
static_assert(offsetof(Version_1_Town, train_queue_count) == 471, "Version_1_Town::train_queue_count moved on the 68k");
static_assert(offsetof(Version_1_Town, train_unit_recno) == 472, "Version_1_Town::train_unit_recno moved on the 68k");
static_assert(offsetof(Version_1_Town, train_unit_action_id) == 474, "Version_1_Town::train_unit_action_id moved on the 68k");
static_assert(offsetof(Version_1_Town, start_train_frame_no) == 478, "Version_1_Town::start_train_frame_no moved on the 68k");
static_assert(offsetof(Version_1_Town, defend_target_recno) == 482, "Version_1_Town::defend_target_recno moved on the 68k");
static_assert(offsetof(Version_1_Town, accumulated_collect_tax_penalty) == 484, "Version_1_Town::accumulated_collect_tax_penalty moved on the 68k");
static_assert(offsetof(Version_1_Town, accumulated_reward_penalty) == 488, "Version_1_Town::accumulated_reward_penalty moved on the 68k");
static_assert(offsetof(Version_1_Town, accumulated_recruit_penalty) == 492, "Version_1_Town::accumulated_recruit_penalty moved on the 68k");
static_assert(offsetof(Version_1_Town, accumulated_enemy_grant_penalty) == 496, "Version_1_Town::accumulated_enemy_grant_penalty moved on the 68k");
static_assert(offsetof(Version_1_Town, last_rebel_date) == 500, "Version_1_Town::last_rebel_date moved on the 68k");
static_assert(offsetof(Version_1_Town, independent_unit_join_nation_min_rating) == 504, "Version_1_Town::independent_unit_join_nation_min_rating moved on the 68k");
static_assert(offsetof(Version_1_Town, quality_of_life) == 506, "Version_1_Town::quality_of_life moved on the 68k");
static_assert(offsetof(Version_1_Town, auto_collect_tax_loyalty) == 508, "Version_1_Town::auto_collect_tax_loyalty moved on the 68k");
static_assert(offsetof(Version_1_Town, auto_grant_loyalty) == 510, "Version_1_Town::auto_grant_loyalty moved on the 68k");
static_assert(offsetof(Version_1_Town, town_combat_level) == 512, "Version_1_Town::town_combat_level moved on the 68k");
static_assert(offsetof(Version_1_Town, has_product_supply) == 513, "Version_1_Town::has_product_supply moved on the 68k");
static_assert(offsetof(Version_1_Town, no_neighbor_space) == 516, "Version_1_Town::no_neighbor_space moved on the 68k");
static_assert(offsetof(Version_1_Town, linked_firm_count) == 517, "Version_1_Town::linked_firm_count moved on the 68k");
static_assert(offsetof(Version_1_Town, linked_town_count) == 519, "Version_1_Town::linked_town_count moved on the 68k");
static_assert(offsetof(Version_1_Town, linked_firm_array) == 521, "Version_1_Town::linked_firm_array moved on the 68k");
static_assert(offsetof(Version_1_Town, linked_town_array) == 581, "Version_1_Town::linked_town_array moved on the 68k");
static_assert(offsetof(Version_1_Town, linked_firm_enable_array) == 617, "Version_1_Town::linked_firm_enable_array moved on the 68k");
static_assert(offsetof(Version_1_Town, linked_town_enable_array) == 647, "Version_1_Town::linked_town_enable_array moved on the 68k");
static const LeRun le_runs_Version_1_Town[] = {
	{ 0, 2, 4 },
	{ 9, 4, 1 },
	{ 19, 2, 10 },
	{ 40, 2, 43 },
	{ 133, 2, 7 },
	{ 147, 4, 7 },
	{ 182, 2, 7 },
	{ 196, 4, 49 },
	{ 441, 2, 1 },
	{ 443, 4, 2 },
	{ 472, 2, 1 },
	{ 474, 4, 2 },
	{ 482, 2, 1 },
	{ 484, 4, 5 },
	{ 504, 2, 4 },
	{ 517, 2, 50 },
};
const LeTable le_table_Version_1_Town = { "Version_1_Town", 665, 16, le_runs_Version_1_Town };

// Rebel: 14 bytes on the PC
static_assert(sizeof(Rebel) == 14, "Rebel is laid out differently on the 68k");
static_assert(offsetof(Rebel, rebel_recno) == 0, "Rebel::rebel_recno moved on the 68k");
static_assert(offsetof(Rebel, leader_unit_recno) == 2, "Rebel::leader_unit_recno moved on the 68k");
static_assert(offsetof(Rebel, action_mode) == 4, "Rebel::action_mode moved on the 68k");
static_assert(offsetof(Rebel, action_para) == 5, "Rebel::action_para moved on the 68k");
static_assert(offsetof(Rebel, action_para2) == 7, "Rebel::action_para2 moved on the 68k");
static_assert(offsetof(Rebel, mobile_rebel_count) == 9, "Rebel::mobile_rebel_count moved on the 68k");
static_assert(offsetof(Rebel, town_recno) == 11, "Rebel::town_recno moved on the 68k");
static_assert(offsetof(Rebel, hostile_nation_bits) == 13, "Rebel::hostile_nation_bits moved on the 68k");
static const LeRun le_runs_Rebel[] = {
	{ 0, 2, 2 },
	{ 5, 2, 4 },
};
const LeTable le_table_Rebel = { "Rebel", 14, 2, le_runs_Rebel };

// ActionNode: 48 bytes on the PC
static_assert(sizeof(ActionNode) == 48, "ActionNode is laid out differently on the 68k");
static_assert(offsetof(ActionNode, action_mode) == 0, "ActionNode::action_mode moved on the 68k");
static_assert(offsetof(ActionNode, action_type) == 1, "ActionNode::action_type moved on the 68k");
static_assert(offsetof(ActionNode, action_para) == 2, "ActionNode::action_para moved on the 68k");
static_assert(offsetof(ActionNode, action_para2) == 4, "ActionNode::action_para2 moved on the 68k");
static_assert(offsetof(ActionNode, action_id) == 6, "ActionNode::action_id moved on the 68k");
static_assert(offsetof(ActionNode, add_date) == 8, "ActionNode::add_date moved on the 68k");
static_assert(offsetof(ActionNode, unit_recno) == 12, "ActionNode::unit_recno moved on the 68k");
static_assert(offsetof(ActionNode, action_x_loc) == 14, "ActionNode::action_x_loc moved on the 68k");
static_assert(offsetof(ActionNode, action_y_loc) == 16, "ActionNode::action_y_loc moved on the 68k");
static_assert(offsetof(ActionNode, ref_x_loc) == 18, "ActionNode::ref_x_loc moved on the 68k");
static_assert(offsetof(ActionNode, ref_y_loc) == 20, "ActionNode::ref_y_loc moved on the 68k");
static_assert(offsetof(ActionNode, retry_count) == 22, "ActionNode::retry_count moved on the 68k");
static_assert(offsetof(ActionNode, instance_count) == 23, "ActionNode::instance_count moved on the 68k");
static_assert(offsetof(ActionNode, group_unit_array) == 24, "ActionNode::group_unit_array moved on the 68k");
static_assert(offsetof(ActionNode, processing_instance_count) == 42, "ActionNode::processing_instance_count moved on the 68k");
static_assert(offsetof(ActionNode, processed_instance_count) == 43, "ActionNode::processed_instance_count moved on the 68k");
static_assert(offsetof(ActionNode, next_retry_date) == 44, "ActionNode::next_retry_date moved on the 68k");
static const LeRun le_runs_ActionNode[] = {
	{ 2, 2, 3 },
	{ 8, 4, 1 },
	{ 12, 2, 5 },
	{ 24, 2, 9 },
	{ 44, 4, 1 },
};
const LeTable le_table_ActionNode = { "ActionNode", 48, 5, le_runs_ActionNode };

// SnowGroundArray: 12 bytes on the PC
static_assert(sizeof(SnowGroundArray) == 12, "SnowGroundArray is laid out differently on the 68k");
static_assert(offsetof(SnowGroundArray, seed) == 0, "SnowGroundArray::seed moved on the 68k");
static_assert(offsetof(SnowGroundArray, snow_thick) == 4, "SnowGroundArray::snow_thick moved on the 68k");
static_assert(offsetof(SnowGroundArray, snow_pattern) == 8, "SnowGroundArray::snow_pattern moved on the 68k");
static const LeRun le_runs_SnowGroundArray[] = {
	{ 0, 4, 3 },
};
const LeTable le_table_SnowGroundArray = { "SnowGroundArray", 12, 1, le_runs_SnowGroundArray };

// RegionInfo: 18 bytes on the PC
static_assert(sizeof(RegionInfo) == 18, "RegionInfo is laid out differently on the 68k");
static_assert(offsetof(RegionInfo, region_id) == 0, "RegionInfo::region_id moved on the 68k");
static_assert(offsetof(RegionInfo, region_stat_id) == 1, "RegionInfo::region_stat_id moved on the 68k");
static_assert(offsetof(RegionInfo, region_type) == 2, "RegionInfo::region_type moved on the 68k");
static_assert(offsetof(RegionInfo, adj_offset_bit) == 6, "RegionInfo::adj_offset_bit moved on the 68k");
static_assert(offsetof(RegionInfo, region_size) == 10, "RegionInfo::region_size moved on the 68k");
static_assert(offsetof(RegionInfo, center_x) == 14, "RegionInfo::center_x moved on the 68k");
static_assert(offsetof(RegionInfo, center_y) == 16, "RegionInfo::center_y moved on the 68k");
static const LeRun le_runs_RegionInfo[] = {
	{ 2, 4, 3 },
	{ 14, 2, 2 },
};
const LeTable le_table_RegionInfo = { "RegionInfo", 18, 2, le_runs_RegionInfo };

// RegionStat: 190 bytes on the PC
static_assert(sizeof(RegionStat) == 190, "RegionStat is laid out differently on the 68k");
static_assert(offsetof(RegionStat, region_id) == 0, "RegionStat::region_id moved on the 68k");
static_assert(offsetof(RegionStat, nation_is_present_array) == 1, "RegionStat::nation_is_present_array moved on the 68k");
static_assert(offsetof(RegionStat, nation_presence_count) == 8, "RegionStat::nation_presence_count moved on the 68k");
static_assert(offsetof(RegionStat, firm_type_count_array) == 9, "RegionStat::firm_type_count_array moved on the 68k");
static_assert(offsetof(RegionStat, firm_nation_count_array) == 29, "RegionStat::firm_nation_count_array moved on the 68k");
static_assert(offsetof(RegionStat, camp_nation_count_array) == 43, "RegionStat::camp_nation_count_array moved on the 68k");
static_assert(offsetof(RegionStat, mine_nation_count_array) == 57, "RegionStat::mine_nation_count_array moved on the 68k");
static_assert(offsetof(RegionStat, harbor_nation_count_array) == 71, "RegionStat::harbor_nation_count_array moved on the 68k");
static_assert(offsetof(RegionStat, total_firm_count) == 85, "RegionStat::total_firm_count moved on the 68k");
static_assert(offsetof(RegionStat, town_nation_count_array) == 87, "RegionStat::town_nation_count_array moved on the 68k");
static_assert(offsetof(RegionStat, base_town_nation_count_array) == 101, "RegionStat::base_town_nation_count_array moved on the 68k");
static_assert(offsetof(RegionStat, independent_town_count) == 115, "RegionStat::independent_town_count moved on the 68k");
static_assert(offsetof(RegionStat, total_town_count) == 117, "RegionStat::total_town_count moved on the 68k");
static_assert(offsetof(RegionStat, nation_population_array) == 119, "RegionStat::nation_population_array moved on the 68k");
static_assert(offsetof(RegionStat, nation_jobless_population_array) == 133, "RegionStat::nation_jobless_population_array moved on the 68k");
static_assert(offsetof(RegionStat, unit_nation_count_array) == 147, "RegionStat::unit_nation_count_array moved on the 68k");
static_assert(offsetof(RegionStat, independent_unit_count) == 161, "RegionStat::independent_unit_count moved on the 68k");
static_assert(offsetof(RegionStat, total_unit_count) == 163, "RegionStat::total_unit_count moved on the 68k");
static_assert(offsetof(RegionStat, site_count) == 165, "RegionStat::site_count moved on the 68k");
static_assert(offsetof(RegionStat, raw_count) == 167, "RegionStat::raw_count moved on the 68k");
static_assert(offsetof(RegionStat, reachable_region_array) == 169, "RegionStat::reachable_region_array moved on the 68k");
static_assert(offsetof(RegionStat, reachable_region_count) == 189, "RegionStat::reachable_region_count moved on the 68k");
static const LeRun le_runs_RegionStat[] = {
	{ 9, 2, 80 },
};
const LeTable le_table_RegionStat = { "RegionStat", 190, 1, le_runs_RegionStat };

// News: 37 bytes on the PC
static_assert(sizeof(News) == 37, "News is laid out differently on the 68k");
static_assert(offsetof(News, id) == 0, "News::id moved on the 68k");
static_assert(offsetof(News, type) == 1, "News::type moved on the 68k");
static_assert(offsetof(News, news_date) == 2, "News::news_date moved on the 68k");
static_assert(offsetof(News, nation_color1) == 6, "News::nation_color1 moved on the 68k");
static_assert(offsetof(News, nation_color2) == 7, "News::nation_color2 moved on the 68k");
static_assert(offsetof(News, nation_race_id1) == 8, "News::nation_race_id1 moved on the 68k");
static_assert(offsetof(News, nation_race_id2) == 9, "News::nation_race_id2 moved on the 68k");
static_assert(offsetof(News, nation_name_id1) == 10, "News::nation_name_id1 moved on the 68k");
static_assert(offsetof(News, nation_name_id2) == 14, "News::nation_name_id2 moved on the 68k");
static_assert(offsetof(News, short_para1) == 18, "News::short_para1 moved on the 68k");
static_assert(offsetof(News, short_para2) == 20, "News::short_para2 moved on the 68k");
static_assert(offsetof(News, short_para3) == 22, "News::short_para3 moved on the 68k");
static_assert(offsetof(News, short_para4) == 24, "News::short_para4 moved on the 68k");
static_assert(offsetof(News, short_para5) == 26, "News::short_para5 moved on the 68k");
static_assert(offsetof(News, loc_type) == 28, "News::loc_type moved on the 68k");
static_assert(offsetof(News, loc_type_para) == 29, "News::loc_type_para moved on the 68k");
static_assert(offsetof(News, loc_type_para2) == 31, "News::loc_type_para2 moved on the 68k");
static_assert(offsetof(News, loc_x) == 33, "News::loc_x moved on the 68k");
static_assert(offsetof(News, loc_y) == 35, "News::loc_y moved on the 68k");
static const LeRun le_runs_News[] = {
	{ 2, 4, 1 },
	{ 10, 4, 2 },
	{ 18, 2, 5 },
	{ 29, 2, 4 },
};
const LeTable le_table_News = { "News", 37, 4, le_runs_News };

// EmptyRoom: 6 bytes on the PC
static_assert(sizeof(EmptyRoom) == 6, "EmptyRoom is laid out differently on the 68k");
static_assert(offsetof(EmptyRoom, recno) == 0, "EmptyRoom::recno moved on the 68k");
static_assert(offsetof(EmptyRoom, deleted_game_date) == 2, "EmptyRoom::deleted_game_date moved on the 68k");
static const LeRun le_runs_EmptyRoom[] = {
	{ 0, 2, 1 },
	{ 2, 4, 1 },
};
const LeTable le_table_EmptyRoom = { "EmptyRoom", 6, 2, le_runs_EmptyRoom };

// HallFameEntry: 36 bytes on the PC
static_assert(sizeof(HallFameEntry) == 36, "HallFameEntry is laid out differently on the 68k");
static_assert(offsetof(HallFameEntry, player_name) == 0, "HallFameEntry::player_name moved on the 68k");
static_assert(offsetof(HallFameEntry, race_id) == 21, "HallFameEntry::race_id moved on the 68k");
static_assert(offsetof(HallFameEntry, start_year) == 22, "HallFameEntry::start_year moved on the 68k");
static_assert(offsetof(HallFameEntry, end_year) == 24, "HallFameEntry::end_year moved on the 68k");
static_assert(offsetof(HallFameEntry, score) == 26, "HallFameEntry::score moved on the 68k");
static_assert(offsetof(HallFameEntry, population) == 30, "HallFameEntry::population moved on the 68k");
static_assert(offsetof(HallFameEntry, difficulty_rating) == 34, "HallFameEntry::difficulty_rating moved on the 68k");
static const LeRun le_runs_HallFameEntry[] = {
	{ 22, 2, 2 },
	{ 26, 4, 2 },
	{ 34, 2, 1 },
};
const LeTable le_table_HallFameEntry = { "HallFameEntry", 36, 3, le_runs_HallFameEntry };

// TalkMsg: 18 bytes on the PC
static_assert(sizeof(TalkMsg) == 18, "TalkMsg is laid out differently on the 68k");
static_assert(offsetof(TalkMsg, talk_id) == 0, "TalkMsg::talk_id moved on the 68k");
static_assert(offsetof(TalkMsg, talk_para1) == 2, "TalkMsg::talk_para1 moved on the 68k");
static_assert(offsetof(TalkMsg, talk_para2) == 4, "TalkMsg::talk_para2 moved on the 68k");
static_assert(offsetof(TalkMsg, date) == 6, "TalkMsg::date moved on the 68k");
static_assert(offsetof(TalkMsg, from_nation_recno) == 10, "TalkMsg::from_nation_recno moved on the 68k");
static_assert(offsetof(TalkMsg, to_nation_recno) == 11, "TalkMsg::to_nation_recno moved on the 68k");
static_assert(offsetof(TalkMsg, reply_type) == 12, "TalkMsg::reply_type moved on the 68k");
static_assert(offsetof(TalkMsg, reply_date) == 13, "TalkMsg::reply_date moved on the 68k");
static_assert(offsetof(TalkMsg, relation_status) == 17, "TalkMsg::relation_status moved on the 68k");
static const LeRun le_runs_TalkMsg[] = {
	{ 0, 2, 3 },
	{ 6, 4, 1 },
	{ 13, 4, 1 },
};
const LeTable le_table_TalkMsg = { "TalkMsg", 18, 3, le_runs_TalkMsg };

// FirmInfo: 102 bytes on the PC
static_assert(sizeof(FirmInfo) == 102, "FirmInfo is laid out differently on the 68k");
static_assert(offsetof(FirmInfo, firm_id) == 0, "FirmInfo::firm_id moved on the 68k");
static_assert(offsetof(FirmInfo, name) == 1, "FirmInfo::name moved on the 68k");
static_assert(offsetof(FirmInfo, short_name) == 22, "FirmInfo::short_name moved on the 68k");
static_assert(offsetof(FirmInfo, overseer_title) == 35, "FirmInfo::overseer_title moved on the 68k");
static_assert(offsetof(FirmInfo, worker_title) == 46, "FirmInfo::worker_title moved on the 68k");
static_assert(offsetof(FirmInfo, tera_type) == 57, "FirmInfo::tera_type moved on the 68k");
static_assert(offsetof(FirmInfo, buildable) == 58, "FirmInfo::buildable moved on the 68k");
static_assert(offsetof(FirmInfo, live_in_town) == 59, "FirmInfo::live_in_town moved on the 68k");
static_assert(offsetof(FirmInfo, max_hit_points) == 60, "FirmInfo::max_hit_points moved on the 68k");
static_assert(offsetof(FirmInfo, need_overseer) == 62, "FirmInfo::need_overseer moved on the 68k");
static_assert(offsetof(FirmInfo, need_worker) == 63, "FirmInfo::need_worker moved on the 68k");
static_assert(offsetof(FirmInfo, setup_cost) == 64, "FirmInfo::setup_cost moved on the 68k");
static_assert(offsetof(FirmInfo, year_cost) == 66, "FirmInfo::year_cost moved on the 68k");
static_assert(offsetof(FirmInfo, first_build_id) == 68, "FirmInfo::first_build_id moved on the 68k");
static_assert(offsetof(FirmInfo, build_count) == 70, "FirmInfo::build_count moved on the 68k");
static_assert(offsetof(FirmInfo, loc_width) == 72, "FirmInfo::loc_width moved on the 68k");
static_assert(offsetof(FirmInfo, loc_height) == 74, "FirmInfo::loc_height moved on the 68k");
static_assert(offsetof(FirmInfo, firm_skill_id) == 76, "FirmInfo::firm_skill_id moved on the 68k");
static_assert(offsetof(FirmInfo, firm_race_id) == 77, "FirmInfo::firm_race_id moved on the 68k");
static_assert(offsetof(FirmInfo, is_linkable_to_town) == 78, "FirmInfo::is_linkable_to_town moved on the 68k");
static_assert(offsetof(FirmInfo, total_firm_count) == 79, "FirmInfo::total_firm_count moved on the 68k");
static_assert(offsetof(FirmInfo, nation_firm_count_array) == 81, "FirmInfo::nation_firm_count_array moved on the 68k");
static_assert(offsetof(FirmInfo, nation_tech_level_array) == 95, "FirmInfo::nation_tech_level_array moved on the 68k");
static const LeRun le_runs_FirmInfo[] = {
	{ 60, 2, 1 },
	{ 64, 2, 6 },
	{ 79, 2, 8 },
};
const LeTable le_table_FirmInfo = { "FirmInfo", 102, 3, le_runs_FirmInfo };

// TechClass: 22 bytes on the PC
static_assert(sizeof(TechClass) == 22, "TechClass is laid out differently on the 68k");
static_assert(offsetof(TechClass, class_id) == 0, "TechClass::class_id moved on the 68k");
static_assert(offsetof(TechClass, first_tech_id) == 2, "TechClass::first_tech_id moved on the 68k");
static_assert(offsetof(TechClass, tech_count) == 4, "TechClass::tech_count moved on the 68k");
static_assert(offsetof(TechClass, icon_index) == 6, "TechClass::icon_index moved on the 68k");
static_assert(offsetof(TechClass, nation_research_firm_recno_array) == 8, "TechClass::nation_research_firm_recno_array moved on the 68k");
static const LeRun le_runs_TechClass[] = {
	{ 0, 2, 11 },
};
const LeTable le_table_TechClass = { "TechClass", 22, 1, le_runs_TechClass };

// TechInfo: 61 bytes on the PC
static_assert(sizeof(TechInfo) == 61, "TechInfo is laid out differently on the 68k");
static_assert(offsetof(TechInfo, tech_id) == 0, "TechInfo::tech_id moved on the 68k");
static_assert(offsetof(TechInfo, class_id) == 2, "TechInfo::class_id moved on the 68k");
static_assert(offsetof(TechInfo, max_tech_level) == 4, "TechInfo::max_tech_level moved on the 68k");
static_assert(offsetof(TechInfo, complex_level) == 6, "TechInfo::complex_level moved on the 68k");
static_assert(offsetof(TechInfo, unit_id) == 8, "TechInfo::unit_id moved on the 68k");
static_assert(offsetof(TechInfo, firm_id) == 10, "TechInfo::firm_id moved on the 68k");
static_assert(offsetof(TechInfo, parent_unit_id) == 12, "TechInfo::parent_unit_id moved on the 68k");
static_assert(offsetof(TechInfo, parent_firm_id) == 14, "TechInfo::parent_firm_id moved on the 68k");
static_assert(offsetof(TechInfo, parent_level) == 16, "TechInfo::parent_level moved on the 68k");
static_assert(offsetof(TechInfo, icon_index) == 17, "TechInfo::icon_index moved on the 68k");
static_assert(offsetof(TechInfo, nation_tech_level_array) == 19, "TechInfo::nation_tech_level_array moved on the 68k");
static_assert(offsetof(TechInfo, nation_is_researching_array) == 26, "TechInfo::nation_is_researching_array moved on the 68k");
static_assert(offsetof(TechInfo, nation_research_progress_array) == 33, "TechInfo::nation_research_progress_array moved on the 68k");
static const LeRun le_runs_TechInfo[] = {
	{ 0, 2, 8 },
	{ 17, 2, 1 },
	{ 33, 4, 7 },
};
const LeTable le_table_TechInfo = { "TechInfo", 61, 3, le_runs_TechInfo };

// GodInfo: 16 bytes on the PC
static_assert(sizeof(GodInfo) == 16, "GodInfo is laid out differently on the 68k");
static_assert(offsetof(GodInfo, god_id) == 0, "GodInfo::god_id moved on the 68k");
static_assert(offsetof(GodInfo, race_id) == 1, "GodInfo::race_id moved on the 68k");
static_assert(offsetof(GodInfo, unit_id) == 2, "GodInfo::unit_id moved on the 68k");
static_assert(offsetof(GodInfo, exist_pray_points) == 3, "GodInfo::exist_pray_points moved on the 68k");
static_assert(offsetof(GodInfo, power_pray_points) == 5, "GodInfo::power_pray_points moved on the 68k");
static_assert(offsetof(GodInfo, can_cast_power) == 7, "GodInfo::can_cast_power moved on the 68k");
static_assert(offsetof(GodInfo, cast_power_range) == 8, "GodInfo::cast_power_range moved on the 68k");
static_assert(offsetof(GodInfo, nation_know_array) == 9, "GodInfo::nation_know_array moved on the 68k");
static const LeRun le_runs_GodInfo[] = {
	{ 3, 2, 2 },
};
const LeTable le_table_GodInfo = { "GodInfo", 16, 1, le_runs_GodInfo };

// nsPlayerStats::detail::RecordHeader: 12 bytes on the PC
static_assert(sizeof(nsPlayerStats::detail::RecordHeader) == 12, "RecordHeader is laid out differently on the 68k");
static_assert(offsetof(nsPlayerStats::detail::RecordHeader, rec_type) == 0, "RecordHeader::rec_type moved on the 68k");
static_assert(offsetof(nsPlayerStats::detail::RecordHeader, rec_count) == 4, "RecordHeader::rec_count moved on the 68k");
static_assert(offsetof(nsPlayerStats::detail::RecordHeader, rec_size) == 8, "RecordHeader::rec_size moved on the 68k");
static const LeRun le_runs_RecordHeader[] = {
	{ 0, 4, 3 },
};
const LeTable le_table_RecordHeader = { "RecordHeader", 12, 1, le_runs_RecordHeader };

// nsPlayerStats::detail::ScenStat: 264 bytes on the PC
static_assert(sizeof(nsPlayerStats::detail::ScenStat) == 264, "ScenStat is laid out differently on the 68k");
static_assert(offsetof(nsPlayerStats::detail::ScenStat, game_name) == 0, "ScenStat::game_name moved on the 68k");
static_assert(offsetof(nsPlayerStats::detail::ScenStat, status) == 260, "ScenStat::status moved on the 68k");
static const LeRun le_runs_ScenStat[] = {
	{ 260, 4, 1 },
};
const LeTable le_table_ScenStat = { "ScenStat", 264, 1, le_runs_ScenStat };

// Unit: 169 bytes on the PC
static_assert(sizeof(Unit) == 169, "Unit is laid out differently on the 68k");
static_assert(offsetof(Unit, sprite_id) == 4, "Unit::sprite_id moved on the 68k");
static_assert(offsetof(Unit, sprite_recno) == 6, "Unit::sprite_recno moved on the 68k");
static_assert(offsetof(Unit, mobile_type) == 8, "Unit::mobile_type moved on the 68k");
static_assert(offsetof(Unit, cur_action) == 9, "Unit::cur_action moved on the 68k");
static_assert(offsetof(Unit, cur_dir) == 10, "Unit::cur_dir moved on the 68k");
static_assert(offsetof(Unit, cur_frame) == 11, "Unit::cur_frame moved on the 68k");
static_assert(offsetof(Unit, cur_attack) == 12, "Unit::cur_attack moved on the 68k");
static_assert(offsetof(Unit, final_dir) == 13, "Unit::final_dir moved on the 68k");
static_assert(offsetof(Unit, turn_delay) == 14, "Unit::turn_delay moved on the 68k");
static_assert(offsetof(Unit, guard_count) == 15, "Unit::guard_count moved on the 68k");
static_assert(offsetof(Unit, remain_attack_delay) == 16, "Unit::remain_attack_delay moved on the 68k");
static_assert(offsetof(Unit, remain_frames_per_step) == 17, "Unit::remain_frames_per_step moved on the 68k");
static_assert(offsetof(Unit, cur_x) == 18, "Unit::cur_x moved on the 68k");
static_assert(offsetof(Unit, cur_y) == 20, "Unit::cur_y moved on the 68k");
static_assert(offsetof(Unit, go_x) == 22, "Unit::go_x moved on the 68k");
static_assert(offsetof(Unit, go_y) == 24, "Unit::go_y moved on the 68k");
static_assert(offsetof(Unit, next_x) == 26, "Unit::next_x moved on the 68k");
static_assert(offsetof(Unit, next_y) == 28, "Unit::next_y moved on the 68k");
static_assert(offsetof(Unit, sprite_info) == 30, "Unit::sprite_info moved on the 68k");
static_assert(offsetof(Unit, unit_id) == 34, "Unit::unit_id moved on the 68k");
static_assert(offsetof(Unit, rank_id) == 35, "Unit::rank_id moved on the 68k");
static_assert(offsetof(Unit, race_id) == 36, "Unit::race_id moved on the 68k");
static_assert(offsetof(Unit, nation_recno) == 37, "Unit::nation_recno moved on the 68k");
static_assert(offsetof(Unit, ai_unit) == 38, "Unit::ai_unit moved on the 68k");
static_assert(offsetof(Unit, name_id) == 39, "Unit::name_id moved on the 68k");
static_assert(offsetof(Unit, unit_group_id) == 41, "Unit::unit_group_id moved on the 68k");
static_assert(offsetof(Unit, team_id) == 45, "Unit::team_id moved on the 68k");
static_assert(offsetof(Unit, selected_flag) == 49, "Unit::selected_flag moved on the 68k");
static_assert(offsetof(Unit, group_select_id) == 50, "Unit::group_select_id moved on the 68k");
static_assert(offsetof(Unit, waiting_term) == 51, "Unit::waiting_term moved on the 68k");
static_assert(offsetof(Unit, blocked_by_member) == 52, "Unit::blocked_by_member moved on the 68k");
static_assert(offsetof(Unit, swapping) == 53, "Unit::swapping moved on the 68k");
static_assert(offsetof(Unit, leader_unit_recno) == 54, "Unit::leader_unit_recno moved on the 68k");
static_assert(offsetof(Unit, action_misc) == 56, "Unit::action_misc moved on the 68k");
static_assert(offsetof(Unit, action_misc_para) == 57, "Unit::action_misc_para moved on the 68k");
static_assert(offsetof(Unit, action_mode) == 59, "Unit::action_mode moved on the 68k");
static_assert(offsetof(Unit, action_para) == 60, "Unit::action_para moved on the 68k");
static_assert(offsetof(Unit, action_x_loc) == 62, "Unit::action_x_loc moved on the 68k");
static_assert(offsetof(Unit, action_y_loc) == 64, "Unit::action_y_loc moved on the 68k");
static_assert(offsetof(Unit, action_mode2) == 66, "Unit::action_mode2 moved on the 68k");
static_assert(offsetof(Unit, action_para2) == 67, "Unit::action_para2 moved on the 68k");
static_assert(offsetof(Unit, action_x_loc2) == 69, "Unit::action_x_loc2 moved on the 68k");
static_assert(offsetof(Unit, action_y_loc2) == 71, "Unit::action_y_loc2 moved on the 68k");
static_assert(offsetof(Unit, blocked_edge) == 73, "Unit::blocked_edge moved on the 68k");
static_assert(offsetof(Unit, attack_dir) == 77, "Unit::attack_dir moved on the 68k");
static_assert(offsetof(Unit, range_attack_x_loc) == 78, "Unit::range_attack_x_loc moved on the 68k");
static_assert(offsetof(Unit, range_attack_y_loc) == 80, "Unit::range_attack_y_loc moved on the 68k");
static_assert(offsetof(Unit, move_to_x_loc) == 82, "Unit::move_to_x_loc moved on the 68k");
static_assert(offsetof(Unit, move_to_y_loc) == 84, "Unit::move_to_y_loc moved on the 68k");
static_assert(offsetof(Unit, loyalty) == 86, "Unit::loyalty moved on the 68k");
static_assert(offsetof(Unit, target_loyalty) == 87, "Unit::target_loyalty moved on the 68k");
static_assert(offsetof(Unit, hit_points) == 88, "Unit::hit_points moved on the 68k");
static_assert(offsetof(Unit, max_hit_points) == 92, "Unit::max_hit_points moved on the 68k");
static_assert(offsetof(Unit, skill) == 94, "Unit::skill moved on the 68k");
static_assert(offsetof(Unit, unit_mode) == 100, "Unit::unit_mode moved on the 68k");
static_assert(offsetof(Unit, unit_mode_para) == 101, "Unit::unit_mode_para moved on the 68k");
static_assert(offsetof(Unit, spy_recno) == 103, "Unit::spy_recno moved on the 68k");
static_assert(offsetof(Unit, nation_contribution) == 105, "Unit::nation_contribution moved on the 68k");
static_assert(offsetof(Unit, total_reward) == 107, "Unit::total_reward moved on the 68k");
static_assert(offsetof(Unit, attack_info_array) == 109, "Unit::attack_info_array moved on the 68k");
static_assert(offsetof(Unit, attack_count) == 113, "Unit::attack_count moved on the 68k");
static_assert(offsetof(Unit, attack_range) == 114, "Unit::attack_range moved on the 68k");
static_assert(offsetof(Unit, cur_power) == 115, "Unit::cur_power moved on the 68k");
static_assert(offsetof(Unit, max_power) == 117, "Unit::max_power moved on the 68k");
static_assert(offsetof(Unit, result_node_array) == 119, "Unit::result_node_array moved on the 68k");
static_assert(offsetof(Unit, result_node_count) == 123, "Unit::result_node_count moved on the 68k");
static_assert(offsetof(Unit, result_node_recno) == 127, "Unit::result_node_recno moved on the 68k");
static_assert(offsetof(Unit, result_path_dist) == 129, "Unit::result_path_dist moved on the 68k");
static_assert(offsetof(Unit, way_point_array) == 131, "Unit::way_point_array moved on the 68k");
static_assert(offsetof(Unit, way_point_array_size) == 135, "Unit::way_point_array_size moved on the 68k");
static_assert(offsetof(Unit, way_point_count) == 137, "Unit::way_point_count moved on the 68k");
static_assert(offsetof(Unit, ai_action_id) == 139, "Unit::ai_action_id moved on the 68k");
static_assert(offsetof(Unit, original_action_mode) == 141, "Unit::original_action_mode moved on the 68k");
static_assert(offsetof(Unit, original_action_para) == 142, "Unit::original_action_para moved on the 68k");
static_assert(offsetof(Unit, original_action_x_loc) == 144, "Unit::original_action_x_loc moved on the 68k");
static_assert(offsetof(Unit, original_action_y_loc) == 146, "Unit::original_action_y_loc moved on the 68k");
static_assert(offsetof(Unit, original_target_x_loc) == 148, "Unit::original_target_x_loc moved on the 68k");
static_assert(offsetof(Unit, original_target_y_loc) == 150, "Unit::original_target_y_loc moved on the 68k");
static_assert(offsetof(Unit, ai_original_target_x_loc) == 152, "Unit::ai_original_target_x_loc moved on the 68k");
static_assert(offsetof(Unit, ai_original_target_y_loc) == 154, "Unit::ai_original_target_y_loc moved on the 68k");
static_assert(offsetof(Unit, ai_no_suitable_action) == 156, "Unit::ai_no_suitable_action moved on the 68k");
static_assert(offsetof(Unit, can_guard_flag) == 157, "Unit::can_guard_flag moved on the 68k");
static_assert(offsetof(Unit, can_attack_flag) == 158, "Unit::can_attack_flag moved on the 68k");
static_assert(offsetof(Unit, force_move_flag) == 159, "Unit::force_move_flag moved on the 68k");
static_assert(offsetof(Unit, home_camp_firm_recno) == 160, "Unit::home_camp_firm_recno moved on the 68k");
static_assert(offsetof(Unit, aggressive_mode) == 162, "Unit::aggressive_mode moved on the 68k");
static_assert(offsetof(Unit, seek_path_fail_count) == 163, "Unit::seek_path_fail_count moved on the 68k");
static_assert(offsetof(Unit, ignore_power_nation) == 164, "Unit::ignore_power_nation moved on the 68k");
static_assert(offsetof(Unit, team_info) == 165, "Unit::team_info moved on the 68k");
static const LeRun le_runs_Unit[] = {
	{ 4, 2, 2 },
	{ 18, 2, 6 },
	{ 30, 4, 1 },
	{ 39, 2, 1 },
	{ 41, 4, 2 },
	{ 54, 2, 1 },
	{ 57, 2, 1 },
	{ 60, 2, 3 },
	{ 67, 2, 3 },
	{ 78, 2, 4 },
	{ 88, 4, 1 },
	{ 92, 2, 1 },
	{ 101, 2, 4 },
	{ 109, 4, 1 },
	{ 115, 2, 2 },
	{ 119, 4, 2 },
	{ 127, 2, 2 },
	{ 131, 4, 1 },
	{ 135, 2, 3 },
	{ 142, 2, 7 },
	{ 160, 2, 1 },
	{ 165, 4, 1 },
};
const LeTable le_table_Unit = { "Unit", 169, 22, le_runs_Unit };

// Bullet: 57 bytes on the PC
static_assert(sizeof(Bullet) == 57, "Bullet is laid out differently on the 68k");
static_assert(offsetof(Bullet, sprite_id) == 4, "Bullet::sprite_id moved on the 68k");
static_assert(offsetof(Bullet, sprite_recno) == 6, "Bullet::sprite_recno moved on the 68k");
static_assert(offsetof(Bullet, mobile_type) == 8, "Bullet::mobile_type moved on the 68k");
static_assert(offsetof(Bullet, cur_action) == 9, "Bullet::cur_action moved on the 68k");
static_assert(offsetof(Bullet, cur_dir) == 10, "Bullet::cur_dir moved on the 68k");
static_assert(offsetof(Bullet, cur_frame) == 11, "Bullet::cur_frame moved on the 68k");
static_assert(offsetof(Bullet, cur_attack) == 12, "Bullet::cur_attack moved on the 68k");
static_assert(offsetof(Bullet, final_dir) == 13, "Bullet::final_dir moved on the 68k");
static_assert(offsetof(Bullet, turn_delay) == 14, "Bullet::turn_delay moved on the 68k");
static_assert(offsetof(Bullet, guard_count) == 15, "Bullet::guard_count moved on the 68k");
static_assert(offsetof(Bullet, remain_attack_delay) == 16, "Bullet::remain_attack_delay moved on the 68k");
static_assert(offsetof(Bullet, remain_frames_per_step) == 17, "Bullet::remain_frames_per_step moved on the 68k");
static_assert(offsetof(Bullet, cur_x) == 18, "Bullet::cur_x moved on the 68k");
static_assert(offsetof(Bullet, cur_y) == 20, "Bullet::cur_y moved on the 68k");
static_assert(offsetof(Bullet, go_x) == 22, "Bullet::go_x moved on the 68k");
static_assert(offsetof(Bullet, go_y) == 24, "Bullet::go_y moved on the 68k");
static_assert(offsetof(Bullet, next_x) == 26, "Bullet::next_x moved on the 68k");
static_assert(offsetof(Bullet, next_y) == 28, "Bullet::next_y moved on the 68k");
static_assert(offsetof(Bullet, sprite_info) == 30, "Bullet::sprite_info moved on the 68k");
static_assert(offsetof(Bullet, parent_type) == 34, "Bullet::parent_type moved on the 68k");
static_assert(offsetof(Bullet, parent_recno) == 35, "Bullet::parent_recno moved on the 68k");
static_assert(offsetof(Bullet, target_mobile_type) == 37, "Bullet::target_mobile_type moved on the 68k");
static_assert(offsetof(Bullet, attack_damage) == 38, "Bullet::attack_damage moved on the 68k");
static_assert(offsetof(Bullet, damage_radius) == 42, "Bullet::damage_radius moved on the 68k");
static_assert(offsetof(Bullet, nation_recno) == 44, "Bullet::nation_recno moved on the 68k");
static_assert(offsetof(Bullet, fire_radius) == 46, "Bullet::fire_radius moved on the 68k");
static_assert(offsetof(Bullet, origin_x) == 47, "Bullet::origin_x moved on the 68k");
static_assert(offsetof(Bullet, origin_y) == 49, "Bullet::origin_y moved on the 68k");
static_assert(offsetof(Bullet, target_x_loc) == 51, "Bullet::target_x_loc moved on the 68k");
static_assert(offsetof(Bullet, target_y_loc) == 53, "Bullet::target_y_loc moved on the 68k");
static_assert(offsetof(Bullet, cur_step) == 55, "Bullet::cur_step moved on the 68k");
static_assert(offsetof(Bullet, total_step) == 56, "Bullet::total_step moved on the 68k");
static const LeRun le_runs_Bullet[] = {
	{ 4, 2, 2 },
	{ 18, 2, 6 },
	{ 30, 4, 1 },
	{ 35, 2, 1 },
	{ 38, 4, 1 },
	{ 42, 2, 2 },
	{ 47, 2, 4 },
};
const LeTable le_table_Bullet = { "Bullet", 57, 7, le_runs_Bullet };

// Firm: 254 bytes on the PC
static_assert(sizeof(Firm) == 254, "Firm is laid out differently on the 68k");
static_assert(offsetof(Firm, firm_id) == 4, "Firm::firm_id moved on the 68k");
static_assert(offsetof(Firm, firm_build_id) == 5, "Firm::firm_build_id moved on the 68k");
static_assert(offsetof(Firm, firm_recno) == 7, "Firm::firm_recno moved on the 68k");
static_assert(offsetof(Firm, firm_ai) == 9, "Firm::firm_ai moved on the 68k");
static_assert(offsetof(Firm, ai_processed) == 10, "Firm::ai_processed moved on the 68k");
static_assert(offsetof(Firm, ai_status) == 11, "Firm::ai_status moved on the 68k");
static_assert(offsetof(Firm, ai_link_checked) == 12, "Firm::ai_link_checked moved on the 68k");
static_assert(offsetof(Firm, ai_sell_flag) == 13, "Firm::ai_sell_flag moved on the 68k");
static_assert(offsetof(Firm, race_id) == 14, "Firm::race_id moved on the 68k");
static_assert(offsetof(Firm, nation_recno) == 15, "Firm::nation_recno moved on the 68k");
static_assert(offsetof(Firm, closest_town_name_id) == 17, "Firm::closest_town_name_id moved on the 68k");
static_assert(offsetof(Firm, firm_name_instance_id) == 19, "Firm::firm_name_instance_id moved on the 68k");
static_assert(offsetof(Firm, loc_x1) == 21, "Firm::loc_x1 moved on the 68k");
static_assert(offsetof(Firm, loc_y1) == 23, "Firm::loc_y1 moved on the 68k");
static_assert(offsetof(Firm, loc_x2) == 25, "Firm::loc_x2 moved on the 68k");
static_assert(offsetof(Firm, loc_y2) == 27, "Firm::loc_y2 moved on the 68k");
static_assert(offsetof(Firm, abs_x1) == 29, "Firm::abs_x1 moved on the 68k");
static_assert(offsetof(Firm, abs_y1) == 31, "Firm::abs_y1 moved on the 68k");
static_assert(offsetof(Firm, abs_x2) == 33, "Firm::abs_x2 moved on the 68k");
static_assert(offsetof(Firm, abs_y2) == 35, "Firm::abs_y2 moved on the 68k");
static_assert(offsetof(Firm, center_x) == 37, "Firm::center_x moved on the 68k");
static_assert(offsetof(Firm, center_y) == 39, "Firm::center_y moved on the 68k");
static_assert(offsetof(Firm, region_id) == 41, "Firm::region_id moved on the 68k");
static_assert(offsetof(Firm, cur_frame) == 42, "Firm::cur_frame moved on the 68k");
static_assert(offsetof(Firm, remain_frame_delay) == 43, "Firm::remain_frame_delay moved on the 68k");
static_assert(offsetof(Firm, hit_points) == 44, "Firm::hit_points moved on the 68k");
static_assert(offsetof(Firm, max_hit_points) == 48, "Firm::max_hit_points moved on the 68k");
static_assert(offsetof(Firm, under_construction) == 52, "Firm::under_construction moved on the 68k");
static_assert(offsetof(Firm, firm_skill_id) == 53, "Firm::firm_skill_id moved on the 68k");
static_assert(offsetof(Firm, overseer_recno) == 54, "Firm::overseer_recno moved on the 68k");
static_assert(offsetof(Firm, overseer_town_recno) == 56, "Firm::overseer_town_recno moved on the 68k");
static_assert(offsetof(Firm, builder_recno) == 58, "Firm::builder_recno moved on the 68k");
static_assert(offsetof(Firm, builder_region_id) == 60, "Firm::builder_region_id moved on the 68k");
static_assert(offsetof(Firm, productivity) == 61, "Firm::productivity moved on the 68k");
static_assert(offsetof(Firm, worker_array) == 65, "Firm::worker_array moved on the 68k");
static_assert(offsetof(Firm, worker_count) == 69, "Firm::worker_count moved on the 68k");
static_assert(offsetof(Firm, selected_worker_id) == 70, "Firm::selected_worker_id moved on the 68k");
static_assert(offsetof(Firm, player_spy_count) == 71, "Firm::player_spy_count moved on the 68k");
static_assert(offsetof(Firm, sabotage_level) == 72, "Firm::sabotage_level moved on the 68k");
static_assert(offsetof(Firm, linked_firm_count) == 73, "Firm::linked_firm_count moved on the 68k");
static_assert(offsetof(Firm, linked_town_count) == 74, "Firm::linked_town_count moved on the 68k");
static_assert(offsetof(Firm, linked_firm_array) == 75, "Firm::linked_firm_array moved on the 68k");
static_assert(offsetof(Firm, linked_town_array) == 121, "Firm::linked_town_array moved on the 68k");
static_assert(offsetof(Firm, linked_firm_enable_array) == 181, "Firm::linked_firm_enable_array moved on the 68k");
static_assert(offsetof(Firm, linked_town_enable_array) == 204, "Firm::linked_town_enable_array moved on the 68k");
static_assert(offsetof(Firm, last_year_income) == 234, "Firm::last_year_income moved on the 68k");
static_assert(offsetof(Firm, cur_year_income) == 238, "Firm::cur_year_income moved on the 68k");
static_assert(offsetof(Firm, setup_date) == 242, "Firm::setup_date moved on the 68k");
static_assert(offsetof(Firm, should_set_power) == 246, "Firm::should_set_power moved on the 68k");
static_assert(offsetof(Firm, last_attacked_date) == 247, "Firm::last_attacked_date moved on the 68k");
static_assert(offsetof(Firm, should_close_flag) == 251, "Firm::should_close_flag moved on the 68k");
static_assert(offsetof(Firm, no_neighbor_space) == 252, "Firm::no_neighbor_space moved on the 68k");
static_assert(offsetof(Firm, ai_should_build_factory_count) == 253, "Firm::ai_should_build_factory_count moved on the 68k");
static const LeRun le_runs_Firm[] = {
	{ 5, 2, 2 },
	{ 15, 2, 13 },
	{ 44, 4, 2 },
	{ 54, 2, 3 },
	{ 61, 4, 2 },
	{ 75, 2, 53 },
	{ 234, 4, 3 },
	{ 247, 4, 1 },
};
const LeTable le_table_Firm = { "Firm", 254, 8, le_runs_Firm };

// Rock: 12 bytes on the PC
static_assert(sizeof(Rock) == 12, "Rock is laid out differently on the 68k");
static_assert(offsetof(Rock, rock_recno) == 0, "Rock::rock_recno moved on the 68k");
static_assert(offsetof(Rock, cur_frame) == 2, "Rock::cur_frame moved on the 68k");
static_assert(offsetof(Rock, delay_remain) == 3, "Rock::delay_remain moved on the 68k");
static_assert(offsetof(Rock, loc_x) == 4, "Rock::loc_x moved on the 68k");
static_assert(offsetof(Rock, loc_y) == 6, "Rock::loc_y moved on the 68k");
static_assert(offsetof(Rock, seed) == 8, "Rock::seed moved on the 68k");
static const LeRun le_runs_Rock[] = {
	{ 0, 2, 1 },
	{ 4, 2, 2 },
	{ 8, 4, 1 },
};
const LeTable le_table_Rock = { "Rock", 12, 3, le_runs_Rock };

// FirmDie: 18 bytes on the PC
static_assert(sizeof(FirmDie) == 18, "FirmDie is laid out differently on the 68k");
static_assert(offsetof(FirmDie, firm_id) == 0, "FirmDie::firm_id moved on the 68k");
static_assert(offsetof(FirmDie, firm_build_id) == 2, "FirmDie::firm_build_id moved on the 68k");
static_assert(offsetof(FirmDie, nation_recno) == 4, "FirmDie::nation_recno moved on the 68k");
static_assert(offsetof(FirmDie, frame) == 6, "FirmDie::frame moved on the 68k");
static_assert(offsetof(FirmDie, frame_delay_count) == 8, "FirmDie::frame_delay_count moved on the 68k");
static_assert(offsetof(FirmDie, loc_x1) == 10, "FirmDie::loc_x1 moved on the 68k");
static_assert(offsetof(FirmDie, loc_y1) == 12, "FirmDie::loc_y1 moved on the 68k");
static_assert(offsetof(FirmDie, loc_x2) == 14, "FirmDie::loc_x2 moved on the 68k");
static_assert(offsetof(FirmDie, loc_y2) == 16, "FirmDie::loc_y2 moved on the 68k");
static const LeRun le_runs_FirmDie[] = {
	{ 0, 2, 9 },
};
const LeTable le_table_FirmDie = { "FirmDie", 18, 1, le_runs_FirmDie };

// The structures inside those, which must be laid out alike as well.
static_assert(sizeof(CaravanStop) == 14, "CaravanStop is laid out differently on the 68k");
static_assert(offsetof(CaravanStop, firm_recno) == 0, "CaravanStop::firm_recno moved on the 68k");
static_assert(offsetof(CaravanStop, firm_loc_x1) == 2, "CaravanStop::firm_loc_x1 moved on the 68k");
static_assert(offsetof(CaravanStop, firm_loc_y1) == 4, "CaravanStop::firm_loc_y1 moved on the 68k");
static_assert(offsetof(CaravanStop, pick_up_type) == 6, "CaravanStop::pick_up_type moved on the 68k");
static_assert(offsetof(CaravanStop, pick_up_array) == 7, "CaravanStop::pick_up_array moved on the 68k");
static_assert(offsetof(CaravanStop, firm_id) == 13, "CaravanStop::firm_id moved on the 68k");
static_assert(sizeof(ChatInfo) == 106, "ChatInfo is laid out differently on the 68k");
static_assert(offsetof(ChatInfo, received_date) == 0, "ChatInfo::received_date moved on the 68k");
static_assert(offsetof(ChatInfo, from_nation_recno) == 4, "ChatInfo::from_nation_recno moved on the 68k");
static_assert(offsetof(ChatInfo, chat_str) == 5, "ChatInfo::chat_str moved on the 68k");
static_assert(sizeof(ColorRemap) == 257, "ColorRemap is laid out differently on the 68k");
static_assert(offsetof(ColorRemap, main_color) == 0, "ColorRemap::main_color moved on the 68k");
static_assert(offsetof(ColorRemap, color_table) == 1, "ColorRemap::color_table moved on the 68k");
static_assert(sizeof(DefenseUnit) == 3, "DefenseUnit is laid out differently on the 68k");
static_assert(offsetof(DefenseUnit, unit_recno) == 0, "DefenseUnit::unit_recno moved on the 68k");
static_assert(offsetof(DefenseUnit, status) == 2, "DefenseUnit::status moved on the 68k");
static_assert(sizeof(DynArray) == 29, "DynArray is laid out differently on the 68k");
static_assert(offsetof(DynArray, ele_num) == 0, "DynArray::ele_num moved on the 68k");
static_assert(offsetof(DynArray, block_num) == 4, "DynArray::block_num moved on the 68k");
static_assert(offsetof(DynArray, cur_pos) == 8, "DynArray::cur_pos moved on the 68k");
static_assert(offsetof(DynArray, last_ele) == 12, "DynArray::last_ele moved on the 68k");
static_assert(offsetof(DynArray, ele_size) == 16, "DynArray::ele_size moved on the 68k");
static_assert(offsetof(DynArray, sort_offset) == 20, "DynArray::sort_offset moved on the 68k");
static_assert(offsetof(DynArray, sort_type) == 24, "DynArray::sort_type moved on the 68k");
static_assert(offsetof(DynArray, body_buf) == 25, "DynArray::body_buf moved on the 68k");
static_assert(sizeof(InnUnit) == 13, "InnUnit is laid out differently on the 68k");
static_assert(offsetof(InnUnit, unit_id) == 0, "InnUnit::unit_id moved on the 68k");
static_assert(offsetof(InnUnit, skill) == 1, "InnUnit::skill moved on the 68k");
static_assert(offsetof(InnUnit, hire_cost) == 7, "InnUnit::hire_cost moved on the 68k");
static_assert(offsetof(InnUnit, stay_count) == 9, "InnUnit::stay_count moved on the 68k");
static_assert(offsetof(InnUnit, spy_recno) == 11, "InnUnit::spy_recno moved on the 68k");
static_assert(sizeof(MarketGoods) == 36, "MarketGoods is laid out differently on the 68k");
static_assert(offsetof(MarketGoods, raw_id) == 0, "MarketGoods::raw_id moved on the 68k");
static_assert(offsetof(MarketGoods, product_raw_id) == 1, "MarketGoods::product_raw_id moved on the 68k");
static_assert(offsetof(MarketGoods, input_firm_recno) == 2, "MarketGoods::input_firm_recno moved on the 68k");
static_assert(offsetof(MarketGoods, stock_qty) == 4, "MarketGoods::stock_qty moved on the 68k");
static_assert(offsetof(MarketGoods, cur_month_supply) == 8, "MarketGoods::cur_month_supply moved on the 68k");
static_assert(offsetof(MarketGoods, last_month_supply) == 12, "MarketGoods::last_month_supply moved on the 68k");
static_assert(offsetof(MarketGoods, month_demand) == 16, "MarketGoods::month_demand moved on the 68k");
static_assert(offsetof(MarketGoods, cur_month_sale_qty) == 20, "MarketGoods::cur_month_sale_qty moved on the 68k");
static_assert(offsetof(MarketGoods, last_month_sale_qty) == 24, "MarketGoods::last_month_sale_qty moved on the 68k");
static_assert(offsetof(MarketGoods, cur_year_sales) == 28, "MarketGoods::cur_year_sales moved on the 68k");
static_assert(offsetof(MarketGoods, last_year_sales) == 32, "MarketGoods::last_year_sales moved on the 68k");
static_assert(sizeof(MonsterInFirm) == 11, "MonsterInFirm is laid out differently on the 68k");
static_assert(offsetof(MonsterInFirm, monster_id) == 0, "MonsterInFirm::monster_id moved on the 68k");
static_assert(offsetof(MonsterInFirm, _unused) == 1, "MonsterInFirm::_unused moved on the 68k");
static_assert(offsetof(MonsterInFirm, mobile_unit_recno) == 2, "MonsterInFirm::mobile_unit_recno moved on the 68k");
static_assert(offsetof(MonsterInFirm, combat_level) == 4, "MonsterInFirm::combat_level moved on the 68k");
static_assert(offsetof(MonsterInFirm, hit_points) == 5, "MonsterInFirm::hit_points moved on the 68k");
static_assert(offsetof(MonsterInFirm, max_hit_points) == 7, "MonsterInFirm::max_hit_points moved on the 68k");
static_assert(offsetof(MonsterInFirm, soldier_monster_id) == 9, "MonsterInFirm::soldier_monster_id moved on the 68k");
static_assert(offsetof(MonsterInFirm, soldier_count) == 10, "MonsterInFirm::soldier_count moved on the 68k");
static_assert(sizeof(RegionPath) == 2, "RegionPath is laid out differently on the 68k");
static_assert(offsetof(RegionPath, sea_region_id) == 0, "RegionPath::sea_region_id moved on the 68k");
static_assert(offsetof(RegionPath, land_region_stat_id) == 1, "RegionPath::land_region_stat_id moved on the 68k");
static_assert(sizeof(Skill) == 6, "Skill is laid out differently on the 68k");
static_assert(offsetof(Skill, combat_level) == 0, "Skill::combat_level moved on the 68k");
static_assert(offsetof(Skill, skill_id) == 1, "Skill::skill_id moved on the 68k");
static_assert(offsetof(Skill, skill_level) == 2, "Skill::skill_level moved on the 68k");
static_assert(offsetof(Skill, combat_level_minor) == 3, "Skill::combat_level_minor moved on the 68k");
static_assert(offsetof(Skill, skill_level_minor) == 4, "Skill::skill_level_minor moved on the 68k");
static_assert(offsetof(Skill, skill_potential) == 5, "Skill::skill_potential moved on the 68k");
static_assert(sizeof(Sprite) == 34, "Sprite is laid out differently on the 68k");
static_assert(offsetof(Sprite, sprite_id) == 4, "Sprite::sprite_id moved on the 68k");
static_assert(offsetof(Sprite, sprite_recno) == 6, "Sprite::sprite_recno moved on the 68k");
static_assert(offsetof(Sprite, mobile_type) == 8, "Sprite::mobile_type moved on the 68k");
static_assert(offsetof(Sprite, cur_action) == 9, "Sprite::cur_action moved on the 68k");
static_assert(offsetof(Sprite, cur_dir) == 10, "Sprite::cur_dir moved on the 68k");
static_assert(offsetof(Sprite, cur_frame) == 11, "Sprite::cur_frame moved on the 68k");
static_assert(offsetof(Sprite, cur_attack) == 12, "Sprite::cur_attack moved on the 68k");
static_assert(offsetof(Sprite, final_dir) == 13, "Sprite::final_dir moved on the 68k");
static_assert(offsetof(Sprite, turn_delay) == 14, "Sprite::turn_delay moved on the 68k");
static_assert(offsetof(Sprite, guard_count) == 15, "Sprite::guard_count moved on the 68k");
static_assert(offsetof(Sprite, remain_attack_delay) == 16, "Sprite::remain_attack_delay moved on the 68k");
static_assert(offsetof(Sprite, remain_frames_per_step) == 17, "Sprite::remain_frames_per_step moved on the 68k");
static_assert(offsetof(Sprite, cur_x) == 18, "Sprite::cur_x moved on the 68k");
static_assert(offsetof(Sprite, cur_y) == 20, "Sprite::cur_y moved on the 68k");
static_assert(offsetof(Sprite, go_x) == 22, "Sprite::go_x moved on the 68k");
static_assert(offsetof(Sprite, go_y) == 24, "Sprite::go_y moved on the 68k");
static_assert(offsetof(Sprite, next_x) == 26, "Sprite::next_x moved on the 68k");
static_assert(offsetof(Sprite, next_y) == 28, "Sprite::next_y moved on the 68k");
static_assert(offsetof(Sprite, sprite_info) == 30, "Sprite::sprite_info moved on the 68k");
static_assert(sizeof(TradeStop) == 13, "TradeStop is laid out differently on the 68k");
static_assert(offsetof(TradeStop, firm_recno) == 0, "TradeStop::firm_recno moved on the 68k");
static_assert(offsetof(TradeStop, firm_loc_x1) == 2, "TradeStop::firm_loc_x1 moved on the 68k");
static_assert(offsetof(TradeStop, firm_loc_y1) == 4, "TradeStop::firm_loc_y1 moved on the 68k");
static_assert(offsetof(TradeStop, pick_up_type) == 6, "TradeStop::pick_up_type moved on the 68k");
static_assert(offsetof(TradeStop, pick_up_array) == 7, "TradeStop::pick_up_array moved on the 68k");
