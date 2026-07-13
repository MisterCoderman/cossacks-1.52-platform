#!/usr/bin/env python3
# decode.py — offline pre-decoder for the LEAN x86 INTERPRETER of SPAG.exe.
#
# APPROACH (memory-safe, faithful — NOT codegen; see x86/INTERP.md):
# We disassemble EVERY .text instruction once with capstone (exactly the bounds,
# reachability walk, switch-table detection and table-byte skipping that the
# proven transpile.py uses) and emit a compact C DATA array of `Op` records into
# x86/ops.c, plus a sorted va->index map, plus the op-class enum into x86/ops.h.
# The interpreter (x86/interp.c) then runs a flat loop on guest EIP, dispatching
# on Op.cls and reusing the cpu.h semantics on Op.opnd — the SAME expressions
# transpile.py emits as C, just evaluated at runtime instead of compiled.
#
# This is pure python (no build) -> light. It reuses transpile.py's image load,
# function table, capstone instance, register/operand maps, JCC/SETCC tables, the
# switch detector and the per-function code walk; nothing is re-derived here.
#
#   python decode.py            -> writes x86/ops.c + x86/ops.h, prints op count + enum
#
# Op record layout (mirrors INTERP.md):
#   struct Operand { u8 kind; u8 reg; u8 idx; u8 scale; u8 size; i32 disp; u32 imm; };
#   struct Op { u32 va; u8 cls; u8 size; u8 nopnd; u8 flags; Operand opnd[3]; u32 nextva; };
# Operand.kind: 0=NONE 1=REG 2=IMM 3=MEM.
# Operand.reg/idx are cpu.h register-slot ids (see REG_* enum in ops.h); for an
# 8/16-bit register operand the slot id + size are enough to reconstruct the exact
# cpu.h lvalue (AL/AH/AX/EAX/... or C.x.b.h for the high-byte regs).
# For MEM operands base=reg, index=idx (0 == none), scale, disp; the size field is
# the access size in BYTES (1/2/4/8/10) so x87 mem forms keep their width.
# Op.size = the instruction's primary operand size in bytes (BITS = size*8).
# Op.flags carries class-specific sub-info that has no operand slot:
#   - JCC/SETCC: the condition code index (CC_*).
#   - string ops: bit0=has-rep, bit1=rep-is-equal(repe), bit2=rep-is-notequal(repne),
#                 plus the element size lives in Op.size.
#   - call/jmp: bit0 = target is a known direct function start (imm target).
#   - x87 store/pop variants: bit0 = pops after.
# Anything the interpreter must compute at runtime (effective address, rep loop,
# switch dispatch via op_at(target)) needs NO special table entry — it falls out
# of the descriptor + cpu.h, exactly as the plan requires.

import sys, struct
import transpile as T
from capstone import *
from capstone.x86 import *

OPS_C = r"C:\CODE\woody_wasm\x86\ops.c"
OPS_H = r"C:\CODE\woody_wasm\x86\ops.h"

# ---------------------------------------------------------------------------
# 1) cpu.h register-slot ids. The interpreter reconstructs the EXACT cpu.h
#    lvalue from (slot, size); for the four "high byte" regs (AH/CH/DH/BH) the
#    slot is the same gpr index and size==1 with a HIGH flag encoded in the id
#    (we use a dedicated id range so reg+size is unambiguous). Segment regs get
#    their own ids. This is a 1:1 image of transpile.py's R32/R16/R8/SEG maps.
# ---------------------------------------------------------------------------
# 32-bit GPR slot order MUST match cpu.h's Cpu struct accessors via a small
# table in interp.c; we name them here and emit the enum to ops.h.
GPR = ["EAX","ECX","EDX","EBX","ESP","EBP","ESI","EDI"]   # ids 0..7
# high-byte pseudo-regs (AH,CH,DH,BH) -> ids 8..11 (size always 1)
HIGH = ["AH","CH","DH","BH"]                               # ids 8..11
# segment regs -> ids 16..21
SEGS = ["ES","CS","SS","DS","FS","GS"]                     # ids 16..21
REG_NONE = 255

# capstone reg id -> (slot id, size_in_bytes)
def _build_reg_table():
    t = {}
    # 32-bit
    for rid, nm in T.R32.items():
        t[rid] = (GPR.index(nm), 4)
    # 16-bit -> same gpr slot, size 2
    R16NAME = {X86_REG_AX:"EAX",X86_REG_CX:"ECX",X86_REG_DX:"EDX",X86_REG_BX:"EBX",
               X86_REG_SP:"ESP",X86_REG_BP:"EBP",X86_REG_SI:"ESI",X86_REG_DI:"EDI"}
    for rid, nm in R16NAME.items():
        t[rid] = (GPR.index(nm), 2)
    # 8-bit low -> gpr slot, size 1
    R8LOW = {X86_REG_AL:"EAX",X86_REG_CL:"ECX",X86_REG_DL:"EDX",X86_REG_BL:"EBX"}
    for rid, nm in R8LOW.items():
        t[rid] = (GPR.index(nm), 1)
    # 8-bit high -> dedicated high ids, size 1
    R8HIGH = {X86_REG_AH:8, X86_REG_CH:9, X86_REG_DH:10, X86_REG_BH:11}
    for rid, sid in R8HIGH.items():
        t[rid] = (sid, 1)
    # segment regs
    R_SEG = {X86_REG_ES:16,X86_REG_CS:17,X86_REG_SS:18,X86_REG_DS:19,X86_REG_FS:20,X86_REG_GS:21}
    for rid, sid in R_SEG.items():
        t[rid] = (sid, 2)
    return t
REG_TBL = _build_reg_table()

def reg_slot(rid):
    """capstone reg id -> (slot, size). Raises if unknown (loud, never silent)."""
    if rid in REG_TBL:
        return REG_TBL[rid]
    raise NotImplementedError("reg id %d (%s)" % (rid, T.md.reg_name(rid)))

# st(i) helper (reuse transpile's)
st_index = T.st_index

# ---------------------------------------------------------------------------
# 2) Operand-kind constants (match ops.h)
# ---------------------------------------------------------------------------
K_NONE, K_REG, K_IMM, K_MEM, K_ST = 0, 1, 2, 3, 4   # K_ST = x87 ST(i) register

# ---------------------------------------------------------------------------
# 3) Op-class enum. EXACTLY the semantic classes transpile.py implements (one
#    class per distinct C-emission branch). The interpreter's switch has one
#    case per class, reusing the identical cpu.h expression.
# ---------------------------------------------------------------------------
CLASSES = [
    "NOP",
    # data movement
    "MOV","LEA","MOVZX","MOVSX","XCHG","BSWAP",
    "PUSH","POP","LEAVE",
    # ALU (binary, flag-setting)
    "ADD","ADC","SUB","SBB","AND","OR","XOR","CMP","TEST",
    # ALU (unary)
    "INC","DEC","NEG","NOT",
    # shifts / rotates
    "SHL","SHR","SAR","SHLD","SHRD","ROL","ROR","RCL","RCR",
    # mul / div
    "IMUL1","IMUL","MUL","DIV","IDIV","CDQ","CWDE",
    # control flow
    "CALL","RET","JMP","JCC","SETCC",
    # flag transfer / dir
    "SAHF","LAHF","CLD","STD","AAS",
    # misc integer ops Woody uses that SPAG did not (cpuid, flag/reg block push/pop,
    # bit test/set, jecxz, xlat) — added for the Woody interpreter.
    "CPUID","PUSHFD","POPFD","PUSHAD","POPAD","BT","BTS","BTR","BTC","JECXZ","XLAT",
    # waits / clears (no observable integer/reg state)
    "FWAIT",
    # string ops (rep handling via flags; element size in Op.size)
    "MOVS","STOS","LODS","SCAS","CMPS",
    # ---- x87 ----
    "FLD","FILD","FLDCONST",          # FLDCONST: fld1/fldz/fldpi/fldl2e/... via imm tag
    "FST","FSTP","FIST","FISTP","FISTTP",
    "FADD","FSUB","FMUL","FDIV","FSUBR","FDIVR",          # ST(0) op= src (mem float / st(i))
    "FIADD","FISUB","FIMUL","FIDIV","FISUBR","FIDIVR",    # integer-memory forms
    "FARITH_REG2",        # two-st-register form: ST(i) op= ST(0) (rev variants too)
    "FARITHP",            # faddp/fsubp/fmulp/fdivp/fsubrp/fdivrp (ST(i) op= ST0, pop)
    "FCOM","FCOMP","FCOMPP","FUCOM","FUCOMP","FUCOMPP","FTST","FCOMI",
    "FNSTSW","FNSTCW","FLDCW",
    "FCHS","FABS","FSQRT","FRNDINT","FXCH","FINCSTP","FDECSTP",
    "FINIT","FFREE","FNOP",
    "F2XM1","FYL2X","FYL2XP1","FSCALE","FPREM","FPREM1",
    "FSIN","FCOS","FPTAN","FPATAN","FSINCOS","FXAM",
    "FNSAVE","FRSTOR","FNSTENV","FLDENV",
    # loud fallback (never silent)
    "UNIMPL",
]
CLS = {name: i for i, name in enumerate(CLASSES)}

