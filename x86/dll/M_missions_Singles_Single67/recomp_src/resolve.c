#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11b01000u, f_11b01000 },
  { 0x11b01050u, f_11b01050 },
  { 0x11b013f0u, f_11b013f0 },
  { 0x11b01410u, f_11b01410 },
  { 0x11b02890u, f_11b02890 },
  { 0x11b02969u, f_11b02969 },
  { 0x11b02a06u, f_11b02a06 },
  { 0x11b02a39u, f_11b02a39 },
  { 0x11b02a66u, f_11b02a66 },
  { 0x11b02a77u, f_11b02a77 },
  { 0x11b02a86u, f_11b02a86 },
  { 0x11b02b2bu, f_11b02b2b },
  { 0x11b02b34u, f_11b02b34 },
  { 0x11b02b3du, f_11b02b3d },
  { 0x11b02b57u, f_11b02b57 },
  { 0x11b02babu, f_11b02bab },
  { 0x11b02bc9u, f_11b02bc9 },
  { 0x11b02bdcu, f_11b02bdc },
  { 0x11b02c7cu, f_11b02c7c },
  { 0x11b02e38u, f_11b02e38 },
  { 0x11b02e8cu, f_11b02e8c },
  { 0x11b02f45u, f_11b02f45 },
  { 0x11b02fdeu, f_11b02fde },
  { 0x11b03192u, f_11b03192 },
  { 0x11b032c4u, f_11b032c4 },
  { 0x11b03300u, f_11b03300 },
  { 0x11b03375u, f_11b03375 },
  { 0x11b033aeu, f_11b033ae },
  { 0x11b03501u, f_11b03501 },
  { 0x11b0352au, f_11b0352a },
  { 0x11b03596u, f_11b03596 },
  { 0x11b035f7u, f_11b035f7 },
  { 0x11b0360cu, f_11b0360c },
  { 0x11b03699u, f_11b03699 },
  { 0x11b036e1u, f_11b036e1 },
  { 0x11b036f3u, f_11b036f3 },
  { 0x11b0371fu, f_11b0371f },
  { 0x11b03770u, f_11b03770 },
  { 0x11b03780u, f_11b03780 },
  { 0x11b03860u, f_11b03860 },
  { 0x11b038dbu, f_11b038db },
  { 0x11b03a88u, f_11b03a88 },
  { 0x11b03ad2u, f_11b03ad2 },
  { 0x11b03b05u, f_11b03b05 },
  { 0x11b03b2eu, f_11b03b2e },
  { 0x11b03cb3u, f_11b03cb3 },
  { 0x11b03cd0u, f_11b03cd0 },
  { 0x11b04005u, f_11b04005 },
  { 0x11b04043u, f_11b04043 },
  { 0x11b0406eu, f_11b0406e },
  { 0x11b04399u, f_11b04399 },
  { 0x11b046a2u, f_11b046a2 },
  { 0x11b04753u, f_11b04753 },
  { 0x11b0484eu, f_11b0484e },
  { 0x11b048e0u, f_11b048e0 },
  { 0x11b049e0u, f_11b049e0 },
  { 0x11b04a38u, f_11b04a38 },
  { 0x11b04a53u, f_11b04a53 },
  { 0x11b04c77u, f_11b04c77 },
  { 0x11b04ca2u, f_11b04ca2 },
  { 0x11b04df0u, f_11b04df0 },
  { 0x11b05128u, f_11b05128 },
  { 0x11b0516au, f_11b0516a },
  { 0x11b051feu, f_11b051fe },
  { 0x11b052ddu, f_11b052dd },
  { 0x11b05300u, f_11b05300 },
  { 0x11b05330u, f_11b05330 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11b01000u
#define FSIZE 0x00004346u
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
