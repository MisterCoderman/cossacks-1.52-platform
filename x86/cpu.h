/* cpu.h — runtime substrate for the static x86->WASM recompilation of SPAG.exe.
 *
 * APPROACH (faithful by construction): we do NOT translate decompiled C and we
 * do NOT reconstruct function signatures / calling conventions. Each original
 * x86 function is transpiled to `void f_0040XXXX(void)` that mutates this global
 * CPU state and the flat guest memory exactly like the real CPU. Arguments,
 * `this` (ECX), return values (EAX), and the call stack all live in guest memory
 * via ESP — so __thiscall/__cdecl/dropped-this are NON-ISSUES. Only the 9
 * imported DLLs are native shims, trapped at their IAT thunk addresses.
 *
 * Guest address space = one flat buffer `g_mem` (offset == guest virtual addr):
 *   stack  : grows down from G_STACK_TOP
 *   image  : SPAG.exe sections at their real VAs (0x00400000 base)
 *   heap   : HeapAlloc/GlobalAlloc/malloc shims hand out >= G_HEAP_BASE
 */
#ifndef LK2_X86_CPU_H
#define LK2_X86_CPU_H

#include <stdint.h>
#include <string.h>

/* ---- guest memory (Cossacks plugin-DLL guest world) --------------------- *
 * The native engine is the host; the x86 AI/mission DLLs are the GUEST, loaded
 * into this flat span. DLLs live from 0x10000000 (their PE preferred base; each
 * additional DLL is relocated to a distinct base above it). Stack low, heap high. */
#define G_MEM_SIZE   0x20000000u      /* 512 MB (power-of-two for GMASK) */
#define G_IMAGE_BASE 0x10000000u      /* first DLL preferred base */
#define G_STACK_TOP  0x00300000u      /* esp starts here, grows down */
#define G_HEAP_BASE  0x18000000u      /* guest heap: after the DLL image region */

extern uint8_t *g_mem;                /* G_MEM_SIZE bytes, calloc'd at startup */

/* All guest addresses wrap into the flat G_MEM_SIZE buffer (power of two), so
 * every 32-bit address is valid backing store. Real pointers are always
 * in-range (mask is a no-op); only synthetic test inits produce huge values,
 * and the differential oracle mirrors this wrap in Unicorn (map-on-demand). */
#define GMASK (G_MEM_SIZE - 1u)
static inline uint8_t  *gp(uint32_t a) { return g_mem + (a & GMASK); }
static inline uint8_t   r8 (uint32_t a){ return *(uint8_t *)(g_mem + (a & GMASK)); }
static inline uint16_t  r16(uint32_t a){ return *(uint16_t*)(g_mem + (a & GMASK)); }
static inline uint32_t  r32(uint32_t a){ return *(uint32_t*)(g_mem + (a & GMASK)); }
/* Optional write-watchpoint: when g_watchw_active!=0 and the masked address falls
 * in [g_watchw_lo, g_watchw_hi), lk2_watch_hit(addr,val,size) records the writing
 * EIP. Off by default (the differential oracle never arms it), so the branch is a
 * predicted-not-taken no-op. Diagnostic only — does not alter the stored value. */
