#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10821000u, f_10821000 },
  { 0x10821012u, f_10821012 },
  { 0x10821795u, f_10821795 },
  { 0x10823d5eu, f_10823d5e },
  { 0x10823e37u, f_10823e37 },
  { 0x10823ed4u, f_10823ed4 },
  { 0x10823f07u, f_10823f07 },
  { 0x10823f34u, f_10823f34 },
  { 0x10823f45u, f_10823f45 },
  { 0x10823f54u, f_10823f54 },
  { 0x10823ff9u, f_10823ff9 },
  { 0x10824002u, f_10824002 },
  { 0x1082400bu, f_1082400b },
  { 0x10824025u, f_10824025 },
  { 0x10824079u, f_10824079 },
  { 0x10824097u, f_10824097 },
  { 0x108240aau, f_108240aa },
  { 0x1082414au, f_1082414a },
  { 0x10824306u, f_10824306 },
  { 0x1082435au, f_1082435a },
  { 0x10824413u, f_10824413 },
  { 0x108244acu, f_108244ac },
  { 0x10824660u, f_10824660 },
  { 0x10824792u, f_10824792 },
  { 0x108247ceu, f_108247ce },
  { 0x10824843u, f_10824843 },
  { 0x1082487cu, f_1082487c },
  { 0x108249cfu, f_108249cf },
  { 0x108249f8u, f_108249f8 },
  { 0x10824a64u, f_10824a64 },
  { 0x10824ac5u, f_10824ac5 },
  { 0x10824adau, f_10824ada },
  { 0x10824b67u, f_10824b67 },
  { 0x10824bafu, f_10824baf },
  { 0x10824bc1u, f_10824bc1 },
  { 0x10824bedu, f_10824bed },
  { 0x10824c40u, f_10824c40 },
  { 0x10824c50u, f_10824c50 },
  { 0x10824d30u, f_10824d30 },
  { 0x10824dabu, f_10824dab },
  { 0x10824f58u, f_10824f58 },
  { 0x10824fa2u, f_10824fa2 },
  { 0x10824fd5u, f_10824fd5 },
  { 0x10824ffeu, f_10824ffe },
  { 0x10825183u, f_10825183 },
  { 0x108251a0u, f_108251a0 },
  { 0x108254d5u, f_108254d5 },
  { 0x10825513u, f_10825513 },
  { 0x1082553eu, f_1082553e },
  { 0x10825869u, f_10825869 },
  { 0x10825b72u, f_10825b72 },
  { 0x10825c23u, f_10825c23 },
  { 0x10825d1eu, f_10825d1e },
  { 0x10825db0u, f_10825db0 },
  { 0x10825eb0u, f_10825eb0 },
  { 0x10825f08u, f_10825f08 },
  { 0x10825f23u, f_10825f23 },
  { 0x10826147u, f_10826147 },
  { 0x10826172u, f_10826172 },
  { 0x108262c0u, f_108262c0 },
  { 0x108265f8u, f_108265f8 },
  { 0x1082663au, f_1082663a },
  { 0x108266ceu, f_108266ce },
  { 0x108267adu, f_108267ad },
  { 0x108267d0u, f_108267d0 },
  { 0x10826800u, f_10826800 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10821000u
#define FSIZE 0x00005816u
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
