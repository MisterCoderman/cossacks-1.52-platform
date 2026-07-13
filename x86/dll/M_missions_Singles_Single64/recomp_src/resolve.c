#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11a71000u, f_11a71000 },
  { 0x11a71012u, f_11a71012 },
  { 0x11a71030u, f_11a71030 },
  { 0x11a71072u, f_11a71072 },
  { 0x11a7108au, f_11a7108a },
  { 0x11a710a1u, f_11a710a1 },
  { 0x11a710c8u, f_11a710c8 },
  { 0x11a711d7u, f_11a711d7 },
  { 0x11a719bcu, f_11a719bc },
  { 0x11a732efu, f_11a732ef },
  { 0x11a733c8u, f_11a733c8 },
  { 0x11a73465u, f_11a73465 },
  { 0x11a73498u, f_11a73498 },
  { 0x11a734c5u, f_11a734c5 },
  { 0x11a734d6u, f_11a734d6 },
  { 0x11a734e5u, f_11a734e5 },
  { 0x11a7358au, f_11a7358a },
  { 0x11a73593u, f_11a73593 },
  { 0x11a7359cu, f_11a7359c },
  { 0x11a735b6u, f_11a735b6 },
  { 0x11a7360au, f_11a7360a },
  { 0x11a73628u, f_11a73628 },
  { 0x11a7363bu, f_11a7363b },
  { 0x11a736dbu, f_11a736db },
  { 0x11a73897u, f_11a73897 },
  { 0x11a738ebu, f_11a738eb },
  { 0x11a739a4u, f_11a739a4 },
  { 0x11a73a3du, f_11a73a3d },
  { 0x11a73bf1u, f_11a73bf1 },
  { 0x11a73d23u, f_11a73d23 },
  { 0x11a73d5fu, f_11a73d5f },
  { 0x11a73dd4u, f_11a73dd4 },
  { 0x11a73e0du, f_11a73e0d },
  { 0x11a73f60u, f_11a73f60 },
  { 0x11a73f89u, f_11a73f89 },
  { 0x11a73ff5u, f_11a73ff5 },
  { 0x11a74056u, f_11a74056 },
  { 0x11a7406bu, f_11a7406b },
  { 0x11a740f8u, f_11a740f8 },
  { 0x11a74140u, f_11a74140 },
  { 0x11a74152u, f_11a74152 },
  { 0x11a7417eu, f_11a7417e },
  { 0x11a741d0u, f_11a741d0 },
  { 0x11a741e0u, f_11a741e0 },
  { 0x11a742c0u, f_11a742c0 },
  { 0x11a7433bu, f_11a7433b },
  { 0x11a744e8u, f_11a744e8 },
  { 0x11a74532u, f_11a74532 },
  { 0x11a74565u, f_11a74565 },
  { 0x11a7458eu, f_11a7458e },
  { 0x11a74713u, f_11a74713 },
  { 0x11a74730u, f_11a74730 },
  { 0x11a74a65u, f_11a74a65 },
  { 0x11a74aa3u, f_11a74aa3 },
  { 0x11a74aceu, f_11a74ace },
  { 0x11a74df9u, f_11a74df9 },
  { 0x11a75102u, f_11a75102 },
  { 0x11a751b3u, f_11a751b3 },
  { 0x11a752aeu, f_11a752ae },
  { 0x11a75340u, f_11a75340 },
  { 0x11a75440u, f_11a75440 },
  { 0x11a75498u, f_11a75498 },
  { 0x11a754b3u, f_11a754b3 },
  { 0x11a756d7u, f_11a756d7 },
  { 0x11a75702u, f_11a75702 },
  { 0x11a75850u, f_11a75850 },
  { 0x11a75b88u, f_11a75b88 },
  { 0x11a75bcau, f_11a75bca },
  { 0x11a75c5eu, f_11a75c5e },
  { 0x11a75d3du, f_11a75d3d },
  { 0x11a75d60u, f_11a75d60 },
  { 0x11a75d90u, f_11a75d90 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11a71000u
#define FSIZE 0x00004da6u
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
