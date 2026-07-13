#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x115e1000u, f_115e1000 },
  { 0x115e1012u, f_115e1012 },
  { 0x115e108cu, f_115e108c },
  { 0x115e10aau, f_115e10aa },
  { 0x115e10dbu, f_115e10db },
  { 0x115e10f3u, f_115e10f3 },
  { 0x115e111au, f_115e111a },
  { 0x115e1164u, f_115e1164 },
  { 0x115e140fu, f_115e140f },
  { 0x115e229au, f_115e229a },
  { 0x115e2373u, f_115e2373 },
  { 0x115e2410u, f_115e2410 },
  { 0x115e2443u, f_115e2443 },
  { 0x115e2470u, f_115e2470 },
  { 0x115e2481u, f_115e2481 },
  { 0x115e2490u, f_115e2490 },
  { 0x115e2535u, f_115e2535 },
  { 0x115e253eu, f_115e253e },
  { 0x115e2547u, f_115e2547 },
  { 0x115e2561u, f_115e2561 },
  { 0x115e25b5u, f_115e25b5 },
  { 0x115e25d3u, f_115e25d3 },
  { 0x115e25e6u, f_115e25e6 },
  { 0x115e2686u, f_115e2686 },
  { 0x115e2842u, f_115e2842 },
  { 0x115e2896u, f_115e2896 },
  { 0x115e294fu, f_115e294f },
  { 0x115e29e8u, f_115e29e8 },
  { 0x115e2b9cu, f_115e2b9c },
  { 0x115e2cceu, f_115e2cce },
  { 0x115e2d0au, f_115e2d0a },
  { 0x115e2d7fu, f_115e2d7f },
  { 0x115e2db8u, f_115e2db8 },
  { 0x115e2f0bu, f_115e2f0b },
  { 0x115e2f34u, f_115e2f34 },
  { 0x115e2fa0u, f_115e2fa0 },
  { 0x115e3001u, f_115e3001 },
  { 0x115e3016u, f_115e3016 },
  { 0x115e30a3u, f_115e30a3 },
  { 0x115e30ebu, f_115e30eb },
  { 0x115e30fdu, f_115e30fd },
  { 0x115e3129u, f_115e3129 },
  { 0x115e3180u, f_115e3180 },
  { 0x115e3190u, f_115e3190 },
  { 0x115e3270u, f_115e3270 },
  { 0x115e32ebu, f_115e32eb },
  { 0x115e3498u, f_115e3498 },
  { 0x115e34e2u, f_115e34e2 },
  { 0x115e3515u, f_115e3515 },
  { 0x115e353eu, f_115e353e },
  { 0x115e36c3u, f_115e36c3 },
  { 0x115e36e0u, f_115e36e0 },
  { 0x115e3a15u, f_115e3a15 },
  { 0x115e3a53u, f_115e3a53 },
  { 0x115e3a7eu, f_115e3a7e },
  { 0x115e3da9u, f_115e3da9 },
  { 0x115e40b2u, f_115e40b2 },
  { 0x115e4163u, f_115e4163 },
  { 0x115e425eu, f_115e425e },
  { 0x115e42f0u, f_115e42f0 },
  { 0x115e43f0u, f_115e43f0 },
  { 0x115e4448u, f_115e4448 },
  { 0x115e4463u, f_115e4463 },
  { 0x115e4687u, f_115e4687 },
  { 0x115e46b2u, f_115e46b2 },
  { 0x115e4800u, f_115e4800 },
  { 0x115e4b38u, f_115e4b38 },
  { 0x115e4b7au, f_115e4b7a },
  { 0x115e4c0eu, f_115e4c0e },
  { 0x115e4cedu, f_115e4ced },
  { 0x115e4d10u, f_115e4d10 },
  { 0x115e4d40u, f_115e4d40 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x115e1000u
#define FSIZE 0x00003d56u
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
