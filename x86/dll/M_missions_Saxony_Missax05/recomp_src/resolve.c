#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10bc1000u, f_10bc1000 },
  { 0x10bc12a0u, f_10bc12a0 },
  { 0x10bc2200u, f_10bc2200 },
  { 0x10bc2220u, f_10bc2220 },
  { 0x10bc22f9u, f_10bc22f9 },
  { 0x10bc2396u, f_10bc2396 },
  { 0x10bc23c9u, f_10bc23c9 },
  { 0x10bc23f6u, f_10bc23f6 },
  { 0x10bc2407u, f_10bc2407 },
  { 0x10bc2416u, f_10bc2416 },
  { 0x10bc24bbu, f_10bc24bb },
  { 0x10bc24c4u, f_10bc24c4 },
  { 0x10bc24cdu, f_10bc24cd },
  { 0x10bc24e7u, f_10bc24e7 },
  { 0x10bc253bu, f_10bc253b },
  { 0x10bc2559u, f_10bc2559 },
  { 0x10bc256cu, f_10bc256c },
  { 0x10bc260cu, f_10bc260c },
  { 0x10bc27c8u, f_10bc27c8 },
  { 0x10bc281cu, f_10bc281c },
  { 0x10bc28d5u, f_10bc28d5 },
  { 0x10bc296eu, f_10bc296e },
  { 0x10bc2b22u, f_10bc2b22 },
  { 0x10bc2c54u, f_10bc2c54 },
  { 0x10bc2c90u, f_10bc2c90 },
  { 0x10bc2d05u, f_10bc2d05 },
  { 0x10bc2d3eu, f_10bc2d3e },
  { 0x10bc2e91u, f_10bc2e91 },
  { 0x10bc2ebau, f_10bc2eba },
  { 0x10bc2f26u, f_10bc2f26 },
  { 0x10bc2f87u, f_10bc2f87 },
  { 0x10bc2f9cu, f_10bc2f9c },
  { 0x10bc3029u, f_10bc3029 },
  { 0x10bc3071u, f_10bc3071 },
  { 0x10bc3083u, f_10bc3083 },
  { 0x10bc30afu, f_10bc30af },
  { 0x10bc3100u, f_10bc3100 },
  { 0x10bc3110u, f_10bc3110 },
  { 0x10bc31f0u, f_10bc31f0 },
  { 0x10bc326bu, f_10bc326b },
  { 0x10bc3418u, f_10bc3418 },
  { 0x10bc3462u, f_10bc3462 },
  { 0x10bc3495u, f_10bc3495 },
  { 0x10bc34beu, f_10bc34be },
  { 0x10bc3643u, f_10bc3643 },
  { 0x10bc3660u, f_10bc3660 },
  { 0x10bc3995u, f_10bc3995 },
  { 0x10bc39d3u, f_10bc39d3 },
  { 0x10bc39feu, f_10bc39fe },
  { 0x10bc3d29u, f_10bc3d29 },
  { 0x10bc4032u, f_10bc4032 },
  { 0x10bc40e3u, f_10bc40e3 },
  { 0x10bc41deu, f_10bc41de },
  { 0x10bc4270u, f_10bc4270 },
  { 0x10bc4370u, f_10bc4370 },
  { 0x10bc43c8u, f_10bc43c8 },
  { 0x10bc43e3u, f_10bc43e3 },
  { 0x10bc4607u, f_10bc4607 },
  { 0x10bc4632u, f_10bc4632 },
  { 0x10bc4780u, f_10bc4780 },
  { 0x10bc4ab8u, f_10bc4ab8 },
  { 0x10bc4afau, f_10bc4afa },
  { 0x10bc4b8eu, f_10bc4b8e },
  { 0x10bc4c6du, f_10bc4c6d },
  { 0x10bc4c90u, f_10bc4c90 },
  { 0x10bc4cc0u, f_10bc4cc0 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10bc1000u
#define FSIZE 0x00003cd6u
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
