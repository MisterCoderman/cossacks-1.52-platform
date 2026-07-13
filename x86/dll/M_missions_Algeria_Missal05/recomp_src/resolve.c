#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x102c1000u, f_102c1000 },
  { 0x102c1020u, f_102c1020 },
  { 0x102c1160u, f_102c1160 },
  { 0x102c15b0u, f_102c15b0 },
  { 0x102c1689u, f_102c1689 },
  { 0x102c1726u, f_102c1726 },
  { 0x102c1759u, f_102c1759 },
  { 0x102c1786u, f_102c1786 },
  { 0x102c1797u, f_102c1797 },
  { 0x102c17a6u, f_102c17a6 },
  { 0x102c184bu, f_102c184b },
  { 0x102c1854u, f_102c1854 },
  { 0x102c185du, f_102c185d },
  { 0x102c1877u, f_102c1877 },
  { 0x102c18cbu, f_102c18cb },
  { 0x102c18e9u, f_102c18e9 },
  { 0x102c18fcu, f_102c18fc },
  { 0x102c199cu, f_102c199c },
  { 0x102c1b58u, f_102c1b58 },
  { 0x102c1bacu, f_102c1bac },
  { 0x102c1c65u, f_102c1c65 },
  { 0x102c1cfeu, f_102c1cfe },
  { 0x102c1eb2u, f_102c1eb2 },
  { 0x102c1fe4u, f_102c1fe4 },
  { 0x102c2020u, f_102c2020 },
  { 0x102c2095u, f_102c2095 },
  { 0x102c20ceu, f_102c20ce },
  { 0x102c2221u, f_102c2221 },
  { 0x102c224au, f_102c224a },
  { 0x102c22b6u, f_102c22b6 },
  { 0x102c2317u, f_102c2317 },
  { 0x102c232cu, f_102c232c },
  { 0x102c23b9u, f_102c23b9 },
  { 0x102c2401u, f_102c2401 },
  { 0x102c2413u, f_102c2413 },
  { 0x102c243fu, f_102c243f },
  { 0x102c2490u, f_102c2490 },
  { 0x102c24a0u, f_102c24a0 },
  { 0x102c2580u, f_102c2580 },
  { 0x102c25fbu, f_102c25fb },
  { 0x102c27a8u, f_102c27a8 },
  { 0x102c27f2u, f_102c27f2 },
  { 0x102c2825u, f_102c2825 },
  { 0x102c284eu, f_102c284e },
  { 0x102c29d3u, f_102c29d3 },
  { 0x102c29f0u, f_102c29f0 },
  { 0x102c2d25u, f_102c2d25 },
  { 0x102c2d63u, f_102c2d63 },
  { 0x102c2d8eu, f_102c2d8e },
  { 0x102c30b9u, f_102c30b9 },
  { 0x102c33c2u, f_102c33c2 },
  { 0x102c3473u, f_102c3473 },
  { 0x102c356eu, f_102c356e },
  { 0x102c3600u, f_102c3600 },
  { 0x102c3700u, f_102c3700 },
  { 0x102c3758u, f_102c3758 },
  { 0x102c3773u, f_102c3773 },
  { 0x102c3997u, f_102c3997 },
  { 0x102c39c2u, f_102c39c2 },
  { 0x102c3b10u, f_102c3b10 },
  { 0x102c3e48u, f_102c3e48 },
  { 0x102c3e8au, f_102c3e8a },
  { 0x102c3f1eu, f_102c3f1e },
  { 0x102c3ffdu, f_102c3ffd },
  { 0x102c4020u, f_102c4020 },
  { 0x102c4050u, f_102c4050 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x102c1000u
#define FSIZE 0x00003066u
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
