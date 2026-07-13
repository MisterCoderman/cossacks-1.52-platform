#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11761000u, f_11761000 },
  { 0x11761050u, f_11761050 },
  { 0x117612e0u, f_117612e0 },
  { 0x11761300u, f_11761300 },
  { 0x11761ca0u, f_11761ca0 },
  { 0x11761d79u, f_11761d79 },
  { 0x11761e16u, f_11761e16 },
  { 0x11761e49u, f_11761e49 },
  { 0x11761e76u, f_11761e76 },
  { 0x11761e87u, f_11761e87 },
  { 0x11761e96u, f_11761e96 },
  { 0x11761f3bu, f_11761f3b },
  { 0x11761f44u, f_11761f44 },
  { 0x11761f4du, f_11761f4d },
  { 0x11761f67u, f_11761f67 },
  { 0x11761fbbu, f_11761fbb },
  { 0x11761fd9u, f_11761fd9 },
  { 0x11761fecu, f_11761fec },
  { 0x1176208cu, f_1176208c },
  { 0x11762248u, f_11762248 },
  { 0x1176229cu, f_1176229c },
  { 0x11762355u, f_11762355 },
  { 0x117623eeu, f_117623ee },
  { 0x117625a2u, f_117625a2 },
  { 0x117626d4u, f_117626d4 },
  { 0x11762710u, f_11762710 },
  { 0x11762785u, f_11762785 },
  { 0x117627beu, f_117627be },
  { 0x11762911u, f_11762911 },
  { 0x1176293au, f_1176293a },
  { 0x117629a6u, f_117629a6 },
  { 0x11762a07u, f_11762a07 },
  { 0x11762a1cu, f_11762a1c },
  { 0x11762aa9u, f_11762aa9 },
  { 0x11762af1u, f_11762af1 },
  { 0x11762b03u, f_11762b03 },
  { 0x11762b2fu, f_11762b2f },
  { 0x11762b80u, f_11762b80 },
  { 0x11762b90u, f_11762b90 },
  { 0x11762c70u, f_11762c70 },
  { 0x11762cebu, f_11762ceb },
  { 0x11762e98u, f_11762e98 },
  { 0x11762ee2u, f_11762ee2 },
  { 0x11762f15u, f_11762f15 },
  { 0x11762f3eu, f_11762f3e },
  { 0x117630c3u, f_117630c3 },
  { 0x117630e0u, f_117630e0 },
  { 0x11763415u, f_11763415 },
  { 0x11763453u, f_11763453 },
  { 0x1176347eu, f_1176347e },
  { 0x117637a9u, f_117637a9 },
  { 0x11763ab2u, f_11763ab2 },
  { 0x11763b63u, f_11763b63 },
  { 0x11763c5eu, f_11763c5e },
  { 0x11763cf0u, f_11763cf0 },
  { 0x11763df0u, f_11763df0 },
  { 0x11763e48u, f_11763e48 },
  { 0x11763e63u, f_11763e63 },
  { 0x11764087u, f_11764087 },
  { 0x117640b2u, f_117640b2 },
  { 0x11764200u, f_11764200 },
  { 0x11764538u, f_11764538 },
  { 0x1176457au, f_1176457a },
  { 0x1176460eu, f_1176460e },
  { 0x117646edu, f_117646ed },
  { 0x11764710u, f_11764710 },
  { 0x11764740u, f_11764740 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11761000u
#define FSIZE 0x00003756u
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
