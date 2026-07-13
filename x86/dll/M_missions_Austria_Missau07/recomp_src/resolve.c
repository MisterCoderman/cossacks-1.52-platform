#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10361000u, f_10361000 },
  { 0x10361020u, f_10361020 },
  { 0x10361200u, f_10361200 },
  { 0x10361bd0u, f_10361bd0 },
  { 0x10361ca9u, f_10361ca9 },
  { 0x10361d46u, f_10361d46 },
  { 0x10361d79u, f_10361d79 },
  { 0x10361da6u, f_10361da6 },
  { 0x10361db7u, f_10361db7 },
  { 0x10361dc6u, f_10361dc6 },
  { 0x10361e6bu, f_10361e6b },
  { 0x10361e74u, f_10361e74 },
  { 0x10361e7du, f_10361e7d },
  { 0x10361e97u, f_10361e97 },
  { 0x10361eebu, f_10361eeb },
  { 0x10361f09u, f_10361f09 },
  { 0x10361f1cu, f_10361f1c },
  { 0x10361fbcu, f_10361fbc },
  { 0x10362178u, f_10362178 },
  { 0x103621ccu, f_103621cc },
  { 0x10362285u, f_10362285 },
  { 0x1036231eu, f_1036231e },
  { 0x103624d2u, f_103624d2 },
  { 0x10362604u, f_10362604 },
  { 0x10362640u, f_10362640 },
  { 0x103626b5u, f_103626b5 },
  { 0x103626eeu, f_103626ee },
  { 0x10362841u, f_10362841 },
  { 0x1036286au, f_1036286a },
  { 0x103628d6u, f_103628d6 },
  { 0x10362937u, f_10362937 },
  { 0x1036294cu, f_1036294c },
  { 0x103629d9u, f_103629d9 },
  { 0x10362a21u, f_10362a21 },
  { 0x10362a33u, f_10362a33 },
  { 0x10362a5fu, f_10362a5f },
  { 0x10362ab0u, f_10362ab0 },
  { 0x10362ac0u, f_10362ac0 },
  { 0x10362ba0u, f_10362ba0 },
  { 0x10362c1bu, f_10362c1b },
  { 0x10362dc8u, f_10362dc8 },
  { 0x10362e12u, f_10362e12 },
  { 0x10362e45u, f_10362e45 },
  { 0x10362e6eu, f_10362e6e },
  { 0x10362ff3u, f_10362ff3 },
  { 0x10363010u, f_10363010 },
  { 0x10363345u, f_10363345 },
  { 0x10363383u, f_10363383 },
  { 0x103633aeu, f_103633ae },
  { 0x103636d9u, f_103636d9 },
  { 0x103639e2u, f_103639e2 },
  { 0x10363a93u, f_10363a93 },
  { 0x10363b8eu, f_10363b8e },
  { 0x10363c20u, f_10363c20 },
  { 0x10363d20u, f_10363d20 },
  { 0x10363d78u, f_10363d78 },
  { 0x10363d93u, f_10363d93 },
  { 0x10363fb7u, f_10363fb7 },
  { 0x10363fe2u, f_10363fe2 },
  { 0x10364130u, f_10364130 },
  { 0x10364468u, f_10364468 },
  { 0x103644aau, f_103644aa },
  { 0x1036453eu, f_1036453e },
  { 0x1036461du, f_1036461d },
  { 0x10364640u, f_10364640 },
  { 0x10364670u, f_10364670 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10361000u
#define FSIZE 0x00003686u
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
