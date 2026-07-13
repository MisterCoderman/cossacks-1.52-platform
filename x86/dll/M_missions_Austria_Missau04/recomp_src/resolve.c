#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10301000u, f_10301000 },
  { 0x10301020u, f_10301020 },
  { 0x10301400u, f_10301400 },
  { 0x10302090u, f_10302090 },
  { 0x103020b2u, f_103020b2 },
  { 0x1030218bu, f_1030218b },
  { 0x10302228u, f_10302228 },
  { 0x1030225bu, f_1030225b },
  { 0x103022afu, f_103022af },
  { 0x103022cdu, f_103022cd },
  { 0x103022e0u, f_103022e0 },
  { 0x10302347u, f_10302347 },
  { 0x103023e7u, f_103023e7 },
  { 0x10302414u, f_10302414 },
  { 0x10302425u, f_10302425 },
  { 0x10302434u, f_10302434 },
  { 0x103024d9u, f_103024d9 },
  { 0x103024e2u, f_103024e2 },
  { 0x103024ebu, f_103024eb },
  { 0x10302505u, f_10302505 },
  { 0x103026c1u, f_103026c1 },
  { 0x10302715u, f_10302715 },
  { 0x103027ceu, f_103027ce },
  { 0x10302867u, f_10302867 },
  { 0x10302a1bu, f_10302a1b },
  { 0x10302b4du, f_10302b4d },
  { 0x10302b89u, f_10302b89 },
  { 0x10302bfeu, f_10302bfe },
  { 0x10302c37u, f_10302c37 },
  { 0x10302d8au, f_10302d8a },
  { 0x10302e17u, f_10302e17 },
  { 0x10302e40u, f_10302e40 },
  { 0x10302eacu, f_10302eac },
  { 0x10302f0du, f_10302f0d },
  { 0x10302f22u, f_10302f22 },
  { 0x10302f6au, f_10302f6a },
  { 0x10302f7cu, f_10302f7c },
  { 0x10302fa8u, f_10302fa8 },
  { 0x10303000u, f_10303000 },
  { 0x10303010u, f_10303010 },
  { 0x103030f0u, f_103030f0 },
  { 0x1030316bu, f_1030316b },
  { 0x10303318u, f_10303318 },
  { 0x10303362u, f_10303362 },
  { 0x10303395u, f_10303395 },
  { 0x103033beu, f_103033be },
  { 0x10303543u, f_10303543 },
  { 0x10303560u, f_10303560 },
  { 0x10303895u, f_10303895 },
  { 0x103038d3u, f_103038d3 },
  { 0x103038feu, f_103038fe },
  { 0x10303c29u, f_10303c29 },
  { 0x10303f32u, f_10303f32 },
  { 0x10303fe3u, f_10303fe3 },
  { 0x103040deu, f_103040de },
  { 0x10304170u, f_10304170 },
  { 0x10304270u, f_10304270 },
  { 0x103042c8u, f_103042c8 },
  { 0x103042e3u, f_103042e3 },
  { 0x10304507u, f_10304507 },
  { 0x10304532u, f_10304532 },
  { 0x10304680u, f_10304680 },
  { 0x103049b8u, f_103049b8 },
  { 0x103049fau, f_103049fa },
  { 0x10304a8eu, f_10304a8e },
  { 0x10304b6du, f_10304b6d },
  { 0x10304b90u, f_10304b90 },
  { 0x10304bc0u, f_10304bc0 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10301000u
#define FSIZE 0x00003bd6u
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
