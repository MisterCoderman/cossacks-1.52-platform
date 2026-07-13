#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x110d1000u, f_110d1000 },
  { 0x110d1230u, f_110d1230 },
  { 0x110d18a0u, f_110d18a0 },
  { 0x110d18c0u, f_110d18c0 },
  { 0x110d1999u, f_110d1999 },
  { 0x110d1a36u, f_110d1a36 },
  { 0x110d1a69u, f_110d1a69 },
  { 0x110d1a96u, f_110d1a96 },
  { 0x110d1aa7u, f_110d1aa7 },
  { 0x110d1ab6u, f_110d1ab6 },
  { 0x110d1b5bu, f_110d1b5b },
  { 0x110d1b64u, f_110d1b64 },
  { 0x110d1b6du, f_110d1b6d },
  { 0x110d1b87u, f_110d1b87 },
  { 0x110d1bdbu, f_110d1bdb },
  { 0x110d1bf9u, f_110d1bf9 },
  { 0x110d1c0cu, f_110d1c0c },
  { 0x110d1cacu, f_110d1cac },
  { 0x110d1e68u, f_110d1e68 },
  { 0x110d1ebcu, f_110d1ebc },
  { 0x110d1f75u, f_110d1f75 },
  { 0x110d200eu, f_110d200e },
  { 0x110d21c2u, f_110d21c2 },
  { 0x110d22f4u, f_110d22f4 },
  { 0x110d2330u, f_110d2330 },
  { 0x110d23a5u, f_110d23a5 },
  { 0x110d23deu, f_110d23de },
  { 0x110d2531u, f_110d2531 },
  { 0x110d255au, f_110d255a },
  { 0x110d25c6u, f_110d25c6 },
  { 0x110d2627u, f_110d2627 },
  { 0x110d263cu, f_110d263c },
  { 0x110d26c9u, f_110d26c9 },
  { 0x110d2711u, f_110d2711 },
  { 0x110d2723u, f_110d2723 },
  { 0x110d274fu, f_110d274f },
  { 0x110d27a0u, f_110d27a0 },
  { 0x110d27b0u, f_110d27b0 },
  { 0x110d2890u, f_110d2890 },
  { 0x110d290bu, f_110d290b },
  { 0x110d2ab8u, f_110d2ab8 },
  { 0x110d2b02u, f_110d2b02 },
  { 0x110d2b35u, f_110d2b35 },
  { 0x110d2b5eu, f_110d2b5e },
  { 0x110d2ce3u, f_110d2ce3 },
  { 0x110d2d00u, f_110d2d00 },
  { 0x110d3035u, f_110d3035 },
  { 0x110d3073u, f_110d3073 },
  { 0x110d309eu, f_110d309e },
  { 0x110d33c9u, f_110d33c9 },
  { 0x110d36d2u, f_110d36d2 },
  { 0x110d3783u, f_110d3783 },
  { 0x110d387eu, f_110d387e },
  { 0x110d3910u, f_110d3910 },
  { 0x110d3a10u, f_110d3a10 },
  { 0x110d3a68u, f_110d3a68 },
  { 0x110d3a83u, f_110d3a83 },
  { 0x110d3ca7u, f_110d3ca7 },
  { 0x110d3cd2u, f_110d3cd2 },
  { 0x110d3e20u, f_110d3e20 },
  { 0x110d4158u, f_110d4158 },
  { 0x110d419au, f_110d419a },
  { 0x110d422eu, f_110d422e },
  { 0x110d430du, f_110d430d },
  { 0x110d4330u, f_110d4330 },
  { 0x110d4360u, f_110d4360 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x110d1000u
#define FSIZE 0x00003376u
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
