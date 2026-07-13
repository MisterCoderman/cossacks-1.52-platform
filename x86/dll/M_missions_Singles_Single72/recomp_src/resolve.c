#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11c21000u, f_11c21000 },
  { 0x11c21050u, f_11c21050 },
  { 0x11c21210u, f_11c21210 },
  { 0x11c217d0u, f_11c217d0 },
  { 0x11c217f0u, f_11c217f0 },
  { 0x11c218c9u, f_11c218c9 },
  { 0x11c21966u, f_11c21966 },
  { 0x11c21999u, f_11c21999 },
  { 0x11c219c6u, f_11c219c6 },
  { 0x11c219d7u, f_11c219d7 },
  { 0x11c219e6u, f_11c219e6 },
  { 0x11c21a8bu, f_11c21a8b },
  { 0x11c21a94u, f_11c21a94 },
  { 0x11c21a9du, f_11c21a9d },
  { 0x11c21ab7u, f_11c21ab7 },
  { 0x11c21b0bu, f_11c21b0b },
  { 0x11c21b29u, f_11c21b29 },
  { 0x11c21b3cu, f_11c21b3c },
  { 0x11c21bdcu, f_11c21bdc },
  { 0x11c21d98u, f_11c21d98 },
  { 0x11c21decu, f_11c21dec },
  { 0x11c21ea5u, f_11c21ea5 },
  { 0x11c21f3eu, f_11c21f3e },
  { 0x11c220f2u, f_11c220f2 },
  { 0x11c22224u, f_11c22224 },
  { 0x11c22260u, f_11c22260 },
  { 0x11c222d5u, f_11c222d5 },
  { 0x11c2230eu, f_11c2230e },
  { 0x11c22461u, f_11c22461 },
  { 0x11c2248au, f_11c2248a },
  { 0x11c224f6u, f_11c224f6 },
  { 0x11c22557u, f_11c22557 },
  { 0x11c2256cu, f_11c2256c },
  { 0x11c225f9u, f_11c225f9 },
  { 0x11c22641u, f_11c22641 },
  { 0x11c22653u, f_11c22653 },
  { 0x11c2267fu, f_11c2267f },
  { 0x11c226d0u, f_11c226d0 },
  { 0x11c226e0u, f_11c226e0 },
  { 0x11c227c0u, f_11c227c0 },
  { 0x11c2283bu, f_11c2283b },
  { 0x11c229e8u, f_11c229e8 },
  { 0x11c22a32u, f_11c22a32 },
  { 0x11c22a65u, f_11c22a65 },
  { 0x11c22a8eu, f_11c22a8e },
  { 0x11c22c13u, f_11c22c13 },
  { 0x11c22c30u, f_11c22c30 },
  { 0x11c22f65u, f_11c22f65 },
  { 0x11c22fa3u, f_11c22fa3 },
  { 0x11c22fceu, f_11c22fce },
  { 0x11c232f9u, f_11c232f9 },
  { 0x11c23602u, f_11c23602 },
  { 0x11c236b3u, f_11c236b3 },
  { 0x11c237aeu, f_11c237ae },
  { 0x11c23840u, f_11c23840 },
  { 0x11c23940u, f_11c23940 },
  { 0x11c23998u, f_11c23998 },
  { 0x11c239b3u, f_11c239b3 },
  { 0x11c23bd7u, f_11c23bd7 },
  { 0x11c23c02u, f_11c23c02 },
  { 0x11c23d50u, f_11c23d50 },
  { 0x11c24088u, f_11c24088 },
  { 0x11c240cau, f_11c240ca },
  { 0x11c2415eu, f_11c2415e },
  { 0x11c2423du, f_11c2423d },
  { 0x11c24260u, f_11c24260 },
  { 0x11c24290u, f_11c24290 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11c21000u
#define FSIZE 0x000032a6u
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
