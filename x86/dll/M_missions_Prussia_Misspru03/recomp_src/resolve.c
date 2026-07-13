#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10951000u, f_10951000 },
  { 0x10951700u, f_10951700 },
  { 0x10951720u, f_10951720 },
  { 0x10956140u, f_10956140 },
  { 0x10956219u, f_10956219 },
  { 0x109562b6u, f_109562b6 },
  { 0x109562e9u, f_109562e9 },
  { 0x10956316u, f_10956316 },
  { 0x10956327u, f_10956327 },
  { 0x10956336u, f_10956336 },
  { 0x109563dbu, f_109563db },
  { 0x109563e4u, f_109563e4 },
  { 0x109563edu, f_109563ed },
  { 0x10956407u, f_10956407 },
  { 0x1095645bu, f_1095645b },
  { 0x10956479u, f_10956479 },
  { 0x1095648cu, f_1095648c },
  { 0x1095652cu, f_1095652c },
  { 0x109566e8u, f_109566e8 },
  { 0x1095673cu, f_1095673c },
  { 0x109567f5u, f_109567f5 },
  { 0x1095688eu, f_1095688e },
  { 0x10956a42u, f_10956a42 },
  { 0x10956b74u, f_10956b74 },
  { 0x10956bb0u, f_10956bb0 },
  { 0x10956c25u, f_10956c25 },
  { 0x10956c5eu, f_10956c5e },
  { 0x10956db1u, f_10956db1 },
  { 0x10956ddau, f_10956dda },
  { 0x10956e46u, f_10956e46 },
  { 0x10956ea7u, f_10956ea7 },
  { 0x10956ebcu, f_10956ebc },
  { 0x10956f49u, f_10956f49 },
  { 0x10956f91u, f_10956f91 },
  { 0x10956fa3u, f_10956fa3 },
  { 0x10956fcfu, f_10956fcf },
  { 0x10957020u, f_10957020 },
  { 0x10957030u, f_10957030 },
  { 0x10957110u, f_10957110 },
  { 0x1095718bu, f_1095718b },
  { 0x10957338u, f_10957338 },
  { 0x10957382u, f_10957382 },
  { 0x109573b5u, f_109573b5 },
  { 0x109573deu, f_109573de },
  { 0x10957563u, f_10957563 },
  { 0x10957580u, f_10957580 },
  { 0x109578b5u, f_109578b5 },
  { 0x109578f3u, f_109578f3 },
  { 0x1095791eu, f_1095791e },
  { 0x10957c49u, f_10957c49 },
  { 0x10957f52u, f_10957f52 },
  { 0x10958003u, f_10958003 },
  { 0x109580feu, f_109580fe },
  { 0x10958190u, f_10958190 },
  { 0x10958290u, f_10958290 },
  { 0x109582e8u, f_109582e8 },
  { 0x10958303u, f_10958303 },
  { 0x10958527u, f_10958527 },
  { 0x10958552u, f_10958552 },
  { 0x109586a0u, f_109586a0 },
  { 0x109589d8u, f_109589d8 },
  { 0x10958a1au, f_10958a1a },
  { 0x10958aaeu, f_10958aae },
  { 0x10958b8du, f_10958b8d },
  { 0x10958bb0u, f_10958bb0 },
  { 0x10958be0u, f_10958be0 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10951000u
#define FSIZE 0x00007bf6u
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
