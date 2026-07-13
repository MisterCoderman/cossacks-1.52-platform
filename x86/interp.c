/* interp.c — the LEAN x86 INTERPRETER for SPAG.exe (see x86/INTERP.md).
 *
 * APPROACH (memory-safe, faithful — NOT codegen):
 *   decode.py pre-decoded EVERY .text instruction into the compact Op table in
 *   ops.c (sorted by va, with a va->index binary-search map op_at()). This file
 *   is a small flat loop on the guest EIP: fetch the Op at EIP, execute the
 *   SAME semantics transpile.py emits as C — but dispatched at runtime over the
 *   decoded operand descriptors instead of compiled — then advance EIP to
 *   nextva / a branch target / (call) push+target / (ret) pop. Indirect call/jmp
 *   and switch tables need NO special case: EIP = computed target and op_at()
 *   finds it. An EIP that lands on an IAT import thunk dispatches the native shim.
 *
 * REUSE (verbatim, NOT reimplemented): cpu.h gives the register file, flat guest
 * memory (r/w8/16/32, rf/wf), the flag helpers (fl_add/fl_sub/fl_logic/sh_*),
 * and the x87 model (C.st[]/fpu_*) — all proven bit-for-bit vs Unicorn. Every
 * operand expression below is the runtime twin of transpile.py's class O /
 * memaddr; every class body is the runtime twin of transpile.emit_ins.
 *
 * The C is intentionally SMALL (one loop + a handful of operand helpers); the
 * heavy data lives in ops.c, which compiles cheaply. Build via memguard.ps1.
 */
#include "cpu.h"
#include "ops.h"
#include <stdint.h>
#include <stdio.h>   /* diagnostics only (fprintf on the abort path) */
#include <stdlib.h>  /* getenv for env-gated diagnostics */
#include <string.h>  /* strstr for env-gated name-intern diagnostics */

/* ===========================================================================
 * The guest instruction pointer. Unlike the static recompiler (one C function
 * per guest function, EIP implicit in the C call stack), the interpreter keeps
 * EIP explicit and advances it every step. SENTINEL is the fake return address
 * pushed before entering a function: when a `ret` pops it into EIP the run ends
 * (mirrors difftest.py's emu_start(va, SENT)).
 * ===========================================================================*/
uint32_t EIP;
#define SENTINEL 0xDEADBEEFu
/* Distinct halt marker for the hybrid recompiler bridge (x86_trampoline): a
 * trampolined function returns to THIS address, which x86_run stops on WITHOUT
 * confusing it for the guest ExitProcess sentinel (0xDEADBEEF). */
#define TRAMP_SENT 0xDEAD0FF1u
#include <setjmp.h>
extern jmp_buf g_recomp_exit;      /* shims.c (recompiler unwind target) */
#ifdef RECOMP
extern x86fn x86_compiled(uint32_t addr);   /* resolve.c: native body or 0 */
#endif

/* Optional IAT-thunk dispatch hook. The real build (shims.c) sets this to a
 * function that, given the thunk VA, runs the matching native DLL shim (reading
 * args off the guest stack, setting EAX, doing the stdcall pop) and returns the
 * guest return address to resume at. For the headless difftest harness it stays
 * NULL — leaf functions under test never reach an import thunk. */
uint32_t (*g_shim_dispatch)(uint32_t thunk_va) = 0;

/* boot trace: when >0, log each step's EIP/class/regs and decrement (diag only) */
int g_trace_n = 0;
uint32_t g_tlo = 0, g_thi = 0;   /* range trace: log every instr with EIP in [lo,hi) */
int g_movie_armed = 0;           /* set by sh_BinkOpen on the real intro movie */
int g_movie_arm_gate = 0;        /* SM2_MOVIEARM: gate range trace on g_movie_armed */
uint32_t *g_profh = 0;           /* SM2_PROF: per-64-byte self-time histogram (EIP>>6) */
int g_diag_any = 0;              /* OR of all per-instruction diagnostics; 0 == hot path */
#define SM2_PROF_N (0x10e40000u >> 6)
void sm2_prof_dump(void){
    if (!g_profh) return;
    /* top 40 hottest 64-byte code windows, with module+offset annotation */
    enum { TOP = 40 }; uint32_t bi[TOP]={0}; uint64_t bc[TOP]={0}; uint64_t tot=0;
    for (uint32_t i=0;i<SM2_PROF_N;i++){ uint32_t c=g_profh[i]; if(!c) continue; tot+=c;
        if (c > bc[TOP-1]){ int j=TOP-1; while(j>0 && bc[j-1]<c){ bc[j]=bc[j-1]; bi[j]=bi[j-1]; j--; } bc[j]=c; bi[j]=i; } }
    extern const char *sm2_modname(uint32_t);
    fprintf(stderr,"[PROF] total sampled instrs=%llu — top %d hot code windows:\n",(unsigned long long)tot,TOP);
    for (int i=0;i<TOP && bc[i];i++){ uint32_t va=bi[i]<<6;
        fprintf(stderr,"[PROF] %5.1f%%  %10llu  %08x  %s\n",
                100.0*(double)bc[i]/(double)(tot?tot:1),(unsigned long long)bc[i],va,sm2_modname(va)); }
}

/* ---- call ring buffer: last N CALLs (caller,target,esp). Dumped by shims on
 * abort/ExitProcess to reconstruct the control-flow into a fatal error without a
 * full trace. Cheap: 3 stores per CALL. */
#define CALLRING 16384
uint32_t g_cr_caller[CALLRING], g_cr_tgt[CALLRING], g_cr_esp[CALLRING];
uint32_t g_cr_pos = 0;
static inline void callring_push(uint32_t caller, uint32_t tgt, uint32_t esp){
    uint32_t i = g_cr_pos++ & (CALLRING-1);
    g_cr_caller[i]=caller; g_cr_tgt[i]=tgt; g_cr_esp[i]=esp;
}
extern const char *sm2_modname(uint32_t va);   /* shims.c: "engine.dll+0x..." */
/* UE2 game code (webhead.exe / core / engine / window), i.e. NOT the CRT DLLs
 * (msvcr71 0x108a0000+, msvcp71 0x10900000+) and NOT the shim range. */
static int is_gamecode(uint32_t va){
    return (va >= 0x00400000u && va < 0x00500000u) ||   /* webhead.exe */
           (va >= 0x10000000u && va < 0x108a0000u);       /* core/engine/window */
}
/* n = how many entries back to scan; filter!=0 -> only frames touching game code. */
void sm2_callring_dump2(int n, int filter){
    if (n > CALLRING) n = CALLRING;
    fprintf(stderr,"[callring] last %d CALLs%s (oldest first):\n", n, filter?" (game-code only)":"");
    for (int k = n; k >= 1; k--){
        uint32_t i = (g_cr_pos - (uint32_t)k) & (CALLRING-1);
        if (!g_cr_caller[i] && !g_cr_tgt[i]) continue;
        if (filter && !is_gamecode(g_cr_caller[i]) && !is_gamecode(g_cr_tgt[i])) continue;
        fprintf(stderr,"   %08x -> %08x  esp=%08x  [%s -> %s]\n",
                g_cr_caller[i], g_cr_tgt[i], g_cr_esp[i],
                sm2_modname(g_cr_caller[i]), sm2_modname(g_cr_tgt[i]));
    }
}
void sm2_callring_dump(int n){ sm2_callring_dump2(n, 1); }

/* Scan all of guest memory for a wide (UTF-16LE) needle, printing up to `maxhits`
 * addresses + a little surrounding context. Used to locate where a config value
 * ("Index.whr" correct vs "erDevice" corrupt) lives and whether it got clobbered. */
void sm2_findw(const char *ascii_needle, int maxhits){
    int nlen = (int)strlen(ascii_needle);
    fprintf(stderr,"[findw] scanning for wide \"%s\":\n", ascii_needle);
    int hits = 0;
    for (uint32_t a = 0x1000; a + (uint32_t)nlen*2 < G_MEM_SIZE && hits < maxhits; a += 2){
        int ok = 1;
        for (int i=0;i<nlen;i++){ if (r16(a+i*2) != (uint16_t)(uint8_t)ascii_needle[i]){ ok=0; break; } }
        if (!ok) continue;
        /* dump ~24 wide chars around the hit */
        char ctx[64]; int k=0; for (int i=0;i<28 && k<62;i++){ uint16_t c=r16(a+i*2); ctx[k++]=(c>=0x20&&c<0x7f)?(char)c:'.'; } ctx[k]=0;
        const char *reg = (a>=0x20000000u)?"heap":(a>=0x10000000u)?"dll-data":(a>=0x400000u)?"exe-data":"low";
        fprintf(stderr,"   @%08x [%s] \"%s\"\n", a, reg, ctx);
        hits++;
    }
    if (!hits) fprintf(stderr,"   (not found)\n");
}

/* ASCII counterpart of sm2_findw: locates an ANSI needle (e.g. an FName entry's
 * name) so we can tell whether a class name was interned/registered vs only
 * present as a static template string in the exe image. */
void sm2_finda(const char *needle, int maxhits){
    int nlen=(int)strlen(needle);
    fprintf(stderr,"[finda] scanning for ansi \"%s\":\n", needle);
    int hits=0;
    for (uint32_t a=0x1000; a+(uint32_t)nlen<G_MEM_SIZE && hits<maxhits; a++){
        int ok=1; for(int i=0;i<nlen;i++){ if(r8(a+i)!=(uint8_t)needle[i]){ ok=0; break; } }
        if(!ok) continue;
        /* require a NUL soon after (real interned name), skip mid-string matches */
        uint8_t after=r8(a+nlen); if(after!=0 && !(after>='A'&&after<='Z')) { /* allow */ }
        char ctx[40]; int k=0; for(int i=-2;i<24 && k<38;i++){ uint8_t c=r8(a+i); ctx[k++]=(c>=0x20&&c<0x7f)?(char)c:'.'; } ctx[k]=0;
        const char *reg=(a>=0x20000000u)?"heap":(a>=0x10000000u)?"dll-data":(a>=0x400000u)?"exe-data":"low";
        fprintf(stderr,"   @%08x [%s] afterNUL=%d \"%s\"\n", a, reg, after==0, ctx);
        hits++;
    }
    if(!hits) fprintf(stderr,"   (not found)\n");
}

/* Walk the guest stack from `esp` upward, printing any dword that is a plausible
 * return address into a guest module's code (0x400000..SM2_DLL_END). Reconstructs
 * the live call chain at a throw / trap without frame-pointer info. */
void sm2_stackwalk(uint32_t esp, int maxframes){
    fprintf(stderr,"[stackwalk] esp=%08x (return addrs into guest code):\n", esp);
    int found = 0;
    for (uint32_t i = 0; i < 2048 && found < maxframes; i++){
        uint32_t v = r32(esp + i*4);
        int guest = (v >= 0x00400000u && v < 0x00500000u) || (v >= 0x10000000u && v < 0x10e40000u);
        if (!guest) continue;
        /* a return address points just after a CALL: byte at v-5 == 0xE8 (rel call)
         * or v-2/-3 for call r/m — cheap heuristic to cut false positives. */
        uint8_t b5 = r8(v-5), b2 = r8(v-2), b3 = r8(v-3);
        int looks_ret = (b5==0xE8) || (b2==0xFF) || (b3==0xFF) || (r8(v-6)==0xFF) || (r8(v-7)==0xFF);
        if (!looks_ret) continue;
        fprintf(stderr,"   [esp+%04x] %08x  [%s]\n", i*4, v, sm2_modname(v));
        found++;
    }
}

/* ===========================================================================
 * Register file. The cpu.h Cpu struct lays the 8 GPRs out as named Reg unions
 * (a,c,d,b,sp,bp,si,di). decode.py assigns slot ids 0..7 in the x86 encoding
 * order EAX,ECX,EDX,EBX,ESP,EBP,ESI,EDI (GPR[] in decode.py); we point a table
 * at the matching Reg unions so a slot id indexes straight to its storage.
 * 8/16/32-bit access uses the union's .b.l / .w / .d. High-byte regs (ids
 * 8..11 = AH,CH,DH,BH) reuse the same Reg unions' .b.h. Segment regs (ids
 * 16..21) map to the seg_* fields. This is the exact image of transpile.py's
 * R32/R16/R8/SEG maps, reconstructed from (slot,size).
 * ===========================================================================*/
static Reg *const GPRP[8] = { &C.a, &C.c, &C.d, &C.b, &C.sp, &C.bp, &C.si, &C.di };
/* high-byte regs id 8..11 -> the Reg whose .b.h is AH/CH/DH/BH */
static Reg *const HIP[4]  = { &C.a, &C.c, &C.d, &C.b };
/* segment regs id 16..21 -> ES,CS,SS,DS,FS,GS */
static uint16_t *const SEGP[6] = {
    &C.seg_es, &C.seg_cs, &C.seg_ss, &C.seg_ds, &C.seg_fs, &C.seg_gs
};

/* read a register operand value, zero-extended to 32 bits, by (slot,size). */
static inline uint32_t reg_rd(uint8_t slot, uint8_t size) {
    if (slot < 8) {
        Reg *r = GPRP[slot];
        return (size == 4) ? r->d : (size == 2) ? r->w : r->b.l;
    }
    if (slot >= 8 && slot <= 11) return HIP[slot - 8]->b.h;   /* AH/CH/DH/BH */
    if (slot >= 16 && slot <= 21) return *SEGP[slot - 16];    /* segment (16-bit) */
    return 0;   /* REG_NONE / unreachable */
}

/* write a register operand, preserving the unaffected high bytes for 8/16-bit
 * writes exactly as the Reg union does (mov al,x leaves AH/upper16 intact). */
static inline void reg_wr(uint8_t slot, uint8_t size, uint32_t v) {
    if (slot < 8) {
        Reg *r = GPRP[slot];
        if (size == 4)      r->d   = v;
        else if (size == 2) r->w   = (uint16_t)v;
        else                r->b.l = (uint8_t)v;
        return;
    }
    if (slot >= 8 && slot <= 11) { HIP[slot - 8]->b.h = (uint8_t)v; return; }
    if (slot >= 16 && slot <= 21) { *SEGP[slot - 16] = (uint16_t)v; return; }
}

/* ===========================================================================
 * Effective address — the runtime twin of transpile.memaddr:
 *     base + index*scale + disp   (all 32-bit, wraps; r/w* mask into g_mem)
 * base/idx == REG_NONE (255) contribute nothing; a slot id is always a full
 * 32-bit GPR here (capstone mem base/index are 32-bit regs in this binary).
 * ===========================================================================*/
static inline uint32_t ea(const Operand *o) {
    uint32_t a = (uint32_t)o->disp;
    if (o->reg != REG_NONE) a += GPRP[o->reg]->d;
    if (o->idx != REG_NONE) a += GPRP[o->idx]->d * (uint32_t)o->scale;
    return a;
}

