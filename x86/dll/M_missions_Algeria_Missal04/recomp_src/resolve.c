#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x102b1000u, f_102b1000 },
  { 0x102b1020u, f_102b1020 },
  { 0x102b13b0u, f_102b13b0 },
  { 0x102b15d0u, f_102b15d0 },
  { 0x102b1e40u, f_102b1e40 },
  { 0x102b1f19u, f_102b1f19 },
  { 0x102b1fb6u, f_102b1fb6 },
  { 0x102b1fe9u, f_102b1fe9 },
  { 0x102b2016u, f_102b2016 },
  { 0x102b2027u, f_102b2027 },
  { 0x102b2036u, f_102b2036 },
  { 0x102b20dbu, f_102b20db },
  { 0x102b20e4u, f_102b20e4 },
  { 0x102b20edu, f_102b20ed },
  { 0x102b2107u, f_102b2107 },
  { 0x102b215bu, f_102b215b },
  { 0x102b2179u, f_102b2179 },
  { 0x102b218cu, f_102b218c },
  { 0x102b222cu, f_102b222c },
  { 0x102b23e8u, f_102b23e8 },
  { 0x102b243cu, f_102b243c },
  { 0x102b24f5u, f_102b24f5 },
  { 0x102b258eu, f_102b258e },
  { 0x102b2742u, f_102b2742 },
  { 0x102b2874u, f_102b2874 },
  { 0x102b28b0u, f_102b28b0 },
  { 0x102b2925u, f_102b2925 },
  { 0x102b295eu, f_102b295e },
  { 0x102b2ab1u, f_102b2ab1 },
  { 0x102b2adau, f_102b2ada },
  { 0x102b2b46u, f_102b2b46 },
  { 0x102b2ba7u, f_102b2ba7 },
  { 0x102b2bbcu, f_102b2bbc },
  { 0x102b2c49u, f_102b2c49 },
  { 0x102b2c91u, f_102b2c91 },
  { 0x102b2ca3u, f_102b2ca3 },
  { 0x102b2ccfu, f_102b2ccf },
  { 0x102b2d20u, f_102b2d20 },
  { 0x102b2d30u, f_102b2d30 },
  { 0x102b2e10u, f_102b2e10 },
  { 0x102b2e8bu, f_102b2e8b },
  { 0x102b3038u, f_102b3038 },
  { 0x102b3082u, f_102b3082 },
  { 0x102b30b5u, f_102b30b5 },
  { 0x102b30deu, f_102b30de },
  { 0x102b3263u, f_102b3263 },
  { 0x102b3280u, f_102b3280 },
  { 0x102b35b5u, f_102b35b5 },
  { 0x102b35f3u, f_102b35f3 },
  { 0x102b361eu, f_102b361e },
  { 0x102b3949u, f_102b3949 },
  { 0x102b3c52u, f_102b3c52 },
  { 0x102b3d03u, f_102b3d03 },
  { 0x102b3dfeu, f_102b3dfe },
  { 0x102b3e90u, f_102b3e90 },
  { 0x102b3f90u, f_102b3f90 },
  { 0x102b3fe8u, f_102b3fe8 },
  { 0x102b4003u, f_102b4003 },
  { 0x102b4227u, f_102b4227 },
  { 0x102b4252u, f_102b4252 },
  { 0x102b43a0u, f_102b43a0 },
  { 0x102b46d8u, f_102b46d8 },
  { 0x102b471au, f_102b471a },
  { 0x102b47aeu, f_102b47ae },
  { 0x102b488du, f_102b488d },
  { 0x102b48b0u, f_102b48b0 },
  { 0x102b48e0u, f_102b48e0 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x102b1000u
#define FSIZE 0x000038f6u
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
