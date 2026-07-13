#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11a11000u, f_11a11000 },
  { 0x11a11250u, f_11a11250 },
  { 0x11a116e0u, f_11a116e0 },
  { 0x11a11700u, f_11a11700 },
  { 0x11a117d9u, f_11a117d9 },
  { 0x11a11876u, f_11a11876 },
  { 0x11a118a9u, f_11a118a9 },
  { 0x11a118d6u, f_11a118d6 },
  { 0x11a118e7u, f_11a118e7 },
  { 0x11a118f6u, f_11a118f6 },
  { 0x11a1199bu, f_11a1199b },
  { 0x11a119a4u, f_11a119a4 },
  { 0x11a119adu, f_11a119ad },
  { 0x11a119c7u, f_11a119c7 },
  { 0x11a11a1bu, f_11a11a1b },
  { 0x11a11a39u, f_11a11a39 },
  { 0x11a11a4cu, f_11a11a4c },
  { 0x11a11aecu, f_11a11aec },
  { 0x11a11ca8u, f_11a11ca8 },
  { 0x11a11cfcu, f_11a11cfc },
  { 0x11a11db5u, f_11a11db5 },
  { 0x11a11e4eu, f_11a11e4e },
  { 0x11a12002u, f_11a12002 },
  { 0x11a12134u, f_11a12134 },
  { 0x11a12170u, f_11a12170 },
  { 0x11a121e5u, f_11a121e5 },
  { 0x11a1221eu, f_11a1221e },
  { 0x11a12371u, f_11a12371 },
  { 0x11a1239au, f_11a1239a },
  { 0x11a12406u, f_11a12406 },
  { 0x11a12467u, f_11a12467 },
  { 0x11a1247cu, f_11a1247c },
  { 0x11a12509u, f_11a12509 },
  { 0x11a12551u, f_11a12551 },
  { 0x11a12563u, f_11a12563 },
  { 0x11a1258fu, f_11a1258f },
  { 0x11a125e0u, f_11a125e0 },
  { 0x11a125f0u, f_11a125f0 },
  { 0x11a126d0u, f_11a126d0 },
  { 0x11a1274bu, f_11a1274b },
  { 0x11a128f8u, f_11a128f8 },
  { 0x11a12942u, f_11a12942 },
  { 0x11a12975u, f_11a12975 },
  { 0x11a1299eu, f_11a1299e },
  { 0x11a12b23u, f_11a12b23 },
  { 0x11a12b40u, f_11a12b40 },
  { 0x11a12e75u, f_11a12e75 },
  { 0x11a12eb3u, f_11a12eb3 },
  { 0x11a12edeu, f_11a12ede },
  { 0x11a13209u, f_11a13209 },
  { 0x11a13512u, f_11a13512 },
  { 0x11a135c3u, f_11a135c3 },
  { 0x11a136beu, f_11a136be },
  { 0x11a13750u, f_11a13750 },
  { 0x11a13850u, f_11a13850 },
  { 0x11a138a8u, f_11a138a8 },
  { 0x11a138c3u, f_11a138c3 },
  { 0x11a13ae7u, f_11a13ae7 },
  { 0x11a13b12u, f_11a13b12 },
  { 0x11a13c60u, f_11a13c60 },
  { 0x11a13f98u, f_11a13f98 },
  { 0x11a13fdau, f_11a13fda },
  { 0x11a1406eu, f_11a1406e },
  { 0x11a1414du, f_11a1414d },
  { 0x11a14170u, f_11a14170 },
  { 0x11a141a0u, f_11a141a0 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11a11000u
#define FSIZE 0x000031b6u
static x86fn g_ftab[FSIZE];
static int g_ftab_built = 0;
static void ftab_build(void){
  for(int i=0;i<NFUNCS;i++){ uint32_t v=g_funcs[i].va;
    if(v>=FBASE && v<FBASE+FSIZE) g_ftab[v-FBASE]=g_funcs[i].fn; }
  g_ftab_built=1; }
extern x86fn x86_resolve_fallback(uint32_t addr);
x86fn x86_resolve(uint32_t addr){
  if(!g_ftab_built) ftab_build();
  if(addr>=FBASE && addr<FBASE+FSIZE){ x86fn f=g_ftab[addr-FBASE]; if(f) return f; }
  return x86_resolve_fallback(addr); }
x86fn x86_compiled(uint32_t addr){
  if(!g_ftab_built) ftab_build();
  if(addr>=FBASE && addr<FBASE+FSIZE) return g_ftab[addr-FBASE];
  return 0; }
