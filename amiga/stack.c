/* Seven Kingdoms keeps big locals in its path finder and its AI's
 * recursive searches, and its menus nest deeply; a Shell gives 4 KB.
 * libnix's startup sets this much up instead.
 * The AmiCradle Team. GPL 2 or later, like Seven Kingdoms. */
unsigned long __stack = 512 * 1024;
static const char version[] __attribute__((used)) = "$VER: SevenKingdoms 2.15.6 (06.11.2026)";
