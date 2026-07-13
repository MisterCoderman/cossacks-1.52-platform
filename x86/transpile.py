#!/usr/bin/env python3
# transpile.py — static x86 -> C recompiler for SPAG.exe (see x86/PLAN.md).
# Emits `void f_<va>(void)` over the cpu.h model. VERBATIM: one instruction ->
# its exact C semantics; nothing invented. Unimplemented mnemonics emit a LOUD
# x86_unimpl() abort so coverage gaps can never be silently wrong.
#
#   python transpile.py <hexVA>        -> stdout: C for that one function
#   python transpile.py all <outfile>  -> all functions -> outfile (+ <outfile>.reg)
import sys, csv, struct
from capstone import *
from capstone.x86 import *

import os as _os
# Parameterized per-DLL via env (default: England.dll). COS_DLLDIR holds the
# extracted text/rdata/data.bin + functions.csv; the VAs are the DLL's section VAs.
_DLLDIR = _os.environ.get("COS_DLLDIR", r"C:\cossacks_wasm\x86\dll\England")
DEC_DATA  = _DLLDIR + r"\text.bin"
RDATA_BIN = _DLLDIR + r"\rdata.bin"
DATA_BIN  = _DLLDIR + r"\data.bin"
FUNCS_CSV = _DLLDIR + r"\functions.csv"
TEXT_VA  = int(_os.environ.get("COS_TEXT_VA",  "0x10001000"), 16)
TEXT_END = TEXT_VA + int(_os.environ.get("COS_TEXT_VSZ", "0xca3a"), 16)
RDATA_VA = int(_os.environ.get("COS_RDATA_VA", "0x1000e000"), 16)
DATA_VA  = int(_os.environ.get("COS_DATA_VA",  "0x1000f000"), 16)

TEXT  = open(DEC_DATA, "rb").read()
RDATA = open(RDATA_BIN, "rb").read()
DATA  = open(DATA_BIN, "rb").read()
RDATA_END = RDATA_VA + len(RDATA)
DATA_END  = DATA_VA  + len(DATA)

def in_text(va):  return TEXT_VA  <= va < TEXT_VA  + len(TEXT)
def in_rdata(va): return RDATA_VA <= va < RDATA_END
def in_data(va):  return DATA_VA  <= va < DATA_END
def in_image_data(va):  # a switch table may live in any read-only/data section
    return in_text(va) or in_rdata(va) or in_data(va)

def img_u32(va):
    """read a little-endian dword from the loaded image (text/rdata/data)."""
    if in_text(va):  return struct.unpack_from("<I", TEXT,  va - TEXT_VA)[0]
    if in_rdata(va): return struct.unpack_from("<I", RDATA, va - RDATA_VA)[0]
    if in_data(va):  return struct.unpack_from("<I", DATA,  va - DATA_VA)[0]
    return None

FUNCS = []          # (va, size, name)
FUNC_STARTS = set()
with open(FUNCS_CSV, newline="") as f:
    for row in csv.DictReader(f):
        try:
            va = int(row["address"], 16); sz = int(row["sizeBytes"])
        except Exception:
            continue
        if TEXT_VA <= va < TEXT_END and sz > 0:
            FUNCS.append((va, sz, row["name"])); FUNC_STARTS.add(va)

# Sorted function starts -> the next function start after a given VA, used to
# bound switch-table reads and any disassembly that must run past the Ghidra
# declared end (tail fragments MSVC emits after an embedded jump table).
import bisect as _bisect

# Functions Ghidra's list MISSED but which ARE reached (indirectly, as vtable
# methods). Discovered run-driven via the recompiler's interp-fallback ([missfn]
# log). Listing them here compiles each to a native f_<va> instead of interpreting
# it on every call (these sit on the hot per-frame path). Their own unknown callees
# stay safe: transpile emits call_ind -> x86_resolve -> interp-fallback.
# NOTE: compiling these (Ghidra-missed vtable methods) for speed introduced a HANG
# at the intro -> at least one transpiles incorrectly (the interp-fallback runs them
# correctly). Left EMPTY for now: the .text interp-fallback in x86_resolve_fallback
# handles them correctly (reaches the House menu scene). Promoting them to native is
# a future speed pass that needs a per-function transpile-bug bisect first.
_EXTRA_FUNCS = [
]
for _va in _EXTRA_FUNCS:
    if TEXT_VA <= _va < TEXT_END:
        FUNC_STARTS.add(_va)
_FSTARTS_SORTED = sorted(FUNC_STARTS)
def next_func_start(va):
    i = _bisect.bisect_right(_FSTARTS_SORTED, va)
    return _FSTARTS_SORTED[i] if i < len(_FSTARTS_SORTED) else TEXT_END
_have = set(x[0] for x in FUNCS)
for _va in _EXTRA_FUNCS:
    if _va not in _have and TEXT_VA <= _va < TEXT_END:
        FUNCS.append((_va, next_func_start(_va) - _va, "FUN_%08x" % _va))

md = Cs(CS_ARCH_X86, CS_MODE_32); md.detail = True

# capstone reg-id -> cpu.h lvalue expression, by access size
R32 = {X86_REG_EAX:"EAX",X86_REG_ECX:"ECX",X86_REG_EDX:"EDX",X86_REG_EBX:"EBX",
       X86_REG_ESP:"ESP",X86_REG_EBP:"EBP",X86_REG_ESI:"ESI",X86_REG_EDI:"EDI"}
R16 = {X86_REG_AX:"AX",X86_REG_CX:"CX",X86_REG_DX:"DX",X86_REG_BX:"BX",
       X86_REG_SP:"SP",X86_REG_BP:"BP",X86_REG_SI:"SI",X86_REG_DI:"DI"}
R8  = {X86_REG_AL:"AL",X86_REG_AH:"AH",X86_REG_CL:"CL",X86_REG_CH:"C.c.b.h",
       X86_REG_DL:"DL",X86_REG_DH:"C.d.b.h",X86_REG_BL:"BL",X86_REG_BH:"C.b.b.h"}

def st_index(rid):
    """capstone ST(i) register id -> i (0..7), else None."""
    if X86_REG_ST0 <= rid <= X86_REG_ST7: return rid - X86_REG_ST0
    return None

