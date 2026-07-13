#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11f81000u, f_11f81000 },
  { 0x11f81050u, f_11f81050 },
  { 0x11f811a0u, f_11f811a0 },
  { 0x11f81930u, f_11f81930 },
  { 0x11f81950u, f_11f81950 },
  { 0x11f81a29u, f_11f81a29 },
  { 0x11f81ac6u, f_11f81ac6 },
  { 0x11f81af9u, f_11f81af9 },
  { 0x11f81b26u, f_11f81b26 },
  { 0x11f81b37u, f_11f81b37 },
  { 0x11f81b46u, f_11f81b46 },
  { 0x11f81bebu, f_11f81beb },
  { 0x11f81bf4u, f_11f81bf4 },
  { 0x11f81bfdu, f_11f81bfd },
  { 0x11f81c17u, f_11f81c17 },
  { 0x11f81c6bu, f_11f81c6b },
  { 0x11f81c89u, f_11f81c89 },
  { 0x11f81c9cu, f_11f81c9c },
  { 0x11f81d3cu, f_11f81d3c },
  { 0x11f81ef8u, f_11f81ef8 },
  { 0x11f81f4cu, f_11f81f4c },
  { 0x11f82005u, f_11f82005 },
  { 0x11f8209eu, f_11f8209e },
  { 0x11f82252u, f_11f82252 },
  { 0x11f82384u, f_11f82384 },
  { 0x11f823c0u, f_11f823c0 },
  { 0x11f82435u, f_11f82435 },
  { 0x11f8246eu, f_11f8246e },
  { 0x11f825c1u, f_11f825c1 },
  { 0x11f825eau, f_11f825ea },
  { 0x11f82656u, f_11f82656 },
  { 0x11f826b7u, f_11f826b7 },
  { 0x11f826ccu, f_11f826cc },
  { 0x11f82759u, f_11f82759 },
  { 0x11f827a1u, f_11f827a1 },
  { 0x11f827b3u, f_11f827b3 },
  { 0x11f827dfu, f_11f827df },
  { 0x11f82830u, f_11f82830 },
  { 0x11f82840u, f_11f82840 },
  { 0x11f82920u, f_11f82920 },
  { 0x11f8299bu, f_11f8299b },
  { 0x11f82b48u, f_11f82b48 },
  { 0x11f82b92u, f_11f82b92 },
  { 0x11f82bc5u, f_11f82bc5 },
  { 0x11f82beeu, f_11f82bee },
  { 0x11f82d73u, f_11f82d73 },
  { 0x11f82d90u, f_11f82d90 },
  { 0x11f830c5u, f_11f830c5 },
  { 0x11f83103u, f_11f83103 },
  { 0x11f8312eu, f_11f8312e },
  { 0x11f83459u, f_11f83459 },
  { 0x11f83762u, f_11f83762 },
  { 0x11f83813u, f_11f83813 },
  { 0x11f8390eu, f_11f8390e },
  { 0x11f839a0u, f_11f839a0 },
  { 0x11f83aa0u, f_11f83aa0 },
  { 0x11f83af8u, f_11f83af8 },
  { 0x11f83b13u, f_11f83b13 },
  { 0x11f83d37u, f_11f83d37 },
  { 0x11f83d62u, f_11f83d62 },
  { 0x11f83eb0u, f_11f83eb0 },
  { 0x11f841e8u, f_11f841e8 },
  { 0x11f8422au, f_11f8422a },
  { 0x11f842beu, f_11f842be },
  { 0x11f8439du, f_11f8439d },
  { 0x11f843c0u, f_11f843c0 },
  { 0x11f843f0u, f_11f843f0 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11f81000u
#define FSIZE 0x00003406u
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
