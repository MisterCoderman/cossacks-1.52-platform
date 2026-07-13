#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11921000u, f_11921000 },
  { 0x11921012u, f_11921012 },
  { 0x11921030u, f_11921030 },
  { 0x119210c3u, f_119210c3 },
  { 0x119210dbu, f_119210db },
  { 0x119210f2u, f_119210f2 },
  { 0x11921172u, f_11921172 },
  { 0x1192124bu, f_1192124b },
  { 0x1192136au, f_1192136a },
  { 0x11921639u, f_11921639 },
  { 0x11921a0au, f_11921a0a },
  { 0x11922797u, f_11922797 },
  { 0x11922870u, f_11922870 },
  { 0x1192290du, f_1192290d },
  { 0x11922940u, f_11922940 },
  { 0x1192296du, f_1192296d },
  { 0x1192297eu, f_1192297e },
  { 0x1192298du, f_1192298d },
  { 0x11922a32u, f_11922a32 },
  { 0x11922a3bu, f_11922a3b },
  { 0x11922a44u, f_11922a44 },
  { 0x11922a5eu, f_11922a5e },
  { 0x11922ab2u, f_11922ab2 },
  { 0x11922ad0u, f_11922ad0 },
  { 0x11922ae3u, f_11922ae3 },
  { 0x11922b83u, f_11922b83 },
  { 0x11922d3fu, f_11922d3f },
  { 0x11922d93u, f_11922d93 },
  { 0x11922e4cu, f_11922e4c },
  { 0x11922ee5u, f_11922ee5 },
  { 0x11923099u, f_11923099 },
  { 0x119231cbu, f_119231cb },
  { 0x11923207u, f_11923207 },
  { 0x1192327cu, f_1192327c },
  { 0x119232b5u, f_119232b5 },
  { 0x11923408u, f_11923408 },
  { 0x11923431u, f_11923431 },
  { 0x1192349du, f_1192349d },
  { 0x119234feu, f_119234fe },
  { 0x11923513u, f_11923513 },
  { 0x119235a0u, f_119235a0 },
  { 0x119235e8u, f_119235e8 },
  { 0x119235fau, f_119235fa },
  { 0x11923626u, f_11923626 },
  { 0x11923680u, f_11923680 },
  { 0x11923690u, f_11923690 },
  { 0x11923770u, f_11923770 },
  { 0x119237ebu, f_119237eb },
  { 0x11923998u, f_11923998 },
  { 0x119239e2u, f_119239e2 },
  { 0x11923a15u, f_11923a15 },
  { 0x11923a3eu, f_11923a3e },
  { 0x11923bc3u, f_11923bc3 },
  { 0x11923be0u, f_11923be0 },
  { 0x11923f15u, f_11923f15 },
  { 0x11923f53u, f_11923f53 },
  { 0x11923f7eu, f_11923f7e },
  { 0x119242a9u, f_119242a9 },
  { 0x119245b2u, f_119245b2 },
  { 0x11924663u, f_11924663 },
  { 0x1192475eu, f_1192475e },
  { 0x119247f0u, f_119247f0 },
  { 0x119248f0u, f_119248f0 },
  { 0x11924948u, f_11924948 },
  { 0x11924963u, f_11924963 },
  { 0x11924b87u, f_11924b87 },
  { 0x11924bb2u, f_11924bb2 },
  { 0x11924d00u, f_11924d00 },
  { 0x11925038u, f_11925038 },
  { 0x1192507au, f_1192507a },
  { 0x1192510eu, f_1192510e },
  { 0x119251edu, f_119251ed },
  { 0x11925210u, f_11925210 },
  { 0x11925240u, f_11925240 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11921000u
#define FSIZE 0x00004256u
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
