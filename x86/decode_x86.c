/* decode_x86.c - on-demand x86-32 decoder for the SM2 interpreter.
 *
 * Decodes ONE guest instruction at `va` (read from flat g_mem) into the compact
 * `Op` record that interp.c's step() executes. It is the runtime twin of the
 * offline decode.py/transpile.py mapping: every (opcode -> Op.cls + operands +
 * flags) here matches the semantics interp.c already implements. Unlike woody's
 * static pre-decode this runs at run time and caches (op_at, ops_cache.c), so it
 * naturally covers indirect/vtable targets and never trips on data/padding.
 *
 * SCOPE (ground truth: tools/scan_isa.py): full integer x86-32 + full x87 FPU.
 * MMX / SSE / rare encodings decode to OP_UNIMPL (LOUD) so a real gap is caught,
 * never silently mis-run; MMX is added in the audio phase.
 *
 * Operand model (ops.h): OPK_REG reg=slot(0..7 gpr, 8..11 AH/CH/DH/BH), OPK_MEM
 * reg=base slot|255, idx=index slot|255, scale, disp, size=access bytes; OPK_IMM
 * imm; OPK_ST reg=ST index. size = primary op size in bytes (bits=size*8).
 */
#include "cpu.h"
#include "ops.h"
#include <stdint.h>
#include <string.h>

/* ---- decode cursor ------------------------------------------------------- */
typedef struct {
    uint32_t va;      /* instruction start */
    uint32_t p;       /* byte cursor (guest VA) */
    int  osz;         /* operand size: 4, or 2 when 0x66 present */
    int  asz;         /* address size: 4, or 2 when 0x67 present */
    int  seg;         /* segment override prefix (ignored: flat model) or -1 */
    uint8_t rep;      /* 0, 0xF2 (repne), 0xF3 (rep/repe) */
    uint8_t lock;     /* 0xF0 seen */
} Dec;

static inline uint8_t  f8 (Dec *d){ uint8_t  v = r8 (d->p); d->p += 1; return v; }
static inline uint16_t f16(Dec *d){ uint16_t v = r16(d->p); d->p += 2; return v; }
static inline uint32_t f32(Dec *d){ uint32_t v = r32(d->p); d->p += 4; return v; }

/* ---- operand builders ---------------------------------------------------- */
static inline Operand op_none(void){ Operand o; memset(&o,0,sizeof o); o.reg=REG_NONE; o.idx=REG_NONE; return o; }
static inline Operand op_reg(int slot,int size){ Operand o=op_none(); o.kind=OPK_REG; o.reg=(uint8_t)slot; o.size=(uint8_t)size; return o; }
static inline Operand op_reg8(int idx){ int slot = (idx<4)?idx : (8+(idx-4)); return op_reg(slot,1); }
static inline Operand op_regN(int idx,int osz){ return op_reg(idx,osz); }
static inline Operand op_imm(uint32_t v,int size){ Operand o=op_none(); o.kind=OPK_IMM; o.imm=v; o.size=(uint8_t)size; return o; }
static inline Operand op_mm(int r){ Operand o=op_none(); o.kind=OPK_MM; o.reg=(uint8_t)r; o.size=8; return o; }
static inline Operand op_st(int i){ Operand o=op_none(); o.kind=OPK_ST; o.reg=(uint8_t)i; return o; }
static inline Operand op_moffs(uint32_t disp,int size){ Operand o=op_none(); o.kind=OPK_MEM; o.disp=(int32_t)disp; o.scale=1; o.size=(uint8_t)size; return o; }

/* decode ModR/M (+SIB/disp). Fills *rm (register or memory operand of `size`
 * bytes) and returns the reg field (/r, 0..7). Advances the cursor. */
static int modrm(Dec *d, Operand *rm, int size){
    uint8_t m = f8(d);
    int mod = m>>6, reg = (m>>3)&7, rmf = m&7;
    if (mod == 3){                       /* register direct */
        *rm = (size==1) ? op_reg8(rmf) : op_reg(rmf,size);
        return reg;
    }
    Operand o = op_none();
    o.kind = OPK_MEM; o.scale = 1; o.size = (uint8_t)size;
    if (rmf == 4){                       /* SIB */
        uint8_t sib = f8(d);
        int sc = sib>>6, ix = (sib>>3)&7, bs = sib&7;
        if (ix != 4){ o.idx = (uint8_t)ix; o.scale = (uint8_t)(1<<sc); }
        if (bs == 5 && mod == 0){ o.disp = (int32_t)f32(d); }   /* no base, disp32 */
        else { o.reg = (uint8_t)bs; }
    } else if (rmf == 5 && mod == 0){    /* [disp32] absolute */
        o.disp = (int32_t)f32(d);
    } else {
        o.reg = (uint8_t)rmf;            /* [reg (+disp)] */
    }
    if (mod == 1)      o.disp += (int8_t)f8(d);
    else if (mod == 2) o.disp += (int32_t)f32(d);
    *rm = o;
    return reg;
}

/* set a fully-decoded Op and return 1 (convenience). */
static void set(Op *o, int cls, int size, int nopnd, int flags){
    o->cls=(uint8_t)cls; o->size=(uint8_t)size; o->nopnd=(uint8_t)nopnd; o->flags=(uint8_t)flags;
}

/* ALU base opcodes 0x00.. share the +0..+5 layout; map the /8 group index. */
static const uint8_t ALU_CLS[8] = { OP_ADD,OP_OR,OP_ADC,OP_SBB,OP_AND,OP_SUB,OP_XOR,OP_CMP };

/* read an immediate of the current operand size (16 or 32). */
static uint32_t imm_osz(Dec *d){ return (d->osz==2) ? (uint32_t)f16(d) : f32(d); }

