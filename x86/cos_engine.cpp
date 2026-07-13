/* cos_engine.cpp — integrate the x86 plugin-DLL subsystem into the native engine.
 * Overrides LoadLibrary/GetProcAddress for AI/mission DLLs: load the recompiled
 * guest image, run DllMain (resolves game_api -> engine), and hand back a native
 * trampoline the engine calls as void(*)() for InitAI/ProcessAI/OnInit/ProcessScenary. */
#include "cos_x86.h"
#include "cos_modules.h"
extern "C" {
#include "cpu.h"
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern "C" void cos_register_gameapi(void);

/* ---- loaded modules (per LoadLibrary handle) ---- */
#define MAXLOADED 96
static struct { int used; const CosModDef* def; CosModule mod; } g_loaded[MAXLOADED];

/* ---- trampoline pool: each bound to a guest export VA ---- */
static uint32_t g_tramp_va[96];
static int g_ntramp = 0;
#define T(n) static void tr##n(void){ cos_call(g_tramp_va[n],0,0); }
T(0)T(1)T(2)T(3)T(4)T(5)T(6)T(7)T(8)T(9)T(10)T(11)T(12)T(13)T(14)T(15)T(16)T(17)T(18)T(19)T(20)T(21)T(22)T(23)T(24)T(25)T(26)T(27)T(28)T(29)T(30)T(31)T(32)T(33)T(34)T(35)T(36)T(37)T(38)T(39)T(40)T(41)T(42)T(43)T(44)T(45)T(46)T(47)T(48)T(49)T(50)T(51)T(52)T(53)T(54)T(55)T(56)T(57)T(58)T(59)T(60)T(61)T(62)T(63)T(64)T(65)T(66)T(67)T(68)T(69)T(70)T(71)T(72)T(73)T(74)T(75)T(76)T(77)T(78)T(79)T(80)T(81)T(82)T(83)T(84)T(85)T(86)T(87)T(88)T(89)T(90)T(91)T(92)T(93)T(94)T(95)
#undef T
static void(*const g_tramps[96])(void) = {tr0,tr1,tr2,tr3,tr4,tr5,tr6,tr7,tr8,tr9,tr10,tr11,tr12,tr13,tr14,tr15,tr16,tr17,tr18,tr19,tr20,tr21,tr22,tr23,tr24,tr25,tr26,tr27,tr28,tr29,tr30,tr31,tr32,tr33,tr34,tr35,tr36,tr37,tr38,tr39,tr40,tr41,tr42,tr43,tr44,tr45,tr46,tr47,tr48,tr49,tr50,tr51,tr52,tr53,tr54,tr55,tr56,tr57,tr58,tr59,tr60,tr61,tr62,tr63,tr64,tr65,tr66,tr67,tr68,tr69,tr70,tr71,tr72,tr73,tr74,tr75,tr76,tr77,tr78,tr79,tr80,tr81,tr82,tr83,tr84,tr85,tr86,tr87,tr88,tr89,tr90,tr91,tr92,tr93,tr94,tr95};

static const char* base_c(const char* p){
    const char* b=p; for(const char* q=p;*q;q++){ if(*q=='/'||*q=='\\') b=q+1; } return b;
}
/* basename without extension: "ai\England.dll" / "England.so" / "England" -> "England" */
static void stem_c(const char* p, char* out, size_t n){
    const char* b=base_c(p); size_t i=0;
    for(; b[i] && b[i]!='.' && i+1<n; i++) out[i]=b[i];
    out[i]=0;
}
/* canonicalize a path to UPPER + forward-slash (matches the unpacked data tree / manifest). */
static void canon_path(const char* p, char* out, size_t n){
    size_t i=0; for(; p[i] && i+1<n; i++){ char c=p[i]; if(c=='\\')c='/'; if(c>='a'&&c<='z')c=(char)(c-32); out[i]=c; }
    out[i]=0;
}
/* Match a loaded module by the requested name. The 220 mission DLLs are ALL basenamed
 * "Mission.dll", so a bare-stem match is ambiguous; the engine passes the full game-relative
 * path (e.g. "missions\Camp\M1\Mission.dll"), so we first match the module whose stored dll path
 * ENDS WITH the requested path at a component boundary (unique per mission, and still matches AI
 * by "ai\England.dll"/"England.dll"). Fallback: bare stem (handles Ai.dat's extensionless names). */
static const CosModDef* find_module(const char* name){
    char cn[512]; canon_path(name, cn, sizeof cn); size_t ln=strlen(cn);
    for(int i=0;i<COS_NMODULES;i++){
        char cd[512]; canon_path(COS_MODULES[i].dll,cd,sizeof cd); size_t ld=strlen(cd);
        if(ld>=ln && !strcmp(cd+ld-ln,cn) && (ld==ln || cd[ld-ln-1]=='/')) return &COS_MODULES[i];
    }
    // A request WITH a directory component must match by exact path only: 200+ mission modules all
    // share the basename "Mission.dll", so a stem fallback would silently load the FIRST one
    // (the wrong script for the map). Bare names (AI: "England", "England.dll") still stem-match.
    for(const char* q=cn; *q; q++) if(*q=='/'){
        fprintf(stderr,"[cos_engine] find_module: no exact-path match for '%s'\n", name);
        return 0;
    }
    char want[128]; stem_c(name, want, sizeof want);
    for(int i=0;i<COS_NMODULES;i++){ char have[128]; stem_c(COS_MODULES[i].dll,have,sizeof have); if(!strcasecmp(have,want)) return &COS_MODULES[i]; }
    return 0;
}
/* game-relative canonical path of a module's DLL, for the lazy-fetch backend. def->dll is the
 * absolute build-time path under the game root; strip everything up to the first game data dir. */
static void module_canon(const CosModDef* def, char* out, size_t n){
    char cd[512]; canon_path(def->dll, cd, sizeof cd);
    const char* rel=cd;
    const char* keys[]={"/MISSIONS/","/HISTORY_BATTL/","/HORIZON/","/USERMISSIONS/",0};
    for(int k=0;keys[k];k++){ const char* p=strstr(cd,keys[k]); if(p){ rel=p+1; break; } }
    size_t i=0; for(; rel[i] && i+1<n; i++) out[i]=rel[i]; out[i]=0;
}

static int g_inited=0;
extern "C" void cos_install_shim_dispatch(void);  /* cos_shims.c: wires interp.c g_shim_dispatch */
extern "C" int  cos_fetch_file(const char* canon); /* cos_data.js: fetch a data file into MEMFS */

extern "C" void cos_engine_init(void){
    if(g_inited) return;
    cos_mem_init();
    cos_register_gameapi();
    cos_install_shim_dispatch();   /* let the interpreter (mission DLLs) reach game_api/OS shims */
    g_inited=1;
}

extern "C" void* cos_LoadLibraryA(const char* name){
    cos_engine_init();
    const CosModDef* def=find_module(name);
    if(!def) return 0;                       /* not a recompiled plugin -> caller uses dlopen */
    int slot=-1; for(int i=0;i<MAXLOADED;i++){ if(!g_loaded[i].used){slot=i;break;} }
    if(slot<0){ fprintf(stderr,"[cos_engine] loaded table full\n"); return 0; }
    /* AI plugins are preloaded at /ai/<basename>. Mission DLLs are NOT preloaded (220 of them) —
     * fetch the PE on demand via the lazy-fetch backend, then open it from /game/<canon>. */
    char path[512]; snprintf(path,sizeof path,"/ai/%s", base_c(def->dll));
    FILE* f=fopen(path,"rb");
    if(!f){
        char canon[512]; module_canon(def, canon, sizeof canon);
        if(cos_fetch_file(canon)==0){ snprintf(path,sizeof path,"/game/%s",canon); f=fopen(path,"rb"); }
    }
    if(!f){ fprintf(stderr,"[cos_engine] cannot open %s\n",path); return 0; }
    fseek(f,0,SEEK_END); long sz=ftell(f); fseek(f,0,SEEK_SET);
    unsigned char* d=(unsigned char*)malloc(sz); fread(d,1,sz,f); fclose(f);
    if(cos_pe_load(d,(size_t)sz,def->base,&g_loaded[slot].mod)){ free(d); return 0; }
    free(d);
    g_loaded[slot].used=1; g_loaded[slot].def=def;
    /* DLL_PROCESS_ATTACH. For MISSION modules (M_*) call the REAL PE entry point
     * (DllMainCRTStartup: CRT init + the true DllMain) — the def->dllmain field was picked by a
     * heuristic (cos_gen_dispatch.py: "function with the most global writes") which for several
     * missions (Single3, Single46, ...) selected the SCRIPT-LOGIC body instead. Executing that on
     * a half-loaded world ran one rogue pass of the mission script inside LoadLibrary: garbage
     * game_api calls, calls through NULL globals, and worst — ShowVictory()/LooseGame()/CmdEndGame
     * latching victory state so the NEXT mission ended instantly with zero ticks.
     * AI_* keep def->dllmain: theirs is verified (England bridge test). */
    {
        uint32_t dm = (strncmp(def->name, "M_", 2) == 0) ? g_loaded[slot].mod.entry : def->dllmain;
        if(dm){ uint32_t a[3]={def->base,1u,0u}; cos_call(dm,3,a); }
    }
    fprintf(stderr,"[cos_engine] loaded %s @ %#x (handle %d)\n",base_c(def->dll),def->base,slot+1);
    return (void*)(long)(slot+1);
}

extern "C" void* cos_GetProcAddress(void* handle, const char* proc){
    int slot=(int)(long)handle-1;
    if(slot<0||slot>=MAXLOADED||!g_loaded[slot].used) return 0;
    uint32_t va=cos_export_va(&g_loaded[slot].mod,proc);
    if(!va){ fprintf(stderr,"[cos_engine] no export %s\n",proc); return 0; }
    /* REUSE a trampoline already bound to this VA — missions are loaded/reloaded all session long
     * (2 exports each) and the fixed pool of 96 would run dry after ~46 mission starts, after
     * which every GetProcAddress returned NULL (mission scripts silently disabled). */
    for(int i=0;i<g_ntramp;i++) if(g_tramp_va[i]==va) return (void*)g_tramps[i];
    if(g_ntramp>=96){ fprintf(stderr,"[cos_engine] trampoline pool full\n"); return 0; }
    int t=g_ntramp++; g_tramp_va[t]=va;
    return (void*)g_tramps[t];
}

extern "C" uint32_t cos_guest_module_base_by_name(const char* name){
    if(!name || !*name) return 0;
    const CosModDef* def=find_module(name);
    if(!def) return 0;
    for(int i=0;i<MAXLOADED;i++){
        if(g_loaded[i].used && g_loaded[i].def==def) return g_loaded[i].mod.base;
    }
    return 0;
}

extern "C" uint32_t cos_guest_export_by_handle(uint32_t hmodule, const char* proc){
    if(!hmodule || !proc || !*proc) return 0;
    for(int i=0;i<MAXLOADED;i++){
        if(!g_loaded[i].used) continue;
        if(hmodule==g_loaded[i].mod.base || hmodule==g_loaded[i].def->base || hmodule==(uint32_t)(i+1)){
            return cos_export_va(&g_loaded[i].mod, proc);
        }
    }
    return 0;
}

extern "C" uint32_t cos_guest_export_by_name(const char* proc){
    if(!proc || !*proc) return 0;
    uint32_t found = 0;
    for(int i=0;i<MAXLOADED;i++){
        if(!g_loaded[i].used) continue;
        uint32_t va = cos_export_va(&g_loaded[i].mod, proc);
        if(!va) continue;
        if(found && found != va) return 0;
        found = va;
    }
    return found;
}

extern "C" int cos_is_plugin(const char* name){ return find_module(name)!=0; }
