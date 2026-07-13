#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10931000u, f_10931000 },
  { 0x109314c0u, f_109314c0 },
  { 0x109314e0u, f_109314e0 },
  { 0x10932d60u, f_10932d60 },
  { 0x10932e39u, f_10932e39 },
  { 0x10932ed6u, f_10932ed6 },
  { 0x10932f09u, f_10932f09 },
  { 0x10932f36u, f_10932f36 },
  { 0x10932f47u, f_10932f47 },
  { 0x10932f56u, f_10932f56 },
  { 0x10932ffbu, f_10932ffb },
  { 0x10933004u, f_10933004 },
  { 0x1093300du, f_1093300d },
  { 0x10933027u, f_10933027 },
  { 0x1093307bu, f_1093307b },
  { 0x10933099u, f_10933099 },
  { 0x109330acu, f_109330ac },
  { 0x1093314cu, f_1093314c },
  { 0x10933308u, f_10933308 },
  { 0x1093335cu, f_1093335c },
  { 0x10933415u, f_10933415 },
  { 0x109334aeu, f_109334ae },
  { 0x10933662u, f_10933662 },
  { 0x10933794u, f_10933794 },
  { 0x109337d0u, f_109337d0 },
  { 0x10933845u, f_10933845 },
  { 0x1093387eu, f_1093387e },
  { 0x109339d1u, f_109339d1 },
  { 0x109339fau, f_109339fa },
  { 0x10933a66u, f_10933a66 },
  { 0x10933ac7u, f_10933ac7 },
  { 0x10933adcu, f_10933adc },
  { 0x10933b69u, f_10933b69 },
  { 0x10933bb1u, f_10933bb1 },
  { 0x10933bc3u, f_10933bc3 },
  { 0x10933befu, f_10933bef },
  { 0x10933c40u, f_10933c40 },
  { 0x10933c50u, f_10933c50 },
  { 0x10933d30u, f_10933d30 },
  { 0x10933dabu, f_10933dab },
  { 0x10933f58u, f_10933f58 },
  { 0x10933fa2u, f_10933fa2 },
  { 0x10933fd5u, f_10933fd5 },
  { 0x10933ffeu, f_10933ffe },
  { 0x10934183u, f_10934183 },
  { 0x109341a0u, f_109341a0 },
  { 0x109344d5u, f_109344d5 },
  { 0x10934513u, f_10934513 },
  { 0x1093453eu, f_1093453e },
  { 0x10934869u, f_10934869 },
  { 0x10934b72u, f_10934b72 },
  { 0x10934c23u, f_10934c23 },
  { 0x10934d1eu, f_10934d1e },
  { 0x10934db0u, f_10934db0 },
  { 0x10934eb0u, f_10934eb0 },
  { 0x10934f08u, f_10934f08 },
  { 0x10934f23u, f_10934f23 },
  { 0x10935147u, f_10935147 },
  { 0x10935172u, f_10935172 },
  { 0x109352c0u, f_109352c0 },
  { 0x109355f8u, f_109355f8 },
  { 0x1093563au, f_1093563a },
  { 0x109356ceu, f_109356ce },
  { 0x109357adu, f_109357ad },
  { 0x109357d0u, f_109357d0 },
  { 0x10935800u, f_10935800 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10931000u
#define FSIZE 0x00004816u
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
