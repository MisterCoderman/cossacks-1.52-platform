#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11141000u, f_11141000 },
  { 0x111411a0u, f_111411a0 },
  { 0x11141b60u, f_11141b60 },
  { 0x11141b80u, f_11141b80 },
  { 0x11141c59u, f_11141c59 },
  { 0x11141cf6u, f_11141cf6 },
  { 0x11141d29u, f_11141d29 },
  { 0x11141d56u, f_11141d56 },
  { 0x11141d67u, f_11141d67 },
  { 0x11141d76u, f_11141d76 },
  { 0x11141e1bu, f_11141e1b },
  { 0x11141e24u, f_11141e24 },
  { 0x11141e2du, f_11141e2d },
  { 0x11141e47u, f_11141e47 },
  { 0x11141e9bu, f_11141e9b },
  { 0x11141eb9u, f_11141eb9 },
  { 0x11141eccu, f_11141ecc },
  { 0x11141f6cu, f_11141f6c },
  { 0x11142128u, f_11142128 },
  { 0x1114217cu, f_1114217c },
  { 0x11142235u, f_11142235 },
  { 0x111422ceu, f_111422ce },
  { 0x11142482u, f_11142482 },
  { 0x111425b4u, f_111425b4 },
  { 0x111425f0u, f_111425f0 },
  { 0x11142665u, f_11142665 },
  { 0x1114269eu, f_1114269e },
  { 0x111427f1u, f_111427f1 },
  { 0x1114281au, f_1114281a },
  { 0x11142886u, f_11142886 },
  { 0x111428e7u, f_111428e7 },
  { 0x111428fcu, f_111428fc },
  { 0x11142989u, f_11142989 },
  { 0x111429d1u, f_111429d1 },
  { 0x111429e3u, f_111429e3 },
  { 0x11142a0fu, f_11142a0f },
  { 0x11142a60u, f_11142a60 },
  { 0x11142a70u, f_11142a70 },
  { 0x11142b50u, f_11142b50 },
  { 0x11142bcbu, f_11142bcb },
  { 0x11142d78u, f_11142d78 },
  { 0x11142dc2u, f_11142dc2 },
  { 0x11142df5u, f_11142df5 },
  { 0x11142e1eu, f_11142e1e },
  { 0x11142fa3u, f_11142fa3 },
  { 0x11142fc0u, f_11142fc0 },
  { 0x111432f5u, f_111432f5 },
  { 0x11143333u, f_11143333 },
  { 0x1114335eu, f_1114335e },
  { 0x11143689u, f_11143689 },
  { 0x11143992u, f_11143992 },
  { 0x11143a43u, f_11143a43 },
  { 0x11143b3eu, f_11143b3e },
  { 0x11143bd0u, f_11143bd0 },
  { 0x11143cd0u, f_11143cd0 },
  { 0x11143d28u, f_11143d28 },
  { 0x11143d43u, f_11143d43 },
  { 0x11143f67u, f_11143f67 },
  { 0x11143f92u, f_11143f92 },
  { 0x111440e0u, f_111440e0 },
  { 0x11144418u, f_11144418 },
  { 0x1114445au, f_1114445a },
  { 0x111444eeu, f_111444ee },
  { 0x111445cdu, f_111445cd },
  { 0x111445f0u, f_111445f0 },
  { 0x11144620u, f_11144620 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11141000u
#define FSIZE 0x00003636u
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