/* ===========================================================================
 * Generic operand read — value zero-extended to 32 bits (transpile O.rd):
 *   REG -> register file ; IMM -> imm ; MEM -> r8/r16/r32 at operand size.
 * ===========================================================================*/
static inline uint32_t op_rd(const Operand *o) {
    switch (o->kind) {
        case OPK_REG: return reg_rd(o->reg, o->size);
        case OPK_IMM: return o->imm;
        case OPK_MEM: {
            uint32_t a = ea(o);
            return (o->size == 4) ? r32(a) : (o->size == 2) ? r16(a) : r8(a);
        }
        default: return 0;
    }
}

/* Generic operand write (transpile O.wr): REG via register file, MEM via
 * w8/w16/w32 at the operand size. Writing an IMM never happens (no dest imm). */
static inline void op_wr(const Operand *o, uint32_t v) {
    switch (o->kind) {
        case OPK_REG: reg_wr(o->reg, o->size, v); return;
        case OPK_MEM: {
            uint32_t a = ea(o);
            if (o->size == 4)      w32(a, v);
            else if (o->size == 2) w16(a, (uint16_t)v);
            else                   w8(a, (uint8_t)v);
            return;
        }
        default: return;   /* imm/none: no-op */
    }
}

/* ===========================================================================
 * MMX (packed integer). Registers C.mm[0..7]; a 64-bit lane split into 8 bytes /
 * 4 words / 2 dwords. Op.flags carries the 0F opcode, Op.size the imm-shift sub-op.
 * Src operand can be an mm register (OPK_MM) or a 64-bit memory operand.
 * ===========================================================================*/
static inline uint64_t mmx_rd64(const Operand *o){
    if (o->kind==OPK_MM) return C.mm[o->reg];
    uint32_t a=ea(o); return (uint64_t)r32(a) | ((uint64_t)r32(a+4)<<32);
}
static inline void mmx_wr64(const Operand *o, uint64_t v){
    if (o->kind==OPK_MM){ C.mm[o->reg]=v; return; }
    uint32_t a=ea(o); w32(a,(uint32_t)v); w32(a+4,(uint32_t)(v>>32));
}
static inline uint32_t mmx_rd32(const Operand *o){
    if (o->kind==OPK_MM) return (uint32_t)C.mm[o->reg];
    if (o->kind==OPK_REG) return reg_rd(o->reg,4);
    return r32(ea(o));
}
static inline void mmx_wr32(const Operand *o, uint32_t v){   /* movd r/m32<-mm */
    if (o->kind==OPK_MM){ C.mm[o->reg]=(uint64_t)v; return; }
    if (o->kind==OPK_REG){ reg_wr(o->reg,4,v); return; }
    w32(ea(o),v);
}
static inline int8_t   sat_sb(int32_t x){ return x<-128?-128:x>127?127:(int8_t)x; }
static inline uint8_t  sat_ub(int32_t x){ return x<0?0:x>255?255:(uint8_t)x; }
static inline int16_t  sat_sw(int32_t x){ return x<-32768?-32768:x>32767?32767:(int16_t)x; }
static inline uint16_t sat_uw(int32_t x){ return x<0?0:x>65535?65535:(uint16_t)x; }
#define GB(v,i) ((uint8_t)((v)>>((i)*8)))
#define GW(v,i) ((uint16_t)((v)>>((i)*16)))
#define GD(v,i) ((uint32_t)((v)>>((i)*32)))
static uint64_t mmx_shift(uint64_t v, uint8_t opc, int dir, uint32_t cnt){
    /* dir: 2=logical-right 4=arith-right 6=left ; element size from opc(71/D1..=w,72/D2..=d,73/D3..=q) */
    int esz = (opc==0x71||opc==0xD1||opc==0xE1||opc==0xF1)?16 :
              (opc==0x72||opc==0xD2||opc==0xE2||opc==0xF2)?32 : 64;
    uint64_t r=0;
    if (esz==16){ for(int i=0;i<4;i++){ uint16_t e=GW(v,i); uint32_t x; if(dir==6)x=cnt>=16?0:(uint32_t)e<<cnt; else if(dir==2)x=cnt>=16?0:e>>cnt; else {int16_t s=e; x=(uint16_t)(cnt>=16?(s<0?0xFFFF:0):(s>>cnt));} r|=(uint64_t)(uint16_t)x<<(i*16);} }
    else if (esz==32){ for(int i=0;i<2;i++){ uint32_t e=GD(v,i); uint32_t x; if(dir==6)x=cnt>=32?0:e<<cnt; else if(dir==2)x=cnt>=32?0:e>>cnt; else {int32_t s=e; x=(uint32_t)(cnt>=32?(s<0?0xFFFFFFFF:0):(s>>cnt));} r|=(uint64_t)x<<(i*32);} }
    else { if(dir==6)r=cnt>=64?0:v<<cnt; else if(dir==2)r=cnt>=64?0:v>>cnt; else r=v; }   /* no psraq */
    return r;
}
static void mmx_exec(const Op *o){
    uint8_t opc = o->flags;
    switch (opc){
    case 0x6F: case 0x7F: case 0xE7: mmx_wr64(&o->opnd[0], mmx_rd64(&o->opnd[1])); return;  /* movq / movntq store */
    case 0x6E: mmx_wr64(&o->opnd[0], (uint64_t)mmx_rd32(&o->opnd[1])); return;        /* movd mm,r/m32 (zero-ext) */
    case 0x7E: mmx_wr32(&o->opnd[0], (uint32_t)mmx_rd64(&o->opnd[1])); return;        /* movd r/m32,mm */
    case 0x71: case 0x72: case 0x73:
        mmx_wr64(&o->opnd[0], mmx_shift(mmx_rd64(&o->opnd[0]), opc, o->size, o->opnd[1].imm)); return;
    }
    uint64_t dv = C.mm[o->opnd[0].reg], sv = mmx_rd64(&o->opnd[1]), r=0;
    switch (opc){
    case 0xDB: r = dv & sv; break;                    /* pand  */
    case 0xDF: r = (~dv) & sv; break;                 /* pandn */
    case 0xEB: r = dv | sv; break;                    /* por   */
    case 0xEF: r = dv ^ sv; break;                    /* pxor  */
    case 0xFC: for(int i=0;i<8;i++) r|=(uint64_t)(uint8_t)(GB(dv,i)+GB(sv,i))<<(i*8); break;   /* paddb */
    case 0xFD: for(int i=0;i<4;i++) r|=(uint64_t)(uint16_t)(GW(dv,i)+GW(sv,i))<<(i*16); break; /* paddw */
    case 0xFE: for(int i=0;i<2;i++) r|=(uint64_t)(uint32_t)(GD(dv,i)+GD(sv,i))<<(i*32); break; /* paddd */
    case 0xF8: for(int i=0;i<8;i++) r|=(uint64_t)(uint8_t)(GB(dv,i)-GB(sv,i))<<(i*8); break;   /* psubb */
    case 0xF9: for(int i=0;i<4;i++) r|=(uint64_t)(uint16_t)(GW(dv,i)-GW(sv,i))<<(i*16); break; /* psubw */
    case 0xFA: for(int i=0;i<2;i++) r|=(uint64_t)(uint32_t)(GD(dv,i)-GD(sv,i))<<(i*32); break; /* psubd */
    case 0xEC: for(int i=0;i<8;i++) r|=(uint64_t)(uint8_t)sat_sb((int8_t)GB(dv,i)+(int8_t)GB(sv,i))<<(i*8); break; /* paddsb */
    case 0xED: for(int i=0;i<4;i++) r|=(uint64_t)(uint16_t)sat_sw((int16_t)GW(dv,i)+(int16_t)GW(sv,i))<<(i*16); break; /* paddsw */
    case 0xE8: for(int i=0;i<8;i++) r|=(uint64_t)(uint8_t)sat_sb((int8_t)GB(dv,i)-(int8_t)GB(sv,i))<<(i*8); break; /* psubsb */
    case 0xE9: for(int i=0;i<4;i++) r|=(uint64_t)(uint16_t)sat_sw((int16_t)GW(dv,i)-(int16_t)GW(sv,i))<<(i*16); break; /* psubsw */
    case 0xDC: for(int i=0;i<8;i++) r|=(uint64_t)sat_ub(GB(dv,i)+GB(sv,i))<<(i*8); break;   /* paddusb */
    case 0xDD: for(int i=0;i<4;i++) r|=(uint64_t)sat_uw(GW(dv,i)+GW(sv,i))<<(i*16); break;  /* paddusw */
    case 0xD8: for(int i=0;i<8;i++) r|=(uint64_t)sat_ub((int32_t)GB(dv,i)-(int32_t)GB(sv,i))<<(i*8); break;  /* psubusb */
    case 0xD9: for(int i=0;i<4;i++) r|=(uint64_t)sat_uw((int32_t)GW(dv,i)-(int32_t)GW(sv,i))<<(i*16); break; /* psubusw */
    case 0x74: for(int i=0;i<8;i++) r|=(uint64_t)(GB(dv,i)==GB(sv,i)?0xFF:0)<<(i*8); break;  /* pcmpeqb */
    case 0x75: for(int i=0;i<4;i++) r|=(uint64_t)(GW(dv,i)==GW(sv,i)?0xFFFF:0)<<(i*16); break;/* pcmpeqw */
    case 0x76: for(int i=0;i<2;i++) r|=(uint64_t)(GD(dv,i)==GD(sv,i)?0xFFFFFFFFu:0)<<(i*32); break;/* pcmpeqd */
    case 0x64: for(int i=0;i<8;i++) r|=(uint64_t)((int8_t)GB(dv,i)>(int8_t)GB(sv,i)?0xFF:0)<<(i*8); break;  /* pcmpgtb */
    case 0x65: for(int i=0;i<4;i++) r|=(uint64_t)((int16_t)GW(dv,i)>(int16_t)GW(sv,i)?0xFFFF:0)<<(i*16); break;/* pcmpgtw */
    case 0x66: for(int i=0;i<2;i++) r|=(uint64_t)((int32_t)GD(dv,i)>(int32_t)GD(sv,i)?0xFFFFFFFFu:0)<<(i*32); break;/* pcmpgtd */
    case 0xD5: for(int i=0;i<4;i++) r|=(uint64_t)(uint16_t)((int16_t)GW(dv,i)*(int16_t)GW(sv,i))<<(i*16); break; /* pmullw */
    case 0xE5: for(int i=0;i<4;i++) r|=(uint64_t)(uint16_t)(((int16_t)GW(dv,i)*(int16_t)GW(sv,i))>>16)<<(i*16); break; /* pmulhw */
    case 0xE4: for(int i=0;i<4;i++) r|=(uint64_t)(uint16_t)(((uint32_t)GW(dv,i)*(uint32_t)GW(sv,i))>>16)<<(i*16); break; /* pmulhuw */
    case 0xF5: for(int i=0;i<2;i++){ int32_t lo=(int16_t)GW(dv,2*i)*(int16_t)GW(sv,2*i); int32_t hi=(int16_t)GW(dv,2*i+1)*(int16_t)GW(sv,2*i+1); r|=(uint64_t)(uint32_t)(lo+hi)<<(i*32);} break; /* pmaddwd */
    case 0xDA: for(int i=0;i<8;i++){ uint8_t a=GB(dv,i),b=GB(sv,i); r|=(uint64_t)(a<b?a:b)<<(i*8);} break;  /* pminub */
    case 0xDE: for(int i=0;i<8;i++){ uint8_t a=GB(dv,i),b=GB(sv,i); r|=(uint64_t)(a>b?a:b)<<(i*8);} break;  /* pmaxub */
    case 0xEA: for(int i=0;i<4;i++){ int16_t a=GW(dv,i),b=GW(sv,i); r|=(uint64_t)(uint16_t)(a<b?a:b)<<(i*16);} break; /* pminsw */
    case 0xEE: for(int i=0;i<4;i++){ int16_t a=GW(dv,i),b=GW(sv,i); r|=(uint64_t)(uint16_t)(a>b?a:b)<<(i*16);} break; /* pmaxsw */
    case 0xE0: for(int i=0;i<8;i++) r|=(uint64_t)(uint8_t)((GB(dv,i)+GB(sv,i)+1)>>1)<<(i*8); break;  /* pavgb */
    case 0xE3: for(int i=0;i<4;i++) r|=(uint64_t)(uint16_t)((GW(dv,i)+GW(sv,i)+1)>>1)<<(i*16); break;/* pavgw */
    case 0x60: for(int i=0;i<4;i++){ r|=(uint64_t)GB(dv,i)<<(i*16); r|=(uint64_t)GB(sv,i)<<(i*16+8);} break; /* punpcklbw */
    case 0x61: for(int i=0;i<2;i++){ r|=(uint64_t)GW(dv,i)<<(i*32); r|=(uint64_t)GW(sv,i)<<(i*32+16);} break;/* punpcklwd */
    case 0x62: r=(uint64_t)GD(dv,0) | ((uint64_t)GD(sv,0)<<32); break;                                       /* punpckldq */
    case 0x68: for(int i=0;i<4;i++){ r|=(uint64_t)GB(dv,i+4)<<(i*16); r|=(uint64_t)GB(sv,i+4)<<(i*16+8);} break; /* punpckhbw */
    case 0x69: for(int i=0;i<2;i++){ r|=(uint64_t)GW(dv,i+2)<<(i*32); r|=(uint64_t)GW(sv,i+2)<<(i*32+16);} break;/* punpckhwd */
    case 0x6A: r=(uint64_t)GD(dv,1) | ((uint64_t)GD(sv,1)<<32); break;                                       /* punpckhdq */
    case 0x63: for(int i=0;i<4;i++){ r|=(uint64_t)(uint8_t)sat_sb((int16_t)GW(dv,i))<<(i*8); r|=(uint64_t)(uint8_t)sat_sb((int16_t)GW(sv,i))<<(i*8+32);} break; /* packsswb */
    case 0x6B: for(int i=0;i<2;i++){ r|=(uint64_t)(uint16_t)sat_sw((int32_t)GD(dv,i))<<(i*16); r|=(uint64_t)(uint16_t)sat_sw((int32_t)GD(sv,i))<<(i*16+32);} break; /* packssdw */
    case 0x67: for(int i=0;i<4;i++){ r|=(uint64_t)sat_ub((int16_t)GW(dv,i))<<(i*8); r|=(uint64_t)sat_ub((int16_t)GW(sv,i))<<(i*8+32);} break; /* packuswb */
    case 0xD1: case 0xD2: case 0xD3: r=mmx_shift(dv,opc,2,(uint32_t)sv); break;   /* psrl w/d/q */
    case 0xE1: case 0xE2:            r=mmx_shift(dv,opc,4,(uint32_t)sv); break;   /* psra w/d   */
    case 0xF1: case 0xF2: case 0xF3: r=mmx_shift(dv,opc,6,(uint32_t)sv); break;   /* psll w/d/q */
    case 0xD4: r=dv+sv; break;                                                    /* paddq */
    case 0xFB: r=dv-sv; break;                                                    /* psubq */
    case 0xF4: r=(uint64_t)GD(dv,0)*(uint64_t)GD(sv,0); break;                    /* pmuludq */
    case 0xF6: { uint32_t s=0; for(int i=0;i<8;i++){ int d=GB(dv,i)-GB(sv,i); s+=d<0?-d:d;} r=s; } break; /* psadbw */
    default:
        printf("[MMX] unimplemented 0F %02x at EIP=%08x\n", opc, EIP); fflush(stdout);
        fprintf(stderr,"[MMX] unimplemented 0F %02x at EIP=%08x\n", opc, EIP);
        x86_unimpl("unimplemented MMX opcode");
        return;
    }
    C.mm[o->opnd[0].reg] = r;
}

