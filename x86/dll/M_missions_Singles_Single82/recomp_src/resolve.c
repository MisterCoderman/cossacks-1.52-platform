#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11dd1000u, f_11dd1000 },
  { 0x11dd1050u, f_11dd1050 },
  { 0x11dd1380u, f_11dd1380 },
  { 0x11dd13a0u, f_11dd13a0 },
  { 0x11dd1fa0u, f_11dd1fa0 },
  { 0x11dd2079u, f_11dd2079 },
  { 0x11dd2116u, f_11dd2116 },
  { 0x11dd2149u, f_11dd2149 },
  { 0x11dd2176u, f_11dd2176 },
  { 0x11dd2187u, f_11dd2187 },
  { 0x11dd2196u, f_11dd2196 },
  { 0x11dd223bu, f_11dd223b },
  { 0x11dd2244u, f_11dd2244 },
  { 0x11dd224du, f_11dd224d },
  { 0x11dd2267u, f_11dd2267 },
  { 0x11dd22bbu, f_11dd22bb },
  { 0x11dd22d9u, f_11dd22d9 },
  { 0x11dd22ecu, f_11dd22ec },
  { 0x11dd238cu, f_11dd238c },
  { 0x11dd2548u, f_11dd2548 },
  { 0x11dd259cu, f_11dd259c },
  { 0x11dd2655u, f_11dd2655 },
  { 0x11dd26eeu, f_11dd26ee },
  { 0x11dd28a2u, f_11dd28a2 },
  { 0x11dd29d4u, f_11dd29d4 },
  { 0x11dd2a10u, f_11dd2a10 },
  { 0x11dd2a85u, f_11dd2a85 },
  { 0x11dd2abeu, f_11dd2abe },
  { 0x11dd2c11u, f_11dd2c11 },
  { 0x11dd2c3au, f_11dd2c3a },
  { 0x11dd2ca6u, f_11dd2ca6 },
  { 0x11dd2d07u, f_11dd2d07 },
  { 0x11dd2d1cu, f_11dd2d1c },
  { 0x11dd2da9u, f_11dd2da9 },
  { 0x11dd2df1u, f_11dd2df1 },
  { 0x11dd2e03u, f_11dd2e03 },
  { 0x11dd2e2fu, f_11dd2e2f },
  { 0x11dd2e80u, f_11dd2e80 },
  { 0x11dd2e90u, f_11dd2e90 },
  { 0x11dd2f70u, f_11dd2f70 },
  { 0x11dd2febu, f_11dd2feb },
  { 0x11dd3198u, f_11dd3198 },
  { 0x11dd31e2u, f_11dd31e2 },
  { 0x11dd3215u, f_11dd3215 },
  { 0x11dd323eu, f_11dd323e },
  { 0x11dd33c3u, f_11dd33c3 },
  { 0x11dd33e0u, f_11dd33e0 },
  { 0x11dd3715u, f_11dd3715 },
  { 0x11dd3753u, f_11dd3753 },
  { 0x11dd377eu, f_11dd377e },
  { 0x11dd3aa9u, f_11dd3aa9 },
  { 0x11dd3db2u, f_11dd3db2 },
  { 0x11dd3e63u, f_11dd3e63 },
  { 0x11dd3f5eu, f_11dd3f5e },
  { 0x11dd3ff0u, f_11dd3ff0 },
  { 0x11dd40f0u, f_11dd40f0 },
  { 0x11dd4148u, f_11dd4148 },
  { 0x11dd4163u, f_11dd4163 },
  { 0x11dd4387u, f_11dd4387 },
  { 0x11dd43b2u, f_11dd43b2 },
  { 0x11dd4500u, f_11dd4500 },
  { 0x11dd4838u, f_11dd4838 },
  { 0x11dd487au, f_11dd487a },
  { 0x11dd490eu, f_11dd490e },
  { 0x11dd49edu, f_11dd49ed },
  { 0x11dd4a10u, f_11dd4a10 },
  { 0x11dd4a40u, f_11dd4a40 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11dd1000u
#define FSIZE 0x00003a56u
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
