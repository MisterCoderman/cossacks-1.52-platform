#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10b81000u, f_10b81000 },
  { 0x10b81310u, f_10b81310 },
  { 0x10b81330u, f_10b81330 },
  { 0x10b82240u, f_10b82240 },
  { 0x10b82319u, f_10b82319 },
  { 0x10b823b6u, f_10b823b6 },
  { 0x10b823e9u, f_10b823e9 },
  { 0x10b82416u, f_10b82416 },
  { 0x10b82427u, f_10b82427 },
  { 0x10b82436u, f_10b82436 },
  { 0x10b824dbu, f_10b824db },
  { 0x10b824e4u, f_10b824e4 },
  { 0x10b824edu, f_10b824ed },
  { 0x10b82507u, f_10b82507 },
  { 0x10b8255bu, f_10b8255b },
  { 0x10b82579u, f_10b82579 },
  { 0x10b8258cu, f_10b8258c },
  { 0x10b8262cu, f_10b8262c },
  { 0x10b827e8u, f_10b827e8 },
  { 0x10b8283cu, f_10b8283c },
  { 0x10b828f5u, f_10b828f5 },
  { 0x10b8298eu, f_10b8298e },
  { 0x10b82b42u, f_10b82b42 },
  { 0x10b82c74u, f_10b82c74 },
  { 0x10b82cb0u, f_10b82cb0 },
  { 0x10b82d25u, f_10b82d25 },
  { 0x10b82d5eu, f_10b82d5e },
  { 0x10b82eb1u, f_10b82eb1 },
  { 0x10b82edau, f_10b82eda },
  { 0x10b82f46u, f_10b82f46 },
  { 0x10b82fa7u, f_10b82fa7 },
  { 0x10b82fbcu, f_10b82fbc },
  { 0x10b83049u, f_10b83049 },
  { 0x10b83091u, f_10b83091 },
  { 0x10b830a3u, f_10b830a3 },
  { 0x10b830cfu, f_10b830cf },
  { 0x10b83120u, f_10b83120 },
  { 0x10b83130u, f_10b83130 },
  { 0x10b83210u, f_10b83210 },
  { 0x10b8328bu, f_10b8328b },
  { 0x10b83438u, f_10b83438 },
  { 0x10b83482u, f_10b83482 },
  { 0x10b834b5u, f_10b834b5 },
  { 0x10b834deu, f_10b834de },
  { 0x10b83663u, f_10b83663 },
  { 0x10b83680u, f_10b83680 },
  { 0x10b839b5u, f_10b839b5 },
  { 0x10b839f3u, f_10b839f3 },
  { 0x10b83a1eu, f_10b83a1e },
  { 0x10b83d49u, f_10b83d49 },
  { 0x10b84052u, f_10b84052 },
  { 0x10b84103u, f_10b84103 },
  { 0x10b841feu, f_10b841fe },
  { 0x10b84290u, f_10b84290 },
  { 0x10b84390u, f_10b84390 },
  { 0x10b843e8u, f_10b843e8 },
  { 0x10b84403u, f_10b84403 },
  { 0x10b84627u, f_10b84627 },
  { 0x10b84652u, f_10b84652 },
  { 0x10b847a0u, f_10b847a0 },
  { 0x10b84ad8u, f_10b84ad8 },
  { 0x10b84b1au, f_10b84b1a },
  { 0x10b84baeu, f_10b84bae },
  { 0x10b84c8du, f_10b84c8d },
  { 0x10b84cb0u, f_10b84cb0 },
  { 0x10b84ce0u, f_10b84ce0 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10b81000u
#define FSIZE 0x00003cf6u
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