SEG = {X86_REG_ES:"C.seg_es",X86_REG_CS:"C.seg_cs",X86_REG_SS:"C.seg_ss",
       X86_REG_DS:"C.seg_ds",X86_REG_FS:"C.seg_fs",X86_REG_GS:"C.seg_gs"}

def regexpr(rid):
    if rid in R32: return R32[rid], 4
    if rid in R16: return R16[rid], 2
    if rid in R8:  return R8[rid], 1
    if rid in SEG: return SEG[rid], 2
    raise NotImplementedError("reg %d" % rid)

def memaddr(op):
    m = op.mem; parts = []
    if m.base:  parts.append(R32[m.base])
    if m.index: parts.append("%s*%d" % (R32[m.index], m.scale))
    d = m.disp
    if d or not parts:
        parts.append(("0x%x" % (d & 0xffffffff)) if d >= 0 else ("-0x%x" % (-d)))
    return "(uint32_t)(" + " + ".join(parts) + ")"

class O:
    """one operand: size, .rd (read expr), .wr(val)->stmt, .addr (for lea/mem)."""
    def __init__(self, ins, op):
        self.size = op.size
        if op.type == X86_OP_REG:
            e, sz = regexpr(op.reg); self.size = sz
            self.rd = e; self._reg = e; self._mem = None; self.addr = None
        elif op.type == X86_OP_IMM:
            self.rd = "0x%xu" % (op.imm & 0xffffffff); self._reg=None; self._mem=None; self.addr=None
        elif op.type == X86_OP_MEM:
            a = memaddr(op); self.addr = a; self._reg=None; self._mem=a
            self.rd = {1:"r8",2:"r16",4:"r32"}[self.size] + "(" + a + ")"
        else:
            raise NotImplementedError("op type %d" % op.type)
    def wr(self, val):
        if self._reg is not None: return "%s = (%s);" % (self._reg, val)
        if self._mem is not None: return "%s(%s, (%s));" % ({1:"w8",2:"w16",4:"w32"}[self.size], self._mem, val)
        raise NotImplementedError("write to imm")

BITS = {1:8, 2:16, 4:32}
JCC = {  # mnemonic -> C condition over cpu flags
  "je":"C.zf","jz":"C.zf","jne":"!C.zf","jnz":"!C.zf",
  "jb":"C.cf","jc":"C.cf","jnae":"C.cf","jae":"!C.cf","jnc":"!C.cf","jnb":"!C.cf",
  "jbe":"(C.cf||C.zf)","jna":"(C.cf||C.zf)","ja":"(!C.cf&&!C.zf)","jnbe":"(!C.cf&&!C.zf)",
  "jl":"(C.sf!=C.of)","jnge":"(C.sf!=C.of)","jge":"(C.sf==C.of)","jnl":"(C.sf==C.of)",
  "jle":"(C.zf||C.sf!=C.of)","jng":"(C.zf||C.sf!=C.of)","jg":"(!C.zf&&C.sf==C.of)","jnle":"(!C.zf&&C.sf==C.of)",
  "js":"C.sf","jns":"!C.sf","jo":"C.of","jno":"!C.of","jp":"C.pf","jpe":"C.pf","jnp":"!C.pf","jpo":"!C.pf",
}
# setcc shares the same flag conditions as the matching jcc (strip leading 's' -> 'j')
SETCC = { ("set"+k[1:]): v for k,v in JCC.items() }
LOOPCC = {"loop", "loope", "loopz", "loopne", "loopnz", "jecxz", "jcxz"}

