#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10391000u, f_10391000 },
  { 0x10391012u, f_10391012 },
  { 0x1039121cu, f_1039121c },
  { 0x1039199du, f_1039199d },
  { 0x10391a76u, f_10391a76 },
  { 0x10391b13u, f_10391b13 },
  { 0x10391b46u, f_10391b46 },
  { 0x10391b73u, f_10391b73 },
  { 0x10391b84u, f_10391b84 },
  { 0x10391b93u, f_10391b93 },
  { 0x10391c38u, f_10391c38 },
  { 0x10391c41u, f_10391c41 },
  { 0x10391c4au, f_10391c4a },
  { 0x10391c64u, f_10391c64 },
  { 0x10391cb8u, f_10391cb8 },
  { 0x10391cd6u, f_10391cd6 },
  { 0x10391ce9u, f_10391ce9 },
  { 0x10391d89u, f_10391d89 },
  { 0x10391f45u, f_10391f45 },
  { 0x10391f99u, f_10391f99 },
  { 0x10392052u, f_10392052 },
  { 0x103920ebu, f_103920eb },
  { 0x1039229fu, f_1039229f },
  { 0x103923d1u, f_103923d1 },
  { 0x1039240du, f_1039240d },
  { 0x10392482u, f_10392482 },
  { 0x103924bbu, f_103924bb },
  { 0x1039260eu, f_1039260e },
  { 0x10392637u, f_10392637 },
  { 0x103926a3u, f_103926a3 },
  { 0x10392704u, f_10392704 },
  { 0x10392719u, f_10392719 },
  { 0x103927a6u, f_103927a6 },
  { 0x103927eeu, f_103927ee },
  { 0x10392800u, f_10392800 },
  { 0x1039282cu, f_1039282c },
  { 0x10392880u, f_10392880 },
  { 0x10392890u, f_10392890 },
  { 0x10392970u, f_10392970 },
  { 0x103929ebu, f_103929eb },
  { 0x10392b98u, f_10392b98 },
  { 0x10392be2u, f_10392be2 },
  { 0x10392c15u, f_10392c15 },
  { 0x10392c3eu, f_10392c3e },
  { 0x10392dc3u, f_10392dc3 },
  { 0x10392de0u, f_10392de0 },
  { 0x10393115u, f_10393115 },
  { 0x10393153u, f_10393153 },
  { 0x1039317eu, f_1039317e },
  { 0x103934a9u, f_103934a9 },
  { 0x103937b2u, f_103937b2 },
  { 0x10393863u, f_10393863 },
  { 0x1039395eu, f_1039395e },
  { 0x103939f0u, f_103939f0 },
  { 0x10393af0u, f_10393af0 },
  { 0x10393b48u, f_10393b48 },
  { 0x10393b63u, f_10393b63 },
  { 0x10393d87u, f_10393d87 },
  { 0x10393db2u, f_10393db2 },
  { 0x10393f00u, f_10393f00 },
  { 0x10394238u, f_10394238 },
  { 0x1039427au, f_1039427a },
  { 0x1039430eu, f_1039430e },
  { 0x103943edu, f_103943ed },
  { 0x10394410u, f_10394410 },
  { 0x10394440u, f_10394440 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10391000u
#define FSIZE 0x00003456u
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
