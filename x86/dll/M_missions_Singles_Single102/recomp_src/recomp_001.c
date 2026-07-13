#include "recomp.h"

/* FUN_10008d00 @ 0x10f58d00 (10 bytes, 5 insns) */
void f_10f58d00(void) {
  FTRACE(0x10f58d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58d01 mov ebp, esp */
  EBP = (ESP);
  /* 10f58d03 mov eax, dword ptr [0x10f7ec94] */
  EAX = (r32((uint32_t)(0x10f7ec94)));
  /* 10f58d08 pop ebp */
  EBP = (pop32());
  /* 10f58d09 ret  */
  ESPCHK(0x10f58d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d10 @ 0x10f58d10 (31 bytes, 11 insns) */
void f_10f58d10(void) {
  FTRACE(0x10f58d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58d10 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58d11 mov ebp, esp */
  EBP = (ESP);
  /* 10f58d13 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58d1a jbe 0x10f58d20 */
  if ((C.cf||C.zf)) goto L_10f58d20;
  /* 10f58d1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f58d1e jmp 0x10f58d2d */
  goto L_10f58d2d;
L_10f58d20:;
  /* 10f58d20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58d23 mov dword ptr [0x10f7ec94], eax */
  w32((uint32_t)(0x10f7ec94), (EAX));
  /* 10f58d28 mov eax, 1 */
  EAX = (0x1u);
L_10f58d2d:;
  /* 10f58d2d pop ebp */
  EBP = (pop32());
  /* 10f58d2e ret  */
  ESPCHK(0x10f58d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d30 @ 0x10f58d30 (89 bytes, 20 insns) */
void f_10f58d30(void) {
  FTRACE(0x10f58d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58d31 mov ebp, esp */
  EBP = (ESP);
  /* 10f58d33 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10f58d38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f58d3a mov eax, dword ptr [0x10f81f6c] */
  EAX = (r32((uint32_t)(0x10f81f6c)));
  /* 10f58d3f push eax */
  push32((uint32_t)(EAX));
  /* 10f58d40 call dword ptr [0x10f83314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83314))), 0x10f58d46u);
  /* 10f58d46 mov dword ptr [0x10f81f68], eax */
  w32((uint32_t)(0x10f81f68), (EAX));
  /* 10f58d4b cmp dword ptr [0x10f81f68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f81f68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58d52 jne 0x10f58d58 */
  if (!C.zf) goto L_10f58d58;
  /* 10f58d54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f58d56 jmp 0x10f58d87 */
  goto L_10f58d87;
L_10f58d58:;
  /* 10f58d58 mov ecx, dword ptr [0x10f81f68] */
  ECX = (r32((uint32_t)(0x10f81f68)));
  /* 10f58d5e mov dword ptr [0x10f81f5c], ecx */
  w32((uint32_t)(0x10f81f5c), (ECX));
  /* 10f58d64 mov dword ptr [0x10f81f60], 0 */
  w32((uint32_t)(0x10f81f60), (0x0u));
  /* 10f58d6e mov dword ptr [0x10f81f64], 0 */
  w32((uint32_t)(0x10f81f64), (0x0u));
  /* 10f58d78 mov dword ptr [0x10f81f48], 0x10 */
  w32((uint32_t)(0x10f81f48), (0x10u));
  /* 10f58d82 mov eax, 1 */
  EAX = (0x1u);
L_10f58d87:;
  /* 10f58d87 pop ebp */
  EBP = (pop32());
  /* 10f58d88 ret  */
  ESPCHK(0x10f58d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d90 @ 0x10f58d90 (85 bytes, 29 insns) */
void f_10f58d90(void) {
  FTRACE(0x10f58d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58d91 mov ebp, esp */
  EBP = (ESP);
  /* 10f58d93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f58d96 mov eax, dword ptr [0x10f81f64] */
  EAX = (r32((uint32_t)(0x10f81f64)));
  /* 10f58d9b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f58d9e mov ecx, dword ptr [0x10f81f68] */
  ECX = (r32((uint32_t)(0x10f81f68)));
  /* 10f58da4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58da6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f58da9 mov edx, dword ptr [0x10f81f68] */
  EDX = (r32((uint32_t)(0x10f81f68)));
  /* 10f58daf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10f58db2:;
  /* 10f58db2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58db5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58db8 jae 0x10f58ddf */
  if (!C.cf) goto L_10f58ddf;
  /* 10f58dba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58dbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58dc0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f58dc3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f58dc6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58dcd jae 0x10f58dd4 */
  if (!C.cf) goto L_10f58dd4;
  /* 10f58dcf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58dd2 jmp 0x10f58de1 */
  goto L_10f58de1;
L_10f58dd4:;
  /* 10f58dd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58dd7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58dda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f58ddd jmp 0x10f58db2 */
  goto L_10f58db2;
L_10f58ddf:;
  /* 10f58ddf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f58de1:;
  /* 10f58de1 mov esp, ebp */
  ESP = (EBP);
  /* 10f58de3 pop ebp */
  EBP = (pop32());
  /* 10f58de4 ret  */
  ESPCHK(0x10f58d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008df0 @ 0x10f58df0 (95 bytes, 33 insns) */
void f_10f58df0(void) {
  FTRACE(0x10f58df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58df0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58df1 mov ebp, esp */
  EBP = (ESP);
  /* 10f58df3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f58df6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58df9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f58dfc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f58dff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f58e02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58e05 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10f58e08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f58e0b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f58e10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58e13 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f58e15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58e18 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f58e1b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f58e1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f58e1f jne 0x10f58e41 */
  if (!C.zf) goto L_10f58e41;
  /* 10f58e21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58e24 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10f58e27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f58e29 jne 0x10f58e41 */
  if (!C.zf) goto L_10f58e41;
  /* 10f58e2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58e2e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f58e34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f58e36 je 0x10f58e41 */
  if (C.zf) goto L_10f58e41;
  /* 10f58e38 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10f58e3f jmp 0x10f58e48 */
  goto L_10f58e48;
L_10f58e41:;
  /* 10f58e41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10f58e48:;
  /* 10f58e48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f58e4b mov esp, ebp */
  ESP = (EBP);
  /* 10f58e4d pop ebp */
  EBP = (pop32());
  /* 10f58e4e ret  */
  ESPCHK(0x10f58df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e50 @ 0x10f58e50 (1485 bytes, 453 insns) */
void f_10f58e50(void) {
  FTRACE(0x10f58e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58e51 mov ebp, esp */
  EBP = (ESP);
  /* 10f58e53 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f58e56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58e59 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f58e5c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10f58e5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58e62 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f58e65 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f58e68 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f58e6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f58e6e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10f58e71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f58e74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58e77 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f58e7d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f58e80 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10f58e87 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f58e8a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f58e8d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f58e90 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10f58e93 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f58e96 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f58e98 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f58e9b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10f58e9e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f58ea1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58ea4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10f58ea7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f58eaa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f58eac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10f58eaf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f58eb2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10f58eb5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f58eb8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f58ebb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f58ebe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f58ec0 jne 0x10f58fe8 */
  if (!C.zf) goto L_10f58fe8;
  /* 10f58ec6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f58ec9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10f58ecc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f58ecf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10f58ed2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58ed6 jbe 0x10f58edf */
  if ((C.cf||C.zf)) goto L_10f58edf;
  /* 10f58ed8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10f58edf:;
  /* 10f58edf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f58ee2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f58ee5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f58ee8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58eeb jne 0x10f58fc1 */
  if (!C.zf) goto L_10f58fc1;
  /* 10f58ef1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58ef5 jae 0x10f58f56 */
  if (!C.cf) goto L_10f58f56;
  /* 10f58ef7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f58efc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f58eff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f58f01 not eax */
  EAX = (~(EAX));
  /* 10f58f03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58f06 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f58f09 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10f58f0d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f58f0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58f12 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f58f15 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10f58f19 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f58f1c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58f1f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10f58f22 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f58f25 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f58f28 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58f2b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10f58f2e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f58f31 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58f34 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f58f38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f58f3a jne 0x10f58f54 */
  if (!C.zf) goto L_10f58f54;
  /* 10f58f3c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f58f41 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f58f44 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f58f46 not eax */
  EAX = (~(EAX));
  /* 10f58f48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58f4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f58f4d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f58f4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58f52 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10f58f54:;
  /* 10f58f54 jmp 0x10f58fc1 */
  goto L_10f58fc1;
L_10f58f56:;
  /* 10f58f56 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f58f59 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f58f5c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f58f61 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f58f63 not edx */
  EDX = (~(EDX));
  /* 10f58f65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58f68 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f58f6b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10f58f72 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f58f74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58f77 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f58f7a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10f58f81 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f58f84 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58f87 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f58f8a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f58f8d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f58f90 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58f93 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10f58f96 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f58f99 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58f9c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10f58fa0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f58fa2 jne 0x10f58fc1 */
  if (!C.zf) goto L_10f58fc1;
  /* 10f58fa4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f58fa7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f58faa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f58faf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f58fb1 not edx */
  EDX = (~(EDX));
  /* 10f58fb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58fb6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f58fb9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f58fbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58fbe mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10f58fc1:;
  /* 10f58fc1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f58fc4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f58fc7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f58fca mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f58fcd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10f58fd0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f58fd3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f58fd6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f58fd9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f58fdc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10f58fdf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f58fe2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58fe5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10f58fe8:;
  /* 10f58fe8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f58feb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10f58fee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f58ff1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f58ff4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58ff8 jbe 0x10f59001 */
  if ((C.cf||C.zf)) goto L_10f59001;
  /* 10f58ffa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10f59001:;
  /* 10f59001 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f59004 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f59007 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f59009 jne 0x10f59165 */
  if (!C.zf) goto L_10f59165;
  /* 10f5900f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f59012 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59015 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10f59018 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5901b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10f5901e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59021 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10f59024 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59028 jbe 0x10f59031 */
  if ((C.cf||C.zf)) goto L_10f59031;
  /* 10f5902a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10f59031:;
  /* 10f59031 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59034 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59037 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10f5903a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5903d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10f59040 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59043 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10f59046 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5904a jbe 0x10f59053 */
  if ((C.cf||C.zf)) goto L_10f59053;
  /* 10f5904c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10f59053:;
  /* 10f59053 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59056 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59059 je 0x10f5915f */
  if (C.zf) goto L_10f5915f;
  /* 10f5905f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f59062 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f59065 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f59068 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5906b jne 0x10f59141 */
  if (!C.zf) goto L_10f59141;
  /* 10f59071 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59075 jae 0x10f590d6 */
  if (!C.cf) goto L_10f590d6;
  /* 10f59077 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f5907c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f5907f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f59081 not edx */
  EDX = (~(EDX));
  /* 10f59083 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59086 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f59089 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10f5908d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5908f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59092 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f59095 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10f59099 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f5909c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5909f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f590a2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f590a5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f590a8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f590ab mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10f590ae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f590b1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f590b4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10f590b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f590ba jne 0x10f590d4 */
  if (!C.zf) goto L_10f590d4;
  /* 10f590bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f590c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f590c4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f590c6 not edx */
  EDX = (~(EDX));
  /* 10f590c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f590cb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f590cd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f590cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f590d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f590d4:;
  /* 10f590d4 jmp 0x10f59141 */
  goto L_10f59141;
L_10f590d6:;
  /* 10f590d6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f590d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f590dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f590e1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f590e3 not eax */
  EAX = (~(EAX));
  /* 10f590e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f590e8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f590eb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10f590f2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f590f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f590f7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f590fa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10f59101 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f59104 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59107 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10f5910a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f5910d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f59110 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59113 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10f59116 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f59119 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5911c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f59120 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f59122 jne 0x10f59141 */
  if (!C.zf) goto L_10f59141;
  /* 10f59124 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59127 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5912a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f5912f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f59131 not eax */
  EAX = (~(EAX));
  /* 10f59133 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59136 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f59139 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5913b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5913e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10f59141:;
  /* 10f59141 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f59144 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f59147 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f5914a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f5914d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10f59150 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f59153 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f59156 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f59159 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f5915c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10f5915f:;
  /* 10f5915f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f59162 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10f59165:;
  /* 10f59165 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f59168 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5916b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5916d jne 0x10f5917b */
  if (!C.zf) goto L_10f5917b;
  /* 10f5916f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59172 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59175 je 0x10f5928b */
  if (C.zf) goto L_10f5928b;
L_10f5917b:;
  /* 10f5917b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f5917e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f59181 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10f59184 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10f59187 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f5918a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5918d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f59190 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10f59193 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f59196 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f59199 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10f5919c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5919f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f591a2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10f591a5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f591a8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f591ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f591ae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10f591b1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f591b4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f591b7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f591ba cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f591bd jne 0x10f5928b */
  if (!C.zf) goto L_10f5928b;
  /* 10f591c3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f591c7 jae 0x10f59224 */
  if (!C.cf) goto L_10f59224;
  /* 10f591c9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f591cc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f591cf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f591d3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f591d6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f591d9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f591dc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f591df mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f591e2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f591e5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10f591e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f591ea jne 0x10f59202 */
  if (!C.zf) goto L_10f59202;
  /* 10f591ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f591f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f591f4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f591f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f591f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f591fb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f591fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59200 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f59202:;
  /* 10f59202 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f59207 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f5920a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f5920c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5920f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f59212 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10f59216 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f59218 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5921b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f5921e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10f59222 jmp 0x10f5928b */
  goto L_10f5928b;
L_10f59224:;
  /* 10f59224 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f59227 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5922a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f5922e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f59231 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59234 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f59237 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f5923a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f5923d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59240 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10f59243 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f59245 jne 0x10f59262 */
  if (!C.zf) goto L_10f59262;
  /* 10f59247 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f5924a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5924d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f59252 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f59254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59257 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f5925a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5925c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5925f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10f59262:;
  /* 10f59262 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f59265 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59268 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f5926d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f5926f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59272 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f59275 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10f5927c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5927e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59281 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f59284 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10f5928b:;
  /* 10f5928b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f5928e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59291 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10f59293 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f59296 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59299 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5929c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10f5929f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f592a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f592a4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f592a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f592aa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f592ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f592af cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f592b2 jne 0x10f59419 */
  if (!C.zf) goto L_10f59419;
  /* 10f592b8 cmp dword ptr [0x10f81f60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f81f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f592bf je 0x10f59408 */
  if (C.zf) goto L_10f59408;
  /* 10f592c5 mov eax, dword ptr [0x10f81f58] */
  EAX = (r32((uint32_t)(0x10f81f58)));
  /* 10f592ca shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10f592cd mov ecx, dword ptr [0x10f81f60] */
  ECX = (r32((uint32_t)(0x10f81f60)));
  /* 10f592d3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f592d6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f592d8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10f592db push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10f592e0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10f592e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f592e8 push eax */
  push32((uint32_t)(EAX));
  /* 10f592e9 call dword ptr [0x10f83330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83330))), 0x10f592efu);
  /* 10f592ef mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f592f4 mov ecx, dword ptr [0x10f81f58] */
  ECX = (r32((uint32_t)(0x10f81f58)));
  /* 10f592fa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f592fc mov eax, dword ptr [0x10f81f60] */
  EAX = (r32((uint32_t)(0x10f81f60)));
  /* 10f59301 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f59304 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f59306 mov edx, dword ptr [0x10f81f60] */
  EDX = (r32((uint32_t)(0x10f81f60)));
  /* 10f5930c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10f5930f mov eax, dword ptr [0x10f81f60] */
  EAX = (r32((uint32_t)(0x10f81f60)));
  /* 10f59314 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f59317 mov edx, dword ptr [0x10f81f58] */
  EDX = (r32((uint32_t)(0x10f81f58)));
  /* 10f5931d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10f59328 mov eax, dword ptr [0x10f81f60] */
  EAX = (r32((uint32_t)(0x10f81f60)));
  /* 10f5932d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f59330 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10f59333 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f59336 mov eax, dword ptr [0x10f81f60] */
  EAX = (r32((uint32_t)(0x10f81f60)));
  /* 10f5933b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f5933e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10f59341 mov edx, dword ptr [0x10f81f60] */
  EDX = (r32((uint32_t)(0x10f81f60)));
  /* 10f59347 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f5934a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10f5934e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f59350 jne 0x10f59366 */
  if (!C.zf) goto L_10f59366;
  /* 10f59352 mov edx, dword ptr [0x10f81f60] */
  EDX = (r32((uint32_t)(0x10f81f60)));
  /* 10f59358 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f5935b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10f5935d mov ecx, dword ptr [0x10f81f60] */
  ECX = (r32((uint32_t)(0x10f81f60)));
  /* 10f59363 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10f59366:;
  /* 10f59366 mov edx, dword ptr [0x10f81f60] */
  EDX = (r32((uint32_t)(0x10f81f60)));
  /* 10f5936c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59370 jne 0x10f59408 */
  if (!C.zf) goto L_10f59408;
  /* 10f59376 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10f5937b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5937d mov eax, dword ptr [0x10f81f60] */
  EAX = (r32((uint32_t)(0x10f81f60)));
  /* 10f59382 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f59385 push ecx */
  push32((uint32_t)(ECX));
  /* 10f59386 call dword ptr [0x10f83330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83330))), 0x10f5938cu);
  /* 10f5938c mov edx, dword ptr [0x10f81f60] */
  EDX = (r32((uint32_t)(0x10f81f60)));
  /* 10f59392 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f59395 push eax */
  push32((uint32_t)(EAX));
  /* 10f59396 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f59398 mov ecx, dword ptr [0x10f81f6c] */
  ECX = (r32((uint32_t)(0x10f81f6c)));
  /* 10f5939e push ecx */
  push32((uint32_t)(ECX));
  /* 10f5939f call dword ptr [0x10f83384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83384))), 0x10f593a5u);
  /* 10f593a5 mov edx, dword ptr [0x10f81f64] */
  EDX = (r32((uint32_t)(0x10f81f64)));
  /* 10f593ab imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f593ae mov eax, dword ptr [0x10f81f68] */
  EAX = (r32((uint32_t)(0x10f81f68)));
  /* 10f593b3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f593b5 mov ecx, dword ptr [0x10f81f60] */
  ECX = (r32((uint32_t)(0x10f81f60)));
  /* 10f593bb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f593be sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f593c0 push eax */
  push32((uint32_t)(EAX));
  /* 10f593c1 mov edx, dword ptr [0x10f81f60] */
  EDX = (r32((uint32_t)(0x10f81f60)));
  /* 10f593c7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f593ca push edx */
  push32((uint32_t)(EDX));
  /* 10f593cb mov eax, dword ptr [0x10f81f60] */
  EAX = (r32((uint32_t)(0x10f81f60)));
  /* 10f593d0 push eax */
  push32((uint32_t)(EAX));
  /* 10f593d1 call 0x10f5c980 */
  push32(0x10f593d6u); f_10f5c980();
  /* 10f593d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f593d9 mov ecx, dword ptr [0x10f81f64] */
  ECX = (r32((uint32_t)(0x10f81f64)));
  /* 10f593df sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f593e2 mov dword ptr [0x10f81f64], ecx */
  w32((uint32_t)(0x10f81f64), (ECX));
  /* 10f593e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f593eb cmp edx, dword ptr [0x10f81f60] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f81f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f593f1 jbe 0x10f593fc */
  if ((C.cf||C.zf)) goto L_10f593fc;
  /* 10f593f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f593f6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f593f9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10f593fc:;
  /* 10f593fc mov ecx, dword ptr [0x10f81f68] */
  ECX = (r32((uint32_t)(0x10f81f68)));
  /* 10f59402 mov dword ptr [0x10f81f5c], ecx */
  w32((uint32_t)(0x10f81f5c), (ECX));
L_10f59408:;
  /* 10f59408 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5940b mov dword ptr [0x10f81f60], edx */
  w32((uint32_t)(0x10f81f60), (EDX));
  /* 10f59411 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59414 mov dword ptr [0x10f81f58], eax */
  w32((uint32_t)(0x10f81f58), (EAX));
L_10f59419:;
  /* 10f59419 mov esp, ebp */
  ESP = (EBP);
  /* 10f5941b pop ebp */
  EBP = (pop32());
  /* 10f5941c ret  */
  ESPCHK(0x10f58e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009420 @ 0x10f59420 (1334 bytes, 427 insns) */
void f_10f59420(void) {
  FTRACE(0x10f59420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f59420 push ebp */
  push32((uint32_t)(EBP));
  /* 10f59421 mov ebp, esp */
  EBP = (ESP);
  /* 10f59423 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59426 push esi */
  push32((uint32_t)(ESI));
  /* 10f59427 mov eax, dword ptr [0x10f81f64] */
  EAX = (r32((uint32_t)(0x10f81f64)));
  /* 10f5942c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5942f mov ecx, dword ptr [0x10f81f68] */
  ECX = (r32((uint32_t)(0x10f81f68)));
  /* 10f59435 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59437 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10f5943a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5943d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59440 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10f59443 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10f59446 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f59449 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10f5944c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5944f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f59452 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59456 jge 0x10f5946c */
  if ((C.sf==C.of)) goto L_10f5946c;
  /* 10f59458 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5945b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5945e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f59460 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10f59463 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10f5946a jmp 0x10f59481 */
  goto L_10f59481;
L_10f5946c:;
  /* 10f5946c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10f59473 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f59476 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59479 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5947c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f5947e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10f59481:;
  /* 10f59481 mov ecx, dword ptr [0x10f81f5c] */
  ECX = (r32((uint32_t)(0x10f81f5c)));
  /* 10f59487 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10f5948a:;
  /* 10f5948a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5948d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59490 jae 0x10f594b6 */
  if (!C.cf) goto L_10f594b6;
  /* 10f59492 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59495 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f59498 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10f5949a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5949d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f594a0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10f594a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f594a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f594a7 je 0x10f594ab */
  if (C.zf) goto L_10f594ab;
  /* 10f594a9 jmp 0x10f594b6 */
  goto L_10f594b6;
L_10f594ab:;
  /* 10f594ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f594ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f594b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10f594b4 jmp 0x10f5948a */
  goto L_10f5948a;
L_10f594b6:;
  /* 10f594b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f594b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f594bc jne 0x10f5959d */
  if (!C.zf) goto L_10f5959d;
  /* 10f594c2 mov eax, dword ptr [0x10f81f68] */
  EAX = (r32((uint32_t)(0x10f81f68)));
  /* 10f594c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10f594ca:;
  /* 10f594ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f594cd cmp ecx, dword ptr [0x10f81f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f81f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f594d3 jae 0x10f594f9 */
  if (!C.cf) goto L_10f594f9;
  /* 10f594d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f594d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f594db and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10f594dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f594e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f594e3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10f594e6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f594e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f594ea je 0x10f594ee */
  if (C.zf) goto L_10f594ee;
  /* 10f594ec jmp 0x10f594f9 */
  goto L_10f594f9;
L_10f594ee:;
  /* 10f594ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f594f1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f594f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f594f7 jmp 0x10f594ca */
  goto L_10f594ca;
L_10f594f9:;
  /* 10f594f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f594fc cmp ecx, dword ptr [0x10f81f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f81f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59502 jne 0x10f5959d */
  if (!C.zf) goto L_10f5959d;
L_10f59508:;
  /* 10f59508 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5950b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5950e jae 0x10f59526 */
  if (!C.cf) goto L_10f59526;
  /* 10f59510 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59513 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59517 je 0x10f5951b */
  if (C.zf) goto L_10f5951b;
  /* 10f59519 jmp 0x10f59526 */
  goto L_10f59526;
L_10f5951b:;
  /* 10f5951b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5951e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59521 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10f59524 jmp 0x10f59508 */
  goto L_10f59508;
L_10f59526:;
  /* 10f59526 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59529 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5952c jne 0x10f59577 */
  if (!C.zf) goto L_10f59577;
  /* 10f5952e mov eax, dword ptr [0x10f81f68] */
  EAX = (r32((uint32_t)(0x10f81f68)));
  /* 10f59533 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10f59536:;
  /* 10f59536 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59539 cmp ecx, dword ptr [0x10f81f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f81f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5953f jae 0x10f59557 */
  if (!C.cf) goto L_10f59557;
  /* 10f59541 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59544 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59548 je 0x10f5954c */
  if (C.zf) goto L_10f5954c;
  /* 10f5954a jmp 0x10f59557 */
  goto L_10f59557;
L_10f5954c:;
  /* 10f5954c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5954f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59552 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f59555 jmp 0x10f59536 */
  goto L_10f59536;
L_10f59557:;
  /* 10f59557 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5955a cmp ecx, dword ptr [0x10f81f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f81f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59560 jne 0x10f59577 */
  if (!C.zf) goto L_10f59577;
  /* 10f59562 call 0x10f59960 */
  push32(0x10f59567u); f_10f59960();
  /* 10f59567 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f5956a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5956e jne 0x10f59577 */
  if (!C.zf) goto L_10f59577;
  /* 10f59570 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f59572 jmp 0x10f59951 */
  goto L_10f59951;
L_10f59577:;
  /* 10f59577 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5957a push edx */
  push32((uint32_t)(EDX));
  /* 10f5957b call 0x10f59a70 */
  push32(0x10f59580u); f_10f59a70();
  /* 10f59580 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59583 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59586 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10f59589 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10f5958b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5958e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f59591 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59594 jne 0x10f5959d */
  if (!C.zf) goto L_10f5959d;
  /* 10f59596 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f59598 jmp 0x10f59951 */
  goto L_10f59951;
L_10f5959d:;
  /* 10f5959d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f595a0 mov dword ptr [0x10f81f5c], edx */
  w32((uint32_t)(0x10f81f5c), (EDX));
  /* 10f595a6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f595a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f595ac mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10f595af mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f595b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f595b4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10f595b7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f595bb je 0x10f595e0 */
  if (C.zf) goto L_10f595e0;
  /* 10f595bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f595c0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f595c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f595c6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10f595ca mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f595cd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f595d0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10f595d3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10f595da or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10f595dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f595de jne 0x10f59615 */
  if (!C.zf) goto L_10f59615;
L_10f595e0:;
  /* 10f595e0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10f595e7:;
  /* 10f595e7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f595ea mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f595ed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f595f0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10f595f4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f595f7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f595fa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10f595fd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10f59604 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10f59606 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f59608 jne 0x10f59615 */
  if (!C.zf) goto L_10f59615;
  /* 10f5960a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5960d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59610 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10f59613 jmp 0x10f595e7 */
  goto L_10f595e7;
L_10f59615:;
  /* 10f59615 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59618 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5961e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f59621 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10f59628 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f5962b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10f59632 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59635 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f59638 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5963b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10f5963f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10f59642 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59646 jne 0x10f59662 */
  if (!C.zf) goto L_10f59662;
  /* 10f59648 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10f5964f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59652 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f59655 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f59658 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10f5965f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10f59662:;
  /* 10f59662 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59666 jl 0x10f5967b */
  if ((C.sf!=C.of)) goto L_10f5967b;
  /* 10f59668 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f5966b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10f5966d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f59670 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f59673 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59676 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10f59679 jmp 0x10f59662 */
  goto L_10f59662;
L_10f5967b:;
  /* 10f5967b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5967e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59681 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10f59685 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f59688 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5968b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f5968d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59690 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f59693 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f59696 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10f59699 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5969c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10f5969f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f596a3 jle 0x10f596ac */
  if ((C.zf||C.sf!=C.of)) goto L_10f596ac;
  /* 10f596a5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10f596ac:;
  /* 10f596ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f596af cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f596b2 je 0x10f598d0 */
  if (C.zf) goto L_10f598d0;
  /* 10f596b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f596bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f596be mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f596c1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f596c4 jne 0x10f5979a */
  if (!C.zf) goto L_10f5979a;
  /* 10f596ca cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f596ce jge 0x10f5972f */
  if ((C.sf==C.of)) goto L_10f5972f;
  /* 10f596d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f596d5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f596d8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f596da not eax */
  EAX = (~(EAX));
  /* 10f596dc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f596df mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f596e2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10f596e6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f596e8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f596eb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f596ee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10f596f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f596f5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f596f8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10f596fb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f596fe mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f59701 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59704 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10f59707 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f5970a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5970d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f59711 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f59713 jne 0x10f5972d */
  if (!C.zf) goto L_10f5972d;
  /* 10f59715 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f5971a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5971d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f5971f not eax */
  EAX = (~(EAX));
  /* 10f59721 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59724 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f59726 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f59728 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5972b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10f5972d:;
  /* 10f5972d jmp 0x10f5979a */
  goto L_10f5979a;
L_10f5972f:;
  /* 10f5972f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f59732 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59735 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f5973a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f5973c not edx */
  EDX = (~(EDX));
  /* 10f5973e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59741 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f59744 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10f5974b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5974d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59750 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f59753 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10f5975a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f5975d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59760 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f59763 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f59766 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f59769 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5976c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10f5976f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f59772 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59775 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10f59779 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5977b jne 0x10f5979a */
  if (!C.zf) goto L_10f5979a;
  /* 10f5977d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f59780 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59783 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f59788 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f5978a not edx */
  EDX = (~(EDX));
  /* 10f5978c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5978f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f59792 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f59794 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59797 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10f5979a:;
  /* 10f5979a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5979d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f597a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f597a3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f597a6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10f597a9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f597ac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f597af mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f597b2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f597b5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10f597b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f597bc je 0x10f598d0 */
  if (C.zf) goto L_10f598d0;
  /* 10f597c2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f597c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f597c8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10f597cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f597ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f597d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f597d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f597d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10f597da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f597dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f597e0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10f597e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f597e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f597e9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10f597ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f597ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f597f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f597f5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10f597f8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f597fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f597fe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f59801 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59804 jne 0x10f598d0 */
  if (!C.zf) goto L_10f598d0;
  /* 10f5980a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5980e jge 0x10f5986a */
  if ((C.sf==C.of)) goto L_10f5986a;
  /* 10f59810 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f59813 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59816 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10f5981a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f5981d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59820 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10f59823 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f59825 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f59828 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5982b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10f5982e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f59830 jne 0x10f59848 */
  if (!C.zf) goto L_10f59848;
  /* 10f59832 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f59837 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5983a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f5983c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5983f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f59841 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f59843 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59846 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10f59848:;
  /* 10f59848 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f5984d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f59850 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f59852 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59855 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f59858 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10f5985c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5985e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59861 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f59864 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10f59868 jmp 0x10f598d0 */
  goto L_10f598d0;
L_10f5986a:;
  /* 10f5986a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f5986d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59870 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10f59874 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f59877 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5987a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10f5987d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f5987f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f59882 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59885 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10f59888 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5988a jne 0x10f598a7 */
  if (!C.zf) goto L_10f598a7;
  /* 10f5988c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5988f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59892 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f59897 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f59899 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5989c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f5989f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f598a1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f598a4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10f598a7:;
  /* 10f598a7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f598aa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f598ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f598b2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f598b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f598b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f598ba mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10f598c1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f598c3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f598c6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f598c9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10f598d0:;
  /* 10f598d0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f598d4 je 0x10f598ea */
  if (C.zf) goto L_10f598ea;
  /* 10f598d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f598d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f598dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f598de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f598e1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f598e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f598e7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10f598ea:;
  /* 10f598ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f598ed add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f598f0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f598f3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f598f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f598f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f598fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f598fe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f59901 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59904 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f59907 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5990a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10f5990d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59910 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f59912 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59915 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f59917 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5991a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5991d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10f5991f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f59921 jne 0x10f59943 */
  if (!C.zf) goto L_10f59943;
  /* 10f59923 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59926 cmp eax, dword ptr [0x10f81f60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f81f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5992c jne 0x10f59943 */
  if (!C.zf) goto L_10f59943;
  /* 10f5992e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59931 cmp ecx, dword ptr [0x10f81f58] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f81f58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59937 jne 0x10f59943 */
  if (!C.zf) goto L_10f59943;
  /* 10f59939 mov dword ptr [0x10f81f60], 0 */
  w32((uint32_t)(0x10f81f60), (0x0u));
L_10f59943:;
  /* 10f59943 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f59946 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59949 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10f5994b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5994e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10f59951:;
  /* 10f59951 pop esi */
  ESI = (pop32());
  /* 10f59952 mov esp, ebp */
  ESP = (EBP);
  /* 10f59954 pop ebp */
  EBP = (pop32());
  /* 10f59955 ret  */
  ESPCHK(0x10f59420u, _esp0);
  ESP += 4; return;
}

/* FUN_10009960 @ 0x10f59960 (271 bytes, 78 insns) */
void f_10f59960(void) {
  FTRACE(0x10f59960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f59960 push ebp */
  push32((uint32_t)(EBP));
  /* 10f59961 mov ebp, esp */
  EBP = (ESP);
  /* 10f59963 push ecx */
  push32((uint32_t)(ECX));
  /* 10f59964 mov eax, dword ptr [0x10f81f64] */
  EAX = (r32((uint32_t)(0x10f81f64)));
  /* 10f59969 cmp eax, dword ptr [0x10f81f48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f81f48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5996f jne 0x10f599bb */
  if (!C.zf) goto L_10f599bb;
  /* 10f59971 mov ecx, dword ptr [0x10f81f48] */
  ECX = (r32((uint32_t)(0x10f81f48)));
  /* 10f59977 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5997a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5997d push ecx */
  push32((uint32_t)(ECX));
  /* 10f5997e mov edx, dword ptr [0x10f81f68] */
  EDX = (r32((uint32_t)(0x10f81f68)));
  /* 10f59984 push edx */
  push32((uint32_t)(EDX));
  /* 10f59985 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f59987 mov eax, dword ptr [0x10f81f6c] */
  EAX = (r32((uint32_t)(0x10f81f6c)));
  /* 10f5998c push eax */
  push32((uint32_t)(EAX));
  /* 10f5998d call dword ptr [0x10f8331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8331c))), 0x10f59993u);
  /* 10f59993 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f59996 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5999a jne 0x10f599a3 */
  if (!C.zf) goto L_10f599a3;
  /* 10f5999c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5999e jmp 0x10f59a6b */
  goto L_10f59a6b;
L_10f599a3:;
  /* 10f599a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f599a6 mov dword ptr [0x10f81f68], ecx */
  w32((uint32_t)(0x10f81f68), (ECX));
  /* 10f599ac mov edx, dword ptr [0x10f81f48] */
  EDX = (r32((uint32_t)(0x10f81f48)));
  /* 10f599b2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f599b5 mov dword ptr [0x10f81f48], edx */
  w32((uint32_t)(0x10f81f48), (EDX));
L_10f599bb:;
  /* 10f599bb mov eax, dword ptr [0x10f81f64] */
  EAX = (r32((uint32_t)(0x10f81f64)));
  /* 10f599c0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f599c3 mov ecx, dword ptr [0x10f81f68] */
  ECX = (r32((uint32_t)(0x10f81f68)));
  /* 10f599c9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f599cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f599ce push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10f599d3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f599d5 mov edx, dword ptr [0x10f81f6c] */
  EDX = (r32((uint32_t)(0x10f81f6c)));
  /* 10f599db push edx */
  push32((uint32_t)(EDX));
  /* 10f599dc call dword ptr [0x10f83314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83314))), 0x10f599e2u);
  /* 10f599e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f599e5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10f599e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f599eb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f599ef jne 0x10f599f5 */
  if (!C.zf) goto L_10f599f5;
  /* 10f599f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f599f3 jmp 0x10f59a6b */
  goto L_10f59a6b;
L_10f599f5:;
  /* 10f599f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f599f7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10f599fc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10f59a01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f59a03 call dword ptr [0x10f8330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8330c))), 0x10f59a09u);
  /* 10f59a09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59a0c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10f59a0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59a12 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59a16 jne 0x10f59a32 */
  if (!C.zf) goto L_10f59a32;
  /* 10f59a18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59a1b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f59a1e push ecx */
  push32((uint32_t)(ECX));
  /* 10f59a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f59a21 mov edx, dword ptr [0x10f81f6c] */
  EDX = (r32((uint32_t)(0x10f81f6c)));
  /* 10f59a27 push edx */
  push32((uint32_t)(EDX));
  /* 10f59a28 call dword ptr [0x10f83384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83384))), 0x10f59a2eu);
  /* 10f59a2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f59a30 jmp 0x10f59a6b */
  goto L_10f59a6b;
L_10f59a32:;
  /* 10f59a32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59a35 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f59a3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59a3e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10f59a45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59a48 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10f59a4f mov eax, dword ptr [0x10f81f64] */
  EAX = (r32((uint32_t)(0x10f81f64)));
  /* 10f59a54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59a57 mov dword ptr [0x10f81f64], eax */
  w32((uint32_t)(0x10f81f64), (EAX));
  /* 10f59a5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59a5f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10f59a62 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10f59a68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f59a6b:;
  /* 10f59a6b mov esp, ebp */
  ESP = (EBP);
  /* 10f59a6d pop ebp */
  EBP = (pop32());
  /* 10f59a6e ret  */
  ESPCHK(0x10f59960u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a70 @ 0x10f59a70 (494 bytes, 149 insns) */
void f_10f59a70(void) {
  FTRACE(0x10f59a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f59a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10f59a71 mov ebp, esp */
  EBP = (ESP);
  /* 10f59a73 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59a79 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f59a7c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10f59a7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59a82 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f59a85 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f59a88 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10f59a8f:;
  /* 10f59a8f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59a93 jl 0x10f59aa8 */
  if ((C.sf!=C.of)) goto L_10f59aa8;
  /* 10f59a95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f59a98 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10f59a9a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f59a9d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f59aa0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59aa3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10f59aa6 jmp 0x10f59a8f */
  goto L_10f59a8f;
L_10f59aa8:;
  /* 10f59aa8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f59aab imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f59ab1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59ab4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10f59abb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f59abe mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10f59ac5 jmp 0x10f59ad0 */
  goto L_10f59ad0;
L_10f59ac7:;
  /* 10f59ac7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f59aca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59acd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10f59ad0:;
  /* 10f59ad0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59ad4 jge 0x10f59af6 */
  if ((C.sf==C.of)) goto L_10f59af6;
  /* 10f59ad6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f59ad9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f59adc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10f59adf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f59ae2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59ae5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59ae8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10f59aeb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59aee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59af1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10f59af4 jmp 0x10f59ac7 */
  goto L_10f59ac7;
L_10f59af6:;
  /* 10f59af6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f59af9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10f59afc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59aff mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f59b02 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59b04 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f59b07 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f59b09 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10f59b0e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10f59b13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f59b16 push edx */
  push32((uint32_t)(EDX));
  /* 10f59b17 call dword ptr [0x10f8330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8330c))), 0x10f59b1du);
  /* 10f59b1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f59b1f jne 0x10f59b29 */
  if (!C.zf) goto L_10f59b29;
  /* 10f59b21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f59b24 jmp 0x10f59c5a */
  goto L_10f59c5a;
L_10f59b29:;
  /* 10f59b29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f59b2c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59b31 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f59b34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f59b37 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f59b3a jmp 0x10f59b48 */
  goto L_10f59b48;
L_10f59b3c:;
  /* 10f59b3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59b3f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59b45 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f59b48:;
  /* 10f59b48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59b4b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59b4e ja 0x10f59bad */
  if ((!C.cf&&!C.zf)) goto L_10f59bad;
  /* 10f59b50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59b53 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10f59b5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59b5d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10f59b67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59b6a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59b6d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f59b70 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59b73 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10f59b79 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59b7c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59b82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59b85 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10f59b88 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59b8b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59b91 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59b94 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10f59b97 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59b9a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59b9f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f59ba2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f59ba5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10f59bab jmp 0x10f59b3c */
  goto L_10f59b3c;
L_10f59bad:;
  /* 10f59bad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f59bb0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59bb6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10f59bb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f59bbc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59bbf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f59bc2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10f59bc5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f59bc8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f59bcb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f59bce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59bd1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f59bd4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10f59bd7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f59bda add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59bdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f59be0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10f59be3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f59be6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f59be9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f59bec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59bef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f59bf2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10f59bf5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f59bf8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59bfb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10f59c03 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f59c06 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59c09 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10f59c14 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59c17 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10f59c1b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59c1e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10f59c21 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f59c24 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59c27 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10f59c2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f59c2c jne 0x10f59c3d */
  if (!C.zf) goto L_10f59c3d;
  /* 10f59c2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59c31 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f59c34 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10f59c37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59c3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10f59c3d:;
  /* 10f59c3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f59c42 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f59c45 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f59c47 not edx */
  EDX = (~(EDX));
  /* 10f59c49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59c4c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f59c4f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f59c51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59c54 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10f59c57 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10f59c5a:;
  /* 10f59c5a mov esp, ebp */
  ESP = (EBP);
  /* 10f59c5c pop ebp */
  EBP = (pop32());
  /* 10f59c5d ret  */
  ESPCHK(0x10f59a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c60 @ 0x10f59c60 (1515 bytes, 489 insns) */
void f_10f59c60(void) {
  FTRACE(0x10f59c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f59c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10f59c61 mov ebp, esp */
  EBP = (ESP);
  /* 10f59c63 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59c66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f59c69 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59c6c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10f59c6e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f59c71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59c74 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10f59c77 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10f59c7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59c7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f59c80 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59c83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f59c86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f59c89 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10f59c8c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f59c8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59c92 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f59c98 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59c9b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10f59ca2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f59ca5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f59ca8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59cab mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f59cae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f59cb1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f59cb3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59cb6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10f59cb9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f59cbc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59cbf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10f59cc2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59cc5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f59cc7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10f59cca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f59ccd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59cd0 jle 0x10f59f86 */
  if ((C.zf||C.sf!=C.of)) goto L_10f59f86;
  /* 10f59cd6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f59cd9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f59cdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f59cde jne 0x10f59ceb */
  if (!C.zf) goto L_10f59ceb;
  /* 10f59ce0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f59ce3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59ce6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59ce9 jle 0x10f59cf2 */
  if ((C.zf||C.sf!=C.of)) goto L_10f59cf2;
L_10f59ceb:;
  /* 10f59ceb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f59ced jmp 0x10f5a247 */
  goto L_10f5a247;
L_10f59cf2:;
  /* 10f59cf2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f59cf5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10f59cf8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59cfb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f59cfe cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59d02 jbe 0x10f59d0b */
  if ((C.cf||C.zf)) goto L_10f59d0b;
  /* 10f59d04 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10f59d0b:;
  /* 10f59d0b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59d0e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59d11 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f59d14 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59d17 jne 0x10f59ded */
  if (!C.zf) goto L_10f59ded;
  /* 10f59d1d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59d21 jae 0x10f59d82 */
  if (!C.cf) goto L_10f59d82;
  /* 10f59d23 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f59d28 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f59d2b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f59d2d not edx */
  EDX = (~(EDX));
  /* 10f59d2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59d32 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59d35 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10f59d39 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f59d3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59d3e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59d41 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10f59d45 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59d48 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59d4b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f59d4e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f59d51 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59d54 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59d57 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10f59d5a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59d5d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59d60 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10f59d64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f59d66 jne 0x10f59d80 */
  if (!C.zf) goto L_10f59d80;
  /* 10f59d68 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f59d6d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f59d70 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f59d72 not edx */
  EDX = (~(EDX));
  /* 10f59d74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59d77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f59d79 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f59d7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59d7e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f59d80:;
  /* 10f59d80 jmp 0x10f59ded */
  goto L_10f59ded;
L_10f59d82:;
  /* 10f59d82 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f59d85 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59d88 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f59d8d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f59d8f not eax */
  EAX = (~(EAX));
  /* 10f59d91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59d94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59d97 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10f59d9e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f59da0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59da3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59da6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10f59dad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59db0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59db3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10f59db6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f59db9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59dbc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59dbf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10f59dc2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59dc5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59dc8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f59dcc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f59dce jne 0x10f59ded */
  if (!C.zf) goto L_10f59ded;
  /* 10f59dd0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f59dd3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59dd6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f59ddb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f59ddd not eax */
  EAX = (~(EAX));
  /* 10f59ddf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59de2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f59de5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f59de7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59dea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10f59ded:;
  /* 10f59ded mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59df0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f59df3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59df6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f59df9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10f59dfc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59dff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f59e02 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59e05 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f59e08 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10f59e0b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f59e0e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59e11 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59e14 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f59e17 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59e1b jle 0x10f59f67 */
  if ((C.zf||C.sf!=C.of)) goto L_10f59f67;
  /* 10f59e21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f59e24 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59e27 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10f59e2a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f59e2d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10f59e30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59e33 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10f59e36 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59e3a jbe 0x10f59e43 */
  if ((C.cf||C.zf)) goto L_10f59e43;
  /* 10f59e3c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10f59e43:;
  /* 10f59e43 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f59e46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f59e49 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10f59e4c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10f59e4f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59e52 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59e55 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f59e58 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10f59e5b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59e5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59e61 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10f59e64 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f59e67 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59e6a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10f59e6d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59e70 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f59e73 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59e76 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10f59e79 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59e7c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59e7f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f59e82 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59e85 jne 0x10f59f53 */
  if (!C.zf) goto L_10f59f53;
  /* 10f59e8b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59e8f jae 0x10f59eec */
  if (!C.cf) goto L_10f59eec;
  /* 10f59e91 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59e94 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59e97 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f59e9b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59e9e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59ea1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f59ea4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f59ea7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59eaa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59ead mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10f59eb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f59eb2 jne 0x10f59eca */
  if (!C.zf) goto L_10f59eca;
  /* 10f59eb4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f59eb9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f59ebc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f59ebe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59ec1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f59ec3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f59ec5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59ec8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f59eca:;
  /* 10f59eca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f59ecf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f59ed2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f59ed4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59ed7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59eda mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10f59ede or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f59ee0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59ee3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59ee6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10f59eea jmp 0x10f59f53 */
  goto L_10f59f53;
L_10f59eec:;
  /* 10f59eec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59eef add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59ef2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f59ef6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59ef9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59efc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f59eff add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f59f02 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59f05 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59f08 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10f59f0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f59f0d jne 0x10f59f2a */
  if (!C.zf) goto L_10f59f2a;
  /* 10f59f0f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f59f12 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59f15 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f59f1a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f59f1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59f1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f59f22 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f59f24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f59f27 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10f59f2a:;
  /* 10f59f2a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f59f2d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59f30 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f59f35 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f59f37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59f3a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59f3d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10f59f44 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f59f46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f59f49 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f59f4c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10f59f53:;
  /* 10f59f53 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59f56 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f59f59 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10f59f5b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f59f5e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59f61 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f59f64 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10f59f67:;
  /* 10f59f67 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f59f6a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59f6d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f59f70 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f59f72 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f59f75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59f78 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f59f7b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59f7e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10f59f81 jmp 0x10f5a242 */
  goto L_10f5a242;
L_10f59f86:;
  /* 10f59f86 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f59f89 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59f8c jge 0x10f5a242 */
  if ((C.sf==C.of)) goto L_10f5a242;
  /* 10f59f92 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f59f95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59f98 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f59f9b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f59f9d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f59fa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59fa3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f59fa6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59fa9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10f59fac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f59faf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f59fb2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10f59fb5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f59fb8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59fbb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f59fbe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f59fc1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10f59fc4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59fc7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10f59fca cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59fce jbe 0x10f59fd7 */
  if ((C.cf||C.zf)) goto L_10f59fd7;
  /* 10f59fd0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10f59fd7:;
  /* 10f59fd7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f59fda and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10f59fdd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f59fdf jne 0x10f5a120 */
  if (!C.zf) goto L_10f5a120;
  /* 10f59fe5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f59fe8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10f59feb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f59fee mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f59ff1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f59ff5 jbe 0x10f59ffe */
  if ((C.cf||C.zf)) goto L_10f59ffe;
  /* 10f59ff7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10f59ffe:;
  /* 10f59ffe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f5a001 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f5a004 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f5a007 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a00a jne 0x10f5a0e0 */
  if (!C.zf) goto L_10f5a0e0;
  /* 10f5a010 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a014 jae 0x10f5a075 */
  if (!C.cf) goto L_10f5a075;
  /* 10f5a016 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f5a01b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5a01e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f5a020 not edx */
  EDX = (~(EDX));
  /* 10f5a022 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5a025 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a028 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10f5a02c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5a02e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5a031 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a034 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10f5a038 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a03b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a03e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f5a041 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f5a044 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a047 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a04a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10f5a04d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a050 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a053 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10f5a057 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5a059 jne 0x10f5a073 */
  if (!C.zf) goto L_10f5a073;
  /* 10f5a05b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f5a060 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5a063 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f5a065 not edx */
  EDX = (~(EDX));
  /* 10f5a067 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5a06a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f5a06c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5a06e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5a071 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f5a073:;
  /* 10f5a073 jmp 0x10f5a0e0 */
  goto L_10f5a0e0;
L_10f5a075:;
  /* 10f5a075 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5a078 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5a07b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f5a080 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f5a082 not eax */
  EAX = (~(EAX));
  /* 10f5a084 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5a087 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a08a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10f5a091 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5a093 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5a096 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a099 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10f5a0a0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a0a3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a0a6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10f5a0a9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f5a0ac mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a0af add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a0b2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10f5a0b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a0b8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a0bb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f5a0bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5a0c1 jne 0x10f5a0e0 */
  if (!C.zf) goto L_10f5a0e0;
  /* 10f5a0c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5a0c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5a0c9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f5a0ce shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f5a0d0 not eax */
  EAX = (~(EAX));
  /* 10f5a0d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5a0d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f5a0d8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5a0da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5a0dd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10f5a0e0:;
  /* 10f5a0e0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f5a0e3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f5a0e6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f5a0e9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f5a0ec mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10f5a0ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f5a0f2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f5a0f5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f5a0f8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f5a0fb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10f5a0fe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f5a101 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a104 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f5a107 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f5a10a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10f5a10d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5a110 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10f5a113 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a117 jbe 0x10f5a120 */
  if ((C.cf||C.zf)) goto L_10f5a120;
  /* 10f5a119 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10f5a120:;
  /* 10f5a120 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5a123 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5a126 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10f5a129 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10f5a12c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5a12f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5a132 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f5a135 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10f5a138 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5a13b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5a13e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10f5a141 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5a144 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5a147 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10f5a14a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5a14d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f5a150 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5a153 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10f5a156 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5a159 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5a15c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f5a15f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a162 jne 0x10f5a22e */
  if (!C.zf) goto L_10f5a22e;
  /* 10f5a168 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a16c jae 0x10f5a1c8 */
  if (!C.cf) goto L_10f5a1c8;
  /* 10f5a16e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a171 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a174 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10f5a178 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a17b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a17e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10f5a181 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f5a183 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a186 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a189 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10f5a18c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5a18e jne 0x10f5a1a6 */
  if (!C.zf) goto L_10f5a1a6;
  /* 10f5a190 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f5a195 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5a198 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f5a19a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5a19d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f5a19f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5a1a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5a1a4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10f5a1a6:;
  /* 10f5a1a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f5a1ab mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5a1ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f5a1b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5a1b3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a1b6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10f5a1ba or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5a1bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5a1bf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a1c2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10f5a1c6 jmp 0x10f5a22e */
  goto L_10f5a22e;
L_10f5a1c8:;
  /* 10f5a1c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a1cb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a1ce movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10f5a1d2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a1d5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a1d8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10f5a1db add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f5a1dd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a1e0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a1e3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10f5a1e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5a1e8 jne 0x10f5a205 */
  if (!C.zf) goto L_10f5a205;
  /* 10f5a1ea mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5a1ed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5a1f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f5a1f5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f5a1f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5a1fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f5a1fd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5a1ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5a202 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10f5a205:;
  /* 10f5a205 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5a208 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5a20b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f5a210 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f5a212 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5a215 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a218 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10f5a21f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5a221 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5a224 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5a227 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10f5a22e:;
  /* 10f5a22e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5a231 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f5a234 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f5a236 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5a239 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a23c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f5a23f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10f5a242:;
  /* 10f5a242 mov eax, 1 */
  EAX = (0x1u);
L_10f5a247:;
  /* 10f5a247 mov esp, ebp */
  ESP = (EBP);
  /* 10f5a249 pop ebp */
  EBP = (pop32());
  /* 10f5a24a ret  */
  ESPCHK(0x10f59c60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a250 @ 0x10f5a250 (304 bytes, 79 insns) */
void f_10f5a250(void) {
  FTRACE(0x10f5a250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5a250 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5a251 mov ebp, esp */
  EBP = (ESP);
  /* 10f5a253 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5a254 cmp dword ptr [0x10f81f60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f81f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a25b je 0x10f5a37c */
  if (C.zf) goto L_10f5a37c;
  /* 10f5a261 mov eax, dword ptr [0x10f81f58] */
  EAX = (r32((uint32_t)(0x10f81f58)));
  /* 10f5a266 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10f5a269 mov ecx, dword ptr [0x10f81f60] */
  ECX = (r32((uint32_t)(0x10f81f60)));
  /* 10f5a26f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f5a272 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a274 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f5a277 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10f5a27c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10f5a281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5a284 push eax */
  push32((uint32_t)(EAX));
  /* 10f5a285 call dword ptr [0x10f83330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83330))), 0x10f5a28bu);
  /* 10f5a28b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f5a290 mov ecx, dword ptr [0x10f81f58] */
  ECX = (r32((uint32_t)(0x10f81f58)));
  /* 10f5a296 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f5a298 mov eax, dword ptr [0x10f81f60] */
  EAX = (r32((uint32_t)(0x10f81f60)));
  /* 10f5a29d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f5a2a0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5a2a2 mov edx, dword ptr [0x10f81f60] */
  EDX = (r32((uint32_t)(0x10f81f60)));
  /* 10f5a2a8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10f5a2ab mov eax, dword ptr [0x10f81f60] */
  EAX = (r32((uint32_t)(0x10f81f60)));
  /* 10f5a2b0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f5a2b3 mov edx, dword ptr [0x10f81f58] */
  EDX = (r32((uint32_t)(0x10f81f58)));
  /* 10f5a2b9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10f5a2c4 mov eax, dword ptr [0x10f81f60] */
  EAX = (r32((uint32_t)(0x10f81f60)));
  /* 10f5a2c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f5a2cc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10f5a2cf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f5a2d2 mov eax, dword ptr [0x10f81f60] */
  EAX = (r32((uint32_t)(0x10f81f60)));
  /* 10f5a2d7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f5a2da mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10f5a2dd mov edx, dword ptr [0x10f81f60] */
  EDX = (r32((uint32_t)(0x10f81f60)));
  /* 10f5a2e3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f5a2e6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10f5a2ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5a2ec jne 0x10f5a302 */
  if (!C.zf) goto L_10f5a302;
  /* 10f5a2ee mov edx, dword ptr [0x10f81f60] */
  EDX = (r32((uint32_t)(0x10f81f60)));
  /* 10f5a2f4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f5a2f7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10f5a2f9 mov ecx, dword ptr [0x10f81f60] */
  ECX = (r32((uint32_t)(0x10f81f60)));
  /* 10f5a2ff mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10f5a302:;
  /* 10f5a302 mov edx, dword ptr [0x10f81f60] */
  EDX = (r32((uint32_t)(0x10f81f60)));
  /* 10f5a308 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a30c jne 0x10f5a372 */
  if (!C.zf) goto L_10f5a372;
  /* 10f5a30e cmp dword ptr [0x10f81f64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f81f64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a315 jle 0x10f5a372 */
  if ((C.zf||C.sf!=C.of)) goto L_10f5a372;
  /* 10f5a317 mov eax, dword ptr [0x10f81f60] */
  EAX = (r32((uint32_t)(0x10f81f60)));
  /* 10f5a31c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f5a31f push ecx */
  push32((uint32_t)(ECX));
  /* 10f5a320 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5a322 mov edx, dword ptr [0x10f81f6c] */
  EDX = (r32((uint32_t)(0x10f81f6c)));
  /* 10f5a328 push edx */
  push32((uint32_t)(EDX));
  /* 10f5a329 call dword ptr [0x10f83384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83384))), 0x10f5a32fu);
  /* 10f5a32f mov eax, dword ptr [0x10f81f64] */
  EAX = (r32((uint32_t)(0x10f81f64)));
  /* 10f5a334 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5a337 mov ecx, dword ptr [0x10f81f68] */
  ECX = (r32((uint32_t)(0x10f81f68)));
  /* 10f5a33d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a33f mov edx, dword ptr [0x10f81f60] */
  EDX = (r32((uint32_t)(0x10f81f60)));
  /* 10f5a345 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a348 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5a34a push ecx */
  push32((uint32_t)(ECX));
  /* 10f5a34b mov eax, dword ptr [0x10f81f60] */
  EAX = (r32((uint32_t)(0x10f81f60)));
  /* 10f5a350 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a353 push eax */
  push32((uint32_t)(EAX));
  /* 10f5a354 mov ecx, dword ptr [0x10f81f60] */
  ECX = (r32((uint32_t)(0x10f81f60)));
  /* 10f5a35a push ecx */
  push32((uint32_t)(ECX));
  /* 10f5a35b call 0x10f5c980 */
  push32(0x10f5a360u); f_10f5c980();
  /* 10f5a360 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a363 mov edx, dword ptr [0x10f81f64] */
  EDX = (r32((uint32_t)(0x10f81f64)));
  /* 10f5a369 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5a36c mov dword ptr [0x10f81f64], edx */
  w32((uint32_t)(0x10f81f64), (EDX));
L_10f5a372:;
  /* 10f5a372 mov dword ptr [0x10f81f60], 0 */
  w32((uint32_t)(0x10f81f60), (0x0u));
L_10f5a37c:;
  /* 10f5a37c mov esp, ebp */
  ESP = (EBP);
  /* 10f5a37e pop ebp */
  EBP = (pop32());
  /* 10f5a37f ret  */
  ESPCHK(0x10f5a250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a380 @ 0x10f5a380 (1565 bytes, 343 insns) */
void f_10f5a380(void) {
  FTRACE(0x10f5a380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5a380 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5a381 mov ebp, esp */
  EBP = (ESP);
  /* 10f5a383 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5a389 mov eax, dword ptr [0x10f81f64] */
  EAX = (r32((uint32_t)(0x10f81f64)));
  /* 10f5a38e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5a391 push eax */
  push32((uint32_t)(EAX));
  /* 10f5a392 mov ecx, dword ptr [0x10f81f68] */
  ECX = (r32((uint32_t)(0x10f81f68)));
  /* 10f5a398 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5a399 call dword ptr [0x10f833a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833a8))), 0x10f5a39fu);
  /* 10f5a39f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5a3a1 je 0x10f5a3ab */
  if (C.zf) goto L_10f5a3ab;
  /* 10f5a3a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5a3a6 jmp 0x10f5a999 */
  goto L_10f5a999;
L_10f5a3ab:;
  /* 10f5a3ab mov edx, dword ptr [0x10f81f68] */
  EDX = (r32((uint32_t)(0x10f81f68)));
  /* 10f5a3b1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10f5a3b7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10f5a3c1 jmp 0x10f5a3d2 */
  goto L_10f5a3d2;
L_10f5a3c3:;
  /* 10f5a3c3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10f5a3c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a3cc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10f5a3d2:;
  /* 10f5a3d2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10f5a3d8 cmp ecx, dword ptr [0x10f81f64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f81f64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a3de jge 0x10f5a997 */
  if ((C.sf==C.of)) goto L_10f5a997;
  /* 10f5a3e4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10f5a3ea mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f5a3ed mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10f5a3f3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10f5a3f8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10f5a3fe push ecx */
  push32((uint32_t)(ECX));
  /* 10f5a3ff call dword ptr [0x10f833a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833a8))), 0x10f5a405u);
  /* 10f5a405 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5a407 je 0x10f5a413 */
  if (C.zf) goto L_10f5a413;
  /* 10f5a409 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10f5a40e jmp 0x10f5a999 */
  goto L_10f5a999;
L_10f5a413:;
  /* 10f5a413 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10f5a419 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10f5a41c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10f5a422 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10f5a428 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a42e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10f5a431 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10f5a437 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f5a43a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5a43d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10f5a447 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10f5a451 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f5a458 jmp 0x10f5a463 */
  goto L_10f5a463;
L_10f5a45a:;
  /* 10f5a45a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5a45d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a460 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10f5a463:;
  /* 10f5a463 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a467 jge 0x10f5a95b */
  if ((C.sf==C.of)) goto L_10f5a95b;
  /* 10f5a46d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10f5a477 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10f5a481 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10f5a48b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10f5a495 jmp 0x10f5a4a6 */
  goto L_10f5a4a6;
L_10f5a497:;
  /* 10f5a497 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10f5a49d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a4a0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10f5a4a6:;
  /* 10f5a4a6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a4ad jge 0x10f5a4c2 */
  if ((C.sf==C.of)) goto L_10f5a4c2;
  /* 10f5a4af mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10f5a4b5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10f5a4c0 jmp 0x10f5a497 */
  goto L_10f5a497;
L_10f5a4c2:;
  /* 10f5a4c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a4c6 jl 0x10f5a8fd */
  if ((C.sf!=C.of)) goto L_10f5a8fd;
  /* 10f5a4cc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10f5a4d1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10f5a4d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5a4d8 call dword ptr [0x10f833a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833a8))), 0x10f5a4deu);
  /* 10f5a4de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5a4e0 je 0x10f5a4ec */
  if (C.zf) goto L_10f5a4ec;
  /* 10f5a4e2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10f5a4e7 jmp 0x10f5a999 */
  goto L_10f5a999;
L_10f5a4ec:;
  /* 10f5a4ec mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10f5a4f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f5a4f5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10f5a4ff jmp 0x10f5a510 */
  goto L_10f5a510;
L_10f5a501:;
  /* 10f5a501 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10f5a507 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a50a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10f5a510:;
  /* 10f5a510 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a517 jge 0x10f5a694 */
  if ((C.sf==C.of)) goto L_10f5a694;
  /* 10f5a51d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5a520 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a523 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10f5a529 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10f5a52f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a535 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10f5a53b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10f5a541 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a545 jne 0x10f5a552 */
  if (!C.zf) goto L_10f5a552;
  /* 10f5a547 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10f5a54d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a550 je 0x10f5a55c */
  if (C.zf) goto L_10f5a55c;
L_10f5a552:;
  /* 10f5a552 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10f5a557 jmp 0x10f5a999 */
  goto L_10f5a999;
L_10f5a55c:;
  /* 10f5a55c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10f5a562 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f5a564 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10f5a56a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10f5a570 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10f5a576 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10f5a57c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5a57f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5a581 je 0x10f5a5b9 */
  if (C.zf) goto L_10f5a5b9;
  /* 10f5a583 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10f5a589 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5a58c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10f5a592 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a59c jle 0x10f5a5a8 */
  if ((C.zf||C.sf!=C.of)) goto L_10f5a5a8;
  /* 10f5a59e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10f5a5a3 jmp 0x10f5a999 */
  goto L_10f5a999;
L_10f5a5a8:;
  /* 10f5a5a8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10f5a5ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a5b1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10f5a5b7 jmp 0x10f5a5fb */
  goto L_10f5a5fb;
L_10f5a5b9:;
  /* 10f5a5b9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10f5a5bf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10f5a5c2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5a5c5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10f5a5cb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a5d2 jle 0x10f5a5de */
  if ((C.zf||C.sf!=C.of)) goto L_10f5a5de;
  /* 10f5a5d4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10f5a5de:;
  /* 10f5a5de mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10f5a5e4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10f5a5eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a5ee mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10f5a5f4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10f5a5fb:;
  /* 10f5a5fb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a602 jl 0x10f5a61d */
  if ((C.sf!=C.of)) goto L_10f5a61d;
  /* 10f5a604 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10f5a60a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5a60d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5a60f jne 0x10f5a61d */
  if (!C.zf) goto L_10f5a61d;
  /* 10f5a611 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a61b jle 0x10f5a627 */
  if ((C.zf||C.sf!=C.of)) goto L_10f5a627;
L_10f5a61d:;
  /* 10f5a61d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10f5a622 jmp 0x10f5a999 */
  goto L_10f5a999;
L_10f5a627:;
  /* 10f5a627 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10f5a62d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a633 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10f5a636 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a63c je 0x10f5a648 */
  if (C.zf) goto L_10f5a648;
  /* 10f5a63e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10f5a643 jmp 0x10f5a999 */
  goto L_10f5a999;
L_10f5a648:;
  /* 10f5a648 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10f5a64e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a654 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10f5a65a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10f5a660 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a666 jb 0x10f5a55c */
  if (C.cf) goto L_10f5a55c;
  /* 10f5a66c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10f5a672 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a678 je 0x10f5a684 */
  if (C.zf) goto L_10f5a684;
  /* 10f5a67a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10f5a67f jmp 0x10f5a999 */
  goto L_10f5a999;
L_10f5a684:;
  /* 10f5a684 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5a687 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a68c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f5a68f jmp 0x10f5a501 */
  goto L_10f5a501;
L_10f5a694:;
  /* 10f5a694 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5a697 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f5a699 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a69f je 0x10f5a6ab */
  if (C.zf) goto L_10f5a6ab;
  /* 10f5a6a1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10f5a6a6 jmp 0x10f5a999 */
  goto L_10f5a999;
L_10f5a6ab:;
  /* 10f5a6ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5a6ae mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10f5a6b4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10f5a6bb jmp 0x10f5a6c6 */
  goto L_10f5a6c6;
L_10f5a6bd:;
  /* 10f5a6bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5a6c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a6c3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10f5a6c6:;
  /* 10f5a6c6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a6ca jge 0x10f5a8fd */
  if ((C.sf==C.of)) goto L_10f5a8fd;
  /* 10f5a6d0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10f5a6da mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10f5a6e0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10f5a6e6:;
  /* 10f5a6e6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10f5a6ec mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f5a6ef mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10f5a6f5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10f5a6fb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a701 je 0x10f5a82a */
  if (C.zf) goto L_10f5a82a;
  /* 10f5a707 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5a70a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10f5a710 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a717 je 0x10f5a82a */
  if (C.zf) goto L_10f5a82a;
  /* 10f5a71d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10f5a723 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a729 jb 0x10f5a73e */
  if (C.cf) goto L_10f5a73e;
  /* 10f5a72b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10f5a731 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a736 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a73c jb 0x10f5a748 */
  if (C.cf) goto L_10f5a748;
L_10f5a73e:;
  /* 10f5a73e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10f5a743 jmp 0x10f5a999 */
  goto L_10f5a999;
L_10f5a748:;
  /* 10f5a748 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10f5a74e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5a754 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10f5a75a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10f5a760 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a763 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10f5a766 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5a769 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a76e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10f5a774:;
  /* 10f5a774 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5a777 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a77d je 0x10f5a79e */
  if (C.zf) goto L_10f5a79e;
  /* 10f5a77f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5a782 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a788 jne 0x10f5a78c */
  if (!C.zf) goto L_10f5a78c;
  /* 10f5a78a jmp 0x10f5a79e */
  goto L_10f5a79e;
L_10f5a78c:;
  /* 10f5a78c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5a78f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f5a791 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5a794 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5a797 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a799 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10f5a79c jmp 0x10f5a774 */
  goto L_10f5a774;
L_10f5a79e:;
  /* 10f5a79e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5a7a1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a7a7 jne 0x10f5a7b3 */
  if (!C.zf) goto L_10f5a7b3;
  /* 10f5a7a9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10f5a7ae jmp 0x10f5a999 */
  goto L_10f5a999;
L_10f5a7b3:;
  /* 10f5a7b3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10f5a7b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f5a7bb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10f5a7be sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5a7c1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10f5a7c7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a7ce jle 0x10f5a7da */
  if ((C.zf||C.sf!=C.of)) goto L_10f5a7da;
  /* 10f5a7d0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10f5a7da:;
  /* 10f5a7da mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10f5a7e0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a7e3 je 0x10f5a7ef */
  if (C.zf) goto L_10f5a7ef;
  /* 10f5a7e5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10f5a7ea jmp 0x10f5a999 */
  goto L_10f5a999;
L_10f5a7ef:;
  /* 10f5a7ef mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10f5a7f5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f5a7f8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a7fe je 0x10f5a80a */
  if (C.zf) goto L_10f5a80a;
  /* 10f5a800 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10f5a805 jmp 0x10f5a999 */
  goto L_10f5a999;
L_10f5a80a:;
  /* 10f5a80a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10f5a810 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10f5a816 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10f5a81c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a81f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10f5a825 jmp 0x10f5a6e6 */
  goto L_10f5a6e6;
L_10f5a82a:;
  /* 10f5a82a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a831 je 0x10f5a8a1 */
  if (C.zf) goto L_10f5a8a1;
  /* 10f5a833 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a837 jge 0x10f5a86b */
  if ((C.sf==C.of)) goto L_10f5a86b;
  /* 10f5a839 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f5a83e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5a841 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f5a843 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10f5a849 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5a84b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10f5a851 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f5a856 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5a859 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f5a85b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10f5a861 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5a863 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10f5a869 jmp 0x10f5a8a1 */
  goto L_10f5a8a1;
L_10f5a86b:;
  /* 10f5a86b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5a86e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5a871 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f5a876 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f5a878 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10f5a87e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5a880 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10f5a886 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5a889 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5a88c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f5a891 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f5a893 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10f5a899 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5a89b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10f5a8a1:;
  /* 10f5a8a1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10f5a8a7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f5a8aa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a8b0 jne 0x10f5a8c4 */
  if (!C.zf) goto L_10f5a8c4;
  /* 10f5a8b2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5a8b5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10f5a8bb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a8c2 je 0x10f5a8ce */
  if (C.zf) goto L_10f5a8ce;
L_10f5a8c4:;
  /* 10f5a8c4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10f5a8c9 jmp 0x10f5a999 */
  goto L_10f5a999;
L_10f5a8ce:;
  /* 10f5a8ce mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10f5a8d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f5a8d7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a8dd je 0x10f5a8e9 */
  if (C.zf) goto L_10f5a8e9;
  /* 10f5a8df mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10f5a8e4 jmp 0x10f5a999 */
  goto L_10f5a999;
L_10f5a8e9:;
  /* 10f5a8e9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10f5a8ef add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a8f2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10f5a8f8 jmp 0x10f5a6bd */
  goto L_10f5a6bd;
L_10f5a8fd:;
  /* 10f5a8fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5a900 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10f5a906 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10f5a90c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a910 jne 0x10f5a92a */
  if (!C.zf) goto L_10f5a92a;
  /* 10f5a912 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5a915 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10f5a91b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10f5a921 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a928 je 0x10f5a931 */
  if (C.zf) goto L_10f5a931;
L_10f5a92a:;
  /* 10f5a92a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10f5a92f jmp 0x10f5a999 */
  goto L_10f5a999;
L_10f5a931:;
  /* 10f5a931 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10f5a937 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a93d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10f5a943 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5a946 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a94b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f5a94e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5a951 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10f5a953 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f5a956 jmp 0x10f5a45a */
  goto L_10f5a45a;
L_10f5a95b:;
  /* 10f5a95b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10f5a961 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10f5a967 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a969 jne 0x10f5a97c */
  if (!C.zf) goto L_10f5a97c;
  /* 10f5a96b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10f5a971 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10f5a977 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a97a je 0x10f5a983 */
  if (C.zf) goto L_10f5a983;
L_10f5a97c:;
  /* 10f5a97c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10f5a981 jmp 0x10f5a999 */
  goto L_10f5a999;
L_10f5a983:;
  /* 10f5a983 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10f5a989 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a98c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10f5a992 jmp 0x10f5a3c3 */
  goto L_10f5a3c3;
L_10f5a997:;
  /* 10f5a997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f5a999:;
  /* 10f5a999 mov esp, ebp */
  ESP = (EBP);
  /* 10f5a99b pop ebp */
  EBP = (pop32());
  /* 10f5a99c ret  */
  ESPCHK(0x10f5a380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9a0 @ 0x10f5a9a0 (250 bytes, 92 insns) */
void f_10f5a9a0(void) {
  FTRACE(0x10f5a9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5a9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5a9a1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5a9a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5a9a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f5a9a7 push esi */
  push32((uint32_t)(ESI));
  /* 10f5a9a8 push edi */
  push32((uint32_t)(EDI));
  /* 10f5a9a9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10f5a9ac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f5a9af lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10f5a9b2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10f5a9b5:;
  /* 10f5a9b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a9b9 jne 0x10f5a9d9 */
  if (!C.zf) goto L_10f5a9d9;
  /* 10f5a9bb push 0x10f7bf98 */
  push32((uint32_t)(0x10f7bf98u));
  /* 10f5a9c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5a9c2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10f5a9c4 push 0x10f7bf8c */
  push32((uint32_t)(0x10f7bf8cu));
  /* 10f5a9c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5a9cb call 0x10f53b50 */
  push32(0x10f5a9d0u); f_10f53b50();
  /* 10f5a9d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a9d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a9d6 jne 0x10f5a9d9 */
  if (!C.zf) goto L_10f5a9d9;
  /* 10f5a9d8 int3  */
  x86_unimpl("int3 @ 0x10f5a9d8");
L_10f5a9d9:;
  /* 10f5a9d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5a9db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5a9dd jne 0x10f5a9b5 */
  if (!C.zf) goto L_10f5a9b5;
L_10f5a9df:;
  /* 10f5a9df cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5a9e3 jne 0x10f5aa03 */
  if (!C.zf) goto L_10f5aa03;
  /* 10f5a9e5 push 0x10f7bf7c */
  push32((uint32_t)(0x10f7bf7cu));
  /* 10f5a9ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5a9ec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10f5a9ee push 0x10f7bf8c */
  push32((uint32_t)(0x10f7bf8cu));
  /* 10f5a9f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5a9f5 call 0x10f53b50 */
  push32(0x10f5a9fau); f_10f53b50();
  /* 10f5a9fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5a9fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5aa00 jne 0x10f5aa03 */
  if (!C.zf) goto L_10f5aa03;
  /* 10f5aa02 int3  */
  x86_unimpl("int3 @ 0x10f5aa02");
L_10f5aa03:;
  /* 10f5aa03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5aa05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5aa07 jne 0x10f5a9df */
  if (!C.zf) goto L_10f5a9df;
  /* 10f5aa09 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5aa0c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10f5aa13 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5aa16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5aa19 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10f5aa1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5aa1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5aa22 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10f5aa24 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5aa27 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10f5aa2e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f5aa31 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5aa32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5aa35 push edx */
  push32((uint32_t)(EDX));
  /* 10f5aa36 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5aa39 push eax */
  push32((uint32_t)(EAX));
  /* 10f5aa3a call 0x10f5ba20 */
  push32(0x10f5aa3fu); f_10f5ba20();
  /* 10f5aa3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5aa42 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f5aa45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5aa48 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f5aa4b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5aa4e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5aa51 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10f5aa54 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5aa57 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5aa5b jl 0x10f5aa7f */
  if ((C.sf!=C.of)) goto L_10f5aa7f;
  /* 10f5aa5d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5aa60 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f5aa62 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10f5aa65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5aa67 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5aa6d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10f5aa70 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5aa73 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f5aa75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5aa78 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5aa7b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f5aa7d jmp 0x10f5aa90 */
  goto L_10f5aa90;
L_10f5aa7f:;
  /* 10f5aa7f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5aa82 push edx */
  push32((uint32_t)(EDX));
  /* 10f5aa83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5aa85 call 0x10f5b7a0 */
  push32(0x10f5aa8au); f_10f5b7a0();
  /* 10f5aa8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5aa8d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10f5aa90:;
  /* 10f5aa90 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f5aa93 pop edi */
  EDI = (pop32());
  /* 10f5aa94 pop esi */
  ESI = (pop32());
  /* 10f5aa95 pop ebx */
  EBX = (pop32());
  /* 10f5aa96 mov esp, ebp */
  ESP = (EBP);
  /* 10f5aa98 pop ebp */
  EBP = (pop32());
  /* 10f5aa99 ret  */
  ESPCHK(0x10f5a9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aaa0 @ 0x10f5aaa0 (183 bytes, 58 insns) */
void f_10f5aaa0(void) {
  FTRACE(0x10f5aaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5aaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5aaa1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5aaa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5aaa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5aaa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5aaac cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5aab1 ja 0x10f5aaca */
  if ((!C.cf&&!C.zf)) goto L_10f5aaca;
  /* 10f5aab3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5aab6 mov edx, dword ptr [0x10f7ec98] */
  EDX = (r32((uint32_t)(0x10f7ec98)));
  /* 10f5aabc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5aabe mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10f5aac2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10f5aac5 jmp 0x10f5ab53 */
  goto L_10f5ab53;
L_10f5aaca:;
  /* 10f5aaca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5aacd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10f5aad0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5aad6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5aadc mov edx, dword ptr [0x10f7ec98] */
  EDX = (r32((uint32_t)(0x10f7ec98)));
  /* 10f5aae2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5aae4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10f5aae8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5aaed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5aaef je 0x10f5ab13 */
  if (C.zf) goto L_10f5ab13;
  /* 10f5aaf1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5aaf4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10f5aaf7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5aafd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10f5ab00 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10f5ab03 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10f5ab06 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10f5ab0a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10f5ab11 jmp 0x10f5ab24 */
  goto L_10f5ab24;
L_10f5ab13:;
  /* 10f5ab13 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10f5ab16 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10f5ab19 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10f5ab1d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10f5ab24:;
  /* 10f5ab24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5ab26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5ab28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5ab2a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10f5ab2d push ecx */
  push32((uint32_t)(ECX));
  /* 10f5ab2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5ab31 push edx */
  push32((uint32_t)(EDX));
  /* 10f5ab32 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f5ab35 push eax */
  push32((uint32_t)(EAX));
  /* 10f5ab36 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5ab38 call 0x10f5ccc0 */
  push32(0x10f5ab3du); f_10f5ccc0();
  /* 10f5ab3d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ab40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5ab42 jne 0x10f5ab48 */
  if (!C.zf) goto L_10f5ab48;
  /* 10f5ab44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ab46 jmp 0x10f5ab53 */
  goto L_10f5ab53;
L_10f5ab48:;
  /* 10f5ab48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ab4b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ab50 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10f5ab53:;
  /* 10f5ab53 mov esp, ebp */
  ESP = (EBP);
  /* 10f5ab55 pop ebp */
  EBP = (pop32());
  /* 10f5ab56 ret  */
  ESPCHK(0x10f5aaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab60 @ 0x10f5ab60 (836 bytes, 238 insns) */
void f_10f5ab60(void) {
  FTRACE(0x10f5ab60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5ab60 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5ab61 mov ebp, esp */
  EBP = (ESP);
  /* 10f5ab63 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5ab66 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f5ab68 call 0x10f58490 */
  push32(0x10f5ab6du); f_10f58490();
  /* 10f5ab6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ab70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ab73 push eax */
  push32((uint32_t)(EAX));
  /* 10f5ab74 call 0x10f5aeb0 */
  push32(0x10f5ab79u); f_10f5aeb0();
  /* 10f5ab79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ab7c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f5ab7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ab82 cmp ecx, dword ptr [0x10f81ca4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f81ca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ab88 jne 0x10f5ab9b */
  if (!C.zf) goto L_10f5ab9b;
  /* 10f5ab8a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f5ab8c call 0x10f58530 */
  push32(0x10f5ab91u); f_10f58530();
  /* 10f5ab91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ab94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ab96 jmp 0x10f5aea0 */
  goto L_10f5aea0;
L_10f5ab9b:;
  /* 10f5ab9b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ab9f jne 0x10f5abbc */
  if (!C.zf) goto L_10f5abbc;
  /* 10f5aba1 call 0x10f5af90 */
  push32(0x10f5aba6u); f_10f5af90();
  /* 10f5aba6 call 0x10f5b010 */
  push32(0x10f5ababu); f_10f5b010();
  /* 10f5abab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f5abad call 0x10f58530 */
  push32(0x10f5abb2u); f_10f58530();
  /* 10f5abb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5abb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5abb7 jmp 0x10f5aea0 */
  goto L_10f5aea0;
L_10f5abbc:;
  /* 10f5abbc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f5abc3 jmp 0x10f5abce */
  goto L_10f5abce;
L_10f5abc5:;
  /* 10f5abc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5abc8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5abcb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f5abce:;
  /* 10f5abce cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5abd2 jae 0x10f5ad1f */
  if (!C.cf) goto L_10f5ad1f;
  /* 10f5abd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5abdb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5abde mov ecx, dword ptr [eax + 0x10f7eeb8] */
  ECX = (r32((uint32_t)(EAX + 0x10f7eeb8)));
  /* 10f5abe4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5abe7 jne 0x10f5ad1a */
  if (!C.zf) goto L_10f5ad1a;
  /* 10f5abed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10f5abf4 jmp 0x10f5abff */
  goto L_10f5abff;
L_10f5abf6:;
  /* 10f5abf6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5abf9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5abfc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10f5abff:;
  /* 10f5abff cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ac06 jae 0x10f5ac14 */
  if (!C.cf) goto L_10f5ac14;
  /* 10f5ac08 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5ac0b mov byte ptr [eax + 0x10f81e40], 0 */
  w8((uint32_t)(EAX + 0x10f81e40), (0x0u));
  /* 10f5ac12 jmp 0x10f5abf6 */
  goto L_10f5abf6;
L_10f5ac14:;
  /* 10f5ac14 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f5ac1b jmp 0x10f5ac26 */
  goto L_10f5ac26;
L_10f5ac1d:;
  /* 10f5ac1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5ac20 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ac23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10f5ac26:;
  /* 10f5ac26 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ac2a jae 0x10f5aca7 */
  if (!C.cf) goto L_10f5aca7;
  /* 10f5ac2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ac2f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5ac32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5ac35 lea ecx, [edx + eax*8 + 0x10f7eec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10f7eec8));
  /* 10f5ac3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f5ac3f jmp 0x10f5ac4a */
  goto L_10f5ac4a;
L_10f5ac41:;
  /* 10f5ac41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5ac44 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ac47 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10f5ac4a:;
  /* 10f5ac4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5ac4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5ac4f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f5ac51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5ac53 je 0x10f5aca2 */
  if (C.zf) goto L_10f5aca2;
  /* 10f5ac55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5ac58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ac5a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10f5ac5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5ac5f je 0x10f5aca2 */
  if (C.zf) goto L_10f5aca2;
  /* 10f5ac61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5ac64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5ac66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f5ac68 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10f5ac6b jmp 0x10f5ac76 */
  goto L_10f5ac76;
L_10f5ac6d:;
  /* 10f5ac6d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5ac70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ac73 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10f5ac76:;
  /* 10f5ac76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5ac79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5ac7b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10f5ac7e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ac81 ja 0x10f5aca0 */
  if ((!C.cf&&!C.zf)) goto L_10f5aca0;
  /* 10f5ac83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5ac86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5ac89 mov dl, byte ptr [eax + 0x10f81e41] */
  DL = (r8((uint32_t)(EAX + 0x10f81e41)));
  /* 10f5ac8f or dl, byte ptr [ecx + 0x10f7eeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10f7eeb0))); DL = (_r); fl_logic(_r,8); }
  /* 10f5ac95 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5ac98 mov byte ptr [eax + 0x10f81e41], dl */
  w8((uint32_t)(EAX + 0x10f81e41), (DL));
  /* 10f5ac9e jmp 0x10f5ac6d */
  goto L_10f5ac6d;
L_10f5aca0:;
  /* 10f5aca0 jmp 0x10f5ac41 */
  goto L_10f5ac41;
L_10f5aca2:;
  /* 10f5aca2 jmp 0x10f5ac1d */
  goto L_10f5ac1d;
L_10f5aca7:;
  /* 10f5aca7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5acaa mov dword ptr [0x10f81ca4], ecx */
  w32((uint32_t)(0x10f81ca4), (ECX));
  /* 10f5acb0 mov dword ptr [0x10f81d2c], 1 */
  w32((uint32_t)(0x10f81d2c), (0x1u));
  /* 10f5acba mov edx, dword ptr [0x10f81ca4] */
  EDX = (r32((uint32_t)(0x10f81ca4)));
  /* 10f5acc0 push edx */
  push32((uint32_t)(EDX));
  /* 10f5acc1 call 0x10f5af10 */
  push32(0x10f5acc6u); f_10f5af10();
  /* 10f5acc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5acc9 mov dword ptr [0x10f81f44], eax */
  w32((uint32_t)(0x10f81f44), (EAX));
  /* 10f5acce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f5acd5 jmp 0x10f5ace0 */
  goto L_10f5ace0;
L_10f5acd7:;
  /* 10f5acd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5acda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5acdd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10f5ace0:;
  /* 10f5ace0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ace4 jae 0x10f5ad04 */
  if (!C.cf) goto L_10f5ad04;
  /* 10f5ace6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ace9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5acec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5acef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5acf2 mov cx, word ptr [ecx + eax*2 + 0x10f7eebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10f7eebc)));
  /* 10f5acfa mov word ptr [edx*2 + 0x10f81d20], cx */
  w16((uint32_t)(EDX*2 + 0x10f81d20), (CX));
  /* 10f5ad02 jmp 0x10f5acd7 */
  goto L_10f5acd7;
L_10f5ad04:;
  /* 10f5ad04 call 0x10f5b010 */
  push32(0x10f5ad09u); f_10f5b010();
  /* 10f5ad09 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f5ad0b call 0x10f58530 */
  push32(0x10f5ad10u); f_10f58530();
  /* 10f5ad10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ad13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ad15 jmp 0x10f5aea0 */
  goto L_10f5aea0;
L_10f5ad1a:;
  /* 10f5ad1a jmp 0x10f5abc5 */
  goto L_10f5abc5;
L_10f5ad1f:;
  /* 10f5ad1f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10f5ad22 push edx */
  push32((uint32_t)(EDX));
  /* 10f5ad23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ad26 push eax */
  push32((uint32_t)(EAX));
  /* 10f5ad27 call dword ptr [0x10f83308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83308))), 0x10f5ad2du);
  /* 10f5ad2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ad30 jne 0x10f5ae72 */
  if (!C.zf) goto L_10f5ae72;
  /* 10f5ad36 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10f5ad3d jmp 0x10f5ad48 */
  goto L_10f5ad48;
L_10f5ad3f:;
  /* 10f5ad3f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5ad42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ad45 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10f5ad48:;
  /* 10f5ad48 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ad4f jae 0x10f5ad5d */
  if (!C.cf) goto L_10f5ad5d;
  /* 10f5ad51 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5ad54 mov byte ptr [edx + 0x10f81e40], 0 */
  w8((uint32_t)(EDX + 0x10f81e40), (0x0u));
  /* 10f5ad5b jmp 0x10f5ad3f */
  goto L_10f5ad3f;
L_10f5ad5d:;
  /* 10f5ad5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ad60 mov dword ptr [0x10f81ca4], eax */
  w32((uint32_t)(0x10f81ca4), (EAX));
  /* 10f5ad65 mov dword ptr [0x10f81f44], 0 */
  w32((uint32_t)(0x10f81f44), (0x0u));
  /* 10f5ad6f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ad73 jbe 0x10f5ae2e */
  if ((C.cf||C.zf)) goto L_10f5ae2e;
  /* 10f5ad79 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10f5ad7c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10f5ad7f jmp 0x10f5ad8a */
  goto L_10f5ad8a;
L_10f5ad81:;
  /* 10f5ad81 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f5ad84 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ad87 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10f5ad8a:;
  /* 10f5ad8a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f5ad8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5ad8f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f5ad91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5ad93 je 0x10f5addc */
  if (C.zf) goto L_10f5addc;
  /* 10f5ad95 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f5ad98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ad9a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10f5ad9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5ad9f je 0x10f5addc */
  if (C.zf) goto L_10f5addc;
  /* 10f5ada1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f5ada4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5ada6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f5ada8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10f5adab jmp 0x10f5adb6 */
  goto L_10f5adb6;
L_10f5adad:;
  /* 10f5adad mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5adb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5adb3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10f5adb6:;
  /* 10f5adb6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f5adb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5adbb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10f5adbe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5adc1 ja 0x10f5adda */
  if ((!C.cf&&!C.zf)) goto L_10f5adda;
  /* 10f5adc3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5adc6 mov cl, byte ptr [eax + 0x10f81e41] */
  CL = (r8((uint32_t)(EAX + 0x10f81e41)));
  /* 10f5adcc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10f5adcf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5add2 mov byte ptr [edx + 0x10f81e41], cl */
  w8((uint32_t)(EDX + 0x10f81e41), (CL));
  /* 10f5add8 jmp 0x10f5adad */
  goto L_10f5adad;
L_10f5adda:;
  /* 10f5adda jmp 0x10f5ad81 */
  goto L_10f5ad81;
L_10f5addc:;
  /* 10f5addc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10f5ade3 jmp 0x10f5adee */
  goto L_10f5adee;
L_10f5ade5:;
  /* 10f5ade5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5ade8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5adeb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10f5adee:;
  /* 10f5adee cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5adf5 jae 0x10f5ae0e */
  if (!C.cf) goto L_10f5ae0e;
  /* 10f5adf7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5adfa mov dl, byte ptr [ecx + 0x10f81e41] */
  DL = (r8((uint32_t)(ECX + 0x10f81e41)));
  /* 10f5ae00 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10f5ae03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5ae06 mov byte ptr [eax + 0x10f81e41], dl */
  w8((uint32_t)(EAX + 0x10f81e41), (DL));
  /* 10f5ae0c jmp 0x10f5ade5 */
  goto L_10f5ade5;
L_10f5ae0e:;
  /* 10f5ae0e mov ecx, dword ptr [0x10f81ca4] */
  ECX = (r32((uint32_t)(0x10f81ca4)));
  /* 10f5ae14 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5ae15 call 0x10f5af10 */
  push32(0x10f5ae1au); f_10f5af10();
  /* 10f5ae1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ae1d mov dword ptr [0x10f81f44], eax */
  w32((uint32_t)(0x10f81f44), (EAX));
  /* 10f5ae22 mov dword ptr [0x10f81d2c], 1 */
  w32((uint32_t)(0x10f81d2c), (0x1u));
  /* 10f5ae2c jmp 0x10f5ae38 */
  goto L_10f5ae38;
L_10f5ae2e:;
  /* 10f5ae2e mov dword ptr [0x10f81d2c], 0 */
  w32((uint32_t)(0x10f81d2c), (0x0u));
L_10f5ae38:;
  /* 10f5ae38 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f5ae3f jmp 0x10f5ae4a */
  goto L_10f5ae4a;
L_10f5ae41:;
  /* 10f5ae41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5ae44 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ae47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10f5ae4a:;
  /* 10f5ae4a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ae4e jae 0x10f5ae5f */
  if (!C.cf) goto L_10f5ae5f;
  /* 10f5ae50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5ae53 mov word ptr [eax*2 + 0x10f81d20], 0 */
  w16((uint32_t)(EAX*2 + 0x10f81d20), (0x0u));
  /* 10f5ae5d jmp 0x10f5ae41 */
  goto L_10f5ae41;
L_10f5ae5f:;
  /* 10f5ae5f call 0x10f5b010 */
  push32(0x10f5ae64u); f_10f5b010();
  /* 10f5ae64 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f5ae66 call 0x10f58530 */
  push32(0x10f5ae6bu); f_10f58530();
  /* 10f5ae6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ae6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ae70 jmp 0x10f5aea0 */
  goto L_10f5aea0;
L_10f5ae72:;
  /* 10f5ae72 cmp dword ptr [0x10f807b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f807b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ae79 je 0x10f5ae93 */
  if (C.zf) goto L_10f5ae93;
  /* 10f5ae7b call 0x10f5af90 */
  push32(0x10f5ae80u); f_10f5af90();
  /* 10f5ae80 call 0x10f5b010 */
  push32(0x10f5ae85u); f_10f5b010();
  /* 10f5ae85 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f5ae87 call 0x10f58530 */
  push32(0x10f5ae8cu); f_10f58530();
  /* 10f5ae8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ae8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ae91 jmp 0x10f5aea0 */
  goto L_10f5aea0;
L_10f5ae93:;
  /* 10f5ae93 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f5ae95 call 0x10f58530 */
  push32(0x10f5ae9au); f_10f58530();
  /* 10f5ae9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ae9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10f5aea0:;
  /* 10f5aea0 mov esp, ebp */
  ESP = (EBP);
  /* 10f5aea2 pop ebp */
  EBP = (pop32());
  /* 10f5aea3 ret  */
  ESPCHK(0x10f5ab60u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10f5aeb0 (89 bytes, 21 insns) */
void f_10f5aeb0(void) {
  FTRACE(0x10f5aeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5aeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5aeb1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5aeb3 mov dword ptr [0x10f807b0], 0 */
  w32((uint32_t)(0x10f807b0), (0x0u));
  /* 10f5aebd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5aec1 jne 0x10f5aed5 */
  if (!C.zf) goto L_10f5aed5;
  /* 10f5aec3 mov dword ptr [0x10f807b0], 1 */
  w32((uint32_t)(0x10f807b0), (0x1u));
  /* 10f5aecd call dword ptr [0x10f83300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83300))), 0x10f5aed3u);
  /* 10f5aed3 jmp 0x10f5af07 */
  goto L_10f5af07;
L_10f5aed5:;
  /* 10f5aed5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5aed9 jne 0x10f5aeed */
  if (!C.zf) goto L_10f5aeed;
  /* 10f5aedb mov dword ptr [0x10f807b0], 1 */
  w32((uint32_t)(0x10f807b0), (0x1u));
  /* 10f5aee5 call dword ptr [0x10f83310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83310))), 0x10f5aeebu);
  /* 10f5aeeb jmp 0x10f5af07 */
  goto L_10f5af07;
L_10f5aeed:;
  /* 10f5aeed cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5aef1 jne 0x10f5af04 */
  if (!C.zf) goto L_10f5af04;
  /* 10f5aef3 mov dword ptr [0x10f807b0], 1 */
  w32((uint32_t)(0x10f807b0), (0x1u));
  /* 10f5aefd mov eax, dword ptr [0x10f807d0] */
  EAX = (r32((uint32_t)(0x10f807d0)));
  /* 10f5af02 jmp 0x10f5af07 */
  goto L_10f5af07;
L_10f5af04:;
  /* 10f5af04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10f5af07:;
  /* 10f5af07 pop ebp */
  EBP = (pop32());
  /* 10f5af08 ret  */
  ESPCHK(0x10f5aeb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af10 @ 0x10f5af10 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10f5af10(void) {
  FTRACE(0x10f5af10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5af10 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5af11 mov ebp, esp */
  EBP = (ESP);
  /* 10f5af13 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5af14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5af17 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5af1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5af1d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5af23 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f5af26 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5af2a ja 0x10f5af5a */
  if ((!C.cf&&!C.zf)) goto L_10f5af5a;
  /* 10f5af2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5af2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5af31 mov dl, byte ptr [eax + 0x10f5af74] */
  DL = (r8((uint32_t)(EAX + 0x10f5af74)));
  /* 10f5af37 jmp dword ptr [edx*4 + 0x10f5af60] */
  switch (EDX) {
    case 0: goto L_10f5af3e;
    case 1: goto L_10f5af45;
    case 2: goto L_10f5af4c;
    case 3: goto L_10f5af53;
    case 4: goto L_10f5af5a;
    default: x86_unimpl("switch@0x10f5af37 out of table"); return;
  }
L_10f5af3e:;
  /* 10f5af3e mov eax, 0x411 */
  EAX = (0x411u);
  /* 10f5af43 jmp 0x10f5af5c */
  goto L_10f5af5c;
L_10f5af45:;
  /* 10f5af45 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10f5af4a jmp 0x10f5af5c */
  goto L_10f5af5c;
L_10f5af4c:;
  /* 10f5af4c mov eax, 0x412 */
  EAX = (0x412u);
  /* 10f5af51 jmp 0x10f5af5c */
  goto L_10f5af5c;
L_10f5af53:;
  /* 10f5af53 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10f5af58 jmp 0x10f5af5c */
  goto L_10f5af5c;
L_10f5af5a:;
  /* 10f5af5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f5af5c:;
  /* 10f5af5c mov esp, ebp */
  ESP = (EBP);
  /* 10f5af5e pop ebp */
  EBP = (pop32());
  /* 10f5af5f ret  */
  ESPCHK(0x10f5af10u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10f5af90 (116 bytes, 29 insns) */
void f_10f5af90(void) {
  FTRACE(0x10f5af90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5af90 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5af91 mov ebp, esp */
  EBP = (ESP);
  /* 10f5af93 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5af94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f5af9b jmp 0x10f5afa6 */
  goto L_10f5afa6;
L_10f5af9d:;
  /* 10f5af9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5afa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5afa3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f5afa6:;
  /* 10f5afa6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5afad jge 0x10f5afbb */
  if ((C.sf==C.of)) goto L_10f5afbb;
  /* 10f5afaf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5afb2 mov byte ptr [ecx + 0x10f81e40], 0 */
  w8((uint32_t)(ECX + 0x10f81e40), (0x0u));
  /* 10f5afb9 jmp 0x10f5af9d */
  goto L_10f5af9d;
L_10f5afbb:;
  /* 10f5afbb mov dword ptr [0x10f81ca4], 0 */
  w32((uint32_t)(0x10f81ca4), (0x0u));
  /* 10f5afc5 mov dword ptr [0x10f81d2c], 0 */
  w32((uint32_t)(0x10f81d2c), (0x0u));
  /* 10f5afcf mov dword ptr [0x10f81f44], 0 */
  w32((uint32_t)(0x10f81f44), (0x0u));
  /* 10f5afd9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f5afe0 jmp 0x10f5afeb */
  goto L_10f5afeb;
L_10f5afe2:;
  /* 10f5afe2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5afe5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5afe8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f5afeb:;
  /* 10f5afeb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5afef jge 0x10f5b000 */
  if ((C.sf==C.of)) goto L_10f5b000;
  /* 10f5aff1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5aff4 mov word ptr [eax*2 + 0x10f81d20], 0 */
  w16((uint32_t)(EAX*2 + 0x10f81d20), (0x0u));
  /* 10f5affe jmp 0x10f5afe2 */
  goto L_10f5afe2;
L_10f5b000:;
  /* 10f5b000 mov esp, ebp */
  ESP = (EBP);
  /* 10f5b002 pop ebp */
  EBP = (pop32());
  /* 10f5b003 ret  */
  ESPCHK(0x10f5af90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b010 @ 0x10f5b010 (770 bytes, 175 insns) */
void f_10f5b010(void) {
  FTRACE(0x10f5b010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5b010 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5b011 mov ebp, esp */
  EBP = (ESP);
  /* 10f5b013 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5b019 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10f5b01f push eax */
  push32((uint32_t)(EAX));
  /* 10f5b020 mov ecx, dword ptr [0x10f81ca4] */
  ECX = (r32((uint32_t)(0x10f81ca4)));
  /* 10f5b026 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5b027 call dword ptr [0x10f83308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83308))), 0x10f5b02du);
  /* 10f5b02d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b030 jne 0x10f5b249 */
  if (!C.zf) goto L_10f5b249;
  /* 10f5b036 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10f5b040 jmp 0x10f5b051 */
  goto L_10f5b051;
L_10f5b042:;
  /* 10f5b042 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b048 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b04b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10f5b051:;
  /* 10f5b051 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b05b jae 0x10f5b072 */
  if (!C.cf) goto L_10f5b072;
  /* 10f5b05d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b063 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10f5b069 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10f5b070 jmp 0x10f5b042 */
  goto L_10f5b042;
L_10f5b072:;
  /* 10f5b072 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10f5b079 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10f5b07f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f5b082 jmp 0x10f5b08d */
  goto L_10f5b08d;
L_10f5b084:;
  /* 10f5b084 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5b087 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b08a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f5b08d:;
  /* 10f5b08d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5b090 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b092 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f5b094 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5b096 je 0x10f5b0d8 */
  if (C.zf) goto L_10f5b0d8;
  /* 10f5b098 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5b09b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5b09d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f5b09f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10f5b0a5 jmp 0x10f5b0b6 */
  goto L_10f5b0b6;
L_10f5b0a7:;
  /* 10f5b0a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b0ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b0b0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10f5b0b6:;
  /* 10f5b0b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5b0b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5b0bb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10f5b0be cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b0c4 ja 0x10f5b0d6 */
  if ((!C.cf&&!C.zf)) goto L_10f5b0d6;
  /* 10f5b0c6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b0cc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10f5b0d4 jmp 0x10f5b0a7 */
  goto L_10f5b0a7;
L_10f5b0d6:;
  /* 10f5b0d6 jmp 0x10f5b084 */
  goto L_10f5b084;
L_10f5b0d8:;
  /* 10f5b0d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5b0da mov eax, dword ptr [0x10f81f44] */
  EAX = (r32((uint32_t)(0x10f81f44)));
  /* 10f5b0df push eax */
  push32((uint32_t)(EAX));
  /* 10f5b0e0 mov ecx, dword ptr [0x10f81ca4] */
  ECX = (r32((uint32_t)(0x10f81ca4)));
  /* 10f5b0e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5b0e7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10f5b0ed push edx */
  push32((uint32_t)(EDX));
  /* 10f5b0ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f5b0f3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10f5b0f9 push eax */
  push32((uint32_t)(EAX));
  /* 10f5b0fa push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5b0fc call 0x10f5ccc0 */
  push32(0x10f5b101u); f_10f5ccc0();
  /* 10f5b101 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b104 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5b106 mov ecx, dword ptr [0x10f81ca4] */
  ECX = (r32((uint32_t)(0x10f81ca4)));
  /* 10f5b10c push ecx */
  push32((uint32_t)(ECX));
  /* 10f5b10d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f5b112 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10f5b118 push edx */
  push32((uint32_t)(EDX));
  /* 10f5b119 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f5b11e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10f5b124 push eax */
  push32((uint32_t)(EAX));
  /* 10f5b125 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f5b12a mov ecx, dword ptr [0x10f81f44] */
  ECX = (r32((uint32_t)(0x10f81f44)));
  /* 10f5b130 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5b131 call 0x10f5ce80 */
  push32(0x10f5b136u); f_10f5ce80();
  /* 10f5b136 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b139 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5b13b mov edx, dword ptr [0x10f81ca4] */
  EDX = (r32((uint32_t)(0x10f81ca4)));
  /* 10f5b141 push edx */
  push32((uint32_t)(EDX));
  /* 10f5b142 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f5b147 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10f5b14d push eax */
  push32((uint32_t)(EAX));
  /* 10f5b14e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f5b153 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10f5b159 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5b15a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10f5b15f mov edx, dword ptr [0x10f81f44] */
  EDX = (r32((uint32_t)(0x10f81f44)));
  /* 10f5b165 push edx */
  push32((uint32_t)(EDX));
  /* 10f5b166 call 0x10f5ce80 */
  push32(0x10f5b16bu); f_10f5ce80();
  /* 10f5b16b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b16e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10f5b178 jmp 0x10f5b189 */
  goto L_10f5b189;
L_10f5b17a:;
  /* 10f5b17a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b180 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b183 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10f5b189:;
  /* 10f5b189 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b193 jae 0x10f5b244 */
  if (!C.cf) goto L_10f5b244;
  /* 10f5b199 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b19f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b1a1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10f5b1a9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b1ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5b1ae je 0x10f5b1e6 */
  if (C.zf) goto L_10f5b1e6;
  /* 10f5b1b0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b1b6 mov cl, byte ptr [eax + 0x10f81e41] */
  CL = (r8((uint32_t)(EAX + 0x10f81e41)));
  /* 10f5b1bc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10f5b1bf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b1c5 mov byte ptr [edx + 0x10f81e41], cl */
  w8((uint32_t)(EDX + 0x10f81e41), (CL));
  /* 10f5b1cb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b1d1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b1d7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10f5b1de mov byte ptr [eax + 0x10f81d40], dl */
  w8((uint32_t)(EAX + 0x10f81d40), (DL));
  /* 10f5b1e4 jmp 0x10f5b23f */
  goto L_10f5b23f;
L_10f5b1e6:;
  /* 10f5b1e6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b1ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5b1ee mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10f5b1f6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5b1f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5b1fb je 0x10f5b232 */
  if (C.zf) goto L_10f5b232;
  /* 10f5b1fd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b203 mov al, byte ptr [edx + 0x10f81e41] */
  AL = (r8((uint32_t)(EDX + 0x10f81e41)));
  /* 10f5b209 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10f5b20b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b211 mov byte ptr [ecx + 0x10f81e41], al */
  w8((uint32_t)(ECX + 0x10f81e41), (AL));
  /* 10f5b217 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b21d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b223 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10f5b22a mov byte ptr [edx + 0x10f81d40], cl */
  w8((uint32_t)(EDX + 0x10f81d40), (CL));
  /* 10f5b230 jmp 0x10f5b23f */
  goto L_10f5b23f;
L_10f5b232:;
  /* 10f5b232 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b238 mov byte ptr [edx + 0x10f81d40], 0 */
  w8((uint32_t)(EDX + 0x10f81d40), (0x0u));
L_10f5b23f:;
  /* 10f5b23f jmp 0x10f5b17a */
  goto L_10f5b17a;
L_10f5b244:;
  /* 10f5b244 jmp 0x10f5b30e */
  goto L_10f5b30e;
L_10f5b249:;
  /* 10f5b249 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10f5b253 jmp 0x10f5b264 */
  goto L_10f5b264;
L_10f5b255:;
  /* 10f5b255 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b25b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b25e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10f5b264:;
  /* 10f5b264 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b26e jae 0x10f5b30e */
  if (!C.cf) goto L_10f5b30e;
  /* 10f5b274 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b27b jb 0x10f5b2b8 */
  if (C.cf) goto L_10f5b2b8;
  /* 10f5b27d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b284 ja 0x10f5b2b8 */
  if ((!C.cf&&!C.zf)) goto L_10f5b2b8;
  /* 10f5b286 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b28c mov dl, byte ptr [ecx + 0x10f81e41] */
  DL = (r8((uint32_t)(ECX + 0x10f81e41)));
  /* 10f5b292 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10f5b295 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b29b mov byte ptr [eax + 0x10f81e41], dl */
  w8((uint32_t)(EAX + 0x10f81e41), (DL));
  /* 10f5b2a1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b2a7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b2aa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b2b0 mov byte ptr [edx + 0x10f81d40], cl */
  w8((uint32_t)(EDX + 0x10f81d40), (CL));
  /* 10f5b2b6 jmp 0x10f5b309 */
  goto L_10f5b309;
L_10f5b2b8:;
  /* 10f5b2b8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b2bf jb 0x10f5b2fc */
  if (C.cf) goto L_10f5b2fc;
  /* 10f5b2c1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b2c8 ja 0x10f5b2fc */
  if ((!C.cf&&!C.zf)) goto L_10f5b2fc;
  /* 10f5b2ca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b2d0 mov cl, byte ptr [eax + 0x10f81e41] */
  CL = (r8((uint32_t)(EAX + 0x10f81e41)));
  /* 10f5b2d6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10f5b2d9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b2df mov byte ptr [edx + 0x10f81e41], cl */
  w8((uint32_t)(EDX + 0x10f81e41), (CL));
  /* 10f5b2e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b2eb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5b2ee mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b2f4 mov byte ptr [ecx + 0x10f81d40], al */
  w8((uint32_t)(ECX + 0x10f81d40), (AL));
  /* 10f5b2fa jmp 0x10f5b309 */
  goto L_10f5b309;
L_10f5b2fc:;
  /* 10f5b2fc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f5b302 mov byte ptr [edx + 0x10f81d40], 0 */
  w8((uint32_t)(EDX + 0x10f81d40), (0x0u));
L_10f5b309:;
  /* 10f5b309 jmp 0x10f5b255 */
  goto L_10f5b255;
L_10f5b30e:;
  /* 10f5b30e mov esp, ebp */
  ESP = (EBP);
  /* 10f5b310 pop ebp */
  EBP = (pop32());
  /* 10f5b311 ret  */
  ESPCHK(0x10f5b010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b320 @ 0x10f5b320 (23 bytes, 9 insns) */
void f_10f5b320(void) {
  FTRACE(0x10f5b320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5b320 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5b321 mov ebp, esp */
  EBP = (ESP);
  /* 10f5b323 cmp dword ptr [0x10f81d2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f81d2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b32a je 0x10f5b333 */
  if (C.zf) goto L_10f5b333;
  /* 10f5b32c mov eax, dword ptr [0x10f81ca4] */
  EAX = (r32((uint32_t)(0x10f81ca4)));
  /* 10f5b331 jmp 0x10f5b335 */
  goto L_10f5b335;
L_10f5b333:;
  /* 10f5b333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f5b335:;
  /* 10f5b335 pop ebp */
  EBP = (pop32());
  /* 10f5b336 ret  */
  ESPCHK(0x10f5b320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b340 @ 0x10f5b340 (34 bytes, 10 insns) */
void f_10f5b340(void) {
  FTRACE(0x10f5b340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5b340 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5b341 mov ebp, esp */
  EBP = (ESP);
  /* 10f5b343 cmp dword ptr [0x10f820f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f820f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b34a jne 0x10f5b360 */
  if (!C.zf) goto L_10f5b360;
  /* 10f5b34c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10f5b34e call 0x10f5ab60 */
  push32(0x10f5b353u); f_10f5ab60();
  /* 10f5b353 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b356 mov dword ptr [0x10f820f0], 1 */
  w32((uint32_t)(0x10f820f0), (0x1u));
L_10f5b360:;
  /* 10f5b360 pop ebp */
  EBP = (pop32());
  /* 10f5b361 ret  */
  ESPCHK(0x10f5b340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b370 @ 0x10f5b370 (664 bytes, 265 insns) [15 switch table(s)] */
void f_10f5b370(void) {
  FTRACE(0x10f5b370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5b370 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5b371 mov ebp, esp */
  EBP = (ESP);
  /* 10f5b373 push edi */
  push32((uint32_t)(EDI));
  /* 10f5b374 push esi */
  push32((uint32_t)(ESI));
  /* 10f5b375 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5b378 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5b37b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5b37e mov eax, ecx */
  EAX = (ECX);
  /* 10f5b380 mov edx, ecx */
  EDX = (ECX);
  /* 10f5b382 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b384 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b386 jbe 0x10f5b390 */
  if ((C.cf||C.zf)) goto L_10f5b390;
  /* 10f5b388 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b38a jb 0x10f5b508 */
  if (C.cf) goto L_10f5b508;
L_10f5b390:;
  /* 10f5b390 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10f5b396 jne 0x10f5b3ac */
  if (!C.zf) goto L_10f5b3ac;
  /* 10f5b398 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f5b39b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b39e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b3a1 jb 0x10f5b3cc */
  if (C.cf) goto L_10f5b3cc;
  /* 10f5b3a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f5b3a5 jmp dword ptr [edx*4 + 0x10f5b4b8] */
  switch (EDX) {
    case 0: goto L_10f5b4c8;
    case 1: goto L_10f5b4d0;
    case 2: goto L_10f5b4dc;
    case 3: goto L_10f5b4f0;
    default: x86_unimpl("switch@0x10f5b3a5 out of table"); return;
  }
L_10f5b3ac:;
  /* 10f5b3ac mov eax, edi */
  EAX = (EDI);
  /* 10f5b3ae mov edx, 3 */
  EDX = (0x3u);
  /* 10f5b3b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5b3b6 jb 0x10f5b3c4 */
  if (C.cf) goto L_10f5b3c4;
  /* 10f5b3b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5b3bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b3bd jmp dword ptr [eax*4 + 0x10f5b3d0] */
  switch (EAX) {
    case 1: goto L_10f5b3e0;
    case 2: goto L_10f5b40c;
    case 3: goto L_10f5b430;
    default: x86_unimpl("switch@0x10f5b3bd out of table"); return;
  }
L_10f5b3c4:;
  /* 10f5b3c4 jmp dword ptr [ecx*4 + 0x10f5b4c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10f5b4c8)))); return;
  /* 10f5b3cb nop  */
  /* nop */
L_10f5b3cc:;
  /* 10f5b3cc jmp dword ptr [ecx*4 + 0x10f5b44c] */
  switch (ECX) {
    case 0: goto L_10f5b4af;
    case 1: goto L_10f5b49c;
    case 2: goto L_10f5b494;
    case 3: goto L_10f5b48c;
    case 4: goto L_10f5b484;
    case 5: goto L_10f5b47c;
    case 6: goto L_10f5b474;
    case 7: goto L_10f5b46c;
    default: x86_unimpl("switch@0x10f5b3cc out of table"); return;
  }
  /* 10f5b3d3 nop  */
  /* nop */
L_10f5b3e0:;
  /* 10f5b3e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b3e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f5b3e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f5b3e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f5b3e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f5b3ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f5b3ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f5b3f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f5b3f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b3f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b3fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b3fe jb 0x10f5b3cc */
  if (C.cf) goto L_10f5b3cc;
  /* 10f5b400 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f5b402 jmp dword ptr [edx*4 + 0x10f5b4b8] */
  switch (EDX) {
    case 0: goto L_10f5b4c8;
    case 1: goto L_10f5b4d0;
    case 2: goto L_10f5b4dc;
    case 3: goto L_10f5b4f0;
    default: x86_unimpl("switch@0x10f5b402 out of table"); return;
  }
  /* 10f5b409 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f5b40c:;
  /* 10f5b40c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b40e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f5b410 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f5b412 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f5b415 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f5b418 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f5b41b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b41e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b421 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b424 jb 0x10f5b3cc */
  if (C.cf) goto L_10f5b3cc;
  /* 10f5b426 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f5b428 jmp dword ptr [edx*4 + 0x10f5b4b8] */
  switch (EDX) {
    case 0: goto L_10f5b4c8;
    case 1: goto L_10f5b4d0;
    case 2: goto L_10f5b4dc;
    case 3: goto L_10f5b4f0;
    default: x86_unimpl("switch@0x10f5b428 out of table"); return;
  }
  /* 10f5b42f nop  */
  /* nop */
L_10f5b430:;
  /* 10f5b430 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b432 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f5b434 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f5b436 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f5b437 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f5b43a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f5b43b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b43e jb 0x10f5b3cc */
  if (C.cf) goto L_10f5b3cc;
  /* 10f5b440 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f5b442 jmp dword ptr [edx*4 + 0x10f5b4b8] */
  switch (EDX) {
    case 0: goto L_10f5b4c8;
    case 1: goto L_10f5b4d0;
    case 2: goto L_10f5b4dc;
    case 3: goto L_10f5b4f0;
    default: x86_unimpl("switch@0x10f5b442 out of table"); return;
  }
  /* 10f5b449 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f5b46c:;
  /* 10f5b46c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10f5b470 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10f5b474:;
  /* 10f5b474 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10f5b478 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10f5b47c:;
  /* 10f5b47c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10f5b480 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10f5b484:;
  /* 10f5b484 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10f5b488 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10f5b48c:;
  /* 10f5b48c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10f5b490 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10f5b494:;
  /* 10f5b494 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10f5b498 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10f5b49c:;
  /* 10f5b49c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10f5b4a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10f5b4a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10f5b4ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b4ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10f5b4af:;
  /* 10f5b4af jmp dword ptr [edx*4 + 0x10f5b4b8] */
  switch (EDX) {
    case 0: goto L_10f5b4c8;
    case 1: goto L_10f5b4d0;
    case 2: goto L_10f5b4dc;
    case 3: goto L_10f5b4f0;
    default: x86_unimpl("switch@0x10f5b4af out of table"); return;
  }
  /* 10f5b4b6 mov edi, edi */
  EDI = (EDI);
L_10f5b4c8:;
  /* 10f5b4c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5b4cb pop esi */
  ESI = (pop32());
  /* 10f5b4cc pop edi */
  EDI = (pop32());
  /* 10f5b4cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f5b4ce ret  */
  ESPCHK(0x10f5b370u, _esp0);
  ESP += 4; return;
  /* 10f5b4cf nop  */
  /* nop */
L_10f5b4d0:;
  /* 10f5b4d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f5b4d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f5b4d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5b4d7 pop esi */
  ESI = (pop32());
  /* 10f5b4d8 pop edi */
  EDI = (pop32());
  /* 10f5b4d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f5b4da ret  */
  ESPCHK(0x10f5b370u, _esp0);
  ESP += 4; return;
  /* 10f5b4db nop  */
  /* nop */
L_10f5b4dc:;
  /* 10f5b4dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f5b4de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f5b4e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f5b4e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f5b4e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5b4e9 pop esi */
  ESI = (pop32());
  /* 10f5b4ea pop edi */
  EDI = (pop32());
  /* 10f5b4eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f5b4ec ret  */
  ESPCHK(0x10f5b370u, _esp0);
  ESP += 4; return;
  /* 10f5b4ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f5b4f0:;
  /* 10f5b4f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f5b4f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f5b4f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f5b4f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f5b4fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f5b4fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f5b500 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5b503 pop esi */
  ESI = (pop32());
  /* 10f5b504 pop edi */
  EDI = (pop32());
  /* 10f5b505 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f5b506 ret  */
  ESPCHK(0x10f5b370u, _esp0);
  ESP += 4; return;
  /* 10f5b507 nop  */
  /* nop */
L_10f5b508:;
  /* 10f5b508 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10f5b50c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10f5b510 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10f5b516 jne 0x10f5b53c */
  if (!C.zf) goto L_10f5b53c;
  /* 10f5b518 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f5b51b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b51e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b521 jb 0x10f5b530 */
  if (C.cf) goto L_10f5b530;
  /* 10f5b523 std  */
  C.df=1;
  /* 10f5b524 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f5b526 cld  */
  C.df=0;
  /* 10f5b527 jmp dword ptr [edx*4 + 0x10f5b650] */
  switch (EDX) {
    case 0: goto L_10f5b660;
    case 1: goto L_10f5b668;
    case 2: goto L_10f5b678;
    case 3: goto L_10f5b68c;
    default: x86_unimpl("switch@0x10f5b527 out of table"); return;
  }
  /* 10f5b52e mov edi, edi */
  EDI = (EDI);
L_10f5b530:;
  /* 10f5b530 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f5b532 jmp dword ptr [ecx*4 + 0x10f5b600] */
  switch (ECX) {
    case 0: goto L_10f5b647;
    default: x86_unimpl("switch@0x10f5b532 out of table"); return;
  }
  /* 10f5b539 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f5b53c:;
  /* 10f5b53c mov eax, edi */
  EAX = (EDI);
  /* 10f5b53e mov edx, 3 */
  EDX = (0x3u);
  /* 10f5b543 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b546 jb 0x10f5b554 */
  if (C.cf) goto L_10f5b554;
  /* 10f5b548 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5b54b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5b54d jmp dword ptr [eax*4 + 0x10f5b558] */
  switch (EAX) {
    case 1: goto L_10f5b568;
    case 2: goto L_10f5b588;
    case 3: goto L_10f5b5b0;
    default: x86_unimpl("switch@0x10f5b54d out of table"); return;
  }
L_10f5b554:;
  /* 10f5b554 jmp dword ptr [ecx*4 + 0x10f5b650] */
  switch (ECX) {
    case 0: goto L_10f5b660;
    case 1: goto L_10f5b668;
    case 2: goto L_10f5b678;
    case 3: goto L_10f5b68c;
    default: x86_unimpl("switch@0x10f5b554 out of table"); return;
  }
  /* 10f5b55b nop  */
  /* nop */
L_10f5b568:;
  /* 10f5b568 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f5b56b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b56d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f5b570 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10f5b571 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f5b574 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10f5b575 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b578 jb 0x10f5b530 */
  if (C.cf) goto L_10f5b530;
  /* 10f5b57a std  */
  C.df=1;
  /* 10f5b57b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f5b57d cld  */
  C.df=0;
  /* 10f5b57e jmp dword ptr [edx*4 + 0x10f5b650] */
  switch (EDX) {
    case 0: goto L_10f5b660;
    case 1: goto L_10f5b668;
    case 2: goto L_10f5b678;
    case 3: goto L_10f5b68c;
    default: x86_unimpl("switch@0x10f5b57e out of table"); return;
  }
  /* 10f5b585 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f5b588:;
  /* 10f5b588 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f5b58b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b58d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f5b590 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f5b593 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f5b596 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f5b599 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5b59c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5b59f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b5a2 jb 0x10f5b530 */
  if (C.cf) goto L_10f5b530;
  /* 10f5b5a4 std  */
  C.df=1;
  /* 10f5b5a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f5b5a7 cld  */
  C.df=0;
  /* 10f5b5a8 jmp dword ptr [edx*4 + 0x10f5b650] */
  switch (EDX) {
    case 0: goto L_10f5b660;
    case 1: goto L_10f5b668;
    case 2: goto L_10f5b678;
    case 3: goto L_10f5b68c;
    default: x86_unimpl("switch@0x10f5b5a8 out of table"); return;
  }
  /* 10f5b5af nop  */
  /* nop */
L_10f5b5b0:;
  /* 10f5b5b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f5b5b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b5b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f5b5b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f5b5bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f5b5be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f5b5c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f5b5c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f5b5c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5b5ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5b5cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b5d0 jb 0x10f5b530 */
  if (C.cf) goto L_10f5b530;
  /* 10f5b5d6 std  */
  C.df=1;
  /* 10f5b5d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f5b5d9 cld  */
  C.df=0;
  /* 10f5b5da jmp dword ptr [edx*4 + 0x10f5b650] */
  switch (EDX) {
    case 0: goto L_10f5b660;
    case 1: goto L_10f5b668;
    case 2: goto L_10f5b678;
    case 3: goto L_10f5b68c;
    default: x86_unimpl("switch@0x10f5b5da out of table"); return;
  }
  /* 10f5b5e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10f5b5e4 add al, 0xb6 */
  { uint32_t _a=(AL),_b=(0xb6u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f5b5e6 cmc  */
  x86_unimpl("cmc @ 0x10f5b5e6");
  /* 10f5b5e7 adc byte ptr [esi + esi*4], cl */
  { uint32_t _a=(r8((uint32_t)(ESI + ESI*4))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(ESI + ESI*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f5b5ea cmc  */
  x86_unimpl("cmc @ 0x10f5b5ea");
  /* 10f5b5eb adc byte ptr [esi + esi*4], dl */
  { uint32_t _a=(r8((uint32_t)(ESI + ESI*4))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ESI + ESI*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f5b5ee cmc  */
  x86_unimpl("cmc @ 0x10f5b5ee");
  /* 10f5b5ef adc byte ptr [esi + esi*4], bl */
  { uint32_t _a=(r8((uint32_t)(ESI + ESI*4))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(ESI + ESI*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f5b5f2 cmc  */
  x86_unimpl("cmc @ 0x10f5b5f2");
  /* 10f5b5f3 adc byte ptr [esi + esi*4], ah */
  { uint32_t _a=(r8((uint32_t)(ESI + ESI*4))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(ESI + ESI*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f5b5f6 cmc  */
  x86_unimpl("cmc @ 0x10f5b5f6");
  /* 10f5b5f7 adc byte ptr [esi + esi*4], ch */
  { uint32_t _a=(r8((uint32_t)(ESI + ESI*4))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESI + ESI*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f5b5fa cmc  */
  x86_unimpl("cmc @ 0x10f5b5fa");
  /* 10f5b5fb adc byte ptr [esi + esi*4], dh */
  { uint32_t _a=(r8((uint32_t)(ESI + ESI*4))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESI + ESI*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f5b5fe cmc  */
  x86_unimpl("cmc @ 0x10f5b5fe");
  /* 10f5b604 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10f5b608 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10f5b60c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10f5b610 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10f5b614 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10f5b618 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10f5b61c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10f5b620 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10f5b624 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10f5b628 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10f5b62c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10f5b630 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10f5b634 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10f5b638 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10f5b63c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10f5b643 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b645 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10f5b647:;
  /* 10f5b647 jmp dword ptr [edx*4 + 0x10f5b650] */
  switch (EDX) {
    case 0: goto L_10f5b660;
    case 1: goto L_10f5b668;
    case 2: goto L_10f5b678;
    case 3: goto L_10f5b68c;
    default: x86_unimpl("switch@0x10f5b647 out of table"); return;
  }
  /* 10f5b64e mov edi, edi */
  EDI = (EDI);
L_10f5b660:;
  /* 10f5b660 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5b663 pop esi */
  ESI = (pop32());
  /* 10f5b664 pop edi */
  EDI = (pop32());
  /* 10f5b665 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f5b666 ret  */
  ESPCHK(0x10f5b370u, _esp0);
  ESP += 4; return;
  /* 10f5b667 nop  */
  /* nop */
L_10f5b668:;
  /* 10f5b668 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f5b66b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f5b66e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5b671 pop esi */
  ESI = (pop32());
  /* 10f5b672 pop edi */
  EDI = (pop32());
  /* 10f5b673 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f5b674 ret  */
  ESPCHK(0x10f5b370u, _esp0);
  ESP += 4; return;
  /* 10f5b675 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f5b678:;
  /* 10f5b678 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f5b67b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f5b67e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f5b681 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f5b684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5b687 pop esi */
  ESI = (pop32());
  /* 10f5b688 pop edi */
  EDI = (pop32());
  /* 10f5b689 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f5b68a ret  */
  ESPCHK(0x10f5b370u, _esp0);
  ESP += 4; return;
  /* 10f5b68b nop  */
  /* nop */
L_10f5b68c:;
  /* 10f5b68c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f5b68f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f5b692 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f5b695 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f5b698 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f5b69b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f5b69e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5b6a1 pop esi */
  ESI = (pop32());
  /* 10f5b6a2 pop edi */
  EDI = (pop32());
  /* 10f5b6a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f5b6a4 ret  */
  ESPCHK(0x10f5b370u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10f5b6b0 (104 bytes, 43 insns) */
void f_10f5b6b0(void) {
  FTRACE(0x10f5b6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5b6b0 push ebx */
  push32((uint32_t)(EBX));
  /* 10f5b6b1 push esi */
  push32((uint32_t)(ESI));
  /* 10f5b6b2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10f5b6b6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5b6b8 jne 0x10f5b6d2 */
  if (!C.zf) goto L_10f5b6d2;
  /* 10f5b6ba mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f5b6be mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f5b6c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b6c4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f5b6c6 mov ebx, eax */
  EBX = (EAX);
  /* 10f5b6c8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f5b6cc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f5b6ce mov edx, ebx */
  EDX = (EBX);
  /* 10f5b6d0 jmp 0x10f5b713 */
  goto L_10f5b713;
L_10f5b6d2:;
  /* 10f5b6d2 mov ecx, eax */
  ECX = (EAX);
  /* 10f5b6d4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f5b6d8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f5b6dc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10f5b6e0:;
  /* 10f5b6e0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10f5b6e2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10f5b6e4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10f5b6e6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10f5b6e8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5b6ea jne 0x10f5b6e0 */
  if (!C.zf) goto L_10f5b6e0;
  /* 10f5b6ec div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f5b6ee mov esi, eax */
  ESI = (EAX);
  /* 10f5b6f0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10f5b6f4 mov ecx, eax */
  ECX = (EAX);
  /* 10f5b6f6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f5b6fa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10f5b6fc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b6fe jb 0x10f5b70e */
  if (C.cf) goto L_10f5b70e;
  /* 10f5b700 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b704 ja 0x10f5b70e */
  if ((!C.cf&&!C.zf)) goto L_10f5b70e;
  /* 10f5b706 jb 0x10f5b70f */
  if (C.cf) goto L_10f5b70f;
  /* 10f5b708 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b70c jbe 0x10f5b70f */
  if ((C.cf||C.zf)) goto L_10f5b70f;
L_10f5b70e:;
  /* 10f5b70e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10f5b70f:;
  /* 10f5b70f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b711 mov eax, esi */
  EAX = (ESI);
L_10f5b713:;
  /* 10f5b713 pop esi */
  ESI = (pop32());
  /* 10f5b714 pop ebx */
  EBX = (pop32());
  /* 10f5b715 ret 0x10 */
  ESPCHK(0x10f5b6b0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10f5b720 (117 bytes, 44 insns) */
void f_10f5b720(void) {
  FTRACE(0x10f5b720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5b720 push ebx */
  push32((uint32_t)(EBX));
  /* 10f5b721 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f5b725 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5b727 jne 0x10f5b741 */
  if (!C.zf) goto L_10f5b741;
  /* 10f5b729 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f5b72d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f5b731 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b733 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f5b735 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f5b739 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f5b73b mov eax, edx */
  EAX = (EDX);
  /* 10f5b73d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b73f jmp 0x10f5b791 */
  goto L_10f5b791;
L_10f5b741:;
  /* 10f5b741 mov ecx, eax */
  ECX = (EAX);
  /* 10f5b743 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f5b747 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f5b74b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10f5b74f:;
  /* 10f5b74f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10f5b751 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10f5b753 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10f5b755 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10f5b757 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5b759 jne 0x10f5b74f */
  if (!C.zf) goto L_10f5b74f;
  /* 10f5b75b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f5b75d mov ecx, eax */
  ECX = (EAX);
  /* 10f5b75f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10f5b763 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10f5b764 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10f5b768 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b76a jb 0x10f5b77a */
  if (C.cf) goto L_10f5b77a;
  /* 10f5b76c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b770 ja 0x10f5b77a */
  if ((!C.cf&&!C.zf)) goto L_10f5b77a;
  /* 10f5b772 jb 0x10f5b782 */
  if (C.cf) goto L_10f5b782;
  /* 10f5b774 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b778 jbe 0x10f5b782 */
  if ((C.cf||C.zf)) goto L_10f5b782;
L_10f5b77a:;
  /* 10f5b77a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5b77e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10f5b782:;
  /* 10f5b782 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5b786 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5b78a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f5b78c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f5b78e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10f5b791:;
  /* 10f5b791 pop ebx */
  EBX = (pop32());
  /* 10f5b792 ret 0x10 */
  ESPCHK(0x10f5b720u, _esp0);
  ESP += 20; return;
}

/* FUN_1000b7a0 @ 0x10f5b7a0 (628 bytes, 214 insns) */
void f_10f5b7a0(void) {
  FTRACE(0x10f5b7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5b7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5b7a1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5b7a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5b7a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f5b7a7 push esi */
  push32((uint32_t)(ESI));
  /* 10f5b7a8 push edi */
  push32((uint32_t)(EDI));
L_10f5b7a9:;
  /* 10f5b7a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b7ad jne 0x10f5b7cd */
  if (!C.zf) goto L_10f5b7cd;
  /* 10f5b7af push 0x10f7c044 */
  push32((uint32_t)(0x10f7c044u));
  /* 10f5b7b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5b7b6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10f5b7b8 push 0x10f7c038 */
  push32((uint32_t)(0x10f7c038u));
  /* 10f5b7bd push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5b7bf call 0x10f53b50 */
  push32(0x10f5b7c4u); f_10f53b50();
  /* 10f5b7c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b7c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b7ca jne 0x10f5b7cd */
  if (!C.zf) goto L_10f5b7cd;
  /* 10f5b7cc int3  */
  x86_unimpl("int3 @ 0x10f5b7cc");
L_10f5b7cd:;
  /* 10f5b7cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5b7cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5b7d1 jne 0x10f5b7a9 */
  if (!C.zf) goto L_10f5b7a9;
  /* 10f5b7d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5b7d6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f5b7d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b7dc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f5b7df mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f5b7e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b7e5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f5b7e8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b7ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5b7f0 je 0x10f5b7ff */
  if (C.zf) goto L_10f5b7ff;
  /* 10f5b7f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b7f5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f5b7f8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5b7fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5b7fd je 0x10f5b815 */
  if (C.zf) goto L_10f5b815;
L_10f5b7ff:;
  /* 10f5b7ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b802 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10f5b805 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10f5b807 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b80a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10f5b80d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5b810 jmp 0x10f5ba0d */
  goto L_10f5ba0d;
L_10f5b815:;
  /* 10f5b815 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b818 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10f5b81b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5b81e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5b820 je 0x10f5b86c */
  if (C.zf) goto L_10f5b86c;
  /* 10f5b822 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b825 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10f5b82c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b82f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10f5b832 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5b835 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5b837 je 0x10f5b855 */
  if (C.zf) goto L_10f5b855;
  /* 10f5b839 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b83c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b83f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f5b842 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f5b844 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b847 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f5b84a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b84d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b850 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10f5b853 jmp 0x10f5b86c */
  goto L_10f5b86c;
L_10f5b855:;
  /* 10f5b855 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b858 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f5b85b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b85e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b861 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10f5b864 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5b867 jmp 0x10f5ba0d */
  goto L_10f5ba0d;
L_10f5b86c:;
  /* 10f5b86c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b86f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f5b872 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b875 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b878 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10f5b87b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b87e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f5b881 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b884 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b887 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10f5b88a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b88d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10f5b894 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f5b89b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5b89e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f5b8a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b8a4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f5b8a7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5b8ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5b8af jne 0x10f5b8df */
  if (!C.zf) goto L_10f5b8df;
  /* 10f5b8b1 cmp dword ptr [ebp - 8], 0x10f7f140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10f7f140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b8b8 je 0x10f5b8c3 */
  if (C.zf) goto L_10f5b8c3;
  /* 10f5b8ba cmp dword ptr [ebp - 8], 0x10f7f160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10f7f160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b8c1 jne 0x10f5b8d3 */
  if (!C.zf) goto L_10f5b8d3;
L_10f5b8c3:;
  /* 10f5b8c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5b8c6 push edx */
  push32((uint32_t)(EDX));
  /* 10f5b8c7 call 0x10f5d710 */
  push32(0x10f5b8ccu); f_10f5d710();
  /* 10f5b8cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b8cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5b8d1 jne 0x10f5b8df */
  if (!C.zf) goto L_10f5b8df;
L_10f5b8d3:;
  /* 10f5b8d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b8d6 push eax */
  push32((uint32_t)(EAX));
  /* 10f5b8d7 call 0x10f5d640 */
  push32(0x10f5b8dcu); f_10f5d640();
  /* 10f5b8dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5b8df:;
  /* 10f5b8df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b8e2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f5b8e5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5b8eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5b8ed je 0x10f5b9cb */
  if (C.zf) goto L_10f5b9cb;
L_10f5b8f3:;
  /* 10f5b8f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b8f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b8f9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10f5b8fb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5b8fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5b900 jge 0x10f5b923 */
  if ((C.sf==C.of)) goto L_10f5b923;
  /* 10f5b902 push 0x10f7bff8 */
  push32((uint32_t)(0x10f7bff8u));
  /* 10f5b907 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5b909 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10f5b90e push 0x10f7c038 */
  push32((uint32_t)(0x10f7c038u));
  /* 10f5b913 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5b915 call 0x10f53b50 */
  push32(0x10f5b91au); f_10f53b50();
  /* 10f5b91a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b91d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b920 jne 0x10f5b923 */
  if (!C.zf) goto L_10f5b923;
  /* 10f5b922 int3  */
  x86_unimpl("int3 @ 0x10f5b922");
L_10f5b923:;
  /* 10f5b923 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5b925 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5b927 jne 0x10f5b8f3 */
  if (!C.zf) goto L_10f5b8f3;
  /* 10f5b929 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b92c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b92f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f5b931 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5b934 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5b937 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b93a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f5b93d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b940 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b943 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f5b945 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b948 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10f5b94b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5b94e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b951 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10f5b954 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b958 jle 0x10f5b976 */
  if ((C.zf||C.sf!=C.of)) goto L_10f5b976;
  /* 10f5b95a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5b95d push ecx */
  push32((uint32_t)(ECX));
  /* 10f5b95e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b961 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f5b964 push eax */
  push32((uint32_t)(EAX));
  /* 10f5b965 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5b968 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5b969 call 0x10f5d330 */
  push32(0x10f5b96eu); f_10f5d330();
  /* 10f5b96e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b971 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f5b974 jmp 0x10f5b9be */
  goto L_10f5b9be;
L_10f5b976:;
  /* 10f5b976 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b97a je 0x10f5b999 */
  if (C.zf) goto L_10f5b999;
  /* 10f5b97c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5b97f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10f5b982 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5b985 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5b988 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5b98b mov ecx, dword ptr [edx*4 + 0x10f81fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10f81fa0)));
  /* 10f5b992 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b994 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10f5b997 jmp 0x10f5b9a0 */
  goto L_10f5b9a0;
L_10f5b999:;
  /* 10f5b999 mov dword ptr [ebp - 0x14], 0x10f7ea60 */
  w32((uint32_t)(EBP + -0x14), (0x10f7ea60u));
L_10f5b9a0:;
  /* 10f5b9a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5b9a3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10f5b9a7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5b9aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5b9ac je 0x10f5b9be */
  if (C.zf) goto L_10f5b9be;
  /* 10f5b9ae push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5b9b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5b9b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5b9b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5b9b6 call 0x10f5d1e0 */
  push32(0x10f5b9bbu); f_10f5d1e0();
  /* 10f5b9bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5b9be:;
  /* 10f5b9be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b9c1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f5b9c4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10f5b9c7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10f5b9c9 jmp 0x10f5b9e9 */
  goto L_10f5b9e9;
L_10f5b9cb:;
  /* 10f5b9cb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f5b9d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5b9d5 push edx */
  push32((uint32_t)(EDX));
  /* 10f5b9d6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10f5b9d9 push eax */
  push32((uint32_t)(EAX));
  /* 10f5b9da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5b9dd push ecx */
  push32((uint32_t)(ECX));
  /* 10f5b9de call 0x10f5d330 */
  push32(0x10f5b9e3u); f_10f5d330();
  /* 10f5b9e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5b9e6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10f5b9e9:;
  /* 10f5b9e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5b9ec cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5b9ef je 0x10f5ba05 */
  if (C.zf) goto L_10f5ba05;
  /* 10f5b9f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b9f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f5b9f7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5b9fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5b9fd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10f5ba00 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ba03 jmp 0x10f5ba0d */
  goto L_10f5ba0d;
L_10f5ba05:;
  /* 10f5ba05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ba08 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10f5ba0d:;
  /* 10f5ba0d pop edi */
  EDI = (pop32());
  /* 10f5ba0e pop esi */
  ESI = (pop32());
  /* 10f5ba0f pop ebx */
  EBX = (pop32());
  /* 10f5ba10 mov esp, ebp */
  ESP = (EBP);
  /* 10f5ba12 pop ebp */
  EBP = (pop32());
  /* 10f5ba13 ret  */
  ESPCHK(0x10f5b7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba20 @ 0x10f5ba20 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10f5ba20(void) {
  FTRACE(0x10f5ba20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5ba20 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5ba21 mov ebp, esp */
  EBP = (ESP);
  /* 10f5ba23 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5ba29 push ebx */
  push32((uint32_t)(EBX));
  /* 10f5ba2a push esi */
  push32((uint32_t)(ESI));
  /* 10f5ba2b push edi */
  push32((uint32_t)(EDI));
  /* 10f5ba2c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10f5ba33 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10f5ba3d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10f5ba44:;
  /* 10f5ba44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5ba47 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f5ba49 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10f5ba4c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f5ba50 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5ba53 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ba56 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10f5ba59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5ba5b je 0x10f5c637 */
  if (C.zf) goto L_10f5c637;
  /* 10f5ba61 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ba68 jl 0x10f5c637 */
  if ((C.sf!=C.of)) goto L_10f5c637;
  /* 10f5ba6e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f5ba72 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ba75 jl 0x10f5ba96 */
  if ((C.sf!=C.of)) goto L_10f5ba96;
  /* 10f5ba77 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f5ba7b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ba7e jg 0x10f5ba96 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f5ba96;
  /* 10f5ba80 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f5ba84 movsx ecx, byte ptr [eax + 0x10f7c030] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10f7c030))));
  /* 10f5ba8b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5ba8e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10f5ba94 jmp 0x10f5baa0 */
  goto L_10f5baa0;
L_10f5ba96:;
  /* 10f5ba96 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10f5baa0:;
  /* 10f5baa0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10f5baa6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f5baa9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5baac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5baaf movsx edx, byte ptr [ecx + eax*8 + 0x10f7c050] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10f7c050))));
  /* 10f5bab7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10f5baba mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10f5babd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5bac0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10f5bac6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5bacd ja 0x10f5c632 */
  if ((!C.cf&&!C.zf)) goto L_10f5c632;
  /* 10f5bad3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10f5bad9 jmp dword ptr [ecx*4 + 0x10f5c644] */
  switch (ECX) {
    case 0: goto L_10f5bae0;
    case 1: goto L_10f5bb7a;
    case 2: goto L_10f5bbbc;
    case 3: goto L_10f5bc2b;
    case 4: goto L_10f5bc83;
    case 5: goto L_10f5bc92;
    case 6: goto L_10f5bcde;
    case 7: goto L_10f5bd71;
    case 8: goto L_10f5bc08;
    case 9: goto L_10f5bc13;
    case 10: goto L_10f5bbfe;
    case 11: goto L_10f5bbf3;
    case 12: goto L_10f5bc1e;
    case 13: goto L_10f5bc26;
    default: x86_unimpl("switch@0x10f5bad9 out of table"); return;
  }
L_10f5bae0:;
  /* 10f5bae0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10f5bae7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f5baea and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5baf0 mov eax, dword ptr [0x10f7ec98] */
  EAX = (r32((uint32_t)(0x10f7ec98)));
  /* 10f5baf5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5baf7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10f5bafb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5bb01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5bb03 je 0x10f5bb5d */
  if (C.zf) goto L_10f5bb5d;
  /* 10f5bb05 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10f5bb0b push edx */
  push32((uint32_t)(EDX));
  /* 10f5bb0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5bb0f push eax */
  push32((uint32_t)(EAX));
  /* 10f5bb10 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f5bb14 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5bb15 call 0x10f5c750 */
  push32(0x10f5bb1au); f_10f5c750();
  /* 10f5bb1a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5bb1d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5bb20 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f5bb22 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10f5bb25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5bb28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5bb2b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10f5bb2e:;
  /* 10f5bb2e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f5bb32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5bb34 jne 0x10f5bb57 */
  if (!C.zf) goto L_10f5bb57;
  /* 10f5bb36 push 0x10f7c0d0 */
  push32((uint32_t)(0x10f7c0d0u));
  /* 10f5bb3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5bb3d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10f5bb42 push 0x10f7c0c4 */
  push32((uint32_t)(0x10f7c0c4u));
  /* 10f5bb47 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5bb49 call 0x10f53b50 */
  push32(0x10f5bb4eu); f_10f53b50();
  /* 10f5bb4e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5bb51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5bb54 jne 0x10f5bb57 */
  if (!C.zf) goto L_10f5bb57;
  /* 10f5bb56 int3  */
  x86_unimpl("int3 @ 0x10f5bb56");
L_10f5bb57:;
  /* 10f5bb57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5bb59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5bb5b jne 0x10f5bb2e */
  if (!C.zf) goto L_10f5bb2e;
L_10f5bb5d:;
  /* 10f5bb5d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10f5bb63 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5bb64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5bb67 push edx */
  push32((uint32_t)(EDX));
  /* 10f5bb68 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f5bb6c push eax */
  push32((uint32_t)(EAX));
  /* 10f5bb6d call 0x10f5c750 */
  push32(0x10f5bb72u); f_10f5c750();
  /* 10f5bb72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5bb75 jmp 0x10f5c632 */
  goto L_10f5c632;
L_10f5bb7a:;
  /* 10f5bb7a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f5bb81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5bb84 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10f5bb8a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10f5bb90 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10f5bb96 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10f5bb9c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f5bb9f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f5bba6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10f5bbb0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10f5bbb7 jmp 0x10f5c632 */
  goto L_10f5c632;
L_10f5bbbc:;
  /* 10f5bbbc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f5bbc0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10f5bbc6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10f5bbcc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5bbcf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10f5bbd5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5bbdc ja 0x10f5bc26 */
  if ((!C.cf&&!C.zf)) goto L_10f5bc26;
  /* 10f5bbde mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10f5bbe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5bbe6 mov al, byte ptr [ecx + 0x10f5c67c] */
  AL = (r8((uint32_t)(ECX + 0x10f5c67c)));
  /* 10f5bbec jmp dword ptr [eax*4 + 0x10f5c664] */
  switch (EAX) {
    case 0: goto L_10f5bc08;
    case 1: goto L_10f5bc13;
    case 2: goto L_10f5bbfe;
    case 3: goto L_10f5bbf3;
    case 4: goto L_10f5bc1e;
    case 5: goto L_10f5bc26;
    default: x86_unimpl("switch@0x10f5bbec out of table"); return;
  }
L_10f5bbf3:;
  /* 10f5bbf3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5bbf6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5bbf9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f5bbfc jmp 0x10f5bc26 */
  goto L_10f5bc26;
L_10f5bbfe:;
  /* 10f5bbfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5bc01 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10f5bc03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5bc06 jmp 0x10f5bc26 */
  goto L_10f5bc26;
L_10f5bc08:;
  /* 10f5bc08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5bc0b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5bc0e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f5bc11 jmp 0x10f5bc26 */
  goto L_10f5bc26;
L_10f5bc13:;
  /* 10f5bc13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5bc16 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10f5bc19 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f5bc1c jmp 0x10f5bc26 */
  goto L_10f5bc26;
L_10f5bc1e:;
  /* 10f5bc1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5bc21 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10f5bc23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f5bc26:;
  /* 10f5bc26 jmp 0x10f5c632 */
  goto L_10f5c632;
L_10f5bc2b:;
  /* 10f5bc2b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f5bc2f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5bc32 jne 0x10f5bc67 */
  if (!C.zf) goto L_10f5bc67;
  /* 10f5bc34 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10f5bc37 push edx */
  push32((uint32_t)(EDX));
  /* 10f5bc38 call 0x10f5c860 */
  push32(0x10f5bc3du); f_10f5c860();
  /* 10f5bc3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5bc40 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10f5bc46 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5bc4d jge 0x10f5bc65 */
  if ((C.sf==C.of)) goto L_10f5bc65;
  /* 10f5bc4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5bc52 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10f5bc54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5bc57 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10f5bc5d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f5bc5f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10f5bc65:;
  /* 10f5bc65 jmp 0x10f5bc7e */
  goto L_10f5bc7e;
L_10f5bc67:;
  /* 10f5bc67 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10f5bc6d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5bc70 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f5bc74 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10f5bc78 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10f5bc7e:;
  /* 10f5bc7e jmp 0x10f5c632 */
  goto L_10f5c632;
L_10f5bc83:;
  /* 10f5bc83 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10f5bc8d jmp 0x10f5c632 */
  goto L_10f5c632;
L_10f5bc92:;
  /* 10f5bc92 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f5bc96 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5bc99 jne 0x10f5bcc2 */
  if (!C.zf) goto L_10f5bcc2;
  /* 10f5bc9b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10f5bc9e push eax */
  push32((uint32_t)(EAX));
  /* 10f5bc9f call 0x10f5c860 */
  push32(0x10f5bca4u); f_10f5c860();
  /* 10f5bca4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5bca7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10f5bcad cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5bcb4 jge 0x10f5bcc0 */
  if ((C.sf==C.of)) goto L_10f5bcc0;
  /* 10f5bcb6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10f5bcc0:;
  /* 10f5bcc0 jmp 0x10f5bcd9 */
  goto L_10f5bcd9;
L_10f5bcc2:;
  /* 10f5bcc2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10f5bcc8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5bccb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f5bccf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10f5bcd3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10f5bcd9:;
  /* 10f5bcd9 jmp 0x10f5c632 */
  goto L_10f5c632;
L_10f5bcde:;
  /* 10f5bcde movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f5bce2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10f5bce8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10f5bcee sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5bcf1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10f5bcf7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5bcfe ja 0x10f5bd6c */
  if ((!C.cf&&!C.zf)) goto L_10f5bd6c;
  /* 10f5bd00 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10f5bd06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5bd08 mov al, byte ptr [ecx + 0x10f5c6a1] */
  AL = (r8((uint32_t)(ECX + 0x10f5c6a1)));
  /* 10f5bd0e jmp dword ptr [eax*4 + 0x10f5c68d] */
  switch (EAX) {
    case 0: goto L_10f5bd20;
    case 1: goto L_10f5bd59;
    case 2: goto L_10f5bd15;
    case 3: goto L_10f5bd63;
    case 4: goto L_10f5bd6c;
    default: x86_unimpl("switch@0x10f5bd0e out of table"); return;
  }
L_10f5bd15:;
  /* 10f5bd15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5bd18 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5bd1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f5bd1e jmp 0x10f5bd6c */
  goto L_10f5bd6c;
L_10f5bd20:;
  /* 10f5bd20 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5bd23 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f5bd26 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5bd29 jne 0x10f5bd4b */
  if (!C.zf) goto L_10f5bd4b;
  /* 10f5bd2b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5bd2e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10f5bd32 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5bd35 jne 0x10f5bd4b */
  if (!C.zf) goto L_10f5bd4b;
  /* 10f5bd37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5bd3a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5bd3d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10f5bd40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5bd43 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10f5bd46 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f5bd49 jmp 0x10f5bd57 */
  goto L_10f5bd57;
L_10f5bd4b:;
  /* 10f5bd4b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10f5bd52 jmp 0x10f5bae0 */
  goto L_10f5bae0;
L_10f5bd57:;
  /* 10f5bd57 jmp 0x10f5bd6c */
  goto L_10f5bd6c;
L_10f5bd59:;
  /* 10f5bd59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5bd5c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10f5bd5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5bd61 jmp 0x10f5bd6c */
  goto L_10f5bd6c;
L_10f5bd63:;
  /* 10f5bd63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5bd66 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10f5bd69 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f5bd6c:;
  /* 10f5bd6c jmp 0x10f5c632 */
  goto L_10f5c632;
L_10f5bd71:;
  /* 10f5bd71 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f5bd75 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10f5bd7b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10f5bd81 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5bd84 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10f5bd8a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5bd91 ja 0x10f5c457 */
  if ((!C.cf&&!C.zf)) goto L_10f5c457;
  /* 10f5bd97 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10f5bd9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5bd9f mov cl, byte ptr [edx + 0x10f5c70c] */
  CL = (r8((uint32_t)(EDX + 0x10f5c70c)));
  /* 10f5bda5 jmp dword ptr [ecx*4 + 0x10f5c6d0] */
  switch (ECX) {
    case 0: goto L_10f5bdac;
    case 1: goto L_10f5c040;
    case 2: goto L_10f5bed0;
    case 3: goto L_10f5c179;
    case 4: goto L_10f5be3b;
    case 5: goto L_10f5bdc1;
    case 6: goto L_10f5c14b;
    case 7: goto L_10f5c050;
    case 8: goto L_10f5bff5;
    case 9: goto L_10f5c1c5;
    case 10: goto L_10f5c16f;
    case 11: goto L_10f5bee6;
    case 12: goto L_10f5c163;
    case 13: goto L_10f5c185;
    case 14: goto L_10f5c457;
    default: x86_unimpl("switch@0x10f5bda5 out of table"); return;
  }
L_10f5bdac:;
  /* 10f5bdac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5bdaf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5bdb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5bdb6 jne 0x10f5bdc1 */
  if (!C.zf) goto L_10f5bdc1;
  /* 10f5bdb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5bdbb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10f5bdbe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f5bdc1:;
  /* 10f5bdc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5bdc4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5bdca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5bdcc je 0x10f5be07 */
  if (C.zf) goto L_10f5be07;
  /* 10f5bdce lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10f5bdd1 push eax */
  push32((uint32_t)(EAX));
  /* 10f5bdd2 call 0x10f5c8a0 */
  push32(0x10f5bdd7u); f_10f5c8a0();
  /* 10f5bdd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5bdda mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10f5bdde mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10f5bde2 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5bde3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10f5bde9 push edx */
  push32((uint32_t)(EDX));
  /* 10f5bdea call 0x10f5d980 */
  push32(0x10f5bdefu); f_10f5d980();
  /* 10f5bdef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5bdf2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f5bdf5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5bdf9 jge 0x10f5be05 */
  if ((C.sf==C.of)) goto L_10f5be05;
  /* 10f5bdfb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10f5be05:;
  /* 10f5be05 jmp 0x10f5be2d */
  goto L_10f5be2d;
L_10f5be07:;
  /* 10f5be07 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10f5be0a push eax */
  push32((uint32_t)(EAX));
  /* 10f5be0b call 0x10f5c860 */
  push32(0x10f5be10u); f_10f5c860();
  /* 10f5be10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5be13 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10f5be1a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10f5be20 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10f5be26 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10f5be2d:;
  /* 10f5be2d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10f5be33 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10f5be36 jmp 0x10f5c457 */
  goto L_10f5c457;
L_10f5be3b:;
  /* 10f5be3b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10f5be3e push eax */
  push32((uint32_t)(EAX));
  /* 10f5be3f call 0x10f5c860 */
  push32(0x10f5be44u); f_10f5c860();
  /* 10f5be44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5be47 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10f5be4d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5be54 je 0x10f5be62 */
  if (C.zf) goto L_10f5be62;
  /* 10f5be56 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10f5be5c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5be60 jne 0x10f5be7c */
  if (!C.zf) goto L_10f5be7c;
L_10f5be62:;
  /* 10f5be62 mov edx, dword ptr [0x10f7efb0] */
  EDX = (r32((uint32_t)(0x10f7efb0)));
  /* 10f5be68 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10f5be6b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5be6e push eax */
  push32((uint32_t)(EAX));
  /* 10f5be6f call 0x10f578c0 */
  push32(0x10f5be74u); f_10f578c0();
  /* 10f5be74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5be77 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f5be7a jmp 0x10f5becb */
  goto L_10f5becb;
L_10f5be7c:;
  /* 10f5be7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5be7f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5be85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5be87 je 0x10f5beac */
  if (C.zf) goto L_10f5beac;
  /* 10f5be89 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10f5be8f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f5be92 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f5be95 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10f5be9b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10f5be9e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10f5bea0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10f5bea3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10f5beaa jmp 0x10f5becb */
  goto L_10f5becb;
L_10f5beac:;
  /* 10f5beac mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10f5beb3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10f5beb9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f5bebc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10f5bebf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10f5bec5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10f5bec8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10f5becb:;
  /* 10f5becb jmp 0x10f5c457 */
  goto L_10f5c457;
L_10f5bed0:;
  /* 10f5bed0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5bed3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5bed9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5bedb jne 0x10f5bee6 */
  if (!C.zf) goto L_10f5bee6;
  /* 10f5bedd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5bee0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10f5bee3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f5bee6:;
  /* 10f5bee6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5beed jne 0x10f5befb */
  if (!C.zf) goto L_10f5befb;
  /* 10f5beef mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10f5bef9 jmp 0x10f5bf07 */
  goto L_10f5bf07;
L_10f5befb:;
  /* 10f5befb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10f5bf01 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10f5bf07:;
  /* 10f5bf07 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10f5bf0d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10f5bf13 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10f5bf16 push edx */
  push32((uint32_t)(EDX));
  /* 10f5bf17 call 0x10f5c860 */
  push32(0x10f5bf1cu); f_10f5c860();
  /* 10f5bf1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5bf1f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f5bf22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5bf25 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5bf2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5bf2c je 0x10f5bf96 */
  if (C.zf) goto L_10f5bf96;
  /* 10f5bf2e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5bf32 jne 0x10f5bf3d */
  if (!C.zf) goto L_10f5bf3d;
  /* 10f5bf34 mov ecx, dword ptr [0x10f7efb4] */
  ECX = (r32((uint32_t)(0x10f7efb4)));
  /* 10f5bf3a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10f5bf3d:;
  /* 10f5bf3d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10f5bf44 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5bf47 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10f5bf4d:;
  /* 10f5bf4d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10f5bf53 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10f5bf59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5bf5c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10f5bf62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5bf64 je 0x10f5bf86 */
  if (C.zf) goto L_10f5bf86;
  /* 10f5bf66 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10f5bf6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5bf6e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10f5bf71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5bf73 je 0x10f5bf86 */
  if (C.zf) goto L_10f5bf86;
  /* 10f5bf75 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10f5bf7b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5bf7e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10f5bf84 jmp 0x10f5bf4d */
  goto L_10f5bf4d;
L_10f5bf86:;
  /* 10f5bf86 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10f5bf8c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5bf8f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10f5bf91 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10f5bf94 jmp 0x10f5bff0 */
  goto L_10f5bff0;
L_10f5bf96:;
  /* 10f5bf96 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5bf9a jne 0x10f5bfa4 */
  if (!C.zf) goto L_10f5bfa4;
  /* 10f5bf9c mov eax, dword ptr [0x10f7efb0] */
  EAX = (r32((uint32_t)(0x10f7efb0)));
  /* 10f5bfa1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10f5bfa4:;
  /* 10f5bfa4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5bfa7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10f5bfad:;
  /* 10f5bfad mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10f5bfb3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10f5bfb9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5bfbc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10f5bfc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5bfc4 je 0x10f5bfe4 */
  if (C.zf) goto L_10f5bfe4;
  /* 10f5bfc6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10f5bfcc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f5bfcf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5bfd1 je 0x10f5bfe4 */
  if (C.zf) goto L_10f5bfe4;
  /* 10f5bfd3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10f5bfd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5bfdc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10f5bfe2 jmp 0x10f5bfad */
  goto L_10f5bfad;
L_10f5bfe4:;
  /* 10f5bfe4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10f5bfea sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5bfed mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10f5bff0:;
  /* 10f5bff0 jmp 0x10f5c457 */
  goto L_10f5c457;
L_10f5bff5:;
  /* 10f5bff5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10f5bff8 push edx */
  push32((uint32_t)(EDX));
  /* 10f5bff9 call 0x10f5c860 */
  push32(0x10f5bffeu); f_10f5c860();
  /* 10f5bffe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c001 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10f5c007 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c00a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5c00d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5c00f je 0x10f5c023 */
  if (C.zf) goto L_10f5c023;
  /* 10f5c011 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10f5c017 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10f5c01e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10f5c021 jmp 0x10f5c031 */
  goto L_10f5c031;
L_10f5c023:;
  /* 10f5c023 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10f5c029 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10f5c02f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10f5c031:;
  /* 10f5c031 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10f5c03b jmp 0x10f5c457 */
  goto L_10f5c457;
L_10f5c040:;
  /* 10f5c040 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10f5c047 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10f5c04a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f5c04d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10f5c050:;
  /* 10f5c050 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c053 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10f5c055 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5c058 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10f5c05e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10f5c061 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c068 jge 0x10f5c076 */
  if ((C.sf==C.of)) goto L_10f5c076;
  /* 10f5c06a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10f5c074 jmp 0x10f5c092 */
  goto L_10f5c092;
L_10f5c076:;
  /* 10f5c076 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c07d jne 0x10f5c092 */
  if (!C.zf) goto L_10f5c092;
  /* 10f5c07f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f5c083 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c086 jne 0x10f5c092 */
  if (!C.zf) goto L_10f5c092;
  /* 10f5c088 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10f5c092:;
  /* 10f5c092 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5c095 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c098 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10f5c09b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5c09e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5c0a1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f5c0a3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f5c0a6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10f5c0ac mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10f5c0b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5c0b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c0b6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10f5c0bc push edx */
  push32((uint32_t)(EDX));
  /* 10f5c0bd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f5c0c1 push eax */
  push32((uint32_t)(EAX));
  /* 10f5c0c2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5c0c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c0c6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10f5c0cc push edx */
  push32((uint32_t)(EDX));
  /* 10f5c0cd call dword ptr [0x10f7f3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f7f3a0))), 0x10f5c0d3u);
  /* 10f5c0d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c0d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c0d9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5c0de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5c0e0 je 0x10f5c0f8 */
  if (C.zf) goto L_10f5c0f8;
  /* 10f5c0e2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c0e9 jne 0x10f5c0f8 */
  if (!C.zf) goto L_10f5c0f8;
  /* 10f5c0eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5c0ee push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c0ef call dword ptr [0x10f7f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f7f3ac))), 0x10f5c0f5u);
  /* 10f5c0f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5c0f8:;
  /* 10f5c0f8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f5c0fc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c0ff jne 0x10f5c11a */
  if (!C.zf) goto L_10f5c11a;
  /* 10f5c101 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c104 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5c109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5c10b jne 0x10f5c11a */
  if (!C.zf) goto L_10f5c11a;
  /* 10f5c10d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5c110 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c111 call dword ptr [0x10f7f3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f7f3a4))), 0x10f5c117u);
  /* 10f5c117 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5c11a:;
  /* 10f5c11a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5c11d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f5c120 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c123 jne 0x10f5c137 */
  if (!C.zf) goto L_10f5c137;
  /* 10f5c125 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c128 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10f5c12b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f5c12e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5c131 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c134 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10f5c137:;
  /* 10f5c137 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5c13a push eax */
  push32((uint32_t)(EAX));
  /* 10f5c13b call 0x10f578c0 */
  push32(0x10f5c140u); f_10f578c0();
  /* 10f5c140 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c143 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f5c146 jmp 0x10f5c457 */
  goto L_10f5c457;
L_10f5c14b:;
  /* 10f5c14b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c14e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5c151 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f5c154 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10f5c15e jmp 0x10f5c1e5 */
  goto L_10f5c1e5;
L_10f5c163:;
  /* 10f5c163 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10f5c16d jmp 0x10f5c1e5 */
  goto L_10f5c1e5;
L_10f5c16f:;
  /* 10f5c16f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10f5c179:;
  /* 10f5c179 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10f5c183 jmp 0x10f5c18f */
  goto L_10f5c18f;
L_10f5c185:;
  /* 10f5c185 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10f5c18f:;
  /* 10f5c18f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10f5c199 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c19c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5c1a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5c1a4 je 0x10f5c1c3 */
  if (C.zf) goto L_10f5c1c3;
  /* 10f5c1a6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10f5c1ad mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10f5c1b3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c1b6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10f5c1bc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10f5c1c3:;
  /* 10f5c1c3 jmp 0x10f5c1e5 */
  goto L_10f5c1e5;
L_10f5c1c5:;
  /* 10f5c1c5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10f5c1cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c1d2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5c1d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5c1da je 0x10f5c1e5 */
  if (C.zf) goto L_10f5c1e5;
  /* 10f5c1dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c1df or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10f5c1e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f5c1e5:;
  /* 10f5c1e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c1e8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5c1ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5c1ef je 0x10f5c20e */
  if (C.zf) goto L_10f5c20e;
  /* 10f5c1f1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10f5c1f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c1f5 call 0x10f5c880 */
  push32(0x10f5c1fau); f_10f5c880();
  /* 10f5c1fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c1fd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10f5c203 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10f5c209 jmp 0x10f5c29f */
  goto L_10f5c29f;
L_10f5c20e:;
  /* 10f5c20e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c211 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5c214 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5c216 je 0x10f5c260 */
  if (C.zf) goto L_10f5c260;
  /* 10f5c218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c21b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5c21e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5c220 je 0x10f5c240 */
  if (C.zf) goto L_10f5c240;
  /* 10f5c222 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10f5c225 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c226 call 0x10f5c860 */
  push32(0x10f5c22bu); f_10f5c860();
  /* 10f5c22b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c22e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10f5c231 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f5c232 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10f5c238 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10f5c23e jmp 0x10f5c25e */
  goto L_10f5c25e;
L_10f5c240:;
  /* 10f5c240 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10f5c243 push edx */
  push32((uint32_t)(EDX));
  /* 10f5c244 call 0x10f5c860 */
  push32(0x10f5c249u); f_10f5c860();
  /* 10f5c249 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c24c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5c251 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f5c252 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10f5c258 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10f5c25e:;
  /* 10f5c25e jmp 0x10f5c29f */
  goto L_10f5c29f;
L_10f5c260:;
  /* 10f5c260 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c263 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5c266 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5c268 je 0x10f5c285 */
  if (C.zf) goto L_10f5c285;
  /* 10f5c26a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10f5c26d push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c26e call 0x10f5c860 */
  push32(0x10f5c273u); f_10f5c860();
  /* 10f5c273 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c276 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f5c277 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10f5c27d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10f5c283 jmp 0x10f5c29f */
  goto L_10f5c29f;
L_10f5c285:;
  /* 10f5c285 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10f5c288 push edx */
  push32((uint32_t)(EDX));
  /* 10f5c289 call 0x10f5c860 */
  push32(0x10f5c28eu); f_10f5c860();
  /* 10f5c28e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c291 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5c293 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10f5c299 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10f5c29f:;
  /* 10f5c29f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c2a2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5c2a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5c2a7 je 0x10f5c2e7 */
  if (C.zf) goto L_10f5c2e7;
  /* 10f5c2a9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c2b0 jg 0x10f5c2e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f5c2e7;
  /* 10f5c2b2 jl 0x10f5c2bd */
  if ((C.sf!=C.of)) goto L_10f5c2bd;
  /* 10f5c2b4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c2bb jae 0x10f5c2e7 */
  if (!C.cf) goto L_10f5c2e7;
L_10f5c2bd:;
  /* 10f5c2bd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10f5c2c3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f5c2c5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10f5c2cb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c2ce neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f5c2d0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10f5c2d6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10f5c2dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c2df or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10f5c2e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f5c2e5 jmp 0x10f5c2ff */
  goto L_10f5c2ff;
L_10f5c2e7:;
  /* 10f5c2e7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10f5c2ed mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10f5c2f3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10f5c2f9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10f5c2ff:;
  /* 10f5c2ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c302 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5c308 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5c30a jne 0x10f5c327 */
  if (!C.zf) goto L_10f5c327;
  /* 10f5c30c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10f5c312 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10f5c318 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5c31b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10f5c321 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10f5c327:;
  /* 10f5c327 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c32e jge 0x10f5c33c */
  if ((C.sf==C.of)) goto L_10f5c33c;
  /* 10f5c330 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10f5c33a jmp 0x10f5c345 */
  goto L_10f5c345;
L_10f5c33c:;
  /* 10f5c33c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c33f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5c342 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f5c345:;
  /* 10f5c345 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10f5c34b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10f5c351 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5c353 jne 0x10f5c35c */
  if (!C.zf) goto L_10f5c35c;
  /* 10f5c355 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10f5c35c:;
  /* 10f5c35c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10f5c35f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10f5c362:;
  /* 10f5c362 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10f5c368 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10f5c36e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5c371 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10f5c377 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5c379 jg 0x10f5c38f */
  if ((!C.zf&&C.sf==C.of)) goto L_10f5c38f;
  /* 10f5c37b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10f5c381 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10f5c387 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5c389 je 0x10f5c410 */
  if (C.zf) goto L_10f5c410;
L_10f5c38f:;
  /* 10f5c38f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10f5c395 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f5c396 push edx */
  push32((uint32_t)(EDX));
  /* 10f5c397 push eax */
  push32((uint32_t)(EAX));
  /* 10f5c398 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10f5c39e push edx */
  push32((uint32_t)(EDX));
  /* 10f5c39f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10f5c3a5 push eax */
  push32((uint32_t)(EAX));
  /* 10f5c3a6 call 0x10f5b720 */
  push32(0x10f5c3abu); f_10f5b720();
  /* 10f5c3ab add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c3ae mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10f5c3b4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10f5c3ba cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f5c3bb push edx */
  push32((uint32_t)(EDX));
  /* 10f5c3bc push eax */
  push32((uint32_t)(EAX));
  /* 10f5c3bd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10f5c3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c3c4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10f5c3ca push edx */
  push32((uint32_t)(EDX));
  /* 10f5c3cb call 0x10f5b6b0 */
  push32(0x10f5c3d0u); f_10f5b6b0();
  /* 10f5c3d0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10f5c3d6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10f5c3dc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c3e3 jle 0x10f5c3f7 */
  if ((C.zf||C.sf!=C.of)) goto L_10f5c3f7;
  /* 10f5c3e5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10f5c3eb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c3f1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10f5c3f7:;
  /* 10f5c3f7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5c3fa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10f5c400 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10f5c402 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5c405 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5c408 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f5c40b jmp 0x10f5c362 */
  goto L_10f5c362;
L_10f5c410:;
  /* 10f5c410 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10f5c413 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5c416 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10f5c419 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5c41c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c41f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10f5c422 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c425 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5c42a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5c42c je 0x10f5c457 */
  if (C.zf) goto L_10f5c457;
  /* 10f5c42e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5c431 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f5c434 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c437 jne 0x10f5c43f */
  if (!C.zf) goto L_10f5c43f;
  /* 10f5c439 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c43d jne 0x10f5c457 */
  if (!C.zf) goto L_10f5c457;
L_10f5c43f:;
  /* 10f5c43f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5c442 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5c445 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f5c448 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5c44b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10f5c44e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5c451 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c454 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10f5c457:;
  /* 10f5c457 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c45e jne 0x10f5c632 */
  if (!C.zf) goto L_10f5c632;
  /* 10f5c464 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c467 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5c46a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5c46c je 0x10f5c4bd */
  if (C.zf) goto L_10f5c4bd;
  /* 10f5c46e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c471 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5c477 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5c479 je 0x10f5c48b */
  if (C.zf) goto L_10f5c48b;
  /* 10f5c47b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10f5c482 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10f5c489 jmp 0x10f5c4bd */
  goto L_10f5c4bd;
L_10f5c48b:;
  /* 10f5c48b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c48e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5c491 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5c493 je 0x10f5c4a5 */
  if (C.zf) goto L_10f5c4a5;
  /* 10f5c495 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10f5c49c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10f5c4a3 jmp 0x10f5c4bd */
  goto L_10f5c4bd;
L_10f5c4a5:;
  /* 10f5c4a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c4a8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5c4ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5c4ad je 0x10f5c4bd */
  if (C.zf) goto L_10f5c4bd;
  /* 10f5c4af mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10f5c4b6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10f5c4bd:;
  /* 10f5c4bd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10f5c4c3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5c4c6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5c4c9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10f5c4cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c4d2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5c4d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5c4d7 jne 0x10f5c4f5 */
  if (!C.zf) goto L_10f5c4f5;
  /* 10f5c4d9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10f5c4df push eax */
  push32((uint32_t)(EAX));
  /* 10f5c4e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c4e4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10f5c4ea push edx */
  push32((uint32_t)(EDX));
  /* 10f5c4eb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10f5c4ed call 0x10f5c7d0 */
  push32(0x10f5c4f2u); f_10f5c7d0();
  /* 10f5c4f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5c4f5:;
  /* 10f5c4f5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10f5c4fb push eax */
  push32((uint32_t)(EAX));
  /* 10f5c4fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c4ff push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c500 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5c503 push edx */
  push32((uint32_t)(EDX));
  /* 10f5c504 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10f5c50a push eax */
  push32((uint32_t)(EAX));
  /* 10f5c50b call 0x10f5c810 */
  push32(0x10f5c510u); f_10f5c810();
  /* 10f5c510 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c513 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c516 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5c519 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5c51b je 0x10f5c543 */
  if (C.zf) goto L_10f5c543;
  /* 10f5c51d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c520 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5c523 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5c525 jne 0x10f5c543 */
  if (!C.zf) goto L_10f5c543;
  /* 10f5c527 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10f5c52d push eax */
  push32((uint32_t)(EAX));
  /* 10f5c52e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c531 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c532 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10f5c538 push edx */
  push32((uint32_t)(EDX));
  /* 10f5c539 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10f5c53b call 0x10f5c7d0 */
  push32(0x10f5c540u); f_10f5c7d0();
  /* 10f5c540 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5c543:;
  /* 10f5c543 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c547 je 0x10f5c5f1 */
  if (C.zf) goto L_10f5c5f1;
  /* 10f5c54d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c551 jle 0x10f5c5f1 */
  if ((C.zf||C.sf!=C.of)) goto L_10f5c5f1;
  /* 10f5c557 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5c55a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10f5c560 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5c563 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10f5c569:;
  /* 10f5c569 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10f5c56f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10f5c575 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5c578 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10f5c57e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5c580 je 0x10f5c5ef */
  if (C.zf) goto L_10f5c5ef;
  /* 10f5c582 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10f5c588 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10f5c58b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10f5c592 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10f5c599 push eax */
  push32((uint32_t)(EAX));
  /* 10f5c59a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10f5c5a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c5a1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10f5c5a7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c5aa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10f5c5b0 call 0x10f5d980 */
  push32(0x10f5c5b5u); f_10f5d980();
  /* 10f5c5b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c5b8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10f5c5be cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c5c5 jg 0x10f5c5c9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f5c5c9;
  /* 10f5c5c7 jmp 0x10f5c5ef */
  goto L_10f5c5ef;
L_10f5c5c9:;
  /* 10f5c5c9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10f5c5cf push eax */
  push32((uint32_t)(EAX));
  /* 10f5c5d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c5d4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10f5c5da push edx */
  push32((uint32_t)(EDX));
  /* 10f5c5db lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10f5c5e1 push eax */
  push32((uint32_t)(EAX));
  /* 10f5c5e2 call 0x10f5c810 */
  push32(0x10f5c5e7u); f_10f5c810();
  /* 10f5c5e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c5ea jmp 0x10f5c569 */
  goto L_10f5c569;
L_10f5c5ef:;
  /* 10f5c5ef jmp 0x10f5c60c */
  goto L_10f5c60c;
L_10f5c5f1:;
  /* 10f5c5f1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10f5c5f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c5f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c5fb push edx */
  push32((uint32_t)(EDX));
  /* 10f5c5fc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5c5ff push eax */
  push32((uint32_t)(EAX));
  /* 10f5c600 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5c603 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c604 call 0x10f5c810 */
  push32(0x10f5c609u); f_10f5c810();
  /* 10f5c609 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5c60c:;
  /* 10f5c60c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c60f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5c612 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5c614 je 0x10f5c632 */
  if (C.zf) goto L_10f5c632;
  /* 10f5c616 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10f5c61c push eax */
  push32((uint32_t)(EAX));
  /* 10f5c61d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c620 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c621 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10f5c627 push edx */
  push32((uint32_t)(EDX));
  /* 10f5c628 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10f5c62a call 0x10f5c7d0 */
  push32(0x10f5c62fu); f_10f5c7d0();
  /* 10f5c62f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5c632:;
  /* 10f5c632 jmp 0x10f5ba44 */
  goto L_10f5ba44;
L_10f5c637:;
  /* 10f5c637 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10f5c63d pop edi */
  EDI = (pop32());
  /* 10f5c63e pop esi */
  ESI = (pop32());
  /* 10f5c63f pop ebx */
  EBX = (pop32());
  /* 10f5c640 mov esp, ebp */
  ESP = (EBP);
  /* 10f5c642 pop ebp */
  EBP = (pop32());
  /* 10f5c643 ret  */
  ESPCHK(0x10f5ba20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c750 @ 0x10f5c750 (119 bytes, 44 insns) */
void f_10f5c750(void) {
  FTRACE(0x10f5c750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5c750 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5c751 mov ebp, esp */
  EBP = (ESP);
  /* 10f5c753 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c754 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5c757 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f5c75a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5c75d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5c760 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10f5c763 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5c766 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c76a jl 0x10f5c792 */
  if ((C.sf!=C.of)) goto L_10f5c792;
  /* 10f5c76c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5c76f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f5c771 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10f5c774 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10f5c776 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10f5c77a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5c780 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f5c783 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5c786 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f5c788 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c78b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5c78e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f5c790 jmp 0x10f5c7a5 */
  goto L_10f5c7a5;
L_10f5c792:;
  /* 10f5c792 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5c795 push edx */
  push32((uint32_t)(EDX));
  /* 10f5c796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c799 push eax */
  push32((uint32_t)(EAX));
  /* 10f5c79a call 0x10f5b7a0 */
  push32(0x10f5c79fu); f_10f5b7a0();
  /* 10f5c79f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c7a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f5c7a5:;
  /* 10f5c7a5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c7a9 jne 0x10f5c7b6 */
  if (!C.zf) goto L_10f5c7b6;
  /* 10f5c7ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5c7ae mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10f5c7b4 jmp 0x10f5c7c3 */
  goto L_10f5c7c3;
L_10f5c7b6:;
  /* 10f5c7b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5c7b9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f5c7bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c7be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5c7c1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10f5c7c3:;
  /* 10f5c7c3 mov esp, ebp */
  ESP = (EBP);
  /* 10f5c7c5 pop ebp */
  EBP = (pop32());
  /* 10f5c7c6 ret  */
  ESPCHK(0x10f5c750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7d0 @ 0x10f5c7d0 (53 bytes, 23 insns) */
void f_10f5c7d0(void) {
  FTRACE(0x10f5c7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5c7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5c7d1 mov ebp, esp */
  EBP = (ESP);
L_10f5c7d3:;
  /* 10f5c7d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5c7d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5c7d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5c7dc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10f5c7df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5c7e1 jle 0x10f5c803 */
  if ((C.zf||C.sf!=C.of)) goto L_10f5c803;
  /* 10f5c7e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f5c7e6 push edx */
  push32((uint32_t)(EDX));
  /* 10f5c7e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5c7ea push eax */
  push32((uint32_t)(EAX));
  /* 10f5c7eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c7ee push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c7ef call 0x10f5c750 */
  push32(0x10f5c7f4u); f_10f5c750();
  /* 10f5c7f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c7f7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f5c7fa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c7fd jne 0x10f5c801 */
  if (!C.zf) goto L_10f5c801;
  /* 10f5c7ff jmp 0x10f5c803 */
  goto L_10f5c803;
L_10f5c801:;
  /* 10f5c801 jmp 0x10f5c7d3 */
  goto L_10f5c7d3;
L_10f5c803:;
  /* 10f5c803 pop ebp */
  EBP = (pop32());
  /* 10f5c804 ret  */
  ESPCHK(0x10f5c7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c810 @ 0x10f5c810 (74 bytes, 31 insns) */
void f_10f5c810(void) {
  FTRACE(0x10f5c810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5c810 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5c811 mov ebp, esp */
  EBP = (ESP);
  /* 10f5c813 push ecx */
  push32((uint32_t)(ECX));
L_10f5c814:;
  /* 10f5c814 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5c817 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5c81a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5c81d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10f5c820 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5c822 jle 0x10f5c856 */
  if ((C.zf||C.sf!=C.of)) goto L_10f5c856;
  /* 10f5c824 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f5c827 push edx */
  push32((uint32_t)(EDX));
  /* 10f5c828 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5c82b push eax */
  push32((uint32_t)(EAX));
  /* 10f5c82c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c82f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f5c832 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f5c835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c838 push eax */
  push32((uint32_t)(EAX));
  /* 10f5c839 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c83c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c83f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10f5c842 call 0x10f5c750 */
  push32(0x10f5c847u); f_10f5c750();
  /* 10f5c847 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c84a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f5c84d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c850 jne 0x10f5c854 */
  if (!C.zf) goto L_10f5c854;
  /* 10f5c852 jmp 0x10f5c856 */
  goto L_10f5c856;
L_10f5c854:;
  /* 10f5c854 jmp 0x10f5c814 */
  goto L_10f5c814;
L_10f5c856:;
  /* 10f5c856 mov esp, ebp */
  ESP = (EBP);
  /* 10f5c858 pop ebp */
  EBP = (pop32());
  /* 10f5c859 ret  */
  ESPCHK(0x10f5c810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c860 @ 0x10f5c860 (26 bytes, 12 insns) */
void f_10f5c860(void) {
  FTRACE(0x10f5c860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5c860 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5c861 mov ebp, esp */
  EBP = (ESP);
  /* 10f5c863 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c866 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f5c868 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c86b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c86e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f5c870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c873 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f5c875 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10f5c878 pop ebp */
  EBP = (pop32());
  /* 10f5c879 ret  */
  ESPCHK(0x10f5c860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c880 @ 0x10f5c880 (31 bytes, 14 insns) */
void f_10f5c880(void) {
  FTRACE(0x10f5c880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5c880 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5c881 mov ebp, esp */
  EBP = (ESP);
  /* 10f5c883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c886 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f5c888 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c88b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c88e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f5c890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c893 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f5c895 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5c898 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f5c89a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f5c89d pop ebp */
  EBP = (pop32());
  /* 10f5c89e ret  */
  ESPCHK(0x10f5c880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8a0 @ 0x10f5c8a0 (27 bytes, 12 insns) */
void f_10f5c8a0(void) {
  FTRACE(0x10f5c8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5c8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5c8a1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5c8a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c8a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f5c8a8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c8ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c8ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f5c8b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c8b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f5c8b5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10f5c8b9 pop ebp */
  EBP = (pop32());
  /* 10f5c8ba ret  */
  ESPCHK(0x10f5c8a0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10f5c8c0 (145 bytes, 42 insns) */
void f_10f5c8c0(void) {
  FTRACE(0x10f5c8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5c8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5c8c1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5c8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5c8c4 call 0x10f5c970 */
  push32(0x10f5c8c9u); f_10f5c970();
  /* 10f5c8c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c8cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f5c8ce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f5c8d5 jmp 0x10f5c8e0 */
  goto L_10f5c8e0;
L_10f5c8d7:;
  /* 10f5c8d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c8da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c8dd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f5c8e0:;
  /* 10f5c8e0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c8e4 jae 0x10f5c90a */
  if (!C.cf) goto L_10f5c90a;
  /* 10f5c8e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c8e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c8ec cmp ecx, dword ptr [eax*8 + 0x10f7efb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10f7efb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c8f3 jne 0x10f5c908 */
  if (!C.zf) goto L_10f5c908;
  /* 10f5c8f5 call 0x10f5c960 */
  push32(0x10f5c8fau); f_10f5c960();
  /* 10f5c8fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5c8fd mov ecx, dword ptr [edx*8 + 0x10f7efbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10f7efbc)));
  /* 10f5c904 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f5c906 jmp 0x10f5c94d */
  goto L_10f5c94d;
L_10f5c908:;
  /* 10f5c908 jmp 0x10f5c8d7 */
  goto L_10f5c8d7;
L_10f5c90a:;
  /* 10f5c90a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c90e jb 0x10f5c923 */
  if (C.cf) goto L_10f5c923;
  /* 10f5c910 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c914 ja 0x10f5c923 */
  if ((!C.cf&&!C.zf)) goto L_10f5c923;
  /* 10f5c916 call 0x10f5c960 */
  push32(0x10f5c91bu); f_10f5c960();
  /* 10f5c91b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10f5c921 jmp 0x10f5c94d */
  goto L_10f5c94d;
L_10f5c923:;
  /* 10f5c923 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c92a jb 0x10f5c942 */
  if (C.cf) goto L_10f5c942;
  /* 10f5c92c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c933 ja 0x10f5c942 */
  if ((!C.cf&&!C.zf)) goto L_10f5c942;
  /* 10f5c935 call 0x10f5c960 */
  push32(0x10f5c93au); f_10f5c960();
  /* 10f5c93a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10f5c940 jmp 0x10f5c94d */
  goto L_10f5c94d;
L_10f5c942:;
  /* 10f5c942 call 0x10f5c960 */
  push32(0x10f5c947u); f_10f5c960();
  /* 10f5c947 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10f5c94d:;
  /* 10f5c94d mov esp, ebp */
  ESP = (EBP);
  /* 10f5c94f pop ebp */
  EBP = (pop32());
  /* 10f5c950 ret  */
  ESPCHK(0x10f5c8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c960 @ 0x10f5c960 (13 bytes, 6 insns) */
void f_10f5c960(void) {
  FTRACE(0x10f5c960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5c960 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5c961 mov ebp, esp */
  EBP = (ESP);
  /* 10f5c963 call 0x10f544d0 */
  push32(0x10f5c968u); f_10f544d0();
  /* 10f5c968 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c96b pop ebp */
  EBP = (pop32());
  /* 10f5c96c ret  */
  ESPCHK(0x10f5c960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c970 @ 0x10f5c970 (13 bytes, 6 insns) */
void f_10f5c970(void) {
  FTRACE(0x10f5c970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5c970 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5c971 mov ebp, esp */
  EBP = (ESP);
  /* 10f5c973 call 0x10f544d0 */
  push32(0x10f5c978u); f_10f544d0();
  /* 10f5c978 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c97b pop ebp */
  EBP = (pop32());
  /* 10f5c97c ret  */
  ESPCHK(0x10f5c970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c980 @ 0x10f5c980 (664 bytes, 264 insns) [15 switch table(s)] */
void f_10f5c980(void) {
  FTRACE(0x10f5c980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5c980 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5c981 mov ebp, esp */
  EBP = (ESP);
  /* 10f5c983 push edi */
  push32((uint32_t)(EDI));
  /* 10f5c984 push esi */
  push32((uint32_t)(ESI));
  /* 10f5c985 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5c988 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5c98b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5c98e mov eax, ecx */
  EAX = (ECX);
  /* 10f5c990 mov edx, ecx */
  EDX = (ECX);
  /* 10f5c992 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c994 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c996 jbe 0x10f5c9a0 */
  if ((C.cf||C.zf)) goto L_10f5c9a0;
  /* 10f5c998 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c99a jb 0x10f5cb18 */
  if (C.cf) goto L_10f5cb18;
L_10f5c9a0:;
  /* 10f5c9a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10f5c9a6 jne 0x10f5c9bc */
  if (!C.zf) goto L_10f5c9bc;
  /* 10f5c9a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f5c9ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5c9ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5c9b1 jb 0x10f5c9dc */
  if (C.cf) goto L_10f5c9dc;
  /* 10f5c9b3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f5c9b5 jmp dword ptr [edx*4 + 0x10f5cac8] */
  switch (EDX) {
    case 0: goto L_10f5cad8;
    case 1: goto L_10f5cae0;
    case 2: goto L_10f5caec;
    case 3: goto L_10f5cb00;
    default: x86_unimpl("switch@0x10f5c9b5 out of table"); return;
  }
L_10f5c9bc:;
  /* 10f5c9bc mov eax, edi */
  EAX = (EDI);
  /* 10f5c9be mov edx, 3 */
  EDX = (0x3u);
  /* 10f5c9c3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5c9c6 jb 0x10f5c9d4 */
  if (C.cf) goto L_10f5c9d4;
  /* 10f5c9c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5c9cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5c9cd jmp dword ptr [eax*4 + 0x10f5c9e0] */
  switch (EAX) {
    case 1: goto L_10f5c9f0;
    case 2: goto L_10f5ca1c;
    case 3: goto L_10f5ca40;
    default: x86_unimpl("switch@0x10f5c9cd out of table"); return;
  }
L_10f5c9d4:;
  /* 10f5c9d4 jmp dword ptr [ecx*4 + 0x10f5cad8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10f5cad8)))); return;
  /* 10f5c9db nop  */
  /* nop */
L_10f5c9dc:;
  /* 10f5c9dc jmp dword ptr [ecx*4 + 0x10f5ca5c] */
  switch (ECX) {
    case 0: goto L_10f5cabf;
    case 1: goto L_10f5caac;
    case 2: goto L_10f5caa4;
    case 3: goto L_10f5ca9c;
    case 4: goto L_10f5ca94;
    case 5: goto L_10f5ca8c;
    case 6: goto L_10f5ca84;
    case 7: goto L_10f5ca7c;
    default: x86_unimpl("switch@0x10f5c9dc out of table"); return;
  }
  /* 10f5c9e3 nop  */
  /* nop */
L_10f5c9f0:;
  /* 10f5c9f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5c9f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f5c9f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f5c9f6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f5c9f9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f5c9fc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f5c9ff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f5ca02 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f5ca05 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ca08 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ca0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ca0e jb 0x10f5c9dc */
  if (C.cf) goto L_10f5c9dc;
  /* 10f5ca10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f5ca12 jmp dword ptr [edx*4 + 0x10f5cac8] */
  switch (EDX) {
    case 0: goto L_10f5cad8;
    case 1: goto L_10f5cae0;
    case 2: goto L_10f5caec;
    case 3: goto L_10f5cb00;
    default: x86_unimpl("switch@0x10f5ca12 out of table"); return;
  }
  /* 10f5ca19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f5ca1c:;
  /* 10f5ca1c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5ca1e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f5ca20 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f5ca22 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f5ca25 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f5ca28 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f5ca2b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ca2e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ca31 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ca34 jb 0x10f5c9dc */
  if (C.cf) goto L_10f5c9dc;
  /* 10f5ca36 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f5ca38 jmp dword ptr [edx*4 + 0x10f5cac8] */
  switch (EDX) {
    case 0: goto L_10f5cad8;
    case 1: goto L_10f5cae0;
    case 2: goto L_10f5caec;
    case 3: goto L_10f5cb00;
    default: x86_unimpl("switch@0x10f5ca38 out of table"); return;
  }
  /* 10f5ca3f nop  */
  /* nop */
L_10f5ca40:;
  /* 10f5ca40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5ca42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f5ca44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f5ca46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f5ca47 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f5ca4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f5ca4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ca4e jb 0x10f5c9dc */
  if (C.cf) goto L_10f5c9dc;
  /* 10f5ca50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f5ca52 jmp dword ptr [edx*4 + 0x10f5cac8] */
  switch (EDX) {
    case 0: goto L_10f5cad8;
    case 1: goto L_10f5cae0;
    case 2: goto L_10f5caec;
    case 3: goto L_10f5cb00;
    default: x86_unimpl("switch@0x10f5ca52 out of table"); return;
  }
  /* 10f5ca59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f5ca7c:;
  /* 10f5ca7c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10f5ca80 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10f5ca84:;
  /* 10f5ca84 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10f5ca88 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10f5ca8c:;
  /* 10f5ca8c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10f5ca90 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10f5ca94:;
  /* 10f5ca94 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10f5ca98 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10f5ca9c:;
  /* 10f5ca9c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10f5caa0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10f5caa4:;
  /* 10f5caa4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10f5caa8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10f5caac:;
  /* 10f5caac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10f5cab0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10f5cab4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10f5cabb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5cabd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10f5cabf:;
  /* 10f5cabf jmp dword ptr [edx*4 + 0x10f5cac8] */
  switch (EDX) {
    case 0: goto L_10f5cad8;
    case 1: goto L_10f5cae0;
    case 2: goto L_10f5caec;
    case 3: goto L_10f5cb00;
    default: x86_unimpl("switch@0x10f5cabf out of table"); return;
  }
  /* 10f5cac6 mov edi, edi */
  EDI = (EDI);
L_10f5cad8:;
  /* 10f5cad8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5cadb pop esi */
  ESI = (pop32());
  /* 10f5cadc pop edi */
  EDI = (pop32());
  /* 10f5cadd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f5cade ret  */
  ESPCHK(0x10f5c980u, _esp0);
  ESP += 4; return;
  /* 10f5cadf nop  */
  /* nop */
L_10f5cae0:;
  /* 10f5cae0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f5cae2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f5cae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5cae7 pop esi */
  ESI = (pop32());
  /* 10f5cae8 pop edi */
  EDI = (pop32());
  /* 10f5cae9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f5caea ret  */
  ESPCHK(0x10f5c980u, _esp0);
  ESP += 4; return;
  /* 10f5caeb nop  */
  /* nop */
L_10f5caec:;
  /* 10f5caec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f5caee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f5caf0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f5caf3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f5caf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5caf9 pop esi */
  ESI = (pop32());
  /* 10f5cafa pop edi */
  EDI = (pop32());
  /* 10f5cafb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f5cafc ret  */
  ESPCHK(0x10f5c980u, _esp0);
  ESP += 4; return;
  /* 10f5cafd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f5cb00:;
  /* 10f5cb00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f5cb02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f5cb04 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f5cb07 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f5cb0a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f5cb0d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f5cb10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5cb13 pop esi */
  ESI = (pop32());
  /* 10f5cb14 pop edi */
  EDI = (pop32());
  /* 10f5cb15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f5cb16 ret  */
  ESPCHK(0x10f5c980u, _esp0);
  ESP += 4; return;
  /* 10f5cb17 nop  */
  /* nop */
L_10f5cb18:;
  /* 10f5cb18 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10f5cb1c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10f5cb20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10f5cb26 jne 0x10f5cb4c */
  if (!C.zf) goto L_10f5cb4c;
  /* 10f5cb28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f5cb2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5cb2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5cb31 jb 0x10f5cb40 */
  if (C.cf) goto L_10f5cb40;
  /* 10f5cb33 std  */
  C.df=1;
  /* 10f5cb34 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f5cb36 cld  */
  C.df=0;
  /* 10f5cb37 jmp dword ptr [edx*4 + 0x10f5cc60] */
  switch (EDX) {
    case 0: goto L_10f5cc70;
    case 1: goto L_10f5cc78;
    case 2: goto L_10f5cc88;
    case 3: goto L_10f5cc9c;
    default: x86_unimpl("switch@0x10f5cb37 out of table"); return;
  }
  /* 10f5cb3e mov edi, edi */
  EDI = (EDI);
L_10f5cb40:;
  /* 10f5cb40 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f5cb42 jmp dword ptr [ecx*4 + 0x10f5cc10] */
  switch (ECX) {
    case 0: goto L_10f5cc57;
    default: x86_unimpl("switch@0x10f5cb42 out of table"); return;
  }
  /* 10f5cb49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f5cb4c:;
  /* 10f5cb4c mov eax, edi */
  EAX = (EDI);
  /* 10f5cb4e mov edx, 3 */
  EDX = (0x3u);
  /* 10f5cb53 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5cb56 jb 0x10f5cb64 */
  if (C.cf) goto L_10f5cb64;
  /* 10f5cb58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5cb5b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5cb5d jmp dword ptr [eax*4 + 0x10f5cb68] */
  switch (EAX) {
    case 1: goto L_10f5cb78;
    case 2: goto L_10f5cb98;
    case 3: goto L_10f5cbc0;
    default: x86_unimpl("switch@0x10f5cb5d out of table"); return;
  }
L_10f5cb64:;
  /* 10f5cb64 jmp dword ptr [ecx*4 + 0x10f5cc60] */
  switch (ECX) {
    case 0: goto L_10f5cc70;
    case 1: goto L_10f5cc78;
    case 2: goto L_10f5cc88;
    case 3: goto L_10f5cc9c;
    default: x86_unimpl("switch@0x10f5cb64 out of table"); return;
  }
  /* 10f5cb6b nop  */
  /* nop */
L_10f5cb78:;
  /* 10f5cb78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f5cb7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5cb7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f5cb80 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10f5cb81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f5cb84 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10f5cb85 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5cb88 jb 0x10f5cb40 */
  if (C.cf) goto L_10f5cb40;
  /* 10f5cb8a std  */
  C.df=1;
  /* 10f5cb8b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f5cb8d cld  */
  C.df=0;
  /* 10f5cb8e jmp dword ptr [edx*4 + 0x10f5cc60] */
  switch (EDX) {
    case 0: goto L_10f5cc70;
    case 1: goto L_10f5cc78;
    case 2: goto L_10f5cc88;
    case 3: goto L_10f5cc9c;
    default: x86_unimpl("switch@0x10f5cb8e out of table"); return;
  }
  /* 10f5cb95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f5cb98:;
  /* 10f5cb98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f5cb9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5cb9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f5cba0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f5cba3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f5cba6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f5cba9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5cbac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5cbaf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5cbb2 jb 0x10f5cb40 */
  if (C.cf) goto L_10f5cb40;
  /* 10f5cbb4 std  */
  C.df=1;
  /* 10f5cbb5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f5cbb7 cld  */
  C.df=0;
  /* 10f5cbb8 jmp dword ptr [edx*4 + 0x10f5cc60] */
  switch (EDX) {
    case 0: goto L_10f5cc70;
    case 1: goto L_10f5cc78;
    case 2: goto L_10f5cc88;
    case 3: goto L_10f5cc9c;
    default: x86_unimpl("switch@0x10f5cbb8 out of table"); return;
  }
  /* 10f5cbbf nop  */
  /* nop */
L_10f5cbc0:;
  /* 10f5cbc0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f5cbc3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5cbc5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f5cbc8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f5cbcb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f5cbce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f5cbd1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f5cbd4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f5cbd7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5cbda sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5cbdd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5cbe0 jb 0x10f5cb40 */
  if (C.cf) goto L_10f5cb40;
  /* 10f5cbe6 std  */
  C.df=1;
  /* 10f5cbe7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f5cbe9 cld  */
  C.df=0;
  /* 10f5cbea jmp dword ptr [edx*4 + 0x10f5cc60] */
  switch (EDX) {
    case 0: goto L_10f5cc70;
    case 1: goto L_10f5cc78;
    case 2: goto L_10f5cc88;
    case 3: goto L_10f5cc9c;
    default: x86_unimpl("switch@0x10f5cbea out of table"); return;
  }
  /* 10f5cbf1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10f5cbf4 adc al, 0xcc */
  { uint32_t _a=(AL),_b=(0xccu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f5cbf6 cmc  */
  x86_unimpl("cmc @ 0x10f5cbf6");
  /* 10f5cbf7 adc byte ptr [esp + ecx*8], bl */
  { uint32_t _a=(r8((uint32_t)(ESP + ECX*8))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + ECX*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f5cbfa cmc  */
  x86_unimpl("cmc @ 0x10f5cbfa");
  /* 10f5cbfb adc byte ptr [esp + ecx*8], ah */
  { uint32_t _a=(r8((uint32_t)(ESP + ECX*8))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(ESP + ECX*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f5cbfe cmc  */
  x86_unimpl("cmc @ 0x10f5cbfe");
  /* 10f5cbff adc byte ptr [esp + ecx*8], ch */
  { uint32_t _a=(r8((uint32_t)(ESP + ECX*8))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESP + ECX*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f5cc02 cmc  */
  x86_unimpl("cmc @ 0x10f5cc02");
  /* 10f5cc03 adc byte ptr [esp + ecx*8], dh */
  { uint32_t _a=(r8((uint32_t)(ESP + ECX*8))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESP + ECX*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f5cc06 cmc  */
  x86_unimpl("cmc @ 0x10f5cc06");
  /* 10f5cc07 adc byte ptr [esp + ecx*8], bh */
  { uint32_t _a=(r8((uint32_t)(ESP + ECX*8))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESP + ECX*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f5cc0a cmc  */
  x86_unimpl("cmc @ 0x10f5cc0a");
  /* 10f5cc0b adc byte ptr [esp + ecx*8 - 0xb], al */
  { uint32_t _a=(r8((uint32_t)(ESP + ECX*8 + -0xb))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + ECX*8 + -0xb), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f5cc14 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10f5cc18 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10f5cc1c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10f5cc20 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10f5cc24 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10f5cc28 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10f5cc2c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10f5cc30 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10f5cc34 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10f5cc38 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10f5cc3c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10f5cc40 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10f5cc44 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10f5cc48 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10f5cc4c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10f5cc53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5cc55 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10f5cc57:;
  /* 10f5cc57 jmp dword ptr [edx*4 + 0x10f5cc60] */
  switch (EDX) {
    case 0: goto L_10f5cc70;
    case 1: goto L_10f5cc78;
    case 2: goto L_10f5cc88;
    case 3: goto L_10f5cc9c;
    default: x86_unimpl("switch@0x10f5cc57 out of table"); return;
  }
  /* 10f5cc5e mov edi, edi */
  EDI = (EDI);
L_10f5cc70:;
  /* 10f5cc70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5cc73 pop esi */
  ESI = (pop32());
  /* 10f5cc74 pop edi */
  EDI = (pop32());
  /* 10f5cc75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f5cc76 ret  */
  ESPCHK(0x10f5c980u, _esp0);
  ESP += 4; return;
  /* 10f5cc77 nop  */
  /* nop */
L_10f5cc78:;
  /* 10f5cc78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f5cc7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f5cc7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5cc81 pop esi */
  ESI = (pop32());
  /* 10f5cc82 pop edi */
  EDI = (pop32());
  /* 10f5cc83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f5cc84 ret  */
  ESPCHK(0x10f5c980u, _esp0);
  ESP += 4; return;
  /* 10f5cc85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f5cc88:;
  /* 10f5cc88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f5cc8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f5cc8e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f5cc91 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f5cc94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5cc97 pop esi */
  ESI = (pop32());
  /* 10f5cc98 pop edi */
  EDI = (pop32());
  /* 10f5cc99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f5cc9a ret  */
  ESPCHK(0x10f5c980u, _esp0);
  ESP += 4; return;
  /* 10f5cc9b nop  */
  /* nop */
L_10f5cc9c:;
  /* 10f5cc9c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f5cc9f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f5cca2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f5cca5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f5cca8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f5ccab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f5ccae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ccb1 pop esi */
  ESI = (pop32());
  /* 10f5ccb2 pop edi */
  EDI = (pop32());
  /* 10f5ccb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f5ccb4 ret  */
  ESPCHK(0x10f5c980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccc0 @ 0x10f5ccc0 (421 bytes, 148 insns) */
void f_10f5ccc0(void) {
  FTRACE(0x10f5ccc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5ccc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5ccc1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5ccc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f5ccc5 push 0x10f7c0e8 */
  push32((uint32_t)(0x10f7c0e8u));
  /* 10f5ccca push 0x10f5db98 */
  push32((uint32_t)(0x10f5db98u));
  /* 10f5cccf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f5ccd5 push eax */
  push32((uint32_t)(EAX));
  /* 10f5ccd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f5ccdd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5cce0 push ebx */
  push32((uint32_t)(EBX));
  /* 10f5cce1 push esi */
  push32((uint32_t)(ESI));
  /* 10f5cce2 push edi */
  push32((uint32_t)(EDI));
  /* 10f5cce3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f5cce6 cmp dword ptr [0x10f807b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f807b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5cced jne 0x10f5cd3e */
  if (!C.zf) goto L_10f5cd3e;
  /* 10f5ccef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10f5ccf2 push eax */
  push32((uint32_t)(EAX));
  /* 10f5ccf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5ccf5 push 0x10f7c0e4 */
  push32((uint32_t)(0x10f7c0e4u));
  /* 10f5ccfa push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5ccfc call dword ptr [0x10f832f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832f4))), 0x10f5cd02u);
  /* 10f5cd02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5cd04 je 0x10f5cd12 */
  if (C.zf) goto L_10f5cd12;
  /* 10f5cd06 mov dword ptr [0x10f807b4], 1 */
  w32((uint32_t)(0x10f807b4), (0x1u));
  /* 10f5cd10 jmp 0x10f5cd3e */
  goto L_10f5cd3e;
L_10f5cd12:;
  /* 10f5cd12 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10f5cd15 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5cd16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5cd18 push 0x10f7c0e0 */
  push32((uint32_t)(0x10f7c0e0u));
  /* 10f5cd1d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5cd1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5cd21 call dword ptr [0x10f83304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83304))), 0x10f5cd27u);
  /* 10f5cd27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5cd29 je 0x10f5cd37 */
  if (C.zf) goto L_10f5cd37;
  /* 10f5cd2b mov dword ptr [0x10f807b4], 2 */
  w32((uint32_t)(0x10f807b4), (0x2u));
  /* 10f5cd35 jmp 0x10f5cd3e */
  goto L_10f5cd3e;
L_10f5cd37:;
  /* 10f5cd37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5cd39 jmp 0x10f5ce68 */
  goto L_10f5ce68;
L_10f5cd3e:;
  /* 10f5cd3e cmp dword ptr [0x10f807b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10f807b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5cd45 jne 0x10f5cd75 */
  if (!C.zf) goto L_10f5cd75;
  /* 10f5cd47 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5cd4b jne 0x10f5cd56 */
  if (!C.zf) goto L_10f5cd56;
  /* 10f5cd4d mov edx, dword ptr [0x10f807c0] */
  EDX = (r32((uint32_t)(0x10f807c0)));
  /* 10f5cd53 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10f5cd56:;
  /* 10f5cd56 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f5cd59 push eax */
  push32((uint32_t)(EAX));
  /* 10f5cd5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5cd5d push ecx */
  push32((uint32_t)(ECX));
  /* 10f5cd5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5cd61 push edx */
  push32((uint32_t)(EDX));
  /* 10f5cd62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5cd65 push eax */
  push32((uint32_t)(EAX));
  /* 10f5cd66 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f5cd69 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5cd6a call dword ptr [0x10f83304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83304))), 0x10f5cd70u);
  /* 10f5cd70 jmp 0x10f5ce68 */
  goto L_10f5ce68;
L_10f5cd75:;
  /* 10f5cd75 cmp dword ptr [0x10f807b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f807b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5cd7c jne 0x10f5ce66 */
  if (!C.zf) goto L_10f5ce66;
  /* 10f5cd82 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5cd86 jne 0x10f5cd91 */
  if (!C.zf) goto L_10f5cd91;
  /* 10f5cd88 mov edx, dword ptr [0x10f807d0] */
  EDX = (r32((uint32_t)(0x10f807d0)));
  /* 10f5cd8e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10f5cd91:;
  /* 10f5cd91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5cd93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5cd95 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5cd98 push eax */
  push32((uint32_t)(EAX));
  /* 10f5cd99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5cd9c push ecx */
  push32((uint32_t)(ECX));
  /* 10f5cd9d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10f5cda0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f5cda2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5cda4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5cda7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5cdaa push edx */
  push32((uint32_t)(EDX));
  /* 10f5cdab mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f5cdae push eax */
  push32((uint32_t)(EAX));
  /* 10f5cdaf call dword ptr [0x10f832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832fc))), 0x10f5cdb5u);
  /* 10f5cdb5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f5cdb8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5cdbc jne 0x10f5cdc5 */
  if (!C.zf) goto L_10f5cdc5;
  /* 10f5cdbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5cdc0 jmp 0x10f5ce68 */
  goto L_10f5ce68;
L_10f5cdc5:;
  /* 10f5cdc5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f5cdcc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5cdcf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10f5cdd1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5cdd4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10f5cdd6 call 0x10f57c30 */
  push32(0x10f5cddbu); f_10f57c30();
  /* 10f5cddb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10f5cdde mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f5cde1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f5cde4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10f5cde7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5cdea shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10f5cdec push edx */
  push32((uint32_t)(EDX));
  /* 10f5cded push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5cdef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5cdf2 push eax */
  push32((uint32_t)(EAX));
  /* 10f5cdf3 call 0x10f58800 */
  push32(0x10f5cdf8u); f_10f58800();
  /* 10f5cdf8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5cdfb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10f5ce02 jmp 0x10f5ce1b */
  goto L_10f5ce1b;
  /* 10f5ce04 mov eax, 1 */
  EAX = (0x1u);
  /* 10f5ce09 ret  */
  ESPCHK(0x10f5ccc0u, _esp0);
  ESP += 4; return;
  /* 10f5ce0a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5ce0d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10f5ce14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10f5ce1b:;
  /* 10f5ce1b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ce1f jne 0x10f5ce25 */
  if (!C.zf) goto L_10f5ce25;
  /* 10f5ce21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ce23 jmp 0x10f5ce68 */
  goto L_10f5ce68;
L_10f5ce25:;
  /* 10f5ce25 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5ce28 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5ce29 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5ce2c push edx */
  push32((uint32_t)(EDX));
  /* 10f5ce2d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5ce30 push eax */
  push32((uint32_t)(EAX));
  /* 10f5ce31 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5ce34 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5ce35 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5ce37 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f5ce3a push edx */
  push32((uint32_t)(EDX));
  /* 10f5ce3b call dword ptr [0x10f832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832fc))), 0x10f5ce41u);
  /* 10f5ce41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f5ce44 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ce48 jne 0x10f5ce4e */
  if (!C.zf) goto L_10f5ce4e;
  /* 10f5ce4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ce4c jmp 0x10f5ce68 */
  goto L_10f5ce68;
L_10f5ce4e:;
  /* 10f5ce4e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f5ce51 push eax */
  push32((uint32_t)(EAX));
  /* 10f5ce52 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f5ce55 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5ce56 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5ce59 push edx */
  push32((uint32_t)(EDX));
  /* 10f5ce5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ce5d push eax */
  push32((uint32_t)(EAX));
  /* 10f5ce5e call dword ptr [0x10f832f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832f4))), 0x10f5ce64u);
  /* 10f5ce64 jmp 0x10f5ce68 */
  goto L_10f5ce68;
L_10f5ce66:;
  /* 10f5ce66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f5ce68:;
  /* 10f5ce68 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10f5ce6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5ce6e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f5ce75 pop edi */
  EDI = (pop32());
  /* 10f5ce76 pop esi */
  ESI = (pop32());
  /* 10f5ce77 pop ebx */
  EBX = (pop32());
  /* 10f5ce78 mov esp, ebp */
  ESP = (EBP);
  /* 10f5ce7a pop ebp */
  EBP = (pop32());
  /* 10f5ce7b ret  */
  ESPCHK(0x10f5ccc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce80 @ 0x10f5ce80 (727 bytes, 263 insns) */
void f_10f5ce80(void) {
  FTRACE(0x10f5ce80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5ce80 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5ce81 mov ebp, esp */
  EBP = (ESP);
  /* 10f5ce83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f5ce85 push 0x10f7c0f8 */
  push32((uint32_t)(0x10f7c0f8u));
  /* 10f5ce8a push 0x10f5db98 */
  push32((uint32_t)(0x10f5db98u));
  /* 10f5ce8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f5ce95 push eax */
  push32((uint32_t)(EAX));
  /* 10f5ce96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f5ce9d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5cea0 push ebx */
  push32((uint32_t)(EBX));
  /* 10f5cea1 push esi */
  push32((uint32_t)(ESI));
  /* 10f5cea2 push edi */
  push32((uint32_t)(EDI));
  /* 10f5cea3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f5cea6 cmp dword ptr [0x10f807d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f807d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5cead jne 0x10f5cf06 */
  if (!C.zf) goto L_10f5cf06;
  /* 10f5ceaf push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5ceb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5ceb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5ceb5 push 0x10f7c0e4 */
  push32((uint32_t)(0x10f7c0e4u));
  /* 10f5ceba push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f5cebf push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5cec1 call dword ptr [0x10f832f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832f8))), 0x10f5cec7u);
  /* 10f5cec7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5cec9 je 0x10f5ced7 */
  if (C.zf) goto L_10f5ced7;
  /* 10f5cecb mov dword ptr [0x10f807d8], 1 */
  w32((uint32_t)(0x10f807d8), (0x1u));
  /* 10f5ced5 jmp 0x10f5cf06 */
  goto L_10f5cf06;
L_10f5ced7:;
  /* 10f5ced7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5ced9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5cedb push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5cedd push 0x10f7c0e0 */
  push32((uint32_t)(0x10f7c0e0u));
  /* 10f5cee2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f5cee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5cee9 call dword ptr [0x10f832f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832f0))), 0x10f5ceefu);
  /* 10f5ceef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5cef1 je 0x10f5ceff */
  if (C.zf) goto L_10f5ceff;
  /* 10f5cef3 mov dword ptr [0x10f807d8], 2 */
  w32((uint32_t)(0x10f807d8), (0x2u));
  /* 10f5cefd jmp 0x10f5cf06 */
  goto L_10f5cf06;
L_10f5ceff:;
  /* 10f5ceff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5cf01 jmp 0x10f5d171 */
  goto L_10f5d171;
L_10f5cf06:;
  /* 10f5cf06 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5cf0a jle 0x10f5cf1f */
  if ((C.zf||C.sf!=C.of)) goto L_10f5cf1f;
  /* 10f5cf0c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f5cf0f push eax */
  push32((uint32_t)(EAX));
  /* 10f5cf10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5cf13 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5cf14 call 0x10f5d190 */
  push32(0x10f5cf19u); f_10f5d190();
  /* 10f5cf19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5cf1c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10f5cf1f:;
  /* 10f5cf1f cmp dword ptr [0x10f807d8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10f807d8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5cf26 jne 0x10f5cf4b */
  if (!C.zf) goto L_10f5cf4b;
  /* 10f5cf28 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f5cf2b push edx */
  push32((uint32_t)(EDX));
  /* 10f5cf2c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f5cf2f push eax */
  push32((uint32_t)(EAX));
  /* 10f5cf30 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f5cf33 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5cf34 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5cf37 push edx */
  push32((uint32_t)(EDX));
  /* 10f5cf38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5cf3b push eax */
  push32((uint32_t)(EAX));
  /* 10f5cf3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5cf3f push ecx */
  push32((uint32_t)(ECX));
  /* 10f5cf40 call dword ptr [0x10f832f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832f0))), 0x10f5cf46u);
  /* 10f5cf46 jmp 0x10f5d171 */
  goto L_10f5d171;
L_10f5cf4b:;
  /* 10f5cf4b cmp dword ptr [0x10f807d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f807d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5cf52 jne 0x10f5d16f */
  if (!C.zf) goto L_10f5d16f;
  /* 10f5cf58 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5cf5c jne 0x10f5cf67 */
  if (!C.zf) goto L_10f5cf67;
  /* 10f5cf5e mov edx, dword ptr [0x10f807d0] */
  EDX = (r32((uint32_t)(0x10f807d0)));
  /* 10f5cf64 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10f5cf67:;
  /* 10f5cf67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5cf69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5cf6b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f5cf6e push eax */
  push32((uint32_t)(EAX));
  /* 10f5cf6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5cf72 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5cf73 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10f5cf76 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f5cf78 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5cf7a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5cf7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5cf80 push edx */
  push32((uint32_t)(EDX));
  /* 10f5cf81 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10f5cf84 push eax */
  push32((uint32_t)(EAX));
  /* 10f5cf85 call dword ptr [0x10f832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832fc))), 0x10f5cf8bu);
  /* 10f5cf8b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f5cf8e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5cf92 jne 0x10f5cf9b */
  if (!C.zf) goto L_10f5cf9b;
  /* 10f5cf94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5cf96 jmp 0x10f5d171 */
  goto L_10f5d171;
L_10f5cf9b:;
  /* 10f5cf9b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f5cfa2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f5cfa5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10f5cfa7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5cfaa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10f5cfac call 0x10f57c30 */
  push32(0x10f5cfb1u); f_10f57c30();
  /* 10f5cfb1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10f5cfb4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f5cfb7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f5cfba mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10f5cfbd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10f5cfc4 jmp 0x10f5cfdd */
  goto L_10f5cfdd;
  /* 10f5cfc6 mov eax, 1 */
  EAX = (0x1u);
  /* 10f5cfcb ret  */
  ESPCHK(0x10f5ce80u, _esp0);
  ESP += 4; return;
  /* 10f5cfcc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5cfcf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10f5cfd6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10f5cfdd:;
  /* 10f5cfdd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5cfe1 jne 0x10f5cfea */
  if (!C.zf) goto L_10f5cfea;
  /* 10f5cfe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5cfe5 jmp 0x10f5d171 */
  goto L_10f5d171;
L_10f5cfea:;
  /* 10f5cfea mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f5cfed push edx */
  push32((uint32_t)(EDX));
  /* 10f5cfee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5cff1 push eax */
  push32((uint32_t)(EAX));
  /* 10f5cff2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f5cff5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5cff6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5cff9 push edx */
  push32((uint32_t)(EDX));
  /* 10f5cffa push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5cffc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10f5cfff push eax */
  push32((uint32_t)(EAX));
  /* 10f5d000 call dword ptr [0x10f832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832fc))), 0x10f5d006u);
  /* 10f5d006 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5d008 jne 0x10f5d011 */
  if (!C.zf) goto L_10f5d011;
  /* 10f5d00a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d00c jmp 0x10f5d171 */
  goto L_10f5d171;
L_10f5d011:;
  /* 10f5d011 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5d013 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5d015 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f5d018 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d019 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5d01c push edx */
  push32((uint32_t)(EDX));
  /* 10f5d01d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5d020 push eax */
  push32((uint32_t)(EAX));
  /* 10f5d021 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d024 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d025 call dword ptr [0x10f832f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832f8))), 0x10f5d02bu);
  /* 10f5d02b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f5d02e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d032 jne 0x10f5d03b */
  if (!C.zf) goto L_10f5d03b;
  /* 10f5d034 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d036 jmp 0x10f5d171 */
  goto L_10f5d171;
L_10f5d03b:;
  /* 10f5d03b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5d03e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5d044 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5d046 je 0x10f5d08b */
  if (C.zf) goto L_10f5d08b;
  /* 10f5d048 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d04c je 0x10f5d086 */
  if (C.zf) goto L_10f5d086;
  /* 10f5d04e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f5d051 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d054 jle 0x10f5d05d */
  if ((C.zf||C.sf!=C.of)) goto L_10f5d05d;
  /* 10f5d056 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d058 jmp 0x10f5d171 */
  goto L_10f5d171;
L_10f5d05d:;
  /* 10f5d05d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f5d060 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d061 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f5d064 push edx */
  push32((uint32_t)(EDX));
  /* 10f5d065 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f5d068 push eax */
  push32((uint32_t)(EAX));
  /* 10f5d069 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5d06c push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d06d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5d070 push edx */
  push32((uint32_t)(EDX));
  /* 10f5d071 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d074 push eax */
  push32((uint32_t)(EAX));
  /* 10f5d075 call dword ptr [0x10f832f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832f8))), 0x10f5d07bu);
  /* 10f5d07b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5d07d jne 0x10f5d086 */
  if (!C.zf) goto L_10f5d086;
  /* 10f5d07f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d081 jmp 0x10f5d171 */
  goto L_10f5d171;
L_10f5d086:;
  /* 10f5d086 jmp 0x10f5d16a */
  goto L_10f5d16a;
L_10f5d08b:;
  /* 10f5d08b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f5d08e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10f5d091 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f5d098 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f5d09b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10f5d09d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d0a0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10f5d0a2 call 0x10f57c30 */
  push32(0x10f5d0a7u); f_10f57c30();
  /* 10f5d0a7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10f5d0aa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f5d0ad mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f5d0b0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10f5d0b3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10f5d0ba jmp 0x10f5d0d3 */
  goto L_10f5d0d3;
  /* 10f5d0bc mov eax, 1 */
  EAX = (0x1u);
  /* 10f5d0c1 ret  */
  ESPCHK(0x10f5ce80u, _esp0);
  ESP += 4; return;
  /* 10f5d0c2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5d0c5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10f5d0cc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10f5d0d3:;
  /* 10f5d0d3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d0d7 jne 0x10f5d0e0 */
  if (!C.zf) goto L_10f5d0e0;
  /* 10f5d0d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d0db jmp 0x10f5d171 */
  goto L_10f5d171;
L_10f5d0e0:;
  /* 10f5d0e0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f5d0e3 push eax */
  push32((uint32_t)(EAX));
  /* 10f5d0e4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5d0e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d0e8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f5d0eb push edx */
  push32((uint32_t)(EDX));
  /* 10f5d0ec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f5d0ef push eax */
  push32((uint32_t)(EAX));
  /* 10f5d0f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5d0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d0f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d0f7 push edx */
  push32((uint32_t)(EDX));
  /* 10f5d0f8 call dword ptr [0x10f832f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832f8))), 0x10f5d0feu);
  /* 10f5d0fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5d100 jne 0x10f5d106 */
  if (!C.zf) goto L_10f5d106;
  /* 10f5d102 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d104 jmp 0x10f5d171 */
  goto L_10f5d171;
L_10f5d106:;
  /* 10f5d106 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d10a jne 0x10f5d13a */
  if (!C.zf) goto L_10f5d13a;
  /* 10f5d10c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5d10e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5d110 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5d112 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5d114 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f5d117 push eax */
  push32((uint32_t)(EAX));
  /* 10f5d118 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5d11b push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d11c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10f5d121 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10f5d124 push edx */
  push32((uint32_t)(EDX));
  /* 10f5d125 call dword ptr [0x10f833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833b8))), 0x10f5d12bu);
  /* 10f5d12b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f5d12e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d132 jne 0x10f5d138 */
  if (!C.zf) goto L_10f5d138;
  /* 10f5d134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d136 jmp 0x10f5d171 */
  goto L_10f5d171;
L_10f5d138:;
  /* 10f5d138 jmp 0x10f5d16a */
  goto L_10f5d16a;
L_10f5d13a:;
  /* 10f5d13a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5d13c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5d13e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f5d141 push eax */
  push32((uint32_t)(EAX));
  /* 10f5d142 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f5d145 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d146 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f5d149 push edx */
  push32((uint32_t)(EDX));
  /* 10f5d14a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f5d14d push eax */
  push32((uint32_t)(EAX));
  /* 10f5d14e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10f5d153 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10f5d156 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d157 call dword ptr [0x10f833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833b8))), 0x10f5d15du);
  /* 10f5d15d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f5d160 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d164 jne 0x10f5d16a */
  if (!C.zf) goto L_10f5d16a;
  /* 10f5d166 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d168 jmp 0x10f5d171 */
  goto L_10f5d171;
L_10f5d16a:;
  /* 10f5d16a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f5d16d jmp 0x10f5d171 */
  goto L_10f5d171;
L_10f5d16f:;
  /* 10f5d16f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f5d171:;
  /* 10f5d171 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10f5d174 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5d177 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f5d17e pop edi */
  EDI = (pop32());
  /* 10f5d17f pop esi */
  ESI = (pop32());
  /* 10f5d180 pop ebx */
  EBX = (pop32());
  /* 10f5d181 mov esp, ebp */
  ESP = (EBP);
  /* 10f5d183 pop ebp */
  EBP = (pop32());
  /* 10f5d184 ret  */
  ESPCHK(0x10f5ce80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d190 @ 0x10f5d190 (80 bytes, 32 insns) */
void f_10f5d190(void) {
  FTRACE(0x10f5d190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5d190 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5d191 mov ebp, esp */
  EBP = (ESP);
  /* 10f5d193 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5d196 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5d199 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f5d19c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d19f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f5d1a2:;
  /* 10f5d1a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5d1a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5d1a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5d1ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f5d1ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5d1b0 je 0x10f5d1c7 */
  if (C.zf) goto L_10f5d1c7;
  /* 10f5d1b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d1b5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f5d1b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5d1ba je 0x10f5d1c7 */
  if (C.zf) goto L_10f5d1c7;
  /* 10f5d1bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d1bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d1c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5d1c5 jmp 0x10f5d1a2 */
  goto L_10f5d1a2;
L_10f5d1c7:;
  /* 10f5d1c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d1ca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f5d1cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5d1cf jne 0x10f5d1d9 */
  if (!C.zf) goto L_10f5d1d9;
  /* 10f5d1d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d1d4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5d1d7 jmp 0x10f5d1dc */
  goto L_10f5d1dc;
L_10f5d1d9:;
  /* 10f5d1d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10f5d1dc:;
  /* 10f5d1dc mov esp, ebp */
  ESP = (EBP);
  /* 10f5d1de pop ebp */
  EBP = (pop32());
  /* 10f5d1df ret  */
  ESPCHK(0x10f5d190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1e0 @ 0x10f5d1e0 (130 bytes, 43 insns) */
void f_10f5d1e0(void) {
  FTRACE(0x10f5d1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5d1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5d1e1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5d1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d1e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d1e7 cmp eax, dword ptr [0x10f820dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f820dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d1ed jae 0x10f5d211 */
  if (!C.cf) goto L_10f5d211;
  /* 10f5d1ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d1f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f5d1f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d1f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5d1fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5d1fe mov eax, dword ptr [ecx*4 + 0x10f81fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f81fa0)));
  /* 10f5d205 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10f5d20a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5d20d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5d20f jne 0x10f5d22c */
  if (!C.zf) goto L_10f5d22c;
L_10f5d211:;
  /* 10f5d211 call 0x10f5c960 */
  push32(0x10f5d216u); f_10f5c960();
  /* 10f5d216 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f5d21c call 0x10f5c970 */
  push32(0x10f5d221u); f_10f5c970();
  /* 10f5d221 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f5d227 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d22a jmp 0x10f5d25e */
  goto L_10f5d25e;
L_10f5d22c:;
  /* 10f5d22c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d22f push edx */
  push32((uint32_t)(EDX));
  /* 10f5d230 call 0x10f5e180 */
  push32(0x10f5d235u); f_10f5e180();
  /* 10f5d235 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d238 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5d23b push eax */
  push32((uint32_t)(EAX));
  /* 10f5d23c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5d23f push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d240 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d243 push edx */
  push32((uint32_t)(EDX));
  /* 10f5d244 call 0x10f5d270 */
  push32(0x10f5d249u); f_10f5d270();
  /* 10f5d249 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d24c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5d24f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d252 push eax */
  push32((uint32_t)(EAX));
  /* 10f5d253 call 0x10f5e210 */
  push32(0x10f5d258u); f_10f5e210();
  /* 10f5d258 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d25b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f5d25e:;
  /* 10f5d25e mov esp, ebp */
  ESP = (EBP);
  /* 10f5d260 pop ebp */
  EBP = (pop32());
  /* 10f5d261 ret  */
  ESPCHK(0x10f5d1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d270 @ 0x10f5d270 (178 bytes, 56 insns) */
void f_10f5d270(void) {
  FTRACE(0x10f5d270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5d270 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5d271 mov ebp, esp */
  EBP = (ESP);
  /* 10f5d273 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5d276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d279 push eax */
  push32((uint32_t)(EAX));
  /* 10f5d27a call 0x10f5e000 */
  push32(0x10f5d27fu); f_10f5e000();
  /* 10f5d27f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d282 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f5d285 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d289 jne 0x10f5d29e */
  if (!C.zf) goto L_10f5d29e;
  /* 10f5d28b call 0x10f5c960 */
  push32(0x10f5d290u); f_10f5c960();
  /* 10f5d290 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f5d296 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d299 jmp 0x10f5d31e */
  goto L_10f5d31e;
L_10f5d29e:;
  /* 10f5d29e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5d2a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d2a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5d2a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5d2a7 push edx */
  push32((uint32_t)(EDX));
  /* 10f5d2a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5d2ab push eax */
  push32((uint32_t)(EAX));
  /* 10f5d2ac call dword ptr [0x10f832e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832e8))), 0x10f5d2b2u);
  /* 10f5d2b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f5d2b5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d2b9 jne 0x10f5d2c6 */
  if (!C.zf) goto L_10f5d2c6;
  /* 10f5d2bb call dword ptr [0x10f83390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83390))), 0x10f5d2c1u);
  /* 10f5d2c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5d2c4 jmp 0x10f5d2cd */
  goto L_10f5d2cd;
L_10f5d2c6:;
  /* 10f5d2c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f5d2cd:;
  /* 10f5d2cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d2d1 je 0x10f5d2e4 */
  if (C.zf) goto L_10f5d2e4;
  /* 10f5d2d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d2d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d2d7 call 0x10f5c8c0 */
  push32(0x10f5d2dcu); f_10f5c8c0();
  /* 10f5d2dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d2df or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d2e2 jmp 0x10f5d31e */
  goto L_10f5d31e;
L_10f5d2e4:;
  /* 10f5d2e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d2e7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10f5d2ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d2ed and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d2f0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5d2f3 mov ecx, dword ptr [edx*4 + 0x10f81fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10f81fa0)));
  /* 10f5d2fa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10f5d2fe and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10f5d301 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d304 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f5d307 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d30a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5d30d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5d310 mov eax, dword ptr [eax*4 + 0x10f81fa0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10f81fa0)));
  /* 10f5d317 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10f5d31b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10f5d31e:;
  /* 10f5d31e mov esp, ebp */
  ESP = (EBP);
  /* 10f5d320 pop ebp */
  EBP = (pop32());
  /* 10f5d321 ret  */
  ESPCHK(0x10f5d270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d330 @ 0x10f5d330 (130 bytes, 43 insns) */
void f_10f5d330(void) {
  FTRACE(0x10f5d330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5d330 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5d331 mov ebp, esp */
  EBP = (ESP);
  /* 10f5d333 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d337 cmp eax, dword ptr [0x10f820dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f820dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d33d jae 0x10f5d361 */
  if (!C.cf) goto L_10f5d361;
  /* 10f5d33f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d342 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f5d345 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d348 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5d34b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5d34e mov eax, dword ptr [ecx*4 + 0x10f81fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f81fa0)));
  /* 10f5d355 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10f5d35a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5d35d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5d35f jne 0x10f5d37c */
  if (!C.zf) goto L_10f5d37c;
L_10f5d361:;
  /* 10f5d361 call 0x10f5c960 */
  push32(0x10f5d366u); f_10f5c960();
  /* 10f5d366 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f5d36c call 0x10f5c970 */
  push32(0x10f5d371u); f_10f5c970();
  /* 10f5d371 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f5d377 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d37a jmp 0x10f5d3ae */
  goto L_10f5d3ae;
L_10f5d37c:;
  /* 10f5d37c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d37f push edx */
  push32((uint32_t)(EDX));
  /* 10f5d380 call 0x10f5e180 */
  push32(0x10f5d385u); f_10f5e180();
  /* 10f5d385 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d388 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5d38b push eax */
  push32((uint32_t)(EAX));
  /* 10f5d38c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5d38f push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d390 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d393 push edx */
  push32((uint32_t)(EDX));
  /* 10f5d394 call 0x10f5d3c0 */
  push32(0x10f5d399u); f_10f5d3c0();
  /* 10f5d399 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d39c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5d39f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d3a2 push eax */
  push32((uint32_t)(EAX));
  /* 10f5d3a3 call 0x10f5e210 */
  push32(0x10f5d3a8u); f_10f5e210();
  /* 10f5d3a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d3ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f5d3ae:;
  /* 10f5d3ae mov esp, ebp */
  ESP = (EBP);
  /* 10f5d3b0 pop ebp */
  EBP = (pop32());
  /* 10f5d3b1 ret  */
  ESPCHK(0x10f5d330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3c0 @ 0x10f5d3c0 (627 bytes, 182 insns) */
void f_10f5d3c0(void) {
  FTRACE(0x10f5d3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5d3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5d3c1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5d3c3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5d3c9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10f5d3d0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5d3d3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10f5d3d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d3dd jne 0x10f5d3e6 */
  if (!C.zf) goto L_10f5d3e6;
  /* 10f5d3df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d3e1 jmp 0x10f5d62f */
  goto L_10f5d62f;
L_10f5d3e6:;
  /* 10f5d3e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d3e9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f5d3ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d3ef and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5d3f2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5d3f5 mov eax, dword ptr [ecx*4 + 0x10f81fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f81fa0)));
  /* 10f5d3fc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10f5d401 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5d404 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5d406 je 0x10f5d418 */
  if (C.zf) goto L_10f5d418;
  /* 10f5d408 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5d40a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5d40c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d40f push edx */
  push32((uint32_t)(EDX));
  /* 10f5d410 call 0x10f5d270 */
  push32(0x10f5d415u); f_10f5d270();
  /* 10f5d415 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5d418:;
  /* 10f5d418 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d41b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f5d41e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d421 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5d424 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5d427 mov edx, dword ptr [eax*4 + 0x10f81fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f81fa0)));
  /* 10f5d42e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10f5d433 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d438 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5d43a je 0x10f5d54c */
  if (C.zf) goto L_10f5d54c;
  /* 10f5d440 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5d443 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f5d446 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10f5d44d:;
  /* 10f5d44d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d450 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5d453 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d456 jae 0x10f5d54a */
  if (!C.cf) goto L_10f5d54a;
  /* 10f5d45c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10f5d462 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f5d465:;
  /* 10f5d465 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5d468 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10f5d46e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5d470 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d476 jge 0x10f5d4d7 */
  if ((C.sf==C.of)) goto L_10f5d4d7;
  /* 10f5d478 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d47b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5d47e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d481 jae 0x10f5d4d7 */
  if (!C.cf) goto L_10f5d4d7;
  /* 10f5d483 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d486 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f5d488 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10f5d48e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d491 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d494 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5d497 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10f5d49e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d4a1 jne 0x10f5d4c1 */
  if (!C.zf) goto L_10f5d4c1;
  /* 10f5d4a3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10f5d4a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d4ac mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10f5d4b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5d4b5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10f5d4b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5d4bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d4be mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10f5d4c1:;
  /* 10f5d4c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5d4c4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10f5d4ca mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10f5d4cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5d4cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d4d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f5d4d5 jmp 0x10f5d465 */
  goto L_10f5d465;
L_10f5d4d7:;
  /* 10f5d4d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5d4d9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10f5d4df push edx */
  push32((uint32_t)(EDX));
  /* 10f5d4e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5d4e3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10f5d4e9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5d4eb push eax */
  push32((uint32_t)(EAX));
  /* 10f5d4ec lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10f5d4f2 push edx */
  push32((uint32_t)(EDX));
  /* 10f5d4f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d4f6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f5d4f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d4fc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5d4ff imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5d502 mov edx, dword ptr [eax*4 + 0x10f81fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f81fa0)));
  /* 10f5d509 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10f5d50c push eax */
  push32((uint32_t)(EAX));
  /* 10f5d50d call dword ptr [0x10f83350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83350))), 0x10f5d513u);
  /* 10f5d513 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5d515 je 0x10f5d53a */
  if (C.zf) goto L_10f5d53a;
  /* 10f5d517 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5d51a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d520 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f5d523 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5d526 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10f5d52c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5d52e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d534 jge 0x10f5d538 */
  if ((C.sf==C.of)) goto L_10f5d538;
  /* 10f5d536 jmp 0x10f5d54a */
  goto L_10f5d54a;
L_10f5d538:;
  /* 10f5d538 jmp 0x10f5d545 */
  goto L_10f5d545;
L_10f5d53a:;
  /* 10f5d53a call dword ptr [0x10f83390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83390))), 0x10f5d540u);
  /* 10f5d540 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f5d543 jmp 0x10f5d54a */
  goto L_10f5d54a;
L_10f5d545:;
  /* 10f5d545 jmp 0x10f5d44d */
  goto L_10f5d44d;
L_10f5d54a:;
  /* 10f5d54a jmp 0x10f5d59c */
  goto L_10f5d59c;
L_10f5d54c:;
  /* 10f5d54c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5d54e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10f5d554 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d555 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5d558 push edx */
  push32((uint32_t)(EDX));
  /* 10f5d559 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5d55c push eax */
  push32((uint32_t)(EAX));
  /* 10f5d55d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d560 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f5d563 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d566 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5d569 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5d56c mov eax, dword ptr [ecx*4 + 0x10f81fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f81fa0)));
  /* 10f5d573 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10f5d576 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d577 call dword ptr [0x10f83350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83350))), 0x10f5d57du);
  /* 10f5d57d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5d57f je 0x10f5d593 */
  if (C.zf) goto L_10f5d593;
  /* 10f5d581 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f5d588 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10f5d58e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10f5d591 jmp 0x10f5d59c */
  goto L_10f5d59c;
L_10f5d593:;
  /* 10f5d593 call dword ptr [0x10f83390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83390))), 0x10f5d599u);
  /* 10f5d599 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10f5d59c:;
  /* 10f5d59c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d5a0 jne 0x10f5d626 */
  if (!C.zf) goto L_10f5d626;
  /* 10f5d5a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d5aa je 0x10f5d5da */
  if (C.zf) goto L_10f5d5da;
  /* 10f5d5ac cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d5b0 jne 0x10f5d5c9 */
  if (!C.zf) goto L_10f5d5c9;
  /* 10f5d5b2 call 0x10f5c960 */
  push32(0x10f5d5b7u); f_10f5c960();
  /* 10f5d5b7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f5d5bd call 0x10f5c970 */
  push32(0x10f5d5c2u); f_10f5c970();
  /* 10f5d5c2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5d5c5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f5d5c7 jmp 0x10f5d5d5 */
  goto L_10f5d5d5;
L_10f5d5c9:;
  /* 10f5d5c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5d5cc push edx */
  push32((uint32_t)(EDX));
  /* 10f5d5cd call 0x10f5c8c0 */
  push32(0x10f5d5d2u); f_10f5c8c0();
  /* 10f5d5d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5d5d5:;
  /* 10f5d5d5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d5d8 jmp 0x10f5d62f */
  goto L_10f5d62f;
L_10f5d5da:;
  /* 10f5d5da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d5dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f5d5e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d5e3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5d5e6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5d5e9 mov edx, dword ptr [eax*4 + 0x10f81fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f81fa0)));
  /* 10f5d5f0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10f5d5f5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d5f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5d5fa je 0x10f5d60b */
  if (C.zf) goto L_10f5d60b;
  /* 10f5d5fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5d5ff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f5d602 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d605 jne 0x10f5d60b */
  if (!C.zf) goto L_10f5d60b;
  /* 10f5d607 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d609 jmp 0x10f5d62f */
  goto L_10f5d62f;
L_10f5d60b:;
  /* 10f5d60b call 0x10f5c960 */
  push32(0x10f5d610u); f_10f5c960();
  /* 10f5d610 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10f5d616 call 0x10f5c970 */
  push32(0x10f5d61bu); f_10f5c970();
  /* 10f5d61b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f5d621 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d624 jmp 0x10f5d62f */
  goto L_10f5d62f;
L_10f5d626:;
  /* 10f5d626 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5d629 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10f5d62f:;
  /* 10f5d62f mov esp, ebp */
  ESP = (EBP);
  /* 10f5d631 pop ebp */
  EBP = (pop32());
  /* 10f5d632 ret  */
  ESPCHK(0x10f5d3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d640 @ 0x10f5d640 (199 bytes, 68 insns) */
void f_10f5d640(void) {
  FTRACE(0x10f5d640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5d640 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5d641 mov ebp, esp */
  EBP = (ESP);
  /* 10f5d643 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d644 push ebx */
  push32((uint32_t)(EBX));
  /* 10f5d645 push esi */
  push32((uint32_t)(ESI));
  /* 10f5d646 push edi */
  push32((uint32_t)(EDI));
L_10f5d647:;
  /* 10f5d647 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d64b jne 0x10f5d66b */
  if (!C.zf) goto L_10f5d66b;
  /* 10f5d64d push 0x10f7c044 */
  push32((uint32_t)(0x10f7c044u));
  /* 10f5d652 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5d654 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10f5d656 push 0x10f7c110 */
  push32((uint32_t)(0x10f7c110u));
  /* 10f5d65b push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5d65d call 0x10f53b50 */
  push32(0x10f5d662u); f_10f53b50();
  /* 10f5d662 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d665 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d668 jne 0x10f5d66b */
  if (!C.zf) goto L_10f5d66b;
  /* 10f5d66a int3  */
  x86_unimpl("int3 @ 0x10f5d66a");
L_10f5d66b:;
  /* 10f5d66b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d66d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5d66f jne 0x10f5d647 */
  if (!C.zf) goto L_10f5d647;
  /* 10f5d671 mov ecx, dword ptr [0x10f807dc] */
  ECX = (r32((uint32_t)(0x10f807dc)));
  /* 10f5d677 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d67a mov dword ptr [0x10f807dc], ecx */
  w32((uint32_t)(0x10f807dc), (ECX));
  /* 10f5d680 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d683 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f5d686 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10f5d688 push 0x10f7c110 */
  push32((uint32_t)(0x10f7c110u));
  /* 10f5d68d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5d68f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10f5d694 call 0x10f54a90 */
  push32(0x10f5d699u); f_10f54a90();
  /* 10f5d699 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d69c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d69f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10f5d6a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d6a5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d6a9 je 0x10f5d6c6 */
  if (C.zf) goto L_10f5d6c6;
  /* 10f5d6ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d6ae mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f5d6b1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5d6b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d6b7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10f5d6ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d6bd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10f5d6c4 jmp 0x10f5d6eb */
  goto L_10f5d6eb;
L_10f5d6c6:;
  /* 10f5d6c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d6c9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f5d6cc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5d6cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d6d2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10f5d6d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d6d8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d6db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d6de mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10f5d6e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d6e4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10f5d6eb:;
  /* 10f5d6eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d6ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d6f1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f5d6f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f5d6f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d6f9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10f5d700 pop edi */
  EDI = (pop32());
  /* 10f5d701 pop esi */
  ESI = (pop32());
  /* 10f5d702 pop ebx */
  EBX = (pop32());
  /* 10f5d703 mov esp, ebp */
  ESP = (EBP);
  /* 10f5d705 pop ebp */
  EBP = (pop32());
  /* 10f5d706 ret  */
  ESPCHK(0x10f5d640u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10f5d710 (50 bytes, 17 insns) */
void f_10f5d710(void) {
  FTRACE(0x10f5d710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5d710 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5d711 mov ebp, esp */
  EBP = (ESP);
  /* 10f5d713 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d716 cmp eax, dword ptr [0x10f820dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f820dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d71c jb 0x10f5d722 */
  if (C.cf) goto L_10f5d722;
  /* 10f5d71e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5d720 jmp 0x10f5d740 */
  goto L_10f5d740;
L_10f5d722:;
  /* 10f5d722 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d725 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f5d728 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d72b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5d72e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5d731 mov eax, dword ptr [ecx*4 + 0x10f81fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f81fa0)));
  /* 10f5d738 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10f5d73d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10f5d740:;
  /* 10f5d740 pop ebp */
  EBP = (pop32());
  /* 10f5d741 ret  */
  ESPCHK(0x10f5d710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d750 @ 0x10f5d750 (300 bytes, 80 insns) */
void f_10f5d750(void) {
  FTRACE(0x10f5d750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5d750 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5d751 mov ebp, esp */
  EBP = (ESP);
  /* 10f5d753 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d754 cmp dword ptr [0x10f81ca0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f81ca0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d75b jne 0x10f5d769 */
  if (!C.zf) goto L_10f5d769;
  /* 10f5d75d mov dword ptr [0x10f81ca0], 0x200 */
  w32((uint32_t)(0x10f81ca0), (0x200u));
  /* 10f5d767 jmp 0x10f5d77c */
  goto L_10f5d77c;
L_10f5d769:;
  /* 10f5d769 cmp dword ptr [0x10f81ca0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10f81ca0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d770 jge 0x10f5d77c */
  if ((C.sf==C.of)) goto L_10f5d77c;
  /* 10f5d772 mov dword ptr [0x10f81ca0], 0x14 */
  w32((uint32_t)(0x10f81ca0), (0x14u));
L_10f5d77c:;
  /* 10f5d77c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10f5d781 push 0x10f7c11c */
  push32((uint32_t)(0x10f7c11cu));
  /* 10f5d786 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5d788 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f5d78a mov eax, dword ptr [0x10f81ca0] */
  EAX = (r32((uint32_t)(0x10f81ca0)));
  /* 10f5d78f push eax */
  push32((uint32_t)(EAX));
  /* 10f5d790 call 0x10f54ea0 */
  push32(0x10f5d795u); f_10f54ea0();
  /* 10f5d795 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d798 mov dword ptr [0x10f80950], eax */
  w32((uint32_t)(0x10f80950), (EAX));
  /* 10f5d79d cmp dword ptr [0x10f80950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d7a4 jne 0x10f5d7e5 */
  if (!C.zf) goto L_10f5d7e5;
  /* 10f5d7a6 mov dword ptr [0x10f81ca0], 0x14 */
  w32((uint32_t)(0x10f81ca0), (0x14u));
  /* 10f5d7b0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10f5d7b5 push 0x10f7c11c */
  push32((uint32_t)(0x10f7c11cu));
  /* 10f5d7ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5d7bc push 4 */
  push32((uint32_t)(0x4u));
  /* 10f5d7be mov ecx, dword ptr [0x10f81ca0] */
  ECX = (r32((uint32_t)(0x10f81ca0)));
  /* 10f5d7c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d7c5 call 0x10f54ea0 */
  push32(0x10f5d7cau); f_10f54ea0();
  /* 10f5d7ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d7cd mov dword ptr [0x10f80950], eax */
  w32((uint32_t)(0x10f80950), (EAX));
  /* 10f5d7d2 cmp dword ptr [0x10f80950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d7d9 jne 0x10f5d7e5 */
  if (!C.zf) goto L_10f5d7e5;
  /* 10f5d7db push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10f5d7dd call 0x10f53a00 */
  push32(0x10f5d7e2u); f_10f53a00();
  /* 10f5d7e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5d7e5:;
  /* 10f5d7e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f5d7ec jmp 0x10f5d7f7 */
  goto L_10f5d7f7;
L_10f5d7ee:;
  /* 10f5d7ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d7f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d7f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f5d7f7:;
  /* 10f5d7f7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d7fb jge 0x10f5d816 */
  if ((C.sf==C.of)) goto L_10f5d816;
  /* 10f5d7fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d800 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f5d803 add eax, 0x10f7f120 */
  { uint32_t _a=(EAX),_b=(0x10f7f120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d808 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d80b mov edx, dword ptr [0x10f80950] */
  EDX = (r32((uint32_t)(0x10f80950)));
  /* 10f5d811 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10f5d814 jmp 0x10f5d7ee */
  goto L_10f5d7ee;
L_10f5d816:;
  /* 10f5d816 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f5d81d jmp 0x10f5d828 */
  goto L_10f5d828;
L_10f5d81f:;
  /* 10f5d81f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d822 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d825 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f5d828:;
  /* 10f5d828 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d82c jge 0x10f5d878 */
  if ((C.sf==C.of)) goto L_10f5d878;
  /* 10f5d82e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d831 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f5d834 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d837 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5d83a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5d83d mov eax, dword ptr [ecx*4 + 0x10f81fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f81fa0)));
  /* 10f5d844 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d848 je 0x10f5d866 */
  if (C.zf) goto L_10f5d866;
  /* 10f5d84a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d84d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f5d850 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d853 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5d856 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5d859 mov eax, dword ptr [ecx*4 + 0x10f81fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f81fa0)));
  /* 10f5d860 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d864 jne 0x10f5d876 */
  if (!C.zf) goto L_10f5d876;
L_10f5d866:;
  /* 10f5d866 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5d869 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f5d86c mov dword ptr [ecx + 0x10f7f130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10f7f130), (0xffffffffu));
L_10f5d876:;
  /* 10f5d876 jmp 0x10f5d81f */
  goto L_10f5d81f;
L_10f5d878:;
  /* 10f5d878 mov esp, ebp */
  ESP = (EBP);
  /* 10f5d87a pop ebp */
  EBP = (pop32());
  /* 10f5d87b ret  */
  ESPCHK(0x10f5d750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d880 @ 0x10f5d880 (26 bytes, 9 insns) */
void f_10f5d880(void) {
  FTRACE(0x10f5d880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5d880 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5d881 mov ebp, esp */
  EBP = (ESP);
  /* 10f5d883 call 0x10f5e480 */
  push32(0x10f5d888u); f_10f5e480();
  /* 10f5d888 movsx eax, byte ptr [0x10f805f8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10f805f8))));
  /* 10f5d88f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5d891 je 0x10f5d898 */
  if (C.zf) goto L_10f5d898;
  /* 10f5d893 call 0x10f5e240 */
  push32(0x10f5d898u); f_10f5e240();
L_10f5d898:;
  /* 10f5d898 pop ebp */
  EBP = (pop32());
  /* 10f5d899 ret  */
  ESPCHK(0x10f5d880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8a0 @ 0x10f5d8a0 (61 bytes, 20 insns) */
void f_10f5d8a0(void) {
  FTRACE(0x10f5d8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5d8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5d8a1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5d8a3 cmp dword ptr [ebp + 8], 0x10f7f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10f7f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d8aa jb 0x10f5d8ce */
  if (C.cf) goto L_10f5d8ce;
  /* 10f5d8ac cmp dword ptr [ebp + 8], 0x10f7f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10f7f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d8b3 ja 0x10f5d8ce */
  if ((!C.cf&&!C.zf)) goto L_10f5d8ce;
  /* 10f5d8b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d8b8 sub eax, 0x10f7f120 */
  { uint32_t _a=(EAX),_b=(0x10f7f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5d8bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f5d8c0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d8c3 push eax */
  push32((uint32_t)(EAX));
  /* 10f5d8c4 call 0x10f58490 */
  push32(0x10f5d8c9u); f_10f58490();
  /* 10f5d8c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d8cc jmp 0x10f5d8db */
  goto L_10f5d8db;
L_10f5d8ce:;
  /* 10f5d8ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d8d1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d8d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d8d5 call dword ptr [0x10f83324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83324))), 0x10f5d8dbu);
L_10f5d8db:;
  /* 10f5d8db pop ebp */
  EBP = (pop32());
  /* 10f5d8dc ret  */
  ESPCHK(0x10f5d8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8e0 @ 0x10f5d8e0 (41 bytes, 16 insns) */
void f_10f5d8e0(void) {
  FTRACE(0x10f5d8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5d8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5d8e1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5d8e3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d8e7 jge 0x10f5d8fa */
  if ((C.sf==C.of)) goto L_10f5d8fa;
  /* 10f5d8e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d8ec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d8ef push eax */
  push32((uint32_t)(EAX));
  /* 10f5d8f0 call 0x10f58490 */
  push32(0x10f5d8f5u); f_10f58490();
  /* 10f5d8f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d8f8 jmp 0x10f5d907 */
  goto L_10f5d907;
L_10f5d8fa:;
  /* 10f5d8fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5d8fd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d900 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d901 call dword ptr [0x10f83324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83324))), 0x10f5d907u);
L_10f5d907:;
  /* 10f5d907 pop ebp */
  EBP = (pop32());
  /* 10f5d908 ret  */
  ESPCHK(0x10f5d8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d910 @ 0x10f5d910 (61 bytes, 20 insns) */
void f_10f5d910(void) {
  FTRACE(0x10f5d910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5d910 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5d911 mov ebp, esp */
  EBP = (ESP);
  /* 10f5d913 cmp dword ptr [ebp + 8], 0x10f7f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10f7f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d91a jb 0x10f5d93e */
  if (C.cf) goto L_10f5d93e;
  /* 10f5d91c cmp dword ptr [ebp + 8], 0x10f7f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10f7f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d923 ja 0x10f5d93e */
  if ((!C.cf&&!C.zf)) goto L_10f5d93e;
  /* 10f5d925 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d928 sub eax, 0x10f7f120 */
  { uint32_t _a=(EAX),_b=(0x10f7f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5d92d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f5d930 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d933 push eax */
  push32((uint32_t)(EAX));
  /* 10f5d934 call 0x10f58530 */
  push32(0x10f5d939u); f_10f58530();
  /* 10f5d939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d93c jmp 0x10f5d94b */
  goto L_10f5d94b;
L_10f5d93e:;
  /* 10f5d93e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d941 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d944 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d945 call dword ptr [0x10f83320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83320))), 0x10f5d94bu);
L_10f5d94b:;
  /* 10f5d94b pop ebp */
  EBP = (pop32());
  /* 10f5d94c ret  */
  ESPCHK(0x10f5d910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d950 @ 0x10f5d950 (41 bytes, 16 insns) */
void f_10f5d950(void) {
  FTRACE(0x10f5d950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5d950 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5d951 mov ebp, esp */
  EBP = (ESP);
  /* 10f5d953 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d957 jge 0x10f5d96a */
  if ((C.sf==C.of)) goto L_10f5d96a;
  /* 10f5d959 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d95c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d95f push eax */
  push32((uint32_t)(EAX));
  /* 10f5d960 call 0x10f58530 */
  push32(0x10f5d965u); f_10f58530();
  /* 10f5d965 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d968 jmp 0x10f5d977 */
  goto L_10f5d977;
L_10f5d96a:;
  /* 10f5d96a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5d96d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d970 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d971 call dword ptr [0x10f83320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83320))), 0x10f5d977u);
L_10f5d977:;
  /* 10f5d977 pop ebp */
  EBP = (pop32());
  /* 10f5d978 ret  */
  ESPCHK(0x10f5d950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d980 @ 0x10f5d980 (119 bytes, 34 insns) */
void f_10f5d980(void) {
  FTRACE(0x10f5d980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5d980 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5d981 mov ebp, esp */
  EBP = (ESP);
  /* 10f5d983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5d986 push 0x10f8094c */
  push32((uint32_t)(0x10f8094cu));
  /* 10f5d98b call dword ptr [0x10f83364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83364))), 0x10f5d991u);
  /* 10f5d991 cmp dword ptr [0x10f8093c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8093c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d998 je 0x10f5d9b8 */
  if (C.zf) goto L_10f5d9b8;
  /* 10f5d99a push 0x10f8094c */
  push32((uint32_t)(0x10f8094cu));
  /* 10f5d99f call dword ptr [0x10f83354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83354))), 0x10f5d9a5u);
  /* 10f5d9a5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f5d9a7 call 0x10f58490 */
  push32(0x10f5d9acu); f_10f58490();
  /* 10f5d9ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d9af mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f5d9b6 jmp 0x10f5d9bf */
  goto L_10f5d9bf;
L_10f5d9b8:;
  /* 10f5d9b8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f5d9bf:;
  /* 10f5d9bf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10f5d9c3 push eax */
  push32((uint32_t)(EAX));
  /* 10f5d9c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5d9c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5d9c8 call 0x10f5da00 */
  push32(0x10f5d9cdu); f_10f5da00();
  /* 10f5d9cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d9d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f5d9d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5d9d7 je 0x10f5d9e5 */
  if (C.zf) goto L_10f5d9e5;
  /* 10f5d9d9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f5d9db call 0x10f58530 */
  push32(0x10f5d9e0u); f_10f58530();
  /* 10f5d9e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5d9e3 jmp 0x10f5d9f0 */
  goto L_10f5d9f0;
L_10f5d9e5:;
  /* 10f5d9e5 push 0x10f8094c */
  push32((uint32_t)(0x10f8094cu));
  /* 10f5d9ea call dword ptr [0x10f83354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83354))), 0x10f5d9f0u);
L_10f5d9f0:;
  /* 10f5d9f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5d9f3 mov esp, ebp */
  ESP = (EBP);
  /* 10f5d9f5 pop ebp */
  EBP = (pop32());
  /* 10f5d9f6 ret  */
  ESPCHK(0x10f5d980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da00 @ 0x10f5da00 (160 bytes, 50 insns) */
void f_10f5da00(void) {
  FTRACE(0x10f5da00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5da00 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5da01 mov ebp, esp */
  EBP = (ESP);
  /* 10f5da03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5da06 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5da0a jne 0x10f5da13 */
  if (!C.zf) goto L_10f5da13;
  /* 10f5da0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5da0e jmp 0x10f5da9c */
  goto L_10f5da9c;
L_10f5da13:;
  /* 10f5da13 cmp dword ptr [0x10f807c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f807c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5da1a jne 0x10f5da4a */
  if (!C.zf) goto L_10f5da4a;
  /* 10f5da1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5da1f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5da24 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5da29 jle 0x10f5da3b */
  if ((C.zf||C.sf!=C.of)) goto L_10f5da3b;
  /* 10f5da2b call 0x10f5c960 */
  push32(0x10f5da30u); f_10f5c960();
  /* 10f5da30 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10f5da36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5da39 jmp 0x10f5da9c */
  goto L_10f5da9c;
L_10f5da3b:;
  /* 10f5da3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5da3e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10f5da41 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10f5da43 mov eax, 1 */
  EAX = (0x1u);
  /* 10f5da48 jmp 0x10f5da9c */
  goto L_10f5da9c;
L_10f5da4a:;
  /* 10f5da4a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f5da51 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10f5da54 push eax */
  push32((uint32_t)(EAX));
  /* 10f5da55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5da57 mov ecx, dword ptr [0x10f7eea4] */
  ECX = (r32((uint32_t)(0x10f7eea4)));
  /* 10f5da5d push ecx */
  push32((uint32_t)(ECX));
  /* 10f5da5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5da61 push edx */
  push32((uint32_t)(EDX));
  /* 10f5da62 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5da64 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10f5da67 push eax */
  push32((uint32_t)(EAX));
  /* 10f5da68 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10f5da6d mov ecx, dword ptr [0x10f807d0] */
  ECX = (r32((uint32_t)(0x10f807d0)));
  /* 10f5da73 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5da74 call dword ptr [0x10f833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833b8))), 0x10f5da7au);
  /* 10f5da7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5da7d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5da81 je 0x10f5da89 */
  if (C.zf) goto L_10f5da89;
  /* 10f5da83 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5da87 je 0x10f5da99 */
  if (C.zf) goto L_10f5da99;
L_10f5da89:;
  /* 10f5da89 call 0x10f5c960 */
  push32(0x10f5da8eu); f_10f5c960();
  /* 10f5da8e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10f5da94 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5da97 jmp 0x10f5da9c */
  goto L_10f5da9c;
L_10f5da99:;
  /* 10f5da99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f5da9c:;
  /* 10f5da9c mov esp, ebp */
  ESP = (EBP);
  /* 10f5da9e pop ebp */
  EBP = (pop32());
  /* 10f5da9f ret  */
  ESPCHK(0x10f5da00u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10f5daa0 (32 bytes, 18 insns) */
void f_10f5daa0(void) {
  FTRACE(0x10f5daa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5daa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5daa1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5daa3 push ebx */
  push32((uint32_t)(EBX));
  /* 10f5daa4 push esi */
  push32((uint32_t)(ESI));
  /* 10f5daa5 push edi */
  push32((uint32_t)(EDI));
  /* 10f5daa6 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5daa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5daa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5daab push 0x10f5dab8 */
  push32((uint32_t)(0x10f5dab8u));
  /* 10f5dab0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f5dab3 call 0x10f651ec */
  push32(0x10f5dab8u); f_10f651ec();
  /* 10f5dab8 pop ebp */
  EBP = (pop32());
  /* 10f5dab9 pop edi */
  EDI = (pop32());
  /* 10f5daba pop esi */
  ESI = (pop32());
  /* 10f5dabb pop ebx */
  EBX = (pop32());
  /* 10f5dabc mov esp, ebp */
  ESP = (EBP);
  /* 10f5dabe pop ebp */
  EBP = (pop32());
  /* 10f5dabf ret  */
  ESPCHK(0x10f5daa0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10f5dae2 (104 bytes, 33 insns) */
void f_10f5dae2(void) {
  FTRACE(0x10f5dae2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5dae2 push ebx */
  push32((uint32_t)(EBX));
  /* 10f5dae3 push esi */
  push32((uint32_t)(ESI));
  /* 10f5dae4 push edi */
  push32((uint32_t)(EDI));
  /* 10f5dae5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f5dae9 push eax */
  push32((uint32_t)(EAX));
  /* 10f5daea push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10f5daec push 0x10f5dac0 */
  push32((uint32_t)(0x10f5dac0u));
  /* 10f5daf1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10f5daf8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10f5daff:;
  /* 10f5daff mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10f5db03 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f5db06 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10f5db09 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5db0c je 0x10f5db3c */
  if (C.zf) goto L_10f5db3c;
  /* 10f5db0e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5db12 je 0x10f5db3c */
  if (C.zf) goto L_10f5db3c;
  /* 10f5db14 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10f5db17 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10f5db1a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10f5db1e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10f5db21 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5db26 jne 0x10f5db3a */
  if (!C.zf) goto L_10f5db3a;
  /* 10f5db28 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10f5db2d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10f5db31 call 0x10f5db76 */
  push32(0x10f5db36u); f_10f5db76();
  /* 10f5db36 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10f5db3au);
L_10f5db3a:;
  /* 10f5db3a jmp 0x10f5daff */
  goto L_10f5daff;
L_10f5db3c:;
  /* 10f5db3c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10f5db43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5db46 pop edi */
  EDI = (pop32());
  /* 10f5db47 pop esi */
  ESI = (pop32());
  /* 10f5db48 pop ebx */
  EBX = (pop32());
  /* 10f5db49 ret  */
  ESPCHK(0x10f5dae2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db76 @ 0x10f5db76 (24 bytes, 10 insns) */
void f_10f5db76(void) {
  FTRACE(0x10f5db76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5db76 push ebx */
  push32((uint32_t)(EBX));
  /* 10f5db77 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5db78 mov ebx, 0x10f7f3b8 */
  EBX = (0x10f7f3b8u);
  /* 10f5db7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5db80 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10f5db83 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10f5db86 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10f5db89 pop ecx */
  ECX = (pop32());
  /* 10f5db8a pop ebx */
  EBX = (pop32());
  /* 10f5db8b ret 4 */
  ESPCHK(0x10f5db76u, _esp0);
  ESP += 8; return;
}

/* FUN_1000dc55 @ 0x10f5dc55 (27 bytes, 11 insns) */
void f_10f5dc55(void) {
  FTRACE(0x10f5dc55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5dc55 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5dc56 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f5dc5a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10f5dc5c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10f5dc5f push eax */
  push32((uint32_t)(EAX));
  /* 10f5dc60 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10f5dc63 push eax */
  push32((uint32_t)(EAX));
  /* 10f5dc64 call 0x10f5dae2 */
  push32(0x10f5dc69u); f_10f5dae2();
  /* 10f5dc69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5dc6c pop ebp */
  EBP = (pop32());
  /* 10f5dc6d ret 4 */
  ESPCHK(0x10f5dc55u, _esp0);
  ESP += 8; return;
}

/* FUN_1000dc70 @ 0x10f5dc70 (482 bytes, 138 insns) */
void f_10f5dc70(void) {
  FTRACE(0x10f5dc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5dc70 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5dc71 mov ebp, esp */
  EBP = (ESP);
  /* 10f5dc73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5dc76 push esi */
  push32((uint32_t)(ESI));
  /* 10f5dc77 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10f5dc7e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10f5dc80 call 0x10f58490 */
  push32(0x10f5dc85u); f_10f58490();
  /* 10f5dc85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5dc88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f5dc8f jmp 0x10f5dc9a */
  goto L_10f5dc9a;
L_10f5dc91:;
  /* 10f5dc91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5dc94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5dc97 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10f5dc9a:;
  /* 10f5dc9a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5dc9e jge 0x10f5de40 */
  if ((C.sf==C.of)) goto L_10f5de40;
  /* 10f5dca4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5dca7 cmp dword ptr [ecx*4 + 0x10f81fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10f81fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5dcaf je 0x10f5dda6 */
  if (C.zf) goto L_10f5dda6;
  /* 10f5dcb5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5dcb8 mov eax, dword ptr [edx*4 + 0x10f81fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f81fa0)));
  /* 10f5dcbf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5dcc2 jmp 0x10f5dccd */
  goto L_10f5dccd;
L_10f5dcc4:;
  /* 10f5dcc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5dcc7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5dcca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f5dccd:;
  /* 10f5dccd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5dcd0 mov eax, dword ptr [edx*4 + 0x10f81fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f81fa0)));
  /* 10f5dcd7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5dcdc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5dcdf jae 0x10f5dd96 */
  if (!C.cf) goto L_10f5dd96;
  /* 10f5dce5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5dce8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f5dcec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5dcef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5dcf1 jne 0x10f5dd91 */
  if (!C.zf) goto L_10f5dd91;
  /* 10f5dcf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5dcfa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5dcfe jne 0x10f5dd39 */
  if (!C.zf) goto L_10f5dd39;
  /* 10f5dd00 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f5dd02 call 0x10f58490 */
  push32(0x10f5dd07u); f_10f58490();
  /* 10f5dd07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5dd0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5dd0d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5dd11 jne 0x10f5dd2f */
  if (!C.zf) goto L_10f5dd2f;
  /* 10f5dd13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5dd16 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5dd19 push edx */
  push32((uint32_t)(EDX));
  /* 10f5dd1a call dword ptr [0x10f83334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83334))), 0x10f5dd20u);
  /* 10f5dd20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5dd23 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f5dd26 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5dd29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5dd2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10f5dd2f:;
  /* 10f5dd2f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f5dd31 call 0x10f58530 */
  push32(0x10f5dd36u); f_10f58530();
  /* 10f5dd36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5dd39:;
  /* 10f5dd39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5dd3c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5dd3f push eax */
  push32((uint32_t)(EAX));
  /* 10f5dd40 call dword ptr [0x10f83324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83324))), 0x10f5dd46u);
  /* 10f5dd46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5dd49 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f5dd4d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5dd50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5dd52 je 0x10f5dd66 */
  if (C.zf) goto L_10f5dd66;
  /* 10f5dd54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5dd57 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5dd5a push eax */
  push32((uint32_t)(EAX));
  /* 10f5dd5b call dword ptr [0x10f83320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83320))), 0x10f5dd61u);
  /* 10f5dd61 jmp 0x10f5dcc4 */
  goto L_10f5dcc4;
L_10f5dd66:;
  /* 10f5dd66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5dd69 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10f5dd6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5dd72 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f5dd75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5dd78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5dd7b sub eax, dword ptr [edx*4 + 0x10f81fa0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10f81fa0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5dd82 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f5dd83 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10f5dd88 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f5dd8a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5dd8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f5dd8f jmp 0x10f5dd96 */
  goto L_10f5dd96;
L_10f5dd91:;
  /* 10f5dd91 jmp 0x10f5dcc4 */
  goto L_10f5dcc4;
L_10f5dd96:;
  /* 10f5dd96 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5dd9a je 0x10f5dda1 */
  if (C.zf) goto L_10f5dda1;
  /* 10f5dd9c jmp 0x10f5de40 */
  goto L_10f5de40;
L_10f5dda1:;
  /* 10f5dda1 jmp 0x10f5de3b */
  goto L_10f5de3b;
L_10f5dda6:;
  /* 10f5dda6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10f5dda8 push 0x10f7c124 */
  push32((uint32_t)(0x10f7c124u));
  /* 10f5ddad push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5ddaf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10f5ddb4 call 0x10f54a90 */
  push32(0x10f5ddb9u); f_10f54a90();
  /* 10f5ddb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ddbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5ddbf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ddc3 je 0x10f5de39 */
  if (C.zf) goto L_10f5de39;
  /* 10f5ddc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5ddc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ddcb mov dword ptr [eax*4 + 0x10f81fa0], ecx */
  w32((uint32_t)(EAX*4 + 0x10f81fa0), (ECX));
  /* 10f5ddd2 mov edx, dword ptr [0x10f820dc] */
  EDX = (r32((uint32_t)(0x10f820dc)));
  /* 10f5ddd8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5dddb mov dword ptr [0x10f820dc], edx */
  w32((uint32_t)(0x10f820dc), (EDX));
  /* 10f5dde1 jmp 0x10f5ddec */
  goto L_10f5ddec;
L_10f5dde3:;
  /* 10f5dde3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5dde6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5dde9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f5ddec:;
  /* 10f5ddec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5ddef mov edx, dword ptr [ecx*4 + 0x10f81fa0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f81fa0)));
  /* 10f5ddf6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ddfc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ddff jae 0x10f5de24 */
  if (!C.cf) goto L_10f5de24;
  /* 10f5de01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5de04 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10f5de08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5de0b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10f5de11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5de14 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10f5de18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5de1b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10f5de22 jmp 0x10f5dde3 */
  goto L_10f5dde3;
L_10f5de24:;
  /* 10f5de24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5de27 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f5de2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f5de2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5de30 push edx */
  push32((uint32_t)(EDX));
  /* 10f5de31 call 0x10f5e180 */
  push32(0x10f5de36u); f_10f5e180();
  /* 10f5de36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5de39:;
  /* 10f5de39 jmp 0x10f5de40 */
  goto L_10f5de40;
L_10f5de3b:;
  /* 10f5de3b jmp 0x10f5dc91 */
  goto L_10f5dc91;
L_10f5de40:;
  /* 10f5de40 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10f5de42 call 0x10f58530 */
  push32(0x10f5de47u); f_10f58530();
  /* 10f5de47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5de4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5de4d pop esi */
  ESI = (pop32());
  /* 10f5de4e mov esp, ebp */
  ESP = (EBP);
  /* 10f5de50 pop ebp */
  EBP = (pop32());
  /* 10f5de51 ret  */
  ESPCHK(0x10f5dc70u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10f5de60 (183 bytes, 57 insns) */
void f_10f5de60(void) {
  FTRACE(0x10f5de60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5de60 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5de61 mov ebp, esp */
  EBP = (ESP);
  /* 10f5de63 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5de64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5de67 cmp eax, dword ptr [0x10f820dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f820dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5de6d jae 0x10f5defa */
  if (!C.cf) goto L_10f5defa;
  /* 10f5de73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5de76 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f5de79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5de7c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5de7f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5de82 mov eax, dword ptr [ecx*4 + 0x10f81fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f81fa0)));
  /* 10f5de89 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5de8d jne 0x10f5defa */
  if (!C.zf) goto L_10f5defa;
  /* 10f5de8f cmp dword ptr [0x10f805b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f805b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5de96 jne 0x10f5deda */
  if (!C.zf) goto L_10f5deda;
  /* 10f5de98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5de9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f5de9e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5dea2 je 0x10f5deb2 */
  if (C.zf) goto L_10f5deb2;
  /* 10f5dea4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5dea8 je 0x10f5dec0 */
  if (C.zf) goto L_10f5dec0;
  /* 10f5deaa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5deae je 0x10f5dece */
  if (C.zf) goto L_10f5dece;
  /* 10f5deb0 jmp 0x10f5deda */
  goto L_10f5deda;
L_10f5deb2:;
  /* 10f5deb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5deb5 push edx */
  push32((uint32_t)(EDX));
  /* 10f5deb6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10f5deb8 call dword ptr [0x10f832ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832ec))), 0x10f5debeu);
  /* 10f5debe jmp 0x10f5deda */
  goto L_10f5deda;
L_10f5dec0:;
  /* 10f5dec0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5dec3 push eax */
  push32((uint32_t)(EAX));
  /* 10f5dec4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10f5dec6 call dword ptr [0x10f832ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832ec))), 0x10f5deccu);
  /* 10f5decc jmp 0x10f5deda */
  goto L_10f5deda;
L_10f5dece:;
  /* 10f5dece mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5ded1 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5ded2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10f5ded4 call dword ptr [0x10f832ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832ec))), 0x10f5dedau);
L_10f5deda:;
  /* 10f5deda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5dedd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10f5dee0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5dee3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5dee6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5dee9 mov ecx, dword ptr [edx*4 + 0x10f81fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10f81fa0)));
  /* 10f5def0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5def3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10f5def6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5def8 jmp 0x10f5df13 */
  goto L_10f5df13;
L_10f5defa:;
  /* 10f5defa call 0x10f5c960 */
  push32(0x10f5deffu); f_10f5c960();
  /* 10f5deff mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f5df05 call 0x10f5c970 */
  push32(0x10f5df0au); f_10f5c970();
  /* 10f5df0a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f5df10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10f5df13:;
  /* 10f5df13 mov esp, ebp */
  ESP = (EBP);
  /* 10f5df15 pop ebp */
  EBP = (pop32());
  /* 10f5df16 ret  */
  ESPCHK(0x10f5de60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df20 @ 0x10f5df20 (216 bytes, 63 insns) */
void f_10f5df20(void) {
  FTRACE(0x10f5df20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5df20 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5df21 mov ebp, esp */
  EBP = (ESP);
  /* 10f5df23 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5df24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5df27 cmp eax, dword ptr [0x10f820dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f820dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5df2d jae 0x10f5dfdb */
  if (!C.cf) goto L_10f5dfdb;
  /* 10f5df33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5df36 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f5df39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5df3c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5df3f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5df42 mov eax, dword ptr [ecx*4 + 0x10f81fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f81fa0)));
  /* 10f5df49 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10f5df4e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5df51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5df53 je 0x10f5dfdb */
  if (C.zf) goto L_10f5dfdb;
  /* 10f5df59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5df5c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10f5df5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5df62 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5df65 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5df68 mov ecx, dword ptr [edx*4 + 0x10f81fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10f81fa0)));
  /* 10f5df6f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5df73 je 0x10f5dfdb */
  if (C.zf) goto L_10f5dfdb;
  /* 10f5df75 cmp dword ptr [0x10f805b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f805b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5df7c jne 0x10f5dfba */
  if (!C.zf) goto L_10f5dfba;
  /* 10f5df7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5df81 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f5df84 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5df88 je 0x10f5df98 */
  if (C.zf) goto L_10f5df98;
  /* 10f5df8a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5df8e je 0x10f5dfa4 */
  if (C.zf) goto L_10f5dfa4;
  /* 10f5df90 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5df94 je 0x10f5dfb0 */
  if (C.zf) goto L_10f5dfb0;
  /* 10f5df96 jmp 0x10f5dfba */
  goto L_10f5dfba;
L_10f5df98:;
  /* 10f5df98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5df9a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10f5df9c call dword ptr [0x10f832ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832ec))), 0x10f5dfa2u);
  /* 10f5dfa2 jmp 0x10f5dfba */
  goto L_10f5dfba;
L_10f5dfa4:;
  /* 10f5dfa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5dfa6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10f5dfa8 call dword ptr [0x10f832ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832ec))), 0x10f5dfaeu);
  /* 10f5dfae jmp 0x10f5dfba */
  goto L_10f5dfba;
L_10f5dfb0:;
  /* 10f5dfb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5dfb2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10f5dfb4 call dword ptr [0x10f832ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832ec))), 0x10f5dfbau);
L_10f5dfba:;
  /* 10f5dfba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5dfbd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f5dfc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5dfc3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5dfc6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5dfc9 mov edx, dword ptr [eax*4 + 0x10f81fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f81fa0)));
  /* 10f5dfd0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10f5dfd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5dfd9 jmp 0x10f5dff4 */
  goto L_10f5dff4;
L_10f5dfdb:;
  /* 10f5dfdb call 0x10f5c960 */
  push32(0x10f5dfe0u); f_10f5c960();
  /* 10f5dfe0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f5dfe6 call 0x10f5c970 */
  push32(0x10f5dfebu); f_10f5c970();
  /* 10f5dfeb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f5dff1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10f5dff4:;
  /* 10f5dff4 mov esp, ebp */
  ESP = (EBP);
  /* 10f5dff6 pop ebp */
  EBP = (pop32());
  /* 10f5dff7 ret  */
  ESPCHK(0x10f5df20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e000 @ 0x10f5e000 (102 bytes, 30 insns) */
void f_10f5e000(void) {
  FTRACE(0x10f5e000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5e000 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5e001 mov ebp, esp */
  EBP = (ESP);
  /* 10f5e003 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e006 cmp eax, dword ptr [0x10f820dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f820dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e00c jae 0x10f5e04b */
  if (!C.cf) goto L_10f5e04b;
  /* 10f5e00e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e011 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f5e014 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e017 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5e01a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5e01d mov eax, dword ptr [ecx*4 + 0x10f81fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f81fa0)));
  /* 10f5e024 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10f5e029 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5e02c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5e02e je 0x10f5e04b */
  if (C.zf) goto L_10f5e04b;
  /* 10f5e030 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e033 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10f5e036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e039 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5e03c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5e03f mov ecx, dword ptr [edx*4 + 0x10f81fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10f81fa0)));
  /* 10f5e046 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10f5e049 jmp 0x10f5e064 */
  goto L_10f5e064;
L_10f5e04b:;
  /* 10f5e04b call 0x10f5c960 */
  push32(0x10f5e050u); f_10f5c960();
  /* 10f5e050 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f5e056 call 0x10f5c970 */
  push32(0x10f5e05bu); f_10f5c970();
  /* 10f5e05b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f5e061 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10f5e064:;
  /* 10f5e064 pop ebp */
  EBP = (pop32());
  /* 10f5e065 ret  */
  ESPCHK(0x10f5e000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e070 @ 0x10f5e070 (260 bytes, 83 insns) */
void f_10f5e070(void) {
  FTRACE(0x10f5e070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5e070 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5e071 mov ebp, esp */
  EBP = (ESP);
  /* 10f5e073 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5e076 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f5e07a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5e07d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5e080 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5e082 je 0x10f5e08d */
  if (C.zf) goto L_10f5e08d;
  /* 10f5e084 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10f5e087 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10f5e08a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10f5e08d:;
  /* 10f5e08d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5e090 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5e096 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5e098 je 0x10f5e0a2 */
  if (C.zf) goto L_10f5e0a2;
  /* 10f5e09a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10f5e09d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10f5e09f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10f5e0a2:;
  /* 10f5e0a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5e0a5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5e0ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5e0ad je 0x10f5e0b8 */
  if (C.zf) goto L_10f5e0b8;
  /* 10f5e0af mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10f5e0b2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10f5e0b5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10f5e0b8:;
  /* 10f5e0b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e0bb push eax */
  push32((uint32_t)(EAX));
  /* 10f5e0bc call dword ptr [0x10f8339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8339c))), 0x10f5e0c2u);
  /* 10f5e0c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5e0c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e0c9 jne 0x10f5e0e2 */
  if (!C.zf) goto L_10f5e0e2;
  /* 10f5e0cb call dword ptr [0x10f83390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83390))), 0x10f5e0d1u);
  /* 10f5e0d1 push eax */
  push32((uint32_t)(EAX));
  /* 10f5e0d2 call 0x10f5c8c0 */
  push32(0x10f5e0d7u); f_10f5c8c0();
  /* 10f5e0d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e0da or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5e0dd jmp 0x10f5e170 */
  goto L_10f5e170;
L_10f5e0e2:;
  /* 10f5e0e2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e0e6 jne 0x10f5e0f3 */
  if (!C.zf) goto L_10f5e0f3;
  /* 10f5e0e8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10f5e0eb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10f5e0ee mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10f5e0f1 jmp 0x10f5e102 */
  goto L_10f5e102;
L_10f5e0f3:;
  /* 10f5e0f3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e0f7 jne 0x10f5e102 */
  if (!C.zf) goto L_10f5e102;
  /* 10f5e0f9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10f5e0fc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10f5e0ff mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10f5e102:;
  /* 10f5e102 call 0x10f5dc70 */
  push32(0x10f5e107u); f_10f5dc70();
  /* 10f5e107 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f5e10a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e10e jne 0x10f5e12b */
  if (!C.zf) goto L_10f5e12b;
  /* 10f5e110 call 0x10f5c960 */
  push32(0x10f5e115u); f_10f5c960();
  /* 10f5e115 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10f5e11b call 0x10f5c970 */
  push32(0x10f5e120u); f_10f5c970();
  /* 10f5e120 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f5e126 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5e129 jmp 0x10f5e170 */
  goto L_10f5e170;
L_10f5e12b:;
  /* 10f5e12b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e12e push eax */
  push32((uint32_t)(EAX));
  /* 10f5e12f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e132 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e133 call 0x10f5de60 */
  push32(0x10f5e138u); f_10f5de60();
  /* 10f5e138 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e13b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10f5e13e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10f5e141 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10f5e144 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e147 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f5e14a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e14d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5e150 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5e153 mov edx, dword ptr [eax*4 + 0x10f81fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f81fa0)));
  /* 10f5e15a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10f5e15d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10f5e161 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e164 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e165 call 0x10f5e210 */
  push32(0x10f5e16au); f_10f5e210();
  /* 10f5e16a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e16d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10f5e170:;
  /* 10f5e170 mov esp, ebp */
  ESP = (EBP);
  /* 10f5e172 pop ebp */
  EBP = (pop32());
  /* 10f5e173 ret  */
  ESPCHK(0x10f5e070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e180 @ 0x10f5e180 (134 bytes, 44 insns) */
void f_10f5e180(void) {
  FTRACE(0x10f5e180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5e180 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5e181 mov ebp, esp */
  EBP = (ESP);
  /* 10f5e183 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e187 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f5e18a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e18d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5e190 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5e193 mov edx, dword ptr [eax*4 + 0x10f81fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f81fa0)));
  /* 10f5e19a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e19c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f5e19f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5e1a2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e1a6 jne 0x10f5e1e1 */
  if (!C.zf) goto L_10f5e1e1;
  /* 10f5e1a8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f5e1aa call 0x10f58490 */
  push32(0x10f5e1afu); f_10f58490();
  /* 10f5e1af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e1b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5e1b5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e1b9 jne 0x10f5e1d7 */
  if (!C.zf) goto L_10f5e1d7;
  /* 10f5e1bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5e1be add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e1c1 push edx */
  push32((uint32_t)(EDX));
  /* 10f5e1c2 call dword ptr [0x10f83334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83334))), 0x10f5e1c8u);
  /* 10f5e1c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5e1cb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f5e1ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e1d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5e1d4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10f5e1d7:;
  /* 10f5e1d7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f5e1d9 call 0x10f58530 */
  push32(0x10f5e1deu); f_10f58530();
  /* 10f5e1de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5e1e1:;
  /* 10f5e1e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e1e4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f5e1e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e1ea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5e1ed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5e1f0 mov edx, dword ptr [eax*4 + 0x10f81fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f81fa0)));
  /* 10f5e1f7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10f5e1fb push eax */
  push32((uint32_t)(EAX));
  /* 10f5e1fc call dword ptr [0x10f83324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83324))), 0x10f5e202u);
  /* 10f5e202 mov esp, ebp */
  ESP = (EBP);
  /* 10f5e204 pop ebp */
  EBP = (pop32());
  /* 10f5e205 ret  */
  ESPCHK(0x10f5e180u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10f5e210 (38 bytes, 13 insns) */
void f_10f5e210(void) {
  FTRACE(0x10f5e210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5e210 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5e211 mov ebp, esp */
  EBP = (ESP);
  /* 10f5e213 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e216 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f5e219 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e21c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5e21f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5e222 mov edx, dword ptr [eax*4 + 0x10f81fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f81fa0)));
  /* 10f5e229 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10f5e22d push eax */
  push32((uint32_t)(EAX));
  /* 10f5e22e call dword ptr [0x10f83320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83320))), 0x10f5e234u);
  /* 10f5e234 pop ebp */
  EBP = (pop32());
  /* 10f5e235 ret  */
  ESPCHK(0x10f5e210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e240 @ 0x10f5e240 (218 bytes, 63 insns) */
void f_10f5e240(void) {
  FTRACE(0x10f5e240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5e240 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5e241 mov ebp, esp */
  EBP = (ESP);
  /* 10f5e243 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5e246 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f5e24d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5e24f call 0x10f58490 */
  push32(0x10f5e254u); f_10f58490();
  /* 10f5e254 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e257 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10f5e25e jmp 0x10f5e269 */
  goto L_10f5e269;
L_10f5e260:;
  /* 10f5e260 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e263 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e266 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f5e269:;
  /* 10f5e269 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e26c cmp ecx, dword ptr [0x10f81ca0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f81ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e272 jge 0x10f5e309 */
  if ((C.sf==C.of)) goto L_10f5e309;
  /* 10f5e278 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e27b mov eax, dword ptr [0x10f80950] */
  EAX = (r32((uint32_t)(0x10f80950)));
  /* 10f5e280 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e284 je 0x10f5e304 */
  if (C.zf) goto L_10f5e304;
  /* 10f5e286 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e289 mov edx, dword ptr [0x10f80950] */
  EDX = (r32((uint32_t)(0x10f80950)));
  /* 10f5e28f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10f5e292 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f5e295 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5e29b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5e29d je 0x10f5e2c1 */
  if (C.zf) goto L_10f5e2c1;
  /* 10f5e29f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e2a2 mov eax, dword ptr [0x10f80950] */
  EAX = (r32((uint32_t)(0x10f80950)));
  /* 10f5e2a7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10f5e2aa push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e2ab call 0x10f5f030 */
  push32(0x10f5e2b0u); f_10f5f030();
  /* 10f5e2b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e2b3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e2b6 je 0x10f5e2c1 */
  if (C.zf) goto L_10f5e2c1;
  /* 10f5e2b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5e2bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e2be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f5e2c1:;
  /* 10f5e2c1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e2c5 jl 0x10f5e304 */
  if ((C.sf!=C.of)) goto L_10f5e304;
  /* 10f5e2c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e2ca mov ecx, dword ptr [0x10f80950] */
  ECX = (r32((uint32_t)(0x10f80950)));
  /* 10f5e2d0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10f5e2d3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e2d6 push edx */
  push32((uint32_t)(EDX));
  /* 10f5e2d7 call dword ptr [0x10f83380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83380))), 0x10f5e2ddu);
  /* 10f5e2dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5e2df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e2e2 mov ecx, dword ptr [0x10f80950] */
  ECX = (r32((uint32_t)(0x10f80950)));
  /* 10f5e2e8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10f5e2eb push edx */
  push32((uint32_t)(EDX));
  /* 10f5e2ec call 0x10f55520 */
  push32(0x10f5e2f1u); f_10f55520();
  /* 10f5e2f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e2f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e2f7 mov ecx, dword ptr [0x10f80950] */
  ECX = (r32((uint32_t)(0x10f80950)));
  /* 10f5e2fd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10f5e304:;
  /* 10f5e304 jmp 0x10f5e260 */
  goto L_10f5e260;
L_10f5e309:;
  /* 10f5e309 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5e30b call 0x10f58530 */
  push32(0x10f5e310u); f_10f58530();
  /* 10f5e310 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e313 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5e316 mov esp, ebp */
  ESP = (EBP);
  /* 10f5e318 pop ebp */
  EBP = (pop32());
  /* 10f5e319 ret  */
  ESPCHK(0x10f5e240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e320 @ 0x10f5e320 (68 bytes, 26 insns) */
void f_10f5e320(void) {
  FTRACE(0x10f5e320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5e320 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5e321 mov ebp, esp */
  EBP = (ESP);
  /* 10f5e323 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e324 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e328 jne 0x10f5e336 */
  if (!C.zf) goto L_10f5e336;
  /* 10f5e32a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5e32c call 0x10f5e490 */
  push32(0x10f5e331u); f_10f5e490();
  /* 10f5e331 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e334 jmp 0x10f5e360 */
  goto L_10f5e360;
L_10f5e336:;
  /* 10f5e336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e339 push eax */
  push32((uint32_t)(EAX));
  /* 10f5e33a call 0x10f5d8a0 */
  push32(0x10f5e33fu); f_10f5d8a0();
  /* 10f5e33f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e342 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e345 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e346 call 0x10f5e370 */
  push32(0x10f5e34bu); f_10f5e370();
  /* 10f5e34b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e34e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5e351 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e354 push edx */
  push32((uint32_t)(EDX));
  /* 10f5e355 call 0x10f5d910 */
  push32(0x10f5e35au); f_10f5d910();
  /* 10f5e35a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e35d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f5e360:;
  /* 10f5e360 mov esp, ebp */
  ESP = (EBP);
  /* 10f5e362 pop ebp */
  EBP = (pop32());
  /* 10f5e363 ret  */
  ESPCHK(0x10f5e320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e370 @ 0x10f5e370 (65 bytes, 26 insns) */
void f_10f5e370(void) {
  FTRACE(0x10f5e370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5e370 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5e371 mov ebp, esp */
  EBP = (ESP);
  /* 10f5e373 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e376 push eax */
  push32((uint32_t)(EAX));
  /* 10f5e377 call 0x10f5e3c0 */
  push32(0x10f5e37cu); f_10f5e3c0();
  /* 10f5e37c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e37f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5e381 je 0x10f5e388 */
  if (C.zf) goto L_10f5e388;
  /* 10f5e383 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5e386 jmp 0x10f5e3af */
  goto L_10f5e3af;
L_10f5e388:;
  /* 10f5e388 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e38b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f5e38e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5e394 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5e396 je 0x10f5e3ad */
  if (C.zf) goto L_10f5e3ad;
  /* 10f5e398 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e39b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f5e39e push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e39f call 0x10f5f180 */
  push32(0x10f5e3a4u); f_10f5f180();
  /* 10f5e3a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e3a7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f5e3a9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5e3ab jmp 0x10f5e3af */
  goto L_10f5e3af;
L_10f5e3ad:;
  /* 10f5e3ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f5e3af:;
  /* 10f5e3af pop ebp */
  EBP = (pop32());
  /* 10f5e3b0 ret  */
  ESPCHK(0x10f5e370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3c0 @ 0x10f5e3c0 (183 bytes, 62 insns) */
void f_10f5e3c0(void) {
  FTRACE(0x10f5e3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5e3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5e3c1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5e3c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5e3c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f5e3cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e3d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f5e3d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e3d6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f5e3d9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5e3dc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e3df jne 0x10f5e45b */
  if (!C.zf) goto L_10f5e45b;
  /* 10f5e3e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e3e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f5e3e7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5e3ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5e3ef je 0x10f5e45b */
  if (C.zf) goto L_10f5e45b;
  /* 10f5e3f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e3f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e3f7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10f5e3f9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5e3fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5e3ff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e403 jle 0x10f5e45b */
  if ((C.zf||C.sf!=C.of)) goto L_10f5e45b;
  /* 10f5e405 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5e408 push edx */
  push32((uint32_t)(EDX));
  /* 10f5e409 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e40c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f5e40f push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e410 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e413 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f5e416 push eax */
  push32((uint32_t)(EAX));
  /* 10f5e417 call 0x10f5d330 */
  push32(0x10f5e41cu); f_10f5d330();
  /* 10f5e41c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e41f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e422 jne 0x10f5e445 */
  if (!C.zf) goto L_10f5e445;
  /* 10f5e424 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e427 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f5e42a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5e430 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5e432 je 0x10f5e443 */
  if (C.zf) goto L_10f5e443;
  /* 10f5e434 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e437 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f5e43a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5e43d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e440 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10f5e443:;
  /* 10f5e443 jmp 0x10f5e45b */
  goto L_10f5e45b;
L_10f5e445:;
  /* 10f5e445 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e448 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f5e44b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5e44e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e451 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10f5e454 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10f5e45b:;
  /* 10f5e45b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e45e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e461 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f5e464 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f5e466 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5e469 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10f5e470 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5e473 mov esp, ebp */
  ESP = (EBP);
  /* 10f5e475 pop ebp */
  EBP = (pop32());
  /* 10f5e476 ret  */
  ESPCHK(0x10f5e3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e480 @ 0x10f5e480 (15 bytes, 7 insns) */
void f_10f5e480(void) {
  FTRACE(0x10f5e480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5e480 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5e481 mov ebp, esp */
  EBP = (ESP);
  /* 10f5e483 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5e485 call 0x10f5e490 */
  push32(0x10f5e48au); f_10f5e490();
  /* 10f5e48a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e48d pop ebp */
  EBP = (pop32());
  /* 10f5e48e ret  */
  ESPCHK(0x10f5e480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e490 @ 0x10f5e490 (319 bytes, 94 insns) */
void f_10f5e490(void) {
  FTRACE(0x10f5e490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5e490 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5e491 mov ebp, esp */
  EBP = (ESP);
  /* 10f5e493 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5e496 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f5e49d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f5e4a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5e4a6 call 0x10f58490 */
  push32(0x10f5e4abu); f_10f58490();
  /* 10f5e4ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e4ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f5e4b5 jmp 0x10f5e4c0 */
  goto L_10f5e4c0;
L_10f5e4b7:;
  /* 10f5e4b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5e4ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e4bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10f5e4c0:;
  /* 10f5e4c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5e4c3 cmp ecx, dword ptr [0x10f81ca0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f81ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e4c9 jge 0x10f5e5b3 */
  if ((C.sf==C.of)) goto L_10f5e5b3;
  /* 10f5e4cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5e4d2 mov eax, dword ptr [0x10f80950] */
  EAX = (r32((uint32_t)(0x10f80950)));
  /* 10f5e4d7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e4db je 0x10f5e5ae */
  if (C.zf) goto L_10f5e5ae;
  /* 10f5e4e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5e4e4 mov edx, dword ptr [0x10f80950] */
  EDX = (r32((uint32_t)(0x10f80950)));
  /* 10f5e4ea mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10f5e4ed mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f5e4f0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5e4f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5e4f8 je 0x10f5e5ae */
  if (C.zf) goto L_10f5e5ae;
  /* 10f5e4fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5e501 mov eax, dword ptr [0x10f80950] */
  EAX = (r32((uint32_t)(0x10f80950)));
  /* 10f5e506 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10f5e509 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e50a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5e50d push edx */
  push32((uint32_t)(EDX));
  /* 10f5e50e call 0x10f5d8e0 */
  push32(0x10f5e513u); f_10f5d8e0();
  /* 10f5e513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e516 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5e519 mov ecx, dword ptr [0x10f80950] */
  ECX = (r32((uint32_t)(0x10f80950)));
  /* 10f5e51f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10f5e522 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10f5e525 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5e52a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5e52c je 0x10f5e595 */
  if (C.zf) goto L_10f5e595;
  /* 10f5e52e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e532 jne 0x10f5e559 */
  if (!C.zf) goto L_10f5e559;
  /* 10f5e534 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5e537 mov edx, dword ptr [0x10f80950] */
  EDX = (r32((uint32_t)(0x10f80950)));
  /* 10f5e53d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10f5e540 push eax */
  push32((uint32_t)(EAX));
  /* 10f5e541 call 0x10f5e370 */
  push32(0x10f5e546u); f_10f5e370();
  /* 10f5e546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e549 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e54c je 0x10f5e557 */
  if (C.zf) goto L_10f5e557;
  /* 10f5e54e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5e551 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e554 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f5e557:;
  /* 10f5e557 jmp 0x10f5e595 */
  goto L_10f5e595;
L_10f5e559:;
  /* 10f5e559 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e55d jne 0x10f5e595 */
  if (!C.zf) goto L_10f5e595;
  /* 10f5e55f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5e562 mov eax, dword ptr [0x10f80950] */
  EAX = (r32((uint32_t)(0x10f80950)));
  /* 10f5e567 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10f5e56a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f5e56d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5e570 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5e572 je 0x10f5e595 */
  if (C.zf) goto L_10f5e595;
  /* 10f5e574 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5e577 mov ecx, dword ptr [0x10f80950] */
  ECX = (r32((uint32_t)(0x10f80950)));
  /* 10f5e57d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10f5e580 push edx */
  push32((uint32_t)(EDX));
  /* 10f5e581 call 0x10f5e370 */
  push32(0x10f5e586u); f_10f5e370();
  /* 10f5e586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e589 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e58c jne 0x10f5e595 */
  if (!C.zf) goto L_10f5e595;
  /* 10f5e58e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10f5e595:;
  /* 10f5e595 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5e598 mov ecx, dword ptr [0x10f80950] */
  ECX = (r32((uint32_t)(0x10f80950)));
  /* 10f5e59e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10f5e5a1 push edx */
  push32((uint32_t)(EDX));
  /* 10f5e5a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5e5a5 push eax */
  push32((uint32_t)(EAX));
  /* 10f5e5a6 call 0x10f5d950 */
  push32(0x10f5e5abu); f_10f5d950();
  /* 10f5e5ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5e5ae:;
  /* 10f5e5ae jmp 0x10f5e4b7 */
  goto L_10f5e4b7;
L_10f5e5b3:;
  /* 10f5e5b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5e5b5 call 0x10f58530 */
  push32(0x10f5e5bau); f_10f58530();
  /* 10f5e5ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e5bd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e5c1 jne 0x10f5e5c8 */
  if (!C.zf) goto L_10f5e5c8;
  /* 10f5e5c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5e5c6 jmp 0x10f5e5cb */
  goto L_10f5e5cb;
L_10f5e5c8:;
  /* 10f5e5c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10f5e5cb:;
  /* 10f5e5cb mov esp, ebp */
  ESP = (EBP);
  /* 10f5e5cd pop ebp */
  EBP = (pop32());
  /* 10f5e5ce ret  */
  ESPCHK(0x10f5e490u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10f5e5d0 (15 bytes, 7 insns) */
void f_10f5e5d0(void) {
  FTRACE(0x10f5e5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5e5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5e5d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5e5d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5e5d5 call 0x10f53a00 */
  push32(0x10f5e5dau); f_10f53a00();
  /* 10f5e5da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e5dd pop ebp */
  EBP = (pop32());
  /* 10f5e5de ret  */
  ESPCHK(0x10f5e5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5e0 @ 0x10f5e5e0 (1007 bytes, 269 insns) */
void f_10f5e5e0(void) {
  FTRACE(0x10f5e5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5e5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5e5e1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5e5e3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5e5e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e5ed jl 0x10f5e5f5 */
  if ((C.sf!=C.of)) goto L_10f5e5f5;
  /* 10f5e5ef cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e5f3 jle 0x10f5e5fc */
  if ((C.zf||C.sf!=C.of)) goto L_10f5e5fc;
L_10f5e5f5:;
  /* 10f5e5f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5e5f7 jmp 0x10f5e9cb */
  goto L_10f5e9cb;
L_10f5e5fc:;
  /* 10f5e5fc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f5e5fe call 0x10f58490 */
  push32(0x10f5e603u); f_10f58490();
  /* 10f5e603 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e606 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f5e60d mov eax, dword ptr [0x10f8093c] */
  EAX = (r32((uint32_t)(0x10f8093c)));
  /* 10f5e612 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e615 mov dword ptr [0x10f8093c], eax */
  w32((uint32_t)(0x10f8093c), (EAX));
L_10f5e61a:;
  /* 10f5e61a cmp dword ptr [0x10f8094c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8094c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e621 je 0x10f5e62d */
  if (C.zf) goto L_10f5e62d;
  /* 10f5e623 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5e625 call dword ptr [0x10f832dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832dc))), 0x10f5e62bu);
  /* 10f5e62b jmp 0x10f5e61a */
  goto L_10f5e61a;
L_10f5e62d:;
  /* 10f5e62d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e631 je 0x10f5e671 */
  if (C.zf) goto L_10f5e671;
  /* 10f5e633 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e637 je 0x10f5e651 */
  if (C.zf) goto L_10f5e651;
  /* 10f5e639 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5e63c push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e63d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e640 push edx */
  push32((uint32_t)(EDX));
  /* 10f5e641 call 0x10f5e9d0 */
  push32(0x10f5e646u); f_10f5e9d0();
  /* 10f5e646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e649 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10f5e64f jmp 0x10f5e663 */
  goto L_10f5e663;
L_10f5e651:;
  /* 10f5e651 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e654 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5e657 mov ecx, dword ptr [eax + 0x10f7f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10f7f4dc)));
  /* 10f5e65d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10f5e663:;
  /* 10f5e663 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10f5e669 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f5e66c jmp 0x10f5e9ab */
  goto L_10f5e9ab;
L_10f5e671:;
  /* 10f5e671 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10f5e678 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f5e67f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e683 je 0x10f5e9a3 */
  if (C.zf) goto L_10f5e9a3;
  /* 10f5e689 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5e68c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f5e68f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e692 jne 0x10f5e8b4 */
  if (!C.zf) goto L_10f5e8b4;
  /* 10f5e698 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5e69b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10f5e69f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e6a2 jne 0x10f5e8b4 */
  if (!C.zf) goto L_10f5e8b4;
  /* 10f5e6a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5e6ab movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10f5e6af cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e6b2 jne 0x10f5e8b4 */
  if (!C.zf) goto L_10f5e8b4;
  /* 10f5e6b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5e6bb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10f5e6c1:;
  /* 10f5e6c1 push 0x10f7c174 */
  push32((uint32_t)(0x10f7c174u));
  /* 10f5e6c6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10f5e6cc push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e6cd call 0x10f60830 */
  push32(0x10f5e6d2u); f_10f60830();
  /* 10f5e6d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e6d5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10f5e6db cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e6e2 je 0x10f5e70d */
  if (C.zf) goto L_10f5e70d;
  /* 10f5e6e4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10f5e6ea sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5e6f0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10f5e6f6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e6fd je 0x10f5e70d */
  if (C.zf) goto L_10f5e70d;
  /* 10f5e6ff mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10f5e705 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f5e708 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e70b jne 0x10f5e733 */
  if (!C.zf) goto L_10f5e733;
L_10f5e70d:;
  /* 10f5e70d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e711 je 0x10f5e72c */
  if (C.zf) goto L_10f5e72c;
  /* 10f5e713 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f5e715 call 0x10f58530 */
  push32(0x10f5e71au); f_10f58530();
  /* 10f5e71a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e71d mov edx, dword ptr [0x10f8093c] */
  EDX = (r32((uint32_t)(0x10f8093c)));
  /* 10f5e723 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5e726 mov dword ptr [0x10f8093c], edx */
  w32((uint32_t)(0x10f8093c), (EDX));
L_10f5e72c:;
  /* 10f5e72c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5e72e jmp 0x10f5e9cb */
  goto L_10f5e9cb;
L_10f5e733:;
  /* 10f5e733 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10f5e73a jmp 0x10f5e745 */
  goto L_10f5e745;
L_10f5e73c:;
  /* 10f5e73c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5e73f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e742 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10f5e745:;
  /* 10f5e745 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e749 jg 0x10f5e793 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f5e793;
  /* 10f5e74b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10f5e751 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e752 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10f5e758 push edx */
  push32((uint32_t)(EDX));
  /* 10f5e759 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5e75c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5e75f mov ecx, dword ptr [eax + 0x10f7f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x10f7f4d8)));
  /* 10f5e765 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e766 call 0x10f607f0 */
  push32(0x10f5e76bu); f_10f607f0();
  /* 10f5e76b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e76e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5e770 jne 0x10f5e791 */
  if (!C.zf) goto L_10f5e791;
  /* 10f5e772 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5e775 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5e778 mov eax, dword ptr [edx + 0x10f7f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x10f7f4d8)));
  /* 10f5e77e push eax */
  push32((uint32_t)(EAX));
  /* 10f5e77f call 0x10f578c0 */
  push32(0x10f5e784u); f_10f578c0();
  /* 10f5e784 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e787 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e78d jne 0x10f5e791 */
  if (!C.zf) goto L_10f5e791;
  /* 10f5e78f jmp 0x10f5e793 */
  goto L_10f5e793;
L_10f5e791:;
  /* 10f5e791 jmp 0x10f5e73c */
  goto L_10f5e73c;
L_10f5e793:;
  /* 10f5e793 push 0x10f7c170 */
  push32((uint32_t)(0x10f7c170u));
  /* 10f5e798 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10f5e79e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e7a1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10f5e7a7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10f5e7ad push edx */
  push32((uint32_t)(EDX));
  /* 10f5e7ae call 0x10f607b0 */
  push32(0x10f5e7b3u); f_10f607b0();
  /* 10f5e7b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e7b6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10f5e7bc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e7c3 jne 0x10f5e7f9 */
  if (!C.zf) goto L_10f5e7f9;
  /* 10f5e7c5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10f5e7cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f5e7ce cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e7d1 je 0x10f5e7f9 */
  if (C.zf) goto L_10f5e7f9;
  /* 10f5e7d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e7d7 je 0x10f5e7f2 */
  if (C.zf) goto L_10f5e7f2;
  /* 10f5e7d9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f5e7db call 0x10f58530 */
  push32(0x10f5e7e0u); f_10f58530();
  /* 10f5e7e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e7e3 mov edx, dword ptr [0x10f8093c] */
  EDX = (r32((uint32_t)(0x10f8093c)));
  /* 10f5e7e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5e7ec mov dword ptr [0x10f8093c], edx */
  w32((uint32_t)(0x10f8093c), (EDX));
L_10f5e7f2:;
  /* 10f5e7f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5e7f4 jmp 0x10f5e9cb */
  goto L_10f5e9cb;
L_10f5e7f9:;
  /* 10f5e7f9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e7fd jg 0x10f5e84a */
  if ((!C.zf&&C.sf==C.of)) goto L_10f5e84a;
  /* 10f5e7ff mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10f5e805 push eax */
  push32((uint32_t)(EAX));
  /* 10f5e806 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10f5e80c push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e80d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10f5e813 push edx */
  push32((uint32_t)(EDX));
  /* 10f5e814 call 0x10f582b0 */
  push32(0x10f5e819u); f_10f582b0();
  /* 10f5e819 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e81c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10f5e822 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10f5e82a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10f5e830 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e831 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5e834 push edx */
  push32((uint32_t)(EDX));
  /* 10f5e835 call 0x10f5e9d0 */
  push32(0x10f5e83au); f_10f5e9d0();
  /* 10f5e83a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e83d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5e83f je 0x10f5e84a */
  if (C.zf) goto L_10f5e84a;
  /* 10f5e841 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5e844 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e847 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10f5e84a:;
  /* 10f5e84a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10f5e850 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e856 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10f5e85c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10f5e862 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f5e865 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5e867 je 0x10f5e878 */
  if (C.zf) goto L_10f5e878;
  /* 10f5e869 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10f5e86f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e872 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10f5e878:;
  /* 10f5e878 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10f5e87e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f5e881 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5e883 jne 0x10f5e6c1 */
  if (!C.zf) goto L_10f5e6c1;
  /* 10f5e889 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e88d je 0x10f5e89c */
  if (C.zf) goto L_10f5e89c;
  /* 10f5e88f call 0x10f5eb70 */
  push32(0x10f5e894u); f_10f5eb70();
  /* 10f5e894 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10f5e89a jmp 0x10f5e8a6 */
  goto L_10f5e8a6;
L_10f5e89c:;
  /* 10f5e89c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10f5e8a6:;
  /* 10f5e8a6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10f5e8ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f5e8af jmp 0x10f5e9a1 */
  goto L_10f5e9a1;
L_10f5e8b4:;
  /* 10f5e8b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e8b7 push edx */
  push32((uint32_t)(EDX));
  /* 10f5e8b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5e8ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5e8bc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10f5e8c2 push eax */
  push32((uint32_t)(EAX));
  /* 10f5e8c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5e8c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e8c7 call 0x10f5ec70 */
  push32(0x10f5e8ccu); f_10f5ec70();
  /* 10f5e8cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e8cf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f5e8d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e8d6 je 0x10f5e9a1 */
  if (C.zf) goto L_10f5e9a1;
  /* 10f5e8dc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10f5e8e3 jmp 0x10f5e8ee */
  goto L_10f5e8ee;
L_10f5e8e5:;
  /* 10f5e8e5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5e8e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e8eb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10f5e8ee:;
  /* 10f5e8ee cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e8f2 jg 0x10f5e950 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f5e950;
  /* 10f5e8f4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e8f8 je 0x10f5e94e */
  if (C.zf) goto L_10f5e94e;
  /* 10f5e8fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5e8fd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5e900 mov ecx, dword ptr [eax + 0x10f7f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10f7f4dc)));
  /* 10f5e906 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e907 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10f5e90d push edx */
  push32((uint32_t)(EDX));
  /* 10f5e90e call 0x10f60720 */
  push32(0x10f5e913u); f_10f60720();
  /* 10f5e913 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e916 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5e918 je 0x10f5e945 */
  if (C.zf) goto L_10f5e945;
  /* 10f5e91a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10f5e920 push eax */
  push32((uint32_t)(EAX));
  /* 10f5e921 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5e924 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e925 call 0x10f5e9d0 */
  push32(0x10f5e92au); f_10f5e9d0();
  /* 10f5e92a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e92d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5e92f je 0x10f5e93c */
  if (C.zf) goto L_10f5e93c;
  /* 10f5e931 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5e934 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e937 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f5e93a jmp 0x10f5e943 */
  goto L_10f5e943;
L_10f5e93c:;
  /* 10f5e93c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10f5e943:;
  /* 10f5e943 jmp 0x10f5e94e */
  goto L_10f5e94e;
L_10f5e945:;
  /* 10f5e945 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5e948 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e94b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10f5e94e:;
  /* 10f5e94e jmp 0x10f5e8e5 */
  goto L_10f5e8e5;
L_10f5e950:;
  /* 10f5e950 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e954 je 0x10f5e97b */
  if (C.zf) goto L_10f5e97b;
  /* 10f5e956 call 0x10f5eb70 */
  push32(0x10f5e95bu); f_10f5eb70();
  /* 10f5e95b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f5e95e push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5e960 mov ecx, dword ptr [0x10f7f4dc] */
  ECX = (r32((uint32_t)(0x10f7f4dc)));
  /* 10f5e966 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e967 call 0x10f55520 */
  push32(0x10f5e96cu); f_10f55520();
  /* 10f5e96c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e96f mov dword ptr [0x10f7f4dc], 0 */
  w32((uint32_t)(0x10f7f4dc), (0x0u));
  /* 10f5e979 jmp 0x10f5e9a1 */
  goto L_10f5e9a1;
L_10f5e97b:;
  /* 10f5e97b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e97f je 0x10f5e98e */
  if (C.zf) goto L_10f5e98e;
  /* 10f5e981 call 0x10f5eb70 */
  push32(0x10f5e986u); f_10f5eb70();
  /* 10f5e986 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10f5e98c jmp 0x10f5e998 */
  goto L_10f5e998;
L_10f5e98e:;
  /* 10f5e98e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10f5e998:;
  /* 10f5e998 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10f5e99e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10f5e9a1:;
  /* 10f5e9a1 jmp 0x10f5e9ab */
  goto L_10f5e9ab;
L_10f5e9a3:;
  /* 10f5e9a3 call 0x10f5eb70 */
  push32(0x10f5e9a8u); f_10f5eb70();
  /* 10f5e9a8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f5e9ab:;
  /* 10f5e9ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5e9af je 0x10f5e9c8 */
  if (C.zf) goto L_10f5e9c8;
  /* 10f5e9b1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f5e9b3 call 0x10f58530 */
  push32(0x10f5e9b8u); f_10f58530();
  /* 10f5e9b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e9bb mov eax, dword ptr [0x10f8093c] */
  EAX = (r32((uint32_t)(0x10f8093c)));
  /* 10f5e9c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5e9c3 mov dword ptr [0x10f8093c], eax */
  w32((uint32_t)(0x10f8093c), (EAX));
L_10f5e9c8:;
  /* 10f5e9c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10f5e9cb:;
  /* 10f5e9cb mov esp, ebp */
  ESP = (EBP);
  /* 10f5e9cd pop ebp */
  EBP = (pop32());
  /* 10f5e9ce ret  */
  ESPCHK(0x10f5e5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9d0 @ 0x10f5e9d0 (403 bytes, 117 insns) */
void f_10f5e9d0(void) {
  FTRACE(0x10f5e9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5e9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5e9d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5e9d3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5e9d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5e9dc push eax */
  push32((uint32_t)(EAX));
  /* 10f5e9dd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10f5e9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e9e4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10f5e9ea push edx */
  push32((uint32_t)(EDX));
  /* 10f5e9eb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10f5e9f1 push eax */
  push32((uint32_t)(EAX));
  /* 10f5e9f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5e9f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5e9f6 call 0x10f5ec70 */
  push32(0x10f5e9fbu); f_10f5ec70();
  /* 10f5e9fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5e9fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5ea00 jne 0x10f5ea09 */
  if (!C.zf) goto L_10f5ea09;
  /* 10f5ea02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ea04 jmp 0x10f5eb5f */
  goto L_10f5eb5f;
L_10f5ea09:;
  /* 10f5ea09 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10f5ea0e push 0x10f7c178 */
  push32((uint32_t)(0x10f7c178u));
  /* 10f5ea13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5ea15 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10f5ea1b push edx */
  push32((uint32_t)(EDX));
  /* 10f5ea1c call 0x10f578c0 */
  push32(0x10f5ea21u); f_10f578c0();
  /* 10f5ea21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ea24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ea27 push eax */
  push32((uint32_t)(EAX));
  /* 10f5ea28 call 0x10f54a90 */
  push32(0x10f5ea2du); f_10f54a90();
  /* 10f5ea2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ea30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f5ea33 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ea37 jne 0x10f5ea40 */
  if (!C.zf) goto L_10f5ea40;
  /* 10f5ea39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ea3b jmp 0x10f5eb5f */
  goto L_10f5eb5f;
L_10f5ea40:;
  /* 10f5ea40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ea43 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5ea46 mov ecx, dword ptr [eax + 0x10f7f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10f7f4dc)));
  /* 10f5ea4c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5ea4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ea52 mov eax, dword ptr [edx*4 + 0x10f807b8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f807b8)));
  /* 10f5ea59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5ea5c push 6 */
  push32((uint32_t)(0x6u));
  /* 10f5ea5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ea61 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5ea64 add ecx, 0x10f80808 */
  { uint32_t _a=(ECX),_b=(0x10f80808u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ea6a push ecx */
  push32((uint32_t)(ECX));
  /* 10f5ea6b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10f5ea6e push edx */
  push32((uint32_t)(EDX));
  /* 10f5ea6f call 0x10f5b370 */
  push32(0x10f5ea74u); f_10f5b370();
  /* 10f5ea74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ea77 mov eax, dword ptr [0x10f807d0] */
  EAX = (r32((uint32_t)(0x10f807d0)));
  /* 10f5ea7c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f5ea7f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10f5ea85 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5ea86 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5ea89 push edx */
  push32((uint32_t)(EDX));
  /* 10f5ea8a call 0x10f57a40 */
  push32(0x10f5ea8fu); f_10f57a40();
  /* 10f5ea8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ea92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ea95 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5ea98 mov dword ptr [ecx + 0x10f7f4dc], eax */
  w32((uint32_t)(ECX + 0x10f7f4dc), (EAX));
  /* 10f5ea9e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10f5eaa4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5eaaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5eaad mov dword ptr [eax*4 + 0x10f807b8], edx */
  w32((uint32_t)(EAX*4 + 0x10f807b8), (EDX));
  /* 10f5eab4 push 6 */
  push32((uint32_t)(0x6u));
  /* 10f5eab6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10f5eabc push ecx */
  push32((uint32_t)(ECX));
  /* 10f5eabd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5eac0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5eac3 add edx, 0x10f80808 */
  { uint32_t _a=(EDX),_b=(0x10f80808u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5eac9 push edx */
  push32((uint32_t)(EDX));
  /* 10f5eaca call 0x10f5b370 */
  push32(0x10f5eacfu); f_10f5b370();
  /* 10f5eacf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ead2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ead6 jne 0x10f5eae3 */
  if (!C.zf) goto L_10f5eae3;
  /* 10f5ead8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10f5eade mov dword ptr [0x10f807d0], eax */
  w32((uint32_t)(0x10f807d0), (EAX));
L_10f5eae3:;
  /* 10f5eae3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5eae7 jne 0x10f5eaf5 */
  if (!C.zf) goto L_10f5eaf5;
  /* 10f5eae9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10f5eaef mov dword ptr [0x10f807d4], ecx */
  w32((uint32_t)(0x10f807d4), (ECX));
L_10f5eaf5:;
  /* 10f5eaf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5eaf8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5eafb call dword ptr [edx + 0x10f7f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10f7f4e0))), 0x10f5eb01u);
  /* 10f5eb01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5eb03 je 0x10f5eb3c */
  if (C.zf) goto L_10f5eb3c;
  /* 10f5eb05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5eb08 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5eb0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5eb0e mov dword ptr [eax + 0x10f7f4dc], ecx */
  w32((uint32_t)(EAX + 0x10f7f4dc), (ECX));
  /* 10f5eb14 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5eb16 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5eb19 push edx */
  push32((uint32_t)(EDX));
  /* 10f5eb1a call 0x10f55520 */
  push32(0x10f5eb1fu); f_10f55520();
  /* 10f5eb1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5eb22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5eb25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5eb28 mov dword ptr [eax*4 + 0x10f807b8], ecx */
  w32((uint32_t)(EAX*4 + 0x10f807b8), (ECX));
  /* 10f5eb2f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5eb32 mov dword ptr [0x10f807d0], edx */
  w32((uint32_t)(0x10f807d0), (EDX));
  /* 10f5eb38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5eb3a jmp 0x10f5eb5f */
  goto L_10f5eb5f;
L_10f5eb3c:;
  /* 10f5eb3c cmp dword ptr [ebp - 0xc], 0x10f7f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10f7f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5eb43 je 0x10f5eb53 */
  if (C.zf) goto L_10f5eb53;
  /* 10f5eb45 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5eb47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5eb4a push eax */
  push32((uint32_t)(EAX));
  /* 10f5eb4b call 0x10f55520 */
  push32(0x10f5eb50u); f_10f55520();
  /* 10f5eb50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5eb53:;
  /* 10f5eb53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5eb56 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5eb59 mov eax, dword ptr [ecx + 0x10f7f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x10f7f4dc)));
L_10f5eb5f:;
  /* 10f5eb5f mov esp, ebp */
  ESP = (EBP);
  /* 10f5eb61 pop ebp */
  EBP = (pop32());
  /* 10f5eb62 ret  */
  ESPCHK(0x10f5e9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb70 @ 0x10f5eb70 (256 bytes, 72 insns) */
void f_10f5eb70(void) {
  FTRACE(0x10f5eb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5eb70 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5eb71 mov ebp, esp */
  EBP = (ESP);
  /* 10f5eb73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5eb76 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10f5eb7d cmp dword ptr [0x10f7f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f7f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5eb84 jne 0x10f5eba4 */
  if (!C.zf) goto L_10f5eba4;
  /* 10f5eb86 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10f5eb8b push 0x10f7c178 */
  push32((uint32_t)(0x10f7c178u));
  /* 10f5eb90 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5eb92 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10f5eb97 call 0x10f54a90 */
  push32(0x10f5eb9cu); f_10f54a90();
  /* 10f5eb9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5eb9f mov dword ptr [0x10f7f4dc], eax */
  w32((uint32_t)(0x10f7f4dc), (EAX));
L_10f5eba4:;
  /* 10f5eba4 mov eax, dword ptr [0x10f7f4dc] */
  EAX = (r32((uint32_t)(0x10f7f4dc)));
  /* 10f5eba9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10f5ebac mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f5ebb3 jmp 0x10f5ebbe */
  goto L_10f5ebbe;
L_10f5ebb5:;
  /* 10f5ebb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ebb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ebbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f5ebbe:;
  /* 10f5ebbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ebc1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5ebc4 mov eax, dword ptr [edx + 0x10f7f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10f7f4dc)));
  /* 10f5ebca push eax */
  push32((uint32_t)(EAX));
  /* 10f5ebcb push 0x10f7c184 */
  push32((uint32_t)(0x10f7c184u));
  /* 10f5ebd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ebd3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5ebd6 mov edx, dword ptr [ecx + 0x10f7f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x10f7f4d8)));
  /* 10f5ebdc push edx */
  push32((uint32_t)(EDX));
  /* 10f5ebdd push 3 */
  push32((uint32_t)(0x3u));
  /* 10f5ebdf mov eax, dword ptr [0x10f7f4dc] */
  EAX = (r32((uint32_t)(0x10f7f4dc)));
  /* 10f5ebe4 push eax */
  push32((uint32_t)(EAX));
  /* 10f5ebe5 call 0x10f5ee10 */
  push32(0x10f5ebeau); f_10f5ee10();
  /* 10f5ebea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ebed cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ebf1 jge 0x10f5ec39 */
  if ((C.sf==C.of)) goto L_10f5ec39;
  /* 10f5ebf3 push 0x10f7c170 */
  push32((uint32_t)(0x10f7c170u));
  /* 10f5ebf8 mov ecx, dword ptr [0x10f7f4dc] */
  ECX = (r32((uint32_t)(0x10f7f4dc)));
  /* 10f5ebfe push ecx */
  push32((uint32_t)(ECX));
  /* 10f5ebff call 0x10f57a50 */
  push32(0x10f5ec04u); f_10f57a50();
  /* 10f5ec04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ec07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ec0a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ec0d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5ec10 mov eax, dword ptr [edx + 0x10f7f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10f7f4dc)));
  /* 10f5ec16 push eax */
  push32((uint32_t)(EAX));
  /* 10f5ec17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ec1a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5ec1d mov edx, dword ptr [ecx + 0x10f7f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x10f7f4dc)));
  /* 10f5ec23 push edx */
  push32((uint32_t)(EDX));
  /* 10f5ec24 call 0x10f60720 */
  push32(0x10f5ec29u); f_10f60720();
  /* 10f5ec29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ec2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5ec2e je 0x10f5ec37 */
  if (C.zf) goto L_10f5ec37;
  /* 10f5ec30 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10f5ec37:;
  /* 10f5ec37 jmp 0x10f5ec67 */
  goto L_10f5ec67;
L_10f5ec39:;
  /* 10f5ec39 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ec3d jne 0x10f5ec46 */
  if (!C.zf) goto L_10f5ec46;
  /* 10f5ec3f mov eax, dword ptr [0x10f7f4dc] */
  EAX = (r32((uint32_t)(0x10f7f4dc)));
  /* 10f5ec44 jmp 0x10f5ec6c */
  goto L_10f5ec6c;
L_10f5ec46:;
  /* 10f5ec46 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5ec48 mov eax, dword ptr [0x10f7f4dc] */
  EAX = (r32((uint32_t)(0x10f7f4dc)));
  /* 10f5ec4d push eax */
  push32((uint32_t)(EAX));
  /* 10f5ec4e call 0x10f55520 */
  push32(0x10f5ec53u); f_10f55520();
  /* 10f5ec53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ec56 mov dword ptr [0x10f7f4dc], 0 */
  w32((uint32_t)(0x10f7f4dc), (0x0u));
  /* 10f5ec60 mov eax, dword ptr [0x10f7f4f4] */
  EAX = (r32((uint32_t)(0x10f7f4f4)));
  /* 10f5ec65 jmp 0x10f5ec6c */
  goto L_10f5ec6c;
L_10f5ec67:;
  /* 10f5ec67 jmp 0x10f5ebb5 */
  goto L_10f5ebb5;
L_10f5ec6c:;
  /* 10f5ec6c mov esp, ebp */
  ESP = (EBP);
  /* 10f5ec6e pop ebp */
  EBP = (pop32());
  /* 10f5ec6f ret  */
  ESPCHK(0x10f5eb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec70 @ 0x10f5ec70 (388 bytes, 115 insns) */
void f_10f5ec70(void) {
  FTRACE(0x10f5ec70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5ec70 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5ec71 mov ebp, esp */
  EBP = (ESP);
  /* 10f5ec73 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5ec79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ec7d jne 0x10f5ec86 */
  if (!C.zf) goto L_10f5ec86;
  /* 10f5ec7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ec81 jmp 0x10f5edf0 */
  goto L_10f5edf0;
L_10f5ec86:;
  /* 10f5ec86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ec89 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f5ec8c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ec8f jne 0x10f5ece0 */
  if (!C.zf) goto L_10f5ece0;
  /* 10f5ec91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ec94 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10f5ec98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5ec9a jne 0x10f5ece0 */
  if (!C.zf) goto L_10f5ece0;
  /* 10f5ec9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5ec9f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10f5eca2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5eca5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10f5eca9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ecad je 0x10f5ecc9 */
  if (C.zf) goto L_10f5ecc9;
  /* 10f5ecaf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5ecb2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10f5ecb7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5ecba mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10f5ecc0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5ecc3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10f5ecc9:;
  /* 10f5ecc9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5eccd je 0x10f5ecd8 */
  if (C.zf) goto L_10f5ecd8;
  /* 10f5eccf mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f5ecd2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10f5ecd8:;
  /* 10f5ecd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5ecdb jmp 0x10f5edf0 */
  goto L_10f5edf0;
L_10f5ece0:;
  /* 10f5ece0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ece3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5ece4 push 0x10f7f450 */
  push32((uint32_t)(0x10f7f450u));
  /* 10f5ece9 call 0x10f60720 */
  push32(0x10f5eceeu); f_10f60720();
  /* 10f5ecee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ecf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5ecf3 je 0x10f5eda8 */
  if (C.zf) goto L_10f5eda8;
  /* 10f5ecf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ecfc push edx */
  push32((uint32_t)(EDX));
  /* 10f5ecfd push 0x10f7f3cc */
  push32((uint32_t)(0x10f7f3ccu));
  /* 10f5ed02 call 0x10f60720 */
  push32(0x10f5ed07u); f_10f60720();
  /* 10f5ed07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ed0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5ed0c je 0x10f5eda8 */
  if (C.zf) goto L_10f5eda8;
  /* 10f5ed12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ed15 push eax */
  push32((uint32_t)(EAX));
  /* 10f5ed16 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10f5ed1c push ecx */
  push32((uint32_t)(ECX));
  /* 10f5ed1d call 0x10f5ee60 */
  push32(0x10f5ed22u); f_10f5ee60();
  /* 10f5ed22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ed25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5ed27 je 0x10f5ed30 */
  if (C.zf) goto L_10f5ed30;
  /* 10f5ed29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ed2b jmp 0x10f5edf0 */
  goto L_10f5edf0;
L_10f5ed30:;
  /* 10f5ed30 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10f5ed36 push edx */
  push32((uint32_t)(EDX));
  /* 10f5ed37 push 0x10f807e0 */
  push32((uint32_t)(0x10f807e0u));
  /* 10f5ed3c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10f5ed42 push eax */
  push32((uint32_t)(EAX));
  /* 10f5ed43 call 0x10f60870 */
  push32(0x10f5ed48u); f_10f60870();
  /* 10f5ed48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ed4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5ed4d jne 0x10f5ed56 */
  if (!C.zf) goto L_10f5ed56;
  /* 10f5ed4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ed51 jmp 0x10f5edf0 */
  goto L_10f5edf0;
L_10f5ed56:;
  /* 10f5ed56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5ed58 mov cx, word ptr [0x10f807e4] */
  CX = (r16((uint32_t)(0x10f807e4)));
  /* 10f5ed5f mov dword ptr [0x10f807e8], ecx */
  w32((uint32_t)(0x10f807e8), (ECX));
  /* 10f5ed65 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10f5ed6b push edx */
  push32((uint32_t)(EDX));
  /* 10f5ed6c push 0x10f7f450 */
  push32((uint32_t)(0x10f7f450u));
  /* 10f5ed71 call 0x10f5efc0 */
  push32(0x10f5ed76u); f_10f5efc0();
  /* 10f5ed76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ed79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ed7c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f5ed7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5ed81 je 0x10f5ed96 */
  if (C.zf) goto L_10f5ed96;
  /* 10f5ed83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ed86 push edx */
  push32((uint32_t)(EDX));
  /* 10f5ed87 push 0x10f7f3cc */
  push32((uint32_t)(0x10f7f3ccu));
  /* 10f5ed8c call 0x10f57a40 */
  push32(0x10f5ed91u); f_10f57a40();
  /* 10f5ed91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ed94 jmp 0x10f5eda8 */
  goto L_10f5eda8;
L_10f5ed96:;
  /* 10f5ed96 push 0x10f7f450 */
  push32((uint32_t)(0x10f7f450u));
  /* 10f5ed9b push 0x10f7f3cc */
  push32((uint32_t)(0x10f7f3ccu));
  /* 10f5eda0 call 0x10f57a40 */
  push32(0x10f5eda5u); f_10f57a40();
  /* 10f5eda5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5eda8:;
  /* 10f5eda8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5edac je 0x10f5edc1 */
  if (C.zf) goto L_10f5edc1;
  /* 10f5edae push 6 */
  push32((uint32_t)(0x6u));
  /* 10f5edb0 push 0x10f807e0 */
  push32((uint32_t)(0x10f807e0u));
  /* 10f5edb5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5edb8 push eax */
  push32((uint32_t)(EAX));
  /* 10f5edb9 call 0x10f5b370 */
  push32(0x10f5edbeu); f_10f5b370();
  /* 10f5edbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5edc1:;
  /* 10f5edc1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5edc5 je 0x10f5edda */
  if (C.zf) goto L_10f5edda;
  /* 10f5edc7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f5edc9 push 0x10f807e8 */
  push32((uint32_t)(0x10f807e8u));
  /* 10f5edce mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f5edd1 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5edd2 call 0x10f5b370 */
  push32(0x10f5edd7u); f_10f5b370();
  /* 10f5edd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5edda:;
  /* 10f5edda push 0x10f7f450 */
  push32((uint32_t)(0x10f7f450u));
  /* 10f5eddf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5ede2 push edx */
  push32((uint32_t)(EDX));
  /* 10f5ede3 call 0x10f57a40 */
  push32(0x10f5ede8u); f_10f57a40();
  /* 10f5ede8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5edeb mov eax, 0x10f7f450 */
  EAX = (0x10f7f450u);
L_10f5edf0:;
  /* 10f5edf0 mov esp, ebp */
  ESP = (EBP);
  /* 10f5edf2 pop ebp */
  EBP = (pop32());
  /* 10f5edf3 ret  */
  ESPCHK(0x10f5ec70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee00 @ 0x10f5ee00 (7 bytes, 5 insns) */
void f_10f5ee00(void) {
  FTRACE(0x10f5ee00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5ee00 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5ee01 mov ebp, esp */
  EBP = (ESP);
  /* 10f5ee03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ee05 pop ebp */
  EBP = (pop32());
  /* 10f5ee06 ret  */
  ESPCHK(0x10f5ee00u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10f5ee10 (79 bytes, 28 insns) */
void f_10f5ee10(void) {
  FTRACE(0x10f5ee10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5ee10 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5ee11 mov ebp, esp */
  EBP = (ESP);
  /* 10f5ee13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5ee16 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10f5ee19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5ee1c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f5ee23 jmp 0x10f5ee2e */
  goto L_10f5ee2e;
L_10f5ee25:;
  /* 10f5ee25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5ee28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ee2b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10f5ee2e:;
  /* 10f5ee2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5ee31 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ee34 jge 0x10f5ee54 */
  if ((C.sf==C.of)) goto L_10f5ee54;
  /* 10f5ee36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ee39 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ee3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5ee3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ee42 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10f5ee45 push edx */
  push32((uint32_t)(EDX));
  /* 10f5ee46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ee49 push eax */
  push32((uint32_t)(EAX));
  /* 10f5ee4a call 0x10f57a50 */
  push32(0x10f5ee4fu); f_10f57a50();
  /* 10f5ee4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ee52 jmp 0x10f5ee25 */
  goto L_10f5ee25;
L_10f5ee54:;
  /* 10f5ee54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f5ee5b mov esp, ebp */
  ESP = (EBP);
  /* 10f5ee5d pop ebp */
  EBP = (pop32());
  /* 10f5ee5e ret  */
  ESPCHK(0x10f5ee10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee60 @ 0x10f5ee60 (349 bytes, 122 insns) */
void f_10f5ee60(void) {
  FTRACE(0x10f5ee60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5ee60 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5ee61 mov ebp, esp */
  EBP = (ESP);
  /* 10f5ee63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5ee66 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10f5ee6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5ee6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ee70 push eax */
  push32((uint32_t)(EAX));
  /* 10f5ee71 call 0x10f58800 */
  push32(0x10f5ee76u); f_10f58800();
  /* 10f5ee76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ee79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5ee7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f5ee7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5ee81 jne 0x10f5ee8a */
  if (!C.zf) goto L_10f5ee8a;
  /* 10f5ee83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ee85 jmp 0x10f5efb9 */
  goto L_10f5efb9;
L_10f5ee8a:;
  /* 10f5ee8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5ee8d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f5ee90 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ee93 jne 0x10f5eec0 */
  if (!C.zf) goto L_10f5eec0;
  /* 10f5ee95 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5ee98 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10f5ee9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5ee9e je 0x10f5eec0 */
  if (C.zf) goto L_10f5eec0;
  /* 10f5eea0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5eea3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5eea6 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5eea7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5eeaa add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5eeb0 push edx */
  push32((uint32_t)(EDX));
  /* 10f5eeb1 call 0x10f57a40 */
  push32(0x10f5eeb6u); f_10f57a40();
  /* 10f5eeb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5eeb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5eebb jmp 0x10f5efb9 */
  goto L_10f5efb9;
L_10f5eec0:;
  /* 10f5eec0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f5eec7 jmp 0x10f5eed2 */
  goto L_10f5eed2;
L_10f5eec9:;
  /* 10f5eec9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5eecc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5eecf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f5eed2:;
  /* 10f5eed2 push 0x10f7c188 */
  push32((uint32_t)(0x10f7c188u));
  /* 10f5eed7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5eeda push ecx */
  push32((uint32_t)(ECX));
  /* 10f5eedb call 0x10f607b0 */
  push32(0x10f5eee0u); f_10f607b0();
  /* 10f5eee0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5eee3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f5eee6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5eeea jne 0x10f5eef4 */
  if (!C.zf) goto L_10f5eef4;
  /* 10f5eeec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5eeef jmp 0x10f5efb9 */
  goto L_10f5efb9;
L_10f5eef4:;
  /* 10f5eef4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5eef7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5eefa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f5eefc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10f5eeff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ef03 jne 0x10f5ef2a */
  if (!C.zf) goto L_10f5ef2a;
  /* 10f5ef05 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ef09 jge 0x10f5ef2a */
  if ((C.sf==C.of)) goto L_10f5ef2a;
  /* 10f5ef0b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10f5ef0f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ef12 je 0x10f5ef2a */
  if (C.zf) goto L_10f5ef2a;
  /* 10f5ef14 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5ef17 push edx */
  push32((uint32_t)(EDX));
  /* 10f5ef18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5ef1b push eax */
  push32((uint32_t)(EAX));
  /* 10f5ef1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ef1f push ecx */
  push32((uint32_t)(ECX));
  /* 10f5ef20 call 0x10f582b0 */
  push32(0x10f5ef25u); f_10f582b0();
  /* 10f5ef25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ef28 jmp 0x10f5ef90 */
  goto L_10f5ef90;
L_10f5ef2a:;
  /* 10f5ef2a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ef2e jne 0x10f5ef58 */
  if (!C.zf) goto L_10f5ef58;
  /* 10f5ef30 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ef34 jge 0x10f5ef58 */
  if ((C.sf==C.of)) goto L_10f5ef58;
  /* 10f5ef36 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10f5ef3a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ef3d je 0x10f5ef58 */
  if (C.zf) goto L_10f5ef58;
  /* 10f5ef3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5ef42 push eax */
  push32((uint32_t)(EAX));
  /* 10f5ef43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5ef46 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5ef47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ef4a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ef4d push edx */
  push32((uint32_t)(EDX));
  /* 10f5ef4e call 0x10f582b0 */
  push32(0x10f5ef53u); f_10f582b0();
  /* 10f5ef53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ef56 jmp 0x10f5ef90 */
  goto L_10f5ef90;
L_10f5ef58:;
  /* 10f5ef58 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ef5c jne 0x10f5ef8b */
  if (!C.zf) goto L_10f5ef8b;
  /* 10f5ef5e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10f5ef62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5ef64 je 0x10f5ef6f */
  if (C.zf) goto L_10f5ef6f;
  /* 10f5ef66 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10f5ef6a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ef6d jne 0x10f5ef8b */
  if (!C.zf) goto L_10f5ef8b;
L_10f5ef6f:;
  /* 10f5ef6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5ef72 push edx */
  push32((uint32_t)(EDX));
  /* 10f5ef73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5ef76 push eax */
  push32((uint32_t)(EAX));
  /* 10f5ef77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ef7a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ef80 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5ef81 call 0x10f582b0 */
  push32(0x10f5ef86u); f_10f582b0();
  /* 10f5ef86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ef89 jmp 0x10f5ef90 */
  goto L_10f5ef90;
L_10f5ef8b:;
  /* 10f5ef8b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ef8e jmp 0x10f5efb9 */
  goto L_10f5efb9;
L_10f5ef90:;
  /* 10f5ef90 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10f5ef94 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ef97 jne 0x10f5ef9b */
  if (!C.zf) goto L_10f5ef9b;
  /* 10f5ef99 jmp 0x10f5efb7 */
  goto L_10f5efb7;
L_10f5ef9b:;
  /* 10f5ef9b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10f5ef9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5efa1 jne 0x10f5efa5 */
  if (!C.zf) goto L_10f5efa5;
  /* 10f5efa3 jmp 0x10f5efb7 */
  goto L_10f5efb7;
L_10f5efa5:;
  /* 10f5efa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5efa8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5efab lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10f5efaf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10f5efb2 jmp 0x10f5eec9 */
  goto L_10f5eec9;
L_10f5efb7:;
  /* 10f5efb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f5efb9:;
  /* 10f5efb9 mov esp, ebp */
  ESP = (EBP);
  /* 10f5efbb pop ebp */
  EBP = (pop32());
  /* 10f5efbc ret  */
  ESPCHK(0x10f5ee60u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10f5efc0 (101 bytes, 36 insns) */
void f_10f5efc0(void) {
  FTRACE(0x10f5efc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5efc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5efc1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5efc3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5efc6 push eax */
  push32((uint32_t)(EAX));
  /* 10f5efc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5efca push ecx */
  push32((uint32_t)(ECX));
  /* 10f5efcb call 0x10f57a40 */
  push32(0x10f5efd0u); f_10f57a40();
  /* 10f5efd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5efd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5efd6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10f5efda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5efdc je 0x10f5eff8 */
  if (C.zf) goto L_10f5eff8;
  /* 10f5efde mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5efe1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5efe4 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5efe5 push 0x10f7c190 */
  push32((uint32_t)(0x10f7c190u));
  /* 10f5efea push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5efec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5efef push edx */
  push32((uint32_t)(EDX));
  /* 10f5eff0 call 0x10f5ee10 */
  push32(0x10f5eff5u); f_10f5ee10();
  /* 10f5eff5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5eff8:;
  /* 10f5eff8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5effb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10f5f002 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5f004 je 0x10f5f023 */
  if (C.zf) goto L_10f5f023;
  /* 10f5f006 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5f009 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f00f push edx */
  push32((uint32_t)(EDX));
  /* 10f5f010 push 0x10f7c18c */
  push32((uint32_t)(0x10f7c18cu));
  /* 10f5f015 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f017 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f01a push eax */
  push32((uint32_t)(EAX));
  /* 10f5f01b call 0x10f5ee10 */
  push32(0x10f5f020u); f_10f5ee10();
  /* 10f5f020 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5f023:;
  /* 10f5f023 pop ebp */
  EBP = (pop32());
  /* 10f5f024 ret  */
  ESPCHK(0x10f5efc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f030 @ 0x10f5f030 (130 bytes, 50 insns) */
void f_10f5f030(void) {
  FTRACE(0x10f5f030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5f030 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5f031 mov ebp, esp */
  EBP = (ESP);
  /* 10f5f033 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5f034 push ebx */
  push32((uint32_t)(EBX));
  /* 10f5f035 push esi */
  push32((uint32_t)(ESI));
  /* 10f5f036 push edi */
  push32((uint32_t)(EDI));
  /* 10f5f037 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10f5f03e:;
  /* 10f5f03e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5f042 jne 0x10f5f062 */
  if (!C.zf) goto L_10f5f062;
  /* 10f5f044 push 0x10f7c1a0 */
  push32((uint32_t)(0x10f7c1a0u));
  /* 10f5f049 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5f04b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10f5f04d push 0x10f7c194 */
  push32((uint32_t)(0x10f7c194u));
  /* 10f5f052 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f054 call 0x10f53b50 */
  push32(0x10f5f059u); f_10f53b50();
  /* 10f5f059 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f05c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5f05f jne 0x10f5f062 */
  if (!C.zf) goto L_10f5f062;
  /* 10f5f061 int3  */
  x86_unimpl("int3 @ 0x10f5f061");
L_10f5f062:;
  /* 10f5f062 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5f064 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5f066 jne 0x10f5f03e */
  if (!C.zf) goto L_10f5f03e;
  /* 10f5f068 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f06b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f5f06e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5f071 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5f073 je 0x10f5f081 */
  if (C.zf) goto L_10f5f081;
  /* 10f5f075 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f078 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10f5f07f jmp 0x10f5f0a8 */
  goto L_10f5f0a8;
L_10f5f081:;
  /* 10f5f081 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f084 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5f085 call 0x10f5d8a0 */
  push32(0x10f5f08au); f_10f5d8a0();
  /* 10f5f08a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f08d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f090 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f091 call 0x10f5f0c0 */
  push32(0x10f5f096u); f_10f5f0c0();
  /* 10f5f096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f099 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5f09c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f09f push eax */
  push32((uint32_t)(EAX));
  /* 10f5f0a0 call 0x10f5d910 */
  push32(0x10f5f0a5u); f_10f5d910();
  /* 10f5f0a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5f0a8:;
  /* 10f5f0a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f0ab pop edi */
  EDI = (pop32());
  /* 10f5f0ac pop esi */
  ESI = (pop32());
  /* 10f5f0ad pop ebx */
  EBX = (pop32());
  /* 10f5f0ae mov esp, ebp */
  ESP = (EBP);
  /* 10f5f0b0 pop ebp */
  EBP = (pop32());
  /* 10f5f0b1 ret  */
  ESPCHK(0x10f5f030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0c0 @ 0x10f5f0c0 (190 bytes, 67 insns) */
void f_10f5f0c0(void) {
  FTRACE(0x10f5f0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5f0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5f0c1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5f0c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5f0c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f5f0c7 push esi */
  push32((uint32_t)(ESI));
  /* 10f5f0c8 push edi */
  push32((uint32_t)(EDI));
  /* 10f5f0c9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10f5f0d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f0d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f5f0d6:;
  /* 10f5f0d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5f0da jne 0x10f5f0fa */
  if (!C.zf) goto L_10f5f0fa;
  /* 10f5f0dc push 0x10f7c044 */
  push32((uint32_t)(0x10f7c044u));
  /* 10f5f0e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5f0e3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10f5f0e5 push 0x10f7c194 */
  push32((uint32_t)(0x10f7c194u));
  /* 10f5f0ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f0ec call 0x10f53b50 */
  push32(0x10f5f0f1u); f_10f53b50();
  /* 10f5f0f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f0f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5f0f7 jne 0x10f5f0fa */
  if (!C.zf) goto L_10f5f0fa;
  /* 10f5f0f9 int3  */
  x86_unimpl("int3 @ 0x10f5f0f9");
L_10f5f0fa:;
  /* 10f5f0fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f0fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5f0fe jne 0x10f5f0d6 */
  if (!C.zf) goto L_10f5f0d6;
  /* 10f5f100 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5f103 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10f5f106 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5f10b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5f10d je 0x10f5f16a */
  if (C.zf) goto L_10f5f16a;
  /* 10f5f10f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5f112 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5f113 call 0x10f5e3c0 */
  push32(0x10f5f118u); f_10f5e3c0();
  /* 10f5f118 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f11b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5f11e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5f121 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f122 call 0x10f61740 */
  push32(0x10f5f127u); f_10f61740();
  /* 10f5f127 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f12a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5f12d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f5f130 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5f131 call 0x10f61610 */
  push32(0x10f5f136u); f_10f61610();
  /* 10f5f136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5f13b jge 0x10f5f146 */
  if ((C.sf==C.of)) goto L_10f5f146;
  /* 10f5f13d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10f5f144 jmp 0x10f5f16a */
  goto L_10f5f16a;
L_10f5f146:;
  /* 10f5f146 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5f149 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5f14d je 0x10f5f16a */
  if (C.zf) goto L_10f5f16a;
  /* 10f5f14f push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f151 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5f154 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10f5f157 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5f158 call 0x10f55520 */
  push32(0x10f5f15du); f_10f55520();
  /* 10f5f15d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f160 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5f163 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10f5f16a:;
  /* 10f5f16a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5f16d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10f5f174 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f177 pop edi */
  EDI = (pop32());
  /* 10f5f178 pop esi */
  ESI = (pop32());
  /* 10f5f179 pop ebx */
  EBX = (pop32());
  /* 10f5f17a mov esp, ebp */
  ESP = (EBP);
  /* 10f5f17c pop ebp */
  EBP = (pop32());
  /* 10f5f17d ret  */
  ESPCHK(0x10f5f0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f180 @ 0x10f5f180 (210 bytes, 63 insns) */
void f_10f5f180(void) {
  FTRACE(0x10f5f180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5f180 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5f181 mov ebp, esp */
  EBP = (ESP);
  /* 10f5f183 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5f184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f187 cmp eax, dword ptr [0x10f820dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f820dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5f18d jae 0x10f5f1b1 */
  if (!C.cf) goto L_10f5f1b1;
  /* 10f5f18f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f192 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f5f195 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f198 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5f19b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5f19e mov eax, dword ptr [ecx*4 + 0x10f81fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f81fa0)));
  /* 10f5f1a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10f5f1aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f1ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5f1af jne 0x10f5f1c4 */
  if (!C.zf) goto L_10f5f1c4;
L_10f5f1b1:;
  /* 10f5f1b1 call 0x10f5c960 */
  push32(0x10f5f1b6u); f_10f5c960();
  /* 10f5f1b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f5f1bc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5f1bf jmp 0x10f5f24e */
  goto L_10f5f24e;
L_10f5f1c4:;
  /* 10f5f1c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f1c7 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f1c8 call 0x10f5e180 */
  push32(0x10f5f1cdu); f_10f5e180();
  /* 10f5f1cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f1d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f1d3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f5f1d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f1d9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f1dc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5f1df mov edx, dword ptr [eax*4 + 0x10f81fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f81fa0)));
  /* 10f5f1e6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10f5f1eb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5f1ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5f1f0 je 0x10f5f22d */
  if (C.zf) goto L_10f5f22d;
  /* 10f5f1f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f1f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5f1f6 call 0x10f5e000 */
  push32(0x10f5f1fbu); f_10f5e000();
  /* 10f5f1fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f1fe push eax */
  push32((uint32_t)(EAX));
  /* 10f5f1ff call dword ptr [0x10f832d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832d8))), 0x10f5f205u);
  /* 10f5f205 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5f207 jne 0x10f5f214 */
  if (!C.zf) goto L_10f5f214;
  /* 10f5f209 call dword ptr [0x10f83390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83390))), 0x10f5f20fu);
  /* 10f5f20f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5f212 jmp 0x10f5f21b */
  goto L_10f5f21b;
L_10f5f214:;
  /* 10f5f214 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f5f21b:;
  /* 10f5f21b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5f21f jne 0x10f5f223 */
  if (!C.zf) goto L_10f5f223;
  /* 10f5f221 jmp 0x10f5f23f */
  goto L_10f5f23f;
L_10f5f223:;
  /* 10f5f223 call 0x10f5c970 */
  push32(0x10f5f228u); f_10f5c970();
  /* 10f5f228 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f22b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10f5f22d:;
  /* 10f5f22d call 0x10f5c960 */
  push32(0x10f5f232u); f_10f5c960();
  /* 10f5f232 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f5f238 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10f5f23f:;
  /* 10f5f23f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f242 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f243 call 0x10f5e210 */
  push32(0x10f5f248u); f_10f5e210();
  /* 10f5f248 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f24b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f5f24e:;
  /* 10f5f24e mov esp, ebp */
  ESP = (EBP);
  /* 10f5f250 pop ebp */
  EBP = (pop32());
  /* 10f5f251 ret  */
  ESPCHK(0x10f5f180u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10f5f260 (219 bytes, 64 insns) */
void f_10f5f260(void) {
  FTRACE(0x10f5f260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5f260 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5f261 mov ebp, esp */
  EBP = (ESP);
  /* 10f5f263 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5f264 cmp dword ptr [0x10f807cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f807cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5f26b je 0x10f5f301 */
  if (C.zf) goto L_10f5f301;
  /* 10f5f271 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10f5f273 push 0x10f7c1b0 */
  push32((uint32_t)(0x10f7c1b0u));
  /* 10f5f278 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f27a push 0xac */
  push32((uint32_t)(0xacu));
  /* 10f5f27f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f281 call 0x10f54ea0 */
  push32(0x10f5f286u); f_10f54ea0();
  /* 10f5f286 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f289 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5f28c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5f290 jne 0x10f5f29c */
  if (!C.zf) goto L_10f5f29c;
  /* 10f5f292 mov eax, 1 */
  EAX = (0x1u);
  /* 10f5f297 jmp 0x10f5f337 */
  goto L_10f5f337;
L_10f5f29c:;
  /* 10f5f29c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f29f push eax */
  push32((uint32_t)(EAX));
  /* 10f5f2a0 call 0x10f5f340 */
  push32(0x10f5f2a5u); f_10f5f340();
  /* 10f5f2a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f2a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5f2aa je 0x10f5f2cd */
  if (C.zf) goto L_10f5f2cd;
  /* 10f5f2ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f2af push ecx */
  push32((uint32_t)(ECX));
  /* 10f5f2b0 call 0x10f5f8d0 */
  push32(0x10f5f2b5u); f_10f5f8d0();
  /* 10f5f2b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f2b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f2ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f2bd push edx */
  push32((uint32_t)(EDX));
  /* 10f5f2be call 0x10f55520 */
  push32(0x10f5f2c3u); f_10f55520();
  /* 10f5f2c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f2c6 mov eax, 1 */
  EAX = (0x1u);
  /* 10f5f2cb jmp 0x10f5f337 */
  goto L_10f5f337;
L_10f5f2cd:;
  /* 10f5f2cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f2d0 mov dword ptr [0x10f7fc98], eax */
  w32((uint32_t)(0x10f7fc98), (EAX));
  /* 10f5f2d5 mov ecx, dword ptr [0x10f807ec] */
  ECX = (r32((uint32_t)(0x10f807ec)));
  /* 10f5f2db push ecx */
  push32((uint32_t)(ECX));
  /* 10f5f2dc call 0x10f5f8d0 */
  push32(0x10f5f2e1u); f_10f5f8d0();
  /* 10f5f2e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f2e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f2e6 mov edx, dword ptr [0x10f807ec] */
  EDX = (r32((uint32_t)(0x10f807ec)));
  /* 10f5f2ec push edx */
  push32((uint32_t)(EDX));
  /* 10f5f2ed call 0x10f55520 */
  push32(0x10f5f2f2u); f_10f55520();
  /* 10f5f2f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f2f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f2f8 mov dword ptr [0x10f807ec], eax */
  w32((uint32_t)(0x10f807ec), (EAX));
  /* 10f5f2fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5f2ff jmp 0x10f5f337 */
  goto L_10f5f337;
L_10f5f301:;
  /* 10f5f301 mov dword ptr [0x10f7fc98], 0x10f7fca0 */
  w32((uint32_t)(0x10f7fc98), (0x10f7fca0u));
  /* 10f5f30b mov ecx, dword ptr [0x10f807ec] */
  ECX = (r32((uint32_t)(0x10f807ec)));
  /* 10f5f311 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5f312 call 0x10f5f8d0 */
  push32(0x10f5f317u); f_10f5f8d0();
  /* 10f5f317 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f31a push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f31c mov edx, dword ptr [0x10f807ec] */
  EDX = (r32((uint32_t)(0x10f807ec)));
  /* 10f5f322 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f323 call 0x10f55520 */
  push32(0x10f5f328u); f_10f55520();
  /* 10f5f328 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f32b mov dword ptr [0x10f807ec], 0 */
  w32((uint32_t)(0x10f807ec), (0x0u));
  /* 10f5f335 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f5f337:;
  /* 10f5f337 mov esp, ebp */
  ESP = (EBP);
  /* 10f5f339 pop ebp */
  EBP = (pop32());
  /* 10f5f33a ret  */
  ESPCHK(0x10f5f260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f340 @ 0x10f5f340 (1423 bytes, 533 insns) */
void f_10f5f340(void) {
  FTRACE(0x10f5f340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5f340 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5f341 mov ebp, esp */
  EBP = (ESP);
  /* 10f5f343 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5f346 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f5f34d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5f34f mov ax, word ptr [0x10f80826] */
  AX = (r16((uint32_t)(0x10f80826)));
  /* 10f5f355 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5f358 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f35a mov cx, word ptr [0x10f80828] */
  CX = (r16((uint32_t)(0x10f80828)));
  /* 10f5f361 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f5f364 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5f368 jne 0x10f5f372 */
  if (!C.zf) goto L_10f5f372;
  /* 10f5f36a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5f36d jmp 0x10f5f8cb */
  goto L_10f5f8cb;
L_10f5f372:;
  /* 10f5f372 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f375 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f378 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f379 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10f5f37b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f37e push eax */
  push32((uint32_t)(EAX));
  /* 10f5f37f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f381 call 0x10f62c50 */
  push32(0x10f5f386u); f_10f62c50();
  /* 10f5f386 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f389 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f38c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f38e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f391 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f394 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f397 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f398 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10f5f39a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f39d push eax */
  push32((uint32_t)(EAX));
  /* 10f5f39e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f3a0 call 0x10f62c50 */
  push32(0x10f5f3a5u); f_10f62c50();
  /* 10f5f3a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f3a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f3ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f3ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f3b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f3b3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f3b6 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f3b7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10f5f3b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f3bc push eax */
  push32((uint32_t)(EAX));
  /* 10f5f3bd push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f3bf call 0x10f62c50 */
  push32(0x10f5f3c4u); f_10f62c50();
  /* 10f5f3c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f3c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f3ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f3cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f3cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f3d2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f3d5 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f3d6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10f5f3d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f3db push eax */
  push32((uint32_t)(EAX));
  /* 10f5f3dc push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f3de call 0x10f62c50 */
  push32(0x10f5f3e3u); f_10f62c50();
  /* 10f5f3e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f3e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f3e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f3eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f3ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f3f1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f3f4 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f3f5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10f5f3f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f3fa push eax */
  push32((uint32_t)(EAX));
  /* 10f5f3fb push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f3fd call 0x10f62c50 */
  push32(0x10f5f402u); f_10f62c50();
  /* 10f5f402 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f405 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f408 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f40a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f40d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f410 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f413 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f414 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10f5f416 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f419 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f41a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f41c call 0x10f62c50 */
  push32(0x10f5f421u); f_10f62c50();
  /* 10f5f421 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f424 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f427 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f429 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f42c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f42f push edx */
  push32((uint32_t)(EDX));
  /* 10f5f430 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10f5f432 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f435 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f436 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f438 call 0x10f62c50 */
  push32(0x10f5f43du); f_10f62c50();
  /* 10f5f43d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f440 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f443 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f445 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f448 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f44b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f44e push edx */
  push32((uint32_t)(EDX));
  /* 10f5f44f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10f5f451 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f454 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f455 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f457 call 0x10f62c50 */
  push32(0x10f5f45cu); f_10f62c50();
  /* 10f5f45c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f45f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f462 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f464 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f467 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f46a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f46d push edx */
  push32((uint32_t)(EDX));
  /* 10f5f46e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10f5f470 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f473 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f474 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f476 call 0x10f62c50 */
  push32(0x10f5f47bu); f_10f62c50();
  /* 10f5f47b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f47e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f481 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f483 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f486 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f489 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f48c push edx */
  push32((uint32_t)(EDX));
  /* 10f5f48d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10f5f48f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f492 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f493 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f495 call 0x10f62c50 */
  push32(0x10f5f49au); f_10f62c50();
  /* 10f5f49a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f49d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f4a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f4a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f4a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f4a8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f4ab push edx */
  push32((uint32_t)(EDX));
  /* 10f5f4ac push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10f5f4ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f4b1 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f4b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f4b4 call 0x10f62c50 */
  push32(0x10f5f4b9u); f_10f62c50();
  /* 10f5f4b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f4bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f4bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f4c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f4c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f4c7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f4ca push edx */
  push32((uint32_t)(EDX));
  /* 10f5f4cb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10f5f4cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f4d0 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f4d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f4d3 call 0x10f62c50 */
  push32(0x10f5f4d8u); f_10f62c50();
  /* 10f5f4d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f4db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f4de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f4e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f4e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f4e6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f4e9 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f4ea push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10f5f4ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f4ef push eax */
  push32((uint32_t)(EAX));
  /* 10f5f4f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f4f2 call 0x10f62c50 */
  push32(0x10f5f4f7u); f_10f62c50();
  /* 10f5f4f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f4fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f4fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f4ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f502 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f505 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f508 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f509 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10f5f50b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f50e push eax */
  push32((uint32_t)(EAX));
  /* 10f5f50f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f511 call 0x10f62c50 */
  push32(0x10f5f516u); f_10f62c50();
  /* 10f5f516 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f519 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f51c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f51e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f521 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f524 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f527 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f528 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10f5f52a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f52d push eax */
  push32((uint32_t)(EAX));
  /* 10f5f52e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f530 call 0x10f62c50 */
  push32(0x10f5f535u); f_10f62c50();
  /* 10f5f535 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f538 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f53b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f53d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f540 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f543 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f546 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f547 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10f5f549 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f54c push eax */
  push32((uint32_t)(EAX));
  /* 10f5f54d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f54f call 0x10f62c50 */
  push32(0x10f5f554u); f_10f62c50();
  /* 10f5f554 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f557 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f55a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f55c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f55f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f562 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f565 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f566 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10f5f568 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f56b push eax */
  push32((uint32_t)(EAX));
  /* 10f5f56c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f56e call 0x10f62c50 */
  push32(0x10f5f573u); f_10f62c50();
  /* 10f5f573 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f576 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f579 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f57b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f57e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f581 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f584 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f585 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10f5f587 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f58a push eax */
  push32((uint32_t)(EAX));
  /* 10f5f58b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f58d call 0x10f62c50 */
  push32(0x10f5f592u); f_10f62c50();
  /* 10f5f592 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f595 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f598 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f59a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f59d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f5a0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f5a3 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f5a4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10f5f5a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f5a9 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f5aa push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f5ac call 0x10f62c50 */
  push32(0x10f5f5b1u); f_10f62c50();
  /* 10f5f5b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f5b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f5b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f5b9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f5bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f5bf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f5c2 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f5c3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10f5f5c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f5c8 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f5c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f5cb call 0x10f62c50 */
  push32(0x10f5f5d0u); f_10f62c50();
  /* 10f5f5d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f5d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f5d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f5d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f5db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f5de add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f5e1 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f5e2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10f5f5e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f5e7 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f5e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f5ea call 0x10f62c50 */
  push32(0x10f5f5efu); f_10f62c50();
  /* 10f5f5ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f5f2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f5f5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f5f7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f5fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f5fd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f600 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f601 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10f5f603 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f606 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f607 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f609 call 0x10f62c50 */
  push32(0x10f5f60eu); f_10f62c50();
  /* 10f5f60e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f611 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f614 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f616 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f619 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f61c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f61f push edx */
  push32((uint32_t)(EDX));
  /* 10f5f620 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10f5f622 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f625 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f626 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f628 call 0x10f62c50 */
  push32(0x10f5f62du); f_10f62c50();
  /* 10f5f62d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f630 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f633 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f635 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f638 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f63b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f63e push edx */
  push32((uint32_t)(EDX));
  /* 10f5f63f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10f5f641 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f644 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f645 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f647 call 0x10f62c50 */
  push32(0x10f5f64cu); f_10f62c50();
  /* 10f5f64c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f64f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f652 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f654 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f657 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f65a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f65d push edx */
  push32((uint32_t)(EDX));
  /* 10f5f65e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10f5f660 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f663 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f664 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f666 call 0x10f62c50 */
  push32(0x10f5f66bu); f_10f62c50();
  /* 10f5f66b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f66e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f671 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f673 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f676 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f679 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f67c push edx */
  push32((uint32_t)(EDX));
  /* 10f5f67d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10f5f67f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f682 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f683 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f685 call 0x10f62c50 */
  push32(0x10f5f68au); f_10f62c50();
  /* 10f5f68a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f68d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f690 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f692 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f695 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f698 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f69b push edx */
  push32((uint32_t)(EDX));
  /* 10f5f69c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10f5f69e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f6a1 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f6a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f6a4 call 0x10f62c50 */
  push32(0x10f5f6a9u); f_10f62c50();
  /* 10f5f6a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f6ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f6af or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f6b1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f6b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f6b7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f6ba push edx */
  push32((uint32_t)(EDX));
  /* 10f5f6bb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10f5f6bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f6c0 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f6c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f6c3 call 0x10f62c50 */
  push32(0x10f5f6c8u); f_10f62c50();
  /* 10f5f6c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f6cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f6ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f6d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f6d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f6d6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f6d9 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f6da push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10f5f6dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f6df push eax */
  push32((uint32_t)(EAX));
  /* 10f5f6e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f6e2 call 0x10f62c50 */
  push32(0x10f5f6e7u); f_10f62c50();
  /* 10f5f6e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f6ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f6ed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f6ef mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f6f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f6f5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f6f8 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f6f9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10f5f6fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f6fe push eax */
  push32((uint32_t)(EAX));
  /* 10f5f6ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f701 call 0x10f62c50 */
  push32(0x10f5f706u); f_10f62c50();
  /* 10f5f706 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f709 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f70c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f70e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f711 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f714 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f717 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f718 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10f5f71a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f71d push eax */
  push32((uint32_t)(EAX));
  /* 10f5f71e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f720 call 0x10f62c50 */
  push32(0x10f5f725u); f_10f62c50();
  /* 10f5f725 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f728 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f72b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f72d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f730 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f733 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f736 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f737 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10f5f739 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f73c push eax */
  push32((uint32_t)(EAX));
  /* 10f5f73d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f73f call 0x10f62c50 */
  push32(0x10f5f744u); f_10f62c50();
  /* 10f5f744 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f747 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f74a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f74c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f74f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f752 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f758 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f759 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10f5f75b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f75e push eax */
  push32((uint32_t)(EAX));
  /* 10f5f75f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f761 call 0x10f62c50 */
  push32(0x10f5f766u); f_10f62c50();
  /* 10f5f766 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f769 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f76c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f76e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f771 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f774 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f77a push edx */
  push32((uint32_t)(EDX));
  /* 10f5f77b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10f5f77d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f780 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f781 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f783 call 0x10f62c50 */
  push32(0x10f5f788u); f_10f62c50();
  /* 10f5f788 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f78b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f78e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f790 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f793 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f796 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f79c push edx */
  push32((uint32_t)(EDX));
  /* 10f5f79d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10f5f79f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f7a2 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f7a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f7a5 call 0x10f62c50 */
  push32(0x10f5f7aau); f_10f62c50();
  /* 10f5f7aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f7ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f7b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f7b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f7b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f7b8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f7be push edx */
  push32((uint32_t)(EDX));
  /* 10f5f7bf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10f5f7c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f7c4 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f7c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f7c7 call 0x10f62c50 */
  push32(0x10f5f7ccu); f_10f62c50();
  /* 10f5f7cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f7cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f7d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f7d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f7d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f7da add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f7e0 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f7e1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10f5f7e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f7e6 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f7e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f7e9 call 0x10f62c50 */
  push32(0x10f5f7eeu); f_10f62c50();
  /* 10f5f7ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f7f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f7f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f7f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f7f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f7fc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f802 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f803 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10f5f805 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f808 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f809 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f80b call 0x10f62c50 */
  push32(0x10f5f810u); f_10f62c50();
  /* 10f5f810 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f813 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f816 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f818 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f81b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f81e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f824 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f825 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10f5f827 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f82a push eax */
  push32((uint32_t)(EAX));
  /* 10f5f82b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f82d call 0x10f62c50 */
  push32(0x10f5f832u); f_10f62c50();
  /* 10f5f832 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f835 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f838 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f83a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f83d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f840 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f846 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f847 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10f5f849 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5f84c push eax */
  push32((uint32_t)(EAX));
  /* 10f5f84d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f84f call 0x10f62c50 */
  push32(0x10f5f854u); f_10f62c50();
  /* 10f5f854 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f857 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f85a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f85c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f85f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f862 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f868 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f869 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10f5f86b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5f86e push eax */
  push32((uint32_t)(EAX));
  /* 10f5f86f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f871 call 0x10f62c50 */
  push32(0x10f5f876u); f_10f62c50();
  /* 10f5f876 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f879 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f87c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f87e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f881 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f884 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f88a push edx */
  push32((uint32_t)(EDX));
  /* 10f5f88b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10f5f88d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5f890 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f891 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f893 call 0x10f62c50 */
  push32(0x10f5f898u); f_10f62c50();
  /* 10f5f898 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f89b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f89e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f8a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f8a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f8a6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f8ac push edx */
  push32((uint32_t)(EDX));
  /* 10f5f8ad push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10f5f8b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5f8b5 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f8b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5f8b8 call 0x10f62c50 */
  push32(0x10f5f8bdu); f_10f62c50();
  /* 10f5f8bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f8c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5f8c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5f8c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5f8c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10f5f8cb:;
  /* 10f5f8cb mov esp, ebp */
  ESP = (EBP);
  /* 10f5f8cd pop ebp */
  EBP = (pop32());
  /* 10f5f8ce ret  */
  ESPCHK(0x10f5f340u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10f5f8d0 (779 bytes, 265 insns) */
void f_10f5f8d0(void) {
  FTRACE(0x10f5f8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5f8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5f8d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5f8d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5f8d7 jne 0x10f5f8de */
  if (!C.zf) goto L_10f5f8de;
  /* 10f5f8d9 jmp 0x10f5fbd9 */
  goto L_10f5fbd9;
L_10f5f8de:;
  /* 10f5f8de push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f8e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f8e3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f5f8e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5f8e7 call 0x10f55520 */
  push32(0x10f5f8ecu); f_10f55520();
  /* 10f5f8ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f8ef push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f8f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f8f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f5f8f7 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f8f8 call 0x10f55520 */
  push32(0x10f5f8fdu); f_10f55520();
  /* 10f5f8fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f900 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f902 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f905 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f5f908 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f909 call 0x10f55520 */
  push32(0x10f5f90eu); f_10f55520();
  /* 10f5f90e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f911 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f916 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f5f919 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5f91a call 0x10f55520 */
  push32(0x10f5f91fu); f_10f55520();
  /* 10f5f91f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f922 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f924 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f927 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f5f92a push eax */
  push32((uint32_t)(EAX));
  /* 10f5f92b call 0x10f55520 */
  push32(0x10f5f930u); f_10f55520();
  /* 10f5f930 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f933 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f935 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f938 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10f5f93b push edx */
  push32((uint32_t)(EDX));
  /* 10f5f93c call 0x10f55520 */
  push32(0x10f5f941u); f_10f55520();
  /* 10f5f941 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f944 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f949 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f5f94b push ecx */
  push32((uint32_t)(ECX));
  /* 10f5f94c call 0x10f55520 */
  push32(0x10f5f951u); f_10f55520();
  /* 10f5f951 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f954 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f956 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f959 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10f5f95c push eax */
  push32((uint32_t)(EAX));
  /* 10f5f95d call 0x10f55520 */
  push32(0x10f5f962u); f_10f55520();
  /* 10f5f962 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f965 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f967 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f96a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10f5f96d push edx */
  push32((uint32_t)(EDX));
  /* 10f5f96e call 0x10f55520 */
  push32(0x10f5f973u); f_10f55520();
  /* 10f5f973 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f976 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f978 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f97b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10f5f97e push ecx */
  push32((uint32_t)(ECX));
  /* 10f5f97f call 0x10f55520 */
  push32(0x10f5f984u); f_10f55520();
  /* 10f5f984 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f987 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f989 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f98c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10f5f98f push eax */
  push32((uint32_t)(EAX));
  /* 10f5f990 call 0x10f55520 */
  push32(0x10f5f995u); f_10f55520();
  /* 10f5f995 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f998 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f99a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f99d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10f5f9a0 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f9a1 call 0x10f55520 */
  push32(0x10f5f9a6u); f_10f55520();
  /* 10f5f9a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f9a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f9ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f9ae mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10f5f9b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5f9b2 call 0x10f55520 */
  push32(0x10f5f9b7u); f_10f55520();
  /* 10f5f9b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f9ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f9bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f9bf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10f5f9c2 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f9c3 call 0x10f55520 */
  push32(0x10f5f9c8u); f_10f55520();
  /* 10f5f9c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f9cb push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f9cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f9d0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10f5f9d3 push edx */
  push32((uint32_t)(EDX));
  /* 10f5f9d4 call 0x10f55520 */
  push32(0x10f5f9d9u); f_10f55520();
  /* 10f5f9d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f9dc push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f9de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f9e1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10f5f9e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5f9e5 call 0x10f55520 */
  push32(0x10f5f9eau); f_10f55520();
  /* 10f5f9ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f9ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5f9ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5f9f2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10f5f9f5 push eax */
  push32((uint32_t)(EAX));
  /* 10f5f9f6 call 0x10f55520 */
  push32(0x10f5f9fbu); f_10f55520();
  /* 10f5f9fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5f9fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fa00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fa03 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10f5fa06 push edx */
  push32((uint32_t)(EDX));
  /* 10f5fa07 call 0x10f55520 */
  push32(0x10f5fa0cu); f_10f55520();
  /* 10f5fa0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fa0f push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fa11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fa14 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10f5fa17 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5fa18 call 0x10f55520 */
  push32(0x10f5fa1du); f_10f55520();
  /* 10f5fa1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fa20 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fa22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fa25 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10f5fa28 push eax */
  push32((uint32_t)(EAX));
  /* 10f5fa29 call 0x10f55520 */
  push32(0x10f5fa2eu); f_10f55520();
  /* 10f5fa2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fa31 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fa33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fa36 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10f5fa39 push edx */
  push32((uint32_t)(EDX));
  /* 10f5fa3a call 0x10f55520 */
  push32(0x10f5fa3fu); f_10f55520();
  /* 10f5fa3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fa42 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fa44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fa47 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10f5fa4a push ecx */
  push32((uint32_t)(ECX));
  /* 10f5fa4b call 0x10f55520 */
  push32(0x10f5fa50u); f_10f55520();
  /* 10f5fa50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fa53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fa55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fa58 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10f5fa5b push eax */
  push32((uint32_t)(EAX));
  /* 10f5fa5c call 0x10f55520 */
  push32(0x10f5fa61u); f_10f55520();
  /* 10f5fa61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fa64 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fa66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fa69 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10f5fa6c push edx */
  push32((uint32_t)(EDX));
  /* 10f5fa6d call 0x10f55520 */
  push32(0x10f5fa72u); f_10f55520();
  /* 10f5fa72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fa75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fa77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fa7a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10f5fa7d push ecx */
  push32((uint32_t)(ECX));
  /* 10f5fa7e call 0x10f55520 */
  push32(0x10f5fa83u); f_10f55520();
  /* 10f5fa83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fa86 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fa88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fa8b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10f5fa8e push eax */
  push32((uint32_t)(EAX));
  /* 10f5fa8f call 0x10f55520 */
  push32(0x10f5fa94u); f_10f55520();
  /* 10f5fa94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fa97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fa99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fa9c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10f5fa9f push edx */
  push32((uint32_t)(EDX));
  /* 10f5faa0 call 0x10f55520 */
  push32(0x10f5faa5u); f_10f55520();
  /* 10f5faa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5faa8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5faaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5faad mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10f5fab0 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5fab1 call 0x10f55520 */
  push32(0x10f5fab6u); f_10f55520();
  /* 10f5fab6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fab9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fabb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fabe mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10f5fac1 push eax */
  push32((uint32_t)(EAX));
  /* 10f5fac2 call 0x10f55520 */
  push32(0x10f5fac7u); f_10f55520();
  /* 10f5fac7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5faca push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5facc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5facf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10f5fad2 push edx */
  push32((uint32_t)(EDX));
  /* 10f5fad3 call 0x10f55520 */
  push32(0x10f5fad8u); f_10f55520();
  /* 10f5fad8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fadb push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fadd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fae0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10f5fae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5fae4 call 0x10f55520 */
  push32(0x10f5fae9u); f_10f55520();
  /* 10f5fae9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5faec push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5faee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5faf1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10f5faf4 push eax */
  push32((uint32_t)(EAX));
  /* 10f5faf5 call 0x10f55520 */
  push32(0x10f5fafau); f_10f55520();
  /* 10f5fafa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fafd push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5faff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fb02 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10f5fb08 push edx */
  push32((uint32_t)(EDX));
  /* 10f5fb09 call 0x10f55520 */
  push32(0x10f5fb0eu); f_10f55520();
  /* 10f5fb0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fb11 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fb13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fb16 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10f5fb1c push ecx */
  push32((uint32_t)(ECX));
  /* 10f5fb1d call 0x10f55520 */
  push32(0x10f5fb22u); f_10f55520();
  /* 10f5fb22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fb25 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fb27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fb2a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10f5fb30 push eax */
  push32((uint32_t)(EAX));
  /* 10f5fb31 call 0x10f55520 */
  push32(0x10f5fb36u); f_10f55520();
  /* 10f5fb36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fb39 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fb3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fb3e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10f5fb44 push edx */
  push32((uint32_t)(EDX));
  /* 10f5fb45 call 0x10f55520 */
  push32(0x10f5fb4au); f_10f55520();
  /* 10f5fb4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fb4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fb4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fb52 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10f5fb58 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5fb59 call 0x10f55520 */
  push32(0x10f5fb5eu); f_10f55520();
  /* 10f5fb5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fb61 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fb63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fb66 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10f5fb6c push eax */
  push32((uint32_t)(EAX));
  /* 10f5fb6d call 0x10f55520 */
  push32(0x10f5fb72u); f_10f55520();
  /* 10f5fb72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fb75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fb77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fb7a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10f5fb80 push edx */
  push32((uint32_t)(EDX));
  /* 10f5fb81 call 0x10f55520 */
  push32(0x10f5fb86u); f_10f55520();
  /* 10f5fb86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fb89 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fb8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fb8e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10f5fb94 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5fb95 call 0x10f55520 */
  push32(0x10f5fb9au); f_10f55520();
  /* 10f5fb9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fb9d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fb9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fba2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10f5fba8 push eax */
  push32((uint32_t)(EAX));
  /* 10f5fba9 call 0x10f55520 */
  push32(0x10f5fbaeu); f_10f55520();
  /* 10f5fbae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fbb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fbb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fbb6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10f5fbbc push edx */
  push32((uint32_t)(EDX));
  /* 10f5fbbd call 0x10f55520 */
  push32(0x10f5fbc2u); f_10f55520();
  /* 10f5fbc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fbc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fbc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fbca mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10f5fbd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5fbd1 call 0x10f55520 */
  push32(0x10f5fbd6u); f_10f55520();
  /* 10f5fbd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5fbd9:;
  /* 10f5fbd9 pop ebp */
  EBP = (pop32());
  /* 10f5fbda ret  */
  ESPCHK(0x10f5f8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbe0 @ 0x10f5fbe0 (678 bytes, 180 insns) */
void f_10f5fbe0(void) {
  FTRACE(0x10f5fbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5fbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5fbe1 mov ebp, esp */
  EBP = (ESP);
  /* 10f5fbe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5fbe6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f5fbed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5fbef mov ax, word ptr [0x10f80822] */
  AX = (r16((uint32_t)(0x10f80822)));
  /* 10f5fbf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5fbf8 cmp dword ptr [0x10f807c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f807c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5fbff je 0x10f5fd5a */
  if (C.zf) goto L_10f5fd5a;
  /* 10f5fc05 push 0x10f807f0 */
  push32((uint32_t)(0x10f807f0u));
  /* 10f5fc0a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10f5fc0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5fc0f push ecx */
  push32((uint32_t)(ECX));
  /* 10f5fc10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5fc12 call 0x10f62c50 */
  push32(0x10f5fc17u); f_10f62c50();
  /* 10f5fc17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fc1a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5fc1d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5fc1f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f5fc22 push 0x10f807f4 */
  push32((uint32_t)(0x10f807f4u));
  /* 10f5fc27 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10f5fc29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5fc2c push eax */
  push32((uint32_t)(EAX));
  /* 10f5fc2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5fc2f call 0x10f62c50 */
  push32(0x10f5fc34u); f_10f62c50();
  /* 10f5fc34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fc37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5fc3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5fc3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f5fc3f push 0x10f807f8 */
  push32((uint32_t)(0x10f807f8u));
  /* 10f5fc44 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10f5fc46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5fc49 push edx */
  push32((uint32_t)(EDX));
  /* 10f5fc4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5fc4c call 0x10f62c50 */
  push32(0x10f5fc51u); f_10f62c50();
  /* 10f5fc51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fc54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5fc57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5fc59 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f5fc5c mov edx, dword ptr [0x10f807f8] */
  EDX = (r32((uint32_t)(0x10f807f8)));
  /* 10f5fc62 push edx */
  push32((uint32_t)(EDX));
  /* 10f5fc63 call 0x10f5fe90 */
  push32(0x10f5fc68u); f_10f5fe90();
  /* 10f5fc68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fc6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5fc6f je 0x10f5fcc9 */
  if (C.zf) goto L_10f5fcc9;
  /* 10f5fc71 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fc73 mov eax, dword ptr [0x10f807f0] */
  EAX = (r32((uint32_t)(0x10f807f0)));
  /* 10f5fc78 push eax */
  push32((uint32_t)(EAX));
  /* 10f5fc79 call 0x10f55520 */
  push32(0x10f5fc7eu); f_10f55520();
  /* 10f5fc7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fc81 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fc83 mov ecx, dword ptr [0x10f807f4] */
  ECX = (r32((uint32_t)(0x10f807f4)));
  /* 10f5fc89 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5fc8a call 0x10f55520 */
  push32(0x10f5fc8fu); f_10f55520();
  /* 10f5fc8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fc92 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fc94 mov edx, dword ptr [0x10f807f8] */
  EDX = (r32((uint32_t)(0x10f807f8)));
  /* 10f5fc9a push edx */
  push32((uint32_t)(EDX));
  /* 10f5fc9b call 0x10f55520 */
  push32(0x10f5fca0u); f_10f55520();
  /* 10f5fca0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fca3 mov dword ptr [0x10f807f0], 0 */
  w32((uint32_t)(0x10f807f0), (0x0u));
  /* 10f5fcad mov dword ptr [0x10f807f4], 0 */
  w32((uint32_t)(0x10f807f4), (0x0u));
  /* 10f5fcb7 mov dword ptr [0x10f807f8], 0 */
  w32((uint32_t)(0x10f807f8), (0x0u));
  /* 10f5fcc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5fcc4 jmp 0x10f5fe82 */
  goto L_10f5fe82;
L_10f5fcc9:;
  /* 10f5fcc9 mov eax, dword ptr [0x10f7fd88] */
  EAX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fcce cmp dword ptr [eax], 0x10f7fd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10f7fd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5fcd4 je 0x10f5fd10 */
  if (C.zf) goto L_10f5fd10;
  /* 10f5fcd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fcd8 mov ecx, dword ptr [0x10f7fd88] */
  ECX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fcde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f5fce0 push edx */
  push32((uint32_t)(EDX));
  /* 10f5fce1 call 0x10f55520 */
  push32(0x10f5fce6u); f_10f55520();
  /* 10f5fce6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fce9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fceb mov eax, dword ptr [0x10f7fd88] */
  EAX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fcf0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f5fcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5fcf4 call 0x10f55520 */
  push32(0x10f5fcf9u); f_10f55520();
  /* 10f5fcf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fcfc push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fcfe mov edx, dword ptr [0x10f7fd88] */
  EDX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fd04 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f5fd07 push eax */
  push32((uint32_t)(EAX));
  /* 10f5fd08 call 0x10f55520 */
  push32(0x10f5fd0du); f_10f55520();
  /* 10f5fd0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5fd10:;
  /* 10f5fd10 mov ecx, dword ptr [0x10f7fd88] */
  ECX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fd16 mov edx, dword ptr [0x10f807f0] */
  EDX = (r32((uint32_t)(0x10f807f0)));
  /* 10f5fd1c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10f5fd1e mov eax, dword ptr [0x10f7fd88] */
  EAX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fd23 mov ecx, dword ptr [0x10f807f4] */
  ECX = (r32((uint32_t)(0x10f807f4)));
  /* 10f5fd29 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10f5fd2c mov edx, dword ptr [0x10f7fd88] */
  EDX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fd32 mov eax, dword ptr [0x10f807f8] */
  EAX = (r32((uint32_t)(0x10f807f8)));
  /* 10f5fd37 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10f5fd3a mov ecx, dword ptr [0x10f7fd88] */
  ECX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fd40 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f5fd42 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f5fd44 mov byte ptr [0x10f7eea8], al */
  w8((uint32_t)(0x10f7eea8), (AL));
  /* 10f5fd49 mov dword ptr [0x10f7eeac], 1 */
  w32((uint32_t)(0x10f7eeac), (0x1u));
  /* 10f5fd53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5fd55 jmp 0x10f5fe82 */
  goto L_10f5fe82;
L_10f5fd5a:;
  /* 10f5fd5a push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fd5c mov ecx, dword ptr [0x10f807f0] */
  ECX = (r32((uint32_t)(0x10f807f0)));
  /* 10f5fd62 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5fd63 call 0x10f55520 */
  push32(0x10f5fd68u); f_10f55520();
  /* 10f5fd68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fd6b push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fd6d mov edx, dword ptr [0x10f807f4] */
  EDX = (r32((uint32_t)(0x10f807f4)));
  /* 10f5fd73 push edx */
  push32((uint32_t)(EDX));
  /* 10f5fd74 call 0x10f55520 */
  push32(0x10f5fd79u); f_10f55520();
  /* 10f5fd79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fd7c push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fd7e mov eax, dword ptr [0x10f807f8] */
  EAX = (r32((uint32_t)(0x10f807f8)));
  /* 10f5fd83 push eax */
  push32((uint32_t)(EAX));
  /* 10f5fd84 call 0x10f55520 */
  push32(0x10f5fd89u); f_10f55520();
  /* 10f5fd89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fd8c mov dword ptr [0x10f807f0], 0 */
  w32((uint32_t)(0x10f807f0), (0x0u));
  /* 10f5fd96 mov dword ptr [0x10f807f4], 0 */
  w32((uint32_t)(0x10f807f4), (0x0u));
  /* 10f5fda0 mov dword ptr [0x10f807f8], 0 */
  w32((uint32_t)(0x10f807f8), (0x0u));
  /* 10f5fdaa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10f5fdaf push 0x10f7c1bc */
  push32((uint32_t)(0x10f7c1bcu));
  /* 10f5fdb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fdb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fdb8 call 0x10f54a90 */
  push32(0x10f5fdbdu); f_10f54a90();
  /* 10f5fdbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fdc0 mov ecx, dword ptr [0x10f7fd88] */
  ECX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fdc6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f5fdc8 mov edx, dword ptr [0x10f7fd88] */
  EDX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fdce cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5fdd1 jne 0x10f5fddb */
  if (!C.zf) goto L_10f5fddb;
  /* 10f5fdd3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5fdd6 jmp 0x10f5fe82 */
  goto L_10f5fe82;
L_10f5fddb:;
  /* 10f5fddb push 0x10f7c18c */
  push32((uint32_t)(0x10f7c18cu));
  /* 10f5fde0 mov eax, dword ptr [0x10f7fd88] */
  EAX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fde5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f5fde7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5fde8 call 0x10f57a40 */
  push32(0x10f5fdedu); f_10f57a40();
  /* 10f5fded add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fdf0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10f5fdf5 push 0x10f7c1bc */
  push32((uint32_t)(0x10f7c1bcu));
  /* 10f5fdfa push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fdfc push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fdfe call 0x10f54a90 */
  push32(0x10f5fe03u); f_10f54a90();
  /* 10f5fe03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fe06 mov edx, dword ptr [0x10f7fd88] */
  EDX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fe0c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10f5fe0f mov eax, dword ptr [0x10f7fd88] */
  EAX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fe14 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5fe18 jne 0x10f5fe1f */
  if (!C.zf) goto L_10f5fe1f;
  /* 10f5fe1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5fe1d jmp 0x10f5fe82 */
  goto L_10f5fe82;
L_10f5fe1f:;
  /* 10f5fe1f mov ecx, dword ptr [0x10f7fd88] */
  ECX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fe25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f5fe28 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10f5fe2b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10f5fe30 push 0x10f7c1bc */
  push32((uint32_t)(0x10f7c1bcu));
  /* 10f5fe35 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fe37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5fe39 call 0x10f54a90 */
  push32(0x10f5fe3eu); f_10f54a90();
  /* 10f5fe3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fe41 mov ecx, dword ptr [0x10f7fd88] */
  ECX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fe47 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10f5fe4a mov edx, dword ptr [0x10f7fd88] */
  EDX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fe50 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5fe54 jne 0x10f5fe5b */
  if (!C.zf) goto L_10f5fe5b;
  /* 10f5fe56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5fe59 jmp 0x10f5fe82 */
  goto L_10f5fe82;
L_10f5fe5b:;
  /* 10f5fe5b mov eax, dword ptr [0x10f7fd88] */
  EAX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fe60 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f5fe63 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10f5fe66 mov edx, dword ptr [0x10f7fd88] */
  EDX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fe6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f5fe6e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f5fe70 mov byte ptr [0x10f7eea8], cl */
  w8((uint32_t)(0x10f7eea8), (CL));
  /* 10f5fe76 mov dword ptr [0x10f7eeac], 1 */
  w32((uint32_t)(0x10f7eeac), (0x1u));
  /* 10f5fe80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f5fe82:;
  /* 10f5fe82 mov esp, ebp */
  ESP = (EBP);
  /* 10f5fe84 pop ebp */
  EBP = (pop32());
  /* 10f5fe85 ret  */
  ESPCHK(0x10f5fbe0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10f5fe90 (125 bytes, 49 insns) */
void f_10f5fe90(void) {
  FTRACE(0x10f5fe90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5fe90 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5fe91 mov ebp, esp */
  EBP = (ESP);
  /* 10f5fe93 push ecx */
  push32((uint32_t)(ECX));
L_10f5fe94:;
  /* 10f5fe94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fe97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f5fe9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5fe9c je 0x10f5ff09 */
  if (C.zf) goto L_10f5ff09;
  /* 10f5fe9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fea1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f5fea4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5fea7 jl 0x10f5fecd */
  if ((C.sf!=C.of)) goto L_10f5fecd;
  /* 10f5fea9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5feac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f5feaf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5feb2 jg 0x10f5fecd */
  if ((!C.zf&&C.sf==C.of)) goto L_10f5fecd;
  /* 10f5feb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5feb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f5feba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5febd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fec0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10f5fec2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fec5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5fec8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f5fecb jmp 0x10f5ff07 */
  goto L_10f5ff07;
L_10f5fecd:;
  /* 10f5fecd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fed0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f5fed3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5fed6 jne 0x10f5fefe */
  if (!C.zf) goto L_10f5fefe;
  /* 10f5fed8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5fedb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f5fede:;
  /* 10f5fede mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5fee1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5fee4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10f5fee7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10f5fee9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5feec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5feef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f5fef2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5fef5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f5fef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5fefa jne 0x10f5fede */
  if (!C.zf) goto L_10f5fede;
  /* 10f5fefc jmp 0x10f5ff07 */
  goto L_10f5ff07;
L_10f5fefe:;
  /* 10f5fefe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5ff01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ff04 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10f5ff07:;
  /* 10f5ff07 jmp 0x10f5fe94 */
  goto L_10f5fe94;
L_10f5ff09:;
  /* 10f5ff09 mov esp, ebp */
  ESP = (EBP);
  /* 10f5ff0b pop ebp */
  EBP = (pop32());
  /* 10f5ff0c ret  */
  ESPCHK(0x10f5fe90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff10 @ 0x10f5ff10 (304 bytes, 85 insns) */
void f_10f5ff10(void) {
  FTRACE(0x10f5ff10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5ff10 push ebp */
  push32((uint32_t)(EBP));
  /* 10f5ff11 mov ebp, esp */
  EBP = (ESP);
  /* 10f5ff13 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5ff14 cmp dword ptr [0x10f807c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f807c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ff1b je 0x10f5ffdc */
  if (C.zf) goto L_10f5ffdc;
  /* 10f5ff21 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10f5ff23 push 0x10f7c1c8 */
  push32((uint32_t)(0x10f7c1c8u));
  /* 10f5ff28 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5ff2a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10f5ff2c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5ff2e call 0x10f54ea0 */
  push32(0x10f5ff33u); f_10f54ea0();
  /* 10f5ff33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ff36 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5ff39 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5ff3d jne 0x10f5ff49 */
  if (!C.zf) goto L_10f5ff49;
  /* 10f5ff3f mov eax, 1 */
  EAX = (0x1u);
  /* 10f5ff44 jmp 0x10f6003c */
  goto L_10f6003c;
L_10f5ff49:;
  /* 10f5ff49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ff4c push eax */
  push32((uint32_t)(EAX));
  /* 10f5ff4d call 0x10f60040 */
  push32(0x10f5ff52u); f_10f60040();
  /* 10f5ff52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ff55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5ff57 je 0x10f5ff7d */
  if (C.zf) goto L_10f5ff7d;
  /* 10f5ff59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ff5c push ecx */
  push32((uint32_t)(ECX));
  /* 10f5ff5d call 0x10f602d0 */
  push32(0x10f5ff62u); f_10f602d0();
  /* 10f5ff62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ff65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5ff67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ff6a push edx */
  push32((uint32_t)(EDX));
  /* 10f5ff6b call 0x10f55520 */
  push32(0x10f5ff70u); f_10f55520();
  /* 10f5ff70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ff73 mov eax, 1 */
  EAX = (0x1u);
  /* 10f5ff78 jmp 0x10f6003c */
  goto L_10f6003c;
L_10f5ff7d:;
  /* 10f5ff7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ff80 mov ecx, dword ptr [0x10f7fd88] */
  ECX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5ff86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f5ff88 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f5ff8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ff8d mov ecx, dword ptr [0x10f7fd88] */
  ECX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5ff93 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f5ff96 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10f5ff99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ff9c mov ecx, dword ptr [0x10f7fd88] */
  ECX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5ffa2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f5ffa5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10f5ffa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ffab mov dword ptr [0x10f7fd88], eax */
  w32((uint32_t)(0x10f7fd88), (EAX));
  /* 10f5ffb0 mov ecx, dword ptr [0x10f807fc] */
  ECX = (r32((uint32_t)(0x10f807fc)));
  /* 10f5ffb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5ffb7 call 0x10f602d0 */
  push32(0x10f5ffbcu); f_10f602d0();
  /* 10f5ffbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ffbf push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5ffc1 mov edx, dword ptr [0x10f807fc] */
  EDX = (r32((uint32_t)(0x10f807fc)));
  /* 10f5ffc7 push edx */
  push32((uint32_t)(EDX));
  /* 10f5ffc8 call 0x10f55520 */
  push32(0x10f5ffcdu); f_10f55520();
  /* 10f5ffcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5ffd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5ffd3 mov dword ptr [0x10f807fc], eax */
  w32((uint32_t)(0x10f807fc), (EAX));
  /* 10f5ffd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5ffda jmp 0x10f6003c */
  goto L_10f6003c;
L_10f5ffdc:;
  /* 10f5ffdc mov ecx, dword ptr [0x10f7fd88] */
  ECX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5ffe2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f5ffe4 mov dword ptr [0x10f7fd58], edx */
  w32((uint32_t)(0x10f7fd58), (EDX));
  /* 10f5ffea mov eax, dword ptr [0x10f7fd88] */
  EAX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5ffef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f5fff2 mov dword ptr [0x10f7fd5c], ecx */
  w32((uint32_t)(0x10f7fd5c), (ECX));
  /* 10f5fff8 mov edx, dword ptr [0x10f7fd88] */
  EDX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f5fffe mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f60001 mov dword ptr [0x10f7fd60], eax */
  w32((uint32_t)(0x10f7fd60), (EAX));
  /* 10f60006 mov dword ptr [0x10f7fd88], 0x10f7fd58 */
  w32((uint32_t)(0x10f7fd88), (0x10f7fd58u));
  /* 10f60010 mov ecx, dword ptr [0x10f807fc] */
  ECX = (r32((uint32_t)(0x10f807fc)));
  /* 10f60016 push ecx */
  push32((uint32_t)(ECX));
  /* 10f60017 call 0x10f602d0 */
  push32(0x10f6001cu); f_10f602d0();
  /* 10f6001c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6001f push 2 */
  push32((uint32_t)(0x2u));
  /* 10f60021 mov edx, dword ptr [0x10f807fc] */
  EDX = (r32((uint32_t)(0x10f807fc)));
  /* 10f60027 push edx */
  push32((uint32_t)(EDX));
  /* 10f60028 call 0x10f55520 */
  push32(0x10f6002du); f_10f55520();
  /* 10f6002d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60030 mov dword ptr [0x10f807fc], 0 */
  w32((uint32_t)(0x10f807fc), (0x0u));
  /* 10f6003a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f6003c:;
  /* 10f6003c mov esp, ebp */
  ESP = (EBP);
  /* 10f6003e pop ebp */
  EBP = (pop32());
  /* 10f6003f ret  */
  ESPCHK(0x10f5ff10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010040 @ 0x10f60040 (525 bytes, 200 insns) */
void f_10f60040(void) {
  FTRACE(0x10f60040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f60040 push ebp */
  push32((uint32_t)(EBP));
  /* 10f60041 mov ebp, esp */
  EBP = (ESP);
  /* 10f60043 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f60046 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f6004d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f6004f mov ax, word ptr [0x10f8081c] */
  AX = (r16((uint32_t)(0x10f8081c)));
  /* 10f60055 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f60058 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6005c jne 0x10f60066 */
  if (!C.zf) goto L_10f60066;
  /* 10f6005e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f60061 jmp 0x10f60249 */
  goto L_10f60249;
L_10f60066:;
  /* 10f60066 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60069 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6006c push ecx */
  push32((uint32_t)(ECX));
  /* 10f6006d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10f6006f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f60072 push edx */
  push32((uint32_t)(EDX));
  /* 10f60073 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f60075 call 0x10f62c50 */
  push32(0x10f6007au); f_10f62c50();
  /* 10f6007a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6007d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f60080 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f60082 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f60085 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60088 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6008b push edx */
  push32((uint32_t)(EDX));
  /* 10f6008c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10f6008e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f60091 push eax */
  push32((uint32_t)(EAX));
  /* 10f60092 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f60094 call 0x10f62c50 */
  push32(0x10f60099u); f_10f62c50();
  /* 10f60099 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6009c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f6009f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f600a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f600a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f600a7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f600aa push edx */
  push32((uint32_t)(EDX));
  /* 10f600ab push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10f600ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f600b0 push eax */
  push32((uint32_t)(EAX));
  /* 10f600b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f600b3 call 0x10f62c50 */
  push32(0x10f600b8u); f_10f62c50();
  /* 10f600b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f600bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f600be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f600c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f600c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f600c6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f600c9 push edx */
  push32((uint32_t)(EDX));
  /* 10f600ca push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10f600cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f600cf push eax */
  push32((uint32_t)(EAX));
  /* 10f600d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f600d2 call 0x10f62c50 */
  push32(0x10f600d7u); f_10f62c50();
  /* 10f600d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f600da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f600dd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f600df mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f600e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f600e5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f600e8 push edx */
  push32((uint32_t)(EDX));
  /* 10f600e9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10f600eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f600ee push eax */
  push32((uint32_t)(EAX));
  /* 10f600ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10f600f1 call 0x10f62c50 */
  push32(0x10f600f6u); f_10f62c50();
  /* 10f600f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f600f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f600fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f600fe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f60101 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60104 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10f60107 push eax */
  push32((uint32_t)(EAX));
  /* 10f60108 call 0x10f60250 */
  push32(0x10f6010du); f_10f60250();
  /* 10f6010d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60110 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60113 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60116 push ecx */
  push32((uint32_t)(ECX));
  /* 10f60117 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10f60119 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f6011c push edx */
  push32((uint32_t)(EDX));
  /* 10f6011d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f6011f call 0x10f62c50 */
  push32(0x10f60124u); f_10f62c50();
  /* 10f60124 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60127 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f6012a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f6012c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f6012f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60132 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60135 push edx */
  push32((uint32_t)(EDX));
  /* 10f60136 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10f60138 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f6013b push eax */
  push32((uint32_t)(EAX));
  /* 10f6013c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f6013e call 0x10f62c50 */
  push32(0x10f60143u); f_10f62c50();
  /* 10f60143 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60146 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f60149 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f6014b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f6014e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60151 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60154 push edx */
  push32((uint32_t)(EDX));
  /* 10f60155 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10f60157 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f6015a push eax */
  push32((uint32_t)(EAX));
  /* 10f6015b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f6015d call 0x10f62c50 */
  push32(0x10f60162u); f_10f62c50();
  /* 10f60162 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60165 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f60168 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f6016a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f6016d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60170 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60173 push edx */
  push32((uint32_t)(EDX));
  /* 10f60174 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f60176 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f60179 push eax */
  push32((uint32_t)(EAX));
  /* 10f6017a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f6017c call 0x10f62c50 */
  push32(0x10f60181u); f_10f62c50();
  /* 10f60181 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60184 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f60187 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f60189 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f6018c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6018f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60192 push edx */
  push32((uint32_t)(EDX));
  /* 10f60193 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10f60195 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f60198 push eax */
  push32((uint32_t)(EAX));
  /* 10f60199 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f6019b call 0x10f62c50 */
  push32(0x10f601a0u); f_10f62c50();
  /* 10f601a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f601a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f601a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f601a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f601ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f601ae add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f601b1 push edx */
  push32((uint32_t)(EDX));
  /* 10f601b2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10f601b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f601b7 push eax */
  push32((uint32_t)(EAX));
  /* 10f601b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f601ba call 0x10f62c50 */
  push32(0x10f601bfu); f_10f62c50();
  /* 10f601bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f601c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f601c5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f601c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f601ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f601cd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f601d0 push edx */
  push32((uint32_t)(EDX));
  /* 10f601d1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10f601d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f601d6 push eax */
  push32((uint32_t)(EAX));
  /* 10f601d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f601d9 call 0x10f62c50 */
  push32(0x10f601deu); f_10f62c50();
  /* 10f601de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f601e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f601e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f601e6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f601e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f601ec add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f601ef push edx */
  push32((uint32_t)(EDX));
  /* 10f601f0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10f601f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f601f5 push eax */
  push32((uint32_t)(EAX));
  /* 10f601f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f601f8 call 0x10f62c50 */
  push32(0x10f601fdu); f_10f62c50();
  /* 10f601fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60200 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f60203 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f60205 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f60208 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6020b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6020e push edx */
  push32((uint32_t)(EDX));
  /* 10f6020f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10f60211 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f60214 push eax */
  push32((uint32_t)(EAX));
  /* 10f60215 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f60217 call 0x10f62c50 */
  push32(0x10f6021cu); f_10f62c50();
  /* 10f6021c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6021f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f60222 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f60224 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f60227 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6022a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6022d push edx */
  push32((uint32_t)(EDX));
  /* 10f6022e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10f60230 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f60233 push eax */
  push32((uint32_t)(EAX));
  /* 10f60234 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f60236 call 0x10f62c50 */
  push32(0x10f6023bu); f_10f62c50();
  /* 10f6023b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6023e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f60241 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f60243 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f60246 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10f60249:;
  /* 10f60249 mov esp, ebp */
  ESP = (EBP);
  /* 10f6024b pop ebp */
  EBP = (pop32());
  /* 10f6024c ret  */
  ESPCHK(0x10f60040u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10f60250 (125 bytes, 49 insns) */
void f_10f60250(void) {
  FTRACE(0x10f60250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f60250 push ebp */
  push32((uint32_t)(EBP));
  /* 10f60251 mov ebp, esp */
  EBP = (ESP);
  /* 10f60253 push ecx */
  push32((uint32_t)(ECX));
L_10f60254:;
  /* 10f60254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60257 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f6025a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f6025c je 0x10f602c9 */
  if (C.zf) goto L_10f602c9;
  /* 10f6025e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60261 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f60264 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60267 jl 0x10f6028d */
  if ((C.sf!=C.of)) goto L_10f6028d;
  /* 10f60269 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6026c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f6026f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60272 jg 0x10f6028d */
  if ((!C.zf&&C.sf==C.of)) goto L_10f6028d;
  /* 10f60274 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60277 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f6027a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f6027d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60280 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10f60282 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60285 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60288 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f6028b jmp 0x10f602c7 */
  goto L_10f602c7;
L_10f6028d:;
  /* 10f6028d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60290 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f60293 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60296 jne 0x10f602be */
  if (!C.zf) goto L_10f602be;
  /* 10f60298 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6029b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f6029e:;
  /* 10f6029e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f602a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f602a4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10f602a7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10f602a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f602ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f602af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f602b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f602b5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f602b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f602ba jne 0x10f6029e */
  if (!C.zf) goto L_10f6029e;
  /* 10f602bc jmp 0x10f602c7 */
  goto L_10f602c7;
L_10f602be:;
  /* 10f602be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f602c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f602c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10f602c7:;
  /* 10f602c7 jmp 0x10f60254 */
  goto L_10f60254;
L_10f602c9:;
  /* 10f602c9 mov esp, ebp */
  ESP = (EBP);
  /* 10f602cb pop ebp */
  EBP = (pop32());
  /* 10f602cc ret  */
  ESPCHK(0x10f60250u, _esp0);
  ESP += 4; return;
}

/* FUN_100102d0 @ 0x10f602d0 (147 bytes, 52 insns) */
void f_10f602d0(void) {
  FTRACE(0x10f602d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f602d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f602d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f602d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f602d7 jne 0x10f602de */
  if (!C.zf) goto L_10f602de;
  /* 10f602d9 jmp 0x10f60361 */
  goto L_10f60361;
L_10f602de:;
  /* 10f602de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f602e1 cmp dword ptr [eax + 0xc], 0x10f80858 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10f80858u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f602e8 je 0x10f60361 */
  if (C.zf) goto L_10f60361;
  /* 10f602ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10f602ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f602ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f602f2 push edx */
  push32((uint32_t)(EDX));
  /* 10f602f3 call 0x10f55520 */
  push32(0x10f602f8u); f_10f55520();
  /* 10f602f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f602fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10f602fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60300 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f60303 push ecx */
  push32((uint32_t)(ECX));
  /* 10f60304 call 0x10f55520 */
  push32(0x10f60309u); f_10f55520();
  /* 10f60309 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6030c push 2 */
  push32((uint32_t)(0x2u));
  /* 10f6030e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60311 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f60314 push eax */
  push32((uint32_t)(EAX));
  /* 10f60315 call 0x10f55520 */
  push32(0x10f6031au); f_10f55520();
  /* 10f6031a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6031d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f6031f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60322 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10f60325 push edx */
  push32((uint32_t)(EDX));
  /* 10f60326 call 0x10f55520 */
  push32(0x10f6032bu); f_10f55520();
  /* 10f6032b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6032e push 2 */
  push32((uint32_t)(0x2u));
  /* 10f60330 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60333 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10f60336 push ecx */
  push32((uint32_t)(ECX));
  /* 10f60337 call 0x10f55520 */
  push32(0x10f6033cu); f_10f55520();
  /* 10f6033c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6033f push 2 */
  push32((uint32_t)(0x2u));
  /* 10f60341 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60344 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10f60347 push eax */
  push32((uint32_t)(EAX));
  /* 10f60348 call 0x10f55520 */
  push32(0x10f6034du); f_10f55520();
  /* 10f6034d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60350 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f60352 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60355 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10f60358 push edx */
  push32((uint32_t)(EDX));
  /* 10f60359 call 0x10f55520 */
  push32(0x10f6035eu); f_10f55520();
  /* 10f6035e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f60361:;
  /* 10f60361 pop ebp */
  EBP = (pop32());
  /* 10f60362 ret  */
  ESPCHK(0x10f602d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010370 @ 0x10f60370 (928 bytes, 284 insns) */
void f_10f60370(void) {
  FTRACE(0x10f60370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f60370 push ebp */
  push32((uint32_t)(EBP));
  /* 10f60371 mov ebp, esp */
  EBP = (ESP);
  /* 10f60373 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f60376 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10f6037d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10f60384 cmp dword ptr [0x10f807c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f807c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6038b je 0x10f606c1 */
  if (C.zf) goto L_10f606c1;
  /* 10f60391 cmp dword ptr [0x10f807d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f807d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60398 jne 0x10f603c0 */
  if (!C.zf) goto L_10f603c0;
  /* 10f6039a push 0x10f807d0 */
  push32((uint32_t)(0x10f807d0u));
  /* 10f6039f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10f603a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f603a6 mov ax, word ptr [0x10f80814] */
  AX = (r16((uint32_t)(0x10f80814)));
  /* 10f603ac push eax */
  push32((uint32_t)(EAX));
  /* 10f603ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10f603af call 0x10f62c50 */
  push32(0x10f603b4u); f_10f62c50();
  /* 10f603b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f603b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f603b9 je 0x10f603c0 */
  if (C.zf) goto L_10f603c0;
  /* 10f603bb jmp 0x10f60682 */
  goto L_10f60682;
L_10f603c0:;
  /* 10f603c0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10f603c2 push 0x10f7c1d4 */
  push32((uint32_t)(0x10f7c1d4u));
  /* 10f603c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f603c9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10f603ce call 0x10f54a90 */
  push32(0x10f603d3u); f_10f54a90();
  /* 10f603d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f603d6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10f603d9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10f603db push 0x10f7c1d4 */
  push32((uint32_t)(0x10f7c1d4u));
  /* 10f603e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f603e2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10f603e7 call 0x10f54a90 */
  push32(0x10f603ecu); f_10f54a90();
  /* 10f603ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f603ef mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f603f2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10f603f4 push 0x10f7c1d4 */
  push32((uint32_t)(0x10f7c1d4u));
  /* 10f603f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f603fb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10f60400 call 0x10f54a90 */
  push32(0x10f60405u); f_10f54a90();
  /* 10f60405 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60408 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10f6040b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10f6040d push 0x10f7c1d4 */
  push32((uint32_t)(0x10f7c1d4u));
  /* 10f60412 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f60414 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10f60419 call 0x10f54a90 */
  push32(0x10f6041eu); f_10f54a90();
  /* 10f6041e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60421 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f60424 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60428 je 0x10f6043c */
  if (C.zf) goto L_10f6043c;
  /* 10f6042a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6042e je 0x10f6043c */
  if (C.zf) goto L_10f6043c;
  /* 10f60430 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60434 je 0x10f6043c */
  if (C.zf) goto L_10f6043c;
  /* 10f60436 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6043a jne 0x10f60441 */
  if (!C.zf) goto L_10f60441;
L_10f6043c:;
  /* 10f6043c jmp 0x10f60682 */
  goto L_10f60682;
L_10f60441:;
  /* 10f60441 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f60444 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10f60447 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10f6044e jmp 0x10f60459 */
  goto L_10f60459;
L_10f60450:;
  /* 10f60450 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f60453 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60456 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10f60459:;
  /* 10f60459 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60460 jge 0x10f60475 */
  if ((C.sf==C.of)) goto L_10f60475;
  /* 10f60462 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f60465 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10f60468 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10f6046a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f6046d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60470 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10f60473 jmp 0x10f60450 */
  goto L_10f60450;
L_10f60475:;
  /* 10f60475 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10f60478 push eax */
  push32((uint32_t)(EAX));
  /* 10f60479 mov ecx, dword ptr [0x10f807d0] */
  ECX = (r32((uint32_t)(0x10f807d0)));
  /* 10f6047f push ecx */
  push32((uint32_t)(ECX));
  /* 10f60480 call dword ptr [0x10f83308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83308))), 0x10f60486u);
  /* 10f60486 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60488 jne 0x10f6048f */
  if (!C.zf) goto L_10f6048f;
  /* 10f6048a jmp 0x10f60682 */
  goto L_10f60682;
L_10f6048f:;
  /* 10f6048f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60493 jbe 0x10f6049a */
  if ((C.cf||C.zf)) goto L_10f6049a;
  /* 10f60495 jmp 0x10f60682 */
  goto L_10f60682;
L_10f6049a:;
  /* 10f6049a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f6049d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f604a3 mov dword ptr [0x10f7eea4], edx */
  w32((uint32_t)(0x10f7eea4), (EDX));
  /* 10f604a9 cmp dword ptr [0x10f7eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f7eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f604b0 jle 0x10f60509 */
  if ((C.zf||C.sf!=C.of)) goto L_10f60509;
  /* 10f604b2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10f604b5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f604b8 jmp 0x10f604c3 */
  goto L_10f604c3;
L_10f604ba:;
  /* 10f604ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f604bd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f604c0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10f604c3:;
  /* 10f604c3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f604c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f604c8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f604ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f604cc je 0x10f60509 */
  if (C.zf) goto L_10f60509;
  /* 10f604ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f604d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f604d3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10f604d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f604d8 je 0x10f60509 */
  if (C.zf) goto L_10f60509;
  /* 10f604da mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f604dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f604df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f604e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10f604e4 jmp 0x10f604ef */
  goto L_10f604ef;
L_10f604e6:;
  /* 10f604e6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f604e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f604ec mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10f604ef:;
  /* 10f604ef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f604f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f604f4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10f604f7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f604fa jg 0x10f60507 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f60507;
  /* 10f604fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f604ff add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60502 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10f60505 jmp 0x10f604e6 */
  goto L_10f604e6;
L_10f60507:;
  /* 10f60507 jmp 0x10f604ba */
  goto L_10f604ba;
L_10f60509:;
  /* 10f60509 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f6050b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f6050d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f6050f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f60512 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60515 push eax */
  push32((uint32_t)(EAX));
  /* 10f60516 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f6051b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f6051e push ecx */
  push32((uint32_t)(ECX));
  /* 10f6051f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f60521 call 0x10f5ccc0 */
  push32(0x10f60526u); f_10f5ccc0();
  /* 10f60526 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f6052b jne 0x10f60532 */
  if (!C.zf) goto L_10f60532;
  /* 10f6052d jmp 0x10f60682 */
  goto L_10f60682;
L_10f60532:;
  /* 10f60532 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f60535 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10f6053a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f6053d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f60540 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10f60547 jmp 0x10f60552 */
  goto L_10f60552;
L_10f60549:;
  /* 10f60549 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f6054c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6054f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10f60552:;
  /* 10f60552 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60559 jge 0x10f60570 */
  if ((C.sf==C.of)) goto L_10f60570;
  /* 10f6055b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f6055e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10f60562 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10f60565 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f60568 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6056b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10f6056e jmp 0x10f60549 */
  goto L_10f60549;
L_10f60570:;
  /* 10f60570 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f60572 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f60574 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f60577 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6057a push edx */
  push32((uint32_t)(EDX));
  /* 10f6057b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f60580 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f60583 push eax */
  push32((uint32_t)(EAX));
  /* 10f60584 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f60586 call 0x10f62ef0 */
  push32(0x10f6058bu); f_10f62ef0();
  /* 10f6058b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6058e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60590 jne 0x10f60597 */
  if (!C.zf) goto L_10f60597;
  /* 10f60592 jmp 0x10f60682 */
  goto L_10f60682;
L_10f60597:;
  /* 10f60597 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f6059a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10f6059f cmp dword ptr [0x10f7eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f7eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f605a6 jle 0x10f60603 */
  if ((C.zf||C.sf!=C.of)) goto L_10f60603;
  /* 10f605a8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10f605ab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10f605ae jmp 0x10f605b9 */
  goto L_10f605b9;
L_10f605b0:;
  /* 10f605b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f605b3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f605b6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10f605b9:;
  /* 10f605b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f605bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f605be mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f605c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f605c2 je 0x10f60603 */
  if (C.zf) goto L_10f60603;
  /* 10f605c4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f605c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f605c9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10f605cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f605ce je 0x10f60603 */
  if (C.zf) goto L_10f60603;
  /* 10f605d0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f605d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f605d5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f605d7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f605da jmp 0x10f605e5 */
  goto L_10f605e5;
L_10f605dc:;
  /* 10f605dc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f605df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f605e2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10f605e5:;
  /* 10f605e5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f605e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f605ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10f605ed cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f605f0 jg 0x10f60601 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f60601;
  /* 10f605f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f605f5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f605f8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10f605ff jmp 0x10f605dc */
  goto L_10f605dc;
L_10f60601:;
  /* 10f60601 jmp 0x10f605b0 */
  goto L_10f605b0;
L_10f60603:;
  /* 10f60603 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f60606 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60609 mov dword ptr [0x10f7ec98], eax */
  w32((uint32_t)(0x10f7ec98), (EAX));
  /* 10f6060e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f60611 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60614 mov dword ptr [0x10f7ec9c], ecx */
  w32((uint32_t)(0x10f7ec9c), (ECX));
  /* 10f6061a cmp dword ptr [0x10f80800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60621 je 0x10f60634 */
  if (C.zf) goto L_10f60634;
  /* 10f60623 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f60625 mov edx, dword ptr [0x10f80800] */
  EDX = (r32((uint32_t)(0x10f80800)));
  /* 10f6062b push edx */
  push32((uint32_t)(EDX));
  /* 10f6062c call 0x10f55520 */
  push32(0x10f60631u); f_10f55520();
  /* 10f60631 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f60634:;
  /* 10f60634 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f60637 mov dword ptr [0x10f80800], eax */
  w32((uint32_t)(0x10f80800), (EAX));
  /* 10f6063c cmp dword ptr [0x10f80804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60643 je 0x10f60656 */
  if (C.zf) goto L_10f60656;
  /* 10f60645 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f60647 mov ecx, dword ptr [0x10f80804] */
  ECX = (r32((uint32_t)(0x10f80804)));
  /* 10f6064d push ecx */
  push32((uint32_t)(ECX));
  /* 10f6064e call 0x10f55520 */
  push32(0x10f60653u); f_10f55520();
  /* 10f60653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f60656:;
  /* 10f60656 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f60659 mov dword ptr [0x10f80804], edx */
  w32((uint32_t)(0x10f80804), (EDX));
  /* 10f6065f push 2 */
  push32((uint32_t)(0x2u));
  /* 10f60661 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f60664 push eax */
  push32((uint32_t)(EAX));
  /* 10f60665 call 0x10f55520 */
  push32(0x10f6066au); f_10f55520();
  /* 10f6066a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6066d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f6066f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f60672 push ecx */
  push32((uint32_t)(ECX));
  /* 10f60673 call 0x10f55520 */
  push32(0x10f60678u); f_10f55520();
  /* 10f60678 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6067b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f6067d jmp 0x10f6070c */
  goto L_10f6070c;
L_10f60682:;
  /* 10f60682 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f60684 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f60687 push edx */
  push32((uint32_t)(EDX));
  /* 10f60688 call 0x10f55520 */
  push32(0x10f6068du); f_10f55520();
  /* 10f6068d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60690 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f60692 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f60695 push eax */
  push32((uint32_t)(EAX));
  /* 10f60696 call 0x10f55520 */
  push32(0x10f6069bu); f_10f55520();
  /* 10f6069b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6069e push 2 */
  push32((uint32_t)(0x2u));
  /* 10f606a0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f606a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f606a4 call 0x10f55520 */
  push32(0x10f606a9u); f_10f55520();
  /* 10f606a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f606ac push 2 */
  push32((uint32_t)(0x2u));
  /* 10f606ae mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f606b1 push edx */
  push32((uint32_t)(EDX));
  /* 10f606b2 call 0x10f55520 */
  push32(0x10f606b7u); f_10f55520();
  /* 10f606b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f606ba mov eax, 1 */
  EAX = (0x1u);
  /* 10f606bf jmp 0x10f6070c */
  goto L_10f6070c;
L_10f606c1:;
  /* 10f606c1 mov dword ptr [0x10f7ec98], 0x10f7eca2 */
  w32((uint32_t)(0x10f7ec98), (0x10f7eca2u));
  /* 10f606cb mov dword ptr [0x10f7ec9c], 0x10f7eca2 */
  w32((uint32_t)(0x10f7ec9c), (0x10f7eca2u));
  /* 10f606d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f606d7 mov eax, dword ptr [0x10f80800] */
  EAX = (r32((uint32_t)(0x10f80800)));
  /* 10f606dc push eax */
  push32((uint32_t)(EAX));
  /* 10f606dd call 0x10f55520 */
  push32(0x10f606e2u); f_10f55520();
  /* 10f606e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f606e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f606e7 mov ecx, dword ptr [0x10f80804] */
  ECX = (r32((uint32_t)(0x10f80804)));
  /* 10f606ed push ecx */
  push32((uint32_t)(ECX));
  /* 10f606ee call 0x10f55520 */
  push32(0x10f606f3u); f_10f55520();
  /* 10f606f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f606f6 mov dword ptr [0x10f80800], 0 */
  w32((uint32_t)(0x10f80800), (0x0u));
  /* 10f60700 mov dword ptr [0x10f80804], 0 */
  w32((uint32_t)(0x10f80804), (0x0u));
  /* 10f6070a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f6070c:;
  /* 10f6070c mov esp, ebp */
  ESP = (EBP);
  /* 10f6070e pop ebp */
  EBP = (pop32());
  /* 10f6070f ret  */
  ESPCHK(0x10f60370u, _esp0);
  ESP += 4; return;
}

/* FUN_10010710 @ 0x10f60710 (7 bytes, 5 insns) */
void f_10f60710(void) {
  FTRACE(0x10f60710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f60710 push ebp */
  push32((uint32_t)(EBP));
  /* 10f60711 mov ebp, esp */
  EBP = (ESP);
  /* 10f60713 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f60715 pop ebp */
  EBP = (pop32());
  /* 10f60716 ret  */
  ESPCHK(0x10f60710u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10f60720 (129 bytes, 56 insns) */
void f_10f60720(void) {
  FTRACE(0x10f60720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f60720 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f60724 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f60728 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10f6072e jne 0x10f6076c */
  if (!C.zf) goto L_10f6076c;
L_10f60730:;
  /* 10f60730 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f60732 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f60734 jne 0x10f60764 */
  if (!C.zf) goto L_10f60764;
  /* 10f60736 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f60738 je 0x10f60760 */
  if (C.zf) goto L_10f60760;
  /* 10f6073a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f6073d jne 0x10f60764 */
  if (!C.zf) goto L_10f60764;
  /* 10f6073f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10f60741 je 0x10f60760 */
  if (C.zf) goto L_10f60760;
  /* 10f60743 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10f60746 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f60749 jne 0x10f60764 */
  if (!C.zf) goto L_10f60764;
  /* 10f6074b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f6074d je 0x10f60760 */
  if (C.zf) goto L_10f60760;
  /* 10f6074f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f60752 jne 0x10f60764 */
  if (!C.zf) goto L_10f60764;
  /* 10f60754 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60757 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6075a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10f6075c jne 0x10f60730 */
  if (!C.zf) goto L_10f60730;
  /* 10f6075e mov edi, edi */
  EDI = (EDI);
L_10f60760:;
  /* 10f60760 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f60762 ret  */
  ESPCHK(0x10f60720u, _esp0);
  ESP += 4; return;
  /* 10f60763 nop  */
  /* nop */
L_10f60764:;
  /* 10f60764 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f60766 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10f60768 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f60769 ret  */
  ESPCHK(0x10f60720u, _esp0);
  ESP += 4; return;
  /* 10f6076a mov edi, edi */
  EDI = (EDI);
L_10f6076c:;
  /* 10f6076c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10f60772 je 0x10f60788 */
  if (C.zf) goto L_10f60788;
  /* 10f60774 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f60776 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10f60777 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f60779 jne 0x10f60764 */
  if (!C.zf) goto L_10f60764;
  /* 10f6077b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f6077c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f6077e je 0x10f60760 */
  if (C.zf) goto L_10f60760;
  /* 10f60780 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10f60786 je 0x10f60730 */
  if (C.zf) goto L_10f60730;
L_10f60788:;
  /* 10f60788 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10f6078b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6078e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f60790 jne 0x10f60764 */
  if (!C.zf) goto L_10f60764;
  /* 10f60792 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f60794 je 0x10f60760 */
  if (C.zf) goto L_10f60760;
  /* 10f60796 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f60799 jne 0x10f60764 */
  if (!C.zf) goto L_10f60764;
  /* 10f6079b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10f6079d je 0x10f60760 */
  if (C.zf) goto L_10f60760;
  /* 10f6079f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f607a2 jmp 0x10f60730 */
  goto L_10f60730;
}

/* FUN_100107b0 @ 0x10f607b0 (62 bytes, 35 insns) */
void f_10f607b0(void) {
  FTRACE(0x10f607b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f607b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f607b1 mov ebp, esp */
  EBP = (ESP);
  /* 10f607b3 push esi */
  push32((uint32_t)(ESI));
  /* 10f607b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f607b6 push eax */
  push32((uint32_t)(EAX));
  /* 10f607b7 push eax */
  push32((uint32_t)(EAX));
  /* 10f607b8 push eax */
  push32((uint32_t)(EAX));
  /* 10f607b9 push eax */
  push32((uint32_t)(EAX));
  /* 10f607ba push eax */
  push32((uint32_t)(EAX));
  /* 10f607bb push eax */
  push32((uint32_t)(EAX));
  /* 10f607bc push eax */
  push32((uint32_t)(EAX));
  /* 10f607bd push eax */
  push32((uint32_t)(EAX));
  /* 10f607be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f607c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f607c4:;
  /* 10f607c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f607c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f607c8 je 0x10f607d1 */
  if (C.zf) goto L_10f607d1;
  /* 10f607ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10f607cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10f607cb");
  /* 10f607cf jmp 0x10f607c4 */
  goto L_10f607c4;
L_10f607d1:;
  /* 10f607d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f607d4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f607d7 nop  */
  /* nop */
L_10f607d8:;
  /* 10f607d8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f607d9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f607db or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f607dd je 0x10f607e6 */
  if (C.zf) goto L_10f607e6;
  /* 10f607df inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f607e0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10f607e0");
  /* 10f607e4 jae 0x10f607d8 */
  if (!C.cf) goto L_10f607d8;
L_10f607e6:;
  /* 10f607e6 mov eax, ecx */
  EAX = (ECX);
  /* 10f607e8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f607eb pop esi */
  ESI = (pop32());
  /* 10f607ec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f607ed ret  */
  ESPCHK(0x10f607b0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10f607f0 (56 bytes, 31 insns) */
void f_10f607f0(void) {
  FTRACE(0x10f607f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f607f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f607f1 mov ebp, esp */
  EBP = (ESP);
  /* 10f607f3 push edi */
  push32((uint32_t)(EDI));
  /* 10f607f4 push esi */
  push32((uint32_t)(ESI));
  /* 10f607f5 push ebx */
  push32((uint32_t)(EBX));
  /* 10f607f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f607f9 jecxz 0x10f60821 */
  x86_unimpl("jecxz @ 0x10f607f9");
  /* 10f607fb mov ebx, ecx */
  EBX = (ECX);
  /* 10f607fd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60800 mov esi, edi */
  ESI = (EDI);
  /* 10f60802 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f60804 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10f60806 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f60808 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6080a mov edi, esi */
  EDI = (ESI);
  /* 10f6080c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f6080f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10f60811 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10f60814 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f60816 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f60819 ja 0x10f6081f */
  if ((!C.cf&&!C.zf)) goto L_10f6081f;
  /* 10f6081b je 0x10f60821 */
  if (C.zf) goto L_10f60821;
  /* 10f6081d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f6081e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10f6081f:;
  /* 10f6081f not ecx */
  ECX = (~(ECX));
L_10f60821:;
  /* 10f60821 mov eax, ecx */
  EAX = (ECX);
  /* 10f60823 pop ebx */
  EBX = (pop32());
  /* 10f60824 pop esi */
  ESI = (pop32());
  /* 10f60825 pop edi */
  EDI = (pop32());
  /* 10f60826 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f60827 ret  */
  ESPCHK(0x10f607f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010830 @ 0x10f60830 (58 bytes, 32 insns) */
void f_10f60830(void) {
  FTRACE(0x10f60830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f60830 push ebp */
  push32((uint32_t)(EBP));
  /* 10f60831 mov ebp, esp */
  EBP = (ESP);
  /* 10f60833 push esi */
  push32((uint32_t)(ESI));
  /* 10f60834 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f60836 push eax */
  push32((uint32_t)(EAX));
  /* 10f60837 push eax */
  push32((uint32_t)(EAX));
  /* 10f60838 push eax */
  push32((uint32_t)(EAX));
  /* 10f60839 push eax */
  push32((uint32_t)(EAX));
  /* 10f6083a push eax */
  push32((uint32_t)(EAX));
  /* 10f6083b push eax */
  push32((uint32_t)(EAX));
  /* 10f6083c push eax */
  push32((uint32_t)(EAX));
  /* 10f6083d push eax */
  push32((uint32_t)(EAX));
  /* 10f6083e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f60841 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f60844:;
  /* 10f60844 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f60846 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f60848 je 0x10f60851 */
  if (C.zf) goto L_10f60851;
  /* 10f6084a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10f6084b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10f6084b");
  /* 10f6084f jmp 0x10f60844 */
  goto L_10f60844;
L_10f60851:;
  /* 10f60851 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10f60854:;
  /* 10f60854 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f60856 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f60858 je 0x10f60864 */
  if (C.zf) goto L_10f60864;
  /* 10f6085a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f6085b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10f6085b");
  /* 10f6085f jae 0x10f60854 */
  if (!C.cf) goto L_10f60854;
  /* 10f60861 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10f60864:;
  /* 10f60864 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60867 pop esi */
  ESI = (pop32());
  /* 10f60868 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f60869 ret  */
  ESPCHK(0x10f60830u, _esp0);
  ESP += 4; return;
}

/* FUN_10010870 @ 0x10f60870 (512 bytes, 147 insns) */
void f_10f60870(void) {
  FTRACE(0x10f60870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f60870 push ebp */
  push32((uint32_t)(EBP));
  /* 10f60871 mov ebp, esp */
  EBP = (ESP);
  /* 10f60873 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f60876 cmp dword ptr [0x10f8084c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8084c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6087d jne 0x10f608a2 */
  if (!C.zf) goto L_10f608a2;
  /* 10f6087f call 0x10f61340 */
  push32(0x10f60884u); f_10f61340();
  /* 10f60884 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60886 je 0x10f60892 */
  if (C.zf) goto L_10f60892;
  /* 10f60888 mov eax, dword ptr [0x10f832cc] */
  EAX = (r32((uint32_t)(0x10f832cc)));
  /* 10f6088d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f60890 jmp 0x10f60899 */
  goto L_10f60899;
L_10f60892:;
  /* 10f60892 mov dword ptr [ebp - 8], 0x10f61390 */
  w32((uint32_t)(EBP + -0x8), (0x10f61390u));
L_10f60899:;
  /* 10f60899 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f6089c mov dword ptr [0x10f8084c], ecx */
  w32((uint32_t)(0x10f8084c), (ECX));
L_10f608a2:;
  /* 10f608a2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f608a6 jne 0x10f608b2 */
  if (!C.zf) goto L_10f608b2;
  /* 10f608a8 call 0x10f61190 */
  push32(0x10f608adu); f_10f61190();
  /* 10f608ad jmp 0x10f6097e */
  goto L_10f6097e;
L_10f608b2:;
  /* 10f608b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f608b5 mov dword ptr [0x10f8083c], edx */
  w32((uint32_t)(0x10f8083c), (EDX));
  /* 10f608bb cmp dword ptr [0x10f8083c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8083c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f608c2 je 0x10f608e4 */
  if (C.zf) goto L_10f608e4;
  /* 10f608c4 mov eax, dword ptr [0x10f8083c] */
  EAX = (r32((uint32_t)(0x10f8083c)));
  /* 10f608c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f608cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f608ce je 0x10f608e4 */
  if (C.zf) goto L_10f608e4;
  /* 10f608d0 push 0x10f8083c */
  push32((uint32_t)(0x10f8083cu));
  /* 10f608d5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10f608d7 push 0x10f7fa90 */
  push32((uint32_t)(0x10f7fa90u));
  /* 10f608dc call 0x10f60a70 */
  push32(0x10f608e1u); f_10f60a70();
  /* 10f608e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f608e4:;
  /* 10f608e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f608e7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f608ea mov dword ptr [0x10f80840], edx */
  w32((uint32_t)(0x10f80840), (EDX));
  /* 10f608f0 cmp dword ptr [0x10f80840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f608f7 je 0x10f60919 */
  if (C.zf) goto L_10f60919;
  /* 10f608f9 mov eax, dword ptr [0x10f80840] */
  EAX = (r32((uint32_t)(0x10f80840)));
  /* 10f608fe movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f60901 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f60903 je 0x10f60919 */
  if (C.zf) goto L_10f60919;
  /* 10f60905 push 0x10f80840 */
  push32((uint32_t)(0x10f80840u));
  /* 10f6090a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10f6090c push 0x10f7f9d8 */
  push32((uint32_t)(0x10f7f9d8u));
  /* 10f60911 call 0x10f60a70 */
  push32(0x10f60916u); f_10f60a70();
  /* 10f60916 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f60919:;
  /* 10f60919 mov dword ptr [0x10f80844], 0 */
  w32((uint32_t)(0x10f80844), (0x0u));
  /* 10f60923 cmp dword ptr [0x10f8083c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8083c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6092a je 0x10f6095d */
  if (C.zf) goto L_10f6095d;
  /* 10f6092c mov edx, dword ptr [0x10f8083c] */
  EDX = (r32((uint32_t)(0x10f8083c)));
  /* 10f60932 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f60935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60937 je 0x10f6095d */
  if (C.zf) goto L_10f6095d;
  /* 10f60939 cmp dword ptr [0x10f80840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60940 je 0x10f60956 */
  if (C.zf) goto L_10f60956;
  /* 10f60942 mov ecx, dword ptr [0x10f80840] */
  ECX = (r32((uint32_t)(0x10f80840)));
  /* 10f60948 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f6094b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f6094d je 0x10f60956 */
  if (C.zf) goto L_10f60956;
  /* 10f6094f call 0x10f60b00 */
  push32(0x10f60954u); f_10f60b00();
  /* 10f60954 jmp 0x10f6095b */
  goto L_10f6095b;
L_10f60956:;
  /* 10f60956 call 0x10f60ef0 */
  push32(0x10f6095bu); f_10f60ef0();
L_10f6095b:;
  /* 10f6095b jmp 0x10f6097e */
  goto L_10f6097e;
L_10f6095d:;
  /* 10f6095d cmp dword ptr [0x10f80840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60964 je 0x10f60979 */
  if (C.zf) goto L_10f60979;
  /* 10f60966 mov eax, dword ptr [0x10f80840] */
  EAX = (r32((uint32_t)(0x10f80840)));
  /* 10f6096b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f6096e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f60970 je 0x10f60979 */
  if (C.zf) goto L_10f60979;
  /* 10f60972 call 0x10f61090 */
  push32(0x10f60977u); f_10f61090();
  /* 10f60977 jmp 0x10f6097e */
  goto L_10f6097e;
L_10f60979:;
  /* 10f60979 call 0x10f61190 */
  push32(0x10f6097eu); f_10f61190();
L_10f6097e:;
  /* 10f6097e cmp dword ptr [0x10f80844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60985 jne 0x10f6098e */
  if (!C.zf) goto L_10f6098e;
  /* 10f60987 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f60989 jmp 0x10f60a6c */
  goto L_10f60a6c;
L_10f6098e:;
  /* 10f6098e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60991 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60997 push edx */
  push32((uint32_t)(EDX));
  /* 10f60998 call 0x10f611c0 */
  push32(0x10f6099du); f_10f611c0();
  /* 10f6099d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f609a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f609a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f609a7 je 0x10f609bc */
  if (C.zf) goto L_10f609bc;
  /* 10f609a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f609ac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f609b1 push eax */
  push32((uint32_t)(EAX));
  /* 10f609b2 call dword ptr [0x10f832d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832d0))), 0x10f609b8u);
  /* 10f609b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f609ba jne 0x10f609c3 */
  if (!C.zf) goto L_10f609c3;
L_10f609bc:;
  /* 10f609bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f609be jmp 0x10f60a6c */
  goto L_10f60a6c;
L_10f609c3:;
  /* 10f609c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f609c5 mov ecx, dword ptr [0x10f8082c] */
  ECX = (r32((uint32_t)(0x10f8082c)));
  /* 10f609cb push ecx */
  push32((uint32_t)(ECX));
  /* 10f609cc call dword ptr [0x10f832e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832e0))), 0x10f609d2u);
  /* 10f609d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f609d4 jne 0x10f609dd */
  if (!C.zf) goto L_10f609dd;
  /* 10f609d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f609d8 jmp 0x10f60a6c */
  goto L_10f60a6c;
L_10f609dd:;
  /* 10f609dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f609e1 je 0x10f60a08 */
  if (C.zf) goto L_10f60a08;
  /* 10f609e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f609e6 mov ax, word ptr [0x10f8082c] */
  AX = (r16((uint32_t)(0x10f8082c)));
  /* 10f609ec mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10f609ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f609f2 mov dx, word ptr [0x10f80848] */
  DX = (r16((uint32_t)(0x10f80848)));
  /* 10f609f9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10f609fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f60a00 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10f60a04 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10f60a08:;
  /* 10f60a08 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60a0c je 0x10f60a67 */
  if (C.zf) goto L_10f60a67;
  /* 10f60a0e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10f60a10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f60a13 push edx */
  push32((uint32_t)(EDX));
  /* 10f60a14 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10f60a19 mov eax, dword ptr [0x10f8082c] */
  EAX = (r32((uint32_t)(0x10f8082c)));
  /* 10f60a1e push eax */
  push32((uint32_t)(EAX));
  /* 10f60a1f call dword ptr [0x10f8084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8084c))), 0x10f60a25u);
  /* 10f60a25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60a27 jne 0x10f60a2d */
  if (!C.zf) goto L_10f60a2d;
  /* 10f60a29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f60a2b jmp 0x10f60a6c */
  goto L_10f60a6c;
L_10f60a2d:;
  /* 10f60a2d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10f60a2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f60a32 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60a35 push ecx */
  push32((uint32_t)(ECX));
  /* 10f60a36 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10f60a3b mov edx, dword ptr [0x10f80848] */
  EDX = (r32((uint32_t)(0x10f80848)));
  /* 10f60a41 push edx */
  push32((uint32_t)(EDX));
  /* 10f60a42 call dword ptr [0x10f8084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8084c))), 0x10f60a48u);
  /* 10f60a48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60a4a jne 0x10f60a50 */
  if (!C.zf) goto L_10f60a50;
  /* 10f60a4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f60a4e jmp 0x10f60a6c */
  goto L_10f60a6c;
L_10f60a50:;
  /* 10f60a50 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f60a52 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f60a55 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60a5a push eax */
  push32((uint32_t)(EAX));
  /* 10f60a5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f60a5e push ecx */
  push32((uint32_t)(ECX));
  /* 10f60a5f call 0x10f575d0 */
  push32(0x10f60a64u); f_10f575d0();
  /* 10f60a64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f60a67:;
  /* 10f60a67 mov eax, 1 */
  EAX = (0x1u);
L_10f60a6c:;
  /* 10f60a6c mov esp, ebp */
  ESP = (EBP);
  /* 10f60a6e pop ebp */
  EBP = (pop32());
  /* 10f60a6f ret  */
  ESPCHK(0x10f60870u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a70 @ 0x10f60a70 (130 bytes, 47 insns) */
void f_10f60a70(void) {
  FTRACE(0x10f60a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f60a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10f60a71 mov ebp, esp */
  EBP = (ESP);
  /* 10f60a73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f60a76 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10f60a7d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10f60a84:;
  /* 10f60a84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f60a87 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60a8a jg 0x10f60aee */
  if ((!C.zf&&C.sf==C.of)) goto L_10f60aee;
  /* 10f60a8c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60a90 je 0x10f60aee */
  if (C.zf) goto L_10f60aee;
  /* 10f60a92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f60a95 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60a98 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f60a99 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f60a9b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10f60a9d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f60aa0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f60aa3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60aa6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10f60aa9 push eax */
  push32((uint32_t)(EAX));
  /* 10f60aaa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f60aad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f60aaf push edx */
  push32((uint32_t)(EDX));
  /* 10f60ab0 call 0x10f63160 */
  push32(0x10f60ab5u); f_10f63160();
  /* 10f60ab5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60ab8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f60abb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60abf jne 0x10f60ad2 */
  if (!C.zf) goto L_10f60ad2;
  /* 10f60ac1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f60ac4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60ac7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10f60acb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f60ace mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f60ad0 jmp 0x10f60aec */
  goto L_10f60aec;
L_10f60ad2:;
  /* 10f60ad2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60ad6 jge 0x10f60ae3 */
  if ((C.sf==C.of)) goto L_10f60ae3;
  /* 10f60ad8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f60adb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f60ade mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10f60ae1 jmp 0x10f60aec */
  goto L_10f60aec;
L_10f60ae3:;
  /* 10f60ae3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f60ae6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60ae9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10f60aec:;
  /* 10f60aec jmp 0x10f60a84 */
  goto L_10f60a84;
L_10f60aee:;
  /* 10f60aee mov esp, ebp */
  ESP = (EBP);
  /* 10f60af0 pop ebp */
  EBP = (pop32());
  /* 10f60af1 ret  */
  ESPCHK(0x10f60a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b00 @ 0x10f60b00 (186 bytes, 50 insns) */
void f_10f60b00(void) {
  FTRACE(0x10f60b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f60b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10f60b01 mov ebp, esp */
  EBP = (ESP);
  /* 10f60b03 push ecx */
  push32((uint32_t)(ECX));
  /* 10f60b04 mov eax, dword ptr [0x10f8083c] */
  EAX = (r32((uint32_t)(0x10f8083c)));
  /* 10f60b09 push eax */
  push32((uint32_t)(EAX));
  /* 10f60b0a call 0x10f578c0 */
  push32(0x10f60b0fu); f_10f578c0();
  /* 10f60b0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60b12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f60b14 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60b17 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10f60b1a mov dword ptr [0x10f80838], ecx */
  w32((uint32_t)(0x10f80838), (ECX));
  /* 10f60b20 mov edx, dword ptr [0x10f80840] */
  EDX = (r32((uint32_t)(0x10f80840)));
  /* 10f60b26 push edx */
  push32((uint32_t)(EDX));
  /* 10f60b27 call 0x10f578c0 */
  push32(0x10f60b2cu); f_10f578c0();
  /* 10f60b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60b2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f60b31 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60b34 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10f60b37 mov dword ptr [0x10f80830], ecx */
  w32((uint32_t)(0x10f80830), (ECX));
  /* 10f60b3d mov dword ptr [0x10f8082c], 0 */
  w32((uint32_t)(0x10f8082c), (0x0u));
  /* 10f60b47 cmp dword ptr [0x10f80838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60b4e je 0x10f60b59 */
  if (C.zf) goto L_10f60b59;
  /* 10f60b50 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10f60b57 jmp 0x10f60b6b */
  goto L_10f60b6b;
L_10f60b59:;
  /* 10f60b59 mov edx, dword ptr [0x10f8083c] */
  EDX = (r32((uint32_t)(0x10f8083c)));
  /* 10f60b5f push edx */
  push32((uint32_t)(EDX));
  /* 10f60b60 call 0x10f615a0 */
  push32(0x10f60b65u); f_10f615a0();
  /* 10f60b65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60b68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f60b6b:;
  /* 10f60b6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f60b6e mov dword ptr [0x10f80834], eax */
  w32((uint32_t)(0x10f80834), (EAX));
  /* 10f60b73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f60b75 push 0x10f60bc0 */
  push32((uint32_t)(0x10f60bc0u));
  /* 10f60b7a call dword ptr [0x10f832d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832d4))), 0x10f60b80u);
  /* 10f60b80 mov ecx, dword ptr [0x10f80844] */
  ECX = (r32((uint32_t)(0x10f80844)));
  /* 10f60b86 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10f60b8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f60b8e je 0x10f60bac */
  if (C.zf) goto L_10f60bac;
  /* 10f60b90 mov edx, dword ptr [0x10f80844] */
  EDX = (r32((uint32_t)(0x10f80844)));
  /* 10f60b96 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10f60b9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f60b9e je 0x10f60bac */
  if (C.zf) goto L_10f60bac;
  /* 10f60ba0 mov eax, dword ptr [0x10f80844] */
  EAX = (r32((uint32_t)(0x10f80844)));
  /* 10f60ba5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10f60ba8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60baa jne 0x10f60bb6 */
  if (!C.zf) goto L_10f60bb6;
L_10f60bac:;
  /* 10f60bac mov dword ptr [0x10f80844], 0 */
  w32((uint32_t)(0x10f80844), (0x0u));
L_10f60bb6:;
  /* 10f60bb6 mov esp, ebp */
  ESP = (EBP);
  /* 10f60bb8 pop ebp */
  EBP = (pop32());
  /* 10f60bb9 ret  */
  ESPCHK(0x10f60b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bc0 @ 0x10f60bc0 (804 bytes, 220 insns) */
void f_10f60bc0(void) {
  FTRACE(0x10f60bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f60bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f60bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10f60bc3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f60bc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60bc9 push eax */
  push32((uint32_t)(EAX));
  /* 10f60bca call 0x10f61520 */
  push32(0x10f60bcfu); f_10f61520();
  /* 10f60bcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60bd2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10f60bd5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10f60bd7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10f60bda push ecx */
  push32((uint32_t)(ECX));
  /* 10f60bdb mov edx, dword ptr [0x10f80830] */
  EDX = (r32((uint32_t)(0x10f80830)));
  /* 10f60be1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f60be3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f60be5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10f60beb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60bf1 push edx */
  push32((uint32_t)(EDX));
  /* 10f60bf2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f60bf5 push eax */
  push32((uint32_t)(EAX));
  /* 10f60bf6 call dword ptr [0x10f8084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8084c))), 0x10f60bfcu);
  /* 10f60bfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60bfe jne 0x10f60c14 */
  if (!C.zf) goto L_10f60c14;
  /* 10f60c00 mov dword ptr [0x10f80844], 0 */
  w32((uint32_t)(0x10f80844), (0x0u));
  /* 10f60c0a mov eax, 1 */
  EAX = (0x1u);
  /* 10f60c0f jmp 0x10f60ede */
  goto L_10f60ede;
L_10f60c14:;
  /* 10f60c14 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10f60c17 push ecx */
  push32((uint32_t)(ECX));
  /* 10f60c18 mov edx, dword ptr [0x10f80840] */
  EDX = (r32((uint32_t)(0x10f80840)));
  /* 10f60c1e push edx */
  push32((uint32_t)(EDX));
  /* 10f60c1f call 0x10f63160 */
  push32(0x10f60c24u); f_10f63160();
  /* 10f60c24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60c27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60c29 jne 0x10f60d4f */
  if (!C.zf) goto L_10f60d4f;
  /* 10f60c2f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10f60c31 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10f60c34 push eax */
  push32((uint32_t)(EAX));
  /* 10f60c35 mov ecx, dword ptr [0x10f80838] */
  ECX = (r32((uint32_t)(0x10f80838)));
  /* 10f60c3b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f60c3d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f60c3f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10f60c45 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60c4b push ecx */
  push32((uint32_t)(ECX));
  /* 10f60c4c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f60c4f push edx */
  push32((uint32_t)(EDX));
  /* 10f60c50 call dword ptr [0x10f8084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8084c))), 0x10f60c56u);
  /* 10f60c56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60c58 jne 0x10f60c6e */
  if (!C.zf) goto L_10f60c6e;
  /* 10f60c5a mov dword ptr [0x10f80844], 0 */
  w32((uint32_t)(0x10f80844), (0x0u));
  /* 10f60c64 mov eax, 1 */
  EAX = (0x1u);
  /* 10f60c69 jmp 0x10f60ede */
  goto L_10f60ede;
L_10f60c6e:;
  /* 10f60c6e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10f60c71 push eax */
  push32((uint32_t)(EAX));
  /* 10f60c72 mov ecx, dword ptr [0x10f8083c] */
  ECX = (r32((uint32_t)(0x10f8083c)));
  /* 10f60c78 push ecx */
  push32((uint32_t)(ECX));
  /* 10f60c79 call 0x10f63160 */
  push32(0x10f60c7eu); f_10f63160();
  /* 10f60c7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60c81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60c83 jne 0x10f60cb0 */
  if (!C.zf) goto L_10f60cb0;
  /* 10f60c85 mov edx, dword ptr [0x10f80844] */
  EDX = (r32((uint32_t)(0x10f80844)));
  /* 10f60c8b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10f60c91 mov dword ptr [0x10f80844], edx */
  w32((uint32_t)(0x10f80844), (EDX));
  /* 10f60c97 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f60c9a mov dword ptr [0x10f80848], eax */
  w32((uint32_t)(0x10f80848), (EAX));
  /* 10f60c9f mov ecx, dword ptr [0x10f80848] */
  ECX = (r32((uint32_t)(0x10f80848)));
  /* 10f60ca5 mov dword ptr [0x10f8082c], ecx */
  w32((uint32_t)(0x10f8082c), (ECX));
  /* 10f60cab jmp 0x10f60d4f */
  goto L_10f60d4f;
L_10f60cb0:;
  /* 10f60cb0 mov edx, dword ptr [0x10f80844] */
  EDX = (r32((uint32_t)(0x10f80844)));
  /* 10f60cb6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10f60cb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f60cbb jne 0x10f60d4f */
  if (!C.zf) goto L_10f60d4f;
  /* 10f60cc1 cmp dword ptr [0x10f80834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60cc8 je 0x10f60d1d */
  if (C.zf) goto L_10f60d1d;
  /* 10f60cca mov eax, dword ptr [0x10f80834] */
  EAX = (r32((uint32_t)(0x10f80834)));
  /* 10f60ccf push eax */
  push32((uint32_t)(EAX));
  /* 10f60cd0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10f60cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f60cd4 mov edx, dword ptr [0x10f8083c] */
  EDX = (r32((uint32_t)(0x10f8083c)));
  /* 10f60cda push edx */
  push32((uint32_t)(EDX));
  /* 10f60cdb call 0x10f63230 */
  push32(0x10f60ce0u); f_10f63230();
  /* 10f60ce0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60ce3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60ce5 jne 0x10f60d1d */
  if (!C.zf) goto L_10f60d1d;
  /* 10f60ce7 mov eax, dword ptr [0x10f80844] */
  EAX = (r32((uint32_t)(0x10f80844)));
  /* 10f60cec or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10f60cee mov dword ptr [0x10f80844], eax */
  w32((uint32_t)(0x10f80844), (EAX));
  /* 10f60cf3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f60cf6 mov dword ptr [0x10f80848], ecx */
  w32((uint32_t)(0x10f80848), (ECX));
  /* 10f60cfc mov edx, dword ptr [0x10f8083c] */
  EDX = (r32((uint32_t)(0x10f8083c)));
  /* 10f60d02 push edx */
  push32((uint32_t)(EDX));
  /* 10f60d03 call 0x10f578c0 */
  push32(0x10f60d08u); f_10f578c0();
  /* 10f60d08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60d0b cmp eax, dword ptr [0x10f80834] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f80834))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60d11 jne 0x10f60d1b */
  if (!C.zf) goto L_10f60d1b;
  /* 10f60d13 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f60d16 mov dword ptr [0x10f8082c], eax */
  w32((uint32_t)(0x10f8082c), (EAX));
L_10f60d1b:;
  /* 10f60d1b jmp 0x10f60d4f */
  goto L_10f60d4f;
L_10f60d1d:;
  /* 10f60d1d mov ecx, dword ptr [0x10f80844] */
  ECX = (r32((uint32_t)(0x10f80844)));
  /* 10f60d23 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f60d26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f60d28 jne 0x10f60d4f */
  if (!C.zf) goto L_10f60d4f;
  /* 10f60d2a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f60d2d push edx */
  push32((uint32_t)(EDX));
  /* 10f60d2e call 0x10f61260 */
  push32(0x10f60d33u); f_10f61260();
  /* 10f60d33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60d36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60d38 je 0x10f60d4f */
  if (C.zf) goto L_10f60d4f;
  /* 10f60d3a mov eax, dword ptr [0x10f80844] */
  EAX = (r32((uint32_t)(0x10f80844)));
  /* 10f60d3f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10f60d41 mov dword ptr [0x10f80844], eax */
  w32((uint32_t)(0x10f80844), (EAX));
  /* 10f60d46 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f60d49 mov dword ptr [0x10f80848], ecx */
  w32((uint32_t)(0x10f80848), (ECX));
L_10f60d4f:;
  /* 10f60d4f mov edx, dword ptr [0x10f80844] */
  EDX = (r32((uint32_t)(0x10f80844)));
  /* 10f60d55 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10f60d5b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60d61 je 0x10f60ed1 */
  if (C.zf) goto L_10f60ed1;
  /* 10f60d67 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10f60d69 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10f60d6c push eax */
  push32((uint32_t)(EAX));
  /* 10f60d6d mov ecx, dword ptr [0x10f80838] */
  ECX = (r32((uint32_t)(0x10f80838)));
  /* 10f60d73 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f60d75 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f60d77 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10f60d7d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60d83 push ecx */
  push32((uint32_t)(ECX));
  /* 10f60d84 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f60d87 push edx */
  push32((uint32_t)(EDX));
  /* 10f60d88 call dword ptr [0x10f8084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8084c))), 0x10f60d8eu);
  /* 10f60d8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60d90 jne 0x10f60da6 */
  if (!C.zf) goto L_10f60da6;
  /* 10f60d92 mov dword ptr [0x10f80844], 0 */
  w32((uint32_t)(0x10f80844), (0x0u));
  /* 10f60d9c mov eax, 1 */
  EAX = (0x1u);
  /* 10f60da1 jmp 0x10f60ede */
  goto L_10f60ede;
L_10f60da6:;
  /* 10f60da6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10f60da9 push eax */
  push32((uint32_t)(EAX));
  /* 10f60daa mov ecx, dword ptr [0x10f8083c] */
  ECX = (r32((uint32_t)(0x10f8083c)));
  /* 10f60db0 push ecx */
  push32((uint32_t)(ECX));
  /* 10f60db1 call 0x10f63160 */
  push32(0x10f60db6u); f_10f63160();
  /* 10f60db6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60db9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60dbb jne 0x10f60e70 */
  if (!C.zf) goto L_10f60e70;
  /* 10f60dc1 mov edx, dword ptr [0x10f80844] */
  EDX = (r32((uint32_t)(0x10f80844)));
  /* 10f60dc7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10f60dca mov dword ptr [0x10f80844], edx */
  w32((uint32_t)(0x10f80844), (EDX));
  /* 10f60dd0 cmp dword ptr [0x10f80838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60dd7 je 0x10f60dfa */
  if (C.zf) goto L_10f60dfa;
  /* 10f60dd9 mov eax, dword ptr [0x10f80844] */
  EAX = (r32((uint32_t)(0x10f80844)));
  /* 10f60dde or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10f60de1 mov dword ptr [0x10f80844], eax */
  w32((uint32_t)(0x10f80844), (EAX));
  /* 10f60de6 cmp dword ptr [0x10f8082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60ded jne 0x10f60df8 */
  if (!C.zf) goto L_10f60df8;
  /* 10f60def mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f60df2 mov dword ptr [0x10f8082c], ecx */
  w32((uint32_t)(0x10f8082c), (ECX));
L_10f60df8:;
  /* 10f60df8 jmp 0x10f60e6e */
  goto L_10f60e6e;
L_10f60dfa:;
  /* 10f60dfa cmp dword ptr [0x10f80834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60e01 je 0x10f60e4f */
  if (C.zf) goto L_10f60e4f;
  /* 10f60e03 mov edx, dword ptr [0x10f8083c] */
  EDX = (r32((uint32_t)(0x10f8083c)));
  /* 10f60e09 push edx */
  push32((uint32_t)(EDX));
  /* 10f60e0a call 0x10f578c0 */
  push32(0x10f60e0fu); f_10f578c0();
  /* 10f60e0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60e12 cmp eax, dword ptr [0x10f80834] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f80834))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60e18 jne 0x10f60e4f */
  if (!C.zf) goto L_10f60e4f;
  /* 10f60e1a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f60e1c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f60e1f push eax */
  push32((uint32_t)(EAX));
  /* 10f60e20 call 0x10f612b0 */
  push32(0x10f60e25u); f_10f612b0();
  /* 10f60e25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60e28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60e2a je 0x10f60e4d */
  if (C.zf) goto L_10f60e4d;
  /* 10f60e2c mov ecx, dword ptr [0x10f80844] */
  ECX = (r32((uint32_t)(0x10f80844)));
  /* 10f60e32 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10f60e35 mov dword ptr [0x10f80844], ecx */
  w32((uint32_t)(0x10f80844), (ECX));
  /* 10f60e3b cmp dword ptr [0x10f8082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60e42 jne 0x10f60e4d */
  if (!C.zf) goto L_10f60e4d;
  /* 10f60e44 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f60e47 mov dword ptr [0x10f8082c], edx */
  w32((uint32_t)(0x10f8082c), (EDX));
L_10f60e4d:;
  /* 10f60e4d jmp 0x10f60e6e */
  goto L_10f60e6e;
L_10f60e4f:;
  /* 10f60e4f mov eax, dword ptr [0x10f80844] */
  EAX = (r32((uint32_t)(0x10f80844)));
  /* 10f60e54 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10f60e57 mov dword ptr [0x10f80844], eax */
  w32((uint32_t)(0x10f80844), (EAX));
  /* 10f60e5c cmp dword ptr [0x10f8082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60e63 jne 0x10f60e6e */
  if (!C.zf) goto L_10f60e6e;
  /* 10f60e65 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f60e68 mov dword ptr [0x10f8082c], ecx */
  w32((uint32_t)(0x10f8082c), (ECX));
L_10f60e6e:;
  /* 10f60e6e jmp 0x10f60ed1 */
  goto L_10f60ed1;
L_10f60e70:;
  /* 10f60e70 cmp dword ptr [0x10f80838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60e77 jne 0x10f60ed1 */
  if (!C.zf) goto L_10f60ed1;
  /* 10f60e79 cmp dword ptr [0x10f80834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60e80 je 0x10f60ed1 */
  if (C.zf) goto L_10f60ed1;
  /* 10f60e82 mov edx, dword ptr [0x10f80834] */
  EDX = (r32((uint32_t)(0x10f80834)));
  /* 10f60e88 push edx */
  push32((uint32_t)(EDX));
  /* 10f60e89 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10f60e8c push eax */
  push32((uint32_t)(EAX));
  /* 10f60e8d mov ecx, dword ptr [0x10f8083c] */
  ECX = (r32((uint32_t)(0x10f8083c)));
  /* 10f60e93 push ecx */
  push32((uint32_t)(ECX));
  /* 10f60e94 call 0x10f63230 */
  push32(0x10f60e99u); f_10f63230();
  /* 10f60e99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60e9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60e9e jne 0x10f60ed1 */
  if (!C.zf) goto L_10f60ed1;
  /* 10f60ea0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f60ea2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f60ea5 push edx */
  push32((uint32_t)(EDX));
  /* 10f60ea6 call 0x10f612b0 */
  push32(0x10f60eabu); f_10f612b0();
  /* 10f60eab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60eae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60eb0 je 0x10f60ed1 */
  if (C.zf) goto L_10f60ed1;
  /* 10f60eb2 mov eax, dword ptr [0x10f80844] */
  EAX = (r32((uint32_t)(0x10f80844)));
  /* 10f60eb7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10f60eba mov dword ptr [0x10f80844], eax */
  w32((uint32_t)(0x10f80844), (EAX));
  /* 10f60ebf cmp dword ptr [0x10f8082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60ec6 jne 0x10f60ed1 */
  if (!C.zf) goto L_10f60ed1;
  /* 10f60ec8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f60ecb mov dword ptr [0x10f8082c], ecx */
  w32((uint32_t)(0x10f8082c), (ECX));
L_10f60ed1:;
  /* 10f60ed1 mov eax, dword ptr [0x10f80844] */
  EAX = (r32((uint32_t)(0x10f80844)));
  /* 10f60ed6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10f60ed9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f60edb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f60edd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10f60ede:;
  /* 10f60ede mov esp, ebp */
  ESP = (EBP);
  /* 10f60ee0 pop ebp */
  EBP = (pop32());
  /* 10f60ee1 ret 4 */
  ESPCHK(0x10f60bc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010ef0 @ 0x10f60ef0 (116 bytes, 33 insns) */
void f_10f60ef0(void) {
  FTRACE(0x10f60ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f60ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f60ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10f60ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f60ef4 mov eax, dword ptr [0x10f8083c] */
  EAX = (r32((uint32_t)(0x10f8083c)));
  /* 10f60ef9 push eax */
  push32((uint32_t)(EAX));
  /* 10f60efa call 0x10f578c0 */
  push32(0x10f60effu); f_10f578c0();
  /* 10f60eff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60f02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f60f04 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60f07 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10f60f0a mov dword ptr [0x10f80838], ecx */
  w32((uint32_t)(0x10f80838), (ECX));
  /* 10f60f10 cmp dword ptr [0x10f80838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60f17 je 0x10f60f22 */
  if (C.zf) goto L_10f60f22;
  /* 10f60f19 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10f60f20 jmp 0x10f60f34 */
  goto L_10f60f34;
L_10f60f22:;
  /* 10f60f22 mov edx, dword ptr [0x10f8083c] */
  EDX = (r32((uint32_t)(0x10f8083c)));
  /* 10f60f28 push edx */
  push32((uint32_t)(EDX));
  /* 10f60f29 call 0x10f615a0 */
  push32(0x10f60f2eu); f_10f615a0();
  /* 10f60f2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60f31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f60f34:;
  /* 10f60f34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f60f37 mov dword ptr [0x10f80834], eax */
  w32((uint32_t)(0x10f80834), (EAX));
  /* 10f60f3c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f60f3e push 0x10f60f70 */
  push32((uint32_t)(0x10f60f70u));
  /* 10f60f43 call dword ptr [0x10f832d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832d4))), 0x10f60f49u);
  /* 10f60f49 mov ecx, dword ptr [0x10f80844] */
  ECX = (r32((uint32_t)(0x10f80844)));
  /* 10f60f4f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10f60f52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f60f54 jne 0x10f60f60 */
  if (!C.zf) goto L_10f60f60;
  /* 10f60f56 mov dword ptr [0x10f80844], 0 */
  w32((uint32_t)(0x10f80844), (0x0u));
L_10f60f60:;
  /* 10f60f60 mov esp, ebp */
  ESP = (EBP);
  /* 10f60f62 pop ebp */
  EBP = (pop32());
  /* 10f60f63 ret  */
  ESPCHK(0x10f60ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f70 @ 0x10f60f70 (287 bytes, 86 insns) */
void f_10f60f70(void) {
  FTRACE(0x10f60f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f60f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10f60f71 mov ebp, esp */
  EBP = (ESP);
  /* 10f60f73 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f60f76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f60f79 push eax */
  push32((uint32_t)(EAX));
  /* 10f60f7a call 0x10f61520 */
  push32(0x10f60f7fu); f_10f61520();
  /* 10f60f7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60f82 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10f60f85 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10f60f87 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10f60f8a push ecx */
  push32((uint32_t)(ECX));
  /* 10f60f8b mov edx, dword ptr [0x10f80838] */
  EDX = (r32((uint32_t)(0x10f80838)));
  /* 10f60f91 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f60f93 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f60f95 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10f60f9b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60fa1 push edx */
  push32((uint32_t)(EDX));
  /* 10f60fa2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f60fa5 push eax */
  push32((uint32_t)(EAX));
  /* 10f60fa6 call dword ptr [0x10f8084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8084c))), 0x10f60facu);
  /* 10f60fac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60fae jne 0x10f60fc4 */
  if (!C.zf) goto L_10f60fc4;
  /* 10f60fb0 mov dword ptr [0x10f80844], 0 */
  w32((uint32_t)(0x10f80844), (0x0u));
  /* 10f60fba mov eax, 1 */
  EAX = (0x1u);
  /* 10f60fbf jmp 0x10f61089 */
  goto L_10f61089;
L_10f60fc4:;
  /* 10f60fc4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10f60fc7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f60fc8 mov edx, dword ptr [0x10f8083c] */
  EDX = (r32((uint32_t)(0x10f8083c)));
  /* 10f60fce push edx */
  push32((uint32_t)(EDX));
  /* 10f60fcf call 0x10f63160 */
  push32(0x10f60fd4u); f_10f63160();
  /* 10f60fd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60fd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60fd9 jne 0x10f61019 */
  if (!C.zf) goto L_10f61019;
  /* 10f60fdb cmp dword ptr [0x10f80838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f60fe2 jne 0x10f60ff6 */
  if (!C.zf) goto L_10f60ff6;
  /* 10f60fe4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f60fe6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f60fe9 push eax */
  push32((uint32_t)(EAX));
  /* 10f60fea call 0x10f612b0 */
  push32(0x10f60fefu); f_10f612b0();
  /* 10f60fef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f60ff2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f60ff4 je 0x10f61017 */
  if (C.zf) goto L_10f61017;
L_10f60ff6:;
  /* 10f60ff6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f60ff9 mov dword ptr [0x10f80848], ecx */
  w32((uint32_t)(0x10f80848), (ECX));
  /* 10f60fff mov edx, dword ptr [0x10f80848] */
  EDX = (r32((uint32_t)(0x10f80848)));
  /* 10f61005 mov dword ptr [0x10f8082c], edx */
  w32((uint32_t)(0x10f8082c), (EDX));
  /* 10f6100b mov eax, dword ptr [0x10f80844] */
  EAX = (r32((uint32_t)(0x10f80844)));
  /* 10f61010 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10f61012 mov dword ptr [0x10f80844], eax */
  w32((uint32_t)(0x10f80844), (EAX));
L_10f61017:;
  /* 10f61017 jmp 0x10f6107c */
  goto L_10f6107c;
L_10f61019:;
  /* 10f61019 cmp dword ptr [0x10f80838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61020 jne 0x10f6107c */
  if (!C.zf) goto L_10f6107c;
  /* 10f61022 cmp dword ptr [0x10f80834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61029 je 0x10f6107c */
  if (C.zf) goto L_10f6107c;
  /* 10f6102b mov ecx, dword ptr [0x10f80834] */
  ECX = (r32((uint32_t)(0x10f80834)));
  /* 10f61031 push ecx */
  push32((uint32_t)(ECX));
  /* 10f61032 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10f61035 push edx */
  push32((uint32_t)(EDX));
  /* 10f61036 mov eax, dword ptr [0x10f8083c] */
  EAX = (r32((uint32_t)(0x10f8083c)));
  /* 10f6103b push eax */
  push32((uint32_t)(EAX));
  /* 10f6103c call 0x10f63230 */
  push32(0x10f61041u); f_10f63230();
  /* 10f61041 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f61046 jne 0x10f6107c */
  if (!C.zf) goto L_10f6107c;
  /* 10f61048 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f6104a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f6104d push ecx */
  push32((uint32_t)(ECX));
  /* 10f6104e call 0x10f612b0 */
  push32(0x10f61053u); f_10f612b0();
  /* 10f61053 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61056 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f61058 je 0x10f6107c */
  if (C.zf) goto L_10f6107c;
  /* 10f6105a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f6105d mov dword ptr [0x10f80848], edx */
  w32((uint32_t)(0x10f80848), (EDX));
  /* 10f61063 mov eax, dword ptr [0x10f80848] */
  EAX = (r32((uint32_t)(0x10f80848)));
  /* 10f61068 mov dword ptr [0x10f8082c], eax */
  w32((uint32_t)(0x10f8082c), (EAX));
  /* 10f6106d mov ecx, dword ptr [0x10f80844] */
  ECX = (r32((uint32_t)(0x10f80844)));
  /* 10f61073 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10f61076 mov dword ptr [0x10f80844], ecx */
  w32((uint32_t)(0x10f80844), (ECX));
L_10f6107c:;
  /* 10f6107c mov eax, dword ptr [0x10f80844] */
  EAX = (r32((uint32_t)(0x10f80844)));
  /* 10f61081 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10f61084 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f61086 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f61088 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10f61089:;
  /* 10f61089 mov esp, ebp */
  ESP = (EBP);
  /* 10f6108b pop ebp */
  EBP = (pop32());
  /* 10f6108c ret 4 */
  ESPCHK(0x10f60f70u, _esp0);
  ESP += 8; return;
}

/* FUN_10011090 @ 0x10f61090 (69 bytes, 20 insns) */
void f_10f61090(void) {
  FTRACE(0x10f61090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f61090 push ebp */
  push32((uint32_t)(EBP));
  /* 10f61091 mov ebp, esp */
  EBP = (ESP);
  /* 10f61093 mov eax, dword ptr [0x10f80840] */
  EAX = (r32((uint32_t)(0x10f80840)));
  /* 10f61098 push eax */
  push32((uint32_t)(EAX));
  /* 10f61099 call 0x10f578c0 */
  push32(0x10f6109eu); f_10f578c0();
  /* 10f6109e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f610a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f610a3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f610a6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10f610a9 mov dword ptr [0x10f80830], ecx */
  w32((uint32_t)(0x10f80830), (ECX));
  /* 10f610af push 1 */
  push32((uint32_t)(0x1u));
  /* 10f610b1 push 0x10f610e0 */
  push32((uint32_t)(0x10f610e0u));
  /* 10f610b6 call dword ptr [0x10f832d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832d4))), 0x10f610bcu);
  /* 10f610bc mov edx, dword ptr [0x10f80844] */
  EDX = (r32((uint32_t)(0x10f80844)));
  /* 10f610c2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10f610c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f610c7 jne 0x10f610d3 */
  if (!C.zf) goto L_10f610d3;
  /* 10f610c9 mov dword ptr [0x10f80844], 0 */
  w32((uint32_t)(0x10f80844), (0x0u));
L_10f610d3:;
  /* 10f610d3 pop ebp */
  EBP = (pop32());
  /* 10f610d4 ret  */
  ESPCHK(0x10f61090u, _esp0);
  ESP += 4; return;
}

/* FUN_100110e0 @ 0x10f610e0 (172 bytes, 54 insns) */
void f_10f610e0(void) {
  FTRACE(0x10f610e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f610e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f610e1 mov ebp, esp */
  EBP = (ESP);
  /* 10f610e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f610e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f610e9 push eax */
  push32((uint32_t)(EAX));
  /* 10f610ea call 0x10f61520 */
  push32(0x10f610efu); f_10f61520();
  /* 10f610ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f610f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10f610f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10f610f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10f610fa push ecx */
  push32((uint32_t)(ECX));
  /* 10f610fb mov edx, dword ptr [0x10f80830] */
  EDX = (r32((uint32_t)(0x10f80830)));
  /* 10f61101 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f61103 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f61105 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10f6110b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61111 push edx */
  push32((uint32_t)(EDX));
  /* 10f61112 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f61115 push eax */
  push32((uint32_t)(EAX));
  /* 10f61116 call dword ptr [0x10f8084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8084c))), 0x10f6111cu);
  /* 10f6111c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f6111e jne 0x10f61131 */
  if (!C.zf) goto L_10f61131;
  /* 10f61120 mov dword ptr [0x10f80844], 0 */
  w32((uint32_t)(0x10f80844), (0x0u));
  /* 10f6112a mov eax, 1 */
  EAX = (0x1u);
  /* 10f6112f jmp 0x10f61186 */
  goto L_10f61186;
L_10f61131:;
  /* 10f61131 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10f61134 push ecx */
  push32((uint32_t)(ECX));
  /* 10f61135 mov edx, dword ptr [0x10f80840] */
  EDX = (r32((uint32_t)(0x10f80840)));
  /* 10f6113b push edx */
  push32((uint32_t)(EDX));
  /* 10f6113c call 0x10f63160 */
  push32(0x10f61141u); f_10f63160();
  /* 10f61141 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f61146 jne 0x10f61179 */
  if (!C.zf) goto L_10f61179;
  /* 10f61148 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f6114b push eax */
  push32((uint32_t)(EAX));
  /* 10f6114c call 0x10f61260 */
  push32(0x10f61151u); f_10f61260();
  /* 10f61151 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61154 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f61156 je 0x10f61179 */
  if (C.zf) goto L_10f61179;
  /* 10f61158 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10f6115b mov dword ptr [0x10f80848], ecx */
  w32((uint32_t)(0x10f80848), (ECX));
  /* 10f61161 mov edx, dword ptr [0x10f80848] */
  EDX = (r32((uint32_t)(0x10f80848)));
  /* 10f61167 mov dword ptr [0x10f8082c], edx */
  w32((uint32_t)(0x10f8082c), (EDX));
  /* 10f6116d mov eax, dword ptr [0x10f80844] */
  EAX = (r32((uint32_t)(0x10f80844)));
  /* 10f61172 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10f61174 mov dword ptr [0x10f80844], eax */
  w32((uint32_t)(0x10f80844), (EAX));
L_10f61179:;
  /* 10f61179 mov eax, dword ptr [0x10f80844] */
  EAX = (r32((uint32_t)(0x10f80844)));
  /* 10f6117e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10f61181 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f61183 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f61185 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10f61186:;
  /* 10f61186 mov esp, ebp */
  ESP = (EBP);
  /* 10f61188 pop ebp */
  EBP = (pop32());
  /* 10f61189 ret 4 */
  ESPCHK(0x10f610e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10011190 @ 0x10f61190 (43 bytes, 11 insns) */
void f_10f61190(void) {
  FTRACE(0x10f61190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f61190 push ebp */
  push32((uint32_t)(EBP));
  /* 10f61191 mov ebp, esp */
  EBP = (ESP);
  /* 10f61193 mov eax, dword ptr [0x10f80844] */
  EAX = (r32((uint32_t)(0x10f80844)));
  /* 10f61198 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10f6119d mov dword ptr [0x10f80844], eax */
  w32((uint32_t)(0x10f80844), (EAX));
  /* 10f611a2 call dword ptr [0x10f832c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832c4))), 0x10f611a8u);
  /* 10f611a8 mov dword ptr [0x10f80848], eax */
  w32((uint32_t)(0x10f80848), (EAX));
  /* 10f611ad mov ecx, dword ptr [0x10f80848] */
  ECX = (r32((uint32_t)(0x10f80848)));
  /* 10f611b3 mov dword ptr [0x10f8082c], ecx */
  w32((uint32_t)(0x10f8082c), (ECX));
  /* 10f611b9 pop ebp */
  EBP = (pop32());
  /* 10f611ba ret  */
  ESPCHK(0x10f61190u, _esp0);
  ESP += 4; return;
}

/* FUN_100111c0 @ 0x10f611c0 (155 bytes, 57 insns) */
void f_10f611c0(void) {
  FTRACE(0x10f611c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f611c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f611c1 mov ebp, esp */
  EBP = (ESP);
  /* 10f611c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f611c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f611ca je 0x10f611eb */
  if (C.zf) goto L_10f611eb;
  /* 10f611cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f611cf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f611d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f611d4 je 0x10f611eb */
  if (C.zf) goto L_10f611eb;
  /* 10f611d6 push 0x10f7c864 */
  push32((uint32_t)(0x10f7c864u));
  /* 10f611db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f611de push edx */
  push32((uint32_t)(EDX));
  /* 10f611df call 0x10f60720 */
  push32(0x10f611e4u); f_10f60720();
  /* 10f611e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f611e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f611e9 jne 0x10f61213 */
  if (!C.zf) goto L_10f61213;
L_10f611eb:;
  /* 10f611eb push 8 */
  push32((uint32_t)(0x8u));
  /* 10f611ed lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10f611f0 push eax */
  push32((uint32_t)(EAX));
  /* 10f611f1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10f611f6 mov ecx, dword ptr [0x10f80848] */
  ECX = (r32((uint32_t)(0x10f80848)));
  /* 10f611fc push ecx */
  push32((uint32_t)(ECX));
  /* 10f611fd call dword ptr [0x10f8084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8084c))), 0x10f61203u);
  /* 10f61203 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f61205 jne 0x10f6120b */
  if (!C.zf) goto L_10f6120b;
  /* 10f61207 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f61209 jmp 0x10f61257 */
  goto L_10f61257;
L_10f6120b:;
  /* 10f6120b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10f6120e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10f61211 jmp 0x10f6124b */
  goto L_10f6124b;
L_10f61213:;
  /* 10f61213 push 0x10f7c860 */
  push32((uint32_t)(0x10f7c860u));
  /* 10f61218 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6121b push eax */
  push32((uint32_t)(EAX));
  /* 10f6121c call 0x10f60720 */
  push32(0x10f61221u); f_10f60720();
  /* 10f61221 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f61226 jne 0x10f6124b */
  if (!C.zf) goto L_10f6124b;
  /* 10f61228 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f6122a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10f6122d push ecx */
  push32((uint32_t)(ECX));
  /* 10f6122e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10f61230 mov edx, dword ptr [0x10f80848] */
  EDX = (r32((uint32_t)(0x10f80848)));
  /* 10f61236 push edx */
  push32((uint32_t)(EDX));
  /* 10f61237 call dword ptr [0x10f8084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8084c))), 0x10f6123du);
  /* 10f6123d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f6123f jne 0x10f61245 */
  if (!C.zf) goto L_10f61245;
  /* 10f61241 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f61243 jmp 0x10f61257 */
  goto L_10f61257;
L_10f61245:;
  /* 10f61245 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10f61248 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10f6124b:;
  /* 10f6124b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6124e push ecx */
  push32((uint32_t)(ECX));
  /* 10f6124f call 0x10f63340 */
  push32(0x10f61254u); f_10f63340();
  /* 10f61254 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f61257:;
  /* 10f61257 mov esp, ebp */
  ESP = (EBP);
  /* 10f61259 pop ebp */
  EBP = (pop32());
  /* 10f6125a ret  */
  ESPCHK(0x10f611c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011260 @ 0x10f61260 (79 bytes, 26 insns) */
void f_10f61260(void) {
  FTRACE(0x10f61260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f61260 push ebp */
  push32((uint32_t)(EBP));
  /* 10f61261 mov ebp, esp */
  EBP = (ESP);
  /* 10f61263 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f61266 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10f6126a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10f6126e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f61275 jmp 0x10f61280 */
  goto L_10f61280;
L_10f61277:;
  /* 10f61277 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f6127a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6127d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10f61280:;
  /* 10f61280 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61284 jae 0x10f612a6 */
  if (!C.cf) goto L_10f612a6;
  /* 10f61286 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f61289 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f6128f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f61292 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f61294 mov cx, word ptr [eax*2 + 0x10f7f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10f7f9c4)));
  /* 10f6129c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6129e jne 0x10f612a4 */
  if (!C.zf) goto L_10f612a4;
  /* 10f612a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f612a2 jmp 0x10f612ab */
  goto L_10f612ab;
L_10f612a4:;
  /* 10f612a4 jmp 0x10f61277 */
  goto L_10f61277;
L_10f612a6:;
  /* 10f612a6 mov eax, 1 */
  EAX = (0x1u);
L_10f612ab:;
  /* 10f612ab mov esp, ebp */
  ESP = (EBP);
  /* 10f612ad pop ebp */
  EBP = (pop32());
  /* 10f612ae ret  */
  ESPCHK(0x10f61260u, _esp0);
  ESP += 4; return;
}

/* FUN_100112b0 @ 0x10f612b0 (135 bytes, 48 insns) */
void f_10f612b0(void) {
  FTRACE(0x10f612b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f612b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f612b1 mov ebp, esp */
  EBP = (ESP);
  /* 10f612b3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f612b6 push esi */
  push32((uint32_t)(ESI));
  /* 10f612b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f612ba and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f612bf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f612c4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f612c9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10f612cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f612d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f612d4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10f612d6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10f612d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10f612da push 1 */
  push32((uint32_t)(0x1u));
  /* 10f612dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f612df push edx */
  push32((uint32_t)(EDX));
  /* 10f612e0 call dword ptr [0x10f8084c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8084c))), 0x10f612e6u);
  /* 10f612e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f612e8 jne 0x10f612ee */
  if (!C.zf) goto L_10f612ee;
  /* 10f612ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f612ec jmp 0x10f61332 */
  goto L_10f61332;
L_10f612ee:;
  /* 10f612ee lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10f612f1 push eax */
  push32((uint32_t)(EAX));
  /* 10f612f2 call 0x10f61520 */
  push32(0x10f612f7u); f_10f61520();
  /* 10f612f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f612fa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f612fd je 0x10f6132d */
  if (C.zf) goto L_10f6132d;
  /* 10f612ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61303 je 0x10f6132d */
  if (C.zf) goto L_10f6132d;
  /* 10f61305 mov ecx, dword ptr [0x10f8083c] */
  ECX = (r32((uint32_t)(0x10f8083c)));
  /* 10f6130b push ecx */
  push32((uint32_t)(ECX));
  /* 10f6130c call 0x10f615a0 */
  push32(0x10f61311u); f_10f615a0();
  /* 10f61311 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61314 mov esi, eax */
  ESI = (EAX);
  /* 10f61316 mov edx, dword ptr [0x10f8083c] */
  EDX = (r32((uint32_t)(0x10f8083c)));
  /* 10f6131c push edx */
  push32((uint32_t)(EDX));
  /* 10f6131d call 0x10f578c0 */
  push32(0x10f61322u); f_10f578c0();
  /* 10f61322 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61325 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61327 jne 0x10f6132d */
  if (!C.zf) goto L_10f6132d;
  /* 10f61329 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f6132b jmp 0x10f61332 */
  goto L_10f61332;
L_10f6132d:;
  /* 10f6132d mov eax, 1 */
  EAX = (0x1u);
L_10f61332:;
  /* 10f61332 pop esi */
  ESI = (pop32());
  /* 10f61333 mov esp, ebp */
  ESP = (EBP);
  /* 10f61335 pop ebp */
  EBP = (pop32());
  /* 10f61336 ret  */
  ESPCHK(0x10f612b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011340 @ 0x10f61340 (77 bytes, 18 insns) */
void f_10f61340(void) {
  FTRACE(0x10f61340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f61340 push ebp */
  push32((uint32_t)(EBP));
  /* 10f61341 mov ebp, esp */
  EBP = (ESP);
  /* 10f61343 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f61349 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10f61353 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10f61359 push eax */
  push32((uint32_t)(EAX));
  /* 10f6135a call dword ptr [0x10f832c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832c0))), 0x10f61360u);
  /* 10f61360 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f61362 je 0x10f61379 */
  if (C.zf) goto L_10f61379;
  /* 10f61364 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6136b jne 0x10f61379 */
  if (!C.zf) goto L_10f61379;
  /* 10f6136d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10f61377 jmp 0x10f61383 */
  goto L_10f61383;
L_10f61379:;
  /* 10f61379 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10f61383:;
  /* 10f61383 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10f61389 mov esp, ebp */
  ESP = (EBP);
  /* 10f6138b pop ebp */
  EBP = (pop32());
  /* 10f6138c ret  */
  ESPCHK(0x10f61340u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10f61390 (388 bytes, 118 insns) */
void f_10f61390(void) {
  FTRACE(0x10f61390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f61390 push ebp */
  push32((uint32_t)(EBP));
  /* 10f61391 mov ebp, esp */
  EBP = (ESP);
  /* 10f61393 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f61396 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10f6139d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10f613a4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10f613ab:;
  /* 10f613ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f613ae cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f613b1 jg 0x10f614f8 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f614f8;
  /* 10f613b7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f613ba add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f613bd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f613be sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f613c0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10f613c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f613c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f613c8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f613cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f613ce cmp edx, dword ptr [ecx + 0x10f7f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10f7f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f613d4 jne 0x10f614ce */
  if (!C.zf) goto L_10f614ce;
  /* 10f613da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f613dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f613e0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f613e4 ja 0x10f61407 */
  if ((!C.cf&&!C.zf)) goto L_10f61407;
  /* 10f613e6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f613ea je 0x10f61479 */
  if (C.zf) goto L_10f61479;
  /* 10f613f0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f613f4 je 0x10f61424 */
  if (C.zf) goto L_10f61424;
  /* 10f613f6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f613fa je 0x10f61446 */
  if (C.zf) goto L_10f61446;
  /* 10f613fc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61400 je 0x10f61468 */
  if (C.zf) goto L_10f61468;
  /* 10f61402 jmp 0x10f61498 */
  goto L_10f61498;
L_10f61407:;
  /* 10f61407 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6140e je 0x10f61435 */
  if (C.zf) goto L_10f61435;
  /* 10f61410 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61417 je 0x10f61457 */
  if (C.zf) goto L_10f61457;
  /* 10f61419 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61420 je 0x10f6148a */
  if (C.zf) goto L_10f6148a;
  /* 10f61422 jmp 0x10f61498 */
  goto L_10f61498;
L_10f61424:;
  /* 10f61424 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61427 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f6142a add ecx, 0x10f7f524 */
  { uint32_t _a=(ECX),_b=(0x10f7f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61430 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f61433 jmp 0x10f61498 */
  goto L_10f61498;
L_10f61435:;
  /* 10f61435 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61438 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f6143b mov eax, dword ptr [edx + 0x10f7f52c] */
  EAX = (r32((uint32_t)(EDX + 0x10f7f52c)));
  /* 10f61441 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f61444 jmp 0x10f61498 */
  goto L_10f61498;
L_10f61446:;
  /* 10f61446 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61449 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f6144c add ecx, 0x10f7f530 */
  { uint32_t _a=(ECX),_b=(0x10f7f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61452 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f61455 jmp 0x10f61498 */
  goto L_10f61498;
L_10f61457:;
  /* 10f61457 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f6145a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f6145d mov eax, dword ptr [edx + 0x10f7f534] */
  EAX = (r32((uint32_t)(EDX + 0x10f7f534)));
  /* 10f61463 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f61466 jmp 0x10f61498 */
  goto L_10f61498;
L_10f61468:;
  /* 10f61468 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f6146b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f6146e add ecx, 0x10f7f538 */
  { uint32_t _a=(ECX),_b=(0x10f7f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61474 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f61477 jmp 0x10f61498 */
  goto L_10f61498;
L_10f61479:;
  /* 10f61479 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f6147c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f6147f add edx, 0x10f7f53c */
  { uint32_t _a=(EDX),_b=(0x10f7f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61485 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f61488 jmp 0x10f61498 */
  goto L_10f61498;
L_10f6148a:;
  /* 10f6148a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f6148d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f61490 add eax, 0x10f7f544 */
  { uint32_t _a=(EAX),_b=(0x10f7f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61495 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f61498:;
  /* 10f61498 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6149c je 0x10f614a4 */
  if (C.zf) goto L_10f614a4;
  /* 10f6149e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f614a2 jge 0x10f614a6 */
  if ((C.sf==C.of)) goto L_10f614a6;
L_10f614a4:;
  /* 10f614a4 jmp 0x10f614f8 */
  goto L_10f614f8;
L_10f614a6:;
  /* 10f614a6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f614a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f614ac push ecx */
  push32((uint32_t)(ECX));
  /* 10f614ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f614b0 push edx */
  push32((uint32_t)(EDX));
  /* 10f614b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f614b4 push eax */
  push32((uint32_t)(EAX));
  /* 10f614b5 call 0x10f582b0 */
  push32(0x10f614bau); f_10f582b0();
  /* 10f614ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f614bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f614c0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f614c3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10f614c7 mov eax, 1 */
  EAX = (0x1u);
  /* 10f614cc jmp 0x10f6150e */
  goto L_10f6150e;
L_10f614ce:;
  /* 10f614ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f614d1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f614d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f614d7 cmp eax, dword ptr [edx + 0x10f7f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10f7f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f614dd jae 0x10f614ea */
  if (!C.cf) goto L_10f614ea;
  /* 10f614df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f614e2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f614e5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f614e8 jmp 0x10f614f3 */
  goto L_10f614f3;
L_10f614ea:;
  /* 10f614ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f614ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f614f0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10f614f3:;
  /* 10f614f3 jmp 0x10f613ab */
  goto L_10f613ab;
L_10f614f8:;
  /* 10f614f8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f614fb push eax */
  push32((uint32_t)(EAX));
  /* 10f614fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f614ff push ecx */
  push32((uint32_t)(ECX));
  /* 10f61500 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f61503 push edx */
  push32((uint32_t)(EDX));
  /* 10f61504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f61507 push eax */
  push32((uint32_t)(EAX));
  /* 10f61508 call dword ptr [0x10f832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832cc))), 0x10f6150eu);
L_10f6150e:;
  /* 10f6150e mov esp, ebp */
  ESP = (EBP);
  /* 10f61510 pop ebp */
  EBP = (pop32());
  /* 10f61511 ret 0x10 */
  ESPCHK(0x10f61390u, _esp0);
  ESP += 20; return;
}

/* FUN_10011520 @ 0x10f61520 (118 bytes, 42 insns) */
void f_10f61520(void) {
  FTRACE(0x10f61520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f61520 push ebp */
  push32((uint32_t)(EBP));
  /* 10f61521 mov ebp, esp */
  EBP = (ESP);
  /* 10f61523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f61526 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f6152d:;
  /* 10f6152d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f61530 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f61532 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10f61535 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10f61539 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6153c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6153f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f61542 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f61544 je 0x10f6158f */
  if (C.zf) goto L_10f6158f;
  /* 10f61546 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10f6154a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6154d jl 0x10f61562 */
  if ((C.sf!=C.of)) goto L_10f61562;
  /* 10f6154f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10f61553 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61556 jg 0x10f61562 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f61562;
  /* 10f61558 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10f6155b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f6155d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10f61560 jmp 0x10f6157c */
  goto L_10f6157c;
L_10f61562:;
  /* 10f61562 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10f61566 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61569 jl 0x10f6157c */
  if ((C.sf!=C.of)) goto L_10f6157c;
  /* 10f6156b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10f6156f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61572 jg 0x10f6157c */
  if ((!C.zf&&C.sf==C.of)) goto L_10f6157c;
  /* 10f61574 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10f61577 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f61579 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10f6157c:;
  /* 10f6157c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f6157f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10f61582 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10f61586 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10f6158a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f6158d jmp 0x10f6152d */
  goto L_10f6152d;
L_10f6158f:;
  /* 10f6158f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f61592 mov esp, ebp */
  ESP = (EBP);
  /* 10f61594 pop ebp */
  EBP = (pop32());
  /* 10f61595 ret  */
  ESPCHK(0x10f61520u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10f615a0 (101 bytes, 36 insns) */
void f_10f615a0(void) {
  FTRACE(0x10f615a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f615a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f615a1 mov ebp, esp */
  EBP = (ESP);
  /* 10f615a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f615a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f615ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f615b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f615b2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10f615b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f615b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f615bb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10f615be:;
  /* 10f615be movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10f615c2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f615c5 jl 0x10f615d0 */
  if ((C.sf!=C.of)) goto L_10f615d0;
  /* 10f615c7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10f615cb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f615ce jle 0x10f615e2 */
  if ((C.zf||C.sf!=C.of)) goto L_10f615e2;
L_10f615d0:;
  /* 10f615d0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10f615d4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f615d7 jl 0x10f615fe */
  if ((C.sf!=C.of)) goto L_10f615fe;
  /* 10f615d9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10f615dd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f615e0 jg 0x10f615fe */
  if ((!C.zf&&C.sf==C.of)) goto L_10f615fe;
L_10f615e2:;
  /* 10f615e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f615e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f615e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f615eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f615ee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f615f0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10f615f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f615f6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f615f9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10f615fc jmp 0x10f615be */
  goto L_10f615be;
L_10f615fe:;
  /* 10f615fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f61601 mov esp, ebp */
  ESP = (EBP);
  /* 10f61603 pop ebp */
  EBP = (pop32());
  /* 10f61604 ret  */
  ESPCHK(0x10f615a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011610 @ 0x10f61610 (122 bytes, 39 insns) */
void f_10f61610(void) {
  FTRACE(0x10f61610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f61610 push ebp */
  push32((uint32_t)(EBP));
  /* 10f61611 mov ebp, esp */
  EBP = (ESP);
  /* 10f61613 push ecx */
  push32((uint32_t)(ECX));
  /* 10f61614 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f61617 cmp eax, dword ptr [0x10f820dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f820dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6161d jae 0x10f61641 */
  if (!C.cf) goto L_10f61641;
  /* 10f6161f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f61622 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f61625 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f61628 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10f6162b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f6162e mov eax, dword ptr [ecx*4 + 0x10f81fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f81fa0)));
  /* 10f61635 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10f6163a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f6163d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f6163f jne 0x10f6165c */
  if (!C.zf) goto L_10f6165c;
L_10f61641:;
  /* 10f61641 call 0x10f5c960 */
  push32(0x10f61646u); f_10f5c960();
  /* 10f61646 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f6164c call 0x10f5c970 */
  push32(0x10f61651u); f_10f5c970();
  /* 10f61651 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f61657 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f6165a jmp 0x10f61686 */
  goto L_10f61686;
L_10f6165c:;
  /* 10f6165c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6165f push edx */
  push32((uint32_t)(EDX));
  /* 10f61660 call 0x10f5e180 */
  push32(0x10f61665u); f_10f5e180();
  /* 10f61665 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61668 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6166b push eax */
  push32((uint32_t)(EAX));
  /* 10f6166c call 0x10f61690 */
  push32(0x10f61671u); f_10f61690();
  /* 10f61671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61674 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f61677 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6167a push ecx */
  push32((uint32_t)(ECX));
  /* 10f6167b call 0x10f5e210 */
  push32(0x10f61680u); f_10f5e210();
  /* 10f61680 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61683 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f61686:;
  /* 10f61686 mov esp, ebp */
  ESP = (EBP);
  /* 10f61688 pop ebp */
  EBP = (pop32());
  /* 10f61689 ret  */
  ESPCHK(0x10f61610u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10f61690 (170 bytes, 59 insns) */
void f_10f61690(void) {
  FTRACE(0x10f61690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f61690 push ebp */
  push32((uint32_t)(EBP));
  /* 10f61691 mov ebp, esp */
  EBP = (ESP);
  /* 10f61693 push ecx */
  push32((uint32_t)(ECX));
  /* 10f61694 push esi */
  push32((uint32_t)(ESI));
  /* 10f61695 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f61698 push eax */
  push32((uint32_t)(EAX));
  /* 10f61699 call 0x10f5e000 */
  push32(0x10f6169eu); f_10f5e000();
  /* 10f6169e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f616a1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f616a4 je 0x10f616e3 */
  if (C.zf) goto L_10f616e3;
  /* 10f616a6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f616aa je 0x10f616b2 */
  if (C.zf) goto L_10f616b2;
  /* 10f616ac cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f616b0 jne 0x10f616cc */
  if (!C.zf) goto L_10f616cc;
L_10f616b2:;
  /* 10f616b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f616b4 call 0x10f5e000 */
  push32(0x10f616b9u); f_10f5e000();
  /* 10f616b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f616bc mov esi, eax */
  ESI = (EAX);
  /* 10f616be push 2 */
  push32((uint32_t)(0x2u));
  /* 10f616c0 call 0x10f5e000 */
  push32(0x10f616c5u); f_10f5e000();
  /* 10f616c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f616c8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f616ca je 0x10f616e3 */
  if (C.zf) goto L_10f616e3;
L_10f616cc:;
  /* 10f616cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f616cf push ecx */
  push32((uint32_t)(ECX));
  /* 10f616d0 call 0x10f5e000 */
  push32(0x10f616d5u); f_10f5e000();
  /* 10f616d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f616d8 push eax */
  push32((uint32_t)(EAX));
  /* 10f616d9 call dword ptr [0x10f832c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832c8))), 0x10f616dfu);
  /* 10f616df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f616e1 je 0x10f616ec */
  if (C.zf) goto L_10f616ec;
L_10f616e3:;
  /* 10f616e3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f616ea jmp 0x10f616f5 */
  goto L_10f616f5;
L_10f616ec:;
  /* 10f616ec call dword ptr [0x10f83390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83390))), 0x10f616f2u);
  /* 10f616f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f616f5:;
  /* 10f616f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f616f8 push edx */
  push32((uint32_t)(EDX));
  /* 10f616f9 call 0x10f5df20 */
  push32(0x10f616feu); f_10f5df20();
  /* 10f616fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61701 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f61704 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f61707 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6170a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10f6170d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f61710 mov edx, dword ptr [eax*4 + 0x10f81fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f81fa0)));
  /* 10f61717 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10f6171c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61720 je 0x10f61733 */
  if (C.zf) goto L_10f61733;
  /* 10f61722 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f61725 push eax */
  push32((uint32_t)(EAX));
  /* 10f61726 call 0x10f5c8c0 */
  push32(0x10f6172bu); f_10f5c8c0();
  /* 10f6172b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6172e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f61731 jmp 0x10f61735 */
  goto L_10f61735;
L_10f61733:;
  /* 10f61733 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f61735:;
  /* 10f61735 pop esi */
  ESI = (pop32());
  /* 10f61736 mov esp, ebp */
  ESP = (EBP);
  /* 10f61738 pop ebp */
  EBP = (pop32());
  /* 10f61739 ret  */
  ESPCHK(0x10f61690u, _esp0);
  ESP += 4; return;
}

/* FUN_10011740 @ 0x10f61740 (146 bytes, 52 insns) */
void f_10f61740(void) {
  FTRACE(0x10f61740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f61740 push ebp */
  push32((uint32_t)(EBP));
  /* 10f61741 mov ebp, esp */
  EBP = (ESP);
  /* 10f61743 push ebx */
  push32((uint32_t)(EBX));
  /* 10f61744 push esi */
  push32((uint32_t)(ESI));
  /* 10f61745 push edi */
  push32((uint32_t)(EDI));
L_10f61746:;
  /* 10f61746 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6174a jne 0x10f6176a */
  if (!C.zf) goto L_10f6176a;
  /* 10f6174c push 0x10f7c1a0 */
  push32((uint32_t)(0x10f7c1a0u));
  /* 10f61751 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f61753 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10f61755 push 0x10f7c868 */
  push32((uint32_t)(0x10f7c868u));
  /* 10f6175a push 2 */
  push32((uint32_t)(0x2u));
  /* 10f6175c call 0x10f53b50 */
  push32(0x10f61761u); f_10f53b50();
  /* 10f61761 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61764 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61767 jne 0x10f6176a */
  if (!C.zf) goto L_10f6176a;
  /* 10f61769 int3  */
  x86_unimpl("int3 @ 0x10f61769");
L_10f6176a:;
  /* 10f6176a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f6176c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f6176e jne 0x10f61746 */
  if (!C.zf) goto L_10f61746;
  /* 10f61770 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f61773 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f61776 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10f6177c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f6177e je 0x10f617cd */
  if (C.zf) goto L_10f617cd;
  /* 10f61780 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f61783 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f61786 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10f61789 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f6178b je 0x10f617cd */
  if (C.zf) goto L_10f617cd;
  /* 10f6178d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f6178f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f61792 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f61795 push eax */
  push32((uint32_t)(EAX));
  /* 10f61796 call 0x10f55520 */
  push32(0x10f6179bu); f_10f55520();
  /* 10f6179b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6179e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f617a1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f617a4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10f617aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f617ad mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10f617b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f617b3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10f617b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f617bc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10f617c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f617c6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10f617cd:;
  /* 10f617cd pop edi */
  EDI = (pop32());
  /* 10f617ce pop esi */
  ESI = (pop32());
  /* 10f617cf pop ebx */
  EBX = (pop32());
  /* 10f617d0 pop ebp */
  EBP = (pop32());
  /* 10f617d1 ret  */
  ESPCHK(0x10f61740u, _esp0);
  ESP += 4; return;
}

/* FUN_100117e0 @ 0x10f617e0 (289 bytes, 97 insns) */
void f_10f617e0(void) {
  FTRACE(0x10f617e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f617e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f617e1 mov ebp, esp */
  EBP = (ESP);
  /* 10f617e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f617e6 push esi */
  push32((uint32_t)(ESI));
  /* 10f617e7 mov eax, dword ptr [0x10f7fc98] */
  EAX = (r32((uint32_t)(0x10f7fc98)));
  /* 10f617ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f617ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f617f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10f617fd jmp 0x10f61808 */
  goto L_10f61808;
L_10f617ff:;
  /* 10f617ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61802 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61805 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10f61808:;
  /* 10f61808 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6180c jae 0x10f61841 */
  if (!C.cf) goto L_10f61841;
  /* 10f6180e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61811 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61814 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10f61817 push ecx */
  push32((uint32_t)(ECX));
  /* 10f61818 call 0x10f578c0 */
  push32(0x10f6181du); f_10f578c0();
  /* 10f6181d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61820 mov esi, eax */
  ESI = (EAX);
  /* 10f61822 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61825 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61828 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10f6182c push ecx */
  push32((uint32_t)(ECX));
  /* 10f6182d call 0x10f578c0 */
  push32(0x10f61832u); f_10f578c0();
  /* 10f61832 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61835 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61838 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10f6183c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f6183f jmp 0x10f617ff */
  goto L_10f617ff;
L_10f61841:;
  /* 10f61841 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f61844 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61847 push eax */
  push32((uint32_t)(EAX));
  /* 10f61848 call 0x10f54a70 */
  push32(0x10f6184du); f_10f54a70();
  /* 10f6184d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61850 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f61853 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61857 je 0x10f618f9 */
  if (C.zf) goto L_10f618f9;
  /* 10f6185d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f61860 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10f61863 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10f6186a jmp 0x10f61875 */
  goto L_10f61875;
L_10f6186c:;
  /* 10f6186c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f6186f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61872 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10f61875:;
  /* 10f61875 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61879 jae 0x10f618ea */
  if (!C.cf) goto L_10f618ea;
  /* 10f6187b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f6187e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10f61881 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61884 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61887 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10f6188a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f6188d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61890 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10f61893 push ecx */
  push32((uint32_t)(ECX));
  /* 10f61894 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61897 push edx */
  push32((uint32_t)(EDX));
  /* 10f61898 call 0x10f57a40 */
  push32(0x10f6189du); f_10f57a40();
  /* 10f6189d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f618a0 push eax */
  push32((uint32_t)(EAX));
  /* 10f618a1 call 0x10f578c0 */
  push32(0x10f618a6u); f_10f578c0();
  /* 10f618a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f618a9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f618ac add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f618ae mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10f618b1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f618b4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10f618b7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f618ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f618bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f618c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f618c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f618c6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10f618ca push eax */
  push32((uint32_t)(EAX));
  /* 10f618cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f618ce push ecx */
  push32((uint32_t)(ECX));
  /* 10f618cf call 0x10f57a40 */
  push32(0x10f618d4u); f_10f57a40();
  /* 10f618d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f618d7 push eax */
  push32((uint32_t)(EAX));
  /* 10f618d8 call 0x10f578c0 */
  push32(0x10f618ddu); f_10f578c0();
  /* 10f618dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f618e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f618e3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f618e5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10f618e8 jmp 0x10f6186c */
  goto L_10f6186c;
L_10f618ea:;
  /* 10f618ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f618ed mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10f618f0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f618f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f618f6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10f618f9:;
  /* 10f618f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f618fc pop esi */
  ESI = (pop32());
  /* 10f618fd mov esp, ebp */
  ESP = (EBP);
  /* 10f618ff pop ebp */
  EBP = (pop32());
  /* 10f61900 ret  */
  ESPCHK(0x10f617e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011910 @ 0x10f61910 (291 bytes, 97 insns) */
void f_10f61910(void) {
  FTRACE(0x10f61910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f61910 push ebp */
  push32((uint32_t)(EBP));
  /* 10f61911 mov ebp, esp */
  EBP = (ESP);
  /* 10f61913 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f61916 push esi */
  push32((uint32_t)(ESI));
  /* 10f61917 mov eax, dword ptr [0x10f7fc98] */
  EAX = (r32((uint32_t)(0x10f7fc98)));
  /* 10f6191c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f6191f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f61926 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10f6192d jmp 0x10f61938 */
  goto L_10f61938;
L_10f6192f:;
  /* 10f6192f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61932 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61935 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10f61938:;
  /* 10f61938 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6193c jae 0x10f61972 */
  if (!C.cf) goto L_10f61972;
  /* 10f6193e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61941 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61944 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10f61948 push ecx */
  push32((uint32_t)(ECX));
  /* 10f61949 call 0x10f578c0 */
  push32(0x10f6194eu); f_10f578c0();
  /* 10f6194e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61951 mov esi, eax */
  ESI = (EAX);
  /* 10f61953 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61956 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61959 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10f6195d push ecx */
  push32((uint32_t)(ECX));
  /* 10f6195e call 0x10f578c0 */
  push32(0x10f61963u); f_10f578c0();
  /* 10f61963 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61966 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61969 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10f6196d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f61970 jmp 0x10f6192f */
  goto L_10f6192f;
L_10f61972:;
  /* 10f61972 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f61975 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61978 push eax */
  push32((uint32_t)(EAX));
  /* 10f61979 call 0x10f54a70 */
  push32(0x10f6197eu); f_10f54a70();
  /* 10f6197e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61981 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f61984 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61988 je 0x10f61a2b */
  if (C.zf) goto L_10f61a2b;
  /* 10f6198e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f61991 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10f61994 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10f6199b jmp 0x10f619a6 */
  goto L_10f619a6;
L_10f6199d:;
  /* 10f6199d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f619a0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f619a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10f619a6:;
  /* 10f619a6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f619aa jae 0x10f61a1c */
  if (!C.cf) goto L_10f61a1c;
  /* 10f619ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f619af mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10f619b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f619b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f619b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10f619bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f619be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f619c1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10f619c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f619c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f619c9 push edx */
  push32((uint32_t)(EDX));
  /* 10f619ca call 0x10f57a40 */
  push32(0x10f619cfu); f_10f57a40();
  /* 10f619cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f619d2 push eax */
  push32((uint32_t)(EAX));
  /* 10f619d3 call 0x10f578c0 */
  push32(0x10f619d8u); f_10f578c0();
  /* 10f619d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f619db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f619de add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f619e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10f619e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f619e6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10f619e9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f619ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f619ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f619f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f619f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f619f8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10f619fc push eax */
  push32((uint32_t)(EAX));
  /* 10f619fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61a00 push ecx */
  push32((uint32_t)(ECX));
  /* 10f61a01 call 0x10f57a40 */
  push32(0x10f61a06u); f_10f57a40();
  /* 10f61a06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61a09 push eax */
  push32((uint32_t)(EAX));
  /* 10f61a0a call 0x10f578c0 */
  push32(0x10f61a0fu); f_10f578c0();
  /* 10f61a0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61a12 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61a15 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61a17 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10f61a1a jmp 0x10f6199d */
  goto L_10f6199d;
L_10f61a1c:;
  /* 10f61a1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61a1f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10f61a22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61a25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61a28 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10f61a2b:;
  /* 10f61a2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f61a2e pop esi */
  ESI = (pop32());
  /* 10f61a2f mov esp, ebp */
  ESP = (EBP);
  /* 10f61a31 pop ebp */
  EBP = (pop32());
  /* 10f61a32 ret  */
  ESPCHK(0x10f61910u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a40 @ 0x10f61a40 (878 bytes, 273 insns) */
void f_10f61a40(void) {
  FTRACE(0x10f61a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f61a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10f61a41 mov ebp, esp */
  EBP = (ESP);
  /* 10f61a43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f61a46 push esi */
  push32((uint32_t)(ESI));
  /* 10f61a47 mov eax, dword ptr [0x10f7fc98] */
  EAX = (r32((uint32_t)(0x10f7fc98)));
  /* 10f61a4c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f61a4f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f61a56 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10f61a5d jmp 0x10f61a68 */
  goto L_10f61a68;
L_10f61a5f:;
  /* 10f61a5f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61a62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61a65 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10f61a68:;
  /* 10f61a68 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61a6c jae 0x10f61aa1 */
  if (!C.cf) goto L_10f61aa1;
  /* 10f61a6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61a71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61a74 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10f61a77 push ecx */
  push32((uint32_t)(ECX));
  /* 10f61a78 call 0x10f578c0 */
  push32(0x10f61a7du); f_10f578c0();
  /* 10f61a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61a80 mov esi, eax */
  ESI = (EAX);
  /* 10f61a82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61a85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61a88 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10f61a8c push ecx */
  push32((uint32_t)(ECX));
  /* 10f61a8d call 0x10f578c0 */
  push32(0x10f61a92u); f_10f578c0();
  /* 10f61a92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61a95 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61a98 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10f61a9c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f61a9f jmp 0x10f61a5f */
  goto L_10f61a5f;
L_10f61aa1:;
  /* 10f61aa1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10f61aa8 jmp 0x10f61ab3 */
  goto L_10f61ab3;
L_10f61aaa:;
  /* 10f61aaa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61aad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61ab0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10f61ab3:;
  /* 10f61ab3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61ab7 jae 0x10f61aed */
  if (!C.cf) goto L_10f61aed;
  /* 10f61ab9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61abc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61abf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10f61ac3 push eax */
  push32((uint32_t)(EAX));
  /* 10f61ac4 call 0x10f578c0 */
  push32(0x10f61ac9u); f_10f578c0();
  /* 10f61ac9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61acc mov esi, eax */
  ESI = (EAX);
  /* 10f61ace mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61ad1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61ad4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10f61ad8 push eax */
  push32((uint32_t)(EAX));
  /* 10f61ad9 call 0x10f578c0 */
  push32(0x10f61adeu); f_10f578c0();
  /* 10f61ade add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61ae1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61ae4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10f61ae8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f61aeb jmp 0x10f61aaa */
  goto L_10f61aaa;
L_10f61aed:;
  /* 10f61aed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61af0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10f61af6 push eax */
  push32((uint32_t)(EAX));
  /* 10f61af7 call 0x10f578c0 */
  push32(0x10f61afcu); f_10f578c0();
  /* 10f61afc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61aff mov esi, eax */
  ESI = (EAX);
  /* 10f61b01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61b04 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10f61b0a push edx */
  push32((uint32_t)(EDX));
  /* 10f61b0b call 0x10f578c0 */
  push32(0x10f61b10u); f_10f578c0();
  /* 10f61b10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61b13 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61b16 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10f61b1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f61b1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61b20 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10f61b26 push edx */
  push32((uint32_t)(EDX));
  /* 10f61b27 call 0x10f578c0 */
  push32(0x10f61b2cu); f_10f578c0();
  /* 10f61b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61b2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f61b32 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10f61b36 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f61b39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61b3c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10f61b42 push ecx */
  push32((uint32_t)(ECX));
  /* 10f61b43 call 0x10f578c0 */
  push32(0x10f61b48u); f_10f578c0();
  /* 10f61b48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61b4b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f61b4e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10f61b52 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f61b55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61b58 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10f61b5e push edx */
  push32((uint32_t)(EDX));
  /* 10f61b5f call 0x10f578c0 */
  push32(0x10f61b64u); f_10f578c0();
  /* 10f61b64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61b67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f61b6a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10f61b6e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f61b71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f61b74 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61b79 push eax */
  push32((uint32_t)(EAX));
  /* 10f61b7a call 0x10f54a70 */
  push32(0x10f61b7fu); f_10f54a70();
  /* 10f61b7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61b82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f61b85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61b89 je 0x10f61da6 */
  if (C.zf) goto L_10f61da6;
  /* 10f61b8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f61b92 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10f61b95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f61b98 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61b9e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10f61ba1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10f61ba6 mov eax, dword ptr [0x10f7fc98] */
  EAX = (r32((uint32_t)(0x10f7fc98)));
  /* 10f61bab push eax */
  push32((uint32_t)(EAX));
  /* 10f61bac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f61baf push ecx */
  push32((uint32_t)(ECX));
  /* 10f61bb0 call 0x10f5b370 */
  push32(0x10f61bb5u); f_10f5b370();
  /* 10f61bb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61bb8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10f61bbf jmp 0x10f61bca */
  goto L_10f61bca;
L_10f61bc1:;
  /* 10f61bc1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61bc4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61bc7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10f61bca:;
  /* 10f61bca cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61bce jae 0x10f61c3e */
  if (!C.cf) goto L_10f61c3e;
  /* 10f61bd0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61bd3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f61bd6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61bd9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10f61bdc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61bdf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61be2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10f61be5 push edx */
  push32((uint32_t)(EDX));
  /* 10f61be6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61be9 push eax */
  push32((uint32_t)(EAX));
  /* 10f61bea call 0x10f57a40 */
  push32(0x10f61befu); f_10f57a40();
  /* 10f61bef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61bf2 push eax */
  push32((uint32_t)(EAX));
  /* 10f61bf3 call 0x10f578c0 */
  push32(0x10f61bf8u); f_10f578c0();
  /* 10f61bf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61bfb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61bfe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10f61c02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10f61c05 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61c08 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f61c0b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61c0e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10f61c12 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61c15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61c18 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10f61c1c push edx */
  push32((uint32_t)(EDX));
  /* 10f61c1d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61c20 push eax */
  push32((uint32_t)(EAX));
  /* 10f61c21 call 0x10f57a40 */
  push32(0x10f61c26u); f_10f57a40();
  /* 10f61c26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61c29 push eax */
  push32((uint32_t)(EAX));
  /* 10f61c2a call 0x10f578c0 */
  push32(0x10f61c2fu); f_10f578c0();
  /* 10f61c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61c32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61c35 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10f61c39 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10f61c3c jmp 0x10f61bc1 */
  goto L_10f61bc1;
L_10f61c3e:;
  /* 10f61c3e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10f61c45 jmp 0x10f61c50 */
  goto L_10f61c50;
L_10f61c47:;
  /* 10f61c47 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61c4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61c4d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10f61c50:;
  /* 10f61c50 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61c54 jae 0x10f61cc6 */
  if (!C.cf) goto L_10f61cc6;
  /* 10f61c56 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61c59 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f61c5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61c5f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10f61c63 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61c66 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61c69 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10f61c6d push eax */
  push32((uint32_t)(EAX));
  /* 10f61c6e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61c71 push ecx */
  push32((uint32_t)(ECX));
  /* 10f61c72 call 0x10f57a40 */
  push32(0x10f61c77u); f_10f57a40();
  /* 10f61c77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61c7a push eax */
  push32((uint32_t)(EAX));
  /* 10f61c7b call 0x10f578c0 */
  push32(0x10f61c80u); f_10f578c0();
  /* 10f61c80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61c83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61c86 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10f61c8a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f61c8d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61c90 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f61c93 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61c96 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10f61c9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61c9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61ca0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10f61ca4 push eax */
  push32((uint32_t)(EAX));
  /* 10f61ca5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61ca8 push ecx */
  push32((uint32_t)(ECX));
  /* 10f61ca9 call 0x10f57a40 */
  push32(0x10f61caeu); f_10f57a40();
  /* 10f61cae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61cb1 push eax */
  push32((uint32_t)(EAX));
  /* 10f61cb2 call 0x10f578c0 */
  push32(0x10f61cb7u); f_10f578c0();
  /* 10f61cb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61cba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61cbd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10f61cc1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f61cc4 jmp 0x10f61c47 */
  goto L_10f61c47;
L_10f61cc6:;
  /* 10f61cc6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f61cc9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61ccc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10f61cd2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61cd5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10f61cdb push ecx */
  push32((uint32_t)(ECX));
  /* 10f61cdc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61cdf push edx */
  push32((uint32_t)(EDX));
  /* 10f61ce0 call 0x10f57a40 */
  push32(0x10f61ce5u); f_10f57a40();
  /* 10f61ce5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61ce8 push eax */
  push32((uint32_t)(EAX));
  /* 10f61ce9 call 0x10f578c0 */
  push32(0x10f61ceeu); f_10f578c0();
  /* 10f61cee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61cf1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61cf4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10f61cf8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10f61cfb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f61cfe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61d01 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10f61d07 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61d0a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10f61d10 push eax */
  push32((uint32_t)(EAX));
  /* 10f61d11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61d14 push ecx */
  push32((uint32_t)(ECX));
  /* 10f61d15 call 0x10f57a40 */
  push32(0x10f61d1au); f_10f57a40();
  /* 10f61d1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61d1d push eax */
  push32((uint32_t)(EAX));
  /* 10f61d1e call 0x10f578c0 */
  push32(0x10f61d23u); f_10f578c0();
  /* 10f61d23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61d26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61d29 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10f61d2d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f61d30 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f61d33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61d36 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10f61d3c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61d3f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10f61d45 push ecx */
  push32((uint32_t)(ECX));
  /* 10f61d46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61d49 push edx */
  push32((uint32_t)(EDX));
  /* 10f61d4a call 0x10f57a40 */
  push32(0x10f61d4fu); f_10f57a40();
  /* 10f61d4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61d52 push eax */
  push32((uint32_t)(EAX));
  /* 10f61d53 call 0x10f578c0 */
  push32(0x10f61d58u); f_10f578c0();
  /* 10f61d58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61d5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61d5e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10f61d62 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10f61d65 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f61d68 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61d6b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10f61d71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61d74 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10f61d7a push eax */
  push32((uint32_t)(EAX));
  /* 10f61d7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61d7e push ecx */
  push32((uint32_t)(ECX));
  /* 10f61d7f call 0x10f57a40 */
  push32(0x10f61d84u); f_10f57a40();
  /* 10f61d84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61d87 push eax */
  push32((uint32_t)(EAX));
  /* 10f61d88 call 0x10f578c0 */
  push32(0x10f61d8du); f_10f578c0();
  /* 10f61d8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61d90 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61d93 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10f61d97 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f61d9a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f61d9d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f61da0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10f61da6:;
  /* 10f61da6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f61da9 pop esi */
  ESI = (pop32());
  /* 10f61daa mov esp, ebp */
  ESP = (EBP);
  /* 10f61dac pop ebp */
  EBP = (pop32());
  /* 10f61dad ret  */
  ESPCHK(0x10f61a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011db0 @ 0x10f61db0 (31 bytes, 15 insns) */
void f_10f61db0(void) {
  FTRACE(0x10f61db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f61db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f61db1 mov ebp, esp */
  EBP = (ESP);
  /* 10f61db3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f61db5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f61db8 push eax */
  push32((uint32_t)(EAX));
  /* 10f61db9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f61dbc push ecx */
  push32((uint32_t)(ECX));
  /* 10f61dbd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f61dc0 push edx */
  push32((uint32_t)(EDX));
  /* 10f61dc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f61dc4 push eax */
  push32((uint32_t)(EAX));
  /* 10f61dc5 call 0x10f61dd0 */
  push32(0x10f61dcau); f_10f61dd0();
  /* 10f61dca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61dcd pop ebp */
  EBP = (pop32());
  /* 10f61dce ret  */
  ESPCHK(0x10f61db0u, _esp0);
  ESP += 4; return;
}