extern int      g_watchw_active;
extern uint32_t g_watchw_lo, g_watchw_hi;
void lk2_watch_hit(uint32_t a, uint32_t v, int size);
static inline void      w8 (uint32_t a, uint8_t  v){ uint32_t m=a&GMASK; if(__builtin_expect(g_watchw_active,0)&&m>=g_watchw_lo&&m<g_watchw_hi)lk2_watch_hit(m,v,1); *(uint8_t *)(g_mem + m)=v; }
static inline void      w16(uint32_t a, uint16_t v){ uint32_t m=a&GMASK; if(__builtin_expect(g_watchw_active,0)&&m>=g_watchw_lo&&m<g_watchw_hi)lk2_watch_hit(m,v,2); *(uint16_t*)(g_mem + m)=v; }
static inline void      w32(uint32_t a, uint32_t v){ uint32_t m=a&GMASK; if(__builtin_expect(g_watchw_active,0)&&m>=g_watchw_lo&&m<g_watchw_hi)lk2_watch_hit(m,v,4); *(uint32_t*)(g_mem + m)=v; }
/* float/double memory access for x87 (image is little-endian, host is too) */
static inline float     rf32(uint32_t a){ float  v; memcpy(&v, g_mem+(a&GMASK), 4); return v; }
static inline double    rf64(uint32_t a){ double v; memcpy(&v, g_mem+(a&GMASK), 8); return v; }
static inline void      wf32(uint32_t a, float  v){ memcpy(g_mem+(a&GMASK), &v, 4); }
static inline void      wf64(uint32_t a, double v){ memcpy(g_mem+(a&GMASK), &v, 8); }
/* 80-bit extended (long double) <-> double, for fld/fstp tbyte memory operands */
static inline double rf80(uint32_t a){
    uint8_t b[10]; memcpy(b, g_mem+(a&GMASK), 10);
    uint64_t m = (uint64_t)b[0] | ((uint64_t)b[1]<<8) | ((uint64_t)b[2]<<16) | ((uint64_t)b[3]<<24)
               | ((uint64_t)b[4]<<32) | ((uint64_t)b[5]<<40) | ((uint64_t)b[6]<<48) | ((uint64_t)b[7]<<56);
    uint32_t se = (uint32_t)b[8] | ((uint32_t)b[9]<<8);
    int sign = (se>>15)&1; int exp = se & 0x7fff;
    double r;
    if (exp==0 && m==0) r = 0.0;
    else if (exp==0x7fff){ r = (m==(1ull<<63)) ? __builtin_inf() : __builtin_nan(""); }
    else { r = __builtin_ldexp((double)m, exp-16383-63); }
    return sign ? -r : r;
}
static inline void wf80(uint32_t a, double v){
    uint8_t b[10]; uint64_t m; uint32_t se;
    int sign = __builtin_signbit(v) ? 1 : 0;
    double av = sign ? -v : v;
    if (v != v){ m=(1ull<<63)|(1ull<<62); se=0x7fff; }          /* NaN */
    else if (__builtin_isinf(v)){ m=(1ull<<63); se=0x7fff; }     /* Inf */
    else if (av==0.0){ m=0; se=0; }
    else {
        int e; double frac = __builtin_frexp(av, &e);            /* av = frac*2^e, 0.5<=frac<1 */
        /* extended: 1.f * 2^(E-16383); mantissa is 64-bit with explicit int bit */
        m = (uint64_t)__builtin_ldexp(frac, 64);                 /* frac*2^64 -> top bit set */
        se = (uint32_t)(e - 1 + 16383) & 0x7fff;
    }
    if (sign) se |= 0x8000;
    b[0]=m&0xff; b[1]=(m>>8)&0xff; b[2]=(m>>16)&0xff; b[3]=(m>>24)&0xff;
    b[4]=(m>>32)&0xff; b[5]=(m>>40)&0xff; b[6]=(m>>48)&0xff; b[7]=(m>>56)&0xff;
    b[8]=se&0xff; b[9]=(se>>8)&0xff;
    memcpy(g_mem+(a&GMASK), b, 10);
}

/* ---- registers (8/16/32-bit aliasing via union) ------------------------- */
typedef union { uint32_t d; uint16_t w; struct { uint8_t l, h; } b; } Reg;

typedef struct {
    Reg a, c, d, b;           /* EAX ECX EDX EBX */
    Reg sp, bp, si, di;       /* ESP EBP ESI EDI (union for 16-bit sp/bp/si/di) */
    /* lazily/eagerly maintained arithmetic flags (1/0) */
    uint32_t cf, pf, af, zf, sf, of, df;
    /* x87 FPU: 8-deep register stack of doubles + top index + status C-bits */
    double st[8]; int fptop; uint32_t fsw_c0, fsw_c1, fsw_c2, fsw_c3;
    uint16_t fcw;             /* control word (fldcw/fnstcw round-trip) */
    uint64_t mm[8];           /* MMX registers (SM2 interp.c OP_MMX path; missions rarely use MMX,
                               * but the field must exist for interp.c to compile against this Cpu) */
    uint16_t seg_es, seg_cs, seg_ss, seg_ds, seg_fs, seg_gs;  /* opaque (flat model) */
} Cpu;

