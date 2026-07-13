#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11771000u, f_11771000 },
  { 0x117710e0u, f_117710e0 },
  { 0x11771710u, f_11771710 },
  { 0x11771730u, f_11771730 },
  { 0x11771809u, f_11771809 },
  { 0x117718a6u, f_117718a6 },
  { 0x117718d9u, f_117718d9 },
  { 0x11771906u, f_11771906 },
  { 0x11771917u, f_11771917 },
  { 0x11771926u, f_11771926 },
  { 0x117719cbu, f_117719cb },
  { 0x117719d4u, f_117719d4 },
  { 0x117719ddu, f_117719dd },
  { 0x117719f7u, f_117719f7 },
  { 0x11771a4bu, f_11771a4b },
  { 0x11771a69u, f_11771a69 },
  { 0x11771a7cu, f_11771a7c },
  { 0x11771b1cu, f_11771b1c },
  { 0x11771cd8u, f_11771cd8 },
  { 0x11771d2cu, f_11771d2c },
  { 0x11771de5u, f_11771de5 },
  { 0x11771e7eu, f_11771e7e },
  { 0x11772032u, f_11772032 },
  { 0x11772164u, f_11772164 },
  { 0x117721a0u, f_117721a0 },
  { 0x11772215u, f_11772215 },
  { 0x1177224eu, f_1177224e },
  { 0x117723a1u, f_117723a1 },
  { 0x117723cau, f_117723ca },
  { 0x11772436u, f_11772436 },
  { 0x11772497u, f_11772497 },
  { 0x117724acu, f_117724ac },
  { 0x11772539u, f_11772539 },
  { 0x11772581u, f_11772581 },
  { 0x11772593u, f_11772593 },
  { 0x117725bfu, f_117725bf },
  { 0x11772610u, f_11772610 },
  { 0x11772620u, f_11772620 },
  { 0x11772700u, f_11772700 },
  { 0x1177277bu, f_1177277b },
  { 0x11772928u, f_11772928 },
  { 0x11772972u, f_11772972 },
  { 0x117729a5u, f_117729a5 },
  { 0x117729ceu, f_117729ce },
  { 0x11772b53u, f_11772b53 },
  { 0x11772b70u, f_11772b70 },
  { 0x11772ea5u, f_11772ea5 },
  { 0x11772ee3u, f_11772ee3 },
  { 0x11772f0eu, f_11772f0e },
  { 0x11773239u, f_11773239 },
  { 0x11773542u, f_11773542 },
  { 0x117735f3u, f_117735f3 },
  { 0x117736eeu, f_117736ee },
  { 0x11773780u, f_11773780 },
  { 0x11773880u, f_11773880 },
  { 0x117738d8u, f_117738d8 },
  { 0x117738f3u, f_117738f3 },
  { 0x11773b17u, f_11773b17 },
  { 0x11773b42u, f_11773b42 },
  { 0x11773c90u, f_11773c90 },
  { 0x11773fc8u, f_11773fc8 },
  { 0x1177400au, f_1177400a },
  { 0x1177409eu, f_1177409e },
  { 0x1177417du, f_1177417d },
  { 0x117741a0u, f_117741a0 },
  { 0x117741d0u, f_117741d0 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11771000u
#define FSIZE 0x000031e6u
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
