#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10bb1000u, f_10bb1000 },
  { 0x10bb1580u, f_10bb1580 },
  { 0x10bb15a0u, f_10bb15a0 },
  { 0x10bb3090u, f_10bb3090 },
  { 0x10bb3169u, f_10bb3169 },
  { 0x10bb3206u, f_10bb3206 },
  { 0x10bb3239u, f_10bb3239 },
  { 0x10bb3266u, f_10bb3266 },
  { 0x10bb3277u, f_10bb3277 },
  { 0x10bb3286u, f_10bb3286 },
  { 0x10bb332bu, f_10bb332b },
  { 0x10bb3334u, f_10bb3334 },
  { 0x10bb333du, f_10bb333d },
  { 0x10bb3357u, f_10bb3357 },
  { 0x10bb33abu, f_10bb33ab },
  { 0x10bb33c9u, f_10bb33c9 },
  { 0x10bb33dcu, f_10bb33dc },
  { 0x10bb347cu, f_10bb347c },
  { 0x10bb3638u, f_10bb3638 },
  { 0x10bb368cu, f_10bb368c },
  { 0x10bb3745u, f_10bb3745 },
  { 0x10bb37deu, f_10bb37de },
  { 0x10bb3992u, f_10bb3992 },
  { 0x10bb3ac4u, f_10bb3ac4 },
  { 0x10bb3b00u, f_10bb3b00 },
  { 0x10bb3b75u, f_10bb3b75 },
  { 0x10bb3baeu, f_10bb3bae },
  { 0x10bb3d01u, f_10bb3d01 },
  { 0x10bb3d2au, f_10bb3d2a },
  { 0x10bb3d96u, f_10bb3d96 },
  { 0x10bb3df7u, f_10bb3df7 },
  { 0x10bb3e0cu, f_10bb3e0c },
  { 0x10bb3e99u, f_10bb3e99 },
  { 0x10bb3ee1u, f_10bb3ee1 },
  { 0x10bb3ef3u, f_10bb3ef3 },
  { 0x10bb3f1fu, f_10bb3f1f },
  { 0x10bb3f70u, f_10bb3f70 },
  { 0x10bb3f80u, f_10bb3f80 },
  { 0x10bb4060u, f_10bb4060 },
  { 0x10bb40dbu, f_10bb40db },
  { 0x10bb4288u, f_10bb4288 },
  { 0x10bb42d2u, f_10bb42d2 },
  { 0x10bb4305u, f_10bb4305 },
  { 0x10bb432eu, f_10bb432e },
  { 0x10bb44b3u, f_10bb44b3 },
  { 0x10bb44d0u, f_10bb44d0 },
  { 0x10bb4805u, f_10bb4805 },
  { 0x10bb4843u, f_10bb4843 },
  { 0x10bb486eu, f_10bb486e },
  { 0x10bb4b99u, f_10bb4b99 },
  { 0x10bb4ea2u, f_10bb4ea2 },
  { 0x10bb4f53u, f_10bb4f53 },
  { 0x10bb504eu, f_10bb504e },
  { 0x10bb50e0u, f_10bb50e0 },
  { 0x10bb51e0u, f_10bb51e0 },
  { 0x10bb5238u, f_10bb5238 },
  { 0x10bb5253u, f_10bb5253 },
  { 0x10bb5477u, f_10bb5477 },
  { 0x10bb54a2u, f_10bb54a2 },
  { 0x10bb55f0u, f_10bb55f0 },
  { 0x10bb5928u, f_10bb5928 },
  { 0x10bb596au, f_10bb596a },
  { 0x10bb59feu, f_10bb59fe },
  { 0x10bb5addu, f_10bb5add },
  { 0x10bb5b00u, f_10bb5b00 },
  { 0x10bb5b30u, f_10bb5b30 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10bb1000u
#define FSIZE 0x00004b46u
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