# x87 constant tags for FLDCONST (Op.opnd[0].imm)
FCONST = {"fld1":0,"fldz":1,"fldpi":2,"fldl2e":3,"fldl2t":4,"fldlg2":5,"fldln2":6}

# ---------------------------------------------------------------------------
# 4) Condition-code enum for JCC/SETCC (Op.flags). The interpreter evaluates the
#    SAME flag expression transpile.py's JCC[...] gives, indexed by this code.
#    We canonicalize every capstone jcc/setcc mnemonic to one of 16 codes.
# ---------------------------------------------------------------------------
CC = ["O","NO","B","AE","E","NE","BE","A","S","NS","P","NP","L","GE","LE","G"]
CC_IDX = {name: i for i, name in enumerate(CC)}
# capstone jcc mnemonic (without leading 'j') -> canonical CC name
JCC_TO_CC = {
    "o":"O","no":"NO",
    "b":"B","c":"B","nae":"B",
    "ae":"AE","nc":"AE","nb":"AE",
    "e":"E","z":"E",
    "ne":"NE","nz":"NE",
    "be":"BE","na":"BE",
    "a":"A","nbe":"A",
    "s":"S","ns":"NS",
    "p":"P","pe":"P","np":"NP","po":"NP",
    "l":"L","nge":"L",
    "ge":"GE","nl":"GE",
    "le":"LE","ng":"LE",
    "g":"G","nle":"G",
}

# ---------------------------------------------------------------------------
# 5) Per-instruction operand capture. Mirrors transpile.py's class O exactly:
#    same reg ids, same mem base/index/scale/disp, same imm, same size.
# ---------------------------------------------------------------------------
class Operand:
    __slots__ = ("kind","reg","idx","scale","disp","imm","size")
    def __init__(self, kind=K_NONE, reg=REG_NONE, idx=REG_NONE, scale=0, disp=0, imm=0, size=0):
        self.kind=kind; self.reg=reg; self.idx=idx; self.scale=scale
        self.disp=disp; self.imm=imm; self.size=size

def NONE_OPND():
    return Operand()

def cap_operand(op):
    """capstone operand -> our Operand (faithful to transpile.py's O)."""
    if op.type == X86_OP_REG:
        i = st_index(op.reg)
        if i is not None:                       # x87 ST(i)
            return Operand(kind=K_ST, reg=i, size=8)
        slot, sz = reg_slot(op.reg)
        return Operand(kind=K_REG, reg=slot, size=sz)
    if op.type == X86_OP_IMM:
        return Operand(kind=K_IMM, imm=op.imm & 0xffffffff, size=op.size)
    if op.type == X86_OP_MEM:
        m = op.mem
        base = REG_NONE; idx = REG_NONE; scale = 0
        if m.base:
            bslot, _ = reg_slot(m.base); base = bslot
        if m.index:
            islot, _ = reg_slot(m.index); idx = islot; scale = m.scale
        return Operand(kind=K_MEM, reg=base, idx=idx, scale=scale,
                       disp=(m.disp & 0xffffffff), size=op.size)
    raise NotImplementedError("op type %d" % op.type)

# ---------------------------------------------------------------------------
# 6) The Op record we accumulate (host side).
# ---------------------------------------------------------------------------
class Op:
    __slots__ = ("va","cls","size","flags","nextva","opnd")
    def __init__(self, va, cls, size, flags, nextva, opnd):
        self.va=va; self.cls=cls; self.size=size; self.flags=flags
        self.nextva=nextva; self.opnd=opnd     # list of up to 3 Operand

# string-op flags
STR_REP   = 1
STR_REPE  = 2
STR_REPNE = 4
# call/jmp flag
TGT_DIRECT = 1
# x87 store flag
FPOP = 1

def _bits_size_of(ins):
    """primary operand size in bytes (BITS = size*8). Use first operand size,
    falling back to 4 (transpile.py reads d.size from the first operand)."""
    if ins.operands:
        return ins.operands[0].size or 4
    return 4

