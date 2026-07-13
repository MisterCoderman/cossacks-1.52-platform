#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10961000u, f_10961000 },
  { 0x10961970u, f_10961970 },
  { 0x10961990u, f_10961990 },
  { 0x10963cb0u, f_10963cb0 },
  { 0x10963d89u, f_10963d89 },
  { 0x10963e26u, f_10963e26 },
  { 0x10963e59u, f_10963e59 },
  { 0x10963e86u, f_10963e86 },
  { 0x10963e97u, f_10963e97 },
  { 0x10963ea6u, f_10963ea6 },
  { 0x10963f4bu, f_10963f4b },
  { 0x10963f54u, f_10963f54 },
  { 0x10963f5du, f_10963f5d },
  { 0x10963f77u, f_10963f77 },
  { 0x10963fcbu, f_10963fcb },
  { 0x10963fe9u, f_10963fe9 },
  { 0x10963ffcu, f_10963ffc },
  { 0x1096409cu, f_1096409c },
  { 0x10964258u, f_10964258 },
  { 0x109642acu, f_109642ac },
  { 0x10964365u, f_10964365 },
  { 0x109643feu, f_109643fe },
  { 0x109645b2u, f_109645b2 },
  { 0x109646e4u, f_109646e4 },
  { 0x10964720u, f_10964720 },
  { 0x10964795u, f_10964795 },
  { 0x109647ceu, f_109647ce },
  { 0x10964921u, f_10964921 },
  { 0x1096494au, f_1096494a },
  { 0x109649b6u, f_109649b6 },
  { 0x10964a17u, f_10964a17 },
  { 0x10964a2cu, f_10964a2c },
  { 0x10964ab9u, f_10964ab9 },
  { 0x10964b01u, f_10964b01 },
  { 0x10964b13u, f_10964b13 },
  { 0x10964b3fu, f_10964b3f },
  { 0x10964b90u, f_10964b90 },
  { 0x10964ba0u, f_10964ba0 },
  { 0x10964c80u, f_10964c80 },
  { 0x10964cfbu, f_10964cfb },
  { 0x10964ea8u, f_10964ea8 },
  { 0x10964ef2u, f_10964ef2 },
  { 0x10964f25u, f_10964f25 },
  { 0x10964f4eu, f_10964f4e },
  { 0x109650d3u, f_109650d3 },
  { 0x109650f0u, f_109650f0 },
  { 0x10965425u, f_10965425 },
  { 0x10965463u, f_10965463 },
  { 0x1096548eu, f_1096548e },
  { 0x109657b9u, f_109657b9 },
  { 0x10965ac2u, f_10965ac2 },
  { 0x10965b73u, f_10965b73 },
  { 0x10965c6eu, f_10965c6e },
  { 0x10965d00u, f_10965d00 },
  { 0x10965e00u, f_10965e00 },
  { 0x10965e58u, f_10965e58 },
  { 0x10965e73u, f_10965e73 },
  { 0x10966097u, f_10966097 },
  { 0x109660c2u, f_109660c2 },
  { 0x10966210u, f_10966210 },
  { 0x10966548u, f_10966548 },
  { 0x1096658au, f_1096658a },
  { 0x1096661eu, f_1096661e },
  { 0x109666fdu, f_109666fd },
  { 0x10966720u, f_10966720 },
  { 0x10966750u, f_10966750 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10961000u
#define FSIZE 0x00005766u
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