/* float/int memory source for x87 forms (transpile emit_x87.memexpr_*).
 * Operand.size carries the access width: float forms 4/8/10, int forms 2/4/8. */
static inline double mem_float(const Operand *o) {
    uint32_t a = ea(o);
    if (o->size == 4)  return (double)rf32(a);
    if (o->size == 10) return rf80(a);
    return rf64(a);
}
static inline double mem_int(const Operand *o) {
    uint32_t a = ea(o);
    if (o->size == 2) return (double)(int16_t)r16(a);
    if (o->size == 4) return (double)(int32_t)r32(a);
    return (double)(int64_t)((uint64_t)r32(a) | ((uint64_t)r32(a + 4) << 32));
}

/* ===========================================================================
 * Condition-code evaluation — the runtime twin of transpile.JCC[...], indexed
 * by the CC_* code stored in Op.flags for JCC/SETCC.
 * ===========================================================================*/
static inline int cc_true(uint8_t cc) {
    switch (cc) {
        case CC_O:  return  C.of;
        case CC_NO: return !C.of;
        case CC_B:  return  C.cf;                       /* below / carry */
        case CC_AE: return !C.cf;                       /* above-or-equal */
        case CC_E:  return  C.zf;                        /* equal / zero */
        case CC_NE: return !C.zf;
        case CC_BE: return  (C.cf || C.zf);
        case CC_A:  return  (!C.cf && !C.zf);
        case CC_S:  return  C.sf;
        case CC_NS: return !C.sf;
        case CC_P:  return  C.pf;
        case CC_NP: return !C.pf;
        case CC_L:  return  (C.sf != C.of);
        case CC_GE: return  (C.sf == C.of);
        case CC_LE: return  (C.zf || (C.sf != C.of));
        case CC_G:  return  (!C.zf && (C.sf == C.of));
        default:    return 0;
    }
}

/* ===========================================================================
 * String-op step — one element of movs/stos/lods/scas/cmps (transpile
 * emit_string body). Element size in Op.size; DF picks the direction.
 * ===========================================================================*/
static inline void str_step(const Op *o) {
    int sz = o->size;
    int32_t d = C.df ? -sz : sz;
    switch (o->cls) {
        case OP_MOVS:
            if (sz == 4) w32(EDI, r32(ESI));
            else if (sz == 2) w16(EDI, r16(ESI));
            else w8(EDI, r8(ESI));
            ESI += d; EDI += d; break;
        case OP_STOS:
            if (sz == 4) w32(EDI, EAX);
            else if (sz == 2) w16(EDI, AX);
            else w8(EDI, AL);
            EDI += d; break;
        case OP_LODS:
            if (sz == 4) EAX = r32(ESI);
            else if (sz == 2) AX = r16(ESI);
            else AL = r8(ESI);
            ESI += d; break;
        case OP_SCAS: {
            uint32_t a = (sz == 4) ? EAX : (sz == 2) ? AX : AL;
            uint32_t b = (sz == 4) ? r32(EDI) : (sz == 2) ? r16(EDI) : r8(EDI);
            uint32_t r = a - b; fl_sub(a, b, r, sz * 8);
            EDI += d; break;
        }
        case OP_CMPS: {
            uint32_t a = (sz == 4) ? r32(ESI) : (sz == 2) ? r16(ESI) : r8(ESI);
            uint32_t b = (sz == 4) ? r32(EDI) : (sz == 2) ? r16(EDI) : r8(EDI);
            uint32_t r = a - b; fl_sub(a, b, r, sz * 8);
            ESI += d; EDI += d; break;
        }
    }
}

/* the seven x87 named-constant pushes (FLDCONST), indexed by FC_* in opnd0.imm.
 * Same long-double-precision literals transpile.py uses. */
static const double FCONST_VAL[7] = {
    1.0,                                /* FC_1   */
    0.0,                                /* FC_Z   */
    3.14159265358979311599796346854,    /* FC_PI  */
    1.44269504088896340735992468100,    /* FC_L2E */
    3.32192809488736234787031942949,    /* FC_L2T */
    0.30102999566398119521373889472,    /* FC_LG2 */
    0.69314718055994530941723212146,    /* FC_LN2 */
};

/* ===========================================================================
 * Execute ONE op. Returns the next EIP. Pure semantics + EIP arithmetic; the
 * outer loop fetches and stores EIP. Every branch is the runtime twin of the
 * matching transpile.py emission over the decoded operands.
 * ===========================================================================*/