def emit_ins(ins, fstart, fend):
    m = ins.mnemonic; ops = ins.operands; nxt = ins.address + ins.size
    s = []
    def two(): return O(ins,ops[0]), O(ins,ops[1])
    if m == "nop" or m.startswith("nop"): return ["/* nop */"]
    if m == "mov":
        d,sv = two(); return [d.wr(sv.rd)]
    if m == "lea":
        d = O(ins,ops[0]); sa = O(ins,ops[1]); return [d.wr(sa.addr)]
    if m == "movzx":
        d = O(ins,ops[0]); sv = O(ins,ops[1]); return [d.wr("(uint32_t)(%s)" % sv.rd)]
    if m == "movsx":
        d = O(ins,ops[0]); sv = O(ins,ops[1]); st="int8_t" if sv.size==1 else "int16_t"
        return [d.wr("(uint32_t)(int32_t)(%s)(%s)" % (st, sv.rd))]
    if m == "push":
        v=O(ins,ops[0]); return ["push32((uint32_t)(%s));" % v.rd]
    if m == "pop":
        d=O(ins,ops[0]); return [d.wr("pop32()")]
    if m == "leave":
        return ["ESP = EBP;", "EBP = pop32();"]
    if m in ("add","sub","and","or","xor","adc","sbb","cmp","test"):
        d,sv = two(); b=BITS[d.size]
        a_ex = d.rd; b_ex = "(%s)" % sv.rd
        if m in ("add","adc"):
            extra = "+C.cf" if m=="adc" else ""
            s.append("{ uint32_t _a=(%s),_b=%s,_r=_a+_b%s; %s fl_add(_a,_b,_r,%d); }" % (a_ex,b_ex,extra,d.wr("_r"),b))
        elif m in ("sub","sbb"):
            extra = "-C.cf" if m=="sbb" else ""
            s.append("{ uint32_t _a=(%s),_b=%s,_r=_a-_b%s; %s fl_sub(_a,_b,_r,%d); }" % (a_ex,b_ex,extra,d.wr("_r"),b))
        elif m=="cmp":
            s.append("{ uint32_t _a=(%s),_b=%s,_r=_a-_b; fl_sub(_a,_b,_r,%d); }" % (a_ex,b_ex,b))
        elif m=="test":
            s.append("{ uint32_t _r=(%s)&%s; fl_logic(_r,%d); }" % (a_ex,b_ex,b))
        else:  # and/or/xor
            opc={"and":"&","or":"|","xor":"^"}[m]
            s.append("{ uint32_t _r=(%s)%s%s; %s fl_logic(_r,%d); }" % (a_ex,opc,b_ex,d.wr("_r"),b))
        return s
    if m in ("inc","dec"):
        d=O(ins,ops[0]); b=BITS[d.size]; op="+1" if m=="inc" else "-1"
        return ["{ uint32_t _r=(%s)%s; %s %s(_r,%d); }" % (d.rd,op,d.wr("_r"),"fl_inc" if m=="inc" else "fl_dec",b)]
    if m == "neg":
        d=O(ins,ops[0]); b=BITS[d.size]
        return ["{ uint32_t _a=(%s),_r=0u-_a; %s fl_sub(0,_a,_r,%d); }" % (d.rd,d.wr("_r"),b)]
    if m == "not":
        d=O(ins,ops[0]); return [d.wr("~(%s)" % d.rd)]
    if m in ("shl","sal","shr","sar"):
        d=O(ins,ops[0]); c=O(ins,ops[1]); b=BITS[d.size]
        fn = {"shl":"sh_shl","sal":"sh_shl","shr":"sh_shr","sar":"sh_sar"}[m]
        # helper returns the shifted result and sets CF/OF/SF/ZF/PF faithfully.
        return ["%s" % d.wr("%s((uint32_t)(%s), (%s)&0x1f, %d)" % (fn, d.rd, c.rd, b))]
    if m == "cdq":
        return ["EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;"]
    if m == "cwde":
        return ["EAX = (uint32_t)(int32_t)(int16_t)AX;"]
    if m == "xchg":
        d,sv = two(); return ["{ uint32_t _t=(%s); %s %s }" % (d.rd, d.wr(sv.rd), sv.wr("_t"))]
    if m == "imul":
        if len(ops)==1:
            sv=O(ins,ops[0]); return ["{ int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(%s); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }" % sv.rd]
        d=O(ins,ops[0]); a=O(ins,ops[1]); bsrc = O(ins,ops[2]).rd if len(ops)==3 else d.rd
        return ["{ int64_t _p=(int64_t)(int32_t)(%s)*(int64_t)(int32_t)(%s); %s C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }" % (a.rd,bsrc,d.wr("(uint32_t)_p"))]
    if m == "mul":
        sv=O(ins,ops[0]); return ["{ uint64_t _p=(uint64_t)EAX*(uint64_t)(%s); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }" % sv.rd]
    if m in ("div","idiv"):
        sv=O(ins,ops[0])
        if m=="div":
            return ["{ uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(%s); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%%_d); }" % sv.rd]
        return ["{ int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(%s); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%%_d); }" % sv.rd]
    if m == "ret":
        n = ops[0].imm if ops else 0
        return ["ESPCHK(0x%08xu, _esp0);" % fstart, "ESP += %d; return;" % (4 + n)]
    if m == "call":
        op=ops[0]
        if op.type==X86_OP_IMM:
            t=op.imm & 0xffffffff
            if t in FUNC_STARTS: return ["push32(0x%xu); f_%08x();" % (nxt, t)]
            return ["call_ind(0x%xu, 0x%xu);" % (t, nxt)]
        tgt = O(ins,op).rd
        return ["call_ind((uint32_t)(%s), 0x%xu);" % (tgt, nxt)]
    if m == "jmp":
        op=ops[0]
        if op.type==X86_OP_IMM:
            t=op.imm & 0xffffffff
            if fstart <= t < fend: return ["goto L_%08x;" % t]
            if t in FUNC_STARTS: return ["f_%08x(); return;" % t]   # tail call
            return ["jmp_ind(0x%xu); return;" % t]
        # switch / computed jump-table: jmp dword ptr [idx*4 + TABLE].
        si = _CUR_SWITCHES.get(ins.address)
        if si is not None:
            lines = ["switch (%s) {" % si.index_expr]
            for ci, t in si.entries:
                lines.append("  case %d: goto L_%08x;" % (ci, t))
            # An index outside the static table is never produced by the original
            # (the preceding range guard ensures it); keep the dispatch loud so a
            # genuinely-unknown computed target can never be silently mistranslated.
            lines.append('  default: x86_unimpl("switch@0x%x out of table"); return;'
                         % ins.address)
            lines.append("}")
            return lines
        return ["jmp_ind((uint32_t)(%s)); return;" % O(ins,op).rd]
    if m in JCC:
        t = ops[0].imm & 0xffffffff
        if fstart <= t < fend: return ["if (%s) goto L_%08x;" % (JCC[m], t)]
        # conditional jump out of this function: tail-call the target function if it
        # is a known entry, else dispatch indirectly (computed/mid-function target).
        if t in FUNC_STARTS:   return ["if (%s) { f_%08x(); return; }" % (JCC[m], t)]
        return ["if (%s) { jmp_ind(0x%xu); return; }" % (JCC[m], t)]
    if m in LOOPCC:
        t = ops[0].imm & 0xffffffff
        cond = {
            "loop": "ECX",
            "loope": "(ECX && C.zf)", "loopz": "(ECX && C.zf)",
            "loopne": "(ECX && !C.zf)", "loopnz": "(ECX && !C.zf)",
            "jecxz": "(ECX == 0)", "jcxz": "((ECX & 0xffffu) == 0)",
        }[m]
        dec = [] if m in ("jecxz", "jcxz") else ["ECX = (ECX - 1);"]
        if fstart <= t < fend: return dec + ["if (%s) goto L_%08x;" % (cond, t)]
        if t in FUNC_STARTS: return dec + ["if (%s) { f_%08x(); return; }" % (cond, t)]
        return dec + ["if (%s) { jmp_ind(0x%xu); return; }" % (cond, t)]
    if m in SETCC:
        d=O(ins,ops[0]); return [d.wr("(%s) ? 1u : 0u" % SETCC[m])]
    # ---- flag transfer ----
    if m == "sahf":
        # AH -> SF ZF AF PF CF (bits 7,6,4,2,0)
        return ["C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;"]
    if m == "lahf":
        return ["AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);"]
    if m == "cld":
        return ["C.df=0;"]
    if m == "std":
        return ["C.df=1;"]
    if m == "bswap":
        d=O(ins,ops[0]); return [d.wr("__builtin_bswap32(%s)" % d.rd)]
    if m in ("ror","rol","rcr","rcl"):
        d=O(ins,ops[0]); c=O(ins,ops[1]); b=BITS[d.size]
        cast={1:"uint8_t",2:"uint16_t",4:"uint32_t"}[d.size]; mask=(1<<b)-1
        cnt="((%s)&%d)" % (c.rd, b-1 if b in (8,16,32) else 31)
        if m=="rol":
            expr="(%s)(((%s)(%s)<<%s)|((%s)(%s)>>((%d-%s)&%d)))" % (cast,cast,d.rd,cnt,cast,d.rd,b,cnt,b-1)
            return ["{ uint32_t _n=%s&0x%x; if(_n){ uint32_t _r=(uint32_t)(%s); %s C.cf=_r&1; C.of=((_r>>%d)&1)^(C.cf); } }" % (c.rd, b-1, expr, d.wr("_r"), b-1)]
        if m=="ror":
            expr="(%s)(((%s)(%s)>>%s)|((%s)(%s)<<((%d-%s)&%d)))" % (cast,cast,d.rd,cnt,cast,d.rd,b,cnt,b-1)
            return ["{ uint32_t _n=%s&0x%x; if(_n){ uint32_t _r=(uint32_t)(%s); %s C.cf=(_r>>%d)&1; C.of=((_r>>%d)&1)^((_r>>%d)&1); } }" % (c.rd, b-1, expr, d.wr("_r"), b-1, b-1, b-2)]
        # rcr / rcl: rotate through carry, width+1 bits; do it bit-by-bit (faithful, exact CF)
        if m=="rcl":
            return ["{ uint32_t _v=(%s)&0x%xu, _cf=C.cf, _n=(%s)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>%d)&1; _v=((_v<<1)|_cf)&0x%xu; _cf=_b; } %s C.cf=_cf; }" % (d.rd, mask, c.rd, b-1, mask, d.wr("_v"))]
        return ["{ uint32_t _v=(%s)&0x%xu, _cf=C.cf, _n=(%s)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<%d); _cf=_b; } %s C.cf=_cf; }" % (d.rd, mask, c.rd, b-1, d.wr("_v"))]
    if m in ("shld","shrd"):
        d=O(ins,ops[0]); s=O(ins,ops[1]); c=O(ins,ops[2]); b=BITS[d.size]
        fn = "sh_shld" if m=="shld" else "sh_shrd"
        return [d.wr("%s((uint32_t)(%s),(uint32_t)(%s),(%s)&0x1f,%d)" % (fn, d.rd, s.rd, c.rd, b))]
    if m == "aas":
        return ["{ if(((AL&0x0f)>9)||C.af){ AX=(uint16_t)(AX-6); AH=(uint8_t)(AH-1); C.af=1; C.cf=1; } else { C.af=0; C.cf=0; } AL&=0x0f; }"]
    if m in ("wait","fwait","fnclex","fclex"):
        return ["/* %s (no observable integer/reg state) */" % m]
    # ---- string ops (rep/repne prefixed: capstone fuses prefix into mnemonic) ----
    if m in ("movsb","movsw","movsd","rep movsb","rep movsw","rep movsd",
             "stosb","stosw","stosd","rep stosb","rep stosw","rep stosd",
             "lodsb","lodsw","lodsd","rep lodsb","rep lodsw","rep lodsd",
             "scasb","scasw","scasd","repe scasb","repne scasb","repe scasw","repne scasw","repe scasd","repne scasd",
             "cmpsb","cmpsw","cmpsd","repe cmpsb","repne cmpsb","repe cmpsd","repne cmpsd"):
        return emit_string(ins, m)
    # ---- x87 FPU ----
    if m[0] == "f":
        r = emit_x87(ins, m)
        if r is not None: return r
    # ---- not yet implemented: LOUD ----
    return ['x86_unimpl("%s @ 0x%x");' % (m, ins.address)]

