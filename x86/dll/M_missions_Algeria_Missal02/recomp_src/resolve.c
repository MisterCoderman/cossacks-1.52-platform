#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10261000u, f_10261000 },
  { 0x10261012u, f_10261012 },
  { 0x1026123au, f_1026123a },
  { 0x102615c6u, f_102615c6 },
  { 0x1026169fu, f_1026169f },
  { 0x1026173cu, f_1026173c },
  { 0x1026176fu, f_1026176f },
  { 0x1026179cu, f_1026179c },
  { 0x102617adu, f_102617ad },
  { 0x102617bcu, f_102617bc },
  { 0x10261861u, f_10261861 },
  { 0x1026186au, f_1026186a },
  { 0x10261873u, f_10261873 },
  { 0x1026188du, f_1026188d },
  { 0x102618e1u, f_102618e1 },
  { 0x102618ffu, f_102618ff },
  { 0x10261912u, f_10261912 },
  { 0x102619b2u, f_102619b2 },
  { 0x10261b6eu, f_10261b6e },
  { 0x10261bc2u, f_10261bc2 },
  { 0x10261c7bu, f_10261c7b },
  { 0x10261d14u, f_10261d14 },
  { 0x10261ec8u, f_10261ec8 },
  { 0x10261ffau, f_10261ffa },
  { 0x10262036u, f_10262036 },
  { 0x102620abu, f_102620ab },
  { 0x102620e4u, f_102620e4 },
  { 0x10262237u, f_10262237 },
  { 0x10262260u, f_10262260 },
  { 0x102622ccu, f_102622cc },
  { 0x1026232du, f_1026232d },
  { 0x10262342u, f_10262342 },
  { 0x102623cfu, f_102623cf },
  { 0x10262417u, f_10262417 },
  { 0x10262429u, f_10262429 },
  { 0x10262455u, f_10262455 },
  { 0x102624b0u, f_102624b0 },
  { 0x102624c0u, f_102624c0 },
  { 0x102625a0u, f_102625a0 },
  { 0x1026261bu, f_1026261b },
  { 0x102627c8u, f_102627c8 },
  { 0x10262812u, f_10262812 },
  { 0x10262845u, f_10262845 },
  { 0x1026286eu, f_1026286e },
  { 0x102629f3u, f_102629f3 },
  { 0x10262a10u, f_10262a10 },
  { 0x10262d45u, f_10262d45 },
  { 0x10262d83u, f_10262d83 },
  { 0x10262daeu, f_10262dae },
  { 0x102630d9u, f_102630d9 },
  { 0x102633e2u, f_102633e2 },
  { 0x10263493u, f_10263493 },
  { 0x1026358eu, f_1026358e },
  { 0x10263620u, f_10263620 },
  { 0x10263720u, f_10263720 },
  { 0x10263778u, f_10263778 },
  { 0x10263793u, f_10263793 },
  { 0x102639b7u, f_102639b7 },
  { 0x102639e2u, f_102639e2 },
  { 0x10263b30u, f_10263b30 },
  { 0x10263e68u, f_10263e68 },
  { 0x10263eaau, f_10263eaa },
  { 0x10263f3eu, f_10263f3e },
  { 0x1026401du, f_1026401d },
  { 0x10264040u, f_10264040 },
  { 0x10264070u, f_10264070 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10261000u
#define FSIZE 0x00003086u
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
