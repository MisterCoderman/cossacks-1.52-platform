#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11f41000u, f_11f41000 },
  { 0x11f41360u, f_11f41360 },
  { 0x11f41380u, f_11f41380 },
  { 0x11f419c0u, f_11f419c0 },
  { 0x11f41b30u, f_11f41b30 },
  { 0x11f41c09u, f_11f41c09 },
  { 0x11f41ca6u, f_11f41ca6 },
  { 0x11f41cd9u, f_11f41cd9 },
  { 0x11f41d06u, f_11f41d06 },
  { 0x11f41d17u, f_11f41d17 },
  { 0x11f41d26u, f_11f41d26 },
  { 0x11f41dcbu, f_11f41dcb },
  { 0x11f41dd4u, f_11f41dd4 },
  { 0x11f41dddu, f_11f41ddd },
  { 0x11f41df7u, f_11f41df7 },
  { 0x11f41e4bu, f_11f41e4b },
  { 0x11f41e69u, f_11f41e69 },
  { 0x11f41e7cu, f_11f41e7c },
  { 0x11f41f1cu, f_11f41f1c },
  { 0x11f420d8u, f_11f420d8 },
  { 0x11f4212cu, f_11f4212c },
  { 0x11f421e5u, f_11f421e5 },
  { 0x11f4227eu, f_11f4227e },
  { 0x11f42432u, f_11f42432 },
  { 0x11f42564u, f_11f42564 },
  { 0x11f425a0u, f_11f425a0 },
  { 0x11f42615u, f_11f42615 },
  { 0x11f4264eu, f_11f4264e },
  { 0x11f427a1u, f_11f427a1 },
  { 0x11f427cau, f_11f427ca },
  { 0x11f42836u, f_11f42836 },
  { 0x11f42897u, f_11f42897 },
  { 0x11f428acu, f_11f428ac },
  { 0x11f42939u, f_11f42939 },
  { 0x11f42981u, f_11f42981 },
  { 0x11f42993u, f_11f42993 },
  { 0x11f429bfu, f_11f429bf },
  { 0x11f42a10u, f_11f42a10 },
  { 0x11f42a20u, f_11f42a20 },
  { 0x11f42b00u, f_11f42b00 },
  { 0x11f42b7bu, f_11f42b7b },
  { 0x11f42d28u, f_11f42d28 },
  { 0x11f42d72u, f_11f42d72 },
  { 0x11f42da5u, f_11f42da5 },
  { 0x11f42dceu, f_11f42dce },
  { 0x11f42f53u, f_11f42f53 },
  { 0x11f42f70u, f_11f42f70 },
  { 0x11f432a5u, f_11f432a5 },
  { 0x11f432e3u, f_11f432e3 },
  { 0x11f4330eu, f_11f4330e },
  { 0x11f43639u, f_11f43639 },
  { 0x11f43942u, f_11f43942 },
  { 0x11f439f3u, f_11f439f3 },
  { 0x11f43aeeu, f_11f43aee },
  { 0x11f43b80u, f_11f43b80 },
  { 0x11f43c80u, f_11f43c80 },
  { 0x11f43cd8u, f_11f43cd8 },
  { 0x11f43cf3u, f_11f43cf3 },
  { 0x11f43f17u, f_11f43f17 },
  { 0x11f43f42u, f_11f43f42 },
  { 0x11f44090u, f_11f44090 },
  { 0x11f443c8u, f_11f443c8 },
  { 0x11f4440au, f_11f4440a },
  { 0x11f4449eu, f_11f4449e },
  { 0x11f4457du, f_11f4457d },
  { 0x11f445a0u, f_11f445a0 },
  { 0x11f445d0u, f_11f445d0 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11f41000u
#define FSIZE 0x000035e6u
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