# ---- string instructions (movs/stos/lods/scas/cmps, optionally rep-prefixed) --
def emit_string(ins, m):
    parts = m.split()
    pref = parts[0] if len(parts) == 2 else None      # rep / repe / repne / None
    base = parts[-1]                                   # movsb / stosd / scasb ...
    op  = base[:-1]; szc = base[-1]                    # 'movs' + 'b'/'w'/'d'
    sz  = {"b":1,"w":2,"d":4}[szc]
    step = sz
    rw   = {1:("r8","w8"),2:("r16","w16"),4:("r32","w32")}[sz]
    rfn, wfn = rw
    dlt = "(C.df?-%d:%d)" % (step, step)
    if op == "movs":
        body = "%s(EDI, %s(ESI)); ESI+=%s; EDI+=%s;" % (wfn, rfn, dlt, dlt)
    elif op == "stos":
        areg = {1:"AL",2:"AX",4:"EAX"}[sz]
        body = "%s(EDI, %s); EDI+=%s;" % (wfn, areg, dlt)
    elif op == "lods":
        areg = {1:"AL",2:"AX",4:"EAX"}[sz]
        body = "%s = %s(ESI); ESI+=%s;" % (areg, rfn, dlt)
    elif op == "scas":
        areg = {1:"AL",2:"AX",4:"EAX"}[sz]; b=BITS[sz]
        body = "{ uint32_t _a=(%s),_b=%s(EDI),_r=_a-_b; fl_sub(_a,_b,_r,%d); } EDI+=%s;" % (areg,rfn,b,dlt)
    elif op == "cmps":
        b=BITS[sz]
        body = "{ uint32_t _a=%s(ESI),_b=%s(EDI),_r=_a-_b; fl_sub(_a,_b,_r,%d); } ESI+=%s; EDI+=%s;" % (rfn,rfn,b,dlt,dlt)
    else:
        return ['x86_unimpl("%s @ 0x%x");' % (m, ins.address)]
    if pref is None:
        return [body]
    # rep / repe(==rep) / repne: loop on ECX; scas/cmps also test ZF.
    if pref in ("rep", "repe", "repz"):
        if op in ("scas", "cmps"):  # repe: repeat while ECX!=0 and ZF==1
            return ["while (ECX!=0) { ECX--; %s if(!C.zf) break; }" % body]
        return ["while (ECX!=0) { ECX--; %s }" % body]
    # repne / repnz: repeat while ECX!=0 and ZF==0
    return ["while (ECX!=0) { ECX--; %s if(C.zf) break; }" % body]

# ---- x87 FPU instructions -------------------------------------------------
def fop_mem_load(op):
    """value expression for a memory float/int source by operand size."""
    a = op.addr if hasattr(op,'addr') else None
    return a

