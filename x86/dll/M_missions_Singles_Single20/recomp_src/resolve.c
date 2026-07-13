#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11291000u, f_11291000 },
  { 0x11291420u, f_11291420 },
  { 0x11291440u, f_11291440 },
  { 0x11292210u, f_11292210 },
  { 0x112922e9u, f_112922e9 },
  { 0x11292386u, f_11292386 },
  { 0x112923b9u, f_112923b9 },
  { 0x112923e6u, f_112923e6 },
  { 0x112923f7u, f_112923f7 },
  { 0x11292406u, f_11292406 },
  { 0x112924abu, f_112924ab },
  { 0x112924b4u, f_112924b4 },
  { 0x112924bdu, f_112924bd },
  { 0x112924d7u, f_112924d7 },
  { 0x1129252bu, f_1129252b },
  { 0x11292549u, f_11292549 },
  { 0x1129255cu, f_1129255c },
  { 0x112925fcu, f_112925fc },
  { 0x112927b8u, f_112927b8 },
  { 0x1129280cu, f_1129280c },
  { 0x112928c5u, f_112928c5 },
  { 0x1129295eu, f_1129295e },
  { 0x11292b12u, f_11292b12 },
  { 0x11292c44u, f_11292c44 },
  { 0x11292c80u, f_11292c80 },
  { 0x11292cf5u, f_11292cf5 },
  { 0x11292d2eu, f_11292d2e },
  { 0x11292e81u, f_11292e81 },
  { 0x11292eaau, f_11292eaa },
  { 0x11292f16u, f_11292f16 },
  { 0x11292f77u, f_11292f77 },
  { 0x11292f8cu, f_11292f8c },
  { 0x11293019u, f_11293019 },
  { 0x11293061u, f_11293061 },
  { 0x11293073u, f_11293073 },
  { 0x1129309fu, f_1129309f },
  { 0x112930f0u, f_112930f0 },
  { 0x11293100u, f_11293100 },
  { 0x112931e0u, f_112931e0 },
  { 0x1129325bu, f_1129325b },
  { 0x11293408u, f_11293408 },
  { 0x11293452u, f_11293452 },
  { 0x11293485u, f_11293485 },
  { 0x112934aeu, f_112934ae },
  { 0x11293633u, f_11293633 },
  { 0x11293650u, f_11293650 },
  { 0x11293985u, f_11293985 },
  { 0x112939c3u, f_112939c3 },
  { 0x112939eeu, f_112939ee },
  { 0x11293d19u, f_11293d19 },
  { 0x11294022u, f_11294022 },
  { 0x112940d3u, f_112940d3 },
  { 0x112941ceu, f_112941ce },
  { 0x11294260u, f_11294260 },
  { 0x11294360u, f_11294360 },
  { 0x112943b8u, f_112943b8 },
  { 0x112943d3u, f_112943d3 },
  { 0x112945f7u, f_112945f7 },
  { 0x11294622u, f_11294622 },
  { 0x11294770u, f_11294770 },
  { 0x11294aa8u, f_11294aa8 },
  { 0x11294aeau, f_11294aea },
  { 0x11294b7eu, f_11294b7e },
  { 0x11294c5du, f_11294c5d },
  { 0x11294c80u, f_11294c80 },
  { 0x11294cb0u, f_11294cb0 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11291000u
#define FSIZE 0x00003cc6u
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
