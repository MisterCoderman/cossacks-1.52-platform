#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x10381000u, f_10381000 },
  { 0x10381020u, f_10381020 },
  { 0x10381ba0u, f_10381ba0 },
  { 0x10381bc0u, f_10381bc0 },
  { 0x103849b0u, f_103849b0 },
  { 0x10384a89u, f_10384a89 },
  { 0x10384b26u, f_10384b26 },
  { 0x10384b59u, f_10384b59 },
  { 0x10384b86u, f_10384b86 },
  { 0x10384b97u, f_10384b97 },
  { 0x10384ba6u, f_10384ba6 },
  { 0x10384c4bu, f_10384c4b },
  { 0x10384c54u, f_10384c54 },
  { 0x10384c5du, f_10384c5d },
  { 0x10384c77u, f_10384c77 },
  { 0x10384ccbu, f_10384ccb },
  { 0x10384ce9u, f_10384ce9 },
  { 0x10384cfcu, f_10384cfc },
  { 0x10384d9cu, f_10384d9c },
  { 0x10384f58u, f_10384f58 },
  { 0x10384facu, f_10384fac },
  { 0x10385065u, f_10385065 },
  { 0x103850feu, f_103850fe },
  { 0x103852b2u, f_103852b2 },
  { 0x103853e4u, f_103853e4 },
  { 0x10385420u, f_10385420 },
  { 0x10385495u, f_10385495 },
  { 0x103854ceu, f_103854ce },
  { 0x10385621u, f_10385621 },
  { 0x1038564au, f_1038564a },
  { 0x103856b6u, f_103856b6 },
  { 0x10385717u, f_10385717 },
  { 0x1038572cu, f_1038572c },
  { 0x103857b9u, f_103857b9 },
  { 0x10385801u, f_10385801 },
  { 0x10385813u, f_10385813 },
  { 0x1038583fu, f_1038583f },
  { 0x10385890u, f_10385890 },
  { 0x103858a0u, f_103858a0 },
  { 0x10385980u, f_10385980 },
  { 0x103859fbu, f_103859fb },
  { 0x10385ba8u, f_10385ba8 },
  { 0x10385bf2u, f_10385bf2 },
  { 0x10385c25u, f_10385c25 },
  { 0x10385c4eu, f_10385c4e },
  { 0x10385dd3u, f_10385dd3 },
  { 0x10385df0u, f_10385df0 },
  { 0x10386125u, f_10386125 },
  { 0x10386163u, f_10386163 },
  { 0x1038618eu, f_1038618e },
  { 0x103864b9u, f_103864b9 },
  { 0x103867c2u, f_103867c2 },
  { 0x10386873u, f_10386873 },
  { 0x1038696eu, f_1038696e },
  { 0x10386a00u, f_10386a00 },
  { 0x10386b00u, f_10386b00 },
  { 0x10386b58u, f_10386b58 },
  { 0x10386b73u, f_10386b73 },
  { 0x10386d97u, f_10386d97 },
  { 0x10386dc2u, f_10386dc2 },
  { 0x10386f10u, f_10386f10 },
  { 0x10387248u, f_10387248 },
  { 0x1038728au, f_1038728a },
  { 0x1038731eu, f_1038731e },
  { 0x103873fdu, f_103873fd },
  { 0x10387420u, f_10387420 },
  { 0x10387450u, f_10387450 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x10381000u
#define FSIZE 0x00006466u
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
