#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10941000u, f_10941000 },
  { 0x10941560u, f_10941560 },
  { 0x10941580u, f_10941580 },
  { 0x10943a50u, f_10943a50 },
  { 0x10943a72u, f_10943a72 },
  { 0x10943b4bu, f_10943b4b },
  { 0x10943be8u, f_10943be8 },
  { 0x10943c1bu, f_10943c1b },
  { 0x10943c6fu, f_10943c6f },
  { 0x10943c8du, f_10943c8d },
  { 0x10943ca0u, f_10943ca0 },
  { 0x10943d07u, f_10943d07 },
  { 0x10943da7u, f_10943da7 },
  { 0x10943dd4u, f_10943dd4 },
  { 0x10943de5u, f_10943de5 },
  { 0x10943df4u, f_10943df4 },
  { 0x10943e99u, f_10943e99 },
  { 0x10943ea2u, f_10943ea2 },
  { 0x10943eabu, f_10943eab },
  { 0x10943ec5u, f_10943ec5 },
  { 0x10944081u, f_10944081 },
  { 0x109440d5u, f_109440d5 },
  { 0x1094418eu, f_1094418e },
  { 0x10944227u, f_10944227 },
  { 0x109443dbu, f_109443db },
  { 0x1094450du, f_1094450d },
  { 0x10944549u, f_10944549 },
  { 0x109445beu, f_109445be },
  { 0x109445f7u, f_109445f7 },
  { 0x1094474au, f_1094474a },
  { 0x109447d7u, f_109447d7 },
  { 0x10944800u, f_10944800 },
  { 0x1094486cu, f_1094486c },
  { 0x109448cdu, f_109448cd },
  { 0x109448e2u, f_109448e2 },
  { 0x1094492au, f_1094492a },
  { 0x1094493cu, f_1094493c },
  { 0x10944968u, f_10944968 },
  { 0x109449c0u, f_109449c0 },
  { 0x109449d0u, f_109449d0 },
  { 0x10944ab0u, f_10944ab0 },
  { 0x10944b2bu, f_10944b2b },
  { 0x10944cd8u, f_10944cd8 },
  { 0x10944d22u, f_10944d22 },
  { 0x10944d55u, f_10944d55 },
  { 0x10944d7eu, f_10944d7e },
  { 0x10944f03u, f_10944f03 },
  { 0x10944f20u, f_10944f20 },
  { 0x10945255u, f_10945255 },
  { 0x10945293u, f_10945293 },
  { 0x109452beu, f_109452be },
  { 0x109455e9u, f_109455e9 },
  { 0x109458f2u, f_109458f2 },
  { 0x109459a3u, f_109459a3 },
  { 0x10945a9eu, f_10945a9e },
  { 0x10945b30u, f_10945b30 },
  { 0x10945c30u, f_10945c30 },
  { 0x10945c88u, f_10945c88 },
  { 0x10945ca3u, f_10945ca3 },
  { 0x10945ec7u, f_10945ec7 },
  { 0x10945ef2u, f_10945ef2 },
  { 0x10946040u, f_10946040 },
  { 0x10946378u, f_10946378 },
  { 0x109463bau, f_109463ba },
  { 0x1094644eu, f_1094644e },
  { 0x1094652du, f_1094652d },
  { 0x10946550u, f_10946550 },
  { 0x10946580u, f_10946580 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10941000u
#define FSIZE 0x00005596u
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
