#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x115f1000u, f_115f1000 },
  { 0x115f1012u, f_115f1012 },
  { 0x115f1030u, f_115f1030 },
  { 0x115f105eu, f_115f105e },
  { 0x115f108eu, f_115f108e },
  { 0x115f10bcu, f_115f10bc },
  { 0x115f10e0u, f_115f10e0 },
  { 0x115f1104u, f_115f1104 },
  { 0x115f1173u, f_115f1173 },
  { 0x115f1529u, f_115f1529 },
  { 0x115f27b9u, f_115f27b9 },
  { 0x115f2892u, f_115f2892 },
  { 0x115f292fu, f_115f292f },
  { 0x115f2962u, f_115f2962 },
  { 0x115f298fu, f_115f298f },
  { 0x115f29a0u, f_115f29a0 },
  { 0x115f29afu, f_115f29af },
  { 0x115f2a54u, f_115f2a54 },
  { 0x115f2a5du, f_115f2a5d },
  { 0x115f2a66u, f_115f2a66 },
  { 0x115f2a80u, f_115f2a80 },
  { 0x115f2ad4u, f_115f2ad4 },
  { 0x115f2af2u, f_115f2af2 },
  { 0x115f2b05u, f_115f2b05 },
  { 0x115f2ba5u, f_115f2ba5 },
  { 0x115f2d61u, f_115f2d61 },
  { 0x115f2db5u, f_115f2db5 },
  { 0x115f2e6eu, f_115f2e6e },
  { 0x115f2f07u, f_115f2f07 },
  { 0x115f30bbu, f_115f30bb },
  { 0x115f31edu, f_115f31ed },
  { 0x115f3229u, f_115f3229 },
  { 0x115f329eu, f_115f329e },
  { 0x115f32d7u, f_115f32d7 },
  { 0x115f342au, f_115f342a },
  { 0x115f3453u, f_115f3453 },
  { 0x115f34bfu, f_115f34bf },
  { 0x115f3520u, f_115f3520 },
  { 0x115f3535u, f_115f3535 },
  { 0x115f35c2u, f_115f35c2 },
  { 0x115f360au, f_115f360a },
  { 0x115f361cu, f_115f361c },
  { 0x115f3648u, f_115f3648 },
  { 0x115f36a0u, f_115f36a0 },
  { 0x115f36b0u, f_115f36b0 },
  { 0x115f3790u, f_115f3790 },
  { 0x115f380bu, f_115f380b },
  { 0x115f39b8u, f_115f39b8 },
  { 0x115f3a02u, f_115f3a02 },
  { 0x115f3a35u, f_115f3a35 },
  { 0x115f3a5eu, f_115f3a5e },
  { 0x115f3be3u, f_115f3be3 },
  { 0x115f3c00u, f_115f3c00 },
  { 0x115f3f35u, f_115f3f35 },
  { 0x115f3f73u, f_115f3f73 },
  { 0x115f3f9eu, f_115f3f9e },
  { 0x115f42c9u, f_115f42c9 },
  { 0x115f45d2u, f_115f45d2 },
  { 0x115f4683u, f_115f4683 },
  { 0x115f477eu, f_115f477e },
  { 0x115f4810u, f_115f4810 },
  { 0x115f4910u, f_115f4910 },
  { 0x115f4968u, f_115f4968 },
  { 0x115f4983u, f_115f4983 },
  { 0x115f4ba7u, f_115f4ba7 },
  { 0x115f4bd2u, f_115f4bd2 },
  { 0x115f4d20u, f_115f4d20 },
  { 0x115f5058u, f_115f5058 },
  { 0x115f509au, f_115f509a },
  { 0x115f512eu, f_115f512e },
  { 0x115f520du, f_115f520d },
  { 0x115f5230u, f_115f5230 },
  { 0x115f5260u, f_115f5260 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x115f1000u
#define FSIZE 0x00004276u
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