static uint32_t step(const Op *o) {
    const Operand *a = &o->opnd[0];
    const Operand *b = &o->opnd[1];
    const Operand *c = &o->opnd[2];
    int bits = o->size * 8;

    switch (o->cls) {

    /* ---- nothing ---- */
    case OP_NOP: case OP_FWAIT: case OP_FNOP: case OP_FFREE:
        break;

    /* ---- data movement ---- */
    case OP_MOV:   op_wr(a, op_rd(b)); break;
    case OP_LEA:   op_wr(a, ea(b)); break;                 /* dest = effective addr */
    case OP_MOVZX: op_wr(a, op_rd(b)); break;              /* src already zero-ext by op_rd */
    case OP_MOVSX: {
        uint32_t v = op_rd(b);
        int32_t s = (b->size == 1) ? (int32_t)(int8_t)v : (int32_t)(int16_t)v;
        op_wr(a, (uint32_t)s); break;
    }
    case OP_XCHG: { uint32_t t = op_rd(a); op_wr(a, op_rd(b)); op_wr(b, t); break; }
    case OP_BSWAP: op_wr(a, __builtin_bswap32(op_rd(a))); break;
    case OP_PUSH:  push32(op_rd(a)); break;
    case OP_POP:   op_wr(a, pop32()); break;
    case OP_LEAVE: ESP = EBP; EBP = pop32(); break;

    /* ---- ALU binary (flag-setting) ---- */
    case OP_ADD: { uint32_t x=op_rd(a),y=op_rd(b),r=x+y;       op_wr(a,r); fl_add(x,y,r,bits); break; }
    /* ADC/SBB: fl_add/fl_sub derive CF from (x,y) only — correct for ADD/SUB/CMP
     * (carry-in 0) but WRONG for the carry-in==1 boundary (e.g. `sbb r,r` must
     * PRESERVE CF: 0-0-1 borrows, so CF_out=1). The validated leaf set never set
     * carry-in, so this only fixes the previously-untested cin==1 case and is
     * byte-identical to the old result when cin==0. AF/OF/SF/ZF/PF stay from the
     * fl_ helpers (they use the carry-inclusive result r, so are already correct);
     * only CF needs the carry-in-aware override. */
    case OP_ADC: { uint32_t cin=C.cf, x=op_rd(a),y=op_rd(b),r=x+y+cin;  op_wr(a,r); fl_add(x,y,r,bits);
                   C.cf = (uint32_t)((((uint64_t)x + (uint64_t)y + (uint64_t)cin) >> bits) & 1u); break; }
    case OP_SUB: { uint32_t x=op_rd(a),y=op_rd(b),r=x-y;       op_wr(a,r); fl_sub(x,y,r,bits); break; }
    case OP_SBB: { uint32_t cin=C.cf, x=op_rd(a),y=op_rd(b),r=x-y-cin;  op_wr(a,r); fl_sub(x,y,r,bits);
                   C.cf = (((uint64_t)y + (uint64_t)cin) > (uint64_t)x); break; }
    case OP_AND: { uint32_t r=op_rd(a)&op_rd(b);              op_wr(a,r); fl_logic(r,bits); break; }
    case OP_OR:  { uint32_t r=op_rd(a)|op_rd(b);              op_wr(a,r); fl_logic(r,bits); break; }
    case OP_XOR: { uint32_t r=op_rd(a)^op_rd(b);              op_wr(a,r); fl_logic(r,bits); break; }
    case OP_CMP: { uint32_t x=op_rd(a),y=op_rd(b),r=x-y;      fl_sub(x,y,r,bits); break; }
    case OP_TEST:{ uint32_t r=op_rd(a)&op_rd(b);             fl_logic(r,bits); break; }

    /* ---- ALU unary ---- */
    case OP_INC: { uint32_t r=op_rd(a)+1; op_wr(a,r); fl_inc(r,bits); break; }
    case OP_DEC: { uint32_t r=op_rd(a)-1; op_wr(a,r); fl_dec(r,bits); break; }
    case OP_NEG: { uint32_t x=op_rd(a),r=0u-x; op_wr(a,r); fl_sub(0,x,r,bits); break; }
    case OP_NOT: op_wr(a, ~op_rd(a)); break;

    /* ---- shifts (count masked to 5 bits; helpers set CF/OF/SF/ZF/PF) ---- */
    case OP_SHL: op_wr(a, sh_shl(op_rd(a), op_rd(b) & 0x1f, bits)); break;
    case OP_SHR: op_wr(a, sh_shr(op_rd(a), op_rd(b) & 0x1f, bits)); break;
    case OP_SAR: op_wr(a, sh_sar(op_rd(a), op_rd(b) & 0x1f, bits)); break;
    case OP_SHLD: op_wr(a, sh_shld(op_rd(a), op_rd(b), op_rd(c) & 0x1f, bits)); break;
    case OP_SHRD: op_wr(a, sh_shrd(op_rd(a), op_rd(b), op_rd(c) & 0x1f, bits)); break;

    /* ---- rotates (faithful, exact CF/OF — twins of transpile ror/rol/rcl/rcr) ---- */
    case OP_ROL: {
        /* transpile guard/shift use cnt = count & (bits-1); flags update only when
         * that masked count is nonzero (rol by a full width is a no-op + no flags). */
        uint32_t n = op_rd(b) & (uint32_t)(bits - 1);
        if (n) {
            uint32_t mask = sh_mask(bits), v = op_rd(a) & mask;
            uint32_t r = ((v << n) | (v >> ((bits - n) & (bits - 1)))) & mask;
            op_wr(a, r);
            C.cf = r & 1;
            C.of = ((r >> (bits - 1)) & 1) ^ C.cf;
        }
        break;
    }
    case OP_ROR: {
        uint32_t n = op_rd(b) & (uint32_t)(bits - 1);
        if (n) {
            uint32_t mask = sh_mask(bits), v = op_rd(a) & mask;
            uint32_t r = ((v >> n) | (v << ((bits - n) & (bits - 1)))) & mask;
            op_wr(a, r);
            C.cf = (r >> (bits - 1)) & 1;
            C.of = ((r >> (bits - 1)) & 1) ^ ((r >> (bits - 2)) & 1);
        }
        break;
    }
    case OP_RCL: {
        uint32_t mask = sh_mask(bits);
        uint32_t v = op_rd(a) & mask, cf = C.cf, n = op_rd(b) & 0x1f;
        for (uint32_t i = 0; i < n; i++) {
            uint32_t bit = (v >> (bits - 1)) & 1;
            v = ((v << 1) | cf) & mask; cf = bit;
        }
        op_wr(a, v); C.cf = cf; break;
    }
    case OP_RCR: {
        uint32_t mask = sh_mask(bits);
        uint32_t v = op_rd(a) & mask, cf = C.cf, n = op_rd(b) & 0x1f;
        for (uint32_t i = 0; i < n; i++) {
            uint32_t bit = v & 1;
            v = (v >> 1) | (cf << (bits - 1)); cf = bit;
        }
        op_wr(a, v); C.cf = cf; break;
    }

    /* ---- mul / div ---- */
    case OP_IMUL1: {   /* one-operand: EDX:EAX = EAX * src (signed) */
        int64_t p = (int64_t)(int32_t)EAX * (int64_t)(int32_t)op_rd(a);
        EAX = (uint32_t)p; EDX = (uint32_t)(p >> 32);
        C.cf = C.of = ((int64_t)(int32_t)EAX != p);
        break;
    }
    case OP_IMUL: {
        /* transpile: d=ops[0]=dst, factor1=ops[1].rd, factor2 = ops[2].rd
         * (3-operand) else d.rd. So 2-op `imul dst,src` => dst=src*dst; 3-op
         * `imul dst,src,imm` => dst=src*imm. Here a=dst, b=ops[1], c=ops[2]. */
        int64_t f1  = (int64_t)(int32_t)op_rd(b);
        int64_t f2  = (c->kind != OPK_NONE) ? (int64_t)(int32_t)op_rd(c)
                                            : (int64_t)(int32_t)op_rd(a);
        int64_t p = f1 * f2;
        op_wr(a, (uint32_t)p);
        C.cf = C.of = ((int64_t)(int32_t)(uint32_t)p != p);
        break;
    }
    case OP_MUL: {     /* one-operand: EDX:EAX = EAX * src (unsigned) */
        uint64_t p = (uint64_t)EAX * (uint64_t)op_rd(a);
        EAX = (uint32_t)p; EDX = (uint32_t)(p >> 32);
        C.cf = C.of = (EDX != 0);
        break;
    }
    case OP_DIV: {
        uint64_t n = ((uint64_t)EDX << 32) | EAX; uint32_t dv = op_rd(a);
        EAX = (uint32_t)(n / dv); EDX = (uint32_t)(n % dv); break;
    }
    case OP_IDIV: {
        int64_t n = (int64_t)(((uint64_t)EDX << 32) | EAX); int32_t dv = (int32_t)op_rd(a);
        EAX = (uint32_t)(n / dv); EDX = (uint32_t)(n % dv); break;
    }
    case OP_CDQ:  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u; break;
    case OP_CWDE: EAX = (uint32_t)(int32_t)(int16_t)AX; break;

    /* ---- misc integer ops (Woody uses; SPAG did not) ---- */
    case OP_CPUID: {
        uint32_t leaf = EAX;
        if (leaf == 0)      { EAX = 1; EBX = 0x756E6547u; EDX = 0x49656E69u; ECX = 0x6C65746Eu; } /* "GenuineIntel" */
        else if (leaf == 1) { EAX = 0x0000052Cu; EBX = 0; ECX = 0; EDX = 0x0083FBFFu; }           /* FPU/TSC/CMOV/MMX (no FXSR/SSE: interp has no XMM; game uses the x87 path) */
        else                { EAX = EBX = ECX = EDX = 0; }
        break;
    }
    case OP_PUSHFD: push32(0x00000202u | (C.cf<<0) | (C.pf<<2) | (C.af<<4) | (C.zf<<6) | (C.sf<<7) | (C.df<<10) | (C.of<<11)); break;
    case OP_POPFD:  { uint32_t f = pop32(); C.cf=(f>>0)&1; C.pf=(f>>2)&1; C.af=(f>>4)&1; C.zf=(f>>6)&1; C.sf=(f>>7)&1; C.df=(f>>10)&1; C.of=(f>>11)&1; break; }
    case OP_PUSHAD: { uint32_t sp=ESP; push32(EAX); push32(ECX); push32(EDX); push32(EBX); push32(sp); push32(EBP); push32(ESI); push32(EDI); break; }
    case OP_POPAD:  { EDI=pop32(); ESI=pop32(); EBP=pop32(); ESP+=4; EBX=pop32(); EDX=pop32(); ECX=pop32(); EAX=pop32(); break; }
    case OP_BT: case OP_BTS: case OP_BTR: case OP_BTC: {
        /* Real x86 semantics: a REGISTER-sourced bit index against a MEMORY destination is
         * NOT masked to the operand width -- it indexes further into memory at
         * mem + 4*floor(bitidx/32), then the bit within THAT dword is bitidx&31. (An
         * IMMEDIATE bit index, and any register destination, IS masked to the operand
         * width -- that part matches what was here before.) Getting this wrong reads/writes
         * the SAME dword for every bit index, so any bit index >=32 silently collides with
         * whatever was set for a lower one -- this is exactly the 256-bit-charset-bitmap
         * pattern the CRT's strcspn/strpbrk use (a 32-byte stack array probed by a full
         * 0-255 byte value): e.g. querying bit 77 ('M') wrongly re-tested bit 77&31=13,
         * which an EARLIER bit-13 ('\r') had already set, so strcspn falsely reported a
         * charset match on 'M' and truncated the string 30 bytes early. */
        uint32_t v, bit;
        uint32_t addr = 0;
        int memExt = (a->kind == OPK_MEM && b->kind != OPK_IMM);
        if (memExt) {
            int32_t rawbit = (int32_t)op_rd(b);
            uint32_t dwoff = (uint32_t)(rawbit >> 5) * 4u;   /* floor(bit/32)*4, arithmetic shift */
            addr = ea(a) + dwoff;
            bit = (uint32_t)rawbit & 31u;
            v = r32(addr);
        } else {
            bit = op_rd(b) & 31u;
            v = op_rd(a);
        }
        C.cf = (v >> bit) & 1u;
        if (o->cls != OP_BT) {
            uint32_t nv = (o->cls == OP_BTS) ? (v | (1u<<bit))
                        : (o->cls == OP_BTR) ? (v & ~(1u<<bit))
                        :                      (v ^ (1u<<bit));
            if (memExt) w32(addr, nv); else op_wr(a, nv);
        }
        break;
    }
    case OP_JECXZ: if (ECX == 0) return a->imm; break;
    case OP_LOOP:   if (--ECX != 0) return a->imm; break;
    case OP_LOOPE:  if (--ECX != 0 &&  C.zf) return a->imm; break;
    case OP_LOOPNE: if (--ECX != 0 && !C.zf) return a->imm; break;
    case OP_XLAT:  AL = r8(EBX + AL); break;

    /* ---- two operands, three at most for IMUL handled above ---- */

    /* ---- control flow (these RETURN the next EIP directly) ---- */
    case OP_CALL: {
        uint32_t tgt = (o->flags & TGTF_DIRECT) ? a->imm : op_rd(a);
        callring_push(EIP, tgt, ESP);
        push32(o->nextva);
        /* NOTE: a "native-call" hybrid (call x86_compiled(tgt) here to avoid
         * interpreting whole subtrees) was tried but aborts mid-intro — the
         * interp<->native bounce recurses unboundedly / traps in a still-buggy
         * compiled fn. Reverted to plain interpret; speed pass needs that solved. */
        return tgt;                       /* op_at(tgt) resolves direct/indirect alike */
    }
    case OP_JMP: {
        uint32_t tgt = (o->flags & TGTF_DIRECT) ? a->imm : op_rd(a);
        return tgt;                       /* incl. indirect & switch-table targets */
    }
    case OP_JCC:
        if (cc_true(o->flags)) return a->imm;
        break;                            /* not taken -> fall through to nextva */
    case OP_RET: {
        uint32_t r = pop32();
        ESP += a->imm;                    /* ret N: pop N extra arg bytes */
        return r;
    }
    case OP_SETCC: op_wr(a, cc_true(o->flags) ? 1u : 0u); break;

    /* ---- flag transfer / direction ---- */
    case OP_SAHF: C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1; break;
    case OP_LAHF: AH = (uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf); break;
    case OP_CLD:  C.df = 0; break;
    case OP_STD:  C.df = 1; break;
    case OP_CLC:  C.cf = 0; break;
    case OP_STC:  C.cf = 1; break;
    case OP_CMC:  C.cf = !C.cf; break;
    case OP_RDTSC: { static uint64_t tsc = 0; tsc += 4096; EAX = (uint32_t)tsc; EDX = (uint32_t)(tsc >> 32); break; }
    case OP_EMMS:  break;   /* MMX state tag reset - no-op in this model */
    case OP_MMX:   mmx_exec(o); break;
    case OP_AAS:
        if (((AL & 0x0f) > 9) || C.af) { AX = (uint16_t)(AX - 6); AH = (uint8_t)(AH - 1); C.af = 1; C.cf = 1; }
        else { C.af = 0; C.cf = 0; }
        AL &= 0x0f; break;

    /* ---- string ops (rep handling via Op.flags; element size in Op.size) ---- */
    case OP_MOVS: case OP_STOS: case OP_LODS: case OP_SCAS: case OP_CMPS:
        if (!(o->flags & STRF_REP)) { str_step(o); break; }
        if (o->flags & STRF_REPNE) {                 /* repne: while ECX && !ZF */
            while (ECX != 0) { ECX--; str_step(o); if (C.zf) break; }
        } else if ((o->cls == OP_SCAS || o->cls == OP_CMPS)) { /* repe scas/cmps: while ECX && ZF */
            while (ECX != 0) { ECX--; str_step(o); if (!C.zf) break; }
        } else {                                     /* rep movs/stos/lods: while ECX */
            while (ECX != 0) { ECX--; str_step(o); }
        }
        break;

    /* ======================= x87 FPU ======================= */
    case OP_FLD:
        if (a->kind == OPK_ST) { double v = FPU_ST(a->reg); fpu_push(v); }
        else fpu_push(mem_float(a));
        break;
    case OP_FILD: fpu_push(mem_int(a)); break;
    case OP_FLDCONST: fpu_push(FCONST_VAL[a->imm & 7]); break;

    case OP_FST: case OP_FSTP:
        if (a->kind == OPK_ST) { FPU_ST(a->reg) = FPU_ST(0); }
        else if (a->size == 4)  wf32(ea(a), (float)FPU_ST(0));
        else if (a->size == 10) wf80(ea(a), FPU_ST(0));
        else                    wf64(ea(a), FPU_ST(0));
        if (o->flags & FPOPF) (void)fpu_pop();
        break;
    case OP_FIST: case OP_FISTP: {
        uint32_t addr = ea(a);
        if (a->size == 2)      w16(addr, (uint16_t)fpu_to_i16(FPU_ST(0)));
        else if (a->size == 4) w32(addr, (uint32_t)fpu_to_i32(FPU_ST(0)));
        else { int64_t q = fpu_to_i64(FPU_ST(0)); w32(addr, (uint32_t)q); w32(addr+4, (uint32_t)((uint64_t)q>>32)); }
        if (o->flags & FPOPF) (void)fpu_pop();
        break;
    }
    case OP_FISTTP: {   /* store int with TRUNCATION (toward zero), always pop */
        uint32_t addr = ea(a);
        if (a->size == 2)      w16(addr, (uint16_t)(int16_t)FPU_ST(0));
        else if (a->size == 4) w32(addr, (uint32_t)(int32_t)FPU_ST(0));
        else { int64_t q = (int64_t)FPU_ST(0); w32(addr, (uint32_t)q); w32(addr+4, (uint32_t)((uint64_t)q>>32)); }
        (void)fpu_pop();
        break;
    }

    /* single-source arithmetic: ST(0) op= src (mem-float / mem-int / st(i)) */
    case OP_FADD:  FPU_ST(0) = FPU_ST(0) + ((a->kind==OPK_ST)?FPU_ST(a->reg):mem_float(a)); break;
    case OP_FSUB:  FPU_ST(0) = FPU_ST(0) - ((a->kind==OPK_ST)?FPU_ST(a->reg):mem_float(a)); break;
    case OP_FMUL:  FPU_ST(0) = FPU_ST(0) * ((a->kind==OPK_ST)?FPU_ST(a->reg):mem_float(a)); break;
    case OP_FDIV:  FPU_ST(0) = FPU_ST(0) / ((a->kind==OPK_ST)?FPU_ST(a->reg):mem_float(a)); break;
    case OP_FSUBR: { double s=(a->kind==OPK_ST)?FPU_ST(a->reg):mem_float(a); FPU_ST(0) = s - FPU_ST(0); break; }
    case OP_FDIVR: { double s=(a->kind==OPK_ST)?FPU_ST(a->reg):mem_float(a); FPU_ST(0) = s / FPU_ST(0); break; }
    /* integer-memory single-source forms */
    case OP_FIADD:  FPU_ST(0) = FPU_ST(0) + mem_int(a); break;
    case OP_FISUB:  FPU_ST(0) = FPU_ST(0) - mem_int(a); break;
    case OP_FIMUL:  FPU_ST(0) = FPU_ST(0) * mem_int(a); break;
    case OP_FIDIV:  FPU_ST(0) = FPU_ST(0) / mem_int(a); break;
    case OP_FISUBR: FPU_ST(0) = mem_int(a) - FPU_ST(0); break;
    case OP_FIDIVR: FPU_ST(0) = mem_int(a) / FPU_ST(0); break;

    /* two-ST-register form: dst=ops[0]=ST(i), src=ops[1]=ST(j); sub-op in flags.
     * (transpile: "fsub st(2),st(0)" -> ST(2)=ST(2)-ST(0); rev swaps operands.) */
    case OP_FARITH_REG2: {
        int i = a->reg, j = b->reg;
        int sub = o->flags & FA_OP; int rev = o->flags & FA_REV;
        double L = FPU_ST(i), R = FPU_ST(j), res = 0.0;
        switch (sub) {
            case 0: res = L + R; break;                       /* add */
            case 2: res = L * R; break;                       /* mul */
            case 1: res = rev ? (R - L) : (L - R); break;     /* sub / subr */
            case 3: res = rev ? (R / L) : (L / R); break;     /* div / divr */
        }
        FPU_ST(i) = res;
        break;
    }
    /* faddp/fsubp/fmulp/fdivp/fsubrp/fdivrp: ST(i) op= ST0, then pop.
     * transpile: ST(i)=ST(i) op ST0 (non-rev); rev: ST(i)=ST0 op ST(i). i defaults 1. */
    case OP_FARITHP: {
        int i = (a->kind == OPK_ST) ? a->reg : 1;
        int sub = o->flags & FA_OP; int rev = o->flags & FA_REV;
        double Si = FPU_ST(i), S0 = FPU_ST(0), res = 0.0;
        switch (sub) {
            case 0: res = Si + S0; break;
            case 2: res = Si * S0; break;
            case 1: res = rev ? (S0 - Si) : (Si - S0); break;
            case 3: res = rev ? (S0 / Si) : (Si / S0); break;
        }
        FPU_ST(i) = res;
        (void)fpu_pop();
        break;
    }

    /* compares */
    case OP_FCOM: case OP_FCOMP: {
        double rhs = (a->kind == OPK_ST) ? FPU_ST(a->reg)
                   : (a->kind == OPK_MEM) ? mem_float(a)
                   : FPU_ST(1);
        fpu_cmp(FPU_ST(0), rhs);
        if (o->flags & FPOPF) (void)fpu_pop();
        break;
    }
    case OP_FCOMPP:
        fpu_cmp(FPU_ST(0), FPU_ST(1)); (void)fpu_pop(); (void)fpu_pop(); break;
    case OP_FUCOM: case OP_FUCOMP: {
        double rhs = (a->kind == OPK_ST) ? FPU_ST(a->reg) : FPU_ST(1);
        fpu_cmp(FPU_ST(0), rhs);
        if (o->flags & FPOPF) (void)fpu_pop();
        break;
    }
    case OP_FUCOMPP:
        fpu_cmp(FPU_ST(0), FPU_ST(1)); (void)fpu_pop(); (void)fpu_pop(); break;
    case OP_FTST: fpu_cmp(FPU_ST(0), 0.0); break;
    case OP_FCOMI: {   /* fcomi/fcomip/fucomi/fucomip -> set ZF/PF/CF directly */
        int i = (a->kind == OPK_ST) ? a->reg : 1;
        double x = FPU_ST(0), y = FPU_ST(i);
        if (x > y)      { C.zf=0; C.pf=0; C.cf=0; }
        else if (x < y) { C.zf=0; C.pf=0; C.cf=1; }
        else if (x == y){ C.zf=1; C.pf=0; C.cf=0; }
        else            { C.zf=1; C.pf=1; C.cf=1; }   /* unordered */
        if (o->flags & FPOPF) (void)fpu_pop();
        break;
    }

    /* status / control word */
    case OP_FNSTSW:
        if (a->kind == OPK_REG) AX = fpu_status();
        else w16(ea(a), fpu_status());
        break;
    case OP_FNSTCW: w16(ea(a), C.fcw); break;
    case OP_FLDCW:  C.fcw = r16(ea(a)); break;

    /* unary / misc */
    case OP_FCHS:   FPU_ST(0) = -FPU_ST(0); break;
    case OP_FABS:   FPU_ST(0) = __builtin_fabs(FPU_ST(0)); break;
    case OP_FSQRT:  FPU_ST(0) = __builtin_sqrt(FPU_ST(0)); break;
    case OP_FRNDINT:FPU_ST(0) = fpu_rndint(FPU_ST(0)); break;
    case OP_FXCH: { int i = a->reg; double t = FPU_ST(0); FPU_ST(0) = FPU_ST(i); FPU_ST(i) = t; break; }
    case OP_FINCSTP: C.fptop = (C.fptop + 1) & 7; break;
    case OP_FDECSTP: C.fptop = (C.fptop - 1) & 7; break;
    case OP_FINIT:
        C.fptop = 0; C.fcw = 0x037f; C.fsw_c0 = C.fsw_c1 = C.fsw_c2 = C.fsw_c3 = 0; break;
    case OP_F2XM1:  FPU_ST(0) = __builtin_pow(2.0, FPU_ST(0)) - 1.0; break;
    case OP_FYL2X: {
        double y = FPU_ST(1), x = FPU_ST(0);
        FPU_ST(1) = y * (__builtin_log(x) / 0.69314718055994530941723212146);
        (void)fpu_pop(); break;
    }
    case OP_FYL2XP1: {
        double y = FPU_ST(1), x = FPU_ST(0);
        FPU_ST(1) = y * (__builtin_log(x + 1.0) / 0.69314718055994530941723212146);
        (void)fpu_pop(); break;
    }
    case OP_FSCALE: FPU_ST(0) = FPU_ST(0) * __builtin_exp2(__builtin_trunc(FPU_ST(1))); break;
    case OP_FPREM:  FPU_ST(0) = __builtin_fmod(FPU_ST(0), FPU_ST(1)); C.fsw_c2 = 0; break;
    case OP_FPREM1: FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2 = 0; break;
    case OP_FSIN:   FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2 = 0; break;
    case OP_FCOS:   FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2 = 0; break;
    case OP_FPTAN:  FPU_ST(0) = __builtin_tan(FPU_ST(0)); fpu_push(1.0); C.fsw_c2 = 0; break;
    case OP_FPATAN: { double r = __builtin_atan2(FPU_ST(1), FPU_ST(0)); (void)fpu_pop(); FPU_ST(0) = r; break; }
    case OP_FSINCOS: { double x = FPU_ST(0); FPU_ST(0) = __builtin_sin(x); fpu_push(__builtin_cos(x)); C.fsw_c2 = 0; break; }
    case OP_FXAM: {
        double v = FPU_ST(0);
        C.fsw_c1 = (__builtin_signbit(v) != 0);
        if (v != v)                  { C.fsw_c3=0; C.fsw_c2=1; C.fsw_c0=1; }
        else if (__builtin_isinf(v)) { C.fsw_c3=0; C.fsw_c2=1; C.fsw_c0=1; }
        else if (v == 0.0)           { C.fsw_c3=1; C.fsw_c2=0; C.fsw_c0=0; }
        else                         { C.fsw_c3=0; C.fsw_c2=1; C.fsw_c0=0; }
        break;
    }

    /* full FPU environment save/restore (108-byte 32-bit protected format) */
    case OP_FNSAVE: {
        uint32_t base = ea(a);
        w16(base, C.fcw); w16(base + 4, fpu_status()); w16(base + 8, 0x0000);
        for (int i = 0; i < 8; i++) wf80(base + 28 + i * 10, FPU_ST(i));
        C.fptop = 0; C.fcw = 0x037f; C.fsw_c0 = C.fsw_c1 = C.fsw_c2 = C.fsw_c3 = 0;
        break;
    }
    case OP_FRSTOR: {
        uint32_t base = ea(a);
        C.fcw = r16(base);
        uint16_t sw = r16(base + 4);
        C.fptop = (sw >> 11) & 7;
        C.fsw_c0 = (sw >> 8) & 1; C.fsw_c1 = (sw >> 9) & 1;
        C.fsw_c2 = (sw >> 10) & 1; C.fsw_c3 = (sw >> 14) & 1;
        for (int i = 0; i < 8; i++) FPU_ST(i) = rf80(base + 28 + i * 10);
        break;
    }
    /* 28-byte protected-mode FP ENVIRONMENT (control/status/tag words + ptrs) —
     * the register stack is NOT touched (unlike FNSAVE/FRSTOR). MSVC's FP-control
     * helpers (_control87/_statusfp) use fnstenv+mask+fldenv to mask exceptions
     * around a computation. We model cw/sw/tw; the FIP/FCS/FDP/FDS pointer fields
     * are not meaningful in this interpreter, so they are written as 0 / ignored. */
    case OP_FNSTENV: {
        uint32_t base = ea(a);
        w16(base + 0, C.fcw);
        w16(base + 4, fpu_status());
        w16(base + 8, 0xffff);          /* tag word: all-empty is the safe report */
        w16(base + 12, 0); w16(base + 16, 0); w16(base + 20, 0); w16(base + 24, 0);
        C.fcw |= 0x003f;                /* fnstenv masks all FP exceptions */
        break;
    }
    case OP_FLDENV: {
        uint32_t base = ea(a);
        C.fcw = r16(base + 0);
        uint16_t sw = r16(base + 4);
        C.fptop = (sw >> 11) & 7;
        C.fsw_c0 = (sw >> 8) & 1; C.fsw_c1 = (sw >> 9) & 1;
        C.fsw_c2 = (sw >> 10) & 1; C.fsw_c3 = (sw >> 14) & 1;
        break;
    }

    /* ---- decoder produced no mapping: report EIP + raw bytes, then halt ---- */
    case OP_UNIMPL:
    default:
        printf("[UNIMPL] EIP=%08x bytes=%02x %02x %02x %02x %02x %02x %02x %02x\n",
                o->va, r8(o->va), r8(o->va+1), r8(o->va+2), r8(o->va+3),
                r8(o->va+4), r8(o->va+5), r8(o->va+6), r8(o->va+7)); fflush(stdout);
        fprintf(stderr, "[UNIMPL] EIP=%08x bytes=%02x %02x %02x %02x %02x %02x %02x %02x\n",
                o->va, r8(o->va), r8(o->va+1), r8(o->va+2), r8(o->va+3),
                r8(o->va+4), r8(o->va+5), r8(o->va+6), r8(o->va+7));
        x86_unimpl("UNIMPL/unknown op class in interpreter");
        return SENTINEL;
    }

    return o->nextva;   /* default: fall through to the next instruction */
}