# ---------------------------------------------------------------------------
# 7) classify one instruction -> Op (cls + operands + flags). This is the
#    one-to-one image of transpile.emit_ins's branch selection: every branch
#    there maps to exactly one class here, carrying the same operand descriptors.
# ---------------------------------------------------------------------------
def classify(ins, switches):
    m = ins.mnemonic
    if m.startswith("lock "):       # `lock inc/dec/...`: the LOCK prefix is a no-op
        m = m[5:]                   # in the single-threaded interpreter; route the base op.
    ops = ins.operands
    nxt = ins.address + ins.size
    sz = _bits_size_of(ins)

    def O(i): return cap_operand(ops[i])
    def opnds(n): return [O(i) if i < len(ops) else NONE_OPND() for i in range(n)]

    if m == "nop" or m.startswith("nop"):
        return Op(ins.address, CLS["NOP"], 0, 0, nxt, [NONE_OPND()]*3)

    # ---- data movement ----
    if m == "mov":
        return Op(ins.address, CLS["MOV"], O(0).size, 0, nxt, [O(0),O(1),NONE_OPND()])
    if m == "lea":
        return Op(ins.address, CLS["LEA"], O(0).size, 0, nxt, [O(0),O(1),NONE_OPND()])
    if m == "movzx":
        return Op(ins.address, CLS["MOVZX"], O(0).size, 0, nxt, [O(0),O(1),NONE_OPND()])
    if m == "movsx":
        return Op(ins.address, CLS["MOVSX"], O(0).size, 0, nxt, [O(0),O(1),NONE_OPND()])
    if m == "xchg":
        return Op(ins.address, CLS["XCHG"], O(0).size, 0, nxt, [O(0),O(1),NONE_OPND()])
    if m == "bswap":
        return Op(ins.address, CLS["BSWAP"], O(0).size, 0, nxt, [O(0),NONE_OPND(),NONE_OPND()])
    if m == "push":
        return Op(ins.address, CLS["PUSH"], O(0).size, 0, nxt, [O(0),NONE_OPND(),NONE_OPND()])
    if m == "pop":
        return Op(ins.address, CLS["POP"], O(0).size, 0, nxt, [O(0),NONE_OPND(),NONE_OPND()])
    if m == "leave":
        return Op(ins.address, CLS["LEAVE"], 4, 0, nxt, [NONE_OPND()]*3)

    # ---- ALU binary (flag-setting) ----
    ALU2 = {"add":"ADD","adc":"ADC","sub":"SUB","sbb":"SBB","and":"AND",
            "or":"OR","xor":"XOR","cmp":"CMP","test":"TEST"}
    if m in ALU2:
        return Op(ins.address, CLS[ALU2[m]], O(0).size, 0, nxt, [O(0),O(1),NONE_OPND()])
    # ---- ALU unary ----
    ALU1 = {"inc":"INC","dec":"DEC","neg":"NEG","not":"NOT"}
    if m in ALU1:
        return Op(ins.address, CLS[ALU1[m]], O(0).size, 0, nxt, [O(0),NONE_OPND(),NONE_OPND()])

    # ---- shifts / rotates ----
    SH = {"shl":"SHL","sal":"SHL","shr":"SHR","sar":"SAR",
          "rol":"ROL","ror":"ROR","rcl":"RCL","rcr":"RCR"}
    if m in SH:
        # capstone always gives an explicit count operand (incl. shl r,1 / shl r,cl)
        return Op(ins.address, CLS[SH[m]], O(0).size, 0, nxt, [O(0),O(1),NONE_OPND()])
    if m in ("shld","shrd"):
        cls = CLS["SHLD"] if m=="shld" else CLS["SHRD"]
        return Op(ins.address, cls, O(0).size, 0, nxt, [O(0),O(1),O(2)])

    # ---- mul / div ----
    if m == "imul":
        if len(ops) == 1:
            return Op(ins.address, CLS["IMUL1"], O(0).size, 0, nxt, [O(0),NONE_OPND(),NONE_OPND()])
        # 2- or 3-operand: dst, a, [b]; transpile uses dst.rd as b when 2-operand
        a = opnds(3) if len(ops)==3 else [O(0),O(1),NONE_OPND()]
        return Op(ins.address, CLS["IMUL"], O(0).size, 0, nxt, a)
    if m == "mul":
        return Op(ins.address, CLS["MUL"], O(0).size, 0, nxt, [O(0),NONE_OPND(),NONE_OPND()])
    if m == "div":
        return Op(ins.address, CLS["DIV"], O(0).size, 0, nxt, [O(0),NONE_OPND(),NONE_OPND()])
    if m == "idiv":
        return Op(ins.address, CLS["IDIV"], O(0).size, 0, nxt, [O(0),NONE_OPND(),NONE_OPND()])
    if m == "cdq":
        return Op(ins.address, CLS["CDQ"], 4, 0, nxt, [NONE_OPND()]*3)
    if m == "cwde":
        return Op(ins.address, CLS["CWDE"], 4, 0, nxt, [NONE_OPND()]*3)

    # ---- control flow ----
    if m == "ret":
        imm = (ops[0].imm & 0xffffffff) if ops else 0
        return Op(ins.address, CLS["RET"], 4, 0, nxt,
                  [Operand(kind=K_IMM, imm=imm),NONE_OPND(),NONE_OPND()])
    if m == "call":
        op = ops[0]
        if op.type == X86_OP_IMM:
            t = op.imm & 0xffffffff
            flags = TGT_DIRECT
            return Op(ins.address, CLS["CALL"], 4, flags, nxt,
                      [Operand(kind=K_IMM, imm=t),NONE_OPND(),NONE_OPND()])
        # indirect: target computed from operand at runtime
        return Op(ins.address, CLS["CALL"], O(0).size, 0, nxt, [O(0),NONE_OPND(),NONE_OPND()])
    if m == "jmp":
        op = ops[0]
        if op.type == X86_OP_IMM:
            t = op.imm & 0xffffffff
            return Op(ins.address, CLS["JMP"], 4, TGT_DIRECT, nxt,
                      [Operand(kind=K_IMM, imm=t),NONE_OPND(),NONE_OPND()])
        # indirect / switch: EIP = computed target; op_at() resolves it. No special
        # case is needed — the runtime simply reads the effective address operand.
        return Op(ins.address, CLS["JMP"], O(0).size, 0, nxt, [O(0),NONE_OPND(),NONE_OPND()])
    if m in T.JCC:
        t = ops[0].imm & 0xffffffff
        cc = CC_IDX[JCC_TO_CC[m[1:]]]
        return Op(ins.address, CLS["JCC"], 4, cc, nxt,
                  [Operand(kind=K_IMM, imm=t),NONE_OPND(),NONE_OPND()])
    if m in T.SETCC:
        cc = CC_IDX[JCC_TO_CC[m[3:]]]   # strip "set"
        return Op(ins.address, CLS["SETCC"], O(0).size, cc, nxt, [O(0),NONE_OPND(),NONE_OPND()])

    # ---- flag transfer / direction ----
    if m == "sahf": return Op(ins.address, CLS["SAHF"], 1, 0, nxt, [NONE_OPND()]*3)
    if m == "lahf": return Op(ins.address, CLS["LAHF"], 1, 0, nxt, [NONE_OPND()]*3)
    if m == "cld":  return Op(ins.address, CLS["CLD"], 0, 0, nxt, [NONE_OPND()]*3)
    if m == "std":  return Op(ins.address, CLS["STD"], 0, 0, nxt, [NONE_OPND()]*3)
    if m == "aas":  return Op(ins.address, CLS["AAS"], 1, 0, nxt, [NONE_OPND()]*3)
    if m in ("wait","fwait","fnclex","fclex"):
        return Op(ins.address, CLS["FWAIT"], 0, 0, nxt, [NONE_OPND()]*3)

    # ---- string ops ----
    STR = {"movs":"MOVS","stos":"STOS","lods":"LODS","scas":"SCAS","cmps":"CMPS"}
    parts = m.split()
    base = parts[-1]
    if len(base) >= 5 and base[:-1] in STR and base[-1] in ("b","w","d"):
        pref = parts[0] if len(parts)==2 else None
        elem = {"b":1,"w":2,"d":4}[base[-1]]
        flags = 0
        if pref in ("rep","repe","repz"):
            flags |= STR_REP | STR_REPE
        elif pref in ("repne","repnz"):
            flags |= STR_REP | STR_REPNE
        return Op(ins.address, CLS[STR[base[:-1]]], elem, flags, nxt, [NONE_OPND()]*3)

    # ---- misc integer ops Woody uses (cpuid / flag+reg block push-pop / bit / jecxz / xlat) ----
    if m == "cpuid":
        return Op(ins.address, CLS["CPUID"], 4, 0, nxt, [NONE_OPND()]*3)
    if m in ("pushfd", "pushf"):
        return Op(ins.address, CLS["PUSHFD"], 4, 0, nxt, [NONE_OPND()]*3)
    if m in ("popfd", "popf"):
        return Op(ins.address, CLS["POPFD"], 4, 0, nxt, [NONE_OPND()]*3)
    if m in ("pushal", "pushad"):
        return Op(ins.address, CLS["PUSHAD"], 4, 0, nxt, [NONE_OPND()]*3)
    if m in ("popal", "popad"):
        return Op(ins.address, CLS["POPAD"], 4, 0, nxt, [NONE_OPND()]*3)
    BIT = {"bt":"BT","bts":"BTS","btr":"BTR","btc":"BTC"}
    if m in BIT:
        return Op(ins.address, CLS[BIT[m]], O(0).size, 0, nxt, [O(0),O(1),NONE_OPND()])
    if m == "jecxz":
        t = ops[0].imm & 0xffffffff
        return Op(ins.address, CLS["JECXZ"], 4, 0, nxt, [Operand(kind=K_IMM, imm=t),NONE_OPND(),NONE_OPND()])
    if m in ("xlatb", "xlat"):
        return Op(ins.address, CLS["XLAT"], 1, 0, nxt, [NONE_OPND()]*3)

    # ---- x87 ----
    if m and m[0] == "f":
        r = classify_x87(ins, m)
        if r is not None:
            return r

    # ---- not implemented: LOUD ----
    return Op(ins.address, CLS["UNIMPL"], 0, 0, nxt, [NONE_OPND()]*3)

