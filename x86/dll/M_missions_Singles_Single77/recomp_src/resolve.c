#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11cb1000u, f_11cb1000 },
  { 0x11cb1012u, f_11cb1012 },
  { 0x11cb1030u, f_11cb1030 },
  { 0x11cb106au, f_11cb106a },
  { 0x11cb1082u, f_11cb1082 },
  { 0x11cb1099u, f_11cb1099 },
  { 0x11cb10c0u, f_11cb10c0 },
  { 0x11cb110au, f_11cb110a },
  { 0x11cb11fbu, f_11cb11fb },
  { 0x11cb1667u, f_11cb1667 },
  { 0x11cb2345u, f_11cb2345 },
  { 0x11cb241eu, f_11cb241e },
  { 0x11cb24bbu, f_11cb24bb },
  { 0x11cb24eeu, f_11cb24ee },
  { 0x11cb251bu, f_11cb251b },
  { 0x11cb252cu, f_11cb252c },
  { 0x11cb253bu, f_11cb253b },
  { 0x11cb25e0u, f_11cb25e0 },
  { 0x11cb25e9u, f_11cb25e9 },
  { 0x11cb25f2u, f_11cb25f2 },
  { 0x11cb260cu, f_11cb260c },
  { 0x11cb2660u, f_11cb2660 },
  { 0x11cb267eu, f_11cb267e },
  { 0x11cb2691u, f_11cb2691 },
  { 0x11cb2731u, f_11cb2731 },
  { 0x11cb28edu, f_11cb28ed },
  { 0x11cb2941u, f_11cb2941 },
  { 0x11cb29fau, f_11cb29fa },
  { 0x11cb2a93u, f_11cb2a93 },
  { 0x11cb2c47u, f_11cb2c47 },
  { 0x11cb2d79u, f_11cb2d79 },
  { 0x11cb2db5u, f_11cb2db5 },
  { 0x11cb2e2au, f_11cb2e2a },
  { 0x11cb2e63u, f_11cb2e63 },
  { 0x11cb2fb6u, f_11cb2fb6 },
  { 0x11cb2fdfu, f_11cb2fdf },
  { 0x11cb304bu, f_11cb304b },
  { 0x11cb30acu, f_11cb30ac },
  { 0x11cb30c1u, f_11cb30c1 },
  { 0x11cb314eu, f_11cb314e },
  { 0x11cb3196u, f_11cb3196 },
  { 0x11cb31a8u, f_11cb31a8 },
  { 0x11cb31d4u, f_11cb31d4 },
  { 0x11cb3230u, f_11cb3230 },
  { 0x11cb3240u, f_11cb3240 },
  { 0x11cb3320u, f_11cb3320 },
  { 0x11cb339bu, f_11cb339b },
  { 0x11cb3548u, f_11cb3548 },
  { 0x11cb3592u, f_11cb3592 },
  { 0x11cb35c5u, f_11cb35c5 },
  { 0x11cb35eeu, f_11cb35ee },
  { 0x11cb3773u, f_11cb3773 },
  { 0x11cb3790u, f_11cb3790 },
  { 0x11cb3ac5u, f_11cb3ac5 },
  { 0x11cb3b03u, f_11cb3b03 },
  { 0x11cb3b2eu, f_11cb3b2e },
  { 0x11cb3e59u, f_11cb3e59 },
  { 0x11cb4162u, f_11cb4162 },
  { 0x11cb4213u, f_11cb4213 },
  { 0x11cb430eu, f_11cb430e },
  { 0x11cb43a0u, f_11cb43a0 },
  { 0x11cb44a0u, f_11cb44a0 },
  { 0x11cb44f8u, f_11cb44f8 },
  { 0x11cb4513u, f_11cb4513 },
  { 0x11cb4737u, f_11cb4737 },
  { 0x11cb4762u, f_11cb4762 },
  { 0x11cb48b0u, f_11cb48b0 },
  { 0x11cb4be8u, f_11cb4be8 },
  { 0x11cb4c2au, f_11cb4c2a },
  { 0x11cb4cbeu, f_11cb4cbe },
  { 0x11cb4d9du, f_11cb4d9d },
  { 0x11cb4dc0u, f_11cb4dc0 },
  { 0x11cb4df0u, f_11cb4df0 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11cb1000u
#define FSIZE 0x00003e06u
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
