#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x117d1000u, f_117d1000 },
  { 0x117d1050u, f_117d1050 },
  { 0x117d1150u, f_117d1150 },
  { 0x117d1870u, f_117d1870 },
  { 0x117d1890u, f_117d1890 },
  { 0x117d1969u, f_117d1969 },
  { 0x117d1a06u, f_117d1a06 },
  { 0x117d1a39u, f_117d1a39 },
  { 0x117d1a66u, f_117d1a66 },
  { 0x117d1a77u, f_117d1a77 },
  { 0x117d1a86u, f_117d1a86 },
  { 0x117d1b2bu, f_117d1b2b },
  { 0x117d1b34u, f_117d1b34 },
  { 0x117d1b3du, f_117d1b3d },
  { 0x117d1b57u, f_117d1b57 },
  { 0x117d1babu, f_117d1bab },
  { 0x117d1bc9u, f_117d1bc9 },
  { 0x117d1bdcu, f_117d1bdc },
  { 0x117d1c7cu, f_117d1c7c },
  { 0x117d1e38u, f_117d1e38 },
  { 0x117d1e8cu, f_117d1e8c },
  { 0x117d1f45u, f_117d1f45 },
  { 0x117d1fdeu, f_117d1fde },
  { 0x117d2192u, f_117d2192 },
  { 0x117d22c4u, f_117d22c4 },
  { 0x117d2300u, f_117d2300 },
  { 0x117d2375u, f_117d2375 },
  { 0x117d23aeu, f_117d23ae },
  { 0x117d2501u, f_117d2501 },
  { 0x117d252au, f_117d252a },
  { 0x117d2596u, f_117d2596 },
  { 0x117d25f7u, f_117d25f7 },
  { 0x117d260cu, f_117d260c },
  { 0x117d2699u, f_117d2699 },
  { 0x117d26e1u, f_117d26e1 },
  { 0x117d26f3u, f_117d26f3 },
  { 0x117d271fu, f_117d271f },
  { 0x117d2770u, f_117d2770 },
  { 0x117d2780u, f_117d2780 },
  { 0x117d2860u, f_117d2860 },
  { 0x117d28dbu, f_117d28db },
  { 0x117d2a88u, f_117d2a88 },
  { 0x117d2ad2u, f_117d2ad2 },
  { 0x117d2b05u, f_117d2b05 },
  { 0x117d2b2eu, f_117d2b2e },
  { 0x117d2cb3u, f_117d2cb3 },
  { 0x117d2cd0u, f_117d2cd0 },
  { 0x117d3005u, f_117d3005 },
  { 0x117d3043u, f_117d3043 },
  { 0x117d306eu, f_117d306e },
  { 0x117d3399u, f_117d3399 },
  { 0x117d36a2u, f_117d36a2 },
  { 0x117d3753u, f_117d3753 },
  { 0x117d384eu, f_117d384e },
  { 0x117d38e0u, f_117d38e0 },
  { 0x117d39e0u, f_117d39e0 },
  { 0x117d3a38u, f_117d3a38 },
  { 0x117d3a53u, f_117d3a53 },
  { 0x117d3c77u, f_117d3c77 },
  { 0x117d3ca2u, f_117d3ca2 },
  { 0x117d3df0u, f_117d3df0 },
  { 0x117d4128u, f_117d4128 },
  { 0x117d416au, f_117d416a },
  { 0x117d41feu, f_117d41fe },
  { 0x117d42ddu, f_117d42dd },
  { 0x117d4300u, f_117d4300 },
  { 0x117d4330u, f_117d4330 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x117d1000u
#define FSIZE 0x00003346u
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