/* ===========================================================================
 * The flat interpreter loop. Run from the current EIP until a `ret` pops the
 * SENTINEL (the run's fake return address). An EIP with no Op record is either
 * an IAT import thunk (dispatch the native shim, resume at its returned address)
 * or a genuine decode gap (loud abort — never silently wrong).
 * ===========================================================================*/
/* Optional instruction budget. 0 == unlimited (the real game run). The headless
 * differential harness sets a finite budget so a leaf that loops forever under
 * the synthetic fixed init cannot hang node; it is reported (and skipped) exactly
 * as Unicorn reports such functions "not isolable". Set g_step_overflow before a
 * run; if it trips, x86_run stops and leaves it set for the caller to detect. */
uint64_t g_step_budget   = 0;
int      g_step_overflow = 0;
int      g_coop_yield    = 0;  /* set by blocking/yielding shims to return to the scheduler */

uint32_t g_prev_eip = 0;   /* diagnostics: EIP of the op that branched here */

/* hang watchdog: PeekMessageA resets g_dbg_since_pump; if the guest spins this many
 * interp steps without pumping the WinMain message loop, dump where it is stuck. */
uint64_t g_dbg_since_pump = 0; int g_dbg_dumps = 0;

/* ---- write-watchpoint (real CPU trace): record which EIP writes a watched guest
 * address range. Armed via lk2_set_watchw(lo,hi); read back via lk2_dbg_counter
 * (cases 40 + 50.. ranges). g_prev_eip is the EIP of the instruction doing the
 * write, so this pinpoints the exact code that stores into e.g. Nav+0x638. */
int      g_watchw_active = 0;
uint32_t g_watchw_lo = 0, g_watchw_hi = 0;
uint32_t g_watchw_eip[16], g_watchw_val[16], g_watchw_addr[16];
int      g_watchw_count = 0;
void lk2_watch_hit(uint32_t a, uint32_t v, int size) {
    if (g_movie_arm_gate && !g_movie_armed) return;   /* SM2_MOVIEARM: only after intro movie opens */
    int i = g_watchw_count & 15;
    g_watchw_eip[i]  = g_prev_eip;
    g_watchw_val[i]  = v;
    g_watchw_addr[i] = a | ((uint32_t)size << 28);   /* stash size in high nibble */
    g_watchw_count++;
    fprintf(stderr, "[WATCH] write [%08x]=%08x sz%d by EIP=%08x\n  callers:", a, v, size, g_prev_eip);
    for (uint32_t k=0;k<96 && k<0x400;k++){ uint32_t rv=r32(ESP+k*4);
        if ((rv>=0x00401000u&&rv<0x00460000u)||(rv>=0x10000000u&&rv<0x108a0000u)||(rv>=0x108e0000u&&rv<0x10e40000u))
            fprintf(stderr," %08x", rv); }
    fprintf(stderr,"\n");
}
void lk2_set_watchw(uint32_t lo, uint32_t hi) {
    g_watchw_lo = lo & GMASK; g_watchw_hi = hi & GMASK;
    g_watchw_active = (g_watchw_hi > g_watchw_lo);
    g_watchw_count = 0;
}

/* ===========================================================================
 * DEBUG INSTRUMENTATION (Swamp 0x004794b8 entry diagnosis). Pure observation —
 * does NOT change any execution semantics. Records a ring of the last N control
 * edges (CALL / RET / SHIM-dispatch) with the resulting ESP, and dumps it the
 * first time control transfers INTO __except_handler3 (0x004794b8), which can
 * only happen via a corrupted `ret` popping the SEH-handler constant off an
 * imbalanced stack. Compiled in only when LK2_EHTRACE is defined.
 * ===========================================================================*/
#ifdef LK2_EHTRACE
#define EHW_N 512
static struct { uint8_t k; uint32_t src, dst, esp; } g_ehw[EHW_N];
static uint32_t g_ehw_i = 0;
static int g_ehw_dumped = 0;
static void ehw_push(uint8_t k, uint32_t src, uint32_t dst, uint32_t esp) {
    uint32_t s = g_ehw_i % EHW_N;
    g_ehw[s].k = k; g_ehw[s].src = src; g_ehw[s].dst = dst; g_ehw[s].esp = esp;
    g_ehw_i++;
}
/* last N calls into FUN_0046b210 (the AddRef site that null-derefs): caller, the
 * param_1 object pointer, its vtable (*param_1) and slot1 ([*param_1+4]). */
#define B210_N 24
static struct { uint32_t caller, p1, vt, slot1; } g_b210[B210_N];
static uint32_t g_b210_i = 0;
static int g_b210dbg = 0, g_b210dbg2 = 0;
static int g_sc_trace = 0;     /* >0: trace this many __strcmpi instructions */
static int g_sc_runs  = 0;     /* how many empty-cached strcmpi traces emitted */
/* read a guest C string (bounded) for diagnostics. */
static void ehw_gstr(uint32_t va, char *buf, int cap) {
    int i = 0;
    if (!va) { if (cap) buf[0] = 0; return; }
    for (; i < cap - 1; i++) { uint8_t c = r8(va + (uint32_t)i); buf[i] = (char)c; if (!c) break; }
    buf[i] = 0;
}
static void ehw_dump(const char *why) {
    fprintf(stderr, "[ehw] ==== %s ; last %u call/ret/shim edges ====\n",
            why, (g_ehw_i < EHW_N ? g_ehw_i : (uint32_t)EHW_N));
    uint32_t start = (g_ehw_i > EHW_N) ? (g_ehw_i - EHW_N) : 0;
    for (uint32_t j = start; j < g_ehw_i; j++) {
        uint32_t s = j % EHW_N;
        const char *kn = g_ehw[s].k == 1 ? "CALL" : g_ehw[s].k == 2 ? "RET " : "SHIM";
        fprintf(stderr, "  %s %08x -> %08x  esp=%08x\n", kn, g_ehw[s].src, g_ehw[s].dst, g_ehw[s].esp);
    }
    fprintf(stderr, "[ehw] fs:[0] chain: g[0]=%08x  g[g[0]]=%08x  g[g[0]+4]=%08x (handler)\n",
            r32(0), r32(r32(0)), r32(r32(0) + 4));
    fprintf(stderr, "[ehw] ---- last %u FUN_0046b210(param_1) calls ----\n",
            (g_b210_i < B210_N ? g_b210_i : (uint32_t)B210_N));
    uint32_t bs = (g_b210_i > B210_N) ? (g_b210_i - B210_N) : 0;
    for (uint32_t j = bs; j < g_b210_i; j++) {
        uint32_t s = j % B210_N;
        fprintf(stderr, "  caller=%08x param_1=%08x *param_1=%08x [*param_1+4]=%08x%s\n",
                g_b210[s].caller, g_b210[s].p1, g_b210[s].vt, g_b210[s].slot1,
                (g_b210[s].slot1 == 0x004794b8u || g_b210[s].p1 == 0) ? "  <-- BAD" : "");
    }
}
#endif

/* Diagnostic EIP hit counters (read via lk2_dbg_counter cases 26-31). Cheap —
 * a few compares per instruction — used to learn which scene/transition functions
 * the guest actually executes. Not under ifdef so the headless harness can read
 * them in the shipped build. */
uint64_t g_hit_navtick=0, g_hit_xtrans=0, g_hit_setnext=0, g_hit_vidtick=0, g_hit_click=0, g_hit_vidcb=0, g_hit_critter=0;

/* Per-256-byte-code-bucket instruction histogram (read via lk2_counter(200+bucket)).
 * bucket = (EIP-0x400000)>>8, 2048 buckets cover the whole .text window — fine enough
 * to pin the hot loop to a single function. Incremented ONLY under LK2_PROF so the
 * shipped build pays nothing; used to find the hottest guest functions to offload to
 * native C (the "lag on heavy scenes" investigation). */
uint32_t g_prof[2048];
/* ===========================================================================
 * UE2 LOG CAPTURE (SM2_LOG=1). The engine funnels every debugf/warnf/appErrorf
 * through a VARARG_BODY that formats into a stack buffer then does a thiscall
 * `device->Serialize(const TCHAR* Msg, EName Event)` via vtable slot 0. We hook
 * those `call [edx]` sites: at the call, [ESP]=Msg(wide), [ESP+4]=Event, ECX=this.
 * Printing them reproduces Webhead.log — the engine's own account of boot,
 * including the exact Critical: line that precedes the fatal throw.
 * The two known format helpers in core.dll: debugf @0x10049a14, appErrorf
 * @0x10049a95. EName index -> name via the global FName table (0x101b68d0). */