def classify_x87(ins, m):
    ops = ins.operands
    nxt = ins.address + ins.size
    def O(i): return cap_operand(ops[i])
    n = len(ops)

    # ---- loads ----
    if m == "fld":
        # fld st(i) (reg) or fld mem(float/double/tbyte); operand carries kind+size
        return Op(ins.address, CLS["FLD"], (O(0).size if n else 8), 0, nxt,
                  [O(0) if n else NONE_OPND(),NONE_OPND(),NONE_OPND()])
    if m == "fild":
        return Op(ins.address, CLS["FILD"], O(0).size, 0, nxt, [O(0),NONE_OPND(),NONE_OPND()])
    if m in FCONST:
        return Op(ins.address, CLS["FLDCONST"], 8, 0, nxt,
                  [Operand(kind=K_IMM, imm=FCONST[m]),NONE_OPND(),NONE_OPND()])
    # ---- stores ----
    if m in ("fst","fstp"):
        flags = FPOP if m=="fstp" else 0
        return Op(ins.address, CLS["FSTP"] if m=="fstp" else CLS["FST"],
                  (O(0).size if n else 8), flags, nxt,
                  [O(0) if n else NONE_OPND(),NONE_OPND(),NONE_OPND()])
    if m in ("fist","fistp"):
        flags = FPOP if m=="fistp" else 0
        return Op(ins.address, CLS["FISTP"] if m=="fistp" else CLS["FIST"],
                  O(0).size, flags, nxt, [O(0),NONE_OPND(),NONE_OPND()])
    if m == "fisttp":               # SSE3 store-int-with-truncate + pop
        return Op(ins.address, CLS["FISTTP"], O(0).size, FPOP, nxt, [O(0),NONE_OPND(),NONE_OPND()])
    # ---- arithmetic (float-mem or st-reg forms): ST(0) op= src ----
    FAR = {"fadd":"FADD","fsub":"FSUB","fmul":"FMUL","fdiv":"FDIV",
           "fsubr":"FSUBR","fdivr":"FDIVR"}
    FIAR = {"fiadd":"FIADD","fisub":"FISUB","fimul":"FIMUL","fidiv":"FIDIV",
            "fisubr":"FISUBR","fidivr":"FIDIVR"}
    if m in FAR or m in FIAR:
        if n == 2:
            # two ST-register operands: ST(i) op= ST(0) (rev handled by class)
            cls = {"fadd":"FADD","fsub":"FSUB","fmul":"FMUL","fdiv":"FDIV",
                   "fsubr":"FSUBR","fdivr":"FDIVR"}[m]
            return Op(ins.address, CLS["FARITH_REG2"], 8,
                      _far_subcls(m), nxt, [O(0),O(1),NONE_OPND()])
        cls = FAR.get(m) or FIAR[m]
        # single operand: mem (float/int) or st(i) -> ST0 op= operand
        return Op(ins.address, CLS[cls], (O(0).size if n else 8), 0, nxt,
                  [O(0) if n else NONE_OPND(),NONE_OPND(),NONE_OPND()])
    if m in ("faddp","fsubp","fmulp","fdivp","fsubrp","fdivrp"):
        # ST(i) op= ST0, then pop. flags encode which op + reverse.
        return Op(ins.address, CLS["FARITHP"], 8, _farithp_sub(m), nxt,
                  [O(0) if (n and ops[0].type==X86_OP_REG) else NONE_OPND(),
                   NONE_OPND(),NONE_OPND()])
    # ---- compares ----
    if m == "fcom":   return Op(ins.address, CLS["FCOM"], 8, 0, nxt, [O(0) if n else NONE_OPND(),NONE_OPND(),NONE_OPND()])
    if m == "fcomp":  return Op(ins.address, CLS["FCOMP"], 8, FPOP, nxt, [O(0) if n else NONE_OPND(),NONE_OPND(),NONE_OPND()])
    if m == "fcompp": return Op(ins.address, CLS["FCOMPP"], 8, 0, nxt, [NONE_OPND()]*3)
    if m == "fucom":  return Op(ins.address, CLS["FUCOM"], 8, 0, nxt, [O(0) if n else NONE_OPND(),NONE_OPND(),NONE_OPND()])
    if m == "fucomp": return Op(ins.address, CLS["FUCOMP"], 8, FPOP, nxt, [O(0) if n else NONE_OPND(),NONE_OPND(),NONE_OPND()])
    if m == "fucompp":return Op(ins.address, CLS["FUCOMPP"], 8, 0, nxt, [NONE_OPND()]*3)
    if m == "ftst":   return Op(ins.address, CLS["FTST"], 8, 0, nxt, [NONE_OPND()]*3)
    if m in ("fcomi","fcomip","fucomi","fucomip"):
        flags = FPOP if m.endswith("ip") else 0
        return Op(ins.address, CLS["FCOMI"], 8, flags, nxt,
                  [O(0) if (n and ops[0].type==X86_OP_REG) else NONE_OPND(),NONE_OPND(),NONE_OPND()])
    # ---- status / control ----
    if m in ("fnstsw","fstsw"):
        # operand: AX (reg) or mem
        return Op(ins.address, CLS["FNSTSW"], (O(0).size if n else 2), 0, nxt,
                  [O(0) if n else NONE_OPND(),NONE_OPND(),NONE_OPND()])
    if m in ("fnstcw","fstcw"):
        return Op(ins.address, CLS["FNSTCW"], 2, 0, nxt, [O(0),NONE_OPND(),NONE_OPND()])
    if m == "fldcw":
        return Op(ins.address, CLS["FLDCW"], 2, 0, nxt, [O(0),NONE_OPND(),NONE_OPND()])
    # ---- unary / misc ----
    UNARY = {"fchs":"FCHS","fabs":"FABS","fsqrt":"FSQRT","frndint":"FRNDINT",
             "fincstp":"FINCSTP","fdecstp":"FDECSTP","f2xm1":"F2XM1",
             "fscale":"FSCALE","fprem":"FPREM","fprem1":"FPREM1",
             "fsin":"FSIN","fcos":"FCOS","fptan":"FPTAN","fpatan":"FPATAN",
             "fsincos":"FSINCOS","fxam":"FXAM","fyl2x":"FYL2X","fyl2xp1":"FYL2XP1"}
    if m in UNARY:
        return Op(ins.address, CLS[UNARY[m]], 8, 0, nxt, [NONE_OPND()]*3)
    if m == "fxch":
        # fxch [st(i)] -> swap ST0 with ST(i) (default i=1); carry i in opnd0
        i = 1
        if ops:
            for o in ops:
                if o.type == X86_OP_REG:
                    si = st_index(o.reg)
                    if si is not None and si != 0: i = si
        return Op(ins.address, CLS["FXCH"], 8, 0, nxt,
                  [Operand(kind=K_ST, reg=i),NONE_OPND(),NONE_OPND()])
    if m in ("fninit","finit"):
        return Op(ins.address, CLS["FINIT"], 0, 0, nxt, [NONE_OPND()]*3)
    if m == "fnop":
        return Op(ins.address, CLS["FNOP"], 0, 0, nxt, [NONE_OPND()]*3)
    if m == "ffree":
        return Op(ins.address, CLS["FFREE"], 0, 0, nxt, [NONE_OPND()]*3)
    if m in ("fnsave","fsave"):
        return Op(ins.address, CLS["FNSAVE"], 0, 0, nxt, [O(0),NONE_OPND(),NONE_OPND()])
    if m == "frstor":
        return Op(ins.address, CLS["FRSTOR"], 0, 0, nxt, [O(0),NONE_OPND(),NONE_OPND()])
    if m in ("fnstenv","fstenv"):   # save 28-byte FP environment (cw/sw/tw...) to mem
        return Op(ins.address, CLS["FNSTENV"], 0, 0, nxt, [O(0),NONE_OPND(),NONE_OPND()])
    if m == "fldenv":               # restore 28-byte FP environment from mem
        return Op(ins.address, CLS["FLDENV"], 0, 0, nxt, [O(0),NONE_OPND(),NONE_OPND()])
    return None

# x87 arithmetic sub-op encoding (flags): bits 0-2 op (0 add,1 sub,2 mul,3 div),
# bit3 reverse, bit4 integer-memory. Used by FARITH_REG2 / FARITHP.
def _far_subcls(m):
    base = {"fadd":0,"fsub":1,"fmul":2,"fdiv":3,"fsubr":1,"fdivr":3,
            "fiadd":0,"fisub":1,"fimul":2,"fidiv":3,"fisubr":1,"fidivr":3}[m]
    rev = 8 if m in ("fsubr","fdivr","fisubr","fidivr") else 0
    integer = 16 if m.startswith("fi") else 0
    return base | rev | integer
def _farithp_sub(m):
    base = {"faddp":0,"fsubp":1,"fmulp":2,"fdivp":3,"fsubrp":1,"fdivrp":3}[m]
    rev = 8 if m in ("fsubrp","fdivrp") else 0
    return base | rev

