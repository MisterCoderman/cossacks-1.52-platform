#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10ba1000u, f_10ba1000 },
  { 0x10ba1220u, f_10ba1220 },
  { 0x10ba1dc0u, f_10ba1dc0 },
  { 0x10ba1de0u, f_10ba1de0 },
  { 0x10ba1eb9u, f_10ba1eb9 },
  { 0x10ba1f56u, f_10ba1f56 },
  { 0x10ba1f89u, f_10ba1f89 },
  { 0x10ba1fb6u, f_10ba1fb6 },
  { 0x10ba1fc7u, f_10ba1fc7 },
  { 0x10ba1fd6u, f_10ba1fd6 },
  { 0x10ba207bu, f_10ba207b },
  { 0x10ba2084u, f_10ba2084 },
  { 0x10ba208du, f_10ba208d },
  { 0x10ba20a7u, f_10ba20a7 },
  { 0x10ba20fbu, f_10ba20fb },
  { 0x10ba2119u, f_10ba2119 },
  { 0x10ba212cu, f_10ba212c },
  { 0x10ba21ccu, f_10ba21cc },
  { 0x10ba2388u, f_10ba2388 },
  { 0x10ba23dcu, f_10ba23dc },
  { 0x10ba2495u, f_10ba2495 },
  { 0x10ba252eu, f_10ba252e },
  { 0x10ba26e2u, f_10ba26e2 },
  { 0x10ba2814u, f_10ba2814 },
  { 0x10ba2850u, f_10ba2850 },
  { 0x10ba28c5u, f_10ba28c5 },
  { 0x10ba28feu, f_10ba28fe },
  { 0x10ba2a51u, f_10ba2a51 },
  { 0x10ba2a7au, f_10ba2a7a },
  { 0x10ba2ae6u, f_10ba2ae6 },
  { 0x10ba2b47u, f_10ba2b47 },
  { 0x10ba2b5cu, f_10ba2b5c },
  { 0x10ba2be9u, f_10ba2be9 },
  { 0x10ba2c31u, f_10ba2c31 },
  { 0x10ba2c43u, f_10ba2c43 },
  { 0x10ba2c6fu, f_10ba2c6f },
  { 0x10ba2cc0u, f_10ba2cc0 },
  { 0x10ba2cd0u, f_10ba2cd0 },
  { 0x10ba2db0u, f_10ba2db0 },
  { 0x10ba2e2bu, f_10ba2e2b },
  { 0x10ba2fd8u, f_10ba2fd8 },
  { 0x10ba3022u, f_10ba3022 },
  { 0x10ba3055u, f_10ba3055 },
  { 0x10ba307eu, f_10ba307e },
  { 0x10ba3203u, f_10ba3203 },
  { 0x10ba3220u, f_10ba3220 },
  { 0x10ba3555u, f_10ba3555 },
  { 0x10ba3593u, f_10ba3593 },
  { 0x10ba35beu, f_10ba35be },
  { 0x10ba38e9u, f_10ba38e9 },
  { 0x10ba3bf2u, f_10ba3bf2 },
  { 0x10ba3ca3u, f_10ba3ca3 },
  { 0x10ba3d9eu, f_10ba3d9e },
  { 0x10ba3e30u, f_10ba3e30 },
  { 0x10ba3f30u, f_10ba3f30 },
  { 0x10ba3f88u, f_10ba3f88 },
  { 0x10ba3fa3u, f_10ba3fa3 },
  { 0x10ba41c7u, f_10ba41c7 },
  { 0x10ba41f2u, f_10ba41f2 },
  { 0x10ba4340u, f_10ba4340 },
  { 0x10ba4678u, f_10ba4678 },
  { 0x10ba46bau, f_10ba46ba },
  { 0x10ba474eu, f_10ba474e },
  { 0x10ba482du, f_10ba482d },
  { 0x10ba4850u, f_10ba4850 },
  { 0x10ba4880u, f_10ba4880 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10ba1000u
#define FSIZE 0x00003896u
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
