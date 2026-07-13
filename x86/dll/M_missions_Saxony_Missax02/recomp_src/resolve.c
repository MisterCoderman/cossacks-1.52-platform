#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10b91000u, f_10b91000 },
  { 0x10b912f0u, f_10b912f0 },
  { 0x10b91310u, f_10b91310 },
  { 0x10b92490u, f_10b92490 },
  { 0x10b92569u, f_10b92569 },
  { 0x10b92606u, f_10b92606 },
  { 0x10b92639u, f_10b92639 },
  { 0x10b92666u, f_10b92666 },
  { 0x10b92677u, f_10b92677 },
  { 0x10b92686u, f_10b92686 },
  { 0x10b9272bu, f_10b9272b },
  { 0x10b92734u, f_10b92734 },
  { 0x10b9273du, f_10b9273d },
  { 0x10b92757u, f_10b92757 },
  { 0x10b927abu, f_10b927ab },
  { 0x10b927c9u, f_10b927c9 },
  { 0x10b927dcu, f_10b927dc },
  { 0x10b9287cu, f_10b9287c },
  { 0x10b92a38u, f_10b92a38 },
  { 0x10b92a8cu, f_10b92a8c },
  { 0x10b92b45u, f_10b92b45 },
  { 0x10b92bdeu, f_10b92bde },
  { 0x10b92d92u, f_10b92d92 },
  { 0x10b92ec4u, f_10b92ec4 },
  { 0x10b92f00u, f_10b92f00 },
  { 0x10b92f75u, f_10b92f75 },
  { 0x10b92faeu, f_10b92fae },
  { 0x10b93101u, f_10b93101 },
  { 0x10b9312au, f_10b9312a },
  { 0x10b93196u, f_10b93196 },
  { 0x10b931f7u, f_10b931f7 },
  { 0x10b9320cu, f_10b9320c },
  { 0x10b93299u, f_10b93299 },
  { 0x10b932e1u, f_10b932e1 },
  { 0x10b932f3u, f_10b932f3 },
  { 0x10b9331fu, f_10b9331f },
  { 0x10b93370u, f_10b93370 },
  { 0x10b93380u, f_10b93380 },
  { 0x10b93460u, f_10b93460 },
  { 0x10b934dbu, f_10b934db },
  { 0x10b93688u, f_10b93688 },
  { 0x10b936d2u, f_10b936d2 },
  { 0x10b93705u, f_10b93705 },
  { 0x10b9372eu, f_10b9372e },
  { 0x10b938b3u, f_10b938b3 },
  { 0x10b938d0u, f_10b938d0 },
  { 0x10b93c05u, f_10b93c05 },
  { 0x10b93c43u, f_10b93c43 },
  { 0x10b93c6eu, f_10b93c6e },
  { 0x10b93f99u, f_10b93f99 },
  { 0x10b942a2u, f_10b942a2 },
  { 0x10b94353u, f_10b94353 },
  { 0x10b9444eu, f_10b9444e },
  { 0x10b944e0u, f_10b944e0 },
  { 0x10b945e0u, f_10b945e0 },
  { 0x10b94638u, f_10b94638 },
  { 0x10b94653u, f_10b94653 },
  { 0x10b94877u, f_10b94877 },
  { 0x10b948a2u, f_10b948a2 },
  { 0x10b949f0u, f_10b949f0 },
  { 0x10b94d28u, f_10b94d28 },
  { 0x10b94d6au, f_10b94d6a },
  { 0x10b94dfeu, f_10b94dfe },
  { 0x10b94eddu, f_10b94edd },
  { 0x10b94f00u, f_10b94f00 },
  { 0x10b94f30u, f_10b94f30 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10b91000u
#define FSIZE 0x00003f46u
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
