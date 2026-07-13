#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x11781000u, f_11781000 },
  { 0x11781050u, f_11781050 },
  { 0x117811d0u, f_117811d0 },
  { 0x117818a0u, f_117818a0 },
  { 0x117818c0u, f_117818c0 },
  { 0x11781999u, f_11781999 },
  { 0x11781a36u, f_11781a36 },
  { 0x11781a69u, f_11781a69 },
  { 0x11781a96u, f_11781a96 },
  { 0x11781aa7u, f_11781aa7 },
  { 0x11781ab6u, f_11781ab6 },
  { 0x11781b5bu, f_11781b5b },
  { 0x11781b64u, f_11781b64 },
  { 0x11781b6du, f_11781b6d },
  { 0x11781b87u, f_11781b87 },
  { 0x11781bdbu, f_11781bdb },
  { 0x11781bf9u, f_11781bf9 },
  { 0x11781c0cu, f_11781c0c },
  { 0x11781cacu, f_11781cac },
  { 0x11781e68u, f_11781e68 },
  { 0x11781ebcu, f_11781ebc },
  { 0x11781f75u, f_11781f75 },
  { 0x1178200eu, f_1178200e },
  { 0x117821c2u, f_117821c2 },
  { 0x117822f4u, f_117822f4 },
  { 0x11782330u, f_11782330 },
  { 0x117823a5u, f_117823a5 },
  { 0x117823deu, f_117823de },
  { 0x11782531u, f_11782531 },
  { 0x1178255au, f_1178255a },
  { 0x117825c6u, f_117825c6 },
  { 0x11782627u, f_11782627 },
  { 0x1178263cu, f_1178263c },
  { 0x117826c9u, f_117826c9 },
  { 0x11782711u, f_11782711 },
  { 0x11782723u, f_11782723 },
  { 0x1178274fu, f_1178274f },
  { 0x117827a0u, f_117827a0 },
  { 0x117827b0u, f_117827b0 },
  { 0x11782890u, f_11782890 },
  { 0x1178290bu, f_1178290b },
  { 0x11782ab8u, f_11782ab8 },
  { 0x11782b02u, f_11782b02 },
  { 0x11782b35u, f_11782b35 },
  { 0x11782b5eu, f_11782b5e },
  { 0x11782ce3u, f_11782ce3 },
  { 0x11782d00u, f_11782d00 },
  { 0x11783035u, f_11783035 },
  { 0x11783073u, f_11783073 },
  { 0x1178309eu, f_1178309e },
  { 0x117833c9u, f_117833c9 },
  { 0x117836d2u, f_117836d2 },
  { 0x11783783u, f_11783783 },
  { 0x1178387eu, f_1178387e },
  { 0x11783910u, f_11783910 },
  { 0x11783a10u, f_11783a10 },
  { 0x11783a68u, f_11783a68 },
  { 0x11783a83u, f_11783a83 },
  { 0x11783ca7u, f_11783ca7 },
  { 0x11783cd2u, f_11783cd2 },
  { 0x11783e20u, f_11783e20 },
  { 0x11784158u, f_11784158 },
  { 0x1178419au, f_1178419a },
  { 0x1178422eu, f_1178422e },
  { 0x1178430du, f_1178430d },
  { 0x11784330u, f_11784330 },
  { 0x11784360u, f_11784360 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x11781000u
#define FSIZE 0x00003376u
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