int g_log_on = 0;
extern const char *sm2_modname(uint32_t va);
/* resolve an EName index to its ANSI text via the FName array, else "" */
static const char *ename_str(uint32_t idx, char *buf, int cap){
    buf[0]=0;
    uint32_t namesInit = r32(0x101b68c0);          /* GName initialized flag */
    if (!namesInit) return buf;
    uint32_t arr = r32(0x101b68d0);                /* FName::Names.Data (TArray<FNameEntry*>) */
    if (!arr) return buf;
    uint32_t entry = r32(arr + idx*4);             /* FNameEntry* */
    if (!entry) return buf;
    /* FNameEntry (SM2/UE2.5): {DWORD Flags[2]; FNameEntry* HashNext; TCHAR Name[]}
     * with the name text sitting WIDE (UTF-16) at +0xc. Some entries are ANSI at
     * +0xc; detect by peeking the second byte. */
    uint32_t nameoff = entry + 0x0c;
    if (r8(nameoff+1)==0 && r8(nameoff)>=0x20){    /* looks wide: low byte printable, hi byte 0 */
        int i=0; for (; i<cap-1; i++){ uint16_t c=r16(nameoff+i*2); if(!c||c<0x20||c>0x7e) break; buf[i]=(char)c; }
        buf[i]=0; return buf;
    }
    { int i=0; for (; i<cap-1; i++){ uint8_t c=r8(nameoff+i); if(!c||c<0x20||c>0x7e) break; buf[i]=c; }
      buf[i]=0; return buf; }
}
static void log_wide(uint32_t p){
    for (int i=0;i<1024;i++){ uint16_t c=r16(p+i*2); if(!c) break;
        if (c<0x80) fputc((c>=0x20||c=='\n')?(char)c:'.', stderr);          /* ASCII */
        else if (c<0x800){ fputc(0xC0|(c>>6),stderr); fputc(0x80|(c&0x3F),stderr); }  /* UTF-8 2-byte */
        else { fputc(0xE0|(c>>12),stderr); fputc(0x80|((c>>6)&0x3F),stderr); fputc(0x80|(c&0x3F),stderr); }
    }
}
static void ue_log_hit(const char *which){
    uint32_t msg=r32(ESP), event=r32(ESP+4);
    char nb[32]; ename_str(event, nb, sizeof nb);
    fprintf(stderr,"[UELOG %s evt=%u%s%s] ", which, event, nb[0]?" ":"", nb);
    log_wide(msg);
    fputc('\n', stderr);
}

/* generic EIP trap (SM2_TRAP=<hex>): dump regs + stack args (as candidate
 * strings) + a guest stackwalk the first few times EIP hits the trap address. */
uint32_t g_trap = 0; int g_trap_hits = 0;
/* optional stack-value filter: only fire the trap when r32(ESP+g_trapif_off)==g_trapif_val */
int g_trapif_on = 0, g_trapif_off = 8; uint32_t g_trapif_val = 0;
static void trap_str(uint32_t p){
    if (p < 0x1000u || p >= G_MEM_SIZE) return;
    /* utf-16 first if it looks wide (printable low byte, zero high byte) — else the
     * ascii path below would stop at the first wide NUL and show just one char. */
    if (r8(p)>=0x20 && r8(p)<0x7f && r8(p+1)==0){
        int ok=1; for (int i=0;i<64;i++){ uint16_t c=r16(p+i*2); if(c==0)break; if(c<0x20||c>0x7e){ok=0;break;} }
        if (ok){ char b[68]; int i=0; for(;i<64;i++){uint16_t c=r16(p+i*2); if(!c)break; b[i]=(char)c;} b[i]=0; fprintf(stderr," w\"%s\"",b); return; }
    }
    /* ascii? */
    int ok=1; for (int i=0;i<40;i++){ uint8_t c=r8(p+i); if(c==0){ break;} if(c<0x20||c>0x7e){ok=0;break;} }
    if (ok && r8(p)){ char b[48]; int i=0; for(;i<40;i++){uint8_t c=r8(p+i); if(!c)break; b[i]=c;} b[i]=0; fprintf(stderr," a\"%s\"",b); return; }
    /* utf-16 (non-leading-ascii) */
    ok=1; for (int i=0;i<40;i++){ uint16_t c=r16(p+i*2); if(c==0)break; if(c<0x20||c>0x7e){ok=0;break;} }
    if (ok && r16(p)){ char b[48]; int i=0; for(;i<40;i++){uint16_t c=r16(p+i*2); if(!c)break; b[i]=(char)c;} b[i]=0; fprintf(stderr," w\"%s\"",b); }
}
void sm2_stackwalk(uint32_t esp, int maxframes);

/* GObjHash probe (SM2_HASHAT=<eip> SM2_HASHOBJ=<objaddr> [SM2_HASHOBJ2=<good>]):
 * at EIP==g_hashat, walk the UE2 object-hash bucket the given UObject SHOULD live
 * in and report whether it is actually chained there. Authoritative field offsets
 * are taken from StaticFindObjectFast (core+0x53770): Name=+0x18, hashcache=+0x20,
 * Outer=+0x24, HashNext=+0x08; bucket table GObjHash @0x101b75b8, 4096 buckets. */
uint32_t g_hashat = 0, g_hashobj = 0, g_hashobj2 = 0; int g_hash_hits = 0;
uint32_t g_findat = 0; int g_find_hits = 0;
void sm2_findw(const char *ascii_needle, int maxhits);
/* FName-table heal: some FName slots are NULL (editor names like "Exporter" stripped),
 * so guest UObject::GetName returns FNameEntry(0)+0xc = 0xc, and the engine's per-object
 * reload loop calls StaticLoadObject(Name=0xc) -> fatal. Point NULL slots at a zeroed
 * FNameEntry (empty wide name at +0xc) so GetName yields "" instead of garbage. */
uint32_t g_fnhealat = 0; int g_fnheal_done = 0; int g_fnamefix = 0;
extern uint32_t sm2_gheap_alloc(uint32_t n, int zero);
static void hash_probe_one(const char *tag, uint32_t obj){
    if (obj < 0x1000u || obj >= G_MEM_SIZE){ fprintf(stderr,"[HASHPROBE %s] obj=%08x out of range\n",tag,obj); return; }
    uint32_t name  = r32(obj+0x18);
    uint32_t hash  = r32(obj+0x20);
    uint32_t outer = r32(obj+0x24);
    uint32_t hnext = r32(obj+0x08);
    char nb[64]={0}; ename_str(name, nb, (int)sizeof nb);
    char ob[64]={0}; if (outer>=0x1000&&outer<G_MEM_SIZE) ename_str(r32(outer+0x18), ob, (int)sizeof ob);
    fprintf(stderr,"[HASHPROBE %s] obj=%08x Name=%d(%s) hashcache=%08x Outer=%08x(%s) HashNext=%08x\n",
            tag, obj, (int)name, nb, hash, outer, ob, hnext);
    fprintf(stderr,"   raw:"); for(int i=0;i<11;i++) fprintf(stderr," +%02x=%08x", i*4, r32(obj+i*4)); fprintf(stderr,"\n");
    /* which bucket does the object's own cached hash select, and is it chained there? */
    uint32_t bucket = hash & 0xfff;
    uint32_t head = r32(0x101b75b8u + bucket*4);
    fprintf(stderr,"   GObjHash[%u]=%08x  walk:\n", bucket, head);
    int found=0, n=0;
    for (uint32_t e=head; e>=0x1000u && e<G_MEM_SIZE && n<400; e=r32(e+0x08), n++){
        if (e==obj) found=1;
        if (n<14){ char eb[64]={0}; ename_str(r32(e+0x18), eb, (int)sizeof eb);
            fprintf(stderr,"     [%d] %08x Name=%d(%s) hash=%08x Outer=%08x%s\n",
                    n, e, (int)r32(e+0x18), eb, r32(e+0x20), r32(e+0x24), e==obj?"  <== SELF":""); }
    }
    fprintf(stderr,"   chainlen=%d  self_in_bucket=%d\n", n, found);
    /* also brute-scan ALL 4096 buckets for this exact obj ptr (did it land elsewhere?) */
    int other=-1;
    for (uint32_t b=0;b<4096 && other<0;b++){ int m=0;
        for (uint32_t e=r32(0x101b75b8u+b*4); e>=0x1000u&&e<G_MEM_SIZE&&m<400; e=r32(e+0x08),m++)
            if (e==obj){ other=(int)b; break; } }
    fprintf(stderr,"   obj found in bucket: %d (expected %u)\n", other, bucket);
}
/* Scan ALL 4096 GObjHash buckets; print every object whose resolved Name contains
 * `sub` (case-insensitive). Reveals what is actually registered+hashed and under
 * which (Name, Outer) key. */
static void hash_scan(const char *sub){
    /* UObject layout (empirically): +0x04=FName.Index (Name), +0x18=Class ptr,
     * +0x1c=ObjectFlags, +0x20=array Index, +0x24=Outer ptr. */
    if (sub && sub[0]=='#'){   /* reverse FName lookup: print indices whose name contains sub+1 */
        const char *want=sub+1;
        uint32_t arr=r32(0x101b68d0); int found=0;
        for (uint32_t i=0;i<16000 && found<40;i++){
            char nb[96]={0}; ename_str(i, nb, (int)sizeof nb);
            if(!nb[0]) continue;
            int hit=0; for(const char*p=nb;*p;p++){ const char*a=p,*s=want;
                while(*a&&*s&&((*a|0x20)==(*s|0x20))){a++;s++;} if(!*s){hit=1;break;} }
            if(hit){ fprintf(stderr,"   FName[%d] = '%s' (entry=%08x)\n", i, nb, r32(arr+i*4)); found++; }
        }
        fprintf(stderr,"[FNAMEFIND '%s'] matched=%d\n", want, found);
        return;
    }
    if (sub && sub[0]=='%'){   /* scan memory range for UObjects whose Name==given FName idx (sub+1=decimal idx) */
        uint32_t want=(uint32_t)strtoul(sub+1,0,10); int found=0;
        /* scan gheap (0x20000000..) and guest FMalloc pool (0x00400000..0x10000000) */
        struct { uint32_t lo,hi; } rgn[3] = { {0x20000000u,0x24000000u},{0x00400000u,0x10000000u},{0x10000000u,0x10e00000u} };
        for(int ri=0;ri<3;ri++){
          for(uint32_t a=rgn[ri].lo; a<rgn[ri].hi && found<24; a+=4){
            if(r32(a+0x04)!=want) continue;
            uint32_t vt=r32(a+0x00); if(vt<0x10000000u||vt>=0x10e00000u) continue; /* vtable in a module */
            char nb[96]={0}; ename_str(want, nb,(int)sizeof nb);
            uint32_t outer=r32(a+0x24); char ob[96]={0}; if(outer>=0x1000&&outer<G_MEM_SIZE) ename_str(r32(outer+0x04),ob,(int)sizeof ob);
            uint32_t cls=r32(a+0x18); char cb[96]={0}; if(cls>=0x1000&&cls<G_MEM_SIZE) ename_str(r32(cls+0x04),cb,(int)sizeof cb);
            fprintf(stderr,"   OBJ @%08x Name=%d(%s) vtbl=%08x Class=%08x(%s) Outer=%08x(%s) Index=%d Flags=%08x\n",
                    a, (int)want, nb, vt, cls, cb, outer, ob, (int)r32(a+0x20), r32(a+0x1c)); found++;
          }
        }
        fprintf(stderr,"[OBJSCAN idx=%u] found=%d\n", want, found);
        return;
    }
    if (sub && sub[0]=='@'){   /* raw dump of GObjObjects entries (optionally from index sub+1) */
        uint32_t data=r32(0x101bd03c), num=r32(0x101bd040);
        uint32_t start = (sub[1])?(uint32_t)strtoul(sub+1,0,10):0;
        fprintf(stderr,"[OBJDUMP] GObjObjects Data=%08x Num=%u from=%u\n", data, num, start);
        for (uint32_t i=start;i<start+48;i++){
            uint32_t e=r32(data+i*4);
            char nb[80]={0}; if(e>=0x1000u&&e<G_MEM_SIZE) ename_str(r32(e+0x20), nb, (int)sizeof nb);
            fprintf(stderr,"   [%u] slot=%08x Name=%d(%s) Idx=%d Outer=%08x flags=%08x\n",
                    i, e, e>=0x1000u&&e<G_MEM_SIZE?(int)r32(e+0x20):0, nb,
                    e>=0x1000u&&e<G_MEM_SIZE?(int)r32(e+0x04):0,
                    e>=0x1000u&&e<G_MEM_SIZE?r32(e+0x18):0, e>=0x1000u&&e<G_MEM_SIZE?r32(e+0x1c):0);
        }
        /* also: brute-search all slots for the D3DRenderDevice pointer 0x10aca008 */
        int loc=-1; for(uint32_t i=0;i<4000;i++){ if(r32(data+i*4)==0x10aca008u){loc=(int)i;break;} }
        fprintf(stderr,"[OBJDUMP] 0x10aca008 (D3DRenderDevice) in GObjObjects at index: %d\n", loc);
        /* Is it in the name-hash GObjHash@0x101b75b8 (4096 buckets, HashNext=+0x08)?
         * StaticFindObjectFast walks this; an object in GObjObjects but NOT here is unfindable. */
        { uint32_t tg[3]={0x10aca008u,0x10bc4688u,0x101098c8u}; const char*tn[3]={"D3DRenderDevice","WindowsClient","Exporter#360"};
          for (int wi=0; wi<3; wi++){ uint32_t target=tg[wi]; int hb=-1, chainpos=-1;
            for (uint32_t b=0;b<4096 && hb<0;b++){ int m=0;
                for (uint32_t e=r32(0x101b75b8u+b*4); e>=0x1000u&&e<G_MEM_SIZE&&m<500; e=r32(e+0x08),m++)
                    if (e==target){ hb=(int)b; chainpos=m; break; } }
            fprintf(stderr,"[OBJDUMP] %08x (%s) Name=%d in name-hash bucket: %d (chainpos %d)\n",
                    target, tn[wi], target>=0x1000u&&target<G_MEM_SIZE?(int)r32(target+0x20):-1, hb, chainpos); } }
        return;
    }
    /* iterate the authoritative global object array GObjObjects (Data@0x101bd03c,
     * Num@0x101bd040). Each slot is a UObject*. CONFIRMED layout: +0x04=array Index
     * (set by AddObject), +0x18=Outer, +0x1c=ObjectFlags, +0x20=Name FName. */
    uint32_t data=r32(0x101bd03c), num=r32(0x101bd040);
    if (num<600) num=600;   /* scan past reported Num — free-list reuse places objects beyond it */
    int total=0, matched=0;
    for (uint32_t i=0;i<num && i<40000;i++){
        uint32_t e=r32(data+i*4); if(e<0x1000u||e>=G_MEM_SIZE) continue;
        total++;
        char nb[80]={0}; ename_str(r32(e+0x20), nb, (int)sizeof nb);
        int hit=0; if(sub&&sub[0]){ for(const char*p=nb;*p;p++){ const char*a=p,*s=sub;
            while(*a&&*s&&((*a|0x20)==(*s|0x20))){a++;s++;} if(!*s){hit=1;break;} } }
        if(hit){ matched++;
            uint32_t outer=r32(e+0x18); char ob[80]={0};
            if(outer>=0x1000&&outer<G_MEM_SIZE) ename_str(r32(outer+0x20), ob, (int)sizeof ob);
            uint32_t oo=(outer>=0x1000&&outer<G_MEM_SIZE)?r32(outer+0x18):0; char oob[80]={0};
            if(oo>=0x1000&&oo<G_MEM_SIZE) ename_str(r32(oo+0x20), oob, (int)sizeof oob);
            fprintf(stderr,"   [i%u] obj=%08x Name=%d(%s) Idx=%d Outer=%08x(%s) OuterOuter=%08x(%s) flags=%08x\n",
                    i, e, (int)r32(e+0x20), nb, (int)r32(e+0x04), outer, ob, oo, oob, r32(e+0x1c));
        }
    }
    fprintf(stderr,"[OBJARRAY '%s'] Data=%08x Num=%u scanned=%d matched=%d\n", sub?sub:"", data, r32(0x101bd040), total, matched);
}
/* exported for the shim layer's fatal-throw diagnostic (RaiseException) */
void sm2_hashscan(const char *sub){ hash_scan(sub); }
/* raw dump of one FName::Names[idx] entry: header dwords + the name at +0xc as
 * both a readable wide string and raw bytes (to expose a truncated/mangled name). */
