#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10251000u, f_10251000 },
  { 0x10251012u, f_10251012 },
  { 0x10251805u, f_10251805 },
  { 0x102543beu, f_102543be },
  { 0x10254497u, f_10254497 },
  { 0x10254534u, f_10254534 },
  { 0x10254567u, f_10254567 },
  { 0x10254594u, f_10254594 },
  { 0x102545a5u, f_102545a5 },
  { 0x102545b4u, f_102545b4 },
  { 0x10254659u, f_10254659 },
  { 0x10254662u, f_10254662 },
  { 0x1025466bu, f_1025466b },
  { 0x10254685u, f_10254685 },
  { 0x102546d9u, f_102546d9 },
  { 0x102546f7u, f_102546f7 },
  { 0x1025470au, f_1025470a },
  { 0x102547aau, f_102547aa },
  { 0x10254966u, f_10254966 },
  { 0x102549bau, f_102549ba },
  { 0x10254a73u, f_10254a73 },
  { 0x10254b0cu, f_10254b0c },
  { 0x10254cc0u, f_10254cc0 },
  { 0x10254df2u, f_10254df2 },
  { 0x10254e2eu, f_10254e2e },
  { 0x10254ea3u, f_10254ea3 },
  { 0x10254edcu, f_10254edc },
  { 0x1025502fu, f_1025502f },
  { 0x10255058u, f_10255058 },
  { 0x102550c4u, f_102550c4 },
  { 0x10255125u, f_10255125 },
  { 0x1025513au, f_1025513a },
  { 0x102551c7u, f_102551c7 },
  { 0x1025520fu, f_1025520f },
  { 0x10255221u, f_10255221 },
  { 0x1025524du, f_1025524d },
  { 0x102552a0u, f_102552a0 },
  { 0x102552b0u, f_102552b0 },
  { 0x10255390u, f_10255390 },
  { 0x1025540bu, f_1025540b },
  { 0x102555b8u, f_102555b8 },
  { 0x10255602u, f_10255602 },
  { 0x10255635u, f_10255635 },
  { 0x1025565eu, f_1025565e },
  { 0x102557e3u, f_102557e3 },
  { 0x10255800u, f_10255800 },
  { 0x10255b35u, f_10255b35 },
  { 0x10255b73u, f_10255b73 },
  { 0x10255b9eu, f_10255b9e },
  { 0x10255ec9u, f_10255ec9 },
  { 0x102561d2u, f_102561d2 },
  { 0x10256283u, f_10256283 },
  { 0x1025637eu, f_1025637e },
  { 0x10256410u, f_10256410 },
  { 0x10256510u, f_10256510 },
  { 0x10256568u, f_10256568 },
  { 0x10256583u, f_10256583 },
  { 0x102567a7u, f_102567a7 },
  { 0x102567d2u, f_102567d2 },
  { 0x10256920u, f_10256920 },
  { 0x10256c58u, f_10256c58 },
  { 0x10256c9au, f_10256c9a },
  { 0x10256d2eu, f_10256d2e },
  { 0x10256e0du, f_10256e0d },
  { 0x10256e30u, f_10256e30 },
  { 0x10256e60u, f_10256e60 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10251000u
#define FSIZE 0x00005e76u
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
