#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11f71000u, f_11f71000 },
  { 0x11f71050u, f_11f71050 },
  { 0x11f71370u, f_11f71370 },
  { 0x11f71e30u, f_11f71e30 },
  { 0x11f71e50u, f_11f71e50 },
  { 0x11f71f29u, f_11f71f29 },
  { 0x11f71fc6u, f_11f71fc6 },
  { 0x11f71ff9u, f_11f71ff9 },
  { 0x11f72026u, f_11f72026 },
  { 0x11f72037u, f_11f72037 },
  { 0x11f72046u, f_11f72046 },
  { 0x11f720ebu, f_11f720eb },
  { 0x11f720f4u, f_11f720f4 },
  { 0x11f720fdu, f_11f720fd },
  { 0x11f72117u, f_11f72117 },
  { 0x11f7216bu, f_11f7216b },
  { 0x11f72189u, f_11f72189 },
  { 0x11f7219cu, f_11f7219c },
  { 0x11f7223cu, f_11f7223c },
  { 0x11f723f8u, f_11f723f8 },
  { 0x11f7244cu, f_11f7244c },
  { 0x11f72505u, f_11f72505 },
  { 0x11f7259eu, f_11f7259e },
  { 0x11f72752u, f_11f72752 },
  { 0x11f72884u, f_11f72884 },
  { 0x11f728c0u, f_11f728c0 },
  { 0x11f72935u, f_11f72935 },
  { 0x11f7296eu, f_11f7296e },
  { 0x11f72ac1u, f_11f72ac1 },
  { 0x11f72aeau, f_11f72aea },
  { 0x11f72b56u, f_11f72b56 },
  { 0x11f72bb7u, f_11f72bb7 },
  { 0x11f72bccu, f_11f72bcc },
  { 0x11f72c59u, f_11f72c59 },
  { 0x11f72ca1u, f_11f72ca1 },
  { 0x11f72cb3u, f_11f72cb3 },
  { 0x11f72cdfu, f_11f72cdf },
  { 0x11f72d30u, f_11f72d30 },
  { 0x11f72d40u, f_11f72d40 },
  { 0x11f72e20u, f_11f72e20 },
  { 0x11f72e9bu, f_11f72e9b },
  { 0x11f73048u, f_11f73048 },
  { 0x11f73092u, f_11f73092 },
  { 0x11f730c5u, f_11f730c5 },
  { 0x11f730eeu, f_11f730ee },
  { 0x11f73273u, f_11f73273 },
  { 0x11f73290u, f_11f73290 },
  { 0x11f735c5u, f_11f735c5 },
  { 0x11f73603u, f_11f73603 },
  { 0x11f7362eu, f_11f7362e },
  { 0x11f73959u, f_11f73959 },
  { 0x11f73c62u, f_11f73c62 },
  { 0x11f73d13u, f_11f73d13 },
  { 0x11f73e0eu, f_11f73e0e },
  { 0x11f73ea0u, f_11f73ea0 },
  { 0x11f73fa0u, f_11f73fa0 },
  { 0x11f73ff8u, f_11f73ff8 },
  { 0x11f74013u, f_11f74013 },
  { 0x11f74237u, f_11f74237 },
  { 0x11f74262u, f_11f74262 },
  { 0x11f743b0u, f_11f743b0 },
  { 0x11f746e8u, f_11f746e8 },
  { 0x11f7472au, f_11f7472a },
  { 0x11f747beu, f_11f747be },
  { 0x11f7489du, f_11f7489d },
  { 0x11f748c0u, f_11f748c0 },
  { 0x11f748f0u, f_11f748f0 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11f71000u
#define FSIZE 0x00003906u
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