extern Cpu C;
extern uint32_t EIP;   /* instruction pointer — defined in interp.c; shared with cos_bridge/cos_shims
                        * so the hybrid cos_call and the interpreter shim-bridge can set/read it */

#define EAX C.a.d
#define ECX C.c.d
#define EDX C.d.d
#define EBX C.b.d
#define ESP C.sp.d
#define EBP C.bp.d
#define ESI C.si.d
#define EDI C.di.d
#define SP  C.sp.w
#define BP  C.bp.w
#define SI  C.si.w
#define DI  C.di.w
#define AX  C.a.w
#define CX  C.c.w
#define DX  C.d.w
#define BX  C.b.w
#define AL  C.a.b.l
#define AH  C.a.b.h
#define CL  C.c.b.l
#define DL  C.d.b.l
#define BL  C.b.b.l

/* ---- stack ops ---------------------------------------------------------- */
static inline void push32(uint32_t v){ ESP -= 4; w32(ESP, v); }
static inline uint32_t pop32(void){ uint32_t v = r32(ESP); ESP += 4; return v; }

/* ---- x87 FPU stack (model: doubles; ST(i) = st[(fptop+i)&7]) ------------- *
 * fptop is the index of ST(0) in st[]; push pre-decrements, pop increments.
 * We track C0/C1/C2/C3 condition bits for fcom/fnstsw/ftst; fnstsw composes
 * them (with the top-of-stack field) into the 16-bit status word in AX. */
#define FPU_ST(i)  C.st[(C.fptop + (i)) & 7]
static inline void   fpu_push(double v){ C.fptop=(C.fptop-1)&7; C.st[C.fptop]=v; }
static inline double fpu_pop(void){ double v=C.st[C.fptop]; C.fptop=(C.fptop+1)&7; return v; }
/* x87 compare: set C3/C2/C0 per FCOM (C1=0). NaN -> all set (unordered). */
static inline void fpu_cmp(double a, double b){
    C.fsw_c1=0;
    if (a>b){ C.fsw_c3=0; C.fsw_c2=0; C.fsw_c0=0; }
    else if (a<b){ C.fsw_c3=0; C.fsw_c2=0; C.fsw_c0=1; }
    else if (a==b){ C.fsw_c3=1; C.fsw_c2=0; C.fsw_c0=0; }
    else { C.fsw_c3=1; C.fsw_c2=1; C.fsw_c0=1; }   /* unordered */
}
/* compose the 16-bit FPU status word: C3 C2 C1 C0 + TOP(bits 11-13). */
static inline uint16_t fpu_status(void){
    uint16_t sw=0;
    if (C.fsw_c0) sw|=(1u<<8);
    if (C.fsw_c1) sw|=(1u<<9);
    if (C.fsw_c2) sw|=(1u<<10);
    if (C.fsw_c3) sw|=(1u<<14);
    sw |= ((uint16_t)(C.fptop & 7))<<11;
    return sw;
}
/* x87 store-integer conversion (fist/fistp): round per RC, and on out-of-range
 * or NaN store the "integer indefinite" (0x8000.. for the width), matching the
 * masked invalid-operation response of the real FPU. */
static inline double fpu_rndint(double x);
static inline int16_t  fpu_to_i16(double x){
    if (x!=x) return (int16_t)0x8000;
    double r=fpu_rndint(x);
    if (r < -32768.0 || r > 32767.0) return (int16_t)0x8000;
    return (int16_t)r;
}
static inline int32_t  fpu_to_i32(double x){
    if (x!=x) return (int32_t)0x80000000u;
    double r=fpu_rndint(x);
    if (r < -2147483648.0 || r >= 2147483648.0) return (int32_t)0x80000000u;
    return (int32_t)r;
}
static inline int64_t  fpu_to_i64(double x){
    if (x!=x) return (int64_t)0x8000000000000000ull;
    double r=fpu_rndint(x);
    if (r < -9223372036854775808.0 || r >= 9223372036854775808.0) return (int64_t)0x8000000000000000ull;
    return (int64_t)r;
}