def emit_x87(ins, m):
    ops = ins.operands
    def memexpr_float(o):
        # o is capstone op of type MEM; size 4=float, 8=double, 10=extended(tbyte)
        a = memaddr(o)
        if o.size==4:  return "(double)rf32(%s)" % a
        if o.size==10: return "rf80(%s)" % a
        return "rf64(%s)" % a
    def memexpr_int(o):
        a = memaddr(o)
        if o.size==2: return "(double)(int16_t)r16(%s)" % a
        if o.size==4: return "(double)(int32_t)r32(%s)" % a
        return "(double)(int64_t)((uint64_t)r32(%s)|((uint64_t)r32(%s+4)<<32))" % (a,a)
    # ---- loads ----
    if m == "fld":
        o=ops[0]
        if o.type==X86_OP_REG:
            i=st_index(o.reg); return ["{ double _v=FPU_ST(%d); fpu_push(_v); }" % i]
        return ["fpu_push(%s);" % memexpr_float(o)]
    if m == "fild":
        o=ops[0]; a=memaddr(o)
        if o.size==2: e="(double)(int16_t)r16(%s)"%a
        elif o.size==4: e="(double)(int32_t)r32(%s)"%a
        else: e="(double)(int64_t)((uint64_t)r32(%s)|((uint64_t)r32(%s+4)<<32))"%(a,a)
        return ["fpu_push(%s);" % e]
    if m == "fld1":  return ["fpu_push(1.0);"]
    if m == "fldz":  return ["fpu_push(0.0);"]
    if m == "fldpi": return ["fpu_push(3.14159265358979311599796346854);"]
    if m == "fldl2e":return ["fpu_push(1.44269504088896340735992468100);"]
    if m == "fldl2t":return ["fpu_push(3.32192809488736234787031942949);"]
    if m == "fldlg2":return ["fpu_push(0.30102999566398119521373889472);"]
    if m == "fldln2":return ["fpu_push(0.69314718055994530941723212146);"]
    # ---- stores ----
    if m in ("fst","fstp"):
        o=ops[0]; pop = (m=="fstp")
        if o.type==X86_OP_REG:
            i=st_index(o.reg); s=["FPU_ST(%d) = FPU_ST(0);" % i]
            if pop: s.append("(void)fpu_pop();")
            return s
        a=memaddr(o)
        if o.size==4:    st="wf32(%s, (float)FPU_ST(0));" % a
        elif o.size==10: st="wf80(%s, FPU_ST(0));" % a
        else:            st="wf64(%s, FPU_ST(0));" % a
        s=[st]
        if pop: s.append("(void)fpu_pop();")
        return s
    if m == "fist" or m == "fistp":
        o=ops[0]; a=memaddr(o); pop=(m=="fistp")
        if o.size==2: st="w16(%s, (uint16_t)fpu_to_i16(FPU_ST(0)));"%a
        elif o.size==4: st="w32(%s, (uint32_t)fpu_to_i32(FPU_ST(0)));"%a
        else: st="{ int64_t _q=fpu_to_i64(FPU_ST(0)); w32(%s,(uint32_t)_q); w32(%s+4,(uint32_t)((uint64_t)_q>>32)); }"%(a,a)
        s=[st]
        if pop: s.append("(void)fpu_pop();")
        return s
    if m == "fbstp" or m=="fbld":
        return None  # BCD: not used by this binary; leave unimpl-loud
    # ---- arithmetic (mem or reg forms) ----
    ARITH = {"fadd":"+","fsub":"-","fmul":"*","fdiv":"/",
             "fsubr":"-","fdivr":"/",
             "fiadd":"+","fisub":"-","fimul":"*","fidiv":"/","fisubr":"-","fidivr":"/"}
    base = m
    pop = False; rev = False; integer = False
    if base.endswith("p") and base not in ("fcomp",):  # faddp/fsubp/fmulp/fdivp/fsubrp/fdivrp
        # handled in the *p group below; not here
        pass
    if m in ("fadd","fsub","fmul","fdiv","fsubr","fdivr",
             "fiadd","fisub","fimul","fidiv","fisubr","fidivr"):
        opc = ARITH[m]; rev = m in ("fsubr","fdivr","fisubr","fidivr"); integer = m.startswith("fi")
        o0 = ops[0]
        if len(ops)==1 and o0.type==X86_OP_MEM:
            # ST(0) op= mem
            src = memexpr_int(o0) if integer else memexpr_float(o0)
            if rev: return ["FPU_ST(0) = (%s) %s FPU_ST(0);" % (src,opc)]
            return ["FPU_ST(0) = FPU_ST(0) %s (%s);" % (opc,src)]
        if len(ops)==1 and o0.type==X86_OP_REG:
            i=st_index(o0.reg)  # fadd st(i): ST0 = ST0 op ST(i)  (st0 implicit dest)
            if rev: return ["FPU_ST(0) = FPU_ST(%d) %s FPU_ST(0);" % (i,opc)]
            return ["FPU_ST(0) = FPU_ST(0) %s FPU_ST(%d);" % (opc,i)]
        if len(ops)==2:
            i0=st_index(ops[0].reg); i1=st_index(ops[1].reg)
            # dest = ops[0]; e.g. "fsub st(2), st(0)" -> ST(2)=ST(2)-ST(0)
            if rev: return ["FPU_ST(%d) = FPU_ST(%d) %s FPU_ST(%d);" % (i0,i1,opc,i0)]
            return ["FPU_ST(%d) = FPU_ST(%d) %s FPU_ST(%d);" % (i0,i0,opc,i1)]
    # ---- arithmetic with pop: faddp/fsubp/fmulp/fdivp/fsubrp/fdivrp (ST(i) op= ST0, pop) ----
    if m in ("faddp","fsubp","fmulp","fdivp","fsubrp","fdivrp"):
        opc = {"faddp":"+","fsubp":"-","fmulp":"*","fdivp":"/","fsubrp":"-","fdivrp":"/"}[m]
        rev = m in ("fsubrp","fdivrp")
        i = st_index(ops[0].reg) if (ops and ops[0].type==X86_OP_REG) else 1
        if rev:
            return ["FPU_ST(%d) = FPU_ST(0) %s FPU_ST(%d);" % (i,opc,i), "(void)fpu_pop();"]
        return ["FPU_ST(%d) = FPU_ST(%d) %s FPU_ST(0);" % (i,i,opc), "(void)fpu_pop();"]
    # ---- compares ----
    if m in ("fcom","fcomp"):
        o=ops[0] if ops else None
        if o is not None and o.type==X86_OP_MEM:
            rhs = memexpr_float(o)
        elif o is not None and o.type==X86_OP_REG:
            rhs = "FPU_ST(%d)" % st_index(o.reg)
        else:
            rhs = "FPU_ST(1)"
        s=["fpu_cmp(FPU_ST(0), %s);" % rhs]
        if m=="fcomp": s.append("(void)fpu_pop();")
        return s
    if m == "fcompp":
        return ["fpu_cmp(FPU_ST(0), FPU_ST(1));","(void)fpu_pop();","(void)fpu_pop();"]
    if m in ("fucom","fucomp"):
        o=ops[0] if ops else None
        rhs = ("FPU_ST(%d)" % st_index(o.reg)) if (o is not None and o.type==X86_OP_REG) else "FPU_ST(1)"
        s=["fpu_cmp(FPU_ST(0), %s);" % rhs]
        if m=="fucomp": s.append("(void)fpu_pop();")
        return s
    if m == "fucompp":
        return ["fpu_cmp(FPU_ST(0), FPU_ST(1));","(void)fpu_pop();","(void)fpu_pop();"]
    if m == "ftst":
        return ["fpu_cmp(FPU_ST(0), 0.0);"]
    if m in ("fcomi","fcomip","fucomi","fucomip"):
        i=st_index(ops[0].reg) if ops and ops[0].type==X86_OP_REG else 1
        s=["{ double _a=FPU_ST(0),_b=FPU_ST(%d); if(_a>_b){C.zf=0;C.pf=0;C.cf=0;} else if(_a<_b){C.zf=0;C.pf=0;C.cf=1;} else if(_a==_b){C.zf=1;C.pf=0;C.cf=0;} else {C.zf=1;C.pf=1;C.cf=1;} }" % i]
        if m.endswith("ip"): s.append("(void)fpu_pop();")
        return s
    # ---- status / control word ----
    if m == "fnstsw" or m == "fstsw":
        o=ops[0]
        if o.type==X86_OP_REG:   # ax
            return ["AX = fpu_status();"]
        return ["w16(%s, fpu_status());" % memaddr(o)]
    if m == "fnstcw" or m == "fstcw":
        return ["w16(%s, C.fcw);" % memaddr(ops[0])]
    if m == "fldcw":
        return ["C.fcw = r16(%s);" % memaddr(ops[0])]
    # ---- unary / misc ----
    if m == "fchs":  return ["FPU_ST(0) = -FPU_ST(0);"]
    if m == "fabs":  return ["FPU_ST(0) = __builtin_fabs(FPU_ST(0));"]
    if m == "fsqrt": return ["FPU_ST(0) = __builtin_sqrt(FPU_ST(0));"]
    if m == "frndint": return ["FPU_ST(0) = fpu_rndint(FPU_ST(0));"]
    if m == "fxch":
        i = 1
        if ops:
            for o in ops:
                if o.type==X86_OP_REG:
                    si=st_index(o.reg)
                    if si is not None and si!=0: i=si
        return ["{ double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(%d); FPU_ST(%d)=_t; }" % (i,i)]
    if m == "fincstp": return ["C.fptop=(C.fptop+1)&7;"]
    if m == "fdecstp": return ["C.fptop=(C.fptop-1)&7;"]
    if m == "fld1":  return ["fpu_push(1.0);"]
    if m in ("fnop","fninit","finit"):
        if m in ("fninit","finit"):
            return ["C.fptop=0; C.fcw=0x037f; C.fsw_c0=C.fsw_c1=C.fsw_c2=C.fsw_c3=0;"]
        return ["/* fnop */"]
    if m == "ffree" or m=="ffree":
        return ["/* ffree (tag only; no value change) */"]
    if m == "f2xm1": return ["FPU_ST(0) = __builtin_pow(2.0, FPU_ST(0)) - 1.0;"]
    if m == "fyl2x":
        return ["{ double _y=FPU_ST(1), _x=FPU_ST(0); FPU_ST(1)=_y*(__builtin_log(_x)/0.69314718055994530941723212146); }","(void)fpu_pop();"]
    if m == "fyl2xp1":
        return ["{ double _y=FPU_ST(1), _x=FPU_ST(0); FPU_ST(1)=_y*(__builtin_log(_x+1.0)/0.69314718055994530941723212146); }","(void)fpu_pop();"]
    if m == "fscale":
        return ["FPU_ST(0) = FPU_ST(0) * __builtin_exp2(__builtin_trunc(FPU_ST(1)));"]
    if m == "fprem":
        return ["FPU_ST(0) = __builtin_fmod(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;"]
    if m == "fprem1":
        return ["FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;"]
    if m == "fsin":  return ["FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;"]
    if m == "fcos":  return ["FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;"]
    if m == "fptan":
        return ["FPU_ST(0) = __builtin_tan(FPU_ST(0));", "fpu_push(1.0); C.fsw_c2=0;"]
    if m == "fpatan":
        return ["{ double _r=__builtin_atan2(FPU_ST(1), FPU_ST(0)); (void)fpu_pop(); FPU_ST(0)=_r; }"]
    if m == "fsincos":
        return ["{ double _x=FPU_ST(0); FPU_ST(0)=__builtin_sin(_x); fpu_push(__builtin_cos(_x)); C.fsw_c2=0; }"]
    if m == "fxam":
        return ["{ double _v=FPU_ST(0); C.fsw_c1=(__builtin_signbit(_v)!=0); if(_v!=_v){C.fsw_c3=0;C.fsw_c2=1;C.fsw_c0=1;} else if(__builtin_isinf(_v)){C.fsw_c3=0;C.fsw_c2=1;C.fsw_c0=1;} else if(_v==0.0){C.fsw_c3=1;C.fsw_c2=0;C.fsw_c0=0;} else {C.fsw_c3=0;C.fsw_c2=1;C.fsw_c0=0;} }"]
    # ---- full FPU environment save/restore (108-byte 32-bit protected format) ----
    if m in ("fnsave","fsave"):
        a=memaddr(ops[0])
        # bytes: 0 FCW, 4 FSW, 8 TWD, ... regs at offset 28 (10 bytes each, ST order),
        # then reinit (fsave does FINIT after store).
        return ["{ uint32_t _b=%s; w16(_b,C.fcw); w16(_b+4,fpu_status()); w16(_b+8,0x0000);"
                " for(int _i=0;_i<8;_i++) wf80(_b+28+_i*10, FPU_ST(_i)); }"
                " C.fptop=0; C.fcw=0x037f; C.fsw_c0=C.fsw_c1=C.fsw_c2=C.fsw_c3=0;" % a]
    if m == "frstor":
        a=memaddr(ops[0])
        return ["{ uint32_t _b=%s; C.fcw=r16(_b); uint16_t _sw=r16(_b+4); C.fptop=(_sw>>11)&7;"
                " C.fsw_c0=(_sw>>8)&1; C.fsw_c1=(_sw>>9)&1; C.fsw_c2=(_sw>>10)&1; C.fsw_c3=(_sw>>14)&1;"
                " for(int _i=0;_i<8;_i++) FPU_ST(_i)=rf80(_b+28+_i*10); }" % a]
    return None

