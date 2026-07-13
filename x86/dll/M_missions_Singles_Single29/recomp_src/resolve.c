#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11431000u, f_11431000 },
  { 0x11431012u, f_11431012 },
  { 0x11431039u, f_11431039 },
  { 0x1143169cu, f_1143169c },
  { 0x114333bau, f_114333ba },
  { 0x11433493u, f_11433493 },
  { 0x11433530u, f_11433530 },
  { 0x11433563u, f_11433563 },
  { 0x11433590u, f_11433590 },
  { 0x114335a1u, f_114335a1 },
  { 0x114335b0u, f_114335b0 },
  { 0x11433655u, f_11433655 },
  { 0x1143365eu, f_1143365e },
  { 0x11433667u, f_11433667 },
  { 0x11433681u, f_11433681 },
  { 0x114336d5u, f_114336d5 },
  { 0x114336f3u, f_114336f3 },
  { 0x11433706u, f_11433706 },
  { 0x114337a6u, f_114337a6 },
  { 0x11433962u, f_11433962 },
  { 0x114339b6u, f_114339b6 },
  { 0x11433a6fu, f_11433a6f },
  { 0x11433b08u, f_11433b08 },
  { 0x11433cbcu, f_11433cbc },
  { 0x11433deeu, f_11433dee },
  { 0x11433e2au, f_11433e2a },
  { 0x11433e9fu, f_11433e9f },
  { 0x11433ed8u, f_11433ed8 },
  { 0x1143402bu, f_1143402b },
  { 0x11434054u, f_11434054 },
  { 0x114340c0u, f_114340c0 },
  { 0x11434121u, f_11434121 },
  { 0x11434136u, f_11434136 },
  { 0x114341c3u, f_114341c3 },
  { 0x1143420bu, f_1143420b },
  { 0x1143421du, f_1143421d },
  { 0x11434249u, f_11434249 },
  { 0x114342a0u, f_114342a0 },
  { 0x114342b0u, f_114342b0 },
  { 0x11434390u, f_11434390 },
  { 0x1143440bu, f_1143440b },
  { 0x114345b8u, f_114345b8 },
  { 0x11434602u, f_11434602 },
  { 0x11434635u, f_11434635 },
  { 0x1143465eu, f_1143465e },
  { 0x114347e3u, f_114347e3 },
  { 0x11434800u, f_11434800 },
  { 0x11434b35u, f_11434b35 },
  { 0x11434b73u, f_11434b73 },
  { 0x11434b9eu, f_11434b9e },
  { 0x11434ec9u, f_11434ec9 },
  { 0x114351d2u, f_114351d2 },
  { 0x11435283u, f_11435283 },
  { 0x1143537eu, f_1143537e },
  { 0x11435410u, f_11435410 },
  { 0x11435510u, f_11435510 },
  { 0x11435568u, f_11435568 },
  { 0x11435583u, f_11435583 },
  { 0x114357a7u, f_114357a7 },
  { 0x114357d2u, f_114357d2 },
  { 0x11435920u, f_11435920 },
  { 0x11435c58u, f_11435c58 },
  { 0x11435c9au, f_11435c9a },
  { 0x11435d2eu, f_11435d2e },
  { 0x11435e0du, f_11435e0d },
  { 0x11435e30u, f_11435e30 },
  { 0x11435e60u, f_11435e60 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11431000u
#define FSIZE 0x00004e76u
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
