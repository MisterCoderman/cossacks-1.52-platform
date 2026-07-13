#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11ea1000u, f_11ea1000 },
  { 0x11ea1012u, f_11ea1012 },
  { 0x11ea1030u, f_11ea1030 },
  { 0x11ea1073u, f_11ea1073 },
  { 0x11ea108bu, f_11ea108b },
  { 0x11ea10a2u, f_11ea10a2 },
  { 0x11ea10bau, f_11ea10ba },
  { 0x11ea10d1u, f_11ea10d1 },
  { 0x11ea10f6u, f_11ea10f6 },
  { 0x11ea116cu, f_11ea116c },
  { 0x11ea14a4u, f_11ea14a4 },
  { 0x11ea269fu, f_11ea269f },
  { 0x11ea2778u, f_11ea2778 },
  { 0x11ea2815u, f_11ea2815 },
  { 0x11ea2848u, f_11ea2848 },
  { 0x11ea2875u, f_11ea2875 },
  { 0x11ea2886u, f_11ea2886 },
  { 0x11ea2895u, f_11ea2895 },
  { 0x11ea293au, f_11ea293a },
  { 0x11ea2943u, f_11ea2943 },
  { 0x11ea294cu, f_11ea294c },
  { 0x11ea2966u, f_11ea2966 },
  { 0x11ea29bau, f_11ea29ba },
  { 0x11ea29d8u, f_11ea29d8 },
  { 0x11ea29ebu, f_11ea29eb },
  { 0x11ea2a8bu, f_11ea2a8b },
  { 0x11ea2c47u, f_11ea2c47 },
  { 0x11ea2c9bu, f_11ea2c9b },
  { 0x11ea2d54u, f_11ea2d54 },
  { 0x11ea2dedu, f_11ea2ded },
  { 0x11ea2fa1u, f_11ea2fa1 },
  { 0x11ea30d3u, f_11ea30d3 },
  { 0x11ea310fu, f_11ea310f },
  { 0x11ea3184u, f_11ea3184 },
  { 0x11ea31bdu, f_11ea31bd },
  { 0x11ea3310u, f_11ea3310 },
  { 0x11ea3339u, f_11ea3339 },
  { 0x11ea33a5u, f_11ea33a5 },
  { 0x11ea3406u, f_11ea3406 },
  { 0x11ea341bu, f_11ea341b },
  { 0x11ea34a8u, f_11ea34a8 },
  { 0x11ea34f0u, f_11ea34f0 },
  { 0x11ea3502u, f_11ea3502 },
  { 0x11ea352eu, f_11ea352e },
  { 0x11ea3580u, f_11ea3580 },
  { 0x11ea3590u, f_11ea3590 },
  { 0x11ea3670u, f_11ea3670 },
  { 0x11ea36ebu, f_11ea36eb },
  { 0x11ea3898u, f_11ea3898 },
  { 0x11ea38e2u, f_11ea38e2 },
  { 0x11ea3915u, f_11ea3915 },
  { 0x11ea393eu, f_11ea393e },
  { 0x11ea3ac3u, f_11ea3ac3 },
  { 0x11ea3ae0u, f_11ea3ae0 },
  { 0x11ea3e15u, f_11ea3e15 },
  { 0x11ea3e53u, f_11ea3e53 },
  { 0x11ea3e7eu, f_11ea3e7e },
  { 0x11ea41a9u, f_11ea41a9 },
  { 0x11ea44b2u, f_11ea44b2 },
  { 0x11ea4563u, f_11ea4563 },
  { 0x11ea465eu, f_11ea465e },
  { 0x11ea46f0u, f_11ea46f0 },
  { 0x11ea47f0u, f_11ea47f0 },
  { 0x11ea4848u, f_11ea4848 },
  { 0x11ea4863u, f_11ea4863 },
  { 0x11ea4a87u, f_11ea4a87 },
  { 0x11ea4ab2u, f_11ea4ab2 },
  { 0x11ea4c00u, f_11ea4c00 },
  { 0x11ea4f38u, f_11ea4f38 },
  { 0x11ea4f7au, f_11ea4f7a },
  { 0x11ea500eu, f_11ea500e },
  { 0x11ea50edu, f_11ea50ed },
  { 0x11ea5110u, f_11ea5110 },
  { 0x11ea5140u, f_11ea5140 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11ea1000u
#define FSIZE 0x00004156u
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
