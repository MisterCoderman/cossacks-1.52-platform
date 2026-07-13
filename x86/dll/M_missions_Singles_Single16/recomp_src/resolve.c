#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11191000u, f_11191000 },
  { 0x11191012u, f_11191012 },
  { 0x111913a4u, f_111913a4 },
  { 0x11192368u, f_11192368 },
  { 0x11192441u, f_11192441 },
  { 0x111924deu, f_111924de },
  { 0x11192511u, f_11192511 },
  { 0x1119253eu, f_1119253e },
  { 0x1119254fu, f_1119254f },
  { 0x1119255eu, f_1119255e },
  { 0x11192603u, f_11192603 },
  { 0x1119260cu, f_1119260c },
  { 0x11192615u, f_11192615 },
  { 0x1119262fu, f_1119262f },
  { 0x11192683u, f_11192683 },
  { 0x111926a1u, f_111926a1 },
  { 0x111926b4u, f_111926b4 },
  { 0x11192754u, f_11192754 },
  { 0x11192910u, f_11192910 },
  { 0x11192964u, f_11192964 },
  { 0x11192a1du, f_11192a1d },
  { 0x11192ab6u, f_11192ab6 },
  { 0x11192c6au, f_11192c6a },
  { 0x11192d9cu, f_11192d9c },
  { 0x11192dd8u, f_11192dd8 },
  { 0x11192e4du, f_11192e4d },
  { 0x11192e86u, f_11192e86 },
  { 0x11192fd9u, f_11192fd9 },
  { 0x11193002u, f_11193002 },
  { 0x1119306eu, f_1119306e },
  { 0x111930cfu, f_111930cf },
  { 0x111930e4u, f_111930e4 },
  { 0x11193171u, f_11193171 },
  { 0x111931b9u, f_111931b9 },
  { 0x111931cbu, f_111931cb },
  { 0x111931f7u, f_111931f7 },
  { 0x11193250u, f_11193250 },
  { 0x11193260u, f_11193260 },
  { 0x11193340u, f_11193340 },
  { 0x111933bbu, f_111933bb },
  { 0x11193568u, f_11193568 },
  { 0x111935b2u, f_111935b2 },
  { 0x111935e5u, f_111935e5 },
  { 0x1119360eu, f_1119360e },
  { 0x11193793u, f_11193793 },
  { 0x111937b0u, f_111937b0 },
  { 0x11193ae5u, f_11193ae5 },
  { 0x11193b23u, f_11193b23 },
  { 0x11193b4eu, f_11193b4e },
  { 0x11193e79u, f_11193e79 },
  { 0x11194182u, f_11194182 },
  { 0x11194233u, f_11194233 },
  { 0x1119432eu, f_1119432e },
  { 0x111943c0u, f_111943c0 },
  { 0x111944c0u, f_111944c0 },
  { 0x11194518u, f_11194518 },
  { 0x11194533u, f_11194533 },
  { 0x11194757u, f_11194757 },
  { 0x11194782u, f_11194782 },
  { 0x111948d0u, f_111948d0 },
  { 0x11194c08u, f_11194c08 },
  { 0x11194c4au, f_11194c4a },
  { 0x11194cdeu, f_11194cde },
  { 0x11194dbdu, f_11194dbd },
  { 0x11194de0u, f_11194de0 },
  { 0x11194e10u, f_11194e10 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11191000u
#define FSIZE 0x00003e26u
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
