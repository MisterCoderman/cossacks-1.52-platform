#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10351000u, f_10351000 },
  { 0x10351012u, f_10351012 },
  { 0x10351033u, f_10351033 },
  { 0x1035122fu, f_1035122f },
  { 0x10351308u, f_10351308 },
  { 0x103513a5u, f_103513a5 },
  { 0x103513d8u, f_103513d8 },
  { 0x10351405u, f_10351405 },
  { 0x10351416u, f_10351416 },
  { 0x10351425u, f_10351425 },
  { 0x103514cau, f_103514ca },
  { 0x103514d3u, f_103514d3 },
  { 0x103514dcu, f_103514dc },
  { 0x103514f6u, f_103514f6 },
  { 0x1035154au, f_1035154a },
  { 0x10351568u, f_10351568 },
  { 0x1035157bu, f_1035157b },
  { 0x1035161bu, f_1035161b },
  { 0x103517d7u, f_103517d7 },
  { 0x1035182bu, f_1035182b },
  { 0x103518e4u, f_103518e4 },
  { 0x1035197du, f_1035197d },
  { 0x10351b31u, f_10351b31 },
  { 0x10351c63u, f_10351c63 },
  { 0x10351c9fu, f_10351c9f },
  { 0x10351d14u, f_10351d14 },
  { 0x10351d4du, f_10351d4d },
  { 0x10351ea0u, f_10351ea0 },
  { 0x10351ec9u, f_10351ec9 },
  { 0x10351f35u, f_10351f35 },
  { 0x10351f96u, f_10351f96 },
  { 0x10351fabu, f_10351fab },
  { 0x10352038u, f_10352038 },
  { 0x10352080u, f_10352080 },
  { 0x10352092u, f_10352092 },
  { 0x103520beu, f_103520be },
  { 0x10352110u, f_10352110 },
  { 0x10352120u, f_10352120 },
  { 0x10352200u, f_10352200 },
  { 0x1035227bu, f_1035227b },
  { 0x10352428u, f_10352428 },
  { 0x10352472u, f_10352472 },
  { 0x103524a5u, f_103524a5 },
  { 0x103524ceu, f_103524ce },
  { 0x10352653u, f_10352653 },
  { 0x10352670u, f_10352670 },
  { 0x103529a5u, f_103529a5 },
  { 0x103529e3u, f_103529e3 },
  { 0x10352a0eu, f_10352a0e },
  { 0x10352d39u, f_10352d39 },
  { 0x10353042u, f_10353042 },
  { 0x103530f3u, f_103530f3 },
  { 0x103531eeu, f_103531ee },
  { 0x10353280u, f_10353280 },
  { 0x10353380u, f_10353380 },
  { 0x103533d8u, f_103533d8 },
  { 0x103533f3u, f_103533f3 },
  { 0x10353617u, f_10353617 },
  { 0x10353642u, f_10353642 },
  { 0x10353790u, f_10353790 },
  { 0x10353ac8u, f_10353ac8 },
  { 0x10353b0au, f_10353b0a },
  { 0x10353b9eu, f_10353b9e },
  { 0x10353c7du, f_10353c7d },
  { 0x10353ca0u, f_10353ca0 },
  { 0x10353cd0u, f_10353cd0 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10351000u
#define FSIZE 0x00002ce6u
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