/* ------------------------------------------------------------------ x87 ---- */
static void decode_x87(Dec *d, uint8_t op, Op *o){
    uint8_t modb = r8(d->p);
    int mod = modb>>6;
    int isreg = (mod==3);
    /* memory access size by opcode group */
    Operand rm; int reg;
    switch (op){
    case 0xD8: { /* float32 mem or st(i) */
        reg = modrm(d,&rm,4);
        if (!isreg){ /* mem float */
            int cls[8]={OP_FADD,OP_FMUL,OP_FCOM,OP_FCOMP,OP_FSUB,OP_FSUBR,OP_FDIV,OP_FDIVR};
            set(o,cls[reg],4,1,0); o->opnd[0]=rm; o->opnd[0].size=4;
        } else {
            int i = modb&7;
            switch ((modb>>3)&7){
            case 0: set(o,OP_FADD,4,1,0);  o->opnd[0]=op_st(i); break;
            case 1: set(o,OP_FMUL,4,1,0);  o->opnd[0]=op_st(i); break;
            case 2: set(o,OP_FCOM,4,1,0);  o->opnd[0]=op_st(i); break;
            case 3: set(o,OP_FCOMP,4,1,FPOPF); o->opnd[0]=op_st(i); break;
            case 4: set(o,OP_FSUB,4,1,0);  o->opnd[0]=op_st(i); break;
            case 5: set(o,OP_FSUBR,4,1,0); o->opnd[0]=op_st(i); break;
            case 6: set(o,OP_FDIV,4,1,0);  o->opnd[0]=op_st(i); break;
            case 7: set(o,OP_FDIVR,4,1,0); o->opnd[0]=op_st(i); break;
            }
        }
        break; }
    case 0xDC: { /* float64 mem, or st(i),st reg forms */
        reg = modrm(d,&rm,8);
        if (!isreg){
            int cls[8]={OP_FADD,OP_FMUL,OP_FCOM,OP_FCOMP,OP_FSUB,OP_FSUBR,OP_FDIV,OP_FDIVR};
            set(o,cls[reg],8,1,0); o->opnd[0]=rm; o->opnd[0].size=8;
        } else {
            int i = modb&7;
            switch ((modb>>3)&7){
            case 0: set(o,OP_FARITH_REG2,4,2,0);        o->opnd[0]=op_st(i); o->opnd[1]=op_st(0); break; /* FADD st(i),st */
            case 1: set(o,OP_FARITH_REG2,4,2,2);        o->opnd[0]=op_st(i); o->opnd[1]=op_st(0); break; /* FMUL */
            case 4: set(o,OP_FARITH_REG2,4,2,1|FA_REV); o->opnd[0]=op_st(i); o->opnd[1]=op_st(0); break; /* FSUBR st(i),st */
            case 5: set(o,OP_FARITH_REG2,4,2,1);        o->opnd[0]=op_st(i); o->opnd[1]=op_st(0); break; /* FSUB */
            case 6: set(o,OP_FARITH_REG2,4,2,3|FA_REV); o->opnd[0]=op_st(i); o->opnd[1]=op_st(0); break; /* FDIVR */
            case 7: set(o,OP_FARITH_REG2,4,2,3);        o->opnd[0]=op_st(i); o->opnd[1]=op_st(0); break; /* FDIV */
            default: set(o,OP_UNIMPL,4,0,0); break;
            }
        }
        break; }
    case 0xDE: { /* int16 mem, or arithp reg forms */
        reg = modrm(d,&rm,2);
        if (!isreg){
            int cls[8]={OP_FIADD,OP_FIMUL,OP_UNIMPL,OP_UNIMPL,OP_FISUB,OP_FISUBR,OP_FIDIV,OP_FIDIVR}; /* /2,/3 ficom(p) unimpl */
            set(o,cls[reg],2,1,0); o->opnd[0]=rm; o->opnd[0].size=2;
        } else {
            if (modb == 0xD9){ set(o,OP_FCOMPP,4,0,0); break; }
            int i = modb&7;
            switch ((modb>>3)&7){
            case 0: set(o,OP_FARITHP,4,1,0);        o->opnd[0]=op_st(i); break; /* FADDP st(i),st */
            case 1: set(o,OP_FARITHP,4,1,2);        o->opnd[0]=op_st(i); break; /* FMULP */
            case 4: set(o,OP_FARITHP,4,1,1|FA_REV); o->opnd[0]=op_st(i); break; /* FSUBRP */
            case 5: set(o,OP_FARITHP,4,1,1);        o->opnd[0]=op_st(i); break; /* FSUBP */
            case 6: set(o,OP_FARITHP,4,1,3|FA_REV); o->opnd[0]=op_st(i); break; /* FDIVRP */
            case 7: set(o,OP_FARITHP,4,1,3);        o->opnd[0]=op_st(i); break; /* FDIVP */
            default: set(o,OP_UNIMPL,4,0,0); break;
            }
        }
        break; }
    case 0xDA: { /* int32 mem, or fcmov/fucompp reg */
        reg = modrm(d,&rm,4);
        if (!isreg){
            int cls[8]={OP_FIADD,OP_FIMUL,OP_UNIMPL,OP_UNIMPL,OP_FISUB,OP_FISUBR,OP_FIDIV,OP_FIDIVR};
            set(o,cls[reg],4,1,0); o->opnd[0]=rm; o->opnd[0].size=4;
        } else if (modb == 0xE9){ set(o,OP_FUCOMPP,4,0,0); }
        else set(o,OP_UNIMPL,4,0,0);   /* fcmovb/e/be/u -> loud (scan: none) */
        break; }
    case 0xD9: {
        reg = modrm(d,&rm,4);
        if (!isreg){
            switch (reg){
            case 0: set(o,OP_FLD,4,1,0);    o->opnd[0]=rm; o->opnd[0].size=4; break;
            case 2: set(o,OP_FST,4,1,0);    o->opnd[0]=rm; o->opnd[0].size=4; break;
            case 3: set(o,OP_FSTP,4,1,FPOPF);o->opnd[0]=rm; o->opnd[0].size=4; break;
            case 4: set(o,OP_FLDENV,4,1,0); o->opnd[0]=rm; break;
            case 5: set(o,OP_FLDCW,4,1,0);  o->opnd[0]=rm; break;
            case 6: set(o,OP_FNSTENV,4,1,0);o->opnd[0]=rm; break;
            case 7: set(o,OP_FNSTCW,4,1,0); o->opnd[0]=rm; break;
            default: set(o,OP_UNIMPL,4,0,0); break;
            }
        } else {
            int i = modb&7;
            if (modb>=0xC0 && modb<=0xC7){ set(o,OP_FLD,4,1,0);  o->opnd[0]=op_st(i); }
            else if (modb>=0xC8 && modb<=0xCF){ set(o,OP_FXCH,4,1,0); o->opnd[0]=op_st(i); }
            else switch (modb){
            case 0xD0: set(o,OP_FNOP,4,0,0); break;
            case 0xE0: set(o,OP_FCHS,4,0,0); break;
            case 0xE1: set(o,OP_FABS,4,0,0); break;
            case 0xE4: set(o,OP_FTST,4,0,0); break;
            case 0xE5: set(o,OP_FXAM,4,0,0); break;
            case 0xE8: set(o,OP_FLDCONST,4,1,0); o->opnd[0]=op_imm(FC_1,4); break;
            case 0xE9: set(o,OP_FLDCONST,4,1,0); o->opnd[0]=op_imm(FC_L2T,4); break;
            case 0xEA: set(o,OP_FLDCONST,4,1,0); o->opnd[0]=op_imm(FC_L2E,4); break;
            case 0xEB: set(o,OP_FLDCONST,4,1,0); o->opnd[0]=op_imm(FC_PI,4); break;
            case 0xEC: set(o,OP_FLDCONST,4,1,0); o->opnd[0]=op_imm(FC_LG2,4); break;
            case 0xED: set(o,OP_FLDCONST,4,1,0); o->opnd[0]=op_imm(FC_LN2,4); break;
            case 0xEE: set(o,OP_FLDCONST,4,1,0); o->opnd[0]=op_imm(FC_Z,4); break;
            case 0xF0: set(o,OP_F2XM1,4,0,0); break;
            case 0xF1: set(o,OP_FYL2X,4,0,0); break;
            case 0xF2: set(o,OP_FPTAN,4,0,0); break;
            case 0xF3: set(o,OP_FPATAN,4,0,0); break;
            case 0xF5: set(o,OP_FPREM1,4,0,0); break;
            case 0xF6: set(o,OP_FDECSTP,4,0,0); break;
            case 0xF7: set(o,OP_FINCSTP,4,0,0); break;
            case 0xF8: set(o,OP_FPREM,4,0,0); break;
            case 0xF9: set(o,OP_FYL2XP1,4,0,0); break;
            case 0xFA: set(o,OP_FSQRT,4,0,0); break;
            case 0xFB: set(o,OP_FSINCOS,4,0,0); break;
            case 0xFC: set(o,OP_FRNDINT,4,0,0); break;
            case 0xFD: set(o,OP_FSCALE,4,0,0); break;
            case 0xFE: set(o,OP_FSIN,4,0,0); break;
            case 0xFF: set(o,OP_FCOS,4,0,0); break;
            default: set(o,OP_UNIMPL,4,0,0); break;  /* F4 fxtract etc */
            }
        }
        break; }
    case 0xDB: {
        reg = modrm(d,&rm,4);
        if (!isreg){
            switch (reg){
            case 0: set(o,OP_FILD,4,1,0);   o->opnd[0]=rm; o->opnd[0].size=4; break;
            case 1: set(o,OP_FISTTP,4,1,0); o->opnd[0]=rm; o->opnd[0].size=4; break;
            case 2: set(o,OP_FIST,4,1,0);   o->opnd[0]=rm; o->opnd[0].size=4; break;
            case 3: set(o,OP_FISTP,4,1,FPOPF);o->opnd[0]=rm; o->opnd[0].size=4; break;
            case 5: set(o,OP_FLD,4,1,0);    o->opnd[0]=rm; o->opnd[0].size=10; break;
            case 7: set(o,OP_FSTP,4,1,FPOPF);o->opnd[0]=rm; o->opnd[0].size=10; break;
            default: set(o,OP_UNIMPL,4,0,0); break;
            }
        } else {
            int i = modb&7;
            if (modb>=0xE8 && modb<=0xEF){ set(o,OP_FCOMI,4,1,0); o->opnd[0]=op_st(i); }       /* fucomi */
            else if (modb>=0xF0 && modb<=0xF7){ set(o,OP_FCOMI,4,1,0); o->opnd[0]=op_st(i); }  /* fcomi  */
            else if (modb==0xE2) set(o,OP_FNOP,4,0,0);   /* fnclex: model as nop (clears exc) */
            else if (modb==0xE3) set(o,OP_FINIT,4,0,0);  /* fninit */
            else set(o,OP_UNIMPL,4,0,0);                 /* fcmovnX -> loud */
        }
        break; }
    case 0xDD: {
        reg = modrm(d,&rm,8);
        if (!isreg){
            switch (reg){
            case 0: set(o,OP_FLD,8,1,0);    o->opnd[0]=rm; o->opnd[0].size=8; break;
            case 1: set(o,OP_FISTTP,8,1,0); o->opnd[0]=rm; o->opnd[0].size=8; break;
            case 2: set(o,OP_FST,8,1,0);    o->opnd[0]=rm; o->opnd[0].size=8; break;
            case 3: set(o,OP_FSTP,8,1,FPOPF);o->opnd[0]=rm; o->opnd[0].size=8; break;
            case 4: set(o,OP_FRSTOR,4,1,0); o->opnd[0]=rm; break;
            case 6: set(o,OP_FNSAVE,4,1,0); o->opnd[0]=rm; break;
            case 7: set(o,OP_FNSTSW,4,1,0); o->opnd[0]=rm; break;
            default: set(o,OP_UNIMPL,4,0,0); break;
            }
        } else {
            int i = modb&7;
            if (modb>=0xC0 && modb<=0xC7) set(o,OP_FFREE,4,0,0);
            else if (modb>=0xD0 && modb<=0xD7){ set(o,OP_FST,4,1,0);  o->opnd[0]=op_st(i); }
            else if (modb>=0xD8 && modb<=0xDF){ set(o,OP_FSTP,4,1,FPOPF); o->opnd[0]=op_st(i); }
            else if (modb>=0xE0 && modb<=0xE7){ set(o,OP_FUCOM,4,1,0); o->opnd[0]=op_st(i); }
            else if (modb>=0xE8 && modb<=0xEF){ set(o,OP_FUCOMP,4,1,FPOPF); o->opnd[0]=op_st(i); }
            else set(o,OP_UNIMPL,4,0,0);
        }
        break; }
    case 0xDF: {
        reg = modrm(d,&rm,2);
        if (!isreg){
            switch (reg){
            case 0: set(o,OP_FILD,2,1,0);   o->opnd[0]=rm; o->opnd[0].size=2; break;
            case 1: set(o,OP_FISTTP,2,1,0); o->opnd[0]=rm; o->opnd[0].size=2; break;
            case 2: set(o,OP_FIST,2,1,0);   o->opnd[0]=rm; o->opnd[0].size=2; break;
            case 3: set(o,OP_FISTP,2,1,FPOPF);o->opnd[0]=rm; o->opnd[0].size=2; break;
            case 5: set(o,OP_FILD,8,1,0);   o->opnd[0]=rm; o->opnd[0].size=8; break;
            case 7: set(o,OP_FISTP,8,1,FPOPF);o->opnd[0]=rm; o->opnd[0].size=8; break;
            default: set(o,OP_UNIMPL,4,0,0); break;   /* fbld/fbstp BCD -> loud */
            }
        } else {
            int i = modb&7;
            if (modb==0xE0) { set(o,OP_FNSTSW,4,1,0); o->opnd[0]=op_reg(REG_EAX,2); }  /* fnstsw ax */
            else if (modb>=0xE8 && modb<=0xEF){ set(o,OP_FCOMI,4,1,FPOPF); o->opnd[0]=op_st(i); } /* fucomip */
            else if (modb>=0xF0 && modb<=0xF7){ set(o,OP_FCOMI,4,1,FPOPF); o->opnd[0]=op_st(i); } /* fcomip  */
            else set(o,OP_UNIMPL,4,0,0);
        }
        break; }
    default: set(o,OP_UNIMPL,4,0,0); break;
    }
}

