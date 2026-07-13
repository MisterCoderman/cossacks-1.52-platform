#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11511000u, f_11511000 },
  { 0x11511012u, f_11511012 },
  { 0x11511721u, f_11511721 },
  { 0x115159f0u, f_115159f0 },
  { 0x11515a00u, f_11515a00 },
  { 0x11515ae0u, f_11515ae0 },
  { 0x11515bb9u, f_11515bb9 },
  { 0x11515c56u, f_11515c56 },
  { 0x11515c89u, f_11515c89 },
  { 0x11515cb6u, f_11515cb6 },
  { 0x11515cc7u, f_11515cc7 },
  { 0x11515cd6u, f_11515cd6 },
  { 0x11515d7bu, f_11515d7b },
  { 0x11515d84u, f_11515d84 },
  { 0x11515d8du, f_11515d8d },
  { 0x11515da7u, f_11515da7 },
  { 0x11515dfbu, f_11515dfb },
  { 0x11515e19u, f_11515e19 },
  { 0x11515e2cu, f_11515e2c },
  { 0x11515eccu, f_11515ecc },
  { 0x11516088u, f_11516088 },
  { 0x115160dcu, f_115160dc },
  { 0x11516195u, f_11516195 },
  { 0x1151622eu, f_1151622e },
  { 0x115163e2u, f_115163e2 },
  { 0x11516514u, f_11516514 },
  { 0x11516550u, f_11516550 },
  { 0x115165c5u, f_115165c5 },
  { 0x115165feu, f_115165fe },
  { 0x11516751u, f_11516751 },
  { 0x1151677au, f_1151677a },
  { 0x115167e6u, f_115167e6 },
  { 0x11516847u, f_11516847 },
  { 0x1151685cu, f_1151685c },
  { 0x115168e9u, f_115168e9 },
  { 0x11516931u, f_11516931 },
  { 0x11516943u, f_11516943 },
  { 0x1151696fu, f_1151696f },
  { 0x115169c0u, f_115169c0 },
  { 0x11516a3bu, f_11516a3b },
  { 0x11516be8u, f_11516be8 },
  { 0x11516c32u, f_11516c32 },
  { 0x11516c65u, f_11516c65 },
  { 0x11516c8eu, f_11516c8e },
  { 0x11516e13u, f_11516e13 },
  { 0x11516e30u, f_11516e30 },
  { 0x11517165u, f_11517165 },
  { 0x115171a3u, f_115171a3 },
  { 0x115171ceu, f_115171ce },
  { 0x115174f9u, f_115174f9 },
  { 0x11517802u, f_11517802 },
  { 0x115178b3u, f_115178b3 },
  { 0x115179aeu, f_115179ae },
  { 0x11517a40u, f_11517a40 },
  { 0x11517b40u, f_11517b40 },
  { 0x11517b98u, f_11517b98 },
  { 0x11517bb3u, f_11517bb3 },
  { 0x11517dd7u, f_11517dd7 },
  { 0x11517e02u, f_11517e02 },
  { 0x11517f50u, f_11517f50 },
  { 0x11518288u, f_11518288 },
  { 0x115182cau, f_115182ca },
  { 0x1151835eu, f_1151835e },
  { 0x1151843du, f_1151843d },
  { 0x11518460u, f_11518460 },
  { 0x11518490u, f_11518490 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11511000u
#define FSIZE 0x000074a6u
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