# ---- switch / jump-table detection ---------------------------------------
# Pattern:  jmp dword ptr [<idx>*4 + TABLE]  /  jmp dword ptr [TABLE + <idx>*4]
# where TABLE is an absolute .text/.rdata/.data VA whose consecutive dwords are
# .text VAs that fall INSIDE the same (possibly Ghidra-truncated) function. We
# read those entries, emit a C `switch` over the index register that `goto`s the
# corresponding local L_<tgt> labels, and report the table byte-range + targets
# so the disassembler can (a) add labels and (b) skip the embedded table bytes.
#
# A table read STOPS at the first dword that is not an in-window .text VA. The
# scan window is [fstart, hard_end) where hard_end = next function start: this
# lets a table whose targets are MSVC tail fragments past the Ghidra-declared
# end still resolve, while never crossing into a neighbouring function.

class SwitchInfo:
    __slots__ = ("jmp_addr","index_expr","table_va","entries","tbl_lo","tbl_hi","first_idx")
    def __init__(self, jmp_addr, index_expr, table_va, entries, first_idx):
        self.jmp_addr  = jmp_addr        # VA of the indirect jmp instruction
        self.index_expr= index_expr      # C expression giving the table index
        self.table_va  = table_va        # absolute VA of the table base
        self.entries   = entries         # list of (case_index, target_va)
        self.first_idx = first_idx       # index of the first valid entry (>=0)
        self.tbl_lo    = table_va + first_idx*4
        self.tbl_hi    = table_va + (entries[-1][0]+1)*4 if entries else table_va

