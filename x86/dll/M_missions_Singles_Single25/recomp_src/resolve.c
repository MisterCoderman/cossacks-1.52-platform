#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11381000u, f_11381000 },
  { 0x11381012u, f_11381012 },
  { 0x113814ccu, f_113814cc },
  { 0x11382749u, f_11382749 },
  { 0x11382822u, f_11382822 },
  { 0x113828bfu, f_113828bf },
  { 0x113828f2u, f_113828f2 },
  { 0x1138291fu, f_1138291f },
  { 0x11382930u, f_11382930 },
  { 0x1138293fu, f_1138293f },
  { 0x113829e4u, f_113829e4 },
  { 0x113829edu, f_113829ed },
  { 0x113829f6u, f_113829f6 },
  { 0x11382a10u, f_11382a10 },
  { 0x11382a64u, f_11382a64 },
  { 0x11382a82u, f_11382a82 },
  { 0x11382a95u, f_11382a95 },
  { 0x11382b35u, f_11382b35 },
  { 0x11382cf1u, f_11382cf1 },
  { 0x11382d45u, f_11382d45 },
  { 0x11382dfeu, f_11382dfe },
  { 0x11382e97u, f_11382e97 },
  { 0x1138304bu, f_1138304b },
  { 0x1138317du, f_1138317d },
  { 0x113831b9u, f_113831b9 },
  { 0x1138322eu, f_1138322e },
  { 0x11383267u, f_11383267 },
  { 0x113833bau, f_113833ba },
  { 0x113833e3u, f_113833e3 },
  { 0x1138344fu, f_1138344f },
  { 0x113834b0u, f_113834b0 },
  { 0x113834c5u, f_113834c5 },
  { 0x11383552u, f_11383552 },
  { 0x1138359au, f_1138359a },
  { 0x113835acu, f_113835ac },
  { 0x113835d8u, f_113835d8 },
  { 0x11383630u, f_11383630 },
  { 0x11383640u, f_11383640 },
  { 0x11383720u, f_11383720 },
  { 0x1138379bu, f_1138379b },
  { 0x11383948u, f_11383948 },
  { 0x11383992u, f_11383992 },
  { 0x113839c5u, f_113839c5 },
  { 0x113839eeu, f_113839ee },
  { 0x11383b73u, f_11383b73 },
  { 0x11383b90u, f_11383b90 },
  { 0x11383ec5u, f_11383ec5 },
  { 0x11383f03u, f_11383f03 },
  { 0x11383f2eu, f_11383f2e },
  { 0x11384259u, f_11384259 },
  { 0x11384562u, f_11384562 },
  { 0x11384613u, f_11384613 },
  { 0x1138470eu, f_1138470e },
  { 0x113847a0u, f_113847a0 },
  { 0x113848a0u, f_113848a0 },
  { 0x113848f8u, f_113848f8 },
  { 0x11384913u, f_11384913 },
  { 0x11384b37u, f_11384b37 },
  { 0x11384b62u, f_11384b62 },
  { 0x11384cb0u, f_11384cb0 },
  { 0x11384fe8u, f_11384fe8 },
  { 0x1138502au, f_1138502a },
  { 0x113850beu, f_113850be },
  { 0x1138519du, f_1138519d },
  { 0x113851c0u, f_113851c0 },
  { 0x113851f0u, f_113851f0 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11381000u
#define FSIZE 0x00004206u
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