void sm2_dump_fname(uint32_t idx){
    uint32_t arr=r32(0x101b68d0), num=r32(0x101b68d4);
    uint32_t e = (arr && idx<num) ? r32(arr+idx*4) : 0;
    fprintf(stderr,"[FNAME %u] entry=%08x", idx, e);
    if (e>=0x1000u && e<G_MEM_SIZE){
        fprintf(stderr," hdr:"); for(int i=0;i<3;i++) fprintf(stderr," +%02x=%08x", i*4, r32(e+i*4));
        fprintf(stderr,"  wide@+0xc=\"");
        for(int i=0;i<48;i++){ uint16_t c=r16(e+0xc+i*2); if(!c)break; fputc((c>=0x20&&c<0x7f)?(char)c:'.',stderr); }
        fprintf(stderr,"\"  u16[10..17]:");
        for(int i=10;i<=17;i++) fprintf(stderr," %u:%04x", i, r16(e+0xc+i*2));
    }
    fprintf(stderr,"\n");
}
/* SM2_INTERNLOG: trace the source name string handed to FName interning, to see
 * whether a class name (e.g. D3DRenderDevice) arrives already corrupted. */
int g_internlog = 0;
static void dump_wname(const char *tag, uint32_t s){
    fprintf(stderr,"[%s] str=%08x \"", tag, s);
    int i=0; for(; i<64; i++){ uint16_t c=r16(s+i*2); if(!c) break; fputc((c>=0x20&&c<0x7f)?(char)c:'?',stderr); }
    fprintf(stderr,"\" len=%d u16:", i);
    for(int k=0;k<i+1 && k<40;k++) fprintf(stderr," %04x", r16(s+k*2));
    fprintf(stderr,"\n");
}
static int wname_interesting(uint32_t s){
    char b[64]; int i=0; for(; i<63; i++){ uint16_t c=r16(s+i*2); if(!c||c>0x7f) break; b[i]=(char)c; } b[i]=0;
    return (strstr(b,"RenderDev")||strstr(b,"Client")||strstr(b,"D3D")) ? 1 : 0;
}
void x86_run(void) {
    uint64_t budget = g_step_budget;
    g_step_overflow = 0;
    const Op *o = 0;   /* op-chaining: carried across iterations (see step-advance below) */
    for (;;) {
        if (EIP == SENTINEL) return;
        if (EIP == TRAMP_SENT) return;     /* hybrid bridge: trampolined fn returned */
        { extern int g_halt; if (g_halt) { EIP = SENTINEL; return; } }  /* unimpl-op fault: clean stop */
        if (g_coop_yield) return;
        if (budget && --budget == 0) { g_step_overflow = 1; return; }
        if (__builtin_expect(g_diag_any, 0)) {   /* consolidated per-instruction diagnostics (hot path skips all) */
        if (g_log_on){
            if (EIP == 0x10049a14u) ue_log_hit("debugf");
            else if (EIP == 0x10049a93u) ue_log_hit("appErr");   /* the `call [edx]` Serialize site (was 0x..95 = post-call epilogue -> garbage args) */
        }
        if (g_trap && EIP == g_trap && g_trap_hits < 6000
            && (g_movie_armed || !g_movie_arm_gate)
            && (!g_trapif_on || r32(ESP+g_trapif_off)==g_trapif_val)){
            g_trap_hits++;
            fprintf(stderr,"[TRAP#%d] EIP=%08x EAX=%08x ECX=%08x EDX=%08x ESI=%08x EDI=%08x EBP=%08x ESP=%08x\n",
                    g_trap_hits, EIP, EAX, ECX, EDX, ESI, EDI, EBP, ESP);
            { uint32_t rv[5]={EAX,ECX,EDX,ESI,EDI}; const char*rn[5]={"EAX","ECX","EDX","ESI","EDI"};
              for(int i=0;i<5;i++){ fprintf(stderr,"   %s=%08x",rn[i],rv[i]); trap_str(rv[i]);
                uint32_t p=r32(rv[i]); if(p>=0x1000&&p<G_MEM_SIZE){ fprintf(stderr," ->"); trap_str(p);}
                /* if reg looks like a UObject, print its FName ([reg+0x20]) */
                if (rv[i]>=0x1000 && rv[i]<G_MEM_SIZE){ char nb[48]; ename_str(r32(rv[i]+0x20),nb,sizeof nb); if(nb[0]) fprintf(stderr," FName=%s", nb); }
                fprintf(stderr,"\n"); } }
            for (uint32_t i=0;i<12;i++){ uint32_t v=r32(ESP+i*4); fprintf(stderr,"   [esp+%02x]=%08x", i*4, v); trap_str(v);
                /* also try one deref: many UE2 appErrorf args are FString/TCHAR* */
                if (v>=0x1000 && v<G_MEM_SIZE){ uint32_t dv=r32(v); if(dv>=0x1000 && dv<G_MEM_SIZE){ fprintf(stderr,"  ->"); trap_str(dv);} }
                fprintf(stderr,"\n"); }
            if (getenv("SM2_TRAPOBJ")){ const char*w=getenv("SM2_TRAPOBJ");
              uint32_t o = (w[0]=='s')?ESI : (w[0]=='d')?EDX : ECX;
              fprintf(stderr,"   obj@%08x dwords:",o);
              for(int i=0;i<16;i++){ fprintf(stderr," +%02x=%08x", i*4, r32(o+i*4)); } fprintf(stderr,"\n");
              /* interpret +0x18 and +0x20 as candidate strings (registrant temp names) */
              for(int off=0x18; off<=0x24; off+=8){ uint32_t p=r32(o+off);
                fprintf(stderr,"     [+%02x]=%08x",off,p); trap_str(p); fprintf(stderr,"\n"); } }
            /* dump the formatted wide message that often sits inline on the stack */
            { fprintf(stderr,"   [wide@esp+0x10] \""); uint32_t p=ESP+0x10;
              for (int i=0;i<160;i++){ uint16_t c=r16(p+i*2); if(!c)break; fputc((c>=0x20&&c<0x7f)?(char)c:'.', stderr); }
              fprintf(stderr,"\"\n"); }
            sm2_stackwalk(ESP, 20);
        }
        /* SM2_VPLOCK: trace UWindowsViewport Lock(windrv+0x6143)/Unlock(windrv+0x62a4)
         * HoldCount transitions + caller, to catch the leaked lock behind the intro
         * movie's `check(!Viewport->HoldCount)` assert. */
        if (EIP == 0x10b76143u || EIP == 0x10b762a4u){
            static int on=-1; if(on<0) on=getenv("SM2_VPLOCK")?1:0;
            if(on){ int lock = (EIP==0x10b76143u);
                int oldc = (int)r32(ESI+0x1b0);   /* store/dec not executed yet */
                fprintf(stderr,"[VP%s] vp=%08x hc=%d->%d  ", lock?"LOCK":"UNLK",
                        ESI, oldc, lock?oldc+1:oldc-1);
                sm2_stackwalk(ESP, 6);
            }
        }
        if (g_internlog){
            /* FNameEntry creator entry (core+0x4e870): arg0=[esp+4]=source wide name */
            if (EIP == 0x1004e870u){ uint32_t s=r32(ESP+4); if (s>=0x1000u && s<G_MEM_SIZE && wname_interesting(s)) dump_wname("MKENTRY", s); }
            /* link-fn intern call site (core+0x60494): EDI=source name ptr pre-intern */
            else if (EIP == 0x10060494u){ if (EDI>=0x1000u && EDI<G_MEM_SIZE && wname_interesting(EDI)) dump_wname("INTERN-src", EDI); }
            /* FNameEntry creator RET (core+0x4e8ea): EAX=fresh entry; name at +0xc.
             * shows whether the copy itself already corrupted the stored name. */
            else if (EIP == 0x1004e8eau){ uint32_t e=EAX; if (e>=0x1000u && e+0xc<G_MEM_SIZE && wname_interesting(e+0xc)) dump_wname("MKENTRY-ret", e+0xc); }
            /* creator, just after the wcslen call (core+0x4e8a1): EAX=guest wcslen of
             * the name; compare to a host recount to catch a mis-executed wcslen that
             * under-sizes the allocation (heap overflow -> next alloc clobbers name). */
            else if (EIP == 0x1004e8a1u){ uint32_t nm=r32(EBP+8);
                if (nm>=0x1000u && nm<G_MEM_SIZE && wname_interesting(nm)){
                    int mylen=0; while (mylen<64 && r16(nm+mylen*2)) mylen++;
                    fprintf(stderr,"[STRLEN] guest_wcslen=%u host_recount=%d alloc=%u name@%08x\n",
                            EAX, mylen, EAX*2+14, nm);
                }
            }
            /* FMalloc binned pool routing (webhead+0x585c): EDI=pool for this size,
             * [EDI+8]=pool block size, [EBP+8]=requested size. A block size < request
             * means MemSizeToPoolTable routed the request to a too-small pool. */
            else if (EIP == 0x0040585cu){ uint32_t sz=r32(EBP+8);
                if (sz>=40 && sz<=52){ static int pc=0; if (pc<24){ pc++;
                    fprintf(stderr,"[POOL] req=%u pool=%08x blocksize=%u freehead=%08x\n",
                            sz, EDI, r32(EDI+8), EAX); } }
            }
            /* FMalloc fast-path returned block (webhead+0x405971, after `add ebx,ecx`):
             * EBX=block, ECX=FMemNode, EDX=remaining, [EDI+8]=blocksize. Verify the
             * interpreter computed block == node + blocksize*remaining, and surface the
             * allocations landing in D3DRenderDevice's entry region. */
            else if (EIP == 0x00405971u){ uint32_t node=ECX, rem=EDX, bs=r32(EDI+8), blk=EBX;
                uint32_t expect = node + bs*rem;
                if (blk != expect || (blk>=0x20031700u && blk<0x20031770u)){ static int c=0; if (c<24){ c++;
                    fprintf(stderr,"[FMALLOC] node=%08x rem=%u bs=%u blk=%08x expect=%08x%s\n",
                            node, rem, bs, blk, expect, blk!=expect?"  <<< MISMATCH":""); } }
            }
            /* allocator call site (core+0x4e8b6): EAX=requested size, EDX=FMalloc vtbl,
             * [EDX]=Malloc fn. Reveal the routing for the 44-byte D3DRenderDevice req. */
            else if (EIP == 0x1004e8b6u){ uint32_t nm=r32(EBP+8);
                if (nm>=0x1000u && nm<G_MEM_SIZE && wname_interesting(nm))
                    fprintf(stderr,"[ALLOC] size=%u FMalloc=%08x vtbl=%08x Malloc=%08x name@%08x\n",
                            EAX, r32(0x100c8cc0), EDX, r32(EDX), nm);
            }
        }
        /* FName-interning repair (default ON): the link-fn (core+0x60460) interns a
         * class/object's name via core+0x3774 -> FName index in EAX, then stores it to
         * [ESI+0x20]. For some names (e.g. editor "Exporter") the intern returns a stale
         * index whose FName::Names[] slot is NULL, so later GetName() = 0+0xc = 0xc and
         * the engine's reload loop throws. Here, just before the store, if the target
         * slot is NULL, synthesize a real FNameEntry from the name string still in
         * [ESI+0x20], so GetName yields the actual name and StaticLoadObject finds it. */
        if (g_fnamefix && EIP == 0x1006049cu){
            uint32_t idx = EAX, arr = r32(0x101b68d0), num = r32(0x101b68d4);
            if (arr && idx && idx < num && r32(arr + idx*4) == 0){
                uint32_t str = r32(ESI + 0x20);           /* wide name string (pre-store) */
                if (str >= 0x1000u && str < G_MEM_SIZE && r16(str) >= 0x20){
                    uint32_t e = sm2_gheap_alloc(0x120, 1);   /* FNameEntry: Index@+0, name WIDE@+0xc */
                    w32(e + 0, (uint32_t)idx);
                    int k=0; for (; k<140; k++){ uint16_t c=r16(str+k*2); w16(e+0xc+k*2, c); if(!c) break; }
                    w32(arr + idx*4, e);
                    if (getenv("SM2_FNAMEFIX_LOG")) fprintf(stderr,"[FNAMEFIX] Names[%u]=NULL -> synth entry %08x from str %08x\n", idx, e, str);
                }
            }
        }
        if (g_fnhealat && EIP == g_fnhealat && !g_fnheal_done){
            g_fnheal_done = 1;
            uint32_t arr = r32(0x101b68d0), num = r32(0x101b68d4);
            if (arr && num && num < 100000){
                uint32_t e = sm2_gheap_alloc(0x40, 1);   /* zeroed FNameEntry: +0xc = empty wide name */
                int healed = 0;
                for (uint32_t i = 1; i < num; i++){ uint32_t s = arr + i*4; if (r32(s) == 0){ w32(s, e); healed++; } }
                fprintf(stderr,"[FNHEAL] Names.Data=%08x Num=%u: healed %d NULL slots -> empty entry %08x\n", arr, num, healed, e);
            }
        }
        if (g_findat && EIP == g_findat && g_find_hits < 1){
            g_find_hits++;
            fprintf(stderr,"[FINDW] at EIP=%08x Num=%u:\n", EIP, r32(0x101bd040));
            fprintf(stderr,"[FINDW] 'RenderDevice' (known-good sanity):\n"); sm2_findw("RenderDevice", 4);
            fprintf(stderr,"[FINDW] 'D3DDrv.D3DRenderDevice' (config value):\n"); sm2_findw("D3DDrv.D3DRenderDevice", 4);
            fprintf(stderr,"[FINDW] 'D3DRenderDevice':\n"); sm2_findw("D3DRenderDevice", 4);
        }
        if (g_hashat && EIP == g_hashat && g_hash_hits < 3 && r32(0x101bd040) >= 355){
            g_hash_hits++;
            fprintf(stderr,"[HASHPROBE] (fired at GObjObjects.Num=%u)\n", r32(0x101bd040));
            fprintf(stderr,"[HASHPROBE] === hit #%d @EIP=%08x ===\n", g_hash_hits, EIP);
            if (g_hashobj)  hash_probe_one("target", g_hashobj);
            if (g_hashobj2) hash_probe_one("good  ", g_hashobj2);
            { const char *s=getenv("SM2_HASHFIND"); if (s){ char t[64]; unsigned i=0; for(;s[i]&&i<63;i++)t[i]=s[i]; t[i]=0;
                /* multiple substrings separated by ',' */
                char *seg=t; while(seg&&*seg){ char *c=seg; while(*c&&*c!=',')c++; char save=*c; *c=0; hash_scan(seg); *c=save; seg=save?c+1:0; } } }
        }
        if (++g_dbg_since_pump > 40000000ull && (g_dbg_since_pump % 40000000ull)==0 && g_dbg_dumps < 8) {
            g_dbg_dumps++;
            fprintf(stderr,"[HANG#%d] EIP=0x%08x prev=0x%08x ESP=0x%08x EAX=%08x ECX=%08x ESI=%08x EDI=%08x\n",
                    g_dbg_dumps, EIP, g_prev_eip, ESP, EAX, ECX, ESI, EDI);
            fprintf(stderr,"[HANG#%d] retchain:", g_dbg_dumps);
            int found=0;
            for (uint32_t i=0;i<512 && found<14;i++){ uint32_t v=r32(ESP+i*4); if(v>=0x401000u&&v<0x492000u){ fprintf(stderr," %08x", v); found++; } }
            fprintf(stderr,"\n");
        }
#ifdef LK2_PROF
        { uint32_t off = EIP - 0x00400000u; if (off < 0x00080000u) g_prof[off >> 8]++; }
#endif
#ifdef LK2_DIAG
        /* Per-instruction scene-tick hit counters (read via lk2_counter 26-31). Pure
         * diagnostics — compiled OUT of the shipped build so the hot loop does not pay
         * ~7 compares per guest instruction (this is on the global perf path). */
        switch (EIP) {
            case 0x0042b990u: g_hit_navtick++; break;   /* Nav per-frame tick FUN_0042b990 */
            case 0x004284e0u: g_hit_xtrans++;  break;   /* transition executor FUN_004284e0 */
            case 0x004277f0u: g_hit_setnext++; break;   /* set-next-scene FUN_004277f0 */
            case 0x00471c90u: g_hit_vidtick++; break;   /* video player tick FUN_00471c90 */
            case 0x0042d020u: g_hit_click++;   break;   /* Nav table click handler FUN_0042d020 */
            case 0x0042d330u: g_hit_vidcb++;   break;   /* end-of-video callback FUN_0042d330 */
            case 0x0042c420u: g_hit_critter++; break;   /* runner-critter anim callback FUN_0042c420 */
            default: break;
        }
#endif
        if (EIP == 0x10b76143u) g_movie_armed = 1;   /* arm at the (single) viewport Lock */
        if (g_thi && EIP >= g_tlo && EIP < g_thi && (g_movie_armed || !g_movie_arm_gate)) {
            const Op *t = op_at(EIP);
            fprintf(stderr, "R %08x cls=%3d esi=%08x ecx=%08x esp=%08x eax=%08x\n",
                    EIP, t?t->cls:-1, ESI, ECX, ESP, EAX);
        }
        if (g_trace_n > 0 && (g_movie_armed || !g_movie_arm_gate)) {
            const Op *t = op_at(EIP);
            if (t && (t->cls == OP_CALL || t->cls == OP_RET)) {
                uint32_t tgt = 0;
                if (t->cls == OP_CALL) tgt = (t->flags & TGTF_DIRECT) ? t->opnd[0].imm
                                          : (t->opnd[0].kind==OPK_REG ? reg_rd(t->opnd[0].reg,4)
                                             : t->opnd[0].kind==OPK_MEM ? r32(ea(&t->opnd[0])) : 0);
                fprintf(stderr, "%s %08x tgt=%08x esp=%08x esi=%08x eax=%08x\n",
                        t->cls==OP_CALL?"CALL":"RET ", EIP, tgt, ESP, ESI, EAX);
                g_trace_n--;
            }
        }
        }   /* end consolidated diagnostics (g_diag_any) */
        if (!o) o = op_at(EIP);   /* chained from the previous step, else hash-lookup */
        if (!o) {
            /* A NULL guest target (EIP==0) or a tiny EIP is a call/jmp through an
             * uninitialized function pointer / unfilled COM vtable slot — NOT a
             * decode gap. Report the branching site so it can be diagnosed; the
             * shim dispatcher only handles the 0xFF000000 synthetic range. */
            if (EIP < 0x00400000u) {
                static int diagn = 0;
                if (diagn++ < 4) {
                    fprintf(stderr, "[diag] branch to 0x%08x from prev EIP=0x%08x "
                            "(null/garbage) EAX=%08x ECX=%08x EDX=%08x ESI=%08x EDI=%08x EBP=%08x ESP=%08x\n",
                            EIP, g_prev_eip, EAX, ECX, EDX, ESI, EDI, EBP, ESP);
                    fprintf(stderr, "[diag] stack:");
                    for (uint32_t i = 0; i < 16; i++) fprintf(stderr, " [%02x]=%08x", i*4, r32(ESP + i*4));
                    fprintf(stderr, "\n");
                }
            }
            if (g_shim_dispatch) {
#ifdef LK2_EHTRACE
                uint32_t shim_va = EIP;
#endif
                EIP = g_shim_dispatch(EIP);
#ifdef LK2_EHTRACE
                ehw_push(3, shim_va, EIP, ESP);
                if (!g_ehw_dumped && EIP == 0x004794b8u) {
                    g_ehw_dumped = 1;
                    fprintf(stderr, "[ehw] ENTER __except_handler3 via SHIM ESP=%08x ret=%08x pExc=%08x pRN=%08x pCtx=%08x\n",
                            ESP, r32(ESP), r32(ESP+4), r32(ESP+8), r32(ESP+12));
                    ehw_dump("first entry to 0x4794b8 (shim path)");
                }
#endif
                continue;
            }
            x86_unimpl("no Op at EIP (IAT thunk without shim, or decode gap)");
            return;
        }
        g_prev_eip = EIP;
#ifdef LK2_EHTRACE
        uint8_t dbg_cls = o->cls; uint32_t dbg_src = EIP;
        /* Arm a per-instruction trace of __strcmpi when it is entered to compare an
         * EMPTY cached string against a NON-empty name (the suspicious case that
         * wrongly matched). At entry [ESP+4]=cached, [ESP+8]=name. */
        if (EIP == 0x0047e0d0u && g_sc_runs < 4) {
            uint32_t cached = r32(ESP + 4), name = r32(ESP + 8);
            if (r8(cached) == 0 && r8(name) != 0) {
                g_sc_trace = 60; g_sc_runs++;
                fprintf(stderr, "[sc] __strcmpi ENTER cached=%08x('') name=%08x firstbyte=%02x locale[4944c0]=%08x\n",
                        cached, name, r8(name), r32(0x4944c0));
            }
        }
        if (g_sc_trace > 0 && EIP >= 0x0047e0d0u && EIP < 0x0047e160u) {
            fprintf(stderr, "[sc] %08x eax=%08x ebx=%08x ecx=%08x esi=%08x edi=%08x  ZF=%d CF=%d SF=%d OF=%d\n",
                    EIP, EAX, C.b.d, ECX, ESI, EDI, C.zf, C.cf, C.sf, C.of);
            g_sc_trace--;
        }
#endif
        if (g_profh && EIP < 0x10e40000u) g_profh[EIP >> 6]++;   /* SM2_PROF self-time histogram */
        uint32_t neip = step(o);
        /* op-chaining: pick the next Op via a cached pointer instead of hashing
         * op_at() every instruction. Sequential fall-through and taken direct
         * branches (the vast majority) hit the `nxt`/`br` caches; indirect
         * branches/ret/shims reset o so the loop top does the hash lookup. */
        if (neip == o->nextva) {
            const Op *nx = o->nxt;
            if (!nx) { nx = op_at(neip); if (nx) ((Op *)o)->nxt = nx; }
            o = nx;
        } else if ((o->flags & TGTF_DIRECT) && neip == o->opnd[0].imm) {
            const Op *nx = o->br;
            if (!nx) { nx = op_at(neip); if (nx) ((Op *)o)->br = nx; }
            o = nx;
        } else {
            o = 0;
        }
        EIP = neip;
#ifdef LK2_EHTRACE
        if (dbg_cls == OP_CALL)      ehw_push(1, dbg_src, EIP, ESP);
        else if (dbg_cls == OP_RET)  ehw_push(2, dbg_src, EIP, ESP);
        /* FUN_0045a7d0 resource find-or-create: log every entry (lookup name) and
         * the match-return point 0x0045a99e (matched cached entry name + object) so
         * we can tell a real cached-NULL from a false strcmpi match. */
        if (EIP == 0x0045a7d0u && g_b210dbg < 40) {
            char nm[40]; ehw_gstr(r32(ESP + 4), nm, sizeof nm);
            fprintf(stderr, "[res] FUN_0045a7d0 lookup name='%s' (esp=%08x)\n", nm, ESP);
            g_b210dbg++;
        }
        if (EIP == 0x0045a99eu && g_b210dbg2 < 40) {
            uint32_t ebp = C.bp.d, esi = C.si.d, ebx = C.b.d;
            uint32_t slot = ebp + esi * 8;
            uint32_t cachedNamePtr = r32(r32(slot));   /* *(entry.field0) */
            uint32_t obj = r32(slot + 4);
            char want[40], have[40];
            ehw_gstr(ebx, want, sizeof want);
            ehw_gstr(cachedNamePtr, have, sizeof have);
            fprintf(stderr, "[res] MATCH idx=%u want='%s' cached='%s' object=%08x%s\n",
                    esi, want, have, obj, obj == 0 ? "  <-- NULL OBJECT" : "");
            g_b210dbg2++;
        }
        /* record entry into FUN_0046b210(this=ecx, param_1=[esp+4]) — __thiscall */
        if (EIP == 0x0046b210u) {
            uint32_t p1 = r32(ESP + 4);
            uint32_t vt = p1 ? r32(p1) : 0;
            uint32_t s = g_b210_i % B210_N;
            g_b210[s].caller = r32(ESP); g_b210[s].p1 = p1;
            g_b210[s].vt = vt; g_b210[s].slot1 = vt ? r32(vt + 4) : 0;
            g_b210_i++;
        }
        /* trigger: first time control is anywhere inside __except_handler3 body */
        if (!g_ehw_dumped && EIP >= 0x004794b8u && EIP < 0x00479575u) {
            g_ehw_dumped = 1;
            fprintf(stderr, "[ehw] ENTER __except_handler3 @%08x from %08x (cls=%d) ESP=%08x ret=%08x pExc=%08x pRN=%08x pCtx=%08x\n",
                    EIP, dbg_src, dbg_cls, ESP, r32(ESP), r32(ESP+4), r32(ESP+8), r32(ESP+12));
            ehw_dump("first entry to __except_handler3");
        }
#endif
    }
}

