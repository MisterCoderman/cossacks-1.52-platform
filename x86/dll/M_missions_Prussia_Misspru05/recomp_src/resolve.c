#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10971000u, f_10971000 },
  { 0x10971300u, f_10971300 },
  { 0x10971320u, f_10971320 },
  { 0x10971ff0u, f_10971ff0 },
  { 0x109720c9u, f_109720c9 },
  { 0x10972166u, f_10972166 },
  { 0x10972199u, f_10972199 },
  { 0x109721c6u, f_109721c6 },
  { 0x109721d7u, f_109721d7 },
  { 0x109721e6u, f_109721e6 },
  { 0x1097228bu, f_1097228b },
  { 0x10972294u, f_10972294 },
  { 0x1097229du, f_1097229d },
  { 0x109722b7u, f_109722b7 },
  { 0x1097230bu, f_1097230b },
  { 0x10972329u, f_10972329 },
  { 0x1097233cu, f_1097233c },
  { 0x109723dcu, f_109723dc },
  { 0x10972598u, f_10972598 },
  { 0x109725ecu, f_109725ec },
  { 0x109726a5u, f_109726a5 },
  { 0x1097273eu, f_1097273e },
  { 0x109728f2u, f_109728f2 },
  { 0x10972a24u, f_10972a24 },
  { 0x10972a60u, f_10972a60 },
  { 0x10972ad5u, f_10972ad5 },
  { 0x10972b0eu, f_10972b0e },
  { 0x10972c61u, f_10972c61 },
  { 0x10972c8au, f_10972c8a },
  { 0x10972cf6u, f_10972cf6 },
  { 0x10972d57u, f_10972d57 },
  { 0x10972d6cu, f_10972d6c },
  { 0x10972df9u, f_10972df9 },
  { 0x10972e41u, f_10972e41 },
  { 0x10972e53u, f_10972e53 },
  { 0x10972e7fu, f_10972e7f },
  { 0x10972ed0u, f_10972ed0 },
  { 0x10972ee0u, f_10972ee0 },
  { 0x10972fc0u, f_10972fc0 },
  { 0x1097303bu, f_1097303b },
  { 0x109731e8u, f_109731e8 },
  { 0x10973232u, f_10973232 },
  { 0x10973265u, f_10973265 },
  { 0x1097328eu, f_1097328e },
  { 0x10973413u, f_10973413 },
  { 0x10973430u, f_10973430 },
  { 0x10973765u, f_10973765 },
  { 0x109737a3u, f_109737a3 },
  { 0x109737ceu, f_109737ce },
  { 0x10973af9u, f_10973af9 },
  { 0x10973e02u, f_10973e02 },
  { 0x10973eb3u, f_10973eb3 },
  { 0x10973faeu, f_10973fae },
  { 0x10974040u, f_10974040 },
  { 0x10974140u, f_10974140 },
  { 0x10974198u, f_10974198 },
  { 0x109741b3u, f_109741b3 },
  { 0x109743d7u, f_109743d7 },
  { 0x10974402u, f_10974402 },
  { 0x10974550u, f_10974550 },
  { 0x10974888u, f_10974888 },
  { 0x109748cau, f_109748ca },
  { 0x1097495eu, f_1097495e },
  { 0x10974a3du, f_10974a3d },
  { 0x10974a60u, f_10974a60 },
  { 0x10974a90u, f_10974a90 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10971000u
#define FSIZE 0x00003aa6u
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