# ---------------------------------------------------------------------------
# 8) Decode one function's reachable instructions. This REUSES transpile.py's
#    exact code-walk: switch detection (T.detect_switch), the CFG reachability
#    that finds the true extent (incl. MSVC cold tails past the Ghidra end), and
#    the table-byte skipping during linear disassembly. We just call the same
#    helpers and capture instructions instead of emitting C.
#
#    We re-implement the *driver* loop here (transpile.transpile_func mixes in C
#    emission), but every decision uses transpile's helpers and the SAME md
#    instance, so the instruction set decoded is identical to what transpile
#    would translate. Switch info is returned so callers can record table ranges.
# ---------------------------------------------------------------------------
def decode_func(va, size):
    fend = va + size
    hard_end = max(fend, T.next_func_start(va))

    def decode_at(addr):
        c = T.TEXT[addr - T.TEXT_VA: hard_end - T.TEXT_VA]
        for ins in T.md.disasm(c, addr):
            return ins
        return None

    # ---- pass 0: reachability walk -> switches, table ranges, true extent ----
    switches = {}
    tbl_ranges = []
    sw_targets = set()
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
            si = T.detect_switch(ins, va, hard_end)
            if si is not None:
                switches[ins.address] = si
                tbl_ranges.append((si.tbl_lo, si.tbl_hi))
                for _, t in si.entries:
                    sw_targets.add(t); max_target = max(max_target, t + 1)
                    if t not in seen_addr: worklist.append(t)
                break
            if m in T.JCC and ins.operands and ins.operands[0].type == X86_OP_IMM:
                bt = ins.operands[0].imm & 0xffffffff
                if va <= bt < hard_end and bt not in seen_addr: worklist.append(bt)
                a = ins.address + ins.size
                continue
            if m == "jmp":
                if ins.operands and ins.operands[0].type == X86_OP_IMM:
                    bt = ins.operands[0].imm & 0xffffffff
                    if va <= bt < hard_end and bt not in seen_addr: worklist.append(bt)
                break
            if m == "ret" or m.startswith("ret"):
                break
            a = ins.address + ins.size
    eff_end = min(hard_end, max(fend, max_target))

    # ---- pass 1: linear disasm over [va, eff_end), skipping table bytes -------
    def in_table(a, nbytes):
        for lo, hi in tbl_ranges:
            if a < hi and a + nbytes > lo: return True
        return False
    insns = []
    cur = va
    while cur < eff_end:
        skipped = False
        for lo, hi in tbl_ranges:
            if lo <= cur < hi:
                cur = hi; skipped = True; break
        if skipped:
            continue
        chunk = T.TEXT[cur - T.TEXT_VA: hard_end - T.TEXT_VA]
        got = None
        for ins in T.md.disasm(chunk, cur):
            if ins.address >= eff_end:
                break
            if in_table(ins.address, ins.size):
                break
            insns.append(ins); got = ins
            nxt = ins.address + ins.size
            cur = nxt
            stop = False
            for lo, hi in tbl_ranges:
                if lo <= nxt < hi: stop = True; break
            if stop: break
        if got is None:
            cur += 1
    return insns, switches

# ---------------------------------------------------------------------------
# 9) C emission helpers.
# ---------------------------------------------------------------------------
def _i32(v):
    """python int -> signed 32-bit C literal text."""
    v &= 0xffffffff
    if v >= 0x80000000:
        return str(v - 0x100000000)
    return str(v)

def emit_operand_c(o):
    # Operand fields: kind, reg, idx, scale, size, disp, imm. `size` is the
    # PER-OPERAND access width in bytes (1/2/4 for int regs/mem; 4/8/10 for x87
    # float mem; 2/4/8 for x87 int mem). It is distinct from Op.size (the
    # instruction's primary operand size) and is REQUIRED for movzx/movsx (source
    # width != dest width) and for every x87 memory form (float vs int vs width).
    return "{%d,%d,%d,%d,%d,%s,%uu}" % (
        o.kind, (o.reg & 0xff), (o.idx & 0xff), (o.scale & 0xff),
        (o.size & 0xff), _i32(o.disp), (o.imm & 0xffffffff))

def emit_op_c(op):
    o0, o1, o2 = (op.opnd + [NONE_OPND(), NONE_OPND(), NONE_OPND()])[:3]
    nop = sum(1 for o in (o0, o1, o2) if o.kind != K_NONE)
    return "{0x%xu,%d,%d,%d,%d,{%s,%s,%s},0x%xu}" % (
        op.va, op.cls, (op.size & 0xff), nop, (op.flags & 0xff),
        emit_operand_c(o0), emit_operand_c(o1), emit_operand_c(o2),
        op.nextva & 0xffffffff)

# ---------------------------------------------------------------------------
# 10) main: decode every function, build the global Op array sorted by va, the
#     va->index map, and write ops.c + ops.h.
# ---------------------------------------------------------------------------
# ---------------------------------------------------------------------------
# 10a) Extra function seeds.
#
# Ghidra's static analysis does not always create a function at an address that
# is only ever reached through an INDIRECT call/jmp (a function pointer stored
# in a vtable or a data table). Those entries are therefore absent from
# functions.csv, so decode_func never walks them and op_at() returns NULL at
# runtime -> the interpreter aborts ("no Op at EIP"). This is NOT a missing
# instruction class and NOT a semantics gap: the bytes are real, loaded .text
# code; they simply were never handed to the decoder.
#
# We close the gap two ways, both faithful (we only ever decode REAL image
# bytes at REAL function entries — never synthesize logic):
#   (1) A small explicit seed list for entries we have positively identified as
#       clean function prologues reached only via indirect dispatch (verified by
#       disassembly: 11 bytes of NOP padding precede a `sub esp,N; push esi;
#       mov esi,ecx` __thiscall prologue at 0x0042a540 — the boot-time blitter
#       object method the engine calls through a vtable slot).
#   (2) An iterative fixpoint that scans every decoded DIRECT call/jmp target;
#       any target that lands in .text, is not already decoded, and is not a
#       known function start is itself a missed function entry, so we decode it
#       too and repeat until no new entries appear. (1)'s seed bootstraps a
#       cluster that (2) alone could not reach, because the cluster's only entry
#       is indirect; once inside, the cluster's internal direct calls are picked
#       up by (2).
# ---------------------------------------------------------------------------
EXTRA_SEEDS = [
    0x0042a540,   # __thiscall blitter object method, reached via a vtable slot
]

# ---------------------------------------------------------------------------
# 10b) Vtable / function-pointer scan.
#
# Every missed entry we have seen (0x0042a540, 0x004647f0, ...) is a virtual
# method whose ONLY caller is a `call dword ptr [vtbl+off]` — the address lives
# as a 32-bit pointer inside an MSVC vtable in .rdata/.data, never as a direct
# `call rel32`. So we discover them by reading the image exactly as the loader
# laid it out and treating any stored dword that points at a .text function
# entry as a function start. To stay faithful (real entries only, no spurious
# mid-instruction "functions") we accept a pointer ONLY when:
#   - it lands in .text, and
#   - the bytes there are immediately preceded by alignment padding (0x90 nop or
#     0xCC int3) OR sit right at a known function boundary — i.e. it is a real
#     MSVC-aligned function prologue, not a jump into the middle of one.
# The pointer tables themselves live in .rdata/.data (and occasionally inline in
# .text), so we scan all three. Discovered entries feed the same fixpoint as the
# explicit seeds, so each discovered method's own direct callees are picked up.
# ---------------------------------------------------------------------------
def discover_pointer_targets():
    """Every dword in the loaded image that points into .text is a CANDIDATE
    function entry: MSVC vtables, the .CRT$XC static-initializer table (whose
    entries are NOT preceded by NOP padding — they abut the previous initializer),
    and assorted function-pointer tables all live this way. We do NOT pre-filter on
    a padding byte (that has false negatives — it dropped the CRT ctors at
    0x004133b0, preceded by a 0x00 data byte). Instead every candidate is later
    trial-decoded and accepted ONLY if it validates as a real function (reaches a
    ret, no junk/privileged opcodes), which is the actual faithfulness guarantee.
    Candidates that are mid-instruction of an already-decoded function, or that
    decode to garbage, are rejected there. Returns the candidate set."""
    import struct as _s
    out = set()
    regions = [(T.TEXT_VA, T.TEXT), (T.RDATA_VA, T.RDATA), (T.DATA_VA, T.DATA)]
    for base, blob in regions:
        for off in range(0, len(blob) - 3):
            v = _s.unpack_from("<I", blob, off)[0]
            if T.TEXT_VA <= v < T.TEXT_END:
                out.add(v)
    return out