/* Enter a guest function at `va` and run until its `ret` returns to the caller.
 *
 * CONVENTION (matches Unicorn's emu_start(va, SENT) and the recompiler's direct
 * f_xxx() call): the SENTINEL return address is ALREADY on the stack at [ESP]
 * when entering — the caller placed it, exactly as a real `call` would have. We
 * therefore do NOT push here; we just set EIP and run. The function's own `ret`
 * pops that sentinel into EIP (and adds its N), and x86_run stops. Final ESP is
 * ESP_entry + 4 (+N), identical to the oracle. (If a caller instead wants true
 * call semantics with the push, it should push32(retaddr) itself before this.) */
void x86_call(uint32_t va) {
    EIP = va;
    x86_run();
}

/* HYBRID RECOMPILER BRIDGE -----------------------------------------------------
 * Run ONE guest function (and its entire call subtree) in the KNOWN-GOOD
 * interpreter, then hand control back to the compiled (recompiled) caller. Used
 * for functions whose *static* translation diverges from the oracle — chiefly the
 * statically-linked MSVC CRT (fopen/_open/_sopen, heap, stdio), which is large and
 * full of edge cases.  The compiled caller already executed `push32(retva);
 * f_xxx();`, so the return address sits at [ESP] exactly as a real `call` leaves
 * it.  We overwrite that slot with SENTINEL so x86_run() halts the instant THIS
 * function's own `ret N` fires; the ret balances ESP identically to the compiled
 * body would, and EAX carries the result straight back to the C caller.  Nested
 * calls, IAT shims and SEH are all handled by x86_run() itself. */
void x86_trampoline(uint32_t va) {
    uint64_t sb = g_step_budget;
    g_step_budget = 0;                 /* unbounded: run to this function's ret */
    uint32_t ret = r32(ESP);           /* real return addr the compiled caller pushed */
    uint32_t arg0 = r32(ESP + 4);      /* (diag) first stack arg */
    w32(ESP, TRAMP_SENT);              /* DISTINCT from SENTINEL(=ExitProcess marker) */
    EIP = va;
    x86_run();                         /* stops at TRAMP_SENT (ret) or SENTINEL (exit) */
    g_step_budget = sb;
#ifdef FTRACE_ON
    { static int tn = 0; if (tn < 60) { tn++;
        fprintf(stderr, "[tramp] f_%08x(arg0=%08x ecx=%08x) -> EAX=%08x ESP=%08x\n",
                va, arg0, C.c.d, EAX, ESP); } }
#else
    (void)arg0;
#endif
    if (EIP == SENTINEL) longjmp(g_recomp_exit, 1);  /* real ExitProcess inside subtree */
    EIP = ret;                         /* normal return: restore a sane, non-sentinel EIP
                                        * so the next compiled shim call does NOT misread
                                        * a stale 0xDEADBEEF as ExitProcess. */
}