/* round to integer using the current control word's RC field (bits 10-11). */
static inline double fpu_rndint(double x){
    uint32_t rc=(C.fcw>>10)&3;
    double r;
    switch(rc){
      case 0: { /* round to nearest, ties to even */
                double f=__builtin_floor(x), d=x-f;
                if (d<0.5) r=f; else if (d>0.5) r=f+1.0;
                else { r=(__builtin_floor(f*0.5)*2.0==f)?f:f+1.0; } break; }
      case 1: r=__builtin_floor(x); break;            /* round down */
      case 2: r=__builtin_ceil(x); break;             /* round up   */
      default: r=__builtin_trunc(x); break;           /* round toward zero */
    }
    return r;
}

/* ---- flag helpers (eager; widths 8/16/32) ------------------------------- */
static inline uint32_t parity8(uint32_t v){ v&=0xff; v^=v>>4; v^=v>>2; v^=v>>1; return (~v)&1; }

static inline void fl_logic(uint32_t res, int bits){
    C.cf=0; C.of=0; C.af=0;
    C.zf = (res & ((bits==32)?0xffffffffu:(bits==16)?0xffffu:0xffu))==0;
    C.sf = (res >> (bits-1)) & 1;
    C.pf = parity8(res);
}
static inline void fl_add(uint32_t a, uint32_t bb, uint32_t res, int bits){
    uint32_t msb=1u<<(bits-1), mask=(bits==32)?0xffffffffu:(bits==16)?0xffffu:0xffu;
    res&=mask; a&=mask; bb&=mask;
    C.cf = res < a;                      /* unsigned wrap */
    C.of = (~(a^bb) & (a^res) & msb)!=0;
    C.af = ((a^bb^res) & 0x10)!=0;
    C.zf = res==0; C.sf=(res>>(bits-1))&1; C.pf=parity8(res);
}
static inline void fl_sub(uint32_t a, uint32_t bb, uint32_t res, int bits){
    uint32_t msb=1u<<(bits-1), mask=(bits==32)?0xffffffffu:(bits==16)?0xffffu:0xffu;
    res&=mask; a&=mask; bb&=mask;
    C.cf = a < bb;
    C.of = ((a^bb) & (a^res) & msb)!=0;
    C.af = ((a^bb^res) & 0x10)!=0;
    C.zf = res==0; C.sf=(res>>(bits-1))&1; C.pf=parity8(res);
}
/* inc/dec preserve CF */
static inline void fl_inc(uint32_t res, int bits){ uint32_t cf=C.cf; fl_add(res-1,1,res,bits); C.cf=cf; }
static inline void fl_dec(uint32_t res, int bits){ uint32_t cf=C.cf; fl_sub(res+1,1,res,bits); C.cf=cf; }

/* ---- shifts (count already masked to 5 bits) ---------------------------- *
 * count==0 leaves all flags unchanged; otherwise CF=last bit shifted out,
 * OF defined only for count==1, and SF/ZF/PF from the result. */