def _switch_index_expr(mem):
    """C expression for the runtime table index of a `jmp [idx*scale + TABLE]`."""
    if mem.index == 0 or mem.scale != 4:
        return None
    reg = R32.get(mem.index)
    if reg is None:
        return None
    # base (if any) folds into the address, not the index — switch tables have
    # no base register in this binary; require none to stay exact.
    if mem.base != 0:
        return None
    return reg

def detect_switch(ins, fstart, hard_end):
    """Return a SwitchInfo for an indirect-jmp-through-table, else None."""
    if ins.mnemonic != "jmp" or not ins.operands:
        return None
    op = ins.operands[0]
    if op.type != X86_OP_MEM:
        return None
    mem = op.mem
    idx = _switch_index_expr(mem)
    if idx is None:
        return None
    table_va = mem.disp & 0xffffffff
    if not in_image_data(table_va):
        return None
    # Read consecutive dwords. The first entry may be dead filler that overlaps
    # the preceding instruction's bytes (MSVC `and idx,3` tables index 1..3); in
    # that case entry 0 is not a valid VA but later entries are. We therefore
    # collect every dword that IS an in-window .text VA, allowing a leading run
    # of <=3 invalid (dead) slots, and stopping at the first invalid slot AFTER
    # we've seen at least one valid entry.
    entries = []
    first_idx = None
    i = 0
    LEAD_SLACK = 4
    while True:
        ent = img_u32(table_va + i*4)
        if ent is None:
            break
        valid = in_text(ent) and (fstart <= ent < hard_end)
        if valid:
            if first_idx is None:
                first_idx = i
            entries.append((i, ent))
        else:
            if first_idx is not None:
                break              # end of table (first invalid after valid run)
            if i >= LEAD_SLACK:
                break              # no table here within the leading slack
        i += 1
        if i > 256:
            break
    if not entries:
        return None
    return SwitchInfo(ins.address, idx, table_va, entries, first_idx)

# switch info for the function currently being transpiled, keyed by jmp VA.
_CUR_SWITCHES = {}

