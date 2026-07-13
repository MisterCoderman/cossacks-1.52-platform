#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10371000u, f_10371000 },
  { 0x10371012u, f_10371012 },
  { 0x10371345u, f_10371345 },
  { 0x10372457u, f_10372457 },
  { 0x10372530u, f_10372530 },
  { 0x103725cdu, f_103725cd },
  { 0x10372600u, f_10372600 },
  { 0x1037262du, f_1037262d },
  { 0x1037263eu, f_1037263e },
  { 0x1037264du, f_1037264d },
  { 0x103726f2u, f_103726f2 },
  { 0x103726fbu, f_103726fb },
  { 0x10372704u, f_10372704 },
  { 0x1037271eu, f_1037271e },
  { 0x10372772u, f_10372772 },
  { 0x10372790u, f_10372790 },
  { 0x103727a3u, f_103727a3 },
  { 0x10372843u, f_10372843 },
  { 0x103729ffu, f_103729ff },
  { 0x10372a53u, f_10372a53 },
  { 0x10372b0cu, f_10372b0c },
  { 0x10372ba5u, f_10372ba5 },
  { 0x10372d59u, f_10372d59 },
  { 0x10372e8bu, f_10372e8b },
  { 0x10372ec7u, f_10372ec7 },
  { 0x10372f3cu, f_10372f3c },
  { 0x10372f75u, f_10372f75 },
  { 0x103730c8u, f_103730c8 },
  { 0x103730f1u, f_103730f1 },
  { 0x1037315du, f_1037315d },
  { 0x103731beu, f_103731be },
  { 0x103731d3u, f_103731d3 },
  { 0x10373260u, f_10373260 },
  { 0x103732a8u, f_103732a8 },
  { 0x103732bau, f_103732ba },
  { 0x103732e6u, f_103732e6 },
  { 0x10373340u, f_10373340 },
  { 0x10373350u, f_10373350 },
  { 0x10373430u, f_10373430 },
  { 0x103734abu, f_103734ab },
  { 0x10373658u, f_10373658 },
  { 0x103736a2u, f_103736a2 },
  { 0x103736d5u, f_103736d5 },
  { 0x103736feu, f_103736fe },
  { 0x10373883u, f_10373883 },
  { 0x103738a0u, f_103738a0 },
  { 0x10373bd5u, f_10373bd5 },
  { 0x10373c13u, f_10373c13 },
  { 0x10373c3eu, f_10373c3e },
  { 0x10373f69u, f_10373f69 },
  { 0x10374272u, f_10374272 },
  { 0x10374323u, f_10374323 },
  { 0x1037441eu, f_1037441e },
  { 0x103744b0u, f_103744b0 },
  { 0x103745b0u, f_103745b0 },
  { 0x10374608u, f_10374608 },
  { 0x10374623u, f_10374623 },
  { 0x10374847u, f_10374847 },
  { 0x10374872u, f_10374872 },
  { 0x103749c0u, f_103749c0 },
  { 0x10374cf8u, f_10374cf8 },
  { 0x10374d3au, f_10374d3a },
  { 0x10374dceu, f_10374dce },
  { 0x10374eadu, f_10374ead },
  { 0x10374ed0u, f_10374ed0 },
  { 0x10374f00u, f_10374f00 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10371000u
#define FSIZE 0x00003f16u
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
