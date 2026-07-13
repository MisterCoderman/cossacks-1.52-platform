#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x119f1000u, f_119f1000 },
  { 0x119f1050u, f_119f1050 },
  { 0x119f1120u, f_119f1120 },
  { 0x119f14f0u, f_119f14f0 },
  { 0x119f1510u, f_119f1510 },
  { 0x119f15e9u, f_119f15e9 },
  { 0x119f1686u, f_119f1686 },
  { 0x119f16b9u, f_119f16b9 },
  { 0x119f16e6u, f_119f16e6 },
  { 0x119f16f7u, f_119f16f7 },
  { 0x119f1706u, f_119f1706 },
  { 0x119f17abu, f_119f17ab },
  { 0x119f17b4u, f_119f17b4 },
  { 0x119f17bdu, f_119f17bd },
  { 0x119f17d7u, f_119f17d7 },
  { 0x119f182bu, f_119f182b },
  { 0x119f1849u, f_119f1849 },
  { 0x119f185cu, f_119f185c },
  { 0x119f18fcu, f_119f18fc },
  { 0x119f1ab8u, f_119f1ab8 },
  { 0x119f1b0cu, f_119f1b0c },
  { 0x119f1bc5u, f_119f1bc5 },
  { 0x119f1c5eu, f_119f1c5e },
  { 0x119f1e12u, f_119f1e12 },
  { 0x119f1f44u, f_119f1f44 },
  { 0x119f1f80u, f_119f1f80 },
  { 0x119f1ff5u, f_119f1ff5 },
  { 0x119f202eu, f_119f202e },
  { 0x119f2181u, f_119f2181 },
  { 0x119f21aau, f_119f21aa },
  { 0x119f2216u, f_119f2216 },
  { 0x119f2277u, f_119f2277 },
  { 0x119f228cu, f_119f228c },
  { 0x119f2319u, f_119f2319 },
  { 0x119f2361u, f_119f2361 },
  { 0x119f2373u, f_119f2373 },
  { 0x119f239fu, f_119f239f },
  { 0x119f23f0u, f_119f23f0 },
  { 0x119f2400u, f_119f2400 },
  { 0x119f24e0u, f_119f24e0 },
  { 0x119f255bu, f_119f255b },
  { 0x119f2708u, f_119f2708 },
  { 0x119f2752u, f_119f2752 },
  { 0x119f2785u, f_119f2785 },
  { 0x119f27aeu, f_119f27ae },
  { 0x119f2933u, f_119f2933 },
  { 0x119f2950u, f_119f2950 },
  { 0x119f2c85u, f_119f2c85 },
  { 0x119f2cc3u, f_119f2cc3 },
  { 0x119f2ceeu, f_119f2cee },
  { 0x119f3019u, f_119f3019 },
  { 0x119f3322u, f_119f3322 },
  { 0x119f33d3u, f_119f33d3 },
  { 0x119f34ceu, f_119f34ce },
  { 0x119f3560u, f_119f3560 },
  { 0x119f3660u, f_119f3660 },
  { 0x119f36b8u, f_119f36b8 },
  { 0x119f36d3u, f_119f36d3 },
  { 0x119f38f7u, f_119f38f7 },
  { 0x119f3922u, f_119f3922 },
  { 0x119f3a70u, f_119f3a70 },
  { 0x119f3da8u, f_119f3da8 },
  { 0x119f3deau, f_119f3dea },
  { 0x119f3e7eu, f_119f3e7e },
  { 0x119f3f5du, f_119f3f5d },
  { 0x119f3f80u, f_119f3f80 },
  { 0x119f3fb0u, f_119f3fb0 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x119f1000u
#define FSIZE 0x00002fc6u
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
