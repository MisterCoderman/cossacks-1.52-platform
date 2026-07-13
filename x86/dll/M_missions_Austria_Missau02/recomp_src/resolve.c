#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x102e1000u, f_102e1000 },
  { 0x102e1020u, f_102e1020 },
  { 0x102e1330u, f_102e1330 },
  { 0x102e1420u, f_102e1420 },
  { 0x102e2210u, f_102e2210 },
  { 0x102e22e9u, f_102e22e9 },
  { 0x102e2386u, f_102e2386 },
  { 0x102e23b9u, f_102e23b9 },
  { 0x102e23e6u, f_102e23e6 },
  { 0x102e23f7u, f_102e23f7 },
  { 0x102e2406u, f_102e2406 },
  { 0x102e24abu, f_102e24ab },
  { 0x102e24b4u, f_102e24b4 },
  { 0x102e24bdu, f_102e24bd },
  { 0x102e24d7u, f_102e24d7 },
  { 0x102e252bu, f_102e252b },
  { 0x102e2549u, f_102e2549 },
  { 0x102e255cu, f_102e255c },
  { 0x102e25fcu, f_102e25fc },
  { 0x102e27b8u, f_102e27b8 },
  { 0x102e280cu, f_102e280c },
  { 0x102e28c5u, f_102e28c5 },
  { 0x102e295eu, f_102e295e },
  { 0x102e2b12u, f_102e2b12 },
  { 0x102e2c44u, f_102e2c44 },
  { 0x102e2c80u, f_102e2c80 },
  { 0x102e2cf5u, f_102e2cf5 },
  { 0x102e2d2eu, f_102e2d2e },
  { 0x102e2e81u, f_102e2e81 },
  { 0x102e2eaau, f_102e2eaa },
  { 0x102e2f16u, f_102e2f16 },
  { 0x102e2f77u, f_102e2f77 },
  { 0x102e2f8cu, f_102e2f8c },
  { 0x102e3019u, f_102e3019 },
  { 0x102e3061u, f_102e3061 },
  { 0x102e3073u, f_102e3073 },
  { 0x102e309fu, f_102e309f },
  { 0x102e30f0u, f_102e30f0 },
  { 0x102e3100u, f_102e3100 },
  { 0x102e31e0u, f_102e31e0 },
  { 0x102e325bu, f_102e325b },
  { 0x102e3408u, f_102e3408 },
  { 0x102e3452u, f_102e3452 },
  { 0x102e3485u, f_102e3485 },
  { 0x102e34aeu, f_102e34ae },
  { 0x102e3633u, f_102e3633 },
  { 0x102e3650u, f_102e3650 },
  { 0x102e3985u, f_102e3985 },
  { 0x102e39c3u, f_102e39c3 },
  { 0x102e39eeu, f_102e39ee },
  { 0x102e3d19u, f_102e3d19 },
  { 0x102e4022u, f_102e4022 },
  { 0x102e40d3u, f_102e40d3 },
  { 0x102e41ceu, f_102e41ce },
  { 0x102e4260u, f_102e4260 },
  { 0x102e4360u, f_102e4360 },
  { 0x102e43b8u, f_102e43b8 },
  { 0x102e43d3u, f_102e43d3 },
  { 0x102e45f7u, f_102e45f7 },
  { 0x102e4622u, f_102e4622 },
  { 0x102e4770u, f_102e4770 },
  { 0x102e4aa8u, f_102e4aa8 },
  { 0x102e4aeau, f_102e4aea },
  { 0x102e4b7eu, f_102e4b7e },
  { 0x102e4c5du, f_102e4c5d },
  { 0x102e4c80u, f_102e4c80 },
  { 0x102e4cb0u, f_102e4cb0 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x102e1000u
#define FSIZE 0x00003cc6u
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