def transpile_func(va, size, name):
    fend = va + size
    hard_end = max(fend, next_func_start(va))   # allow tail fragments past Ghidra end
    # ---- pass 0: find switch tables (needs a first linear disasm) -----------
    switches = {}
    tbl_ranges = []      # [(lo, hi)] byte ranges of embedded jump tables to skip
    sw_targets = set()   # switch case targets -> need L_ labels

    # ---- reachability walk (CFG) to find the TRUE function extent ------------
    # Ghidra's `size` truncates at the first `ret`; MSVC routinely lays cold
    # tails and switch fragments AFTER the epilogue, still part of THIS function
    # (reached by fall-through or a direct branch). We must include those, but
    # must NOT absorb a *different*, Ghidra-unlisted function that happens to sit
    # in the gap before the next listed start (it is unreachable from va). So we
    # follow control flow: fall-through (until an unconditional terminator),
    # direct jcc/jmp targets, and accepted-switch case targets. Switches are
    # detected only at instructions this walk actually reaches.
    def decode_at(addr):
        c = TEXT[addr-TEXT_VA: hard_end-TEXT_VA]
        for ins in md.disasm(c, addr):
            return ins
        return None
    max_target = fend
    seen_addr = set()
    worklist = [va]
    while worklist:
        a = worklist.pop()
        while va <= a < hard_end and a not in seen_addr:
            ins = decode_at(a)
            if ins is None:
                break
            seen_addr.add(a)
            max_target = max(max_target, ins.address + ins.size)
            m = ins.mnemonic
            si = detect_switch(ins, va, hard_end)
            if si is not None:
                switches[ins.address] = si
                tbl_ranges.append((si.tbl_lo, si.tbl_hi))
                for _, t in si.entries:
                    sw_targets.add(t); max_target = max(max_target, t+1)
                    if t not in seen_addr: worklist.append(t)
                break                      # indirect jmp: no fall-through
            if (m in JCC or m in LOOPCC) and ins.operands and ins.operands[0].type == X86_OP_IMM:
                bt = ins.operands[0].imm & 0xffffffff
                if va <= bt < hard_end and bt not in seen_addr: worklist.append(bt)
                a = ins.address + ins.size  # conditional: also fall through
                continue
            if m == "jmp":
                if ins.operands and ins.operands[0].type == X86_OP_IMM:
                    bt = ins.operands[0].imm & 0xffffffff
                    if va <= bt < hard_end and bt not in seen_addr: worklist.append(bt)
                break                      # unconditional: no fall-through
            if m == "ret" or m.startswith("ret"):
                break                      # terminator: no fall-through
            a = ins.address + ins.size     # ordinary instr: fall through
    # effective end: cover the farthest reachable byte (bounded by next function).
    eff_end = min(hard_end, max(fend, max_target))

    # ---- pass 1: linear disasm over [va, eff_end), skipping table bytes -----
    def in_table(a, n):
        for lo, hi in tbl_ranges:
            if a < hi and a + n > lo: return True
        return False
    insns = []
    cur = va
    while cur < eff_end:
        # skip over any embedded jump-table bytes
        skipped = False
        for lo, hi in tbl_ranges:
            if lo <= cur < hi:
                cur = hi; skipped = True; break
        if skipped:
            continue
        # Disassemble against bytes up to hard_end (the next function start), not
        # just eff_end: an instruction whose START is < eff_end may be several
        # bytes long and cross the eff_end boundary (e.g. the instruction AT the
        # farthest switch target). Feeding only [cur, eff_end) would truncate it
        # and capstone would fail to decode -> a missing L_ label. We still stop
        # APPENDING once an instruction starts at/after eff_end (below).
        chunk = TEXT[cur-TEXT_VA: hard_end-TEXT_VA]
        got = None
        for ins in md.disasm(chunk, cur):
            # never emit an instruction that starts at/after the effective end
            if ins.address >= eff_end:
                break
            # stop this run if we step onto table bytes
            if in_table(ins.address, ins.size):
                break
            insns.append(ins); got = ins
            nxt = ins.address + ins.size
            cur = nxt          # ALWAYS advance past the decoded instruction
            # if the next instruction would start inside a table, resync there:
            # break this run so the outer loop's table-skip jumps cur past the
            # table. (cur is already == nxt, so the skip fires immediately and
            # we never re-disassemble the same instruction -> no infinite loop.)
            stop = False
            for lo, hi in tbl_ranges:
                if lo <= nxt < hi: stop = True; break
            if stop: break
        if got is None:
            cur += 1   # undecodable byte (alignment/padding); advance
    # ---- pass 1b: collect label targets (direct jcc/jmp + switch cases) -----
    targets = set(sw_targets)
    insn_addrs = set(i.address for i in insns)
    for ins in insns:
        if ins.mnemonic in JCC or ins.mnemonic in LOOPCC or ins.mnemonic == "jmp":
            if ins.operands and ins.operands[0].type == X86_OP_IMM:
                t = ins.operands[0].imm & 0xffffffff
                if va <= t < eff_end: targets.add(t)
    # ---- emit --------------------------------------------------------------
    global _CUR_SWITCHES
    _CUR_SWITCHES = switches
    note = ""
    if switches:
        note = " [%d switch table(s)]" % len(switches)
    out = ["/* %s @ 0x%08x (%d bytes, %d insns)%s */" % (name, va, size, len(insns), note),
           "void f_%08x(void) {" % va,
           "  FTRACE(0x%08xu);" % va,    # per-function entry trace (no-op unless FTRACE_ON)
           "  uint32_t _esp0 = ESP; (void)_esp0;"]   # for ESPCHK stack-balance assert at ret
    # all label *definitions* we will emit = instruction addresses that are
    # branch/switch targets. Collect for the fixup below.
    defined = set(i.address for i in insns) & targets
    # switch-case targets are emitted as `goto L_<t>` regardless of whether the
    # decoder reached an instruction boundary at <t>; a `je`/`jmp` to an in-range
    # target likewise. If an embedded (e.g. byte-indexed / nested) jump table the
    # static analyzer could not resolve desynced the linear sweep, a goto target
    # may have no instruction boundary. Such a target is NOT statically known to
    # be reachable code here -> emit a defensive loud label so (a) the C compiles
    # and (b) reaching it aborts rather than silently mistranslating.
    referenced = set(sw_targets)
    for ins in insns:
        if ins.mnemonic in JCC or ins.mnemonic in LOOPCC or ins.mnemonic == "jmp":
            if ins.operands and ins.operands[0].type == X86_OP_IMM:
                t = ins.operands[0].imm & 0xffffffff
                if va <= t < eff_end: referenced.add(t)
    orphan_targets = sorted(t for t in referenced if t not in defined)

    for ins in insns:
        if ins.address in targets: out.append("L_%08x:;" % ins.address)
        out.append("  /* %08x %s %s */" % (ins.address, ins.mnemonic, ins.op_str))
        for line in emit_ins(ins, va, eff_end):
            out.append("  " + line)
    for t in orphan_targets:
        out.append("L_%08x: /* branch target inside unresolved embedded table */" % t)
        out.append('  x86_unimpl("desync@0x%x (unresolved jump table)"); return;' % t)
    out.append("}")
    _CUR_SWITCHES = {}
    return "\n".join(out)

if __name__ == "__main__":
    if len(sys.argv) >= 2 and sys.argv[1] != "all":
        va = int(sys.argv[1], 16)
        f = next((x for x in FUNCS if x[0]==va), None)
        if not f: sys.exit("no function at 0x%x" % va)
        print(transpile_func(*f))
    else:
        print("functions:", len(FUNCS))