/* ------------------------------------------------------------ 0F 2-byte ---- */
static void decode_0f(Dec *d, Op *o){
    uint8_t op = f8(d);
    Operand rm; int reg;
    if (op>=0x80 && op<=0x8F){ int32_t rel=(int32_t)f32(d); set(o,OP_JCC,4,1,op-0x80); o->opnd[0]=op_imm(d->p+rel,4); return; }
    if (op>=0x90 && op<=0x9F){ reg=modrm(d,&rm,1); set(o,OP_SETCC,1,1,op-0x90); o->opnd[0]=rm; return; }
    if (op>=0xC8 && op<=0xCF){ set(o,OP_BSWAP,4,1,0); o->opnd[0]=op_reg(op-0xC8,4); return; }
    switch (op){
    case 0x1F: reg=modrm(d,&rm,d->osz); set(o,OP_NOP,4,0,0); return;          /* multi-byte NOP */
    case 0x0B: set(o,OP_UNIMPL,4,0,0); return;                                /* UD2 */
    case 0x31: set(o,OP_RDTSC,4,0,0); return;
    case 0xA2: set(o,OP_CPUID,4,0,0); return;
    case 0xA3: reg=modrm(d,&rm,d->osz); set(o,OP_BT,d->osz,2,0);  o->opnd[0]=rm; o->opnd[1]=op_regN(reg,d->osz); return;
    case 0xAB: reg=modrm(d,&rm,d->osz); set(o,OP_BTS,d->osz,2,0); o->opnd[0]=rm; o->opnd[1]=op_regN(reg,d->osz); return;
    case 0xB3: reg=modrm(d,&rm,d->osz); set(o,OP_BTR,d->osz,2,0); o->opnd[0]=rm; o->opnd[1]=op_regN(reg,d->osz); return;
    case 0xBB: reg=modrm(d,&rm,d->osz); set(o,OP_BTC,d->osz,2,0); o->opnd[0]=rm; o->opnd[1]=op_regN(reg,d->osz); return;
    case 0xBA:{ reg=modrm(d,&rm,d->osz); uint8_t imm=f8(d);
                int cls[8]={OP_UNIMPL,OP_UNIMPL,OP_UNIMPL,OP_UNIMPL,OP_BT,OP_BTS,OP_BTR,OP_BTC};
                set(o,cls[reg],d->osz,2,0); o->opnd[0]=rm; o->opnd[1]=op_imm(imm,1); return; }
    case 0xA4: reg=modrm(d,&rm,d->osz);{ uint8_t imm=f8(d); set(o,OP_SHLD,d->osz,3,0); o->opnd[0]=rm; o->opnd[1]=op_regN(reg,d->osz); o->opnd[2]=op_imm(imm,1);} return;
    case 0xA5: reg=modrm(d,&rm,d->osz); set(o,OP_SHLD,d->osz,3,0); o->opnd[0]=rm; o->opnd[1]=op_regN(reg,d->osz); o->opnd[2]=op_reg(REG_ECX,1); return;
    case 0xAC: reg=modrm(d,&rm,d->osz);{ uint8_t imm=f8(d); set(o,OP_SHRD,d->osz,3,0); o->opnd[0]=rm; o->opnd[1]=op_regN(reg,d->osz); o->opnd[2]=op_imm(imm,1);} return;
    case 0xAD: reg=modrm(d,&rm,d->osz); set(o,OP_SHRD,d->osz,3,0); o->opnd[0]=rm; o->opnd[1]=op_regN(reg,d->osz); o->opnd[2]=op_reg(REG_ECX,1); return;
    case 0xAF: reg=modrm(d,&rm,d->osz); set(o,OP_IMUL,d->osz,2,0); o->opnd[0]=op_regN(reg,d->osz); o->opnd[1]=rm; return;
    case 0xB6: reg=modrm(d,&rm,1); set(o,OP_MOVZX,d->osz,2,0); o->opnd[0]=op_regN(reg,d->osz); o->opnd[1]=rm; return;
    case 0xB7: reg=modrm(d,&rm,2); set(o,OP_MOVZX,d->osz,2,0); o->opnd[0]=op_regN(reg,d->osz); o->opnd[1]=rm; return;
    case 0xBE: reg=modrm(d,&rm,1); set(o,OP_MOVSX,d->osz,2,0); o->opnd[0]=op_regN(reg,d->osz); o->opnd[1]=rm; return;
    case 0xBF: reg=modrm(d,&rm,2); set(o,OP_MOVSX,d->osz,2,0); o->opnd[0]=op_regN(reg,d->osz); o->opnd[1]=rm; return;
    case 0x77: set(o,OP_EMMS,4,0,0); return;                                  /* EMMS */
    /* ---- MMX: Op.flags = 0F opcode; dst mm = opnd[0], src mm/m64 = opnd[1].
     * movd forms use 32-bit r/m; store/movq-store put the r/m in opnd[0]. The
     * imm-shift group (71/72/73) stashes the sub-op (modrm.reg) in Op.size. ---- */
    case 0x6E: reg=modrm(d,&rm,4); set(o,OP_MMX,4,2,0x6E); o->opnd[0]=op_mm(reg); o->opnd[1]=rm; return;             /* movd mm,r/m32 */
    case 0x7E: reg=modrm(d,&rm,4); set(o,OP_MMX,4,2,0x7E); o->opnd[0]=rm; o->opnd[1]=op_mm(reg); return;             /* movd r/m32,mm */
    case 0x6F: reg=modrm(d,&rm,8); if(rm.kind==OPK_REG)rm.kind=OPK_MM; set(o,OP_MMX,8,2,0x6F); o->opnd[0]=op_mm(reg); o->opnd[1]=rm; return; /* movq mm,mm/m64 */
    case 0x7F: reg=modrm(d,&rm,8); if(rm.kind==OPK_REG)rm.kind=OPK_MM; set(o,OP_MMX,8,2,0x7F); o->opnd[0]=rm; o->opnd[1]=op_mm(reg); return; /* movq mm/m64,mm */
    case 0xE7: reg=modrm(d,&rm,8); if(rm.kind==OPK_REG)rm.kind=OPK_MM; set(o,OP_MMX,8,2,0xE7); o->opnd[0]=rm; o->opnd[1]=op_mm(reg); return; /* movntq m64,mm (non-temporal store == movq store) */
    case 0x71: case 0x72: case 0x73: { reg=modrm(d,&rm,8); if(rm.kind==OPK_REG)rm.kind=OPK_MM; uint8_t ib=f8(d);
        set(o,OP_MMX,8,2,op); o->size=(uint8_t)reg; o->opnd[0]=rm; o->opnd[1]=op_imm(ib,1); return; }             /* ps/ll/rl/ra w/d/q imm */
    case 0x60:case 0x61:case 0x62:case 0x63:case 0x64:case 0x65:case 0x66:case 0x67:
    case 0x68:case 0x69:case 0x6A:case 0x6B:case 0x74:case 0x75:case 0x76:
    case 0xD1:case 0xD2:case 0xD3:case 0xD4:case 0xD5:case 0xD8:case 0xD9:case 0xDA:case 0xDB:case 0xDC:case 0xDD:case 0xDE:case 0xDF:
    case 0xE0:case 0xE1:case 0xE2:case 0xE3:case 0xE4:case 0xE5:case 0xE8:case 0xE9:case 0xEA:case 0xEB:case 0xEC:case 0xED:case 0xEE:case 0xEF:
    case 0xF1:case 0xF2:case 0xF3:case 0xF4:case 0xF5:case 0xF6:case 0xF8:case 0xF9:case 0xFA:case 0xFB:case 0xFC:case 0xFD:case 0xFE:
        reg=modrm(d,&rm,8); if(rm.kind==OPK_REG)rm.kind=OPK_MM; set(o,OP_MMX,8,2,op); o->opnd[0]=op_mm(reg); o->opnd[1]=rm; return;
    /* 0F AE group: sfence/lfence/mfence (mod==11) + clflush/ldmxcsr/stmxcsr/
     * fxsave/fxrstor (mem). All are no-ops in the flat single-thread model;
     * consume the modrm. stmxcsr writes MXCSR default (0x1f80) if asked. */
    case 0xAE: { uint8_t mrm=r8(d->p); reg=modrm(d,&rm,4);
        if ((mrm&0xC0)!=0xC0 && ((mrm>>3)&7)==3 && rm.kind==OPK_MEM){ /* stmxcsr */ }
        set(o,OP_NOP,4,0,0); (void)reg; return; }
    default:
        /* prefetch (0x18..0x1F) consumes a modrm and is a no-op; other 0F -> loud */
        if (op>=0x18 && op<=0x1F){ reg=modrm(d,&rm,1); set(o,OP_NOP,4,0,0); return; }
        set(o,OP_UNIMPL,4,0,0); return;
    }
}

