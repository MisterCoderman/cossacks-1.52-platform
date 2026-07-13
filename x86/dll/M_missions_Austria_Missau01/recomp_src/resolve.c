#include "recomp.h"

static const struct { uint32_t va; x86fn fn; } g_funcs[] = {
  { 0x102d1000u, f_102d1000 },
  { 0x102d1200u, f_102d1200 },
  { 0x102d1c70u, f_102d1c70 },
  { 0x102d1c90u, f_102d1c90 },
  { 0x102d1d69u, f_102d1d69 },
  { 0x102d1e06u, f_102d1e06 },
  { 0x102d1e39u, f_102d1e39 },
  { 0x102d1e66u, f_102d1e66 },
  { 0x102d1e77u, f_102d1e77 },
  { 0x102d1e86u, f_102d1e86 },
  { 0x102d1f2bu, f_102d1f2b },
  { 0x102d1f34u, f_102d1f34 },
  { 0x102d1f3du, f_102d1f3d },
  { 0x102d1f57u, f_102d1f57 },
  { 0x102d1fabu, f_102d1fab },
  { 0x102d1fc9u, f_102d1fc9 },
  { 0x102d1fdcu, f_102d1fdc },
  { 0x102d207cu, f_102d207c },
  { 0x102d2238u, f_102d2238 },
  { 0x102d228cu, f_102d228c },
  { 0x102d2345u, f_102d2345 },
  { 0x102d23deu, f_102d23de },
  { 0x102d2592u, f_102d2592 },
  { 0x102d26c4u, f_102d26c4 },
  { 0x102d2700u, f_102d2700 },
  { 0x102d2775u, f_102d2775 },
  { 0x102d27aeu, f_102d27ae },
  { 0x102d2901u, f_102d2901 },
  { 0x102d292au, f_102d292a },
  { 0x102d2996u, f_102d2996 },
  { 0x102d29f7u, f_102d29f7 },
  { 0x102d2a0cu, f_102d2a0c },
  { 0x102d2a99u, f_102d2a99 },
  { 0x102d2ae1u, f_102d2ae1 },
  { 0x102d2af3u, f_102d2af3 },
  { 0x102d2b1fu, f_102d2b1f },
  { 0x102d2b70u, f_102d2b70 },
  { 0x102d2b80u, f_102d2b80 },
  { 0x102d2c60u, f_102d2c60 },
  { 0x102d2cdbu, f_102d2cdb },
  { 0x102d2e88u, f_102d2e88 },
  { 0x102d2ed2u, f_102d2ed2 },
  { 0x102d2f05u, f_102d2f05 },
  { 0x102d2f2eu, f_102d2f2e },
  { 0x102d30b3u, f_102d30b3 },
  { 0x102d30d0u, f_102d30d0 },
  { 0x102d3405u, f_102d3405 },
  { 0x102d3443u, f_102d3443 },
  { 0x102d346eu, f_102d346e },
  { 0x102d3799u, f_102d3799 },
  { 0x102d3aa2u, f_102d3aa2 },
  { 0x102d3b53u, f_102d3b53 },
  { 0x102d3c4eu, f_102d3c4e },
  { 0x102d3ce0u, f_102d3ce0 },
  { 0x102d3de0u, f_102d3de0 },
  { 0x102d3e38u, f_102d3e38 },
  { 0x102d3e53u, f_102d3e53 },
  { 0x102d4077u, f_102d4077 },
  { 0x102d40a2u, f_102d40a2 },
  { 0x102d41f0u, f_102d41f0 },
  { 0x102d4528u, f_102d4528 },
  { 0x102d456au, f_102d456a },
  { 0x102d45feu, f_102d45fe },
  { 0x102d46ddu, f_102d46dd },
  { 0x102d4700u, f_102d4700 },
  { 0x102d4730u, f_102d4730 },
};
#define NFUNCS ((int)(sizeof g_funcs / sizeof g_funcs[0]))
#define FBASE 0x102d1000u
#define FSIZE 0x00003746u
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
