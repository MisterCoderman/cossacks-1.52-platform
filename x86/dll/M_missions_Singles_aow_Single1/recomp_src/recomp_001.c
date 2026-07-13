#include "recomp.h"

/* FUN_10008d00 @ 0x12158d00 (10 bytes, 5 insns) */
void f_12158d00(void) {
  FTRACE(0x12158d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12158d01 mov ebp, esp */
  EBP = (ESP);
  /* 12158d03 mov eax, dword ptr [0x1217ec94] */
  EAX = (r32((uint32_t)(0x1217ec94)));
  /* 12158d08 pop ebp */
  EBP = (pop32());
  /* 12158d09 ret  */
  ESPCHK(0x12158d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d10 @ 0x12158d10 (31 bytes, 11 insns) */
void f_12158d10(void) {
  FTRACE(0x12158d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12158d11 mov ebp, esp */
  EBP = (ESP);
  /* 12158d13 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158d1a jbe 0x12158d20 */
  if ((C.cf||C.zf)) goto L_12158d20;
  /* 12158d1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12158d1e jmp 0x12158d2d */
  goto L_12158d2d;
L_12158d20:;
  /* 12158d20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158d23 mov dword ptr [0x1217ec94], eax */
  w32((uint32_t)(0x1217ec94), (EAX));
  /* 12158d28 mov eax, 1 */
  EAX = (0x1u);
L_12158d2d:;
  /* 12158d2d pop ebp */
  EBP = (pop32());
  /* 12158d2e ret  */
  ESPCHK(0x12158d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d30 @ 0x12158d30 (89 bytes, 20 insns) */
void f_12158d30(void) {
  FTRACE(0x12158d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12158d31 mov ebp, esp */
  EBP = (ESP);
  /* 12158d33 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12158d38 push 0 */
  push32((uint32_t)(0x0u));
  /* 12158d3a mov eax, dword ptr [0x12181f6c] */
  EAX = (r32((uint32_t)(0x12181f6c)));
  /* 12158d3f push eax */
  push32((uint32_t)(EAX));
  /* 12158d40 call dword ptr [0x12183314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183314))), 0x12158d46u);
  /* 12158d46 mov dword ptr [0x12181f68], eax */
  w32((uint32_t)(0x12181f68), (EAX));
  /* 12158d4b cmp dword ptr [0x12181f68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12181f68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158d52 jne 0x12158d58 */
  if (!C.zf) goto L_12158d58;
  /* 12158d54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12158d56 jmp 0x12158d87 */
  goto L_12158d87;
L_12158d58:;
  /* 12158d58 mov ecx, dword ptr [0x12181f68] */
  ECX = (r32((uint32_t)(0x12181f68)));
  /* 12158d5e mov dword ptr [0x12181f5c], ecx */
  w32((uint32_t)(0x12181f5c), (ECX));
  /* 12158d64 mov dword ptr [0x12181f60], 0 */
  w32((uint32_t)(0x12181f60), (0x0u));
  /* 12158d6e mov dword ptr [0x12181f64], 0 */
  w32((uint32_t)(0x12181f64), (0x0u));
  /* 12158d78 mov dword ptr [0x12181f48], 0x10 */
  w32((uint32_t)(0x12181f48), (0x10u));
  /* 12158d82 mov eax, 1 */
  EAX = (0x1u);
L_12158d87:;
  /* 12158d87 pop ebp */
  EBP = (pop32());
  /* 12158d88 ret  */
  ESPCHK(0x12158d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d90 @ 0x12158d90 (85 bytes, 29 insns) */
void f_12158d90(void) {
  FTRACE(0x12158d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12158d91 mov ebp, esp */
  EBP = (ESP);
  /* 12158d93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12158d96 mov eax, dword ptr [0x12181f64] */
  EAX = (r32((uint32_t)(0x12181f64)));
  /* 12158d9b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12158d9e mov ecx, dword ptr [0x12181f68] */
  ECX = (r32((uint32_t)(0x12181f68)));
  /* 12158da4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12158da6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12158da9 mov edx, dword ptr [0x12181f68] */
  EDX = (r32((uint32_t)(0x12181f68)));
  /* 12158daf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12158db2:;
  /* 12158db2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158db5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158db8 jae 0x12158ddf */
  if (!C.cf) goto L_12158ddf;
  /* 12158dba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158dbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158dc0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12158dc3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12158dc6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158dcd jae 0x12158dd4 */
  if (!C.cf) goto L_12158dd4;
  /* 12158dcf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158dd2 jmp 0x12158de1 */
  goto L_12158de1;
L_12158dd4:;
  /* 12158dd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158dd7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12158dda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12158ddd jmp 0x12158db2 */
  goto L_12158db2;
L_12158ddf:;
  /* 12158ddf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12158de1:;
  /* 12158de1 mov esp, ebp */
  ESP = (EBP);
  /* 12158de3 pop ebp */
  EBP = (pop32());
  /* 12158de4 ret  */
  ESPCHK(0x12158d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008df0 @ 0x12158df0 (95 bytes, 33 insns) */
void f_12158df0(void) {
  FTRACE(0x12158df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158df0 push ebp */
  push32((uint32_t)(EBP));
  /* 12158df1 mov ebp, esp */
  EBP = (ESP);
  /* 12158df3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12158df6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158df9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12158dfc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12158dff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12158e02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158e05 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12158e08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12158e0b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12158e10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158e13 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12158e15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158e18 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12158e1b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12158e1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12158e1f jne 0x12158e41 */
  if (!C.zf) goto L_12158e41;
  /* 12158e21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158e24 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12158e27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12158e29 jne 0x12158e41 */
  if (!C.zf) goto L_12158e41;
  /* 12158e2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158e2e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12158e34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12158e36 je 0x12158e41 */
  if (C.zf) goto L_12158e41;
  /* 12158e38 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12158e3f jmp 0x12158e48 */
  goto L_12158e48;
L_12158e41:;
  /* 12158e41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12158e48:;
  /* 12158e48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12158e4b mov esp, ebp */
  ESP = (EBP);
  /* 12158e4d pop ebp */
  EBP = (pop32());
  /* 12158e4e ret  */
  ESPCHK(0x12158df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e50 @ 0x12158e50 (1485 bytes, 453 insns) */
void f_12158e50(void) {
  FTRACE(0x12158e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12158e51 mov ebp, esp */
  EBP = (ESP);
  /* 12158e53 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12158e56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158e59 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12158e5c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12158e5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158e62 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12158e65 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12158e68 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12158e6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12158e6e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12158e71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12158e74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158e77 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12158e7d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12158e80 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12158e87 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12158e8a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12158e8d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12158e90 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12158e93 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12158e96 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12158e98 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12158e9b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12158e9e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12158ea1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12158ea4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12158ea7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12158eaa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12158eac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12158eaf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12158eb2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12158eb5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12158eb8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12158ebb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12158ebe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12158ec0 jne 0x12158fe8 */
  if (!C.zf) goto L_12158fe8;
  /* 12158ec6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12158ec9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12158ecc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12158ecf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12158ed2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158ed6 jbe 0x12158edf */
  if ((C.cf||C.zf)) goto L_12158edf;
  /* 12158ed8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12158edf:;
  /* 12158edf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12158ee2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12158ee5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12158ee8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158eeb jne 0x12158fc1 */
  if (!C.zf) goto L_12158fc1;
  /* 12158ef1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158ef5 jae 0x12158f56 */
  if (!C.cf) goto L_12158f56;
  /* 12158ef7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12158efc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12158eff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12158f01 not eax */
  EAX = (~(EAX));
  /* 12158f03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158f06 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12158f09 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12158f0d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12158f0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158f12 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12158f15 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12158f19 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12158f1c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12158f1f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12158f22 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12158f25 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12158f28 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12158f2b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12158f2e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12158f31 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12158f34 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12158f38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12158f3a jne 0x12158f54 */
  if (!C.zf) goto L_12158f54;
  /* 12158f3c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12158f41 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12158f44 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12158f46 not eax */
  EAX = (~(EAX));
  /* 12158f48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158f4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12158f4d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12158f4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158f52 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12158f54:;
  /* 12158f54 jmp 0x12158fc1 */
  goto L_12158fc1;
L_12158f56:;
  /* 12158f56 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12158f59 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12158f5c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12158f61 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12158f63 not edx */
  EDX = (~(EDX));
  /* 12158f65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158f68 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12158f6b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12158f72 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12158f74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158f77 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12158f7a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12158f81 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12158f84 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12158f87 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12158f8a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12158f8d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12158f90 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12158f93 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12158f96 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12158f99 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12158f9c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12158fa0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12158fa2 jne 0x12158fc1 */
  if (!C.zf) goto L_12158fc1;
  /* 12158fa4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12158fa7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12158faa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12158faf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12158fb1 not edx */
  EDX = (~(EDX));
  /* 12158fb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158fb6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12158fb9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12158fbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158fbe mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12158fc1:;
  /* 12158fc1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12158fc4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12158fc7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12158fca mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12158fcd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12158fd0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12158fd3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12158fd6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12158fd9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12158fdc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12158fdf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12158fe2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12158fe5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12158fe8:;
  /* 12158fe8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12158feb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12158fee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12158ff1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12158ff4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158ff8 jbe 0x12159001 */
  if ((C.cf||C.zf)) goto L_12159001;
  /* 12158ffa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12159001:;
  /* 12159001 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12159004 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12159007 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12159009 jne 0x12159165 */
  if (!C.zf) goto L_12159165;
  /* 1215900f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12159012 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159015 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12159018 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215901b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1215901e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159021 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12159024 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159028 jbe 0x12159031 */
  if ((C.cf||C.zf)) goto L_12159031;
  /* 1215902a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12159031:;
  /* 12159031 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159034 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159037 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1215903a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215903d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12159040 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159043 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12159046 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215904a jbe 0x12159053 */
  if ((C.cf||C.zf)) goto L_12159053;
  /* 1215904c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12159053:;
  /* 12159053 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159056 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159059 je 0x1215915f */
  if (C.zf) goto L_1215915f;
  /* 1215905f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12159062 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12159065 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12159068 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215906b jne 0x12159141 */
  if (!C.zf) goto L_12159141;
  /* 12159071 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159075 jae 0x121590d6 */
  if (!C.cf) goto L_121590d6;
  /* 12159077 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1215907c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1215907f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12159081 not edx */
  EDX = (~(EDX));
  /* 12159083 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159086 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12159089 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1215908d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1215908f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159092 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12159095 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12159099 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1215909c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215909f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 121590a2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121590a5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121590a8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121590ab mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 121590ae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121590b1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121590b4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 121590b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121590ba jne 0x121590d4 */
  if (!C.zf) goto L_121590d4;
  /* 121590bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121590c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121590c4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121590c6 not edx */
  EDX = (~(EDX));
  /* 121590c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121590cb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121590cd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 121590cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121590d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_121590d4:;
  /* 121590d4 jmp 0x12159141 */
  goto L_12159141;
L_121590d6:;
  /* 121590d6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121590d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121590dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121590e1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121590e3 not eax */
  EAX = (~(EAX));
  /* 121590e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121590e8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121590eb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 121590f2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121590f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121590f7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121590fa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12159101 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12159104 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159107 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1215910a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1215910d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12159110 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159113 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12159116 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12159119 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215911c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12159120 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12159122 jne 0x12159141 */
  if (!C.zf) goto L_12159141;
  /* 12159124 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159127 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215912a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1215912f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12159131 not eax */
  EAX = (~(EAX));
  /* 12159133 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159136 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12159139 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1215913b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215913e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12159141:;
  /* 12159141 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12159144 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12159147 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1215914a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1215914d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12159150 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12159153 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12159156 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12159159 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1215915c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1215915f:;
  /* 1215915f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12159162 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12159165:;
  /* 12159165 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12159168 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1215916b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215916d jne 0x1215917b */
  if (!C.zf) goto L_1215917b;
  /* 1215916f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159172 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159175 je 0x1215928b */
  if (C.zf) goto L_1215928b;
L_1215917b:;
  /* 1215917b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1215917e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12159181 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12159184 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12159187 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1215918a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215918d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12159190 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12159193 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12159196 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12159199 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1215919c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215919f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121591a2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 121591a5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121591a8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121591ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121591ae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 121591b1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121591b4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121591b7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 121591ba cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121591bd jne 0x1215928b */
  if (!C.zf) goto L_1215928b;
  /* 121591c3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121591c7 jae 0x12159224 */
  if (!C.cf) goto L_12159224;
  /* 121591c9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121591cc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121591cf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 121591d3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121591d6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121591d9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 121591dc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 121591df mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121591e2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121591e5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 121591e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121591ea jne 0x12159202 */
  if (!C.zf) goto L_12159202;
  /* 121591ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121591f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121591f4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121591f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121591f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121591fb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 121591fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159200 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12159202:;
  /* 12159202 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12159207 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1215920a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1215920c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215920f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12159212 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12159216 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12159218 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215921b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1215921e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12159222 jmp 0x1215928b */
  goto L_1215928b;
L_12159224:;
  /* 12159224 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12159227 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215922a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1215922e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12159231 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159234 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12159237 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1215923a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1215923d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159240 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12159243 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12159245 jne 0x12159262 */
  if (!C.zf) goto L_12159262;
  /* 12159247 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1215924a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215924d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12159252 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12159254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159257 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1215925a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1215925c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215925f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12159262:;
  /* 12159262 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12159265 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159268 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1215926d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1215926f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159272 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12159275 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1215927c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215927e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159281 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12159284 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1215928b:;
  /* 1215928b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1215928e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159291 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12159293 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12159296 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159299 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215929c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1215929f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121592a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121592a4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121592a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121592aa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121592ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121592af cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121592b2 jne 0x12159419 */
  if (!C.zf) goto L_12159419;
  /* 121592b8 cmp dword ptr [0x12181f60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12181f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121592bf je 0x12159408 */
  if (C.zf) goto L_12159408;
  /* 121592c5 mov eax, dword ptr [0x12181f58] */
  EAX = (r32((uint32_t)(0x12181f58)));
  /* 121592ca shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 121592cd mov ecx, dword ptr [0x12181f60] */
  ECX = (r32((uint32_t)(0x12181f60)));
  /* 121592d3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121592d6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121592d8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 121592db push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 121592e0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 121592e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121592e8 push eax */
  push32((uint32_t)(EAX));
  /* 121592e9 call dword ptr [0x12183330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183330))), 0x121592efu);
  /* 121592ef mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121592f4 mov ecx, dword ptr [0x12181f58] */
  ECX = (r32((uint32_t)(0x12181f58)));
  /* 121592fa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121592fc mov eax, dword ptr [0x12181f60] */
  EAX = (r32((uint32_t)(0x12181f60)));
  /* 12159301 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12159304 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12159306 mov edx, dword ptr [0x12181f60] */
  EDX = (r32((uint32_t)(0x12181f60)));
  /* 1215930c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1215930f mov eax, dword ptr [0x12181f60] */
  EAX = (r32((uint32_t)(0x12181f60)));
  /* 12159314 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12159317 mov edx, dword ptr [0x12181f58] */
  EDX = (r32((uint32_t)(0x12181f58)));
  /* 1215931d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12159328 mov eax, dword ptr [0x12181f60] */
  EAX = (r32((uint32_t)(0x12181f60)));
  /* 1215932d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12159330 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12159333 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12159336 mov eax, dword ptr [0x12181f60] */
  EAX = (r32((uint32_t)(0x12181f60)));
  /* 1215933b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1215933e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12159341 mov edx, dword ptr [0x12181f60] */
  EDX = (r32((uint32_t)(0x12181f60)));
  /* 12159347 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1215934a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1215934e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12159350 jne 0x12159366 */
  if (!C.zf) goto L_12159366;
  /* 12159352 mov edx, dword ptr [0x12181f60] */
  EDX = (r32((uint32_t)(0x12181f60)));
  /* 12159358 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1215935b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1215935d mov ecx, dword ptr [0x12181f60] */
  ECX = (r32((uint32_t)(0x12181f60)));
  /* 12159363 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12159366:;
  /* 12159366 mov edx, dword ptr [0x12181f60] */
  EDX = (r32((uint32_t)(0x12181f60)));
  /* 1215936c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159370 jne 0x12159408 */
  if (!C.zf) goto L_12159408;
  /* 12159376 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1215937b push 0 */
  push32((uint32_t)(0x0u));
  /* 1215937d mov eax, dword ptr [0x12181f60] */
  EAX = (r32((uint32_t)(0x12181f60)));
  /* 12159382 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12159385 push ecx */
  push32((uint32_t)(ECX));
  /* 12159386 call dword ptr [0x12183330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183330))), 0x1215938cu);
  /* 1215938c mov edx, dword ptr [0x12181f60] */
  EDX = (r32((uint32_t)(0x12181f60)));
  /* 12159392 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12159395 push eax */
  push32((uint32_t)(EAX));
  /* 12159396 push 0 */
  push32((uint32_t)(0x0u));
  /* 12159398 mov ecx, dword ptr [0x12181f6c] */
  ECX = (r32((uint32_t)(0x12181f6c)));
  /* 1215939e push ecx */
  push32((uint32_t)(ECX));
  /* 1215939f call dword ptr [0x12183384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183384))), 0x121593a5u);
  /* 121593a5 mov edx, dword ptr [0x12181f64] */
  EDX = (r32((uint32_t)(0x12181f64)));
  /* 121593ab imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121593ae mov eax, dword ptr [0x12181f68] */
  EAX = (r32((uint32_t)(0x12181f68)));
  /* 121593b3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121593b5 mov ecx, dword ptr [0x12181f60] */
  ECX = (r32((uint32_t)(0x12181f60)));
  /* 121593bb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121593be sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121593c0 push eax */
  push32((uint32_t)(EAX));
  /* 121593c1 mov edx, dword ptr [0x12181f60] */
  EDX = (r32((uint32_t)(0x12181f60)));
  /* 121593c7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121593ca push edx */
  push32((uint32_t)(EDX));
  /* 121593cb mov eax, dword ptr [0x12181f60] */
  EAX = (r32((uint32_t)(0x12181f60)));
  /* 121593d0 push eax */
  push32((uint32_t)(EAX));
  /* 121593d1 call 0x1215c980 */
  push32(0x121593d6u); f_1215c980();
  /* 121593d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121593d9 mov ecx, dword ptr [0x12181f64] */
  ECX = (r32((uint32_t)(0x12181f64)));
  /* 121593df sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121593e2 mov dword ptr [0x12181f64], ecx */
  w32((uint32_t)(0x12181f64), (ECX));
  /* 121593e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121593eb cmp edx, dword ptr [0x12181f60] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12181f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121593f1 jbe 0x121593fc */
  if ((C.cf||C.zf)) goto L_121593fc;
  /* 121593f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121593f6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121593f9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_121593fc:;
  /* 121593fc mov ecx, dword ptr [0x12181f68] */
  ECX = (r32((uint32_t)(0x12181f68)));
  /* 12159402 mov dword ptr [0x12181f5c], ecx */
  w32((uint32_t)(0x12181f5c), (ECX));
L_12159408:;
  /* 12159408 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215940b mov dword ptr [0x12181f60], edx */
  w32((uint32_t)(0x12181f60), (EDX));
  /* 12159411 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159414 mov dword ptr [0x12181f58], eax */
  w32((uint32_t)(0x12181f58), (EAX));
L_12159419:;
  /* 12159419 mov esp, ebp */
  ESP = (EBP);
  /* 1215941b pop ebp */
  EBP = (pop32());
  /* 1215941c ret  */
  ESPCHK(0x12158e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009420 @ 0x12159420 (1334 bytes, 427 insns) */
void f_12159420(void) {
  FTRACE(0x12159420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12159420 push ebp */
  push32((uint32_t)(EBP));
  /* 12159421 mov ebp, esp */
  EBP = (ESP);
  /* 12159423 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159426 push esi */
  push32((uint32_t)(ESI));
  /* 12159427 mov eax, dword ptr [0x12181f64] */
  EAX = (r32((uint32_t)(0x12181f64)));
  /* 1215942c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215942f mov ecx, dword ptr [0x12181f68] */
  ECX = (r32((uint32_t)(0x12181f68)));
  /* 12159435 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159437 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1215943a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215943d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159440 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12159443 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12159446 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12159449 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1215944c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215944f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12159452 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159456 jge 0x1215946c */
  if ((C.sf==C.of)) goto L_1215946c;
  /* 12159458 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1215945b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215945e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12159460 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12159463 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1215946a jmp 0x12159481 */
  goto L_12159481;
L_1215946c:;
  /* 1215946c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12159473 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12159476 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159479 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215947c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1215947e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12159481:;
  /* 12159481 mov ecx, dword ptr [0x12181f5c] */
  ECX = (r32((uint32_t)(0x12181f5c)));
  /* 12159487 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1215948a:;
  /* 1215948a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215948d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159490 jae 0x121594b6 */
  if (!C.cf) goto L_121594b6;
  /* 12159492 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159495 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12159498 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1215949a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215949d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 121594a0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 121594a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121594a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121594a7 je 0x121594ab */
  if (C.zf) goto L_121594ab;
  /* 121594a9 jmp 0x121594b6 */
  goto L_121594b6;
L_121594ab:;
  /* 121594ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121594ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121594b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 121594b4 jmp 0x1215948a */
  goto L_1215948a;
L_121594b6:;
  /* 121594b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121594b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121594bc jne 0x1215959d */
  if (!C.zf) goto L_1215959d;
  /* 121594c2 mov eax, dword ptr [0x12181f68] */
  EAX = (r32((uint32_t)(0x12181f68)));
  /* 121594c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_121594ca:;
  /* 121594ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121594cd cmp ecx, dword ptr [0x12181f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12181f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121594d3 jae 0x121594f9 */
  if (!C.cf) goto L_121594f9;
  /* 121594d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121594d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121594db and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 121594dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121594e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 121594e3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 121594e6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 121594e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121594ea je 0x121594ee */
  if (C.zf) goto L_121594ee;
  /* 121594ec jmp 0x121594f9 */
  goto L_121594f9;
L_121594ee:;
  /* 121594ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121594f1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121594f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121594f7 jmp 0x121594ca */
  goto L_121594ca;
L_121594f9:;
  /* 121594f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121594fc cmp ecx, dword ptr [0x12181f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12181f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159502 jne 0x1215959d */
  if (!C.zf) goto L_1215959d;
L_12159508:;
  /* 12159508 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215950b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215950e jae 0x12159526 */
  if (!C.cf) goto L_12159526;
  /* 12159510 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159513 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159517 je 0x1215951b */
  if (C.zf) goto L_1215951b;
  /* 12159519 jmp 0x12159526 */
  goto L_12159526;
L_1215951b:;
  /* 1215951b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215951e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159521 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12159524 jmp 0x12159508 */
  goto L_12159508;
L_12159526:;
  /* 12159526 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159529 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215952c jne 0x12159577 */
  if (!C.zf) goto L_12159577;
  /* 1215952e mov eax, dword ptr [0x12181f68] */
  EAX = (r32((uint32_t)(0x12181f68)));
  /* 12159533 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12159536:;
  /* 12159536 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159539 cmp ecx, dword ptr [0x12181f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12181f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215953f jae 0x12159557 */
  if (!C.cf) goto L_12159557;
  /* 12159541 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159544 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159548 je 0x1215954c */
  if (C.zf) goto L_1215954c;
  /* 1215954a jmp 0x12159557 */
  goto L_12159557;
L_1215954c:;
  /* 1215954c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215954f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159552 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12159555 jmp 0x12159536 */
  goto L_12159536;
L_12159557:;
  /* 12159557 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215955a cmp ecx, dword ptr [0x12181f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12181f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159560 jne 0x12159577 */
  if (!C.zf) goto L_12159577;
  /* 12159562 call 0x12159960 */
  push32(0x12159567u); f_12159960();
  /* 12159567 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1215956a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215956e jne 0x12159577 */
  if (!C.zf) goto L_12159577;
  /* 12159570 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12159572 jmp 0x12159951 */
  goto L_12159951;
L_12159577:;
  /* 12159577 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215957a push edx */
  push32((uint32_t)(EDX));
  /* 1215957b call 0x12159a70 */
  push32(0x12159580u); f_12159a70();
  /* 12159580 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12159583 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159586 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12159589 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1215958b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215958e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12159591 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159594 jne 0x1215959d */
  if (!C.zf) goto L_1215959d;
  /* 12159596 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12159598 jmp 0x12159951 */
  goto L_12159951;
L_1215959d:;
  /* 1215959d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121595a0 mov dword ptr [0x12181f5c], edx */
  w32((uint32_t)(0x12181f5c), (EDX));
  /* 121595a6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121595a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121595ac mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 121595af mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121595b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121595b4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 121595b7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121595bb je 0x121595e0 */
  if (C.zf) goto L_121595e0;
  /* 121595bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121595c0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121595c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121595c6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 121595ca mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121595cd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121595d0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 121595d3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 121595da or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 121595dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121595de jne 0x12159615 */
  if (!C.zf) goto L_12159615;
L_121595e0:;
  /* 121595e0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_121595e7:;
  /* 121595e7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121595ea mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 121595ed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121595f0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 121595f4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121595f7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 121595fa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 121595fd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12159604 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12159606 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12159608 jne 0x12159615 */
  if (!C.zf) goto L_12159615;
  /* 1215960a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215960d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159610 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12159613 jmp 0x121595e7 */
  goto L_121595e7;
L_12159615:;
  /* 12159615 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159618 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215961e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12159621 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12159628 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1215962b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12159632 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159635 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12159638 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215963b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1215963f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12159642 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159646 jne 0x12159662 */
  if (!C.zf) goto L_12159662;
  /* 12159648 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1215964f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159652 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12159655 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12159658 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1215965f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12159662:;
  /* 12159662 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159666 jl 0x1215967b */
  if ((C.sf!=C.of)) goto L_1215967b;
  /* 12159668 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1215966b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1215966d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12159670 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12159673 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159676 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12159679 jmp 0x12159662 */
  goto L_12159662;
L_1215967b:;
  /* 1215967b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215967e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159681 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12159685 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12159688 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215968b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1215968d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159690 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12159693 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12159696 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12159699 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215969c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1215969f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121596a3 jle 0x121596ac */
  if ((C.zf||C.sf!=C.of)) goto L_121596ac;
  /* 121596a5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_121596ac:;
  /* 121596ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121596af cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121596b2 je 0x121598d0 */
  if (C.zf) goto L_121598d0;
  /* 121596b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121596bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121596be mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 121596c1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121596c4 jne 0x1215979a */
  if (!C.zf) goto L_1215979a;
  /* 121596ca cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121596ce jge 0x1215972f */
  if ((C.sf==C.of)) goto L_1215972f;
  /* 121596d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121596d5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121596d8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121596da not eax */
  EAX = (~(EAX));
  /* 121596dc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121596df mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121596e2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 121596e6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121596e8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121596eb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 121596ee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 121596f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 121596f5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121596f8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 121596fb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121596fe mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12159701 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159704 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12159707 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1215970a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215970d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12159711 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12159713 jne 0x1215972d */
  if (!C.zf) goto L_1215972d;
  /* 12159715 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1215971a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215971d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1215971f not eax */
  EAX = (~(EAX));
  /* 12159721 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159724 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12159726 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12159728 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215972b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1215972d:;
  /* 1215972d jmp 0x1215979a */
  goto L_1215979a;
L_1215972f:;
  /* 1215972f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12159732 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159735 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1215973a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1215973c not edx */
  EDX = (~(EDX));
  /* 1215973e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159741 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12159744 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1215974b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1215974d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159750 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12159753 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1215975a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1215975d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159760 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12159763 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12159766 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12159769 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215976c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1215976f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12159772 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159775 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12159779 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215977b jne 0x1215979a */
  if (!C.zf) goto L_1215979a;
  /* 1215977d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12159780 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159783 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12159788 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1215978a not edx */
  EDX = (~(EDX));
  /* 1215978c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215978f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12159792 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12159794 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159797 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1215979a:;
  /* 1215979a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215979d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121597a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121597a3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 121597a6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 121597a9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121597ac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121597af mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121597b2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121597b5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 121597b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121597bc je 0x121598d0 */
  if (C.zf) goto L_121598d0;
  /* 121597c2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121597c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121597c8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 121597cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121597ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121597d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121597d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121597d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 121597da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121597dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121597e0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 121597e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121597e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121597e9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 121597ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121597ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121597f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121597f5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 121597f8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121597fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121597fe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12159801 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159804 jne 0x121598d0 */
  if (!C.zf) goto L_121598d0;
  /* 1215980a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215980e jge 0x1215986a */
  if ((C.sf==C.of)) goto L_1215986a;
  /* 12159810 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12159813 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159816 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1215981a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1215981d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159820 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12159823 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12159825 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12159828 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215982b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1215982e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12159830 jne 0x12159848 */
  if (!C.zf) goto L_12159848;
  /* 12159832 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12159837 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215983a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1215983c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215983f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12159841 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12159843 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159846 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12159848:;
  /* 12159848 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1215984d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12159850 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12159852 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159855 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12159858 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1215985c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1215985e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159861 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12159864 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12159868 jmp 0x121598d0 */
  goto L_121598d0;
L_1215986a:;
  /* 1215986a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1215986d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159870 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12159874 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12159877 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215987a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1215987d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1215987f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12159882 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159885 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12159888 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215988a jne 0x121598a7 */
  if (!C.zf) goto L_121598a7;
  /* 1215988c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215988f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159892 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12159897 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12159899 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215989c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1215989f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 121598a1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121598a4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_121598a7:;
  /* 121598a7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121598aa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121598ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121598b2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121598b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121598b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 121598ba mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 121598c1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 121598c3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121598c6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121598c9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_121598d0:;
  /* 121598d0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121598d4 je 0x121598ea */
  if (C.zf) goto L_121598ea;
  /* 121598d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121598d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121598dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 121598de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121598e1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121598e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121598e7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_121598ea:;
  /* 121598ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121598ed add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121598f0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 121598f3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121598f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121598f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121598fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121598fe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12159901 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159904 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12159907 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215990a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1215990d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159910 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12159912 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159915 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12159917 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215991a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215991d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1215991f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12159921 jne 0x12159943 */
  if (!C.zf) goto L_12159943;
  /* 12159923 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159926 cmp eax, dword ptr [0x12181f60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12181f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215992c jne 0x12159943 */
  if (!C.zf) goto L_12159943;
  /* 1215992e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159931 cmp ecx, dword ptr [0x12181f58] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12181f58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159937 jne 0x12159943 */
  if (!C.zf) goto L_12159943;
  /* 12159939 mov dword ptr [0x12181f60], 0 */
  w32((uint32_t)(0x12181f60), (0x0u));
L_12159943:;
  /* 12159943 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12159946 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159949 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1215994b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215994e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12159951:;
  /* 12159951 pop esi */
  ESI = (pop32());
  /* 12159952 mov esp, ebp */
  ESP = (EBP);
  /* 12159954 pop ebp */
  EBP = (pop32());
  /* 12159955 ret  */
  ESPCHK(0x12159420u, _esp0);
  ESP += 4; return;
}

/* FUN_10009960 @ 0x12159960 (271 bytes, 78 insns) */
void f_12159960(void) {
  FTRACE(0x12159960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12159960 push ebp */
  push32((uint32_t)(EBP));
  /* 12159961 mov ebp, esp */
  EBP = (ESP);
  /* 12159963 push ecx */
  push32((uint32_t)(ECX));
  /* 12159964 mov eax, dword ptr [0x12181f64] */
  EAX = (r32((uint32_t)(0x12181f64)));
  /* 12159969 cmp eax, dword ptr [0x12181f48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12181f48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215996f jne 0x121599bb */
  if (!C.zf) goto L_121599bb;
  /* 12159971 mov ecx, dword ptr [0x12181f48] */
  ECX = (r32((uint32_t)(0x12181f48)));
  /* 12159977 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215997a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215997d push ecx */
  push32((uint32_t)(ECX));
  /* 1215997e mov edx, dword ptr [0x12181f68] */
  EDX = (r32((uint32_t)(0x12181f68)));
  /* 12159984 push edx */
  push32((uint32_t)(EDX));
  /* 12159985 push 0 */
  push32((uint32_t)(0x0u));
  /* 12159987 mov eax, dword ptr [0x12181f6c] */
  EAX = (r32((uint32_t)(0x12181f6c)));
  /* 1215998c push eax */
  push32((uint32_t)(EAX));
  /* 1215998d call dword ptr [0x1218331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218331c))), 0x12159993u);
  /* 12159993 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12159996 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215999a jne 0x121599a3 */
  if (!C.zf) goto L_121599a3;
  /* 1215999c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215999e jmp 0x12159a6b */
  goto L_12159a6b;
L_121599a3:;
  /* 121599a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121599a6 mov dword ptr [0x12181f68], ecx */
  w32((uint32_t)(0x12181f68), (ECX));
  /* 121599ac mov edx, dword ptr [0x12181f48] */
  EDX = (r32((uint32_t)(0x12181f48)));
  /* 121599b2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121599b5 mov dword ptr [0x12181f48], edx */
  w32((uint32_t)(0x12181f48), (EDX));
L_121599bb:;
  /* 121599bb mov eax, dword ptr [0x12181f64] */
  EAX = (r32((uint32_t)(0x12181f64)));
  /* 121599c0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121599c3 mov ecx, dword ptr [0x12181f68] */
  ECX = (r32((uint32_t)(0x12181f68)));
  /* 121599c9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121599cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121599ce push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 121599d3 push 8 */
  push32((uint32_t)(0x8u));
  /* 121599d5 mov edx, dword ptr [0x12181f6c] */
  EDX = (r32((uint32_t)(0x12181f6c)));
  /* 121599db push edx */
  push32((uint32_t)(EDX));
  /* 121599dc call dword ptr [0x12183314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183314))), 0x121599e2u);
  /* 121599e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121599e5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 121599e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121599eb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121599ef jne 0x121599f5 */
  if (!C.zf) goto L_121599f5;
  /* 121599f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121599f3 jmp 0x12159a6b */
  goto L_12159a6b;
L_121599f5:;
  /* 121599f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 121599f7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 121599fc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12159a01 push 0 */
  push32((uint32_t)(0x0u));
  /* 12159a03 call dword ptr [0x1218330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218330c))), 0x12159a09u);
  /* 12159a09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159a0c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12159a0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159a12 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159a16 jne 0x12159a32 */
  if (!C.zf) goto L_12159a32;
  /* 12159a18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159a1b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12159a1e push ecx */
  push32((uint32_t)(ECX));
  /* 12159a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12159a21 mov edx, dword ptr [0x12181f6c] */
  EDX = (r32((uint32_t)(0x12181f6c)));
  /* 12159a27 push edx */
  push32((uint32_t)(EDX));
  /* 12159a28 call dword ptr [0x12183384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183384))), 0x12159a2eu);
  /* 12159a2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12159a30 jmp 0x12159a6b */
  goto L_12159a6b;
L_12159a32:;
  /* 12159a32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159a35 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12159a3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159a3e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12159a45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159a48 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12159a4f mov eax, dword ptr [0x12181f64] */
  EAX = (r32((uint32_t)(0x12181f64)));
  /* 12159a54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159a57 mov dword ptr [0x12181f64], eax */
  w32((uint32_t)(0x12181f64), (EAX));
  /* 12159a5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159a5f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12159a62 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12159a68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12159a6b:;
  /* 12159a6b mov esp, ebp */
  ESP = (EBP);
  /* 12159a6d pop ebp */
  EBP = (pop32());
  /* 12159a6e ret  */
  ESPCHK(0x12159960u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a70 @ 0x12159a70 (494 bytes, 149 insns) */
void f_12159a70(void) {
  FTRACE(0x12159a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12159a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12159a71 mov ebp, esp */
  EBP = (ESP);
  /* 12159a73 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159a79 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12159a7c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12159a7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159a82 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12159a85 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12159a88 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12159a8f:;
  /* 12159a8f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159a93 jl 0x12159aa8 */
  if ((C.sf!=C.of)) goto L_12159aa8;
  /* 12159a95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12159a98 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12159a9a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12159a9d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12159aa0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159aa3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12159aa6 jmp 0x12159a8f */
  goto L_12159a8f;
L_12159aa8:;
  /* 12159aa8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12159aab imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12159ab1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159ab4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12159abb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12159abe mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12159ac5 jmp 0x12159ad0 */
  goto L_12159ad0;
L_12159ac7:;
  /* 12159ac7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12159aca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159acd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12159ad0:;
  /* 12159ad0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159ad4 jge 0x12159af6 */
  if ((C.sf==C.of)) goto L_12159af6;
  /* 12159ad6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12159ad9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12159adc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12159adf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12159ae2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159ae5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159ae8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12159aeb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159aee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159af1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12159af4 jmp 0x12159ac7 */
  goto L_12159ac7;
L_12159af6:;
  /* 12159af6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12159af9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12159afc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159aff mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12159b02 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159b04 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12159b07 push 4 */
  push32((uint32_t)(0x4u));
  /* 12159b09 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12159b0e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12159b13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12159b16 push edx */
  push32((uint32_t)(EDX));
  /* 12159b17 call dword ptr [0x1218330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218330c))), 0x12159b1du);
  /* 12159b1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12159b1f jne 0x12159b29 */
  if (!C.zf) goto L_12159b29;
  /* 12159b21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12159b24 jmp 0x12159c5a */
  goto L_12159c5a;
L_12159b29:;
  /* 12159b29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12159b2c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159b31 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12159b34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12159b37 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12159b3a jmp 0x12159b48 */
  goto L_12159b48;
L_12159b3c:;
  /* 12159b3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159b3f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159b45 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12159b48:;
  /* 12159b48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159b4b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159b4e ja 0x12159bad */
  if ((!C.cf&&!C.zf)) goto L_12159bad;
  /* 12159b50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159b53 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12159b5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159b5d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12159b67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159b6a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159b6d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12159b70 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159b73 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12159b79 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159b7c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159b82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159b85 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12159b88 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159b8b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159b91 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159b94 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12159b97 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159b9a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159b9f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12159ba2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12159ba5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12159bab jmp 0x12159b3c */
  goto L_12159b3c;
L_12159bad:;
  /* 12159bad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12159bb0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159bb6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12159bb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12159bbc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159bbf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12159bc2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12159bc5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12159bc8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12159bcb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12159bce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159bd1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12159bd4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12159bd7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12159bda add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159bdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12159be0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12159be3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12159be6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12159be9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12159bec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159bef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12159bf2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12159bf5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12159bf8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159bfb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12159c03 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12159c06 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159c09 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12159c14 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159c17 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12159c1b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159c1e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12159c21 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12159c24 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159c27 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12159c2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12159c2c jne 0x12159c3d */
  if (!C.zf) goto L_12159c3d;
  /* 12159c2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159c31 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12159c34 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12159c37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159c3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12159c3d:;
  /* 12159c3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12159c42 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12159c45 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12159c47 not edx */
  EDX = (~(EDX));
  /* 12159c49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159c4c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12159c4f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12159c51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159c54 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12159c57 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12159c5a:;
  /* 12159c5a mov esp, ebp */
  ESP = (EBP);
  /* 12159c5c pop ebp */
  EBP = (pop32());
  /* 12159c5d ret  */
  ESPCHK(0x12159a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c60 @ 0x12159c60 (1515 bytes, 489 insns) */
void f_12159c60(void) {
  FTRACE(0x12159c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12159c60 push ebp */
  push32((uint32_t)(EBP));
  /* 12159c61 mov ebp, esp */
  EBP = (ESP);
  /* 12159c63 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159c66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12159c69 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159c6c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12159c6e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12159c71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159c74 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12159c77 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12159c7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159c7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12159c80 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159c83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12159c86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12159c89 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12159c8c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12159c8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159c92 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12159c98 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159c9b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12159ca2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12159ca5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12159ca8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159cab mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12159cae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12159cb1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12159cb3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159cb6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12159cb9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12159cbc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159cbf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12159cc2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159cc5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12159cc7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12159cca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12159ccd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159cd0 jle 0x12159f86 */
  if ((C.zf||C.sf!=C.of)) goto L_12159f86;
  /* 12159cd6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12159cd9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12159cdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12159cde jne 0x12159ceb */
  if (!C.zf) goto L_12159ceb;
  /* 12159ce0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12159ce3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159ce6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159ce9 jle 0x12159cf2 */
  if ((C.zf||C.sf!=C.of)) goto L_12159cf2;
L_12159ceb:;
  /* 12159ceb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12159ced jmp 0x1215a247 */
  goto L_1215a247;
L_12159cf2:;
  /* 12159cf2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12159cf5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12159cf8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159cfb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12159cfe cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159d02 jbe 0x12159d0b */
  if ((C.cf||C.zf)) goto L_12159d0b;
  /* 12159d04 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12159d0b:;
  /* 12159d0b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159d0e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159d11 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12159d14 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159d17 jne 0x12159ded */
  if (!C.zf) goto L_12159ded;
  /* 12159d1d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159d21 jae 0x12159d82 */
  if (!C.cf) goto L_12159d82;
  /* 12159d23 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12159d28 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12159d2b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12159d2d not edx */
  EDX = (~(EDX));
  /* 12159d2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159d32 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159d35 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12159d39 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12159d3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159d3e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159d41 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12159d45 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159d48 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159d4b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12159d4e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12159d51 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159d54 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159d57 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12159d5a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159d5d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159d60 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12159d64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12159d66 jne 0x12159d80 */
  if (!C.zf) goto L_12159d80;
  /* 12159d68 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12159d6d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12159d70 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12159d72 not edx */
  EDX = (~(EDX));
  /* 12159d74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159d77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12159d79 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12159d7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159d7e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12159d80:;
  /* 12159d80 jmp 0x12159ded */
  goto L_12159ded;
L_12159d82:;
  /* 12159d82 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12159d85 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159d88 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12159d8d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12159d8f not eax */
  EAX = (~(EAX));
  /* 12159d91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159d94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159d97 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12159d9e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12159da0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159da3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159da6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12159dad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159db0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159db3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12159db6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12159db9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159dbc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159dbf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12159dc2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159dc5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159dc8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12159dcc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12159dce jne 0x12159ded */
  if (!C.zf) goto L_12159ded;
  /* 12159dd0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12159dd3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159dd6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12159ddb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12159ddd not eax */
  EAX = (~(EAX));
  /* 12159ddf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159de2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12159de5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12159de7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159dea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12159ded:;
  /* 12159ded mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159df0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12159df3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159df6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12159df9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12159dfc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159dff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12159e02 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159e05 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12159e08 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12159e0b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12159e0e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159e11 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159e14 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12159e17 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159e1b jle 0x12159f67 */
  if ((C.zf||C.sf!=C.of)) goto L_12159f67;
  /* 12159e21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12159e24 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159e27 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12159e2a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12159e2d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12159e30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159e33 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12159e36 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159e3a jbe 0x12159e43 */
  if ((C.cf||C.zf)) goto L_12159e43;
  /* 12159e3c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12159e43:;
  /* 12159e43 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12159e46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12159e49 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12159e4c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12159e4f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159e52 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159e55 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12159e58 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12159e5b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159e5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159e61 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12159e64 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12159e67 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159e6a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12159e6d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159e70 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12159e73 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159e76 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12159e79 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159e7c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159e7f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12159e82 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159e85 jne 0x12159f53 */
  if (!C.zf) goto L_12159f53;
  /* 12159e8b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159e8f jae 0x12159eec */
  if (!C.cf) goto L_12159eec;
  /* 12159e91 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159e94 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159e97 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12159e9b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159e9e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159ea1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12159ea4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12159ea7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159eaa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159ead mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12159eb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12159eb2 jne 0x12159eca */
  if (!C.zf) goto L_12159eca;
  /* 12159eb4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12159eb9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12159ebc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12159ebe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159ec1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12159ec3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12159ec5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159ec8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12159eca:;
  /* 12159eca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12159ecf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12159ed2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12159ed4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159ed7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159eda mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12159ede or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12159ee0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159ee3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159ee6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12159eea jmp 0x12159f53 */
  goto L_12159f53;
L_12159eec:;
  /* 12159eec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159eef add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159ef2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12159ef6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159ef9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159efc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12159eff add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12159f02 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159f05 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159f08 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12159f0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12159f0d jne 0x12159f2a */
  if (!C.zf) goto L_12159f2a;
  /* 12159f0f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12159f12 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159f15 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12159f1a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12159f1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159f1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12159f22 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12159f24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12159f27 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12159f2a:;
  /* 12159f2a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12159f2d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159f30 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12159f35 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12159f37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159f3a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159f3d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12159f44 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12159f46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12159f49 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12159f4c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12159f53:;
  /* 12159f53 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159f56 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12159f59 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12159f5b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12159f5e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159f61 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12159f64 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12159f67:;
  /* 12159f67 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12159f6a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159f6d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12159f70 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12159f72 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12159f75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159f78 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12159f7b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159f7e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12159f81 jmp 0x1215a242 */
  goto L_1215a242;
L_12159f86:;
  /* 12159f86 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12159f89 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159f8c jge 0x1215a242 */
  if ((C.sf==C.of)) goto L_1215a242;
  /* 12159f92 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12159f95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159f98 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12159f9b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12159f9d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12159fa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159fa3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12159fa6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159fa9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12159fac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12159faf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12159fb2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12159fb5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12159fb8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159fbb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12159fbe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12159fc1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12159fc4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159fc7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12159fca cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159fce jbe 0x12159fd7 */
  if ((C.cf||C.zf)) goto L_12159fd7;
  /* 12159fd0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12159fd7:;
  /* 12159fd7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12159fda and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12159fdd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12159fdf jne 0x1215a120 */
  if (!C.zf) goto L_1215a120;
  /* 12159fe5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12159fe8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12159feb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12159fee mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12159ff1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12159ff5 jbe 0x12159ffe */
  if ((C.cf||C.zf)) goto L_12159ffe;
  /* 12159ff7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12159ffe:;
  /* 12159ffe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1215a001 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1215a004 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1215a007 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a00a jne 0x1215a0e0 */
  if (!C.zf) goto L_1215a0e0;
  /* 1215a010 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a014 jae 0x1215a075 */
  if (!C.cf) goto L_1215a075;
  /* 1215a016 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1215a01b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215a01e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1215a020 not edx */
  EDX = (~(EDX));
  /* 1215a022 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215a025 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a028 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1215a02c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1215a02e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215a031 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a034 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1215a038 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a03b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a03e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1215a041 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1215a044 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a047 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a04a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1215a04d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a050 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a053 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1215a057 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215a059 jne 0x1215a073 */
  if (!C.zf) goto L_1215a073;
  /* 1215a05b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1215a060 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215a063 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1215a065 not edx */
  EDX = (~(EDX));
  /* 1215a067 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215a06a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1215a06c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1215a06e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215a071 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1215a073:;
  /* 1215a073 jmp 0x1215a0e0 */
  goto L_1215a0e0;
L_1215a075:;
  /* 1215a075 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215a078 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215a07b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1215a080 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1215a082 not eax */
  EAX = (~(EAX));
  /* 1215a084 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215a087 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a08a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1215a091 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215a093 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215a096 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a099 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1215a0a0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a0a3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a0a6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1215a0a9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1215a0ac mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a0af add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a0b2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1215a0b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a0b8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a0bb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1215a0bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215a0c1 jne 0x1215a0e0 */
  if (!C.zf) goto L_1215a0e0;
  /* 1215a0c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215a0c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215a0c9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1215a0ce shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1215a0d0 not eax */
  EAX = (~(EAX));
  /* 1215a0d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215a0d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1215a0d8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1215a0da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215a0dd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1215a0e0:;
  /* 1215a0e0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1215a0e3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1215a0e6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1215a0e9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1215a0ec mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1215a0ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1215a0f2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1215a0f5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1215a0f8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1215a0fb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1215a0fe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1215a101 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a104 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1215a107 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1215a10a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1215a10d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215a110 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1215a113 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a117 jbe 0x1215a120 */
  if ((C.cf||C.zf)) goto L_1215a120;
  /* 1215a119 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1215a120:;
  /* 1215a120 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215a123 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215a126 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1215a129 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1215a12c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215a12f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215a132 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1215a135 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1215a138 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215a13b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215a13e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1215a141 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215a144 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215a147 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1215a14a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215a14d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1215a150 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215a153 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1215a156 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215a159 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215a15c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1215a15f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a162 jne 0x1215a22e */
  if (!C.zf) goto L_1215a22e;
  /* 1215a168 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a16c jae 0x1215a1c8 */
  if (!C.cf) goto L_1215a1c8;
  /* 1215a16e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a171 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a174 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1215a178 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a17b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a17e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1215a181 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1215a183 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a186 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a189 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1215a18c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215a18e jne 0x1215a1a6 */
  if (!C.zf) goto L_1215a1a6;
  /* 1215a190 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1215a195 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215a198 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1215a19a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215a19d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1215a19f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1215a1a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215a1a4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1215a1a6:;
  /* 1215a1a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1215a1ab mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215a1ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1215a1b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215a1b3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a1b6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1215a1ba or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1215a1bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215a1bf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a1c2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1215a1c6 jmp 0x1215a22e */
  goto L_1215a22e;
L_1215a1c8:;
  /* 1215a1c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a1cb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a1ce movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1215a1d2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a1d5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a1d8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1215a1db add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1215a1dd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a1e0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a1e3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1215a1e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215a1e8 jne 0x1215a205 */
  if (!C.zf) goto L_1215a205;
  /* 1215a1ea mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215a1ed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215a1f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1215a1f5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1215a1f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215a1fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1215a1fd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1215a1ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215a202 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1215a205:;
  /* 1215a205 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215a208 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215a20b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1215a210 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1215a212 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215a215 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a218 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1215a21f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1215a221 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215a224 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215a227 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1215a22e:;
  /* 1215a22e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215a231 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1215a234 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1215a236 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215a239 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a23c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1215a23f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1215a242:;
  /* 1215a242 mov eax, 1 */
  EAX = (0x1u);
L_1215a247:;
  /* 1215a247 mov esp, ebp */
  ESP = (EBP);
  /* 1215a249 pop ebp */
  EBP = (pop32());
  /* 1215a24a ret  */
  ESPCHK(0x12159c60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a250 @ 0x1215a250 (304 bytes, 79 insns) */
void f_1215a250(void) {
  FTRACE(0x1215a250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215a250 push ebp */
  push32((uint32_t)(EBP));
  /* 1215a251 mov ebp, esp */
  EBP = (ESP);
  /* 1215a253 push ecx */
  push32((uint32_t)(ECX));
  /* 1215a254 cmp dword ptr [0x12181f60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12181f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a25b je 0x1215a37c */
  if (C.zf) goto L_1215a37c;
  /* 1215a261 mov eax, dword ptr [0x12181f58] */
  EAX = (r32((uint32_t)(0x12181f58)));
  /* 1215a266 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1215a269 mov ecx, dword ptr [0x12181f60] */
  ECX = (r32((uint32_t)(0x12181f60)));
  /* 1215a26f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1215a272 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a274 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1215a277 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1215a27c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1215a281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215a284 push eax */
  push32((uint32_t)(EAX));
  /* 1215a285 call dword ptr [0x12183330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183330))), 0x1215a28bu);
  /* 1215a28b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1215a290 mov ecx, dword ptr [0x12181f58] */
  ECX = (r32((uint32_t)(0x12181f58)));
  /* 1215a296 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1215a298 mov eax, dword ptr [0x12181f60] */
  EAX = (r32((uint32_t)(0x12181f60)));
  /* 1215a29d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1215a2a0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1215a2a2 mov edx, dword ptr [0x12181f60] */
  EDX = (r32((uint32_t)(0x12181f60)));
  /* 1215a2a8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1215a2ab mov eax, dword ptr [0x12181f60] */
  EAX = (r32((uint32_t)(0x12181f60)));
  /* 1215a2b0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1215a2b3 mov edx, dword ptr [0x12181f58] */
  EDX = (r32((uint32_t)(0x12181f58)));
  /* 1215a2b9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1215a2c4 mov eax, dword ptr [0x12181f60] */
  EAX = (r32((uint32_t)(0x12181f60)));
  /* 1215a2c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1215a2cc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1215a2cf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1215a2d2 mov eax, dword ptr [0x12181f60] */
  EAX = (r32((uint32_t)(0x12181f60)));
  /* 1215a2d7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1215a2da mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1215a2dd mov edx, dword ptr [0x12181f60] */
  EDX = (r32((uint32_t)(0x12181f60)));
  /* 1215a2e3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1215a2e6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1215a2ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215a2ec jne 0x1215a302 */
  if (!C.zf) goto L_1215a302;
  /* 1215a2ee mov edx, dword ptr [0x12181f60] */
  EDX = (r32((uint32_t)(0x12181f60)));
  /* 1215a2f4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1215a2f7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1215a2f9 mov ecx, dword ptr [0x12181f60] */
  ECX = (r32((uint32_t)(0x12181f60)));
  /* 1215a2ff mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1215a302:;
  /* 1215a302 mov edx, dword ptr [0x12181f60] */
  EDX = (r32((uint32_t)(0x12181f60)));
  /* 1215a308 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a30c jne 0x1215a372 */
  if (!C.zf) goto L_1215a372;
  /* 1215a30e cmp dword ptr [0x12181f64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12181f64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a315 jle 0x1215a372 */
  if ((C.zf||C.sf!=C.of)) goto L_1215a372;
  /* 1215a317 mov eax, dword ptr [0x12181f60] */
  EAX = (r32((uint32_t)(0x12181f60)));
  /* 1215a31c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1215a31f push ecx */
  push32((uint32_t)(ECX));
  /* 1215a320 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215a322 mov edx, dword ptr [0x12181f6c] */
  EDX = (r32((uint32_t)(0x12181f6c)));
  /* 1215a328 push edx */
  push32((uint32_t)(EDX));
  /* 1215a329 call dword ptr [0x12183384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183384))), 0x1215a32fu);
  /* 1215a32f mov eax, dword ptr [0x12181f64] */
  EAX = (r32((uint32_t)(0x12181f64)));
  /* 1215a334 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215a337 mov ecx, dword ptr [0x12181f68] */
  ECX = (r32((uint32_t)(0x12181f68)));
  /* 1215a33d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a33f mov edx, dword ptr [0x12181f60] */
  EDX = (r32((uint32_t)(0x12181f60)));
  /* 1215a345 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a348 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215a34a push ecx */
  push32((uint32_t)(ECX));
  /* 1215a34b mov eax, dword ptr [0x12181f60] */
  EAX = (r32((uint32_t)(0x12181f60)));
  /* 1215a350 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a353 push eax */
  push32((uint32_t)(EAX));
  /* 1215a354 mov ecx, dword ptr [0x12181f60] */
  ECX = (r32((uint32_t)(0x12181f60)));
  /* 1215a35a push ecx */
  push32((uint32_t)(ECX));
  /* 1215a35b call 0x1215c980 */
  push32(0x1215a360u); f_1215c980();
  /* 1215a360 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a363 mov edx, dword ptr [0x12181f64] */
  EDX = (r32((uint32_t)(0x12181f64)));
  /* 1215a369 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215a36c mov dword ptr [0x12181f64], edx */
  w32((uint32_t)(0x12181f64), (EDX));
L_1215a372:;
  /* 1215a372 mov dword ptr [0x12181f60], 0 */
  w32((uint32_t)(0x12181f60), (0x0u));
L_1215a37c:;
  /* 1215a37c mov esp, ebp */
  ESP = (EBP);
  /* 1215a37e pop ebp */
  EBP = (pop32());
  /* 1215a37f ret  */
  ESPCHK(0x1215a250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a380 @ 0x1215a380 (1565 bytes, 343 insns) */
void f_1215a380(void) {
  FTRACE(0x1215a380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215a380 push ebp */
  push32((uint32_t)(EBP));
  /* 1215a381 mov ebp, esp */
  EBP = (ESP);
  /* 1215a383 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215a389 mov eax, dword ptr [0x12181f64] */
  EAX = (r32((uint32_t)(0x12181f64)));
  /* 1215a38e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215a391 push eax */
  push32((uint32_t)(EAX));
  /* 1215a392 mov ecx, dword ptr [0x12181f68] */
  ECX = (r32((uint32_t)(0x12181f68)));
  /* 1215a398 push ecx */
  push32((uint32_t)(ECX));
  /* 1215a399 call dword ptr [0x121833a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833a8))), 0x1215a39fu);
  /* 1215a39f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215a3a1 je 0x1215a3ab */
  if (C.zf) goto L_1215a3ab;
  /* 1215a3a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215a3a6 jmp 0x1215a999 */
  goto L_1215a999;
L_1215a3ab:;
  /* 1215a3ab mov edx, dword ptr [0x12181f68] */
  EDX = (r32((uint32_t)(0x12181f68)));
  /* 1215a3b1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1215a3b7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1215a3c1 jmp 0x1215a3d2 */
  goto L_1215a3d2;
L_1215a3c3:;
  /* 1215a3c3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1215a3c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a3cc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1215a3d2:;
  /* 1215a3d2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1215a3d8 cmp ecx, dword ptr [0x12181f64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12181f64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a3de jge 0x1215a997 */
  if ((C.sf==C.of)) goto L_1215a997;
  /* 1215a3e4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1215a3ea mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1215a3ed mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1215a3f3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1215a3f8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1215a3fe push ecx */
  push32((uint32_t)(ECX));
  /* 1215a3ff call dword ptr [0x121833a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833a8))), 0x1215a405u);
  /* 1215a405 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215a407 je 0x1215a413 */
  if (C.zf) goto L_1215a413;
  /* 1215a409 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1215a40e jmp 0x1215a999 */
  goto L_1215a999;
L_1215a413:;
  /* 1215a413 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1215a419 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1215a41c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1215a422 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1215a428 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a42e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1215a431 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1215a437 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1215a43a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215a43d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1215a447 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1215a451 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1215a458 jmp 0x1215a463 */
  goto L_1215a463;
L_1215a45a:;
  /* 1215a45a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215a45d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a460 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1215a463:;
  /* 1215a463 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a467 jge 0x1215a95b */
  if ((C.sf==C.of)) goto L_1215a95b;
  /* 1215a46d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1215a477 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1215a481 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1215a48b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1215a495 jmp 0x1215a4a6 */
  goto L_1215a4a6;
L_1215a497:;
  /* 1215a497 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1215a49d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a4a0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1215a4a6:;
  /* 1215a4a6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a4ad jge 0x1215a4c2 */
  if ((C.sf==C.of)) goto L_1215a4c2;
  /* 1215a4af mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1215a4b5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1215a4c0 jmp 0x1215a497 */
  goto L_1215a497;
L_1215a4c2:;
  /* 1215a4c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a4c6 jl 0x1215a8fd */
  if ((C.sf!=C.of)) goto L_1215a8fd;
  /* 1215a4cc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1215a4d1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1215a4d7 push ecx */
  push32((uint32_t)(ECX));
  /* 1215a4d8 call dword ptr [0x121833a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833a8))), 0x1215a4deu);
  /* 1215a4de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215a4e0 je 0x1215a4ec */
  if (C.zf) goto L_1215a4ec;
  /* 1215a4e2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1215a4e7 jmp 0x1215a999 */
  goto L_1215a999;
L_1215a4ec:;
  /* 1215a4ec mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1215a4f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1215a4f5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1215a4ff jmp 0x1215a510 */
  goto L_1215a510;
L_1215a501:;
  /* 1215a501 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1215a507 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a50a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1215a510:;
  /* 1215a510 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a517 jge 0x1215a694 */
  if ((C.sf==C.of)) goto L_1215a694;
  /* 1215a51d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215a520 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a523 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1215a529 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1215a52f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a535 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1215a53b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1215a541 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a545 jne 0x1215a552 */
  if (!C.zf) goto L_1215a552;
  /* 1215a547 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1215a54d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a550 je 0x1215a55c */
  if (C.zf) goto L_1215a55c;
L_1215a552:;
  /* 1215a552 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1215a557 jmp 0x1215a999 */
  goto L_1215a999;
L_1215a55c:;
  /* 1215a55c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1215a562 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1215a564 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1215a56a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1215a570 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1215a576 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1215a57c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1215a57f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215a581 je 0x1215a5b9 */
  if (C.zf) goto L_1215a5b9;
  /* 1215a583 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1215a589 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215a58c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1215a592 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a59c jle 0x1215a5a8 */
  if ((C.zf||C.sf!=C.of)) goto L_1215a5a8;
  /* 1215a59e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1215a5a3 jmp 0x1215a999 */
  goto L_1215a999;
L_1215a5a8:;
  /* 1215a5a8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1215a5ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a5b1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1215a5b7 jmp 0x1215a5fb */
  goto L_1215a5fb;
L_1215a5b9:;
  /* 1215a5b9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1215a5bf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1215a5c2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215a5c5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1215a5cb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a5d2 jle 0x1215a5de */
  if ((C.zf||C.sf!=C.of)) goto L_1215a5de;
  /* 1215a5d4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1215a5de:;
  /* 1215a5de mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1215a5e4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1215a5eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a5ee mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1215a5f4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1215a5fb:;
  /* 1215a5fb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a602 jl 0x1215a61d */
  if ((C.sf!=C.of)) goto L_1215a61d;
  /* 1215a604 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1215a60a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1215a60d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215a60f jne 0x1215a61d */
  if (!C.zf) goto L_1215a61d;
  /* 1215a611 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a61b jle 0x1215a627 */
  if ((C.zf||C.sf!=C.of)) goto L_1215a627;
L_1215a61d:;
  /* 1215a61d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1215a622 jmp 0x1215a999 */
  goto L_1215a999;
L_1215a627:;
  /* 1215a627 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1215a62d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a633 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1215a636 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a63c je 0x1215a648 */
  if (C.zf) goto L_1215a648;
  /* 1215a63e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1215a643 jmp 0x1215a999 */
  goto L_1215a999;
L_1215a648:;
  /* 1215a648 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1215a64e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a654 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1215a65a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1215a660 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a666 jb 0x1215a55c */
  if (C.cf) goto L_1215a55c;
  /* 1215a66c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1215a672 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a678 je 0x1215a684 */
  if (C.zf) goto L_1215a684;
  /* 1215a67a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1215a67f jmp 0x1215a999 */
  goto L_1215a999;
L_1215a684:;
  /* 1215a684 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215a687 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a68c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1215a68f jmp 0x1215a501 */
  goto L_1215a501;
L_1215a694:;
  /* 1215a694 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215a697 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1215a699 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a69f je 0x1215a6ab */
  if (C.zf) goto L_1215a6ab;
  /* 1215a6a1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1215a6a6 jmp 0x1215a999 */
  goto L_1215a999;
L_1215a6ab:;
  /* 1215a6ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215a6ae mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1215a6b4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1215a6bb jmp 0x1215a6c6 */
  goto L_1215a6c6;
L_1215a6bd:;
  /* 1215a6bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215a6c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a6c3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1215a6c6:;
  /* 1215a6c6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a6ca jge 0x1215a8fd */
  if ((C.sf==C.of)) goto L_1215a8fd;
  /* 1215a6d0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1215a6da mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1215a6e0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1215a6e6:;
  /* 1215a6e6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1215a6ec mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1215a6ef mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1215a6f5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1215a6fb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a701 je 0x1215a82a */
  if (C.zf) goto L_1215a82a;
  /* 1215a707 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215a70a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1215a710 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a717 je 0x1215a82a */
  if (C.zf) goto L_1215a82a;
  /* 1215a71d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1215a723 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a729 jb 0x1215a73e */
  if (C.cf) goto L_1215a73e;
  /* 1215a72b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1215a731 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a736 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a73c jb 0x1215a748 */
  if (C.cf) goto L_1215a748;
L_1215a73e:;
  /* 1215a73e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1215a743 jmp 0x1215a999 */
  goto L_1215a999;
L_1215a748:;
  /* 1215a748 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1215a74e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1215a754 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1215a75a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1215a760 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a763 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1215a766 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215a769 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a76e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1215a774:;
  /* 1215a774 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215a777 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a77d je 0x1215a79e */
  if (C.zf) goto L_1215a79e;
  /* 1215a77f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215a782 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a788 jne 0x1215a78c */
  if (!C.zf) goto L_1215a78c;
  /* 1215a78a jmp 0x1215a79e */
  goto L_1215a79e;
L_1215a78c:;
  /* 1215a78c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215a78f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1215a791 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1215a794 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215a797 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a799 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1215a79c jmp 0x1215a774 */
  goto L_1215a774;
L_1215a79e:;
  /* 1215a79e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215a7a1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a7a7 jne 0x1215a7b3 */
  if (!C.zf) goto L_1215a7b3;
  /* 1215a7a9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1215a7ae jmp 0x1215a999 */
  goto L_1215a999;
L_1215a7b3:;
  /* 1215a7b3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1215a7b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1215a7bb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1215a7be sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215a7c1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1215a7c7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a7ce jle 0x1215a7da */
  if ((C.zf||C.sf!=C.of)) goto L_1215a7da;
  /* 1215a7d0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1215a7da:;
  /* 1215a7da mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1215a7e0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a7e3 je 0x1215a7ef */
  if (C.zf) goto L_1215a7ef;
  /* 1215a7e5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1215a7ea jmp 0x1215a999 */
  goto L_1215a999;
L_1215a7ef:;
  /* 1215a7ef mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1215a7f5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1215a7f8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a7fe je 0x1215a80a */
  if (C.zf) goto L_1215a80a;
  /* 1215a800 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1215a805 jmp 0x1215a999 */
  goto L_1215a999;
L_1215a80a:;
  /* 1215a80a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1215a810 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1215a816 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1215a81c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a81f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1215a825 jmp 0x1215a6e6 */
  goto L_1215a6e6;
L_1215a82a:;
  /* 1215a82a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a831 je 0x1215a8a1 */
  if (C.zf) goto L_1215a8a1;
  /* 1215a833 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a837 jge 0x1215a86b */
  if ((C.sf==C.of)) goto L_1215a86b;
  /* 1215a839 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1215a83e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215a841 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1215a843 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1215a849 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1215a84b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1215a851 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1215a856 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215a859 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1215a85b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1215a861 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1215a863 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1215a869 jmp 0x1215a8a1 */
  goto L_1215a8a1;
L_1215a86b:;
  /* 1215a86b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215a86e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215a871 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1215a876 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1215a878 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1215a87e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1215a880 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1215a886 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215a889 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215a88c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1215a891 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1215a893 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1215a899 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1215a89b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1215a8a1:;
  /* 1215a8a1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1215a8a7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1215a8aa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a8b0 jne 0x1215a8c4 */
  if (!C.zf) goto L_1215a8c4;
  /* 1215a8b2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215a8b5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1215a8bb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a8c2 je 0x1215a8ce */
  if (C.zf) goto L_1215a8ce;
L_1215a8c4:;
  /* 1215a8c4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1215a8c9 jmp 0x1215a999 */
  goto L_1215a999;
L_1215a8ce:;
  /* 1215a8ce mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1215a8d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1215a8d7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a8dd je 0x1215a8e9 */
  if (C.zf) goto L_1215a8e9;
  /* 1215a8df mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1215a8e4 jmp 0x1215a999 */
  goto L_1215a999;
L_1215a8e9:;
  /* 1215a8e9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1215a8ef add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a8f2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1215a8f8 jmp 0x1215a6bd */
  goto L_1215a6bd;
L_1215a8fd:;
  /* 1215a8fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215a900 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1215a906 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1215a90c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a910 jne 0x1215a92a */
  if (!C.zf) goto L_1215a92a;
  /* 1215a912 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215a915 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1215a91b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1215a921 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a928 je 0x1215a931 */
  if (C.zf) goto L_1215a931;
L_1215a92a:;
  /* 1215a92a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1215a92f jmp 0x1215a999 */
  goto L_1215a999;
L_1215a931:;
  /* 1215a931 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1215a937 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a93d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1215a943 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215a946 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a94b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1215a94e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215a951 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1215a953 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1215a956 jmp 0x1215a45a */
  goto L_1215a45a;
L_1215a95b:;
  /* 1215a95b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1215a961 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1215a967 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a969 jne 0x1215a97c */
  if (!C.zf) goto L_1215a97c;
  /* 1215a96b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1215a971 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1215a977 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a97a je 0x1215a983 */
  if (C.zf) goto L_1215a983;
L_1215a97c:;
  /* 1215a97c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1215a981 jmp 0x1215a999 */
  goto L_1215a999;
L_1215a983:;
  /* 1215a983 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1215a989 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a98c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1215a992 jmp 0x1215a3c3 */
  goto L_1215a3c3;
L_1215a997:;
  /* 1215a997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1215a999:;
  /* 1215a999 mov esp, ebp */
  ESP = (EBP);
  /* 1215a99b pop ebp */
  EBP = (pop32());
  /* 1215a99c ret  */
  ESPCHK(0x1215a380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9a0 @ 0x1215a9a0 (250 bytes, 92 insns) */
void f_1215a9a0(void) {
  FTRACE(0x1215a9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215a9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215a9a1 mov ebp, esp */
  EBP = (ESP);
  /* 1215a9a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215a9a6 push ebx */
  push32((uint32_t)(EBX));
  /* 1215a9a7 push esi */
  push32((uint32_t)(ESI));
  /* 1215a9a8 push edi */
  push32((uint32_t)(EDI));
  /* 1215a9a9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1215a9ac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1215a9af lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1215a9b2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1215a9b5:;
  /* 1215a9b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a9b9 jne 0x1215a9d9 */
  if (!C.zf) goto L_1215a9d9;
  /* 1215a9bb push 0x1217bf98 */
  push32((uint32_t)(0x1217bf98u));
  /* 1215a9c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215a9c2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1215a9c4 push 0x1217bf8c */
  push32((uint32_t)(0x1217bf8cu));
  /* 1215a9c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215a9cb call 0x12153b50 */
  push32(0x1215a9d0u); f_12153b50();
  /* 1215a9d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a9d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a9d6 jne 0x1215a9d9 */
  if (!C.zf) goto L_1215a9d9;
  /* 1215a9d8 int3  */
  x86_unimpl("int3 @ 0x1215a9d8");
L_1215a9d9:;
  /* 1215a9d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1215a9db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215a9dd jne 0x1215a9b5 */
  if (!C.zf) goto L_1215a9b5;
L_1215a9df:;
  /* 1215a9df cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215a9e3 jne 0x1215aa03 */
  if (!C.zf) goto L_1215aa03;
  /* 1215a9e5 push 0x1217bf7c */
  push32((uint32_t)(0x1217bf7cu));
  /* 1215a9ea push 0 */
  push32((uint32_t)(0x0u));
  /* 1215a9ec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1215a9ee push 0x1217bf8c */
  push32((uint32_t)(0x1217bf8cu));
  /* 1215a9f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215a9f5 call 0x12153b50 */
  push32(0x1215a9fau); f_12153b50();
  /* 1215a9fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215a9fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215aa00 jne 0x1215aa03 */
  if (!C.zf) goto L_1215aa03;
  /* 1215aa02 int3  */
  x86_unimpl("int3 @ 0x1215aa02");
L_1215aa03:;
  /* 1215aa03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215aa05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215aa07 jne 0x1215a9df */
  if (!C.zf) goto L_1215a9df;
  /* 1215aa09 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215aa0c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1215aa13 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215aa16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215aa19 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1215aa1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215aa1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215aa22 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1215aa24 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215aa27 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1215aa2e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1215aa31 push ecx */
  push32((uint32_t)(ECX));
  /* 1215aa32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215aa35 push edx */
  push32((uint32_t)(EDX));
  /* 1215aa36 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215aa39 push eax */
  push32((uint32_t)(EAX));
  /* 1215aa3a call 0x1215ba20 */
  push32(0x1215aa3fu); f_1215ba20();
  /* 1215aa3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215aa42 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1215aa45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215aa48 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1215aa4b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215aa4e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215aa51 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1215aa54 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215aa57 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215aa5b jl 0x1215aa7f */
  if ((C.sf!=C.of)) goto L_1215aa7f;
  /* 1215aa5d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215aa60 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1215aa62 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1215aa65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215aa67 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1215aa6d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1215aa70 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215aa73 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1215aa75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215aa78 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215aa7b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1215aa7d jmp 0x1215aa90 */
  goto L_1215aa90;
L_1215aa7f:;
  /* 1215aa7f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215aa82 push edx */
  push32((uint32_t)(EDX));
  /* 1215aa83 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215aa85 call 0x1215b7a0 */
  push32(0x1215aa8au); f_1215b7a0();
  /* 1215aa8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215aa8d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1215aa90:;
  /* 1215aa90 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1215aa93 pop edi */
  EDI = (pop32());
  /* 1215aa94 pop esi */
  ESI = (pop32());
  /* 1215aa95 pop ebx */
  EBX = (pop32());
  /* 1215aa96 mov esp, ebp */
  ESP = (EBP);
  /* 1215aa98 pop ebp */
  EBP = (pop32());
  /* 1215aa99 ret  */
  ESPCHK(0x1215a9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aaa0 @ 0x1215aaa0 (183 bytes, 58 insns) */
void f_1215aaa0(void) {
  FTRACE(0x1215aaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215aaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215aaa1 mov ebp, esp */
  EBP = (ESP);
  /* 1215aaa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215aaa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215aaa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215aaac cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215aab1 ja 0x1215aaca */
  if ((!C.cf&&!C.zf)) goto L_1215aaca;
  /* 1215aab3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215aab6 mov edx, dword ptr [0x1217ec98] */
  EDX = (r32((uint32_t)(0x1217ec98)));
  /* 1215aabc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215aabe mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1215aac2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1215aac5 jmp 0x1215ab53 */
  goto L_1215ab53;
L_1215aaca:;
  /* 1215aaca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215aacd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1215aad0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1215aad6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1215aadc mov edx, dword ptr [0x1217ec98] */
  EDX = (r32((uint32_t)(0x1217ec98)));
  /* 1215aae2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215aae4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1215aae8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1215aaed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215aaef je 0x1215ab13 */
  if (C.zf) goto L_1215ab13;
  /* 1215aaf1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215aaf4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1215aaf7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1215aafd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1215ab00 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1215ab03 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1215ab06 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1215ab0a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1215ab11 jmp 0x1215ab24 */
  goto L_1215ab24;
L_1215ab13:;
  /* 1215ab13 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1215ab16 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1215ab19 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1215ab1d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1215ab24:;
  /* 1215ab24 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215ab26 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215ab28 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215ab2a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1215ab2d push ecx */
  push32((uint32_t)(ECX));
  /* 1215ab2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215ab31 push edx */
  push32((uint32_t)(EDX));
  /* 1215ab32 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1215ab35 push eax */
  push32((uint32_t)(EAX));
  /* 1215ab36 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215ab38 call 0x1215ccc0 */
  push32(0x1215ab3du); f_1215ccc0();
  /* 1215ab3d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ab40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215ab42 jne 0x1215ab48 */
  if (!C.zf) goto L_1215ab48;
  /* 1215ab44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215ab46 jmp 0x1215ab53 */
  goto L_1215ab53;
L_1215ab48:;
  /* 1215ab48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ab4b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215ab50 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1215ab53:;
  /* 1215ab53 mov esp, ebp */
  ESP = (EBP);
  /* 1215ab55 pop ebp */
  EBP = (pop32());
  /* 1215ab56 ret  */
  ESPCHK(0x1215aaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab60 @ 0x1215ab60 (836 bytes, 238 insns) */
void f_1215ab60(void) {
  FTRACE(0x1215ab60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215ab60 push ebp */
  push32((uint32_t)(EBP));
  /* 1215ab61 mov ebp, esp */
  EBP = (ESP);
  /* 1215ab63 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215ab66 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1215ab68 call 0x12158490 */
  push32(0x1215ab6du); f_12158490();
  /* 1215ab6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ab70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ab73 push eax */
  push32((uint32_t)(EAX));
  /* 1215ab74 call 0x1215aeb0 */
  push32(0x1215ab79u); f_1215aeb0();
  /* 1215ab79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ab7c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1215ab7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ab82 cmp ecx, dword ptr [0x12181ca4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12181ca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ab88 jne 0x1215ab9b */
  if (!C.zf) goto L_1215ab9b;
  /* 1215ab8a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1215ab8c call 0x12158530 */
  push32(0x1215ab91u); f_12158530();
  /* 1215ab91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ab94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215ab96 jmp 0x1215aea0 */
  goto L_1215aea0;
L_1215ab9b:;
  /* 1215ab9b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ab9f jne 0x1215abbc */
  if (!C.zf) goto L_1215abbc;
  /* 1215aba1 call 0x1215af90 */
  push32(0x1215aba6u); f_1215af90();
  /* 1215aba6 call 0x1215b010 */
  push32(0x1215ababu); f_1215b010();
  /* 1215abab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1215abad call 0x12158530 */
  push32(0x1215abb2u); f_12158530();
  /* 1215abb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215abb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215abb7 jmp 0x1215aea0 */
  goto L_1215aea0;
L_1215abbc:;
  /* 1215abbc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1215abc3 jmp 0x1215abce */
  goto L_1215abce;
L_1215abc5:;
  /* 1215abc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215abc8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215abcb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1215abce:;
  /* 1215abce cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215abd2 jae 0x1215ad1f */
  if (!C.cf) goto L_1215ad1f;
  /* 1215abd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215abdb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215abde mov ecx, dword ptr [eax + 0x1217eeb8] */
  ECX = (r32((uint32_t)(EAX + 0x1217eeb8)));
  /* 1215abe4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215abe7 jne 0x1215ad1a */
  if (!C.zf) goto L_1215ad1a;
  /* 1215abed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1215abf4 jmp 0x1215abff */
  goto L_1215abff;
L_1215abf6:;
  /* 1215abf6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215abf9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215abfc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1215abff:;
  /* 1215abff cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ac06 jae 0x1215ac14 */
  if (!C.cf) goto L_1215ac14;
  /* 1215ac08 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215ac0b mov byte ptr [eax + 0x12181e40], 0 */
  w8((uint32_t)(EAX + 0x12181e40), (0x0u));
  /* 1215ac12 jmp 0x1215abf6 */
  goto L_1215abf6;
L_1215ac14:;
  /* 1215ac14 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1215ac1b jmp 0x1215ac26 */
  goto L_1215ac26;
L_1215ac1d:;
  /* 1215ac1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215ac20 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ac23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1215ac26:;
  /* 1215ac26 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ac2a jae 0x1215aca7 */
  if (!C.cf) goto L_1215aca7;
  /* 1215ac2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ac2f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215ac32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215ac35 lea ecx, [edx + eax*8 + 0x1217eec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1217eec8));
  /* 1215ac3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1215ac3f jmp 0x1215ac4a */
  goto L_1215ac4a;
L_1215ac41:;
  /* 1215ac41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215ac44 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ac47 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1215ac4a:;
  /* 1215ac4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215ac4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215ac4f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1215ac51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215ac53 je 0x1215aca2 */
  if (C.zf) goto L_1215aca2;
  /* 1215ac55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215ac58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215ac5a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1215ac5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215ac5f je 0x1215aca2 */
  if (C.zf) goto L_1215aca2;
  /* 1215ac61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215ac64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1215ac66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1215ac68 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1215ac6b jmp 0x1215ac76 */
  goto L_1215ac76;
L_1215ac6d:;
  /* 1215ac6d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215ac70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ac73 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1215ac76:;
  /* 1215ac76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215ac79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1215ac7b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1215ac7e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ac81 ja 0x1215aca0 */
  if ((!C.cf&&!C.zf)) goto L_1215aca0;
  /* 1215ac83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215ac86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215ac89 mov dl, byte ptr [eax + 0x12181e41] */
  DL = (r8((uint32_t)(EAX + 0x12181e41)));
  /* 1215ac8f or dl, byte ptr [ecx + 0x1217eeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1217eeb0))); DL = (_r); fl_logic(_r,8); }
  /* 1215ac95 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215ac98 mov byte ptr [eax + 0x12181e41], dl */
  w8((uint32_t)(EAX + 0x12181e41), (DL));
  /* 1215ac9e jmp 0x1215ac6d */
  goto L_1215ac6d;
L_1215aca0:;
  /* 1215aca0 jmp 0x1215ac41 */
  goto L_1215ac41;
L_1215aca2:;
  /* 1215aca2 jmp 0x1215ac1d */
  goto L_1215ac1d;
L_1215aca7:;
  /* 1215aca7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215acaa mov dword ptr [0x12181ca4], ecx */
  w32((uint32_t)(0x12181ca4), (ECX));
  /* 1215acb0 mov dword ptr [0x12181d2c], 1 */
  w32((uint32_t)(0x12181d2c), (0x1u));
  /* 1215acba mov edx, dword ptr [0x12181ca4] */
  EDX = (r32((uint32_t)(0x12181ca4)));
  /* 1215acc0 push edx */
  push32((uint32_t)(EDX));
  /* 1215acc1 call 0x1215af10 */
  push32(0x1215acc6u); f_1215af10();
  /* 1215acc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215acc9 mov dword ptr [0x12181f44], eax */
  w32((uint32_t)(0x12181f44), (EAX));
  /* 1215acce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1215acd5 jmp 0x1215ace0 */
  goto L_1215ace0;
L_1215acd7:;
  /* 1215acd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215acda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215acdd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1215ace0:;
  /* 1215ace0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ace4 jae 0x1215ad04 */
  if (!C.cf) goto L_1215ad04;
  /* 1215ace6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ace9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215acec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215acef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215acf2 mov cx, word ptr [ecx + eax*2 + 0x1217eebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1217eebc)));
  /* 1215acfa mov word ptr [edx*2 + 0x12181d20], cx */
  w16((uint32_t)(EDX*2 + 0x12181d20), (CX));
  /* 1215ad02 jmp 0x1215acd7 */
  goto L_1215acd7;
L_1215ad04:;
  /* 1215ad04 call 0x1215b010 */
  push32(0x1215ad09u); f_1215b010();
  /* 1215ad09 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1215ad0b call 0x12158530 */
  push32(0x1215ad10u); f_12158530();
  /* 1215ad10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ad13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215ad15 jmp 0x1215aea0 */
  goto L_1215aea0;
L_1215ad1a:;
  /* 1215ad1a jmp 0x1215abc5 */
  goto L_1215abc5;
L_1215ad1f:;
  /* 1215ad1f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1215ad22 push edx */
  push32((uint32_t)(EDX));
  /* 1215ad23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ad26 push eax */
  push32((uint32_t)(EAX));
  /* 1215ad27 call dword ptr [0x12183308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183308))), 0x1215ad2du);
  /* 1215ad2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ad30 jne 0x1215ae72 */
  if (!C.zf) goto L_1215ae72;
  /* 1215ad36 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1215ad3d jmp 0x1215ad48 */
  goto L_1215ad48;
L_1215ad3f:;
  /* 1215ad3f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215ad42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ad45 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1215ad48:;
  /* 1215ad48 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ad4f jae 0x1215ad5d */
  if (!C.cf) goto L_1215ad5d;
  /* 1215ad51 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215ad54 mov byte ptr [edx + 0x12181e40], 0 */
  w8((uint32_t)(EDX + 0x12181e40), (0x0u));
  /* 1215ad5b jmp 0x1215ad3f */
  goto L_1215ad3f;
L_1215ad5d:;
  /* 1215ad5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ad60 mov dword ptr [0x12181ca4], eax */
  w32((uint32_t)(0x12181ca4), (EAX));
  /* 1215ad65 mov dword ptr [0x12181f44], 0 */
  w32((uint32_t)(0x12181f44), (0x0u));
  /* 1215ad6f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ad73 jbe 0x1215ae2e */
  if ((C.cf||C.zf)) goto L_1215ae2e;
  /* 1215ad79 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1215ad7c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1215ad7f jmp 0x1215ad8a */
  goto L_1215ad8a;
L_1215ad81:;
  /* 1215ad81 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1215ad84 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ad87 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1215ad8a:;
  /* 1215ad8a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1215ad8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215ad8f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1215ad91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215ad93 je 0x1215addc */
  if (C.zf) goto L_1215addc;
  /* 1215ad95 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1215ad98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215ad9a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1215ad9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215ad9f je 0x1215addc */
  if (C.zf) goto L_1215addc;
  /* 1215ada1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1215ada4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1215ada6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1215ada8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1215adab jmp 0x1215adb6 */
  goto L_1215adb6;
L_1215adad:;
  /* 1215adad mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215adb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215adb3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1215adb6:;
  /* 1215adb6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1215adb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1215adbb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1215adbe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215adc1 ja 0x1215adda */
  if ((!C.cf&&!C.zf)) goto L_1215adda;
  /* 1215adc3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215adc6 mov cl, byte ptr [eax + 0x12181e41] */
  CL = (r8((uint32_t)(EAX + 0x12181e41)));
  /* 1215adcc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1215adcf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215add2 mov byte ptr [edx + 0x12181e41], cl */
  w8((uint32_t)(EDX + 0x12181e41), (CL));
  /* 1215add8 jmp 0x1215adad */
  goto L_1215adad;
L_1215adda:;
  /* 1215adda jmp 0x1215ad81 */
  goto L_1215ad81;
L_1215addc:;
  /* 1215addc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1215ade3 jmp 0x1215adee */
  goto L_1215adee;
L_1215ade5:;
  /* 1215ade5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215ade8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215adeb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1215adee:;
  /* 1215adee cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215adf5 jae 0x1215ae0e */
  if (!C.cf) goto L_1215ae0e;
  /* 1215adf7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215adfa mov dl, byte ptr [ecx + 0x12181e41] */
  DL = (r8((uint32_t)(ECX + 0x12181e41)));
  /* 1215ae00 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1215ae03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215ae06 mov byte ptr [eax + 0x12181e41], dl */
  w8((uint32_t)(EAX + 0x12181e41), (DL));
  /* 1215ae0c jmp 0x1215ade5 */
  goto L_1215ade5;
L_1215ae0e:;
  /* 1215ae0e mov ecx, dword ptr [0x12181ca4] */
  ECX = (r32((uint32_t)(0x12181ca4)));
  /* 1215ae14 push ecx */
  push32((uint32_t)(ECX));
  /* 1215ae15 call 0x1215af10 */
  push32(0x1215ae1au); f_1215af10();
  /* 1215ae1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ae1d mov dword ptr [0x12181f44], eax */
  w32((uint32_t)(0x12181f44), (EAX));
  /* 1215ae22 mov dword ptr [0x12181d2c], 1 */
  w32((uint32_t)(0x12181d2c), (0x1u));
  /* 1215ae2c jmp 0x1215ae38 */
  goto L_1215ae38;
L_1215ae2e:;
  /* 1215ae2e mov dword ptr [0x12181d2c], 0 */
  w32((uint32_t)(0x12181d2c), (0x0u));
L_1215ae38:;
  /* 1215ae38 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1215ae3f jmp 0x1215ae4a */
  goto L_1215ae4a;
L_1215ae41:;
  /* 1215ae41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215ae44 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ae47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1215ae4a:;
  /* 1215ae4a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ae4e jae 0x1215ae5f */
  if (!C.cf) goto L_1215ae5f;
  /* 1215ae50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215ae53 mov word ptr [eax*2 + 0x12181d20], 0 */
  w16((uint32_t)(EAX*2 + 0x12181d20), (0x0u));
  /* 1215ae5d jmp 0x1215ae41 */
  goto L_1215ae41;
L_1215ae5f:;
  /* 1215ae5f call 0x1215b010 */
  push32(0x1215ae64u); f_1215b010();
  /* 1215ae64 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1215ae66 call 0x12158530 */
  push32(0x1215ae6bu); f_12158530();
  /* 1215ae6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ae6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215ae70 jmp 0x1215aea0 */
  goto L_1215aea0;
L_1215ae72:;
  /* 1215ae72 cmp dword ptr [0x121807b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121807b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ae79 je 0x1215ae93 */
  if (C.zf) goto L_1215ae93;
  /* 1215ae7b call 0x1215af90 */
  push32(0x1215ae80u); f_1215af90();
  /* 1215ae80 call 0x1215b010 */
  push32(0x1215ae85u); f_1215b010();
  /* 1215ae85 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1215ae87 call 0x12158530 */
  push32(0x1215ae8cu); f_12158530();
  /* 1215ae8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ae8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215ae91 jmp 0x1215aea0 */
  goto L_1215aea0;
L_1215ae93:;
  /* 1215ae93 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1215ae95 call 0x12158530 */
  push32(0x1215ae9au); f_12158530();
  /* 1215ae9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ae9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1215aea0:;
  /* 1215aea0 mov esp, ebp */
  ESP = (EBP);
  /* 1215aea2 pop ebp */
  EBP = (pop32());
  /* 1215aea3 ret  */
  ESPCHK(0x1215ab60u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1215aeb0 (89 bytes, 21 insns) */
void f_1215aeb0(void) {
  FTRACE(0x1215aeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215aeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215aeb1 mov ebp, esp */
  EBP = (ESP);
  /* 1215aeb3 mov dword ptr [0x121807b0], 0 */
  w32((uint32_t)(0x121807b0), (0x0u));
  /* 1215aebd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215aec1 jne 0x1215aed5 */
  if (!C.zf) goto L_1215aed5;
  /* 1215aec3 mov dword ptr [0x121807b0], 1 */
  w32((uint32_t)(0x121807b0), (0x1u));
  /* 1215aecd call dword ptr [0x12183300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183300))), 0x1215aed3u);
  /* 1215aed3 jmp 0x1215af07 */
  goto L_1215af07;
L_1215aed5:;
  /* 1215aed5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215aed9 jne 0x1215aeed */
  if (!C.zf) goto L_1215aeed;
  /* 1215aedb mov dword ptr [0x121807b0], 1 */
  w32((uint32_t)(0x121807b0), (0x1u));
  /* 1215aee5 call dword ptr [0x12183310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183310))), 0x1215aeebu);
  /* 1215aeeb jmp 0x1215af07 */
  goto L_1215af07;
L_1215aeed:;
  /* 1215aeed cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215aef1 jne 0x1215af04 */
  if (!C.zf) goto L_1215af04;
  /* 1215aef3 mov dword ptr [0x121807b0], 1 */
  w32((uint32_t)(0x121807b0), (0x1u));
  /* 1215aefd mov eax, dword ptr [0x121807d0] */
  EAX = (r32((uint32_t)(0x121807d0)));
  /* 1215af02 jmp 0x1215af07 */
  goto L_1215af07;
L_1215af04:;
  /* 1215af04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1215af07:;
  /* 1215af07 pop ebp */
  EBP = (pop32());
  /* 1215af08 ret  */
  ESPCHK(0x1215aeb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af10 @ 0x1215af10 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1215af10(void) {
  FTRACE(0x1215af10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215af10 push ebp */
  push32((uint32_t)(EBP));
  /* 1215af11 mov ebp, esp */
  EBP = (ESP);
  /* 1215af13 push ecx */
  push32((uint32_t)(ECX));
  /* 1215af14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215af17 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215af1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215af1d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215af23 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1215af26 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215af2a ja 0x1215af5a */
  if ((!C.cf&&!C.zf)) goto L_1215af5a;
  /* 1215af2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215af2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1215af31 mov dl, byte ptr [eax + 0x1215af74] */
  DL = (r8((uint32_t)(EAX + 0x1215af74)));
  /* 1215af37 jmp dword ptr [edx*4 + 0x1215af60] */
  switch (EDX) {
    case 0: goto L_1215af3e;
    case 1: goto L_1215af45;
    case 2: goto L_1215af4c;
    case 3: goto L_1215af53;
    case 4: goto L_1215af5a;
    default: x86_unimpl("switch@0x1215af37 out of table"); return;
  }
L_1215af3e:;
  /* 1215af3e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1215af43 jmp 0x1215af5c */
  goto L_1215af5c;
L_1215af45:;
  /* 1215af45 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1215af4a jmp 0x1215af5c */
  goto L_1215af5c;
L_1215af4c:;
  /* 1215af4c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1215af51 jmp 0x1215af5c */
  goto L_1215af5c;
L_1215af53:;
  /* 1215af53 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1215af58 jmp 0x1215af5c */
  goto L_1215af5c;
L_1215af5a:;
  /* 1215af5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1215af5c:;
  /* 1215af5c mov esp, ebp */
  ESP = (EBP);
  /* 1215af5e pop ebp */
  EBP = (pop32());
  /* 1215af5f ret  */
  ESPCHK(0x1215af10u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1215af90 (116 bytes, 29 insns) */
void f_1215af90(void) {
  FTRACE(0x1215af90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215af90 push ebp */
  push32((uint32_t)(EBP));
  /* 1215af91 mov ebp, esp */
  EBP = (ESP);
  /* 1215af93 push ecx */
  push32((uint32_t)(ECX));
  /* 1215af94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1215af9b jmp 0x1215afa6 */
  goto L_1215afa6;
L_1215af9d:;
  /* 1215af9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215afa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215afa3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1215afa6:;
  /* 1215afa6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215afad jge 0x1215afbb */
  if ((C.sf==C.of)) goto L_1215afbb;
  /* 1215afaf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215afb2 mov byte ptr [ecx + 0x12181e40], 0 */
  w8((uint32_t)(ECX + 0x12181e40), (0x0u));
  /* 1215afb9 jmp 0x1215af9d */
  goto L_1215af9d;
L_1215afbb:;
  /* 1215afbb mov dword ptr [0x12181ca4], 0 */
  w32((uint32_t)(0x12181ca4), (0x0u));
  /* 1215afc5 mov dword ptr [0x12181d2c], 0 */
  w32((uint32_t)(0x12181d2c), (0x0u));
  /* 1215afcf mov dword ptr [0x12181f44], 0 */
  w32((uint32_t)(0x12181f44), (0x0u));
  /* 1215afd9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1215afe0 jmp 0x1215afeb */
  goto L_1215afeb;
L_1215afe2:;
  /* 1215afe2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215afe5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215afe8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1215afeb:;
  /* 1215afeb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215afef jge 0x1215b000 */
  if ((C.sf==C.of)) goto L_1215b000;
  /* 1215aff1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215aff4 mov word ptr [eax*2 + 0x12181d20], 0 */
  w16((uint32_t)(EAX*2 + 0x12181d20), (0x0u));
  /* 1215affe jmp 0x1215afe2 */
  goto L_1215afe2;
L_1215b000:;
  /* 1215b000 mov esp, ebp */
  ESP = (EBP);
  /* 1215b002 pop ebp */
  EBP = (pop32());
  /* 1215b003 ret  */
  ESPCHK(0x1215af90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b010 @ 0x1215b010 (770 bytes, 175 insns) */
void f_1215b010(void) {
  FTRACE(0x1215b010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215b010 push ebp */
  push32((uint32_t)(EBP));
  /* 1215b011 mov ebp, esp */
  EBP = (ESP);
  /* 1215b013 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215b019 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1215b01f push eax */
  push32((uint32_t)(EAX));
  /* 1215b020 mov ecx, dword ptr [0x12181ca4] */
  ECX = (r32((uint32_t)(0x12181ca4)));
  /* 1215b026 push ecx */
  push32((uint32_t)(ECX));
  /* 1215b027 call dword ptr [0x12183308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183308))), 0x1215b02du);
  /* 1215b02d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b030 jne 0x1215b249 */
  if (!C.zf) goto L_1215b249;
  /* 1215b036 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1215b040 jmp 0x1215b051 */
  goto L_1215b051;
L_1215b042:;
  /* 1215b042 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b048 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b04b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1215b051:;
  /* 1215b051 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b05b jae 0x1215b072 */
  if (!C.cf) goto L_1215b072;
  /* 1215b05d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b063 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1215b069 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1215b070 jmp 0x1215b042 */
  goto L_1215b042;
L_1215b072:;
  /* 1215b072 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1215b079 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1215b07f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1215b082 jmp 0x1215b08d */
  goto L_1215b08d;
L_1215b084:;
  /* 1215b084 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215b087 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b08a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1215b08d:;
  /* 1215b08d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215b090 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1215b092 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1215b094 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215b096 je 0x1215b0d8 */
  if (C.zf) goto L_1215b0d8;
  /* 1215b098 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215b09b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215b09d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1215b09f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1215b0a5 jmp 0x1215b0b6 */
  goto L_1215b0b6;
L_1215b0a7:;
  /* 1215b0a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b0ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b0b0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1215b0b6:;
  /* 1215b0b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215b0b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215b0bb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1215b0be cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b0c4 ja 0x1215b0d6 */
  if ((!C.cf&&!C.zf)) goto L_1215b0d6;
  /* 1215b0c6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b0cc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1215b0d4 jmp 0x1215b0a7 */
  goto L_1215b0a7;
L_1215b0d6:;
  /* 1215b0d6 jmp 0x1215b084 */
  goto L_1215b084;
L_1215b0d8:;
  /* 1215b0d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215b0da mov eax, dword ptr [0x12181f44] */
  EAX = (r32((uint32_t)(0x12181f44)));
  /* 1215b0df push eax */
  push32((uint32_t)(EAX));
  /* 1215b0e0 mov ecx, dword ptr [0x12181ca4] */
  ECX = (r32((uint32_t)(0x12181ca4)));
  /* 1215b0e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1215b0e7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1215b0ed push edx */
  push32((uint32_t)(EDX));
  /* 1215b0ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1215b0f3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1215b0f9 push eax */
  push32((uint32_t)(EAX));
  /* 1215b0fa push 1 */
  push32((uint32_t)(0x1u));
  /* 1215b0fc call 0x1215ccc0 */
  push32(0x1215b101u); f_1215ccc0();
  /* 1215b101 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b104 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215b106 mov ecx, dword ptr [0x12181ca4] */
  ECX = (r32((uint32_t)(0x12181ca4)));
  /* 1215b10c push ecx */
  push32((uint32_t)(ECX));
  /* 1215b10d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1215b112 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1215b118 push edx */
  push32((uint32_t)(EDX));
  /* 1215b119 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1215b11e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1215b124 push eax */
  push32((uint32_t)(EAX));
  /* 1215b125 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1215b12a mov ecx, dword ptr [0x12181f44] */
  ECX = (r32((uint32_t)(0x12181f44)));
  /* 1215b130 push ecx */
  push32((uint32_t)(ECX));
  /* 1215b131 call 0x1215ce80 */
  push32(0x1215b136u); f_1215ce80();
  /* 1215b136 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b139 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215b13b mov edx, dword ptr [0x12181ca4] */
  EDX = (r32((uint32_t)(0x12181ca4)));
  /* 1215b141 push edx */
  push32((uint32_t)(EDX));
  /* 1215b142 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1215b147 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1215b14d push eax */
  push32((uint32_t)(EAX));
  /* 1215b14e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1215b153 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1215b159 push ecx */
  push32((uint32_t)(ECX));
  /* 1215b15a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1215b15f mov edx, dword ptr [0x12181f44] */
  EDX = (r32((uint32_t)(0x12181f44)));
  /* 1215b165 push edx */
  push32((uint32_t)(EDX));
  /* 1215b166 call 0x1215ce80 */
  push32(0x1215b16bu); f_1215ce80();
  /* 1215b16b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b16e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1215b178 jmp 0x1215b189 */
  goto L_1215b189;
L_1215b17a:;
  /* 1215b17a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b180 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b183 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1215b189:;
  /* 1215b189 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b193 jae 0x1215b244 */
  if (!C.cf) goto L_1215b244;
  /* 1215b199 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b19f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1215b1a1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1215b1a9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1215b1ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215b1ae je 0x1215b1e6 */
  if (C.zf) goto L_1215b1e6;
  /* 1215b1b0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b1b6 mov cl, byte ptr [eax + 0x12181e41] */
  CL = (r8((uint32_t)(EAX + 0x12181e41)));
  /* 1215b1bc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1215b1bf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b1c5 mov byte ptr [edx + 0x12181e41], cl */
  w8((uint32_t)(EDX + 0x12181e41), (CL));
  /* 1215b1cb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b1d1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b1d7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1215b1de mov byte ptr [eax + 0x12181d40], dl */
  w8((uint32_t)(EAX + 0x12181d40), (DL));
  /* 1215b1e4 jmp 0x1215b23f */
  goto L_1215b23f;
L_1215b1e6:;
  /* 1215b1e6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b1ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215b1ee mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1215b1f6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1215b1f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215b1fb je 0x1215b232 */
  if (C.zf) goto L_1215b232;
  /* 1215b1fd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b203 mov al, byte ptr [edx + 0x12181e41] */
  AL = (r8((uint32_t)(EDX + 0x12181e41)));
  /* 1215b209 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1215b20b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b211 mov byte ptr [ecx + 0x12181e41], al */
  w8((uint32_t)(ECX + 0x12181e41), (AL));
  /* 1215b217 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b21d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b223 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1215b22a mov byte ptr [edx + 0x12181d40], cl */
  w8((uint32_t)(EDX + 0x12181d40), (CL));
  /* 1215b230 jmp 0x1215b23f */
  goto L_1215b23f;
L_1215b232:;
  /* 1215b232 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b238 mov byte ptr [edx + 0x12181d40], 0 */
  w8((uint32_t)(EDX + 0x12181d40), (0x0u));
L_1215b23f:;
  /* 1215b23f jmp 0x1215b17a */
  goto L_1215b17a;
L_1215b244:;
  /* 1215b244 jmp 0x1215b30e */
  goto L_1215b30e;
L_1215b249:;
  /* 1215b249 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1215b253 jmp 0x1215b264 */
  goto L_1215b264;
L_1215b255:;
  /* 1215b255 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b25b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b25e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1215b264:;
  /* 1215b264 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b26e jae 0x1215b30e */
  if (!C.cf) goto L_1215b30e;
  /* 1215b274 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b27b jb 0x1215b2b8 */
  if (C.cf) goto L_1215b2b8;
  /* 1215b27d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b284 ja 0x1215b2b8 */
  if ((!C.cf&&!C.zf)) goto L_1215b2b8;
  /* 1215b286 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b28c mov dl, byte ptr [ecx + 0x12181e41] */
  DL = (r8((uint32_t)(ECX + 0x12181e41)));
  /* 1215b292 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1215b295 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b29b mov byte ptr [eax + 0x12181e41], dl */
  w8((uint32_t)(EAX + 0x12181e41), (DL));
  /* 1215b2a1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b2a7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b2aa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b2b0 mov byte ptr [edx + 0x12181d40], cl */
  w8((uint32_t)(EDX + 0x12181d40), (CL));
  /* 1215b2b6 jmp 0x1215b309 */
  goto L_1215b309;
L_1215b2b8:;
  /* 1215b2b8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b2bf jb 0x1215b2fc */
  if (C.cf) goto L_1215b2fc;
  /* 1215b2c1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b2c8 ja 0x1215b2fc */
  if ((!C.cf&&!C.zf)) goto L_1215b2fc;
  /* 1215b2ca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b2d0 mov cl, byte ptr [eax + 0x12181e41] */
  CL = (r8((uint32_t)(EAX + 0x12181e41)));
  /* 1215b2d6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1215b2d9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b2df mov byte ptr [edx + 0x12181e41], cl */
  w8((uint32_t)(EDX + 0x12181e41), (CL));
  /* 1215b2e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b2eb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215b2ee mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b2f4 mov byte ptr [ecx + 0x12181d40], al */
  w8((uint32_t)(ECX + 0x12181d40), (AL));
  /* 1215b2fa jmp 0x1215b309 */
  goto L_1215b309;
L_1215b2fc:;
  /* 1215b2fc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1215b302 mov byte ptr [edx + 0x12181d40], 0 */
  w8((uint32_t)(EDX + 0x12181d40), (0x0u));
L_1215b309:;
  /* 1215b309 jmp 0x1215b255 */
  goto L_1215b255;
L_1215b30e:;
  /* 1215b30e mov esp, ebp */
  ESP = (EBP);
  /* 1215b310 pop ebp */
  EBP = (pop32());
  /* 1215b311 ret  */
  ESPCHK(0x1215b010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b320 @ 0x1215b320 (23 bytes, 9 insns) */
void f_1215b320(void) {
  FTRACE(0x1215b320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215b320 push ebp */
  push32((uint32_t)(EBP));
  /* 1215b321 mov ebp, esp */
  EBP = (ESP);
  /* 1215b323 cmp dword ptr [0x12181d2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12181d2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b32a je 0x1215b333 */
  if (C.zf) goto L_1215b333;
  /* 1215b32c mov eax, dword ptr [0x12181ca4] */
  EAX = (r32((uint32_t)(0x12181ca4)));
  /* 1215b331 jmp 0x1215b335 */
  goto L_1215b335;
L_1215b333:;
  /* 1215b333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1215b335:;
  /* 1215b335 pop ebp */
  EBP = (pop32());
  /* 1215b336 ret  */
  ESPCHK(0x1215b320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b340 @ 0x1215b340 (34 bytes, 10 insns) */
void f_1215b340(void) {
  FTRACE(0x1215b340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215b340 push ebp */
  push32((uint32_t)(EBP));
  /* 1215b341 mov ebp, esp */
  EBP = (ESP);
  /* 1215b343 cmp dword ptr [0x121820f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121820f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b34a jne 0x1215b360 */
  if (!C.zf) goto L_1215b360;
  /* 1215b34c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1215b34e call 0x1215ab60 */
  push32(0x1215b353u); f_1215ab60();
  /* 1215b353 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b356 mov dword ptr [0x121820f0], 1 */
  w32((uint32_t)(0x121820f0), (0x1u));
L_1215b360:;
  /* 1215b360 pop ebp */
  EBP = (pop32());
  /* 1215b361 ret  */
  ESPCHK(0x1215b340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b370 @ 0x1215b370 (664 bytes, 258 insns) [15 switch table(s)] */
void f_1215b370(void) {
  FTRACE(0x1215b370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215b370 push ebp */
  push32((uint32_t)(EBP));
  /* 1215b371 mov ebp, esp */
  EBP = (ESP);
  /* 1215b373 push edi */
  push32((uint32_t)(EDI));
  /* 1215b374 push esi */
  push32((uint32_t)(ESI));
  /* 1215b375 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1215b378 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215b37b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1215b37e mov eax, ecx */
  EAX = (ECX);
  /* 1215b380 mov edx, ecx */
  EDX = (ECX);
  /* 1215b382 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b384 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b386 jbe 0x1215b390 */
  if ((C.cf||C.zf)) goto L_1215b390;
  /* 1215b388 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b38a jb 0x1215b508 */
  if (C.cf) goto L_1215b508;
L_1215b390:;
  /* 1215b390 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1215b396 jne 0x1215b3ac */
  if (!C.zf) goto L_1215b3ac;
  /* 1215b398 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1215b39b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1215b39e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b3a1 jb 0x1215b3cc */
  if (C.cf) goto L_1215b3cc;
  /* 1215b3a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1215b3a5 jmp dword ptr [edx*4 + 0x1215b4b8] */
  switch (EDX) {
    case 0: goto L_1215b4c8;
    case 1: goto L_1215b4d0;
    case 2: goto L_1215b4dc;
    case 3: goto L_1215b4f0;
    default: x86_unimpl("switch@0x1215b3a5 out of table"); return;
  }
L_1215b3ac:;
  /* 1215b3ac mov eax, edi */
  EAX = (EDI);
  /* 1215b3ae mov edx, 3 */
  EDX = (0x3u);
  /* 1215b3b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215b3b6 jb 0x1215b3c4 */
  if (C.cf) goto L_1215b3c4;
  /* 1215b3b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1215b3bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b3bd jmp dword ptr [eax*4 + 0x1215b3d0] */
  switch (EAX) {
    case 1: goto L_1215b3e0;
    case 2: goto L_1215b40c;
    case 3: goto L_1215b430;
    default: x86_unimpl("switch@0x1215b3bd out of table"); return;
  }
L_1215b3c4:;
  /* 1215b3c4 jmp dword ptr [ecx*4 + 0x1215b4c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1215b4c8)))); return;
  /* 1215b3cb nop  */
  /* nop */
L_1215b3cc:;
  /* 1215b3cc jmp dword ptr [ecx*4 + 0x1215b44c] */
  switch (ECX) {
    case 0: goto L_1215b4af;
    case 1: goto L_1215b49c;
    case 2: goto L_1215b494;
    case 3: goto L_1215b48c;
    case 4: goto L_1215b484;
    case 5: goto L_1215b47c;
    case 6: goto L_1215b474;
    case 7: goto L_1215b46c;
    default: x86_unimpl("switch@0x1215b3cc out of table"); return;
  }
  /* 1215b3d3 nop  */
  /* nop */
L_1215b3e0:;
  /* 1215b3e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1215b3e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1215b3e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1215b3e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1215b3e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1215b3ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1215b3ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1215b3f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1215b3f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b3f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b3fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b3fe jb 0x1215b3cc */
  if (C.cf) goto L_1215b3cc;
  /* 1215b400 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1215b402 jmp dword ptr [edx*4 + 0x1215b4b8] */
  switch (EDX) {
    case 0: goto L_1215b4c8;
    case 1: goto L_1215b4d0;
    case 2: goto L_1215b4dc;
    case 3: goto L_1215b4f0;
    default: x86_unimpl("switch@0x1215b402 out of table"); return;
  }
  /* 1215b409 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1215b40c:;
  /* 1215b40c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1215b40e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1215b410 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1215b412 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1215b415 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1215b418 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1215b41b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b41e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b421 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b424 jb 0x1215b3cc */
  if (C.cf) goto L_1215b3cc;
  /* 1215b426 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1215b428 jmp dword ptr [edx*4 + 0x1215b4b8] */
  switch (EDX) {
    case 0: goto L_1215b4c8;
    case 1: goto L_1215b4d0;
    case 2: goto L_1215b4dc;
    case 3: goto L_1215b4f0;
    default: x86_unimpl("switch@0x1215b428 out of table"); return;
  }
  /* 1215b42f nop  */
  /* nop */
L_1215b430:;
  /* 1215b430 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1215b432 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1215b434 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1215b436 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1215b437 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1215b43a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1215b43b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b43e jb 0x1215b3cc */
  if (C.cf) goto L_1215b3cc;
  /* 1215b440 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1215b442 jmp dword ptr [edx*4 + 0x1215b4b8] */
  switch (EDX) {
    case 0: goto L_1215b4c8;
    case 1: goto L_1215b4d0;
    case 2: goto L_1215b4dc;
    case 3: goto L_1215b4f0;
    default: x86_unimpl("switch@0x1215b442 out of table"); return;
  }
  /* 1215b449 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1215b46c:;
  /* 1215b46c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1215b470 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1215b474:;
  /* 1215b474 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1215b478 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1215b47c:;
  /* 1215b47c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1215b480 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1215b484:;
  /* 1215b484 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1215b488 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1215b48c:;
  /* 1215b48c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1215b490 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1215b494:;
  /* 1215b494 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1215b498 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1215b49c:;
  /* 1215b49c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1215b4a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1215b4a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1215b4ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b4ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1215b4af:;
  /* 1215b4af jmp dword ptr [edx*4 + 0x1215b4b8] */
  switch (EDX) {
    case 0: goto L_1215b4c8;
    case 1: goto L_1215b4d0;
    case 2: goto L_1215b4dc;
    case 3: goto L_1215b4f0;
    default: x86_unimpl("switch@0x1215b4af out of table"); return;
  }
  /* 1215b4b6 mov edi, edi */
  EDI = (EDI);
L_1215b4c8:;
  /* 1215b4c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215b4cb pop esi */
  ESI = (pop32());
  /* 1215b4cc pop edi */
  EDI = (pop32());
  /* 1215b4cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1215b4ce ret  */
  ESPCHK(0x1215b370u, _esp0);
  ESP += 4; return;
  /* 1215b4cf nop  */
  /* nop */
L_1215b4d0:;
  /* 1215b4d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1215b4d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1215b4d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215b4d7 pop esi */
  ESI = (pop32());
  /* 1215b4d8 pop edi */
  EDI = (pop32());
  /* 1215b4d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1215b4da ret  */
  ESPCHK(0x1215b370u, _esp0);
  ESP += 4; return;
  /* 1215b4db nop  */
  /* nop */
L_1215b4dc:;
  /* 1215b4dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1215b4de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1215b4e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1215b4e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1215b4e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215b4e9 pop esi */
  ESI = (pop32());
  /* 1215b4ea pop edi */
  EDI = (pop32());
  /* 1215b4eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1215b4ec ret  */
  ESPCHK(0x1215b370u, _esp0);
  ESP += 4; return;
  /* 1215b4ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1215b4f0:;
  /* 1215b4f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1215b4f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1215b4f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1215b4f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1215b4fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1215b4fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1215b500 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215b503 pop esi */
  ESI = (pop32());
  /* 1215b504 pop edi */
  EDI = (pop32());
  /* 1215b505 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1215b506 ret  */
  ESPCHK(0x1215b370u, _esp0);
  ESP += 4; return;
  /* 1215b507 nop  */
  /* nop */
L_1215b508:;
  /* 1215b508 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1215b50c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1215b510 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1215b516 jne 0x1215b53c */
  if (!C.zf) goto L_1215b53c;
  /* 1215b518 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1215b51b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1215b51e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b521 jb 0x1215b530 */
  if (C.cf) goto L_1215b530;
  /* 1215b523 std  */
  C.df=1;
  /* 1215b524 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1215b526 cld  */
  C.df=0;
  /* 1215b527 jmp dword ptr [edx*4 + 0x1215b650] */
  switch (EDX) {
    case 0: goto L_1215b660;
    case 1: goto L_1215b668;
    case 2: goto L_1215b678;
    case 3: goto L_1215b68c;
    default: x86_unimpl("switch@0x1215b527 out of table"); return;
  }
  /* 1215b52e mov edi, edi */
  EDI = (EDI);
L_1215b530:;
  /* 1215b530 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1215b532 jmp dword ptr [ecx*4 + 0x1215b600] */
  switch (ECX) {
    case 0: goto L_1215b647;
    default: x86_unimpl("switch@0x1215b532 out of table"); return;
  }
  /* 1215b539 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1215b53c:;
  /* 1215b53c mov eax, edi */
  EAX = (EDI);
  /* 1215b53e mov edx, 3 */
  EDX = (0x3u);
  /* 1215b543 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b546 jb 0x1215b554 */
  if (C.cf) goto L_1215b554;
  /* 1215b548 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1215b54b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215b54d jmp dword ptr [eax*4 + 0x1215b558] */
  switch (EAX) {
    case 1: goto L_1215b568;
    case 2: goto L_1215b588;
    case 3: goto L_1215b5b0;
    default: x86_unimpl("switch@0x1215b54d out of table"); return;
  }
L_1215b554:;
  /* 1215b554 jmp dword ptr [ecx*4 + 0x1215b650] */
  switch (ECX) {
    case 0: goto L_1215b660;
    case 1: goto L_1215b668;
    case 2: goto L_1215b678;
    case 3: goto L_1215b68c;
    default: x86_unimpl("switch@0x1215b554 out of table"); return;
  }
  /* 1215b55b nop  */
  /* nop */
L_1215b568:;
  /* 1215b568 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1215b56b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1215b56d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1215b570 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1215b571 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1215b574 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1215b575 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b578 jb 0x1215b530 */
  if (C.cf) goto L_1215b530;
  /* 1215b57a std  */
  C.df=1;
  /* 1215b57b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1215b57d cld  */
  C.df=0;
  /* 1215b57e jmp dword ptr [edx*4 + 0x1215b650] */
  switch (EDX) {
    case 0: goto L_1215b660;
    case 1: goto L_1215b668;
    case 2: goto L_1215b678;
    case 3: goto L_1215b68c;
    default: x86_unimpl("switch@0x1215b57e out of table"); return;
  }
  /* 1215b585 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1215b588:;
  /* 1215b588 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1215b58b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1215b58d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1215b590 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1215b593 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1215b596 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1215b599 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215b59c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215b59f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b5a2 jb 0x1215b530 */
  if (C.cf) goto L_1215b530;
  /* 1215b5a4 std  */
  C.df=1;
  /* 1215b5a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1215b5a7 cld  */
  C.df=0;
  /* 1215b5a8 jmp dword ptr [edx*4 + 0x1215b650] */
  switch (EDX) {
    case 0: goto L_1215b660;
    case 1: goto L_1215b668;
    case 2: goto L_1215b678;
    case 3: goto L_1215b68c;
    default: x86_unimpl("switch@0x1215b5a8 out of table"); return;
  }
  /* 1215b5af nop  */
  /* nop */
L_1215b5b0:;
  /* 1215b5b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1215b5b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1215b5b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1215b5b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1215b5bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1215b5be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1215b5c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1215b5c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1215b5c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215b5ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215b5cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b5d0 jb 0x1215b530 */
  if (C.cf) goto L_1215b530;
  /* 1215b5d6 std  */
  C.df=1;
  /* 1215b5d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1215b5d9 cld  */
  C.df=0;
  /* 1215b5da jmp dword ptr [edx*4 + 0x1215b650] */
  switch (EDX) {
    case 0: goto L_1215b660;
    case 1: goto L_1215b668;
    case 2: goto L_1215b678;
    case 3: goto L_1215b68c;
    default: x86_unimpl("switch@0x1215b5da out of table"); return;
  }
  /* 1215b5e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1215b5e4 add al, 0xb6 */
  { uint32_t _a=(AL),_b=(0xb6u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1215b5e6 adc eax, 0x15b60c12 */
  { uint32_t _a=(EAX),_b=(0x15b60c12u),_r=_a+_b+C.cf; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b5eb adc dl, byte ptr [esi + esi*4] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ESI + ESI*4))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1215b5ee adc eax, 0x15b61c12 */
  { uint32_t _a=(EAX),_b=(0x15b61c12u),_r=_a+_b+C.cf; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b5f3 adc ah, byte ptr [esi + esi*4] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ESI + ESI*4))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1215b5f6 adc eax, 0x15b62c12 */
  { uint32_t _a=(EAX),_b=(0x15b62c12u),_r=_a+_b+C.cf; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b5fb adc dh, byte ptr [esi + esi*4] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(ESI + ESI*4))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1215b604 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1215b608 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1215b60c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1215b610 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1215b614 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1215b618 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1215b61c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1215b620 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1215b624 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1215b628 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1215b62c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1215b630 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1215b634 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1215b638 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1215b63c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1215b643 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b645 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1215b647:;
  /* 1215b647 jmp dword ptr [edx*4 + 0x1215b650] */
  switch (EDX) {
    case 0: goto L_1215b660;
    case 1: goto L_1215b668;
    case 2: goto L_1215b678;
    case 3: goto L_1215b68c;
    default: x86_unimpl("switch@0x1215b647 out of table"); return;
  }
  /* 1215b64e mov edi, edi */
  EDI = (EDI);
L_1215b660:;
  /* 1215b660 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215b663 pop esi */
  ESI = (pop32());
  /* 1215b664 pop edi */
  EDI = (pop32());
  /* 1215b665 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1215b666 ret  */
  ESPCHK(0x1215b370u, _esp0);
  ESP += 4; return;
  /* 1215b667 nop  */
  /* nop */
L_1215b668:;
  /* 1215b668 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1215b66b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1215b66e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215b671 pop esi */
  ESI = (pop32());
  /* 1215b672 pop edi */
  EDI = (pop32());
  /* 1215b673 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1215b674 ret  */
  ESPCHK(0x1215b370u, _esp0);
  ESP += 4; return;
  /* 1215b675 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1215b678:;
  /* 1215b678 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1215b67b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1215b67e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1215b681 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1215b684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215b687 pop esi */
  ESI = (pop32());
  /* 1215b688 pop edi */
  EDI = (pop32());
  /* 1215b689 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1215b68a ret  */
  ESPCHK(0x1215b370u, _esp0);
  ESP += 4; return;
  /* 1215b68b nop  */
  /* nop */
L_1215b68c:;
  /* 1215b68c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1215b68f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1215b692 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1215b695 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1215b698 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1215b69b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1215b69e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215b6a1 pop esi */
  ESI = (pop32());
  /* 1215b6a2 pop edi */
  EDI = (pop32());
  /* 1215b6a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1215b6a4 ret  */
  ESPCHK(0x1215b370u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1215b6b0 (104 bytes, 43 insns) */
void f_1215b6b0(void) {
  FTRACE(0x1215b6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215b6b0 push ebx */
  push32((uint32_t)(EBX));
  /* 1215b6b1 push esi */
  push32((uint32_t)(ESI));
  /* 1215b6b2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1215b6b6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215b6b8 jne 0x1215b6d2 */
  if (!C.zf) goto L_1215b6d2;
  /* 1215b6ba mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1215b6be mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1215b6c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1215b6c4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1215b6c6 mov ebx, eax */
  EBX = (EAX);
  /* 1215b6c8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1215b6cc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1215b6ce mov edx, ebx */
  EDX = (EBX);
  /* 1215b6d0 jmp 0x1215b713 */
  goto L_1215b713;
L_1215b6d2:;
  /* 1215b6d2 mov ecx, eax */
  ECX = (EAX);
  /* 1215b6d4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1215b6d8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1215b6dc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1215b6e0:;
  /* 1215b6e0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1215b6e2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1215b6e4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1215b6e6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1215b6e8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215b6ea jne 0x1215b6e0 */
  if (!C.zf) goto L_1215b6e0;
  /* 1215b6ec div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1215b6ee mov esi, eax */
  ESI = (EAX);
  /* 1215b6f0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1215b6f4 mov ecx, eax */
  ECX = (EAX);
  /* 1215b6f6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1215b6fa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1215b6fc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b6fe jb 0x1215b70e */
  if (C.cf) goto L_1215b70e;
  /* 1215b700 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b704 ja 0x1215b70e */
  if ((!C.cf&&!C.zf)) goto L_1215b70e;
  /* 1215b706 jb 0x1215b70f */
  if (C.cf) goto L_1215b70f;
  /* 1215b708 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b70c jbe 0x1215b70f */
  if ((C.cf||C.zf)) goto L_1215b70f;
L_1215b70e:;
  /* 1215b70e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1215b70f:;
  /* 1215b70f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1215b711 mov eax, esi */
  EAX = (ESI);
L_1215b713:;
  /* 1215b713 pop esi */
  ESI = (pop32());
  /* 1215b714 pop ebx */
  EBX = (pop32());
  /* 1215b715 ret 0x10 */
  ESPCHK(0x1215b6b0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1215b720 (117 bytes, 44 insns) */
void f_1215b720(void) {
  FTRACE(0x1215b720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215b720 push ebx */
  push32((uint32_t)(EBX));
  /* 1215b721 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1215b725 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215b727 jne 0x1215b741 */
  if (!C.zf) goto L_1215b741;
  /* 1215b729 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1215b72d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1215b731 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1215b733 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1215b735 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1215b739 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1215b73b mov eax, edx */
  EAX = (EDX);
  /* 1215b73d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1215b73f jmp 0x1215b791 */
  goto L_1215b791;
L_1215b741:;
  /* 1215b741 mov ecx, eax */
  ECX = (EAX);
  /* 1215b743 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1215b747 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1215b74b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1215b74f:;
  /* 1215b74f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1215b751 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1215b753 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1215b755 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1215b757 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215b759 jne 0x1215b74f */
  if (!C.zf) goto L_1215b74f;
  /* 1215b75b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1215b75d mov ecx, eax */
  ECX = (EAX);
  /* 1215b75f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1215b763 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1215b764 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1215b768 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b76a jb 0x1215b77a */
  if (C.cf) goto L_1215b77a;
  /* 1215b76c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b770 ja 0x1215b77a */
  if ((!C.cf&&!C.zf)) goto L_1215b77a;
  /* 1215b772 jb 0x1215b782 */
  if (C.cf) goto L_1215b782;
  /* 1215b774 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b778 jbe 0x1215b782 */
  if ((C.cf||C.zf)) goto L_1215b782;
L_1215b77a:;
  /* 1215b77a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215b77e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1215b782:;
  /* 1215b782 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215b786 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215b78a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1215b78c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1215b78e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1215b791:;
  /* 1215b791 pop ebx */
  EBX = (pop32());
  /* 1215b792 ret 0x10 */
  ESPCHK(0x1215b720u, _esp0);
  ESP += 20; return;
}

/* FUN_1000b7a0 @ 0x1215b7a0 (628 bytes, 214 insns) */
void f_1215b7a0(void) {
  FTRACE(0x1215b7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215b7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215b7a1 mov ebp, esp */
  EBP = (ESP);
  /* 1215b7a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215b7a6 push ebx */
  push32((uint32_t)(EBX));
  /* 1215b7a7 push esi */
  push32((uint32_t)(ESI));
  /* 1215b7a8 push edi */
  push32((uint32_t)(EDI));
L_1215b7a9:;
  /* 1215b7a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b7ad jne 0x1215b7cd */
  if (!C.zf) goto L_1215b7cd;
  /* 1215b7af push 0x1217c044 */
  push32((uint32_t)(0x1217c044u));
  /* 1215b7b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215b7b6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1215b7b8 push 0x1217c038 */
  push32((uint32_t)(0x1217c038u));
  /* 1215b7bd push 2 */
  push32((uint32_t)(0x2u));
  /* 1215b7bf call 0x12153b50 */
  push32(0x1215b7c4u); f_12153b50();
  /* 1215b7c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b7c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b7ca jne 0x1215b7cd */
  if (!C.zf) goto L_1215b7cd;
  /* 1215b7cc int3  */
  x86_unimpl("int3 @ 0x1215b7cc");
L_1215b7cd:;
  /* 1215b7cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215b7cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215b7d1 jne 0x1215b7a9 */
  if (!C.zf) goto L_1215b7a9;
  /* 1215b7d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215b7d6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1215b7d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b7dc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1215b7df mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1215b7e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b7e5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1215b7e8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1215b7ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215b7f0 je 0x1215b7ff */
  if (C.zf) goto L_1215b7ff;
  /* 1215b7f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b7f5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1215b7f8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1215b7fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215b7fd je 0x1215b815 */
  if (C.zf) goto L_1215b815;
L_1215b7ff:;
  /* 1215b7ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b802 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1215b805 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1215b807 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b80a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1215b80d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215b810 jmp 0x1215ba0d */
  goto L_1215ba0d;
L_1215b815:;
  /* 1215b815 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b818 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1215b81b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1215b81e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215b820 je 0x1215b86c */
  if (C.zf) goto L_1215b86c;
  /* 1215b822 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b825 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1215b82c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b82f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1215b832 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1215b835 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215b837 je 0x1215b855 */
  if (C.zf) goto L_1215b855;
  /* 1215b839 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b83c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b83f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1215b842 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1215b844 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b847 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1215b84a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1215b84d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b850 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1215b853 jmp 0x1215b86c */
  goto L_1215b86c;
L_1215b855:;
  /* 1215b855 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b858 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1215b85b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1215b85e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b861 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1215b864 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215b867 jmp 0x1215ba0d */
  goto L_1215ba0d;
L_1215b86c:;
  /* 1215b86c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b86f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1215b872 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1215b875 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b878 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1215b87b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b87e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1215b881 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1215b884 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b887 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1215b88a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b88d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1215b894 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1215b89b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215b89e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1215b8a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b8a4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1215b8a7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1215b8ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215b8af jne 0x1215b8df */
  if (!C.zf) goto L_1215b8df;
  /* 1215b8b1 cmp dword ptr [ebp - 8], 0x1217f140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1217f140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b8b8 je 0x1215b8c3 */
  if (C.zf) goto L_1215b8c3;
  /* 1215b8ba cmp dword ptr [ebp - 8], 0x1217f160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1217f160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b8c1 jne 0x1215b8d3 */
  if (!C.zf) goto L_1215b8d3;
L_1215b8c3:;
  /* 1215b8c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215b8c6 push edx */
  push32((uint32_t)(EDX));
  /* 1215b8c7 call 0x1215d710 */
  push32(0x1215b8ccu); f_1215d710();
  /* 1215b8cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b8cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215b8d1 jne 0x1215b8df */
  if (!C.zf) goto L_1215b8df;
L_1215b8d3:;
  /* 1215b8d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b8d6 push eax */
  push32((uint32_t)(EAX));
  /* 1215b8d7 call 0x1215d640 */
  push32(0x1215b8dcu); f_1215d640();
  /* 1215b8dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215b8df:;
  /* 1215b8df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b8e2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1215b8e5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1215b8eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215b8ed je 0x1215b9cb */
  if (C.zf) goto L_1215b9cb;
L_1215b8f3:;
  /* 1215b8f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b8f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b8f9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1215b8fb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215b8fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215b900 jge 0x1215b923 */
  if ((C.sf==C.of)) goto L_1215b923;
  /* 1215b902 push 0x1217bff8 */
  push32((uint32_t)(0x1217bff8u));
  /* 1215b907 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215b909 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1215b90e push 0x1217c038 */
  push32((uint32_t)(0x1217c038u));
  /* 1215b913 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215b915 call 0x12153b50 */
  push32(0x1215b91au); f_12153b50();
  /* 1215b91a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b91d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b920 jne 0x1215b923 */
  if (!C.zf) goto L_1215b923;
  /* 1215b922 int3  */
  x86_unimpl("int3 @ 0x1215b922");
L_1215b923:;
  /* 1215b923 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215b925 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215b927 jne 0x1215b8f3 */
  if (!C.zf) goto L_1215b8f3;
  /* 1215b929 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b92c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b92f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1215b931 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215b934 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215b937 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b93a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1215b93d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b940 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b943 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1215b945 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b948 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1215b94b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215b94e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b951 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1215b954 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b958 jle 0x1215b976 */
  if ((C.zf||C.sf!=C.of)) goto L_1215b976;
  /* 1215b95a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215b95d push ecx */
  push32((uint32_t)(ECX));
  /* 1215b95e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b961 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1215b964 push eax */
  push32((uint32_t)(EAX));
  /* 1215b965 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215b968 push ecx */
  push32((uint32_t)(ECX));
  /* 1215b969 call 0x1215d330 */
  push32(0x1215b96eu); f_1215d330();
  /* 1215b96e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b971 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1215b974 jmp 0x1215b9be */
  goto L_1215b9be;
L_1215b976:;
  /* 1215b976 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b97a je 0x1215b999 */
  if (C.zf) goto L_1215b999;
  /* 1215b97c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215b97f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1215b982 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215b985 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1215b988 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215b98b mov ecx, dword ptr [edx*4 + 0x12181fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12181fa0)));
  /* 1215b992 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b994 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1215b997 jmp 0x1215b9a0 */
  goto L_1215b9a0;
L_1215b999:;
  /* 1215b999 mov dword ptr [ebp - 0x14], 0x1217ea60 */
  w32((uint32_t)(EBP + -0x14), (0x1217ea60u));
L_1215b9a0:;
  /* 1215b9a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215b9a3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1215b9a7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1215b9aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215b9ac je 0x1215b9be */
  if (C.zf) goto L_1215b9be;
  /* 1215b9ae push 2 */
  push32((uint32_t)(0x2u));
  /* 1215b9b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215b9b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215b9b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1215b9b6 call 0x1215d1e0 */
  push32(0x1215b9bbu); f_1215d1e0();
  /* 1215b9bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215b9be:;
  /* 1215b9be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b9c1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1215b9c4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1215b9c7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1215b9c9 jmp 0x1215b9e9 */
  goto L_1215b9e9;
L_1215b9cb:;
  /* 1215b9cb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1215b9d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215b9d5 push edx */
  push32((uint32_t)(EDX));
  /* 1215b9d6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1215b9d9 push eax */
  push32((uint32_t)(EAX));
  /* 1215b9da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215b9dd push ecx */
  push32((uint32_t)(ECX));
  /* 1215b9de call 0x1215d330 */
  push32(0x1215b9e3u); f_1215d330();
  /* 1215b9e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215b9e6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1215b9e9:;
  /* 1215b9e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215b9ec cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215b9ef je 0x1215ba05 */
  if (C.zf) goto L_1215ba05;
  /* 1215b9f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b9f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1215b9f7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1215b9fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215b9fd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1215ba00 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215ba03 jmp 0x1215ba0d */
  goto L_1215ba0d;
L_1215ba05:;
  /* 1215ba05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ba08 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1215ba0d:;
  /* 1215ba0d pop edi */
  EDI = (pop32());
  /* 1215ba0e pop esi */
  ESI = (pop32());
  /* 1215ba0f pop ebx */
  EBX = (pop32());
  /* 1215ba10 mov esp, ebp */
  ESP = (EBP);
  /* 1215ba12 pop ebp */
  EBP = (pop32());
  /* 1215ba13 ret  */
  ESPCHK(0x1215b7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba20 @ 0x1215ba20 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1215ba20(void) {
  FTRACE(0x1215ba20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215ba20 push ebp */
  push32((uint32_t)(EBP));
  /* 1215ba21 mov ebp, esp */
  EBP = (ESP);
  /* 1215ba23 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215ba29 push ebx */
  push32((uint32_t)(EBX));
  /* 1215ba2a push esi */
  push32((uint32_t)(ESI));
  /* 1215ba2b push edi */
  push32((uint32_t)(EDI));
  /* 1215ba2c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1215ba33 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1215ba3d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1215ba44:;
  /* 1215ba44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215ba47 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1215ba49 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1215ba4c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1215ba50 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215ba53 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ba56 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1215ba59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215ba5b je 0x1215c637 */
  if (C.zf) goto L_1215c637;
  /* 1215ba61 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ba68 jl 0x1215c637 */
  if ((C.sf!=C.of)) goto L_1215c637;
  /* 1215ba6e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1215ba72 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ba75 jl 0x1215ba96 */
  if ((C.sf!=C.of)) goto L_1215ba96;
  /* 1215ba77 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1215ba7b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ba7e jg 0x1215ba96 */
  if ((!C.zf&&C.sf==C.of)) goto L_1215ba96;
  /* 1215ba80 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1215ba84 movsx ecx, byte ptr [eax + 0x1217c030] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1217c030))));
  /* 1215ba8b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1215ba8e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1215ba94 jmp 0x1215baa0 */
  goto L_1215baa0;
L_1215ba96:;
  /* 1215ba96 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1215baa0:;
  /* 1215baa0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1215baa6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1215baa9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215baac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215baaf movsx edx, byte ptr [ecx + eax*8 + 0x1217c050] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1217c050))));
  /* 1215bab7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1215baba mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1215babd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215bac0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1215bac6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215bacd ja 0x1215c632 */
  if ((!C.cf&&!C.zf)) goto L_1215c632;
  /* 1215bad3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1215bad9 jmp dword ptr [ecx*4 + 0x1215c644] */
  switch (ECX) {
    case 0: goto L_1215bae0;
    case 1: goto L_1215bb7a;
    case 2: goto L_1215bbbc;
    case 3: goto L_1215bc2b;
    case 4: goto L_1215bc83;
    case 5: goto L_1215bc92;
    case 6: goto L_1215bcde;
    case 7: goto L_1215bd71;
    case 8: goto L_1215bc08;
    case 9: goto L_1215bc13;
    case 10: goto L_1215bbfe;
    case 11: goto L_1215bbf3;
    case 12: goto L_1215bc1e;
    case 13: goto L_1215bc26;
    default: x86_unimpl("switch@0x1215bad9 out of table"); return;
  }
L_1215bae0:;
  /* 1215bae0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1215bae7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1215baea and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1215baf0 mov eax, dword ptr [0x1217ec98] */
  EAX = (r32((uint32_t)(0x1217ec98)));
  /* 1215baf5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215baf7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1215bafb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1215bb01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215bb03 je 0x1215bb5d */
  if (C.zf) goto L_1215bb5d;
  /* 1215bb05 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1215bb0b push edx */
  push32((uint32_t)(EDX));
  /* 1215bb0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215bb0f push eax */
  push32((uint32_t)(EAX));
  /* 1215bb10 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1215bb14 push ecx */
  push32((uint32_t)(ECX));
  /* 1215bb15 call 0x1215c750 */
  push32(0x1215bb1au); f_1215c750();
  /* 1215bb1a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215bb1d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215bb20 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1215bb22 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1215bb25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215bb28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215bb2b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1215bb2e:;
  /* 1215bb2e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1215bb32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215bb34 jne 0x1215bb57 */
  if (!C.zf) goto L_1215bb57;
  /* 1215bb36 push 0x1217c0d0 */
  push32((uint32_t)(0x1217c0d0u));
  /* 1215bb3b push 0 */
  push32((uint32_t)(0x0u));
  /* 1215bb3d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1215bb42 push 0x1217c0c4 */
  push32((uint32_t)(0x1217c0c4u));
  /* 1215bb47 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215bb49 call 0x12153b50 */
  push32(0x1215bb4eu); f_12153b50();
  /* 1215bb4e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215bb51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215bb54 jne 0x1215bb57 */
  if (!C.zf) goto L_1215bb57;
  /* 1215bb56 int3  */
  x86_unimpl("int3 @ 0x1215bb56");
L_1215bb57:;
  /* 1215bb57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215bb59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215bb5b jne 0x1215bb2e */
  if (!C.zf) goto L_1215bb2e;
L_1215bb5d:;
  /* 1215bb5d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1215bb63 push ecx */
  push32((uint32_t)(ECX));
  /* 1215bb64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215bb67 push edx */
  push32((uint32_t)(EDX));
  /* 1215bb68 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1215bb6c push eax */
  push32((uint32_t)(EAX));
  /* 1215bb6d call 0x1215c750 */
  push32(0x1215bb72u); f_1215c750();
  /* 1215bb72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215bb75 jmp 0x1215c632 */
  goto L_1215c632;
L_1215bb7a:;
  /* 1215bb7a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1215bb81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215bb84 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1215bb8a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1215bb90 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1215bb96 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1215bb9c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1215bb9f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1215bba6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1215bbb0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1215bbb7 jmp 0x1215c632 */
  goto L_1215c632;
L_1215bbbc:;
  /* 1215bbbc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1215bbc0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1215bbc6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1215bbcc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215bbcf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1215bbd5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215bbdc ja 0x1215bc26 */
  if ((!C.cf&&!C.zf)) goto L_1215bc26;
  /* 1215bbde mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1215bbe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215bbe6 mov al, byte ptr [ecx + 0x1215c67c] */
  AL = (r8((uint32_t)(ECX + 0x1215c67c)));
  /* 1215bbec jmp dword ptr [eax*4 + 0x1215c664] */
  switch (EAX) {
    case 0: goto L_1215bc08;
    case 1: goto L_1215bc13;
    case 2: goto L_1215bbfe;
    case 3: goto L_1215bbf3;
    case 4: goto L_1215bc1e;
    case 5: goto L_1215bc26;
    default: x86_unimpl("switch@0x1215bbec out of table"); return;
  }
L_1215bbf3:;
  /* 1215bbf3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215bbf6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1215bbf9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1215bbfc jmp 0x1215bc26 */
  goto L_1215bc26;
L_1215bbfe:;
  /* 1215bbfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215bc01 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1215bc03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215bc06 jmp 0x1215bc26 */
  goto L_1215bc26;
L_1215bc08:;
  /* 1215bc08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215bc0b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1215bc0e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1215bc11 jmp 0x1215bc26 */
  goto L_1215bc26;
L_1215bc13:;
  /* 1215bc13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215bc16 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1215bc19 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1215bc1c jmp 0x1215bc26 */
  goto L_1215bc26;
L_1215bc1e:;
  /* 1215bc1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215bc21 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1215bc23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1215bc26:;
  /* 1215bc26 jmp 0x1215c632 */
  goto L_1215c632;
L_1215bc2b:;
  /* 1215bc2b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1215bc2f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215bc32 jne 0x1215bc67 */
  if (!C.zf) goto L_1215bc67;
  /* 1215bc34 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1215bc37 push edx */
  push32((uint32_t)(EDX));
  /* 1215bc38 call 0x1215c860 */
  push32(0x1215bc3du); f_1215c860();
  /* 1215bc3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215bc40 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1215bc46 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215bc4d jge 0x1215bc65 */
  if ((C.sf==C.of)) goto L_1215bc65;
  /* 1215bc4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215bc52 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1215bc54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215bc57 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1215bc5d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1215bc5f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1215bc65:;
  /* 1215bc65 jmp 0x1215bc7e */
  goto L_1215bc7e;
L_1215bc67:;
  /* 1215bc67 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1215bc6d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215bc70 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1215bc74 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1215bc78 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1215bc7e:;
  /* 1215bc7e jmp 0x1215c632 */
  goto L_1215c632;
L_1215bc83:;
  /* 1215bc83 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1215bc8d jmp 0x1215c632 */
  goto L_1215c632;
L_1215bc92:;
  /* 1215bc92 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1215bc96 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215bc99 jne 0x1215bcc2 */
  if (!C.zf) goto L_1215bcc2;
  /* 1215bc9b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1215bc9e push eax */
  push32((uint32_t)(EAX));
  /* 1215bc9f call 0x1215c860 */
  push32(0x1215bca4u); f_1215c860();
  /* 1215bca4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215bca7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1215bcad cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215bcb4 jge 0x1215bcc0 */
  if ((C.sf==C.of)) goto L_1215bcc0;
  /* 1215bcb6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1215bcc0:;
  /* 1215bcc0 jmp 0x1215bcd9 */
  goto L_1215bcd9;
L_1215bcc2:;
  /* 1215bcc2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1215bcc8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215bccb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1215bccf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1215bcd3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1215bcd9:;
  /* 1215bcd9 jmp 0x1215c632 */
  goto L_1215c632;
L_1215bcde:;
  /* 1215bcde movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1215bce2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1215bce8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1215bcee sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215bcf1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1215bcf7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215bcfe ja 0x1215bd6c */
  if ((!C.cf&&!C.zf)) goto L_1215bd6c;
  /* 1215bd00 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1215bd06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215bd08 mov al, byte ptr [ecx + 0x1215c6a1] */
  AL = (r8((uint32_t)(ECX + 0x1215c6a1)));
  /* 1215bd0e jmp dword ptr [eax*4 + 0x1215c68d] */
  switch (EAX) {
    case 0: goto L_1215bd20;
    case 1: goto L_1215bd59;
    case 2: goto L_1215bd15;
    case 3: goto L_1215bd63;
    case 4: goto L_1215bd6c;
    default: x86_unimpl("switch@0x1215bd0e out of table"); return;
  }
L_1215bd15:;
  /* 1215bd15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215bd18 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1215bd1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1215bd1e jmp 0x1215bd6c */
  goto L_1215bd6c;
L_1215bd20:;
  /* 1215bd20 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215bd23 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1215bd26 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215bd29 jne 0x1215bd4b */
  if (!C.zf) goto L_1215bd4b;
  /* 1215bd2b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215bd2e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1215bd32 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215bd35 jne 0x1215bd4b */
  if (!C.zf) goto L_1215bd4b;
  /* 1215bd37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215bd3a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215bd3d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1215bd40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215bd43 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1215bd46 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1215bd49 jmp 0x1215bd57 */
  goto L_1215bd57;
L_1215bd4b:;
  /* 1215bd4b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1215bd52 jmp 0x1215bae0 */
  goto L_1215bae0;
L_1215bd57:;
  /* 1215bd57 jmp 0x1215bd6c */
  goto L_1215bd6c;
L_1215bd59:;
  /* 1215bd59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215bd5c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1215bd5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215bd61 jmp 0x1215bd6c */
  goto L_1215bd6c;
L_1215bd63:;
  /* 1215bd63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215bd66 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1215bd69 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1215bd6c:;
  /* 1215bd6c jmp 0x1215c632 */
  goto L_1215c632;
L_1215bd71:;
  /* 1215bd71 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1215bd75 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1215bd7b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1215bd81 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215bd84 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1215bd8a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215bd91 ja 0x1215c457 */
  if ((!C.cf&&!C.zf)) goto L_1215c457;
  /* 1215bd97 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1215bd9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215bd9f mov cl, byte ptr [edx + 0x1215c70c] */
  CL = (r8((uint32_t)(EDX + 0x1215c70c)));
  /* 1215bda5 jmp dword ptr [ecx*4 + 0x1215c6d0] */
  switch (ECX) {
    case 0: goto L_1215bdac;
    case 1: goto L_1215c040;
    case 2: goto L_1215bed0;
    case 3: goto L_1215c179;
    case 4: goto L_1215be3b;
    case 5: goto L_1215bdc1;
    case 6: goto L_1215c14b;
    case 7: goto L_1215c050;
    case 8: goto L_1215bff5;
    case 9: goto L_1215c1c5;
    case 10: goto L_1215c16f;
    case 11: goto L_1215bee6;
    case 12: goto L_1215c163;
    case 13: goto L_1215c185;
    case 14: goto L_1215c457;
    default: x86_unimpl("switch@0x1215bda5 out of table"); return;
  }
L_1215bdac:;
  /* 1215bdac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215bdaf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1215bdb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215bdb6 jne 0x1215bdc1 */
  if (!C.zf) goto L_1215bdc1;
  /* 1215bdb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215bdbb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1215bdbe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1215bdc1:;
  /* 1215bdc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215bdc4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1215bdca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215bdcc je 0x1215be07 */
  if (C.zf) goto L_1215be07;
  /* 1215bdce lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1215bdd1 push eax */
  push32((uint32_t)(EAX));
  /* 1215bdd2 call 0x1215c8a0 */
  push32(0x1215bdd7u); f_1215c8a0();
  /* 1215bdd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215bdda mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1215bdde mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1215bde2 push ecx */
  push32((uint32_t)(ECX));
  /* 1215bde3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1215bde9 push edx */
  push32((uint32_t)(EDX));
  /* 1215bdea call 0x1215d980 */
  push32(0x1215bdefu); f_1215d980();
  /* 1215bdef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215bdf2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1215bdf5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215bdf9 jge 0x1215be05 */
  if ((C.sf==C.of)) goto L_1215be05;
  /* 1215bdfb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1215be05:;
  /* 1215be05 jmp 0x1215be2d */
  goto L_1215be2d;
L_1215be07:;
  /* 1215be07 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1215be0a push eax */
  push32((uint32_t)(EAX));
  /* 1215be0b call 0x1215c860 */
  push32(0x1215be10u); f_1215c860();
  /* 1215be10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215be13 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1215be1a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1215be20 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1215be26 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1215be2d:;
  /* 1215be2d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1215be33 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1215be36 jmp 0x1215c457 */
  goto L_1215c457;
L_1215be3b:;
  /* 1215be3b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1215be3e push eax */
  push32((uint32_t)(EAX));
  /* 1215be3f call 0x1215c860 */
  push32(0x1215be44u); f_1215c860();
  /* 1215be44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215be47 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1215be4d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215be54 je 0x1215be62 */
  if (C.zf) goto L_1215be62;
  /* 1215be56 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1215be5c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215be60 jne 0x1215be7c */
  if (!C.zf) goto L_1215be7c;
L_1215be62:;
  /* 1215be62 mov edx, dword ptr [0x1217efb0] */
  EDX = (r32((uint32_t)(0x1217efb0)));
  /* 1215be68 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1215be6b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215be6e push eax */
  push32((uint32_t)(EAX));
  /* 1215be6f call 0x121578c0 */
  push32(0x1215be74u); f_121578c0();
  /* 1215be74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215be77 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1215be7a jmp 0x1215becb */
  goto L_1215becb;
L_1215be7c:;
  /* 1215be7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215be7f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1215be85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215be87 je 0x1215beac */
  if (C.zf) goto L_1215beac;
  /* 1215be89 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1215be8f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1215be92 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1215be95 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1215be9b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1215be9e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1215bea0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1215bea3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1215beaa jmp 0x1215becb */
  goto L_1215becb;
L_1215beac:;
  /* 1215beac mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1215beb3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1215beb9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1215bebc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1215bebf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1215bec5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1215bec8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1215becb:;
  /* 1215becb jmp 0x1215c457 */
  goto L_1215c457;
L_1215bed0:;
  /* 1215bed0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215bed3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1215bed9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215bedb jne 0x1215bee6 */
  if (!C.zf) goto L_1215bee6;
  /* 1215bedd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215bee0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1215bee3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1215bee6:;
  /* 1215bee6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215beed jne 0x1215befb */
  if (!C.zf) goto L_1215befb;
  /* 1215beef mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1215bef9 jmp 0x1215bf07 */
  goto L_1215bf07;
L_1215befb:;
  /* 1215befb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1215bf01 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1215bf07:;
  /* 1215bf07 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1215bf0d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1215bf13 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1215bf16 push edx */
  push32((uint32_t)(EDX));
  /* 1215bf17 call 0x1215c860 */
  push32(0x1215bf1cu); f_1215c860();
  /* 1215bf1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215bf1f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1215bf22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215bf25 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1215bf2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215bf2c je 0x1215bf96 */
  if (C.zf) goto L_1215bf96;
  /* 1215bf2e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215bf32 jne 0x1215bf3d */
  if (!C.zf) goto L_1215bf3d;
  /* 1215bf34 mov ecx, dword ptr [0x1217efb4] */
  ECX = (r32((uint32_t)(0x1217efb4)));
  /* 1215bf3a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1215bf3d:;
  /* 1215bf3d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1215bf44 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215bf47 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1215bf4d:;
  /* 1215bf4d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1215bf53 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1215bf59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215bf5c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1215bf62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215bf64 je 0x1215bf86 */
  if (C.zf) goto L_1215bf86;
  /* 1215bf66 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1215bf6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215bf6e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1215bf71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215bf73 je 0x1215bf86 */
  if (C.zf) goto L_1215bf86;
  /* 1215bf75 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1215bf7b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215bf7e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1215bf84 jmp 0x1215bf4d */
  goto L_1215bf4d;
L_1215bf86:;
  /* 1215bf86 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1215bf8c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215bf8f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1215bf91 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1215bf94 jmp 0x1215bff0 */
  goto L_1215bff0;
L_1215bf96:;
  /* 1215bf96 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215bf9a jne 0x1215bfa4 */
  if (!C.zf) goto L_1215bfa4;
  /* 1215bf9c mov eax, dword ptr [0x1217efb0] */
  EAX = (r32((uint32_t)(0x1217efb0)));
  /* 1215bfa1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1215bfa4:;
  /* 1215bfa4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215bfa7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1215bfad:;
  /* 1215bfad mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1215bfb3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1215bfb9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215bfbc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1215bfc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215bfc4 je 0x1215bfe4 */
  if (C.zf) goto L_1215bfe4;
  /* 1215bfc6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1215bfcc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1215bfcf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215bfd1 je 0x1215bfe4 */
  if (C.zf) goto L_1215bfe4;
  /* 1215bfd3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1215bfd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215bfdc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1215bfe2 jmp 0x1215bfad */
  goto L_1215bfad;
L_1215bfe4:;
  /* 1215bfe4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1215bfea sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215bfed mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1215bff0:;
  /* 1215bff0 jmp 0x1215c457 */
  goto L_1215c457;
L_1215bff5:;
  /* 1215bff5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1215bff8 push edx */
  push32((uint32_t)(EDX));
  /* 1215bff9 call 0x1215c860 */
  push32(0x1215bffeu); f_1215c860();
  /* 1215bffe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c001 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1215c007 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c00a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1215c00d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215c00f je 0x1215c023 */
  if (C.zf) goto L_1215c023;
  /* 1215c011 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1215c017 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1215c01e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1215c021 jmp 0x1215c031 */
  goto L_1215c031;
L_1215c023:;
  /* 1215c023 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1215c029 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1215c02f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1215c031:;
  /* 1215c031 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1215c03b jmp 0x1215c457 */
  goto L_1215c457;
L_1215c040:;
  /* 1215c040 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1215c047 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1215c04a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1215c04d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1215c050:;
  /* 1215c050 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c053 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1215c055 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215c058 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1215c05e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1215c061 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c068 jge 0x1215c076 */
  if ((C.sf==C.of)) goto L_1215c076;
  /* 1215c06a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1215c074 jmp 0x1215c092 */
  goto L_1215c092;
L_1215c076:;
  /* 1215c076 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c07d jne 0x1215c092 */
  if (!C.zf) goto L_1215c092;
  /* 1215c07f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1215c083 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c086 jne 0x1215c092 */
  if (!C.zf) goto L_1215c092;
  /* 1215c088 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1215c092:;
  /* 1215c092 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215c095 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c098 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1215c09b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215c09e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215c0a1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1215c0a3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1215c0a6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1215c0ac mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1215c0b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215c0b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1215c0b6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1215c0bc push edx */
  push32((uint32_t)(EDX));
  /* 1215c0bd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1215c0c1 push eax */
  push32((uint32_t)(EAX));
  /* 1215c0c2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215c0c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1215c0c6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1215c0cc push edx */
  push32((uint32_t)(EDX));
  /* 1215c0cd call dword ptr [0x1217f3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1217f3a0))), 0x1215c0d3u);
  /* 1215c0d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c0d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c0d9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1215c0de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215c0e0 je 0x1215c0f8 */
  if (C.zf) goto L_1215c0f8;
  /* 1215c0e2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c0e9 jne 0x1215c0f8 */
  if (!C.zf) goto L_1215c0f8;
  /* 1215c0eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215c0ee push ecx */
  push32((uint32_t)(ECX));
  /* 1215c0ef call dword ptr [0x1217f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1217f3ac))), 0x1215c0f5u);
  /* 1215c0f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215c0f8:;
  /* 1215c0f8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1215c0fc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c0ff jne 0x1215c11a */
  if (!C.zf) goto L_1215c11a;
  /* 1215c101 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c104 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1215c109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215c10b jne 0x1215c11a */
  if (!C.zf) goto L_1215c11a;
  /* 1215c10d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215c110 push ecx */
  push32((uint32_t)(ECX));
  /* 1215c111 call dword ptr [0x1217f3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1217f3a4))), 0x1215c117u);
  /* 1215c117 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215c11a:;
  /* 1215c11a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215c11d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1215c120 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c123 jne 0x1215c137 */
  if (!C.zf) goto L_1215c137;
  /* 1215c125 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c128 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1215c12b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1215c12e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215c131 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c134 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1215c137:;
  /* 1215c137 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215c13a push eax */
  push32((uint32_t)(EAX));
  /* 1215c13b call 0x121578c0 */
  push32(0x1215c140u); f_121578c0();
  /* 1215c140 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c143 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1215c146 jmp 0x1215c457 */
  goto L_1215c457;
L_1215c14b:;
  /* 1215c14b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c14e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1215c151 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1215c154 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1215c15e jmp 0x1215c1e5 */
  goto L_1215c1e5;
L_1215c163:;
  /* 1215c163 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1215c16d jmp 0x1215c1e5 */
  goto L_1215c1e5;
L_1215c16f:;
  /* 1215c16f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1215c179:;
  /* 1215c179 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1215c183 jmp 0x1215c18f */
  goto L_1215c18f;
L_1215c185:;
  /* 1215c185 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1215c18f:;
  /* 1215c18f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1215c199 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c19c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1215c1a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215c1a4 je 0x1215c1c3 */
  if (C.zf) goto L_1215c1c3;
  /* 1215c1a6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1215c1ad mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1215c1b3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c1b6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1215c1bc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1215c1c3:;
  /* 1215c1c3 jmp 0x1215c1e5 */
  goto L_1215c1e5;
L_1215c1c5:;
  /* 1215c1c5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1215c1cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c1d2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1215c1d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215c1da je 0x1215c1e5 */
  if (C.zf) goto L_1215c1e5;
  /* 1215c1dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c1df or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1215c1e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1215c1e5:;
  /* 1215c1e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c1e8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1215c1ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215c1ef je 0x1215c20e */
  if (C.zf) goto L_1215c20e;
  /* 1215c1f1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1215c1f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1215c1f5 call 0x1215c880 */
  push32(0x1215c1fau); f_1215c880();
  /* 1215c1fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c1fd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1215c203 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1215c209 jmp 0x1215c29f */
  goto L_1215c29f;
L_1215c20e:;
  /* 1215c20e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c211 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1215c214 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215c216 je 0x1215c260 */
  if (C.zf) goto L_1215c260;
  /* 1215c218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c21b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1215c21e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215c220 je 0x1215c240 */
  if (C.zf) goto L_1215c240;
  /* 1215c222 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1215c225 push ecx */
  push32((uint32_t)(ECX));
  /* 1215c226 call 0x1215c860 */
  push32(0x1215c22bu); f_1215c860();
  /* 1215c22b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c22e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1215c231 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1215c232 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1215c238 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1215c23e jmp 0x1215c25e */
  goto L_1215c25e;
L_1215c240:;
  /* 1215c240 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1215c243 push edx */
  push32((uint32_t)(EDX));
  /* 1215c244 call 0x1215c860 */
  push32(0x1215c249u); f_1215c860();
  /* 1215c249 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c24c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215c251 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1215c252 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1215c258 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1215c25e:;
  /* 1215c25e jmp 0x1215c29f */
  goto L_1215c29f;
L_1215c260:;
  /* 1215c260 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c263 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1215c266 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215c268 je 0x1215c285 */
  if (C.zf) goto L_1215c285;
  /* 1215c26a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1215c26d push ecx */
  push32((uint32_t)(ECX));
  /* 1215c26e call 0x1215c860 */
  push32(0x1215c273u); f_1215c860();
  /* 1215c273 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c276 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1215c277 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1215c27d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1215c283 jmp 0x1215c29f */
  goto L_1215c29f;
L_1215c285:;
  /* 1215c285 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1215c288 push edx */
  push32((uint32_t)(EDX));
  /* 1215c289 call 0x1215c860 */
  push32(0x1215c28eu); f_1215c860();
  /* 1215c28e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c291 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215c293 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1215c299 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1215c29f:;
  /* 1215c29f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c2a2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1215c2a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215c2a7 je 0x1215c2e7 */
  if (C.zf) goto L_1215c2e7;
  /* 1215c2a9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c2b0 jg 0x1215c2e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1215c2e7;
  /* 1215c2b2 jl 0x1215c2bd */
  if ((C.sf!=C.of)) goto L_1215c2bd;
  /* 1215c2b4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c2bb jae 0x1215c2e7 */
  if (!C.cf) goto L_1215c2e7;
L_1215c2bd:;
  /* 1215c2bd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1215c2c3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1215c2c5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1215c2cb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c2ce neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1215c2d0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1215c2d6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1215c2dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c2df or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1215c2e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1215c2e5 jmp 0x1215c2ff */
  goto L_1215c2ff;
L_1215c2e7:;
  /* 1215c2e7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1215c2ed mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1215c2f3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1215c2f9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1215c2ff:;
  /* 1215c2ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c302 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1215c308 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215c30a jne 0x1215c327 */
  if (!C.zf) goto L_1215c327;
  /* 1215c30c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1215c312 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1215c318 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1215c31b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1215c321 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1215c327:;
  /* 1215c327 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c32e jge 0x1215c33c */
  if ((C.sf==C.of)) goto L_1215c33c;
  /* 1215c330 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1215c33a jmp 0x1215c345 */
  goto L_1215c345;
L_1215c33c:;
  /* 1215c33c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c33f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1215c342 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1215c345:;
  /* 1215c345 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1215c34b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1215c351 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215c353 jne 0x1215c35c */
  if (!C.zf) goto L_1215c35c;
  /* 1215c355 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1215c35c:;
  /* 1215c35c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1215c35f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1215c362:;
  /* 1215c362 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1215c368 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1215c36e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215c371 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1215c377 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215c379 jg 0x1215c38f */
  if ((!C.zf&&C.sf==C.of)) goto L_1215c38f;
  /* 1215c37b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1215c381 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1215c387 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215c389 je 0x1215c410 */
  if (C.zf) goto L_1215c410;
L_1215c38f:;
  /* 1215c38f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1215c395 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1215c396 push edx */
  push32((uint32_t)(EDX));
  /* 1215c397 push eax */
  push32((uint32_t)(EAX));
  /* 1215c398 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1215c39e push edx */
  push32((uint32_t)(EDX));
  /* 1215c39f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1215c3a5 push eax */
  push32((uint32_t)(EAX));
  /* 1215c3a6 call 0x1215b720 */
  push32(0x1215c3abu); f_1215b720();
  /* 1215c3ab add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c3ae mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1215c3b4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1215c3ba cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1215c3bb push edx */
  push32((uint32_t)(EDX));
  /* 1215c3bc push eax */
  push32((uint32_t)(EAX));
  /* 1215c3bd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1215c3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1215c3c4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1215c3ca push edx */
  push32((uint32_t)(EDX));
  /* 1215c3cb call 0x1215b6b0 */
  push32(0x1215c3d0u); f_1215b6b0();
  /* 1215c3d0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1215c3d6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1215c3dc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c3e3 jle 0x1215c3f7 */
  if ((C.zf||C.sf!=C.of)) goto L_1215c3f7;
  /* 1215c3e5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1215c3eb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c3f1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1215c3f7:;
  /* 1215c3f7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215c3fa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1215c400 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1215c402 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215c405 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215c408 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1215c40b jmp 0x1215c362 */
  goto L_1215c362;
L_1215c410:;
  /* 1215c410 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1215c413 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215c416 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1215c419 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215c41c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c41f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1215c422 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c425 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1215c42a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215c42c je 0x1215c457 */
  if (C.zf) goto L_1215c457;
  /* 1215c42e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215c431 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1215c434 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c437 jne 0x1215c43f */
  if (!C.zf) goto L_1215c43f;
  /* 1215c439 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c43d jne 0x1215c457 */
  if (!C.zf) goto L_1215c457;
L_1215c43f:;
  /* 1215c43f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215c442 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215c445 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1215c448 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215c44b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1215c44e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215c451 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c454 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1215c457:;
  /* 1215c457 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c45e jne 0x1215c632 */
  if (!C.zf) goto L_1215c632;
  /* 1215c464 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c467 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1215c46a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215c46c je 0x1215c4bd */
  if (C.zf) goto L_1215c4bd;
  /* 1215c46e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c471 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1215c477 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215c479 je 0x1215c48b */
  if (C.zf) goto L_1215c48b;
  /* 1215c47b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1215c482 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1215c489 jmp 0x1215c4bd */
  goto L_1215c4bd;
L_1215c48b:;
  /* 1215c48b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c48e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1215c491 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215c493 je 0x1215c4a5 */
  if (C.zf) goto L_1215c4a5;
  /* 1215c495 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1215c49c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1215c4a3 jmp 0x1215c4bd */
  goto L_1215c4bd;
L_1215c4a5:;
  /* 1215c4a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c4a8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1215c4ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215c4ad je 0x1215c4bd */
  if (C.zf) goto L_1215c4bd;
  /* 1215c4af mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1215c4b6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1215c4bd:;
  /* 1215c4bd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1215c4c3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215c4c6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215c4c9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1215c4cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c4d2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1215c4d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215c4d7 jne 0x1215c4f5 */
  if (!C.zf) goto L_1215c4f5;
  /* 1215c4d9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1215c4df push eax */
  push32((uint32_t)(EAX));
  /* 1215c4e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1215c4e4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1215c4ea push edx */
  push32((uint32_t)(EDX));
  /* 1215c4eb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1215c4ed call 0x1215c7d0 */
  push32(0x1215c4f2u); f_1215c7d0();
  /* 1215c4f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215c4f5:;
  /* 1215c4f5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1215c4fb push eax */
  push32((uint32_t)(EAX));
  /* 1215c4fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c4ff push ecx */
  push32((uint32_t)(ECX));
  /* 1215c500 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215c503 push edx */
  push32((uint32_t)(EDX));
  /* 1215c504 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1215c50a push eax */
  push32((uint32_t)(EAX));
  /* 1215c50b call 0x1215c810 */
  push32(0x1215c510u); f_1215c810();
  /* 1215c510 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c513 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c516 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1215c519 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215c51b je 0x1215c543 */
  if (C.zf) goto L_1215c543;
  /* 1215c51d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c520 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1215c523 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215c525 jne 0x1215c543 */
  if (!C.zf) goto L_1215c543;
  /* 1215c527 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1215c52d push eax */
  push32((uint32_t)(EAX));
  /* 1215c52e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c531 push ecx */
  push32((uint32_t)(ECX));
  /* 1215c532 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1215c538 push edx */
  push32((uint32_t)(EDX));
  /* 1215c539 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1215c53b call 0x1215c7d0 */
  push32(0x1215c540u); f_1215c7d0();
  /* 1215c540 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215c543:;
  /* 1215c543 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c547 je 0x1215c5f1 */
  if (C.zf) goto L_1215c5f1;
  /* 1215c54d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c551 jle 0x1215c5f1 */
  if ((C.zf||C.sf!=C.of)) goto L_1215c5f1;
  /* 1215c557 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215c55a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1215c560 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215c563 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1215c569:;
  /* 1215c569 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1215c56f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1215c575 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215c578 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1215c57e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215c580 je 0x1215c5ef */
  if (C.zf) goto L_1215c5ef;
  /* 1215c582 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1215c588 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1215c58b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1215c592 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1215c599 push eax */
  push32((uint32_t)(EAX));
  /* 1215c59a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1215c5a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1215c5a1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1215c5a7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c5aa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1215c5b0 call 0x1215d980 */
  push32(0x1215c5b5u); f_1215d980();
  /* 1215c5b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c5b8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1215c5be cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c5c5 jg 0x1215c5c9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1215c5c9;
  /* 1215c5c7 jmp 0x1215c5ef */
  goto L_1215c5ef;
L_1215c5c9:;
  /* 1215c5c9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1215c5cf push eax */
  push32((uint32_t)(EAX));
  /* 1215c5d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1215c5d4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1215c5da push edx */
  push32((uint32_t)(EDX));
  /* 1215c5db lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1215c5e1 push eax */
  push32((uint32_t)(EAX));
  /* 1215c5e2 call 0x1215c810 */
  push32(0x1215c5e7u); f_1215c810();
  /* 1215c5e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c5ea jmp 0x1215c569 */
  goto L_1215c569;
L_1215c5ef:;
  /* 1215c5ef jmp 0x1215c60c */
  goto L_1215c60c;
L_1215c5f1:;
  /* 1215c5f1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1215c5f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1215c5f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c5fb push edx */
  push32((uint32_t)(EDX));
  /* 1215c5fc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215c5ff push eax */
  push32((uint32_t)(EAX));
  /* 1215c600 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215c603 push ecx */
  push32((uint32_t)(ECX));
  /* 1215c604 call 0x1215c810 */
  push32(0x1215c609u); f_1215c810();
  /* 1215c609 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215c60c:;
  /* 1215c60c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c60f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1215c612 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215c614 je 0x1215c632 */
  if (C.zf) goto L_1215c632;
  /* 1215c616 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1215c61c push eax */
  push32((uint32_t)(EAX));
  /* 1215c61d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c620 push ecx */
  push32((uint32_t)(ECX));
  /* 1215c621 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1215c627 push edx */
  push32((uint32_t)(EDX));
  /* 1215c628 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1215c62a call 0x1215c7d0 */
  push32(0x1215c62fu); f_1215c7d0();
  /* 1215c62f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215c632:;
  /* 1215c632 jmp 0x1215ba44 */
  goto L_1215ba44;
L_1215c637:;
  /* 1215c637 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1215c63d pop edi */
  EDI = (pop32());
  /* 1215c63e pop esi */
  ESI = (pop32());
  /* 1215c63f pop ebx */
  EBX = (pop32());
  /* 1215c640 mov esp, ebp */
  ESP = (EBP);
  /* 1215c642 pop ebp */
  EBP = (pop32());
  /* 1215c643 ret  */
  ESPCHK(0x1215ba20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c750 @ 0x1215c750 (119 bytes, 44 insns) */
void f_1215c750(void) {
  FTRACE(0x1215c750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215c750 push ebp */
  push32((uint32_t)(EBP));
  /* 1215c751 mov ebp, esp */
  EBP = (ESP);
  /* 1215c753 push ecx */
  push32((uint32_t)(ECX));
  /* 1215c754 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215c757 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1215c75a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215c75d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215c760 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1215c763 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215c766 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c76a jl 0x1215c792 */
  if ((C.sf!=C.of)) goto L_1215c792;
  /* 1215c76c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215c76f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1215c771 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1215c774 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1215c776 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1215c77a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1215c780 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1215c783 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215c786 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1215c788 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c78b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215c78e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1215c790 jmp 0x1215c7a5 */
  goto L_1215c7a5;
L_1215c792:;
  /* 1215c792 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215c795 push edx */
  push32((uint32_t)(EDX));
  /* 1215c796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c799 push eax */
  push32((uint32_t)(EAX));
  /* 1215c79a call 0x1215b7a0 */
  push32(0x1215c79fu); f_1215b7a0();
  /* 1215c79f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c7a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1215c7a5:;
  /* 1215c7a5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c7a9 jne 0x1215c7b6 */
  if (!C.zf) goto L_1215c7b6;
  /* 1215c7ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215c7ae mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1215c7b4 jmp 0x1215c7c3 */
  goto L_1215c7c3;
L_1215c7b6:;
  /* 1215c7b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215c7b9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1215c7bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c7be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215c7c1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1215c7c3:;
  /* 1215c7c3 mov esp, ebp */
  ESP = (EBP);
  /* 1215c7c5 pop ebp */
  EBP = (pop32());
  /* 1215c7c6 ret  */
  ESPCHK(0x1215c750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7d0 @ 0x1215c7d0 (53 bytes, 23 insns) */
void f_1215c7d0(void) {
  FTRACE(0x1215c7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215c7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215c7d1 mov ebp, esp */
  EBP = (ESP);
L_1215c7d3:;
  /* 1215c7d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215c7d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215c7d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215c7dc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1215c7df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215c7e1 jle 0x1215c803 */
  if ((C.zf||C.sf!=C.of)) goto L_1215c803;
  /* 1215c7e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1215c7e6 push edx */
  push32((uint32_t)(EDX));
  /* 1215c7e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215c7ea push eax */
  push32((uint32_t)(EAX));
  /* 1215c7eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c7ee push ecx */
  push32((uint32_t)(ECX));
  /* 1215c7ef call 0x1215c750 */
  push32(0x1215c7f4u); f_1215c750();
  /* 1215c7f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c7f7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1215c7fa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c7fd jne 0x1215c801 */
  if (!C.zf) goto L_1215c801;
  /* 1215c7ff jmp 0x1215c803 */
  goto L_1215c803;
L_1215c801:;
  /* 1215c801 jmp 0x1215c7d3 */
  goto L_1215c7d3;
L_1215c803:;
  /* 1215c803 pop ebp */
  EBP = (pop32());
  /* 1215c804 ret  */
  ESPCHK(0x1215c7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c810 @ 0x1215c810 (74 bytes, 31 insns) */
void f_1215c810(void) {
  FTRACE(0x1215c810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215c810 push ebp */
  push32((uint32_t)(EBP));
  /* 1215c811 mov ebp, esp */
  EBP = (ESP);
  /* 1215c813 push ecx */
  push32((uint32_t)(ECX));
L_1215c814:;
  /* 1215c814 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215c817 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215c81a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215c81d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1215c820 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215c822 jle 0x1215c856 */
  if ((C.zf||C.sf!=C.of)) goto L_1215c856;
  /* 1215c824 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1215c827 push edx */
  push32((uint32_t)(EDX));
  /* 1215c828 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215c82b push eax */
  push32((uint32_t)(EAX));
  /* 1215c82c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c82f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1215c832 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1215c835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c838 push eax */
  push32((uint32_t)(EAX));
  /* 1215c839 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c83c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c83f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1215c842 call 0x1215c750 */
  push32(0x1215c847u); f_1215c750();
  /* 1215c847 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c84a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1215c84d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c850 jne 0x1215c854 */
  if (!C.zf) goto L_1215c854;
  /* 1215c852 jmp 0x1215c856 */
  goto L_1215c856;
L_1215c854:;
  /* 1215c854 jmp 0x1215c814 */
  goto L_1215c814;
L_1215c856:;
  /* 1215c856 mov esp, ebp */
  ESP = (EBP);
  /* 1215c858 pop ebp */
  EBP = (pop32());
  /* 1215c859 ret  */
  ESPCHK(0x1215c810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c860 @ 0x1215c860 (26 bytes, 12 insns) */
void f_1215c860(void) {
  FTRACE(0x1215c860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215c860 push ebp */
  push32((uint32_t)(EBP));
  /* 1215c861 mov ebp, esp */
  EBP = (ESP);
  /* 1215c863 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c866 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1215c868 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c86b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c86e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1215c870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c873 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1215c875 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1215c878 pop ebp */
  EBP = (pop32());
  /* 1215c879 ret  */
  ESPCHK(0x1215c860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c880 @ 0x1215c880 (31 bytes, 14 insns) */
void f_1215c880(void) {
  FTRACE(0x1215c880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215c880 push ebp */
  push32((uint32_t)(EBP));
  /* 1215c881 mov ebp, esp */
  EBP = (ESP);
  /* 1215c883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c886 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1215c888 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c88b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c88e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1215c890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c893 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1215c895 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215c898 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1215c89a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1215c89d pop ebp */
  EBP = (pop32());
  /* 1215c89e ret  */
  ESPCHK(0x1215c880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8a0 @ 0x1215c8a0 (27 bytes, 12 insns) */
void f_1215c8a0(void) {
  FTRACE(0x1215c8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215c8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215c8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1215c8a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c8a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1215c8a8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c8ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c8ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1215c8b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c8b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1215c8b5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1215c8b9 pop ebp */
  EBP = (pop32());
  /* 1215c8ba ret  */
  ESPCHK(0x1215c8a0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1215c8c0 (145 bytes, 42 insns) */
void f_1215c8c0(void) {
  FTRACE(0x1215c8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215c8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215c8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1215c8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1215c8c4 call 0x1215c970 */
  push32(0x1215c8c9u); f_1215c970();
  /* 1215c8c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c8cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1215c8ce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1215c8d5 jmp 0x1215c8e0 */
  goto L_1215c8e0;
L_1215c8d7:;
  /* 1215c8d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c8da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c8dd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1215c8e0:;
  /* 1215c8e0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c8e4 jae 0x1215c90a */
  if (!C.cf) goto L_1215c90a;
  /* 1215c8e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c8e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c8ec cmp ecx, dword ptr [eax*8 + 0x1217efb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1217efb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c8f3 jne 0x1215c908 */
  if (!C.zf) goto L_1215c908;
  /* 1215c8f5 call 0x1215c960 */
  push32(0x1215c8fau); f_1215c960();
  /* 1215c8fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215c8fd mov ecx, dword ptr [edx*8 + 0x1217efbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1217efbc)));
  /* 1215c904 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1215c906 jmp 0x1215c94d */
  goto L_1215c94d;
L_1215c908:;
  /* 1215c908 jmp 0x1215c8d7 */
  goto L_1215c8d7;
L_1215c90a:;
  /* 1215c90a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c90e jb 0x1215c923 */
  if (C.cf) goto L_1215c923;
  /* 1215c910 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c914 ja 0x1215c923 */
  if ((!C.cf&&!C.zf)) goto L_1215c923;
  /* 1215c916 call 0x1215c960 */
  push32(0x1215c91bu); f_1215c960();
  /* 1215c91b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1215c921 jmp 0x1215c94d */
  goto L_1215c94d;
L_1215c923:;
  /* 1215c923 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c92a jb 0x1215c942 */
  if (C.cf) goto L_1215c942;
  /* 1215c92c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c933 ja 0x1215c942 */
  if ((!C.cf&&!C.zf)) goto L_1215c942;
  /* 1215c935 call 0x1215c960 */
  push32(0x1215c93au); f_1215c960();
  /* 1215c93a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1215c940 jmp 0x1215c94d */
  goto L_1215c94d;
L_1215c942:;
  /* 1215c942 call 0x1215c960 */
  push32(0x1215c947u); f_1215c960();
  /* 1215c947 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1215c94d:;
  /* 1215c94d mov esp, ebp */
  ESP = (EBP);
  /* 1215c94f pop ebp */
  EBP = (pop32());
  /* 1215c950 ret  */
  ESPCHK(0x1215c8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c960 @ 0x1215c960 (13 bytes, 6 insns) */
void f_1215c960(void) {
  FTRACE(0x1215c960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215c960 push ebp */
  push32((uint32_t)(EBP));
  /* 1215c961 mov ebp, esp */
  EBP = (ESP);
  /* 1215c963 call 0x121544d0 */
  push32(0x1215c968u); f_121544d0();
  /* 1215c968 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c96b pop ebp */
  EBP = (pop32());
  /* 1215c96c ret  */
  ESPCHK(0x1215c960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c970 @ 0x1215c970 (13 bytes, 6 insns) */
void f_1215c970(void) {
  FTRACE(0x1215c970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215c970 push ebp */
  push32((uint32_t)(EBP));
  /* 1215c971 mov ebp, esp */
  EBP = (ESP);
  /* 1215c973 call 0x121544d0 */
  push32(0x1215c978u); f_121544d0();
  /* 1215c978 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c97b pop ebp */
  EBP = (pop32());
  /* 1215c97c ret  */
  ESPCHK(0x1215c970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c980 @ 0x1215c980 (664 bytes, 258 insns) [15 switch table(s)] */
void f_1215c980(void) {
  FTRACE(0x1215c980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215c980 push ebp */
  push32((uint32_t)(EBP));
  /* 1215c981 mov ebp, esp */
  EBP = (ESP);
  /* 1215c983 push edi */
  push32((uint32_t)(EDI));
  /* 1215c984 push esi */
  push32((uint32_t)(ESI));
  /* 1215c985 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1215c988 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215c98b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1215c98e mov eax, ecx */
  EAX = (ECX);
  /* 1215c990 mov edx, ecx */
  EDX = (ECX);
  /* 1215c992 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c994 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c996 jbe 0x1215c9a0 */
  if ((C.cf||C.zf)) goto L_1215c9a0;
  /* 1215c998 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c99a jb 0x1215cb18 */
  if (C.cf) goto L_1215cb18;
L_1215c9a0:;
  /* 1215c9a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1215c9a6 jne 0x1215c9bc */
  if (!C.zf) goto L_1215c9bc;
  /* 1215c9a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1215c9ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1215c9ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215c9b1 jb 0x1215c9dc */
  if (C.cf) goto L_1215c9dc;
  /* 1215c9b3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1215c9b5 jmp dword ptr [edx*4 + 0x1215cac8] */
  switch (EDX) {
    case 0: goto L_1215cad8;
    case 1: goto L_1215cae0;
    case 2: goto L_1215caec;
    case 3: goto L_1215cb00;
    default: x86_unimpl("switch@0x1215c9b5 out of table"); return;
  }
L_1215c9bc:;
  /* 1215c9bc mov eax, edi */
  EAX = (EDI);
  /* 1215c9be mov edx, 3 */
  EDX = (0x3u);
  /* 1215c9c3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215c9c6 jb 0x1215c9d4 */
  if (C.cf) goto L_1215c9d4;
  /* 1215c9c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1215c9cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215c9cd jmp dword ptr [eax*4 + 0x1215c9e0] */
  switch (EAX) {
    case 1: goto L_1215c9f0;
    case 2: goto L_1215ca1c;
    case 3: goto L_1215ca40;
    default: x86_unimpl("switch@0x1215c9cd out of table"); return;
  }
L_1215c9d4:;
  /* 1215c9d4 jmp dword ptr [ecx*4 + 0x1215cad8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1215cad8)))); return;
  /* 1215c9db nop  */
  /* nop */
L_1215c9dc:;
  /* 1215c9dc jmp dword ptr [ecx*4 + 0x1215ca5c] */
  switch (ECX) {
    case 0: goto L_1215cabf;
    case 1: goto L_1215caac;
    case 2: goto L_1215caa4;
    case 3: goto L_1215ca9c;
    case 4: goto L_1215ca94;
    case 5: goto L_1215ca8c;
    case 6: goto L_1215ca84;
    case 7: goto L_1215ca7c;
    default: x86_unimpl("switch@0x1215c9dc out of table"); return;
  }
  /* 1215c9e3 nop  */
  /* nop */
L_1215c9f0:;
  /* 1215c9f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1215c9f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1215c9f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1215c9f6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1215c9f9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1215c9fc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1215c9ff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1215ca02 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1215ca05 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ca08 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ca0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ca0e jb 0x1215c9dc */
  if (C.cf) goto L_1215c9dc;
  /* 1215ca10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1215ca12 jmp dword ptr [edx*4 + 0x1215cac8] */
  switch (EDX) {
    case 0: goto L_1215cad8;
    case 1: goto L_1215cae0;
    case 2: goto L_1215caec;
    case 3: goto L_1215cb00;
    default: x86_unimpl("switch@0x1215ca12 out of table"); return;
  }
  /* 1215ca19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1215ca1c:;
  /* 1215ca1c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1215ca1e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1215ca20 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1215ca22 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1215ca25 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1215ca28 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1215ca2b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ca2e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ca31 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ca34 jb 0x1215c9dc */
  if (C.cf) goto L_1215c9dc;
  /* 1215ca36 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1215ca38 jmp dword ptr [edx*4 + 0x1215cac8] */
  switch (EDX) {
    case 0: goto L_1215cad8;
    case 1: goto L_1215cae0;
    case 2: goto L_1215caec;
    case 3: goto L_1215cb00;
    default: x86_unimpl("switch@0x1215ca38 out of table"); return;
  }
  /* 1215ca3f nop  */
  /* nop */
L_1215ca40:;
  /* 1215ca40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1215ca42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1215ca44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1215ca46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1215ca47 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1215ca4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1215ca4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ca4e jb 0x1215c9dc */
  if (C.cf) goto L_1215c9dc;
  /* 1215ca50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1215ca52 jmp dword ptr [edx*4 + 0x1215cac8] */
  switch (EDX) {
    case 0: goto L_1215cad8;
    case 1: goto L_1215cae0;
    case 2: goto L_1215caec;
    case 3: goto L_1215cb00;
    default: x86_unimpl("switch@0x1215ca52 out of table"); return;
  }
  /* 1215ca59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1215ca7c:;
  /* 1215ca7c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1215ca80 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1215ca84:;
  /* 1215ca84 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1215ca88 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1215ca8c:;
  /* 1215ca8c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1215ca90 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1215ca94:;
  /* 1215ca94 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1215ca98 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1215ca9c:;
  /* 1215ca9c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1215caa0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1215caa4:;
  /* 1215caa4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1215caa8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1215caac:;
  /* 1215caac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1215cab0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1215cab4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1215cabb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1215cabd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1215cabf:;
  /* 1215cabf jmp dword ptr [edx*4 + 0x1215cac8] */
  switch (EDX) {
    case 0: goto L_1215cad8;
    case 1: goto L_1215cae0;
    case 2: goto L_1215caec;
    case 3: goto L_1215cb00;
    default: x86_unimpl("switch@0x1215cabf out of table"); return;
  }
  /* 1215cac6 mov edi, edi */
  EDI = (EDI);
L_1215cad8:;
  /* 1215cad8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215cadb pop esi */
  ESI = (pop32());
  /* 1215cadc pop edi */
  EDI = (pop32());
  /* 1215cadd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1215cade ret  */
  ESPCHK(0x1215c980u, _esp0);
  ESP += 4; return;
  /* 1215cadf nop  */
  /* nop */
L_1215cae0:;
  /* 1215cae0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1215cae2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1215cae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215cae7 pop esi */
  ESI = (pop32());
  /* 1215cae8 pop edi */
  EDI = (pop32());
  /* 1215cae9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1215caea ret  */
  ESPCHK(0x1215c980u, _esp0);
  ESP += 4; return;
  /* 1215caeb nop  */
  /* nop */
L_1215caec:;
  /* 1215caec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1215caee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1215caf0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1215caf3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1215caf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215caf9 pop esi */
  ESI = (pop32());
  /* 1215cafa pop edi */
  EDI = (pop32());
  /* 1215cafb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1215cafc ret  */
  ESPCHK(0x1215c980u, _esp0);
  ESP += 4; return;
  /* 1215cafd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1215cb00:;
  /* 1215cb00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1215cb02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1215cb04 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1215cb07 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1215cb0a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1215cb0d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1215cb10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215cb13 pop esi */
  ESI = (pop32());
  /* 1215cb14 pop edi */
  EDI = (pop32());
  /* 1215cb15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1215cb16 ret  */
  ESPCHK(0x1215c980u, _esp0);
  ESP += 4; return;
  /* 1215cb17 nop  */
  /* nop */
L_1215cb18:;
  /* 1215cb18 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1215cb1c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1215cb20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1215cb26 jne 0x1215cb4c */
  if (!C.zf) goto L_1215cb4c;
  /* 1215cb28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1215cb2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1215cb2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215cb31 jb 0x1215cb40 */
  if (C.cf) goto L_1215cb40;
  /* 1215cb33 std  */
  C.df=1;
  /* 1215cb34 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1215cb36 cld  */
  C.df=0;
  /* 1215cb37 jmp dword ptr [edx*4 + 0x1215cc60] */
  switch (EDX) {
    case 0: goto L_1215cc70;
    case 1: goto L_1215cc78;
    case 2: goto L_1215cc88;
    case 3: goto L_1215cc9c;
    default: x86_unimpl("switch@0x1215cb37 out of table"); return;
  }
  /* 1215cb3e mov edi, edi */
  EDI = (EDI);
L_1215cb40:;
  /* 1215cb40 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1215cb42 jmp dword ptr [ecx*4 + 0x1215cc10] */
  switch (ECX) {
    case 0: goto L_1215cc57;
    default: x86_unimpl("switch@0x1215cb42 out of table"); return;
  }
  /* 1215cb49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1215cb4c:;
  /* 1215cb4c mov eax, edi */
  EAX = (EDI);
  /* 1215cb4e mov edx, 3 */
  EDX = (0x3u);
  /* 1215cb53 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215cb56 jb 0x1215cb64 */
  if (C.cf) goto L_1215cb64;
  /* 1215cb58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1215cb5b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215cb5d jmp dword ptr [eax*4 + 0x1215cb68] */
  switch (EAX) {
    case 1: goto L_1215cb78;
    case 2: goto L_1215cb98;
    case 3: goto L_1215cbc0;
    default: x86_unimpl("switch@0x1215cb5d out of table"); return;
  }
L_1215cb64:;
  /* 1215cb64 jmp dword ptr [ecx*4 + 0x1215cc60] */
  switch (ECX) {
    case 0: goto L_1215cc70;
    case 1: goto L_1215cc78;
    case 2: goto L_1215cc88;
    case 3: goto L_1215cc9c;
    default: x86_unimpl("switch@0x1215cb64 out of table"); return;
  }
  /* 1215cb6b nop  */
  /* nop */
L_1215cb78:;
  /* 1215cb78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1215cb7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1215cb7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1215cb80 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1215cb81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1215cb84 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1215cb85 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215cb88 jb 0x1215cb40 */
  if (C.cf) goto L_1215cb40;
  /* 1215cb8a std  */
  C.df=1;
  /* 1215cb8b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1215cb8d cld  */
  C.df=0;
  /* 1215cb8e jmp dword ptr [edx*4 + 0x1215cc60] */
  switch (EDX) {
    case 0: goto L_1215cc70;
    case 1: goto L_1215cc78;
    case 2: goto L_1215cc88;
    case 3: goto L_1215cc9c;
    default: x86_unimpl("switch@0x1215cb8e out of table"); return;
  }
  /* 1215cb95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1215cb98:;
  /* 1215cb98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1215cb9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1215cb9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1215cba0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1215cba3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1215cba6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1215cba9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215cbac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215cbaf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215cbb2 jb 0x1215cb40 */
  if (C.cf) goto L_1215cb40;
  /* 1215cbb4 std  */
  C.df=1;
  /* 1215cbb5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1215cbb7 cld  */
  C.df=0;
  /* 1215cbb8 jmp dword ptr [edx*4 + 0x1215cc60] */
  switch (EDX) {
    case 0: goto L_1215cc70;
    case 1: goto L_1215cc78;
    case 2: goto L_1215cc88;
    case 3: goto L_1215cc9c;
    default: x86_unimpl("switch@0x1215cbb8 out of table"); return;
  }
  /* 1215cbbf nop  */
  /* nop */
L_1215cbc0:;
  /* 1215cbc0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1215cbc3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1215cbc5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1215cbc8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1215cbcb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1215cbce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1215cbd1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1215cbd4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1215cbd7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215cbda sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215cbdd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215cbe0 jb 0x1215cb40 */
  if (C.cf) goto L_1215cb40;
  /* 1215cbe6 std  */
  C.df=1;
  /* 1215cbe7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1215cbe9 cld  */
  C.df=0;
  /* 1215cbea jmp dword ptr [edx*4 + 0x1215cc60] */
  switch (EDX) {
    case 0: goto L_1215cc70;
    case 1: goto L_1215cc78;
    case 2: goto L_1215cc88;
    case 3: goto L_1215cc9c;
    default: x86_unimpl("switch@0x1215cbea out of table"); return;
  }
  /* 1215cbf1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1215cbf4 adc al, 0xcc */
  { uint32_t _a=(AL),_b=(0xccu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1215cbf6 adc eax, 0x15cc1c12 */
  { uint32_t _a=(EAX),_b=(0x15cc1c12u),_r=_a+_b+C.cf; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215cbfb adc ah, byte ptr [esp + ecx*8] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ESP + ECX*8))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1215cbfe adc eax, 0x15cc2c12 */
  { uint32_t _a=(EAX),_b=(0x15cc2c12u),_r=_a+_b+C.cf; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215cc03 adc dh, byte ptr [esp + ecx*8] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(ESP + ECX*8))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1215cc06 adc eax, 0x15cc3c12 */
  { uint32_t _a=(EAX),_b=(0x15cc3c12u),_r=_a+_b+C.cf; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215cc0b adc al, byte ptr [esp + ecx*8 + 0x15] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ESP + ECX*8 + 0x15))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1215cc14 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1215cc18 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1215cc1c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1215cc20 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1215cc24 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1215cc28 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1215cc2c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1215cc30 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1215cc34 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1215cc38 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1215cc3c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1215cc40 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1215cc44 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1215cc48 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1215cc4c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1215cc53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1215cc55 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1215cc57:;
  /* 1215cc57 jmp dword ptr [edx*4 + 0x1215cc60] */
  switch (EDX) {
    case 0: goto L_1215cc70;
    case 1: goto L_1215cc78;
    case 2: goto L_1215cc88;
    case 3: goto L_1215cc9c;
    default: x86_unimpl("switch@0x1215cc57 out of table"); return;
  }
  /* 1215cc5e mov edi, edi */
  EDI = (EDI);
L_1215cc70:;
  /* 1215cc70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215cc73 pop esi */
  ESI = (pop32());
  /* 1215cc74 pop edi */
  EDI = (pop32());
  /* 1215cc75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1215cc76 ret  */
  ESPCHK(0x1215c980u, _esp0);
  ESP += 4; return;
  /* 1215cc77 nop  */
  /* nop */
L_1215cc78:;
  /* 1215cc78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1215cc7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1215cc7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215cc81 pop esi */
  ESI = (pop32());
  /* 1215cc82 pop edi */
  EDI = (pop32());
  /* 1215cc83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1215cc84 ret  */
  ESPCHK(0x1215c980u, _esp0);
  ESP += 4; return;
  /* 1215cc85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1215cc88:;
  /* 1215cc88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1215cc8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1215cc8e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1215cc91 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1215cc94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215cc97 pop esi */
  ESI = (pop32());
  /* 1215cc98 pop edi */
  EDI = (pop32());
  /* 1215cc99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1215cc9a ret  */
  ESPCHK(0x1215c980u, _esp0);
  ESP += 4; return;
  /* 1215cc9b nop  */
  /* nop */
L_1215cc9c:;
  /* 1215cc9c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1215cc9f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1215cca2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1215cca5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1215cca8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1215ccab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1215ccae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ccb1 pop esi */
  ESI = (pop32());
  /* 1215ccb2 pop edi */
  EDI = (pop32());
  /* 1215ccb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1215ccb4 ret  */
  ESPCHK(0x1215c980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccc0 @ 0x1215ccc0 (421 bytes, 148 insns) */
void f_1215ccc0(void) {
  FTRACE(0x1215ccc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215ccc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215ccc1 mov ebp, esp */
  EBP = (ESP);
  /* 1215ccc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1215ccc5 push 0x1217c0e8 */
  push32((uint32_t)(0x1217c0e8u));
  /* 1215ccca push 0x1215db98 */
  push32((uint32_t)(0x1215db98u));
  /* 1215cccf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1215ccd5 push eax */
  push32((uint32_t)(EAX));
  /* 1215ccd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1215ccdd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215cce0 push ebx */
  push32((uint32_t)(EBX));
  /* 1215cce1 push esi */
  push32((uint32_t)(ESI));
  /* 1215cce2 push edi */
  push32((uint32_t)(EDI));
  /* 1215cce3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1215cce6 cmp dword ptr [0x121807b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121807b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215cced jne 0x1215cd3e */
  if (!C.zf) goto L_1215cd3e;
  /* 1215ccef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1215ccf2 push eax */
  push32((uint32_t)(EAX));
  /* 1215ccf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215ccf5 push 0x1217c0e4 */
  push32((uint32_t)(0x1217c0e4u));
  /* 1215ccfa push 1 */
  push32((uint32_t)(0x1u));
  /* 1215ccfc call dword ptr [0x121832f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832f4))), 0x1215cd02u);
  /* 1215cd02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215cd04 je 0x1215cd12 */
  if (C.zf) goto L_1215cd12;
  /* 1215cd06 mov dword ptr [0x121807b4], 1 */
  w32((uint32_t)(0x121807b4), (0x1u));
  /* 1215cd10 jmp 0x1215cd3e */
  goto L_1215cd3e;
L_1215cd12:;
  /* 1215cd12 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1215cd15 push ecx */
  push32((uint32_t)(ECX));
  /* 1215cd16 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215cd18 push 0x1217c0e0 */
  push32((uint32_t)(0x1217c0e0u));
  /* 1215cd1d push 1 */
  push32((uint32_t)(0x1u));
  /* 1215cd1f push 0 */
  push32((uint32_t)(0x0u));
  /* 1215cd21 call dword ptr [0x12183304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183304))), 0x1215cd27u);
  /* 1215cd27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215cd29 je 0x1215cd37 */
  if (C.zf) goto L_1215cd37;
  /* 1215cd2b mov dword ptr [0x121807b4], 2 */
  w32((uint32_t)(0x121807b4), (0x2u));
  /* 1215cd35 jmp 0x1215cd3e */
  goto L_1215cd3e;
L_1215cd37:;
  /* 1215cd37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215cd39 jmp 0x1215ce68 */
  goto L_1215ce68;
L_1215cd3e:;
  /* 1215cd3e cmp dword ptr [0x121807b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x121807b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215cd45 jne 0x1215cd75 */
  if (!C.zf) goto L_1215cd75;
  /* 1215cd47 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215cd4b jne 0x1215cd56 */
  if (!C.zf) goto L_1215cd56;
  /* 1215cd4d mov edx, dword ptr [0x121807c0] */
  EDX = (r32((uint32_t)(0x121807c0)));
  /* 1215cd53 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1215cd56:;
  /* 1215cd56 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1215cd59 push eax */
  push32((uint32_t)(EAX));
  /* 1215cd5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215cd5d push ecx */
  push32((uint32_t)(ECX));
  /* 1215cd5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215cd61 push edx */
  push32((uint32_t)(EDX));
  /* 1215cd62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215cd65 push eax */
  push32((uint32_t)(EAX));
  /* 1215cd66 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1215cd69 push ecx */
  push32((uint32_t)(ECX));
  /* 1215cd6a call dword ptr [0x12183304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183304))), 0x1215cd70u);
  /* 1215cd70 jmp 0x1215ce68 */
  goto L_1215ce68;
L_1215cd75:;
  /* 1215cd75 cmp dword ptr [0x121807b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121807b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215cd7c jne 0x1215ce66 */
  if (!C.zf) goto L_1215ce66;
  /* 1215cd82 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215cd86 jne 0x1215cd91 */
  if (!C.zf) goto L_1215cd91;
  /* 1215cd88 mov edx, dword ptr [0x121807d0] */
  EDX = (r32((uint32_t)(0x121807d0)));
  /* 1215cd8e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1215cd91:;
  /* 1215cd91 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215cd93 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215cd95 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215cd98 push eax */
  push32((uint32_t)(EAX));
  /* 1215cd99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215cd9c push ecx */
  push32((uint32_t)(ECX));
  /* 1215cd9d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1215cda0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1215cda2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215cda4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1215cda7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215cdaa push edx */
  push32((uint32_t)(EDX));
  /* 1215cdab mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1215cdae push eax */
  push32((uint32_t)(EAX));
  /* 1215cdaf call dword ptr [0x121832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832fc))), 0x1215cdb5u);
  /* 1215cdb5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1215cdb8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215cdbc jne 0x1215cdc5 */
  if (!C.zf) goto L_1215cdc5;
  /* 1215cdbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215cdc0 jmp 0x1215ce68 */
  goto L_1215ce68;
L_1215cdc5:;
  /* 1215cdc5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1215cdcc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215cdcf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1215cdd1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215cdd4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1215cdd6 call 0x12157c30 */
  push32(0x1215cddbu); f_12157c30();
  /* 1215cddb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1215cdde mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1215cde1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1215cde4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1215cde7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215cdea shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1215cdec push edx */
  push32((uint32_t)(EDX));
  /* 1215cded push 0 */
  push32((uint32_t)(0x0u));
  /* 1215cdef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215cdf2 push eax */
  push32((uint32_t)(EAX));
  /* 1215cdf3 call 0x12158800 */
  push32(0x1215cdf8u); f_12158800();
  /* 1215cdf8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215cdfb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1215ce02 jmp 0x1215ce1b */
  goto L_1215ce1b;
  /* 1215ce04 mov eax, 1 */
  EAX = (0x1u);
  /* 1215ce09 ret  */
  ESPCHK(0x1215ccc0u, _esp0);
  ESP += 4; return;
  /* 1215ce0a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1215ce0d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1215ce14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1215ce1b:;
  /* 1215ce1b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ce1f jne 0x1215ce25 */
  if (!C.zf) goto L_1215ce25;
  /* 1215ce21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215ce23 jmp 0x1215ce68 */
  goto L_1215ce68;
L_1215ce25:;
  /* 1215ce25 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215ce28 push ecx */
  push32((uint32_t)(ECX));
  /* 1215ce29 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215ce2c push edx */
  push32((uint32_t)(EDX));
  /* 1215ce2d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215ce30 push eax */
  push32((uint32_t)(EAX));
  /* 1215ce31 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215ce34 push ecx */
  push32((uint32_t)(ECX));
  /* 1215ce35 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215ce37 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1215ce3a push edx */
  push32((uint32_t)(EDX));
  /* 1215ce3b call dword ptr [0x121832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832fc))), 0x1215ce41u);
  /* 1215ce41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1215ce44 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ce48 jne 0x1215ce4e */
  if (!C.zf) goto L_1215ce4e;
  /* 1215ce4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215ce4c jmp 0x1215ce68 */
  goto L_1215ce68;
L_1215ce4e:;
  /* 1215ce4e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1215ce51 push eax */
  push32((uint32_t)(EAX));
  /* 1215ce52 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1215ce55 push ecx */
  push32((uint32_t)(ECX));
  /* 1215ce56 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215ce59 push edx */
  push32((uint32_t)(EDX));
  /* 1215ce5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ce5d push eax */
  push32((uint32_t)(EAX));
  /* 1215ce5e call dword ptr [0x121832f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832f4))), 0x1215ce64u);
  /* 1215ce64 jmp 0x1215ce68 */
  goto L_1215ce68;
L_1215ce66:;
  /* 1215ce66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1215ce68:;
  /* 1215ce68 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1215ce6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215ce6e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1215ce75 pop edi */
  EDI = (pop32());
  /* 1215ce76 pop esi */
  ESI = (pop32());
  /* 1215ce77 pop ebx */
  EBX = (pop32());
  /* 1215ce78 mov esp, ebp */
  ESP = (EBP);
  /* 1215ce7a pop ebp */
  EBP = (pop32());
  /* 1215ce7b ret  */
  ESPCHK(0x1215ccc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce80 @ 0x1215ce80 (727 bytes, 263 insns) */
void f_1215ce80(void) {
  FTRACE(0x1215ce80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215ce80 push ebp */
  push32((uint32_t)(EBP));
  /* 1215ce81 mov ebp, esp */
  EBP = (ESP);
  /* 1215ce83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1215ce85 push 0x1217c0f8 */
  push32((uint32_t)(0x1217c0f8u));
  /* 1215ce8a push 0x1215db98 */
  push32((uint32_t)(0x1215db98u));
  /* 1215ce8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1215ce95 push eax */
  push32((uint32_t)(EAX));
  /* 1215ce96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1215ce9d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215cea0 push ebx */
  push32((uint32_t)(EBX));
  /* 1215cea1 push esi */
  push32((uint32_t)(ESI));
  /* 1215cea2 push edi */
  push32((uint32_t)(EDI));
  /* 1215cea3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1215cea6 cmp dword ptr [0x121807d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121807d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215cead jne 0x1215cf06 */
  if (!C.zf) goto L_1215cf06;
  /* 1215ceaf push 0 */
  push32((uint32_t)(0x0u));
  /* 1215ceb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215ceb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215ceb5 push 0x1217c0e4 */
  push32((uint32_t)(0x1217c0e4u));
  /* 1215ceba push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1215cebf push 0 */
  push32((uint32_t)(0x0u));
  /* 1215cec1 call dword ptr [0x121832f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832f8))), 0x1215cec7u);
  /* 1215cec7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215cec9 je 0x1215ced7 */
  if (C.zf) goto L_1215ced7;
  /* 1215cecb mov dword ptr [0x121807d8], 1 */
  w32((uint32_t)(0x121807d8), (0x1u));
  /* 1215ced5 jmp 0x1215cf06 */
  goto L_1215cf06;
L_1215ced7:;
  /* 1215ced7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215ced9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215cedb push 1 */
  push32((uint32_t)(0x1u));
  /* 1215cedd push 0x1217c0e0 */
  push32((uint32_t)(0x1217c0e0u));
  /* 1215cee2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1215cee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215cee9 call dword ptr [0x121832f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832f0))), 0x1215ceefu);
  /* 1215ceef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215cef1 je 0x1215ceff */
  if (C.zf) goto L_1215ceff;
  /* 1215cef3 mov dword ptr [0x121807d8], 2 */
  w32((uint32_t)(0x121807d8), (0x2u));
  /* 1215cefd jmp 0x1215cf06 */
  goto L_1215cf06;
L_1215ceff:;
  /* 1215ceff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215cf01 jmp 0x1215d171 */
  goto L_1215d171;
L_1215cf06:;
  /* 1215cf06 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215cf0a jle 0x1215cf1f */
  if ((C.zf||C.sf!=C.of)) goto L_1215cf1f;
  /* 1215cf0c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1215cf0f push eax */
  push32((uint32_t)(EAX));
  /* 1215cf10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215cf13 push ecx */
  push32((uint32_t)(ECX));
  /* 1215cf14 call 0x1215d190 */
  push32(0x1215cf19u); f_1215d190();
  /* 1215cf19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215cf1c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1215cf1f:;
  /* 1215cf1f cmp dword ptr [0x121807d8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x121807d8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215cf26 jne 0x1215cf4b */
  if (!C.zf) goto L_1215cf4b;
  /* 1215cf28 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1215cf2b push edx */
  push32((uint32_t)(EDX));
  /* 1215cf2c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1215cf2f push eax */
  push32((uint32_t)(EAX));
  /* 1215cf30 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1215cf33 push ecx */
  push32((uint32_t)(ECX));
  /* 1215cf34 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215cf37 push edx */
  push32((uint32_t)(EDX));
  /* 1215cf38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215cf3b push eax */
  push32((uint32_t)(EAX));
  /* 1215cf3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215cf3f push ecx */
  push32((uint32_t)(ECX));
  /* 1215cf40 call dword ptr [0x121832f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832f0))), 0x1215cf46u);
  /* 1215cf46 jmp 0x1215d171 */
  goto L_1215d171;
L_1215cf4b:;
  /* 1215cf4b cmp dword ptr [0x121807d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121807d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215cf52 jne 0x1215d16f */
  if (!C.zf) goto L_1215d16f;
  /* 1215cf58 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215cf5c jne 0x1215cf67 */
  if (!C.zf) goto L_1215cf67;
  /* 1215cf5e mov edx, dword ptr [0x121807d0] */
  EDX = (r32((uint32_t)(0x121807d0)));
  /* 1215cf64 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1215cf67:;
  /* 1215cf67 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215cf69 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215cf6b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1215cf6e push eax */
  push32((uint32_t)(EAX));
  /* 1215cf6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215cf72 push ecx */
  push32((uint32_t)(ECX));
  /* 1215cf73 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1215cf76 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1215cf78 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215cf7a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1215cf7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215cf80 push edx */
  push32((uint32_t)(EDX));
  /* 1215cf81 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1215cf84 push eax */
  push32((uint32_t)(EAX));
  /* 1215cf85 call dword ptr [0x121832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832fc))), 0x1215cf8bu);
  /* 1215cf8b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1215cf8e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215cf92 jne 0x1215cf9b */
  if (!C.zf) goto L_1215cf9b;
  /* 1215cf94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215cf96 jmp 0x1215d171 */
  goto L_1215d171;
L_1215cf9b:;
  /* 1215cf9b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1215cfa2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1215cfa5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1215cfa7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215cfaa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1215cfac call 0x12157c30 */
  push32(0x1215cfb1u); f_12157c30();
  /* 1215cfb1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1215cfb4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1215cfb7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1215cfba mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1215cfbd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1215cfc4 jmp 0x1215cfdd */
  goto L_1215cfdd;
  /* 1215cfc6 mov eax, 1 */
  EAX = (0x1u);
  /* 1215cfcb ret  */
  ESPCHK(0x1215ce80u, _esp0);
  ESP += 4; return;
  /* 1215cfcc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1215cfcf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1215cfd6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1215cfdd:;
  /* 1215cfdd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215cfe1 jne 0x1215cfea */
  if (!C.zf) goto L_1215cfea;
  /* 1215cfe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215cfe5 jmp 0x1215d171 */
  goto L_1215d171;
L_1215cfea:;
  /* 1215cfea mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1215cfed push edx */
  push32((uint32_t)(EDX));
  /* 1215cfee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215cff1 push eax */
  push32((uint32_t)(EAX));
  /* 1215cff2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1215cff5 push ecx */
  push32((uint32_t)(ECX));
  /* 1215cff6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215cff9 push edx */
  push32((uint32_t)(EDX));
  /* 1215cffa push 1 */
  push32((uint32_t)(0x1u));
  /* 1215cffc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1215cfff push eax */
  push32((uint32_t)(EAX));
  /* 1215d000 call dword ptr [0x121832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832fc))), 0x1215d006u);
  /* 1215d006 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215d008 jne 0x1215d011 */
  if (!C.zf) goto L_1215d011;
  /* 1215d00a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215d00c jmp 0x1215d171 */
  goto L_1215d171;
L_1215d011:;
  /* 1215d011 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215d013 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215d015 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1215d018 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d019 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215d01c push edx */
  push32((uint32_t)(EDX));
  /* 1215d01d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215d020 push eax */
  push32((uint32_t)(EAX));
  /* 1215d021 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d024 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d025 call dword ptr [0x121832f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832f8))), 0x1215d02bu);
  /* 1215d02b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1215d02e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d032 jne 0x1215d03b */
  if (!C.zf) goto L_1215d03b;
  /* 1215d034 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215d036 jmp 0x1215d171 */
  goto L_1215d171;
L_1215d03b:;
  /* 1215d03b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215d03e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1215d044 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215d046 je 0x1215d08b */
  if (C.zf) goto L_1215d08b;
  /* 1215d048 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d04c je 0x1215d086 */
  if (C.zf) goto L_1215d086;
  /* 1215d04e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1215d051 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d054 jle 0x1215d05d */
  if ((C.zf||C.sf!=C.of)) goto L_1215d05d;
  /* 1215d056 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215d058 jmp 0x1215d171 */
  goto L_1215d171;
L_1215d05d:;
  /* 1215d05d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1215d060 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d061 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1215d064 push edx */
  push32((uint32_t)(EDX));
  /* 1215d065 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1215d068 push eax */
  push32((uint32_t)(EAX));
  /* 1215d069 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215d06c push ecx */
  push32((uint32_t)(ECX));
  /* 1215d06d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215d070 push edx */
  push32((uint32_t)(EDX));
  /* 1215d071 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d074 push eax */
  push32((uint32_t)(EAX));
  /* 1215d075 call dword ptr [0x121832f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832f8))), 0x1215d07bu);
  /* 1215d07b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215d07d jne 0x1215d086 */
  if (!C.zf) goto L_1215d086;
  /* 1215d07f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215d081 jmp 0x1215d171 */
  goto L_1215d171;
L_1215d086:;
  /* 1215d086 jmp 0x1215d16a */
  goto L_1215d16a;
L_1215d08b:;
  /* 1215d08b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1215d08e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1215d091 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1215d098 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1215d09b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1215d09d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d0a0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1215d0a2 call 0x12157c30 */
  push32(0x1215d0a7u); f_12157c30();
  /* 1215d0a7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1215d0aa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1215d0ad mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1215d0b0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1215d0b3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1215d0ba jmp 0x1215d0d3 */
  goto L_1215d0d3;
  /* 1215d0bc mov eax, 1 */
  EAX = (0x1u);
  /* 1215d0c1 ret  */
  ESPCHK(0x1215ce80u, _esp0);
  ESP += 4; return;
  /* 1215d0c2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1215d0c5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1215d0cc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1215d0d3:;
  /* 1215d0d3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d0d7 jne 0x1215d0e0 */
  if (!C.zf) goto L_1215d0e0;
  /* 1215d0d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215d0db jmp 0x1215d171 */
  goto L_1215d171;
L_1215d0e0:;
  /* 1215d0e0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1215d0e3 push eax */
  push32((uint32_t)(EAX));
  /* 1215d0e4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215d0e7 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d0e8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1215d0eb push edx */
  push32((uint32_t)(EDX));
  /* 1215d0ec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1215d0ef push eax */
  push32((uint32_t)(EAX));
  /* 1215d0f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215d0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d0f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d0f7 push edx */
  push32((uint32_t)(EDX));
  /* 1215d0f8 call dword ptr [0x121832f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832f8))), 0x1215d0feu);
  /* 1215d0fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215d100 jne 0x1215d106 */
  if (!C.zf) goto L_1215d106;
  /* 1215d102 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215d104 jmp 0x1215d171 */
  goto L_1215d171;
L_1215d106:;
  /* 1215d106 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d10a jne 0x1215d13a */
  if (!C.zf) goto L_1215d13a;
  /* 1215d10c push 0 */
  push32((uint32_t)(0x0u));
  /* 1215d10e push 0 */
  push32((uint32_t)(0x0u));
  /* 1215d110 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215d112 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215d114 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1215d117 push eax */
  push32((uint32_t)(EAX));
  /* 1215d118 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215d11b push ecx */
  push32((uint32_t)(ECX));
  /* 1215d11c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1215d121 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1215d124 push edx */
  push32((uint32_t)(EDX));
  /* 1215d125 call dword ptr [0x121833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833b8))), 0x1215d12bu);
  /* 1215d12b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1215d12e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d132 jne 0x1215d138 */
  if (!C.zf) goto L_1215d138;
  /* 1215d134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215d136 jmp 0x1215d171 */
  goto L_1215d171;
L_1215d138:;
  /* 1215d138 jmp 0x1215d16a */
  goto L_1215d16a;
L_1215d13a:;
  /* 1215d13a push 0 */
  push32((uint32_t)(0x0u));
  /* 1215d13c push 0 */
  push32((uint32_t)(0x0u));
  /* 1215d13e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1215d141 push eax */
  push32((uint32_t)(EAX));
  /* 1215d142 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1215d145 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d146 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1215d149 push edx */
  push32((uint32_t)(EDX));
  /* 1215d14a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1215d14d push eax */
  push32((uint32_t)(EAX));
  /* 1215d14e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1215d153 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1215d156 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d157 call dword ptr [0x121833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833b8))), 0x1215d15du);
  /* 1215d15d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1215d160 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d164 jne 0x1215d16a */
  if (!C.zf) goto L_1215d16a;
  /* 1215d166 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215d168 jmp 0x1215d171 */
  goto L_1215d171;
L_1215d16a:;
  /* 1215d16a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1215d16d jmp 0x1215d171 */
  goto L_1215d171;
L_1215d16f:;
  /* 1215d16f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1215d171:;
  /* 1215d171 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1215d174 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215d177 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1215d17e pop edi */
  EDI = (pop32());
  /* 1215d17f pop esi */
  ESI = (pop32());
  /* 1215d180 pop ebx */
  EBX = (pop32());
  /* 1215d181 mov esp, ebp */
  ESP = (EBP);
  /* 1215d183 pop ebp */
  EBP = (pop32());
  /* 1215d184 ret  */
  ESPCHK(0x1215ce80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d190 @ 0x1215d190 (80 bytes, 32 insns) */
void f_1215d190(void) {
  FTRACE(0x1215d190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215d190 push ebp */
  push32((uint32_t)(EBP));
  /* 1215d191 mov ebp, esp */
  EBP = (ESP);
  /* 1215d193 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215d196 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215d199 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1215d19c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d19f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1215d1a2:;
  /* 1215d1a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215d1a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215d1a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215d1ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1215d1ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215d1b0 je 0x1215d1c7 */
  if (C.zf) goto L_1215d1c7;
  /* 1215d1b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d1b5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1215d1b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215d1ba je 0x1215d1c7 */
  if (C.zf) goto L_1215d1c7;
  /* 1215d1bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d1bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d1c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215d1c5 jmp 0x1215d1a2 */
  goto L_1215d1a2;
L_1215d1c7:;
  /* 1215d1c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d1ca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1215d1cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215d1cf jne 0x1215d1d9 */
  if (!C.zf) goto L_1215d1d9;
  /* 1215d1d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d1d4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215d1d7 jmp 0x1215d1dc */
  goto L_1215d1dc;
L_1215d1d9:;
  /* 1215d1d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1215d1dc:;
  /* 1215d1dc mov esp, ebp */
  ESP = (EBP);
  /* 1215d1de pop ebp */
  EBP = (pop32());
  /* 1215d1df ret  */
  ESPCHK(0x1215d190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1e0 @ 0x1215d1e0 (130 bytes, 43 insns) */
void f_1215d1e0(void) {
  FTRACE(0x1215d1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215d1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215d1e1 mov ebp, esp */
  EBP = (ESP);
  /* 1215d1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d1e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d1e7 cmp eax, dword ptr [0x121820dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121820dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d1ed jae 0x1215d211 */
  if (!C.cf) goto L_1215d211;
  /* 1215d1ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d1f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1215d1f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d1f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1215d1fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215d1fe mov eax, dword ptr [ecx*4 + 0x12181fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12181fa0)));
  /* 1215d205 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1215d20a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1215d20d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215d20f jne 0x1215d22c */
  if (!C.zf) goto L_1215d22c;
L_1215d211:;
  /* 1215d211 call 0x1215c960 */
  push32(0x1215d216u); f_1215c960();
  /* 1215d216 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1215d21c call 0x1215c970 */
  push32(0x1215d221u); f_1215c970();
  /* 1215d221 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1215d227 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215d22a jmp 0x1215d25e */
  goto L_1215d25e;
L_1215d22c:;
  /* 1215d22c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d22f push edx */
  push32((uint32_t)(EDX));
  /* 1215d230 call 0x1215e180 */
  push32(0x1215d235u); f_1215e180();
  /* 1215d235 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d238 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215d23b push eax */
  push32((uint32_t)(EAX));
  /* 1215d23c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215d23f push ecx */
  push32((uint32_t)(ECX));
  /* 1215d240 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d243 push edx */
  push32((uint32_t)(EDX));
  /* 1215d244 call 0x1215d270 */
  push32(0x1215d249u); f_1215d270();
  /* 1215d249 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d24c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215d24f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d252 push eax */
  push32((uint32_t)(EAX));
  /* 1215d253 call 0x1215e210 */
  push32(0x1215d258u); f_1215e210();
  /* 1215d258 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d25b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1215d25e:;
  /* 1215d25e mov esp, ebp */
  ESP = (EBP);
  /* 1215d260 pop ebp */
  EBP = (pop32());
  /* 1215d261 ret  */
  ESPCHK(0x1215d1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d270 @ 0x1215d270 (178 bytes, 56 insns) */
void f_1215d270(void) {
  FTRACE(0x1215d270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215d270 push ebp */
  push32((uint32_t)(EBP));
  /* 1215d271 mov ebp, esp */
  EBP = (ESP);
  /* 1215d273 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215d276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d279 push eax */
  push32((uint32_t)(EAX));
  /* 1215d27a call 0x1215e000 */
  push32(0x1215d27fu); f_1215e000();
  /* 1215d27f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d282 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1215d285 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d289 jne 0x1215d29e */
  if (!C.zf) goto L_1215d29e;
  /* 1215d28b call 0x1215c960 */
  push32(0x1215d290u); f_1215c960();
  /* 1215d290 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1215d296 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215d299 jmp 0x1215d31e */
  goto L_1215d31e;
L_1215d29e:;
  /* 1215d29e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215d2a1 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d2a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215d2a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215d2a7 push edx */
  push32((uint32_t)(EDX));
  /* 1215d2a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215d2ab push eax */
  push32((uint32_t)(EAX));
  /* 1215d2ac call dword ptr [0x121832e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832e8))), 0x1215d2b2u);
  /* 1215d2b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1215d2b5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d2b9 jne 0x1215d2c6 */
  if (!C.zf) goto L_1215d2c6;
  /* 1215d2bb call dword ptr [0x12183390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183390))), 0x1215d2c1u);
  /* 1215d2c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215d2c4 jmp 0x1215d2cd */
  goto L_1215d2cd;
L_1215d2c6:;
  /* 1215d2c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1215d2cd:;
  /* 1215d2cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d2d1 je 0x1215d2e4 */
  if (C.zf) goto L_1215d2e4;
  /* 1215d2d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d2d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d2d7 call 0x1215c8c0 */
  push32(0x1215d2dcu); f_1215c8c0();
  /* 1215d2dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d2df or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215d2e2 jmp 0x1215d31e */
  goto L_1215d31e;
L_1215d2e4:;
  /* 1215d2e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d2e7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1215d2ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d2ed and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1215d2f0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215d2f3 mov ecx, dword ptr [edx*4 + 0x12181fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12181fa0)));
  /* 1215d2fa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1215d2fe and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1215d301 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d304 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1215d307 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d30a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1215d30d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215d310 mov eax, dword ptr [eax*4 + 0x12181fa0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12181fa0)));
  /* 1215d317 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1215d31b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1215d31e:;
  /* 1215d31e mov esp, ebp */
  ESP = (EBP);
  /* 1215d320 pop ebp */
  EBP = (pop32());
  /* 1215d321 ret  */
  ESPCHK(0x1215d270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d330 @ 0x1215d330 (130 bytes, 43 insns) */
void f_1215d330(void) {
  FTRACE(0x1215d330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215d330 push ebp */
  push32((uint32_t)(EBP));
  /* 1215d331 mov ebp, esp */
  EBP = (ESP);
  /* 1215d333 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d337 cmp eax, dword ptr [0x121820dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121820dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d33d jae 0x1215d361 */
  if (!C.cf) goto L_1215d361;
  /* 1215d33f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d342 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1215d345 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d348 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1215d34b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215d34e mov eax, dword ptr [ecx*4 + 0x12181fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12181fa0)));
  /* 1215d355 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1215d35a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1215d35d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215d35f jne 0x1215d37c */
  if (!C.zf) goto L_1215d37c;
L_1215d361:;
  /* 1215d361 call 0x1215c960 */
  push32(0x1215d366u); f_1215c960();
  /* 1215d366 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1215d36c call 0x1215c970 */
  push32(0x1215d371u); f_1215c970();
  /* 1215d371 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1215d377 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215d37a jmp 0x1215d3ae */
  goto L_1215d3ae;
L_1215d37c:;
  /* 1215d37c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d37f push edx */
  push32((uint32_t)(EDX));
  /* 1215d380 call 0x1215e180 */
  push32(0x1215d385u); f_1215e180();
  /* 1215d385 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d388 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215d38b push eax */
  push32((uint32_t)(EAX));
  /* 1215d38c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215d38f push ecx */
  push32((uint32_t)(ECX));
  /* 1215d390 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d393 push edx */
  push32((uint32_t)(EDX));
  /* 1215d394 call 0x1215d3c0 */
  push32(0x1215d399u); f_1215d3c0();
  /* 1215d399 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d39c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215d39f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d3a2 push eax */
  push32((uint32_t)(EAX));
  /* 1215d3a3 call 0x1215e210 */
  push32(0x1215d3a8u); f_1215e210();
  /* 1215d3a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d3ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1215d3ae:;
  /* 1215d3ae mov esp, ebp */
  ESP = (EBP);
  /* 1215d3b0 pop ebp */
  EBP = (pop32());
  /* 1215d3b1 ret  */
  ESPCHK(0x1215d330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3c0 @ 0x1215d3c0 (627 bytes, 182 insns) */
void f_1215d3c0(void) {
  FTRACE(0x1215d3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215d3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215d3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1215d3c3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215d3c9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1215d3d0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215d3d3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1215d3d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d3dd jne 0x1215d3e6 */
  if (!C.zf) goto L_1215d3e6;
  /* 1215d3df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215d3e1 jmp 0x1215d62f */
  goto L_1215d62f;
L_1215d3e6:;
  /* 1215d3e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d3e9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1215d3ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d3ef and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1215d3f2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215d3f5 mov eax, dword ptr [ecx*4 + 0x12181fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12181fa0)));
  /* 1215d3fc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1215d401 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1215d404 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215d406 je 0x1215d418 */
  if (C.zf) goto L_1215d418;
  /* 1215d408 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215d40a push 0 */
  push32((uint32_t)(0x0u));
  /* 1215d40c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d40f push edx */
  push32((uint32_t)(EDX));
  /* 1215d410 call 0x1215d270 */
  push32(0x1215d415u); f_1215d270();
  /* 1215d415 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215d418:;
  /* 1215d418 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d41b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1215d41e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d421 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1215d424 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215d427 mov edx, dword ptr [eax*4 + 0x12181fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12181fa0)));
  /* 1215d42e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1215d433 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1215d438 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215d43a je 0x1215d54c */
  if (C.zf) goto L_1215d54c;
  /* 1215d440 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215d443 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1215d446 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1215d44d:;
  /* 1215d44d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d450 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215d453 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d456 jae 0x1215d54a */
  if (!C.cf) goto L_1215d54a;
  /* 1215d45c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1215d462 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1215d465:;
  /* 1215d465 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215d468 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1215d46e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215d470 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d476 jge 0x1215d4d7 */
  if ((C.sf==C.of)) goto L_1215d4d7;
  /* 1215d478 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d47b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215d47e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d481 jae 0x1215d4d7 */
  if (!C.cf) goto L_1215d4d7;
  /* 1215d483 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d486 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1215d488 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1215d48e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d491 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d494 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215d497 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1215d49e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d4a1 jne 0x1215d4c1 */
  if (!C.zf) goto L_1215d4c1;
  /* 1215d4a3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1215d4a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d4ac mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1215d4b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215d4b5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1215d4b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215d4bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d4be mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1215d4c1:;
  /* 1215d4c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215d4c4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1215d4ca mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1215d4cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215d4cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d4d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1215d4d5 jmp 0x1215d465 */
  goto L_1215d465;
L_1215d4d7:;
  /* 1215d4d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215d4d9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1215d4df push edx */
  push32((uint32_t)(EDX));
  /* 1215d4e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215d4e3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1215d4e9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215d4eb push eax */
  push32((uint32_t)(EAX));
  /* 1215d4ec lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1215d4f2 push edx */
  push32((uint32_t)(EDX));
  /* 1215d4f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d4f6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1215d4f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d4fc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1215d4ff imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215d502 mov edx, dword ptr [eax*4 + 0x12181fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12181fa0)));
  /* 1215d509 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1215d50c push eax */
  push32((uint32_t)(EAX));
  /* 1215d50d call dword ptr [0x12183350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183350))), 0x1215d513u);
  /* 1215d513 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215d515 je 0x1215d53a */
  if (C.zf) goto L_1215d53a;
  /* 1215d517 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215d51a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d520 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1215d523 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215d526 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1215d52c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215d52e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d534 jge 0x1215d538 */
  if ((C.sf==C.of)) goto L_1215d538;
  /* 1215d536 jmp 0x1215d54a */
  goto L_1215d54a;
L_1215d538:;
  /* 1215d538 jmp 0x1215d545 */
  goto L_1215d545;
L_1215d53a:;
  /* 1215d53a call dword ptr [0x12183390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183390))), 0x1215d540u);
  /* 1215d540 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1215d543 jmp 0x1215d54a */
  goto L_1215d54a;
L_1215d545:;
  /* 1215d545 jmp 0x1215d44d */
  goto L_1215d44d;
L_1215d54a:;
  /* 1215d54a jmp 0x1215d59c */
  goto L_1215d59c;
L_1215d54c:;
  /* 1215d54c push 0 */
  push32((uint32_t)(0x0u));
  /* 1215d54e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1215d554 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d555 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215d558 push edx */
  push32((uint32_t)(EDX));
  /* 1215d559 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215d55c push eax */
  push32((uint32_t)(EAX));
  /* 1215d55d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d560 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1215d563 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d566 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1215d569 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215d56c mov eax, dword ptr [ecx*4 + 0x12181fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12181fa0)));
  /* 1215d573 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1215d576 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d577 call dword ptr [0x12183350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183350))), 0x1215d57du);
  /* 1215d57d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215d57f je 0x1215d593 */
  if (C.zf) goto L_1215d593;
  /* 1215d581 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1215d588 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1215d58e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1215d591 jmp 0x1215d59c */
  goto L_1215d59c;
L_1215d593:;
  /* 1215d593 call dword ptr [0x12183390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183390))), 0x1215d599u);
  /* 1215d599 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1215d59c:;
  /* 1215d59c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d5a0 jne 0x1215d626 */
  if (!C.zf) goto L_1215d626;
  /* 1215d5a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d5aa je 0x1215d5da */
  if (C.zf) goto L_1215d5da;
  /* 1215d5ac cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d5b0 jne 0x1215d5c9 */
  if (!C.zf) goto L_1215d5c9;
  /* 1215d5b2 call 0x1215c960 */
  push32(0x1215d5b7u); f_1215c960();
  /* 1215d5b7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1215d5bd call 0x1215c970 */
  push32(0x1215d5c2u); f_1215c970();
  /* 1215d5c2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215d5c5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1215d5c7 jmp 0x1215d5d5 */
  goto L_1215d5d5;
L_1215d5c9:;
  /* 1215d5c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215d5cc push edx */
  push32((uint32_t)(EDX));
  /* 1215d5cd call 0x1215c8c0 */
  push32(0x1215d5d2u); f_1215c8c0();
  /* 1215d5d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215d5d5:;
  /* 1215d5d5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215d5d8 jmp 0x1215d62f */
  goto L_1215d62f;
L_1215d5da:;
  /* 1215d5da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d5dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1215d5e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d5e3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1215d5e6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215d5e9 mov edx, dword ptr [eax*4 + 0x12181fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12181fa0)));
  /* 1215d5f0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1215d5f5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1215d5f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215d5fa je 0x1215d60b */
  if (C.zf) goto L_1215d60b;
  /* 1215d5fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215d5ff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1215d602 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d605 jne 0x1215d60b */
  if (!C.zf) goto L_1215d60b;
  /* 1215d607 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215d609 jmp 0x1215d62f */
  goto L_1215d62f;
L_1215d60b:;
  /* 1215d60b call 0x1215c960 */
  push32(0x1215d610u); f_1215c960();
  /* 1215d610 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1215d616 call 0x1215c970 */
  push32(0x1215d61bu); f_1215c970();
  /* 1215d61b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1215d621 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215d624 jmp 0x1215d62f */
  goto L_1215d62f;
L_1215d626:;
  /* 1215d626 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215d629 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1215d62f:;
  /* 1215d62f mov esp, ebp */
  ESP = (EBP);
  /* 1215d631 pop ebp */
  EBP = (pop32());
  /* 1215d632 ret  */
  ESPCHK(0x1215d3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d640 @ 0x1215d640 (199 bytes, 68 insns) */
void f_1215d640(void) {
  FTRACE(0x1215d640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215d640 push ebp */
  push32((uint32_t)(EBP));
  /* 1215d641 mov ebp, esp */
  EBP = (ESP);
  /* 1215d643 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d644 push ebx */
  push32((uint32_t)(EBX));
  /* 1215d645 push esi */
  push32((uint32_t)(ESI));
  /* 1215d646 push edi */
  push32((uint32_t)(EDI));
L_1215d647:;
  /* 1215d647 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d64b jne 0x1215d66b */
  if (!C.zf) goto L_1215d66b;
  /* 1215d64d push 0x1217c044 */
  push32((uint32_t)(0x1217c044u));
  /* 1215d652 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215d654 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1215d656 push 0x1217c110 */
  push32((uint32_t)(0x1217c110u));
  /* 1215d65b push 2 */
  push32((uint32_t)(0x2u));
  /* 1215d65d call 0x12153b50 */
  push32(0x1215d662u); f_12153b50();
  /* 1215d662 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d665 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d668 jne 0x1215d66b */
  if (!C.zf) goto L_1215d66b;
  /* 1215d66a int3  */
  x86_unimpl("int3 @ 0x1215d66a");
L_1215d66b:;
  /* 1215d66b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215d66d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215d66f jne 0x1215d647 */
  if (!C.zf) goto L_1215d647;
  /* 1215d671 mov ecx, dword ptr [0x121807dc] */
  ECX = (r32((uint32_t)(0x121807dc)));
  /* 1215d677 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d67a mov dword ptr [0x121807dc], ecx */
  w32((uint32_t)(0x121807dc), (ECX));
  /* 1215d680 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d683 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1215d686 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1215d688 push 0x1217c110 */
  push32((uint32_t)(0x1217c110u));
  /* 1215d68d push 2 */
  push32((uint32_t)(0x2u));
  /* 1215d68f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1215d694 call 0x12154a90 */
  push32(0x1215d699u); f_12154a90();
  /* 1215d699 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d69c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d69f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1215d6a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d6a5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d6a9 je 0x1215d6c6 */
  if (C.zf) goto L_1215d6c6;
  /* 1215d6ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d6ae mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1215d6b1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1215d6b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d6b7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1215d6ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d6bd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1215d6c4 jmp 0x1215d6eb */
  goto L_1215d6eb;
L_1215d6c6:;
  /* 1215d6c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d6c9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1215d6cc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1215d6cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d6d2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1215d6d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d6d8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d6db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d6de mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1215d6e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d6e4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1215d6eb:;
  /* 1215d6eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d6ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d6f1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1215d6f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1215d6f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d6f9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1215d700 pop edi */
  EDI = (pop32());
  /* 1215d701 pop esi */
  ESI = (pop32());
  /* 1215d702 pop ebx */
  EBX = (pop32());
  /* 1215d703 mov esp, ebp */
  ESP = (EBP);
  /* 1215d705 pop ebp */
  EBP = (pop32());
  /* 1215d706 ret  */
  ESPCHK(0x1215d640u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1215d710 (50 bytes, 17 insns) */
void f_1215d710(void) {
  FTRACE(0x1215d710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215d710 push ebp */
  push32((uint32_t)(EBP));
  /* 1215d711 mov ebp, esp */
  EBP = (ESP);
  /* 1215d713 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d716 cmp eax, dword ptr [0x121820dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121820dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d71c jb 0x1215d722 */
  if (C.cf) goto L_1215d722;
  /* 1215d71e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215d720 jmp 0x1215d740 */
  goto L_1215d740;
L_1215d722:;
  /* 1215d722 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d725 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1215d728 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d72b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1215d72e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215d731 mov eax, dword ptr [ecx*4 + 0x12181fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12181fa0)));
  /* 1215d738 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1215d73d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1215d740:;
  /* 1215d740 pop ebp */
  EBP = (pop32());
  /* 1215d741 ret  */
  ESPCHK(0x1215d710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d750 @ 0x1215d750 (300 bytes, 80 insns) */
void f_1215d750(void) {
  FTRACE(0x1215d750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215d750 push ebp */
  push32((uint32_t)(EBP));
  /* 1215d751 mov ebp, esp */
  EBP = (ESP);
  /* 1215d753 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d754 cmp dword ptr [0x12181ca0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12181ca0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d75b jne 0x1215d769 */
  if (!C.zf) goto L_1215d769;
  /* 1215d75d mov dword ptr [0x12181ca0], 0x200 */
  w32((uint32_t)(0x12181ca0), (0x200u));
  /* 1215d767 jmp 0x1215d77c */
  goto L_1215d77c;
L_1215d769:;
  /* 1215d769 cmp dword ptr [0x12181ca0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12181ca0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d770 jge 0x1215d77c */
  if ((C.sf==C.of)) goto L_1215d77c;
  /* 1215d772 mov dword ptr [0x12181ca0], 0x14 */
  w32((uint32_t)(0x12181ca0), (0x14u));
L_1215d77c:;
  /* 1215d77c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1215d781 push 0x1217c11c */
  push32((uint32_t)(0x1217c11cu));
  /* 1215d786 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215d788 push 4 */
  push32((uint32_t)(0x4u));
  /* 1215d78a mov eax, dword ptr [0x12181ca0] */
  EAX = (r32((uint32_t)(0x12181ca0)));
  /* 1215d78f push eax */
  push32((uint32_t)(EAX));
  /* 1215d790 call 0x12154ea0 */
  push32(0x1215d795u); f_12154ea0();
  /* 1215d795 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d798 mov dword ptr [0x12180950], eax */
  w32((uint32_t)(0x12180950), (EAX));
  /* 1215d79d cmp dword ptr [0x12180950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d7a4 jne 0x1215d7e5 */
  if (!C.zf) goto L_1215d7e5;
  /* 1215d7a6 mov dword ptr [0x12181ca0], 0x14 */
  w32((uint32_t)(0x12181ca0), (0x14u));
  /* 1215d7b0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1215d7b5 push 0x1217c11c */
  push32((uint32_t)(0x1217c11cu));
  /* 1215d7ba push 2 */
  push32((uint32_t)(0x2u));
  /* 1215d7bc push 4 */
  push32((uint32_t)(0x4u));
  /* 1215d7be mov ecx, dword ptr [0x12181ca0] */
  ECX = (r32((uint32_t)(0x12181ca0)));
  /* 1215d7c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d7c5 call 0x12154ea0 */
  push32(0x1215d7cau); f_12154ea0();
  /* 1215d7ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d7cd mov dword ptr [0x12180950], eax */
  w32((uint32_t)(0x12180950), (EAX));
  /* 1215d7d2 cmp dword ptr [0x12180950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d7d9 jne 0x1215d7e5 */
  if (!C.zf) goto L_1215d7e5;
  /* 1215d7db push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1215d7dd call 0x12153a00 */
  push32(0x1215d7e2u); f_12153a00();
  /* 1215d7e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215d7e5:;
  /* 1215d7e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1215d7ec jmp 0x1215d7f7 */
  goto L_1215d7f7;
L_1215d7ee:;
  /* 1215d7ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d7f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d7f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1215d7f7:;
  /* 1215d7f7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d7fb jge 0x1215d816 */
  if ((C.sf==C.of)) goto L_1215d816;
  /* 1215d7fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d800 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1215d803 add eax, 0x1217f120 */
  { uint32_t _a=(EAX),_b=(0x1217f120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d808 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d80b mov edx, dword ptr [0x12180950] */
  EDX = (r32((uint32_t)(0x12180950)));
  /* 1215d811 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1215d814 jmp 0x1215d7ee */
  goto L_1215d7ee;
L_1215d816:;
  /* 1215d816 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1215d81d jmp 0x1215d828 */
  goto L_1215d828;
L_1215d81f:;
  /* 1215d81f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d822 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d825 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1215d828:;
  /* 1215d828 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d82c jge 0x1215d878 */
  if ((C.sf==C.of)) goto L_1215d878;
  /* 1215d82e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d831 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1215d834 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d837 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1215d83a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215d83d mov eax, dword ptr [ecx*4 + 0x12181fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12181fa0)));
  /* 1215d844 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d848 je 0x1215d866 */
  if (C.zf) goto L_1215d866;
  /* 1215d84a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d84d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1215d850 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d853 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1215d856 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215d859 mov eax, dword ptr [ecx*4 + 0x12181fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12181fa0)));
  /* 1215d860 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d864 jne 0x1215d876 */
  if (!C.zf) goto L_1215d876;
L_1215d866:;
  /* 1215d866 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215d869 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1215d86c mov dword ptr [ecx + 0x1217f130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1217f130), (0xffffffffu));
L_1215d876:;
  /* 1215d876 jmp 0x1215d81f */
  goto L_1215d81f;
L_1215d878:;
  /* 1215d878 mov esp, ebp */
  ESP = (EBP);
  /* 1215d87a pop ebp */
  EBP = (pop32());
  /* 1215d87b ret  */
  ESPCHK(0x1215d750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d880 @ 0x1215d880 (26 bytes, 9 insns) */
void f_1215d880(void) {
  FTRACE(0x1215d880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215d880 push ebp */
  push32((uint32_t)(EBP));
  /* 1215d881 mov ebp, esp */
  EBP = (ESP);
  /* 1215d883 call 0x1215e480 */
  push32(0x1215d888u); f_1215e480();
  /* 1215d888 movsx eax, byte ptr [0x121805f8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x121805f8))));
  /* 1215d88f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215d891 je 0x1215d898 */
  if (C.zf) goto L_1215d898;
  /* 1215d893 call 0x1215e240 */
  push32(0x1215d898u); f_1215e240();
L_1215d898:;
  /* 1215d898 pop ebp */
  EBP = (pop32());
  /* 1215d899 ret  */
  ESPCHK(0x1215d880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8a0 @ 0x1215d8a0 (61 bytes, 20 insns) */
void f_1215d8a0(void) {
  FTRACE(0x1215d8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215d8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215d8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1215d8a3 cmp dword ptr [ebp + 8], 0x1217f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1217f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d8aa jb 0x1215d8ce */
  if (C.cf) goto L_1215d8ce;
  /* 1215d8ac cmp dword ptr [ebp + 8], 0x1217f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1217f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d8b3 ja 0x1215d8ce */
  if ((!C.cf&&!C.zf)) goto L_1215d8ce;
  /* 1215d8b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d8b8 sub eax, 0x1217f120 */
  { uint32_t _a=(EAX),_b=(0x1217f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215d8bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1215d8c0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d8c3 push eax */
  push32((uint32_t)(EAX));
  /* 1215d8c4 call 0x12158490 */
  push32(0x1215d8c9u); f_12158490();
  /* 1215d8c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d8cc jmp 0x1215d8db */
  goto L_1215d8db;
L_1215d8ce:;
  /* 1215d8ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d8d1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d8d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d8d5 call dword ptr [0x12183324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183324))), 0x1215d8dbu);
L_1215d8db:;
  /* 1215d8db pop ebp */
  EBP = (pop32());
  /* 1215d8dc ret  */
  ESPCHK(0x1215d8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8e0 @ 0x1215d8e0 (41 bytes, 16 insns) */
void f_1215d8e0(void) {
  FTRACE(0x1215d8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215d8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215d8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1215d8e3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d8e7 jge 0x1215d8fa */
  if ((C.sf==C.of)) goto L_1215d8fa;
  /* 1215d8e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d8ec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d8ef push eax */
  push32((uint32_t)(EAX));
  /* 1215d8f0 call 0x12158490 */
  push32(0x1215d8f5u); f_12158490();
  /* 1215d8f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d8f8 jmp 0x1215d907 */
  goto L_1215d907;
L_1215d8fa:;
  /* 1215d8fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215d8fd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d900 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d901 call dword ptr [0x12183324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183324))), 0x1215d907u);
L_1215d907:;
  /* 1215d907 pop ebp */
  EBP = (pop32());
  /* 1215d908 ret  */
  ESPCHK(0x1215d8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d910 @ 0x1215d910 (61 bytes, 20 insns) */
void f_1215d910(void) {
  FTRACE(0x1215d910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215d910 push ebp */
  push32((uint32_t)(EBP));
  /* 1215d911 mov ebp, esp */
  EBP = (ESP);
  /* 1215d913 cmp dword ptr [ebp + 8], 0x1217f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1217f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d91a jb 0x1215d93e */
  if (C.cf) goto L_1215d93e;
  /* 1215d91c cmp dword ptr [ebp + 8], 0x1217f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1217f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d923 ja 0x1215d93e */
  if ((!C.cf&&!C.zf)) goto L_1215d93e;
  /* 1215d925 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d928 sub eax, 0x1217f120 */
  { uint32_t _a=(EAX),_b=(0x1217f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215d92d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1215d930 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d933 push eax */
  push32((uint32_t)(EAX));
  /* 1215d934 call 0x12158530 */
  push32(0x1215d939u); f_12158530();
  /* 1215d939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d93c jmp 0x1215d94b */
  goto L_1215d94b;
L_1215d93e:;
  /* 1215d93e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d941 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d944 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d945 call dword ptr [0x12183320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183320))), 0x1215d94bu);
L_1215d94b:;
  /* 1215d94b pop ebp */
  EBP = (pop32());
  /* 1215d94c ret  */
  ESPCHK(0x1215d910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d950 @ 0x1215d950 (41 bytes, 16 insns) */
void f_1215d950(void) {
  FTRACE(0x1215d950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215d950 push ebp */
  push32((uint32_t)(EBP));
  /* 1215d951 mov ebp, esp */
  EBP = (ESP);
  /* 1215d953 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d957 jge 0x1215d96a */
  if ((C.sf==C.of)) goto L_1215d96a;
  /* 1215d959 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d95c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d95f push eax */
  push32((uint32_t)(EAX));
  /* 1215d960 call 0x12158530 */
  push32(0x1215d965u); f_12158530();
  /* 1215d965 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d968 jmp 0x1215d977 */
  goto L_1215d977;
L_1215d96a:;
  /* 1215d96a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215d96d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d970 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d971 call dword ptr [0x12183320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183320))), 0x1215d977u);
L_1215d977:;
  /* 1215d977 pop ebp */
  EBP = (pop32());
  /* 1215d978 ret  */
  ESPCHK(0x1215d950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d980 @ 0x1215d980 (119 bytes, 34 insns) */
void f_1215d980(void) {
  FTRACE(0x1215d980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215d980 push ebp */
  push32((uint32_t)(EBP));
  /* 1215d981 mov ebp, esp */
  EBP = (ESP);
  /* 1215d983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215d986 push 0x1218094c */
  push32((uint32_t)(0x1218094cu));
  /* 1215d98b call dword ptr [0x12183364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183364))), 0x1215d991u);
  /* 1215d991 cmp dword ptr [0x1218093c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218093c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d998 je 0x1215d9b8 */
  if (C.zf) goto L_1215d9b8;
  /* 1215d99a push 0x1218094c */
  push32((uint32_t)(0x1218094cu));
  /* 1215d99f call dword ptr [0x12183354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183354))), 0x1215d9a5u);
  /* 1215d9a5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1215d9a7 call 0x12158490 */
  push32(0x1215d9acu); f_12158490();
  /* 1215d9ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d9af mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1215d9b6 jmp 0x1215d9bf */
  goto L_1215d9bf;
L_1215d9b8:;
  /* 1215d9b8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1215d9bf:;
  /* 1215d9bf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1215d9c3 push eax */
  push32((uint32_t)(EAX));
  /* 1215d9c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215d9c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1215d9c8 call 0x1215da00 */
  push32(0x1215d9cdu); f_1215da00();
  /* 1215d9cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d9d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1215d9d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215d9d7 je 0x1215d9e5 */
  if (C.zf) goto L_1215d9e5;
  /* 1215d9d9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1215d9db call 0x12158530 */
  push32(0x1215d9e0u); f_12158530();
  /* 1215d9e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215d9e3 jmp 0x1215d9f0 */
  goto L_1215d9f0;
L_1215d9e5:;
  /* 1215d9e5 push 0x1218094c */
  push32((uint32_t)(0x1218094cu));
  /* 1215d9ea call dword ptr [0x12183354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183354))), 0x1215d9f0u);
L_1215d9f0:;
  /* 1215d9f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215d9f3 mov esp, ebp */
  ESP = (EBP);
  /* 1215d9f5 pop ebp */
  EBP = (pop32());
  /* 1215d9f6 ret  */
  ESPCHK(0x1215d980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da00 @ 0x1215da00 (160 bytes, 50 insns) */
void f_1215da00(void) {
  FTRACE(0x1215da00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215da00 push ebp */
  push32((uint32_t)(EBP));
  /* 1215da01 mov ebp, esp */
  EBP = (ESP);
  /* 1215da03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215da06 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215da0a jne 0x1215da13 */
  if (!C.zf) goto L_1215da13;
  /* 1215da0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215da0e jmp 0x1215da9c */
  goto L_1215da9c;
L_1215da13:;
  /* 1215da13 cmp dword ptr [0x121807c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121807c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215da1a jne 0x1215da4a */
  if (!C.zf) goto L_1215da4a;
  /* 1215da1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215da1f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215da24 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215da29 jle 0x1215da3b */
  if ((C.zf||C.sf!=C.of)) goto L_1215da3b;
  /* 1215da2b call 0x1215c960 */
  push32(0x1215da30u); f_1215c960();
  /* 1215da30 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1215da36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215da39 jmp 0x1215da9c */
  goto L_1215da9c;
L_1215da3b:;
  /* 1215da3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215da3e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1215da41 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1215da43 mov eax, 1 */
  EAX = (0x1u);
  /* 1215da48 jmp 0x1215da9c */
  goto L_1215da9c;
L_1215da4a:;
  /* 1215da4a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1215da51 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1215da54 push eax */
  push32((uint32_t)(EAX));
  /* 1215da55 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215da57 mov ecx, dword ptr [0x1217eea4] */
  ECX = (r32((uint32_t)(0x1217eea4)));
  /* 1215da5d push ecx */
  push32((uint32_t)(ECX));
  /* 1215da5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215da61 push edx */
  push32((uint32_t)(EDX));
  /* 1215da62 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215da64 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1215da67 push eax */
  push32((uint32_t)(EAX));
  /* 1215da68 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1215da6d mov ecx, dword ptr [0x121807d0] */
  ECX = (r32((uint32_t)(0x121807d0)));
  /* 1215da73 push ecx */
  push32((uint32_t)(ECX));
  /* 1215da74 call dword ptr [0x121833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833b8))), 0x1215da7au);
  /* 1215da7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215da7d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215da81 je 0x1215da89 */
  if (C.zf) goto L_1215da89;
  /* 1215da83 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215da87 je 0x1215da99 */
  if (C.zf) goto L_1215da99;
L_1215da89:;
  /* 1215da89 call 0x1215c960 */
  push32(0x1215da8eu); f_1215c960();
  /* 1215da8e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1215da94 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215da97 jmp 0x1215da9c */
  goto L_1215da9c;
L_1215da99:;
  /* 1215da99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1215da9c:;
  /* 1215da9c mov esp, ebp */
  ESP = (EBP);
  /* 1215da9e pop ebp */
  EBP = (pop32());
  /* 1215da9f ret  */
  ESPCHK(0x1215da00u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1215daa0 (32 bytes, 18 insns) */
void f_1215daa0(void) {
  FTRACE(0x1215daa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215daa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215daa1 mov ebp, esp */
  EBP = (ESP);
  /* 1215daa3 push ebx */
  push32((uint32_t)(EBX));
  /* 1215daa4 push esi */
  push32((uint32_t)(ESI));
  /* 1215daa5 push edi */
  push32((uint32_t)(EDI));
  /* 1215daa6 push ebp */
  push32((uint32_t)(EBP));
  /* 1215daa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215daa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215daab push 0x1215dab8 */
  push32((uint32_t)(0x1215dab8u));
  /* 1215dab0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1215dab3 call 0x121651ec */
  push32(0x1215dab8u); f_121651ec();
  /* 1215dab8 pop ebp */
  EBP = (pop32());
  /* 1215dab9 pop edi */
  EDI = (pop32());
  /* 1215daba pop esi */
  ESI = (pop32());
  /* 1215dabb pop ebx */
  EBX = (pop32());
  /* 1215dabc mov esp, ebp */
  ESP = (EBP);
  /* 1215dabe pop ebp */
  EBP = (pop32());
  /* 1215dabf ret  */
  ESPCHK(0x1215daa0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1215dae2 (104 bytes, 33 insns) */
void f_1215dae2(void) {
  FTRACE(0x1215dae2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215dae2 push ebx */
  push32((uint32_t)(EBX));
  /* 1215dae3 push esi */
  push32((uint32_t)(ESI));
  /* 1215dae4 push edi */
  push32((uint32_t)(EDI));
  /* 1215dae5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1215dae9 push eax */
  push32((uint32_t)(EAX));
  /* 1215daea push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1215daec push 0x1215dac0 */
  push32((uint32_t)(0x1215dac0u));
  /* 1215daf1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1215daf8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1215daff:;
  /* 1215daff mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1215db03 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1215db06 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1215db09 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215db0c je 0x1215db3c */
  if (C.zf) goto L_1215db3c;
  /* 1215db0e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215db12 je 0x1215db3c */
  if (C.zf) goto L_1215db3c;
  /* 1215db14 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1215db17 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1215db1a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1215db1e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1215db21 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215db26 jne 0x1215db3a */
  if (!C.zf) goto L_1215db3a;
  /* 1215db28 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1215db2d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1215db31 call 0x1215db76 */
  push32(0x1215db36u); f_1215db76();
  /* 1215db36 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1215db3au);
L_1215db3a:;
  /* 1215db3a jmp 0x1215daff */
  goto L_1215daff;
L_1215db3c:;
  /* 1215db3c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1215db43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215db46 pop edi */
  EDI = (pop32());
  /* 1215db47 pop esi */
  ESI = (pop32());
  /* 1215db48 pop ebx */
  EBX = (pop32());
  /* 1215db49 ret  */
  ESPCHK(0x1215dae2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db76 @ 0x1215db76 (24 bytes, 10 insns) */
void f_1215db76(void) {
  FTRACE(0x1215db76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215db76 push ebx */
  push32((uint32_t)(EBX));
  /* 1215db77 push ecx */
  push32((uint32_t)(ECX));
  /* 1215db78 mov ebx, 0x1217f3b8 */
  EBX = (0x1217f3b8u);
  /* 1215db7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215db80 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1215db83 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1215db86 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1215db89 pop ecx */
  ECX = (pop32());
  /* 1215db8a pop ebx */
  EBX = (pop32());
  /* 1215db8b ret 4 */
  ESPCHK(0x1215db76u, _esp0);
  ESP += 8; return;
}

/* FUN_1000dc55 @ 0x1215dc55 (27 bytes, 11 insns) */
void f_1215dc55(void) {
  FTRACE(0x1215dc55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215dc55 push ebp */
  push32((uint32_t)(EBP));
  /* 1215dc56 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1215dc5a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1215dc5c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1215dc5f push eax */
  push32((uint32_t)(EAX));
  /* 1215dc60 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1215dc63 push eax */
  push32((uint32_t)(EAX));
  /* 1215dc64 call 0x1215dae2 */
  push32(0x1215dc69u); f_1215dae2();
  /* 1215dc69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215dc6c pop ebp */
  EBP = (pop32());
  /* 1215dc6d ret 4 */
  ESPCHK(0x1215dc55u, _esp0);
  ESP += 8; return;
}

/* FUN_1000dc70 @ 0x1215dc70 (482 bytes, 138 insns) */
void f_1215dc70(void) {
  FTRACE(0x1215dc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215dc70 push ebp */
  push32((uint32_t)(EBP));
  /* 1215dc71 mov ebp, esp */
  EBP = (ESP);
  /* 1215dc73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215dc76 push esi */
  push32((uint32_t)(ESI));
  /* 1215dc77 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1215dc7e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1215dc80 call 0x12158490 */
  push32(0x1215dc85u); f_12158490();
  /* 1215dc85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215dc88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1215dc8f jmp 0x1215dc9a */
  goto L_1215dc9a;
L_1215dc91:;
  /* 1215dc91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215dc94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215dc97 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1215dc9a:;
  /* 1215dc9a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215dc9e jge 0x1215de40 */
  if ((C.sf==C.of)) goto L_1215de40;
  /* 1215dca4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215dca7 cmp dword ptr [ecx*4 + 0x12181fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12181fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215dcaf je 0x1215dda6 */
  if (C.zf) goto L_1215dda6;
  /* 1215dcb5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215dcb8 mov eax, dword ptr [edx*4 + 0x12181fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12181fa0)));
  /* 1215dcbf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215dcc2 jmp 0x1215dccd */
  goto L_1215dccd;
L_1215dcc4:;
  /* 1215dcc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215dcc7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215dcca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1215dccd:;
  /* 1215dccd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215dcd0 mov eax, dword ptr [edx*4 + 0x12181fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12181fa0)));
  /* 1215dcd7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215dcdc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215dcdf jae 0x1215dd96 */
  if (!C.cf) goto L_1215dd96;
  /* 1215dce5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215dce8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1215dcec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1215dcef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215dcf1 jne 0x1215dd91 */
  if (!C.zf) goto L_1215dd91;
  /* 1215dcf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215dcfa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215dcfe jne 0x1215dd39 */
  if (!C.zf) goto L_1215dd39;
  /* 1215dd00 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1215dd02 call 0x12158490 */
  push32(0x1215dd07u); f_12158490();
  /* 1215dd07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215dd0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215dd0d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215dd11 jne 0x1215dd2f */
  if (!C.zf) goto L_1215dd2f;
  /* 1215dd13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215dd16 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215dd19 push edx */
  push32((uint32_t)(EDX));
  /* 1215dd1a call dword ptr [0x12183334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183334))), 0x1215dd20u);
  /* 1215dd20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215dd23 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1215dd26 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215dd29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215dd2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1215dd2f:;
  /* 1215dd2f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1215dd31 call 0x12158530 */
  push32(0x1215dd36u); f_12158530();
  /* 1215dd36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215dd39:;
  /* 1215dd39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215dd3c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215dd3f push eax */
  push32((uint32_t)(EAX));
  /* 1215dd40 call dword ptr [0x12183324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183324))), 0x1215dd46u);
  /* 1215dd46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215dd49 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1215dd4d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1215dd50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215dd52 je 0x1215dd66 */
  if (C.zf) goto L_1215dd66;
  /* 1215dd54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215dd57 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215dd5a push eax */
  push32((uint32_t)(EAX));
  /* 1215dd5b call dword ptr [0x12183320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183320))), 0x1215dd61u);
  /* 1215dd61 jmp 0x1215dcc4 */
  goto L_1215dcc4;
L_1215dd66:;
  /* 1215dd66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215dd69 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1215dd6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215dd72 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1215dd75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215dd78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215dd7b sub eax, dword ptr [edx*4 + 0x12181fa0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12181fa0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215dd82 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1215dd83 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1215dd88 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1215dd8a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215dd8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1215dd8f jmp 0x1215dd96 */
  goto L_1215dd96;
L_1215dd91:;
  /* 1215dd91 jmp 0x1215dcc4 */
  goto L_1215dcc4;
L_1215dd96:;
  /* 1215dd96 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215dd9a je 0x1215dda1 */
  if (C.zf) goto L_1215dda1;
  /* 1215dd9c jmp 0x1215de40 */
  goto L_1215de40;
L_1215dda1:;
  /* 1215dda1 jmp 0x1215de3b */
  goto L_1215de3b;
L_1215dda6:;
  /* 1215dda6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1215dda8 push 0x1217c124 */
  push32((uint32_t)(0x1217c124u));
  /* 1215ddad push 2 */
  push32((uint32_t)(0x2u));
  /* 1215ddaf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1215ddb4 call 0x12154a90 */
  push32(0x1215ddb9u); f_12154a90();
  /* 1215ddb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ddbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215ddbf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ddc3 je 0x1215de39 */
  if (C.zf) goto L_1215de39;
  /* 1215ddc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215ddc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ddcb mov dword ptr [eax*4 + 0x12181fa0], ecx */
  w32((uint32_t)(EAX*4 + 0x12181fa0), (ECX));
  /* 1215ddd2 mov edx, dword ptr [0x121820dc] */
  EDX = (r32((uint32_t)(0x121820dc)));
  /* 1215ddd8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215dddb mov dword ptr [0x121820dc], edx */
  w32((uint32_t)(0x121820dc), (EDX));
  /* 1215dde1 jmp 0x1215ddec */
  goto L_1215ddec;
L_1215dde3:;
  /* 1215dde3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215dde6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215dde9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1215ddec:;
  /* 1215ddec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215ddef mov edx, dword ptr [ecx*4 + 0x12181fa0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12181fa0)));
  /* 1215ddf6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ddfc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ddff jae 0x1215de24 */
  if (!C.cf) goto L_1215de24;
  /* 1215de01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215de04 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1215de08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215de0b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1215de11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215de14 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1215de18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215de1b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1215de22 jmp 0x1215dde3 */
  goto L_1215dde3;
L_1215de24:;
  /* 1215de24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215de27 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1215de2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1215de2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215de30 push edx */
  push32((uint32_t)(EDX));
  /* 1215de31 call 0x1215e180 */
  push32(0x1215de36u); f_1215e180();
  /* 1215de36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215de39:;
  /* 1215de39 jmp 0x1215de40 */
  goto L_1215de40;
L_1215de3b:;
  /* 1215de3b jmp 0x1215dc91 */
  goto L_1215dc91;
L_1215de40:;
  /* 1215de40 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1215de42 call 0x12158530 */
  push32(0x1215de47u); f_12158530();
  /* 1215de47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215de4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215de4d pop esi */
  ESI = (pop32());
  /* 1215de4e mov esp, ebp */
  ESP = (EBP);
  /* 1215de50 pop ebp */
  EBP = (pop32());
  /* 1215de51 ret  */
  ESPCHK(0x1215dc70u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1215de60 (183 bytes, 57 insns) */
void f_1215de60(void) {
  FTRACE(0x1215de60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215de60 push ebp */
  push32((uint32_t)(EBP));
  /* 1215de61 mov ebp, esp */
  EBP = (ESP);
  /* 1215de63 push ecx */
  push32((uint32_t)(ECX));
  /* 1215de64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215de67 cmp eax, dword ptr [0x121820dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121820dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215de6d jae 0x1215defa */
  if (!C.cf) goto L_1215defa;
  /* 1215de73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215de76 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1215de79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215de7c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1215de7f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215de82 mov eax, dword ptr [ecx*4 + 0x12181fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12181fa0)));
  /* 1215de89 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215de8d jne 0x1215defa */
  if (!C.zf) goto L_1215defa;
  /* 1215de8f cmp dword ptr [0x121805b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121805b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215de96 jne 0x1215deda */
  if (!C.zf) goto L_1215deda;
  /* 1215de98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215de9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1215de9e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215dea2 je 0x1215deb2 */
  if (C.zf) goto L_1215deb2;
  /* 1215dea4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215dea8 je 0x1215dec0 */
  if (C.zf) goto L_1215dec0;
  /* 1215deaa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215deae je 0x1215dece */
  if (C.zf) goto L_1215dece;
  /* 1215deb0 jmp 0x1215deda */
  goto L_1215deda;
L_1215deb2:;
  /* 1215deb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215deb5 push edx */
  push32((uint32_t)(EDX));
  /* 1215deb6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1215deb8 call dword ptr [0x121832ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832ec))), 0x1215debeu);
  /* 1215debe jmp 0x1215deda */
  goto L_1215deda;
L_1215dec0:;
  /* 1215dec0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215dec3 push eax */
  push32((uint32_t)(EAX));
  /* 1215dec4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1215dec6 call dword ptr [0x121832ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832ec))), 0x1215deccu);
  /* 1215decc jmp 0x1215deda */
  goto L_1215deda;
L_1215dece:;
  /* 1215dece mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215ded1 push ecx */
  push32((uint32_t)(ECX));
  /* 1215ded2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1215ded4 call dword ptr [0x121832ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832ec))), 0x1215dedau);
L_1215deda:;
  /* 1215deda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215dedd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1215dee0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215dee3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1215dee6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215dee9 mov ecx, dword ptr [edx*4 + 0x12181fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12181fa0)));
  /* 1215def0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215def3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1215def6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215def8 jmp 0x1215df13 */
  goto L_1215df13;
L_1215defa:;
  /* 1215defa call 0x1215c960 */
  push32(0x1215deffu); f_1215c960();
  /* 1215deff mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1215df05 call 0x1215c970 */
  push32(0x1215df0au); f_1215c970();
  /* 1215df0a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1215df10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1215df13:;
  /* 1215df13 mov esp, ebp */
  ESP = (EBP);
  /* 1215df15 pop ebp */
  EBP = (pop32());
  /* 1215df16 ret  */
  ESPCHK(0x1215de60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df20 @ 0x1215df20 (216 bytes, 63 insns) */
void f_1215df20(void) {
  FTRACE(0x1215df20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215df20 push ebp */
  push32((uint32_t)(EBP));
  /* 1215df21 mov ebp, esp */
  EBP = (ESP);
  /* 1215df23 push ecx */
  push32((uint32_t)(ECX));
  /* 1215df24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215df27 cmp eax, dword ptr [0x121820dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121820dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215df2d jae 0x1215dfdb */
  if (!C.cf) goto L_1215dfdb;
  /* 1215df33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215df36 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1215df39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215df3c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1215df3f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215df42 mov eax, dword ptr [ecx*4 + 0x12181fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12181fa0)));
  /* 1215df49 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1215df4e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1215df51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215df53 je 0x1215dfdb */
  if (C.zf) goto L_1215dfdb;
  /* 1215df59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215df5c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1215df5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215df62 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1215df65 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215df68 mov ecx, dword ptr [edx*4 + 0x12181fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12181fa0)));
  /* 1215df6f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215df73 je 0x1215dfdb */
  if (C.zf) goto L_1215dfdb;
  /* 1215df75 cmp dword ptr [0x121805b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121805b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215df7c jne 0x1215dfba */
  if (!C.zf) goto L_1215dfba;
  /* 1215df7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215df81 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1215df84 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215df88 je 0x1215df98 */
  if (C.zf) goto L_1215df98;
  /* 1215df8a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215df8e je 0x1215dfa4 */
  if (C.zf) goto L_1215dfa4;
  /* 1215df90 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215df94 je 0x1215dfb0 */
  if (C.zf) goto L_1215dfb0;
  /* 1215df96 jmp 0x1215dfba */
  goto L_1215dfba;
L_1215df98:;
  /* 1215df98 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215df9a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1215df9c call dword ptr [0x121832ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832ec))), 0x1215dfa2u);
  /* 1215dfa2 jmp 0x1215dfba */
  goto L_1215dfba;
L_1215dfa4:;
  /* 1215dfa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215dfa6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1215dfa8 call dword ptr [0x121832ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832ec))), 0x1215dfaeu);
  /* 1215dfae jmp 0x1215dfba */
  goto L_1215dfba;
L_1215dfb0:;
  /* 1215dfb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215dfb2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1215dfb4 call dword ptr [0x121832ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832ec))), 0x1215dfbau);
L_1215dfba:;
  /* 1215dfba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215dfbd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1215dfc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215dfc3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1215dfc6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215dfc9 mov edx, dword ptr [eax*4 + 0x12181fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12181fa0)));
  /* 1215dfd0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1215dfd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215dfd9 jmp 0x1215dff4 */
  goto L_1215dff4;
L_1215dfdb:;
  /* 1215dfdb call 0x1215c960 */
  push32(0x1215dfe0u); f_1215c960();
  /* 1215dfe0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1215dfe6 call 0x1215c970 */
  push32(0x1215dfebu); f_1215c970();
  /* 1215dfeb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1215dff1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1215dff4:;
  /* 1215dff4 mov esp, ebp */
  ESP = (EBP);
  /* 1215dff6 pop ebp */
  EBP = (pop32());
  /* 1215dff7 ret  */
  ESPCHK(0x1215df20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e000 @ 0x1215e000 (102 bytes, 30 insns) */
void f_1215e000(void) {
  FTRACE(0x1215e000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215e000 push ebp */
  push32((uint32_t)(EBP));
  /* 1215e001 mov ebp, esp */
  EBP = (ESP);
  /* 1215e003 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e006 cmp eax, dword ptr [0x121820dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121820dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e00c jae 0x1215e04b */
  if (!C.cf) goto L_1215e04b;
  /* 1215e00e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e011 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1215e014 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e017 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1215e01a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215e01d mov eax, dword ptr [ecx*4 + 0x12181fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12181fa0)));
  /* 1215e024 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1215e029 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1215e02c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215e02e je 0x1215e04b */
  if (C.zf) goto L_1215e04b;
  /* 1215e030 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e033 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1215e036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e039 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1215e03c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215e03f mov ecx, dword ptr [edx*4 + 0x12181fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12181fa0)));
  /* 1215e046 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1215e049 jmp 0x1215e064 */
  goto L_1215e064;
L_1215e04b:;
  /* 1215e04b call 0x1215c960 */
  push32(0x1215e050u); f_1215c960();
  /* 1215e050 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1215e056 call 0x1215c970 */
  push32(0x1215e05bu); f_1215c970();
  /* 1215e05b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1215e061 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1215e064:;
  /* 1215e064 pop ebp */
  EBP = (pop32());
  /* 1215e065 ret  */
  ESPCHK(0x1215e000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e070 @ 0x1215e070 (260 bytes, 83 insns) */
void f_1215e070(void) {
  FTRACE(0x1215e070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215e070 push ebp */
  push32((uint32_t)(EBP));
  /* 1215e071 mov ebp, esp */
  EBP = (ESP);
  /* 1215e073 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215e076 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1215e07a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215e07d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1215e080 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215e082 je 0x1215e08d */
  if (C.zf) goto L_1215e08d;
  /* 1215e084 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1215e087 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1215e08a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1215e08d:;
  /* 1215e08d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215e090 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1215e096 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215e098 je 0x1215e0a2 */
  if (C.zf) goto L_1215e0a2;
  /* 1215e09a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1215e09d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1215e09f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1215e0a2:;
  /* 1215e0a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215e0a5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1215e0ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215e0ad je 0x1215e0b8 */
  if (C.zf) goto L_1215e0b8;
  /* 1215e0af mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1215e0b2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1215e0b5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1215e0b8:;
  /* 1215e0b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e0bb push eax */
  push32((uint32_t)(EAX));
  /* 1215e0bc call dword ptr [0x1218339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218339c))), 0x1215e0c2u);
  /* 1215e0c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215e0c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e0c9 jne 0x1215e0e2 */
  if (!C.zf) goto L_1215e0e2;
  /* 1215e0cb call dword ptr [0x12183390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183390))), 0x1215e0d1u);
  /* 1215e0d1 push eax */
  push32((uint32_t)(EAX));
  /* 1215e0d2 call 0x1215c8c0 */
  push32(0x1215e0d7u); f_1215c8c0();
  /* 1215e0d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e0da or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215e0dd jmp 0x1215e170 */
  goto L_1215e170;
L_1215e0e2:;
  /* 1215e0e2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e0e6 jne 0x1215e0f3 */
  if (!C.zf) goto L_1215e0f3;
  /* 1215e0e8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1215e0eb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1215e0ee mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1215e0f1 jmp 0x1215e102 */
  goto L_1215e102;
L_1215e0f3:;
  /* 1215e0f3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e0f7 jne 0x1215e102 */
  if (!C.zf) goto L_1215e102;
  /* 1215e0f9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1215e0fc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1215e0ff mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1215e102:;
  /* 1215e102 call 0x1215dc70 */
  push32(0x1215e107u); f_1215dc70();
  /* 1215e107 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1215e10a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e10e jne 0x1215e12b */
  if (!C.zf) goto L_1215e12b;
  /* 1215e110 call 0x1215c960 */
  push32(0x1215e115u); f_1215c960();
  /* 1215e115 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1215e11b call 0x1215c970 */
  push32(0x1215e120u); f_1215c970();
  /* 1215e120 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1215e126 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215e129 jmp 0x1215e170 */
  goto L_1215e170;
L_1215e12b:;
  /* 1215e12b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e12e push eax */
  push32((uint32_t)(EAX));
  /* 1215e12f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e132 push ecx */
  push32((uint32_t)(ECX));
  /* 1215e133 call 0x1215de60 */
  push32(0x1215e138u); f_1215de60();
  /* 1215e138 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e13b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1215e13e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1215e141 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1215e144 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e147 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1215e14a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e14d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1215e150 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215e153 mov edx, dword ptr [eax*4 + 0x12181fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12181fa0)));
  /* 1215e15a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1215e15d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1215e161 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e164 push ecx */
  push32((uint32_t)(ECX));
  /* 1215e165 call 0x1215e210 */
  push32(0x1215e16au); f_1215e210();
  /* 1215e16a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e16d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1215e170:;
  /* 1215e170 mov esp, ebp */
  ESP = (EBP);
  /* 1215e172 pop ebp */
  EBP = (pop32());
  /* 1215e173 ret  */
  ESPCHK(0x1215e070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e180 @ 0x1215e180 (134 bytes, 44 insns) */
void f_1215e180(void) {
  FTRACE(0x1215e180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215e180 push ebp */
  push32((uint32_t)(EBP));
  /* 1215e181 mov ebp, esp */
  EBP = (ESP);
  /* 1215e183 push ecx */
  push32((uint32_t)(ECX));
  /* 1215e184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e187 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1215e18a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e18d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1215e190 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215e193 mov edx, dword ptr [eax*4 + 0x12181fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12181fa0)));
  /* 1215e19a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e19c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1215e19f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215e1a2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e1a6 jne 0x1215e1e1 */
  if (!C.zf) goto L_1215e1e1;
  /* 1215e1a8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1215e1aa call 0x12158490 */
  push32(0x1215e1afu); f_12158490();
  /* 1215e1af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e1b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215e1b5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e1b9 jne 0x1215e1d7 */
  if (!C.zf) goto L_1215e1d7;
  /* 1215e1bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215e1be add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e1c1 push edx */
  push32((uint32_t)(EDX));
  /* 1215e1c2 call dword ptr [0x12183334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183334))), 0x1215e1c8u);
  /* 1215e1c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215e1cb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1215e1ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e1d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215e1d4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1215e1d7:;
  /* 1215e1d7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1215e1d9 call 0x12158530 */
  push32(0x1215e1deu); f_12158530();
  /* 1215e1de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215e1e1:;
  /* 1215e1e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e1e4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1215e1e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e1ea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1215e1ed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215e1f0 mov edx, dword ptr [eax*4 + 0x12181fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12181fa0)));
  /* 1215e1f7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1215e1fb push eax */
  push32((uint32_t)(EAX));
  /* 1215e1fc call dword ptr [0x12183324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183324))), 0x1215e202u);
  /* 1215e202 mov esp, ebp */
  ESP = (EBP);
  /* 1215e204 pop ebp */
  EBP = (pop32());
  /* 1215e205 ret  */
  ESPCHK(0x1215e180u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1215e210 (38 bytes, 13 insns) */
void f_1215e210(void) {
  FTRACE(0x1215e210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215e210 push ebp */
  push32((uint32_t)(EBP));
  /* 1215e211 mov ebp, esp */
  EBP = (ESP);
  /* 1215e213 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e216 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1215e219 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e21c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1215e21f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215e222 mov edx, dword ptr [eax*4 + 0x12181fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12181fa0)));
  /* 1215e229 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1215e22d push eax */
  push32((uint32_t)(EAX));
  /* 1215e22e call dword ptr [0x12183320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183320))), 0x1215e234u);
  /* 1215e234 pop ebp */
  EBP = (pop32());
  /* 1215e235 ret  */
  ESPCHK(0x1215e210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e240 @ 0x1215e240 (218 bytes, 63 insns) */
void f_1215e240(void) {
  FTRACE(0x1215e240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215e240 push ebp */
  push32((uint32_t)(EBP));
  /* 1215e241 mov ebp, esp */
  EBP = (ESP);
  /* 1215e243 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215e246 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1215e24d push 2 */
  push32((uint32_t)(0x2u));
  /* 1215e24f call 0x12158490 */
  push32(0x1215e254u); f_12158490();
  /* 1215e254 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e257 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1215e25e jmp 0x1215e269 */
  goto L_1215e269;
L_1215e260:;
  /* 1215e260 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e263 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e266 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1215e269:;
  /* 1215e269 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e26c cmp ecx, dword ptr [0x12181ca0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12181ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e272 jge 0x1215e309 */
  if ((C.sf==C.of)) goto L_1215e309;
  /* 1215e278 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e27b mov eax, dword ptr [0x12180950] */
  EAX = (r32((uint32_t)(0x12180950)));
  /* 1215e280 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e284 je 0x1215e304 */
  if (C.zf) goto L_1215e304;
  /* 1215e286 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e289 mov edx, dword ptr [0x12180950] */
  EDX = (r32((uint32_t)(0x12180950)));
  /* 1215e28f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1215e292 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1215e295 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1215e29b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215e29d je 0x1215e2c1 */
  if (C.zf) goto L_1215e2c1;
  /* 1215e29f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e2a2 mov eax, dword ptr [0x12180950] */
  EAX = (r32((uint32_t)(0x12180950)));
  /* 1215e2a7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1215e2aa push ecx */
  push32((uint32_t)(ECX));
  /* 1215e2ab call 0x1215f030 */
  push32(0x1215e2b0u); f_1215f030();
  /* 1215e2b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e2b3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e2b6 je 0x1215e2c1 */
  if (C.zf) goto L_1215e2c1;
  /* 1215e2b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215e2bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e2be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1215e2c1:;
  /* 1215e2c1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e2c5 jl 0x1215e304 */
  if ((C.sf!=C.of)) goto L_1215e304;
  /* 1215e2c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e2ca mov ecx, dword ptr [0x12180950] */
  ECX = (r32((uint32_t)(0x12180950)));
  /* 1215e2d0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1215e2d3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e2d6 push edx */
  push32((uint32_t)(EDX));
  /* 1215e2d7 call dword ptr [0x12183380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183380))), 0x1215e2ddu);
  /* 1215e2dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1215e2df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e2e2 mov ecx, dword ptr [0x12180950] */
  ECX = (r32((uint32_t)(0x12180950)));
  /* 1215e2e8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1215e2eb push edx */
  push32((uint32_t)(EDX));
  /* 1215e2ec call 0x12155520 */
  push32(0x1215e2f1u); f_12155520();
  /* 1215e2f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e2f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e2f7 mov ecx, dword ptr [0x12180950] */
  ECX = (r32((uint32_t)(0x12180950)));
  /* 1215e2fd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1215e304:;
  /* 1215e304 jmp 0x1215e260 */
  goto L_1215e260;
L_1215e309:;
  /* 1215e309 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215e30b call 0x12158530 */
  push32(0x1215e310u); f_12158530();
  /* 1215e310 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e313 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215e316 mov esp, ebp */
  ESP = (EBP);
  /* 1215e318 pop ebp */
  EBP = (pop32());
  /* 1215e319 ret  */
  ESPCHK(0x1215e240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e320 @ 0x1215e320 (68 bytes, 26 insns) */
void f_1215e320(void) {
  FTRACE(0x1215e320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215e320 push ebp */
  push32((uint32_t)(EBP));
  /* 1215e321 mov ebp, esp */
  EBP = (ESP);
  /* 1215e323 push ecx */
  push32((uint32_t)(ECX));
  /* 1215e324 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e328 jne 0x1215e336 */
  if (!C.zf) goto L_1215e336;
  /* 1215e32a push 0 */
  push32((uint32_t)(0x0u));
  /* 1215e32c call 0x1215e490 */
  push32(0x1215e331u); f_1215e490();
  /* 1215e331 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e334 jmp 0x1215e360 */
  goto L_1215e360;
L_1215e336:;
  /* 1215e336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e339 push eax */
  push32((uint32_t)(EAX));
  /* 1215e33a call 0x1215d8a0 */
  push32(0x1215e33fu); f_1215d8a0();
  /* 1215e33f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e342 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e345 push ecx */
  push32((uint32_t)(ECX));
  /* 1215e346 call 0x1215e370 */
  push32(0x1215e34bu); f_1215e370();
  /* 1215e34b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e34e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215e351 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e354 push edx */
  push32((uint32_t)(EDX));
  /* 1215e355 call 0x1215d910 */
  push32(0x1215e35au); f_1215d910();
  /* 1215e35a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e35d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1215e360:;
  /* 1215e360 mov esp, ebp */
  ESP = (EBP);
  /* 1215e362 pop ebp */
  EBP = (pop32());
  /* 1215e363 ret  */
  ESPCHK(0x1215e320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e370 @ 0x1215e370 (65 bytes, 26 insns) */
void f_1215e370(void) {
  FTRACE(0x1215e370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215e370 push ebp */
  push32((uint32_t)(EBP));
  /* 1215e371 mov ebp, esp */
  EBP = (ESP);
  /* 1215e373 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e376 push eax */
  push32((uint32_t)(EAX));
  /* 1215e377 call 0x1215e3c0 */
  push32(0x1215e37cu); f_1215e3c0();
  /* 1215e37c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e37f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215e381 je 0x1215e388 */
  if (C.zf) goto L_1215e388;
  /* 1215e383 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215e386 jmp 0x1215e3af */
  goto L_1215e3af;
L_1215e388:;
  /* 1215e388 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e38b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1215e38e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1215e394 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215e396 je 0x1215e3ad */
  if (C.zf) goto L_1215e3ad;
  /* 1215e398 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e39b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1215e39e push ecx */
  push32((uint32_t)(ECX));
  /* 1215e39f call 0x1215f180 */
  push32(0x1215e3a4u); f_1215f180();
  /* 1215e3a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e3a7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1215e3a9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215e3ab jmp 0x1215e3af */
  goto L_1215e3af;
L_1215e3ad:;
  /* 1215e3ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1215e3af:;
  /* 1215e3af pop ebp */
  EBP = (pop32());
  /* 1215e3b0 ret  */
  ESPCHK(0x1215e370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3c0 @ 0x1215e3c0 (183 bytes, 62 insns) */
void f_1215e3c0(void) {
  FTRACE(0x1215e3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215e3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215e3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1215e3c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215e3c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1215e3cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e3d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1215e3d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e3d6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1215e3d9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1215e3dc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e3df jne 0x1215e45b */
  if (!C.zf) goto L_1215e45b;
  /* 1215e3e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e3e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1215e3e7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1215e3ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215e3ef je 0x1215e45b */
  if (C.zf) goto L_1215e45b;
  /* 1215e3f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e3f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e3f7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1215e3f9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215e3fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215e3ff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e403 jle 0x1215e45b */
  if ((C.zf||C.sf!=C.of)) goto L_1215e45b;
  /* 1215e405 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215e408 push edx */
  push32((uint32_t)(EDX));
  /* 1215e409 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e40c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1215e40f push ecx */
  push32((uint32_t)(ECX));
  /* 1215e410 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e413 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1215e416 push eax */
  push32((uint32_t)(EAX));
  /* 1215e417 call 0x1215d330 */
  push32(0x1215e41cu); f_1215d330();
  /* 1215e41c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e41f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e422 jne 0x1215e445 */
  if (!C.zf) goto L_1215e445;
  /* 1215e424 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e427 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1215e42a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1215e430 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215e432 je 0x1215e443 */
  if (C.zf) goto L_1215e443;
  /* 1215e434 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e437 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1215e43a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1215e43d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e440 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1215e443:;
  /* 1215e443 jmp 0x1215e45b */
  goto L_1215e45b;
L_1215e445:;
  /* 1215e445 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e448 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1215e44b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1215e44e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e451 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1215e454 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1215e45b:;
  /* 1215e45b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e45e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e461 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1215e464 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1215e466 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215e469 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1215e470 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215e473 mov esp, ebp */
  ESP = (EBP);
  /* 1215e475 pop ebp */
  EBP = (pop32());
  /* 1215e476 ret  */
  ESPCHK(0x1215e3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e480 @ 0x1215e480 (15 bytes, 7 insns) */
void f_1215e480(void) {
  FTRACE(0x1215e480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215e480 push ebp */
  push32((uint32_t)(EBP));
  /* 1215e481 mov ebp, esp */
  EBP = (ESP);
  /* 1215e483 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215e485 call 0x1215e490 */
  push32(0x1215e48au); f_1215e490();
  /* 1215e48a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e48d pop ebp */
  EBP = (pop32());
  /* 1215e48e ret  */
  ESPCHK(0x1215e480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e490 @ 0x1215e490 (319 bytes, 94 insns) */
void f_1215e490(void) {
  FTRACE(0x1215e490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215e490 push ebp */
  push32((uint32_t)(EBP));
  /* 1215e491 mov ebp, esp */
  EBP = (ESP);
  /* 1215e493 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215e496 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1215e49d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1215e4a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215e4a6 call 0x12158490 */
  push32(0x1215e4abu); f_12158490();
  /* 1215e4ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e4ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1215e4b5 jmp 0x1215e4c0 */
  goto L_1215e4c0;
L_1215e4b7:;
  /* 1215e4b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215e4ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e4bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1215e4c0:;
  /* 1215e4c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215e4c3 cmp ecx, dword ptr [0x12181ca0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12181ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e4c9 jge 0x1215e5b3 */
  if ((C.sf==C.of)) goto L_1215e5b3;
  /* 1215e4cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215e4d2 mov eax, dword ptr [0x12180950] */
  EAX = (r32((uint32_t)(0x12180950)));
  /* 1215e4d7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e4db je 0x1215e5ae */
  if (C.zf) goto L_1215e5ae;
  /* 1215e4e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215e4e4 mov edx, dword ptr [0x12180950] */
  EDX = (r32((uint32_t)(0x12180950)));
  /* 1215e4ea mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1215e4ed mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1215e4f0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1215e4f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215e4f8 je 0x1215e5ae */
  if (C.zf) goto L_1215e5ae;
  /* 1215e4fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215e501 mov eax, dword ptr [0x12180950] */
  EAX = (r32((uint32_t)(0x12180950)));
  /* 1215e506 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1215e509 push ecx */
  push32((uint32_t)(ECX));
  /* 1215e50a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215e50d push edx */
  push32((uint32_t)(EDX));
  /* 1215e50e call 0x1215d8e0 */
  push32(0x1215e513u); f_1215d8e0();
  /* 1215e513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e516 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215e519 mov ecx, dword ptr [0x12180950] */
  ECX = (r32((uint32_t)(0x12180950)));
  /* 1215e51f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1215e522 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1215e525 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1215e52a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215e52c je 0x1215e595 */
  if (C.zf) goto L_1215e595;
  /* 1215e52e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e532 jne 0x1215e559 */
  if (!C.zf) goto L_1215e559;
  /* 1215e534 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215e537 mov edx, dword ptr [0x12180950] */
  EDX = (r32((uint32_t)(0x12180950)));
  /* 1215e53d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1215e540 push eax */
  push32((uint32_t)(EAX));
  /* 1215e541 call 0x1215e370 */
  push32(0x1215e546u); f_1215e370();
  /* 1215e546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e549 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e54c je 0x1215e557 */
  if (C.zf) goto L_1215e557;
  /* 1215e54e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215e551 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e554 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1215e557:;
  /* 1215e557 jmp 0x1215e595 */
  goto L_1215e595;
L_1215e559:;
  /* 1215e559 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e55d jne 0x1215e595 */
  if (!C.zf) goto L_1215e595;
  /* 1215e55f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215e562 mov eax, dword ptr [0x12180950] */
  EAX = (r32((uint32_t)(0x12180950)));
  /* 1215e567 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1215e56a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1215e56d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1215e570 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215e572 je 0x1215e595 */
  if (C.zf) goto L_1215e595;
  /* 1215e574 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215e577 mov ecx, dword ptr [0x12180950] */
  ECX = (r32((uint32_t)(0x12180950)));
  /* 1215e57d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1215e580 push edx */
  push32((uint32_t)(EDX));
  /* 1215e581 call 0x1215e370 */
  push32(0x1215e586u); f_1215e370();
  /* 1215e586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e589 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e58c jne 0x1215e595 */
  if (!C.zf) goto L_1215e595;
  /* 1215e58e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1215e595:;
  /* 1215e595 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215e598 mov ecx, dword ptr [0x12180950] */
  ECX = (r32((uint32_t)(0x12180950)));
  /* 1215e59e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1215e5a1 push edx */
  push32((uint32_t)(EDX));
  /* 1215e5a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215e5a5 push eax */
  push32((uint32_t)(EAX));
  /* 1215e5a6 call 0x1215d950 */
  push32(0x1215e5abu); f_1215d950();
  /* 1215e5ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215e5ae:;
  /* 1215e5ae jmp 0x1215e4b7 */
  goto L_1215e4b7;
L_1215e5b3:;
  /* 1215e5b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215e5b5 call 0x12158530 */
  push32(0x1215e5bau); f_12158530();
  /* 1215e5ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e5bd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e5c1 jne 0x1215e5c8 */
  if (!C.zf) goto L_1215e5c8;
  /* 1215e5c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215e5c6 jmp 0x1215e5cb */
  goto L_1215e5cb;
L_1215e5c8:;
  /* 1215e5c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1215e5cb:;
  /* 1215e5cb mov esp, ebp */
  ESP = (EBP);
  /* 1215e5cd pop ebp */
  EBP = (pop32());
  /* 1215e5ce ret  */
  ESPCHK(0x1215e490u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1215e5d0 (15 bytes, 7 insns) */
void f_1215e5d0(void) {
  FTRACE(0x1215e5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215e5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215e5d1 mov ebp, esp */
  EBP = (ESP);
  /* 1215e5d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215e5d5 call 0x12153a00 */
  push32(0x1215e5dau); f_12153a00();
  /* 1215e5da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e5dd pop ebp */
  EBP = (pop32());
  /* 1215e5de ret  */
  ESPCHK(0x1215e5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5e0 @ 0x1215e5e0 (1007 bytes, 269 insns) */
void f_1215e5e0(void) {
  FTRACE(0x1215e5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215e5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215e5e1 mov ebp, esp */
  EBP = (ESP);
  /* 1215e5e3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215e5e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e5ed jl 0x1215e5f5 */
  if ((C.sf!=C.of)) goto L_1215e5f5;
  /* 1215e5ef cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e5f3 jle 0x1215e5fc */
  if ((C.zf||C.sf!=C.of)) goto L_1215e5fc;
L_1215e5f5:;
  /* 1215e5f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215e5f7 jmp 0x1215e9cb */
  goto L_1215e9cb;
L_1215e5fc:;
  /* 1215e5fc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1215e5fe call 0x12158490 */
  push32(0x1215e603u); f_12158490();
  /* 1215e603 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e606 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1215e60d mov eax, dword ptr [0x1218093c] */
  EAX = (r32((uint32_t)(0x1218093c)));
  /* 1215e612 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e615 mov dword ptr [0x1218093c], eax */
  w32((uint32_t)(0x1218093c), (EAX));
L_1215e61a:;
  /* 1215e61a cmp dword ptr [0x1218094c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218094c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e621 je 0x1215e62d */
  if (C.zf) goto L_1215e62d;
  /* 1215e623 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215e625 call dword ptr [0x121832dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832dc))), 0x1215e62bu);
  /* 1215e62b jmp 0x1215e61a */
  goto L_1215e61a;
L_1215e62d:;
  /* 1215e62d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e631 je 0x1215e671 */
  if (C.zf) goto L_1215e671;
  /* 1215e633 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e637 je 0x1215e651 */
  if (C.zf) goto L_1215e651;
  /* 1215e639 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215e63c push ecx */
  push32((uint32_t)(ECX));
  /* 1215e63d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e640 push edx */
  push32((uint32_t)(EDX));
  /* 1215e641 call 0x1215e9d0 */
  push32(0x1215e646u); f_1215e9d0();
  /* 1215e646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e649 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1215e64f jmp 0x1215e663 */
  goto L_1215e663;
L_1215e651:;
  /* 1215e651 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e654 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215e657 mov ecx, dword ptr [eax + 0x1217f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1217f4dc)));
  /* 1215e65d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1215e663:;
  /* 1215e663 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1215e669 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1215e66c jmp 0x1215e9ab */
  goto L_1215e9ab;
L_1215e671:;
  /* 1215e671 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1215e678 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1215e67f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e683 je 0x1215e9a3 */
  if (C.zf) goto L_1215e9a3;
  /* 1215e689 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215e68c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1215e68f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e692 jne 0x1215e8b4 */
  if (!C.zf) goto L_1215e8b4;
  /* 1215e698 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215e69b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1215e69f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e6a2 jne 0x1215e8b4 */
  if (!C.zf) goto L_1215e8b4;
  /* 1215e6a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215e6ab movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1215e6af cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e6b2 jne 0x1215e8b4 */
  if (!C.zf) goto L_1215e8b4;
  /* 1215e6b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215e6bb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1215e6c1:;
  /* 1215e6c1 push 0x1217c174 */
  push32((uint32_t)(0x1217c174u));
  /* 1215e6c6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1215e6cc push ecx */
  push32((uint32_t)(ECX));
  /* 1215e6cd call 0x12160830 */
  push32(0x1215e6d2u); f_12160830();
  /* 1215e6d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e6d5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1215e6db cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e6e2 je 0x1215e70d */
  if (C.zf) goto L_1215e70d;
  /* 1215e6e4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1215e6ea sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215e6f0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1215e6f6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e6fd je 0x1215e70d */
  if (C.zf) goto L_1215e70d;
  /* 1215e6ff mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1215e705 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1215e708 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e70b jne 0x1215e733 */
  if (!C.zf) goto L_1215e733;
L_1215e70d:;
  /* 1215e70d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e711 je 0x1215e72c */
  if (C.zf) goto L_1215e72c;
  /* 1215e713 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1215e715 call 0x12158530 */
  push32(0x1215e71au); f_12158530();
  /* 1215e71a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e71d mov edx, dword ptr [0x1218093c] */
  EDX = (r32((uint32_t)(0x1218093c)));
  /* 1215e723 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215e726 mov dword ptr [0x1218093c], edx */
  w32((uint32_t)(0x1218093c), (EDX));
L_1215e72c:;
  /* 1215e72c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215e72e jmp 0x1215e9cb */
  goto L_1215e9cb;
L_1215e733:;
  /* 1215e733 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1215e73a jmp 0x1215e745 */
  goto L_1215e745;
L_1215e73c:;
  /* 1215e73c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215e73f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e742 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1215e745:;
  /* 1215e745 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e749 jg 0x1215e793 */
  if ((!C.zf&&C.sf==C.of)) goto L_1215e793;
  /* 1215e74b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1215e751 push ecx */
  push32((uint32_t)(ECX));
  /* 1215e752 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1215e758 push edx */
  push32((uint32_t)(EDX));
  /* 1215e759 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215e75c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215e75f mov ecx, dword ptr [eax + 0x1217f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1217f4d8)));
  /* 1215e765 push ecx */
  push32((uint32_t)(ECX));
  /* 1215e766 call 0x121607f0 */
  push32(0x1215e76bu); f_121607f0();
  /* 1215e76b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e76e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215e770 jne 0x1215e791 */
  if (!C.zf) goto L_1215e791;
  /* 1215e772 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215e775 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215e778 mov eax, dword ptr [edx + 0x1217f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1217f4d8)));
  /* 1215e77e push eax */
  push32((uint32_t)(EAX));
  /* 1215e77f call 0x121578c0 */
  push32(0x1215e784u); f_121578c0();
  /* 1215e784 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e787 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e78d jne 0x1215e791 */
  if (!C.zf) goto L_1215e791;
  /* 1215e78f jmp 0x1215e793 */
  goto L_1215e793;
L_1215e791:;
  /* 1215e791 jmp 0x1215e73c */
  goto L_1215e73c;
L_1215e793:;
  /* 1215e793 push 0x1217c170 */
  push32((uint32_t)(0x1217c170u));
  /* 1215e798 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1215e79e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e7a1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1215e7a7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1215e7ad push edx */
  push32((uint32_t)(EDX));
  /* 1215e7ae call 0x121607b0 */
  push32(0x1215e7b3u); f_121607b0();
  /* 1215e7b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e7b6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1215e7bc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e7c3 jne 0x1215e7f9 */
  if (!C.zf) goto L_1215e7f9;
  /* 1215e7c5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1215e7cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1215e7ce cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e7d1 je 0x1215e7f9 */
  if (C.zf) goto L_1215e7f9;
  /* 1215e7d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e7d7 je 0x1215e7f2 */
  if (C.zf) goto L_1215e7f2;
  /* 1215e7d9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1215e7db call 0x12158530 */
  push32(0x1215e7e0u); f_12158530();
  /* 1215e7e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e7e3 mov edx, dword ptr [0x1218093c] */
  EDX = (r32((uint32_t)(0x1218093c)));
  /* 1215e7e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215e7ec mov dword ptr [0x1218093c], edx */
  w32((uint32_t)(0x1218093c), (EDX));
L_1215e7f2:;
  /* 1215e7f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215e7f4 jmp 0x1215e9cb */
  goto L_1215e9cb;
L_1215e7f9:;
  /* 1215e7f9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e7fd jg 0x1215e84a */
  if ((!C.zf&&C.sf==C.of)) goto L_1215e84a;
  /* 1215e7ff mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1215e805 push eax */
  push32((uint32_t)(EAX));
  /* 1215e806 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1215e80c push ecx */
  push32((uint32_t)(ECX));
  /* 1215e80d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1215e813 push edx */
  push32((uint32_t)(EDX));
  /* 1215e814 call 0x121582b0 */
  push32(0x1215e819u); f_121582b0();
  /* 1215e819 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e81c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1215e822 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1215e82a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1215e830 push ecx */
  push32((uint32_t)(ECX));
  /* 1215e831 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215e834 push edx */
  push32((uint32_t)(EDX));
  /* 1215e835 call 0x1215e9d0 */
  push32(0x1215e83au); f_1215e9d0();
  /* 1215e83a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e83d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215e83f je 0x1215e84a */
  if (C.zf) goto L_1215e84a;
  /* 1215e841 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215e844 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e847 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1215e84a:;
  /* 1215e84a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1215e850 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e856 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1215e85c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1215e862 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1215e865 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215e867 je 0x1215e878 */
  if (C.zf) goto L_1215e878;
  /* 1215e869 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1215e86f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e872 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1215e878:;
  /* 1215e878 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1215e87e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1215e881 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215e883 jne 0x1215e6c1 */
  if (!C.zf) goto L_1215e6c1;
  /* 1215e889 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e88d je 0x1215e89c */
  if (C.zf) goto L_1215e89c;
  /* 1215e88f call 0x1215eb70 */
  push32(0x1215e894u); f_1215eb70();
  /* 1215e894 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1215e89a jmp 0x1215e8a6 */
  goto L_1215e8a6;
L_1215e89c:;
  /* 1215e89c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1215e8a6:;
  /* 1215e8a6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1215e8ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1215e8af jmp 0x1215e9a1 */
  goto L_1215e9a1;
L_1215e8b4:;
  /* 1215e8b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e8b7 push edx */
  push32((uint32_t)(EDX));
  /* 1215e8b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215e8ba push 0 */
  push32((uint32_t)(0x0u));
  /* 1215e8bc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1215e8c2 push eax */
  push32((uint32_t)(EAX));
  /* 1215e8c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215e8c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1215e8c7 call 0x1215ec70 */
  push32(0x1215e8ccu); f_1215ec70();
  /* 1215e8cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e8cf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1215e8d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e8d6 je 0x1215e9a1 */
  if (C.zf) goto L_1215e9a1;
  /* 1215e8dc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1215e8e3 jmp 0x1215e8ee */
  goto L_1215e8ee;
L_1215e8e5:;
  /* 1215e8e5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215e8e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e8eb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1215e8ee:;
  /* 1215e8ee cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e8f2 jg 0x1215e950 */
  if ((!C.zf&&C.sf==C.of)) goto L_1215e950;
  /* 1215e8f4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e8f8 je 0x1215e94e */
  if (C.zf) goto L_1215e94e;
  /* 1215e8fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215e8fd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215e900 mov ecx, dword ptr [eax + 0x1217f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1217f4dc)));
  /* 1215e906 push ecx */
  push32((uint32_t)(ECX));
  /* 1215e907 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1215e90d push edx */
  push32((uint32_t)(EDX));
  /* 1215e90e call 0x12160720 */
  push32(0x1215e913u); f_12160720();
  /* 1215e913 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e916 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215e918 je 0x1215e945 */
  if (C.zf) goto L_1215e945;
  /* 1215e91a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1215e920 push eax */
  push32((uint32_t)(EAX));
  /* 1215e921 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215e924 push ecx */
  push32((uint32_t)(ECX));
  /* 1215e925 call 0x1215e9d0 */
  push32(0x1215e92au); f_1215e9d0();
  /* 1215e92a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e92d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215e92f je 0x1215e93c */
  if (C.zf) goto L_1215e93c;
  /* 1215e931 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215e934 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e937 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1215e93a jmp 0x1215e943 */
  goto L_1215e943;
L_1215e93c:;
  /* 1215e93c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1215e943:;
  /* 1215e943 jmp 0x1215e94e */
  goto L_1215e94e;
L_1215e945:;
  /* 1215e945 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215e948 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e94b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1215e94e:;
  /* 1215e94e jmp 0x1215e8e5 */
  goto L_1215e8e5;
L_1215e950:;
  /* 1215e950 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e954 je 0x1215e97b */
  if (C.zf) goto L_1215e97b;
  /* 1215e956 call 0x1215eb70 */
  push32(0x1215e95bu); f_1215eb70();
  /* 1215e95b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1215e95e push 2 */
  push32((uint32_t)(0x2u));
  /* 1215e960 mov ecx, dword ptr [0x1217f4dc] */
  ECX = (r32((uint32_t)(0x1217f4dc)));
  /* 1215e966 push ecx */
  push32((uint32_t)(ECX));
  /* 1215e967 call 0x12155520 */
  push32(0x1215e96cu); f_12155520();
  /* 1215e96c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e96f mov dword ptr [0x1217f4dc], 0 */
  w32((uint32_t)(0x1217f4dc), (0x0u));
  /* 1215e979 jmp 0x1215e9a1 */
  goto L_1215e9a1;
L_1215e97b:;
  /* 1215e97b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e97f je 0x1215e98e */
  if (C.zf) goto L_1215e98e;
  /* 1215e981 call 0x1215eb70 */
  push32(0x1215e986u); f_1215eb70();
  /* 1215e986 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1215e98c jmp 0x1215e998 */
  goto L_1215e998;
L_1215e98e:;
  /* 1215e98e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1215e998:;
  /* 1215e998 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1215e99e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1215e9a1:;
  /* 1215e9a1 jmp 0x1215e9ab */
  goto L_1215e9ab;
L_1215e9a3:;
  /* 1215e9a3 call 0x1215eb70 */
  push32(0x1215e9a8u); f_1215eb70();
  /* 1215e9a8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1215e9ab:;
  /* 1215e9ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215e9af je 0x1215e9c8 */
  if (C.zf) goto L_1215e9c8;
  /* 1215e9b1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1215e9b3 call 0x12158530 */
  push32(0x1215e9b8u); f_12158530();
  /* 1215e9b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e9bb mov eax, dword ptr [0x1218093c] */
  EAX = (r32((uint32_t)(0x1218093c)));
  /* 1215e9c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215e9c3 mov dword ptr [0x1218093c], eax */
  w32((uint32_t)(0x1218093c), (EAX));
L_1215e9c8:;
  /* 1215e9c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1215e9cb:;
  /* 1215e9cb mov esp, ebp */
  ESP = (EBP);
  /* 1215e9cd pop ebp */
  EBP = (pop32());
  /* 1215e9ce ret  */
  ESPCHK(0x1215e5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9d0 @ 0x1215e9d0 (403 bytes, 117 insns) */
void f_1215e9d0(void) {
  FTRACE(0x1215e9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215e9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215e9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1215e9d3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215e9d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215e9dc push eax */
  push32((uint32_t)(EAX));
  /* 1215e9dd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1215e9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1215e9e4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1215e9ea push edx */
  push32((uint32_t)(EDX));
  /* 1215e9eb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1215e9f1 push eax */
  push32((uint32_t)(EAX));
  /* 1215e9f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215e9f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1215e9f6 call 0x1215ec70 */
  push32(0x1215e9fbu); f_1215ec70();
  /* 1215e9fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215e9fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215ea00 jne 0x1215ea09 */
  if (!C.zf) goto L_1215ea09;
  /* 1215ea02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215ea04 jmp 0x1215eb5f */
  goto L_1215eb5f;
L_1215ea09:;
  /* 1215ea09 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1215ea0e push 0x1217c178 */
  push32((uint32_t)(0x1217c178u));
  /* 1215ea13 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215ea15 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1215ea1b push edx */
  push32((uint32_t)(EDX));
  /* 1215ea1c call 0x121578c0 */
  push32(0x1215ea21u); f_121578c0();
  /* 1215ea21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ea24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ea27 push eax */
  push32((uint32_t)(EAX));
  /* 1215ea28 call 0x12154a90 */
  push32(0x1215ea2du); f_12154a90();
  /* 1215ea2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ea30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1215ea33 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ea37 jne 0x1215ea40 */
  if (!C.zf) goto L_1215ea40;
  /* 1215ea39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215ea3b jmp 0x1215eb5f */
  goto L_1215eb5f;
L_1215ea40:;
  /* 1215ea40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ea43 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215ea46 mov ecx, dword ptr [eax + 0x1217f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1217f4dc)));
  /* 1215ea4c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215ea4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ea52 mov eax, dword ptr [edx*4 + 0x121807b8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x121807b8)));
  /* 1215ea59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215ea5c push 6 */
  push32((uint32_t)(0x6u));
  /* 1215ea5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ea61 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215ea64 add ecx, 0x12180808 */
  { uint32_t _a=(ECX),_b=(0x12180808u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ea6a push ecx */
  push32((uint32_t)(ECX));
  /* 1215ea6b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1215ea6e push edx */
  push32((uint32_t)(EDX));
  /* 1215ea6f call 0x1215b370 */
  push32(0x1215ea74u); f_1215b370();
  /* 1215ea74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ea77 mov eax, dword ptr [0x121807d0] */
  EAX = (r32((uint32_t)(0x121807d0)));
  /* 1215ea7c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1215ea7f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1215ea85 push ecx */
  push32((uint32_t)(ECX));
  /* 1215ea86 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215ea89 push edx */
  push32((uint32_t)(EDX));
  /* 1215ea8a call 0x12157a40 */
  push32(0x1215ea8fu); f_12157a40();
  /* 1215ea8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ea92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ea95 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215ea98 mov dword ptr [ecx + 0x1217f4dc], eax */
  w32((uint32_t)(ECX + 0x1217f4dc), (EAX));
  /* 1215ea9e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1215eaa4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1215eaaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215eaad mov dword ptr [eax*4 + 0x121807b8], edx */
  w32((uint32_t)(EAX*4 + 0x121807b8), (EDX));
  /* 1215eab4 push 6 */
  push32((uint32_t)(0x6u));
  /* 1215eab6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1215eabc push ecx */
  push32((uint32_t)(ECX));
  /* 1215eabd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215eac0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215eac3 add edx, 0x12180808 */
  { uint32_t _a=(EDX),_b=(0x12180808u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215eac9 push edx */
  push32((uint32_t)(EDX));
  /* 1215eaca call 0x1215b370 */
  push32(0x1215eacfu); f_1215b370();
  /* 1215eacf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ead2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ead6 jne 0x1215eae3 */
  if (!C.zf) goto L_1215eae3;
  /* 1215ead8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1215eade mov dword ptr [0x121807d0], eax */
  w32((uint32_t)(0x121807d0), (EAX));
L_1215eae3:;
  /* 1215eae3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215eae7 jne 0x1215eaf5 */
  if (!C.zf) goto L_1215eaf5;
  /* 1215eae9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1215eaef mov dword ptr [0x121807d4], ecx */
  w32((uint32_t)(0x121807d4), (ECX));
L_1215eaf5:;
  /* 1215eaf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215eaf8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215eafb call dword ptr [edx + 0x1217f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1217f4e0))), 0x1215eb01u);
  /* 1215eb01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215eb03 je 0x1215eb3c */
  if (C.zf) goto L_1215eb3c;
  /* 1215eb05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215eb08 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215eb0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215eb0e mov dword ptr [eax + 0x1217f4dc], ecx */
  w32((uint32_t)(EAX + 0x1217f4dc), (ECX));
  /* 1215eb14 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215eb16 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215eb19 push edx */
  push32((uint32_t)(EDX));
  /* 1215eb1a call 0x12155520 */
  push32(0x1215eb1fu); f_12155520();
  /* 1215eb1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215eb22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215eb25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215eb28 mov dword ptr [eax*4 + 0x121807b8], ecx */
  w32((uint32_t)(EAX*4 + 0x121807b8), (ECX));
  /* 1215eb2f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215eb32 mov dword ptr [0x121807d0], edx */
  w32((uint32_t)(0x121807d0), (EDX));
  /* 1215eb38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215eb3a jmp 0x1215eb5f */
  goto L_1215eb5f;
L_1215eb3c:;
  /* 1215eb3c cmp dword ptr [ebp - 0xc], 0x1217f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1217f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215eb43 je 0x1215eb53 */
  if (C.zf) goto L_1215eb53;
  /* 1215eb45 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215eb47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215eb4a push eax */
  push32((uint32_t)(EAX));
  /* 1215eb4b call 0x12155520 */
  push32(0x1215eb50u); f_12155520();
  /* 1215eb50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215eb53:;
  /* 1215eb53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215eb56 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215eb59 mov eax, dword ptr [ecx + 0x1217f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1217f4dc)));
L_1215eb5f:;
  /* 1215eb5f mov esp, ebp */
  ESP = (EBP);
  /* 1215eb61 pop ebp */
  EBP = (pop32());
  /* 1215eb62 ret  */
  ESPCHK(0x1215e9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb70 @ 0x1215eb70 (256 bytes, 72 insns) */
void f_1215eb70(void) {
  FTRACE(0x1215eb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215eb70 push ebp */
  push32((uint32_t)(EBP));
  /* 1215eb71 mov ebp, esp */
  EBP = (ESP);
  /* 1215eb73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215eb76 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1215eb7d cmp dword ptr [0x1217f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1217f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215eb84 jne 0x1215eba4 */
  if (!C.zf) goto L_1215eba4;
  /* 1215eb86 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1215eb8b push 0x1217c178 */
  push32((uint32_t)(0x1217c178u));
  /* 1215eb90 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215eb92 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1215eb97 call 0x12154a90 */
  push32(0x1215eb9cu); f_12154a90();
  /* 1215eb9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215eb9f mov dword ptr [0x1217f4dc], eax */
  w32((uint32_t)(0x1217f4dc), (EAX));
L_1215eba4:;
  /* 1215eba4 mov eax, dword ptr [0x1217f4dc] */
  EAX = (r32((uint32_t)(0x1217f4dc)));
  /* 1215eba9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1215ebac mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1215ebb3 jmp 0x1215ebbe */
  goto L_1215ebbe;
L_1215ebb5:;
  /* 1215ebb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ebb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ebbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1215ebbe:;
  /* 1215ebbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ebc1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215ebc4 mov eax, dword ptr [edx + 0x1217f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1217f4dc)));
  /* 1215ebca push eax */
  push32((uint32_t)(EAX));
  /* 1215ebcb push 0x1217c184 */
  push32((uint32_t)(0x1217c184u));
  /* 1215ebd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ebd3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215ebd6 mov edx, dword ptr [ecx + 0x1217f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1217f4d8)));
  /* 1215ebdc push edx */
  push32((uint32_t)(EDX));
  /* 1215ebdd push 3 */
  push32((uint32_t)(0x3u));
  /* 1215ebdf mov eax, dword ptr [0x1217f4dc] */
  EAX = (r32((uint32_t)(0x1217f4dc)));
  /* 1215ebe4 push eax */
  push32((uint32_t)(EAX));
  /* 1215ebe5 call 0x1215ee10 */
  push32(0x1215ebeau); f_1215ee10();
  /* 1215ebea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ebed cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ebf1 jge 0x1215ec39 */
  if ((C.sf==C.of)) goto L_1215ec39;
  /* 1215ebf3 push 0x1217c170 */
  push32((uint32_t)(0x1217c170u));
  /* 1215ebf8 mov ecx, dword ptr [0x1217f4dc] */
  ECX = (r32((uint32_t)(0x1217f4dc)));
  /* 1215ebfe push ecx */
  push32((uint32_t)(ECX));
  /* 1215ebff call 0x12157a50 */
  push32(0x1215ec04u); f_12157a50();
  /* 1215ec04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ec07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ec0a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ec0d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215ec10 mov eax, dword ptr [edx + 0x1217f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1217f4dc)));
  /* 1215ec16 push eax */
  push32((uint32_t)(EAX));
  /* 1215ec17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ec1a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215ec1d mov edx, dword ptr [ecx + 0x1217f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1217f4dc)));
  /* 1215ec23 push edx */
  push32((uint32_t)(EDX));
  /* 1215ec24 call 0x12160720 */
  push32(0x1215ec29u); f_12160720();
  /* 1215ec29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ec2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215ec2e je 0x1215ec37 */
  if (C.zf) goto L_1215ec37;
  /* 1215ec30 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1215ec37:;
  /* 1215ec37 jmp 0x1215ec67 */
  goto L_1215ec67;
L_1215ec39:;
  /* 1215ec39 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ec3d jne 0x1215ec46 */
  if (!C.zf) goto L_1215ec46;
  /* 1215ec3f mov eax, dword ptr [0x1217f4dc] */
  EAX = (r32((uint32_t)(0x1217f4dc)));
  /* 1215ec44 jmp 0x1215ec6c */
  goto L_1215ec6c;
L_1215ec46:;
  /* 1215ec46 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215ec48 mov eax, dword ptr [0x1217f4dc] */
  EAX = (r32((uint32_t)(0x1217f4dc)));
  /* 1215ec4d push eax */
  push32((uint32_t)(EAX));
  /* 1215ec4e call 0x12155520 */
  push32(0x1215ec53u); f_12155520();
  /* 1215ec53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ec56 mov dword ptr [0x1217f4dc], 0 */
  w32((uint32_t)(0x1217f4dc), (0x0u));
  /* 1215ec60 mov eax, dword ptr [0x1217f4f4] */
  EAX = (r32((uint32_t)(0x1217f4f4)));
  /* 1215ec65 jmp 0x1215ec6c */
  goto L_1215ec6c;
L_1215ec67:;
  /* 1215ec67 jmp 0x1215ebb5 */
  goto L_1215ebb5;
L_1215ec6c:;
  /* 1215ec6c mov esp, ebp */
  ESP = (EBP);
  /* 1215ec6e pop ebp */
  EBP = (pop32());
  /* 1215ec6f ret  */
  ESPCHK(0x1215eb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec70 @ 0x1215ec70 (388 bytes, 115 insns) */
void f_1215ec70(void) {
  FTRACE(0x1215ec70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215ec70 push ebp */
  push32((uint32_t)(EBP));
  /* 1215ec71 mov ebp, esp */
  EBP = (ESP);
  /* 1215ec73 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215ec79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ec7d jne 0x1215ec86 */
  if (!C.zf) goto L_1215ec86;
  /* 1215ec7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215ec81 jmp 0x1215edf0 */
  goto L_1215edf0;
L_1215ec86:;
  /* 1215ec86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ec89 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1215ec8c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ec8f jne 0x1215ece0 */
  if (!C.zf) goto L_1215ece0;
  /* 1215ec91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ec94 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1215ec98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215ec9a jne 0x1215ece0 */
  if (!C.zf) goto L_1215ece0;
  /* 1215ec9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215ec9f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1215eca2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215eca5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1215eca9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ecad je 0x1215ecc9 */
  if (C.zf) goto L_1215ecc9;
  /* 1215ecaf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215ecb2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1215ecb7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215ecba mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1215ecc0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215ecc3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1215ecc9:;
  /* 1215ecc9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215eccd je 0x1215ecd8 */
  if (C.zf) goto L_1215ecd8;
  /* 1215eccf mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1215ecd2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1215ecd8:;
  /* 1215ecd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215ecdb jmp 0x1215edf0 */
  goto L_1215edf0;
L_1215ece0:;
  /* 1215ece0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ece3 push ecx */
  push32((uint32_t)(ECX));
  /* 1215ece4 push 0x1217f450 */
  push32((uint32_t)(0x1217f450u));
  /* 1215ece9 call 0x12160720 */
  push32(0x1215eceeu); f_12160720();
  /* 1215ecee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ecf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215ecf3 je 0x1215eda8 */
  if (C.zf) goto L_1215eda8;
  /* 1215ecf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ecfc push edx */
  push32((uint32_t)(EDX));
  /* 1215ecfd push 0x1217f3cc */
  push32((uint32_t)(0x1217f3ccu));
  /* 1215ed02 call 0x12160720 */
  push32(0x1215ed07u); f_12160720();
  /* 1215ed07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ed0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215ed0c je 0x1215eda8 */
  if (C.zf) goto L_1215eda8;
  /* 1215ed12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ed15 push eax */
  push32((uint32_t)(EAX));
  /* 1215ed16 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1215ed1c push ecx */
  push32((uint32_t)(ECX));
  /* 1215ed1d call 0x1215ee60 */
  push32(0x1215ed22u); f_1215ee60();
  /* 1215ed22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ed25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215ed27 je 0x1215ed30 */
  if (C.zf) goto L_1215ed30;
  /* 1215ed29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215ed2b jmp 0x1215edf0 */
  goto L_1215edf0;
L_1215ed30:;
  /* 1215ed30 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1215ed36 push edx */
  push32((uint32_t)(EDX));
  /* 1215ed37 push 0x121807e0 */
  push32((uint32_t)(0x121807e0u));
  /* 1215ed3c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1215ed42 push eax */
  push32((uint32_t)(EAX));
  /* 1215ed43 call 0x12160870 */
  push32(0x1215ed48u); f_12160870();
  /* 1215ed48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ed4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215ed4d jne 0x1215ed56 */
  if (!C.zf) goto L_1215ed56;
  /* 1215ed4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215ed51 jmp 0x1215edf0 */
  goto L_1215edf0;
L_1215ed56:;
  /* 1215ed56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215ed58 mov cx, word ptr [0x121807e4] */
  CX = (r16((uint32_t)(0x121807e4)));
  /* 1215ed5f mov dword ptr [0x121807e8], ecx */
  w32((uint32_t)(0x121807e8), (ECX));
  /* 1215ed65 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1215ed6b push edx */
  push32((uint32_t)(EDX));
  /* 1215ed6c push 0x1217f450 */
  push32((uint32_t)(0x1217f450u));
  /* 1215ed71 call 0x1215efc0 */
  push32(0x1215ed76u); f_1215efc0();
  /* 1215ed76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ed79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ed7c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1215ed7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215ed81 je 0x1215ed96 */
  if (C.zf) goto L_1215ed96;
  /* 1215ed83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ed86 push edx */
  push32((uint32_t)(EDX));
  /* 1215ed87 push 0x1217f3cc */
  push32((uint32_t)(0x1217f3ccu));
  /* 1215ed8c call 0x12157a40 */
  push32(0x1215ed91u); f_12157a40();
  /* 1215ed91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ed94 jmp 0x1215eda8 */
  goto L_1215eda8;
L_1215ed96:;
  /* 1215ed96 push 0x1217f450 */
  push32((uint32_t)(0x1217f450u));
  /* 1215ed9b push 0x1217f3cc */
  push32((uint32_t)(0x1217f3ccu));
  /* 1215eda0 call 0x12157a40 */
  push32(0x1215eda5u); f_12157a40();
  /* 1215eda5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215eda8:;
  /* 1215eda8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215edac je 0x1215edc1 */
  if (C.zf) goto L_1215edc1;
  /* 1215edae push 6 */
  push32((uint32_t)(0x6u));
  /* 1215edb0 push 0x121807e0 */
  push32((uint32_t)(0x121807e0u));
  /* 1215edb5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215edb8 push eax */
  push32((uint32_t)(EAX));
  /* 1215edb9 call 0x1215b370 */
  push32(0x1215edbeu); f_1215b370();
  /* 1215edbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215edc1:;
  /* 1215edc1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215edc5 je 0x1215edda */
  if (C.zf) goto L_1215edda;
  /* 1215edc7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1215edc9 push 0x121807e8 */
  push32((uint32_t)(0x121807e8u));
  /* 1215edce mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1215edd1 push ecx */
  push32((uint32_t)(ECX));
  /* 1215edd2 call 0x1215b370 */
  push32(0x1215edd7u); f_1215b370();
  /* 1215edd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215edda:;
  /* 1215edda push 0x1217f450 */
  push32((uint32_t)(0x1217f450u));
  /* 1215eddf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215ede2 push edx */
  push32((uint32_t)(EDX));
  /* 1215ede3 call 0x12157a40 */
  push32(0x1215ede8u); f_12157a40();
  /* 1215ede8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215edeb mov eax, 0x1217f450 */
  EAX = (0x1217f450u);
L_1215edf0:;
  /* 1215edf0 mov esp, ebp */
  ESP = (EBP);
  /* 1215edf2 pop ebp */
  EBP = (pop32());
  /* 1215edf3 ret  */
  ESPCHK(0x1215ec70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee00 @ 0x1215ee00 (7 bytes, 5 insns) */
void f_1215ee00(void) {
  FTRACE(0x1215ee00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215ee00 push ebp */
  push32((uint32_t)(EBP));
  /* 1215ee01 mov ebp, esp */
  EBP = (ESP);
  /* 1215ee03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215ee05 pop ebp */
  EBP = (pop32());
  /* 1215ee06 ret  */
  ESPCHK(0x1215ee00u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1215ee10 (79 bytes, 28 insns) */
void f_1215ee10(void) {
  FTRACE(0x1215ee10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215ee10 push ebp */
  push32((uint32_t)(EBP));
  /* 1215ee11 mov ebp, esp */
  EBP = (ESP);
  /* 1215ee13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215ee16 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1215ee19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215ee1c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1215ee23 jmp 0x1215ee2e */
  goto L_1215ee2e;
L_1215ee25:;
  /* 1215ee25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215ee28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ee2b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1215ee2e:;
  /* 1215ee2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215ee31 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ee34 jge 0x1215ee54 */
  if ((C.sf==C.of)) goto L_1215ee54;
  /* 1215ee36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ee39 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ee3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215ee3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ee42 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1215ee45 push edx */
  push32((uint32_t)(EDX));
  /* 1215ee46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ee49 push eax */
  push32((uint32_t)(EAX));
  /* 1215ee4a call 0x12157a50 */
  push32(0x1215ee4fu); f_12157a50();
  /* 1215ee4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ee52 jmp 0x1215ee25 */
  goto L_1215ee25;
L_1215ee54:;
  /* 1215ee54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1215ee5b mov esp, ebp */
  ESP = (EBP);
  /* 1215ee5d pop ebp */
  EBP = (pop32());
  /* 1215ee5e ret  */
  ESPCHK(0x1215ee10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee60 @ 0x1215ee60 (349 bytes, 122 insns) */
void f_1215ee60(void) {
  FTRACE(0x1215ee60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215ee60 push ebp */
  push32((uint32_t)(EBP));
  /* 1215ee61 mov ebp, esp */
  EBP = (ESP);
  /* 1215ee63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215ee66 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1215ee6b push 0 */
  push32((uint32_t)(0x0u));
  /* 1215ee6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ee70 push eax */
  push32((uint32_t)(EAX));
  /* 1215ee71 call 0x12158800 */
  push32(0x1215ee76u); f_12158800();
  /* 1215ee76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ee79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215ee7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1215ee7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215ee81 jne 0x1215ee8a */
  if (!C.zf) goto L_1215ee8a;
  /* 1215ee83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215ee85 jmp 0x1215efb9 */
  goto L_1215efb9;
L_1215ee8a:;
  /* 1215ee8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215ee8d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1215ee90 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ee93 jne 0x1215eec0 */
  if (!C.zf) goto L_1215eec0;
  /* 1215ee95 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215ee98 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1215ee9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215ee9e je 0x1215eec0 */
  if (C.zf) goto L_1215eec0;
  /* 1215eea0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215eea3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215eea6 push ecx */
  push32((uint32_t)(ECX));
  /* 1215eea7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215eeaa add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215eeb0 push edx */
  push32((uint32_t)(EDX));
  /* 1215eeb1 call 0x12157a40 */
  push32(0x1215eeb6u); f_12157a40();
  /* 1215eeb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215eeb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215eebb jmp 0x1215efb9 */
  goto L_1215efb9;
L_1215eec0:;
  /* 1215eec0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1215eec7 jmp 0x1215eed2 */
  goto L_1215eed2;
L_1215eec9:;
  /* 1215eec9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215eecc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215eecf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1215eed2:;
  /* 1215eed2 push 0x1217c188 */
  push32((uint32_t)(0x1217c188u));
  /* 1215eed7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215eeda push ecx */
  push32((uint32_t)(ECX));
  /* 1215eedb call 0x121607b0 */
  push32(0x1215eee0u); f_121607b0();
  /* 1215eee0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215eee3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1215eee6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215eeea jne 0x1215eef4 */
  if (!C.zf) goto L_1215eef4;
  /* 1215eeec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215eeef jmp 0x1215efb9 */
  goto L_1215efb9;
L_1215eef4:;
  /* 1215eef4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215eef7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215eefa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1215eefc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1215eeff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ef03 jne 0x1215ef2a */
  if (!C.zf) goto L_1215ef2a;
  /* 1215ef05 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ef09 jge 0x1215ef2a */
  if ((C.sf==C.of)) goto L_1215ef2a;
  /* 1215ef0b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1215ef0f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ef12 je 0x1215ef2a */
  if (C.zf) goto L_1215ef2a;
  /* 1215ef14 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215ef17 push edx */
  push32((uint32_t)(EDX));
  /* 1215ef18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215ef1b push eax */
  push32((uint32_t)(EAX));
  /* 1215ef1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ef1f push ecx */
  push32((uint32_t)(ECX));
  /* 1215ef20 call 0x121582b0 */
  push32(0x1215ef25u); f_121582b0();
  /* 1215ef25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ef28 jmp 0x1215ef90 */
  goto L_1215ef90;
L_1215ef2a:;
  /* 1215ef2a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ef2e jne 0x1215ef58 */
  if (!C.zf) goto L_1215ef58;
  /* 1215ef30 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ef34 jge 0x1215ef58 */
  if ((C.sf==C.of)) goto L_1215ef58;
  /* 1215ef36 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1215ef3a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ef3d je 0x1215ef58 */
  if (C.zf) goto L_1215ef58;
  /* 1215ef3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215ef42 push eax */
  push32((uint32_t)(EAX));
  /* 1215ef43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215ef46 push ecx */
  push32((uint32_t)(ECX));
  /* 1215ef47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ef4a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ef4d push edx */
  push32((uint32_t)(EDX));
  /* 1215ef4e call 0x121582b0 */
  push32(0x1215ef53u); f_121582b0();
  /* 1215ef53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ef56 jmp 0x1215ef90 */
  goto L_1215ef90;
L_1215ef58:;
  /* 1215ef58 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ef5c jne 0x1215ef8b */
  if (!C.zf) goto L_1215ef8b;
  /* 1215ef5e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1215ef62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215ef64 je 0x1215ef6f */
  if (C.zf) goto L_1215ef6f;
  /* 1215ef66 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1215ef6a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ef6d jne 0x1215ef8b */
  if (!C.zf) goto L_1215ef8b;
L_1215ef6f:;
  /* 1215ef6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215ef72 push edx */
  push32((uint32_t)(EDX));
  /* 1215ef73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215ef76 push eax */
  push32((uint32_t)(EAX));
  /* 1215ef77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ef7a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ef80 push ecx */
  push32((uint32_t)(ECX));
  /* 1215ef81 call 0x121582b0 */
  push32(0x1215ef86u); f_121582b0();
  /* 1215ef86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ef89 jmp 0x1215ef90 */
  goto L_1215ef90;
L_1215ef8b:;
  /* 1215ef8b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215ef8e jmp 0x1215efb9 */
  goto L_1215efb9;
L_1215ef90:;
  /* 1215ef90 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1215ef94 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ef97 jne 0x1215ef9b */
  if (!C.zf) goto L_1215ef9b;
  /* 1215ef99 jmp 0x1215efb7 */
  goto L_1215efb7;
L_1215ef9b:;
  /* 1215ef9b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1215ef9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215efa1 jne 0x1215efa5 */
  if (!C.zf) goto L_1215efa5;
  /* 1215efa3 jmp 0x1215efb7 */
  goto L_1215efb7;
L_1215efa5:;
  /* 1215efa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215efa8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215efab lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1215efaf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1215efb2 jmp 0x1215eec9 */
  goto L_1215eec9;
L_1215efb7:;
  /* 1215efb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1215efb9:;
  /* 1215efb9 mov esp, ebp */
  ESP = (EBP);
  /* 1215efbb pop ebp */
  EBP = (pop32());
  /* 1215efbc ret  */
  ESPCHK(0x1215ee60u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1215efc0 (101 bytes, 36 insns) */
void f_1215efc0(void) {
  FTRACE(0x1215efc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215efc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215efc1 mov ebp, esp */
  EBP = (ESP);
  /* 1215efc3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215efc6 push eax */
  push32((uint32_t)(EAX));
  /* 1215efc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215efca push ecx */
  push32((uint32_t)(ECX));
  /* 1215efcb call 0x12157a40 */
  push32(0x1215efd0u); f_12157a40();
  /* 1215efd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215efd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215efd6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1215efda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215efdc je 0x1215eff8 */
  if (C.zf) goto L_1215eff8;
  /* 1215efde mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215efe1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215efe4 push ecx */
  push32((uint32_t)(ECX));
  /* 1215efe5 push 0x1217c190 */
  push32((uint32_t)(0x1217c190u));
  /* 1215efea push 2 */
  push32((uint32_t)(0x2u));
  /* 1215efec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215efef push edx */
  push32((uint32_t)(EDX));
  /* 1215eff0 call 0x1215ee10 */
  push32(0x1215eff5u); f_1215ee10();
  /* 1215eff5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215eff8:;
  /* 1215eff8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215effb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1215f002 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215f004 je 0x1215f023 */
  if (C.zf) goto L_1215f023;
  /* 1215f006 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215f009 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f00f push edx */
  push32((uint32_t)(EDX));
  /* 1215f010 push 0x1217c18c */
  push32((uint32_t)(0x1217c18cu));
  /* 1215f015 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f017 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f01a push eax */
  push32((uint32_t)(EAX));
  /* 1215f01b call 0x1215ee10 */
  push32(0x1215f020u); f_1215ee10();
  /* 1215f020 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215f023:;
  /* 1215f023 pop ebp */
  EBP = (pop32());
  /* 1215f024 ret  */
  ESPCHK(0x1215efc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f030 @ 0x1215f030 (130 bytes, 50 insns) */
void f_1215f030(void) {
  FTRACE(0x1215f030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215f030 push ebp */
  push32((uint32_t)(EBP));
  /* 1215f031 mov ebp, esp */
  EBP = (ESP);
  /* 1215f033 push ecx */
  push32((uint32_t)(ECX));
  /* 1215f034 push ebx */
  push32((uint32_t)(EBX));
  /* 1215f035 push esi */
  push32((uint32_t)(ESI));
  /* 1215f036 push edi */
  push32((uint32_t)(EDI));
  /* 1215f037 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1215f03e:;
  /* 1215f03e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215f042 jne 0x1215f062 */
  if (!C.zf) goto L_1215f062;
  /* 1215f044 push 0x1217c1a0 */
  push32((uint32_t)(0x1217c1a0u));
  /* 1215f049 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215f04b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1215f04d push 0x1217c194 */
  push32((uint32_t)(0x1217c194u));
  /* 1215f052 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f054 call 0x12153b50 */
  push32(0x1215f059u); f_12153b50();
  /* 1215f059 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f05c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215f05f jne 0x1215f062 */
  if (!C.zf) goto L_1215f062;
  /* 1215f061 int3  */
  x86_unimpl("int3 @ 0x1215f061");
L_1215f062:;
  /* 1215f062 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215f064 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215f066 jne 0x1215f03e */
  if (!C.zf) goto L_1215f03e;
  /* 1215f068 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f06b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1215f06e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1215f071 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215f073 je 0x1215f081 */
  if (C.zf) goto L_1215f081;
  /* 1215f075 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f078 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1215f07f jmp 0x1215f0a8 */
  goto L_1215f0a8;
L_1215f081:;
  /* 1215f081 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f084 push ecx */
  push32((uint32_t)(ECX));
  /* 1215f085 call 0x1215d8a0 */
  push32(0x1215f08au); f_1215d8a0();
  /* 1215f08a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f08d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f090 push edx */
  push32((uint32_t)(EDX));
  /* 1215f091 call 0x1215f0c0 */
  push32(0x1215f096u); f_1215f0c0();
  /* 1215f096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f099 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215f09c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f09f push eax */
  push32((uint32_t)(EAX));
  /* 1215f0a0 call 0x1215d910 */
  push32(0x1215f0a5u); f_1215d910();
  /* 1215f0a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215f0a8:;
  /* 1215f0a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f0ab pop edi */
  EDI = (pop32());
  /* 1215f0ac pop esi */
  ESI = (pop32());
  /* 1215f0ad pop ebx */
  EBX = (pop32());
  /* 1215f0ae mov esp, ebp */
  ESP = (EBP);
  /* 1215f0b0 pop ebp */
  EBP = (pop32());
  /* 1215f0b1 ret  */
  ESPCHK(0x1215f030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0c0 @ 0x1215f0c0 (190 bytes, 67 insns) */
void f_1215f0c0(void) {
  FTRACE(0x1215f0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215f0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215f0c1 mov ebp, esp */
  EBP = (ESP);
  /* 1215f0c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215f0c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1215f0c7 push esi */
  push32((uint32_t)(ESI));
  /* 1215f0c8 push edi */
  push32((uint32_t)(EDI));
  /* 1215f0c9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1215f0d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f0d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1215f0d6:;
  /* 1215f0d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215f0da jne 0x1215f0fa */
  if (!C.zf) goto L_1215f0fa;
  /* 1215f0dc push 0x1217c044 */
  push32((uint32_t)(0x1217c044u));
  /* 1215f0e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215f0e3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1215f0e5 push 0x1217c194 */
  push32((uint32_t)(0x1217c194u));
  /* 1215f0ea push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f0ec call 0x12153b50 */
  push32(0x1215f0f1u); f_12153b50();
  /* 1215f0f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f0f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215f0f7 jne 0x1215f0fa */
  if (!C.zf) goto L_1215f0fa;
  /* 1215f0f9 int3  */
  x86_unimpl("int3 @ 0x1215f0f9");
L_1215f0fa:;
  /* 1215f0fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f0fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215f0fe jne 0x1215f0d6 */
  if (!C.zf) goto L_1215f0d6;
  /* 1215f100 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215f103 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1215f106 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1215f10b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215f10d je 0x1215f16a */
  if (C.zf) goto L_1215f16a;
  /* 1215f10f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215f112 push ecx */
  push32((uint32_t)(ECX));
  /* 1215f113 call 0x1215e3c0 */
  push32(0x1215f118u); f_1215e3c0();
  /* 1215f118 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f11b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215f11e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215f121 push edx */
  push32((uint32_t)(EDX));
  /* 1215f122 call 0x12161740 */
  push32(0x1215f127u); f_12161740();
  /* 1215f127 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f12a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215f12d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1215f130 push ecx */
  push32((uint32_t)(ECX));
  /* 1215f131 call 0x12161610 */
  push32(0x1215f136u); f_12161610();
  /* 1215f136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215f13b jge 0x1215f146 */
  if ((C.sf==C.of)) goto L_1215f146;
  /* 1215f13d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1215f144 jmp 0x1215f16a */
  goto L_1215f16a;
L_1215f146:;
  /* 1215f146 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215f149 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215f14d je 0x1215f16a */
  if (C.zf) goto L_1215f16a;
  /* 1215f14f push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f151 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215f154 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1215f157 push ecx */
  push32((uint32_t)(ECX));
  /* 1215f158 call 0x12155520 */
  push32(0x1215f15du); f_12155520();
  /* 1215f15d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f160 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215f163 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1215f16a:;
  /* 1215f16a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215f16d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1215f174 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f177 pop edi */
  EDI = (pop32());
  /* 1215f178 pop esi */
  ESI = (pop32());
  /* 1215f179 pop ebx */
  EBX = (pop32());
  /* 1215f17a mov esp, ebp */
  ESP = (EBP);
  /* 1215f17c pop ebp */
  EBP = (pop32());
  /* 1215f17d ret  */
  ESPCHK(0x1215f0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f180 @ 0x1215f180 (210 bytes, 63 insns) */
void f_1215f180(void) {
  FTRACE(0x1215f180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215f180 push ebp */
  push32((uint32_t)(EBP));
  /* 1215f181 mov ebp, esp */
  EBP = (ESP);
  /* 1215f183 push ecx */
  push32((uint32_t)(ECX));
  /* 1215f184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f187 cmp eax, dword ptr [0x121820dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121820dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215f18d jae 0x1215f1b1 */
  if (!C.cf) goto L_1215f1b1;
  /* 1215f18f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f192 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1215f195 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f198 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1215f19b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215f19e mov eax, dword ptr [ecx*4 + 0x12181fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12181fa0)));
  /* 1215f1a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1215f1aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1215f1ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215f1af jne 0x1215f1c4 */
  if (!C.zf) goto L_1215f1c4;
L_1215f1b1:;
  /* 1215f1b1 call 0x1215c960 */
  push32(0x1215f1b6u); f_1215c960();
  /* 1215f1b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1215f1bc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215f1bf jmp 0x1215f24e */
  goto L_1215f24e;
L_1215f1c4:;
  /* 1215f1c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f1c7 push edx */
  push32((uint32_t)(EDX));
  /* 1215f1c8 call 0x1215e180 */
  push32(0x1215f1cdu); f_1215e180();
  /* 1215f1cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f1d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f1d3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1215f1d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f1d9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1215f1dc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215f1df mov edx, dword ptr [eax*4 + 0x12181fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12181fa0)));
  /* 1215f1e6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1215f1eb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1215f1ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215f1f0 je 0x1215f22d */
  if (C.zf) goto L_1215f22d;
  /* 1215f1f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f1f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1215f1f6 call 0x1215e000 */
  push32(0x1215f1fbu); f_1215e000();
  /* 1215f1fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f1fe push eax */
  push32((uint32_t)(EAX));
  /* 1215f1ff call dword ptr [0x121832d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832d8))), 0x1215f205u);
  /* 1215f205 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215f207 jne 0x1215f214 */
  if (!C.zf) goto L_1215f214;
  /* 1215f209 call dword ptr [0x12183390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183390))), 0x1215f20fu);
  /* 1215f20f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215f212 jmp 0x1215f21b */
  goto L_1215f21b;
L_1215f214:;
  /* 1215f214 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1215f21b:;
  /* 1215f21b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215f21f jne 0x1215f223 */
  if (!C.zf) goto L_1215f223;
  /* 1215f221 jmp 0x1215f23f */
  goto L_1215f23f;
L_1215f223:;
  /* 1215f223 call 0x1215c970 */
  push32(0x1215f228u); f_1215c970();
  /* 1215f228 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f22b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1215f22d:;
  /* 1215f22d call 0x1215c960 */
  push32(0x1215f232u); f_1215c960();
  /* 1215f232 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1215f238 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1215f23f:;
  /* 1215f23f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f242 push eax */
  push32((uint32_t)(EAX));
  /* 1215f243 call 0x1215e210 */
  push32(0x1215f248u); f_1215e210();
  /* 1215f248 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f24b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1215f24e:;
  /* 1215f24e mov esp, ebp */
  ESP = (EBP);
  /* 1215f250 pop ebp */
  EBP = (pop32());
  /* 1215f251 ret  */
  ESPCHK(0x1215f180u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1215f260 (219 bytes, 64 insns) */
void f_1215f260(void) {
  FTRACE(0x1215f260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215f260 push ebp */
  push32((uint32_t)(EBP));
  /* 1215f261 mov ebp, esp */
  EBP = (ESP);
  /* 1215f263 push ecx */
  push32((uint32_t)(ECX));
  /* 1215f264 cmp dword ptr [0x121807cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121807cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215f26b je 0x1215f301 */
  if (C.zf) goto L_1215f301;
  /* 1215f271 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1215f273 push 0x1217c1b0 */
  push32((uint32_t)(0x1217c1b0u));
  /* 1215f278 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f27a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1215f27f push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f281 call 0x12154ea0 */
  push32(0x1215f286u); f_12154ea0();
  /* 1215f286 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f289 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215f28c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215f290 jne 0x1215f29c */
  if (!C.zf) goto L_1215f29c;
  /* 1215f292 mov eax, 1 */
  EAX = (0x1u);
  /* 1215f297 jmp 0x1215f337 */
  goto L_1215f337;
L_1215f29c:;
  /* 1215f29c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f29f push eax */
  push32((uint32_t)(EAX));
  /* 1215f2a0 call 0x1215f340 */
  push32(0x1215f2a5u); f_1215f340();
  /* 1215f2a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f2a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215f2aa je 0x1215f2cd */
  if (C.zf) goto L_1215f2cd;
  /* 1215f2ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f2af push ecx */
  push32((uint32_t)(ECX));
  /* 1215f2b0 call 0x1215f8d0 */
  push32(0x1215f2b5u); f_1215f8d0();
  /* 1215f2b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f2b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f2ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f2bd push edx */
  push32((uint32_t)(EDX));
  /* 1215f2be call 0x12155520 */
  push32(0x1215f2c3u); f_12155520();
  /* 1215f2c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f2c6 mov eax, 1 */
  EAX = (0x1u);
  /* 1215f2cb jmp 0x1215f337 */
  goto L_1215f337;
L_1215f2cd:;
  /* 1215f2cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f2d0 mov dword ptr [0x1217fc98], eax */
  w32((uint32_t)(0x1217fc98), (EAX));
  /* 1215f2d5 mov ecx, dword ptr [0x121807ec] */
  ECX = (r32((uint32_t)(0x121807ec)));
  /* 1215f2db push ecx */
  push32((uint32_t)(ECX));
  /* 1215f2dc call 0x1215f8d0 */
  push32(0x1215f2e1u); f_1215f8d0();
  /* 1215f2e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f2e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f2e6 mov edx, dword ptr [0x121807ec] */
  EDX = (r32((uint32_t)(0x121807ec)));
  /* 1215f2ec push edx */
  push32((uint32_t)(EDX));
  /* 1215f2ed call 0x12155520 */
  push32(0x1215f2f2u); f_12155520();
  /* 1215f2f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f2f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f2f8 mov dword ptr [0x121807ec], eax */
  w32((uint32_t)(0x121807ec), (EAX));
  /* 1215f2fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215f2ff jmp 0x1215f337 */
  goto L_1215f337;
L_1215f301:;
  /* 1215f301 mov dword ptr [0x1217fc98], 0x1217fca0 */
  w32((uint32_t)(0x1217fc98), (0x1217fca0u));
  /* 1215f30b mov ecx, dword ptr [0x121807ec] */
  ECX = (r32((uint32_t)(0x121807ec)));
  /* 1215f311 push ecx */
  push32((uint32_t)(ECX));
  /* 1215f312 call 0x1215f8d0 */
  push32(0x1215f317u); f_1215f8d0();
  /* 1215f317 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f31a push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f31c mov edx, dword ptr [0x121807ec] */
  EDX = (r32((uint32_t)(0x121807ec)));
  /* 1215f322 push edx */
  push32((uint32_t)(EDX));
  /* 1215f323 call 0x12155520 */
  push32(0x1215f328u); f_12155520();
  /* 1215f328 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f32b mov dword ptr [0x121807ec], 0 */
  w32((uint32_t)(0x121807ec), (0x0u));
  /* 1215f335 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1215f337:;
  /* 1215f337 mov esp, ebp */
  ESP = (EBP);
  /* 1215f339 pop ebp */
  EBP = (pop32());
  /* 1215f33a ret  */
  ESPCHK(0x1215f260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f340 @ 0x1215f340 (1423 bytes, 533 insns) */
void f_1215f340(void) {
  FTRACE(0x1215f340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215f340 push ebp */
  push32((uint32_t)(EBP));
  /* 1215f341 mov ebp, esp */
  EBP = (ESP);
  /* 1215f343 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215f346 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1215f34d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215f34f mov ax, word ptr [0x12180826] */
  AX = (r16((uint32_t)(0x12180826)));
  /* 1215f355 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215f358 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f35a mov cx, word ptr [0x12180828] */
  CX = (r16((uint32_t)(0x12180828)));
  /* 1215f361 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1215f364 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215f368 jne 0x1215f372 */
  if (!C.zf) goto L_1215f372;
  /* 1215f36a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215f36d jmp 0x1215f8cb */
  goto L_1215f8cb;
L_1215f372:;
  /* 1215f372 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f375 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f378 push edx */
  push32((uint32_t)(EDX));
  /* 1215f379 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1215f37b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f37e push eax */
  push32((uint32_t)(EAX));
  /* 1215f37f push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f381 call 0x12162c50 */
  push32(0x1215f386u); f_12162c50();
  /* 1215f386 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f389 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f38c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f38e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f391 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f394 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f397 push edx */
  push32((uint32_t)(EDX));
  /* 1215f398 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1215f39a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f39d push eax */
  push32((uint32_t)(EAX));
  /* 1215f39e push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f3a0 call 0x12162c50 */
  push32(0x1215f3a5u); f_12162c50();
  /* 1215f3a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f3a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f3ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f3ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f3b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f3b3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f3b6 push edx */
  push32((uint32_t)(EDX));
  /* 1215f3b7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1215f3b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f3bc push eax */
  push32((uint32_t)(EAX));
  /* 1215f3bd push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f3bf call 0x12162c50 */
  push32(0x1215f3c4u); f_12162c50();
  /* 1215f3c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f3c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f3ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f3cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f3cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f3d2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f3d5 push edx */
  push32((uint32_t)(EDX));
  /* 1215f3d6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1215f3d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f3db push eax */
  push32((uint32_t)(EAX));
  /* 1215f3dc push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f3de call 0x12162c50 */
  push32(0x1215f3e3u); f_12162c50();
  /* 1215f3e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f3e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f3e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f3eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f3ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f3f1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f3f4 push edx */
  push32((uint32_t)(EDX));
  /* 1215f3f5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1215f3f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f3fa push eax */
  push32((uint32_t)(EAX));
  /* 1215f3fb push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f3fd call 0x12162c50 */
  push32(0x1215f402u); f_12162c50();
  /* 1215f402 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f405 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f408 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f40a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f40d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f410 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f413 push edx */
  push32((uint32_t)(EDX));
  /* 1215f414 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1215f416 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f419 push eax */
  push32((uint32_t)(EAX));
  /* 1215f41a push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f41c call 0x12162c50 */
  push32(0x1215f421u); f_12162c50();
  /* 1215f421 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f424 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f427 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f429 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f42c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f42f push edx */
  push32((uint32_t)(EDX));
  /* 1215f430 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1215f432 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f435 push eax */
  push32((uint32_t)(EAX));
  /* 1215f436 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f438 call 0x12162c50 */
  push32(0x1215f43du); f_12162c50();
  /* 1215f43d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f440 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f443 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f445 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f448 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f44b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f44e push edx */
  push32((uint32_t)(EDX));
  /* 1215f44f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1215f451 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f454 push eax */
  push32((uint32_t)(EAX));
  /* 1215f455 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f457 call 0x12162c50 */
  push32(0x1215f45cu); f_12162c50();
  /* 1215f45c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f45f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f462 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f464 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f467 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f46a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f46d push edx */
  push32((uint32_t)(EDX));
  /* 1215f46e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1215f470 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f473 push eax */
  push32((uint32_t)(EAX));
  /* 1215f474 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f476 call 0x12162c50 */
  push32(0x1215f47bu); f_12162c50();
  /* 1215f47b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f47e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f481 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f483 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f486 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f489 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f48c push edx */
  push32((uint32_t)(EDX));
  /* 1215f48d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1215f48f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f492 push eax */
  push32((uint32_t)(EAX));
  /* 1215f493 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f495 call 0x12162c50 */
  push32(0x1215f49au); f_12162c50();
  /* 1215f49a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f49d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f4a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f4a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f4a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f4a8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f4ab push edx */
  push32((uint32_t)(EDX));
  /* 1215f4ac push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1215f4ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f4b1 push eax */
  push32((uint32_t)(EAX));
  /* 1215f4b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f4b4 call 0x12162c50 */
  push32(0x1215f4b9u); f_12162c50();
  /* 1215f4b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f4bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f4bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f4c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f4c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f4c7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f4ca push edx */
  push32((uint32_t)(EDX));
  /* 1215f4cb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1215f4cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f4d0 push eax */
  push32((uint32_t)(EAX));
  /* 1215f4d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f4d3 call 0x12162c50 */
  push32(0x1215f4d8u); f_12162c50();
  /* 1215f4d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f4db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f4de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f4e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f4e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f4e6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f4e9 push edx */
  push32((uint32_t)(EDX));
  /* 1215f4ea push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1215f4ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f4ef push eax */
  push32((uint32_t)(EAX));
  /* 1215f4f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f4f2 call 0x12162c50 */
  push32(0x1215f4f7u); f_12162c50();
  /* 1215f4f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f4fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f4fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f4ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f502 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f505 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f508 push edx */
  push32((uint32_t)(EDX));
  /* 1215f509 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1215f50b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f50e push eax */
  push32((uint32_t)(EAX));
  /* 1215f50f push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f511 call 0x12162c50 */
  push32(0x1215f516u); f_12162c50();
  /* 1215f516 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f519 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f51c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f51e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f521 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f524 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f527 push edx */
  push32((uint32_t)(EDX));
  /* 1215f528 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1215f52a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f52d push eax */
  push32((uint32_t)(EAX));
  /* 1215f52e push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f530 call 0x12162c50 */
  push32(0x1215f535u); f_12162c50();
  /* 1215f535 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f538 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f53b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f53d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f540 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f543 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f546 push edx */
  push32((uint32_t)(EDX));
  /* 1215f547 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1215f549 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f54c push eax */
  push32((uint32_t)(EAX));
  /* 1215f54d push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f54f call 0x12162c50 */
  push32(0x1215f554u); f_12162c50();
  /* 1215f554 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f557 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f55a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f55c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f55f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f562 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f565 push edx */
  push32((uint32_t)(EDX));
  /* 1215f566 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1215f568 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f56b push eax */
  push32((uint32_t)(EAX));
  /* 1215f56c push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f56e call 0x12162c50 */
  push32(0x1215f573u); f_12162c50();
  /* 1215f573 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f576 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f579 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f57b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f57e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f581 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f584 push edx */
  push32((uint32_t)(EDX));
  /* 1215f585 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1215f587 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f58a push eax */
  push32((uint32_t)(EAX));
  /* 1215f58b push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f58d call 0x12162c50 */
  push32(0x1215f592u); f_12162c50();
  /* 1215f592 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f595 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f598 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f59a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f59d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f5a0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f5a3 push edx */
  push32((uint32_t)(EDX));
  /* 1215f5a4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1215f5a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f5a9 push eax */
  push32((uint32_t)(EAX));
  /* 1215f5aa push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f5ac call 0x12162c50 */
  push32(0x1215f5b1u); f_12162c50();
  /* 1215f5b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f5b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f5b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f5b9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f5bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f5bf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f5c2 push edx */
  push32((uint32_t)(EDX));
  /* 1215f5c3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1215f5c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f5c8 push eax */
  push32((uint32_t)(EAX));
  /* 1215f5c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f5cb call 0x12162c50 */
  push32(0x1215f5d0u); f_12162c50();
  /* 1215f5d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f5d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f5d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f5d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f5db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f5de add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f5e1 push edx */
  push32((uint32_t)(EDX));
  /* 1215f5e2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1215f5e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f5e7 push eax */
  push32((uint32_t)(EAX));
  /* 1215f5e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f5ea call 0x12162c50 */
  push32(0x1215f5efu); f_12162c50();
  /* 1215f5ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f5f2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f5f5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f5f7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f5fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f5fd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f600 push edx */
  push32((uint32_t)(EDX));
  /* 1215f601 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1215f603 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f606 push eax */
  push32((uint32_t)(EAX));
  /* 1215f607 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f609 call 0x12162c50 */
  push32(0x1215f60eu); f_12162c50();
  /* 1215f60e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f611 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f614 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f616 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f619 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f61c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f61f push edx */
  push32((uint32_t)(EDX));
  /* 1215f620 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1215f622 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f625 push eax */
  push32((uint32_t)(EAX));
  /* 1215f626 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f628 call 0x12162c50 */
  push32(0x1215f62du); f_12162c50();
  /* 1215f62d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f630 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f633 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f635 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f638 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f63b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f63e push edx */
  push32((uint32_t)(EDX));
  /* 1215f63f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1215f641 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f644 push eax */
  push32((uint32_t)(EAX));
  /* 1215f645 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f647 call 0x12162c50 */
  push32(0x1215f64cu); f_12162c50();
  /* 1215f64c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f64f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f652 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f654 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f657 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f65a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f65d push edx */
  push32((uint32_t)(EDX));
  /* 1215f65e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1215f660 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f663 push eax */
  push32((uint32_t)(EAX));
  /* 1215f664 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f666 call 0x12162c50 */
  push32(0x1215f66bu); f_12162c50();
  /* 1215f66b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f66e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f671 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f673 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f676 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f679 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f67c push edx */
  push32((uint32_t)(EDX));
  /* 1215f67d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1215f67f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f682 push eax */
  push32((uint32_t)(EAX));
  /* 1215f683 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f685 call 0x12162c50 */
  push32(0x1215f68au); f_12162c50();
  /* 1215f68a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f68d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f690 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f692 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f695 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f698 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f69b push edx */
  push32((uint32_t)(EDX));
  /* 1215f69c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1215f69e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f6a1 push eax */
  push32((uint32_t)(EAX));
  /* 1215f6a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f6a4 call 0x12162c50 */
  push32(0x1215f6a9u); f_12162c50();
  /* 1215f6a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f6ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f6af or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f6b1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f6b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f6b7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f6ba push edx */
  push32((uint32_t)(EDX));
  /* 1215f6bb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1215f6bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f6c0 push eax */
  push32((uint32_t)(EAX));
  /* 1215f6c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f6c3 call 0x12162c50 */
  push32(0x1215f6c8u); f_12162c50();
  /* 1215f6c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f6cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f6ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f6d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f6d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f6d6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f6d9 push edx */
  push32((uint32_t)(EDX));
  /* 1215f6da push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1215f6dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f6df push eax */
  push32((uint32_t)(EAX));
  /* 1215f6e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f6e2 call 0x12162c50 */
  push32(0x1215f6e7u); f_12162c50();
  /* 1215f6e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f6ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f6ed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f6ef mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f6f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f6f5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f6f8 push edx */
  push32((uint32_t)(EDX));
  /* 1215f6f9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1215f6fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f6fe push eax */
  push32((uint32_t)(EAX));
  /* 1215f6ff push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f701 call 0x12162c50 */
  push32(0x1215f706u); f_12162c50();
  /* 1215f706 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f709 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f70c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f70e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f711 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f714 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f717 push edx */
  push32((uint32_t)(EDX));
  /* 1215f718 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1215f71a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f71d push eax */
  push32((uint32_t)(EAX));
  /* 1215f71e push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f720 call 0x12162c50 */
  push32(0x1215f725u); f_12162c50();
  /* 1215f725 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f728 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f72b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f72d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f730 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f733 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f736 push edx */
  push32((uint32_t)(EDX));
  /* 1215f737 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1215f739 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f73c push eax */
  push32((uint32_t)(EAX));
  /* 1215f73d push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f73f call 0x12162c50 */
  push32(0x1215f744u); f_12162c50();
  /* 1215f744 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f747 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f74a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f74c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f74f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f752 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f758 push edx */
  push32((uint32_t)(EDX));
  /* 1215f759 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1215f75b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f75e push eax */
  push32((uint32_t)(EAX));
  /* 1215f75f push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f761 call 0x12162c50 */
  push32(0x1215f766u); f_12162c50();
  /* 1215f766 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f769 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f76c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f76e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f771 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f774 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f77a push edx */
  push32((uint32_t)(EDX));
  /* 1215f77b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1215f77d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f780 push eax */
  push32((uint32_t)(EAX));
  /* 1215f781 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f783 call 0x12162c50 */
  push32(0x1215f788u); f_12162c50();
  /* 1215f788 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f78b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f78e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f790 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f793 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f796 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f79c push edx */
  push32((uint32_t)(EDX));
  /* 1215f79d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1215f79f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f7a2 push eax */
  push32((uint32_t)(EAX));
  /* 1215f7a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f7a5 call 0x12162c50 */
  push32(0x1215f7aau); f_12162c50();
  /* 1215f7aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f7ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f7b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f7b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f7b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f7b8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f7be push edx */
  push32((uint32_t)(EDX));
  /* 1215f7bf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1215f7c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f7c4 push eax */
  push32((uint32_t)(EAX));
  /* 1215f7c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f7c7 call 0x12162c50 */
  push32(0x1215f7ccu); f_12162c50();
  /* 1215f7cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f7cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f7d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f7d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f7d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f7da add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f7e0 push edx */
  push32((uint32_t)(EDX));
  /* 1215f7e1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1215f7e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f7e6 push eax */
  push32((uint32_t)(EAX));
  /* 1215f7e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f7e9 call 0x12162c50 */
  push32(0x1215f7eeu); f_12162c50();
  /* 1215f7ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f7f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f7f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f7f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f7f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f7fc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f802 push edx */
  push32((uint32_t)(EDX));
  /* 1215f803 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1215f805 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f808 push eax */
  push32((uint32_t)(EAX));
  /* 1215f809 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f80b call 0x12162c50 */
  push32(0x1215f810u); f_12162c50();
  /* 1215f810 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f813 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f816 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f818 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f81b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f81e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f824 push edx */
  push32((uint32_t)(EDX));
  /* 1215f825 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1215f827 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f82a push eax */
  push32((uint32_t)(EAX));
  /* 1215f82b push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f82d call 0x12162c50 */
  push32(0x1215f832u); f_12162c50();
  /* 1215f832 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f835 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f838 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f83a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f83d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f840 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f846 push edx */
  push32((uint32_t)(EDX));
  /* 1215f847 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1215f849 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215f84c push eax */
  push32((uint32_t)(EAX));
  /* 1215f84d push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f84f call 0x12162c50 */
  push32(0x1215f854u); f_12162c50();
  /* 1215f854 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f857 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f85a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f85c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f85f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f862 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f868 push edx */
  push32((uint32_t)(EDX));
  /* 1215f869 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1215f86b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215f86e push eax */
  push32((uint32_t)(EAX));
  /* 1215f86f push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f871 call 0x12162c50 */
  push32(0x1215f876u); f_12162c50();
  /* 1215f876 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f879 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f87c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f87e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f881 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f884 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f88a push edx */
  push32((uint32_t)(EDX));
  /* 1215f88b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1215f88d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215f890 push eax */
  push32((uint32_t)(EAX));
  /* 1215f891 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f893 call 0x12162c50 */
  push32(0x1215f898u); f_12162c50();
  /* 1215f898 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f89b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f89e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f8a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f8a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f8a6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f8ac push edx */
  push32((uint32_t)(EDX));
  /* 1215f8ad push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1215f8b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215f8b5 push eax */
  push32((uint32_t)(EAX));
  /* 1215f8b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215f8b8 call 0x12162c50 */
  push32(0x1215f8bdu); f_12162c50();
  /* 1215f8bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f8c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215f8c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215f8c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215f8c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1215f8cb:;
  /* 1215f8cb mov esp, ebp */
  ESP = (EBP);
  /* 1215f8cd pop ebp */
  EBP = (pop32());
  /* 1215f8ce ret  */
  ESPCHK(0x1215f340u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1215f8d0 (779 bytes, 265 insns) */
void f_1215f8d0(void) {
  FTRACE(0x1215f8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215f8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215f8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1215f8d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215f8d7 jne 0x1215f8de */
  if (!C.zf) goto L_1215f8de;
  /* 1215f8d9 jmp 0x1215fbd9 */
  goto L_1215fbd9;
L_1215f8de:;
  /* 1215f8de push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f8e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f8e3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1215f8e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1215f8e7 call 0x12155520 */
  push32(0x1215f8ecu); f_12155520();
  /* 1215f8ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f8ef push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f8f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f8f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1215f8f7 push eax */
  push32((uint32_t)(EAX));
  /* 1215f8f8 call 0x12155520 */
  push32(0x1215f8fdu); f_12155520();
  /* 1215f8fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f900 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f902 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f905 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1215f908 push edx */
  push32((uint32_t)(EDX));
  /* 1215f909 call 0x12155520 */
  push32(0x1215f90eu); f_12155520();
  /* 1215f90e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f911 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f916 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1215f919 push ecx */
  push32((uint32_t)(ECX));
  /* 1215f91a call 0x12155520 */
  push32(0x1215f91fu); f_12155520();
  /* 1215f91f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f922 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f924 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f927 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1215f92a push eax */
  push32((uint32_t)(EAX));
  /* 1215f92b call 0x12155520 */
  push32(0x1215f930u); f_12155520();
  /* 1215f930 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f933 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f935 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f938 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1215f93b push edx */
  push32((uint32_t)(EDX));
  /* 1215f93c call 0x12155520 */
  push32(0x1215f941u); f_12155520();
  /* 1215f941 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f944 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f949 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1215f94b push ecx */
  push32((uint32_t)(ECX));
  /* 1215f94c call 0x12155520 */
  push32(0x1215f951u); f_12155520();
  /* 1215f951 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f954 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f956 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f959 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1215f95c push eax */
  push32((uint32_t)(EAX));
  /* 1215f95d call 0x12155520 */
  push32(0x1215f962u); f_12155520();
  /* 1215f962 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f965 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f967 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f96a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1215f96d push edx */
  push32((uint32_t)(EDX));
  /* 1215f96e call 0x12155520 */
  push32(0x1215f973u); f_12155520();
  /* 1215f973 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f976 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f978 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f97b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1215f97e push ecx */
  push32((uint32_t)(ECX));
  /* 1215f97f call 0x12155520 */
  push32(0x1215f984u); f_12155520();
  /* 1215f984 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f987 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f989 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f98c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1215f98f push eax */
  push32((uint32_t)(EAX));
  /* 1215f990 call 0x12155520 */
  push32(0x1215f995u); f_12155520();
  /* 1215f995 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f998 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f99a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f99d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1215f9a0 push edx */
  push32((uint32_t)(EDX));
  /* 1215f9a1 call 0x12155520 */
  push32(0x1215f9a6u); f_12155520();
  /* 1215f9a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f9a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f9ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f9ae mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1215f9b1 push ecx */
  push32((uint32_t)(ECX));
  /* 1215f9b2 call 0x12155520 */
  push32(0x1215f9b7u); f_12155520();
  /* 1215f9b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f9ba push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f9bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f9bf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1215f9c2 push eax */
  push32((uint32_t)(EAX));
  /* 1215f9c3 call 0x12155520 */
  push32(0x1215f9c8u); f_12155520();
  /* 1215f9c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f9cb push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f9cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f9d0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1215f9d3 push edx */
  push32((uint32_t)(EDX));
  /* 1215f9d4 call 0x12155520 */
  push32(0x1215f9d9u); f_12155520();
  /* 1215f9d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f9dc push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f9de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f9e1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1215f9e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1215f9e5 call 0x12155520 */
  push32(0x1215f9eau); f_12155520();
  /* 1215f9ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f9ed push 2 */
  push32((uint32_t)(0x2u));
  /* 1215f9ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215f9f2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1215f9f5 push eax */
  push32((uint32_t)(EAX));
  /* 1215f9f6 call 0x12155520 */
  push32(0x1215f9fbu); f_12155520();
  /* 1215f9fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215f9fe push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fa00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fa03 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1215fa06 push edx */
  push32((uint32_t)(EDX));
  /* 1215fa07 call 0x12155520 */
  push32(0x1215fa0cu); f_12155520();
  /* 1215fa0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fa0f push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fa11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fa14 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1215fa17 push ecx */
  push32((uint32_t)(ECX));
  /* 1215fa18 call 0x12155520 */
  push32(0x1215fa1du); f_12155520();
  /* 1215fa1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fa20 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fa22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fa25 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1215fa28 push eax */
  push32((uint32_t)(EAX));
  /* 1215fa29 call 0x12155520 */
  push32(0x1215fa2eu); f_12155520();
  /* 1215fa2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fa31 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fa33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fa36 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1215fa39 push edx */
  push32((uint32_t)(EDX));
  /* 1215fa3a call 0x12155520 */
  push32(0x1215fa3fu); f_12155520();
  /* 1215fa3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fa42 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fa44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fa47 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1215fa4a push ecx */
  push32((uint32_t)(ECX));
  /* 1215fa4b call 0x12155520 */
  push32(0x1215fa50u); f_12155520();
  /* 1215fa50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fa53 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fa55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fa58 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1215fa5b push eax */
  push32((uint32_t)(EAX));
  /* 1215fa5c call 0x12155520 */
  push32(0x1215fa61u); f_12155520();
  /* 1215fa61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fa64 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fa66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fa69 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1215fa6c push edx */
  push32((uint32_t)(EDX));
  /* 1215fa6d call 0x12155520 */
  push32(0x1215fa72u); f_12155520();
  /* 1215fa72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fa75 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fa77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fa7a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1215fa7d push ecx */
  push32((uint32_t)(ECX));
  /* 1215fa7e call 0x12155520 */
  push32(0x1215fa83u); f_12155520();
  /* 1215fa83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fa86 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fa88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fa8b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1215fa8e push eax */
  push32((uint32_t)(EAX));
  /* 1215fa8f call 0x12155520 */
  push32(0x1215fa94u); f_12155520();
  /* 1215fa94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fa97 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fa99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fa9c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1215fa9f push edx */
  push32((uint32_t)(EDX));
  /* 1215faa0 call 0x12155520 */
  push32(0x1215faa5u); f_12155520();
  /* 1215faa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215faa8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215faaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215faad mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1215fab0 push ecx */
  push32((uint32_t)(ECX));
  /* 1215fab1 call 0x12155520 */
  push32(0x1215fab6u); f_12155520();
  /* 1215fab6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fab9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fabb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fabe mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1215fac1 push eax */
  push32((uint32_t)(EAX));
  /* 1215fac2 call 0x12155520 */
  push32(0x1215fac7u); f_12155520();
  /* 1215fac7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215faca push 2 */
  push32((uint32_t)(0x2u));
  /* 1215facc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215facf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1215fad2 push edx */
  push32((uint32_t)(EDX));
  /* 1215fad3 call 0x12155520 */
  push32(0x1215fad8u); f_12155520();
  /* 1215fad8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fadb push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fadd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fae0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1215fae3 push ecx */
  push32((uint32_t)(ECX));
  /* 1215fae4 call 0x12155520 */
  push32(0x1215fae9u); f_12155520();
  /* 1215fae9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215faec push 2 */
  push32((uint32_t)(0x2u));
  /* 1215faee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215faf1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1215faf4 push eax */
  push32((uint32_t)(EAX));
  /* 1215faf5 call 0x12155520 */
  push32(0x1215fafau); f_12155520();
  /* 1215fafa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fafd push 2 */
  push32((uint32_t)(0x2u));
  /* 1215faff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fb02 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1215fb08 push edx */
  push32((uint32_t)(EDX));
  /* 1215fb09 call 0x12155520 */
  push32(0x1215fb0eu); f_12155520();
  /* 1215fb0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fb11 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fb13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fb16 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1215fb1c push ecx */
  push32((uint32_t)(ECX));
  /* 1215fb1d call 0x12155520 */
  push32(0x1215fb22u); f_12155520();
  /* 1215fb22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fb25 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fb27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fb2a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1215fb30 push eax */
  push32((uint32_t)(EAX));
  /* 1215fb31 call 0x12155520 */
  push32(0x1215fb36u); f_12155520();
  /* 1215fb36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fb39 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fb3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fb3e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1215fb44 push edx */
  push32((uint32_t)(EDX));
  /* 1215fb45 call 0x12155520 */
  push32(0x1215fb4au); f_12155520();
  /* 1215fb4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fb4d push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fb4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fb52 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1215fb58 push ecx */
  push32((uint32_t)(ECX));
  /* 1215fb59 call 0x12155520 */
  push32(0x1215fb5eu); f_12155520();
  /* 1215fb5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fb61 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fb63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fb66 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1215fb6c push eax */
  push32((uint32_t)(EAX));
  /* 1215fb6d call 0x12155520 */
  push32(0x1215fb72u); f_12155520();
  /* 1215fb72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fb75 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fb77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fb7a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1215fb80 push edx */
  push32((uint32_t)(EDX));
  /* 1215fb81 call 0x12155520 */
  push32(0x1215fb86u); f_12155520();
  /* 1215fb86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fb89 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fb8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fb8e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1215fb94 push ecx */
  push32((uint32_t)(ECX));
  /* 1215fb95 call 0x12155520 */
  push32(0x1215fb9au); f_12155520();
  /* 1215fb9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fb9d push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fb9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fba2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1215fba8 push eax */
  push32((uint32_t)(EAX));
  /* 1215fba9 call 0x12155520 */
  push32(0x1215fbaeu); f_12155520();
  /* 1215fbae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fbb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fbb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fbb6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1215fbbc push edx */
  push32((uint32_t)(EDX));
  /* 1215fbbd call 0x12155520 */
  push32(0x1215fbc2u); f_12155520();
  /* 1215fbc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fbc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fbc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fbca mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1215fbd0 push ecx */
  push32((uint32_t)(ECX));
  /* 1215fbd1 call 0x12155520 */
  push32(0x1215fbd6u); f_12155520();
  /* 1215fbd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215fbd9:;
  /* 1215fbd9 pop ebp */
  EBP = (pop32());
  /* 1215fbda ret  */
  ESPCHK(0x1215f8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbe0 @ 0x1215fbe0 (678 bytes, 180 insns) */
void f_1215fbe0(void) {
  FTRACE(0x1215fbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215fbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1215fbe1 mov ebp, esp */
  EBP = (ESP);
  /* 1215fbe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215fbe6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1215fbed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215fbef mov ax, word ptr [0x12180822] */
  AX = (r16((uint32_t)(0x12180822)));
  /* 1215fbf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215fbf8 cmp dword ptr [0x121807c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121807c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215fbff je 0x1215fd5a */
  if (C.zf) goto L_1215fd5a;
  /* 1215fc05 push 0x121807f0 */
  push32((uint32_t)(0x121807f0u));
  /* 1215fc0a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1215fc0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215fc0f push ecx */
  push32((uint32_t)(ECX));
  /* 1215fc10 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215fc12 call 0x12162c50 */
  push32(0x1215fc17u); f_12162c50();
  /* 1215fc17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fc1a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215fc1d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1215fc1f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1215fc22 push 0x121807f4 */
  push32((uint32_t)(0x121807f4u));
  /* 1215fc27 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1215fc29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215fc2c push eax */
  push32((uint32_t)(EAX));
  /* 1215fc2d push 1 */
  push32((uint32_t)(0x1u));
  /* 1215fc2f call 0x12162c50 */
  push32(0x1215fc34u); f_12162c50();
  /* 1215fc34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fc37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215fc3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215fc3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1215fc3f push 0x121807f8 */
  push32((uint32_t)(0x121807f8u));
  /* 1215fc44 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1215fc46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215fc49 push edx */
  push32((uint32_t)(EDX));
  /* 1215fc4a push 1 */
  push32((uint32_t)(0x1u));
  /* 1215fc4c call 0x12162c50 */
  push32(0x1215fc51u); f_12162c50();
  /* 1215fc51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fc54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215fc57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1215fc59 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1215fc5c mov edx, dword ptr [0x121807f8] */
  EDX = (r32((uint32_t)(0x121807f8)));
  /* 1215fc62 push edx */
  push32((uint32_t)(EDX));
  /* 1215fc63 call 0x1215fe90 */
  push32(0x1215fc68u); f_1215fe90();
  /* 1215fc68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fc6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215fc6f je 0x1215fcc9 */
  if (C.zf) goto L_1215fcc9;
  /* 1215fc71 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fc73 mov eax, dword ptr [0x121807f0] */
  EAX = (r32((uint32_t)(0x121807f0)));
  /* 1215fc78 push eax */
  push32((uint32_t)(EAX));
  /* 1215fc79 call 0x12155520 */
  push32(0x1215fc7eu); f_12155520();
  /* 1215fc7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fc81 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fc83 mov ecx, dword ptr [0x121807f4] */
  ECX = (r32((uint32_t)(0x121807f4)));
  /* 1215fc89 push ecx */
  push32((uint32_t)(ECX));
  /* 1215fc8a call 0x12155520 */
  push32(0x1215fc8fu); f_12155520();
  /* 1215fc8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fc92 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fc94 mov edx, dword ptr [0x121807f8] */
  EDX = (r32((uint32_t)(0x121807f8)));
  /* 1215fc9a push edx */
  push32((uint32_t)(EDX));
  /* 1215fc9b call 0x12155520 */
  push32(0x1215fca0u); f_12155520();
  /* 1215fca0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fca3 mov dword ptr [0x121807f0], 0 */
  w32((uint32_t)(0x121807f0), (0x0u));
  /* 1215fcad mov dword ptr [0x121807f4], 0 */
  w32((uint32_t)(0x121807f4), (0x0u));
  /* 1215fcb7 mov dword ptr [0x121807f8], 0 */
  w32((uint32_t)(0x121807f8), (0x0u));
  /* 1215fcc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215fcc4 jmp 0x1215fe82 */
  goto L_1215fe82;
L_1215fcc9:;
  /* 1215fcc9 mov eax, dword ptr [0x1217fd88] */
  EAX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fcce cmp dword ptr [eax], 0x1217fd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1217fd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215fcd4 je 0x1215fd10 */
  if (C.zf) goto L_1215fd10;
  /* 1215fcd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fcd8 mov ecx, dword ptr [0x1217fd88] */
  ECX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fcde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1215fce0 push edx */
  push32((uint32_t)(EDX));
  /* 1215fce1 call 0x12155520 */
  push32(0x1215fce6u); f_12155520();
  /* 1215fce6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fce9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fceb mov eax, dword ptr [0x1217fd88] */
  EAX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fcf0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1215fcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1215fcf4 call 0x12155520 */
  push32(0x1215fcf9u); f_12155520();
  /* 1215fcf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fcfc push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fcfe mov edx, dword ptr [0x1217fd88] */
  EDX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fd04 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1215fd07 push eax */
  push32((uint32_t)(EAX));
  /* 1215fd08 call 0x12155520 */
  push32(0x1215fd0du); f_12155520();
  /* 1215fd0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215fd10:;
  /* 1215fd10 mov ecx, dword ptr [0x1217fd88] */
  ECX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fd16 mov edx, dword ptr [0x121807f0] */
  EDX = (r32((uint32_t)(0x121807f0)));
  /* 1215fd1c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1215fd1e mov eax, dword ptr [0x1217fd88] */
  EAX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fd23 mov ecx, dword ptr [0x121807f4] */
  ECX = (r32((uint32_t)(0x121807f4)));
  /* 1215fd29 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1215fd2c mov edx, dword ptr [0x1217fd88] */
  EDX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fd32 mov eax, dword ptr [0x121807f8] */
  EAX = (r32((uint32_t)(0x121807f8)));
  /* 1215fd37 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1215fd3a mov ecx, dword ptr [0x1217fd88] */
  ECX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fd40 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1215fd42 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1215fd44 mov byte ptr [0x1217eea8], al */
  w8((uint32_t)(0x1217eea8), (AL));
  /* 1215fd49 mov dword ptr [0x1217eeac], 1 */
  w32((uint32_t)(0x1217eeac), (0x1u));
  /* 1215fd53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215fd55 jmp 0x1215fe82 */
  goto L_1215fe82;
L_1215fd5a:;
  /* 1215fd5a push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fd5c mov ecx, dword ptr [0x121807f0] */
  ECX = (r32((uint32_t)(0x121807f0)));
  /* 1215fd62 push ecx */
  push32((uint32_t)(ECX));
  /* 1215fd63 call 0x12155520 */
  push32(0x1215fd68u); f_12155520();
  /* 1215fd68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fd6b push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fd6d mov edx, dword ptr [0x121807f4] */
  EDX = (r32((uint32_t)(0x121807f4)));
  /* 1215fd73 push edx */
  push32((uint32_t)(EDX));
  /* 1215fd74 call 0x12155520 */
  push32(0x1215fd79u); f_12155520();
  /* 1215fd79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fd7c push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fd7e mov eax, dword ptr [0x121807f8] */
  EAX = (r32((uint32_t)(0x121807f8)));
  /* 1215fd83 push eax */
  push32((uint32_t)(EAX));
  /* 1215fd84 call 0x12155520 */
  push32(0x1215fd89u); f_12155520();
  /* 1215fd89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fd8c mov dword ptr [0x121807f0], 0 */
  w32((uint32_t)(0x121807f0), (0x0u));
  /* 1215fd96 mov dword ptr [0x121807f4], 0 */
  w32((uint32_t)(0x121807f4), (0x0u));
  /* 1215fda0 mov dword ptr [0x121807f8], 0 */
  w32((uint32_t)(0x121807f8), (0x0u));
  /* 1215fdaa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1215fdaf push 0x1217c1bc */
  push32((uint32_t)(0x1217c1bcu));
  /* 1215fdb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fdb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fdb8 call 0x12154a90 */
  push32(0x1215fdbdu); f_12154a90();
  /* 1215fdbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fdc0 mov ecx, dword ptr [0x1217fd88] */
  ECX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fdc6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1215fdc8 mov edx, dword ptr [0x1217fd88] */
  EDX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fdce cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215fdd1 jne 0x1215fddb */
  if (!C.zf) goto L_1215fddb;
  /* 1215fdd3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215fdd6 jmp 0x1215fe82 */
  goto L_1215fe82;
L_1215fddb:;
  /* 1215fddb push 0x1217c18c */
  push32((uint32_t)(0x1217c18cu));
  /* 1215fde0 mov eax, dword ptr [0x1217fd88] */
  EAX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fde5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1215fde7 push ecx */
  push32((uint32_t)(ECX));
  /* 1215fde8 call 0x12157a40 */
  push32(0x1215fdedu); f_12157a40();
  /* 1215fded add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fdf0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1215fdf5 push 0x1217c1bc */
  push32((uint32_t)(0x1217c1bcu));
  /* 1215fdfa push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fdfc push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fdfe call 0x12154a90 */
  push32(0x1215fe03u); f_12154a90();
  /* 1215fe03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fe06 mov edx, dword ptr [0x1217fd88] */
  EDX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fe0c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1215fe0f mov eax, dword ptr [0x1217fd88] */
  EAX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fe14 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215fe18 jne 0x1215fe1f */
  if (!C.zf) goto L_1215fe1f;
  /* 1215fe1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215fe1d jmp 0x1215fe82 */
  goto L_1215fe82;
L_1215fe1f:;
  /* 1215fe1f mov ecx, dword ptr [0x1217fd88] */
  ECX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fe25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1215fe28 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1215fe2b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1215fe30 push 0x1217c1bc */
  push32((uint32_t)(0x1217c1bcu));
  /* 1215fe35 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fe37 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215fe39 call 0x12154a90 */
  push32(0x1215fe3eu); f_12154a90();
  /* 1215fe3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fe41 mov ecx, dword ptr [0x1217fd88] */
  ECX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fe47 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1215fe4a mov edx, dword ptr [0x1217fd88] */
  EDX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fe50 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215fe54 jne 0x1215fe5b */
  if (!C.zf) goto L_1215fe5b;
  /* 1215fe56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215fe59 jmp 0x1215fe82 */
  goto L_1215fe82;
L_1215fe5b:;
  /* 1215fe5b mov eax, dword ptr [0x1217fd88] */
  EAX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fe60 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1215fe63 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1215fe66 mov edx, dword ptr [0x1217fd88] */
  EDX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fe6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1215fe6e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1215fe70 mov byte ptr [0x1217eea8], cl */
  w8((uint32_t)(0x1217eea8), (CL));
  /* 1215fe76 mov dword ptr [0x1217eeac], 1 */
  w32((uint32_t)(0x1217eeac), (0x1u));
  /* 1215fe80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1215fe82:;
  /* 1215fe82 mov esp, ebp */
  ESP = (EBP);
  /* 1215fe84 pop ebp */
  EBP = (pop32());
  /* 1215fe85 ret  */
  ESPCHK(0x1215fbe0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1215fe90 (125 bytes, 49 insns) */
void f_1215fe90(void) {
  FTRACE(0x1215fe90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215fe90 push ebp */
  push32((uint32_t)(EBP));
  /* 1215fe91 mov ebp, esp */
  EBP = (ESP);
  /* 1215fe93 push ecx */
  push32((uint32_t)(ECX));
L_1215fe94:;
  /* 1215fe94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fe97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1215fe9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215fe9c je 0x1215ff09 */
  if (C.zf) goto L_1215ff09;
  /* 1215fe9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fea1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1215fea4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215fea7 jl 0x1215fecd */
  if ((C.sf!=C.of)) goto L_1215fecd;
  /* 1215fea9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215feac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1215feaf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215feb2 jg 0x1215fecd */
  if ((!C.zf&&C.sf==C.of)) goto L_1215fecd;
  /* 1215feb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215feb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1215feba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215febd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fec0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1215fec2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fec5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215fec8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1215fecb jmp 0x1215ff07 */
  goto L_1215ff07;
L_1215fecd:;
  /* 1215fecd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fed0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1215fed3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215fed6 jne 0x1215fefe */
  if (!C.zf) goto L_1215fefe;
  /* 1215fed8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215fedb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1215fede:;
  /* 1215fede mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215fee1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215fee4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1215fee7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1215fee9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215feec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215feef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1215fef2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215fef5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1215fef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215fefa jne 0x1215fede */
  if (!C.zf) goto L_1215fede;
  /* 1215fefc jmp 0x1215ff07 */
  goto L_1215ff07;
L_1215fefe:;
  /* 1215fefe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215ff01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ff04 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1215ff07:;
  /* 1215ff07 jmp 0x1215fe94 */
  goto L_1215fe94;
L_1215ff09:;
  /* 1215ff09 mov esp, ebp */
  ESP = (EBP);
  /* 1215ff0b pop ebp */
  EBP = (pop32());
  /* 1215ff0c ret  */
  ESPCHK(0x1215fe90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff10 @ 0x1215ff10 (304 bytes, 85 insns) */
void f_1215ff10(void) {
  FTRACE(0x1215ff10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215ff10 push ebp */
  push32((uint32_t)(EBP));
  /* 1215ff11 mov ebp, esp */
  EBP = (ESP);
  /* 1215ff13 push ecx */
  push32((uint32_t)(ECX));
  /* 1215ff14 cmp dword ptr [0x121807c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121807c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ff1b je 0x1215ffdc */
  if (C.zf) goto L_1215ffdc;
  /* 1215ff21 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1215ff23 push 0x1217c1c8 */
  push32((uint32_t)(0x1217c1c8u));
  /* 1215ff28 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215ff2a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1215ff2c push 1 */
  push32((uint32_t)(0x1u));
  /* 1215ff2e call 0x12154ea0 */
  push32(0x1215ff33u); f_12154ea0();
  /* 1215ff33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ff36 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215ff39 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215ff3d jne 0x1215ff49 */
  if (!C.zf) goto L_1215ff49;
  /* 1215ff3f mov eax, 1 */
  EAX = (0x1u);
  /* 1215ff44 jmp 0x1216003c */
  goto L_1216003c;
L_1215ff49:;
  /* 1215ff49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ff4c push eax */
  push32((uint32_t)(EAX));
  /* 1215ff4d call 0x12160040 */
  push32(0x1215ff52u); f_12160040();
  /* 1215ff52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ff55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215ff57 je 0x1215ff7d */
  if (C.zf) goto L_1215ff7d;
  /* 1215ff59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ff5c push ecx */
  push32((uint32_t)(ECX));
  /* 1215ff5d call 0x121602d0 */
  push32(0x1215ff62u); f_121602d0();
  /* 1215ff62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ff65 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215ff67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ff6a push edx */
  push32((uint32_t)(EDX));
  /* 1215ff6b call 0x12155520 */
  push32(0x1215ff70u); f_12155520();
  /* 1215ff70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ff73 mov eax, 1 */
  EAX = (0x1u);
  /* 1215ff78 jmp 0x1216003c */
  goto L_1216003c;
L_1215ff7d:;
  /* 1215ff7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ff80 mov ecx, dword ptr [0x1217fd88] */
  ECX = (r32((uint32_t)(0x1217fd88)));
  /* 1215ff86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1215ff88 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1215ff8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ff8d mov ecx, dword ptr [0x1217fd88] */
  ECX = (r32((uint32_t)(0x1217fd88)));
  /* 1215ff93 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1215ff96 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1215ff99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ff9c mov ecx, dword ptr [0x1217fd88] */
  ECX = (r32((uint32_t)(0x1217fd88)));
  /* 1215ffa2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1215ffa5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1215ffa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ffab mov dword ptr [0x1217fd88], eax */
  w32((uint32_t)(0x1217fd88), (EAX));
  /* 1215ffb0 mov ecx, dword ptr [0x121807fc] */
  ECX = (r32((uint32_t)(0x121807fc)));
  /* 1215ffb6 push ecx */
  push32((uint32_t)(ECX));
  /* 1215ffb7 call 0x121602d0 */
  push32(0x1215ffbcu); f_121602d0();
  /* 1215ffbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ffbf push 2 */
  push32((uint32_t)(0x2u));
  /* 1215ffc1 mov edx, dword ptr [0x121807fc] */
  EDX = (r32((uint32_t)(0x121807fc)));
  /* 1215ffc7 push edx */
  push32((uint32_t)(EDX));
  /* 1215ffc8 call 0x12155520 */
  push32(0x1215ffcdu); f_12155520();
  /* 1215ffcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215ffd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215ffd3 mov dword ptr [0x121807fc], eax */
  w32((uint32_t)(0x121807fc), (EAX));
  /* 1215ffd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215ffda jmp 0x1216003c */
  goto L_1216003c;
L_1215ffdc:;
  /* 1215ffdc mov ecx, dword ptr [0x1217fd88] */
  ECX = (r32((uint32_t)(0x1217fd88)));
  /* 1215ffe2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1215ffe4 mov dword ptr [0x1217fd58], edx */
  w32((uint32_t)(0x1217fd58), (EDX));
  /* 1215ffea mov eax, dword ptr [0x1217fd88] */
  EAX = (r32((uint32_t)(0x1217fd88)));
  /* 1215ffef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1215fff2 mov dword ptr [0x1217fd5c], ecx */
  w32((uint32_t)(0x1217fd5c), (ECX));
  /* 1215fff8 mov edx, dword ptr [0x1217fd88] */
  EDX = (r32((uint32_t)(0x1217fd88)));
  /* 1215fffe mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12160001 mov dword ptr [0x1217fd60], eax */
  w32((uint32_t)(0x1217fd60), (EAX));
  /* 12160006 mov dword ptr [0x1217fd88], 0x1217fd58 */
  w32((uint32_t)(0x1217fd88), (0x1217fd58u));
  /* 12160010 mov ecx, dword ptr [0x121807fc] */
  ECX = (r32((uint32_t)(0x121807fc)));
  /* 12160016 push ecx */
  push32((uint32_t)(ECX));
  /* 12160017 call 0x121602d0 */
  push32(0x1216001cu); f_121602d0();
  /* 1216001c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216001f push 2 */
  push32((uint32_t)(0x2u));
  /* 12160021 mov edx, dword ptr [0x121807fc] */
  EDX = (r32((uint32_t)(0x121807fc)));
  /* 12160027 push edx */
  push32((uint32_t)(EDX));
  /* 12160028 call 0x12155520 */
  push32(0x1216002du); f_12155520();
  /* 1216002d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160030 mov dword ptr [0x121807fc], 0 */
  w32((uint32_t)(0x121807fc), (0x0u));
  /* 1216003a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1216003c:;
  /* 1216003c mov esp, ebp */
  ESP = (EBP);
  /* 1216003e pop ebp */
  EBP = (pop32());
  /* 1216003f ret  */
  ESPCHK(0x1215ff10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010040 @ 0x12160040 (525 bytes, 200 insns) */
void f_12160040(void) {
  FTRACE(0x12160040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12160040 push ebp */
  push32((uint32_t)(EBP));
  /* 12160041 mov ebp, esp */
  EBP = (ESP);
  /* 12160043 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12160046 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1216004d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1216004f mov ax, word ptr [0x1218081c] */
  AX = (r16((uint32_t)(0x1218081c)));
  /* 12160055 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12160058 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216005c jne 0x12160066 */
  if (!C.zf) goto L_12160066;
  /* 1216005e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12160061 jmp 0x12160249 */
  goto L_12160249;
L_12160066:;
  /* 12160066 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160069 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216006c push ecx */
  push32((uint32_t)(ECX));
  /* 1216006d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1216006f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12160072 push edx */
  push32((uint32_t)(EDX));
  /* 12160073 push 1 */
  push32((uint32_t)(0x1u));
  /* 12160075 call 0x12162c50 */
  push32(0x1216007au); f_12162c50();
  /* 1216007a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216007d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12160080 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12160082 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12160085 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160088 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216008b push edx */
  push32((uint32_t)(EDX));
  /* 1216008c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1216008e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12160091 push eax */
  push32((uint32_t)(EAX));
  /* 12160092 push 1 */
  push32((uint32_t)(0x1u));
  /* 12160094 call 0x12162c50 */
  push32(0x12160099u); f_12162c50();
  /* 12160099 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216009c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1216009f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121600a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121600a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121600a7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121600aa push edx */
  push32((uint32_t)(EDX));
  /* 121600ab push 0x16 */
  push32((uint32_t)(0x16u));
  /* 121600ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121600b0 push eax */
  push32((uint32_t)(EAX));
  /* 121600b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 121600b3 call 0x12162c50 */
  push32(0x121600b8u); f_12162c50();
  /* 121600b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121600bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121600be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121600c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121600c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121600c6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121600c9 push edx */
  push32((uint32_t)(EDX));
  /* 121600ca push 0x17 */
  push32((uint32_t)(0x17u));
  /* 121600cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121600cf push eax */
  push32((uint32_t)(EAX));
  /* 121600d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 121600d2 call 0x12162c50 */
  push32(0x121600d7u); f_12162c50();
  /* 121600d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121600da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121600dd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121600df mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121600e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121600e5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121600e8 push edx */
  push32((uint32_t)(EDX));
  /* 121600e9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 121600eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121600ee push eax */
  push32((uint32_t)(EAX));
  /* 121600ef push 1 */
  push32((uint32_t)(0x1u));
  /* 121600f1 call 0x12162c50 */
  push32(0x121600f6u); f_12162c50();
  /* 121600f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121600f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121600fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121600fe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12160101 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160104 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12160107 push eax */
  push32((uint32_t)(EAX));
  /* 12160108 call 0x12160250 */
  push32(0x1216010du); f_12160250();
  /* 1216010d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160110 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160113 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160116 push ecx */
  push32((uint32_t)(ECX));
  /* 12160117 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12160119 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1216011c push edx */
  push32((uint32_t)(EDX));
  /* 1216011d push 1 */
  push32((uint32_t)(0x1u));
  /* 1216011f call 0x12162c50 */
  push32(0x12160124u); f_12162c50();
  /* 12160124 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160127 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1216012a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1216012c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1216012f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160132 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160135 push edx */
  push32((uint32_t)(EDX));
  /* 12160136 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12160138 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1216013b push eax */
  push32((uint32_t)(EAX));
  /* 1216013c push 1 */
  push32((uint32_t)(0x1u));
  /* 1216013e call 0x12162c50 */
  push32(0x12160143u); f_12162c50();
  /* 12160143 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160146 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12160149 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1216014b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1216014e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160151 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160154 push edx */
  push32((uint32_t)(EDX));
  /* 12160155 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12160157 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1216015a push eax */
  push32((uint32_t)(EAX));
  /* 1216015b push 0 */
  push32((uint32_t)(0x0u));
  /* 1216015d call 0x12162c50 */
  push32(0x12160162u); f_12162c50();
  /* 12160162 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160165 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12160168 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1216016a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1216016d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160170 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160173 push edx */
  push32((uint32_t)(EDX));
  /* 12160174 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12160176 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12160179 push eax */
  push32((uint32_t)(EAX));
  /* 1216017a push 0 */
  push32((uint32_t)(0x0u));
  /* 1216017c call 0x12162c50 */
  push32(0x12160181u); f_12162c50();
  /* 12160181 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160184 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12160187 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12160189 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1216018c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216018f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160192 push edx */
  push32((uint32_t)(EDX));
  /* 12160193 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12160195 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12160198 push eax */
  push32((uint32_t)(EAX));
  /* 12160199 push 0 */
  push32((uint32_t)(0x0u));
  /* 1216019b call 0x12162c50 */
  push32(0x121601a0u); f_12162c50();
  /* 121601a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121601a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121601a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121601a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121601ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121601ae add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121601b1 push edx */
  push32((uint32_t)(EDX));
  /* 121601b2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 121601b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121601b7 push eax */
  push32((uint32_t)(EAX));
  /* 121601b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121601ba call 0x12162c50 */
  push32(0x121601bfu); f_12162c50();
  /* 121601bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121601c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121601c5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121601c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121601ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121601cd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121601d0 push edx */
  push32((uint32_t)(EDX));
  /* 121601d1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 121601d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121601d6 push eax */
  push32((uint32_t)(EAX));
  /* 121601d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121601d9 call 0x12162c50 */
  push32(0x121601deu); f_12162c50();
  /* 121601de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121601e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121601e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121601e6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121601e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121601ec add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121601ef push edx */
  push32((uint32_t)(EDX));
  /* 121601f0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 121601f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121601f5 push eax */
  push32((uint32_t)(EAX));
  /* 121601f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121601f8 call 0x12162c50 */
  push32(0x121601fdu); f_12162c50();
  /* 121601fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160200 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12160203 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12160205 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12160208 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216020b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216020e push edx */
  push32((uint32_t)(EDX));
  /* 1216020f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12160211 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12160214 push eax */
  push32((uint32_t)(EAX));
  /* 12160215 push 0 */
  push32((uint32_t)(0x0u));
  /* 12160217 call 0x12162c50 */
  push32(0x1216021cu); f_12162c50();
  /* 1216021c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216021f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12160222 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12160224 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12160227 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216022a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216022d push edx */
  push32((uint32_t)(EDX));
  /* 1216022e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12160230 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12160233 push eax */
  push32((uint32_t)(EAX));
  /* 12160234 push 0 */
  push32((uint32_t)(0x0u));
  /* 12160236 call 0x12162c50 */
  push32(0x1216023bu); f_12162c50();
  /* 1216023b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216023e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12160241 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12160243 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12160246 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12160249:;
  /* 12160249 mov esp, ebp */
  ESP = (EBP);
  /* 1216024b pop ebp */
  EBP = (pop32());
  /* 1216024c ret  */
  ESPCHK(0x12160040u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12160250 (125 bytes, 49 insns) */
void f_12160250(void) {
  FTRACE(0x12160250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12160250 push ebp */
  push32((uint32_t)(EBP));
  /* 12160251 mov ebp, esp */
  EBP = (ESP);
  /* 12160253 push ecx */
  push32((uint32_t)(ECX));
L_12160254:;
  /* 12160254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160257 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1216025a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1216025c je 0x121602c9 */
  if (C.zf) goto L_121602c9;
  /* 1216025e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160261 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12160264 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160267 jl 0x1216028d */
  if ((C.sf!=C.of)) goto L_1216028d;
  /* 12160269 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216026c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1216026f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160272 jg 0x1216028d */
  if ((!C.zf&&C.sf==C.of)) goto L_1216028d;
  /* 12160274 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160277 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1216027a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1216027d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160280 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12160282 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160285 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160288 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1216028b jmp 0x121602c7 */
  goto L_121602c7;
L_1216028d:;
  /* 1216028d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160290 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12160293 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160296 jne 0x121602be */
  if (!C.zf) goto L_121602be;
  /* 12160298 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216029b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1216029e:;
  /* 1216029e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121602a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121602a4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 121602a7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121602a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121602ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121602af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121602b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121602b5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121602b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121602ba jne 0x1216029e */
  if (!C.zf) goto L_1216029e;
  /* 121602bc jmp 0x121602c7 */
  goto L_121602c7;
L_121602be:;
  /* 121602be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121602c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121602c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_121602c7:;
  /* 121602c7 jmp 0x12160254 */
  goto L_12160254;
L_121602c9:;
  /* 121602c9 mov esp, ebp */
  ESP = (EBP);
  /* 121602cb pop ebp */
  EBP = (pop32());
  /* 121602cc ret  */
  ESPCHK(0x12160250u, _esp0);
  ESP += 4; return;
}

/* FUN_100102d0 @ 0x121602d0 (147 bytes, 52 insns) */
void f_121602d0(void) {
  FTRACE(0x121602d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121602d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121602d1 mov ebp, esp */
  EBP = (ESP);
  /* 121602d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121602d7 jne 0x121602de */
  if (!C.zf) goto L_121602de;
  /* 121602d9 jmp 0x12160361 */
  goto L_12160361;
L_121602de:;
  /* 121602de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121602e1 cmp dword ptr [eax + 0xc], 0x12180858 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12180858u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121602e8 je 0x12160361 */
  if (C.zf) goto L_12160361;
  /* 121602ea push 2 */
  push32((uint32_t)(0x2u));
  /* 121602ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121602ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121602f2 push edx */
  push32((uint32_t)(EDX));
  /* 121602f3 call 0x12155520 */
  push32(0x121602f8u); f_12155520();
  /* 121602f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121602fb push 2 */
  push32((uint32_t)(0x2u));
  /* 121602fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160300 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12160303 push ecx */
  push32((uint32_t)(ECX));
  /* 12160304 call 0x12155520 */
  push32(0x12160309u); f_12155520();
  /* 12160309 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216030c push 2 */
  push32((uint32_t)(0x2u));
  /* 1216030e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160311 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12160314 push eax */
  push32((uint32_t)(EAX));
  /* 12160315 call 0x12155520 */
  push32(0x1216031au); f_12155520();
  /* 1216031a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216031d push 2 */
  push32((uint32_t)(0x2u));
  /* 1216031f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160322 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12160325 push edx */
  push32((uint32_t)(EDX));
  /* 12160326 call 0x12155520 */
  push32(0x1216032bu); f_12155520();
  /* 1216032b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216032e push 2 */
  push32((uint32_t)(0x2u));
  /* 12160330 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160333 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12160336 push ecx */
  push32((uint32_t)(ECX));
  /* 12160337 call 0x12155520 */
  push32(0x1216033cu); f_12155520();
  /* 1216033c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216033f push 2 */
  push32((uint32_t)(0x2u));
  /* 12160341 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160344 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12160347 push eax */
  push32((uint32_t)(EAX));
  /* 12160348 call 0x12155520 */
  push32(0x1216034du); f_12155520();
  /* 1216034d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160350 push 2 */
  push32((uint32_t)(0x2u));
  /* 12160352 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160355 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12160358 push edx */
  push32((uint32_t)(EDX));
  /* 12160359 call 0x12155520 */
  push32(0x1216035eu); f_12155520();
  /* 1216035e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12160361:;
  /* 12160361 pop ebp */
  EBP = (pop32());
  /* 12160362 ret  */
  ESPCHK(0x121602d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010370 @ 0x12160370 (928 bytes, 284 insns) */
void f_12160370(void) {
  FTRACE(0x12160370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12160370 push ebp */
  push32((uint32_t)(EBP));
  /* 12160371 mov ebp, esp */
  EBP = (ESP);
  /* 12160373 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12160376 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1216037d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12160384 cmp dword ptr [0x121807c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121807c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216038b je 0x121606c1 */
  if (C.zf) goto L_121606c1;
  /* 12160391 cmp dword ptr [0x121807d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121807d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160398 jne 0x121603c0 */
  if (!C.zf) goto L_121603c0;
  /* 1216039a push 0x121807d0 */
  push32((uint32_t)(0x121807d0u));
  /* 1216039f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 121603a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121603a6 mov ax, word ptr [0x12180814] */
  AX = (r16((uint32_t)(0x12180814)));
  /* 121603ac push eax */
  push32((uint32_t)(EAX));
  /* 121603ad push 0 */
  push32((uint32_t)(0x0u));
  /* 121603af call 0x12162c50 */
  push32(0x121603b4u); f_12162c50();
  /* 121603b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121603b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121603b9 je 0x121603c0 */
  if (C.zf) goto L_121603c0;
  /* 121603bb jmp 0x12160682 */
  goto L_12160682;
L_121603c0:;
  /* 121603c0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 121603c2 push 0x1217c1d4 */
  push32((uint32_t)(0x1217c1d4u));
  /* 121603c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 121603c9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 121603ce call 0x12154a90 */
  push32(0x121603d3u); f_12154a90();
  /* 121603d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121603d6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 121603d9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 121603db push 0x1217c1d4 */
  push32((uint32_t)(0x1217c1d4u));
  /* 121603e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 121603e2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 121603e7 call 0x12154a90 */
  push32(0x121603ecu); f_12154a90();
  /* 121603ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121603ef mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 121603f2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 121603f4 push 0x1217c1d4 */
  push32((uint32_t)(0x1217c1d4u));
  /* 121603f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 121603fb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12160400 call 0x12154a90 */
  push32(0x12160405u); f_12154a90();
  /* 12160405 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160408 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1216040b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1216040d push 0x1217c1d4 */
  push32((uint32_t)(0x1217c1d4u));
  /* 12160412 push 2 */
  push32((uint32_t)(0x2u));
  /* 12160414 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12160419 call 0x12154a90 */
  push32(0x1216041eu); f_12154a90();
  /* 1216041e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160421 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12160424 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160428 je 0x1216043c */
  if (C.zf) goto L_1216043c;
  /* 1216042a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216042e je 0x1216043c */
  if (C.zf) goto L_1216043c;
  /* 12160430 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160434 je 0x1216043c */
  if (C.zf) goto L_1216043c;
  /* 12160436 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216043a jne 0x12160441 */
  if (!C.zf) goto L_12160441;
L_1216043c:;
  /* 1216043c jmp 0x12160682 */
  goto L_12160682;
L_12160441:;
  /* 12160441 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12160444 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12160447 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1216044e jmp 0x12160459 */
  goto L_12160459;
L_12160450:;
  /* 12160450 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12160453 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160456 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12160459:;
  /* 12160459 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160460 jge 0x12160475 */
  if ((C.sf==C.of)) goto L_12160475;
  /* 12160462 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12160465 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12160468 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1216046a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1216046d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160470 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12160473 jmp 0x12160450 */
  goto L_12160450;
L_12160475:;
  /* 12160475 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12160478 push eax */
  push32((uint32_t)(EAX));
  /* 12160479 mov ecx, dword ptr [0x121807d0] */
  ECX = (r32((uint32_t)(0x121807d0)));
  /* 1216047f push ecx */
  push32((uint32_t)(ECX));
  /* 12160480 call dword ptr [0x12183308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183308))), 0x12160486u);
  /* 12160486 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160488 jne 0x1216048f */
  if (!C.zf) goto L_1216048f;
  /* 1216048a jmp 0x12160682 */
  goto L_12160682;
L_1216048f:;
  /* 1216048f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160493 jbe 0x1216049a */
  if ((C.cf||C.zf)) goto L_1216049a;
  /* 12160495 jmp 0x12160682 */
  goto L_12160682;
L_1216049a:;
  /* 1216049a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1216049d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121604a3 mov dword ptr [0x1217eea4], edx */
  w32((uint32_t)(0x1217eea4), (EDX));
  /* 121604a9 cmp dword ptr [0x1217eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1217eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121604b0 jle 0x12160509 */
  if ((C.zf||C.sf!=C.of)) goto L_12160509;
  /* 121604b2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 121604b5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121604b8 jmp 0x121604c3 */
  goto L_121604c3;
L_121604ba:;
  /* 121604ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121604bd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121604c0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_121604c3:;
  /* 121604c3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121604c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121604c8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121604ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121604cc je 0x12160509 */
  if (C.zf) goto L_12160509;
  /* 121604ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121604d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121604d3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 121604d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121604d8 je 0x12160509 */
  if (C.zf) goto L_12160509;
  /* 121604da mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121604dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121604df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121604e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 121604e4 jmp 0x121604ef */
  goto L_121604ef;
L_121604e6:;
  /* 121604e6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 121604e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121604ec mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_121604ef:;
  /* 121604ef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121604f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121604f4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 121604f7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121604fa jg 0x12160507 */
  if ((!C.zf&&C.sf==C.of)) goto L_12160507;
  /* 121604fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121604ff add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160502 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12160505 jmp 0x121604e6 */
  goto L_121604e6;
L_12160507:;
  /* 12160507 jmp 0x121604ba */
  goto L_121604ba;
L_12160509:;
  /* 12160509 push 0 */
  push32((uint32_t)(0x0u));
  /* 1216050b push 0 */
  push32((uint32_t)(0x0u));
  /* 1216050d push 0 */
  push32((uint32_t)(0x0u));
  /* 1216050f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12160512 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160515 push eax */
  push32((uint32_t)(EAX));
  /* 12160516 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1216051b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1216051e push ecx */
  push32((uint32_t)(ECX));
  /* 1216051f push 1 */
  push32((uint32_t)(0x1u));
  /* 12160521 call 0x1215ccc0 */
  push32(0x12160526u); f_1215ccc0();
  /* 12160526 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1216052b jne 0x12160532 */
  if (!C.zf) goto L_12160532;
  /* 1216052d jmp 0x12160682 */
  goto L_12160682;
L_12160532:;
  /* 12160532 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12160535 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1216053a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1216053d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12160540 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12160547 jmp 0x12160552 */
  goto L_12160552;
L_12160549:;
  /* 12160549 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1216054c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216054f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12160552:;
  /* 12160552 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160559 jge 0x12160570 */
  if ((C.sf==C.of)) goto L_12160570;
  /* 1216055b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1216055e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12160562 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12160565 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12160568 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216056b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1216056e jmp 0x12160549 */
  goto L_12160549;
L_12160570:;
  /* 12160570 push 0 */
  push32((uint32_t)(0x0u));
  /* 12160572 push 0 */
  push32((uint32_t)(0x0u));
  /* 12160574 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12160577 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216057a push edx */
  push32((uint32_t)(EDX));
  /* 1216057b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12160580 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12160583 push eax */
  push32((uint32_t)(EAX));
  /* 12160584 push 1 */
  push32((uint32_t)(0x1u));
  /* 12160586 call 0x12162ef0 */
  push32(0x1216058bu); f_12162ef0();
  /* 1216058b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216058e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160590 jne 0x12160597 */
  if (!C.zf) goto L_12160597;
  /* 12160592 jmp 0x12160682 */
  goto L_12160682;
L_12160597:;
  /* 12160597 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1216059a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1216059f cmp dword ptr [0x1217eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1217eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121605a6 jle 0x12160603 */
  if ((C.zf||C.sf!=C.of)) goto L_12160603;
  /* 121605a8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 121605ab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 121605ae jmp 0x121605b9 */
  goto L_121605b9;
L_121605b0:;
  /* 121605b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121605b3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121605b6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_121605b9:;
  /* 121605b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121605bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121605be mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121605c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121605c2 je 0x12160603 */
  if (C.zf) goto L_12160603;
  /* 121605c4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121605c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121605c9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 121605cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121605ce je 0x12160603 */
  if (C.zf) goto L_12160603;
  /* 121605d0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121605d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121605d5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121605d7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 121605da jmp 0x121605e5 */
  goto L_121605e5;
L_121605dc:;
  /* 121605dc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121605df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121605e2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_121605e5:;
  /* 121605e5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121605e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121605ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 121605ed cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121605f0 jg 0x12160601 */
  if ((!C.zf&&C.sf==C.of)) goto L_12160601;
  /* 121605f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121605f5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121605f8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 121605ff jmp 0x121605dc */
  goto L_121605dc;
L_12160601:;
  /* 12160601 jmp 0x121605b0 */
  goto L_121605b0;
L_12160603:;
  /* 12160603 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12160606 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160609 mov dword ptr [0x1217ec98], eax */
  w32((uint32_t)(0x1217ec98), (EAX));
  /* 1216060e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12160611 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160614 mov dword ptr [0x1217ec9c], ecx */
  w32((uint32_t)(0x1217ec9c), (ECX));
  /* 1216061a cmp dword ptr [0x12180800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160621 je 0x12160634 */
  if (C.zf) goto L_12160634;
  /* 12160623 push 2 */
  push32((uint32_t)(0x2u));
  /* 12160625 mov edx, dword ptr [0x12180800] */
  EDX = (r32((uint32_t)(0x12180800)));
  /* 1216062b push edx */
  push32((uint32_t)(EDX));
  /* 1216062c call 0x12155520 */
  push32(0x12160631u); f_12155520();
  /* 12160631 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12160634:;
  /* 12160634 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12160637 mov dword ptr [0x12180800], eax */
  w32((uint32_t)(0x12180800), (EAX));
  /* 1216063c cmp dword ptr [0x12180804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160643 je 0x12160656 */
  if (C.zf) goto L_12160656;
  /* 12160645 push 2 */
  push32((uint32_t)(0x2u));
  /* 12160647 mov ecx, dword ptr [0x12180804] */
  ECX = (r32((uint32_t)(0x12180804)));
  /* 1216064d push ecx */
  push32((uint32_t)(ECX));
  /* 1216064e call 0x12155520 */
  push32(0x12160653u); f_12155520();
  /* 12160653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12160656:;
  /* 12160656 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12160659 mov dword ptr [0x12180804], edx */
  w32((uint32_t)(0x12180804), (EDX));
  /* 1216065f push 2 */
  push32((uint32_t)(0x2u));
  /* 12160661 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12160664 push eax */
  push32((uint32_t)(EAX));
  /* 12160665 call 0x12155520 */
  push32(0x1216066au); f_12155520();
  /* 1216066a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216066d push 2 */
  push32((uint32_t)(0x2u));
  /* 1216066f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12160672 push ecx */
  push32((uint32_t)(ECX));
  /* 12160673 call 0x12155520 */
  push32(0x12160678u); f_12155520();
  /* 12160678 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216067b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1216067d jmp 0x1216070c */
  goto L_1216070c;
L_12160682:;
  /* 12160682 push 2 */
  push32((uint32_t)(0x2u));
  /* 12160684 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12160687 push edx */
  push32((uint32_t)(EDX));
  /* 12160688 call 0x12155520 */
  push32(0x1216068du); f_12155520();
  /* 1216068d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160690 push 2 */
  push32((uint32_t)(0x2u));
  /* 12160692 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12160695 push eax */
  push32((uint32_t)(EAX));
  /* 12160696 call 0x12155520 */
  push32(0x1216069bu); f_12155520();
  /* 1216069b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216069e push 2 */
  push32((uint32_t)(0x2u));
  /* 121606a0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121606a3 push ecx */
  push32((uint32_t)(ECX));
  /* 121606a4 call 0x12155520 */
  push32(0x121606a9u); f_12155520();
  /* 121606a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121606ac push 2 */
  push32((uint32_t)(0x2u));
  /* 121606ae mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121606b1 push edx */
  push32((uint32_t)(EDX));
  /* 121606b2 call 0x12155520 */
  push32(0x121606b7u); f_12155520();
  /* 121606b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121606ba mov eax, 1 */
  EAX = (0x1u);
  /* 121606bf jmp 0x1216070c */
  goto L_1216070c;
L_121606c1:;
  /* 121606c1 mov dword ptr [0x1217ec98], 0x1217eca2 */
  w32((uint32_t)(0x1217ec98), (0x1217eca2u));
  /* 121606cb mov dword ptr [0x1217ec9c], 0x1217eca2 */
  w32((uint32_t)(0x1217ec9c), (0x1217eca2u));
  /* 121606d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 121606d7 mov eax, dword ptr [0x12180800] */
  EAX = (r32((uint32_t)(0x12180800)));
  /* 121606dc push eax */
  push32((uint32_t)(EAX));
  /* 121606dd call 0x12155520 */
  push32(0x121606e2u); f_12155520();
  /* 121606e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121606e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 121606e7 mov ecx, dword ptr [0x12180804] */
  ECX = (r32((uint32_t)(0x12180804)));
  /* 121606ed push ecx */
  push32((uint32_t)(ECX));
  /* 121606ee call 0x12155520 */
  push32(0x121606f3u); f_12155520();
  /* 121606f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121606f6 mov dword ptr [0x12180800], 0 */
  w32((uint32_t)(0x12180800), (0x0u));
  /* 12160700 mov dword ptr [0x12180804], 0 */
  w32((uint32_t)(0x12180804), (0x0u));
  /* 1216070a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1216070c:;
  /* 1216070c mov esp, ebp */
  ESP = (EBP);
  /* 1216070e pop ebp */
  EBP = (pop32());
  /* 1216070f ret  */
  ESPCHK(0x12160370u, _esp0);
  ESP += 4; return;
}

/* FUN_10010710 @ 0x12160710 (7 bytes, 5 insns) */
void f_12160710(void) {
  FTRACE(0x12160710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12160710 push ebp */
  push32((uint32_t)(EBP));
  /* 12160711 mov ebp, esp */
  EBP = (ESP);
  /* 12160713 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12160715 pop ebp */
  EBP = (pop32());
  /* 12160716 ret  */
  ESPCHK(0x12160710u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12160720 (129 bytes, 56 insns) */
void f_12160720(void) {
  FTRACE(0x12160720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12160720 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12160724 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12160728 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1216072e jne 0x1216076c */
  if (!C.zf) goto L_1216076c;
L_12160730:;
  /* 12160730 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12160732 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12160734 jne 0x12160764 */
  if (!C.zf) goto L_12160764;
  /* 12160736 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12160738 je 0x12160760 */
  if (C.zf) goto L_12160760;
  /* 1216073a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1216073d jne 0x12160764 */
  if (!C.zf) goto L_12160764;
  /* 1216073f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12160741 je 0x12160760 */
  if (C.zf) goto L_12160760;
  /* 12160743 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12160746 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12160749 jne 0x12160764 */
  if (!C.zf) goto L_12160764;
  /* 1216074b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1216074d je 0x12160760 */
  if (C.zf) goto L_12160760;
  /* 1216074f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12160752 jne 0x12160764 */
  if (!C.zf) goto L_12160764;
  /* 12160754 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160757 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216075a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1216075c jne 0x12160730 */
  if (!C.zf) goto L_12160730;
  /* 1216075e mov edi, edi */
  EDI = (EDI);
L_12160760:;
  /* 12160760 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12160762 ret  */
  ESPCHK(0x12160720u, _esp0);
  ESP += 4; return;
  /* 12160763 nop  */
  /* nop */
L_12160764:;
  /* 12160764 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12160766 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12160768 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12160769 ret  */
  ESPCHK(0x12160720u, _esp0);
  ESP += 4; return;
  /* 1216076a mov edi, edi */
  EDI = (EDI);
L_1216076c:;
  /* 1216076c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12160772 je 0x12160788 */
  if (C.zf) goto L_12160788;
  /* 12160774 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12160776 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12160777 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12160779 jne 0x12160764 */
  if (!C.zf) goto L_12160764;
  /* 1216077b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1216077c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1216077e je 0x12160760 */
  if (C.zf) goto L_12160760;
  /* 12160780 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12160786 je 0x12160730 */
  if (C.zf) goto L_12160730;
L_12160788:;
  /* 12160788 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1216078b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216078e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12160790 jne 0x12160764 */
  if (!C.zf) goto L_12160764;
  /* 12160792 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12160794 je 0x12160760 */
  if (C.zf) goto L_12160760;
  /* 12160796 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12160799 jne 0x12160764 */
  if (!C.zf) goto L_12160764;
  /* 1216079b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1216079d je 0x12160760 */
  if (C.zf) goto L_12160760;
  /* 1216079f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121607a2 jmp 0x12160730 */
  goto L_12160730;
}

/* FUN_100107b0 @ 0x121607b0 (62 bytes, 35 insns) */
void f_121607b0(void) {
  FTRACE(0x121607b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121607b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121607b1 mov ebp, esp */
  EBP = (ESP);
  /* 121607b3 push esi */
  push32((uint32_t)(ESI));
  /* 121607b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121607b6 push eax */
  push32((uint32_t)(EAX));
  /* 121607b7 push eax */
  push32((uint32_t)(EAX));
  /* 121607b8 push eax */
  push32((uint32_t)(EAX));
  /* 121607b9 push eax */
  push32((uint32_t)(EAX));
  /* 121607ba push eax */
  push32((uint32_t)(EAX));
  /* 121607bb push eax */
  push32((uint32_t)(EAX));
  /* 121607bc push eax */
  push32((uint32_t)(EAX));
  /* 121607bd push eax */
  push32((uint32_t)(EAX));
  /* 121607be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121607c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121607c4:;
  /* 121607c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121607c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121607c8 je 0x121607d1 */
  if (C.zf) goto L_121607d1;
  /* 121607ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 121607cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x121607cb");
  /* 121607cf jmp 0x121607c4 */
  goto L_121607c4;
L_121607d1:;
  /* 121607d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 121607d4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 121607d7 nop  */
  /* nop */
L_121607d8:;
  /* 121607d8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 121607d9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121607db or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121607dd je 0x121607e6 */
  if (C.zf) goto L_121607e6;
  /* 121607df inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121607e0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x121607e0");
  /* 121607e4 jae 0x121607d8 */
  if (!C.cf) goto L_121607d8;
L_121607e6:;
  /* 121607e6 mov eax, ecx */
  EAX = (ECX);
  /* 121607e8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121607eb pop esi */
  ESI = (pop32());
  /* 121607ec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121607ed ret  */
  ESPCHK(0x121607b0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x121607f0 (56 bytes, 31 insns) */
void f_121607f0(void) {
  FTRACE(0x121607f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121607f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121607f1 mov ebp, esp */
  EBP = (ESP);
  /* 121607f3 push edi */
  push32((uint32_t)(EDI));
  /* 121607f4 push esi */
  push32((uint32_t)(ESI));
  /* 121607f5 push ebx */
  push32((uint32_t)(EBX));
  /* 121607f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121607f9 jecxz 0x12160821 */
  x86_unimpl("jecxz @ 0x121607f9");
  /* 121607fb mov ebx, ecx */
  EBX = (ECX);
  /* 121607fd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12160800 mov esi, edi */
  ESI = (EDI);
  /* 12160802 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12160804 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12160806 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12160808 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216080a mov edi, esi */
  EDI = (ESI);
  /* 1216080c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1216080f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12160811 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12160814 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12160816 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12160819 ja 0x1216081f */
  if ((!C.cf&&!C.zf)) goto L_1216081f;
  /* 1216081b je 0x12160821 */
  if (C.zf) goto L_12160821;
  /* 1216081d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1216081e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1216081f:;
  /* 1216081f not ecx */
  ECX = (~(ECX));
L_12160821:;
  /* 12160821 mov eax, ecx */
  EAX = (ECX);
  /* 12160823 pop ebx */
  EBX = (pop32());
  /* 12160824 pop esi */
  ESI = (pop32());
  /* 12160825 pop edi */
  EDI = (pop32());
  /* 12160826 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12160827 ret  */
  ESPCHK(0x121607f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010830 @ 0x12160830 (58 bytes, 32 insns) */
void f_12160830(void) {
  FTRACE(0x12160830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12160830 push ebp */
  push32((uint32_t)(EBP));
  /* 12160831 mov ebp, esp */
  EBP = (ESP);
  /* 12160833 push esi */
  push32((uint32_t)(ESI));
  /* 12160834 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12160836 push eax */
  push32((uint32_t)(EAX));
  /* 12160837 push eax */
  push32((uint32_t)(EAX));
  /* 12160838 push eax */
  push32((uint32_t)(EAX));
  /* 12160839 push eax */
  push32((uint32_t)(EAX));
  /* 1216083a push eax */
  push32((uint32_t)(EAX));
  /* 1216083b push eax */
  push32((uint32_t)(EAX));
  /* 1216083c push eax */
  push32((uint32_t)(EAX));
  /* 1216083d push eax */
  push32((uint32_t)(EAX));
  /* 1216083e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12160841 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12160844:;
  /* 12160844 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12160846 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12160848 je 0x12160851 */
  if (C.zf) goto L_12160851;
  /* 1216084a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1216084b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1216084b");
  /* 1216084f jmp 0x12160844 */
  goto L_12160844;
L_12160851:;
  /* 12160851 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12160854:;
  /* 12160854 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12160856 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12160858 je 0x12160864 */
  if (C.zf) goto L_12160864;
  /* 1216085a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1216085b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1216085b");
  /* 1216085f jae 0x12160854 */
  if (!C.cf) goto L_12160854;
  /* 12160861 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12160864:;
  /* 12160864 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160867 pop esi */
  ESI = (pop32());
  /* 12160868 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12160869 ret  */
  ESPCHK(0x12160830u, _esp0);
  ESP += 4; return;
}

/* FUN_10010870 @ 0x12160870 (512 bytes, 147 insns) */
void f_12160870(void) {
  FTRACE(0x12160870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12160870 push ebp */
  push32((uint32_t)(EBP));
  /* 12160871 mov ebp, esp */
  EBP = (ESP);
  /* 12160873 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12160876 cmp dword ptr [0x1218084c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218084c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216087d jne 0x121608a2 */
  if (!C.zf) goto L_121608a2;
  /* 1216087f call 0x12161340 */
  push32(0x12160884u); f_12161340();
  /* 12160884 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160886 je 0x12160892 */
  if (C.zf) goto L_12160892;
  /* 12160888 mov eax, dword ptr [0x121832cc] */
  EAX = (r32((uint32_t)(0x121832cc)));
  /* 1216088d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12160890 jmp 0x12160899 */
  goto L_12160899;
L_12160892:;
  /* 12160892 mov dword ptr [ebp - 8], 0x12161390 */
  w32((uint32_t)(EBP + -0x8), (0x12161390u));
L_12160899:;
  /* 12160899 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1216089c mov dword ptr [0x1218084c], ecx */
  w32((uint32_t)(0x1218084c), (ECX));
L_121608a2:;
  /* 121608a2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121608a6 jne 0x121608b2 */
  if (!C.zf) goto L_121608b2;
  /* 121608a8 call 0x12161190 */
  push32(0x121608adu); f_12161190();
  /* 121608ad jmp 0x1216097e */
  goto L_1216097e;
L_121608b2:;
  /* 121608b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121608b5 mov dword ptr [0x1218083c], edx */
  w32((uint32_t)(0x1218083c), (EDX));
  /* 121608bb cmp dword ptr [0x1218083c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218083c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121608c2 je 0x121608e4 */
  if (C.zf) goto L_121608e4;
  /* 121608c4 mov eax, dword ptr [0x1218083c] */
  EAX = (r32((uint32_t)(0x1218083c)));
  /* 121608c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121608cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121608ce je 0x121608e4 */
  if (C.zf) goto L_121608e4;
  /* 121608d0 push 0x1218083c */
  push32((uint32_t)(0x1218083cu));
  /* 121608d5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 121608d7 push 0x1217fa90 */
  push32((uint32_t)(0x1217fa90u));
  /* 121608dc call 0x12160a70 */
  push32(0x121608e1u); f_12160a70();
  /* 121608e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121608e4:;
  /* 121608e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121608e7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121608ea mov dword ptr [0x12180840], edx */
  w32((uint32_t)(0x12180840), (EDX));
  /* 121608f0 cmp dword ptr [0x12180840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121608f7 je 0x12160919 */
  if (C.zf) goto L_12160919;
  /* 121608f9 mov eax, dword ptr [0x12180840] */
  EAX = (r32((uint32_t)(0x12180840)));
  /* 121608fe movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12160901 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12160903 je 0x12160919 */
  if (C.zf) goto L_12160919;
  /* 12160905 push 0x12180840 */
  push32((uint32_t)(0x12180840u));
  /* 1216090a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1216090c push 0x1217f9d8 */
  push32((uint32_t)(0x1217f9d8u));
  /* 12160911 call 0x12160a70 */
  push32(0x12160916u); f_12160a70();
  /* 12160916 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12160919:;
  /* 12160919 mov dword ptr [0x12180844], 0 */
  w32((uint32_t)(0x12180844), (0x0u));
  /* 12160923 cmp dword ptr [0x1218083c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218083c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216092a je 0x1216095d */
  if (C.zf) goto L_1216095d;
  /* 1216092c mov edx, dword ptr [0x1218083c] */
  EDX = (r32((uint32_t)(0x1218083c)));
  /* 12160932 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12160935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160937 je 0x1216095d */
  if (C.zf) goto L_1216095d;
  /* 12160939 cmp dword ptr [0x12180840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160940 je 0x12160956 */
  if (C.zf) goto L_12160956;
  /* 12160942 mov ecx, dword ptr [0x12180840] */
  ECX = (r32((uint32_t)(0x12180840)));
  /* 12160948 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1216094b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1216094d je 0x12160956 */
  if (C.zf) goto L_12160956;
  /* 1216094f call 0x12160b00 */
  push32(0x12160954u); f_12160b00();
  /* 12160954 jmp 0x1216095b */
  goto L_1216095b;
L_12160956:;
  /* 12160956 call 0x12160ef0 */
  push32(0x1216095bu); f_12160ef0();
L_1216095b:;
  /* 1216095b jmp 0x1216097e */
  goto L_1216097e;
L_1216095d:;
  /* 1216095d cmp dword ptr [0x12180840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160964 je 0x12160979 */
  if (C.zf) goto L_12160979;
  /* 12160966 mov eax, dword ptr [0x12180840] */
  EAX = (r32((uint32_t)(0x12180840)));
  /* 1216096b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1216096e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12160970 je 0x12160979 */
  if (C.zf) goto L_12160979;
  /* 12160972 call 0x12161090 */
  push32(0x12160977u); f_12161090();
  /* 12160977 jmp 0x1216097e */
  goto L_1216097e;
L_12160979:;
  /* 12160979 call 0x12161190 */
  push32(0x1216097eu); f_12161190();
L_1216097e:;
  /* 1216097e cmp dword ptr [0x12180844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160985 jne 0x1216098e */
  if (!C.zf) goto L_1216098e;
  /* 12160987 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12160989 jmp 0x12160a6c */
  goto L_12160a6c;
L_1216098e:;
  /* 1216098e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160991 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160997 push edx */
  push32((uint32_t)(EDX));
  /* 12160998 call 0x121611c0 */
  push32(0x1216099du); f_121611c0();
  /* 1216099d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121609a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121609a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121609a7 je 0x121609bc */
  if (C.zf) goto L_121609bc;
  /* 121609a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121609ac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121609b1 push eax */
  push32((uint32_t)(EAX));
  /* 121609b2 call dword ptr [0x121832d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832d0))), 0x121609b8u);
  /* 121609b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121609ba jne 0x121609c3 */
  if (!C.zf) goto L_121609c3;
L_121609bc:;
  /* 121609bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121609be jmp 0x12160a6c */
  goto L_12160a6c;
L_121609c3:;
  /* 121609c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121609c5 mov ecx, dword ptr [0x1218082c] */
  ECX = (r32((uint32_t)(0x1218082c)));
  /* 121609cb push ecx */
  push32((uint32_t)(ECX));
  /* 121609cc call dword ptr [0x121832e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832e0))), 0x121609d2u);
  /* 121609d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121609d4 jne 0x121609dd */
  if (!C.zf) goto L_121609dd;
  /* 121609d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121609d8 jmp 0x12160a6c */
  goto L_12160a6c;
L_121609dd:;
  /* 121609dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121609e1 je 0x12160a08 */
  if (C.zf) goto L_12160a08;
  /* 121609e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121609e6 mov ax, word ptr [0x1218082c] */
  AX = (r16((uint32_t)(0x1218082c)));
  /* 121609ec mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 121609ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121609f2 mov dx, word ptr [0x12180848] */
  DX = (r16((uint32_t)(0x12180848)));
  /* 121609f9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 121609fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12160a00 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12160a04 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12160a08:;
  /* 12160a08 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160a0c je 0x12160a67 */
  if (C.zf) goto L_12160a67;
  /* 12160a0e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12160a10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12160a13 push edx */
  push32((uint32_t)(EDX));
  /* 12160a14 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12160a19 mov eax, dword ptr [0x1218082c] */
  EAX = (r32((uint32_t)(0x1218082c)));
  /* 12160a1e push eax */
  push32((uint32_t)(EAX));
  /* 12160a1f call dword ptr [0x1218084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218084c))), 0x12160a25u);
  /* 12160a25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160a27 jne 0x12160a2d */
  if (!C.zf) goto L_12160a2d;
  /* 12160a29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12160a2b jmp 0x12160a6c */
  goto L_12160a6c;
L_12160a2d:;
  /* 12160a2d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12160a2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12160a32 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160a35 push ecx */
  push32((uint32_t)(ECX));
  /* 12160a36 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12160a3b mov edx, dword ptr [0x12180848] */
  EDX = (r32((uint32_t)(0x12180848)));
  /* 12160a41 push edx */
  push32((uint32_t)(EDX));
  /* 12160a42 call dword ptr [0x1218084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218084c))), 0x12160a48u);
  /* 12160a48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160a4a jne 0x12160a50 */
  if (!C.zf) goto L_12160a50;
  /* 12160a4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12160a4e jmp 0x12160a6c */
  goto L_12160a6c;
L_12160a50:;
  /* 12160a50 push 0xa */
  push32((uint32_t)(0xau));
  /* 12160a52 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12160a55 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160a5a push eax */
  push32((uint32_t)(EAX));
  /* 12160a5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12160a5e push ecx */
  push32((uint32_t)(ECX));
  /* 12160a5f call 0x121575d0 */
  push32(0x12160a64u); f_121575d0();
  /* 12160a64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12160a67:;
  /* 12160a67 mov eax, 1 */
  EAX = (0x1u);
L_12160a6c:;
  /* 12160a6c mov esp, ebp */
  ESP = (EBP);
  /* 12160a6e pop ebp */
  EBP = (pop32());
  /* 12160a6f ret  */
  ESPCHK(0x12160870u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a70 @ 0x12160a70 (130 bytes, 47 insns) */
void f_12160a70(void) {
  FTRACE(0x12160a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12160a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12160a71 mov ebp, esp */
  EBP = (ESP);
  /* 12160a73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12160a76 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12160a7d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12160a84:;
  /* 12160a84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12160a87 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160a8a jg 0x12160aee */
  if ((!C.zf&&C.sf==C.of)) goto L_12160aee;
  /* 12160a8c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160a90 je 0x12160aee */
  if (C.zf) goto L_12160aee;
  /* 12160a92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12160a95 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160a98 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12160a99 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12160a9b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12160a9d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12160aa0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12160aa3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160aa6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12160aa9 push eax */
  push32((uint32_t)(EAX));
  /* 12160aaa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12160aad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12160aaf push edx */
  push32((uint32_t)(EDX));
  /* 12160ab0 call 0x12163160 */
  push32(0x12160ab5u); f_12163160();
  /* 12160ab5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160ab8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12160abb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160abf jne 0x12160ad2 */
  if (!C.zf) goto L_12160ad2;
  /* 12160ac1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12160ac4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160ac7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12160acb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12160ace mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12160ad0 jmp 0x12160aec */
  goto L_12160aec;
L_12160ad2:;
  /* 12160ad2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160ad6 jge 0x12160ae3 */
  if ((C.sf==C.of)) goto L_12160ae3;
  /* 12160ad8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12160adb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12160ade mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12160ae1 jmp 0x12160aec */
  goto L_12160aec;
L_12160ae3:;
  /* 12160ae3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12160ae6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160ae9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12160aec:;
  /* 12160aec jmp 0x12160a84 */
  goto L_12160a84;
L_12160aee:;
  /* 12160aee mov esp, ebp */
  ESP = (EBP);
  /* 12160af0 pop ebp */
  EBP = (pop32());
  /* 12160af1 ret  */
  ESPCHK(0x12160a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b00 @ 0x12160b00 (186 bytes, 50 insns) */
void f_12160b00(void) {
  FTRACE(0x12160b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12160b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12160b01 mov ebp, esp */
  EBP = (ESP);
  /* 12160b03 push ecx */
  push32((uint32_t)(ECX));
  /* 12160b04 mov eax, dword ptr [0x1218083c] */
  EAX = (r32((uint32_t)(0x1218083c)));
  /* 12160b09 push eax */
  push32((uint32_t)(EAX));
  /* 12160b0a call 0x121578c0 */
  push32(0x12160b0fu); f_121578c0();
  /* 12160b0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160b12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12160b14 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160b17 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12160b1a mov dword ptr [0x12180838], ecx */
  w32((uint32_t)(0x12180838), (ECX));
  /* 12160b20 mov edx, dword ptr [0x12180840] */
  EDX = (r32((uint32_t)(0x12180840)));
  /* 12160b26 push edx */
  push32((uint32_t)(EDX));
  /* 12160b27 call 0x121578c0 */
  push32(0x12160b2cu); f_121578c0();
  /* 12160b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160b2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12160b31 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160b34 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12160b37 mov dword ptr [0x12180830], ecx */
  w32((uint32_t)(0x12180830), (ECX));
  /* 12160b3d mov dword ptr [0x1218082c], 0 */
  w32((uint32_t)(0x1218082c), (0x0u));
  /* 12160b47 cmp dword ptr [0x12180838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160b4e je 0x12160b59 */
  if (C.zf) goto L_12160b59;
  /* 12160b50 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12160b57 jmp 0x12160b6b */
  goto L_12160b6b;
L_12160b59:;
  /* 12160b59 mov edx, dword ptr [0x1218083c] */
  EDX = (r32((uint32_t)(0x1218083c)));
  /* 12160b5f push edx */
  push32((uint32_t)(EDX));
  /* 12160b60 call 0x121615a0 */
  push32(0x12160b65u); f_121615a0();
  /* 12160b65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160b68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12160b6b:;
  /* 12160b6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12160b6e mov dword ptr [0x12180834], eax */
  w32((uint32_t)(0x12180834), (EAX));
  /* 12160b73 push 1 */
  push32((uint32_t)(0x1u));
  /* 12160b75 push 0x12160bc0 */
  push32((uint32_t)(0x12160bc0u));
  /* 12160b7a call dword ptr [0x121832d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832d4))), 0x12160b80u);
  /* 12160b80 mov ecx, dword ptr [0x12180844] */
  ECX = (r32((uint32_t)(0x12180844)));
  /* 12160b86 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12160b8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12160b8e je 0x12160bac */
  if (C.zf) goto L_12160bac;
  /* 12160b90 mov edx, dword ptr [0x12180844] */
  EDX = (r32((uint32_t)(0x12180844)));
  /* 12160b96 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12160b9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12160b9e je 0x12160bac */
  if (C.zf) goto L_12160bac;
  /* 12160ba0 mov eax, dword ptr [0x12180844] */
  EAX = (r32((uint32_t)(0x12180844)));
  /* 12160ba5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12160ba8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160baa jne 0x12160bb6 */
  if (!C.zf) goto L_12160bb6;
L_12160bac:;
  /* 12160bac mov dword ptr [0x12180844], 0 */
  w32((uint32_t)(0x12180844), (0x0u));
L_12160bb6:;
  /* 12160bb6 mov esp, ebp */
  ESP = (EBP);
  /* 12160bb8 pop ebp */
  EBP = (pop32());
  /* 12160bb9 ret  */
  ESPCHK(0x12160b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bc0 @ 0x12160bc0 (804 bytes, 220 insns) */
void f_12160bc0(void) {
  FTRACE(0x12160bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12160bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12160bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12160bc3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12160bc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160bc9 push eax */
  push32((uint32_t)(EAX));
  /* 12160bca call 0x12161520 */
  push32(0x12160bcfu); f_12161520();
  /* 12160bcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160bd2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12160bd5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12160bd7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12160bda push ecx */
  push32((uint32_t)(ECX));
  /* 12160bdb mov edx, dword ptr [0x12180830] */
  EDX = (r32((uint32_t)(0x12180830)));
  /* 12160be1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12160be3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12160be5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12160beb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160bf1 push edx */
  push32((uint32_t)(EDX));
  /* 12160bf2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12160bf5 push eax */
  push32((uint32_t)(EAX));
  /* 12160bf6 call dword ptr [0x1218084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218084c))), 0x12160bfcu);
  /* 12160bfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160bfe jne 0x12160c14 */
  if (!C.zf) goto L_12160c14;
  /* 12160c00 mov dword ptr [0x12180844], 0 */
  w32((uint32_t)(0x12180844), (0x0u));
  /* 12160c0a mov eax, 1 */
  EAX = (0x1u);
  /* 12160c0f jmp 0x12160ede */
  goto L_12160ede;
L_12160c14:;
  /* 12160c14 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12160c17 push ecx */
  push32((uint32_t)(ECX));
  /* 12160c18 mov edx, dword ptr [0x12180840] */
  EDX = (r32((uint32_t)(0x12180840)));
  /* 12160c1e push edx */
  push32((uint32_t)(EDX));
  /* 12160c1f call 0x12163160 */
  push32(0x12160c24u); f_12163160();
  /* 12160c24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160c27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160c29 jne 0x12160d4f */
  if (!C.zf) goto L_12160d4f;
  /* 12160c2f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12160c31 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12160c34 push eax */
  push32((uint32_t)(EAX));
  /* 12160c35 mov ecx, dword ptr [0x12180838] */
  ECX = (r32((uint32_t)(0x12180838)));
  /* 12160c3b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12160c3d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12160c3f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12160c45 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160c4b push ecx */
  push32((uint32_t)(ECX));
  /* 12160c4c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12160c4f push edx */
  push32((uint32_t)(EDX));
  /* 12160c50 call dword ptr [0x1218084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218084c))), 0x12160c56u);
  /* 12160c56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160c58 jne 0x12160c6e */
  if (!C.zf) goto L_12160c6e;
  /* 12160c5a mov dword ptr [0x12180844], 0 */
  w32((uint32_t)(0x12180844), (0x0u));
  /* 12160c64 mov eax, 1 */
  EAX = (0x1u);
  /* 12160c69 jmp 0x12160ede */
  goto L_12160ede;
L_12160c6e:;
  /* 12160c6e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12160c71 push eax */
  push32((uint32_t)(EAX));
  /* 12160c72 mov ecx, dword ptr [0x1218083c] */
  ECX = (r32((uint32_t)(0x1218083c)));
  /* 12160c78 push ecx */
  push32((uint32_t)(ECX));
  /* 12160c79 call 0x12163160 */
  push32(0x12160c7eu); f_12163160();
  /* 12160c7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160c81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160c83 jne 0x12160cb0 */
  if (!C.zf) goto L_12160cb0;
  /* 12160c85 mov edx, dword ptr [0x12180844] */
  EDX = (r32((uint32_t)(0x12180844)));
  /* 12160c8b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12160c91 mov dword ptr [0x12180844], edx */
  w32((uint32_t)(0x12180844), (EDX));
  /* 12160c97 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12160c9a mov dword ptr [0x12180848], eax */
  w32((uint32_t)(0x12180848), (EAX));
  /* 12160c9f mov ecx, dword ptr [0x12180848] */
  ECX = (r32((uint32_t)(0x12180848)));
  /* 12160ca5 mov dword ptr [0x1218082c], ecx */
  w32((uint32_t)(0x1218082c), (ECX));
  /* 12160cab jmp 0x12160d4f */
  goto L_12160d4f;
L_12160cb0:;
  /* 12160cb0 mov edx, dword ptr [0x12180844] */
  EDX = (r32((uint32_t)(0x12180844)));
  /* 12160cb6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12160cb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12160cbb jne 0x12160d4f */
  if (!C.zf) goto L_12160d4f;
  /* 12160cc1 cmp dword ptr [0x12180834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160cc8 je 0x12160d1d */
  if (C.zf) goto L_12160d1d;
  /* 12160cca mov eax, dword ptr [0x12180834] */
  EAX = (r32((uint32_t)(0x12180834)));
  /* 12160ccf push eax */
  push32((uint32_t)(EAX));
  /* 12160cd0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12160cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12160cd4 mov edx, dword ptr [0x1218083c] */
  EDX = (r32((uint32_t)(0x1218083c)));
  /* 12160cda push edx */
  push32((uint32_t)(EDX));
  /* 12160cdb call 0x12163230 */
  push32(0x12160ce0u); f_12163230();
  /* 12160ce0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160ce3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160ce5 jne 0x12160d1d */
  if (!C.zf) goto L_12160d1d;
  /* 12160ce7 mov eax, dword ptr [0x12180844] */
  EAX = (r32((uint32_t)(0x12180844)));
  /* 12160cec or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12160cee mov dword ptr [0x12180844], eax */
  w32((uint32_t)(0x12180844), (EAX));
  /* 12160cf3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12160cf6 mov dword ptr [0x12180848], ecx */
  w32((uint32_t)(0x12180848), (ECX));
  /* 12160cfc mov edx, dword ptr [0x1218083c] */
  EDX = (r32((uint32_t)(0x1218083c)));
  /* 12160d02 push edx */
  push32((uint32_t)(EDX));
  /* 12160d03 call 0x121578c0 */
  push32(0x12160d08u); f_121578c0();
  /* 12160d08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160d0b cmp eax, dword ptr [0x12180834] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12180834))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160d11 jne 0x12160d1b */
  if (!C.zf) goto L_12160d1b;
  /* 12160d13 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12160d16 mov dword ptr [0x1218082c], eax */
  w32((uint32_t)(0x1218082c), (EAX));
L_12160d1b:;
  /* 12160d1b jmp 0x12160d4f */
  goto L_12160d4f;
L_12160d1d:;
  /* 12160d1d mov ecx, dword ptr [0x12180844] */
  ECX = (r32((uint32_t)(0x12180844)));
  /* 12160d23 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12160d26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12160d28 jne 0x12160d4f */
  if (!C.zf) goto L_12160d4f;
  /* 12160d2a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12160d2d push edx */
  push32((uint32_t)(EDX));
  /* 12160d2e call 0x12161260 */
  push32(0x12160d33u); f_12161260();
  /* 12160d33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160d36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160d38 je 0x12160d4f */
  if (C.zf) goto L_12160d4f;
  /* 12160d3a mov eax, dword ptr [0x12180844] */
  EAX = (r32((uint32_t)(0x12180844)));
  /* 12160d3f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12160d41 mov dword ptr [0x12180844], eax */
  w32((uint32_t)(0x12180844), (EAX));
  /* 12160d46 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12160d49 mov dword ptr [0x12180848], ecx */
  w32((uint32_t)(0x12180848), (ECX));
L_12160d4f:;
  /* 12160d4f mov edx, dword ptr [0x12180844] */
  EDX = (r32((uint32_t)(0x12180844)));
  /* 12160d55 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12160d5b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160d61 je 0x12160ed1 */
  if (C.zf) goto L_12160ed1;
  /* 12160d67 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12160d69 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12160d6c push eax */
  push32((uint32_t)(EAX));
  /* 12160d6d mov ecx, dword ptr [0x12180838] */
  ECX = (r32((uint32_t)(0x12180838)));
  /* 12160d73 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12160d75 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12160d77 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12160d7d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160d83 push ecx */
  push32((uint32_t)(ECX));
  /* 12160d84 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12160d87 push edx */
  push32((uint32_t)(EDX));
  /* 12160d88 call dword ptr [0x1218084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218084c))), 0x12160d8eu);
  /* 12160d8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160d90 jne 0x12160da6 */
  if (!C.zf) goto L_12160da6;
  /* 12160d92 mov dword ptr [0x12180844], 0 */
  w32((uint32_t)(0x12180844), (0x0u));
  /* 12160d9c mov eax, 1 */
  EAX = (0x1u);
  /* 12160da1 jmp 0x12160ede */
  goto L_12160ede;
L_12160da6:;
  /* 12160da6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12160da9 push eax */
  push32((uint32_t)(EAX));
  /* 12160daa mov ecx, dword ptr [0x1218083c] */
  ECX = (r32((uint32_t)(0x1218083c)));
  /* 12160db0 push ecx */
  push32((uint32_t)(ECX));
  /* 12160db1 call 0x12163160 */
  push32(0x12160db6u); f_12163160();
  /* 12160db6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160db9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160dbb jne 0x12160e70 */
  if (!C.zf) goto L_12160e70;
  /* 12160dc1 mov edx, dword ptr [0x12180844] */
  EDX = (r32((uint32_t)(0x12180844)));
  /* 12160dc7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12160dca mov dword ptr [0x12180844], edx */
  w32((uint32_t)(0x12180844), (EDX));
  /* 12160dd0 cmp dword ptr [0x12180838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160dd7 je 0x12160dfa */
  if (C.zf) goto L_12160dfa;
  /* 12160dd9 mov eax, dword ptr [0x12180844] */
  EAX = (r32((uint32_t)(0x12180844)));
  /* 12160dde or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12160de1 mov dword ptr [0x12180844], eax */
  w32((uint32_t)(0x12180844), (EAX));
  /* 12160de6 cmp dword ptr [0x1218082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160ded jne 0x12160df8 */
  if (!C.zf) goto L_12160df8;
  /* 12160def mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12160df2 mov dword ptr [0x1218082c], ecx */
  w32((uint32_t)(0x1218082c), (ECX));
L_12160df8:;
  /* 12160df8 jmp 0x12160e6e */
  goto L_12160e6e;
L_12160dfa:;
  /* 12160dfa cmp dword ptr [0x12180834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160e01 je 0x12160e4f */
  if (C.zf) goto L_12160e4f;
  /* 12160e03 mov edx, dword ptr [0x1218083c] */
  EDX = (r32((uint32_t)(0x1218083c)));
  /* 12160e09 push edx */
  push32((uint32_t)(EDX));
  /* 12160e0a call 0x121578c0 */
  push32(0x12160e0fu); f_121578c0();
  /* 12160e0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160e12 cmp eax, dword ptr [0x12180834] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12180834))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160e18 jne 0x12160e4f */
  if (!C.zf) goto L_12160e4f;
  /* 12160e1a push 1 */
  push32((uint32_t)(0x1u));
  /* 12160e1c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12160e1f push eax */
  push32((uint32_t)(EAX));
  /* 12160e20 call 0x121612b0 */
  push32(0x12160e25u); f_121612b0();
  /* 12160e25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160e28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160e2a je 0x12160e4d */
  if (C.zf) goto L_12160e4d;
  /* 12160e2c mov ecx, dword ptr [0x12180844] */
  ECX = (r32((uint32_t)(0x12180844)));
  /* 12160e32 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12160e35 mov dword ptr [0x12180844], ecx */
  w32((uint32_t)(0x12180844), (ECX));
  /* 12160e3b cmp dword ptr [0x1218082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160e42 jne 0x12160e4d */
  if (!C.zf) goto L_12160e4d;
  /* 12160e44 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12160e47 mov dword ptr [0x1218082c], edx */
  w32((uint32_t)(0x1218082c), (EDX));
L_12160e4d:;
  /* 12160e4d jmp 0x12160e6e */
  goto L_12160e6e;
L_12160e4f:;
  /* 12160e4f mov eax, dword ptr [0x12180844] */
  EAX = (r32((uint32_t)(0x12180844)));
  /* 12160e54 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12160e57 mov dword ptr [0x12180844], eax */
  w32((uint32_t)(0x12180844), (EAX));
  /* 12160e5c cmp dword ptr [0x1218082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160e63 jne 0x12160e6e */
  if (!C.zf) goto L_12160e6e;
  /* 12160e65 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12160e68 mov dword ptr [0x1218082c], ecx */
  w32((uint32_t)(0x1218082c), (ECX));
L_12160e6e:;
  /* 12160e6e jmp 0x12160ed1 */
  goto L_12160ed1;
L_12160e70:;
  /* 12160e70 cmp dword ptr [0x12180838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160e77 jne 0x12160ed1 */
  if (!C.zf) goto L_12160ed1;
  /* 12160e79 cmp dword ptr [0x12180834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160e80 je 0x12160ed1 */
  if (C.zf) goto L_12160ed1;
  /* 12160e82 mov edx, dword ptr [0x12180834] */
  EDX = (r32((uint32_t)(0x12180834)));
  /* 12160e88 push edx */
  push32((uint32_t)(EDX));
  /* 12160e89 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12160e8c push eax */
  push32((uint32_t)(EAX));
  /* 12160e8d mov ecx, dword ptr [0x1218083c] */
  ECX = (r32((uint32_t)(0x1218083c)));
  /* 12160e93 push ecx */
  push32((uint32_t)(ECX));
  /* 12160e94 call 0x12163230 */
  push32(0x12160e99u); f_12163230();
  /* 12160e99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160e9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160e9e jne 0x12160ed1 */
  if (!C.zf) goto L_12160ed1;
  /* 12160ea0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12160ea2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12160ea5 push edx */
  push32((uint32_t)(EDX));
  /* 12160ea6 call 0x121612b0 */
  push32(0x12160eabu); f_121612b0();
  /* 12160eab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160eae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160eb0 je 0x12160ed1 */
  if (C.zf) goto L_12160ed1;
  /* 12160eb2 mov eax, dword ptr [0x12180844] */
  EAX = (r32((uint32_t)(0x12180844)));
  /* 12160eb7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12160eba mov dword ptr [0x12180844], eax */
  w32((uint32_t)(0x12180844), (EAX));
  /* 12160ebf cmp dword ptr [0x1218082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160ec6 jne 0x12160ed1 */
  if (!C.zf) goto L_12160ed1;
  /* 12160ec8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12160ecb mov dword ptr [0x1218082c], ecx */
  w32((uint32_t)(0x1218082c), (ECX));
L_12160ed1:;
  /* 12160ed1 mov eax, dword ptr [0x12180844] */
  EAX = (r32((uint32_t)(0x12180844)));
  /* 12160ed6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12160ed9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12160edb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12160edd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12160ede:;
  /* 12160ede mov esp, ebp */
  ESP = (EBP);
  /* 12160ee0 pop ebp */
  EBP = (pop32());
  /* 12160ee1 ret 4 */
  ESPCHK(0x12160bc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010ef0 @ 0x12160ef0 (116 bytes, 33 insns) */
void f_12160ef0(void) {
  FTRACE(0x12160ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12160ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12160ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12160ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 12160ef4 mov eax, dword ptr [0x1218083c] */
  EAX = (r32((uint32_t)(0x1218083c)));
  /* 12160ef9 push eax */
  push32((uint32_t)(EAX));
  /* 12160efa call 0x121578c0 */
  push32(0x12160effu); f_121578c0();
  /* 12160eff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160f02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12160f04 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160f07 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12160f0a mov dword ptr [0x12180838], ecx */
  w32((uint32_t)(0x12180838), (ECX));
  /* 12160f10 cmp dword ptr [0x12180838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160f17 je 0x12160f22 */
  if (C.zf) goto L_12160f22;
  /* 12160f19 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12160f20 jmp 0x12160f34 */
  goto L_12160f34;
L_12160f22:;
  /* 12160f22 mov edx, dword ptr [0x1218083c] */
  EDX = (r32((uint32_t)(0x1218083c)));
  /* 12160f28 push edx */
  push32((uint32_t)(EDX));
  /* 12160f29 call 0x121615a0 */
  push32(0x12160f2eu); f_121615a0();
  /* 12160f2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160f31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12160f34:;
  /* 12160f34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12160f37 mov dword ptr [0x12180834], eax */
  w32((uint32_t)(0x12180834), (EAX));
  /* 12160f3c push 1 */
  push32((uint32_t)(0x1u));
  /* 12160f3e push 0x12160f70 */
  push32((uint32_t)(0x12160f70u));
  /* 12160f43 call dword ptr [0x121832d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832d4))), 0x12160f49u);
  /* 12160f49 mov ecx, dword ptr [0x12180844] */
  ECX = (r32((uint32_t)(0x12180844)));
  /* 12160f4f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12160f52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12160f54 jne 0x12160f60 */
  if (!C.zf) goto L_12160f60;
  /* 12160f56 mov dword ptr [0x12180844], 0 */
  w32((uint32_t)(0x12180844), (0x0u));
L_12160f60:;
  /* 12160f60 mov esp, ebp */
  ESP = (EBP);
  /* 12160f62 pop ebp */
  EBP = (pop32());
  /* 12160f63 ret  */
  ESPCHK(0x12160ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f70 @ 0x12160f70 (287 bytes, 86 insns) */
void f_12160f70(void) {
  FTRACE(0x12160f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12160f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12160f71 mov ebp, esp */
  EBP = (ESP);
  /* 12160f73 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12160f76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12160f79 push eax */
  push32((uint32_t)(EAX));
  /* 12160f7a call 0x12161520 */
  push32(0x12160f7fu); f_12161520();
  /* 12160f7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160f82 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12160f85 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12160f87 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12160f8a push ecx */
  push32((uint32_t)(ECX));
  /* 12160f8b mov edx, dword ptr [0x12180838] */
  EDX = (r32((uint32_t)(0x12180838)));
  /* 12160f91 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12160f93 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12160f95 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12160f9b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12160fa1 push edx */
  push32((uint32_t)(EDX));
  /* 12160fa2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12160fa5 push eax */
  push32((uint32_t)(EAX));
  /* 12160fa6 call dword ptr [0x1218084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218084c))), 0x12160facu);
  /* 12160fac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160fae jne 0x12160fc4 */
  if (!C.zf) goto L_12160fc4;
  /* 12160fb0 mov dword ptr [0x12180844], 0 */
  w32((uint32_t)(0x12180844), (0x0u));
  /* 12160fba mov eax, 1 */
  EAX = (0x1u);
  /* 12160fbf jmp 0x12161089 */
  goto L_12161089;
L_12160fc4:;
  /* 12160fc4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12160fc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12160fc8 mov edx, dword ptr [0x1218083c] */
  EDX = (r32((uint32_t)(0x1218083c)));
  /* 12160fce push edx */
  push32((uint32_t)(EDX));
  /* 12160fcf call 0x12163160 */
  push32(0x12160fd4u); f_12163160();
  /* 12160fd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160fd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160fd9 jne 0x12161019 */
  if (!C.zf) goto L_12161019;
  /* 12160fdb cmp dword ptr [0x12180838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12160fe2 jne 0x12160ff6 */
  if (!C.zf) goto L_12160ff6;
  /* 12160fe4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12160fe6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12160fe9 push eax */
  push32((uint32_t)(EAX));
  /* 12160fea call 0x121612b0 */
  push32(0x12160fefu); f_121612b0();
  /* 12160fef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12160ff2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12160ff4 je 0x12161017 */
  if (C.zf) goto L_12161017;
L_12160ff6:;
  /* 12160ff6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12160ff9 mov dword ptr [0x12180848], ecx */
  w32((uint32_t)(0x12180848), (ECX));
  /* 12160fff mov edx, dword ptr [0x12180848] */
  EDX = (r32((uint32_t)(0x12180848)));
  /* 12161005 mov dword ptr [0x1218082c], edx */
  w32((uint32_t)(0x1218082c), (EDX));
  /* 1216100b mov eax, dword ptr [0x12180844] */
  EAX = (r32((uint32_t)(0x12180844)));
  /* 12161010 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12161012 mov dword ptr [0x12180844], eax */
  w32((uint32_t)(0x12180844), (EAX));
L_12161017:;
  /* 12161017 jmp 0x1216107c */
  goto L_1216107c;
L_12161019:;
  /* 12161019 cmp dword ptr [0x12180838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161020 jne 0x1216107c */
  if (!C.zf) goto L_1216107c;
  /* 12161022 cmp dword ptr [0x12180834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161029 je 0x1216107c */
  if (C.zf) goto L_1216107c;
  /* 1216102b mov ecx, dword ptr [0x12180834] */
  ECX = (r32((uint32_t)(0x12180834)));
  /* 12161031 push ecx */
  push32((uint32_t)(ECX));
  /* 12161032 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12161035 push edx */
  push32((uint32_t)(EDX));
  /* 12161036 mov eax, dword ptr [0x1218083c] */
  EAX = (r32((uint32_t)(0x1218083c)));
  /* 1216103b push eax */
  push32((uint32_t)(EAX));
  /* 1216103c call 0x12163230 */
  push32(0x12161041u); f_12163230();
  /* 12161041 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12161046 jne 0x1216107c */
  if (!C.zf) goto L_1216107c;
  /* 12161048 push 0 */
  push32((uint32_t)(0x0u));
  /* 1216104a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1216104d push ecx */
  push32((uint32_t)(ECX));
  /* 1216104e call 0x121612b0 */
  push32(0x12161053u); f_121612b0();
  /* 12161053 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161056 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12161058 je 0x1216107c */
  if (C.zf) goto L_1216107c;
  /* 1216105a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1216105d mov dword ptr [0x12180848], edx */
  w32((uint32_t)(0x12180848), (EDX));
  /* 12161063 mov eax, dword ptr [0x12180848] */
  EAX = (r32((uint32_t)(0x12180848)));
  /* 12161068 mov dword ptr [0x1218082c], eax */
  w32((uint32_t)(0x1218082c), (EAX));
  /* 1216106d mov ecx, dword ptr [0x12180844] */
  ECX = (r32((uint32_t)(0x12180844)));
  /* 12161073 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12161076 mov dword ptr [0x12180844], ecx */
  w32((uint32_t)(0x12180844), (ECX));
L_1216107c:;
  /* 1216107c mov eax, dword ptr [0x12180844] */
  EAX = (r32((uint32_t)(0x12180844)));
  /* 12161081 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12161084 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12161086 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12161088 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12161089:;
  /* 12161089 mov esp, ebp */
  ESP = (EBP);
  /* 1216108b pop ebp */
  EBP = (pop32());
  /* 1216108c ret 4 */
  ESPCHK(0x12160f70u, _esp0);
  ESP += 8; return;
}

/* FUN_10011090 @ 0x12161090 (69 bytes, 20 insns) */
void f_12161090(void) {
  FTRACE(0x12161090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12161090 push ebp */
  push32((uint32_t)(EBP));
  /* 12161091 mov ebp, esp */
  EBP = (ESP);
  /* 12161093 mov eax, dword ptr [0x12180840] */
  EAX = (r32((uint32_t)(0x12180840)));
  /* 12161098 push eax */
  push32((uint32_t)(EAX));
  /* 12161099 call 0x121578c0 */
  push32(0x1216109eu); f_121578c0();
  /* 1216109e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121610a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121610a3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121610a6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 121610a9 mov dword ptr [0x12180830], ecx */
  w32((uint32_t)(0x12180830), (ECX));
  /* 121610af push 1 */
  push32((uint32_t)(0x1u));
  /* 121610b1 push 0x121610e0 */
  push32((uint32_t)(0x121610e0u));
  /* 121610b6 call dword ptr [0x121832d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832d4))), 0x121610bcu);
  /* 121610bc mov edx, dword ptr [0x12180844] */
  EDX = (r32((uint32_t)(0x12180844)));
  /* 121610c2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 121610c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121610c7 jne 0x121610d3 */
  if (!C.zf) goto L_121610d3;
  /* 121610c9 mov dword ptr [0x12180844], 0 */
  w32((uint32_t)(0x12180844), (0x0u));
L_121610d3:;
  /* 121610d3 pop ebp */
  EBP = (pop32());
  /* 121610d4 ret  */
  ESPCHK(0x12161090u, _esp0);
  ESP += 4; return;
}

/* FUN_100110e0 @ 0x121610e0 (172 bytes, 54 insns) */
void f_121610e0(void) {
  FTRACE(0x121610e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121610e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121610e1 mov ebp, esp */
  EBP = (ESP);
  /* 121610e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121610e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121610e9 push eax */
  push32((uint32_t)(EAX));
  /* 121610ea call 0x12161520 */
  push32(0x121610efu); f_12161520();
  /* 121610ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121610f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 121610f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 121610f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 121610fa push ecx */
  push32((uint32_t)(ECX));
  /* 121610fb mov edx, dword ptr [0x12180830] */
  EDX = (r32((uint32_t)(0x12180830)));
  /* 12161101 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12161103 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12161105 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1216110b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161111 push edx */
  push32((uint32_t)(EDX));
  /* 12161112 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12161115 push eax */
  push32((uint32_t)(EAX));
  /* 12161116 call dword ptr [0x1218084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218084c))), 0x1216111cu);
  /* 1216111c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1216111e jne 0x12161131 */
  if (!C.zf) goto L_12161131;
  /* 12161120 mov dword ptr [0x12180844], 0 */
  w32((uint32_t)(0x12180844), (0x0u));
  /* 1216112a mov eax, 1 */
  EAX = (0x1u);
  /* 1216112f jmp 0x12161186 */
  goto L_12161186;
L_12161131:;
  /* 12161131 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12161134 push ecx */
  push32((uint32_t)(ECX));
  /* 12161135 mov edx, dword ptr [0x12180840] */
  EDX = (r32((uint32_t)(0x12180840)));
  /* 1216113b push edx */
  push32((uint32_t)(EDX));
  /* 1216113c call 0x12163160 */
  push32(0x12161141u); f_12163160();
  /* 12161141 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12161146 jne 0x12161179 */
  if (!C.zf) goto L_12161179;
  /* 12161148 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1216114b push eax */
  push32((uint32_t)(EAX));
  /* 1216114c call 0x12161260 */
  push32(0x12161151u); f_12161260();
  /* 12161151 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161154 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12161156 je 0x12161179 */
  if (C.zf) goto L_12161179;
  /* 12161158 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1216115b mov dword ptr [0x12180848], ecx */
  w32((uint32_t)(0x12180848), (ECX));
  /* 12161161 mov edx, dword ptr [0x12180848] */
  EDX = (r32((uint32_t)(0x12180848)));
  /* 12161167 mov dword ptr [0x1218082c], edx */
  w32((uint32_t)(0x1218082c), (EDX));
  /* 1216116d mov eax, dword ptr [0x12180844] */
  EAX = (r32((uint32_t)(0x12180844)));
  /* 12161172 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12161174 mov dword ptr [0x12180844], eax */
  w32((uint32_t)(0x12180844), (EAX));
L_12161179:;
  /* 12161179 mov eax, dword ptr [0x12180844] */
  EAX = (r32((uint32_t)(0x12180844)));
  /* 1216117e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12161181 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12161183 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12161185 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12161186:;
  /* 12161186 mov esp, ebp */
  ESP = (EBP);
  /* 12161188 pop ebp */
  EBP = (pop32());
  /* 12161189 ret 4 */
  ESPCHK(0x121610e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10011190 @ 0x12161190 (43 bytes, 11 insns) */
void f_12161190(void) {
  FTRACE(0x12161190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12161190 push ebp */
  push32((uint32_t)(EBP));
  /* 12161191 mov ebp, esp */
  EBP = (ESP);
  /* 12161193 mov eax, dword ptr [0x12180844] */
  EAX = (r32((uint32_t)(0x12180844)));
  /* 12161198 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1216119d mov dword ptr [0x12180844], eax */
  w32((uint32_t)(0x12180844), (EAX));
  /* 121611a2 call dword ptr [0x121832c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832c4))), 0x121611a8u);
  /* 121611a8 mov dword ptr [0x12180848], eax */
  w32((uint32_t)(0x12180848), (EAX));
  /* 121611ad mov ecx, dword ptr [0x12180848] */
  ECX = (r32((uint32_t)(0x12180848)));
  /* 121611b3 mov dword ptr [0x1218082c], ecx */
  w32((uint32_t)(0x1218082c), (ECX));
  /* 121611b9 pop ebp */
  EBP = (pop32());
  /* 121611ba ret  */
  ESPCHK(0x12161190u, _esp0);
  ESP += 4; return;
}

/* FUN_100111c0 @ 0x121611c0 (155 bytes, 57 insns) */
void f_121611c0(void) {
  FTRACE(0x121611c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121611c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121611c1 mov ebp, esp */
  EBP = (ESP);
  /* 121611c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121611c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121611ca je 0x121611eb */
  if (C.zf) goto L_121611eb;
  /* 121611cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121611cf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121611d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121611d4 je 0x121611eb */
  if (C.zf) goto L_121611eb;
  /* 121611d6 push 0x1217c864 */
  push32((uint32_t)(0x1217c864u));
  /* 121611db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121611de push edx */
  push32((uint32_t)(EDX));
  /* 121611df call 0x12160720 */
  push32(0x121611e4u); f_12160720();
  /* 121611e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121611e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121611e9 jne 0x12161213 */
  if (!C.zf) goto L_12161213;
L_121611eb:;
  /* 121611eb push 8 */
  push32((uint32_t)(0x8u));
  /* 121611ed lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 121611f0 push eax */
  push32((uint32_t)(EAX));
  /* 121611f1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 121611f6 mov ecx, dword ptr [0x12180848] */
  ECX = (r32((uint32_t)(0x12180848)));
  /* 121611fc push ecx */
  push32((uint32_t)(ECX));
  /* 121611fd call dword ptr [0x1218084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218084c))), 0x12161203u);
  /* 12161203 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12161205 jne 0x1216120b */
  if (!C.zf) goto L_1216120b;
  /* 12161207 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12161209 jmp 0x12161257 */
  goto L_12161257;
L_1216120b:;
  /* 1216120b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1216120e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12161211 jmp 0x1216124b */
  goto L_1216124b;
L_12161213:;
  /* 12161213 push 0x1217c860 */
  push32((uint32_t)(0x1217c860u));
  /* 12161218 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216121b push eax */
  push32((uint32_t)(EAX));
  /* 1216121c call 0x12160720 */
  push32(0x12161221u); f_12160720();
  /* 12161221 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12161226 jne 0x1216124b */
  if (!C.zf) goto L_1216124b;
  /* 12161228 push 8 */
  push32((uint32_t)(0x8u));
  /* 1216122a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1216122d push ecx */
  push32((uint32_t)(ECX));
  /* 1216122e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12161230 mov edx, dword ptr [0x12180848] */
  EDX = (r32((uint32_t)(0x12180848)));
  /* 12161236 push edx */
  push32((uint32_t)(EDX));
  /* 12161237 call dword ptr [0x1218084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218084c))), 0x1216123du);
  /* 1216123d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1216123f jne 0x12161245 */
  if (!C.zf) goto L_12161245;
  /* 12161241 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12161243 jmp 0x12161257 */
  goto L_12161257;
L_12161245:;
  /* 12161245 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12161248 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1216124b:;
  /* 1216124b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216124e push ecx */
  push32((uint32_t)(ECX));
  /* 1216124f call 0x12163340 */
  push32(0x12161254u); f_12163340();
  /* 12161254 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12161257:;
  /* 12161257 mov esp, ebp */
  ESP = (EBP);
  /* 12161259 pop ebp */
  EBP = (pop32());
  /* 1216125a ret  */
  ESPCHK(0x121611c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011260 @ 0x12161260 (79 bytes, 26 insns) */
void f_12161260(void) {
  FTRACE(0x12161260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12161260 push ebp */
  push32((uint32_t)(EBP));
  /* 12161261 mov ebp, esp */
  EBP = (ESP);
  /* 12161263 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12161266 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1216126a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1216126e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12161275 jmp 0x12161280 */
  goto L_12161280;
L_12161277:;
  /* 12161277 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1216127a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216127d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12161280:;
  /* 12161280 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161284 jae 0x121612a6 */
  if (!C.cf) goto L_121612a6;
  /* 12161286 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12161289 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1216128f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12161292 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12161294 mov cx, word ptr [eax*2 + 0x1217f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1217f9c4)));
  /* 1216129c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216129e jne 0x121612a4 */
  if (!C.zf) goto L_121612a4;
  /* 121612a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121612a2 jmp 0x121612ab */
  goto L_121612ab;
L_121612a4:;
  /* 121612a4 jmp 0x12161277 */
  goto L_12161277;
L_121612a6:;
  /* 121612a6 mov eax, 1 */
  EAX = (0x1u);
L_121612ab:;
  /* 121612ab mov esp, ebp */
  ESP = (EBP);
  /* 121612ad pop ebp */
  EBP = (pop32());
  /* 121612ae ret  */
  ESPCHK(0x12161260u, _esp0);
  ESP += 4; return;
}

/* FUN_100112b0 @ 0x121612b0 (135 bytes, 48 insns) */
void f_121612b0(void) {
  FTRACE(0x121612b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121612b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121612b1 mov ebp, esp */
  EBP = (ESP);
  /* 121612b3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121612b6 push esi */
  push32((uint32_t)(ESI));
  /* 121612b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121612ba and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121612bf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 121612c4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121612c9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 121612cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121612d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121612d4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 121612d6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 121612d9 push ecx */
  push32((uint32_t)(ECX));
  /* 121612da push 1 */
  push32((uint32_t)(0x1u));
  /* 121612dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121612df push edx */
  push32((uint32_t)(EDX));
  /* 121612e0 call dword ptr [0x1218084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218084c))), 0x121612e6u);
  /* 121612e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121612e8 jne 0x121612ee */
  if (!C.zf) goto L_121612ee;
  /* 121612ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121612ec jmp 0x12161332 */
  goto L_12161332;
L_121612ee:;
  /* 121612ee lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 121612f1 push eax */
  push32((uint32_t)(EAX));
  /* 121612f2 call 0x12161520 */
  push32(0x121612f7u); f_12161520();
  /* 121612f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121612fa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121612fd je 0x1216132d */
  if (C.zf) goto L_1216132d;
  /* 121612ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161303 je 0x1216132d */
  if (C.zf) goto L_1216132d;
  /* 12161305 mov ecx, dword ptr [0x1218083c] */
  ECX = (r32((uint32_t)(0x1218083c)));
  /* 1216130b push ecx */
  push32((uint32_t)(ECX));
  /* 1216130c call 0x121615a0 */
  push32(0x12161311u); f_121615a0();
  /* 12161311 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161314 mov esi, eax */
  ESI = (EAX);
  /* 12161316 mov edx, dword ptr [0x1218083c] */
  EDX = (r32((uint32_t)(0x1218083c)));
  /* 1216131c push edx */
  push32((uint32_t)(EDX));
  /* 1216131d call 0x121578c0 */
  push32(0x12161322u); f_121578c0();
  /* 12161322 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161325 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161327 jne 0x1216132d */
  if (!C.zf) goto L_1216132d;
  /* 12161329 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1216132b jmp 0x12161332 */
  goto L_12161332;
L_1216132d:;
  /* 1216132d mov eax, 1 */
  EAX = (0x1u);
L_12161332:;
  /* 12161332 pop esi */
  ESI = (pop32());
  /* 12161333 mov esp, ebp */
  ESP = (EBP);
  /* 12161335 pop ebp */
  EBP = (pop32());
  /* 12161336 ret  */
  ESPCHK(0x121612b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011340 @ 0x12161340 (77 bytes, 18 insns) */
void f_12161340(void) {
  FTRACE(0x12161340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12161340 push ebp */
  push32((uint32_t)(EBP));
  /* 12161341 mov ebp, esp */
  EBP = (ESP);
  /* 12161343 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12161349 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12161353 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12161359 push eax */
  push32((uint32_t)(EAX));
  /* 1216135a call dword ptr [0x121832c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832c0))), 0x12161360u);
  /* 12161360 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12161362 je 0x12161379 */
  if (C.zf) goto L_12161379;
  /* 12161364 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216136b jne 0x12161379 */
  if (!C.zf) goto L_12161379;
  /* 1216136d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12161377 jmp 0x12161383 */
  goto L_12161383;
L_12161379:;
  /* 12161379 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12161383:;
  /* 12161383 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12161389 mov esp, ebp */
  ESP = (EBP);
  /* 1216138b pop ebp */
  EBP = (pop32());
  /* 1216138c ret  */
  ESPCHK(0x12161340u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12161390 (388 bytes, 118 insns) */
void f_12161390(void) {
  FTRACE(0x12161390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12161390 push ebp */
  push32((uint32_t)(EBP));
  /* 12161391 mov ebp, esp */
  EBP = (ESP);
  /* 12161393 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12161396 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1216139d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 121613a4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_121613ab:;
  /* 121613ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121613ae cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121613b1 jg 0x121614f8 */
  if ((!C.zf&&C.sf==C.of)) goto L_121614f8;
  /* 121613b7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121613ba add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121613bd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121613be sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121613c0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121613c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121613c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121613c8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121613cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121613ce cmp edx, dword ptr [ecx + 0x1217f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1217f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121613d4 jne 0x121614ce */
  if (!C.zf) goto L_121614ce;
  /* 121613da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121613dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121613e0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121613e4 ja 0x12161407 */
  if ((!C.cf&&!C.zf)) goto L_12161407;
  /* 121613e6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121613ea je 0x12161479 */
  if (C.zf) goto L_12161479;
  /* 121613f0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121613f4 je 0x12161424 */
  if (C.zf) goto L_12161424;
  /* 121613f6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121613fa je 0x12161446 */
  if (C.zf) goto L_12161446;
  /* 121613fc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161400 je 0x12161468 */
  if (C.zf) goto L_12161468;
  /* 12161402 jmp 0x12161498 */
  goto L_12161498;
L_12161407:;
  /* 12161407 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216140e je 0x12161435 */
  if (C.zf) goto L_12161435;
  /* 12161410 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161417 je 0x12161457 */
  if (C.zf) goto L_12161457;
  /* 12161419 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161420 je 0x1216148a */
  if (C.zf) goto L_1216148a;
  /* 12161422 jmp 0x12161498 */
  goto L_12161498;
L_12161424:;
  /* 12161424 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161427 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1216142a add ecx, 0x1217f524 */
  { uint32_t _a=(ECX),_b=(0x1217f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161430 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12161433 jmp 0x12161498 */
  goto L_12161498;
L_12161435:;
  /* 12161435 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161438 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1216143b mov eax, dword ptr [edx + 0x1217f52c] */
  EAX = (r32((uint32_t)(EDX + 0x1217f52c)));
  /* 12161441 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12161444 jmp 0x12161498 */
  goto L_12161498;
L_12161446:;
  /* 12161446 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161449 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1216144c add ecx, 0x1217f530 */
  { uint32_t _a=(ECX),_b=(0x1217f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161452 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12161455 jmp 0x12161498 */
  goto L_12161498;
L_12161457:;
  /* 12161457 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1216145a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1216145d mov eax, dword ptr [edx + 0x1217f534] */
  EAX = (r32((uint32_t)(EDX + 0x1217f534)));
  /* 12161463 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12161466 jmp 0x12161498 */
  goto L_12161498;
L_12161468:;
  /* 12161468 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1216146b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1216146e add ecx, 0x1217f538 */
  { uint32_t _a=(ECX),_b=(0x1217f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161474 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12161477 jmp 0x12161498 */
  goto L_12161498;
L_12161479:;
  /* 12161479 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1216147c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1216147f add edx, 0x1217f53c */
  { uint32_t _a=(EDX),_b=(0x1217f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161485 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12161488 jmp 0x12161498 */
  goto L_12161498;
L_1216148a:;
  /* 1216148a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1216148d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12161490 add eax, 0x1217f544 */
  { uint32_t _a=(EAX),_b=(0x1217f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161495 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12161498:;
  /* 12161498 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216149c je 0x121614a4 */
  if (C.zf) goto L_121614a4;
  /* 1216149e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121614a2 jge 0x121614a6 */
  if ((C.sf==C.of)) goto L_121614a6;
L_121614a4:;
  /* 121614a4 jmp 0x121614f8 */
  goto L_121614f8;
L_121614a6:;
  /* 121614a6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121614a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121614ac push ecx */
  push32((uint32_t)(ECX));
  /* 121614ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121614b0 push edx */
  push32((uint32_t)(EDX));
  /* 121614b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121614b4 push eax */
  push32((uint32_t)(EAX));
  /* 121614b5 call 0x121582b0 */
  push32(0x121614bau); f_121582b0();
  /* 121614ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121614bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121614c0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121614c3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 121614c7 mov eax, 1 */
  EAX = (0x1u);
  /* 121614cc jmp 0x1216150e */
  goto L_1216150e;
L_121614ce:;
  /* 121614ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121614d1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121614d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121614d7 cmp eax, dword ptr [edx + 0x1217f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1217f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121614dd jae 0x121614ea */
  if (!C.cf) goto L_121614ea;
  /* 121614df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121614e2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121614e5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121614e8 jmp 0x121614f3 */
  goto L_121614f3;
L_121614ea:;
  /* 121614ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121614ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121614f0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_121614f3:;
  /* 121614f3 jmp 0x121613ab */
  goto L_121613ab;
L_121614f8:;
  /* 121614f8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121614fb push eax */
  push32((uint32_t)(EAX));
  /* 121614fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121614ff push ecx */
  push32((uint32_t)(ECX));
  /* 12161500 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12161503 push edx */
  push32((uint32_t)(EDX));
  /* 12161504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12161507 push eax */
  push32((uint32_t)(EAX));
  /* 12161508 call dword ptr [0x121832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832cc))), 0x1216150eu);
L_1216150e:;
  /* 1216150e mov esp, ebp */
  ESP = (EBP);
  /* 12161510 pop ebp */
  EBP = (pop32());
  /* 12161511 ret 0x10 */
  ESPCHK(0x12161390u, _esp0);
  ESP += 20; return;
}

/* FUN_10011520 @ 0x12161520 (118 bytes, 42 insns) */
void f_12161520(void) {
  FTRACE(0x12161520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12161520 push ebp */
  push32((uint32_t)(EBP));
  /* 12161521 mov ebp, esp */
  EBP = (ESP);
  /* 12161523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12161526 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1216152d:;
  /* 1216152d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12161530 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12161532 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12161535 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12161539 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216153c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216153f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12161542 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12161544 je 0x1216158f */
  if (C.zf) goto L_1216158f;
  /* 12161546 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1216154a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216154d jl 0x12161562 */
  if ((C.sf!=C.of)) goto L_12161562;
  /* 1216154f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12161553 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161556 jg 0x12161562 */
  if ((!C.zf&&C.sf==C.of)) goto L_12161562;
  /* 12161558 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1216155b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1216155d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12161560 jmp 0x1216157c */
  goto L_1216157c;
L_12161562:;
  /* 12161562 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12161566 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161569 jl 0x1216157c */
  if ((C.sf!=C.of)) goto L_1216157c;
  /* 1216156b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1216156f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161572 jg 0x1216157c */
  if ((!C.zf&&C.sf==C.of)) goto L_1216157c;
  /* 12161574 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12161577 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12161579 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1216157c:;
  /* 1216157c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1216157f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12161582 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12161586 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1216158a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1216158d jmp 0x1216152d */
  goto L_1216152d;
L_1216158f:;
  /* 1216158f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12161592 mov esp, ebp */
  ESP = (EBP);
  /* 12161594 pop ebp */
  EBP = (pop32());
  /* 12161595 ret  */
  ESPCHK(0x12161520u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x121615a0 (101 bytes, 36 insns) */
void f_121615a0(void) {
  FTRACE(0x121615a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121615a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121615a1 mov ebp, esp */
  EBP = (ESP);
  /* 121615a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121615a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121615ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121615b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121615b2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 121615b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121615b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121615bb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_121615be:;
  /* 121615be movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 121615c2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121615c5 jl 0x121615d0 */
  if ((C.sf!=C.of)) goto L_121615d0;
  /* 121615c7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 121615cb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121615ce jle 0x121615e2 */
  if ((C.zf||C.sf!=C.of)) goto L_121615e2;
L_121615d0:;
  /* 121615d0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 121615d4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121615d7 jl 0x121615fe */
  if ((C.sf!=C.of)) goto L_121615fe;
  /* 121615d9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 121615dd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121615e0 jg 0x121615fe */
  if ((!C.zf&&C.sf==C.of)) goto L_121615fe;
L_121615e2:;
  /* 121615e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121615e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121615e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121615eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121615ee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121615f0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 121615f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121615f6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121615f9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 121615fc jmp 0x121615be */
  goto L_121615be;
L_121615fe:;
  /* 121615fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12161601 mov esp, ebp */
  ESP = (EBP);
  /* 12161603 pop ebp */
  EBP = (pop32());
  /* 12161604 ret  */
  ESPCHK(0x121615a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011610 @ 0x12161610 (122 bytes, 39 insns) */
void f_12161610(void) {
  FTRACE(0x12161610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12161610 push ebp */
  push32((uint32_t)(EBP));
  /* 12161611 mov ebp, esp */
  EBP = (ESP);
  /* 12161613 push ecx */
  push32((uint32_t)(ECX));
  /* 12161614 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12161617 cmp eax, dword ptr [0x121820dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121820dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216161d jae 0x12161641 */
  if (!C.cf) goto L_12161641;
  /* 1216161f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12161622 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12161625 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12161628 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1216162b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1216162e mov eax, dword ptr [ecx*4 + 0x12181fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12181fa0)));
  /* 12161635 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1216163a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1216163d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1216163f jne 0x1216165c */
  if (!C.zf) goto L_1216165c;
L_12161641:;
  /* 12161641 call 0x1215c960 */
  push32(0x12161646u); f_1215c960();
  /* 12161646 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1216164c call 0x1215c970 */
  push32(0x12161651u); f_1215c970();
  /* 12161651 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12161657 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1216165a jmp 0x12161686 */
  goto L_12161686;
L_1216165c:;
  /* 1216165c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216165f push edx */
  push32((uint32_t)(EDX));
  /* 12161660 call 0x1215e180 */
  push32(0x12161665u); f_1215e180();
  /* 12161665 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161668 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216166b push eax */
  push32((uint32_t)(EAX));
  /* 1216166c call 0x12161690 */
  push32(0x12161671u); f_12161690();
  /* 12161671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161674 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12161677 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216167a push ecx */
  push32((uint32_t)(ECX));
  /* 1216167b call 0x1215e210 */
  push32(0x12161680u); f_1215e210();
  /* 12161680 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161683 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12161686:;
  /* 12161686 mov esp, ebp */
  ESP = (EBP);
  /* 12161688 pop ebp */
  EBP = (pop32());
  /* 12161689 ret  */
  ESPCHK(0x12161610u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12161690 (170 bytes, 59 insns) */
void f_12161690(void) {
  FTRACE(0x12161690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12161690 push ebp */
  push32((uint32_t)(EBP));
  /* 12161691 mov ebp, esp */
  EBP = (ESP);
  /* 12161693 push ecx */
  push32((uint32_t)(ECX));
  /* 12161694 push esi */
  push32((uint32_t)(ESI));
  /* 12161695 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12161698 push eax */
  push32((uint32_t)(EAX));
  /* 12161699 call 0x1215e000 */
  push32(0x1216169eu); f_1215e000();
  /* 1216169e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121616a1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121616a4 je 0x121616e3 */
  if (C.zf) goto L_121616e3;
  /* 121616a6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121616aa je 0x121616b2 */
  if (C.zf) goto L_121616b2;
  /* 121616ac cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121616b0 jne 0x121616cc */
  if (!C.zf) goto L_121616cc;
L_121616b2:;
  /* 121616b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 121616b4 call 0x1215e000 */
  push32(0x121616b9u); f_1215e000();
  /* 121616b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121616bc mov esi, eax */
  ESI = (EAX);
  /* 121616be push 2 */
  push32((uint32_t)(0x2u));
  /* 121616c0 call 0x1215e000 */
  push32(0x121616c5u); f_1215e000();
  /* 121616c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121616c8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121616ca je 0x121616e3 */
  if (C.zf) goto L_121616e3;
L_121616cc:;
  /* 121616cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121616cf push ecx */
  push32((uint32_t)(ECX));
  /* 121616d0 call 0x1215e000 */
  push32(0x121616d5u); f_1215e000();
  /* 121616d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121616d8 push eax */
  push32((uint32_t)(EAX));
  /* 121616d9 call dword ptr [0x121832c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832c8))), 0x121616dfu);
  /* 121616df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121616e1 je 0x121616ec */
  if (C.zf) goto L_121616ec;
L_121616e3:;
  /* 121616e3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121616ea jmp 0x121616f5 */
  goto L_121616f5;
L_121616ec:;
  /* 121616ec call dword ptr [0x12183390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183390))), 0x121616f2u);
  /* 121616f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121616f5:;
  /* 121616f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121616f8 push edx */
  push32((uint32_t)(EDX));
  /* 121616f9 call 0x1215df20 */
  push32(0x121616feu); f_1215df20();
  /* 121616fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161701 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12161704 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12161707 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216170a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1216170d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12161710 mov edx, dword ptr [eax*4 + 0x12181fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12181fa0)));
  /* 12161717 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1216171c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161720 je 0x12161733 */
  if (C.zf) goto L_12161733;
  /* 12161722 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12161725 push eax */
  push32((uint32_t)(EAX));
  /* 12161726 call 0x1215c8c0 */
  push32(0x1216172bu); f_1215c8c0();
  /* 1216172b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216172e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12161731 jmp 0x12161735 */
  goto L_12161735;
L_12161733:;
  /* 12161733 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12161735:;
  /* 12161735 pop esi */
  ESI = (pop32());
  /* 12161736 mov esp, ebp */
  ESP = (EBP);
  /* 12161738 pop ebp */
  EBP = (pop32());
  /* 12161739 ret  */
  ESPCHK(0x12161690u, _esp0);
  ESP += 4; return;
}

/* FUN_10011740 @ 0x12161740 (146 bytes, 52 insns) */
void f_12161740(void) {
  FTRACE(0x12161740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12161740 push ebp */
  push32((uint32_t)(EBP));
  /* 12161741 mov ebp, esp */
  EBP = (ESP);
  /* 12161743 push ebx */
  push32((uint32_t)(EBX));
  /* 12161744 push esi */
  push32((uint32_t)(ESI));
  /* 12161745 push edi */
  push32((uint32_t)(EDI));
L_12161746:;
  /* 12161746 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216174a jne 0x1216176a */
  if (!C.zf) goto L_1216176a;
  /* 1216174c push 0x1217c1a0 */
  push32((uint32_t)(0x1217c1a0u));
  /* 12161751 push 0 */
  push32((uint32_t)(0x0u));
  /* 12161753 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12161755 push 0x1217c868 */
  push32((uint32_t)(0x1217c868u));
  /* 1216175a push 2 */
  push32((uint32_t)(0x2u));
  /* 1216175c call 0x12153b50 */
  push32(0x12161761u); f_12153b50();
  /* 12161761 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161764 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161767 jne 0x1216176a */
  if (!C.zf) goto L_1216176a;
  /* 12161769 int3  */
  x86_unimpl("int3 @ 0x12161769");
L_1216176a:;
  /* 1216176a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1216176c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1216176e jne 0x12161746 */
  if (!C.zf) goto L_12161746;
  /* 12161770 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12161773 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12161776 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1216177c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1216177e je 0x121617cd */
  if (C.zf) goto L_121617cd;
  /* 12161780 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12161783 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12161786 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12161789 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1216178b je 0x121617cd */
  if (C.zf) goto L_121617cd;
  /* 1216178d push 2 */
  push32((uint32_t)(0x2u));
  /* 1216178f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12161792 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12161795 push eax */
  push32((uint32_t)(EAX));
  /* 12161796 call 0x12155520 */
  push32(0x1216179bu); f_12155520();
  /* 1216179b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216179e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121617a1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121617a4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 121617aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121617ad mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 121617b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121617b3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 121617b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121617bc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 121617c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121617c6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_121617cd:;
  /* 121617cd pop edi */
  EDI = (pop32());
  /* 121617ce pop esi */
  ESI = (pop32());
  /* 121617cf pop ebx */
  EBX = (pop32());
  /* 121617d0 pop ebp */
  EBP = (pop32());
  /* 121617d1 ret  */
  ESPCHK(0x12161740u, _esp0);
  ESP += 4; return;
}

/* FUN_100117e0 @ 0x121617e0 (289 bytes, 97 insns) */
void f_121617e0(void) {
  FTRACE(0x121617e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121617e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121617e1 mov ebp, esp */
  EBP = (ESP);
  /* 121617e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121617e6 push esi */
  push32((uint32_t)(ESI));
  /* 121617e7 mov eax, dword ptr [0x1217fc98] */
  EAX = (r32((uint32_t)(0x1217fc98)));
  /* 121617ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121617ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121617f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121617fd jmp 0x12161808 */
  goto L_12161808;
L_121617ff:;
  /* 121617ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161802 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161805 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12161808:;
  /* 12161808 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216180c jae 0x12161841 */
  if (!C.cf) goto L_12161841;
  /* 1216180e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161811 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161814 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12161817 push ecx */
  push32((uint32_t)(ECX));
  /* 12161818 call 0x121578c0 */
  push32(0x1216181du); f_121578c0();
  /* 1216181d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161820 mov esi, eax */
  ESI = (EAX);
  /* 12161822 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161825 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161828 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1216182c push ecx */
  push32((uint32_t)(ECX));
  /* 1216182d call 0x121578c0 */
  push32(0x12161832u); f_121578c0();
  /* 12161832 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161835 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161838 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1216183c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1216183f jmp 0x121617ff */
  goto L_121617ff;
L_12161841:;
  /* 12161841 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12161844 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161847 push eax */
  push32((uint32_t)(EAX));
  /* 12161848 call 0x12154a70 */
  push32(0x1216184du); f_12154a70();
  /* 1216184d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161850 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12161853 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161857 je 0x121618f9 */
  if (C.zf) goto L_121618f9;
  /* 1216185d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12161860 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12161863 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1216186a jmp 0x12161875 */
  goto L_12161875;
L_1216186c:;
  /* 1216186c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1216186f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161872 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12161875:;
  /* 12161875 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161879 jae 0x121618ea */
  if (!C.cf) goto L_121618ea;
  /* 1216187b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1216187e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12161881 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161884 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161887 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1216188a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1216188d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161890 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12161893 push ecx */
  push32((uint32_t)(ECX));
  /* 12161894 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161897 push edx */
  push32((uint32_t)(EDX));
  /* 12161898 call 0x12157a40 */
  push32(0x1216189du); f_12157a40();
  /* 1216189d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121618a0 push eax */
  push32((uint32_t)(EAX));
  /* 121618a1 call 0x121578c0 */
  push32(0x121618a6u); f_121578c0();
  /* 121618a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121618a9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121618ac add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121618ae mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121618b1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121618b4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 121618b7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121618ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121618bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121618c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121618c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121618c6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 121618ca push eax */
  push32((uint32_t)(EAX));
  /* 121618cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121618ce push ecx */
  push32((uint32_t)(ECX));
  /* 121618cf call 0x12157a40 */
  push32(0x121618d4u); f_12157a40();
  /* 121618d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121618d7 push eax */
  push32((uint32_t)(EAX));
  /* 121618d8 call 0x121578c0 */
  push32(0x121618ddu); f_121578c0();
  /* 121618dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121618e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121618e3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121618e5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121618e8 jmp 0x1216186c */
  goto L_1216186c;
L_121618ea:;
  /* 121618ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121618ed mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 121618f0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121618f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121618f6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_121618f9:;
  /* 121618f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121618fc pop esi */
  ESI = (pop32());
  /* 121618fd mov esp, ebp */
  ESP = (EBP);
  /* 121618ff pop ebp */
  EBP = (pop32());
  /* 12161900 ret  */
  ESPCHK(0x121617e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011910 @ 0x12161910 (291 bytes, 97 insns) */
void f_12161910(void) {
  FTRACE(0x12161910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12161910 push ebp */
  push32((uint32_t)(EBP));
  /* 12161911 mov ebp, esp */
  EBP = (ESP);
  /* 12161913 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12161916 push esi */
  push32((uint32_t)(ESI));
  /* 12161917 mov eax, dword ptr [0x1217fc98] */
  EAX = (r32((uint32_t)(0x1217fc98)));
  /* 1216191c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1216191f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12161926 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1216192d jmp 0x12161938 */
  goto L_12161938;
L_1216192f:;
  /* 1216192f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161932 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161935 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12161938:;
  /* 12161938 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216193c jae 0x12161972 */
  if (!C.cf) goto L_12161972;
  /* 1216193e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161941 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161944 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12161948 push ecx */
  push32((uint32_t)(ECX));
  /* 12161949 call 0x121578c0 */
  push32(0x1216194eu); f_121578c0();
  /* 1216194e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161951 mov esi, eax */
  ESI = (EAX);
  /* 12161953 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161956 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161959 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1216195d push ecx */
  push32((uint32_t)(ECX));
  /* 1216195e call 0x121578c0 */
  push32(0x12161963u); f_121578c0();
  /* 12161963 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161966 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161969 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1216196d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12161970 jmp 0x1216192f */
  goto L_1216192f;
L_12161972:;
  /* 12161972 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12161975 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161978 push eax */
  push32((uint32_t)(EAX));
  /* 12161979 call 0x12154a70 */
  push32(0x1216197eu); f_12154a70();
  /* 1216197e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161981 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12161984 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161988 je 0x12161a2b */
  if (C.zf) goto L_12161a2b;
  /* 1216198e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12161991 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12161994 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1216199b jmp 0x121619a6 */
  goto L_121619a6;
L_1216199d:;
  /* 1216199d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121619a0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121619a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_121619a6:;
  /* 121619a6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121619aa jae 0x12161a1c */
  if (!C.cf) goto L_12161a1c;
  /* 121619ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121619af mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 121619b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121619b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121619b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121619bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121619be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121619c1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 121619c5 push ecx */
  push32((uint32_t)(ECX));
  /* 121619c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121619c9 push edx */
  push32((uint32_t)(EDX));
  /* 121619ca call 0x12157a40 */
  push32(0x121619cfu); f_12157a40();
  /* 121619cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121619d2 push eax */
  push32((uint32_t)(EAX));
  /* 121619d3 call 0x121578c0 */
  push32(0x121619d8u); f_121578c0();
  /* 121619d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121619db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121619de add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121619e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121619e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121619e6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 121619e9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121619ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121619ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121619f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121619f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121619f8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 121619fc push eax */
  push32((uint32_t)(EAX));
  /* 121619fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161a00 push ecx */
  push32((uint32_t)(ECX));
  /* 12161a01 call 0x12157a40 */
  push32(0x12161a06u); f_12157a40();
  /* 12161a06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161a09 push eax */
  push32((uint32_t)(EAX));
  /* 12161a0a call 0x121578c0 */
  push32(0x12161a0fu); f_121578c0();
  /* 12161a0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161a12 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161a15 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161a17 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12161a1a jmp 0x1216199d */
  goto L_1216199d;
L_12161a1c:;
  /* 12161a1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161a1f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12161a22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161a25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161a28 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12161a2b:;
  /* 12161a2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12161a2e pop esi */
  ESI = (pop32());
  /* 12161a2f mov esp, ebp */
  ESP = (EBP);
  /* 12161a31 pop ebp */
  EBP = (pop32());
  /* 12161a32 ret  */
  ESPCHK(0x12161910u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a40 @ 0x12161a40 (878 bytes, 273 insns) */
void f_12161a40(void) {
  FTRACE(0x12161a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12161a40 push ebp */
  push32((uint32_t)(EBP));
  /* 12161a41 mov ebp, esp */
  EBP = (ESP);
  /* 12161a43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12161a46 push esi */
  push32((uint32_t)(ESI));
  /* 12161a47 mov eax, dword ptr [0x1217fc98] */
  EAX = (r32((uint32_t)(0x1217fc98)));
  /* 12161a4c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12161a4f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12161a56 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12161a5d jmp 0x12161a68 */
  goto L_12161a68;
L_12161a5f:;
  /* 12161a5f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161a62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161a65 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12161a68:;
  /* 12161a68 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161a6c jae 0x12161aa1 */
  if (!C.cf) goto L_12161aa1;
  /* 12161a6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161a71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161a74 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12161a77 push ecx */
  push32((uint32_t)(ECX));
  /* 12161a78 call 0x121578c0 */
  push32(0x12161a7du); f_121578c0();
  /* 12161a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161a80 mov esi, eax */
  ESI = (EAX);
  /* 12161a82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161a85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161a88 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12161a8c push ecx */
  push32((uint32_t)(ECX));
  /* 12161a8d call 0x121578c0 */
  push32(0x12161a92u); f_121578c0();
  /* 12161a92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161a95 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161a98 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12161a9c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12161a9f jmp 0x12161a5f */
  goto L_12161a5f;
L_12161aa1:;
  /* 12161aa1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12161aa8 jmp 0x12161ab3 */
  goto L_12161ab3;
L_12161aaa:;
  /* 12161aaa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161aad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161ab0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12161ab3:;
  /* 12161ab3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161ab7 jae 0x12161aed */
  if (!C.cf) goto L_12161aed;
  /* 12161ab9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161abc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161abf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12161ac3 push eax */
  push32((uint32_t)(EAX));
  /* 12161ac4 call 0x121578c0 */
  push32(0x12161ac9u); f_121578c0();
  /* 12161ac9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161acc mov esi, eax */
  ESI = (EAX);
  /* 12161ace mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161ad1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161ad4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12161ad8 push eax */
  push32((uint32_t)(EAX));
  /* 12161ad9 call 0x121578c0 */
  push32(0x12161adeu); f_121578c0();
  /* 12161ade add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161ae1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161ae4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12161ae8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12161aeb jmp 0x12161aaa */
  goto L_12161aaa;
L_12161aed:;
  /* 12161aed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161af0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12161af6 push eax */
  push32((uint32_t)(EAX));
  /* 12161af7 call 0x121578c0 */
  push32(0x12161afcu); f_121578c0();
  /* 12161afc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161aff mov esi, eax */
  ESI = (EAX);
  /* 12161b01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161b04 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12161b0a push edx */
  push32((uint32_t)(EDX));
  /* 12161b0b call 0x121578c0 */
  push32(0x12161b10u); f_121578c0();
  /* 12161b10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161b13 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161b16 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12161b1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12161b1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161b20 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12161b26 push edx */
  push32((uint32_t)(EDX));
  /* 12161b27 call 0x121578c0 */
  push32(0x12161b2cu); f_121578c0();
  /* 12161b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161b2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12161b32 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12161b36 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12161b39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161b3c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12161b42 push ecx */
  push32((uint32_t)(ECX));
  /* 12161b43 call 0x121578c0 */
  push32(0x12161b48u); f_121578c0();
  /* 12161b48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161b4b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12161b4e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12161b52 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12161b55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161b58 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12161b5e push edx */
  push32((uint32_t)(EDX));
  /* 12161b5f call 0x121578c0 */
  push32(0x12161b64u); f_121578c0();
  /* 12161b64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161b67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12161b6a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12161b6e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12161b71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12161b74 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161b79 push eax */
  push32((uint32_t)(EAX));
  /* 12161b7a call 0x12154a70 */
  push32(0x12161b7fu); f_12154a70();
  /* 12161b7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161b82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12161b85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161b89 je 0x12161da6 */
  if (C.zf) goto L_12161da6;
  /* 12161b8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12161b92 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12161b95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12161b98 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161b9e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12161ba1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12161ba6 mov eax, dword ptr [0x1217fc98] */
  EAX = (r32((uint32_t)(0x1217fc98)));
  /* 12161bab push eax */
  push32((uint32_t)(EAX));
  /* 12161bac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12161baf push ecx */
  push32((uint32_t)(ECX));
  /* 12161bb0 call 0x1215b370 */
  push32(0x12161bb5u); f_1215b370();
  /* 12161bb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161bb8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12161bbf jmp 0x12161bca */
  goto L_12161bca;
L_12161bc1:;
  /* 12161bc1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161bc4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161bc7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12161bca:;
  /* 12161bca cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161bce jae 0x12161c3e */
  if (!C.cf) goto L_12161c3e;
  /* 12161bd0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161bd3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12161bd6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161bd9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12161bdc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161bdf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161be2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12161be5 push edx */
  push32((uint32_t)(EDX));
  /* 12161be6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161be9 push eax */
  push32((uint32_t)(EAX));
  /* 12161bea call 0x12157a40 */
  push32(0x12161befu); f_12157a40();
  /* 12161bef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161bf2 push eax */
  push32((uint32_t)(EAX));
  /* 12161bf3 call 0x121578c0 */
  push32(0x12161bf8u); f_121578c0();
  /* 12161bf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161bfb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161bfe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12161c02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12161c05 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161c08 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12161c0b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161c0e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12161c12 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161c15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161c18 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12161c1c push edx */
  push32((uint32_t)(EDX));
  /* 12161c1d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161c20 push eax */
  push32((uint32_t)(EAX));
  /* 12161c21 call 0x12157a40 */
  push32(0x12161c26u); f_12157a40();
  /* 12161c26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161c29 push eax */
  push32((uint32_t)(EAX));
  /* 12161c2a call 0x121578c0 */
  push32(0x12161c2fu); f_121578c0();
  /* 12161c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161c32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161c35 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12161c39 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12161c3c jmp 0x12161bc1 */
  goto L_12161bc1;
L_12161c3e:;
  /* 12161c3e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12161c45 jmp 0x12161c50 */
  goto L_12161c50;
L_12161c47:;
  /* 12161c47 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161c4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161c4d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12161c50:;
  /* 12161c50 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161c54 jae 0x12161cc6 */
  if (!C.cf) goto L_12161cc6;
  /* 12161c56 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161c59 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12161c5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161c5f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12161c63 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161c66 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161c69 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12161c6d push eax */
  push32((uint32_t)(EAX));
  /* 12161c6e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161c71 push ecx */
  push32((uint32_t)(ECX));
  /* 12161c72 call 0x12157a40 */
  push32(0x12161c77u); f_12157a40();
  /* 12161c77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161c7a push eax */
  push32((uint32_t)(EAX));
  /* 12161c7b call 0x121578c0 */
  push32(0x12161c80u); f_121578c0();
  /* 12161c80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161c83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161c86 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12161c8a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12161c8d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161c90 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12161c93 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161c96 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12161c9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161c9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161ca0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12161ca4 push eax */
  push32((uint32_t)(EAX));
  /* 12161ca5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161ca8 push ecx */
  push32((uint32_t)(ECX));
  /* 12161ca9 call 0x12157a40 */
  push32(0x12161caeu); f_12157a40();
  /* 12161cae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161cb1 push eax */
  push32((uint32_t)(EAX));
  /* 12161cb2 call 0x121578c0 */
  push32(0x12161cb7u); f_121578c0();
  /* 12161cb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161cba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161cbd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12161cc1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12161cc4 jmp 0x12161c47 */
  goto L_12161c47;
L_12161cc6:;
  /* 12161cc6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12161cc9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161ccc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12161cd2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161cd5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12161cdb push ecx */
  push32((uint32_t)(ECX));
  /* 12161cdc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161cdf push edx */
  push32((uint32_t)(EDX));
  /* 12161ce0 call 0x12157a40 */
  push32(0x12161ce5u); f_12157a40();
  /* 12161ce5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161ce8 push eax */
  push32((uint32_t)(EAX));
  /* 12161ce9 call 0x121578c0 */
  push32(0x12161ceeu); f_121578c0();
  /* 12161cee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161cf1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161cf4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12161cf8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12161cfb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12161cfe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161d01 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12161d07 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161d0a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12161d10 push eax */
  push32((uint32_t)(EAX));
  /* 12161d11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161d14 push ecx */
  push32((uint32_t)(ECX));
  /* 12161d15 call 0x12157a40 */
  push32(0x12161d1au); f_12157a40();
  /* 12161d1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161d1d push eax */
  push32((uint32_t)(EAX));
  /* 12161d1e call 0x121578c0 */
  push32(0x12161d23u); f_121578c0();
  /* 12161d23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161d26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161d29 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12161d2d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12161d30 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12161d33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161d36 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12161d3c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161d3f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12161d45 push ecx */
  push32((uint32_t)(ECX));
  /* 12161d46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161d49 push edx */
  push32((uint32_t)(EDX));
  /* 12161d4a call 0x12157a40 */
  push32(0x12161d4fu); f_12157a40();
  /* 12161d4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161d52 push eax */
  push32((uint32_t)(EAX));
  /* 12161d53 call 0x121578c0 */
  push32(0x12161d58u); f_121578c0();
  /* 12161d58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161d5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161d5e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12161d62 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12161d65 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12161d68 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161d6b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12161d71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161d74 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12161d7a push eax */
  push32((uint32_t)(EAX));
  /* 12161d7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161d7e push ecx */
  push32((uint32_t)(ECX));
  /* 12161d7f call 0x12157a40 */
  push32(0x12161d84u); f_12157a40();
  /* 12161d84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161d87 push eax */
  push32((uint32_t)(EAX));
  /* 12161d88 call 0x121578c0 */
  push32(0x12161d8du); f_121578c0();
  /* 12161d8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161d90 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161d93 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12161d97 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12161d9a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12161d9d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12161da0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12161da6:;
  /* 12161da6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12161da9 pop esi */
  ESI = (pop32());
  /* 12161daa mov esp, ebp */
  ESP = (EBP);
  /* 12161dac pop ebp */
  EBP = (pop32());
  /* 12161dad ret  */
  ESPCHK(0x12161a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011db0 @ 0x12161db0 (31 bytes, 15 insns) */
void f_12161db0(void) {
  FTRACE(0x12161db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12161db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12161db1 mov ebp, esp */
  EBP = (ESP);
  /* 12161db3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12161db5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12161db8 push eax */
  push32((uint32_t)(EAX));
  /* 12161db9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12161dbc push ecx */
  push32((uint32_t)(ECX));
  /* 12161dbd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12161dc0 push edx */
  push32((uint32_t)(EDX));
  /* 12161dc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12161dc4 push eax */
  push32((uint32_t)(EAX));
  /* 12161dc5 call 0x12161dd0 */
  push32(0x12161dcau); f_12161dd0();
  /* 12161dca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161dcd pop ebp */
  EBP = (pop32());
  /* 12161dce ret  */
  ESPCHK(0x12161db0u, _esp0);
  ESP += 4; return;
}