def main():
    all_ops = {}          # va -> Op (dedup: overlapping reachable ranges share insns)
    switch_count = 0
    from collections import Counter
    cls_hist = Counter()
    unimpl = Counter()

    decoded_starts = set()        # function entries we have walked
    interior_bytes = set()        # byte addrs strictly inside a decoded instruction
    pending = []                  # work queue of (va, size)

    def _is_text(a):
        return T.TEXT_VA <= a < T.TEXT_END

    switch_targets = set()        # switch-table CASE targets (NOT function starts)
    switch_ranges  = []           # (lo,hi) of jump-table byte ranges (NOT code)

    def _commit(insns, switches):
        """commit a function's instructions to the global op set, returning the
        set of direct (imm) call/jmp targets seen (for the fixpoint)."""
        nonlocal switch_count
        switch_count += len(switches)
        for si in switches.values():
            switch_ranges.append((si.tbl_lo, si.tbl_hi))
            for _v, t in si.entries:
                switch_targets.add(t)
        new_targets = set()
        for ins in insns:
            m = ins.mnemonic
            if m in ("call", "jmp") and ins.operands and ins.operands[0].type == X86_OP_IMM:
                t = ins.operands[0].imm & 0xffffffff
                if _is_text(t):
                    new_targets.add(t)
            # mark interior bytes (after the first) as covered, so a later pointer
            # candidate that lands mid-instruction can be rejected as not-an-entry.
            for b in range(ins.address + 1, ins.address + ins.size):
                interior_bytes.add(b)
            if ins.address in all_ops:
                continue
            op = classify(ins, switches)
            all_ops[ins.address] = op
            cls_hist[op.cls] += 1
            if op.cls == CLS["UNIMPL"]:
                unimpl[ins.mnemonic] += 1
        return new_targets

    def decode_one(va, size):
        insns, switches = decode_func(va, size)
        return _commit(insns, switches)

    # A real function's reachable code never contains these: privileged /
    # real-mode / BCD / far-control opcodes that MSVC user-mode C code does not
    # emit. Their presence means we trial-decoded DATA as code (a false-positive
    # pointer seed), so we reject the candidate rather than poison ops.c.
    _JUNK_MNEM = {
        "int3","int1","int","into","iretd","iret","bound","arpl","aaa","aad",
        "aam","aas","daa","das","xlatb","lds","les","lfs","lgs","lss","in","out",
        "insb","insw","insd","outsb","outsw","outsd","cli","sti","hlt","lcall",
        "ljmp","retf","lock","wait",
        # privileged / system
        "lgdt","lidt","lldt","ltr","sgdt","sidt","sldt","str","clts","invd",
        "wbinvd","rdmsr","wrmsr","rdpmc","rdtsc","sysenter","sysexit",
    }

    def _looks_like_function(insns):
        """Trial-decode validation for an unverified seed: the walk must reach a
        terminator and contain no junk/privileged opcodes. This separates a
        genuine missed function entry (a clean prologue that returns) from a dword
        that merely happens to point into .text.

        A terminator is a `ret`/`retN` OR an unconditional tail-call `jmp` to a
        .text target: small MSVC virtual-method thunks (e.g. the screen-collection
        vtable slot at 0x0042a6d0: `mov ecx,[ecx+0x1c]; jmp 0x004269c0`) never
        execute a `ret` of their own — they tail-jump into the shared
        implementation — so requiring `ret` wrongly rejected them and left a
        decode gap (op_at()==NULL -> abort) on the indirect vtable call."""
        if not insns:
            return False
        saw_term = False
        for ins in insns:
            if ins.mnemonic in _JUNK_MNEM:
                return False
            if classify(ins, {}).cls == CLS["UNIMPL"]:
                return False
            if ins.mnemonic == "ret" or ins.mnemonic.startswith("ret"):
                saw_term = True
            elif ins.mnemonic == "jmp" and ins.operands and ins.operands[0].type == X86_OP_IMM:
                t = ins.operands[0].imm & 0xffffffff
                if _is_text(t):
                    saw_term = True   # tail call into real code
        return saw_term

    csv_size = {va: size for (va, size, _n) in T.FUNCS}

    # ---- pass A (LEARN): decode every CSV function once, to learn the real
    # switch tables, their case targets, and the interior bytes of real code.
    # These are the exclusions that keep the pointer scan from mistaking a
    # jump-table slot / switch-case target / mid-instruction address for a new
    # function entry. ----
    def _P(m): sys.stderr.write(m+"\n"); sys.stderr.flush()
    _P("[decode] pass A: decoding %d CSV functions ..." % len(csv_size))
    direct_targets = set()
    _na = 0
    for va in sorted(csv_size):
        decoded_starts.add(va)
        direct_targets |= decode_one(va, csv_size[va])
        _na += 1
        if _na % 500 == 0: _P("[decode]   pass A %d/%d" % (_na, len(csv_size)))
    _P("[decode] pass A done: %d ops, %d direct targets" % (len(all_ops), len(direct_targets)))

    def _in_switch_range(a):
        for lo, hi in switch_ranges:
            if lo <= a < hi:
                return True
        return False

    # ---- DISCOVER: pointer-referenced .text addresses that are plausibly real,
    # missed function entries. Reject anything that is: already a known start, a
    # switch-case target, inside a jump-table byte range, or the interior of an
    # already-decoded instruction. Survivors are trial-decoded in isolation and
    # accepted only if they validate as a clean ret-terminating, junk-free
    # function. This keeps the real switch tables intact (we never split them)
    # while still recovering genuine vtable / CRT-initializer entries. ----
    def _validate_isolated(s):
        # LIGHTWEIGHT linear validator (replaces the old decode_func()+_looks_like
        # path, which ran a full reachability+linear decode of [s, next_func_start)
        # per candidate -> pathological over the data-heavy CRT tail 0x491000+ where
        # every uncovered data byte decoded thousands of "instructions"). Linear-
        # decode from s and STOP at the first terminator (accept) or junk/UNIMPL
        # opcode (reject — data decodes to a privileged/far opcode almost at once).
        # Same accept/reject outcome for real leaf entries (their linear fall-through
        # reaches the ret), but O(insns-to-first-junk) instead of O(span).
        end = T.next_func_start(s)
        if end <= s:
            end = T.TEXT_END
        hi = min(end, s + 4096)
        chunk = T.TEXT[s - T.TEXT_VA: hi - T.TEXT_VA]
        n = 0
        first = True
        for ins in T.md.disasm(chunk, s):
            if first and ins.address != s:
                return False
            first = False
            m = ins.mnemonic
            if m in _JUNK_MNEM:
                return False
            if classify(ins, {}).cls == CLS["UNIMPL"]:
                return False
            if m == "ret" or m.startswith("ret"):
                return True
            if m == "jmp" and ins.operands and ins.operands[0].type == X86_OP_IMM:
                t = ins.operands[0].imm & 0xffffffff
                if _is_text(t):
                    return True
            n += 1
            if n > 2048:
                return False
        return False

    extra_starts = set()
    for s in EXTRA_SEEDS:
        if s not in T.FUNC_STARTS:
            extra_starts.add(s)
    _cand = sorted(discover_pointer_targets())
    _P("[decode] discover: %d pointer-into-.text candidates; validating ..." % len(_cand))
    _nv = 0; _val = 0
    for s in _cand:
        _nv += 1
        if _nv % 2000 == 0: _P("[decode]   discover %d/%d (accepted %d)" % (_nv, len(_cand), _val))
        if s in T.FUNC_STARTS or s in extra_starts:
            continue
        if s in all_ops:            # already a real instruction boundary
            continue
        if s in switch_targets or _in_switch_range(s):
            continue                # a switch case target / table byte, not a fn
        if s in interior_bytes:
            continue                # mid-instruction of real code
        if _validate_isolated(s):
            extra_starts.add(s); _val += 1
    ptr_seeds = sorted(extra_starts)
    _P("[decode] discover done: %d new entries recovered" % _val)

    # Register the discovered entries as function starts so next_func_start()
    # bounds every neighbour at the true boundary, then RE-DECODE from scratch so
    # no function's linear tail over-reads a now-known gap-function (e.g. the CRT
    # static initializer at 0x004133b0 that FUN_00412db0's tail used to swallow).
    for s in extra_starts:
        T.FUNC_STARTS.add(s)
    T._FSTARTS_SORTED = sorted(T.FUNC_STARTS)

    all_ops.clear(); interior_bytes.clear(); switch_targets.clear()
    del switch_ranges[:]; cls_hist.clear(); unimpl.clear()
    switch_count = 0
    decoded_starts = set()
    direct_targets = set()
    for va in sorted(set(csv_size) | extra_starts):
        decoded_starts.add(va)
        direct_targets |= decode_one(va, csv_size.get(va, 1))

    seeded_extra = list(ptr_seeds)

    # ---- pass B (FIXPOINT): direct call/jmp targets that are STILL missed
    # entries (a callee reached only by a direct call, absent from the CSV and
    # not pointer-referenced — typically a CRT helper). Real code by construction
    # (its caller was decoded from validated code), so commit unconditionally. --
    _P("[decode] pass B fixpoint (direct-call closure) ...")
    changed = True
    _bi = 0
    while changed:
        changed = False
        _bi += 1; _P("[decode]   fixpoint iter %d: %d targets, %d starts" % (_bi, len(direct_targets), len(T.FUNC_STARTS)))
        for t in sorted(direct_targets):
            if t in decoded_starts or t in all_ops:
                decoded_starts.add(t)
                continue
            if t in switch_targets or _in_switch_range(t):
                decoded_starts.add(t)
                continue
            decoded_starts.add(t)
            T.FUNC_STARTS.add(t); T._FSTARTS_SORTED = sorted(T.FUNC_STARTS)
            direct_targets |= decode_one(t, 1)
            seeded_extra.append(t)
            changed = True

    # ---- pass C (BOUNDARY GAP-FILL): some functions are reached ONLY through a
    # RUNTIME-COMPUTED indirect call/jmp (the target address is built in a register
    # from a base+index, not stored as a static pointer and never a direct rel32),
    # so neither the pointer-scan (B's predecessor) nor the direct-call fixpoint
    # finds them -> op_at()==NULL at runtime (observed at 0x0042bb8e, reached via an
    # indirect dispatch in the 0x0042a540 boot cluster). Close the gap faithfully by
    # scanning .text for any uncovered address that begins right after a function
    # boundary (a ret/jmp terminator or 0x90/0xCC alignment padding) and validates
    # as a clean function; decode it and let the fixpoint pick up its direct callees.
    # We only ever decode REAL image bytes at REAL prologues — nothing synthesized. =
    # Sorted switch ranges for O(log n) membership; a single linear sweep over
    # .text (NOT re-scanned per discovery — newly decoded interiors only ever
    # GROW coverage, so one forward pass suffices, advancing past each decoded
    # function/instruction). _validate_isolated() is the faithfulness guard.
    sw_lo = sorted(switch_ranges)
    import bisect as _bisect
    def _in_sw(a):
        i = _bisect.bisect_right(sw_lo, (a, 1<<62)) - 1
        return i >= 0 and sw_lo[i][0] <= a < sw_lo[i][1]
    def _commit_callees():
        worklist = sorted(direct_targets)
        while worklist:
            t = worklist.pop()
            if t in decoded_starts or t in all_ops or t in switch_targets or _in_sw(t):
                decoded_starts.add(t); continue
            decoded_starts.add(t)
            T.FUNC_STARTS.add(t)
            new = decode_one(t, 1); seeded_extra.append(t)
            for nt in new:
                if nt not in decoded_starts:
                    worklist.append(nt)
        T._FSTARTS_SORTED = sorted(T.FUNC_STARTS)
    _P("[decode] pass C boundary gap-fill: sweeping .text 0x%x..0x%x ..." % (T.TEXT_VA, T.TEXT_END))
    gap_seeds = []
    a = T.TEXT_VA
    _nextmark = T.TEXT_VA + 0x10000
    while a < T.TEXT_END:
        if a >= _nextmark:
            _P("[decode]   gap-fill at 0x%x (%d%%), %d recovered" % (a, 100*(a-T.TEXT_VA)//(T.TEXT_END-T.TEXT_VA), len(gap_seeds)))
            _nextmark += 0x10000
        if a in all_ops or a in interior_bytes or a in switch_targets or _in_sw(a):
            a += 1; continue
        # gap-fill only recovers indirect-only function ENTRIES; MSVC aligns those
        # to >=4 bytes, so skipping unaligned addresses avoids validating the bulk
        # of data-region bytes (4x fewer trials in the CRT tail) with no real loss.
        if (a & 3) != 0:
            a += 1; continue
        if a not in T.FUNC_STARTS and _validate_isolated(a):
            T.FUNC_STARTS.add(a)
            direct_targets |= decode_one(a, 1)
            decoded_starts.add(a); gap_seeds.append(a); seeded_extra.append(a)
            # NOTE: _commit_callees() is DEFERRED to a single call after the sweep.
            # Calling it per gap-hit rebuilt sorted(direct_targets) (thousands of
            # entries) and re-sorted FUNC_STARTS on every hit -> O(hits*targets) and
            # pathologically slow in the dense CRT region. Deferring is faithful: the
            # gap function itself is decoded above (its bytes cover the stride below);
            # its direct callees are committed once at the end (or rediscovered by the
            # sweep when it reaches their bytes — same result).
            # Stride past the WHOLE just-decoded function so its internal fall-through
            # / branch targets are never re-scanned as spurious sub-entries (which
            # would fragment the function and truncate a neighbour). Walk forward over
            # every covered byte: an instruction start (all_ops) advances by its real
            # size; an interior byte advances by 1; stop at the first uncovered byte.
            end = a
            while end < T.TEXT_END and (end in all_ops or end in interior_bytes):
                if end in all_ops:
                    nv = all_ops[end].nextva & 0xffffffff
                    end = nv if nv > end else end + 1
                else:
                    end += 1
            a = end if end > a else a + 1
        else:
            a += 1
    _P("[decode] gap-fill sweep done (%d seeds); committing callees once ..." % len(gap_seeds))
    _commit_callees()
    if gap_seeds:
        print("decode.py: boundary gap-fill recovered %d indirect-only entries" % len(gap_seeds))

    # ---- FINAL RE-DECODE: the byte-wise gap-fill may have registered a function's
    # internal fall-through point as a (spurious) start before the real lower entry
    # was decoded, which then truncates a neighbour's linear/reachability walk at the
    # wrong boundary (observed: the real entry 0x0042cdb0 left 0x0042cde7 uncovered
    # because a fragment start landed mid-function). With the COMPLETE set of function
    # starts now known, re-decode every start from scratch so next_func_start() bounds
    # each at its true neighbour and no function is truncated. Idempotent + faithful. =
    all_ops.clear(); interior_bytes.clear(); switch_targets.clear()
    del switch_ranges[:]; cls_hist.clear(); unimpl.clear()
    switch_count = 0
    all_starts = set(csv_size) | set(T.FUNC_STARTS)
    _P("[decode] FINAL re-decode of %d starts ..." % len(all_starts))
    _fr = 0
    for va in sorted(all_starts):
        decode_one(va, csv_size.get(va, 1))
        _fr += 1
        if _fr % 1000 == 0: _P("[decode]   final %d/%d" % (_fr, len(all_starts)))
    _P("[decode] FINAL re-decode done: %d ops" % len(all_ops))

    # ---- CLOSURE FILL: guarantee op_at() never returns NULL for a REACHABLE
    # address. Any address that a decoded op transfers control to (the nextva of a
    # non-terminator, a JCC/JMP/CALL imm target) but that has no Op of its own is a
    # truncation artifact (a real instruction a function-boundary cap cut off, e.g.
    # 0x0042cde7 — the fall-through after `call 0x464570` in the fragmented 0x0042cdb0
    # cluster). We decode the single REAL instruction there and follow its own
    # successors, to a fixpoint. Only genuine reachable .text bytes are added; nothing
    # is synthesized. This is the final faithfulness backstop for indirect clusters. ==
    def _decode_single(addr):
        c = T.TEXT[addr - T.TEXT_VA: addr - T.TEXT_VA + 16]
        for ins in T.md.disasm(c, addr):
            return ins
        return None
    work = list(all_ops.keys())
    seen_fill = set()
    fill_count = 0
    fill_skipped = Counter()
    while work:
        va0 = work.pop()
        op = all_ops.get(va0)
        if op is None:
            continue
        # successors: fall-through (unless ret/jmp) + any imm branch/call target
        succ = []
        m = CLASSES[op.cls]
        if m not in ("RET",):
            succ.append(op.nextva & 0xffffffff)
        ins = _decode_single(va0)
        if ins is not None:
            mn = ins.mnemonic
            if (mn == "call" or mn == "jmp" or mn in T.JCC) and ins.operands \
               and ins.operands[0].type == X86_OP_IMM:
                succ.append(ins.operands[0].imm & 0xffffffff)
        for t in succ:
            if not _is_text(t) or t in all_ops:
                continue
            if t in switch_targets or _in_sw(t):
                pass  # case targets are real code too; decode them
            if t in seen_fill:
                continue
            seen_fill.add(t)
            si = _decode_single(t)
            if si is None:
                continue
            # A target that decodes to a junk/privileged opcode is NOT real code —
            # it is a jump-table data slot or a misaligned address reached through a
            # target we mis-followed. Do NOT add it and do NOT follow it (that would
            # poison ops.c with garbage). Genuine reachable code never starts with
            # these. This keeps the closure faithful: real instructions only.
            if si.mnemonic in _JUNK_MNEM:
                continue
            op2 = classify(si, {})
            if op2.cls == CLS["UNIMPL"]:
                # an unimplemented-but-decodable mnemonic at a followed target: skip
                # rather than emit UNIMPL (the interpreter would abort loudly if it
                # were ever truly reached — which, being on a mis-followed edge, it
                # is not). Track separately so the 0-UNIMPL guarantee for EMITTED ops
                # still holds.
                fill_skipped[si.mnemonic] += 1
                continue
            for b in range(si.address + 1, si.address + si.size):
                interior_bytes.add(b)
            all_ops[t] = op2
            cls_hist[op2.cls] += 1
            fill_count += 1
            work.append(t)
    if fill_count:
        print("decode.py: closure fill added %d reachable instructions" % fill_count)
    if fill_skipped:
        print("decode.py: closure fill skipped non-code/unimpl targets: %s"
              % dict(fill_skipped.most_common(8)))

    ops_sorted = [all_ops[va] for va in sorted(all_ops)]
    n = len(ops_sorted)
    print("decode.py: pointer-scan seeds (vtable/fn-ptr entries): %d" % len(ptr_seeds))
    print("decode.py: total extra seeds beyond functions.csv: %d" % len(seeded_extra))
    if len(seeded_extra) <= 80:
        for s in seeded_extra:
            print("             seed 0x%08x" % s)

    # ---- ops.h: enums + struct defs + extern decls ----
    h = []
    h.append("/* ops.h — GENERATED by decode.py. Do not edit.")
    h.append(" * Compact pre-decoded x86 op table for the lean interpreter (see INTERP.md).")
    h.append(" * Op DATA only: classes mirror transpile.py's validated semantics 1:1. */")
    h.append("#ifndef LK2_X86_OPS_H")
    h.append("#define LK2_X86_OPS_H")
    h.append("#include <stdint.h>")
    h.append("")
    h.append("/* operand kinds */")
    h.append("enum { OPK_NONE=0, OPK_REG=1, OPK_IMM=2, OPK_MEM=3, OPK_ST=4 };")
    h.append("")
    h.append("/* register slot ids (REG_* == index into interp's gpr[] for 0..7;")
    h.append(" * 8..11 are the high-byte regs AH/CH/DH/BH; 16..21 segment regs;")
    h.append(" * 255 == none). size in the Operand says 1/2/4 for the access width. */")
    regids = []
    for i, nm in enumerate(GPR):  regids.append("REG_%s=%d" % (nm, i))
    for i, nm in enumerate(HIGH): regids.append("REG_%s=%d" % (nm, 8+i))
    for i, nm in enumerate(SEGS): regids.append("REG_%s=%d" % (nm, 16+i))
    regids.append("REG_NONE=255")
    h.append("enum { %s };" % ", ".join(regids))
    h.append("")
    h.append("/* op classes — one per distinct transpile.py semantic branch */")
    h.append("enum {")
    for i, name in enumerate(CLASSES):
        h.append("  OP_%s=%d," % (name, i))
    h.append("  OP_NCLASS=%d" % len(CLASSES))
    h.append("};")
    h.append("")
    h.append("/* condition codes for OP_JCC / OP_SETCC (Op.flags) */")
    h.append("enum {")
    for i, name in enumerate(CC):
        h.append("  CC_%s=%d," % (name, i))
    h.append("  CC_N=%d" % len(CC))
    h.append("};")
    h.append("")
    h.append("/* Op.flags bits for string ops */")
    h.append("enum { STRF_REP=1, STRF_REPE=2, STRF_REPNE=4 };")
    h.append("/* Op.flags bit for direct (imm) call/jmp targets */")
    h.append("enum { TGTF_DIRECT=1 };")
    h.append("/* Op.flags bit: x87 op pops afterwards (fstp/fistp/fcomp/...) */")
    h.append("enum { FPOPF=1 };")
    h.append("/* x87 arithmetic sub-op (Op.flags for OP_FARITH_REG2 / OP_FARITHP):")
    h.append(" * bits0-2 = op(0 add,1 sub,2 mul,3 div); bit3 = reverse; bit4 = int-mem. */")
    h.append("enum { FA_OP=7, FA_REV=8, FA_INT=16 };")
    h.append("/* FLDCONST tags (Op.opnd[0].imm) */")
    h.append("enum { FC_1=0, FC_Z=1, FC_PI=2, FC_L2E=3, FC_L2T=4, FC_LG2=5, FC_LN2=6 };")
    h.append("")
    h.append("typedef struct { uint8_t kind, reg, idx, scale, size; int32_t disp; uint32_t imm; } Operand;")
    h.append("typedef struct { uint32_t va; uint8_t cls, size, nopnd, flags;")
    h.append("                 Operand opnd[3]; uint32_t nextva; } Op;")
    h.append("")
    h.append("extern const Op   g_ops[];")
    h.append("extern const int  g_nops;")
    h.append("/* g_va[i] == g_ops[i].va, sorted ascending; binary search -> index. */")
    h.append("extern const uint32_t g_va[];")
    h.append("")
    h.append("/* binary search the sorted table: va -> &g_ops[i], or 0 if no op there. */")
    h.append("const Op *op_at(uint32_t va);")
    h.append("")
    h.append("#endif /* LK2_X86_OPS_H */")
    open(OPS_H, "w").write("\n".join(h) + "\n")

    # ---- ops.c: the data arrays + op_at() ----
    c = []
    c.append("/* ops.c — GENERATED by decode.py. Do not edit. %d ops, %d switch table(s). */" % (n, switch_count))
    c.append('#include "ops.h"')
    c.append("")
    c.append("const int g_nops = %d;" % n)
    c.append("")
    c.append("const Op g_ops[%d] = {" % n)
    # chunk lines for readability (one op per line)
    for op in ops_sorted:
        c.append("  " + emit_op_c(op) + ",")
    c.append("};")
    c.append("")
    c.append("const uint32_t g_va[%d] = {" % n)
    line = "  "
    for i, op in enumerate(ops_sorted):
        tok = "0x%xu," % op.va
        if len(line) + len(tok) > 110:
            c.append(line); line = "  "
        line += tok
    if line.strip():
        c.append(line)
    c.append("};")
    c.append("")
    # O(1) op_at: a direct VA->Op* map over the .text span (2.75MB BSS, built once).
    # Replaces the per-instruction binary search (~18 compares) that capped the
    # interpreter at ~1M ips; this is the LK2 perf fix (-> tens of M ips).
    c.append("#define OPMAP_BASE 0x%08xu" % TEXT_VA)
    c.append("#define OPMAP_SIZE 0x%08xu" % (TEXT_END - TEXT_VA + 16))
    c.append("static const Op *g_opmap[OPMAP_SIZE];")
    c.append("static int g_opmap_built = 0;")
    c.append("static void opmap_build(void){")
    c.append("  for(int i=0;i<g_nops;i++){ uint32_t v=g_va[i];")
    c.append("    if(v>=OPMAP_BASE && v<OPMAP_BASE+OPMAP_SIZE) g_opmap[v-OPMAP_BASE]=&g_ops[i]; }")
    c.append("  g_opmap_built=1;")
    c.append("}")
    c.append("const Op *op_at(uint32_t va){")
    c.append("  if(!g_opmap_built) opmap_build();")
    c.append("  if(va>=OPMAP_BASE && va<OPMAP_BASE+OPMAP_SIZE) return g_opmap[va-OPMAP_BASE];")
    c.append("  return 0;")
    c.append("}")
    open(OPS_C, "w").write("\n".join(c) + "\n")

    # ---- report ----
    print("decode.py: %d functions decoded" % len(T.FUNCS))
    print("           %d unique instructions -> Op records" % n)
    print("           %d switch table(s) detected" % switch_count)
    print("           %d op classes (enum OP_*):" % len(CLASSES))
    INV = {v: k for k, v in CLS.items()}
    # print classes with their counts, in enum order
    for i, name in enumerate(CLASSES):
        print("             OP_%-12s = %2d   (%d insns)" % (name, i, cls_hist.get(i, 0)))
    if unimpl:
        print("  WARNING: UNIMPL mnemonics encountered (should be none):")
        for mn, ct in unimpl.most_common():
            print("    %-12s %d" % (mn, ct))
    else:
        print("  OK: every decoded instruction mapped to an implemented class (0 UNIMPL).")
    print("  wrote", OPS_C)
    print("  wrote", OPS_H)
    return n, switch_count

if __name__ == "__main__":
    main()
