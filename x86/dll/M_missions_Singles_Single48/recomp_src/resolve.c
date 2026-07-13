#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x117e1000u, f_117e1000 },
  { 0x117e1120u, f_117e1120 },
  { 0x117e18a0u, f_117e18a0 },
  { 0x117e18c0u, f_117e18c0 },
  { 0x117e1999u, f_117e1999 },
  { 0x117e1a36u, f_117e1a36 },
  { 0x117e1a69u, f_117e1a69 },
  { 0x117e1a96u, f_117e1a96 },
  { 0x117e1aa7u, f_117e1aa7 },
  { 0x117e1ab6u, f_117e1ab6 },
  { 0x117e1b5bu, f_117e1b5b },
  { 0x117e1b64u, f_117e1b64 },
  { 0x117e1b6du, f_117e1b6d },
  { 0x117e1b87u, f_117e1b87 },
  { 0x117e1bdbu, f_117e1bdb },
  { 0x117e1bf9u, f_117e1bf9 },
  { 0x117e1c0cu, f_117e1c0c },
  { 0x117e1cacu, f_117e1cac },
  { 0x117e1e68u, f_117e1e68 },
  { 0x117e1ebcu, f_117e1ebc },
  { 0x117e1f75u, f_117e1f75 },
  { 0x117e200eu, f_117e200e },
  { 0x117e21c2u, f_117e21c2 },
  { 0x117e22f4u, f_117e22f4 },
  { 0x117e2330u, f_117e2330 },
  { 0x117e23a5u, f_117e23a5 },
  { 0x117e23deu, f_117e23de },
  { 0x117e2531u, f_117e2531 },
  { 0x117e255au, f_117e255a },
  { 0x117e25c6u, f_117e25c6 },
  { 0x117e2627u, f_117e2627 },
  { 0x117e263cu, f_117e263c },
  { 0x117e26c9u, f_117e26c9 },
  { 0x117e2711u, f_117e2711 },
  { 0x117e2723u, f_117e2723 },
  { 0x117e274fu, f_117e274f },
  { 0x117e27a0u, f_117e27a0 },
  { 0x117e27b0u, f_117e27b0 },
  { 0x117e2890u, f_117e2890 },
  { 0x117e290bu, f_117e290b },
  { 0x117e2ab8u, f_117e2ab8 },
  { 0x117e2b02u, f_117e2b02 },
  { 0x117e2b35u, f_117e2b35 },
  { 0x117e2b5eu, f_117e2b5e },
  { 0x117e2ce3u, f_117e2ce3 },
  { 0x117e2d00u, f_117e2d00 },
  { 0x117e3035u, f_117e3035 },
  { 0x117e3073u, f_117e3073 },
  { 0x117e309eu, f_117e309e },
  { 0x117e33c9u, f_117e33c9 },
  { 0x117e36d2u, f_117e36d2 },
  { 0x117e3783u, f_117e3783 },
  { 0x117e387eu, f_117e387e },
  { 0x117e3910u, f_117e3910 },
  { 0x117e3a10u, f_117e3a10 },
  { 0x117e3a68u, f_117e3a68 },
  { 0x117e3a83u, f_117e3a83 },
  { 0x117e3ca7u, f_117e3ca7 },
  { 0x117e3cd2u, f_117e3cd2 },
  { 0x117e3e20u, f_117e3e20 },
  { 0x117e4158u, f_117e4158 },
  { 0x117e419au, f_117e419a },
  { 0x117e422eu, f_117e422e },
  { 0x117e430du, f_117e430d },
  { 0x117e4330u, f_117e4330 },
  { 0x117e4360u, f_117e4360 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x117e1000u
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
