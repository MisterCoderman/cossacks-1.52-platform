#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10051000u, f_10051000 },
  { 0x10051010u, f_10051010 },
  { 0x100525f0u, f_100525f0 },
  { 0x10052610u, f_10052610 },
  { 0x10052630u, f_10052630 },
  { 0x10052640u, f_10052640 },
  { 0x10052660u, f_10052660 },
  { 0x10052670u, f_10052670 },
  { 0x10052680u, f_10052680 },
  { 0x10052690u, f_10052690 },
  { 0x100526a0u, f_100526a0 },
  { 0x100526c0u, f_100526c0 },
  { 0x100526d0u, f_100526d0 },
  { 0x100526f0u, f_100526f0 },
  { 0x10052700u, f_10052700 },
  { 0x10052720u, f_10052720 },
  { 0x10052730u, f_10052730 },
  { 0x10052740u, f_10052740 },
  { 0x10052760u, f_10052760 },
  { 0x10052770u, f_10052770 },
  { 0x10052780u, f_10052780 },
  { 0x10052790u, f_10052790 },
  { 0x100527f0u, f_100527f0 },
  { 0x10052f30u, f_10052f30 },
  { 0x10052f60u, f_10052f60 },
  { 0x10052f90u, f_10052f90 },
  { 0x10053040u, f_10053040 },
  { 0x100531c0u, f_100531c0 },
  { 0x10053220u, f_10053220 },
  { 0x10053230u, f_10053230 },
  { 0x100532d0u, f_100532d0 },
  { 0x10053320u, f_10053320 },
  { 0x10053360u, f_10053360 },
  { 0x10054230u, f_10054230 },
  { 0x10054310u, f_10054310 },
  { 0x10054360u, f_10054360 },
  { 0x100543e0u, f_100543e0 },
  { 0x10055220u, f_10055220 },
  { 0x10055270u, f_10055270 },
  { 0x100552b0u, f_100552b0 },
  { 0x10055a90u, f_10055a90 },
  { 0x10055bd0u, f_10055bd0 },
  { 0x10055df0u, f_10055df0 },
  { 0x10055fd0u, f_10055fd0 },
  { 0x100562f0u, f_100562f0 },
  { 0x10056630u, f_10056630 },
  { 0x100566e0u, f_100566e0 },
  { 0x10056730u, f_10056730 },
  { 0x10056820u, f_10056820 },
  { 0x10056950u, f_10056950 },
  { 0x10056b60u, f_10056b60 },
  { 0x10056be0u, f_10056be0 },
  { 0x10056c40u, f_10056c40 },
  { 0x10056d40u, f_10056d40 },
  { 0x10056e70u, f_10056e70 },
  { 0x10056f1bu, f_10056f1b },
  { 0x10056fb8u, f_10056fb8 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10051000u
#define FSIZE 0x00005fceu
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