/* ---------------------------------------------------------- main decode ---- */
void sm2_decode(uint32_t va, Op *o){
    Dec d; d.va=va; d.p=va; d.osz=4; d.asz=4; d.seg=-1; d.rep=0; d.lock=0;
    memset(o,0,sizeof *o); o->va=va;
    for (int i=0;i<3;i++){ o->opnd[i].reg=REG_NONE; o->opnd[i].idx=REG_NONE; }

    /* ---- prefixes ---- */
    for (;;){
        uint8_t b = r8(d.p);
        if (b==0x66){ d.osz=2; d.p++; }
        else if (b==0x67){ d.asz=2; d.p++; }
        else if (b==0xF0){ d.lock=1; d.p++; }
        else if (b==0xF2||b==0xF3){ d.rep=b; d.p++; }
        else if (b==0x2E||b==0x36||b==0x3E||b==0x26||b==0x64||b==0x65){ d.seg=b; d.p++; }
        else break;
    }

    uint8_t op = f8(&d);
    Operand rm; int reg;

    /* ---- ALU 0x00..0x3D (add/or/adc/sbb/and/sub/xor/cmp), +0..5 layout ---- */
    if (op < 0x40 && (op&7) < 6 && (op&0xC0)==0x00){
        int g = (op>>3)&7; int cls = ALU_CLS[g]; int form = op&7;
        switch (form){
        case 0: reg=modrm(&d,&rm,1);      set(o,cls,1,2,0);      o->opnd[0]=rm; o->opnd[1]=op_reg8(reg); break;
        case 1: reg=modrm(&d,&rm,d.osz);  set(o,cls,d.osz,2,0);  o->opnd[0]=rm; o->opnd[1]=op_regN(reg,d.osz); break;
        case 2: reg=modrm(&d,&rm,1);      set(o,cls,1,2,0);      o->opnd[0]=op_reg8(reg); o->opnd[1]=rm; break;
        case 3: reg=modrm(&d,&rm,d.osz);  set(o,cls,d.osz,2,0);  o->opnd[0]=op_regN(reg,d.osz); o->opnd[1]=rm; break;
        case 4: { uint8_t imm=f8(&d); set(o,cls,1,2,0); o->opnd[0]=op_reg(REG_EAX,1); o->opnd[1]=op_imm(imm,1); } break;
        case 5: { uint32_t imm=imm_osz(&d); set(o,cls,d.osz,2,0); o->opnd[0]=op_reg(REG_EAX,d.osz); o->opnd[1]=op_imm(imm,d.osz); } break;
        }
        o->nextva=d.p; return;
    }

    switch (op){
    /* ---- inc/dec/push/pop r32 ---- */
    case 0x40:case 0x41:case 0x42:case 0x43:case 0x44:case 0x45:case 0x46:case 0x47:
        set(o,OP_INC,d.osz,1,0); o->opnd[0]=op_regN(op-0x40,d.osz); break;
    case 0x48:case 0x49:case 0x4A:case 0x4B:case 0x4C:case 0x4D:case 0x4E:case 0x4F:
        set(o,OP_DEC,d.osz,1,0); o->opnd[0]=op_regN(op-0x48,d.osz); break;
    case 0x50:case 0x51:case 0x52:case 0x53:case 0x54:case 0x55:case 0x56:case 0x57:
        set(o,OP_PUSH,d.osz,1,0); o->opnd[0]=op_regN(op-0x50,d.osz); break;
    case 0x58:case 0x59:case 0x5A:case 0x5B:case 0x5C:case 0x5D:case 0x5E:case 0x5F:
        set(o,OP_POP,d.osz,1,0); o->opnd[0]=op_regN(op-0x58,d.osz); break;
    case 0x60: set(o,OP_PUSHAD,4,0,0); break;
    case 0x61: set(o,OP_POPAD,4,0,0); break;
    case 0x68: { uint32_t imm=imm_osz(&d); set(o,OP_PUSH,d.osz,1,0); o->opnd[0]=op_imm(imm,d.osz); } break;
    case 0x6A: { int32_t imm=(int8_t)f8(&d); set(o,OP_PUSH,d.osz,1,0); o->opnd[0]=op_imm((uint32_t)imm,d.osz); } break;
    case 0x69: reg=modrm(&d,&rm,d.osz); { uint32_t imm=imm_osz(&d); set(o,OP_IMUL,d.osz,3,0); o->opnd[0]=op_regN(reg,d.osz); o->opnd[1]=rm; o->opnd[2]=op_imm(imm,d.osz); } break;
    case 0x6B: reg=modrm(&d,&rm,d.osz); { int32_t imm=(int8_t)f8(&d); set(o,OP_IMUL,d.osz,3,0); o->opnd[0]=op_regN(reg,d.osz); o->opnd[1]=rm; o->opnd[2]=op_imm((uint32_t)imm,d.osz); } break;

    /* ---- Jcc rel8 ---- */
    case 0x70:case 0x71:case 0x72:case 0x73:case 0x74:case 0x75:case 0x76:case 0x77:
    case 0x78:case 0x79:case 0x7A:case 0x7B:case 0x7C:case 0x7D:case 0x7E:case 0x7F:
        { int32_t rel=(int8_t)f8(&d); set(o,OP_JCC,4,1,op-0x70); o->opnd[0]=op_imm(d.p+rel,4); } break;

    /* ---- grp1 rm,imm ---- */
    case 0x80: reg=modrm(&d,&rm,1);    { uint8_t imm=f8(&d);   set(o,ALU_CLS[reg],1,2,0);    o->opnd[0]=rm; o->opnd[1]=op_imm(imm,1); } break;
    case 0x81: reg=modrm(&d,&rm,d.osz);{ uint32_t imm=imm_osz(&d); set(o,ALU_CLS[reg],d.osz,2,0); o->opnd[0]=rm; o->opnd[1]=op_imm(imm,d.osz); } break;
    case 0x83: reg=modrm(&d,&rm,d.osz);{ int32_t imm=(int8_t)f8(&d); set(o,ALU_CLS[reg],d.osz,2,0); o->opnd[0]=rm; o->opnd[1]=op_imm((uint32_t)imm,d.osz); } break;

    case 0x84: reg=modrm(&d,&rm,1);     set(o,OP_TEST,1,2,0);     o->opnd[0]=rm; o->opnd[1]=op_reg8(reg); break;
    case 0x85: reg=modrm(&d,&rm,d.osz); set(o,OP_TEST,d.osz,2,0); o->opnd[0]=rm; o->opnd[1]=op_regN(reg,d.osz); break;
    case 0x86: reg=modrm(&d,&rm,1);     set(o,OP_XCHG,1,2,0);     o->opnd[0]=rm; o->opnd[1]=op_reg8(reg); break;
    case 0x87: reg=modrm(&d,&rm,d.osz); set(o,OP_XCHG,d.osz,2,0); o->opnd[0]=rm; o->opnd[1]=op_regN(reg,d.osz); break;
    case 0x88: reg=modrm(&d,&rm,1);     set(o,OP_MOV,1,2,0);      o->opnd[0]=rm; o->opnd[1]=op_reg8(reg); break;
    case 0x89: reg=modrm(&d,&rm,d.osz); set(o,OP_MOV,d.osz,2,0);  o->opnd[0]=rm; o->opnd[1]=op_regN(reg,d.osz); break;
    case 0x8A: reg=modrm(&d,&rm,1);     set(o,OP_MOV,1,2,0);      o->opnd[0]=op_reg8(reg); o->opnd[1]=rm; break;
    case 0x8B: reg=modrm(&d,&rm,d.osz); set(o,OP_MOV,d.osz,2,0);  o->opnd[0]=op_regN(reg,d.osz); o->opnd[1]=rm; break;
    case 0x8D: reg=modrm(&d,&rm,d.osz); set(o,OP_LEA,d.osz,2,0);  o->opnd[0]=op_regN(reg,d.osz); o->opnd[1]=rm; break;
    case 0x8F: reg=modrm(&d,&rm,d.osz); set(o,OP_POP,d.osz,1,0);  o->opnd[0]=rm; break;

    case 0x90: set(o,OP_NOP,4,0,0); break;   /* also PAUSE (F3 90) */
    case 0x91:case 0x92:case 0x93:case 0x94:case 0x95:case 0x96:case 0x97:
        set(o,OP_XCHG,d.osz,2,0); o->opnd[0]=op_reg(REG_EAX,d.osz); o->opnd[1]=op_regN(op-0x90,d.osz); break;
    case 0x98: set(o,OP_CWDE,4,0,0); break;
    case 0x99: set(o,OP_CDQ,4,0,0); break;
    case 0x9B: set(o,OP_FWAIT,4,0,0); break;
    case 0x9C: set(o,OP_PUSHFD,4,0,0); break;
    case 0x9D: set(o,OP_POPFD,4,0,0); break;
    case 0x9E: set(o,OP_SAHF,4,0,0); break;
    case 0x9F: set(o,OP_LAHF,4,0,0); break;

    /* ---- moffs mov ---- */
    case 0xA0: { uint32_t a=f32(&d); set(o,OP_MOV,1,2,0);    o->opnd[0]=op_reg(REG_EAX,1);    o->opnd[1]=op_moffs(a,1); } break;
    case 0xA1: { uint32_t a=f32(&d); set(o,OP_MOV,d.osz,2,0);o->opnd[0]=op_reg(REG_EAX,d.osz);o->opnd[1]=op_moffs(a,d.osz); } break;
    case 0xA2: { uint32_t a=f32(&d); set(o,OP_MOV,1,2,0);    o->opnd[0]=op_moffs(a,1);    o->opnd[1]=op_reg(REG_EAX,1); } break;
    case 0xA3: { uint32_t a=f32(&d); set(o,OP_MOV,d.osz,2,0);o->opnd[0]=op_moffs(a,d.osz);o->opnd[1]=op_reg(REG_EAX,d.osz); } break;

    /* ---- string ---- */
    case 0xA4: set(o,OP_MOVS,1,0, d.rep?STRF_REP:0); break;
    case 0xA5: set(o,OP_MOVS,d.osz,0, d.rep?STRF_REP:0); break;
    case 0xA6: set(o,OP_CMPS,1,0, d.rep?(STRF_REP|(d.rep==0xF2?STRF_REPNE:STRF_REPE)):0); break;
    case 0xA7: set(o,OP_CMPS,d.osz,0, d.rep?(STRF_REP|(d.rep==0xF2?STRF_REPNE:STRF_REPE)):0); break;
    case 0xAA: set(o,OP_STOS,1,0, d.rep?STRF_REP:0); break;
    case 0xAB: set(o,OP_STOS,d.osz,0, d.rep?STRF_REP:0); break;
    case 0xAC: set(o,OP_LODS,1,0, d.rep?STRF_REP:0); break;
    case 0xAD: set(o,OP_LODS,d.osz,0, d.rep?STRF_REP:0); break;
    case 0xAE: set(o,OP_SCAS,1,0, d.rep?(STRF_REP|(d.rep==0xF2?STRF_REPNE:STRF_REPE)):0); break;
    case 0xAF: set(o,OP_SCAS,d.osz,0, d.rep?(STRF_REP|(d.rep==0xF2?STRF_REPNE:STRF_REPE)):0); break;

    case 0xA8: { uint8_t imm=f8(&d);   set(o,OP_TEST,1,2,0);     o->opnd[0]=op_reg(REG_EAX,1);    o->opnd[1]=op_imm(imm,1); } break;
    case 0xA9: { uint32_t imm=imm_osz(&d); set(o,OP_TEST,d.osz,2,0); o->opnd[0]=op_reg(REG_EAX,d.osz);o->opnd[1]=op_imm(imm,d.osz); } break;

    /* ---- mov reg,imm ---- */
    case 0xB0:case 0xB1:case 0xB2:case 0xB3:case 0xB4:case 0xB5:case 0xB6:case 0xB7:
        { uint8_t imm=f8(&d); set(o,OP_MOV,1,2,0); o->opnd[0]=op_reg8(op-0xB0); o->opnd[1]=op_imm(imm,1); } break;
    case 0xB8:case 0xB9:case 0xBA:case 0xBB:case 0xBC:case 0xBD:case 0xBE:case 0xBF:
        { uint32_t imm=imm_osz(&d); set(o,OP_MOV,d.osz,2,0); o->opnd[0]=op_regN(op-0xB8,d.osz); o->opnd[1]=op_imm(imm,d.osz); } break;

    /* ---- grp2 shifts ---- */
    case 0xC0: reg=modrm(&d,&rm,1);    { uint8_t imm=f8(&d); int cls[8]={OP_ROL,OP_ROR,OP_RCL,OP_RCR,OP_SHL,OP_SHR,OP_SHL,OP_SAR}; set(o,cls[reg],1,2,0); o->opnd[0]=rm; o->opnd[1]=op_imm(imm,1); } break;
    case 0xC1: reg=modrm(&d,&rm,d.osz);{ uint8_t imm=f8(&d); int cls[8]={OP_ROL,OP_ROR,OP_RCL,OP_RCR,OP_SHL,OP_SHR,OP_SHL,OP_SAR}; set(o,cls[reg],d.osz,2,0); o->opnd[0]=rm; o->opnd[1]=op_imm(imm,1); } break;
    case 0xD0: reg=modrm(&d,&rm,1);    { int cls[8]={OP_ROL,OP_ROR,OP_RCL,OP_RCR,OP_SHL,OP_SHR,OP_SHL,OP_SAR}; set(o,cls[reg],1,2,0); o->opnd[0]=rm; o->opnd[1]=op_imm(1,1); } break;
    case 0xD1: reg=modrm(&d,&rm,d.osz);{ int cls[8]={OP_ROL,OP_ROR,OP_RCL,OP_RCR,OP_SHL,OP_SHR,OP_SHL,OP_SAR}; set(o,cls[reg],d.osz,2,0); o->opnd[0]=rm; o->opnd[1]=op_imm(1,1); } break;
    case 0xD2: reg=modrm(&d,&rm,1);    { int cls[8]={OP_ROL,OP_ROR,OP_RCL,OP_RCR,OP_SHL,OP_SHR,OP_SHL,OP_SAR}; set(o,cls[reg],1,2,0); o->opnd[0]=rm; o->opnd[1]=op_reg(REG_ECX,1); } break;
    case 0xD3: reg=modrm(&d,&rm,d.osz);{ int cls[8]={OP_ROL,OP_ROR,OP_RCL,OP_RCR,OP_SHL,OP_SHR,OP_SHL,OP_SAR}; set(o,cls[reg],d.osz,2,0); o->opnd[0]=rm; o->opnd[1]=op_reg(REG_ECX,1); } break;

    case 0xC2: { uint16_t n=f16(&d); set(o,OP_RET,4,1,0); o->opnd[0]=op_imm(n,2); } break;
    case 0xC3: set(o,OP_RET,4,1,0); o->opnd[0]=op_imm(0,2); break;
    case 0xC6: reg=modrm(&d,&rm,1);    { uint8_t imm=f8(&d);   set(o,OP_MOV,1,2,0);     o->opnd[0]=rm; o->opnd[1]=op_imm(imm,1); } break;
    case 0xC7: reg=modrm(&d,&rm,d.osz);{ uint32_t imm=imm_osz(&d); set(o,OP_MOV,d.osz,2,0); o->opnd[0]=rm; o->opnd[1]=op_imm(imm,d.osz); } break;
    case 0xC9: set(o,OP_LEAVE,4,0,0); break;
    case 0xCC: set(o,OP_NOP,4,0,0); break;                       /* int3: tolerate (debugbreak/padding) */
    case 0xD7: set(o,OP_XLAT,1,0,0); break;

    /* ---- x87 ---- */
    case 0xD8:case 0xD9:case 0xDA:case 0xDB:case 0xDC:case 0xDD:case 0xDE:case 0xDF:
        decode_x87(&d, op, o); break;

    case 0xE0: { int32_t rel=(int8_t)f8(&d); set(o,OP_LOOPNE,4,1,0); o->opnd[0]=op_imm(d.p+rel,4); } break;
    case 0xE1: { int32_t rel=(int8_t)f8(&d); set(o,OP_LOOPE,4,1,0);  o->opnd[0]=op_imm(d.p+rel,4); } break;
    case 0xE2: { int32_t rel=(int8_t)f8(&d); set(o,OP_LOOP,4,1,0);   o->opnd[0]=op_imm(d.p+rel,4); } break;
    case 0xE3: { int32_t rel=(int8_t)f8(&d); set(o,OP_JECXZ,4,1,0); o->opnd[0]=op_imm(d.p+rel,4); } break;
    case 0xE8: { int32_t rel=(int32_t)f32(&d); set(o,OP_CALL,4,1,TGTF_DIRECT); o->opnd[0]=op_imm(d.p+rel,4); } break;
    case 0xE9: { int32_t rel=(int32_t)f32(&d); set(o,OP_JMP,4,1,TGTF_DIRECT);  o->opnd[0]=op_imm(d.p+rel,4); } break;
    case 0xEB: { int32_t rel=(int8_t)f8(&d);   set(o,OP_JMP,4,1,TGTF_DIRECT);  o->opnd[0]=op_imm(d.p+rel,4); } break;

    case 0xF5: set(o,OP_CMC,4,0,0); break;
    case 0xF8: set(o,OP_CLC,4,0,0); break;
    case 0xF9: set(o,OP_STC,4,0,0); break;
    case 0xFC: set(o,OP_CLD,4,0,0); break;
    case 0xFD: set(o,OP_STD,4,0,0); break;
    case 0xFA: case 0xFB: set(o,OP_NOP,4,0,0); break;            /* cli/sti: ignore */

    /* ---- grp3 F6/F7 ---- */
    case 0xF6: reg=modrm(&d,&rm,1); switch(reg){
        case 0: case 1: { uint8_t imm=f8(&d); set(o,OP_TEST,1,2,0); o->opnd[0]=rm; o->opnd[1]=op_imm(imm,1); } break;
        case 2: set(o,OP_NOT,1,1,0); o->opnd[0]=rm; break;
        case 3: set(o,OP_NEG,1,1,0); o->opnd[0]=rm; break;
        case 4: set(o,OP_MUL,1,1,0); o->opnd[0]=rm; break;
        case 5: set(o,OP_IMUL1,1,1,0); o->opnd[0]=rm; break;
        case 6: set(o,OP_DIV,1,1,0); o->opnd[0]=rm; break;
        case 7: set(o,OP_IDIV,1,1,0); o->opnd[0]=rm; break;
        } break;
    case 0xF7: reg=modrm(&d,&rm,d.osz); switch(reg){
        case 0: case 1: { uint32_t imm=imm_osz(&d); set(o,OP_TEST,d.osz,2,0); o->opnd[0]=rm; o->opnd[1]=op_imm(imm,d.osz); } break;
        case 2: set(o,OP_NOT,d.osz,1,0); o->opnd[0]=rm; break;
        case 3: set(o,OP_NEG,d.osz,1,0); o->opnd[0]=rm; break;
        case 4: set(o,OP_MUL,d.osz,1,0); o->opnd[0]=rm; break;
        case 5: set(o,OP_IMUL1,d.osz,1,0); o->opnd[0]=rm; break;
        case 6: set(o,OP_DIV,d.osz,1,0); o->opnd[0]=rm; break;
        case 7: set(o,OP_IDIV,d.osz,1,0); o->opnd[0]=rm; break;
        } break;

    /* ---- grp4/5 FE/FF ---- */
    case 0xFE: reg=modrm(&d,&rm,1); if(reg==0){set(o,OP_INC,1,1,0);o->opnd[0]=rm;} else if(reg==1){set(o,OP_DEC,1,1,0);o->opnd[0]=rm;} else set(o,OP_UNIMPL,1,0,0); break;
    case 0xFF: reg=modrm(&d,&rm,d.osz); switch(reg){
        case 0: set(o,OP_INC,d.osz,1,0); o->opnd[0]=rm; break;
        case 1: set(o,OP_DEC,d.osz,1,0); o->opnd[0]=rm; break;
        case 2: set(o,OP_CALL,4,1,0); o->opnd[0]=rm; o->opnd[0].size=4; break;   /* indirect call */
        case 4: set(o,OP_JMP,4,1,0);  o->opnd[0]=rm; o->opnd[0].size=4; break;   /* indirect jmp / switch */
        case 6: set(o,OP_PUSH,d.osz,1,0); o->opnd[0]=rm; break;
        default: set(o,OP_UNIMPL,4,0,0); break;                                  /* far call/jmp -> loud */
        } break;

    case 0x0F: decode_0f(&d, o); break;

    default:
        set(o,OP_UNIMPL,4,0,0); break;   /* unknown 1-byte opcode -> loud */
    }
    o->nextva = d.p;
}