static inline uint32_t sh_mask(int bits){ return bits==32?0xffffffffu:bits==16?0xffffu:0xffu; }
static inline uint32_t sh_shl(uint32_t v, uint32_t cnt, int bits){
    uint32_t mask=sh_mask(bits); v&=mask;
    if(!cnt) return v;
    uint32_t cf = (cnt<=(uint32_t)bits) ? ((v>>(bits-cnt))&1) : 0;
    uint32_t r=(v<<cnt)&mask;
    fl_logic(r,bits); C.cf=cf;
    if(cnt==1) C.of=((r>>(bits-1))&1)^cf;
    return r;
}
static inline uint32_t sh_shr(uint32_t v, uint32_t cnt, int bits){
    uint32_t mask=sh_mask(bits); v&=mask;
    if(!cnt) return v;
    uint32_t cf = (cnt<=(uint32_t)bits) ? ((v>>(cnt-1))&1) : 0;
    uint32_t r=(v>>cnt)&mask;
    fl_logic(r,bits); C.cf=cf;
    if(cnt==1) C.of=(v>>(bits-1))&1;
    return r;
}
/* double-precision shifts SHLD/SHRD (count masked to 5 bits by caller). */
static inline uint32_t sh_shld(uint32_t dst, uint32_t src, uint32_t cnt, int bits){
    uint32_t mask=sh_mask(bits); dst&=mask; src&=mask;
    if(!cnt) return dst;
    if(cnt>(uint32_t)bits){ fl_logic(0,bits); return 0; } /* undefined; mirror typical */
    uint32_t cf=(dst>>(bits-cnt))&1;
    uint64_t big=((uint64_t)dst<<bits)|src;          /* dst:src, shift left, take top */
    uint32_t r=(uint32_t)((big<<cnt)>>bits)&mask;
    fl_logic(r,bits); C.cf=cf;
    if(cnt==1) C.of=(((r>>(bits-1))&1)^cf);
    return r;
}
static inline uint32_t sh_shrd(uint32_t dst, uint32_t src, uint32_t cnt, int bits){
    uint32_t mask=sh_mask(bits); dst&=mask; src&=mask;
    if(!cnt) return dst;
    if(cnt>(uint32_t)bits){ fl_logic(0,bits); return 0; }
    uint32_t cf=(dst>>(cnt-1))&1;
    uint64_t big=((uint64_t)src<<bits)|dst;          /* src:dst, shift right, take bottom */
    uint32_t r=(uint32_t)(big>>cnt)&mask;
    fl_logic(r,bits); C.cf=cf;
    if(cnt==1) C.of=((dst>>(bits-1))&1)^((r>>(bits-1))&1);
    return r;
}
static inline uint32_t sh_sar(uint32_t v, uint32_t cnt, int bits){
    uint32_t mask=sh_mask(bits); v&=mask;
    if(!cnt) return v;
    /* sign-extend v to 32 bits, arithmetic shift */
    int32_t sv = (bits==32)?(int32_t)v : (bits==16)?(int32_t)(int16_t)v : (int32_t)(int8_t)v;
    uint32_t sh = (cnt<(uint32_t)bits)?cnt:(uint32_t)(bits-1);
    uint32_t cf = (uint32_t)(sv>>((cnt-1<(uint32_t)bits)?(cnt-1):(uint32_t)(bits-1)))&1;
    uint32_t r=((uint32_t)(sv>>sh))&mask;
    fl_logic(r,bits); C.cf=cf;
    if(cnt==1) C.of=0;
    return r;
}

/* ---- call / dispatch ----------------------------------------------------
 * Direct calls are emitted as `push32(retva); f_0040XXXX();`. Indirect
 * calls/jumps resolve a runtime address to either a native import shim or a
 * transpiled function via the address->thunk table (gen_dispatch.c). A target
 * with no entry aborts loudly (never silently guessed). */
typedef void (*x86fn)(void);
x86fn x86_resolve(uint32_t addr);     /* gen_dispatch.c; aborts if unknown */
static inline void call_ind(uint32_t addr, uint32_t retva){ push32(retva); x86_resolve(addr)(); }
static inline void jmp_ind (uint32_t addr){ x86_resolve(addr)(); }   /* tail (incl. switch thunks) */

/* load image sections + zero bss; set up stack. dataDir holds text/rdata/data.bin */
int  x86_mem_init(const char *dataDir);
/* restore guest memory to its exact post-init state (image + zeros elsewhere) */
void x86_mem_reset(void);

/* loud stop for any not-yet-translated mnemonic (never silent). */
void x86_unimpl(const char *what);

#endif /* LK2_X86_CPU_H */
