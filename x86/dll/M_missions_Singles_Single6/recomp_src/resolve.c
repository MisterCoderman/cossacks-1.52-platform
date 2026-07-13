#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11a01000u, f_11a01000 },
  { 0x11a01012u, f_11a01012 },
  { 0x11a01043u, f_11a01043 },
  { 0x11a01071u, f_11a01071 },
  { 0x11a01088u, f_11a01088 },
  { 0x11a010a6u, f_11a010a6 },
  { 0x11a01103u, f_11a01103 },
  { 0x11a0113du, f_11a0113d },
  { 0x11a01154u, f_11a01154 },
  { 0x11a0118au, f_11a0118a },
  { 0x11a0126eu, f_11a0126e },
  { 0x11a01868u, f_11a01868 },
  { 0x11a034f9u, f_11a034f9 },
  { 0x11a035d2u, f_11a035d2 },
  { 0x11a0366fu, f_11a0366f },
  { 0x11a036a2u, f_11a036a2 },
  { 0x11a036cfu, f_11a036cf },
  { 0x11a036e0u, f_11a036e0 },
  { 0x11a036efu, f_11a036ef },
  { 0x11a03794u, f_11a03794 },
  { 0x11a0379du, f_11a0379d },
  { 0x11a037a6u, f_11a037a6 },
  { 0x11a037c0u, f_11a037c0 },
  { 0x11a03814u, f_11a03814 },
  { 0x11a03832u, f_11a03832 },
  { 0x11a03845u, f_11a03845 },
  { 0x11a038e5u, f_11a038e5 },
  { 0x11a03aa1u, f_11a03aa1 },
  { 0x11a03af5u, f_11a03af5 },
  { 0x11a03baeu, f_11a03bae },
  { 0x11a03c47u, f_11a03c47 },
  { 0x11a03dfbu, f_11a03dfb },
  { 0x11a03f2du, f_11a03f2d },
  { 0x11a03f69u, f_11a03f69 },
  { 0x11a03fdeu, f_11a03fde },
  { 0x11a04017u, f_11a04017 },
  { 0x11a0416au, f_11a0416a },
  { 0x11a04193u, f_11a04193 },
  { 0x11a041ffu, f_11a041ff },
  { 0x11a04260u, f_11a04260 },
  { 0x11a04275u, f_11a04275 },
  { 0x11a04302u, f_11a04302 },
  { 0x11a0434au, f_11a0434a },
  { 0x11a0435cu, f_11a0435c },
  { 0x11a04388u, f_11a04388 },
  { 0x11a043e0u, f_11a043e0 },
  { 0x11a043f0u, f_11a043f0 },
  { 0x11a044d0u, f_11a044d0 },
  { 0x11a0454bu, f_11a0454b },
  { 0x11a046f8u, f_11a046f8 },
  { 0x11a04742u, f_11a04742 },
  { 0x11a04775u, f_11a04775 },
  { 0x11a0479eu, f_11a0479e },
  { 0x11a04923u, f_11a04923 },
  { 0x11a04940u, f_11a04940 },
  { 0x11a04c75u, f_11a04c75 },
  { 0x11a04cb3u, f_11a04cb3 },
  { 0x11a04cdeu, f_11a04cde },
  { 0x11a05009u, f_11a05009 },
  { 0x11a05312u, f_11a05312 },
  { 0x11a053c3u, f_11a053c3 },
  { 0x11a054beu, f_11a054be },
  { 0x11a05550u, f_11a05550 },
  { 0x11a05650u, f_11a05650 },
  { 0x11a056a8u, f_11a056a8 },
  { 0x11a056c3u, f_11a056c3 },
  { 0x11a058e7u, f_11a058e7 },
  { 0x11a05912u, f_11a05912 },
  { 0x11a05a60u, f_11a05a60 },
  { 0x11a05d98u, f_11a05d98 },
  { 0x11a05ddau, f_11a05dda },
  { 0x11a05e6eu, f_11a05e6e },
  { 0x11a05f4du, f_11a05f4d },
  { 0x11a05f70u, f_11a05f70 },
  { 0x11a05fa0u, f_11a05fa0 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11a01000u
#define FSIZE 0x00004fb6u
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
