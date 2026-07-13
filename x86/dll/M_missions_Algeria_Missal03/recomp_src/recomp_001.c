#include "recomp.h"

/* FUN_10008d30 @ 0x10278d30 (116 bytes, 34 insns) */
void f_10278d30(void) {
  FTRACE(0x10278d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10278d31 mov ebp, esp */
  EBP = (ESP);
  /* 10278d33 push ecx */
  push32((uint32_t)(ECX));
  /* 10278d34 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10278d3b push 9 */
  push32((uint32_t)(0x9u));
  /* 10278d3d call 0x10278550 */
  push32(0x10278d42u); f_10278550();
  /* 10278d42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278d45 call 0x1027a440 */
  push32(0x10278d4au); f_1027a440();
  /* 10278d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10278d4c jge 0x10278d55 */
  if ((C.sf==C.of)) goto L_10278d55;
  /* 10278d4e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10278d55:;
  /* 10278d55 push 9 */
  push32((uint32_t)(0x9u));
  /* 10278d57 call 0x102785f0 */
  push32(0x10278d5cu); f_102785f0();
  /* 10278d5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10278d61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10278d63 mov eax, dword ptr [0x102a1f4c] */
  EAX = (r32((uint32_t)(0x102a1f4c)));
  /* 10278d68 push eax */
  push32((uint32_t)(EAX));
  /* 10278d69 call dword ptr [0x102a3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3358))), 0x10278d6fu);
  /* 10278d6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10278d71 jne 0x10278d9d */
  if (!C.zf) goto L_10278d9d;
  /* 10278d73 call dword ptr [0x102a3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3338))), 0x10278d79u);
  /* 10278d79 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278d7c jne 0x10278d96 */
  if (!C.zf) goto L_10278d96;
  /* 10278d7e call 0x1027ca30 */
  push32(0x10278d83u); f_1027ca30();
  /* 10278d83 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10278d89 call 0x1027ca20 */
  push32(0x10278d8eu); f_1027ca20();
  /* 10278d8e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10278d94 jmp 0x10278d9d */
  goto L_10278d9d;
L_10278d96:;
  /* 10278d96 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10278d9d:;
  /* 10278d9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278da0 mov esp, ebp */
  ESP = (EBP);
  /* 10278da2 pop ebp */
  EBP = (pop32());
  /* 10278da3 ret  */
  ESPCHK(0x10278d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008db0 @ 0x10278db0 (10 bytes, 5 insns) */
void f_10278db0(void) {
  FTRACE(0x10278db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10278db1 mov ebp, esp */
  EBP = (ESP);
  /* 10278db3 call 0x10278d30 */
  push32(0x10278db8u); f_10278d30();
  /* 10278db8 pop ebp */
  EBP = (pop32());
  /* 10278db9 ret  */
  ESPCHK(0x10278db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008dc0 @ 0x10278dc0 (10 bytes, 5 insns) */
void f_10278dc0(void) {
  FTRACE(0x10278dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10278dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10278dc3 mov eax, dword ptr [0x1029ec94] */
  EAX = (r32((uint32_t)(0x1029ec94)));
  /* 10278dc8 pop ebp */
  EBP = (pop32());
  /* 10278dc9 ret  */
  ESPCHK(0x10278dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008dd0 @ 0x10278dd0 (31 bytes, 11 insns) */
void f_10278dd0(void) {
  FTRACE(0x10278dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10278dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10278dd3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278dda jbe 0x10278de0 */
  if ((C.cf||C.zf)) goto L_10278de0;
  /* 10278ddc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10278dde jmp 0x10278ded */
  goto L_10278ded;
L_10278de0:;
  /* 10278de0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278de3 mov dword ptr [0x1029ec94], eax */
  w32((uint32_t)(0x1029ec94), (EAX));
  /* 10278de8 mov eax, 1 */
  EAX = (0x1u);
L_10278ded:;
  /* 10278ded pop ebp */
  EBP = (pop32());
  /* 10278dee ret  */
  ESPCHK(0x10278dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008df0 @ 0x10278df0 (89 bytes, 20 insns) */
void f_10278df0(void) {
  FTRACE(0x10278df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278df0 push ebp */
  push32((uint32_t)(EBP));
  /* 10278df1 mov ebp, esp */
  EBP = (ESP);
  /* 10278df3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10278df8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10278dfa mov eax, dword ptr [0x102a1f4c] */
  EAX = (r32((uint32_t)(0x102a1f4c)));
  /* 10278dff push eax */
  push32((uint32_t)(EAX));
  /* 10278e00 call dword ptr [0x102a32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32e4))), 0x10278e06u);
  /* 10278e06 mov dword ptr [0x102a1f48], eax */
  w32((uint32_t)(0x102a1f48), (EAX));
  /* 10278e0b cmp dword ptr [0x102a1f48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a1f48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278e12 jne 0x10278e18 */
  if (!C.zf) goto L_10278e18;
  /* 10278e14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10278e16 jmp 0x10278e47 */
  goto L_10278e47;
L_10278e18:;
  /* 10278e18 mov ecx, dword ptr [0x102a1f48] */
  ECX = (r32((uint32_t)(0x102a1f48)));
  /* 10278e1e mov dword ptr [0x102a1f3c], ecx */
  w32((uint32_t)(0x102a1f3c), (ECX));
  /* 10278e24 mov dword ptr [0x102a1f40], 0 */
  w32((uint32_t)(0x102a1f40), (0x0u));
  /* 10278e2e mov dword ptr [0x102a1f44], 0 */
  w32((uint32_t)(0x102a1f44), (0x0u));
  /* 10278e38 mov dword ptr [0x102a1f28], 0x10 */
  w32((uint32_t)(0x102a1f28), (0x10u));
  /* 10278e42 mov eax, 1 */
  EAX = (0x1u);
L_10278e47:;
  /* 10278e47 pop ebp */
  EBP = (pop32());
  /* 10278e48 ret  */
  ESPCHK(0x10278df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e50 @ 0x10278e50 (85 bytes, 29 insns) */
void f_10278e50(void) {
  FTRACE(0x10278e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10278e51 mov ebp, esp */
  EBP = (ESP);
  /* 10278e53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10278e56 mov eax, dword ptr [0x102a1f44] */
  EAX = (r32((uint32_t)(0x102a1f44)));
  /* 10278e5b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10278e5e mov ecx, dword ptr [0x102a1f48] */
  ECX = (r32((uint32_t)(0x102a1f48)));
  /* 10278e64 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10278e66 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10278e69 mov edx, dword ptr [0x102a1f48] */
  EDX = (r32((uint32_t)(0x102a1f48)));
  /* 10278e6f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10278e72:;
  /* 10278e72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278e75 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278e78 jae 0x10278e9f */
  if (!C.cf) goto L_10278e9f;
  /* 10278e7a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278e7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278e80 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10278e83 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10278e86 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278e8d jae 0x10278e94 */
  if (!C.cf) goto L_10278e94;
  /* 10278e8f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278e92 jmp 0x10278ea1 */
  goto L_10278ea1;
L_10278e94:;
  /* 10278e94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278e97 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10278e9a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10278e9d jmp 0x10278e72 */
  goto L_10278e72;
L_10278e9f:;
  /* 10278e9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10278ea1:;
  /* 10278ea1 mov esp, ebp */
  ESP = (EBP);
  /* 10278ea3 pop ebp */
  EBP = (pop32());
  /* 10278ea4 ret  */
  ESPCHK(0x10278e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008eb0 @ 0x10278eb0 (95 bytes, 33 insns) */
void f_10278eb0(void) {
  FTRACE(0x10278eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10278eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10278eb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10278eb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278eb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278ebc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10278ebf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10278ec2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278ec5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10278ec8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10278ecb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10278ed0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278ed3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10278ed5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278ed8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10278edb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10278edd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10278edf jne 0x10278f01 */
  if (!C.zf) goto L_10278f01;
  /* 10278ee1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278ee4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10278ee7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10278ee9 jne 0x10278f01 */
  if (!C.zf) goto L_10278f01;
  /* 10278eeb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278eee and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10278ef4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10278ef6 je 0x10278f01 */
  if (C.zf) goto L_10278f01;
  /* 10278ef8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10278eff jmp 0x10278f08 */
  goto L_10278f08;
L_10278f01:;
  /* 10278f01 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10278f08:;
  /* 10278f08 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10278f0b mov esp, ebp */
  ESP = (EBP);
  /* 10278f0d pop ebp */
  EBP = (pop32());
  /* 10278f0e ret  */
  ESPCHK(0x10278eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f10 @ 0x10278f10 (1485 bytes, 453 insns) */
void f_10278f10(void) {
  FTRACE(0x10278f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10278f11 mov ebp, esp */
  EBP = (ESP);
  /* 10278f13 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10278f16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278f19 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10278f1c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10278f1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278f22 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278f25 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10278f28 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10278f2b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10278f2e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10278f31 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10278f34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278f37 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10278f3d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10278f40 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10278f47 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10278f4a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278f4d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10278f50 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10278f53 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10278f56 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10278f58 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10278f5b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10278f5e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10278f61 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10278f64 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10278f67 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10278f6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10278f6c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10278f6f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10278f72 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10278f75 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10278f78 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10278f7b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10278f7e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10278f80 jne 0x102790a8 */
  if (!C.zf) goto L_102790a8;
  /* 10278f86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10278f89 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10278f8c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10278f8f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10278f92 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278f96 jbe 0x10278f9f */
  if ((C.cf||C.zf)) goto L_10278f9f;
  /* 10278f98 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10278f9f:;
  /* 10278f9f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10278fa2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10278fa5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10278fa8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278fab jne 0x10279081 */
  if (!C.zf) goto L_10279081;
  /* 10278fb1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278fb5 jae 0x10279016 */
  if (!C.cf) goto L_10279016;
  /* 10278fb7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10278fbc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10278fbf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10278fc1 not eax */
  EAX = (~(EAX));
  /* 10278fc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278fc6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10278fc9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10278fcd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10278fcf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278fd2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10278fd5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10278fd9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10278fdc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10278fdf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10278fe2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10278fe5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10278fe8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10278feb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10278fee mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10278ff1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10278ff4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10278ff8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10278ffa jne 0x10279014 */
  if (!C.zf) goto L_10279014;
  /* 10278ffc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10279001 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10279004 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10279006 not eax */
  EAX = (~(EAX));
  /* 10279008 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027900b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1027900d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1027900f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279012 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10279014:;
  /* 10279014 jmp 0x10279081 */
  goto L_10279081;
L_10279016:;
  /* 10279016 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10279019 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027901c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10279021 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10279023 not edx */
  EDX = (~(EDX));
  /* 10279025 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279028 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1027902b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10279032 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10279034 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279037 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1027903a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10279041 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10279044 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279047 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1027904a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1027904d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10279050 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279053 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10279056 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10279059 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027905c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10279060 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10279062 jne 0x10279081 */
  if (!C.zf) goto L_10279081;
  /* 10279064 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10279067 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027906a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1027906f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10279071 not edx */
  EDX = (~(EDX));
  /* 10279073 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279076 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10279079 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1027907b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027907e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10279081:;
  /* 10279081 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10279084 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10279087 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1027908a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1027908d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10279090 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10279093 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10279096 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10279099 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1027909c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1027909f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 102790a2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102790a5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_102790a8:;
  /* 102790a8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 102790ab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 102790ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102790b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 102790b4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102790b8 jbe 0x102790c1 */
  if ((C.cf||C.zf)) goto L_102790c1;
  /* 102790ba mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_102790c1:;
  /* 102790c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102790c4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 102790c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102790c9 jne 0x10279225 */
  if (!C.zf) goto L_10279225;
  /* 102790cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 102790d2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102790d5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 102790d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102790db sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 102790de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102790e1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 102790e4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102790e8 jbe 0x102790f1 */
  if ((C.cf||C.zf)) goto L_102790f1;
  /* 102790ea mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_102790f1:;
  /* 102790f1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 102790f4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102790f7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 102790fa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 102790fd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10279100 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279103 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10279106 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027910a jbe 0x10279113 */
  if ((C.cf||C.zf)) goto L_10279113;
  /* 1027910c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10279113:;
  /* 10279113 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279116 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279119 je 0x1027921f */
  if (C.zf) goto L_1027921f;
  /* 1027911f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10279122 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10279125 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10279128 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027912b jne 0x10279201 */
  if (!C.zf) goto L_10279201;
  /* 10279131 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279135 jae 0x10279196 */
  if (!C.cf) goto L_10279196;
  /* 10279137 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1027913c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1027913f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10279141 not edx */
  EDX = (~(EDX));
  /* 10279143 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279146 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10279149 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1027914d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1027914f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279152 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10279155 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10279159 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1027915c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027915f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10279162 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10279165 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10279168 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027916b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1027916e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10279171 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279174 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10279178 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027917a jne 0x10279194 */
  if (!C.zf) goto L_10279194;
  /* 1027917c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10279181 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279184 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10279186 not edx */
  EDX = (~(EDX));
  /* 10279188 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027918b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1027918d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1027918f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279192 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10279194:;
  /* 10279194 jmp 0x10279201 */
  goto L_10279201;
L_10279196:;
  /* 10279196 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279199 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027919c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 102791a1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 102791a3 not eax */
  EAX = (~(EAX));
  /* 102791a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102791a8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 102791ab mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 102791b2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 102791b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102791b7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 102791ba mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 102791c1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 102791c4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102791c7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 102791ca sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102791cd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 102791d0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102791d3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 102791d6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 102791d9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102791dc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 102791e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102791e2 jne 0x10279201 */
  if (!C.zf) goto L_10279201;
  /* 102791e4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 102791e7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102791ea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 102791ef shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 102791f1 not eax */
  EAX = (~(EAX));
  /* 102791f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102791f6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 102791f9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 102791fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102791fe mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10279201:;
  /* 10279201 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10279204 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10279207 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1027920a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1027920d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10279210 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10279213 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10279216 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10279219 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1027921c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1027921f:;
  /* 1027921f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10279222 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10279225:;
  /* 10279225 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10279228 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1027922b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027922d jne 0x1027923b */
  if (!C.zf) goto L_1027923b;
  /* 1027922f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279232 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279235 je 0x1027934b */
  if (C.zf) goto L_1027934b;
L_1027923b:;
  /* 1027923b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027923e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10279241 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10279244 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10279247 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1027924a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027924d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10279250 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10279253 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10279256 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10279259 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1027925c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027925f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10279262 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10279265 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10279268 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1027926b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1027926e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10279271 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10279274 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10279277 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1027927a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027927d jne 0x1027934b */
  if (!C.zf) goto L_1027934b;
  /* 10279283 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279287 jae 0x102792e4 */
  if (!C.cf) goto L_102792e4;
  /* 10279289 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1027928c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027928f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10279293 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10279296 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279299 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1027929c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1027929f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 102792a2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102792a5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 102792a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102792aa jne 0x102792c2 */
  if (!C.zf) goto L_102792c2;
  /* 102792ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102792b1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 102792b4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102792b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102792b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102792bb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 102792bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102792c0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_102792c2:;
  /* 102792c2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 102792c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 102792ca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 102792cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102792cf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 102792d2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 102792d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 102792d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102792db mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 102792de mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 102792e2 jmp 0x1027934b */
  goto L_1027934b;
L_102792e4:;
  /* 102792e4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 102792e7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102792ea movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 102792ee mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 102792f1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102792f4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 102792f7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 102792fa mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 102792fd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279300 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10279303 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10279305 jne 0x10279322 */
  if (!C.zf) goto L_10279322;
  /* 10279307 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027930a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027930d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10279312 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10279314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279317 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1027931a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1027931c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027931f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10279322:;
  /* 10279322 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10279325 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279328 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1027932d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1027932f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279332 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10279335 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1027933c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027933e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279341 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10279344 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1027934b:;
  /* 1027934b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1027934e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279351 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10279353 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10279356 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279359 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027935c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1027935f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10279362 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10279364 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279367 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027936a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1027936c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027936f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279372 jne 0x102794d9 */
  if (!C.zf) goto L_102794d9;
  /* 10279378 cmp dword ptr [0x102a1f40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a1f40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027937f je 0x102794c8 */
  if (C.zf) goto L_102794c8;
  /* 10279385 mov eax, dword ptr [0x102a1f38] */
  EAX = (r32((uint32_t)(0x102a1f38)));
  /* 1027938a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1027938d mov ecx, dword ptr [0x102a1f40] */
  ECX = (r32((uint32_t)(0x102a1f40)));
  /* 10279393 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10279396 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279398 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1027939b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 102793a0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 102793a5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 102793a8 push eax */
  push32((uint32_t)(EAX));
  /* 102793a9 call dword ptr [0x102a337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a337c))), 0x102793afu);
  /* 102793af mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102793b4 mov ecx, dword ptr [0x102a1f38] */
  ECX = (r32((uint32_t)(0x102a1f38)));
  /* 102793ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102793bc mov eax, dword ptr [0x102a1f40] */
  EAX = (r32((uint32_t)(0x102a1f40)));
  /* 102793c1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 102793c4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 102793c6 mov edx, dword ptr [0x102a1f40] */
  EDX = (r32((uint32_t)(0x102a1f40)));
  /* 102793cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 102793cf mov eax, dword ptr [0x102a1f40] */
  EAX = (r32((uint32_t)(0x102a1f40)));
  /* 102793d4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 102793d7 mov edx, dword ptr [0x102a1f38] */
  EDX = (r32((uint32_t)(0x102a1f38)));
  /* 102793dd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 102793e8 mov eax, dword ptr [0x102a1f40] */
  EAX = (r32((uint32_t)(0x102a1f40)));
  /* 102793ed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 102793f0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 102793f3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102793f6 mov eax, dword ptr [0x102a1f40] */
  EAX = (r32((uint32_t)(0x102a1f40)));
  /* 102793fb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 102793fe mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10279401 mov edx, dword ptr [0x102a1f40] */
  EDX = (r32((uint32_t)(0x102a1f40)));
  /* 10279407 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1027940a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1027940e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10279410 jne 0x10279426 */
  if (!C.zf) goto L_10279426;
  /* 10279412 mov edx, dword ptr [0x102a1f40] */
  EDX = (r32((uint32_t)(0x102a1f40)));
  /* 10279418 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1027941b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1027941d mov ecx, dword ptr [0x102a1f40] */
  ECX = (r32((uint32_t)(0x102a1f40)));
  /* 10279423 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10279426:;
  /* 10279426 mov edx, dword ptr [0x102a1f40] */
  EDX = (r32((uint32_t)(0x102a1f40)));
  /* 1027942c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279430 jne 0x102794c8 */
  if (!C.zf) goto L_102794c8;
  /* 10279436 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1027943b push 0 */
  push32((uint32_t)(0x0u));
  /* 1027943d mov eax, dword ptr [0x102a1f40] */
  EAX = (r32((uint32_t)(0x102a1f40)));
  /* 10279442 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10279445 push ecx */
  push32((uint32_t)(ECX));
  /* 10279446 call dword ptr [0x102a337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a337c))), 0x1027944cu);
  /* 1027944c mov edx, dword ptr [0x102a1f40] */
  EDX = (r32((uint32_t)(0x102a1f40)));
  /* 10279452 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10279455 push eax */
  push32((uint32_t)(EAX));
  /* 10279456 push 0 */
  push32((uint32_t)(0x0u));
  /* 10279458 mov ecx, dword ptr [0x102a1f4c] */
  ECX = (r32((uint32_t)(0x102a1f4c)));
  /* 1027945e push ecx */
  push32((uint32_t)(ECX));
  /* 1027945f call dword ptr [0x102a3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3378))), 0x10279465u);
  /* 10279465 mov edx, dword ptr [0x102a1f44] */
  EDX = (r32((uint32_t)(0x102a1f44)));
  /* 1027946b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027946e mov eax, dword ptr [0x102a1f48] */
  EAX = (r32((uint32_t)(0x102a1f48)));
  /* 10279473 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279475 mov ecx, dword ptr [0x102a1f40] */
  ECX = (r32((uint32_t)(0x102a1f40)));
  /* 1027947b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027947e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279480 push eax */
  push32((uint32_t)(EAX));
  /* 10279481 mov edx, dword ptr [0x102a1f40] */
  EDX = (r32((uint32_t)(0x102a1f40)));
  /* 10279487 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027948a push edx */
  push32((uint32_t)(EDX));
  /* 1027948b mov eax, dword ptr [0x102a1f40] */
  EAX = (r32((uint32_t)(0x102a1f40)));
  /* 10279490 push eax */
  push32((uint32_t)(EAX));
  /* 10279491 call 0x1027ca40 */
  push32(0x10279496u); f_1027ca40();
  /* 10279496 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10279499 mov ecx, dword ptr [0x102a1f44] */
  ECX = (r32((uint32_t)(0x102a1f44)));
  /* 1027949f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102794a2 mov dword ptr [0x102a1f44], ecx */
  w32((uint32_t)(0x102a1f44), (ECX));
  /* 102794a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102794ab cmp edx, dword ptr [0x102a1f40] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x102a1f40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102794b1 jbe 0x102794bc */
  if ((C.cf||C.zf)) goto L_102794bc;
  /* 102794b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102794b6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102794b9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_102794bc:;
  /* 102794bc mov ecx, dword ptr [0x102a1f48] */
  ECX = (r32((uint32_t)(0x102a1f48)));
  /* 102794c2 mov dword ptr [0x102a1f3c], ecx */
  w32((uint32_t)(0x102a1f3c), (ECX));
L_102794c8:;
  /* 102794c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102794cb mov dword ptr [0x102a1f40], edx */
  w32((uint32_t)(0x102a1f40), (EDX));
  /* 102794d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102794d4 mov dword ptr [0x102a1f38], eax */
  w32((uint32_t)(0x102a1f38), (EAX));
L_102794d9:;
  /* 102794d9 mov esp, ebp */
  ESP = (EBP);
  /* 102794db pop ebp */
  EBP = (pop32());
  /* 102794dc ret  */
  ESPCHK(0x10278f10u, _esp0);
  ESP += 4; return;
}

/* FUN_100094e0 @ 0x102794e0 (1334 bytes, 427 insns) */
void f_102794e0(void) {
  FTRACE(0x102794e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102794e0 push ebp */
  push32((uint32_t)(EBP));
  /* 102794e1 mov ebp, esp */
  EBP = (ESP);
  /* 102794e3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102794e6 push esi */
  push32((uint32_t)(ESI));
  /* 102794e7 mov eax, dword ptr [0x102a1f44] */
  EAX = (r32((uint32_t)(0x102a1f44)));
  /* 102794ec imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102794ef mov ecx, dword ptr [0x102a1f48] */
  ECX = (r32((uint32_t)(0x102a1f48)));
  /* 102794f5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102794f7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 102794fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102794fd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279500 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10279503 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10279506 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10279509 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1027950c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027950f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10279512 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279516 jge 0x1027952c */
  if ((C.sf==C.of)) goto L_1027952c;
  /* 10279518 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1027951b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027951e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10279520 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10279523 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1027952a jmp 0x10279541 */
  goto L_10279541;
L_1027952c:;
  /* 1027952c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10279533 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10279536 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279539 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027953c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1027953e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10279541:;
  /* 10279541 mov ecx, dword ptr [0x102a1f3c] */
  ECX = (r32((uint32_t)(0x102a1f3c)));
  /* 10279547 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1027954a:;
  /* 1027954a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027954d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279550 jae 0x10279576 */
  if (!C.cf) goto L_10279576;
  /* 10279552 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279555 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10279558 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1027955a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027955d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10279560 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10279563 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10279565 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10279567 je 0x1027956b */
  if (C.zf) goto L_1027956b;
  /* 10279569 jmp 0x10279576 */
  goto L_10279576;
L_1027956b:;
  /* 1027956b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027956e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279571 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10279574 jmp 0x1027954a */
  goto L_1027954a;
L_10279576:;
  /* 10279576 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279579 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027957c jne 0x1027965d */
  if (!C.zf) goto L_1027965d;
  /* 10279582 mov eax, dword ptr [0x102a1f48] */
  EAX = (r32((uint32_t)(0x102a1f48)));
  /* 10279587 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1027958a:;
  /* 1027958a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027958d cmp ecx, dword ptr [0x102a1f3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102a1f3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279593 jae 0x102795b9 */
  if (!C.cf) goto L_102795b9;
  /* 10279595 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279598 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027959b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1027959d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 102795a0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 102795a3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 102795a6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102795a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102795aa je 0x102795ae */
  if (C.zf) goto L_102795ae;
  /* 102795ac jmp 0x102795b9 */
  goto L_102795b9;
L_102795ae:;
  /* 102795ae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 102795b1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102795b4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 102795b7 jmp 0x1027958a */
  goto L_1027958a;
L_102795b9:;
  /* 102795b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 102795bc cmp ecx, dword ptr [0x102a1f3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102a1f3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102795c2 jne 0x1027965d */
  if (!C.zf) goto L_1027965d;
L_102795c8:;
  /* 102795c8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 102795cb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102795ce jae 0x102795e6 */
  if (!C.cf) goto L_102795e6;
  /* 102795d0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 102795d3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102795d7 je 0x102795db */
  if (C.zf) goto L_102795db;
  /* 102795d9 jmp 0x102795e6 */
  goto L_102795e6;
L_102795db:;
  /* 102795db mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 102795de add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102795e1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 102795e4 jmp 0x102795c8 */
  goto L_102795c8;
L_102795e6:;
  /* 102795e6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 102795e9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102795ec jne 0x10279637 */
  if (!C.zf) goto L_10279637;
  /* 102795ee mov eax, dword ptr [0x102a1f48] */
  EAX = (r32((uint32_t)(0x102a1f48)));
  /* 102795f3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_102795f6:;
  /* 102795f6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 102795f9 cmp ecx, dword ptr [0x102a1f3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102a1f3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102795ff jae 0x10279617 */
  if (!C.cf) goto L_10279617;
  /* 10279601 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279604 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279608 je 0x1027960c */
  if (C.zf) goto L_1027960c;
  /* 1027960a jmp 0x10279617 */
  goto L_10279617;
L_1027960c:;
  /* 1027960c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027960f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279612 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10279615 jmp 0x102795f6 */
  goto L_102795f6;
L_10279617:;
  /* 10279617 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027961a cmp ecx, dword ptr [0x102a1f3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102a1f3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279620 jne 0x10279637 */
  if (!C.zf) goto L_10279637;
  /* 10279622 call 0x10279a20 */
  push32(0x10279627u); f_10279a20();
  /* 10279627 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1027962a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027962e jne 0x10279637 */
  if (!C.zf) goto L_10279637;
  /* 10279630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10279632 jmp 0x10279a11 */
  goto L_10279a11;
L_10279637:;
  /* 10279637 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027963a push edx */
  push32((uint32_t)(EDX));
  /* 1027963b call 0x10279b30 */
  push32(0x10279640u); f_10279b30();
  /* 10279640 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10279643 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279646 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10279649 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1027964b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027964e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10279651 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279654 jne 0x1027965d */
  if (!C.zf) goto L_1027965d;
  /* 10279656 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10279658 jmp 0x10279a11 */
  goto L_10279a11;
L_1027965d:;
  /* 1027965d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279660 mov dword ptr [0x102a1f3c], edx */
  w32((uint32_t)(0x102a1f3c), (EDX));
  /* 10279666 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279669 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1027966c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1027966f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10279672 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10279674 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10279677 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027967b je 0x102796a0 */
  if (C.zf) goto L_102796a0;
  /* 1027967d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279680 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10279683 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10279686 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1027968a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027968d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10279690 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10279693 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1027969a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1027969c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027969e jne 0x102796d5 */
  if (!C.zf) goto L_102796d5;
L_102796a0:;
  /* 102796a0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_102796a7:;
  /* 102796a7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 102796aa mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 102796ad mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 102796b0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 102796b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 102796b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 102796ba mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 102796bd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 102796c4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 102796c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102796c8 jne 0x102796d5 */
  if (!C.zf) goto L_102796d5;
  /* 102796ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 102796cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102796d0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 102796d3 jmp 0x102796a7 */
  goto L_102796a7;
L_102796d5:;
  /* 102796d5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 102796d8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102796de mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 102796e1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 102796e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 102796eb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 102796f2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 102796f5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 102796f8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 102796fb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 102796ff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10279702 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279706 jne 0x10279722 */
  if (!C.zf) goto L_10279722;
  /* 10279708 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1027970f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279712 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10279715 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10279718 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1027971f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10279722:;
  /* 10279722 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279726 jl 0x1027973b */
  if ((C.sf!=C.of)) goto L_1027973b;
  /* 10279728 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1027972b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1027972d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10279730 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10279733 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279736 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10279739 jmp 0x10279722 */
  goto L_10279722;
L_1027973b:;
  /* 1027973b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027973e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279741 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10279745 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10279748 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027974b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1027974d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279750 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10279753 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10279756 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10279759 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027975c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1027975f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279763 jle 0x1027976c */
  if ((C.zf||C.sf!=C.of)) goto L_1027976c;
  /* 10279765 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1027976c:;
  /* 1027976c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027976f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279772 je 0x10279990 */
  if (C.zf) goto L_10279990;
  /* 10279778 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027977b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027977e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10279781 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279784 jne 0x1027985a */
  if (!C.zf) goto L_1027985a;
  /* 1027978a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027978e jge 0x102797ef */
  if ((C.sf==C.of)) goto L_102797ef;
  /* 10279790 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10279795 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10279798 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1027979a not eax */
  EAX = (~(EAX));
  /* 1027979c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027979f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 102797a2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 102797a6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 102797a8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 102797ab mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 102797ae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 102797b2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 102797b5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102797b8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 102797bb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102797be mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 102797c1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102797c4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 102797c7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 102797ca add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102797cd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 102797d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102797d3 jne 0x102797ed */
  if (!C.zf) goto L_102797ed;
  /* 102797d5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 102797da mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 102797dd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 102797df not eax */
  EAX = (~(EAX));
  /* 102797e1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 102797e4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 102797e6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 102797e8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 102797eb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_102797ed:;
  /* 102797ed jmp 0x1027985a */
  goto L_1027985a;
L_102797ef:;
  /* 102797ef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 102797f2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102797f5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102797fa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102797fc not edx */
  EDX = (~(EDX));
  /* 102797fe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279801 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10279804 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1027980b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1027980d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279810 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10279813 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1027981a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1027981d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279820 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10279823 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10279826 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10279829 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027982c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1027982f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10279832 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279835 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10279839 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027983b jne 0x1027985a */
  if (!C.zf) goto L_1027985a;
  /* 1027983d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10279840 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279843 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10279848 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1027984a not edx */
  EDX = (~(EDX));
  /* 1027984c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027984f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10279852 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10279854 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279857 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1027985a:;
  /* 1027985a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027985d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10279860 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10279863 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10279866 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10279869 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027986c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1027986f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10279872 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10279875 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10279878 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027987c je 0x10279990 */
  if (C.zf) goto L_10279990;
  /* 10279882 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10279885 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279888 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1027988b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027988e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10279891 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10279894 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10279897 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1027989a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027989d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102798a0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 102798a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102798a6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 102798a9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 102798ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 102798af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 102798b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 102798b5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 102798b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 102798bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102798be mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 102798c1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102798c4 jne 0x10279990 */
  if (!C.zf) goto L_10279990;
  /* 102798ca cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102798ce jge 0x1027992a */
  if ((C.sf==C.of)) goto L_1027992a;
  /* 102798d0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 102798d3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102798d6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 102798da mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 102798dd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102798e0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 102798e3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 102798e5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 102798e8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102798eb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 102798ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102798f0 jne 0x10279908 */
  if (!C.zf) goto L_10279908;
  /* 102798f2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 102798f7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 102798fa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 102798fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 102798ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10279901 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10279903 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279906 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10279908:;
  /* 10279908 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1027990d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10279910 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10279912 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279915 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10279918 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1027991c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1027991e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279921 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10279924 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10279928 jmp 0x10279990 */
  goto L_10279990;
L_1027992a:;
  /* 1027992a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1027992d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279930 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10279934 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10279937 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027993a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1027993d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1027993f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10279942 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279945 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10279948 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027994a jne 0x10279967 */
  if (!C.zf) goto L_10279967;
  /* 1027994c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027994f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279952 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10279957 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10279959 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027995c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1027995f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10279961 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279964 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10279967:;
  /* 10279967 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027996a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027996d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10279972 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10279974 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279977 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1027997a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10279981 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10279983 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279986 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10279989 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10279990:;
  /* 10279990 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279994 je 0x102799aa */
  if (C.zf) goto L_102799aa;
  /* 10279996 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10279999 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027999c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1027999e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 102799a1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102799a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102799a7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_102799aa:;
  /* 102799aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102799ad add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102799b0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 102799b3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 102799b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102799b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 102799bc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 102799be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 102799c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102799c4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 102799c7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102799ca mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 102799cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102799d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102799d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102799d5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 102799d7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102799da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102799dd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 102799df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102799e1 jne 0x10279a03 */
  if (!C.zf) goto L_10279a03;
  /* 102799e3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 102799e6 cmp eax, dword ptr [0x102a1f40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102a1f40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102799ec jne 0x10279a03 */
  if (!C.zf) goto L_10279a03;
  /* 102799ee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 102799f1 cmp ecx, dword ptr [0x102a1f38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102a1f38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102799f7 jne 0x10279a03 */
  if (!C.zf) goto L_10279a03;
  /* 102799f9 mov dword ptr [0x102a1f40], 0 */
  w32((uint32_t)(0x102a1f40), (0x0u));
L_10279a03:;
  /* 10279a03 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10279a06 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279a09 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10279a0b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10279a0e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10279a11:;
  /* 10279a11 pop esi */
  ESI = (pop32());
  /* 10279a12 mov esp, ebp */
  ESP = (EBP);
  /* 10279a14 pop ebp */
  EBP = (pop32());
  /* 10279a15 ret  */
  ESPCHK(0x102794e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a20 @ 0x10279a20 (271 bytes, 78 insns) */
void f_10279a20(void) {
  FTRACE(0x10279a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10279a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10279a21 mov ebp, esp */
  EBP = (ESP);
  /* 10279a23 push ecx */
  push32((uint32_t)(ECX));
  /* 10279a24 mov eax, dword ptr [0x102a1f44] */
  EAX = (r32((uint32_t)(0x102a1f44)));
  /* 10279a29 cmp eax, dword ptr [0x102a1f28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102a1f28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279a2f jne 0x10279a7b */
  if (!C.zf) goto L_10279a7b;
  /* 10279a31 mov ecx, dword ptr [0x102a1f28] */
  ECX = (r32((uint32_t)(0x102a1f28)));
  /* 10279a37 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279a3a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10279a3d push ecx */
  push32((uint32_t)(ECX));
  /* 10279a3e mov edx, dword ptr [0x102a1f48] */
  EDX = (r32((uint32_t)(0x102a1f48)));
  /* 10279a44 push edx */
  push32((uint32_t)(EDX));
  /* 10279a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10279a47 mov eax, dword ptr [0x102a1f4c] */
  EAX = (r32((uint32_t)(0x102a1f4c)));
  /* 10279a4c push eax */
  push32((uint32_t)(EAX));
  /* 10279a4d call dword ptr [0x102a3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3340))), 0x10279a53u);
  /* 10279a53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10279a56 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279a5a jne 0x10279a63 */
  if (!C.zf) goto L_10279a63;
  /* 10279a5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10279a5e jmp 0x10279b2b */
  goto L_10279b2b;
L_10279a63:;
  /* 10279a63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279a66 mov dword ptr [0x102a1f48], ecx */
  w32((uint32_t)(0x102a1f48), (ECX));
  /* 10279a6c mov edx, dword ptr [0x102a1f28] */
  EDX = (r32((uint32_t)(0x102a1f28)));
  /* 10279a72 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279a75 mov dword ptr [0x102a1f28], edx */
  w32((uint32_t)(0x102a1f28), (EDX));
L_10279a7b:;
  /* 10279a7b mov eax, dword ptr [0x102a1f44] */
  EAX = (r32((uint32_t)(0x102a1f44)));
  /* 10279a80 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10279a83 mov ecx, dword ptr [0x102a1f48] */
  ECX = (r32((uint32_t)(0x102a1f48)));
  /* 10279a89 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279a8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10279a8e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10279a93 push 8 */
  push32((uint32_t)(0x8u));
  /* 10279a95 mov edx, dword ptr [0x102a1f4c] */
  EDX = (r32((uint32_t)(0x102a1f4c)));
  /* 10279a9b push edx */
  push32((uint32_t)(EDX));
  /* 10279a9c call dword ptr [0x102a32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32e4))), 0x10279aa2u);
  /* 10279aa2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279aa5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10279aa8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279aab cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279aaf jne 0x10279ab5 */
  if (!C.zf) goto L_10279ab5;
  /* 10279ab1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10279ab3 jmp 0x10279b2b */
  goto L_10279b2b;
L_10279ab5:;
  /* 10279ab5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10279ab7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10279abc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10279ac1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10279ac3 call dword ptr [0x102a32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32dc))), 0x10279ac9u);
  /* 10279ac9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279acc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10279acf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279ad2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279ad6 jne 0x10279af2 */
  if (!C.zf) goto L_10279af2;
  /* 10279ad8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279adb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10279ade push ecx */
  push32((uint32_t)(ECX));
  /* 10279adf push 0 */
  push32((uint32_t)(0x0u));
  /* 10279ae1 mov edx, dword ptr [0x102a1f4c] */
  EDX = (r32((uint32_t)(0x102a1f4c)));
  /* 10279ae7 push edx */
  push32((uint32_t)(EDX));
  /* 10279ae8 call dword ptr [0x102a3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3378))), 0x10279aeeu);
  /* 10279aee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10279af0 jmp 0x10279b2b */
  goto L_10279b2b;
L_10279af2:;
  /* 10279af2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279af5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10279afb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279afe mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10279b05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279b08 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10279b0f mov eax, dword ptr [0x102a1f44] */
  EAX = (r32((uint32_t)(0x102a1f44)));
  /* 10279b14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279b17 mov dword ptr [0x102a1f44], eax */
  w32((uint32_t)(0x102a1f44), (EAX));
  /* 10279b1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279b1f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10279b22 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10279b28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10279b2b:;
  /* 10279b2b mov esp, ebp */
  ESP = (EBP);
  /* 10279b2d pop ebp */
  EBP = (pop32());
  /* 10279b2e ret  */
  ESPCHK(0x10279a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b30 @ 0x10279b30 (494 bytes, 149 insns) */
void f_10279b30(void) {
  FTRACE(0x10279b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10279b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10279b31 mov ebp, esp */
  EBP = (ESP);
  /* 10279b33 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279b36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279b39 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10279b3c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10279b3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279b42 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10279b45 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10279b48 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10279b4f:;
  /* 10279b4f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279b53 jl 0x10279b68 */
  if ((C.sf!=C.of)) goto L_10279b68;
  /* 10279b55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10279b58 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10279b5a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10279b5d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10279b60 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279b63 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10279b66 jmp 0x10279b4f */
  goto L_10279b4f;
L_10279b68:;
  /* 10279b68 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10279b6b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10279b71 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279b74 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10279b7b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10279b7e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10279b85 jmp 0x10279b90 */
  goto L_10279b90;
L_10279b87:;
  /* 10279b87 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10279b8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279b8d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10279b90:;
  /* 10279b90 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279b94 jge 0x10279bb6 */
  if ((C.sf==C.of)) goto L_10279bb6;
  /* 10279b96 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10279b99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10279b9c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10279b9f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10279ba2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279ba5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279ba8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10279bab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279bae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279bb1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10279bb4 jmp 0x10279b87 */
  goto L_10279b87;
L_10279bb6:;
  /* 10279bb6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10279bb9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10279bbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279bbf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10279bc2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279bc4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10279bc7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10279bc9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10279bce push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10279bd3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10279bd6 push edx */
  push32((uint32_t)(EDX));
  /* 10279bd7 call dword ptr [0x102a32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32dc))), 0x10279bddu);
  /* 10279bdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10279bdf jne 0x10279be9 */
  if (!C.zf) goto L_10279be9;
  /* 10279be1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10279be4 jmp 0x10279d1a */
  goto L_10279d1a;
L_10279be9:;
  /* 10279be9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10279bec add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279bf1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10279bf4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10279bf7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10279bfa jmp 0x10279c08 */
  goto L_10279c08;
L_10279bfc:;
  /* 10279bfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279bff add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279c05 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10279c08:;
  /* 10279c08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279c0b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279c0e ja 0x10279c6d */
  if ((!C.cf&&!C.zf)) goto L_10279c6d;
  /* 10279c10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279c13 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10279c1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279c1d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10279c27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279c2a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279c2d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10279c30 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279c33 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10279c39 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279c3c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279c42 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279c45 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10279c48 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279c4b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279c51 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279c54 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10279c57 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279c5a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279c5f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10279c62 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10279c65 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10279c6b jmp 0x10279bfc */
  goto L_10279bfc;
L_10279c6d:;
  /* 10279c6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10279c70 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279c76 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10279c79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10279c7c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279c7f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10279c82 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10279c85 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10279c88 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10279c8b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10279c8e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279c91 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10279c94 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10279c97 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10279c9a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279c9d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10279ca0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10279ca3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10279ca6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10279ca9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10279cac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279caf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10279cb2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10279cb5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10279cb8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279cbb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10279cc3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10279cc6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279cc9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10279cd4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279cd7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10279cdb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279cde mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10279ce1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10279ce4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279ce7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10279cea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10279cec jne 0x10279cfd */
  if (!C.zf) goto L_10279cfd;
  /* 10279cee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279cf1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10279cf4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10279cf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279cfa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10279cfd:;
  /* 10279cfd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10279d02 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10279d05 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10279d07 not edx */
  EDX = (~(EDX));
  /* 10279d09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279d0c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10279d0f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10279d11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279d14 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10279d17 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10279d1a:;
  /* 10279d1a mov esp, ebp */
  ESP = (EBP);
  /* 10279d1c pop ebp */
  EBP = (pop32());
  /* 10279d1d ret  */
  ESPCHK(0x10279b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d20 @ 0x10279d20 (1515 bytes, 489 insns) */
void f_10279d20(void) {
  FTRACE(0x10279d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10279d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10279d21 mov ebp, esp */
  EBP = (ESP);
  /* 10279d23 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279d26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10279d29 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279d2c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10279d2e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10279d31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279d34 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10279d37 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10279d3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279d3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10279d40 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279d43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10279d46 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10279d49 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10279d4c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10279d4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279d52 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10279d58 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279d5b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10279d62 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10279d65 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10279d68 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279d6b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10279d6e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10279d71 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10279d73 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279d76 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10279d79 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10279d7c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279d7f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10279d82 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279d85 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10279d87 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10279d8a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10279d8d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279d90 jle 0x1027a046 */
  if ((C.zf||C.sf!=C.of)) goto L_1027a046;
  /* 10279d96 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10279d99 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10279d9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10279d9e jne 0x10279dab */
  if (!C.zf) goto L_10279dab;
  /* 10279da0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10279da3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279da6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279da9 jle 0x10279db2 */
  if ((C.zf||C.sf!=C.of)) goto L_10279db2;
L_10279dab:;
  /* 10279dab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10279dad jmp 0x1027a307 */
  goto L_1027a307;
L_10279db2:;
  /* 10279db2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10279db5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10279db8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279dbb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10279dbe cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279dc2 jbe 0x10279dcb */
  if ((C.cf||C.zf)) goto L_10279dcb;
  /* 10279dc4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10279dcb:;
  /* 10279dcb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279dce mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279dd1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10279dd4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279dd7 jne 0x10279ead */
  if (!C.zf) goto L_10279ead;
  /* 10279ddd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279de1 jae 0x10279e42 */
  if (!C.cf) goto L_10279e42;
  /* 10279de3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10279de8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10279deb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10279ded not edx */
  EDX = (~(EDX));
  /* 10279def mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279df2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279df5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10279df9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10279dfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279dfe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279e01 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10279e05 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279e08 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279e0b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10279e0e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10279e11 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279e14 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279e17 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10279e1a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279e1d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279e20 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10279e24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10279e26 jne 0x10279e40 */
  if (!C.zf) goto L_10279e40;
  /* 10279e28 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10279e2d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10279e30 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10279e32 not edx */
  EDX = (~(EDX));
  /* 10279e34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279e37 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10279e39 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10279e3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279e3e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10279e40:;
  /* 10279e40 jmp 0x10279ead */
  goto L_10279ead;
L_10279e42:;
  /* 10279e42 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10279e45 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279e48 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10279e4d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10279e4f not eax */
  EAX = (~(EAX));
  /* 10279e51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279e54 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279e57 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10279e5e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10279e60 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279e63 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279e66 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10279e6d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279e70 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279e73 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10279e76 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10279e79 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279e7c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279e7f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10279e82 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279e85 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279e88 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10279e8c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10279e8e jne 0x10279ead */
  if (!C.zf) goto L_10279ead;
  /* 10279e90 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10279e93 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279e96 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10279e9b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10279e9d not eax */
  EAX = (~(EAX));
  /* 10279e9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279ea2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10279ea5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10279ea7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279eaa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10279ead:;
  /* 10279ead mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279eb0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10279eb3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279eb6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10279eb9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10279ebc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279ebf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10279ec2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279ec5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10279ec8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10279ecb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10279ece add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279ed1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279ed4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10279ed7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279edb jle 0x1027a027 */
  if ((C.zf||C.sf!=C.of)) goto L_1027a027;
  /* 10279ee1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10279ee4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279ee7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10279eea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10279eed sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10279ef0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279ef3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10279ef6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279efa jbe 0x10279f03 */
  if ((C.cf||C.zf)) goto L_10279f03;
  /* 10279efc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10279f03:;
  /* 10279f03 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10279f06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10279f09 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10279f0c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10279f0f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279f12 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279f15 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10279f18 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10279f1b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279f1e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279f21 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10279f24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10279f27 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279f2a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10279f2d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279f30 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10279f33 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279f36 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10279f39 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279f3c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10279f3f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10279f42 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279f45 jne 0x1027a013 */
  if (!C.zf) goto L_1027a013;
  /* 10279f4b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10279f4f jae 0x10279fac */
  if (!C.cf) goto L_10279fac;
  /* 10279f51 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279f54 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279f57 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10279f5b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279f5e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279f61 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10279f64 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10279f67 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279f6a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279f6d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10279f70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10279f72 jne 0x10279f8a */
  if (!C.zf) goto L_10279f8a;
  /* 10279f74 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10279f79 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10279f7c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10279f7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279f81 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10279f83 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10279f85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279f88 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10279f8a:;
  /* 10279f8a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10279f8f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10279f92 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10279f94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279f97 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279f9a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10279f9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10279fa0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279fa3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279fa6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10279faa jmp 0x1027a013 */
  goto L_1027a013;
L_10279fac:;
  /* 10279fac mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279faf add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279fb2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10279fb6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279fb9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279fbc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10279fbf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10279fc2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279fc5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10279fc8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10279fcb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10279fcd jne 0x10279fea */
  if (!C.zf) goto L_10279fea;
  /* 10279fcf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10279fd2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279fd5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10279fda shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10279fdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279fdf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10279fe2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10279fe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10279fe7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10279fea:;
  /* 10279fea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10279fed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10279ff0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10279ff5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10279ff7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10279ffa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10279ffd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1027a004 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027a006 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027a009 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a00c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1027a013:;
  /* 1027a013 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1027a016 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027a019 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1027a01b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1027a01e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a021 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027a024 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1027a027:;
  /* 1027a027 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1027a02a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a02d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a030 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1027a032 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1027a035 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a038 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a03b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a03e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1027a041 jmp 0x1027a302 */
  goto L_1027a302;
L_1027a046:;
  /* 1027a046 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1027a049 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a04c jge 0x1027a302 */
  if ((C.sf==C.of)) goto L_1027a302;
  /* 1027a052 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1027a055 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a058 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a05b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1027a05d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1027a060 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a063 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a066 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a069 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1027a06c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a06f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a072 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1027a075 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027a078 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027a07b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1027a07e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027a081 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1027a084 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027a087 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1027a08a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a08e jbe 0x1027a097 */
  if ((C.cf||C.zf)) goto L_1027a097;
  /* 1027a090 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1027a097:;
  /* 1027a097 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027a09a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1027a09d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027a09f jne 0x1027a1e0 */
  if (!C.zf) goto L_1027a1e0;
  /* 1027a0a5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027a0a8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1027a0ab sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027a0ae mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1027a0b1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a0b5 jbe 0x1027a0be */
  if ((C.cf||C.zf)) goto L_1027a0be;
  /* 1027a0b7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1027a0be:;
  /* 1027a0be mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1027a0c1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1027a0c4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1027a0c7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a0ca jne 0x1027a1a0 */
  if (!C.zf) goto L_1027a1a0;
  /* 1027a0d0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a0d4 jae 0x1027a135 */
  if (!C.cf) goto L_1027a135;
  /* 1027a0d6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1027a0db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027a0de shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1027a0e0 not edx */
  EDX = (~(EDX));
  /* 1027a0e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027a0e5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a0e8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1027a0ec and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1027a0ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027a0f1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a0f4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1027a0f8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a0fb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a0fe mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1027a101 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1027a104 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a107 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a10a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1027a10d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a110 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a113 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1027a117 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027a119 jne 0x1027a133 */
  if (!C.zf) goto L_1027a133;
  /* 1027a11b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1027a120 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027a123 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1027a125 not edx */
  EDX = (~(EDX));
  /* 1027a127 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027a12a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1027a12c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1027a12e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027a131 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1027a133:;
  /* 1027a133 jmp 0x1027a1a0 */
  goto L_1027a1a0;
L_1027a135:;
  /* 1027a135 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027a138 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027a13b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1027a140 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1027a142 not eax */
  EAX = (~(EAX));
  /* 1027a144 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027a147 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a14a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1027a151 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027a153 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027a156 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a159 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1027a160 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a163 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a166 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1027a169 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1027a16c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a16f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a172 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1027a175 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a178 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a17b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1027a17f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027a181 jne 0x1027a1a0 */
  if (!C.zf) goto L_1027a1a0;
  /* 1027a183 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027a186 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027a189 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1027a18e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1027a190 not eax */
  EAX = (~(EAX));
  /* 1027a192 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027a195 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1027a198 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1027a19a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027a19d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1027a1a0:;
  /* 1027a1a0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1027a1a3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1027a1a6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1027a1a9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1027a1ac mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1027a1af mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1027a1b2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1027a1b5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1027a1b8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1027a1bb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1027a1be mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027a1c1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a1c4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1027a1c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027a1ca sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1027a1cd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027a1d0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1027a1d3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a1d7 jbe 0x1027a1e0 */
  if ((C.cf||C.zf)) goto L_1027a1e0;
  /* 1027a1d9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1027a1e0:;
  /* 1027a1e0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027a1e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027a1e6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1027a1e9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1027a1ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a1ef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027a1f2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1027a1f5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1027a1f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a1fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027a1fe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1027a201 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027a204 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a207 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1027a20a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a20d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1027a210 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a213 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1027a216 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a219 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a21c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1027a21f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a222 jne 0x1027a2ee */
  if (!C.zf) goto L_1027a2ee;
  /* 1027a228 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a22c jae 0x1027a288 */
  if (!C.cf) goto L_1027a288;
  /* 1027a22e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a231 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a234 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1027a238 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a23b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a23e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1027a241 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1027a243 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a246 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a249 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1027a24c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027a24e jne 0x1027a266 */
  if (!C.zf) goto L_1027a266;
  /* 1027a250 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1027a255 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027a258 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1027a25a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027a25d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1027a25f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1027a261 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027a264 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1027a266:;
  /* 1027a266 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1027a26b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027a26e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1027a270 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027a273 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a276 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1027a27a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1027a27c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027a27f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a282 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1027a286 jmp 0x1027a2ee */
  goto L_1027a2ee;
L_1027a288:;
  /* 1027a288 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a28b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a28e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1027a292 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a295 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a298 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1027a29b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1027a29d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a2a0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a2a3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1027a2a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027a2a8 jne 0x1027a2c5 */
  if (!C.zf) goto L_1027a2c5;
  /* 1027a2aa mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027a2ad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027a2b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1027a2b5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1027a2b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027a2ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1027a2bd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1027a2bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027a2c2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1027a2c5:;
  /* 1027a2c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027a2c8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027a2cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1027a2d0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1027a2d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027a2d5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a2d8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1027a2df or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1027a2e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027a2e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027a2e7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1027a2ee:;
  /* 1027a2ee mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a2f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027a2f4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1027a2f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a2f9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a2fc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027a2ff mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1027a302:;
  /* 1027a302 mov eax, 1 */
  EAX = (0x1u);
L_1027a307:;
  /* 1027a307 mov esp, ebp */
  ESP = (EBP);
  /* 1027a309 pop ebp */
  EBP = (pop32());
  /* 1027a30a ret  */
  ESPCHK(0x10279d20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a310 @ 0x1027a310 (304 bytes, 79 insns) */
void f_1027a310(void) {
  FTRACE(0x1027a310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027a310 push ebp */
  push32((uint32_t)(EBP));
  /* 1027a311 mov ebp, esp */
  EBP = (ESP);
  /* 1027a313 push ecx */
  push32((uint32_t)(ECX));
  /* 1027a314 cmp dword ptr [0x102a1f40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a1f40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a31b je 0x1027a43c */
  if (C.zf) goto L_1027a43c;
  /* 1027a321 mov eax, dword ptr [0x102a1f38] */
  EAX = (r32((uint32_t)(0x102a1f38)));
  /* 1027a326 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1027a329 mov ecx, dword ptr [0x102a1f40] */
  ECX = (r32((uint32_t)(0x102a1f40)));
  /* 1027a32f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1027a332 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a334 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1027a337 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1027a33c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1027a341 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027a344 push eax */
  push32((uint32_t)(EAX));
  /* 1027a345 call dword ptr [0x102a337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a337c))), 0x1027a34bu);
  /* 1027a34b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1027a350 mov ecx, dword ptr [0x102a1f38] */
  ECX = (r32((uint32_t)(0x102a1f38)));
  /* 1027a356 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1027a358 mov eax, dword ptr [0x102a1f40] */
  EAX = (r32((uint32_t)(0x102a1f40)));
  /* 1027a35d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1027a360 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1027a362 mov edx, dword ptr [0x102a1f40] */
  EDX = (r32((uint32_t)(0x102a1f40)));
  /* 1027a368 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1027a36b mov eax, dword ptr [0x102a1f40] */
  EAX = (r32((uint32_t)(0x102a1f40)));
  /* 1027a370 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1027a373 mov edx, dword ptr [0x102a1f38] */
  EDX = (r32((uint32_t)(0x102a1f38)));
  /* 1027a379 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1027a384 mov eax, dword ptr [0x102a1f40] */
  EAX = (r32((uint32_t)(0x102a1f40)));
  /* 1027a389 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1027a38c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1027a38f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1027a392 mov eax, dword ptr [0x102a1f40] */
  EAX = (r32((uint32_t)(0x102a1f40)));
  /* 1027a397 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1027a39a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1027a39d mov edx, dword ptr [0x102a1f40] */
  EDX = (r32((uint32_t)(0x102a1f40)));
  /* 1027a3a3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1027a3a6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1027a3aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027a3ac jne 0x1027a3c2 */
  if (!C.zf) goto L_1027a3c2;
  /* 1027a3ae mov edx, dword ptr [0x102a1f40] */
  EDX = (r32((uint32_t)(0x102a1f40)));
  /* 1027a3b4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1027a3b7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1027a3b9 mov ecx, dword ptr [0x102a1f40] */
  ECX = (r32((uint32_t)(0x102a1f40)));
  /* 1027a3bf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1027a3c2:;
  /* 1027a3c2 mov edx, dword ptr [0x102a1f40] */
  EDX = (r32((uint32_t)(0x102a1f40)));
  /* 1027a3c8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a3cc jne 0x1027a432 */
  if (!C.zf) goto L_1027a432;
  /* 1027a3ce cmp dword ptr [0x102a1f44], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102a1f44))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a3d5 jle 0x1027a432 */
  if ((C.zf||C.sf!=C.of)) goto L_1027a432;
  /* 1027a3d7 mov eax, dword ptr [0x102a1f40] */
  EAX = (r32((uint32_t)(0x102a1f40)));
  /* 1027a3dc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1027a3df push ecx */
  push32((uint32_t)(ECX));
  /* 1027a3e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027a3e2 mov edx, dword ptr [0x102a1f4c] */
  EDX = (r32((uint32_t)(0x102a1f4c)));
  /* 1027a3e8 push edx */
  push32((uint32_t)(EDX));
  /* 1027a3e9 call dword ptr [0x102a3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3378))), 0x1027a3efu);
  /* 1027a3ef mov eax, dword ptr [0x102a1f44] */
  EAX = (r32((uint32_t)(0x102a1f44)));
  /* 1027a3f4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027a3f7 mov ecx, dword ptr [0x102a1f48] */
  ECX = (r32((uint32_t)(0x102a1f48)));
  /* 1027a3fd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a3ff mov edx, dword ptr [0x102a1f40] */
  EDX = (r32((uint32_t)(0x102a1f40)));
  /* 1027a405 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a408 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027a40a push ecx */
  push32((uint32_t)(ECX));
  /* 1027a40b mov eax, dword ptr [0x102a1f40] */
  EAX = (r32((uint32_t)(0x102a1f40)));
  /* 1027a410 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a413 push eax */
  push32((uint32_t)(EAX));
  /* 1027a414 mov ecx, dword ptr [0x102a1f40] */
  ECX = (r32((uint32_t)(0x102a1f40)));
  /* 1027a41a push ecx */
  push32((uint32_t)(ECX));
  /* 1027a41b call 0x1027ca40 */
  push32(0x1027a420u); f_1027ca40();
  /* 1027a420 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a423 mov edx, dword ptr [0x102a1f44] */
  EDX = (r32((uint32_t)(0x102a1f44)));
  /* 1027a429 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027a42c mov dword ptr [0x102a1f44], edx */
  w32((uint32_t)(0x102a1f44), (EDX));
L_1027a432:;
  /* 1027a432 mov dword ptr [0x102a1f40], 0 */
  w32((uint32_t)(0x102a1f40), (0x0u));
L_1027a43c:;
  /* 1027a43c mov esp, ebp */
  ESP = (EBP);
  /* 1027a43e pop ebp */
  EBP = (pop32());
  /* 1027a43f ret  */
  ESPCHK(0x1027a310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a440 @ 0x1027a440 (1565 bytes, 343 insns) */
void f_1027a440(void) {
  FTRACE(0x1027a440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027a440 push ebp */
  push32((uint32_t)(EBP));
  /* 1027a441 mov ebp, esp */
  EBP = (ESP);
  /* 1027a443 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027a449 mov eax, dword ptr [0x102a1f44] */
  EAX = (r32((uint32_t)(0x102a1f44)));
  /* 1027a44e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027a451 push eax */
  push32((uint32_t)(EAX));
  /* 1027a452 mov ecx, dword ptr [0x102a1f48] */
  ECX = (r32((uint32_t)(0x102a1f48)));
  /* 1027a458 push ecx */
  push32((uint32_t)(ECX));
  /* 1027a459 call dword ptr [0x102a3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3350))), 0x1027a45fu);
  /* 1027a45f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027a461 je 0x1027a46b */
  if (C.zf) goto L_1027a46b;
  /* 1027a463 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027a466 jmp 0x1027aa59 */
  goto L_1027aa59;
L_1027a46b:;
  /* 1027a46b mov edx, dword ptr [0x102a1f48] */
  EDX = (r32((uint32_t)(0x102a1f48)));
  /* 1027a471 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1027a477 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1027a481 jmp 0x1027a492 */
  goto L_1027a492;
L_1027a483:;
  /* 1027a483 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1027a489 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a48c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1027a492:;
  /* 1027a492 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1027a498 cmp ecx, dword ptr [0x102a1f44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102a1f44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a49e jge 0x1027aa57 */
  if ((C.sf==C.of)) goto L_1027aa57;
  /* 1027a4a4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1027a4aa mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1027a4ad mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1027a4b3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1027a4b8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1027a4be push ecx */
  push32((uint32_t)(ECX));
  /* 1027a4bf call dword ptr [0x102a3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3350))), 0x1027a4c5u);
  /* 1027a4c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027a4c7 je 0x1027a4d3 */
  if (C.zf) goto L_1027a4d3;
  /* 1027a4c9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1027a4ce jmp 0x1027aa59 */
  goto L_1027aa59;
L_1027a4d3:;
  /* 1027a4d3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1027a4d9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1027a4dc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1027a4e2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1027a4e8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a4ee mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1027a4f1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1027a4f7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1027a4fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027a4fd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1027a507 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1027a511 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1027a518 jmp 0x1027a523 */
  goto L_1027a523;
L_1027a51a:;
  /* 1027a51a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027a51d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a520 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1027a523:;
  /* 1027a523 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a527 jge 0x1027aa1b */
  if ((C.sf==C.of)) goto L_1027aa1b;
  /* 1027a52d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1027a537 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1027a541 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1027a54b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1027a555 jmp 0x1027a566 */
  goto L_1027a566;
L_1027a557:;
  /* 1027a557 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1027a55d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a560 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1027a566:;
  /* 1027a566 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a56d jge 0x1027a582 */
  if ((C.sf==C.of)) goto L_1027a582;
  /* 1027a56f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1027a575 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1027a580 jmp 0x1027a557 */
  goto L_1027a557;
L_1027a582:;
  /* 1027a582 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a586 jl 0x1027a9bd */
  if ((C.sf!=C.of)) goto L_1027a9bd;
  /* 1027a58c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1027a591 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1027a597 push ecx */
  push32((uint32_t)(ECX));
  /* 1027a598 call dword ptr [0x102a3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3350))), 0x1027a59eu);
  /* 1027a59e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027a5a0 je 0x1027a5ac */
  if (C.zf) goto L_1027a5ac;
  /* 1027a5a2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1027a5a7 jmp 0x1027aa59 */
  goto L_1027aa59;
L_1027a5ac:;
  /* 1027a5ac mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1027a5b2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1027a5b5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1027a5bf jmp 0x1027a5d0 */
  goto L_1027a5d0;
L_1027a5c1:;
  /* 1027a5c1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1027a5c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a5ca mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1027a5d0:;
  /* 1027a5d0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a5d7 jge 0x1027a754 */
  if ((C.sf==C.of)) goto L_1027a754;
  /* 1027a5dd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027a5e0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a5e3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1027a5e9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1027a5ef add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a5f5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1027a5fb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1027a601 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a605 jne 0x1027a612 */
  if (!C.zf) goto L_1027a612;
  /* 1027a607 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1027a60d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a610 je 0x1027a61c */
  if (C.zf) goto L_1027a61c;
L_1027a612:;
  /* 1027a612 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1027a617 jmp 0x1027aa59 */
  goto L_1027aa59;
L_1027a61c:;
  /* 1027a61c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1027a622 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1027a624 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1027a62a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1027a630 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1027a636 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1027a63c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1027a63f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027a641 je 0x1027a679 */
  if (C.zf) goto L_1027a679;
  /* 1027a643 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1027a649 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027a64c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1027a652 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a65c jle 0x1027a668 */
  if ((C.zf||C.sf!=C.of)) goto L_1027a668;
  /* 1027a65e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1027a663 jmp 0x1027aa59 */
  goto L_1027aa59;
L_1027a668:;
  /* 1027a668 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1027a66e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a671 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1027a677 jmp 0x1027a6bb */
  goto L_1027a6bb;
L_1027a679:;
  /* 1027a679 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1027a67f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1027a682 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027a685 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1027a68b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a692 jle 0x1027a69e */
  if ((C.zf||C.sf!=C.of)) goto L_1027a69e;
  /* 1027a694 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1027a69e:;
  /* 1027a69e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1027a6a4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1027a6ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a6ae mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1027a6b4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1027a6bb:;
  /* 1027a6bb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a6c2 jl 0x1027a6dd */
  if ((C.sf!=C.of)) goto L_1027a6dd;
  /* 1027a6c4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1027a6ca and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1027a6cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027a6cf jne 0x1027a6dd */
  if (!C.zf) goto L_1027a6dd;
  /* 1027a6d1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a6db jle 0x1027a6e7 */
  if ((C.zf||C.sf!=C.of)) goto L_1027a6e7;
L_1027a6dd:;
  /* 1027a6dd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1027a6e2 jmp 0x1027aa59 */
  goto L_1027aa59;
L_1027a6e7:;
  /* 1027a6e7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1027a6ed add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a6f3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1027a6f6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a6fc je 0x1027a708 */
  if (C.zf) goto L_1027a708;
  /* 1027a6fe mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1027a703 jmp 0x1027aa59 */
  goto L_1027aa59;
L_1027a708:;
  /* 1027a708 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1027a70e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a714 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1027a71a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1027a720 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a726 jb 0x1027a61c */
  if (C.cf) goto L_1027a61c;
  /* 1027a72c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1027a732 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a738 je 0x1027a744 */
  if (C.zf) goto L_1027a744;
  /* 1027a73a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1027a73f jmp 0x1027aa59 */
  goto L_1027aa59;
L_1027a744:;
  /* 1027a744 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027a747 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a74c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1027a74f jmp 0x1027a5c1 */
  goto L_1027a5c1;
L_1027a754:;
  /* 1027a754 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027a757 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1027a759 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a75f je 0x1027a76b */
  if (C.zf) goto L_1027a76b;
  /* 1027a761 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1027a766 jmp 0x1027aa59 */
  goto L_1027aa59;
L_1027a76b:;
  /* 1027a76b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027a76e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1027a774 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1027a77b jmp 0x1027a786 */
  goto L_1027a786;
L_1027a77d:;
  /* 1027a77d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a780 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a783 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1027a786:;
  /* 1027a786 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a78a jge 0x1027a9bd */
  if ((C.sf==C.of)) goto L_1027a9bd;
  /* 1027a790 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1027a79a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1027a7a0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1027a7a6:;
  /* 1027a7a6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1027a7ac mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1027a7af mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1027a7b5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1027a7bb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a7c1 je 0x1027a8ea */
  if (C.zf) goto L_1027a8ea;
  /* 1027a7c7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a7ca mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1027a7d0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a7d7 je 0x1027a8ea */
  if (C.zf) goto L_1027a8ea;
  /* 1027a7dd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1027a7e3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a7e9 jb 0x1027a7fe */
  if (C.cf) goto L_1027a7fe;
  /* 1027a7eb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1027a7f1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a7f6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a7fc jb 0x1027a808 */
  if (C.cf) goto L_1027a808;
L_1027a7fe:;
  /* 1027a7fe mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1027a803 jmp 0x1027aa59 */
  goto L_1027aa59;
L_1027a808:;
  /* 1027a808 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1027a80e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1027a814 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1027a81a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1027a820 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a823 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1027a826 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027a829 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a82e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1027a834:;
  /* 1027a834 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027a837 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a83d je 0x1027a85e */
  if (C.zf) goto L_1027a85e;
  /* 1027a83f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027a842 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a848 jne 0x1027a84c */
  if (!C.zf) goto L_1027a84c;
  /* 1027a84a jmp 0x1027a85e */
  goto L_1027a85e;
L_1027a84c:;
  /* 1027a84c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027a84f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1027a851 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1027a854 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027a857 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a859 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1027a85c jmp 0x1027a834 */
  goto L_1027a834;
L_1027a85e:;
  /* 1027a85e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027a861 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a867 jne 0x1027a873 */
  if (!C.zf) goto L_1027a873;
  /* 1027a869 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1027a86e jmp 0x1027aa59 */
  goto L_1027aa59;
L_1027a873:;
  /* 1027a873 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1027a879 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1027a87b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1027a87e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027a881 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1027a887 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a88e jle 0x1027a89a */
  if ((C.zf||C.sf!=C.of)) goto L_1027a89a;
  /* 1027a890 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1027a89a:;
  /* 1027a89a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1027a8a0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a8a3 je 0x1027a8af */
  if (C.zf) goto L_1027a8af;
  /* 1027a8a5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1027a8aa jmp 0x1027aa59 */
  goto L_1027aa59;
L_1027a8af:;
  /* 1027a8af mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1027a8b5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1027a8b8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a8be je 0x1027a8ca */
  if (C.zf) goto L_1027a8ca;
  /* 1027a8c0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1027a8c5 jmp 0x1027aa59 */
  goto L_1027aa59;
L_1027a8ca:;
  /* 1027a8ca mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1027a8d0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1027a8d6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1027a8dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a8df mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1027a8e5 jmp 0x1027a7a6 */
  goto L_1027a7a6;
L_1027a8ea:;
  /* 1027a8ea cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a8f1 je 0x1027a961 */
  if (C.zf) goto L_1027a961;
  /* 1027a8f3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a8f7 jge 0x1027a92b */
  if ((C.sf==C.of)) goto L_1027a92b;
  /* 1027a8f9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1027a8fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a901 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1027a903 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1027a909 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1027a90b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1027a911 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1027a916 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a919 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1027a91b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1027a921 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1027a923 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1027a929 jmp 0x1027a961 */
  goto L_1027a961;
L_1027a92b:;
  /* 1027a92b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a92e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027a931 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1027a936 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1027a938 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1027a93e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1027a940 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1027a946 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a949 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027a94c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1027a951 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1027a953 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1027a959 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1027a95b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1027a961:;
  /* 1027a961 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1027a967 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1027a96a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a970 jne 0x1027a984 */
  if (!C.zf) goto L_1027a984;
  /* 1027a972 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027a975 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1027a97b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a982 je 0x1027a98e */
  if (C.zf) goto L_1027a98e;
L_1027a984:;
  /* 1027a984 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1027a989 jmp 0x1027aa59 */
  goto L_1027aa59;
L_1027a98e:;
  /* 1027a98e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1027a994 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1027a997 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a99d je 0x1027a9a9 */
  if (C.zf) goto L_1027a9a9;
  /* 1027a99f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1027a9a4 jmp 0x1027aa59 */
  goto L_1027aa59;
L_1027a9a9:;
  /* 1027a9a9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1027a9af add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a9b2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1027a9b8 jmp 0x1027a77d */
  goto L_1027a77d;
L_1027a9bd:;
  /* 1027a9bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027a9c0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1027a9c6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1027a9cc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a9d0 jne 0x1027a9ea */
  if (!C.zf) goto L_1027a9ea;
  /* 1027a9d2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027a9d5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1027a9db mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1027a9e1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027a9e8 je 0x1027a9f1 */
  if (C.zf) goto L_1027a9f1;
L_1027a9ea:;
  /* 1027a9ea mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1027a9ef jmp 0x1027aa59 */
  goto L_1027aa59;
L_1027a9f1:;
  /* 1027a9f1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1027a9f7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027a9fd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1027aa03 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027aa06 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027aa0b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1027aa0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027aa11 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1027aa13 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1027aa16 jmp 0x1027a51a */
  goto L_1027a51a;
L_1027aa1b:;
  /* 1027aa1b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1027aa21 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1027aa27 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027aa29 jne 0x1027aa3c */
  if (!C.zf) goto L_1027aa3c;
  /* 1027aa2b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1027aa31 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1027aa37 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027aa3a je 0x1027aa43 */
  if (C.zf) goto L_1027aa43;
L_1027aa3c:;
  /* 1027aa3c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1027aa41 jmp 0x1027aa59 */
  goto L_1027aa59;
L_1027aa43:;
  /* 1027aa43 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1027aa49 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027aa4c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1027aa52 jmp 0x1027a483 */
  goto L_1027a483;
L_1027aa57:;
  /* 1027aa57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1027aa59:;
  /* 1027aa59 mov esp, ebp */
  ESP = (EBP);
  /* 1027aa5b pop ebp */
  EBP = (pop32());
  /* 1027aa5c ret  */
  ESPCHK(0x1027a440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa60 @ 0x1027aa60 (250 bytes, 92 insns) */
void f_1027aa60(void) {
  FTRACE(0x1027aa60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027aa60 push ebp */
  push32((uint32_t)(EBP));
  /* 1027aa61 mov ebp, esp */
  EBP = (ESP);
  /* 1027aa63 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027aa66 push ebx */
  push32((uint32_t)(EBX));
  /* 1027aa67 push esi */
  push32((uint32_t)(ESI));
  /* 1027aa68 push edi */
  push32((uint32_t)(EDI));
  /* 1027aa69 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1027aa6c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1027aa6f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1027aa72 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1027aa75:;
  /* 1027aa75 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027aa79 jne 0x1027aa99 */
  if (!C.zf) goto L_1027aa99;
  /* 1027aa7b push 0x1029be94 */
  push32((uint32_t)(0x1029be94u));
  /* 1027aa80 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027aa82 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1027aa84 push 0x1029be88 */
  push32((uint32_t)(0x1029be88u));
  /* 1027aa89 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027aa8b call 0x10273c10 */
  push32(0x1027aa90u); f_10273c10();
  /* 1027aa90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027aa93 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027aa96 jne 0x1027aa99 */
  if (!C.zf) goto L_1027aa99;
  /* 1027aa98 int3  */
  x86_unimpl("int3 @ 0x1027aa98");
L_1027aa99:;
  /* 1027aa99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1027aa9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027aa9d jne 0x1027aa75 */
  if (!C.zf) goto L_1027aa75;
L_1027aa9f:;
  /* 1027aa9f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027aaa3 jne 0x1027aac3 */
  if (!C.zf) goto L_1027aac3;
  /* 1027aaa5 push 0x1029be78 */
  push32((uint32_t)(0x1029be78u));
  /* 1027aaaa push 0 */
  push32((uint32_t)(0x0u));
  /* 1027aaac push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1027aaae push 0x1029be88 */
  push32((uint32_t)(0x1029be88u));
  /* 1027aab3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027aab5 call 0x10273c10 */
  push32(0x1027aabau); f_10273c10();
  /* 1027aaba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027aabd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027aac0 jne 0x1027aac3 */
  if (!C.zf) goto L_1027aac3;
  /* 1027aac2 int3  */
  x86_unimpl("int3 @ 0x1027aac2");
L_1027aac3:;
  /* 1027aac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027aac5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027aac7 jne 0x1027aa9f */
  if (!C.zf) goto L_1027aa9f;
  /* 1027aac9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027aacc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1027aad3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027aad6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027aad9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1027aadc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027aadf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027aae2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1027aae4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027aae7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1027aaee mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1027aaf1 push ecx */
  push32((uint32_t)(ECX));
  /* 1027aaf2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027aaf5 push edx */
  push32((uint32_t)(EDX));
  /* 1027aaf6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027aaf9 push eax */
  push32((uint32_t)(EAX));
  /* 1027aafa call 0x1027bae0 */
  push32(0x1027aaffu); f_1027bae0();
  /* 1027aaff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ab02 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1027ab05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027ab08 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1027ab0b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027ab0e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027ab11 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1027ab14 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027ab17 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ab1b jl 0x1027ab3f */
  if ((C.sf!=C.of)) goto L_1027ab3f;
  /* 1027ab1d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027ab20 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1027ab22 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1027ab25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027ab27 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1027ab2d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1027ab30 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027ab33 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1027ab35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ab38 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027ab3b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1027ab3d jmp 0x1027ab50 */
  goto L_1027ab50;
L_1027ab3f:;
  /* 1027ab3f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027ab42 push edx */
  push32((uint32_t)(EDX));
  /* 1027ab43 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027ab45 call 0x1027b860 */
  push32(0x1027ab4au); f_1027b860();
  /* 1027ab4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ab4d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1027ab50:;
  /* 1027ab50 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027ab53 pop edi */
  EDI = (pop32());
  /* 1027ab54 pop esi */
  ESI = (pop32());
  /* 1027ab55 pop ebx */
  EBX = (pop32());
  /* 1027ab56 mov esp, ebp */
  ESP = (EBP);
  /* 1027ab58 pop ebp */
  EBP = (pop32());
  /* 1027ab59 ret  */
  ESPCHK(0x1027aa60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab60 @ 0x1027ab60 (183 bytes, 58 insns) */
void f_1027ab60(void) {
  FTRACE(0x1027ab60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027ab60 push ebp */
  push32((uint32_t)(EBP));
  /* 1027ab61 mov ebp, esp */
  EBP = (ESP);
  /* 1027ab63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027ab66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ab69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ab6c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ab71 ja 0x1027ab8a */
  if ((!C.cf&&!C.zf)) goto L_1027ab8a;
  /* 1027ab73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ab76 mov edx, dword ptr [0x1029ec98] */
  EDX = (r32((uint32_t)(0x1029ec98)));
  /* 1027ab7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027ab7e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1027ab82 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1027ab85 jmp 0x1027ac13 */
  goto L_1027ac13;
L_1027ab8a:;
  /* 1027ab8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ab8d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1027ab90 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1027ab96 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1027ab9c mov edx, dword ptr [0x1029ec98] */
  EDX = (r32((uint32_t)(0x1029ec98)));
  /* 1027aba2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027aba4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1027aba8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1027abad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027abaf je 0x1027abd3 */
  if (C.zf) goto L_1027abd3;
  /* 1027abb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027abb4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1027abb7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1027abbd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1027abc0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1027abc3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1027abc6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1027abca mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1027abd1 jmp 0x1027abe4 */
  goto L_1027abe4;
L_1027abd3:;
  /* 1027abd3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1027abd6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1027abd9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1027abdd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1027abe4:;
  /* 1027abe4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027abe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027abe8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027abea lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1027abed push ecx */
  push32((uint32_t)(ECX));
  /* 1027abee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027abf1 push edx */
  push32((uint32_t)(EDX));
  /* 1027abf2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1027abf5 push eax */
  push32((uint32_t)(EAX));
  /* 1027abf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027abf8 call 0x1027cd80 */
  push32(0x1027abfdu); f_1027cd80();
  /* 1027abfd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ac00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027ac02 jne 0x1027ac08 */
  if (!C.zf) goto L_1027ac08;
  /* 1027ac04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027ac06 jmp 0x1027ac13 */
  goto L_1027ac13;
L_1027ac08:;
  /* 1027ac08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ac0b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027ac10 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1027ac13:;
  /* 1027ac13 mov esp, ebp */
  ESP = (EBP);
  /* 1027ac15 pop ebp */
  EBP = (pop32());
  /* 1027ac16 ret  */
  ESPCHK(0x1027ab60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac20 @ 0x1027ac20 (836 bytes, 238 insns) */
void f_1027ac20(void) {
  FTRACE(0x1027ac20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027ac20 push ebp */
  push32((uint32_t)(EBP));
  /* 1027ac21 mov ebp, esp */
  EBP = (ESP);
  /* 1027ac23 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027ac26 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1027ac28 call 0x10278550 */
  push32(0x1027ac2du); f_10278550();
  /* 1027ac2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ac30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ac33 push eax */
  push32((uint32_t)(EAX));
  /* 1027ac34 call 0x1027af70 */
  push32(0x1027ac39u); f_1027af70();
  /* 1027ac39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ac3c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1027ac3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ac42 cmp ecx, dword ptr [0x102a1c84] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102a1c84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ac48 jne 0x1027ac5b */
  if (!C.zf) goto L_1027ac5b;
  /* 1027ac4a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1027ac4c call 0x102785f0 */
  push32(0x1027ac51u); f_102785f0();
  /* 1027ac51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ac54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027ac56 jmp 0x1027af60 */
  goto L_1027af60;
L_1027ac5b:;
  /* 1027ac5b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ac5f jne 0x1027ac7c */
  if (!C.zf) goto L_1027ac7c;
  /* 1027ac61 call 0x1027b050 */
  push32(0x1027ac66u); f_1027b050();
  /* 1027ac66 call 0x1027b0d0 */
  push32(0x1027ac6bu); f_1027b0d0();
  /* 1027ac6b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1027ac6d call 0x102785f0 */
  push32(0x1027ac72u); f_102785f0();
  /* 1027ac72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ac75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027ac77 jmp 0x1027af60 */
  goto L_1027af60;
L_1027ac7c:;
  /* 1027ac7c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1027ac83 jmp 0x1027ac8e */
  goto L_1027ac8e;
L_1027ac85:;
  /* 1027ac85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ac88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ac8b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1027ac8e:;
  /* 1027ac8e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ac92 jae 0x1027addf */
  if (!C.cf) goto L_1027addf;
  /* 1027ac98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ac9b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027ac9e mov ecx, dword ptr [eax + 0x1029eeb8] */
  ECX = (r32((uint32_t)(EAX + 0x1029eeb8)));
  /* 1027aca4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027aca7 jne 0x1027adda */
  if (!C.zf) goto L_1027adda;
  /* 1027acad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1027acb4 jmp 0x1027acbf */
  goto L_1027acbf;
L_1027acb6:;
  /* 1027acb6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027acb9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027acbc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1027acbf:;
  /* 1027acbf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027acc6 jae 0x1027acd4 */
  if (!C.cf) goto L_1027acd4;
  /* 1027acc8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027accb mov byte ptr [eax + 0x102a1e20], 0 */
  w8((uint32_t)(EAX + 0x102a1e20), (0x0u));
  /* 1027acd2 jmp 0x1027acb6 */
  goto L_1027acb6;
L_1027acd4:;
  /* 1027acd4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1027acdb jmp 0x1027ace6 */
  goto L_1027ace6;
L_1027acdd:;
  /* 1027acdd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027ace0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ace3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1027ace6:;
  /* 1027ace6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027acea jae 0x1027ad67 */
  if (!C.cf) goto L_1027ad67;
  /* 1027acec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027acef imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027acf2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027acf5 lea ecx, [edx + eax*8 + 0x1029eec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1029eec8));
  /* 1027acfc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1027acff jmp 0x1027ad0a */
  goto L_1027ad0a;
L_1027ad01:;
  /* 1027ad01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027ad04 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ad07 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1027ad0a:;
  /* 1027ad0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027ad0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027ad0f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1027ad11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027ad13 je 0x1027ad62 */
  if (C.zf) goto L_1027ad62;
  /* 1027ad15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027ad18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027ad1a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1027ad1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027ad1f je 0x1027ad62 */
  if (C.zf) goto L_1027ad62;
  /* 1027ad21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027ad24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1027ad26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1027ad28 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1027ad2b jmp 0x1027ad36 */
  goto L_1027ad36;
L_1027ad2d:;
  /* 1027ad2d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027ad30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ad33 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1027ad36:;
  /* 1027ad36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027ad39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1027ad3b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1027ad3e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ad41 ja 0x1027ad60 */
  if ((!C.cf&&!C.zf)) goto L_1027ad60;
  /* 1027ad43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027ad46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027ad49 mov dl, byte ptr [eax + 0x102a1e21] */
  DL = (r8((uint32_t)(EAX + 0x102a1e21)));
  /* 1027ad4f or dl, byte ptr [ecx + 0x1029eeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1029eeb0))); DL = (_r); fl_logic(_r,8); }
  /* 1027ad55 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027ad58 mov byte ptr [eax + 0x102a1e21], dl */
  w8((uint32_t)(EAX + 0x102a1e21), (DL));
  /* 1027ad5e jmp 0x1027ad2d */
  goto L_1027ad2d;
L_1027ad60:;
  /* 1027ad60 jmp 0x1027ad01 */
  goto L_1027ad01;
L_1027ad62:;
  /* 1027ad62 jmp 0x1027acdd */
  goto L_1027acdd;
L_1027ad67:;
  /* 1027ad67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ad6a mov dword ptr [0x102a1c84], ecx */
  w32((uint32_t)(0x102a1c84), (ECX));
  /* 1027ad70 mov dword ptr [0x102a1d0c], 1 */
  w32((uint32_t)(0x102a1d0c), (0x1u));
  /* 1027ad7a mov edx, dword ptr [0x102a1c84] */
  EDX = (r32((uint32_t)(0x102a1c84)));
  /* 1027ad80 push edx */
  push32((uint32_t)(EDX));
  /* 1027ad81 call 0x1027afd0 */
  push32(0x1027ad86u); f_1027afd0();
  /* 1027ad86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ad89 mov dword ptr [0x102a1f24], eax */
  w32((uint32_t)(0x102a1f24), (EAX));
  /* 1027ad8e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1027ad95 jmp 0x1027ada0 */
  goto L_1027ada0;
L_1027ad97:;
  /* 1027ad97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027ad9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ad9d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1027ada0:;
  /* 1027ada0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ada4 jae 0x1027adc4 */
  if (!C.cf) goto L_1027adc4;
  /* 1027ada6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ada9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027adac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027adaf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027adb2 mov cx, word ptr [ecx + eax*2 + 0x1029eebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1029eebc)));
  /* 1027adba mov word ptr [edx*2 + 0x102a1d00], cx */
  w16((uint32_t)(EDX*2 + 0x102a1d00), (CX));
  /* 1027adc2 jmp 0x1027ad97 */
  goto L_1027ad97;
L_1027adc4:;
  /* 1027adc4 call 0x1027b0d0 */
  push32(0x1027adc9u); f_1027b0d0();
  /* 1027adc9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1027adcb call 0x102785f0 */
  push32(0x1027add0u); f_102785f0();
  /* 1027add0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027add3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027add5 jmp 0x1027af60 */
  goto L_1027af60;
L_1027adda:;
  /* 1027adda jmp 0x1027ac85 */
  goto L_1027ac85;
L_1027addf:;
  /* 1027addf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1027ade2 push edx */
  push32((uint32_t)(EDX));
  /* 1027ade3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ade6 push eax */
  push32((uint32_t)(EAX));
  /* 1027ade7 call dword ptr [0x102a32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32d8))), 0x1027adedu);
  /* 1027aded cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027adf0 jne 0x1027af32 */
  if (!C.zf) goto L_1027af32;
  /* 1027adf6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1027adfd jmp 0x1027ae08 */
  goto L_1027ae08;
L_1027adff:;
  /* 1027adff mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027ae02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ae05 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1027ae08:;
  /* 1027ae08 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ae0f jae 0x1027ae1d */
  if (!C.cf) goto L_1027ae1d;
  /* 1027ae11 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027ae14 mov byte ptr [edx + 0x102a1e20], 0 */
  w8((uint32_t)(EDX + 0x102a1e20), (0x0u));
  /* 1027ae1b jmp 0x1027adff */
  goto L_1027adff;
L_1027ae1d:;
  /* 1027ae1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ae20 mov dword ptr [0x102a1c84], eax */
  w32((uint32_t)(0x102a1c84), (EAX));
  /* 1027ae25 mov dword ptr [0x102a1f24], 0 */
  w32((uint32_t)(0x102a1f24), (0x0u));
  /* 1027ae2f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ae33 jbe 0x1027aeee */
  if ((C.cf||C.zf)) goto L_1027aeee;
  /* 1027ae39 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1027ae3c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1027ae3f jmp 0x1027ae4a */
  goto L_1027ae4a;
L_1027ae41:;
  /* 1027ae41 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027ae44 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ae47 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1027ae4a:;
  /* 1027ae4a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027ae4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027ae4f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1027ae51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027ae53 je 0x1027ae9c */
  if (C.zf) goto L_1027ae9c;
  /* 1027ae55 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027ae58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027ae5a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1027ae5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027ae5f je 0x1027ae9c */
  if (C.zf) goto L_1027ae9c;
  /* 1027ae61 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027ae64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1027ae66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1027ae68 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1027ae6b jmp 0x1027ae76 */
  goto L_1027ae76;
L_1027ae6d:;
  /* 1027ae6d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027ae70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ae73 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1027ae76:;
  /* 1027ae76 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027ae79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1027ae7b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1027ae7e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ae81 ja 0x1027ae9a */
  if ((!C.cf&&!C.zf)) goto L_1027ae9a;
  /* 1027ae83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027ae86 mov cl, byte ptr [eax + 0x102a1e21] */
  CL = (r8((uint32_t)(EAX + 0x102a1e21)));
  /* 1027ae8c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1027ae8f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027ae92 mov byte ptr [edx + 0x102a1e21], cl */
  w8((uint32_t)(EDX + 0x102a1e21), (CL));
  /* 1027ae98 jmp 0x1027ae6d */
  goto L_1027ae6d;
L_1027ae9a:;
  /* 1027ae9a jmp 0x1027ae41 */
  goto L_1027ae41;
L_1027ae9c:;
  /* 1027ae9c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1027aea3 jmp 0x1027aeae */
  goto L_1027aeae;
L_1027aea5:;
  /* 1027aea5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027aea8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027aeab mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1027aeae:;
  /* 1027aeae cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027aeb5 jae 0x1027aece */
  if (!C.cf) goto L_1027aece;
  /* 1027aeb7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027aeba mov dl, byte ptr [ecx + 0x102a1e21] */
  DL = (r8((uint32_t)(ECX + 0x102a1e21)));
  /* 1027aec0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1027aec3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027aec6 mov byte ptr [eax + 0x102a1e21], dl */
  w8((uint32_t)(EAX + 0x102a1e21), (DL));
  /* 1027aecc jmp 0x1027aea5 */
  goto L_1027aea5;
L_1027aece:;
  /* 1027aece mov ecx, dword ptr [0x102a1c84] */
  ECX = (r32((uint32_t)(0x102a1c84)));
  /* 1027aed4 push ecx */
  push32((uint32_t)(ECX));
  /* 1027aed5 call 0x1027afd0 */
  push32(0x1027aedau); f_1027afd0();
  /* 1027aeda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027aedd mov dword ptr [0x102a1f24], eax */
  w32((uint32_t)(0x102a1f24), (EAX));
  /* 1027aee2 mov dword ptr [0x102a1d0c], 1 */
  w32((uint32_t)(0x102a1d0c), (0x1u));
  /* 1027aeec jmp 0x1027aef8 */
  goto L_1027aef8;
L_1027aeee:;
  /* 1027aeee mov dword ptr [0x102a1d0c], 0 */
  w32((uint32_t)(0x102a1d0c), (0x0u));
L_1027aef8:;
  /* 1027aef8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1027aeff jmp 0x1027af0a */
  goto L_1027af0a;
L_1027af01:;
  /* 1027af01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027af04 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027af07 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1027af0a:;
  /* 1027af0a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027af0e jae 0x1027af1f */
  if (!C.cf) goto L_1027af1f;
  /* 1027af10 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027af13 mov word ptr [eax*2 + 0x102a1d00], 0 */
  w16((uint32_t)(EAX*2 + 0x102a1d00), (0x0u));
  /* 1027af1d jmp 0x1027af01 */
  goto L_1027af01;
L_1027af1f:;
  /* 1027af1f call 0x1027b0d0 */
  push32(0x1027af24u); f_1027b0d0();
  /* 1027af24 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1027af26 call 0x102785f0 */
  push32(0x1027af2bu); f_102785f0();
  /* 1027af2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027af2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027af30 jmp 0x1027af60 */
  goto L_1027af60;
L_1027af32:;
  /* 1027af32 cmp dword ptr [0x102a0798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027af39 je 0x1027af53 */
  if (C.zf) goto L_1027af53;
  /* 1027af3b call 0x1027b050 */
  push32(0x1027af40u); f_1027b050();
  /* 1027af40 call 0x1027b0d0 */
  push32(0x1027af45u); f_1027b0d0();
  /* 1027af45 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1027af47 call 0x102785f0 */
  push32(0x1027af4cu); f_102785f0();
  /* 1027af4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027af4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027af51 jmp 0x1027af60 */
  goto L_1027af60;
L_1027af53:;
  /* 1027af53 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1027af55 call 0x102785f0 */
  push32(0x1027af5au); f_102785f0();
  /* 1027af5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027af5d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1027af60:;
  /* 1027af60 mov esp, ebp */
  ESP = (EBP);
  /* 1027af62 pop ebp */
  EBP = (pop32());
  /* 1027af63 ret  */
  ESPCHK(0x1027ac20u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1027af70 (89 bytes, 21 insns) */
void f_1027af70(void) {
  FTRACE(0x1027af70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027af70 push ebp */
  push32((uint32_t)(EBP));
  /* 1027af71 mov ebp, esp */
  EBP = (ESP);
  /* 1027af73 mov dword ptr [0x102a0798], 0 */
  w32((uint32_t)(0x102a0798), (0x0u));
  /* 1027af7d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027af81 jne 0x1027af95 */
  if (!C.zf) goto L_1027af95;
  /* 1027af83 mov dword ptr [0x102a0798], 1 */
  w32((uint32_t)(0x102a0798), (0x1u));
  /* 1027af8d call dword ptr [0x102a32d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32d0))), 0x1027af93u);
  /* 1027af93 jmp 0x1027afc7 */
  goto L_1027afc7;
L_1027af95:;
  /* 1027af95 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027af99 jne 0x1027afad */
  if (!C.zf) goto L_1027afad;
  /* 1027af9b mov dword ptr [0x102a0798], 1 */
  w32((uint32_t)(0x102a0798), (0x1u));
  /* 1027afa5 call dword ptr [0x102a32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32e0))), 0x1027afabu);
  /* 1027afab jmp 0x1027afc7 */
  goto L_1027afc7;
L_1027afad:;
  /* 1027afad cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027afb1 jne 0x1027afc4 */
  if (!C.zf) goto L_1027afc4;
  /* 1027afb3 mov dword ptr [0x102a0798], 1 */
  w32((uint32_t)(0x102a0798), (0x1u));
  /* 1027afbd mov eax, dword ptr [0x102a07b8] */
  EAX = (r32((uint32_t)(0x102a07b8)));
  /* 1027afc2 jmp 0x1027afc7 */
  goto L_1027afc7;
L_1027afc4:;
  /* 1027afc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1027afc7:;
  /* 1027afc7 pop ebp */
  EBP = (pop32());
  /* 1027afc8 ret  */
  ESPCHK(0x1027af70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afd0 @ 0x1027afd0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1027afd0(void) {
  FTRACE(0x1027afd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027afd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027afd1 mov ebp, esp */
  EBP = (ESP);
  /* 1027afd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1027afd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027afd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027afda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027afdd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027afe3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1027afe6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027afea ja 0x1027b01a */
  if ((!C.cf&&!C.zf)) goto L_1027b01a;
  /* 1027afec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027afef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1027aff1 mov dl, byte ptr [eax + 0x1027b034] */
  DL = (r8((uint32_t)(EAX + 0x1027b034)));
  /* 1027aff7 jmp dword ptr [edx*4 + 0x1027b020] */
  switch (EDX) {
    case 0: goto L_1027affe;
    case 1: goto L_1027b005;
    case 2: goto L_1027b00c;
    case 3: goto L_1027b013;
    case 4: goto L_1027b01a;
    default: x86_unimpl("switch@0x1027aff7 out of table"); return;
  }
L_1027affe:;
  /* 1027affe mov eax, 0x411 */
  EAX = (0x411u);
  /* 1027b003 jmp 0x1027b01c */
  goto L_1027b01c;
L_1027b005:;
  /* 1027b005 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1027b00a jmp 0x1027b01c */
  goto L_1027b01c;
L_1027b00c:;
  /* 1027b00c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1027b011 jmp 0x1027b01c */
  goto L_1027b01c;
L_1027b013:;
  /* 1027b013 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1027b018 jmp 0x1027b01c */
  goto L_1027b01c;
L_1027b01a:;
  /* 1027b01a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1027b01c:;
  /* 1027b01c mov esp, ebp */
  ESP = (EBP);
  /* 1027b01e pop ebp */
  EBP = (pop32());
  /* 1027b01f ret  */
  ESPCHK(0x1027afd0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1027b050 (116 bytes, 29 insns) */
void f_1027b050(void) {
  FTRACE(0x1027b050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027b050 push ebp */
  push32((uint32_t)(EBP));
  /* 1027b051 mov ebp, esp */
  EBP = (ESP);
  /* 1027b053 push ecx */
  push32((uint32_t)(ECX));
  /* 1027b054 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1027b05b jmp 0x1027b066 */
  goto L_1027b066;
L_1027b05d:;
  /* 1027b05d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027b060 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b063 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1027b066:;
  /* 1027b066 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b06d jge 0x1027b07b */
  if ((C.sf==C.of)) goto L_1027b07b;
  /* 1027b06f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027b072 mov byte ptr [ecx + 0x102a1e20], 0 */
  w8((uint32_t)(ECX + 0x102a1e20), (0x0u));
  /* 1027b079 jmp 0x1027b05d */
  goto L_1027b05d;
L_1027b07b:;
  /* 1027b07b mov dword ptr [0x102a1c84], 0 */
  w32((uint32_t)(0x102a1c84), (0x0u));
  /* 1027b085 mov dword ptr [0x102a1d0c], 0 */
  w32((uint32_t)(0x102a1d0c), (0x0u));
  /* 1027b08f mov dword ptr [0x102a1f24], 0 */
  w32((uint32_t)(0x102a1f24), (0x0u));
  /* 1027b099 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1027b0a0 jmp 0x1027b0ab */
  goto L_1027b0ab;
L_1027b0a2:;
  /* 1027b0a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027b0a5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b0a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1027b0ab:;
  /* 1027b0ab cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b0af jge 0x1027b0c0 */
  if ((C.sf==C.of)) goto L_1027b0c0;
  /* 1027b0b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027b0b4 mov word ptr [eax*2 + 0x102a1d00], 0 */
  w16((uint32_t)(EAX*2 + 0x102a1d00), (0x0u));
  /* 1027b0be jmp 0x1027b0a2 */
  goto L_1027b0a2;
L_1027b0c0:;
  /* 1027b0c0 mov esp, ebp */
  ESP = (EBP);
  /* 1027b0c2 pop ebp */
  EBP = (pop32());
  /* 1027b0c3 ret  */
  ESPCHK(0x1027b050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0d0 @ 0x1027b0d0 (770 bytes, 175 insns) */
void f_1027b0d0(void) {
  FTRACE(0x1027b0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027b0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027b0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1027b0d3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027b0d9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1027b0df push eax */
  push32((uint32_t)(EAX));
  /* 1027b0e0 mov ecx, dword ptr [0x102a1c84] */
  ECX = (r32((uint32_t)(0x102a1c84)));
  /* 1027b0e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1027b0e7 call dword ptr [0x102a32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32d8))), 0x1027b0edu);
  /* 1027b0ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b0f0 jne 0x1027b309 */
  if (!C.zf) goto L_1027b309;
  /* 1027b0f6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1027b100 jmp 0x1027b111 */
  goto L_1027b111;
L_1027b102:;
  /* 1027b102 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b108 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b10b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1027b111:;
  /* 1027b111 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b11b jae 0x1027b132 */
  if (!C.cf) goto L_1027b132;
  /* 1027b11d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b123 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1027b129 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1027b130 jmp 0x1027b102 */
  goto L_1027b102;
L_1027b132:;
  /* 1027b132 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1027b139 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1027b13f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1027b142 jmp 0x1027b14d */
  goto L_1027b14d;
L_1027b144:;
  /* 1027b144 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027b147 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b14a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1027b14d:;
  /* 1027b14d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027b150 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1027b152 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1027b154 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027b156 je 0x1027b198 */
  if (C.zf) goto L_1027b198;
  /* 1027b158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027b15b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027b15d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1027b15f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1027b165 jmp 0x1027b176 */
  goto L_1027b176;
L_1027b167:;
  /* 1027b167 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b16d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b170 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1027b176:;
  /* 1027b176 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027b179 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027b17b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1027b17e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b184 ja 0x1027b196 */
  if ((!C.cf&&!C.zf)) goto L_1027b196;
  /* 1027b186 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b18c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1027b194 jmp 0x1027b167 */
  goto L_1027b167;
L_1027b196:;
  /* 1027b196 jmp 0x1027b144 */
  goto L_1027b144;
L_1027b198:;
  /* 1027b198 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027b19a mov eax, dword ptr [0x102a1f24] */
  EAX = (r32((uint32_t)(0x102a1f24)));
  /* 1027b19f push eax */
  push32((uint32_t)(EAX));
  /* 1027b1a0 mov ecx, dword ptr [0x102a1c84] */
  ECX = (r32((uint32_t)(0x102a1c84)));
  /* 1027b1a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1027b1a7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1027b1ad push edx */
  push32((uint32_t)(EDX));
  /* 1027b1ae push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1027b1b3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1027b1b9 push eax */
  push32((uint32_t)(EAX));
  /* 1027b1ba push 1 */
  push32((uint32_t)(0x1u));
  /* 1027b1bc call 0x1027cd80 */
  push32(0x1027b1c1u); f_1027cd80();
  /* 1027b1c1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b1c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027b1c6 mov ecx, dword ptr [0x102a1c84] */
  ECX = (r32((uint32_t)(0x102a1c84)));
  /* 1027b1cc push ecx */
  push32((uint32_t)(ECX));
  /* 1027b1cd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1027b1d2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1027b1d8 push edx */
  push32((uint32_t)(EDX));
  /* 1027b1d9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1027b1de lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1027b1e4 push eax */
  push32((uint32_t)(EAX));
  /* 1027b1e5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1027b1ea mov ecx, dword ptr [0x102a1f24] */
  ECX = (r32((uint32_t)(0x102a1f24)));
  /* 1027b1f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1027b1f1 call 0x1027cf40 */
  push32(0x1027b1f6u); f_1027cf40();
  /* 1027b1f6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b1f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027b1fb mov edx, dword ptr [0x102a1c84] */
  EDX = (r32((uint32_t)(0x102a1c84)));
  /* 1027b201 push edx */
  push32((uint32_t)(EDX));
  /* 1027b202 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1027b207 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1027b20d push eax */
  push32((uint32_t)(EAX));
  /* 1027b20e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1027b213 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1027b219 push ecx */
  push32((uint32_t)(ECX));
  /* 1027b21a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1027b21f mov edx, dword ptr [0x102a1f24] */
  EDX = (r32((uint32_t)(0x102a1f24)));
  /* 1027b225 push edx */
  push32((uint32_t)(EDX));
  /* 1027b226 call 0x1027cf40 */
  push32(0x1027b22bu); f_1027cf40();
  /* 1027b22b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b22e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1027b238 jmp 0x1027b249 */
  goto L_1027b249;
L_1027b23a:;
  /* 1027b23a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b240 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b243 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1027b249:;
  /* 1027b249 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b253 jae 0x1027b304 */
  if (!C.cf) goto L_1027b304;
  /* 1027b259 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b25f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1027b261 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1027b269 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1027b26c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027b26e je 0x1027b2a6 */
  if (C.zf) goto L_1027b2a6;
  /* 1027b270 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b276 mov cl, byte ptr [eax + 0x102a1e21] */
  CL = (r8((uint32_t)(EAX + 0x102a1e21)));
  /* 1027b27c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1027b27f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b285 mov byte ptr [edx + 0x102a1e21], cl */
  w8((uint32_t)(EDX + 0x102a1e21), (CL));
  /* 1027b28b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b291 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b297 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1027b29e mov byte ptr [eax + 0x102a1d20], dl */
  w8((uint32_t)(EAX + 0x102a1d20), (DL));
  /* 1027b2a4 jmp 0x1027b2ff */
  goto L_1027b2ff;
L_1027b2a6:;
  /* 1027b2a6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b2ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027b2ae mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1027b2b6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1027b2b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027b2bb je 0x1027b2f2 */
  if (C.zf) goto L_1027b2f2;
  /* 1027b2bd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b2c3 mov al, byte ptr [edx + 0x102a1e21] */
  AL = (r8((uint32_t)(EDX + 0x102a1e21)));
  /* 1027b2c9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1027b2cb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b2d1 mov byte ptr [ecx + 0x102a1e21], al */
  w8((uint32_t)(ECX + 0x102a1e21), (AL));
  /* 1027b2d7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b2dd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b2e3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1027b2ea mov byte ptr [edx + 0x102a1d20], cl */
  w8((uint32_t)(EDX + 0x102a1d20), (CL));
  /* 1027b2f0 jmp 0x1027b2ff */
  goto L_1027b2ff;
L_1027b2f2:;
  /* 1027b2f2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b2f8 mov byte ptr [edx + 0x102a1d20], 0 */
  w8((uint32_t)(EDX + 0x102a1d20), (0x0u));
L_1027b2ff:;
  /* 1027b2ff jmp 0x1027b23a */
  goto L_1027b23a;
L_1027b304:;
  /* 1027b304 jmp 0x1027b3ce */
  goto L_1027b3ce;
L_1027b309:;
  /* 1027b309 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1027b313 jmp 0x1027b324 */
  goto L_1027b324;
L_1027b315:;
  /* 1027b315 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b31b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b31e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1027b324:;
  /* 1027b324 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b32e jae 0x1027b3ce */
  if (!C.cf) goto L_1027b3ce;
  /* 1027b334 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b33b jb 0x1027b378 */
  if (C.cf) goto L_1027b378;
  /* 1027b33d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b344 ja 0x1027b378 */
  if ((!C.cf&&!C.zf)) goto L_1027b378;
  /* 1027b346 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b34c mov dl, byte ptr [ecx + 0x102a1e21] */
  DL = (r8((uint32_t)(ECX + 0x102a1e21)));
  /* 1027b352 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1027b355 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b35b mov byte ptr [eax + 0x102a1e21], dl */
  w8((uint32_t)(EAX + 0x102a1e21), (DL));
  /* 1027b361 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b367 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b36a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b370 mov byte ptr [edx + 0x102a1d20], cl */
  w8((uint32_t)(EDX + 0x102a1d20), (CL));
  /* 1027b376 jmp 0x1027b3c9 */
  goto L_1027b3c9;
L_1027b378:;
  /* 1027b378 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b37f jb 0x1027b3bc */
  if (C.cf) goto L_1027b3bc;
  /* 1027b381 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b388 ja 0x1027b3bc */
  if ((!C.cf&&!C.zf)) goto L_1027b3bc;
  /* 1027b38a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b390 mov cl, byte ptr [eax + 0x102a1e21] */
  CL = (r8((uint32_t)(EAX + 0x102a1e21)));
  /* 1027b396 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1027b399 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b39f mov byte ptr [edx + 0x102a1e21], cl */
  w8((uint32_t)(EDX + 0x102a1e21), (CL));
  /* 1027b3a5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b3ab sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027b3ae mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b3b4 mov byte ptr [ecx + 0x102a1d20], al */
  w8((uint32_t)(ECX + 0x102a1d20), (AL));
  /* 1027b3ba jmp 0x1027b3c9 */
  goto L_1027b3c9;
L_1027b3bc:;
  /* 1027b3bc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1027b3c2 mov byte ptr [edx + 0x102a1d20], 0 */
  w8((uint32_t)(EDX + 0x102a1d20), (0x0u));
L_1027b3c9:;
  /* 1027b3c9 jmp 0x1027b315 */
  goto L_1027b315;
L_1027b3ce:;
  /* 1027b3ce mov esp, ebp */
  ESP = (EBP);
  /* 1027b3d0 pop ebp */
  EBP = (pop32());
  /* 1027b3d1 ret  */
  ESPCHK(0x1027b0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3e0 @ 0x1027b3e0 (23 bytes, 9 insns) */
void f_1027b3e0(void) {
  FTRACE(0x1027b3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027b3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027b3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1027b3e3 cmp dword ptr [0x102a1d0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a1d0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b3ea je 0x1027b3f3 */
  if (C.zf) goto L_1027b3f3;
  /* 1027b3ec mov eax, dword ptr [0x102a1c84] */
  EAX = (r32((uint32_t)(0x102a1c84)));
  /* 1027b3f1 jmp 0x1027b3f5 */
  goto L_1027b3f5;
L_1027b3f3:;
  /* 1027b3f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1027b3f5:;
  /* 1027b3f5 pop ebp */
  EBP = (pop32());
  /* 1027b3f6 ret  */
  ESPCHK(0x1027b3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b400 @ 0x1027b400 (34 bytes, 10 insns) */
void f_1027b400(void) {
  FTRACE(0x1027b400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027b400 push ebp */
  push32((uint32_t)(EBP));
  /* 1027b401 mov ebp, esp */
  EBP = (ESP);
  /* 1027b403 cmp dword ptr [0x102a20d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a20d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b40a jne 0x1027b420 */
  if (!C.zf) goto L_1027b420;
  /* 1027b40c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1027b40e call 0x1027ac20 */
  push32(0x1027b413u); f_1027ac20();
  /* 1027b413 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b416 mov dword ptr [0x102a20d0], 1 */
  w32((uint32_t)(0x102a20d0), (0x1u));
L_1027b420:;
  /* 1027b420 pop ebp */
  EBP = (pop32());
  /* 1027b421 ret  */
  ESPCHK(0x1027b400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b430 @ 0x1027b430 (664 bytes, 263 insns) [15 switch table(s)] */
void f_1027b430(void) {
  FTRACE(0x1027b430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027b430 push ebp */
  push32((uint32_t)(EBP));
  /* 1027b431 mov ebp, esp */
  EBP = (ESP);
  /* 1027b433 push edi */
  push32((uint32_t)(EDI));
  /* 1027b434 push esi */
  push32((uint32_t)(ESI));
  /* 1027b435 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1027b438 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027b43b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1027b43e mov eax, ecx */
  EAX = (ECX);
  /* 1027b440 mov edx, ecx */
  EDX = (ECX);
  /* 1027b442 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b444 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b446 jbe 0x1027b450 */
  if ((C.cf||C.zf)) goto L_1027b450;
  /* 1027b448 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b44a jb 0x1027b5c8 */
  if (C.cf) goto L_1027b5c8;
L_1027b450:;
  /* 1027b450 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1027b456 jne 0x1027b46c */
  if (!C.zf) goto L_1027b46c;
  /* 1027b458 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1027b45b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1027b45e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b461 jb 0x1027b48c */
  if (C.cf) goto L_1027b48c;
  /* 1027b463 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1027b465 jmp dword ptr [edx*4 + 0x1027b578] */
  switch (EDX) {
    case 0: goto L_1027b588;
    case 1: goto L_1027b590;
    case 2: goto L_1027b59c;
    case 3: goto L_1027b5b0;
    default: x86_unimpl("switch@0x1027b465 out of table"); return;
  }
L_1027b46c:;
  /* 1027b46c mov eax, edi */
  EAX = (EDI);
  /* 1027b46e mov edx, 3 */
  EDX = (0x3u);
  /* 1027b473 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027b476 jb 0x1027b484 */
  if (C.cf) goto L_1027b484;
  /* 1027b478 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1027b47b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b47d jmp dword ptr [eax*4 + 0x1027b490] */
  switch (EAX) {
    case 1: goto L_1027b4a0;
    case 2: goto L_1027b4cc;
    case 3: goto L_1027b4f0;
    default: x86_unimpl("switch@0x1027b47d out of table"); return;
  }
L_1027b484:;
  /* 1027b484 jmp dword ptr [ecx*4 + 0x1027b588] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1027b588)))); return;
  /* 1027b48b nop  */
  /* nop */
L_1027b48c:;
  /* 1027b48c jmp dword ptr [ecx*4 + 0x1027b50c] */
  switch (ECX) {
    case 0: goto L_1027b56f;
    case 1: goto L_1027b55c;
    case 2: goto L_1027b554;
    case 3: goto L_1027b54c;
    case 4: goto L_1027b544;
    case 5: goto L_1027b53c;
    case 6: goto L_1027b534;
    case 7: goto L_1027b52c;
    default: x86_unimpl("switch@0x1027b48c out of table"); return;
  }
  /* 1027b493 nop  */
  /* nop */
L_1027b4a0:;
  /* 1027b4a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1027b4a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1027b4a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1027b4a6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1027b4a9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1027b4ac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1027b4af shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1027b4b2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1027b4b5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b4b8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b4bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b4be jb 0x1027b48c */
  if (C.cf) goto L_1027b48c;
  /* 1027b4c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1027b4c2 jmp dword ptr [edx*4 + 0x1027b578] */
  switch (EDX) {
    case 0: goto L_1027b588;
    case 1: goto L_1027b590;
    case 2: goto L_1027b59c;
    case 3: goto L_1027b5b0;
    default: x86_unimpl("switch@0x1027b4c2 out of table"); return;
  }
  /* 1027b4c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1027b4cc:;
  /* 1027b4cc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1027b4ce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1027b4d0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1027b4d2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1027b4d5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1027b4d8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1027b4db add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b4de add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b4e1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b4e4 jb 0x1027b48c */
  if (C.cf) goto L_1027b48c;
  /* 1027b4e6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1027b4e8 jmp dword ptr [edx*4 + 0x1027b578] */
  switch (EDX) {
    case 0: goto L_1027b588;
    case 1: goto L_1027b590;
    case 2: goto L_1027b59c;
    case 3: goto L_1027b5b0;
    default: x86_unimpl("switch@0x1027b4e8 out of table"); return;
  }
  /* 1027b4ef nop  */
  /* nop */
L_1027b4f0:;
  /* 1027b4f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1027b4f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1027b4f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1027b4f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1027b4f7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1027b4fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1027b4fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b4fe jb 0x1027b48c */
  if (C.cf) goto L_1027b48c;
  /* 1027b500 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1027b502 jmp dword ptr [edx*4 + 0x1027b578] */
  switch (EDX) {
    case 0: goto L_1027b588;
    case 1: goto L_1027b590;
    case 2: goto L_1027b59c;
    case 3: goto L_1027b5b0;
    default: x86_unimpl("switch@0x1027b502 out of table"); return;
  }
  /* 1027b509 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1027b52c:;
  /* 1027b52c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1027b530 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1027b534:;
  /* 1027b534 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1027b538 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1027b53c:;
  /* 1027b53c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1027b540 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1027b544:;
  /* 1027b544 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1027b548 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1027b54c:;
  /* 1027b54c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1027b550 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1027b554:;
  /* 1027b554 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1027b558 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1027b55c:;
  /* 1027b55c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1027b560 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1027b564 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1027b56b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b56d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1027b56f:;
  /* 1027b56f jmp dword ptr [edx*4 + 0x1027b578] */
  switch (EDX) {
    case 0: goto L_1027b588;
    case 1: goto L_1027b590;
    case 2: goto L_1027b59c;
    case 3: goto L_1027b5b0;
    default: x86_unimpl("switch@0x1027b56f out of table"); return;
  }
  /* 1027b576 mov edi, edi */
  EDI = (EDI);
L_1027b588:;
  /* 1027b588 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027b58b pop esi */
  ESI = (pop32());
  /* 1027b58c pop edi */
  EDI = (pop32());
  /* 1027b58d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1027b58e ret  */
  ESPCHK(0x1027b430u, _esp0);
  ESP += 4; return;
  /* 1027b58f nop  */
  /* nop */
L_1027b590:;
  /* 1027b590 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1027b592 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1027b594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027b597 pop esi */
  ESI = (pop32());
  /* 1027b598 pop edi */
  EDI = (pop32());
  /* 1027b599 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1027b59a ret  */
  ESPCHK(0x1027b430u, _esp0);
  ESP += 4; return;
  /* 1027b59b nop  */
  /* nop */
L_1027b59c:;
  /* 1027b59c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1027b59e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1027b5a0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1027b5a3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1027b5a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027b5a9 pop esi */
  ESI = (pop32());
  /* 1027b5aa pop edi */
  EDI = (pop32());
  /* 1027b5ab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1027b5ac ret  */
  ESPCHK(0x1027b430u, _esp0);
  ESP += 4; return;
  /* 1027b5ad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1027b5b0:;
  /* 1027b5b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1027b5b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1027b5b4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1027b5b7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1027b5ba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1027b5bd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1027b5c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027b5c3 pop esi */
  ESI = (pop32());
  /* 1027b5c4 pop edi */
  EDI = (pop32());
  /* 1027b5c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1027b5c6 ret  */
  ESPCHK(0x1027b430u, _esp0);
  ESP += 4; return;
  /* 1027b5c7 nop  */
  /* nop */
L_1027b5c8:;
  /* 1027b5c8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1027b5cc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1027b5d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1027b5d6 jne 0x1027b5fc */
  if (!C.zf) goto L_1027b5fc;
  /* 1027b5d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1027b5db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1027b5de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b5e1 jb 0x1027b5f0 */
  if (C.cf) goto L_1027b5f0;
  /* 1027b5e3 std  */
  C.df=1;
  /* 1027b5e4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1027b5e6 cld  */
  C.df=0;
  /* 1027b5e7 jmp dword ptr [edx*4 + 0x1027b710] */
  switch (EDX) {
    case 0: goto L_1027b720;
    case 1: goto L_1027b728;
    case 2: goto L_1027b738;
    case 3: goto L_1027b74c;
    default: x86_unimpl("switch@0x1027b5e7 out of table"); return;
  }
  /* 1027b5ee mov edi, edi */
  EDI = (EDI);
L_1027b5f0:;
  /* 1027b5f0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1027b5f2 jmp dword ptr [ecx*4 + 0x1027b6c0] */
  switch (ECX) {
    case 0: goto L_1027b707;
    default: x86_unimpl("switch@0x1027b5f2 out of table"); return;
  }
  /* 1027b5f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1027b5fc:;
  /* 1027b5fc mov eax, edi */
  EAX = (EDI);
  /* 1027b5fe mov edx, 3 */
  EDX = (0x3u);
  /* 1027b603 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b606 jb 0x1027b614 */
  if (C.cf) goto L_1027b614;
  /* 1027b608 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1027b60b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027b60d jmp dword ptr [eax*4 + 0x1027b618] */
  switch (EAX) {
    case 1: goto L_1027b628;
    case 2: goto L_1027b648;
    case 3: goto L_1027b670;
    default: x86_unimpl("switch@0x1027b60d out of table"); return;
  }
L_1027b614:;
  /* 1027b614 jmp dword ptr [ecx*4 + 0x1027b710] */
  switch (ECX) {
    case 0: goto L_1027b720;
    case 1: goto L_1027b728;
    case 2: goto L_1027b738;
    case 3: goto L_1027b74c;
    default: x86_unimpl("switch@0x1027b614 out of table"); return;
  }
  /* 1027b61b nop  */
  /* nop */
L_1027b628:;
  /* 1027b628 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1027b62b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1027b62d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1027b630 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1027b631 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1027b634 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1027b635 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b638 jb 0x1027b5f0 */
  if (C.cf) goto L_1027b5f0;
  /* 1027b63a std  */
  C.df=1;
  /* 1027b63b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1027b63d cld  */
  C.df=0;
  /* 1027b63e jmp dword ptr [edx*4 + 0x1027b710] */
  switch (EDX) {
    case 0: goto L_1027b720;
    case 1: goto L_1027b728;
    case 2: goto L_1027b738;
    case 3: goto L_1027b74c;
    default: x86_unimpl("switch@0x1027b63e out of table"); return;
  }
  /* 1027b645 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1027b648:;
  /* 1027b648 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1027b64b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1027b64d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1027b650 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1027b653 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1027b656 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1027b659 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027b65c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027b65f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b662 jb 0x1027b5f0 */
  if (C.cf) goto L_1027b5f0;
  /* 1027b664 std  */
  C.df=1;
  /* 1027b665 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1027b667 cld  */
  C.df=0;
  /* 1027b668 jmp dword ptr [edx*4 + 0x1027b710] */
  switch (EDX) {
    case 0: goto L_1027b720;
    case 1: goto L_1027b728;
    case 2: goto L_1027b738;
    case 3: goto L_1027b74c;
    default: x86_unimpl("switch@0x1027b668 out of table"); return;
  }
  /* 1027b66f nop  */
  /* nop */
L_1027b670:;
  /* 1027b670 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1027b673 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1027b675 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1027b678 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1027b67b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1027b67e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1027b681 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1027b684 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1027b687 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027b68a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027b68d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b690 jb 0x1027b5f0 */
  if (C.cf) goto L_1027b5f0;
  /* 1027b696 std  */
  C.df=1;
  /* 1027b697 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1027b699 cld  */
  C.df=0;
  /* 1027b69a jmp dword ptr [edx*4 + 0x1027b710] */
  switch (EDX) {
    case 0: goto L_1027b720;
    case 1: goto L_1027b728;
    case 2: goto L_1027b738;
    case 3: goto L_1027b74c;
    default: x86_unimpl("switch@0x1027b69a out of table"); return;
  }
  /* 1027b6a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1027b6a4 les esi, ptr [esi - 0x4933efd9] */
  x86_unimpl("les @ 0x1027b6a4");
  /* 1027b6aa daa  */
  x86_unimpl("daa @ 0x1027b6aa");
  /* 1027b6ab adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1027b6ad mov dh, 0x27 */
  C.d.b.h = (0x27u);
  /* 1027b6af adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1027b6b1 mov dh, 0x27 */
  C.d.b.h = (0x27u);
  /* 1027b6b3 adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1027b6b5 mov dh, 0x27 */
  C.d.b.h = (0x27u);
  /* 1027b6b7 adc ah, ch */
  { uint32_t _a=(AH),_b=(C.c.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1027b6b9 mov dh, 0x27 */
  C.d.b.h = (0x27u);
  /* 1027b6bb adc ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1027b6bd mov dh, 0x27 */
  C.d.b.h = (0x27u);
  /* 1027b6c4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1027b6c8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1027b6cc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1027b6d0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1027b6d4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1027b6d8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1027b6dc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1027b6e0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1027b6e4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1027b6e8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1027b6ec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1027b6f0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1027b6f4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1027b6f8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1027b6fc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1027b703 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b705 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1027b707:;
  /* 1027b707 jmp dword ptr [edx*4 + 0x1027b710] */
  switch (EDX) {
    case 0: goto L_1027b720;
    case 1: goto L_1027b728;
    case 2: goto L_1027b738;
    case 3: goto L_1027b74c;
    default: x86_unimpl("switch@0x1027b707 out of table"); return;
  }
  /* 1027b70e mov edi, edi */
  EDI = (EDI);
L_1027b720:;
  /* 1027b720 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027b723 pop esi */
  ESI = (pop32());
  /* 1027b724 pop edi */
  EDI = (pop32());
  /* 1027b725 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1027b726 ret  */
  ESPCHK(0x1027b430u, _esp0);
  ESP += 4; return;
  /* 1027b727 nop  */
  /* nop */
L_1027b728:;
  /* 1027b728 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1027b72b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1027b72e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027b731 pop esi */
  ESI = (pop32());
  /* 1027b732 pop edi */
  EDI = (pop32());
  /* 1027b733 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1027b734 ret  */
  ESPCHK(0x1027b430u, _esp0);
  ESP += 4; return;
  /* 1027b735 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1027b738:;
  /* 1027b738 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1027b73b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1027b73e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1027b741 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1027b744 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027b747 pop esi */
  ESI = (pop32());
  /* 1027b748 pop edi */
  EDI = (pop32());
  /* 1027b749 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1027b74a ret  */
  ESPCHK(0x1027b430u, _esp0);
  ESP += 4; return;
  /* 1027b74b nop  */
  /* nop */
L_1027b74c:;
  /* 1027b74c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1027b74f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1027b752 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1027b755 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1027b758 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1027b75b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1027b75e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027b761 pop esi */
  ESI = (pop32());
  /* 1027b762 pop edi */
  EDI = (pop32());
  /* 1027b763 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1027b764 ret  */
  ESPCHK(0x1027b430u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1027b770 (104 bytes, 43 insns) */
void f_1027b770(void) {
  FTRACE(0x1027b770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027b770 push ebx */
  push32((uint32_t)(EBX));
  /* 1027b771 push esi */
  push32((uint32_t)(ESI));
  /* 1027b772 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1027b776 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027b778 jne 0x1027b792 */
  if (!C.zf) goto L_1027b792;
  /* 1027b77a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1027b77e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1027b782 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1027b784 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1027b786 mov ebx, eax */
  EBX = (EAX);
  /* 1027b788 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1027b78c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1027b78e mov edx, ebx */
  EDX = (EBX);
  /* 1027b790 jmp 0x1027b7d3 */
  goto L_1027b7d3;
L_1027b792:;
  /* 1027b792 mov ecx, eax */
  ECX = (EAX);
  /* 1027b794 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1027b798 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1027b79c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1027b7a0:;
  /* 1027b7a0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1027b7a2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1027b7a4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1027b7a6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1027b7a8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027b7aa jne 0x1027b7a0 */
  if (!C.zf) goto L_1027b7a0;
  /* 1027b7ac div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1027b7ae mov esi, eax */
  ESI = (EAX);
  /* 1027b7b0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1027b7b4 mov ecx, eax */
  ECX = (EAX);
  /* 1027b7b6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1027b7ba mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1027b7bc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b7be jb 0x1027b7ce */
  if (C.cf) goto L_1027b7ce;
  /* 1027b7c0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b7c4 ja 0x1027b7ce */
  if ((!C.cf&&!C.zf)) goto L_1027b7ce;
  /* 1027b7c6 jb 0x1027b7cf */
  if (C.cf) goto L_1027b7cf;
  /* 1027b7c8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b7cc jbe 0x1027b7cf */
  if ((C.cf||C.zf)) goto L_1027b7cf;
L_1027b7ce:;
  /* 1027b7ce dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1027b7cf:;
  /* 1027b7cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1027b7d1 mov eax, esi */
  EAX = (ESI);
L_1027b7d3:;
  /* 1027b7d3 pop esi */
  ESI = (pop32());
  /* 1027b7d4 pop ebx */
  EBX = (pop32());
  /* 1027b7d5 ret 0x10 */
  ESPCHK(0x1027b770u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1027b7e0 (117 bytes, 44 insns) */
void f_1027b7e0(void) {
  FTRACE(0x1027b7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027b7e0 push ebx */
  push32((uint32_t)(EBX));
  /* 1027b7e1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1027b7e5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027b7e7 jne 0x1027b801 */
  if (!C.zf) goto L_1027b801;
  /* 1027b7e9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1027b7ed mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1027b7f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1027b7f3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1027b7f5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1027b7f9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1027b7fb mov eax, edx */
  EAX = (EDX);
  /* 1027b7fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1027b7ff jmp 0x1027b851 */
  goto L_1027b851;
L_1027b801:;
  /* 1027b801 mov ecx, eax */
  ECX = (EAX);
  /* 1027b803 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1027b807 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1027b80b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1027b80f:;
  /* 1027b80f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1027b811 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1027b813 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1027b815 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1027b817 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027b819 jne 0x1027b80f */
  if (!C.zf) goto L_1027b80f;
  /* 1027b81b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1027b81d mov ecx, eax */
  ECX = (EAX);
  /* 1027b81f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1027b823 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1027b824 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1027b828 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b82a jb 0x1027b83a */
  if (C.cf) goto L_1027b83a;
  /* 1027b82c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b830 ja 0x1027b83a */
  if ((!C.cf&&!C.zf)) goto L_1027b83a;
  /* 1027b832 jb 0x1027b842 */
  if (C.cf) goto L_1027b842;
  /* 1027b834 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b838 jbe 0x1027b842 */
  if ((C.cf||C.zf)) goto L_1027b842;
L_1027b83a:;
  /* 1027b83a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027b83e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1027b842:;
  /* 1027b842 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027b846 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027b84a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1027b84c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1027b84e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1027b851:;
  /* 1027b851 pop ebx */
  EBX = (pop32());
  /* 1027b852 ret 0x10 */
  ESPCHK(0x1027b7e0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000b860 @ 0x1027b860 (628 bytes, 214 insns) */
void f_1027b860(void) {
  FTRACE(0x1027b860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027b860 push ebp */
  push32((uint32_t)(EBP));
  /* 1027b861 mov ebp, esp */
  EBP = (ESP);
  /* 1027b863 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027b866 push ebx */
  push32((uint32_t)(EBX));
  /* 1027b867 push esi */
  push32((uint32_t)(ESI));
  /* 1027b868 push edi */
  push32((uint32_t)(EDI));
L_1027b869:;
  /* 1027b869 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b86d jne 0x1027b88d */
  if (!C.zf) goto L_1027b88d;
  /* 1027b86f push 0x1029bf40 */
  push32((uint32_t)(0x1029bf40u));
  /* 1027b874 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027b876 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1027b878 push 0x1029bf34 */
  push32((uint32_t)(0x1029bf34u));
  /* 1027b87d push 2 */
  push32((uint32_t)(0x2u));
  /* 1027b87f call 0x10273c10 */
  push32(0x1027b884u); f_10273c10();
  /* 1027b884 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b887 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b88a jne 0x1027b88d */
  if (!C.zf) goto L_1027b88d;
  /* 1027b88c int3  */
  x86_unimpl("int3 @ 0x1027b88c");
L_1027b88d:;
  /* 1027b88d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027b88f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027b891 jne 0x1027b869 */
  if (!C.zf) goto L_1027b869;
  /* 1027b893 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027b896 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1027b899 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b89c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1027b89f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1027b8a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b8a5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1027b8a8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1027b8ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027b8b0 je 0x1027b8bf */
  if (C.zf) goto L_1027b8bf;
  /* 1027b8b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b8b5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1027b8b8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1027b8bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027b8bd je 0x1027b8d5 */
  if (C.zf) goto L_1027b8d5;
L_1027b8bf:;
  /* 1027b8bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b8c2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1027b8c5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1027b8c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b8ca mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1027b8cd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027b8d0 jmp 0x1027bacd */
  goto L_1027bacd;
L_1027b8d5:;
  /* 1027b8d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b8d8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1027b8db and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1027b8de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027b8e0 je 0x1027b92c */
  if (C.zf) goto L_1027b92c;
  /* 1027b8e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b8e5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1027b8ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b8ef mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1027b8f2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1027b8f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027b8f7 je 0x1027b915 */
  if (C.zf) goto L_1027b915;
  /* 1027b8f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b8fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b8ff mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1027b902 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1027b904 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b907 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1027b90a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1027b90d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b910 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1027b913 jmp 0x1027b92c */
  goto L_1027b92c;
L_1027b915:;
  /* 1027b915 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b918 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1027b91b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1027b91e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b921 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1027b924 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027b927 jmp 0x1027bacd */
  goto L_1027bacd;
L_1027b92c:;
  /* 1027b92c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b92f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1027b932 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1027b935 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b938 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1027b93b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b93e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1027b941 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1027b944 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b947 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1027b94a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b94d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1027b954 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1027b95b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027b95e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1027b961 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b964 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1027b967 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1027b96d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027b96f jne 0x1027b99f */
  if (!C.zf) goto L_1027b99f;
  /* 1027b971 cmp dword ptr [ebp - 8], 0x1029f140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1029f140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b978 je 0x1027b983 */
  if (C.zf) goto L_1027b983;
  /* 1027b97a cmp dword ptr [ebp - 8], 0x1029f160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1029f160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b981 jne 0x1027b993 */
  if (!C.zf) goto L_1027b993;
L_1027b983:;
  /* 1027b983 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027b986 push edx */
  push32((uint32_t)(EDX));
  /* 1027b987 call 0x1027d7d0 */
  push32(0x1027b98cu); f_1027d7d0();
  /* 1027b98c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b98f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027b991 jne 0x1027b99f */
  if (!C.zf) goto L_1027b99f;
L_1027b993:;
  /* 1027b993 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b996 push eax */
  push32((uint32_t)(EAX));
  /* 1027b997 call 0x1027d700 */
  push32(0x1027b99cu); f_1027d700();
  /* 1027b99c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027b99f:;
  /* 1027b99f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b9a2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1027b9a5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1027b9ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027b9ad je 0x1027ba8b */
  if (C.zf) goto L_1027ba8b;
L_1027b9b3:;
  /* 1027b9b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b9b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b9b9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1027b9bb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027b9be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027b9c0 jge 0x1027b9e3 */
  if ((C.sf==C.of)) goto L_1027b9e3;
  /* 1027b9c2 push 0x1029bef4 */
  push32((uint32_t)(0x1029bef4u));
  /* 1027b9c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027b9c9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1027b9ce push 0x1029bf34 */
  push32((uint32_t)(0x1029bf34u));
  /* 1027b9d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027b9d5 call 0x10273c10 */
  push32(0x1027b9dau); f_10273c10();
  /* 1027b9da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027b9dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027b9e0 jne 0x1027b9e3 */
  if (!C.zf) goto L_1027b9e3;
  /* 1027b9e2 int3  */
  x86_unimpl("int3 @ 0x1027b9e2");
L_1027b9e3:;
  /* 1027b9e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027b9e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027b9e7 jne 0x1027b9b3 */
  if (!C.zf) goto L_1027b9b3;
  /* 1027b9e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b9ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b9ef mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1027b9f1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027b9f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027b9f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027b9fa mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1027b9fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ba00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027ba03 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1027ba05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027ba08 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1027ba0b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027ba0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027ba11 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1027ba14 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ba18 jle 0x1027ba36 */
  if ((C.zf||C.sf!=C.of)) goto L_1027ba36;
  /* 1027ba1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ba1d push ecx */
  push32((uint32_t)(ECX));
  /* 1027ba1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027ba21 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1027ba24 push eax */
  push32((uint32_t)(EAX));
  /* 1027ba25 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027ba28 push ecx */
  push32((uint32_t)(ECX));
  /* 1027ba29 call 0x1027d3f0 */
  push32(0x1027ba2eu); f_1027d3f0();
  /* 1027ba2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ba31 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1027ba34 jmp 0x1027ba7e */
  goto L_1027ba7e;
L_1027ba36:;
  /* 1027ba36 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ba3a je 0x1027ba59 */
  if (C.zf) goto L_1027ba59;
  /* 1027ba3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027ba3f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1027ba42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027ba45 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1027ba48 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027ba4b mov ecx, dword ptr [edx*4 + 0x102a1f80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x102a1f80)));
  /* 1027ba52 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ba54 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1027ba57 jmp 0x1027ba60 */
  goto L_1027ba60;
L_1027ba59:;
  /* 1027ba59 mov dword ptr [ebp - 0x14], 0x1029ea60 */
  w32((uint32_t)(EBP + -0x14), (0x1029ea60u));
L_1027ba60:;
  /* 1027ba60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027ba63 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1027ba67 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1027ba6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027ba6c je 0x1027ba7e */
  if (C.zf) goto L_1027ba7e;
  /* 1027ba6e push 2 */
  push32((uint32_t)(0x2u));
  /* 1027ba70 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027ba72 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027ba75 push ecx */
  push32((uint32_t)(ECX));
  /* 1027ba76 call 0x1027d2a0 */
  push32(0x1027ba7bu); f_1027d2a0();
  /* 1027ba7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027ba7e:;
  /* 1027ba7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027ba81 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1027ba84 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1027ba87 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1027ba89 jmp 0x1027baa9 */
  goto L_1027baa9;
L_1027ba8b:;
  /* 1027ba8b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1027ba92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ba95 push edx */
  push32((uint32_t)(EDX));
  /* 1027ba96 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1027ba99 push eax */
  push32((uint32_t)(EAX));
  /* 1027ba9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027ba9d push ecx */
  push32((uint32_t)(ECX));
  /* 1027ba9e call 0x1027d3f0 */
  push32(0x1027baa3u); f_1027d3f0();
  /* 1027baa3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027baa6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1027baa9:;
  /* 1027baa9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027baac cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027baaf je 0x1027bac5 */
  if (C.zf) goto L_1027bac5;
  /* 1027bab1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027bab4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1027bab7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1027baba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027babd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1027bac0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027bac3 jmp 0x1027bacd */
  goto L_1027bacd;
L_1027bac5:;
  /* 1027bac5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027bac8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1027bacd:;
  /* 1027bacd pop edi */
  EDI = (pop32());
  /* 1027bace pop esi */
  ESI = (pop32());
  /* 1027bacf pop ebx */
  EBX = (pop32());
  /* 1027bad0 mov esp, ebp */
  ESP = (EBP);
  /* 1027bad2 pop ebp */
  EBP = (pop32());
  /* 1027bad3 ret  */
  ESPCHK(0x1027b860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bae0 @ 0x1027bae0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1027bae0(void) {
  FTRACE(0x1027bae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027bae0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027bae1 mov ebp, esp */
  EBP = (ESP);
  /* 1027bae3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027bae9 push ebx */
  push32((uint32_t)(EBX));
  /* 1027baea push esi */
  push32((uint32_t)(ESI));
  /* 1027baeb push edi */
  push32((uint32_t)(EDI));
  /* 1027baec mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1027baf3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1027bafd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1027bb04:;
  /* 1027bb04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027bb07 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1027bb09 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1027bb0c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1027bb10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027bb13 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027bb16 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1027bb19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027bb1b je 0x1027c6f7 */
  if (C.zf) goto L_1027c6f7;
  /* 1027bb21 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027bb28 jl 0x1027c6f7 */
  if ((C.sf!=C.of)) goto L_1027c6f7;
  /* 1027bb2e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1027bb32 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027bb35 jl 0x1027bb56 */
  if ((C.sf!=C.of)) goto L_1027bb56;
  /* 1027bb37 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1027bb3b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027bb3e jg 0x1027bb56 */
  if ((!C.zf&&C.sf==C.of)) goto L_1027bb56;
  /* 1027bb40 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1027bb44 movsx ecx, byte ptr [eax + 0x1029bf2c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1029bf2c))));
  /* 1027bb4b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1027bb4e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1027bb54 jmp 0x1027bb60 */
  goto L_1027bb60;
L_1027bb56:;
  /* 1027bb56 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1027bb60:;
  /* 1027bb60 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1027bb66 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1027bb69 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027bb6c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027bb6f movsx edx, byte ptr [ecx + eax*8 + 0x1029bf4c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1029bf4c))));
  /* 1027bb77 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1027bb7a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1027bb7d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027bb80 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1027bb86 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027bb8d ja 0x1027c6f2 */
  if ((!C.cf&&!C.zf)) goto L_1027c6f2;
  /* 1027bb93 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1027bb99 jmp dword ptr [ecx*4 + 0x1027c704] */
  switch (ECX) {
    case 0: goto L_1027bba0;
    case 1: goto L_1027bc3a;
    case 2: goto L_1027bc7c;
    case 3: goto L_1027bceb;
    case 4: goto L_1027bd43;
    case 5: goto L_1027bd52;
    case 6: goto L_1027bd9e;
    case 7: goto L_1027be31;
    case 8: goto L_1027bcc8;
    case 9: goto L_1027bcd3;
    case 10: goto L_1027bcbe;
    case 11: goto L_1027bcb3;
    case 12: goto L_1027bcde;
    case 13: goto L_1027bce6;
    default: x86_unimpl("switch@0x1027bb99 out of table"); return;
  }
L_1027bba0:;
  /* 1027bba0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1027bba7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027bbaa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1027bbb0 mov eax, dword ptr [0x1029ec98] */
  EAX = (r32((uint32_t)(0x1029ec98)));
  /* 1027bbb5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027bbb7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1027bbbb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1027bbc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027bbc3 je 0x1027bc1d */
  if (C.zf) goto L_1027bc1d;
  /* 1027bbc5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1027bbcb push edx */
  push32((uint32_t)(EDX));
  /* 1027bbcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027bbcf push eax */
  push32((uint32_t)(EAX));
  /* 1027bbd0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1027bbd4 push ecx */
  push32((uint32_t)(ECX));
  /* 1027bbd5 call 0x1027c810 */
  push32(0x1027bbdau); f_1027c810();
  /* 1027bbda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027bbdd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027bbe0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1027bbe2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1027bbe5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027bbe8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027bbeb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1027bbee:;
  /* 1027bbee movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1027bbf2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027bbf4 jne 0x1027bc17 */
  if (!C.zf) goto L_1027bc17;
  /* 1027bbf6 push 0x1029bfcc */
  push32((uint32_t)(0x1029bfccu));
  /* 1027bbfb push 0 */
  push32((uint32_t)(0x0u));
  /* 1027bbfd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1027bc02 push 0x1029bfc0 */
  push32((uint32_t)(0x1029bfc0u));
  /* 1027bc07 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027bc09 call 0x10273c10 */
  push32(0x1027bc0eu); f_10273c10();
  /* 1027bc0e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027bc11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027bc14 jne 0x1027bc17 */
  if (!C.zf) goto L_1027bc17;
  /* 1027bc16 int3  */
  x86_unimpl("int3 @ 0x1027bc16");
L_1027bc17:;
  /* 1027bc17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027bc19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027bc1b jne 0x1027bbee */
  if (!C.zf) goto L_1027bbee;
L_1027bc1d:;
  /* 1027bc1d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1027bc23 push ecx */
  push32((uint32_t)(ECX));
  /* 1027bc24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027bc27 push edx */
  push32((uint32_t)(EDX));
  /* 1027bc28 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1027bc2c push eax */
  push32((uint32_t)(EAX));
  /* 1027bc2d call 0x1027c810 */
  push32(0x1027bc32u); f_1027c810();
  /* 1027bc32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027bc35 jmp 0x1027c6f2 */
  goto L_1027c6f2;
L_1027bc3a:;
  /* 1027bc3a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1027bc41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027bc44 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1027bc4a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1027bc50 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1027bc56 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1027bc5c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1027bc5f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1027bc66 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1027bc70 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1027bc77 jmp 0x1027c6f2 */
  goto L_1027c6f2;
L_1027bc7c:;
  /* 1027bc7c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1027bc80 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1027bc86 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1027bc8c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027bc8f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1027bc95 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027bc9c ja 0x1027bce6 */
  if ((!C.cf&&!C.zf)) goto L_1027bce6;
  /* 1027bc9e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1027bca4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027bca6 mov al, byte ptr [ecx + 0x1027c73c] */
  AL = (r8((uint32_t)(ECX + 0x1027c73c)));
  /* 1027bcac jmp dword ptr [eax*4 + 0x1027c724] */
  switch (EAX) {
    case 0: goto L_1027bcc8;
    case 1: goto L_1027bcd3;
    case 2: goto L_1027bcbe;
    case 3: goto L_1027bcb3;
    case 4: goto L_1027bcde;
    case 5: goto L_1027bce6;
    default: x86_unimpl("switch@0x1027bcac out of table"); return;
  }
L_1027bcb3:;
  /* 1027bcb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027bcb6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1027bcb9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1027bcbc jmp 0x1027bce6 */
  goto L_1027bce6;
L_1027bcbe:;
  /* 1027bcbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027bcc1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1027bcc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027bcc6 jmp 0x1027bce6 */
  goto L_1027bce6;
L_1027bcc8:;
  /* 1027bcc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027bccb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1027bcce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1027bcd1 jmp 0x1027bce6 */
  goto L_1027bce6;
L_1027bcd3:;
  /* 1027bcd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027bcd6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1027bcd9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1027bcdc jmp 0x1027bce6 */
  goto L_1027bce6;
L_1027bcde:;
  /* 1027bcde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027bce1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1027bce3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1027bce6:;
  /* 1027bce6 jmp 0x1027c6f2 */
  goto L_1027c6f2;
L_1027bceb:;
  /* 1027bceb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1027bcef cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027bcf2 jne 0x1027bd27 */
  if (!C.zf) goto L_1027bd27;
  /* 1027bcf4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1027bcf7 push edx */
  push32((uint32_t)(EDX));
  /* 1027bcf8 call 0x1027c920 */
  push32(0x1027bcfdu); f_1027c920();
  /* 1027bcfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027bd00 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1027bd06 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027bd0d jge 0x1027bd25 */
  if ((C.sf==C.of)) goto L_1027bd25;
  /* 1027bd0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027bd12 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1027bd14 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027bd17 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1027bd1d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1027bd1f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1027bd25:;
  /* 1027bd25 jmp 0x1027bd3e */
  goto L_1027bd3e;
L_1027bd27:;
  /* 1027bd27 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1027bd2d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027bd30 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1027bd34 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1027bd38 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1027bd3e:;
  /* 1027bd3e jmp 0x1027c6f2 */
  goto L_1027c6f2;
L_1027bd43:;
  /* 1027bd43 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1027bd4d jmp 0x1027c6f2 */
  goto L_1027c6f2;
L_1027bd52:;
  /* 1027bd52 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1027bd56 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027bd59 jne 0x1027bd82 */
  if (!C.zf) goto L_1027bd82;
  /* 1027bd5b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1027bd5e push eax */
  push32((uint32_t)(EAX));
  /* 1027bd5f call 0x1027c920 */
  push32(0x1027bd64u); f_1027c920();
  /* 1027bd64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027bd67 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1027bd6d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027bd74 jge 0x1027bd80 */
  if ((C.sf==C.of)) goto L_1027bd80;
  /* 1027bd76 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1027bd80:;
  /* 1027bd80 jmp 0x1027bd99 */
  goto L_1027bd99;
L_1027bd82:;
  /* 1027bd82 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1027bd88 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027bd8b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1027bd8f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1027bd93 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1027bd99:;
  /* 1027bd99 jmp 0x1027c6f2 */
  goto L_1027c6f2;
L_1027bd9e:;
  /* 1027bd9e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1027bda2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1027bda8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1027bdae sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027bdb1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1027bdb7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027bdbe ja 0x1027be2c */
  if ((!C.cf&&!C.zf)) goto L_1027be2c;
  /* 1027bdc0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1027bdc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027bdc8 mov al, byte ptr [ecx + 0x1027c761] */
  AL = (r8((uint32_t)(ECX + 0x1027c761)));
  /* 1027bdce jmp dword ptr [eax*4 + 0x1027c74d] */
  switch (EAX) {
    case 0: goto L_1027bde0;
    case 1: goto L_1027be19;
    case 2: goto L_1027bdd5;
    case 3: goto L_1027be23;
    case 4: goto L_1027be2c;
    default: x86_unimpl("switch@0x1027bdce out of table"); return;
  }
L_1027bdd5:;
  /* 1027bdd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027bdd8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1027bddb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1027bdde jmp 0x1027be2c */
  goto L_1027be2c;
L_1027bde0:;
  /* 1027bde0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027bde3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1027bde6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027bde9 jne 0x1027be0b */
  if (!C.zf) goto L_1027be0b;
  /* 1027bdeb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027bdee movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1027bdf2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027bdf5 jne 0x1027be0b */
  if (!C.zf) goto L_1027be0b;
  /* 1027bdf7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027bdfa add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027bdfd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1027be00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027be03 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1027be06 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1027be09 jmp 0x1027be17 */
  goto L_1027be17;
L_1027be0b:;
  /* 1027be0b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1027be12 jmp 0x1027bba0 */
  goto L_1027bba0;
L_1027be17:;
  /* 1027be17 jmp 0x1027be2c */
  goto L_1027be2c;
L_1027be19:;
  /* 1027be19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027be1c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1027be1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027be21 jmp 0x1027be2c */
  goto L_1027be2c;
L_1027be23:;
  /* 1027be23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027be26 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1027be29 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1027be2c:;
  /* 1027be2c jmp 0x1027c6f2 */
  goto L_1027c6f2;
L_1027be31:;
  /* 1027be31 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1027be35 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1027be3b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1027be41 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027be44 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1027be4a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027be51 ja 0x1027c517 */
  if ((!C.cf&&!C.zf)) goto L_1027c517;
  /* 1027be57 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1027be5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027be5f mov cl, byte ptr [edx + 0x1027c7cc] */
  CL = (r8((uint32_t)(EDX + 0x1027c7cc)));
  /* 1027be65 jmp dword ptr [ecx*4 + 0x1027c790] */
  switch (ECX) {
    case 0: goto L_1027be6c;
    case 1: goto L_1027c100;
    case 2: goto L_1027bf90;
    case 3: goto L_1027c239;
    case 4: goto L_1027befb;
    case 5: goto L_1027be81;
    case 6: goto L_1027c20b;
    case 7: goto L_1027c110;
    case 8: goto L_1027c0b5;
    case 9: goto L_1027c285;
    case 10: goto L_1027c22f;
    case 11: goto L_1027bfa6;
    case 12: goto L_1027c223;
    case 13: goto L_1027c245;
    case 14: goto L_1027c517;
    default: x86_unimpl("switch@0x1027be65 out of table"); return;
  }
L_1027be6c:;
  /* 1027be6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027be6f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1027be74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027be76 jne 0x1027be81 */
  if (!C.zf) goto L_1027be81;
  /* 1027be78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027be7b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1027be7e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1027be81:;
  /* 1027be81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027be84 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1027be8a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027be8c je 0x1027bec7 */
  if (C.zf) goto L_1027bec7;
  /* 1027be8e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1027be91 push eax */
  push32((uint32_t)(EAX));
  /* 1027be92 call 0x1027c960 */
  push32(0x1027be97u); f_1027c960();
  /* 1027be97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027be9a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1027be9e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1027bea2 push ecx */
  push32((uint32_t)(ECX));
  /* 1027bea3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1027bea9 push edx */
  push32((uint32_t)(EDX));
  /* 1027beaa call 0x1027da40 */
  push32(0x1027beafu); f_1027da40();
  /* 1027beaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027beb2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1027beb5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027beb9 jge 0x1027bec5 */
  if ((C.sf==C.of)) goto L_1027bec5;
  /* 1027bebb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1027bec5:;
  /* 1027bec5 jmp 0x1027beed */
  goto L_1027beed;
L_1027bec7:;
  /* 1027bec7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1027beca push eax */
  push32((uint32_t)(EAX));
  /* 1027becb call 0x1027c920 */
  push32(0x1027bed0u); f_1027c920();
  /* 1027bed0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027bed3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1027beda mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1027bee0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1027bee6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1027beed:;
  /* 1027beed lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1027bef3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1027bef6 jmp 0x1027c517 */
  goto L_1027c517;
L_1027befb:;
  /* 1027befb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1027befe push eax */
  push32((uint32_t)(EAX));
  /* 1027beff call 0x1027c920 */
  push32(0x1027bf04u); f_1027c920();
  /* 1027bf04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027bf07 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1027bf0d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027bf14 je 0x1027bf22 */
  if (C.zf) goto L_1027bf22;
  /* 1027bf16 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1027bf1c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027bf20 jne 0x1027bf3c */
  if (!C.zf) goto L_1027bf3c;
L_1027bf22:;
  /* 1027bf22 mov edx, dword ptr [0x1029efb0] */
  EDX = (r32((uint32_t)(0x1029efb0)));
  /* 1027bf28 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1027bf2b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027bf2e push eax */
  push32((uint32_t)(EAX));
  /* 1027bf2f call 0x10277980 */
  push32(0x1027bf34u); f_10277980();
  /* 1027bf34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027bf37 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1027bf3a jmp 0x1027bf8b */
  goto L_1027bf8b;
L_1027bf3c:;
  /* 1027bf3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027bf3f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1027bf45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027bf47 je 0x1027bf6c */
  if (C.zf) goto L_1027bf6c;
  /* 1027bf49 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1027bf4f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1027bf52 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1027bf55 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1027bf5b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1027bf5e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1027bf60 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1027bf63 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1027bf6a jmp 0x1027bf8b */
  goto L_1027bf8b;
L_1027bf6c:;
  /* 1027bf6c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1027bf73 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1027bf79 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1027bf7c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1027bf7f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1027bf85 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1027bf88 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1027bf8b:;
  /* 1027bf8b jmp 0x1027c517 */
  goto L_1027c517;
L_1027bf90:;
  /* 1027bf90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027bf93 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1027bf99 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027bf9b jne 0x1027bfa6 */
  if (!C.zf) goto L_1027bfa6;
  /* 1027bf9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027bfa0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1027bfa3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1027bfa6:;
  /* 1027bfa6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027bfad jne 0x1027bfbb */
  if (!C.zf) goto L_1027bfbb;
  /* 1027bfaf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1027bfb9 jmp 0x1027bfc7 */
  goto L_1027bfc7;
L_1027bfbb:;
  /* 1027bfbb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1027bfc1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1027bfc7:;
  /* 1027bfc7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1027bfcd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1027bfd3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1027bfd6 push edx */
  push32((uint32_t)(EDX));
  /* 1027bfd7 call 0x1027c920 */
  push32(0x1027bfdcu); f_1027c920();
  /* 1027bfdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027bfdf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1027bfe2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027bfe5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1027bfea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027bfec je 0x1027c056 */
  if (C.zf) goto L_1027c056;
  /* 1027bfee cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027bff2 jne 0x1027bffd */
  if (!C.zf) goto L_1027bffd;
  /* 1027bff4 mov ecx, dword ptr [0x1029efb4] */
  ECX = (r32((uint32_t)(0x1029efb4)));
  /* 1027bffa mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1027bffd:;
  /* 1027bffd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1027c004 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027c007 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1027c00d:;
  /* 1027c00d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1027c013 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1027c019 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027c01c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1027c022 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027c024 je 0x1027c046 */
  if (C.zf) goto L_1027c046;
  /* 1027c026 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1027c02c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027c02e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1027c031 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027c033 je 0x1027c046 */
  if (C.zf) goto L_1027c046;
  /* 1027c035 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1027c03b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c03e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1027c044 jmp 0x1027c00d */
  goto L_1027c00d;
L_1027c046:;
  /* 1027c046 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1027c04c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027c04f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1027c051 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1027c054 jmp 0x1027c0b0 */
  goto L_1027c0b0;
L_1027c056:;
  /* 1027c056 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c05a jne 0x1027c064 */
  if (!C.zf) goto L_1027c064;
  /* 1027c05c mov eax, dword ptr [0x1029efb0] */
  EAX = (r32((uint32_t)(0x1029efb0)));
  /* 1027c061 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1027c064:;
  /* 1027c064 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027c067 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1027c06d:;
  /* 1027c06d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1027c073 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1027c079 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027c07c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1027c082 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027c084 je 0x1027c0a4 */
  if (C.zf) goto L_1027c0a4;
  /* 1027c086 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1027c08c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1027c08f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027c091 je 0x1027c0a4 */
  if (C.zf) goto L_1027c0a4;
  /* 1027c093 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1027c099 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c09c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1027c0a2 jmp 0x1027c06d */
  goto L_1027c06d;
L_1027c0a4:;
  /* 1027c0a4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1027c0aa sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027c0ad mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1027c0b0:;
  /* 1027c0b0 jmp 0x1027c517 */
  goto L_1027c517;
L_1027c0b5:;
  /* 1027c0b5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1027c0b8 push edx */
  push32((uint32_t)(EDX));
  /* 1027c0b9 call 0x1027c920 */
  push32(0x1027c0beu); f_1027c920();
  /* 1027c0be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c0c1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1027c0c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c0ca and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1027c0cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027c0cf je 0x1027c0e3 */
  if (C.zf) goto L_1027c0e3;
  /* 1027c0d1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1027c0d7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1027c0de mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1027c0e1 jmp 0x1027c0f1 */
  goto L_1027c0f1;
L_1027c0e3:;
  /* 1027c0e3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1027c0e9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1027c0ef mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1027c0f1:;
  /* 1027c0f1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1027c0fb jmp 0x1027c517 */
  goto L_1027c517;
L_1027c100:;
  /* 1027c100 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1027c107 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1027c10a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1027c10d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1027c110:;
  /* 1027c110 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c113 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1027c115 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027c118 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1027c11e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1027c121 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c128 jge 0x1027c136 */
  if ((C.sf==C.of)) goto L_1027c136;
  /* 1027c12a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1027c134 jmp 0x1027c152 */
  goto L_1027c152;
L_1027c136:;
  /* 1027c136 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c13d jne 0x1027c152 */
  if (!C.zf) goto L_1027c152;
  /* 1027c13f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1027c143 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c146 jne 0x1027c152 */
  if (!C.zf) goto L_1027c152;
  /* 1027c148 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1027c152:;
  /* 1027c152 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027c155 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c158 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1027c15b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027c15e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027c161 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1027c163 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1027c166 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1027c16c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1027c172 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027c175 push ecx */
  push32((uint32_t)(ECX));
  /* 1027c176 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1027c17c push edx */
  push32((uint32_t)(EDX));
  /* 1027c17d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1027c181 push eax */
  push32((uint32_t)(EAX));
  /* 1027c182 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027c185 push ecx */
  push32((uint32_t)(ECX));
  /* 1027c186 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1027c18c push edx */
  push32((uint32_t)(EDX));
  /* 1027c18d call dword ptr [0x1029f3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1029f3a0))), 0x1027c193u);
  /* 1027c193 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c196 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c199 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1027c19e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027c1a0 je 0x1027c1b8 */
  if (C.zf) goto L_1027c1b8;
  /* 1027c1a2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c1a9 jne 0x1027c1b8 */
  if (!C.zf) goto L_1027c1b8;
  /* 1027c1ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027c1ae push ecx */
  push32((uint32_t)(ECX));
  /* 1027c1af call dword ptr [0x1029f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1029f3ac))), 0x1027c1b5u);
  /* 1027c1b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027c1b8:;
  /* 1027c1b8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1027c1bc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c1bf jne 0x1027c1da */
  if (!C.zf) goto L_1027c1da;
  /* 1027c1c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c1c4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1027c1c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027c1cb jne 0x1027c1da */
  if (!C.zf) goto L_1027c1da;
  /* 1027c1cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027c1d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1027c1d1 call dword ptr [0x1029f3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1029f3a4))), 0x1027c1d7u);
  /* 1027c1d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027c1da:;
  /* 1027c1da mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027c1dd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1027c1e0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c1e3 jne 0x1027c1f7 */
  if (!C.zf) goto L_1027c1f7;
  /* 1027c1e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c1e8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1027c1eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1027c1ee mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027c1f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c1f4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1027c1f7:;
  /* 1027c1f7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027c1fa push eax */
  push32((uint32_t)(EAX));
  /* 1027c1fb call 0x10277980 */
  push32(0x1027c200u); f_10277980();
  /* 1027c200 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c203 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1027c206 jmp 0x1027c517 */
  goto L_1027c517;
L_1027c20b:;
  /* 1027c20b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c20e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1027c211 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1027c214 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1027c21e jmp 0x1027c2a5 */
  goto L_1027c2a5;
L_1027c223:;
  /* 1027c223 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1027c22d jmp 0x1027c2a5 */
  goto L_1027c2a5;
L_1027c22f:;
  /* 1027c22f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1027c239:;
  /* 1027c239 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1027c243 jmp 0x1027c24f */
  goto L_1027c24f;
L_1027c245:;
  /* 1027c245 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1027c24f:;
  /* 1027c24f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1027c259 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c25c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1027c262 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027c264 je 0x1027c283 */
  if (C.zf) goto L_1027c283;
  /* 1027c266 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1027c26d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1027c273 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c276 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1027c27c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1027c283:;
  /* 1027c283 jmp 0x1027c2a5 */
  goto L_1027c2a5;
L_1027c285:;
  /* 1027c285 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1027c28f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c292 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1027c298 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027c29a je 0x1027c2a5 */
  if (C.zf) goto L_1027c2a5;
  /* 1027c29c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c29f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1027c2a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1027c2a5:;
  /* 1027c2a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c2a8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1027c2ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027c2af je 0x1027c2ce */
  if (C.zf) goto L_1027c2ce;
  /* 1027c2b1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1027c2b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1027c2b5 call 0x1027c940 */
  push32(0x1027c2bau); f_1027c940();
  /* 1027c2ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c2bd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1027c2c3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1027c2c9 jmp 0x1027c35f */
  goto L_1027c35f;
L_1027c2ce:;
  /* 1027c2ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c2d1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1027c2d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027c2d6 je 0x1027c320 */
  if (C.zf) goto L_1027c320;
  /* 1027c2d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c2db and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1027c2de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027c2e0 je 0x1027c300 */
  if (C.zf) goto L_1027c300;
  /* 1027c2e2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1027c2e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1027c2e6 call 0x1027c920 */
  push32(0x1027c2ebu); f_1027c920();
  /* 1027c2eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c2ee movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1027c2f1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1027c2f2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1027c2f8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1027c2fe jmp 0x1027c31e */
  goto L_1027c31e;
L_1027c300:;
  /* 1027c300 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1027c303 push edx */
  push32((uint32_t)(EDX));
  /* 1027c304 call 0x1027c920 */
  push32(0x1027c309u); f_1027c920();
  /* 1027c309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c30c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027c311 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1027c312 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1027c318 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1027c31e:;
  /* 1027c31e jmp 0x1027c35f */
  goto L_1027c35f;
L_1027c320:;
  /* 1027c320 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c323 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1027c326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027c328 je 0x1027c345 */
  if (C.zf) goto L_1027c345;
  /* 1027c32a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1027c32d push ecx */
  push32((uint32_t)(ECX));
  /* 1027c32e call 0x1027c920 */
  push32(0x1027c333u); f_1027c920();
  /* 1027c333 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c336 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1027c337 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1027c33d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1027c343 jmp 0x1027c35f */
  goto L_1027c35f;
L_1027c345:;
  /* 1027c345 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1027c348 push edx */
  push32((uint32_t)(EDX));
  /* 1027c349 call 0x1027c920 */
  push32(0x1027c34eu); f_1027c920();
  /* 1027c34e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c351 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027c353 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1027c359 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1027c35f:;
  /* 1027c35f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c362 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1027c365 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027c367 je 0x1027c3a7 */
  if (C.zf) goto L_1027c3a7;
  /* 1027c369 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c370 jg 0x1027c3a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1027c3a7;
  /* 1027c372 jl 0x1027c37d */
  if ((C.sf!=C.of)) goto L_1027c37d;
  /* 1027c374 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c37b jae 0x1027c3a7 */
  if (!C.cf) goto L_1027c3a7;
L_1027c37d:;
  /* 1027c37d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1027c383 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1027c385 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1027c38b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c38e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1027c390 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1027c396 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1027c39c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c39f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1027c3a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1027c3a5 jmp 0x1027c3bf */
  goto L_1027c3bf;
L_1027c3a7:;
  /* 1027c3a7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1027c3ad mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1027c3b3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1027c3b9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1027c3bf:;
  /* 1027c3bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c3c2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1027c3c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027c3ca jne 0x1027c3e7 */
  if (!C.zf) goto L_1027c3e7;
  /* 1027c3cc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1027c3d2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1027c3d8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1027c3db mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1027c3e1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1027c3e7:;
  /* 1027c3e7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c3ee jge 0x1027c3fc */
  if ((C.sf==C.of)) goto L_1027c3fc;
  /* 1027c3f0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1027c3fa jmp 0x1027c405 */
  goto L_1027c405;
L_1027c3fc:;
  /* 1027c3fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c3ff and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1027c402 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1027c405:;
  /* 1027c405 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1027c40b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1027c411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027c413 jne 0x1027c41c */
  if (!C.zf) goto L_1027c41c;
  /* 1027c415 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1027c41c:;
  /* 1027c41c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1027c41f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1027c422:;
  /* 1027c422 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1027c428 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1027c42e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027c431 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1027c437 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027c439 jg 0x1027c44f */
  if ((!C.zf&&C.sf==C.of)) goto L_1027c44f;
  /* 1027c43b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1027c441 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1027c447 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027c449 je 0x1027c4d0 */
  if (C.zf) goto L_1027c4d0;
L_1027c44f:;
  /* 1027c44f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1027c455 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1027c456 push edx */
  push32((uint32_t)(EDX));
  /* 1027c457 push eax */
  push32((uint32_t)(EAX));
  /* 1027c458 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1027c45e push edx */
  push32((uint32_t)(EDX));
  /* 1027c45f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1027c465 push eax */
  push32((uint32_t)(EAX));
  /* 1027c466 call 0x1027b7e0 */
  push32(0x1027c46bu); f_1027b7e0();
  /* 1027c46b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c46e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1027c474 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1027c47a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1027c47b push edx */
  push32((uint32_t)(EDX));
  /* 1027c47c push eax */
  push32((uint32_t)(EAX));
  /* 1027c47d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1027c483 push ecx */
  push32((uint32_t)(ECX));
  /* 1027c484 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1027c48a push edx */
  push32((uint32_t)(EDX));
  /* 1027c48b call 0x1027b770 */
  push32(0x1027c490u); f_1027b770();
  /* 1027c490 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1027c496 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1027c49c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c4a3 jle 0x1027c4b7 */
  if ((C.zf||C.sf!=C.of)) goto L_1027c4b7;
  /* 1027c4a5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1027c4ab add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c4b1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1027c4b7:;
  /* 1027c4b7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027c4ba mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1027c4c0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1027c4c2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027c4c5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027c4c8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1027c4cb jmp 0x1027c422 */
  goto L_1027c422;
L_1027c4d0:;
  /* 1027c4d0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1027c4d3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027c4d6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1027c4d9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027c4dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c4df mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1027c4e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c4e5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1027c4ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027c4ec je 0x1027c517 */
  if (C.zf) goto L_1027c517;
  /* 1027c4ee mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027c4f1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1027c4f4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c4f7 jne 0x1027c4ff */
  if (!C.zf) goto L_1027c4ff;
  /* 1027c4f9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c4fd jne 0x1027c517 */
  if (!C.zf) goto L_1027c517;
L_1027c4ff:;
  /* 1027c4ff mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027c502 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027c505 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1027c508 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027c50b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1027c50e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027c511 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c514 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1027c517:;
  /* 1027c517 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c51e jne 0x1027c6f2 */
  if (!C.zf) goto L_1027c6f2;
  /* 1027c524 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c527 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1027c52a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027c52c je 0x1027c57d */
  if (C.zf) goto L_1027c57d;
  /* 1027c52e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c531 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1027c537 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027c539 je 0x1027c54b */
  if (C.zf) goto L_1027c54b;
  /* 1027c53b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1027c542 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1027c549 jmp 0x1027c57d */
  goto L_1027c57d;
L_1027c54b:;
  /* 1027c54b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c54e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1027c551 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027c553 je 0x1027c565 */
  if (C.zf) goto L_1027c565;
  /* 1027c555 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1027c55c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1027c563 jmp 0x1027c57d */
  goto L_1027c57d;
L_1027c565:;
  /* 1027c565 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c568 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1027c56b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027c56d je 0x1027c57d */
  if (C.zf) goto L_1027c57d;
  /* 1027c56f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1027c576 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1027c57d:;
  /* 1027c57d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1027c583 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027c586 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027c589 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1027c58f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c592 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1027c595 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027c597 jne 0x1027c5b5 */
  if (!C.zf) goto L_1027c5b5;
  /* 1027c599 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1027c59f push eax */
  push32((uint32_t)(EAX));
  /* 1027c5a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c5a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1027c5a4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1027c5aa push edx */
  push32((uint32_t)(EDX));
  /* 1027c5ab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1027c5ad call 0x1027c890 */
  push32(0x1027c5b2u); f_1027c890();
  /* 1027c5b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027c5b5:;
  /* 1027c5b5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1027c5bb push eax */
  push32((uint32_t)(EAX));
  /* 1027c5bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c5bf push ecx */
  push32((uint32_t)(ECX));
  /* 1027c5c0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027c5c3 push edx */
  push32((uint32_t)(EDX));
  /* 1027c5c4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1027c5ca push eax */
  push32((uint32_t)(EAX));
  /* 1027c5cb call 0x1027c8d0 */
  push32(0x1027c5d0u); f_1027c8d0();
  /* 1027c5d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c5d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c5d6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1027c5d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027c5db je 0x1027c603 */
  if (C.zf) goto L_1027c603;
  /* 1027c5dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c5e0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1027c5e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027c5e5 jne 0x1027c603 */
  if (!C.zf) goto L_1027c603;
  /* 1027c5e7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1027c5ed push eax */
  push32((uint32_t)(EAX));
  /* 1027c5ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c5f1 push ecx */
  push32((uint32_t)(ECX));
  /* 1027c5f2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1027c5f8 push edx */
  push32((uint32_t)(EDX));
  /* 1027c5f9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1027c5fb call 0x1027c890 */
  push32(0x1027c600u); f_1027c890();
  /* 1027c600 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027c603:;
  /* 1027c603 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c607 je 0x1027c6b1 */
  if (C.zf) goto L_1027c6b1;
  /* 1027c60d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c611 jle 0x1027c6b1 */
  if ((C.zf||C.sf!=C.of)) goto L_1027c6b1;
  /* 1027c617 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027c61a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1027c620 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027c623 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1027c629:;
  /* 1027c629 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1027c62f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1027c635 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027c638 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1027c63e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027c640 je 0x1027c6af */
  if (C.zf) goto L_1027c6af;
  /* 1027c642 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1027c648 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1027c64b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1027c652 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1027c659 push eax */
  push32((uint32_t)(EAX));
  /* 1027c65a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1027c660 push ecx */
  push32((uint32_t)(ECX));
  /* 1027c661 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1027c667 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c66a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1027c670 call 0x1027da40 */
  push32(0x1027c675u); f_1027da40();
  /* 1027c675 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c678 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1027c67e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c685 jg 0x1027c689 */
  if ((!C.zf&&C.sf==C.of)) goto L_1027c689;
  /* 1027c687 jmp 0x1027c6af */
  goto L_1027c6af;
L_1027c689:;
  /* 1027c689 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1027c68f push eax */
  push32((uint32_t)(EAX));
  /* 1027c690 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c693 push ecx */
  push32((uint32_t)(ECX));
  /* 1027c694 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1027c69a push edx */
  push32((uint32_t)(EDX));
  /* 1027c69b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1027c6a1 push eax */
  push32((uint32_t)(EAX));
  /* 1027c6a2 call 0x1027c8d0 */
  push32(0x1027c6a7u); f_1027c8d0();
  /* 1027c6a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c6aa jmp 0x1027c629 */
  goto L_1027c629;
L_1027c6af:;
  /* 1027c6af jmp 0x1027c6cc */
  goto L_1027c6cc;
L_1027c6b1:;
  /* 1027c6b1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1027c6b7 push ecx */
  push32((uint32_t)(ECX));
  /* 1027c6b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c6bb push edx */
  push32((uint32_t)(EDX));
  /* 1027c6bc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027c6bf push eax */
  push32((uint32_t)(EAX));
  /* 1027c6c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027c6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1027c6c4 call 0x1027c8d0 */
  push32(0x1027c6c9u); f_1027c8d0();
  /* 1027c6c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027c6cc:;
  /* 1027c6cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c6cf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1027c6d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027c6d4 je 0x1027c6f2 */
  if (C.zf) goto L_1027c6f2;
  /* 1027c6d6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1027c6dc push eax */
  push32((uint32_t)(EAX));
  /* 1027c6dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c6e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1027c6e1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1027c6e7 push edx */
  push32((uint32_t)(EDX));
  /* 1027c6e8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1027c6ea call 0x1027c890 */
  push32(0x1027c6efu); f_1027c890();
  /* 1027c6ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027c6f2:;
  /* 1027c6f2 jmp 0x1027bb04 */
  goto L_1027bb04;
L_1027c6f7:;
  /* 1027c6f7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1027c6fd pop edi */
  EDI = (pop32());
  /* 1027c6fe pop esi */
  ESI = (pop32());
  /* 1027c6ff pop ebx */
  EBX = (pop32());
  /* 1027c700 mov esp, ebp */
  ESP = (EBP);
  /* 1027c702 pop ebp */
  EBP = (pop32());
  /* 1027c703 ret  */
  ESPCHK(0x1027bae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c810 @ 0x1027c810 (119 bytes, 44 insns) */
void f_1027c810(void) {
  FTRACE(0x1027c810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027c810 push ebp */
  push32((uint32_t)(EBP));
  /* 1027c811 mov ebp, esp */
  EBP = (ESP);
  /* 1027c813 push ecx */
  push32((uint32_t)(ECX));
  /* 1027c814 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027c817 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1027c81a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027c81d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027c820 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1027c823 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027c826 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c82a jl 0x1027c852 */
  if ((C.sf!=C.of)) goto L_1027c852;
  /* 1027c82c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027c82f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1027c831 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1027c834 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1027c836 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1027c83a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1027c840 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1027c843 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027c846 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1027c848 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c84b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027c84e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1027c850 jmp 0x1027c865 */
  goto L_1027c865;
L_1027c852:;
  /* 1027c852 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027c855 push edx */
  push32((uint32_t)(EDX));
  /* 1027c856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c859 push eax */
  push32((uint32_t)(EAX));
  /* 1027c85a call 0x1027b860 */
  push32(0x1027c85fu); f_1027b860();
  /* 1027c85f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c862 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1027c865:;
  /* 1027c865 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c869 jne 0x1027c876 */
  if (!C.zf) goto L_1027c876;
  /* 1027c86b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027c86e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1027c874 jmp 0x1027c883 */
  goto L_1027c883;
L_1027c876:;
  /* 1027c876 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027c879 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1027c87b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c87e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027c881 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1027c883:;
  /* 1027c883 mov esp, ebp */
  ESP = (EBP);
  /* 1027c885 pop ebp */
  EBP = (pop32());
  /* 1027c886 ret  */
  ESPCHK(0x1027c810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c890 @ 0x1027c890 (53 bytes, 23 insns) */
void f_1027c890(void) {
  FTRACE(0x1027c890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027c890 push ebp */
  push32((uint32_t)(EBP));
  /* 1027c891 mov ebp, esp */
  EBP = (ESP);
L_1027c893:;
  /* 1027c893 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027c896 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027c899 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027c89c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1027c89f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027c8a1 jle 0x1027c8c3 */
  if ((C.zf||C.sf!=C.of)) goto L_1027c8c3;
  /* 1027c8a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1027c8a6 push edx */
  push32((uint32_t)(EDX));
  /* 1027c8a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027c8aa push eax */
  push32((uint32_t)(EAX));
  /* 1027c8ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c8ae push ecx */
  push32((uint32_t)(ECX));
  /* 1027c8af call 0x1027c810 */
  push32(0x1027c8b4u); f_1027c810();
  /* 1027c8b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c8b7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1027c8ba cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c8bd jne 0x1027c8c1 */
  if (!C.zf) goto L_1027c8c1;
  /* 1027c8bf jmp 0x1027c8c3 */
  goto L_1027c8c3;
L_1027c8c1:;
  /* 1027c8c1 jmp 0x1027c893 */
  goto L_1027c893;
L_1027c8c3:;
  /* 1027c8c3 pop ebp */
  EBP = (pop32());
  /* 1027c8c4 ret  */
  ESPCHK(0x1027c890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8d0 @ 0x1027c8d0 (74 bytes, 31 insns) */
void f_1027c8d0(void) {
  FTRACE(0x1027c8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027c8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027c8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1027c8d3 push ecx */
  push32((uint32_t)(ECX));
L_1027c8d4:;
  /* 1027c8d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027c8d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027c8da sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027c8dd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1027c8e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027c8e2 jle 0x1027c916 */
  if ((C.zf||C.sf!=C.of)) goto L_1027c916;
  /* 1027c8e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1027c8e7 push edx */
  push32((uint32_t)(EDX));
  /* 1027c8e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027c8eb push eax */
  push32((uint32_t)(EAX));
  /* 1027c8ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c8ef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1027c8f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1027c8f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c8f8 push eax */
  push32((uint32_t)(EAX));
  /* 1027c8f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c8fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c8ff mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1027c902 call 0x1027c810 */
  push32(0x1027c907u); f_1027c810();
  /* 1027c907 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c90a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1027c90d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c910 jne 0x1027c914 */
  if (!C.zf) goto L_1027c914;
  /* 1027c912 jmp 0x1027c916 */
  goto L_1027c916;
L_1027c914:;
  /* 1027c914 jmp 0x1027c8d4 */
  goto L_1027c8d4;
L_1027c916:;
  /* 1027c916 mov esp, ebp */
  ESP = (EBP);
  /* 1027c918 pop ebp */
  EBP = (pop32());
  /* 1027c919 ret  */
  ESPCHK(0x1027c8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c920 @ 0x1027c920 (26 bytes, 12 insns) */
void f_1027c920(void) {
  FTRACE(0x1027c920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027c920 push ebp */
  push32((uint32_t)(EBP));
  /* 1027c921 mov ebp, esp */
  EBP = (ESP);
  /* 1027c923 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c926 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1027c928 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c92b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c92e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1027c930 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c933 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1027c935 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1027c938 pop ebp */
  EBP = (pop32());
  /* 1027c939 ret  */
  ESPCHK(0x1027c920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c940 @ 0x1027c940 (31 bytes, 14 insns) */
void f_1027c940(void) {
  FTRACE(0x1027c940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027c940 push ebp */
  push32((uint32_t)(EBP));
  /* 1027c941 mov ebp, esp */
  EBP = (ESP);
  /* 1027c943 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c946 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1027c948 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c94b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c94e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1027c950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c953 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1027c955 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027c958 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1027c95a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1027c95d pop ebp */
  EBP = (pop32());
  /* 1027c95e ret  */
  ESPCHK(0x1027c940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c960 @ 0x1027c960 (27 bytes, 12 insns) */
void f_1027c960(void) {
  FTRACE(0x1027c960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027c960 push ebp */
  push32((uint32_t)(EBP));
  /* 1027c961 mov ebp, esp */
  EBP = (ESP);
  /* 1027c963 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c966 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1027c968 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c96b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c96e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1027c970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c973 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1027c975 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1027c979 pop ebp */
  EBP = (pop32());
  /* 1027c97a ret  */
  ESPCHK(0x1027c960u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1027c980 (145 bytes, 42 insns) */
void f_1027c980(void) {
  FTRACE(0x1027c980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027c980 push ebp */
  push32((uint32_t)(EBP));
  /* 1027c981 mov ebp, esp */
  EBP = (ESP);
  /* 1027c983 push ecx */
  push32((uint32_t)(ECX));
  /* 1027c984 call 0x1027ca30 */
  push32(0x1027c989u); f_1027ca30();
  /* 1027c989 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c98c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1027c98e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1027c995 jmp 0x1027c9a0 */
  goto L_1027c9a0;
L_1027c997:;
  /* 1027c997 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c99a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027c99d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1027c9a0:;
  /* 1027c9a0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c9a4 jae 0x1027c9ca */
  if (!C.cf) goto L_1027c9ca;
  /* 1027c9a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c9a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027c9ac cmp ecx, dword ptr [eax*8 + 0x1029efb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1029efb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c9b3 jne 0x1027c9c8 */
  if (!C.zf) goto L_1027c9c8;
  /* 1027c9b5 call 0x1027ca20 */
  push32(0x1027c9bau); f_1027ca20();
  /* 1027c9ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027c9bd mov ecx, dword ptr [edx*8 + 0x1029efbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1029efbc)));
  /* 1027c9c4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1027c9c6 jmp 0x1027ca0d */
  goto L_1027ca0d;
L_1027c9c8:;
  /* 1027c9c8 jmp 0x1027c997 */
  goto L_1027c997;
L_1027c9ca:;
  /* 1027c9ca cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c9ce jb 0x1027c9e3 */
  if (C.cf) goto L_1027c9e3;
  /* 1027c9d0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c9d4 ja 0x1027c9e3 */
  if ((!C.cf&&!C.zf)) goto L_1027c9e3;
  /* 1027c9d6 call 0x1027ca20 */
  push32(0x1027c9dbu); f_1027ca20();
  /* 1027c9db mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1027c9e1 jmp 0x1027ca0d */
  goto L_1027ca0d;
L_1027c9e3:;
  /* 1027c9e3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c9ea jb 0x1027ca02 */
  if (C.cf) goto L_1027ca02;
  /* 1027c9ec cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027c9f3 ja 0x1027ca02 */
  if ((!C.cf&&!C.zf)) goto L_1027ca02;
  /* 1027c9f5 call 0x1027ca20 */
  push32(0x1027c9fau); f_1027ca20();
  /* 1027c9fa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1027ca00 jmp 0x1027ca0d */
  goto L_1027ca0d;
L_1027ca02:;
  /* 1027ca02 call 0x1027ca20 */
  push32(0x1027ca07u); f_1027ca20();
  /* 1027ca07 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1027ca0d:;
  /* 1027ca0d mov esp, ebp */
  ESP = (EBP);
  /* 1027ca0f pop ebp */
  EBP = (pop32());
  /* 1027ca10 ret  */
  ESPCHK(0x1027c980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca20 @ 0x1027ca20 (13 bytes, 6 insns) */
void f_1027ca20(void) {
  FTRACE(0x1027ca20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027ca20 push ebp */
  push32((uint32_t)(EBP));
  /* 1027ca21 mov ebp, esp */
  EBP = (ESP);
  /* 1027ca23 call 0x10274590 */
  push32(0x1027ca28u); f_10274590();
  /* 1027ca28 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ca2b pop ebp */
  EBP = (pop32());
  /* 1027ca2c ret  */
  ESPCHK(0x1027ca20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca30 @ 0x1027ca30 (13 bytes, 6 insns) */
void f_1027ca30(void) {
  FTRACE(0x1027ca30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027ca30 push ebp */
  push32((uint32_t)(EBP));
  /* 1027ca31 mov ebp, esp */
  EBP = (ESP);
  /* 1027ca33 call 0x10274590 */
  push32(0x1027ca38u); f_10274590();
  /* 1027ca38 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ca3b pop ebp */
  EBP = (pop32());
  /* 1027ca3c ret  */
  ESPCHK(0x1027ca30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca40 @ 0x1027ca40 (664 bytes, 270 insns) [15 switch table(s)] */
void f_1027ca40(void) {
  FTRACE(0x1027ca40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027ca40 push ebp */
  push32((uint32_t)(EBP));
  /* 1027ca41 mov ebp, esp */
  EBP = (ESP);
  /* 1027ca43 push edi */
  push32((uint32_t)(EDI));
  /* 1027ca44 push esi */
  push32((uint32_t)(ESI));
  /* 1027ca45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1027ca48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027ca4b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ca4e mov eax, ecx */
  EAX = (ECX);
  /* 1027ca50 mov edx, ecx */
  EDX = (ECX);
  /* 1027ca52 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ca54 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ca56 jbe 0x1027ca60 */
  if ((C.cf||C.zf)) goto L_1027ca60;
  /* 1027ca58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ca5a jb 0x1027cbd8 */
  if (C.cf) goto L_1027cbd8;
L_1027ca60:;
  /* 1027ca60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1027ca66 jne 0x1027ca7c */
  if (!C.zf) goto L_1027ca7c;
  /* 1027ca68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1027ca6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1027ca6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ca71 jb 0x1027ca9c */
  if (C.cf) goto L_1027ca9c;
  /* 1027ca73 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1027ca75 jmp dword ptr [edx*4 + 0x1027cb88] */
  switch (EDX) {
    case 0: goto L_1027cb98;
    case 1: goto L_1027cba0;
    case 2: goto L_1027cbac;
    case 3: goto L_1027cbc0;
    default: x86_unimpl("switch@0x1027ca75 out of table"); return;
  }
L_1027ca7c:;
  /* 1027ca7c mov eax, edi */
  EAX = (EDI);
  /* 1027ca7e mov edx, 3 */
  EDX = (0x3u);
  /* 1027ca83 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027ca86 jb 0x1027ca94 */
  if (C.cf) goto L_1027ca94;
  /* 1027ca88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1027ca8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ca8d jmp dword ptr [eax*4 + 0x1027caa0] */
  switch (EAX) {
    case 1: goto L_1027cab0;
    case 2: goto L_1027cadc;
    case 3: goto L_1027cb00;
    default: x86_unimpl("switch@0x1027ca8d out of table"); return;
  }
L_1027ca94:;
  /* 1027ca94 jmp dword ptr [ecx*4 + 0x1027cb98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1027cb98)))); return;
  /* 1027ca9b nop  */
  /* nop */
L_1027ca9c:;
  /* 1027ca9c jmp dword ptr [ecx*4 + 0x1027cb1c] */
  switch (ECX) {
    case 0: goto L_1027cb7f;
    case 1: goto L_1027cb6c;
    case 2: goto L_1027cb64;
    case 3: goto L_1027cb5c;
    case 4: goto L_1027cb54;
    case 5: goto L_1027cb4c;
    case 6: goto L_1027cb44;
    case 7: goto L_1027cb3c;
    default: x86_unimpl("switch@0x1027ca9c out of table"); return;
  }
  /* 1027caa3 nop  */
  /* nop */
L_1027cab0:;
  /* 1027cab0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1027cab2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1027cab4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1027cab6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1027cab9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1027cabc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1027cabf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1027cac2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1027cac5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1027cac8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1027cacb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027cace jb 0x1027ca9c */
  if (C.cf) goto L_1027ca9c;
  /* 1027cad0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1027cad2 jmp dword ptr [edx*4 + 0x1027cb88] */
  switch (EDX) {
    case 0: goto L_1027cb98;
    case 1: goto L_1027cba0;
    case 2: goto L_1027cbac;
    case 3: goto L_1027cbc0;
    default: x86_unimpl("switch@0x1027cad2 out of table"); return;
  }
  /* 1027cad9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1027cadc:;
  /* 1027cadc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1027cade mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1027cae0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1027cae2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1027cae5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1027cae8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1027caeb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1027caee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1027caf1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027caf4 jb 0x1027ca9c */
  if (C.cf) goto L_1027ca9c;
  /* 1027caf6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1027caf8 jmp dword ptr [edx*4 + 0x1027cb88] */
  switch (EDX) {
    case 0: goto L_1027cb98;
    case 1: goto L_1027cba0;
    case 2: goto L_1027cbac;
    case 3: goto L_1027cbc0;
    default: x86_unimpl("switch@0x1027caf8 out of table"); return;
  }
  /* 1027caff nop  */
  /* nop */
L_1027cb00:;
  /* 1027cb00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1027cb02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1027cb04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1027cb06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1027cb07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1027cb0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1027cb0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027cb0e jb 0x1027ca9c */
  if (C.cf) goto L_1027ca9c;
  /* 1027cb10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1027cb12 jmp dword ptr [edx*4 + 0x1027cb88] */
  switch (EDX) {
    case 0: goto L_1027cb98;
    case 1: goto L_1027cba0;
    case 2: goto L_1027cbac;
    case 3: goto L_1027cbc0;
    default: x86_unimpl("switch@0x1027cb12 out of table"); return;
  }
  /* 1027cb19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1027cb3c:;
  /* 1027cb3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1027cb40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1027cb44:;
  /* 1027cb44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1027cb48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1027cb4c:;
  /* 1027cb4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1027cb50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1027cb54:;
  /* 1027cb54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1027cb58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1027cb5c:;
  /* 1027cb5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1027cb60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1027cb64:;
  /* 1027cb64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1027cb68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1027cb6c:;
  /* 1027cb6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1027cb70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1027cb74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1027cb7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1027cb7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1027cb7f:;
  /* 1027cb7f jmp dword ptr [edx*4 + 0x1027cb88] */
  switch (EDX) {
    case 0: goto L_1027cb98;
    case 1: goto L_1027cba0;
    case 2: goto L_1027cbac;
    case 3: goto L_1027cbc0;
    default: x86_unimpl("switch@0x1027cb7f out of table"); return;
  }
  /* 1027cb86 mov edi, edi */
  EDI = (EDI);
L_1027cb98:;
  /* 1027cb98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027cb9b pop esi */
  ESI = (pop32());
  /* 1027cb9c pop edi */
  EDI = (pop32());
  /* 1027cb9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1027cb9e ret  */
  ESPCHK(0x1027ca40u, _esp0);
  ESP += 4; return;
  /* 1027cb9f nop  */
  /* nop */
L_1027cba0:;
  /* 1027cba0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1027cba2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1027cba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027cba7 pop esi */
  ESI = (pop32());
  /* 1027cba8 pop edi */
  EDI = (pop32());
  /* 1027cba9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1027cbaa ret  */
  ESPCHK(0x1027ca40u, _esp0);
  ESP += 4; return;
  /* 1027cbab nop  */
  /* nop */
L_1027cbac:;
  /* 1027cbac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1027cbae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1027cbb0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1027cbb3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1027cbb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027cbb9 pop esi */
  ESI = (pop32());
  /* 1027cbba pop edi */
  EDI = (pop32());
  /* 1027cbbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1027cbbc ret  */
  ESPCHK(0x1027ca40u, _esp0);
  ESP += 4; return;
  /* 1027cbbd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1027cbc0:;
  /* 1027cbc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1027cbc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1027cbc4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1027cbc7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1027cbca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1027cbcd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1027cbd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027cbd3 pop esi */
  ESI = (pop32());
  /* 1027cbd4 pop edi */
  EDI = (pop32());
  /* 1027cbd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1027cbd6 ret  */
  ESPCHK(0x1027ca40u, _esp0);
  ESP += 4; return;
  /* 1027cbd7 nop  */
  /* nop */
L_1027cbd8:;
  /* 1027cbd8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1027cbdc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1027cbe0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1027cbe6 jne 0x1027cc0c */
  if (!C.zf) goto L_1027cc0c;
  /* 1027cbe8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1027cbeb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1027cbee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027cbf1 jb 0x1027cc00 */
  if (C.cf) goto L_1027cc00;
  /* 1027cbf3 std  */
  C.df=1;
  /* 1027cbf4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1027cbf6 cld  */
  C.df=0;
  /* 1027cbf7 jmp dword ptr [edx*4 + 0x1027cd20] */
  switch (EDX) {
    case 0: goto L_1027cd30;
    case 1: goto L_1027cd38;
    case 2: goto L_1027cd48;
    case 3: goto L_1027cd5c;
    default: x86_unimpl("switch@0x1027cbf7 out of table"); return;
  }
  /* 1027cbfe mov edi, edi */
  EDI = (EDI);
L_1027cc00:;
  /* 1027cc00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1027cc02 jmp dword ptr [ecx*4 + 0x1027ccd0] */
  switch (ECX) {
    case 0: goto L_1027cd17;
    default: x86_unimpl("switch@0x1027cc02 out of table"); return;
  }
  /* 1027cc09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1027cc0c:;
  /* 1027cc0c mov eax, edi */
  EAX = (EDI);
  /* 1027cc0e mov edx, 3 */
  EDX = (0x3u);
  /* 1027cc13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027cc16 jb 0x1027cc24 */
  if (C.cf) goto L_1027cc24;
  /* 1027cc18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1027cc1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027cc1d jmp dword ptr [eax*4 + 0x1027cc28] */
  switch (EAX) {
    case 1: goto L_1027cc38;
    case 2: goto L_1027cc58;
    case 3: goto L_1027cc80;
    default: x86_unimpl("switch@0x1027cc1d out of table"); return;
  }
L_1027cc24:;
  /* 1027cc24 jmp dword ptr [ecx*4 + 0x1027cd20] */
  switch (ECX) {
    case 0: goto L_1027cd30;
    case 1: goto L_1027cd38;
    case 2: goto L_1027cd48;
    case 3: goto L_1027cd5c;
    default: x86_unimpl("switch@0x1027cc24 out of table"); return;
  }
  /* 1027cc2b nop  */
  /* nop */
L_1027cc38:;
  /* 1027cc38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1027cc3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1027cc3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1027cc40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1027cc41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1027cc44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1027cc45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027cc48 jb 0x1027cc00 */
  if (C.cf) goto L_1027cc00;
  /* 1027cc4a std  */
  C.df=1;
  /* 1027cc4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1027cc4d cld  */
  C.df=0;
  /* 1027cc4e jmp dword ptr [edx*4 + 0x1027cd20] */
  switch (EDX) {
    case 0: goto L_1027cd30;
    case 1: goto L_1027cd38;
    case 2: goto L_1027cd48;
    case 3: goto L_1027cd5c;
    default: x86_unimpl("switch@0x1027cc4e out of table"); return;
  }
  /* 1027cc55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1027cc58:;
  /* 1027cc58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1027cc5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1027cc5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1027cc60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1027cc63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1027cc66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1027cc69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027cc6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027cc6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027cc72 jb 0x1027cc00 */
  if (C.cf) goto L_1027cc00;
  /* 1027cc74 std  */
  C.df=1;
  /* 1027cc75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1027cc77 cld  */
  C.df=0;
  /* 1027cc78 jmp dword ptr [edx*4 + 0x1027cd20] */
  switch (EDX) {
    case 0: goto L_1027cd30;
    case 1: goto L_1027cd38;
    case 2: goto L_1027cd48;
    case 3: goto L_1027cd5c;
    default: x86_unimpl("switch@0x1027cc78 out of table"); return;
  }
  /* 1027cc7f nop  */
  /* nop */
L_1027cc80:;
  /* 1027cc80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1027cc83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1027cc85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1027cc88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1027cc8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1027cc8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1027cc91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1027cc94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1027cc97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027cc9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027cc9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027cca0 jb 0x1027cc00 */
  if (C.cf) goto L_1027cc00;
  /* 1027cca6 std  */
  C.df=1;
  /* 1027cca7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1027cca9 cld  */
  C.df=0;
  /* 1027ccaa jmp dword ptr [edx*4 + 0x1027cd20] */
  switch (EDX) {
    case 0: goto L_1027cd30;
    case 1: goto L_1027cd38;
    case 2: goto L_1027cd48;
    case 3: goto L_1027cd5c;
    default: x86_unimpl("switch@0x1027ccaa out of table"); return;
  }
  /* 1027ccb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1027ccb4 aam 0xcc */
  x86_unimpl("aam @ 0x1027ccb4");
  /* 1027ccb6 daa  */
  x86_unimpl("daa @ 0x1027ccb6");
  /* 1027ccb7 adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1027ccb9 int3  */
  x86_unimpl("int3 @ 0x1027ccb9");
  /* 1027ccba daa  */
  x86_unimpl("daa @ 0x1027ccba");
  /* 1027ccbb adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1027ccbd int3  */
  x86_unimpl("int3 @ 0x1027ccbd");
  /* 1027ccbe daa  */
  x86_unimpl("daa @ 0x1027ccbe");
  /* 1027ccbf adc ah, ch */
  { uint32_t _a=(AH),_b=(C.c.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1027ccc1 int3  */
  x86_unimpl("int3 @ 0x1027ccc1");
  /* 1027ccc2 daa  */
  x86_unimpl("daa @ 0x1027ccc2");
  /* 1027ccc3 adc ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1027ccc5 int3  */
  x86_unimpl("int3 @ 0x1027ccc5");
  /* 1027ccc6 daa  */
  x86_unimpl("daa @ 0x1027ccc6");
  /* 1027ccc7 adc ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1027ccc9 int3  */
  x86_unimpl("int3 @ 0x1027ccc9");
  /* 1027ccca daa  */
  x86_unimpl("daa @ 0x1027ccca");
  /* 1027cccc add al, 0xcd */
  { uint32_t _a=(AL),_b=(0xcdu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1027ccce daa  */
  x86_unimpl("daa @ 0x1027ccce");
  /* 1027ccd4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1027ccd8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1027ccdc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1027cce0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1027cce4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1027cce8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1027ccec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1027ccf0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1027ccf4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1027ccf8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1027ccfc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1027cd00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1027cd04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1027cd08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1027cd0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1027cd13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1027cd15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1027cd17:;
  /* 1027cd17 jmp dword ptr [edx*4 + 0x1027cd20] */
  switch (EDX) {
    case 0: goto L_1027cd30;
    case 1: goto L_1027cd38;
    case 2: goto L_1027cd48;
    case 3: goto L_1027cd5c;
    default: x86_unimpl("switch@0x1027cd17 out of table"); return;
  }
  /* 1027cd1e mov edi, edi */
  EDI = (EDI);
L_1027cd30:;
  /* 1027cd30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027cd33 pop esi */
  ESI = (pop32());
  /* 1027cd34 pop edi */
  EDI = (pop32());
  /* 1027cd35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1027cd36 ret  */
  ESPCHK(0x1027ca40u, _esp0);
  ESP += 4; return;
  /* 1027cd37 nop  */
  /* nop */
L_1027cd38:;
  /* 1027cd38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1027cd3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1027cd3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027cd41 pop esi */
  ESI = (pop32());
  /* 1027cd42 pop edi */
  EDI = (pop32());
  /* 1027cd43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1027cd44 ret  */
  ESPCHK(0x1027ca40u, _esp0);
  ESP += 4; return;
  /* 1027cd45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1027cd48:;
  /* 1027cd48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1027cd4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1027cd4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1027cd51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1027cd54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027cd57 pop esi */
  ESI = (pop32());
  /* 1027cd58 pop edi */
  EDI = (pop32());
  /* 1027cd59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1027cd5a ret  */
  ESPCHK(0x1027ca40u, _esp0);
  ESP += 4; return;
  /* 1027cd5b nop  */
  /* nop */
L_1027cd5c:;
  /* 1027cd5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1027cd5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1027cd62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1027cd65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1027cd68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1027cd6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1027cd6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027cd71 pop esi */
  ESI = (pop32());
  /* 1027cd72 pop edi */
  EDI = (pop32());
  /* 1027cd73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1027cd74 ret  */
  ESPCHK(0x1027ca40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd80 @ 0x1027cd80 (421 bytes, 148 insns) */
void f_1027cd80(void) {
  FTRACE(0x1027cd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027cd80 push ebp */
  push32((uint32_t)(EBP));
  /* 1027cd81 mov ebp, esp */
  EBP = (ESP);
  /* 1027cd83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1027cd85 push 0x1029bfe8 */
  push32((uint32_t)(0x1029bfe8u));
  /* 1027cd8a push 0x1027dc58 */
  push32((uint32_t)(0x1027dc58u));
  /* 1027cd8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1027cd95 push eax */
  push32((uint32_t)(EAX));
  /* 1027cd96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1027cd9d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027cda0 push ebx */
  push32((uint32_t)(EBX));
  /* 1027cda1 push esi */
  push32((uint32_t)(ESI));
  /* 1027cda2 push edi */
  push32((uint32_t)(EDI));
  /* 1027cda3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1027cda6 cmp dword ptr [0x102a079c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a079c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027cdad jne 0x1027cdfe */
  if (!C.zf) goto L_1027cdfe;
  /* 1027cdaf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1027cdb2 push eax */
  push32((uint32_t)(EAX));
  /* 1027cdb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027cdb5 push 0x1029bfe0 */
  push32((uint32_t)(0x1029bfe0u));
  /* 1027cdba push 1 */
  push32((uint32_t)(0x1u));
  /* 1027cdbc call dword ptr [0x102a32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32c4))), 0x1027cdc2u);
  /* 1027cdc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027cdc4 je 0x1027cdd2 */
  if (C.zf) goto L_1027cdd2;
  /* 1027cdc6 mov dword ptr [0x102a079c], 1 */
  w32((uint32_t)(0x102a079c), (0x1u));
  /* 1027cdd0 jmp 0x1027cdfe */
  goto L_1027cdfe;
L_1027cdd2:;
  /* 1027cdd2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1027cdd5 push ecx */
  push32((uint32_t)(ECX));
  /* 1027cdd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027cdd8 push 0x1029bfdc */
  push32((uint32_t)(0x1029bfdcu));
  /* 1027cddd push 1 */
  push32((uint32_t)(0x1u));
  /* 1027cddf push 0 */
  push32((uint32_t)(0x0u));
  /* 1027cde1 call dword ptr [0x102a32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32d4))), 0x1027cde7u);
  /* 1027cde7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027cde9 je 0x1027cdf7 */
  if (C.zf) goto L_1027cdf7;
  /* 1027cdeb mov dword ptr [0x102a079c], 2 */
  w32((uint32_t)(0x102a079c), (0x2u));
  /* 1027cdf5 jmp 0x1027cdfe */
  goto L_1027cdfe;
L_1027cdf7:;
  /* 1027cdf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027cdf9 jmp 0x1027cf28 */
  goto L_1027cf28;
L_1027cdfe:;
  /* 1027cdfe cmp dword ptr [0x102a079c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x102a079c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ce05 jne 0x1027ce35 */
  if (!C.zf) goto L_1027ce35;
  /* 1027ce07 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ce0b jne 0x1027ce16 */
  if (!C.zf) goto L_1027ce16;
  /* 1027ce0d mov edx, dword ptr [0x102a07a8] */
  EDX = (r32((uint32_t)(0x102a07a8)));
  /* 1027ce13 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1027ce16:;
  /* 1027ce16 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1027ce19 push eax */
  push32((uint32_t)(EAX));
  /* 1027ce1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027ce1d push ecx */
  push32((uint32_t)(ECX));
  /* 1027ce1e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027ce21 push edx */
  push32((uint32_t)(EDX));
  /* 1027ce22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ce25 push eax */
  push32((uint32_t)(EAX));
  /* 1027ce26 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1027ce29 push ecx */
  push32((uint32_t)(ECX));
  /* 1027ce2a call dword ptr [0x102a32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32d4))), 0x1027ce30u);
  /* 1027ce30 jmp 0x1027cf28 */
  goto L_1027cf28;
L_1027ce35:;
  /* 1027ce35 cmp dword ptr [0x102a079c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102a079c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ce3c jne 0x1027cf26 */
  if (!C.zf) goto L_1027cf26;
  /* 1027ce42 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ce46 jne 0x1027ce51 */
  if (!C.zf) goto L_1027ce51;
  /* 1027ce48 mov edx, dword ptr [0x102a07b8] */
  EDX = (r32((uint32_t)(0x102a07b8)));
  /* 1027ce4e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1027ce51:;
  /* 1027ce51 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027ce53 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027ce55 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027ce58 push eax */
  push32((uint32_t)(EAX));
  /* 1027ce59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027ce5c push ecx */
  push32((uint32_t)(ECX));
  /* 1027ce5d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1027ce60 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1027ce62 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027ce64 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1027ce67 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ce6a push edx */
  push32((uint32_t)(EDX));
  /* 1027ce6b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1027ce6e push eax */
  push32((uint32_t)(EAX));
  /* 1027ce6f call dword ptr [0x102a32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32cc))), 0x1027ce75u);
  /* 1027ce75 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1027ce78 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ce7c jne 0x1027ce85 */
  if (!C.zf) goto L_1027ce85;
  /* 1027ce7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027ce80 jmp 0x1027cf28 */
  goto L_1027cf28;
L_1027ce85:;
  /* 1027ce85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1027ce8c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027ce8f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1027ce91 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ce94 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1027ce96 call 0x10277cf0 */
  push32(0x1027ce9bu); f_10277cf0();
  /* 1027ce9b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1027ce9e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1027cea1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1027cea4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1027cea7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027ceaa shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1027ceac push edx */
  push32((uint32_t)(EDX));
  /* 1027cead push 0 */
  push32((uint32_t)(0x0u));
  /* 1027ceaf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027ceb2 push eax */
  push32((uint32_t)(EAX));
  /* 1027ceb3 call 0x102788c0 */
  push32(0x1027ceb8u); f_102788c0();
  /* 1027ceb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027cebb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1027cec2 jmp 0x1027cedb */
  goto L_1027cedb;
  /* 1027cec4 mov eax, 1 */
  EAX = (0x1u);
  /* 1027cec9 ret  */
  ESPCHK(0x1027cd80u, _esp0);
  ESP += 4; return;
  /* 1027ceca mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1027cecd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1027ced4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1027cedb:;
  /* 1027cedb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027cedf jne 0x1027cee5 */
  if (!C.zf) goto L_1027cee5;
  /* 1027cee1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027cee3 jmp 0x1027cf28 */
  goto L_1027cf28;
L_1027cee5:;
  /* 1027cee5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027cee8 push ecx */
  push32((uint32_t)(ECX));
  /* 1027cee9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027ceec push edx */
  push32((uint32_t)(EDX));
  /* 1027ceed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027cef0 push eax */
  push32((uint32_t)(EAX));
  /* 1027cef1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027cef4 push ecx */
  push32((uint32_t)(ECX));
  /* 1027cef5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027cef7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1027cefa push edx */
  push32((uint32_t)(EDX));
  /* 1027cefb call dword ptr [0x102a32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32cc))), 0x1027cf01u);
  /* 1027cf01 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1027cf04 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027cf08 jne 0x1027cf0e */
  if (!C.zf) goto L_1027cf0e;
  /* 1027cf0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027cf0c jmp 0x1027cf28 */
  goto L_1027cf28;
L_1027cf0e:;
  /* 1027cf0e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1027cf11 push eax */
  push32((uint32_t)(EAX));
  /* 1027cf12 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027cf15 push ecx */
  push32((uint32_t)(ECX));
  /* 1027cf16 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027cf19 push edx */
  push32((uint32_t)(EDX));
  /* 1027cf1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027cf1d push eax */
  push32((uint32_t)(EAX));
  /* 1027cf1e call dword ptr [0x102a32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32c4))), 0x1027cf24u);
  /* 1027cf24 jmp 0x1027cf28 */
  goto L_1027cf28;
L_1027cf26:;
  /* 1027cf26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1027cf28:;
  /* 1027cf28 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1027cf2b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027cf2e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1027cf35 pop edi */
  EDI = (pop32());
  /* 1027cf36 pop esi */
  ESI = (pop32());
  /* 1027cf37 pop ebx */
  EBX = (pop32());
  /* 1027cf38 mov esp, ebp */
  ESP = (EBP);
  /* 1027cf3a pop ebp */
  EBP = (pop32());
  /* 1027cf3b ret  */
  ESPCHK(0x1027cd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf40 @ 0x1027cf40 (727 bytes, 263 insns) */
void f_1027cf40(void) {
  FTRACE(0x1027cf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027cf40 push ebp */
  push32((uint32_t)(EBP));
  /* 1027cf41 mov ebp, esp */
  EBP = (ESP);
  /* 1027cf43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1027cf45 push 0x1029bff8 */
  push32((uint32_t)(0x1029bff8u));
  /* 1027cf4a push 0x1027dc58 */
  push32((uint32_t)(0x1027dc58u));
  /* 1027cf4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1027cf55 push eax */
  push32((uint32_t)(EAX));
  /* 1027cf56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1027cf5d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027cf60 push ebx */
  push32((uint32_t)(EBX));
  /* 1027cf61 push esi */
  push32((uint32_t)(ESI));
  /* 1027cf62 push edi */
  push32((uint32_t)(EDI));
  /* 1027cf63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1027cf66 cmp dword ptr [0x102a07c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a07c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027cf6d jne 0x1027cfc6 */
  if (!C.zf) goto L_1027cfc6;
  /* 1027cf6f push 0 */
  push32((uint32_t)(0x0u));
  /* 1027cf71 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027cf73 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027cf75 push 0x1029bfe0 */
  push32((uint32_t)(0x1029bfe0u));
  /* 1027cf7a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1027cf7f push 0 */
  push32((uint32_t)(0x0u));
  /* 1027cf81 call dword ptr [0x102a32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32c8))), 0x1027cf87u);
  /* 1027cf87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027cf89 je 0x1027cf97 */
  if (C.zf) goto L_1027cf97;
  /* 1027cf8b mov dword ptr [0x102a07c0], 1 */
  w32((uint32_t)(0x102a07c0), (0x1u));
  /* 1027cf95 jmp 0x1027cfc6 */
  goto L_1027cfc6;
L_1027cf97:;
  /* 1027cf97 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027cf99 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027cf9b push 1 */
  push32((uint32_t)(0x1u));
  /* 1027cf9d push 0x1029bfdc */
  push32((uint32_t)(0x1029bfdcu));
  /* 1027cfa2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1027cfa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027cfa9 call dword ptr [0x102a32c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32c0))), 0x1027cfafu);
  /* 1027cfaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027cfb1 je 0x1027cfbf */
  if (C.zf) goto L_1027cfbf;
  /* 1027cfb3 mov dword ptr [0x102a07c0], 2 */
  w32((uint32_t)(0x102a07c0), (0x2u));
  /* 1027cfbd jmp 0x1027cfc6 */
  goto L_1027cfc6;
L_1027cfbf:;
  /* 1027cfbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027cfc1 jmp 0x1027d231 */
  goto L_1027d231;
L_1027cfc6:;
  /* 1027cfc6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027cfca jle 0x1027cfdf */
  if ((C.zf||C.sf!=C.of)) goto L_1027cfdf;
  /* 1027cfcc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1027cfcf push eax */
  push32((uint32_t)(EAX));
  /* 1027cfd0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027cfd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1027cfd4 call 0x1027d250 */
  push32(0x1027cfd9u); f_1027d250();
  /* 1027cfd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027cfdc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1027cfdf:;
  /* 1027cfdf cmp dword ptr [0x102a07c0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x102a07c0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027cfe6 jne 0x1027d00b */
  if (!C.zf) goto L_1027d00b;
  /* 1027cfe8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1027cfeb push edx */
  push32((uint32_t)(EDX));
  /* 1027cfec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1027cfef push eax */
  push32((uint32_t)(EAX));
  /* 1027cff0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1027cff3 push ecx */
  push32((uint32_t)(ECX));
  /* 1027cff4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027cff7 push edx */
  push32((uint32_t)(EDX));
  /* 1027cff8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027cffb push eax */
  push32((uint32_t)(EAX));
  /* 1027cffc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027cfff push ecx */
  push32((uint32_t)(ECX));
  /* 1027d000 call dword ptr [0x102a32c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32c0))), 0x1027d006u);
  /* 1027d006 jmp 0x1027d231 */
  goto L_1027d231;
L_1027d00b:;
  /* 1027d00b cmp dword ptr [0x102a07c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102a07c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d012 jne 0x1027d22f */
  if (!C.zf) goto L_1027d22f;
  /* 1027d018 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d01c jne 0x1027d027 */
  if (!C.zf) goto L_1027d027;
  /* 1027d01e mov edx, dword ptr [0x102a07b8] */
  EDX = (r32((uint32_t)(0x102a07b8)));
  /* 1027d024 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1027d027:;
  /* 1027d027 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027d029 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027d02b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1027d02e push eax */
  push32((uint32_t)(EAX));
  /* 1027d02f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027d032 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d033 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1027d036 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1027d038 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027d03a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1027d03d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d040 push edx */
  push32((uint32_t)(EDX));
  /* 1027d041 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1027d044 push eax */
  push32((uint32_t)(EAX));
  /* 1027d045 call dword ptr [0x102a32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32cc))), 0x1027d04bu);
  /* 1027d04b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1027d04e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d052 jne 0x1027d05b */
  if (!C.zf) goto L_1027d05b;
  /* 1027d054 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027d056 jmp 0x1027d231 */
  goto L_1027d231;
L_1027d05b:;
  /* 1027d05b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1027d062 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1027d065 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1027d067 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d06a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1027d06c call 0x10277cf0 */
  push32(0x1027d071u); f_10277cf0();
  /* 1027d071 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1027d074 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1027d077 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1027d07a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1027d07d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1027d084 jmp 0x1027d09d */
  goto L_1027d09d;
  /* 1027d086 mov eax, 1 */
  EAX = (0x1u);
  /* 1027d08b ret  */
  ESPCHK(0x1027cf40u, _esp0);
  ESP += 4; return;
  /* 1027d08c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1027d08f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1027d096 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1027d09d:;
  /* 1027d09d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d0a1 jne 0x1027d0aa */
  if (!C.zf) goto L_1027d0aa;
  /* 1027d0a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027d0a5 jmp 0x1027d231 */
  goto L_1027d231;
L_1027d0aa:;
  /* 1027d0aa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1027d0ad push edx */
  push32((uint32_t)(EDX));
  /* 1027d0ae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027d0b1 push eax */
  push32((uint32_t)(EAX));
  /* 1027d0b2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1027d0b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d0b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027d0b9 push edx */
  push32((uint32_t)(EDX));
  /* 1027d0ba push 1 */
  push32((uint32_t)(0x1u));
  /* 1027d0bc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1027d0bf push eax */
  push32((uint32_t)(EAX));
  /* 1027d0c0 call dword ptr [0x102a32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32cc))), 0x1027d0c6u);
  /* 1027d0c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027d0c8 jne 0x1027d0d1 */
  if (!C.zf) goto L_1027d0d1;
  /* 1027d0ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027d0cc jmp 0x1027d231 */
  goto L_1027d231;
L_1027d0d1:;
  /* 1027d0d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027d0d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027d0d5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1027d0d8 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d0d9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027d0dc push edx */
  push32((uint32_t)(EDX));
  /* 1027d0dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027d0e0 push eax */
  push32((uint32_t)(EAX));
  /* 1027d0e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d0e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d0e5 call dword ptr [0x102a32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32c8))), 0x1027d0ebu);
  /* 1027d0eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1027d0ee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d0f2 jne 0x1027d0fb */
  if (!C.zf) goto L_1027d0fb;
  /* 1027d0f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027d0f6 jmp 0x1027d231 */
  goto L_1027d231;
L_1027d0fb:;
  /* 1027d0fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027d0fe and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1027d104 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027d106 je 0x1027d14b */
  if (C.zf) goto L_1027d14b;
  /* 1027d108 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d10c je 0x1027d146 */
  if (C.zf) goto L_1027d146;
  /* 1027d10e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027d111 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d114 jle 0x1027d11d */
  if ((C.zf||C.sf!=C.of)) goto L_1027d11d;
  /* 1027d116 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027d118 jmp 0x1027d231 */
  goto L_1027d231;
L_1027d11d:;
  /* 1027d11d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1027d120 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d121 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1027d124 push edx */
  push32((uint32_t)(EDX));
  /* 1027d125 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1027d128 push eax */
  push32((uint32_t)(EAX));
  /* 1027d129 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027d12c push ecx */
  push32((uint32_t)(ECX));
  /* 1027d12d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027d130 push edx */
  push32((uint32_t)(EDX));
  /* 1027d131 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d134 push eax */
  push32((uint32_t)(EAX));
  /* 1027d135 call dword ptr [0x102a32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32c8))), 0x1027d13bu);
  /* 1027d13b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027d13d jne 0x1027d146 */
  if (!C.zf) goto L_1027d146;
  /* 1027d13f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027d141 jmp 0x1027d231 */
  goto L_1027d231;
L_1027d146:;
  /* 1027d146 jmp 0x1027d22a */
  goto L_1027d22a;
L_1027d14b:;
  /* 1027d14b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027d14e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1027d151 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1027d158 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1027d15b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1027d15d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d160 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1027d162 call 0x10277cf0 */
  push32(0x1027d167u); f_10277cf0();
  /* 1027d167 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1027d16a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1027d16d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1027d170 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1027d173 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1027d17a jmp 0x1027d193 */
  goto L_1027d193;
  /* 1027d17c mov eax, 1 */
  EAX = (0x1u);
  /* 1027d181 ret  */
  ESPCHK(0x1027cf40u, _esp0);
  ESP += 4; return;
  /* 1027d182 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1027d185 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1027d18c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1027d193:;
  /* 1027d193 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d197 jne 0x1027d1a0 */
  if (!C.zf) goto L_1027d1a0;
  /* 1027d199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027d19b jmp 0x1027d231 */
  goto L_1027d231;
L_1027d1a0:;
  /* 1027d1a0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1027d1a3 push eax */
  push32((uint32_t)(EAX));
  /* 1027d1a4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027d1a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d1a8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1027d1ab push edx */
  push32((uint32_t)(EDX));
  /* 1027d1ac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1027d1af push eax */
  push32((uint32_t)(EAX));
  /* 1027d1b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027d1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d1b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d1b7 push edx */
  push32((uint32_t)(EDX));
  /* 1027d1b8 call dword ptr [0x102a32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32c8))), 0x1027d1beu);
  /* 1027d1be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027d1c0 jne 0x1027d1c6 */
  if (!C.zf) goto L_1027d1c6;
  /* 1027d1c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027d1c4 jmp 0x1027d231 */
  goto L_1027d231;
L_1027d1c6:;
  /* 1027d1c6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d1ca jne 0x1027d1fa */
  if (!C.zf) goto L_1027d1fa;
  /* 1027d1cc push 0 */
  push32((uint32_t)(0x0u));
  /* 1027d1ce push 0 */
  push32((uint32_t)(0x0u));
  /* 1027d1d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027d1d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027d1d4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1027d1d7 push eax */
  push32((uint32_t)(EAX));
  /* 1027d1d8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027d1db push ecx */
  push32((uint32_t)(ECX));
  /* 1027d1dc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1027d1e1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1027d1e4 push edx */
  push32((uint32_t)(EDX));
  /* 1027d1e5 call dword ptr [0x102a3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3364))), 0x1027d1ebu);
  /* 1027d1eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1027d1ee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d1f2 jne 0x1027d1f8 */
  if (!C.zf) goto L_1027d1f8;
  /* 1027d1f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027d1f6 jmp 0x1027d231 */
  goto L_1027d231;
L_1027d1f8:;
  /* 1027d1f8 jmp 0x1027d22a */
  goto L_1027d22a;
L_1027d1fa:;
  /* 1027d1fa push 0 */
  push32((uint32_t)(0x0u));
  /* 1027d1fc push 0 */
  push32((uint32_t)(0x0u));
  /* 1027d1fe mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1027d201 push eax */
  push32((uint32_t)(EAX));
  /* 1027d202 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1027d205 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d206 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1027d209 push edx */
  push32((uint32_t)(EDX));
  /* 1027d20a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1027d20d push eax */
  push32((uint32_t)(EAX));
  /* 1027d20e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1027d213 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1027d216 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d217 call dword ptr [0x102a3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3364))), 0x1027d21du);
  /* 1027d21d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1027d220 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d224 jne 0x1027d22a */
  if (!C.zf) goto L_1027d22a;
  /* 1027d226 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027d228 jmp 0x1027d231 */
  goto L_1027d231;
L_1027d22a:;
  /* 1027d22a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1027d22d jmp 0x1027d231 */
  goto L_1027d231;
L_1027d22f:;
  /* 1027d22f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1027d231:;
  /* 1027d231 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1027d234 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027d237 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1027d23e pop edi */
  EDI = (pop32());
  /* 1027d23f pop esi */
  ESI = (pop32());
  /* 1027d240 pop ebx */
  EBX = (pop32());
  /* 1027d241 mov esp, ebp */
  ESP = (EBP);
  /* 1027d243 pop ebp */
  EBP = (pop32());
  /* 1027d244 ret  */
  ESPCHK(0x1027cf40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d250 @ 0x1027d250 (80 bytes, 32 insns) */
void f_1027d250(void) {
  FTRACE(0x1027d250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027d250 push ebp */
  push32((uint32_t)(EBP));
  /* 1027d251 mov ebp, esp */
  EBP = (ESP);
  /* 1027d253 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027d256 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027d259 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1027d25c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d25f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1027d262:;
  /* 1027d262 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027d265 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027d268 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027d26b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1027d26e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027d270 je 0x1027d287 */
  if (C.zf) goto L_1027d287;
  /* 1027d272 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d275 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1027d278 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027d27a je 0x1027d287 */
  if (C.zf) goto L_1027d287;
  /* 1027d27c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d27f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d282 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027d285 jmp 0x1027d262 */
  goto L_1027d262;
L_1027d287:;
  /* 1027d287 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d28a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1027d28d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027d28f jne 0x1027d299 */
  if (!C.zf) goto L_1027d299;
  /* 1027d291 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d294 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027d297 jmp 0x1027d29c */
  goto L_1027d29c;
L_1027d299:;
  /* 1027d299 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1027d29c:;
  /* 1027d29c mov esp, ebp */
  ESP = (EBP);
  /* 1027d29e pop ebp */
  EBP = (pop32());
  /* 1027d29f ret  */
  ESPCHK(0x1027d250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2a0 @ 0x1027d2a0 (130 bytes, 43 insns) */
void f_1027d2a0(void) {
  FTRACE(0x1027d2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027d2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027d2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1027d2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d2a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d2a7 cmp eax, dword ptr [0x102a20bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102a20bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d2ad jae 0x1027d2d1 */
  if (!C.cf) goto L_1027d2d1;
  /* 1027d2af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d2b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1027d2b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d2b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1027d2bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027d2be mov eax, dword ptr [ecx*4 + 0x102a1f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x102a1f80)));
  /* 1027d2c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1027d2ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1027d2cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027d2cf jne 0x1027d2ec */
  if (!C.zf) goto L_1027d2ec;
L_1027d2d1:;
  /* 1027d2d1 call 0x1027ca20 */
  push32(0x1027d2d6u); f_1027ca20();
  /* 1027d2d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1027d2dc call 0x1027ca30 */
  push32(0x1027d2e1u); f_1027ca30();
  /* 1027d2e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1027d2e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027d2ea jmp 0x1027d31e */
  goto L_1027d31e;
L_1027d2ec:;
  /* 1027d2ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d2ef push edx */
  push32((uint32_t)(EDX));
  /* 1027d2f0 call 0x1027e240 */
  push32(0x1027d2f5u); f_1027e240();
  /* 1027d2f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d2f8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027d2fb push eax */
  push32((uint32_t)(EAX));
  /* 1027d2fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027d2ff push ecx */
  push32((uint32_t)(ECX));
  /* 1027d300 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d303 push edx */
  push32((uint32_t)(EDX));
  /* 1027d304 call 0x1027d330 */
  push32(0x1027d309u); f_1027d330();
  /* 1027d309 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d30c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027d30f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d312 push eax */
  push32((uint32_t)(EAX));
  /* 1027d313 call 0x1027e2d0 */
  push32(0x1027d318u); f_1027e2d0();
  /* 1027d318 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d31b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1027d31e:;
  /* 1027d31e mov esp, ebp */
  ESP = (EBP);
  /* 1027d320 pop ebp */
  EBP = (pop32());
  /* 1027d321 ret  */
  ESPCHK(0x1027d2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d330 @ 0x1027d330 (178 bytes, 56 insns) */
void f_1027d330(void) {
  FTRACE(0x1027d330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027d330 push ebp */
  push32((uint32_t)(EBP));
  /* 1027d331 mov ebp, esp */
  EBP = (ESP);
  /* 1027d333 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027d336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d339 push eax */
  push32((uint32_t)(EAX));
  /* 1027d33a call 0x1027e0c0 */
  push32(0x1027d33fu); f_1027e0c0();
  /* 1027d33f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d342 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1027d345 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d349 jne 0x1027d35e */
  if (!C.zf) goto L_1027d35e;
  /* 1027d34b call 0x1027ca20 */
  push32(0x1027d350u); f_1027ca20();
  /* 1027d350 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1027d356 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027d359 jmp 0x1027d3de */
  goto L_1027d3de;
L_1027d35e:;
  /* 1027d35e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027d361 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d362 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027d364 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027d367 push edx */
  push32((uint32_t)(EDX));
  /* 1027d368 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027d36b push eax */
  push32((uint32_t)(EAX));
  /* 1027d36c call dword ptr [0x102a32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32b8))), 0x1027d372u);
  /* 1027d372 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1027d375 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d379 jne 0x1027d386 */
  if (!C.zf) goto L_1027d386;
  /* 1027d37b call dword ptr [0x102a3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3338))), 0x1027d381u);
  /* 1027d381 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027d384 jmp 0x1027d38d */
  goto L_1027d38d;
L_1027d386:;
  /* 1027d386 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1027d38d:;
  /* 1027d38d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d391 je 0x1027d3a4 */
  if (C.zf) goto L_1027d3a4;
  /* 1027d393 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d396 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d397 call 0x1027c980 */
  push32(0x1027d39cu); f_1027c980();
  /* 1027d39c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d39f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027d3a2 jmp 0x1027d3de */
  goto L_1027d3de;
L_1027d3a4:;
  /* 1027d3a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d3a7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1027d3aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d3ad and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1027d3b0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027d3b3 mov ecx, dword ptr [edx*4 + 0x102a1f80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x102a1f80)));
  /* 1027d3ba mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1027d3be and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1027d3c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d3c4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1027d3c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d3ca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1027d3cd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027d3d0 mov eax, dword ptr [eax*4 + 0x102a1f80] */
  EAX = (r32((uint32_t)(EAX*4 + 0x102a1f80)));
  /* 1027d3d7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1027d3db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1027d3de:;
  /* 1027d3de mov esp, ebp */
  ESP = (EBP);
  /* 1027d3e0 pop ebp */
  EBP = (pop32());
  /* 1027d3e1 ret  */
  ESPCHK(0x1027d330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3f0 @ 0x1027d3f0 (130 bytes, 43 insns) */
void f_1027d3f0(void) {
  FTRACE(0x1027d3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027d3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027d3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1027d3f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d3f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d3f7 cmp eax, dword ptr [0x102a20bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102a20bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d3fd jae 0x1027d421 */
  if (!C.cf) goto L_1027d421;
  /* 1027d3ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d402 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1027d405 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d408 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1027d40b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027d40e mov eax, dword ptr [ecx*4 + 0x102a1f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x102a1f80)));
  /* 1027d415 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1027d41a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1027d41d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027d41f jne 0x1027d43c */
  if (!C.zf) goto L_1027d43c;
L_1027d421:;
  /* 1027d421 call 0x1027ca20 */
  push32(0x1027d426u); f_1027ca20();
  /* 1027d426 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1027d42c call 0x1027ca30 */
  push32(0x1027d431u); f_1027ca30();
  /* 1027d431 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1027d437 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027d43a jmp 0x1027d46e */
  goto L_1027d46e;
L_1027d43c:;
  /* 1027d43c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d43f push edx */
  push32((uint32_t)(EDX));
  /* 1027d440 call 0x1027e240 */
  push32(0x1027d445u); f_1027e240();
  /* 1027d445 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d448 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027d44b push eax */
  push32((uint32_t)(EAX));
  /* 1027d44c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027d44f push ecx */
  push32((uint32_t)(ECX));
  /* 1027d450 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d453 push edx */
  push32((uint32_t)(EDX));
  /* 1027d454 call 0x1027d480 */
  push32(0x1027d459u); f_1027d480();
  /* 1027d459 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d45c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027d45f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d462 push eax */
  push32((uint32_t)(EAX));
  /* 1027d463 call 0x1027e2d0 */
  push32(0x1027d468u); f_1027e2d0();
  /* 1027d468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d46b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1027d46e:;
  /* 1027d46e mov esp, ebp */
  ESP = (EBP);
  /* 1027d470 pop ebp */
  EBP = (pop32());
  /* 1027d471 ret  */
  ESPCHK(0x1027d3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d480 @ 0x1027d480 (627 bytes, 182 insns) */
void f_1027d480(void) {
  FTRACE(0x1027d480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027d480 push ebp */
  push32((uint32_t)(EBP));
  /* 1027d481 mov ebp, esp */
  EBP = (ESP);
  /* 1027d483 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027d489 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1027d490 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027d493 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1027d499 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d49d jne 0x1027d4a6 */
  if (!C.zf) goto L_1027d4a6;
  /* 1027d49f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027d4a1 jmp 0x1027d6ef */
  goto L_1027d6ef;
L_1027d4a6:;
  /* 1027d4a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d4a9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1027d4ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d4af and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1027d4b2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027d4b5 mov eax, dword ptr [ecx*4 + 0x102a1f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x102a1f80)));
  /* 1027d4bc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1027d4c1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1027d4c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027d4c6 je 0x1027d4d8 */
  if (C.zf) goto L_1027d4d8;
  /* 1027d4c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027d4ca push 0 */
  push32((uint32_t)(0x0u));
  /* 1027d4cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d4cf push edx */
  push32((uint32_t)(EDX));
  /* 1027d4d0 call 0x1027d330 */
  push32(0x1027d4d5u); f_1027d330();
  /* 1027d4d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027d4d8:;
  /* 1027d4d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d4db sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1027d4de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d4e1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1027d4e4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027d4e7 mov edx, dword ptr [eax*4 + 0x102a1f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x102a1f80)));
  /* 1027d4ee movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1027d4f3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1027d4f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027d4fa je 0x1027d60c */
  if (C.zf) goto L_1027d60c;
  /* 1027d500 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027d503 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1027d506 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1027d50d:;
  /* 1027d50d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d510 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027d513 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d516 jae 0x1027d60a */
  if (!C.cf) goto L_1027d60a;
  /* 1027d51c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1027d522 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1027d525:;
  /* 1027d525 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027d528 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1027d52e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027d530 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d536 jge 0x1027d597 */
  if ((C.sf==C.of)) goto L_1027d597;
  /* 1027d538 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d53b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027d53e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d541 jae 0x1027d597 */
  if (!C.cf) goto L_1027d597;
  /* 1027d543 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d546 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1027d548 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1027d54e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d551 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d554 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027d557 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1027d55e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d561 jne 0x1027d581 */
  if (!C.zf) goto L_1027d581;
  /* 1027d563 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1027d569 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d56c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1027d572 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027d575 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1027d578 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027d57b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d57e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1027d581:;
  /* 1027d581 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027d584 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1027d58a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1027d58c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027d58f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d592 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1027d595 jmp 0x1027d525 */
  goto L_1027d525;
L_1027d597:;
  /* 1027d597 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027d599 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1027d59f push edx */
  push32((uint32_t)(EDX));
  /* 1027d5a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027d5a3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1027d5a9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027d5ab push eax */
  push32((uint32_t)(EAX));
  /* 1027d5ac lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1027d5b2 push edx */
  push32((uint32_t)(EDX));
  /* 1027d5b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d5b6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1027d5b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d5bc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1027d5bf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027d5c2 mov edx, dword ptr [eax*4 + 0x102a1f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x102a1f80)));
  /* 1027d5c9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1027d5cc push eax */
  push32((uint32_t)(EAX));
  /* 1027d5cd call dword ptr [0x102a32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32f8))), 0x1027d5d3u);
  /* 1027d5d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027d5d5 je 0x1027d5fa */
  if (C.zf) goto L_1027d5fa;
  /* 1027d5d7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027d5da add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d5e0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1027d5e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027d5e6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1027d5ec sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027d5ee cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d5f4 jge 0x1027d5f8 */
  if ((C.sf==C.of)) goto L_1027d5f8;
  /* 1027d5f6 jmp 0x1027d60a */
  goto L_1027d60a;
L_1027d5f8:;
  /* 1027d5f8 jmp 0x1027d605 */
  goto L_1027d605;
L_1027d5fa:;
  /* 1027d5fa call dword ptr [0x102a3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3338))), 0x1027d600u);
  /* 1027d600 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1027d603 jmp 0x1027d60a */
  goto L_1027d60a;
L_1027d605:;
  /* 1027d605 jmp 0x1027d50d */
  goto L_1027d50d;
L_1027d60a:;
  /* 1027d60a jmp 0x1027d65c */
  goto L_1027d65c;
L_1027d60c:;
  /* 1027d60c push 0 */
  push32((uint32_t)(0x0u));
  /* 1027d60e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1027d614 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d615 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027d618 push edx */
  push32((uint32_t)(EDX));
  /* 1027d619 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027d61c push eax */
  push32((uint32_t)(EAX));
  /* 1027d61d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d620 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1027d623 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d626 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1027d629 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027d62c mov eax, dword ptr [ecx*4 + 0x102a1f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x102a1f80)));
  /* 1027d633 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1027d636 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d637 call dword ptr [0x102a32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32f8))), 0x1027d63du);
  /* 1027d63d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027d63f je 0x1027d653 */
  if (C.zf) goto L_1027d653;
  /* 1027d641 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1027d648 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1027d64e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1027d651 jmp 0x1027d65c */
  goto L_1027d65c;
L_1027d653:;
  /* 1027d653 call dword ptr [0x102a3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3338))), 0x1027d659u);
  /* 1027d659 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1027d65c:;
  /* 1027d65c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d660 jne 0x1027d6e6 */
  if (!C.zf) goto L_1027d6e6;
  /* 1027d666 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d66a je 0x1027d69a */
  if (C.zf) goto L_1027d69a;
  /* 1027d66c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d670 jne 0x1027d689 */
  if (!C.zf) goto L_1027d689;
  /* 1027d672 call 0x1027ca20 */
  push32(0x1027d677u); f_1027ca20();
  /* 1027d677 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1027d67d call 0x1027ca30 */
  push32(0x1027d682u); f_1027ca30();
  /* 1027d682 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027d685 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1027d687 jmp 0x1027d695 */
  goto L_1027d695;
L_1027d689:;
  /* 1027d689 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027d68c push edx */
  push32((uint32_t)(EDX));
  /* 1027d68d call 0x1027c980 */
  push32(0x1027d692u); f_1027c980();
  /* 1027d692 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027d695:;
  /* 1027d695 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027d698 jmp 0x1027d6ef */
  goto L_1027d6ef;
L_1027d69a:;
  /* 1027d69a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d69d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1027d6a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d6a3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1027d6a6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027d6a9 mov edx, dword ptr [eax*4 + 0x102a1f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x102a1f80)));
  /* 1027d6b0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1027d6b5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1027d6b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027d6ba je 0x1027d6cb */
  if (C.zf) goto L_1027d6cb;
  /* 1027d6bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027d6bf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1027d6c2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d6c5 jne 0x1027d6cb */
  if (!C.zf) goto L_1027d6cb;
  /* 1027d6c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027d6c9 jmp 0x1027d6ef */
  goto L_1027d6ef;
L_1027d6cb:;
  /* 1027d6cb call 0x1027ca20 */
  push32(0x1027d6d0u); f_1027ca20();
  /* 1027d6d0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1027d6d6 call 0x1027ca30 */
  push32(0x1027d6dbu); f_1027ca30();
  /* 1027d6db mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1027d6e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027d6e4 jmp 0x1027d6ef */
  goto L_1027d6ef;
L_1027d6e6:;
  /* 1027d6e6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027d6e9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1027d6ef:;
  /* 1027d6ef mov esp, ebp */
  ESP = (EBP);
  /* 1027d6f1 pop ebp */
  EBP = (pop32());
  /* 1027d6f2 ret  */
  ESPCHK(0x1027d480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d700 @ 0x1027d700 (199 bytes, 68 insns) */
void f_1027d700(void) {
  FTRACE(0x1027d700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027d700 push ebp */
  push32((uint32_t)(EBP));
  /* 1027d701 mov ebp, esp */
  EBP = (ESP);
  /* 1027d703 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d704 push ebx */
  push32((uint32_t)(EBX));
  /* 1027d705 push esi */
  push32((uint32_t)(ESI));
  /* 1027d706 push edi */
  push32((uint32_t)(EDI));
L_1027d707:;
  /* 1027d707 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d70b jne 0x1027d72b */
  if (!C.zf) goto L_1027d72b;
  /* 1027d70d push 0x1029bf40 */
  push32((uint32_t)(0x1029bf40u));
  /* 1027d712 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027d714 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1027d716 push 0x1029c010 */
  push32((uint32_t)(0x1029c010u));
  /* 1027d71b push 2 */
  push32((uint32_t)(0x2u));
  /* 1027d71d call 0x10273c10 */
  push32(0x1027d722u); f_10273c10();
  /* 1027d722 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d725 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d728 jne 0x1027d72b */
  if (!C.zf) goto L_1027d72b;
  /* 1027d72a int3  */
  x86_unimpl("int3 @ 0x1027d72a");
L_1027d72b:;
  /* 1027d72b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027d72d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027d72f jne 0x1027d707 */
  if (!C.zf) goto L_1027d707;
  /* 1027d731 mov ecx, dword ptr [0x102a07c4] */
  ECX = (r32((uint32_t)(0x102a07c4)));
  /* 1027d737 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d73a mov dword ptr [0x102a07c4], ecx */
  w32((uint32_t)(0x102a07c4), (ECX));
  /* 1027d740 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d743 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1027d746 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1027d748 push 0x1029c010 */
  push32((uint32_t)(0x1029c010u));
  /* 1027d74d push 2 */
  push32((uint32_t)(0x2u));
  /* 1027d74f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1027d754 call 0x10274b50 */
  push32(0x1027d759u); f_10274b50();
  /* 1027d759 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d75c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d75f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1027d762 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d765 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d769 je 0x1027d786 */
  if (C.zf) goto L_1027d786;
  /* 1027d76b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d76e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1027d771 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1027d774 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d777 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1027d77a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d77d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1027d784 jmp 0x1027d7ab */
  goto L_1027d7ab;
L_1027d786:;
  /* 1027d786 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d789 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1027d78c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1027d78f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d792 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1027d795 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d798 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d79b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d79e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1027d7a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d7a4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1027d7ab:;
  /* 1027d7ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d7ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d7b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1027d7b4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1027d7b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d7b9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1027d7c0 pop edi */
  EDI = (pop32());
  /* 1027d7c1 pop esi */
  ESI = (pop32());
  /* 1027d7c2 pop ebx */
  EBX = (pop32());
  /* 1027d7c3 mov esp, ebp */
  ESP = (EBP);
  /* 1027d7c5 pop ebp */
  EBP = (pop32());
  /* 1027d7c6 ret  */
  ESPCHK(0x1027d700u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1027d7d0 (50 bytes, 17 insns) */
void f_1027d7d0(void) {
  FTRACE(0x1027d7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027d7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027d7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1027d7d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d7d6 cmp eax, dword ptr [0x102a20bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102a20bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d7dc jb 0x1027d7e2 */
  if (C.cf) goto L_1027d7e2;
  /* 1027d7de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027d7e0 jmp 0x1027d800 */
  goto L_1027d800;
L_1027d7e2:;
  /* 1027d7e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d7e5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1027d7e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d7eb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1027d7ee imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027d7f1 mov eax, dword ptr [ecx*4 + 0x102a1f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x102a1f80)));
  /* 1027d7f8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1027d7fd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1027d800:;
  /* 1027d800 pop ebp */
  EBP = (pop32());
  /* 1027d801 ret  */
  ESPCHK(0x1027d7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d810 @ 0x1027d810 (300 bytes, 80 insns) */
void f_1027d810(void) {
  FTRACE(0x1027d810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027d810 push ebp */
  push32((uint32_t)(EBP));
  /* 1027d811 mov ebp, esp */
  EBP = (ESP);
  /* 1027d813 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d814 cmp dword ptr [0x102a1c80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a1c80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d81b jne 0x1027d829 */
  if (!C.zf) goto L_1027d829;
  /* 1027d81d mov dword ptr [0x102a1c80], 0x200 */
  w32((uint32_t)(0x102a1c80), (0x200u));
  /* 1027d827 jmp 0x1027d83c */
  goto L_1027d83c;
L_1027d829:;
  /* 1027d829 cmp dword ptr [0x102a1c80], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x102a1c80))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d830 jge 0x1027d83c */
  if ((C.sf==C.of)) goto L_1027d83c;
  /* 1027d832 mov dword ptr [0x102a1c80], 0x14 */
  w32((uint32_t)(0x102a1c80), (0x14u));
L_1027d83c:;
  /* 1027d83c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1027d841 push 0x1029c01c */
  push32((uint32_t)(0x1029c01cu));
  /* 1027d846 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027d848 push 4 */
  push32((uint32_t)(0x4u));
  /* 1027d84a mov eax, dword ptr [0x102a1c80] */
  EAX = (r32((uint32_t)(0x102a1c80)));
  /* 1027d84f push eax */
  push32((uint32_t)(EAX));
  /* 1027d850 call 0x10274f60 */
  push32(0x1027d855u); f_10274f60();
  /* 1027d855 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d858 mov dword ptr [0x102a0938], eax */
  w32((uint32_t)(0x102a0938), (EAX));
  /* 1027d85d cmp dword ptr [0x102a0938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d864 jne 0x1027d8a5 */
  if (!C.zf) goto L_1027d8a5;
  /* 1027d866 mov dword ptr [0x102a1c80], 0x14 */
  w32((uint32_t)(0x102a1c80), (0x14u));
  /* 1027d870 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1027d875 push 0x1029c01c */
  push32((uint32_t)(0x1029c01cu));
  /* 1027d87a push 2 */
  push32((uint32_t)(0x2u));
  /* 1027d87c push 4 */
  push32((uint32_t)(0x4u));
  /* 1027d87e mov ecx, dword ptr [0x102a1c80] */
  ECX = (r32((uint32_t)(0x102a1c80)));
  /* 1027d884 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d885 call 0x10274f60 */
  push32(0x1027d88au); f_10274f60();
  /* 1027d88a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d88d mov dword ptr [0x102a0938], eax */
  w32((uint32_t)(0x102a0938), (EAX));
  /* 1027d892 cmp dword ptr [0x102a0938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d899 jne 0x1027d8a5 */
  if (!C.zf) goto L_1027d8a5;
  /* 1027d89b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1027d89d call 0x10273ac0 */
  push32(0x1027d8a2u); f_10273ac0();
  /* 1027d8a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027d8a5:;
  /* 1027d8a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1027d8ac jmp 0x1027d8b7 */
  goto L_1027d8b7;
L_1027d8ae:;
  /* 1027d8ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d8b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d8b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1027d8b7:;
  /* 1027d8b7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d8bb jge 0x1027d8d6 */
  if ((C.sf==C.of)) goto L_1027d8d6;
  /* 1027d8bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d8c0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1027d8c3 add eax, 0x1029f120 */
  { uint32_t _a=(EAX),_b=(0x1029f120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d8c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d8cb mov edx, dword ptr [0x102a0938] */
  EDX = (r32((uint32_t)(0x102a0938)));
  /* 1027d8d1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1027d8d4 jmp 0x1027d8ae */
  goto L_1027d8ae;
L_1027d8d6:;
  /* 1027d8d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1027d8dd jmp 0x1027d8e8 */
  goto L_1027d8e8;
L_1027d8df:;
  /* 1027d8df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d8e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d8e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1027d8e8:;
  /* 1027d8e8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d8ec jge 0x1027d938 */
  if ((C.sf==C.of)) goto L_1027d938;
  /* 1027d8ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d8f1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1027d8f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d8f7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1027d8fa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027d8fd mov eax, dword ptr [ecx*4 + 0x102a1f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x102a1f80)));
  /* 1027d904 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d908 je 0x1027d926 */
  if (C.zf) goto L_1027d926;
  /* 1027d90a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d90d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1027d910 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d913 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1027d916 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027d919 mov eax, dword ptr [ecx*4 + 0x102a1f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x102a1f80)));
  /* 1027d920 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d924 jne 0x1027d936 */
  if (!C.zf) goto L_1027d936;
L_1027d926:;
  /* 1027d926 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027d929 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1027d92c mov dword ptr [ecx + 0x1029f130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1029f130), (0xffffffffu));
L_1027d936:;
  /* 1027d936 jmp 0x1027d8df */
  goto L_1027d8df;
L_1027d938:;
  /* 1027d938 mov esp, ebp */
  ESP = (EBP);
  /* 1027d93a pop ebp */
  EBP = (pop32());
  /* 1027d93b ret  */
  ESPCHK(0x1027d810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d940 @ 0x1027d940 (26 bytes, 9 insns) */
void f_1027d940(void) {
  FTRACE(0x1027d940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027d940 push ebp */
  push32((uint32_t)(EBP));
  /* 1027d941 mov ebp, esp */
  EBP = (ESP);
  /* 1027d943 call 0x1027e540 */
  push32(0x1027d948u); f_1027e540();
  /* 1027d948 movsx eax, byte ptr [0x102a05dc] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x102a05dc))));
  /* 1027d94f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027d951 je 0x1027d958 */
  if (C.zf) goto L_1027d958;
  /* 1027d953 call 0x1027e300 */
  push32(0x1027d958u); f_1027e300();
L_1027d958:;
  /* 1027d958 pop ebp */
  EBP = (pop32());
  /* 1027d959 ret  */
  ESPCHK(0x1027d940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d960 @ 0x1027d960 (61 bytes, 20 insns) */
void f_1027d960(void) {
  FTRACE(0x1027d960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027d960 push ebp */
  push32((uint32_t)(EBP));
  /* 1027d961 mov ebp, esp */
  EBP = (ESP);
  /* 1027d963 cmp dword ptr [ebp + 8], 0x1029f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1029f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d96a jb 0x1027d98e */
  if (C.cf) goto L_1027d98e;
  /* 1027d96c cmp dword ptr [ebp + 8], 0x1029f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1029f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d973 ja 0x1027d98e */
  if ((!C.cf&&!C.zf)) goto L_1027d98e;
  /* 1027d975 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d978 sub eax, 0x1029f120 */
  { uint32_t _a=(EAX),_b=(0x1029f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027d97d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1027d980 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d983 push eax */
  push32((uint32_t)(EAX));
  /* 1027d984 call 0x10278550 */
  push32(0x1027d989u); f_10278550();
  /* 1027d989 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d98c jmp 0x1027d99b */
  goto L_1027d99b;
L_1027d98e:;
  /* 1027d98e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d991 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d994 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d995 call dword ptr [0x102a3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3388))), 0x1027d99bu);
L_1027d99b:;
  /* 1027d99b pop ebp */
  EBP = (pop32());
  /* 1027d99c ret  */
  ESPCHK(0x1027d960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9a0 @ 0x1027d9a0 (41 bytes, 16 insns) */
void f_1027d9a0(void) {
  FTRACE(0x1027d9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027d9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027d9a1 mov ebp, esp */
  EBP = (ESP);
  /* 1027d9a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d9a7 jge 0x1027d9ba */
  if ((C.sf==C.of)) goto L_1027d9ba;
  /* 1027d9a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d9ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d9af push eax */
  push32((uint32_t)(EAX));
  /* 1027d9b0 call 0x10278550 */
  push32(0x1027d9b5u); f_10278550();
  /* 1027d9b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d9b8 jmp 0x1027d9c7 */
  goto L_1027d9c7;
L_1027d9ba:;
  /* 1027d9ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027d9bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d9c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1027d9c1 call dword ptr [0x102a3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3388))), 0x1027d9c7u);
L_1027d9c7:;
  /* 1027d9c7 pop ebp */
  EBP = (pop32());
  /* 1027d9c8 ret  */
  ESPCHK(0x1027d9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9d0 @ 0x1027d9d0 (61 bytes, 20 insns) */
void f_1027d9d0(void) {
  FTRACE(0x1027d9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027d9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027d9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1027d9d3 cmp dword ptr [ebp + 8], 0x1029f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1029f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d9da jb 0x1027d9fe */
  if (C.cf) goto L_1027d9fe;
  /* 1027d9dc cmp dword ptr [ebp + 8], 0x1029f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1029f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027d9e3 ja 0x1027d9fe */
  if ((!C.cf&&!C.zf)) goto L_1027d9fe;
  /* 1027d9e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027d9e8 sub eax, 0x1029f120 */
  { uint32_t _a=(EAX),_b=(0x1029f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027d9ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1027d9f0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d9f3 push eax */
  push32((uint32_t)(EAX));
  /* 1027d9f4 call 0x102785f0 */
  push32(0x1027d9f9u); f_102785f0();
  /* 1027d9f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027d9fc jmp 0x1027da0b */
  goto L_1027da0b;
L_1027d9fe:;
  /* 1027d9fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027da01 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027da04 push ecx */
  push32((uint32_t)(ECX));
  /* 1027da05 call dword ptr [0x102a338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a338c))), 0x1027da0bu);
L_1027da0b:;
  /* 1027da0b pop ebp */
  EBP = (pop32());
  /* 1027da0c ret  */
  ESPCHK(0x1027d9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da10 @ 0x1027da10 (41 bytes, 16 insns) */
void f_1027da10(void) {
  FTRACE(0x1027da10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027da10 push ebp */
  push32((uint32_t)(EBP));
  /* 1027da11 mov ebp, esp */
  EBP = (ESP);
  /* 1027da13 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027da17 jge 0x1027da2a */
  if ((C.sf==C.of)) goto L_1027da2a;
  /* 1027da19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027da1c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027da1f push eax */
  push32((uint32_t)(EAX));
  /* 1027da20 call 0x102785f0 */
  push32(0x1027da25u); f_102785f0();
  /* 1027da25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027da28 jmp 0x1027da37 */
  goto L_1027da37;
L_1027da2a:;
  /* 1027da2a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027da2d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027da30 push ecx */
  push32((uint32_t)(ECX));
  /* 1027da31 call dword ptr [0x102a338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a338c))), 0x1027da37u);
L_1027da37:;
  /* 1027da37 pop ebp */
  EBP = (pop32());
  /* 1027da38 ret  */
  ESPCHK(0x1027da10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da40 @ 0x1027da40 (119 bytes, 34 insns) */
void f_1027da40(void) {
  FTRACE(0x1027da40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027da40 push ebp */
  push32((uint32_t)(EBP));
  /* 1027da41 mov ebp, esp */
  EBP = (ESP);
  /* 1027da43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027da46 push 0x102a0934 */
  push32((uint32_t)(0x102a0934u));
  /* 1027da4b call dword ptr [0x102a330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a330c))), 0x1027da51u);
  /* 1027da51 cmp dword ptr [0x102a0924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027da58 je 0x1027da78 */
  if (C.zf) goto L_1027da78;
  /* 1027da5a push 0x102a0934 */
  push32((uint32_t)(0x102a0934u));
  /* 1027da5f call dword ptr [0x102a32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32fc))), 0x1027da65u);
  /* 1027da65 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1027da67 call 0x10278550 */
  push32(0x1027da6cu); f_10278550();
  /* 1027da6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027da6f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1027da76 jmp 0x1027da7f */
  goto L_1027da7f;
L_1027da78:;
  /* 1027da78 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1027da7f:;
  /* 1027da7f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1027da83 push eax */
  push32((uint32_t)(EAX));
  /* 1027da84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027da87 push ecx */
  push32((uint32_t)(ECX));
  /* 1027da88 call 0x1027dac0 */
  push32(0x1027da8du); f_1027dac0();
  /* 1027da8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027da90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1027da93 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027da97 je 0x1027daa5 */
  if (C.zf) goto L_1027daa5;
  /* 1027da99 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1027da9b call 0x102785f0 */
  push32(0x1027daa0u); f_102785f0();
  /* 1027daa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027daa3 jmp 0x1027dab0 */
  goto L_1027dab0;
L_1027daa5:;
  /* 1027daa5 push 0x102a0934 */
  push32((uint32_t)(0x102a0934u));
  /* 1027daaa call dword ptr [0x102a32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32fc))), 0x1027dab0u);
L_1027dab0:;
  /* 1027dab0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027dab3 mov esp, ebp */
  ESP = (EBP);
  /* 1027dab5 pop ebp */
  EBP = (pop32());
  /* 1027dab6 ret  */
  ESPCHK(0x1027da40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dac0 @ 0x1027dac0 (160 bytes, 50 insns) */
void f_1027dac0(void) {
  FTRACE(0x1027dac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027dac0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027dac1 mov ebp, esp */
  EBP = (ESP);
  /* 1027dac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027dac6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027daca jne 0x1027dad3 */
  if (!C.zf) goto L_1027dad3;
  /* 1027dacc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027dace jmp 0x1027db5c */
  goto L_1027db5c;
L_1027dad3:;
  /* 1027dad3 cmp dword ptr [0x102a07a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a07a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027dada jne 0x1027db0a */
  if (!C.zf) goto L_1027db0a;
  /* 1027dadc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027dadf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027dae4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027dae9 jle 0x1027dafb */
  if ((C.zf||C.sf!=C.of)) goto L_1027dafb;
  /* 1027daeb call 0x1027ca20 */
  push32(0x1027daf0u); f_1027ca20();
  /* 1027daf0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1027daf6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027daf9 jmp 0x1027db5c */
  goto L_1027db5c;
L_1027dafb:;
  /* 1027dafb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027dafe mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1027db01 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1027db03 mov eax, 1 */
  EAX = (0x1u);
  /* 1027db08 jmp 0x1027db5c */
  goto L_1027db5c;
L_1027db0a:;
  /* 1027db0a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1027db11 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1027db14 push eax */
  push32((uint32_t)(EAX));
  /* 1027db15 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027db17 mov ecx, dword ptr [0x1029eea4] */
  ECX = (r32((uint32_t)(0x1029eea4)));
  /* 1027db1d push ecx */
  push32((uint32_t)(ECX));
  /* 1027db1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027db21 push edx */
  push32((uint32_t)(EDX));
  /* 1027db22 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027db24 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1027db27 push eax */
  push32((uint32_t)(EAX));
  /* 1027db28 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1027db2d mov ecx, dword ptr [0x102a07b8] */
  ECX = (r32((uint32_t)(0x102a07b8)));
  /* 1027db33 push ecx */
  push32((uint32_t)(ECX));
  /* 1027db34 call dword ptr [0x102a3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3364))), 0x1027db3au);
  /* 1027db3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027db3d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027db41 je 0x1027db49 */
  if (C.zf) goto L_1027db49;
  /* 1027db43 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027db47 je 0x1027db59 */
  if (C.zf) goto L_1027db59;
L_1027db49:;
  /* 1027db49 call 0x1027ca20 */
  push32(0x1027db4eu); f_1027ca20();
  /* 1027db4e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1027db54 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027db57 jmp 0x1027db5c */
  goto L_1027db5c;
L_1027db59:;
  /* 1027db59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1027db5c:;
  /* 1027db5c mov esp, ebp */
  ESP = (EBP);
  /* 1027db5e pop ebp */
  EBP = (pop32());
  /* 1027db5f ret  */
  ESPCHK(0x1027dac0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1027db60 (32 bytes, 18 insns) */
void f_1027db60(void) {
  FTRACE(0x1027db60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027db60 push ebp */
  push32((uint32_t)(EBP));
  /* 1027db61 mov ebp, esp */
  EBP = (ESP);
  /* 1027db63 push ebx */
  push32((uint32_t)(EBX));
  /* 1027db64 push esi */
  push32((uint32_t)(ESI));
  /* 1027db65 push edi */
  push32((uint32_t)(EDI));
  /* 1027db66 push ebp */
  push32((uint32_t)(EBP));
  /* 1027db67 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027db69 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027db6b push 0x1027db78 */
  push32((uint32_t)(0x1027db78u));
  /* 1027db70 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1027db73 call 0x102852ac */
  push32(0x1027db78u); f_102852ac();
  /* 1027db78 pop ebp */
  EBP = (pop32());
  /* 1027db79 pop edi */
  EDI = (pop32());
  /* 1027db7a pop esi */
  ESI = (pop32());
  /* 1027db7b pop ebx */
  EBX = (pop32());
  /* 1027db7c mov esp, ebp */
  ESP = (EBP);
  /* 1027db7e pop ebp */
  EBP = (pop32());
  /* 1027db7f ret  */
  ESPCHK(0x1027db60u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1027dba2 (104 bytes, 33 insns) */
void f_1027dba2(void) {
  FTRACE(0x1027dba2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027dba2 push ebx */
  push32((uint32_t)(EBX));
  /* 1027dba3 push esi */
  push32((uint32_t)(ESI));
  /* 1027dba4 push edi */
  push32((uint32_t)(EDI));
  /* 1027dba5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1027dba9 push eax */
  push32((uint32_t)(EAX));
  /* 1027dbaa push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1027dbac push 0x1027db80 */
  push32((uint32_t)(0x1027db80u));
  /* 1027dbb1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1027dbb8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1027dbbf:;
  /* 1027dbbf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1027dbc3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1027dbc6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1027dbc9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027dbcc je 0x1027dbfc */
  if (C.zf) goto L_1027dbfc;
  /* 1027dbce cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027dbd2 je 0x1027dbfc */
  if (C.zf) goto L_1027dbfc;
  /* 1027dbd4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1027dbd7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1027dbda mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1027dbde mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1027dbe1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027dbe6 jne 0x1027dbfa */
  if (!C.zf) goto L_1027dbfa;
  /* 1027dbe8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1027dbed mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1027dbf1 call 0x1027dc36 */
  push32(0x1027dbf6u); f_1027dc36();
  /* 1027dbf6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1027dbfau);
L_1027dbfa:;
  /* 1027dbfa jmp 0x1027dbbf */
  goto L_1027dbbf;
L_1027dbfc:;
  /* 1027dbfc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1027dc03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027dc06 pop edi */
  EDI = (pop32());
  /* 1027dc07 pop esi */
  ESI = (pop32());
  /* 1027dc08 pop ebx */
  EBX = (pop32());
  /* 1027dc09 ret  */
  ESPCHK(0x1027dba2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc36 @ 0x1027dc36 (24 bytes, 10 insns) */
void f_1027dc36(void) {
  FTRACE(0x1027dc36u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027dc36 push ebx */
  push32((uint32_t)(EBX));
  /* 1027dc37 push ecx */
  push32((uint32_t)(ECX));
  /* 1027dc38 mov ebx, 0x1029f3b8 */
  EBX = (0x1029f3b8u);
  /* 1027dc3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027dc40 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1027dc43 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1027dc46 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1027dc49 pop ecx */
  ECX = (pop32());
  /* 1027dc4a pop ebx */
  EBX = (pop32());
  /* 1027dc4b ret 4 */
  ESPCHK(0x1027dc36u, _esp0);
  ESP += 8; return;
}

/* FUN_1000dd15 @ 0x1027dd15 (27 bytes, 11 insns) */
void f_1027dd15(void) {
  FTRACE(0x1027dd15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027dd15 push ebp */
  push32((uint32_t)(EBP));
  /* 1027dd16 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1027dd1a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1027dd1c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1027dd1f push eax */
  push32((uint32_t)(EAX));
  /* 1027dd20 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1027dd23 push eax */
  push32((uint32_t)(EAX));
  /* 1027dd24 call 0x1027dba2 */
  push32(0x1027dd29u); f_1027dba2();
  /* 1027dd29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027dd2c pop ebp */
  EBP = (pop32());
  /* 1027dd2d ret 4 */
  ESPCHK(0x1027dd15u, _esp0);
  ESP += 8; return;
}

/* FUN_1000dd30 @ 0x1027dd30 (482 bytes, 138 insns) */
void f_1027dd30(void) {
  FTRACE(0x1027dd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027dd30 push ebp */
  push32((uint32_t)(EBP));
  /* 1027dd31 mov ebp, esp */
  EBP = (ESP);
  /* 1027dd33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027dd36 push esi */
  push32((uint32_t)(ESI));
  /* 1027dd37 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1027dd3e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1027dd40 call 0x10278550 */
  push32(0x1027dd45u); f_10278550();
  /* 1027dd45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027dd48 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1027dd4f jmp 0x1027dd5a */
  goto L_1027dd5a;
L_1027dd51:;
  /* 1027dd51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027dd54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027dd57 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1027dd5a:;
  /* 1027dd5a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027dd5e jge 0x1027df00 */
  if ((C.sf==C.of)) goto L_1027df00;
  /* 1027dd64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027dd67 cmp dword ptr [ecx*4 + 0x102a1f80], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x102a1f80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027dd6f je 0x1027de66 */
  if (C.zf) goto L_1027de66;
  /* 1027dd75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027dd78 mov eax, dword ptr [edx*4 + 0x102a1f80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x102a1f80)));
  /* 1027dd7f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027dd82 jmp 0x1027dd8d */
  goto L_1027dd8d;
L_1027dd84:;
  /* 1027dd84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027dd87 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027dd8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1027dd8d:;
  /* 1027dd8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027dd90 mov eax, dword ptr [edx*4 + 0x102a1f80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x102a1f80)));
  /* 1027dd97 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027dd9c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027dd9f jae 0x1027de56 */
  if (!C.cf) goto L_1027de56;
  /* 1027dda5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027dda8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1027ddac and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1027ddaf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027ddb1 jne 0x1027de51 */
  if (!C.zf) goto L_1027de51;
  /* 1027ddb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ddba cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ddbe jne 0x1027ddf9 */
  if (!C.zf) goto L_1027ddf9;
  /* 1027ddc0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1027ddc2 call 0x10278550 */
  push32(0x1027ddc7u); f_10278550();
  /* 1027ddc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ddca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ddcd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ddd1 jne 0x1027ddef */
  if (!C.zf) goto L_1027ddef;
  /* 1027ddd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ddd6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ddd9 push edx */
  push32((uint32_t)(EDX));
  /* 1027ddda call dword ptr [0x102a3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3384))), 0x1027dde0u);
  /* 1027dde0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027dde3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1027dde6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027dde9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ddec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1027ddef:;
  /* 1027ddef push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1027ddf1 call 0x102785f0 */
  push32(0x1027ddf6u); f_102785f0();
  /* 1027ddf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027ddf9:;
  /* 1027ddf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ddfc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ddff push eax */
  push32((uint32_t)(EAX));
  /* 1027de00 call dword ptr [0x102a3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3388))), 0x1027de06u);
  /* 1027de06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027de09 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1027de0d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1027de10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027de12 je 0x1027de26 */
  if (C.zf) goto L_1027de26;
  /* 1027de14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027de17 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027de1a push eax */
  push32((uint32_t)(EAX));
  /* 1027de1b call dword ptr [0x102a338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a338c))), 0x1027de21u);
  /* 1027de21 jmp 0x1027dd84 */
  goto L_1027dd84;
L_1027de26:;
  /* 1027de26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027de29 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1027de2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027de32 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1027de35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027de38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027de3b sub eax, dword ptr [edx*4 + 0x102a1f80] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x102a1f80))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027de42 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1027de43 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1027de48 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1027de4a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027de4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1027de4f jmp 0x1027de56 */
  goto L_1027de56;
L_1027de51:;
  /* 1027de51 jmp 0x1027dd84 */
  goto L_1027dd84;
L_1027de56:;
  /* 1027de56 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027de5a je 0x1027de61 */
  if (C.zf) goto L_1027de61;
  /* 1027de5c jmp 0x1027df00 */
  goto L_1027df00;
L_1027de61:;
  /* 1027de61 jmp 0x1027defb */
  goto L_1027defb;
L_1027de66:;
  /* 1027de66 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1027de68 push 0x1029c024 */
  push32((uint32_t)(0x1029c024u));
  /* 1027de6d push 2 */
  push32((uint32_t)(0x2u));
  /* 1027de6f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1027de74 call 0x10274b50 */
  push32(0x1027de79u); f_10274b50();
  /* 1027de79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027de7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027de7f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027de83 je 0x1027def9 */
  if (C.zf) goto L_1027def9;
  /* 1027de85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027de88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027de8b mov dword ptr [eax*4 + 0x102a1f80], ecx */
  w32((uint32_t)(EAX*4 + 0x102a1f80), (ECX));
  /* 1027de92 mov edx, dword ptr [0x102a20bc] */
  EDX = (r32((uint32_t)(0x102a20bc)));
  /* 1027de98 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027de9b mov dword ptr [0x102a20bc], edx */
  w32((uint32_t)(0x102a20bc), (EDX));
  /* 1027dea1 jmp 0x1027deac */
  goto L_1027deac;
L_1027dea3:;
  /* 1027dea3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027dea6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027dea9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1027deac:;
  /* 1027deac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027deaf mov edx, dword ptr [ecx*4 + 0x102a1f80] */
  EDX = (r32((uint32_t)(ECX*4 + 0x102a1f80)));
  /* 1027deb6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027debc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027debf jae 0x1027dee4 */
  if (!C.cf) goto L_1027dee4;
  /* 1027dec1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027dec4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1027dec8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027decb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1027ded1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ded4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1027ded8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027dedb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1027dee2 jmp 0x1027dea3 */
  goto L_1027dea3;
L_1027dee4:;
  /* 1027dee4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027dee7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1027deea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1027deed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027def0 push edx */
  push32((uint32_t)(EDX));
  /* 1027def1 call 0x1027e240 */
  push32(0x1027def6u); f_1027e240();
  /* 1027def6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027def9:;
  /* 1027def9 jmp 0x1027df00 */
  goto L_1027df00;
L_1027defb:;
  /* 1027defb jmp 0x1027dd51 */
  goto L_1027dd51;
L_1027df00:;
  /* 1027df00 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1027df02 call 0x102785f0 */
  push32(0x1027df07u); f_102785f0();
  /* 1027df07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027df0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027df0d pop esi */
  ESI = (pop32());
  /* 1027df0e mov esp, ebp */
  ESP = (EBP);
  /* 1027df10 pop ebp */
  EBP = (pop32());
  /* 1027df11 ret  */
  ESPCHK(0x1027dd30u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1027df20 (183 bytes, 57 insns) */
void f_1027df20(void) {
  FTRACE(0x1027df20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027df20 push ebp */
  push32((uint32_t)(EBP));
  /* 1027df21 mov ebp, esp */
  EBP = (ESP);
  /* 1027df23 push ecx */
  push32((uint32_t)(ECX));
  /* 1027df24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027df27 cmp eax, dword ptr [0x102a20bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102a20bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027df2d jae 0x1027dfba */
  if (!C.cf) goto L_1027dfba;
  /* 1027df33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027df36 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1027df39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027df3c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1027df3f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027df42 mov eax, dword ptr [ecx*4 + 0x102a1f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x102a1f80)));
  /* 1027df49 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027df4d jne 0x1027dfba */
  if (!C.zf) goto L_1027dfba;
  /* 1027df4f cmp dword ptr [0x102a059c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102a059c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027df56 jne 0x1027df9a */
  if (!C.zf) goto L_1027df9a;
  /* 1027df58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027df5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1027df5e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027df62 je 0x1027df72 */
  if (C.zf) goto L_1027df72;
  /* 1027df64 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027df68 je 0x1027df80 */
  if (C.zf) goto L_1027df80;
  /* 1027df6a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027df6e je 0x1027df8e */
  if (C.zf) goto L_1027df8e;
  /* 1027df70 jmp 0x1027df9a */
  goto L_1027df9a;
L_1027df72:;
  /* 1027df72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027df75 push edx */
  push32((uint32_t)(EDX));
  /* 1027df76 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1027df78 call dword ptr [0x102a32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32bc))), 0x1027df7eu);
  /* 1027df7e jmp 0x1027df9a */
  goto L_1027df9a;
L_1027df80:;
  /* 1027df80 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027df83 push eax */
  push32((uint32_t)(EAX));
  /* 1027df84 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1027df86 call dword ptr [0x102a32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32bc))), 0x1027df8cu);
  /* 1027df8c jmp 0x1027df9a */
  goto L_1027df9a;
L_1027df8e:;
  /* 1027df8e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027df91 push ecx */
  push32((uint32_t)(ECX));
  /* 1027df92 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1027df94 call dword ptr [0x102a32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32bc))), 0x1027df9au);
L_1027df9a:;
  /* 1027df9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027df9d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1027dfa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027dfa3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1027dfa6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027dfa9 mov ecx, dword ptr [edx*4 + 0x102a1f80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x102a1f80)));
  /* 1027dfb0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027dfb3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1027dfb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027dfb8 jmp 0x1027dfd3 */
  goto L_1027dfd3;
L_1027dfba:;
  /* 1027dfba call 0x1027ca20 */
  push32(0x1027dfbfu); f_1027ca20();
  /* 1027dfbf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1027dfc5 call 0x1027ca30 */
  push32(0x1027dfcau); f_1027ca30();
  /* 1027dfca mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1027dfd0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1027dfd3:;
  /* 1027dfd3 mov esp, ebp */
  ESP = (EBP);
  /* 1027dfd5 pop ebp */
  EBP = (pop32());
  /* 1027dfd6 ret  */
  ESPCHK(0x1027df20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfe0 @ 0x1027dfe0 (216 bytes, 63 insns) */
void f_1027dfe0(void) {
  FTRACE(0x1027dfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027dfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027dfe1 mov ebp, esp */
  EBP = (ESP);
  /* 1027dfe3 push ecx */
  push32((uint32_t)(ECX));
  /* 1027dfe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027dfe7 cmp eax, dword ptr [0x102a20bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102a20bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027dfed jae 0x1027e09b */
  if (!C.cf) goto L_1027e09b;
  /* 1027dff3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027dff6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1027dff9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027dffc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1027dfff imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027e002 mov eax, dword ptr [ecx*4 + 0x102a1f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x102a1f80)));
  /* 1027e009 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1027e00e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1027e011 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027e013 je 0x1027e09b */
  if (C.zf) goto L_1027e09b;
  /* 1027e019 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e01c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1027e01f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e022 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1027e025 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027e028 mov ecx, dword ptr [edx*4 + 0x102a1f80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x102a1f80)));
  /* 1027e02f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e033 je 0x1027e09b */
  if (C.zf) goto L_1027e09b;
  /* 1027e035 cmp dword ptr [0x102a059c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102a059c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e03c jne 0x1027e07a */
  if (!C.zf) goto L_1027e07a;
  /* 1027e03e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e041 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1027e044 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e048 je 0x1027e058 */
  if (C.zf) goto L_1027e058;
  /* 1027e04a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e04e je 0x1027e064 */
  if (C.zf) goto L_1027e064;
  /* 1027e050 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e054 je 0x1027e070 */
  if (C.zf) goto L_1027e070;
  /* 1027e056 jmp 0x1027e07a */
  goto L_1027e07a;
L_1027e058:;
  /* 1027e058 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027e05a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1027e05c call dword ptr [0x102a32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32bc))), 0x1027e062u);
  /* 1027e062 jmp 0x1027e07a */
  goto L_1027e07a;
L_1027e064:;
  /* 1027e064 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027e066 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1027e068 call dword ptr [0x102a32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32bc))), 0x1027e06eu);
  /* 1027e06e jmp 0x1027e07a */
  goto L_1027e07a;
L_1027e070:;
  /* 1027e070 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027e072 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1027e074 call dword ptr [0x102a32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32bc))), 0x1027e07au);
L_1027e07a:;
  /* 1027e07a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e07d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1027e080 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e083 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1027e086 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027e089 mov edx, dword ptr [eax*4 + 0x102a1f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x102a1f80)));
  /* 1027e090 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1027e097 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027e099 jmp 0x1027e0b4 */
  goto L_1027e0b4;
L_1027e09b:;
  /* 1027e09b call 0x1027ca20 */
  push32(0x1027e0a0u); f_1027ca20();
  /* 1027e0a0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1027e0a6 call 0x1027ca30 */
  push32(0x1027e0abu); f_1027ca30();
  /* 1027e0ab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1027e0b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1027e0b4:;
  /* 1027e0b4 mov esp, ebp */
  ESP = (EBP);
  /* 1027e0b6 pop ebp */
  EBP = (pop32());
  /* 1027e0b7 ret  */
  ESPCHK(0x1027dfe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0c0 @ 0x1027e0c0 (102 bytes, 30 insns) */
void f_1027e0c0(void) {
  FTRACE(0x1027e0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027e0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027e0c1 mov ebp, esp */
  EBP = (ESP);
  /* 1027e0c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e0c6 cmp eax, dword ptr [0x102a20bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102a20bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e0cc jae 0x1027e10b */
  if (!C.cf) goto L_1027e10b;
  /* 1027e0ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e0d1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1027e0d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e0d7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1027e0da imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027e0dd mov eax, dword ptr [ecx*4 + 0x102a1f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x102a1f80)));
  /* 1027e0e4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1027e0e9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1027e0ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027e0ee je 0x1027e10b */
  if (C.zf) goto L_1027e10b;
  /* 1027e0f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e0f3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1027e0f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e0f9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1027e0fc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027e0ff mov ecx, dword ptr [edx*4 + 0x102a1f80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x102a1f80)));
  /* 1027e106 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1027e109 jmp 0x1027e124 */
  goto L_1027e124;
L_1027e10b:;
  /* 1027e10b call 0x1027ca20 */
  push32(0x1027e110u); f_1027ca20();
  /* 1027e110 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1027e116 call 0x1027ca30 */
  push32(0x1027e11bu); f_1027ca30();
  /* 1027e11b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1027e121 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1027e124:;
  /* 1027e124 pop ebp */
  EBP = (pop32());
  /* 1027e125 ret  */
  ESPCHK(0x1027e0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e130 @ 0x1027e130 (260 bytes, 83 insns) */
void f_1027e130(void) {
  FTRACE(0x1027e130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027e130 push ebp */
  push32((uint32_t)(EBP));
  /* 1027e131 mov ebp, esp */
  EBP = (ESP);
  /* 1027e133 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027e136 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1027e13a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027e13d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1027e140 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027e142 je 0x1027e14d */
  if (C.zf) goto L_1027e14d;
  /* 1027e144 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1027e147 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1027e14a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1027e14d:;
  /* 1027e14d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027e150 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1027e156 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027e158 je 0x1027e162 */
  if (C.zf) goto L_1027e162;
  /* 1027e15a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1027e15d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1027e15f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1027e162:;
  /* 1027e162 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027e165 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1027e16b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027e16d je 0x1027e178 */
  if (C.zf) goto L_1027e178;
  /* 1027e16f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1027e172 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1027e175 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1027e178:;
  /* 1027e178 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e17b push eax */
  push32((uint32_t)(EAX));
  /* 1027e17c call dword ptr [0x102a3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3344))), 0x1027e182u);
  /* 1027e182 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027e185 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e189 jne 0x1027e1a2 */
  if (!C.zf) goto L_1027e1a2;
  /* 1027e18b call dword ptr [0x102a3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3338))), 0x1027e191u);
  /* 1027e191 push eax */
  push32((uint32_t)(EAX));
  /* 1027e192 call 0x1027c980 */
  push32(0x1027e197u); f_1027c980();
  /* 1027e197 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e19a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027e19d jmp 0x1027e230 */
  goto L_1027e230;
L_1027e1a2:;
  /* 1027e1a2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e1a6 jne 0x1027e1b3 */
  if (!C.zf) goto L_1027e1b3;
  /* 1027e1a8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1027e1ab or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1027e1ae mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1027e1b1 jmp 0x1027e1c2 */
  goto L_1027e1c2;
L_1027e1b3:;
  /* 1027e1b3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e1b7 jne 0x1027e1c2 */
  if (!C.zf) goto L_1027e1c2;
  /* 1027e1b9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1027e1bc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1027e1bf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1027e1c2:;
  /* 1027e1c2 call 0x1027dd30 */
  push32(0x1027e1c7u); f_1027dd30();
  /* 1027e1c7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1027e1ca cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e1ce jne 0x1027e1eb */
  if (!C.zf) goto L_1027e1eb;
  /* 1027e1d0 call 0x1027ca20 */
  push32(0x1027e1d5u); f_1027ca20();
  /* 1027e1d5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1027e1db call 0x1027ca30 */
  push32(0x1027e1e0u); f_1027ca30();
  /* 1027e1e0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1027e1e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027e1e9 jmp 0x1027e230 */
  goto L_1027e230;
L_1027e1eb:;
  /* 1027e1eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e1ee push eax */
  push32((uint32_t)(EAX));
  /* 1027e1ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e1f2 push ecx */
  push32((uint32_t)(ECX));
  /* 1027e1f3 call 0x1027df20 */
  push32(0x1027e1f8u); f_1027df20();
  /* 1027e1f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e1fb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1027e1fe or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1027e201 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1027e204 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e207 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1027e20a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e20d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1027e210 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027e213 mov edx, dword ptr [eax*4 + 0x102a1f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x102a1f80)));
  /* 1027e21a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1027e21d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1027e221 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e224 push ecx */
  push32((uint32_t)(ECX));
  /* 1027e225 call 0x1027e2d0 */
  push32(0x1027e22au); f_1027e2d0();
  /* 1027e22a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e22d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1027e230:;
  /* 1027e230 mov esp, ebp */
  ESP = (EBP);
  /* 1027e232 pop ebp */
  EBP = (pop32());
  /* 1027e233 ret  */
  ESPCHK(0x1027e130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e240 @ 0x1027e240 (134 bytes, 44 insns) */
void f_1027e240(void) {
  FTRACE(0x1027e240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027e240 push ebp */
  push32((uint32_t)(EBP));
  /* 1027e241 mov ebp, esp */
  EBP = (ESP);
  /* 1027e243 push ecx */
  push32((uint32_t)(ECX));
  /* 1027e244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e247 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1027e24a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e24d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1027e250 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027e253 mov edx, dword ptr [eax*4 + 0x102a1f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x102a1f80)));
  /* 1027e25a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e25c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1027e25f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027e262 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e266 jne 0x1027e2a1 */
  if (!C.zf) goto L_1027e2a1;
  /* 1027e268 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1027e26a call 0x10278550 */
  push32(0x1027e26fu); f_10278550();
  /* 1027e26f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e272 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027e275 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e279 jne 0x1027e297 */
  if (!C.zf) goto L_1027e297;
  /* 1027e27b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027e27e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e281 push edx */
  push32((uint32_t)(EDX));
  /* 1027e282 call dword ptr [0x102a3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3384))), 0x1027e288u);
  /* 1027e288 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027e28b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1027e28e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027e294 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1027e297:;
  /* 1027e297 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1027e299 call 0x102785f0 */
  push32(0x1027e29eu); f_102785f0();
  /* 1027e29e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027e2a1:;
  /* 1027e2a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e2a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1027e2a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e2aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1027e2ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027e2b0 mov edx, dword ptr [eax*4 + 0x102a1f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x102a1f80)));
  /* 1027e2b7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1027e2bb push eax */
  push32((uint32_t)(EAX));
  /* 1027e2bc call dword ptr [0x102a3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3388))), 0x1027e2c2u);
  /* 1027e2c2 mov esp, ebp */
  ESP = (EBP);
  /* 1027e2c4 pop ebp */
  EBP = (pop32());
  /* 1027e2c5 ret  */
  ESPCHK(0x1027e240u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1027e2d0 (38 bytes, 13 insns) */
void f_1027e2d0(void) {
  FTRACE(0x1027e2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027e2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027e2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1027e2d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e2d6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1027e2d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e2dc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1027e2df imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027e2e2 mov edx, dword ptr [eax*4 + 0x102a1f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x102a1f80)));
  /* 1027e2e9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1027e2ed push eax */
  push32((uint32_t)(EAX));
  /* 1027e2ee call dword ptr [0x102a338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a338c))), 0x1027e2f4u);
  /* 1027e2f4 pop ebp */
  EBP = (pop32());
  /* 1027e2f5 ret  */
  ESPCHK(0x1027e2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e300 @ 0x1027e300 (218 bytes, 63 insns) */
void f_1027e300(void) {
  FTRACE(0x1027e300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027e300 push ebp */
  push32((uint32_t)(EBP));
  /* 1027e301 mov ebp, esp */
  EBP = (ESP);
  /* 1027e303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027e306 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1027e30d push 2 */
  push32((uint32_t)(0x2u));
  /* 1027e30f call 0x10278550 */
  push32(0x1027e314u); f_10278550();
  /* 1027e314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e317 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1027e31e jmp 0x1027e329 */
  goto L_1027e329;
L_1027e320:;
  /* 1027e320 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e323 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e326 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1027e329:;
  /* 1027e329 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e32c cmp ecx, dword ptr [0x102a1c80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102a1c80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e332 jge 0x1027e3c9 */
  if ((C.sf==C.of)) goto L_1027e3c9;
  /* 1027e338 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e33b mov eax, dword ptr [0x102a0938] */
  EAX = (r32((uint32_t)(0x102a0938)));
  /* 1027e340 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e344 je 0x1027e3c4 */
  if (C.zf) goto L_1027e3c4;
  /* 1027e346 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e349 mov edx, dword ptr [0x102a0938] */
  EDX = (r32((uint32_t)(0x102a0938)));
  /* 1027e34f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1027e352 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1027e355 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1027e35b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027e35d je 0x1027e381 */
  if (C.zf) goto L_1027e381;
  /* 1027e35f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e362 mov eax, dword ptr [0x102a0938] */
  EAX = (r32((uint32_t)(0x102a0938)));
  /* 1027e367 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1027e36a push ecx */
  push32((uint32_t)(ECX));
  /* 1027e36b call 0x1027f0f0 */
  push32(0x1027e370u); f_1027f0f0();
  /* 1027e370 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e373 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e376 je 0x1027e381 */
  if (C.zf) goto L_1027e381;
  /* 1027e378 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027e37b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e37e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1027e381:;
  /* 1027e381 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e385 jl 0x1027e3c4 */
  if ((C.sf!=C.of)) goto L_1027e3c4;
  /* 1027e387 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e38a mov ecx, dword ptr [0x102a0938] */
  ECX = (r32((uint32_t)(0x102a0938)));
  /* 1027e390 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1027e393 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e396 push edx */
  push32((uint32_t)(EDX));
  /* 1027e397 call dword ptr [0x102a334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a334c))), 0x1027e39du);
  /* 1027e39d push 2 */
  push32((uint32_t)(0x2u));
  /* 1027e39f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e3a2 mov ecx, dword ptr [0x102a0938] */
  ECX = (r32((uint32_t)(0x102a0938)));
  /* 1027e3a8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1027e3ab push edx */
  push32((uint32_t)(EDX));
  /* 1027e3ac call 0x102755e0 */
  push32(0x1027e3b1u); f_102755e0();
  /* 1027e3b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e3b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e3b7 mov ecx, dword ptr [0x102a0938] */
  ECX = (r32((uint32_t)(0x102a0938)));
  /* 1027e3bd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1027e3c4:;
  /* 1027e3c4 jmp 0x1027e320 */
  goto L_1027e320;
L_1027e3c9:;
  /* 1027e3c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027e3cb call 0x102785f0 */
  push32(0x1027e3d0u); f_102785f0();
  /* 1027e3d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e3d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027e3d6 mov esp, ebp */
  ESP = (EBP);
  /* 1027e3d8 pop ebp */
  EBP = (pop32());
  /* 1027e3d9 ret  */
  ESPCHK(0x1027e300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3e0 @ 0x1027e3e0 (68 bytes, 26 insns) */
void f_1027e3e0(void) {
  FTRACE(0x1027e3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027e3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027e3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1027e3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1027e3e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e3e8 jne 0x1027e3f6 */
  if (!C.zf) goto L_1027e3f6;
  /* 1027e3ea push 0 */
  push32((uint32_t)(0x0u));
  /* 1027e3ec call 0x1027e550 */
  push32(0x1027e3f1u); f_1027e550();
  /* 1027e3f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e3f4 jmp 0x1027e420 */
  goto L_1027e420;
L_1027e3f6:;
  /* 1027e3f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e3f9 push eax */
  push32((uint32_t)(EAX));
  /* 1027e3fa call 0x1027d960 */
  push32(0x1027e3ffu); f_1027d960();
  /* 1027e3ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e402 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e405 push ecx */
  push32((uint32_t)(ECX));
  /* 1027e406 call 0x1027e430 */
  push32(0x1027e40bu); f_1027e430();
  /* 1027e40b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e40e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027e411 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e414 push edx */
  push32((uint32_t)(EDX));
  /* 1027e415 call 0x1027d9d0 */
  push32(0x1027e41au); f_1027d9d0();
  /* 1027e41a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e41d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1027e420:;
  /* 1027e420 mov esp, ebp */
  ESP = (EBP);
  /* 1027e422 pop ebp */
  EBP = (pop32());
  /* 1027e423 ret  */
  ESPCHK(0x1027e3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e430 @ 0x1027e430 (65 bytes, 26 insns) */
void f_1027e430(void) {
  FTRACE(0x1027e430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027e430 push ebp */
  push32((uint32_t)(EBP));
  /* 1027e431 mov ebp, esp */
  EBP = (ESP);
  /* 1027e433 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e436 push eax */
  push32((uint32_t)(EAX));
  /* 1027e437 call 0x1027e480 */
  push32(0x1027e43cu); f_1027e480();
  /* 1027e43c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e43f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027e441 je 0x1027e448 */
  if (C.zf) goto L_1027e448;
  /* 1027e443 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027e446 jmp 0x1027e46f */
  goto L_1027e46f;
L_1027e448:;
  /* 1027e448 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e44b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1027e44e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1027e454 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027e456 je 0x1027e46d */
  if (C.zf) goto L_1027e46d;
  /* 1027e458 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e45b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1027e45e push ecx */
  push32((uint32_t)(ECX));
  /* 1027e45f call 0x1027f240 */
  push32(0x1027e464u); f_1027f240();
  /* 1027e464 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e467 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1027e469 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027e46b jmp 0x1027e46f */
  goto L_1027e46f;
L_1027e46d:;
  /* 1027e46d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1027e46f:;
  /* 1027e46f pop ebp */
  EBP = (pop32());
  /* 1027e470 ret  */
  ESPCHK(0x1027e430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e480 @ 0x1027e480 (183 bytes, 62 insns) */
void f_1027e480(void) {
  FTRACE(0x1027e480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027e480 push ebp */
  push32((uint32_t)(EBP));
  /* 1027e481 mov ebp, esp */
  EBP = (ESP);
  /* 1027e483 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027e486 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1027e48d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e490 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1027e493 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e496 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1027e499 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1027e49c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e49f jne 0x1027e51b */
  if (!C.zf) goto L_1027e51b;
  /* 1027e4a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e4a4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1027e4a7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1027e4ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027e4af je 0x1027e51b */
  if (C.zf) goto L_1027e51b;
  /* 1027e4b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e4b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e4b7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1027e4b9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027e4bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027e4bf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e4c3 jle 0x1027e51b */
  if ((C.zf||C.sf!=C.of)) goto L_1027e51b;
  /* 1027e4c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027e4c8 push edx */
  push32((uint32_t)(EDX));
  /* 1027e4c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e4cc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1027e4cf push ecx */
  push32((uint32_t)(ECX));
  /* 1027e4d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e4d3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1027e4d6 push eax */
  push32((uint32_t)(EAX));
  /* 1027e4d7 call 0x1027d3f0 */
  push32(0x1027e4dcu); f_1027d3f0();
  /* 1027e4dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e4df cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e4e2 jne 0x1027e505 */
  if (!C.zf) goto L_1027e505;
  /* 1027e4e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e4e7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1027e4ea and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1027e4f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027e4f2 je 0x1027e503 */
  if (C.zf) goto L_1027e503;
  /* 1027e4f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e4f7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1027e4fa and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1027e4fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e500 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1027e503:;
  /* 1027e503 jmp 0x1027e51b */
  goto L_1027e51b;
L_1027e505:;
  /* 1027e505 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e508 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1027e50b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1027e50e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e511 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1027e514 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1027e51b:;
  /* 1027e51b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e51e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e521 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1027e524 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1027e526 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027e529 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1027e530 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027e533 mov esp, ebp */
  ESP = (EBP);
  /* 1027e535 pop ebp */
  EBP = (pop32());
  /* 1027e536 ret  */
  ESPCHK(0x1027e480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e540 @ 0x1027e540 (15 bytes, 7 insns) */
void f_1027e540(void) {
  FTRACE(0x1027e540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027e540 push ebp */
  push32((uint32_t)(EBP));
  /* 1027e541 mov ebp, esp */
  EBP = (ESP);
  /* 1027e543 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027e545 call 0x1027e550 */
  push32(0x1027e54au); f_1027e550();
  /* 1027e54a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e54d pop ebp */
  EBP = (pop32());
  /* 1027e54e ret  */
  ESPCHK(0x1027e540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e550 @ 0x1027e550 (319 bytes, 94 insns) */
void f_1027e550(void) {
  FTRACE(0x1027e550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027e550 push ebp */
  push32((uint32_t)(EBP));
  /* 1027e551 mov ebp, esp */
  EBP = (ESP);
  /* 1027e553 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027e556 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1027e55d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1027e564 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027e566 call 0x10278550 */
  push32(0x1027e56bu); f_10278550();
  /* 1027e56b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e56e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1027e575 jmp 0x1027e580 */
  goto L_1027e580;
L_1027e577:;
  /* 1027e577 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027e57a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e57d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1027e580:;
  /* 1027e580 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027e583 cmp ecx, dword ptr [0x102a1c80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102a1c80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e589 jge 0x1027e673 */
  if ((C.sf==C.of)) goto L_1027e673;
  /* 1027e58f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027e592 mov eax, dword ptr [0x102a0938] */
  EAX = (r32((uint32_t)(0x102a0938)));
  /* 1027e597 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e59b je 0x1027e66e */
  if (C.zf) goto L_1027e66e;
  /* 1027e5a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027e5a4 mov edx, dword ptr [0x102a0938] */
  EDX = (r32((uint32_t)(0x102a0938)));
  /* 1027e5aa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1027e5ad mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1027e5b0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1027e5b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027e5b8 je 0x1027e66e */
  if (C.zf) goto L_1027e66e;
  /* 1027e5be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027e5c1 mov eax, dword ptr [0x102a0938] */
  EAX = (r32((uint32_t)(0x102a0938)));
  /* 1027e5c6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1027e5c9 push ecx */
  push32((uint32_t)(ECX));
  /* 1027e5ca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027e5cd push edx */
  push32((uint32_t)(EDX));
  /* 1027e5ce call 0x1027d9a0 */
  push32(0x1027e5d3u); f_1027d9a0();
  /* 1027e5d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e5d6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027e5d9 mov ecx, dword ptr [0x102a0938] */
  ECX = (r32((uint32_t)(0x102a0938)));
  /* 1027e5df mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1027e5e2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1027e5e5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1027e5ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027e5ec je 0x1027e655 */
  if (C.zf) goto L_1027e655;
  /* 1027e5ee cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e5f2 jne 0x1027e619 */
  if (!C.zf) goto L_1027e619;
  /* 1027e5f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027e5f7 mov edx, dword ptr [0x102a0938] */
  EDX = (r32((uint32_t)(0x102a0938)));
  /* 1027e5fd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1027e600 push eax */
  push32((uint32_t)(EAX));
  /* 1027e601 call 0x1027e430 */
  push32(0x1027e606u); f_1027e430();
  /* 1027e606 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e609 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e60c je 0x1027e617 */
  if (C.zf) goto L_1027e617;
  /* 1027e60e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027e611 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e614 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1027e617:;
  /* 1027e617 jmp 0x1027e655 */
  goto L_1027e655;
L_1027e619:;
  /* 1027e619 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e61d jne 0x1027e655 */
  if (!C.zf) goto L_1027e655;
  /* 1027e61f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027e622 mov eax, dword ptr [0x102a0938] */
  EAX = (r32((uint32_t)(0x102a0938)));
  /* 1027e627 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1027e62a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1027e62d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1027e630 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027e632 je 0x1027e655 */
  if (C.zf) goto L_1027e655;
  /* 1027e634 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027e637 mov ecx, dword ptr [0x102a0938] */
  ECX = (r32((uint32_t)(0x102a0938)));
  /* 1027e63d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1027e640 push edx */
  push32((uint32_t)(EDX));
  /* 1027e641 call 0x1027e430 */
  push32(0x1027e646u); f_1027e430();
  /* 1027e646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e649 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e64c jne 0x1027e655 */
  if (!C.zf) goto L_1027e655;
  /* 1027e64e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1027e655:;
  /* 1027e655 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027e658 mov ecx, dword ptr [0x102a0938] */
  ECX = (r32((uint32_t)(0x102a0938)));
  /* 1027e65e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1027e661 push edx */
  push32((uint32_t)(EDX));
  /* 1027e662 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027e665 push eax */
  push32((uint32_t)(EAX));
  /* 1027e666 call 0x1027da10 */
  push32(0x1027e66bu); f_1027da10();
  /* 1027e66b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027e66e:;
  /* 1027e66e jmp 0x1027e577 */
  goto L_1027e577;
L_1027e673:;
  /* 1027e673 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027e675 call 0x102785f0 */
  push32(0x1027e67au); f_102785f0();
  /* 1027e67a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e67d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e681 jne 0x1027e688 */
  if (!C.zf) goto L_1027e688;
  /* 1027e683 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027e686 jmp 0x1027e68b */
  goto L_1027e68b;
L_1027e688:;
  /* 1027e688 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1027e68b:;
  /* 1027e68b mov esp, ebp */
  ESP = (EBP);
  /* 1027e68d pop ebp */
  EBP = (pop32());
  /* 1027e68e ret  */
  ESPCHK(0x1027e550u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1027e690 (15 bytes, 7 insns) */
void f_1027e690(void) {
  FTRACE(0x1027e690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027e690 push ebp */
  push32((uint32_t)(EBP));
  /* 1027e691 mov ebp, esp */
  EBP = (ESP);
  /* 1027e693 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027e695 call 0x10273ac0 */
  push32(0x1027e69au); f_10273ac0();
  /* 1027e69a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e69d pop ebp */
  EBP = (pop32());
  /* 1027e69e ret  */
  ESPCHK(0x1027e690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6a0 @ 0x1027e6a0 (1007 bytes, 269 insns) */
void f_1027e6a0(void) {
  FTRACE(0x1027e6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027e6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027e6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1027e6a3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027e6a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e6ad jl 0x1027e6b5 */
  if ((C.sf!=C.of)) goto L_1027e6b5;
  /* 1027e6af cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e6b3 jle 0x1027e6bc */
  if ((C.zf||C.sf!=C.of)) goto L_1027e6bc;
L_1027e6b5:;
  /* 1027e6b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027e6b7 jmp 0x1027ea8b */
  goto L_1027ea8b;
L_1027e6bc:;
  /* 1027e6bc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1027e6be call 0x10278550 */
  push32(0x1027e6c3u); f_10278550();
  /* 1027e6c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e6c6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1027e6cd mov eax, dword ptr [0x102a0924] */
  EAX = (r32((uint32_t)(0x102a0924)));
  /* 1027e6d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e6d5 mov dword ptr [0x102a0924], eax */
  w32((uint32_t)(0x102a0924), (EAX));
L_1027e6da:;
  /* 1027e6da cmp dword ptr [0x102a0934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e6e1 je 0x1027e6ed */
  if (C.zf) goto L_1027e6ed;
  /* 1027e6e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027e6e5 call dword ptr [0x102a32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32ac))), 0x1027e6ebu);
  /* 1027e6eb jmp 0x1027e6da */
  goto L_1027e6da;
L_1027e6ed:;
  /* 1027e6ed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e6f1 je 0x1027e731 */
  if (C.zf) goto L_1027e731;
  /* 1027e6f3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e6f7 je 0x1027e711 */
  if (C.zf) goto L_1027e711;
  /* 1027e6f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027e6fc push ecx */
  push32((uint32_t)(ECX));
  /* 1027e6fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e700 push edx */
  push32((uint32_t)(EDX));
  /* 1027e701 call 0x1027ea90 */
  push32(0x1027e706u); f_1027ea90();
  /* 1027e706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e709 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1027e70f jmp 0x1027e723 */
  goto L_1027e723;
L_1027e711:;
  /* 1027e711 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e714 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027e717 mov ecx, dword ptr [eax + 0x1029f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1029f4dc)));
  /* 1027e71d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1027e723:;
  /* 1027e723 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1027e729 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1027e72c jmp 0x1027ea6b */
  goto L_1027ea6b;
L_1027e731:;
  /* 1027e731 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1027e738 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1027e73f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e743 je 0x1027ea63 */
  if (C.zf) goto L_1027ea63;
  /* 1027e749 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027e74c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1027e74f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e752 jne 0x1027e974 */
  if (!C.zf) goto L_1027e974;
  /* 1027e758 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027e75b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1027e75f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e762 jne 0x1027e974 */
  if (!C.zf) goto L_1027e974;
  /* 1027e768 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027e76b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1027e76f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e772 jne 0x1027e974 */
  if (!C.zf) goto L_1027e974;
  /* 1027e778 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027e77b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1027e781:;
  /* 1027e781 push 0x1029c074 */
  push32((uint32_t)(0x1029c074u));
  /* 1027e786 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1027e78c push ecx */
  push32((uint32_t)(ECX));
  /* 1027e78d call 0x102808f0 */
  push32(0x1027e792u); f_102808f0();
  /* 1027e792 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e795 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1027e79b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e7a2 je 0x1027e7cd */
  if (C.zf) goto L_1027e7cd;
  /* 1027e7a4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1027e7aa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027e7b0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1027e7b6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e7bd je 0x1027e7cd */
  if (C.zf) goto L_1027e7cd;
  /* 1027e7bf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1027e7c5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1027e7c8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e7cb jne 0x1027e7f3 */
  if (!C.zf) goto L_1027e7f3;
L_1027e7cd:;
  /* 1027e7cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e7d1 je 0x1027e7ec */
  if (C.zf) goto L_1027e7ec;
  /* 1027e7d3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1027e7d5 call 0x102785f0 */
  push32(0x1027e7dau); f_102785f0();
  /* 1027e7da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e7dd mov edx, dword ptr [0x102a0924] */
  EDX = (r32((uint32_t)(0x102a0924)));
  /* 1027e7e3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027e7e6 mov dword ptr [0x102a0924], edx */
  w32((uint32_t)(0x102a0924), (EDX));
L_1027e7ec:;
  /* 1027e7ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027e7ee jmp 0x1027ea8b */
  goto L_1027ea8b;
L_1027e7f3:;
  /* 1027e7f3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1027e7fa jmp 0x1027e805 */
  goto L_1027e805;
L_1027e7fc:;
  /* 1027e7fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027e7ff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e802 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1027e805:;
  /* 1027e805 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e809 jg 0x1027e853 */
  if ((!C.zf&&C.sf==C.of)) goto L_1027e853;
  /* 1027e80b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1027e811 push ecx */
  push32((uint32_t)(ECX));
  /* 1027e812 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1027e818 push edx */
  push32((uint32_t)(EDX));
  /* 1027e819 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027e81c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027e81f mov ecx, dword ptr [eax + 0x1029f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1029f4d8)));
  /* 1027e825 push ecx */
  push32((uint32_t)(ECX));
  /* 1027e826 call 0x102808b0 */
  push32(0x1027e82bu); f_102808b0();
  /* 1027e82b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e82e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027e830 jne 0x1027e851 */
  if (!C.zf) goto L_1027e851;
  /* 1027e832 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027e835 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027e838 mov eax, dword ptr [edx + 0x1029f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1029f4d8)));
  /* 1027e83e push eax */
  push32((uint32_t)(EAX));
  /* 1027e83f call 0x10277980 */
  push32(0x1027e844u); f_10277980();
  /* 1027e844 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e847 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e84d jne 0x1027e851 */
  if (!C.zf) goto L_1027e851;
  /* 1027e84f jmp 0x1027e853 */
  goto L_1027e853;
L_1027e851:;
  /* 1027e851 jmp 0x1027e7fc */
  goto L_1027e7fc;
L_1027e853:;
  /* 1027e853 push 0x1029c070 */
  push32((uint32_t)(0x1029c070u));
  /* 1027e858 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1027e85e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e861 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1027e867 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1027e86d push edx */
  push32((uint32_t)(EDX));
  /* 1027e86e call 0x10280870 */
  push32(0x1027e873u); f_10280870();
  /* 1027e873 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e876 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1027e87c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e883 jne 0x1027e8b9 */
  if (!C.zf) goto L_1027e8b9;
  /* 1027e885 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1027e88b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1027e88e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e891 je 0x1027e8b9 */
  if (C.zf) goto L_1027e8b9;
  /* 1027e893 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e897 je 0x1027e8b2 */
  if (C.zf) goto L_1027e8b2;
  /* 1027e899 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1027e89b call 0x102785f0 */
  push32(0x1027e8a0u); f_102785f0();
  /* 1027e8a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e8a3 mov edx, dword ptr [0x102a0924] */
  EDX = (r32((uint32_t)(0x102a0924)));
  /* 1027e8a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027e8ac mov dword ptr [0x102a0924], edx */
  w32((uint32_t)(0x102a0924), (EDX));
L_1027e8b2:;
  /* 1027e8b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027e8b4 jmp 0x1027ea8b */
  goto L_1027ea8b;
L_1027e8b9:;
  /* 1027e8b9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e8bd jg 0x1027e90a */
  if ((!C.zf&&C.sf==C.of)) goto L_1027e90a;
  /* 1027e8bf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1027e8c5 push eax */
  push32((uint32_t)(EAX));
  /* 1027e8c6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1027e8cc push ecx */
  push32((uint32_t)(ECX));
  /* 1027e8cd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1027e8d3 push edx */
  push32((uint32_t)(EDX));
  /* 1027e8d4 call 0x10278370 */
  push32(0x1027e8d9u); f_10278370();
  /* 1027e8d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e8dc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1027e8e2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1027e8ea lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1027e8f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1027e8f1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027e8f4 push edx */
  push32((uint32_t)(EDX));
  /* 1027e8f5 call 0x1027ea90 */
  push32(0x1027e8fau); f_1027ea90();
  /* 1027e8fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e8fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027e8ff je 0x1027e90a */
  if (C.zf) goto L_1027e90a;
  /* 1027e901 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027e904 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e907 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1027e90a:;
  /* 1027e90a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1027e910 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e916 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1027e91c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1027e922 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1027e925 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027e927 je 0x1027e938 */
  if (C.zf) goto L_1027e938;
  /* 1027e929 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1027e92f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e932 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1027e938:;
  /* 1027e938 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1027e93e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1027e941 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027e943 jne 0x1027e781 */
  if (!C.zf) goto L_1027e781;
  /* 1027e949 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e94d je 0x1027e95c */
  if (C.zf) goto L_1027e95c;
  /* 1027e94f call 0x1027ec30 */
  push32(0x1027e954u); f_1027ec30();
  /* 1027e954 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1027e95a jmp 0x1027e966 */
  goto L_1027e966;
L_1027e95c:;
  /* 1027e95c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1027e966:;
  /* 1027e966 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1027e96c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1027e96f jmp 0x1027ea61 */
  goto L_1027ea61;
L_1027e974:;
  /* 1027e974 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027e977 push edx */
  push32((uint32_t)(EDX));
  /* 1027e978 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027e97a push 0 */
  push32((uint32_t)(0x0u));
  /* 1027e97c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1027e982 push eax */
  push32((uint32_t)(EAX));
  /* 1027e983 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027e986 push ecx */
  push32((uint32_t)(ECX));
  /* 1027e987 call 0x1027ed30 */
  push32(0x1027e98cu); f_1027ed30();
  /* 1027e98c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e98f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1027e992 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e996 je 0x1027ea61 */
  if (C.zf) goto L_1027ea61;
  /* 1027e99c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1027e9a3 jmp 0x1027e9ae */
  goto L_1027e9ae;
L_1027e9a5:;
  /* 1027e9a5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027e9a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e9ab mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1027e9ae:;
  /* 1027e9ae cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e9b2 jg 0x1027ea10 */
  if ((!C.zf&&C.sf==C.of)) goto L_1027ea10;
  /* 1027e9b4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027e9b8 je 0x1027ea0e */
  if (C.zf) goto L_1027ea0e;
  /* 1027e9ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027e9bd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027e9c0 mov ecx, dword ptr [eax + 0x1029f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1029f4dc)));
  /* 1027e9c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1027e9c7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1027e9cd push edx */
  push32((uint32_t)(EDX));
  /* 1027e9ce call 0x102807e0 */
  push32(0x1027e9d3u); f_102807e0();
  /* 1027e9d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e9d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027e9d8 je 0x1027ea05 */
  if (C.zf) goto L_1027ea05;
  /* 1027e9da lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1027e9e0 push eax */
  push32((uint32_t)(EAX));
  /* 1027e9e1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027e9e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1027e9e5 call 0x1027ea90 */
  push32(0x1027e9eau); f_1027ea90();
  /* 1027e9ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e9ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027e9ef je 0x1027e9fc */
  if (C.zf) goto L_1027e9fc;
  /* 1027e9f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027e9f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027e9f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1027e9fa jmp 0x1027ea03 */
  goto L_1027ea03;
L_1027e9fc:;
  /* 1027e9fc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1027ea03:;
  /* 1027ea03 jmp 0x1027ea0e */
  goto L_1027ea0e;
L_1027ea05:;
  /* 1027ea05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027ea08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ea0b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1027ea0e:;
  /* 1027ea0e jmp 0x1027e9a5 */
  goto L_1027e9a5;
L_1027ea10:;
  /* 1027ea10 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ea14 je 0x1027ea3b */
  if (C.zf) goto L_1027ea3b;
  /* 1027ea16 call 0x1027ec30 */
  push32(0x1027ea1bu); f_1027ec30();
  /* 1027ea1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1027ea1e push 2 */
  push32((uint32_t)(0x2u));
  /* 1027ea20 mov ecx, dword ptr [0x1029f4dc] */
  ECX = (r32((uint32_t)(0x1029f4dc)));
  /* 1027ea26 push ecx */
  push32((uint32_t)(ECX));
  /* 1027ea27 call 0x102755e0 */
  push32(0x1027ea2cu); f_102755e0();
  /* 1027ea2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ea2f mov dword ptr [0x1029f4dc], 0 */
  w32((uint32_t)(0x1029f4dc), (0x0u));
  /* 1027ea39 jmp 0x1027ea61 */
  goto L_1027ea61;
L_1027ea3b:;
  /* 1027ea3b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ea3f je 0x1027ea4e */
  if (C.zf) goto L_1027ea4e;
  /* 1027ea41 call 0x1027ec30 */
  push32(0x1027ea46u); f_1027ec30();
  /* 1027ea46 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1027ea4c jmp 0x1027ea58 */
  goto L_1027ea58;
L_1027ea4e:;
  /* 1027ea4e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1027ea58:;
  /* 1027ea58 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1027ea5e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1027ea61:;
  /* 1027ea61 jmp 0x1027ea6b */
  goto L_1027ea6b;
L_1027ea63:;
  /* 1027ea63 call 0x1027ec30 */
  push32(0x1027ea68u); f_1027ec30();
  /* 1027ea68 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1027ea6b:;
  /* 1027ea6b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ea6f je 0x1027ea88 */
  if (C.zf) goto L_1027ea88;
  /* 1027ea71 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1027ea73 call 0x102785f0 */
  push32(0x1027ea78u); f_102785f0();
  /* 1027ea78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ea7b mov eax, dword ptr [0x102a0924] */
  EAX = (r32((uint32_t)(0x102a0924)));
  /* 1027ea80 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027ea83 mov dword ptr [0x102a0924], eax */
  w32((uint32_t)(0x102a0924), (EAX));
L_1027ea88:;
  /* 1027ea88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1027ea8b:;
  /* 1027ea8b mov esp, ebp */
  ESP = (EBP);
  /* 1027ea8d pop ebp */
  EBP = (pop32());
  /* 1027ea8e ret  */
  ESPCHK(0x1027e6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea90 @ 0x1027ea90 (403 bytes, 117 insns) */
void f_1027ea90(void) {
  FTRACE(0x1027ea90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027ea90 push ebp */
  push32((uint32_t)(EBP));
  /* 1027ea91 mov ebp, esp */
  EBP = (ESP);
  /* 1027ea93 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027ea99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ea9c push eax */
  push32((uint32_t)(EAX));
  /* 1027ea9d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1027eaa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1027eaa4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1027eaaa push edx */
  push32((uint32_t)(EDX));
  /* 1027eaab lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1027eab1 push eax */
  push32((uint32_t)(EAX));
  /* 1027eab2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027eab5 push ecx */
  push32((uint32_t)(ECX));
  /* 1027eab6 call 0x1027ed30 */
  push32(0x1027eabbu); f_1027ed30();
  /* 1027eabb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027eabe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027eac0 jne 0x1027eac9 */
  if (!C.zf) goto L_1027eac9;
  /* 1027eac2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027eac4 jmp 0x1027ec1f */
  goto L_1027ec1f;
L_1027eac9:;
  /* 1027eac9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1027eace push 0x1029c078 */
  push32((uint32_t)(0x1029c078u));
  /* 1027ead3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027ead5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1027eadb push edx */
  push32((uint32_t)(EDX));
  /* 1027eadc call 0x10277980 */
  push32(0x1027eae1u); f_10277980();
  /* 1027eae1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027eae4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027eae7 push eax */
  push32((uint32_t)(EAX));
  /* 1027eae8 call 0x10274b50 */
  push32(0x1027eaedu); f_10274b50();
  /* 1027eaed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027eaf0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1027eaf3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027eaf7 jne 0x1027eb00 */
  if (!C.zf) goto L_1027eb00;
  /* 1027eaf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027eafb jmp 0x1027ec1f */
  goto L_1027ec1f;
L_1027eb00:;
  /* 1027eb00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027eb03 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027eb06 mov ecx, dword ptr [eax + 0x1029f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1029f4dc)));
  /* 1027eb0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027eb0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027eb12 mov eax, dword ptr [edx*4 + 0x102a07a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x102a07a0)));
  /* 1027eb19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027eb1c push 6 */
  push32((uint32_t)(0x6u));
  /* 1027eb1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027eb21 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027eb24 add ecx, 0x102a07f0 */
  { uint32_t _a=(ECX),_b=(0x102a07f0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027eb2a push ecx */
  push32((uint32_t)(ECX));
  /* 1027eb2b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1027eb2e push edx */
  push32((uint32_t)(EDX));
  /* 1027eb2f call 0x1027b430 */
  push32(0x1027eb34u); f_1027b430();
  /* 1027eb34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027eb37 mov eax, dword ptr [0x102a07b8] */
  EAX = (r32((uint32_t)(0x102a07b8)));
  /* 1027eb3c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1027eb3f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1027eb45 push ecx */
  push32((uint32_t)(ECX));
  /* 1027eb46 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027eb49 push edx */
  push32((uint32_t)(EDX));
  /* 1027eb4a call 0x10277b00 */
  push32(0x1027eb4fu); f_10277b00();
  /* 1027eb4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027eb52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027eb55 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027eb58 mov dword ptr [ecx + 0x1029f4dc], eax */
  w32((uint32_t)(ECX + 0x1029f4dc), (EAX));
  /* 1027eb5e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1027eb64 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1027eb6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027eb6d mov dword ptr [eax*4 + 0x102a07a0], edx */
  w32((uint32_t)(EAX*4 + 0x102a07a0), (EDX));
  /* 1027eb74 push 6 */
  push32((uint32_t)(0x6u));
  /* 1027eb76 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1027eb7c push ecx */
  push32((uint32_t)(ECX));
  /* 1027eb7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027eb80 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027eb83 add edx, 0x102a07f0 */
  { uint32_t _a=(EDX),_b=(0x102a07f0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027eb89 push edx */
  push32((uint32_t)(EDX));
  /* 1027eb8a call 0x1027b430 */
  push32(0x1027eb8fu); f_1027b430();
  /* 1027eb8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027eb92 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027eb96 jne 0x1027eba3 */
  if (!C.zf) goto L_1027eba3;
  /* 1027eb98 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1027eb9e mov dword ptr [0x102a07b8], eax */
  w32((uint32_t)(0x102a07b8), (EAX));
L_1027eba3:;
  /* 1027eba3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027eba7 jne 0x1027ebb5 */
  if (!C.zf) goto L_1027ebb5;
  /* 1027eba9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1027ebaf mov dword ptr [0x102a07bc], ecx */
  w32((uint32_t)(0x102a07bc), (ECX));
L_1027ebb5:;
  /* 1027ebb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ebb8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027ebbb call dword ptr [edx + 0x1029f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1029f4e0))), 0x1027ebc1u);
  /* 1027ebc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027ebc3 je 0x1027ebfc */
  if (C.zf) goto L_1027ebfc;
  /* 1027ebc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ebc8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027ebcb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027ebce mov dword ptr [eax + 0x1029f4dc], ecx */
  w32((uint32_t)(EAX + 0x1029f4dc), (ECX));
  /* 1027ebd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027ebd6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027ebd9 push edx */
  push32((uint32_t)(EDX));
  /* 1027ebda call 0x102755e0 */
  push32(0x1027ebdfu); f_102755e0();
  /* 1027ebdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ebe2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ebe5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ebe8 mov dword ptr [eax*4 + 0x102a07a0], ecx */
  w32((uint32_t)(EAX*4 + 0x102a07a0), (ECX));
  /* 1027ebef mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027ebf2 mov dword ptr [0x102a07b8], edx */
  w32((uint32_t)(0x102a07b8), (EDX));
  /* 1027ebf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027ebfa jmp 0x1027ec1f */
  goto L_1027ec1f;
L_1027ebfc:;
  /* 1027ebfc cmp dword ptr [ebp - 0xc], 0x1029f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1029f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ec03 je 0x1027ec13 */
  if (C.zf) goto L_1027ec13;
  /* 1027ec05 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027ec07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027ec0a push eax */
  push32((uint32_t)(EAX));
  /* 1027ec0b call 0x102755e0 */
  push32(0x1027ec10u); f_102755e0();
  /* 1027ec10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027ec13:;
  /* 1027ec13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ec16 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027ec19 mov eax, dword ptr [ecx + 0x1029f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1029f4dc)));
L_1027ec1f:;
  /* 1027ec1f mov esp, ebp */
  ESP = (EBP);
  /* 1027ec21 pop ebp */
  EBP = (pop32());
  /* 1027ec22 ret  */
  ESPCHK(0x1027ea90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec30 @ 0x1027ec30 (256 bytes, 72 insns) */
void f_1027ec30(void) {
  FTRACE(0x1027ec30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027ec30 push ebp */
  push32((uint32_t)(EBP));
  /* 1027ec31 mov ebp, esp */
  EBP = (ESP);
  /* 1027ec33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027ec36 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1027ec3d cmp dword ptr [0x1029f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1029f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ec44 jne 0x1027ec64 */
  if (!C.zf) goto L_1027ec64;
  /* 1027ec46 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1027ec4b push 0x1029c078 */
  push32((uint32_t)(0x1029c078u));
  /* 1027ec50 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027ec52 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1027ec57 call 0x10274b50 */
  push32(0x1027ec5cu); f_10274b50();
  /* 1027ec5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ec5f mov dword ptr [0x1029f4dc], eax */
  w32((uint32_t)(0x1029f4dc), (EAX));
L_1027ec64:;
  /* 1027ec64 mov eax, dword ptr [0x1029f4dc] */
  EAX = (r32((uint32_t)(0x1029f4dc)));
  /* 1027ec69 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1027ec6c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1027ec73 jmp 0x1027ec7e */
  goto L_1027ec7e;
L_1027ec75:;
  /* 1027ec75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ec78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ec7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1027ec7e:;
  /* 1027ec7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ec81 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027ec84 mov eax, dword ptr [edx + 0x1029f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1029f4dc)));
  /* 1027ec8a push eax */
  push32((uint32_t)(EAX));
  /* 1027ec8b push 0x1029c084 */
  push32((uint32_t)(0x1029c084u));
  /* 1027ec90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ec93 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027ec96 mov edx, dword ptr [ecx + 0x1029f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1029f4d8)));
  /* 1027ec9c push edx */
  push32((uint32_t)(EDX));
  /* 1027ec9d push 3 */
  push32((uint32_t)(0x3u));
  /* 1027ec9f mov eax, dword ptr [0x1029f4dc] */
  EAX = (r32((uint32_t)(0x1029f4dc)));
  /* 1027eca4 push eax */
  push32((uint32_t)(EAX));
  /* 1027eca5 call 0x1027eed0 */
  push32(0x1027ecaau); f_1027eed0();
  /* 1027ecaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ecad cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ecb1 jge 0x1027ecf9 */
  if ((C.sf==C.of)) goto L_1027ecf9;
  /* 1027ecb3 push 0x1029c070 */
  push32((uint32_t)(0x1029c070u));
  /* 1027ecb8 mov ecx, dword ptr [0x1029f4dc] */
  ECX = (r32((uint32_t)(0x1029f4dc)));
  /* 1027ecbe push ecx */
  push32((uint32_t)(ECX));
  /* 1027ecbf call 0x10277b10 */
  push32(0x1027ecc4u); f_10277b10();
  /* 1027ecc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ecc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ecca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027eccd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027ecd0 mov eax, dword ptr [edx + 0x1029f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1029f4dc)));
  /* 1027ecd6 push eax */
  push32((uint32_t)(EAX));
  /* 1027ecd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ecda imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027ecdd mov edx, dword ptr [ecx + 0x1029f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1029f4dc)));
  /* 1027ece3 push edx */
  push32((uint32_t)(EDX));
  /* 1027ece4 call 0x102807e0 */
  push32(0x1027ece9u); f_102807e0();
  /* 1027ece9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ecec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027ecee je 0x1027ecf7 */
  if (C.zf) goto L_1027ecf7;
  /* 1027ecf0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1027ecf7:;
  /* 1027ecf7 jmp 0x1027ed27 */
  goto L_1027ed27;
L_1027ecf9:;
  /* 1027ecf9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ecfd jne 0x1027ed06 */
  if (!C.zf) goto L_1027ed06;
  /* 1027ecff mov eax, dword ptr [0x1029f4dc] */
  EAX = (r32((uint32_t)(0x1029f4dc)));
  /* 1027ed04 jmp 0x1027ed2c */
  goto L_1027ed2c;
L_1027ed06:;
  /* 1027ed06 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027ed08 mov eax, dword ptr [0x1029f4dc] */
  EAX = (r32((uint32_t)(0x1029f4dc)));
  /* 1027ed0d push eax */
  push32((uint32_t)(EAX));
  /* 1027ed0e call 0x102755e0 */
  push32(0x1027ed13u); f_102755e0();
  /* 1027ed13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ed16 mov dword ptr [0x1029f4dc], 0 */
  w32((uint32_t)(0x1029f4dc), (0x0u));
  /* 1027ed20 mov eax, dword ptr [0x1029f4f4] */
  EAX = (r32((uint32_t)(0x1029f4f4)));
  /* 1027ed25 jmp 0x1027ed2c */
  goto L_1027ed2c;
L_1027ed27:;
  /* 1027ed27 jmp 0x1027ec75 */
  goto L_1027ec75;
L_1027ed2c:;
  /* 1027ed2c mov esp, ebp */
  ESP = (EBP);
  /* 1027ed2e pop ebp */
  EBP = (pop32());
  /* 1027ed2f ret  */
  ESPCHK(0x1027ec30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed30 @ 0x1027ed30 (388 bytes, 115 insns) */
void f_1027ed30(void) {
  FTRACE(0x1027ed30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027ed30 push ebp */
  push32((uint32_t)(EBP));
  /* 1027ed31 mov ebp, esp */
  EBP = (ESP);
  /* 1027ed33 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027ed39 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ed3d jne 0x1027ed46 */
  if (!C.zf) goto L_1027ed46;
  /* 1027ed3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027ed41 jmp 0x1027eeb0 */
  goto L_1027eeb0;
L_1027ed46:;
  /* 1027ed46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ed49 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1027ed4c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ed4f jne 0x1027eda0 */
  if (!C.zf) goto L_1027eda0;
  /* 1027ed51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ed54 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1027ed58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027ed5a jne 0x1027eda0 */
  if (!C.zf) goto L_1027eda0;
  /* 1027ed5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027ed5f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1027ed62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027ed65 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1027ed69 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ed6d je 0x1027ed89 */
  if (C.zf) goto L_1027ed89;
  /* 1027ed6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027ed72 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1027ed77 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027ed7a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1027ed80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027ed83 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1027ed89:;
  /* 1027ed89 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ed8d je 0x1027ed98 */
  if (C.zf) goto L_1027ed98;
  /* 1027ed8f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1027ed92 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1027ed98:;
  /* 1027ed98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027ed9b jmp 0x1027eeb0 */
  goto L_1027eeb0;
L_1027eda0:;
  /* 1027eda0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027eda3 push ecx */
  push32((uint32_t)(ECX));
  /* 1027eda4 push 0x1029f450 */
  push32((uint32_t)(0x1029f450u));
  /* 1027eda9 call 0x102807e0 */
  push32(0x1027edaeu); f_102807e0();
  /* 1027edae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027edb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027edb3 je 0x1027ee68 */
  if (C.zf) goto L_1027ee68;
  /* 1027edb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027edbc push edx */
  push32((uint32_t)(EDX));
  /* 1027edbd push 0x1029f3cc */
  push32((uint32_t)(0x1029f3ccu));
  /* 1027edc2 call 0x102807e0 */
  push32(0x1027edc7u); f_102807e0();
  /* 1027edc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027edca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027edcc je 0x1027ee68 */
  if (C.zf) goto L_1027ee68;
  /* 1027edd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027edd5 push eax */
  push32((uint32_t)(EAX));
  /* 1027edd6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1027eddc push ecx */
  push32((uint32_t)(ECX));
  /* 1027eddd call 0x1027ef20 */
  push32(0x1027ede2u); f_1027ef20();
  /* 1027ede2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ede5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027ede7 je 0x1027edf0 */
  if (C.zf) goto L_1027edf0;
  /* 1027ede9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027edeb jmp 0x1027eeb0 */
  goto L_1027eeb0;
L_1027edf0:;
  /* 1027edf0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1027edf6 push edx */
  push32((uint32_t)(EDX));
  /* 1027edf7 push 0x102a07c8 */
  push32((uint32_t)(0x102a07c8u));
  /* 1027edfc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1027ee02 push eax */
  push32((uint32_t)(EAX));
  /* 1027ee03 call 0x10280930 */
  push32(0x1027ee08u); f_10280930();
  /* 1027ee08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ee0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027ee0d jne 0x1027ee16 */
  if (!C.zf) goto L_1027ee16;
  /* 1027ee0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027ee11 jmp 0x1027eeb0 */
  goto L_1027eeb0;
L_1027ee16:;
  /* 1027ee16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027ee18 mov cx, word ptr [0x102a07cc] */
  CX = (r16((uint32_t)(0x102a07cc)));
  /* 1027ee1f mov dword ptr [0x102a07d0], ecx */
  w32((uint32_t)(0x102a07d0), (ECX));
  /* 1027ee25 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1027ee2b push edx */
  push32((uint32_t)(EDX));
  /* 1027ee2c push 0x1029f450 */
  push32((uint32_t)(0x1029f450u));
  /* 1027ee31 call 0x1027f080 */
  push32(0x1027ee36u); f_1027f080();
  /* 1027ee36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ee39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ee3c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1027ee3f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027ee41 je 0x1027ee56 */
  if (C.zf) goto L_1027ee56;
  /* 1027ee43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ee46 push edx */
  push32((uint32_t)(EDX));
  /* 1027ee47 push 0x1029f3cc */
  push32((uint32_t)(0x1029f3ccu));
  /* 1027ee4c call 0x10277b00 */
  push32(0x1027ee51u); f_10277b00();
  /* 1027ee51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ee54 jmp 0x1027ee68 */
  goto L_1027ee68;
L_1027ee56:;
  /* 1027ee56 push 0x1029f450 */
  push32((uint32_t)(0x1029f450u));
  /* 1027ee5b push 0x1029f3cc */
  push32((uint32_t)(0x1029f3ccu));
  /* 1027ee60 call 0x10277b00 */
  push32(0x1027ee65u); f_10277b00();
  /* 1027ee65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027ee68:;
  /* 1027ee68 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ee6c je 0x1027ee81 */
  if (C.zf) goto L_1027ee81;
  /* 1027ee6e push 6 */
  push32((uint32_t)(0x6u));
  /* 1027ee70 push 0x102a07c8 */
  push32((uint32_t)(0x102a07c8u));
  /* 1027ee75 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027ee78 push eax */
  push32((uint32_t)(EAX));
  /* 1027ee79 call 0x1027b430 */
  push32(0x1027ee7eu); f_1027b430();
  /* 1027ee7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027ee81:;
  /* 1027ee81 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ee85 je 0x1027ee9a */
  if (C.zf) goto L_1027ee9a;
  /* 1027ee87 push 4 */
  push32((uint32_t)(0x4u));
  /* 1027ee89 push 0x102a07d0 */
  push32((uint32_t)(0x102a07d0u));
  /* 1027ee8e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1027ee91 push ecx */
  push32((uint32_t)(ECX));
  /* 1027ee92 call 0x1027b430 */
  push32(0x1027ee97u); f_1027b430();
  /* 1027ee97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027ee9a:;
  /* 1027ee9a push 0x1029f450 */
  push32((uint32_t)(0x1029f450u));
  /* 1027ee9f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027eea2 push edx */
  push32((uint32_t)(EDX));
  /* 1027eea3 call 0x10277b00 */
  push32(0x1027eea8u); f_10277b00();
  /* 1027eea8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027eeab mov eax, 0x1029f450 */
  EAX = (0x1029f450u);
L_1027eeb0:;
  /* 1027eeb0 mov esp, ebp */
  ESP = (EBP);
  /* 1027eeb2 pop ebp */
  EBP = (pop32());
  /* 1027eeb3 ret  */
  ESPCHK(0x1027ed30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eec0 @ 0x1027eec0 (7 bytes, 5 insns) */
void f_1027eec0(void) {
  FTRACE(0x1027eec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027eec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027eec1 mov ebp, esp */
  EBP = (ESP);
  /* 1027eec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027eec5 pop ebp */
  EBP = (pop32());
  /* 1027eec6 ret  */
  ESPCHK(0x1027eec0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1027eed0 (79 bytes, 28 insns) */
void f_1027eed0(void) {
  FTRACE(0x1027eed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027eed0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027eed1 mov ebp, esp */
  EBP = (ESP);
  /* 1027eed3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027eed6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1027eed9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027eedc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1027eee3 jmp 0x1027eeee */
  goto L_1027eeee;
L_1027eee5:;
  /* 1027eee5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027eee8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027eeeb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1027eeee:;
  /* 1027eeee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027eef1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027eef4 jge 0x1027ef14 */
  if ((C.sf==C.of)) goto L_1027ef14;
  /* 1027eef6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027eef9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027eefc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027eeff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ef02 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1027ef05 push edx */
  push32((uint32_t)(EDX));
  /* 1027ef06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ef09 push eax */
  push32((uint32_t)(EAX));
  /* 1027ef0a call 0x10277b10 */
  push32(0x1027ef0fu); f_10277b10();
  /* 1027ef0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ef12 jmp 0x1027eee5 */
  goto L_1027eee5;
L_1027ef14:;
  /* 1027ef14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1027ef1b mov esp, ebp */
  ESP = (EBP);
  /* 1027ef1d pop ebp */
  EBP = (pop32());
  /* 1027ef1e ret  */
  ESPCHK(0x1027eed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef20 @ 0x1027ef20 (349 bytes, 122 insns) */
void f_1027ef20(void) {
  FTRACE(0x1027ef20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027ef20 push ebp */
  push32((uint32_t)(EBP));
  /* 1027ef21 mov ebp, esp */
  EBP = (ESP);
  /* 1027ef23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027ef26 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1027ef2b push 0 */
  push32((uint32_t)(0x0u));
  /* 1027ef2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ef30 push eax */
  push32((uint32_t)(EAX));
  /* 1027ef31 call 0x102788c0 */
  push32(0x1027ef36u); f_102788c0();
  /* 1027ef36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ef39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027ef3c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1027ef3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027ef41 jne 0x1027ef4a */
  if (!C.zf) goto L_1027ef4a;
  /* 1027ef43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027ef45 jmp 0x1027f079 */
  goto L_1027f079;
L_1027ef4a:;
  /* 1027ef4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027ef4d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1027ef50 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ef53 jne 0x1027ef80 */
  if (!C.zf) goto L_1027ef80;
  /* 1027ef55 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027ef58 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1027ef5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027ef5e je 0x1027ef80 */
  if (C.zf) goto L_1027ef80;
  /* 1027ef60 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027ef63 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ef66 push ecx */
  push32((uint32_t)(ECX));
  /* 1027ef67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ef6a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ef70 push edx */
  push32((uint32_t)(EDX));
  /* 1027ef71 call 0x10277b00 */
  push32(0x1027ef76u); f_10277b00();
  /* 1027ef76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ef79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027ef7b jmp 0x1027f079 */
  goto L_1027f079;
L_1027ef80:;
  /* 1027ef80 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1027ef87 jmp 0x1027ef92 */
  goto L_1027ef92;
L_1027ef89:;
  /* 1027ef89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ef8c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ef8f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1027ef92:;
  /* 1027ef92 push 0x1029c088 */
  push32((uint32_t)(0x1029c088u));
  /* 1027ef97 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027ef9a push ecx */
  push32((uint32_t)(ECX));
  /* 1027ef9b call 0x10280870 */
  push32(0x1027efa0u); f_10280870();
  /* 1027efa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027efa3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1027efa6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027efaa jne 0x1027efb4 */
  if (!C.zf) goto L_1027efb4;
  /* 1027efac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027efaf jmp 0x1027f079 */
  goto L_1027f079;
L_1027efb4:;
  /* 1027efb4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027efb7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027efba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1027efbc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1027efbf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027efc3 jne 0x1027efea */
  if (!C.zf) goto L_1027efea;
  /* 1027efc5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027efc9 jge 0x1027efea */
  if ((C.sf==C.of)) goto L_1027efea;
  /* 1027efcb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1027efcf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027efd2 je 0x1027efea */
  if (C.zf) goto L_1027efea;
  /* 1027efd4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027efd7 push edx */
  push32((uint32_t)(EDX));
  /* 1027efd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027efdb push eax */
  push32((uint32_t)(EAX));
  /* 1027efdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027efdf push ecx */
  push32((uint32_t)(ECX));
  /* 1027efe0 call 0x10278370 */
  push32(0x1027efe5u); f_10278370();
  /* 1027efe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027efe8 jmp 0x1027f050 */
  goto L_1027f050;
L_1027efea:;
  /* 1027efea cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027efee jne 0x1027f018 */
  if (!C.zf) goto L_1027f018;
  /* 1027eff0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027eff4 jge 0x1027f018 */
  if ((C.sf==C.of)) goto L_1027f018;
  /* 1027eff6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1027effa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027effd je 0x1027f018 */
  if (C.zf) goto L_1027f018;
  /* 1027efff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f002 push eax */
  push32((uint32_t)(EAX));
  /* 1027f003 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027f006 push ecx */
  push32((uint32_t)(ECX));
  /* 1027f007 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f00a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f00d push edx */
  push32((uint32_t)(EDX));
  /* 1027f00e call 0x10278370 */
  push32(0x1027f013u); f_10278370();
  /* 1027f013 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f016 jmp 0x1027f050 */
  goto L_1027f050;
L_1027f018:;
  /* 1027f018 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027f01c jne 0x1027f04b */
  if (!C.zf) goto L_1027f04b;
  /* 1027f01e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1027f022 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027f024 je 0x1027f02f */
  if (C.zf) goto L_1027f02f;
  /* 1027f026 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1027f02a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027f02d jne 0x1027f04b */
  if (!C.zf) goto L_1027f04b;
L_1027f02f:;
  /* 1027f02f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f032 push edx */
  push32((uint32_t)(EDX));
  /* 1027f033 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027f036 push eax */
  push32((uint32_t)(EAX));
  /* 1027f037 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f03a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f040 push ecx */
  push32((uint32_t)(ECX));
  /* 1027f041 call 0x10278370 */
  push32(0x1027f046u); f_10278370();
  /* 1027f046 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f049 jmp 0x1027f050 */
  goto L_1027f050;
L_1027f04b:;
  /* 1027f04b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027f04e jmp 0x1027f079 */
  goto L_1027f079;
L_1027f050:;
  /* 1027f050 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1027f054 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027f057 jne 0x1027f05b */
  if (!C.zf) goto L_1027f05b;
  /* 1027f059 jmp 0x1027f077 */
  goto L_1027f077;
L_1027f05b:;
  /* 1027f05b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1027f05f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027f061 jne 0x1027f065 */
  if (!C.zf) goto L_1027f065;
  /* 1027f063 jmp 0x1027f077 */
  goto L_1027f077;
L_1027f065:;
  /* 1027f065 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f068 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027f06b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1027f06f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1027f072 jmp 0x1027ef89 */
  goto L_1027ef89;
L_1027f077:;
  /* 1027f077 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1027f079:;
  /* 1027f079 mov esp, ebp */
  ESP = (EBP);
  /* 1027f07b pop ebp */
  EBP = (pop32());
  /* 1027f07c ret  */
  ESPCHK(0x1027ef20u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1027f080 (101 bytes, 36 insns) */
void f_1027f080(void) {
  FTRACE(0x1027f080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027f080 push ebp */
  push32((uint32_t)(EBP));
  /* 1027f081 mov ebp, esp */
  EBP = (ESP);
  /* 1027f083 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027f086 push eax */
  push32((uint32_t)(EAX));
  /* 1027f087 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f08a push ecx */
  push32((uint32_t)(ECX));
  /* 1027f08b call 0x10277b00 */
  push32(0x1027f090u); f_10277b00();
  /* 1027f090 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f093 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027f096 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1027f09a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027f09c je 0x1027f0b8 */
  if (C.zf) goto L_1027f0b8;
  /* 1027f09e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027f0a1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f0a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1027f0a5 push 0x1029c090 */
  push32((uint32_t)(0x1029c090u));
  /* 1027f0aa push 2 */
  push32((uint32_t)(0x2u));
  /* 1027f0ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f0af push edx */
  push32((uint32_t)(EDX));
  /* 1027f0b0 call 0x1027eed0 */
  push32(0x1027f0b5u); f_1027eed0();
  /* 1027f0b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027f0b8:;
  /* 1027f0b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027f0bb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1027f0c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027f0c4 je 0x1027f0e3 */
  if (C.zf) goto L_1027f0e3;
  /* 1027f0c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027f0c9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f0cf push edx */
  push32((uint32_t)(EDX));
  /* 1027f0d0 push 0x1029c08c */
  push32((uint32_t)(0x1029c08cu));
  /* 1027f0d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027f0d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f0da push eax */
  push32((uint32_t)(EAX));
  /* 1027f0db call 0x1027eed0 */
  push32(0x1027f0e0u); f_1027eed0();
  /* 1027f0e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027f0e3:;
  /* 1027f0e3 pop ebp */
  EBP = (pop32());
  /* 1027f0e4 ret  */
  ESPCHK(0x1027f080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0f0 @ 0x1027f0f0 (130 bytes, 50 insns) */
void f_1027f0f0(void) {
  FTRACE(0x1027f0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027f0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027f0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1027f0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1027f0f4 push ebx */
  push32((uint32_t)(EBX));
  /* 1027f0f5 push esi */
  push32((uint32_t)(ESI));
  /* 1027f0f6 push edi */
  push32((uint32_t)(EDI));
  /* 1027f0f7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1027f0fe:;
  /* 1027f0fe cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027f102 jne 0x1027f122 */
  if (!C.zf) goto L_1027f122;
  /* 1027f104 push 0x1029c0a0 */
  push32((uint32_t)(0x1029c0a0u));
  /* 1027f109 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027f10b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1027f10d push 0x1029c094 */
  push32((uint32_t)(0x1029c094u));
  /* 1027f112 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027f114 call 0x10273c10 */
  push32(0x1027f119u); f_10273c10();
  /* 1027f119 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f11c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027f11f jne 0x1027f122 */
  if (!C.zf) goto L_1027f122;
  /* 1027f121 int3  */
  x86_unimpl("int3 @ 0x1027f121");
L_1027f122:;
  /* 1027f122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027f124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027f126 jne 0x1027f0fe */
  if (!C.zf) goto L_1027f0fe;
  /* 1027f128 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f12b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1027f12e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1027f131 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027f133 je 0x1027f141 */
  if (C.zf) goto L_1027f141;
  /* 1027f135 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f138 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1027f13f jmp 0x1027f168 */
  goto L_1027f168;
L_1027f141:;
  /* 1027f141 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f144 push ecx */
  push32((uint32_t)(ECX));
  /* 1027f145 call 0x1027d960 */
  push32(0x1027f14au); f_1027d960();
  /* 1027f14a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f14d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f150 push edx */
  push32((uint32_t)(EDX));
  /* 1027f151 call 0x1027f180 */
  push32(0x1027f156u); f_1027f180();
  /* 1027f156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f159 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027f15c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f15f push eax */
  push32((uint32_t)(EAX));
  /* 1027f160 call 0x1027d9d0 */
  push32(0x1027f165u); f_1027d9d0();
  /* 1027f165 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027f168:;
  /* 1027f168 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f16b pop edi */
  EDI = (pop32());
  /* 1027f16c pop esi */
  ESI = (pop32());
  /* 1027f16d pop ebx */
  EBX = (pop32());
  /* 1027f16e mov esp, ebp */
  ESP = (EBP);
  /* 1027f170 pop ebp */
  EBP = (pop32());
  /* 1027f171 ret  */
  ESPCHK(0x1027f0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f180 @ 0x1027f180 (190 bytes, 67 insns) */
void f_1027f180(void) {
  FTRACE(0x1027f180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027f180 push ebp */
  push32((uint32_t)(EBP));
  /* 1027f181 mov ebp, esp */
  EBP = (ESP);
  /* 1027f183 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027f186 push ebx */
  push32((uint32_t)(EBX));
  /* 1027f187 push esi */
  push32((uint32_t)(ESI));
  /* 1027f188 push edi */
  push32((uint32_t)(EDI));
  /* 1027f189 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1027f190 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f193 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1027f196:;
  /* 1027f196 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027f19a jne 0x1027f1ba */
  if (!C.zf) goto L_1027f1ba;
  /* 1027f19c push 0x1029bf40 */
  push32((uint32_t)(0x1029bf40u));
  /* 1027f1a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027f1a3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1027f1a5 push 0x1029c094 */
  push32((uint32_t)(0x1029c094u));
  /* 1027f1aa push 2 */
  push32((uint32_t)(0x2u));
  /* 1027f1ac call 0x10273c10 */
  push32(0x1027f1b1u); f_10273c10();
  /* 1027f1b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f1b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027f1b7 jne 0x1027f1ba */
  if (!C.zf) goto L_1027f1ba;
  /* 1027f1b9 int3  */
  x86_unimpl("int3 @ 0x1027f1b9");
L_1027f1ba:;
  /* 1027f1ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f1bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027f1be jne 0x1027f196 */
  if (!C.zf) goto L_1027f196;
  /* 1027f1c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027f1c3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1027f1c6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1027f1cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027f1cd je 0x1027f22a */
  if (C.zf) goto L_1027f22a;
  /* 1027f1cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027f1d2 push ecx */
  push32((uint32_t)(ECX));
  /* 1027f1d3 call 0x1027e480 */
  push32(0x1027f1d8u); f_1027e480();
  /* 1027f1d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f1db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027f1de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027f1e1 push edx */
  push32((uint32_t)(EDX));
  /* 1027f1e2 call 0x10281800 */
  push32(0x1027f1e7u); f_10281800();
  /* 1027f1e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f1ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027f1ed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1027f1f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1027f1f1 call 0x102816d0 */
  push32(0x1027f1f6u); f_102816d0();
  /* 1027f1f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f1f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027f1fb jge 0x1027f206 */
  if ((C.sf==C.of)) goto L_1027f206;
  /* 1027f1fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1027f204 jmp 0x1027f22a */
  goto L_1027f22a;
L_1027f206:;
  /* 1027f206 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027f209 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027f20d je 0x1027f22a */
  if (C.zf) goto L_1027f22a;
  /* 1027f20f push 2 */
  push32((uint32_t)(0x2u));
  /* 1027f211 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027f214 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1027f217 push ecx */
  push32((uint32_t)(ECX));
  /* 1027f218 call 0x102755e0 */
  push32(0x1027f21du); f_102755e0();
  /* 1027f21d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f220 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027f223 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1027f22a:;
  /* 1027f22a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027f22d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1027f234 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f237 pop edi */
  EDI = (pop32());
  /* 1027f238 pop esi */
  ESI = (pop32());
  /* 1027f239 pop ebx */
  EBX = (pop32());
  /* 1027f23a mov esp, ebp */
  ESP = (EBP);
  /* 1027f23c pop ebp */
  EBP = (pop32());
  /* 1027f23d ret  */
  ESPCHK(0x1027f180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f240 @ 0x1027f240 (210 bytes, 63 insns) */
void f_1027f240(void) {
  FTRACE(0x1027f240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027f240 push ebp */
  push32((uint32_t)(EBP));
  /* 1027f241 mov ebp, esp */
  EBP = (ESP);
  /* 1027f243 push ecx */
  push32((uint32_t)(ECX));
  /* 1027f244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f247 cmp eax, dword ptr [0x102a20bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102a20bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027f24d jae 0x1027f271 */
  if (!C.cf) goto L_1027f271;
  /* 1027f24f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f252 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1027f255 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f258 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1027f25b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027f25e mov eax, dword ptr [ecx*4 + 0x102a1f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x102a1f80)));
  /* 1027f265 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1027f26a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1027f26d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027f26f jne 0x1027f284 */
  if (!C.zf) goto L_1027f284;
L_1027f271:;
  /* 1027f271 call 0x1027ca20 */
  push32(0x1027f276u); f_1027ca20();
  /* 1027f276 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1027f27c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027f27f jmp 0x1027f30e */
  goto L_1027f30e;
L_1027f284:;
  /* 1027f284 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f287 push edx */
  push32((uint32_t)(EDX));
  /* 1027f288 call 0x1027e240 */
  push32(0x1027f28du); f_1027e240();
  /* 1027f28d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f290 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f293 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1027f296 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f299 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1027f29c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027f29f mov edx, dword ptr [eax*4 + 0x102a1f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x102a1f80)));
  /* 1027f2a6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1027f2ab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1027f2ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027f2b0 je 0x1027f2ed */
  if (C.zf) goto L_1027f2ed;
  /* 1027f2b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f2b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1027f2b6 call 0x1027e0c0 */
  push32(0x1027f2bbu); f_1027e0c0();
  /* 1027f2bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f2be push eax */
  push32((uint32_t)(EAX));
  /* 1027f2bf call dword ptr [0x102a32a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32a8))), 0x1027f2c5u);
  /* 1027f2c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027f2c7 jne 0x1027f2d4 */
  if (!C.zf) goto L_1027f2d4;
  /* 1027f2c9 call dword ptr [0x102a3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3338))), 0x1027f2cfu);
  /* 1027f2cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027f2d2 jmp 0x1027f2db */
  goto L_1027f2db;
L_1027f2d4:;
  /* 1027f2d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1027f2db:;
  /* 1027f2db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027f2df jne 0x1027f2e3 */
  if (!C.zf) goto L_1027f2e3;
  /* 1027f2e1 jmp 0x1027f2ff */
  goto L_1027f2ff;
L_1027f2e3:;
  /* 1027f2e3 call 0x1027ca30 */
  push32(0x1027f2e8u); f_1027ca30();
  /* 1027f2e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f2eb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1027f2ed:;
  /* 1027f2ed call 0x1027ca20 */
  push32(0x1027f2f2u); f_1027ca20();
  /* 1027f2f2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1027f2f8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1027f2ff:;
  /* 1027f2ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f302 push eax */
  push32((uint32_t)(EAX));
  /* 1027f303 call 0x1027e2d0 */
  push32(0x1027f308u); f_1027e2d0();
  /* 1027f308 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f30b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1027f30e:;
  /* 1027f30e mov esp, ebp */
  ESP = (EBP);
  /* 1027f310 pop ebp */
  EBP = (pop32());
  /* 1027f311 ret  */
  ESPCHK(0x1027f240u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1027f320 (219 bytes, 64 insns) */
void f_1027f320(void) {
  FTRACE(0x1027f320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027f320 push ebp */
  push32((uint32_t)(EBP));
  /* 1027f321 mov ebp, esp */
  EBP = (ESP);
  /* 1027f323 push ecx */
  push32((uint32_t)(ECX));
  /* 1027f324 cmp dword ptr [0x102a07b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a07b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027f32b je 0x1027f3c1 */
  if (C.zf) goto L_1027f3c1;
  /* 1027f331 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1027f333 push 0x1029c0b0 */
  push32((uint32_t)(0x1029c0b0u));
  /* 1027f338 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027f33a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1027f33f push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f341 call 0x10274f60 */
  push32(0x1027f346u); f_10274f60();
  /* 1027f346 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f349 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027f34c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027f350 jne 0x1027f35c */
  if (!C.zf) goto L_1027f35c;
  /* 1027f352 mov eax, 1 */
  EAX = (0x1u);
  /* 1027f357 jmp 0x1027f3f7 */
  goto L_1027f3f7;
L_1027f35c:;
  /* 1027f35c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f35f push eax */
  push32((uint32_t)(EAX));
  /* 1027f360 call 0x1027f400 */
  push32(0x1027f365u); f_1027f400();
  /* 1027f365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027f36a je 0x1027f38d */
  if (C.zf) goto L_1027f38d;
  /* 1027f36c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f36f push ecx */
  push32((uint32_t)(ECX));
  /* 1027f370 call 0x1027f990 */
  push32(0x1027f375u); f_1027f990();
  /* 1027f375 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f378 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027f37a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f37d push edx */
  push32((uint32_t)(EDX));
  /* 1027f37e call 0x102755e0 */
  push32(0x1027f383u); f_102755e0();
  /* 1027f383 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f386 mov eax, 1 */
  EAX = (0x1u);
  /* 1027f38b jmp 0x1027f3f7 */
  goto L_1027f3f7;
L_1027f38d:;
  /* 1027f38d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f390 mov dword ptr [0x1029fc98], eax */
  w32((uint32_t)(0x1029fc98), (EAX));
  /* 1027f395 mov ecx, dword ptr [0x102a07d4] */
  ECX = (r32((uint32_t)(0x102a07d4)));
  /* 1027f39b push ecx */
  push32((uint32_t)(ECX));
  /* 1027f39c call 0x1027f990 */
  push32(0x1027f3a1u); f_1027f990();
  /* 1027f3a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f3a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027f3a6 mov edx, dword ptr [0x102a07d4] */
  EDX = (r32((uint32_t)(0x102a07d4)));
  /* 1027f3ac push edx */
  push32((uint32_t)(EDX));
  /* 1027f3ad call 0x102755e0 */
  push32(0x1027f3b2u); f_102755e0();
  /* 1027f3b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f3b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f3b8 mov dword ptr [0x102a07d4], eax */
  w32((uint32_t)(0x102a07d4), (EAX));
  /* 1027f3bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027f3bf jmp 0x1027f3f7 */
  goto L_1027f3f7;
L_1027f3c1:;
  /* 1027f3c1 mov dword ptr [0x1029fc98], 0x1029fca0 */
  w32((uint32_t)(0x1029fc98), (0x1029fca0u));
  /* 1027f3cb mov ecx, dword ptr [0x102a07d4] */
  ECX = (r32((uint32_t)(0x102a07d4)));
  /* 1027f3d1 push ecx */
  push32((uint32_t)(ECX));
  /* 1027f3d2 call 0x1027f990 */
  push32(0x1027f3d7u); f_1027f990();
  /* 1027f3d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f3da push 2 */
  push32((uint32_t)(0x2u));
  /* 1027f3dc mov edx, dword ptr [0x102a07d4] */
  EDX = (r32((uint32_t)(0x102a07d4)));
  /* 1027f3e2 push edx */
  push32((uint32_t)(EDX));
  /* 1027f3e3 call 0x102755e0 */
  push32(0x1027f3e8u); f_102755e0();
  /* 1027f3e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f3eb mov dword ptr [0x102a07d4], 0 */
  w32((uint32_t)(0x102a07d4), (0x0u));
  /* 1027f3f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1027f3f7:;
  /* 1027f3f7 mov esp, ebp */
  ESP = (EBP);
  /* 1027f3f9 pop ebp */
  EBP = (pop32());
  /* 1027f3fa ret  */
  ESPCHK(0x1027f320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f400 @ 0x1027f400 (1423 bytes, 533 insns) */
void f_1027f400(void) {
  FTRACE(0x1027f400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027f400 push ebp */
  push32((uint32_t)(EBP));
  /* 1027f401 mov ebp, esp */
  EBP = (ESP);
  /* 1027f403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027f406 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1027f40d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027f40f mov ax, word ptr [0x102a080e] */
  AX = (r16((uint32_t)(0x102a080e)));
  /* 1027f415 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027f418 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f41a mov cx, word ptr [0x102a0810] */
  CX = (r16((uint32_t)(0x102a0810)));
  /* 1027f421 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1027f424 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027f428 jne 0x1027f432 */
  if (!C.zf) goto L_1027f432;
  /* 1027f42a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027f42d jmp 0x1027f98b */
  goto L_1027f98b;
L_1027f432:;
  /* 1027f432 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f435 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f438 push edx */
  push32((uint32_t)(EDX));
  /* 1027f439 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1027f43b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f43e push eax */
  push32((uint32_t)(EAX));
  /* 1027f43f push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f441 call 0x10282d10 */
  push32(0x1027f446u); f_10282d10();
  /* 1027f446 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f449 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f44c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f44e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f451 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f454 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f457 push edx */
  push32((uint32_t)(EDX));
  /* 1027f458 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1027f45a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f45d push eax */
  push32((uint32_t)(EAX));
  /* 1027f45e push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f460 call 0x10282d10 */
  push32(0x1027f465u); f_10282d10();
  /* 1027f465 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f468 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f46b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f46d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f470 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f473 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f476 push edx */
  push32((uint32_t)(EDX));
  /* 1027f477 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1027f479 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f47c push eax */
  push32((uint32_t)(EAX));
  /* 1027f47d push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f47f call 0x10282d10 */
  push32(0x1027f484u); f_10282d10();
  /* 1027f484 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f487 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f48a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f48c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f48f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f492 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f495 push edx */
  push32((uint32_t)(EDX));
  /* 1027f496 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1027f498 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f49b push eax */
  push32((uint32_t)(EAX));
  /* 1027f49c push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f49e call 0x10282d10 */
  push32(0x1027f4a3u); f_10282d10();
  /* 1027f4a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f4a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f4a9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f4ab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f4ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f4b1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f4b4 push edx */
  push32((uint32_t)(EDX));
  /* 1027f4b5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1027f4b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f4ba push eax */
  push32((uint32_t)(EAX));
  /* 1027f4bb push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f4bd call 0x10282d10 */
  push32(0x1027f4c2u); f_10282d10();
  /* 1027f4c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f4c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f4c8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f4ca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f4cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f4d0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f4d3 push edx */
  push32((uint32_t)(EDX));
  /* 1027f4d4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1027f4d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f4d9 push eax */
  push32((uint32_t)(EAX));
  /* 1027f4da push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f4dc call 0x10282d10 */
  push32(0x1027f4e1u); f_10282d10();
  /* 1027f4e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f4e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f4e7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f4e9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f4ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f4ef push edx */
  push32((uint32_t)(EDX));
  /* 1027f4f0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1027f4f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f4f5 push eax */
  push32((uint32_t)(EAX));
  /* 1027f4f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f4f8 call 0x10282d10 */
  push32(0x1027f4fdu); f_10282d10();
  /* 1027f4fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f500 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f503 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f505 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f508 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f50b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f50e push edx */
  push32((uint32_t)(EDX));
  /* 1027f50f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1027f511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f514 push eax */
  push32((uint32_t)(EAX));
  /* 1027f515 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f517 call 0x10282d10 */
  push32(0x1027f51cu); f_10282d10();
  /* 1027f51c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f51f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f522 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f524 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f527 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f52a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f52d push edx */
  push32((uint32_t)(EDX));
  /* 1027f52e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1027f530 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f533 push eax */
  push32((uint32_t)(EAX));
  /* 1027f534 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f536 call 0x10282d10 */
  push32(0x1027f53bu); f_10282d10();
  /* 1027f53b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f53e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f541 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f543 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f546 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f549 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f54c push edx */
  push32((uint32_t)(EDX));
  /* 1027f54d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1027f54f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f552 push eax */
  push32((uint32_t)(EAX));
  /* 1027f553 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f555 call 0x10282d10 */
  push32(0x1027f55au); f_10282d10();
  /* 1027f55a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f55d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f560 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f562 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f565 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f568 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f56b push edx */
  push32((uint32_t)(EDX));
  /* 1027f56c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1027f56e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f571 push eax */
  push32((uint32_t)(EAX));
  /* 1027f572 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f574 call 0x10282d10 */
  push32(0x1027f579u); f_10282d10();
  /* 1027f579 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f57c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f57f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f581 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f584 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f587 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f58a push edx */
  push32((uint32_t)(EDX));
  /* 1027f58b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1027f58d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f590 push eax */
  push32((uint32_t)(EAX));
  /* 1027f591 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f593 call 0x10282d10 */
  push32(0x1027f598u); f_10282d10();
  /* 1027f598 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f59b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f59e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f5a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f5a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f5a6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f5a9 push edx */
  push32((uint32_t)(EDX));
  /* 1027f5aa push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1027f5ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f5af push eax */
  push32((uint32_t)(EAX));
  /* 1027f5b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f5b2 call 0x10282d10 */
  push32(0x1027f5b7u); f_10282d10();
  /* 1027f5b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f5ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f5bd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f5bf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f5c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f5c5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f5c8 push edx */
  push32((uint32_t)(EDX));
  /* 1027f5c9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1027f5cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f5ce push eax */
  push32((uint32_t)(EAX));
  /* 1027f5cf push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f5d1 call 0x10282d10 */
  push32(0x1027f5d6u); f_10282d10();
  /* 1027f5d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f5d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f5dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f5de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f5e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f5e4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f5e7 push edx */
  push32((uint32_t)(EDX));
  /* 1027f5e8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1027f5ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f5ed push eax */
  push32((uint32_t)(EAX));
  /* 1027f5ee push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f5f0 call 0x10282d10 */
  push32(0x1027f5f5u); f_10282d10();
  /* 1027f5f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f5f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f5fb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f5fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f600 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f603 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f606 push edx */
  push32((uint32_t)(EDX));
  /* 1027f607 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1027f609 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f60c push eax */
  push32((uint32_t)(EAX));
  /* 1027f60d push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f60f call 0x10282d10 */
  push32(0x1027f614u); f_10282d10();
  /* 1027f614 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f617 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f61a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f61c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f61f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f622 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f625 push edx */
  push32((uint32_t)(EDX));
  /* 1027f626 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1027f628 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f62b push eax */
  push32((uint32_t)(EAX));
  /* 1027f62c push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f62e call 0x10282d10 */
  push32(0x1027f633u); f_10282d10();
  /* 1027f633 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f636 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f639 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f63b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f63e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f641 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f644 push edx */
  push32((uint32_t)(EDX));
  /* 1027f645 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1027f647 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f64a push eax */
  push32((uint32_t)(EAX));
  /* 1027f64b push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f64d call 0x10282d10 */
  push32(0x1027f652u); f_10282d10();
  /* 1027f652 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f655 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f658 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f65a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f65d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f660 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f663 push edx */
  push32((uint32_t)(EDX));
  /* 1027f664 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1027f666 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f669 push eax */
  push32((uint32_t)(EAX));
  /* 1027f66a push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f66c call 0x10282d10 */
  push32(0x1027f671u); f_10282d10();
  /* 1027f671 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f674 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f677 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f679 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f67c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f67f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f682 push edx */
  push32((uint32_t)(EDX));
  /* 1027f683 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1027f685 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f688 push eax */
  push32((uint32_t)(EAX));
  /* 1027f689 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f68b call 0x10282d10 */
  push32(0x1027f690u); f_10282d10();
  /* 1027f690 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f693 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f696 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f698 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f69b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f69e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f6a1 push edx */
  push32((uint32_t)(EDX));
  /* 1027f6a2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1027f6a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f6a7 push eax */
  push32((uint32_t)(EAX));
  /* 1027f6a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f6aa call 0x10282d10 */
  push32(0x1027f6afu); f_10282d10();
  /* 1027f6af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f6b2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f6b5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f6b7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f6ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f6bd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f6c0 push edx */
  push32((uint32_t)(EDX));
  /* 1027f6c1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1027f6c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f6c6 push eax */
  push32((uint32_t)(EAX));
  /* 1027f6c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f6c9 call 0x10282d10 */
  push32(0x1027f6ceu); f_10282d10();
  /* 1027f6ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f6d1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f6d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f6d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f6d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f6dc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f6df push edx */
  push32((uint32_t)(EDX));
  /* 1027f6e0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1027f6e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f6e5 push eax */
  push32((uint32_t)(EAX));
  /* 1027f6e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f6e8 call 0x10282d10 */
  push32(0x1027f6edu); f_10282d10();
  /* 1027f6ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f6f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f6f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f6f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f6f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f6fb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f6fe push edx */
  push32((uint32_t)(EDX));
  /* 1027f6ff push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1027f701 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f704 push eax */
  push32((uint32_t)(EAX));
  /* 1027f705 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f707 call 0x10282d10 */
  push32(0x1027f70cu); f_10282d10();
  /* 1027f70c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f70f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f712 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f714 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f717 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f71a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f71d push edx */
  push32((uint32_t)(EDX));
  /* 1027f71e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1027f720 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f723 push eax */
  push32((uint32_t)(EAX));
  /* 1027f724 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f726 call 0x10282d10 */
  push32(0x1027f72bu); f_10282d10();
  /* 1027f72b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f72e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f731 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f733 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f736 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f739 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f73c push edx */
  push32((uint32_t)(EDX));
  /* 1027f73d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1027f73f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f742 push eax */
  push32((uint32_t)(EAX));
  /* 1027f743 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f745 call 0x10282d10 */
  push32(0x1027f74au); f_10282d10();
  /* 1027f74a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f74d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f750 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f752 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f755 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f758 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f75b push edx */
  push32((uint32_t)(EDX));
  /* 1027f75c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1027f75e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f761 push eax */
  push32((uint32_t)(EAX));
  /* 1027f762 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f764 call 0x10282d10 */
  push32(0x1027f769u); f_10282d10();
  /* 1027f769 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f76c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f76f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f771 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f774 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f777 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f77a push edx */
  push32((uint32_t)(EDX));
  /* 1027f77b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1027f77d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f780 push eax */
  push32((uint32_t)(EAX));
  /* 1027f781 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f783 call 0x10282d10 */
  push32(0x1027f788u); f_10282d10();
  /* 1027f788 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f78b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f78e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f790 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f793 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f796 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f799 push edx */
  push32((uint32_t)(EDX));
  /* 1027f79a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1027f79c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f79f push eax */
  push32((uint32_t)(EAX));
  /* 1027f7a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f7a2 call 0x10282d10 */
  push32(0x1027f7a7u); f_10282d10();
  /* 1027f7a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f7aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f7ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f7af mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f7b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f7b5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f7b8 push edx */
  push32((uint32_t)(EDX));
  /* 1027f7b9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1027f7bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f7be push eax */
  push32((uint32_t)(EAX));
  /* 1027f7bf push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f7c1 call 0x10282d10 */
  push32(0x1027f7c6u); f_10282d10();
  /* 1027f7c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f7c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f7cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f7ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f7d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f7d4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f7d7 push edx */
  push32((uint32_t)(EDX));
  /* 1027f7d8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1027f7da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f7dd push eax */
  push32((uint32_t)(EAX));
  /* 1027f7de push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f7e0 call 0x10282d10 */
  push32(0x1027f7e5u); f_10282d10();
  /* 1027f7e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f7e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f7eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f7ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f7f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f7f3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f7f6 push edx */
  push32((uint32_t)(EDX));
  /* 1027f7f7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1027f7f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f7fc push eax */
  push32((uint32_t)(EAX));
  /* 1027f7fd push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f7ff call 0x10282d10 */
  push32(0x1027f804u); f_10282d10();
  /* 1027f804 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f807 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f80a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f80c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f80f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f812 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f818 push edx */
  push32((uint32_t)(EDX));
  /* 1027f819 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1027f81b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f81e push eax */
  push32((uint32_t)(EAX));
  /* 1027f81f push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f821 call 0x10282d10 */
  push32(0x1027f826u); f_10282d10();
  /* 1027f826 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f829 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f82c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f82e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f831 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f834 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f83a push edx */
  push32((uint32_t)(EDX));
  /* 1027f83b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1027f83d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f840 push eax */
  push32((uint32_t)(EAX));
  /* 1027f841 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f843 call 0x10282d10 */
  push32(0x1027f848u); f_10282d10();
  /* 1027f848 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f84b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f84e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f850 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f853 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f856 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f85c push edx */
  push32((uint32_t)(EDX));
  /* 1027f85d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1027f85f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f862 push eax */
  push32((uint32_t)(EAX));
  /* 1027f863 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f865 call 0x10282d10 */
  push32(0x1027f86au); f_10282d10();
  /* 1027f86a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f86d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f870 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f872 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f875 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f878 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f87e push edx */
  push32((uint32_t)(EDX));
  /* 1027f87f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1027f881 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f884 push eax */
  push32((uint32_t)(EAX));
  /* 1027f885 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f887 call 0x10282d10 */
  push32(0x1027f88cu); f_10282d10();
  /* 1027f88c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f88f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f892 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f894 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f897 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f89a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f8a0 push edx */
  push32((uint32_t)(EDX));
  /* 1027f8a1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1027f8a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f8a6 push eax */
  push32((uint32_t)(EAX));
  /* 1027f8a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f8a9 call 0x10282d10 */
  push32(0x1027f8aeu); f_10282d10();
  /* 1027f8ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f8b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f8b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f8b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f8b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f8bc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f8c2 push edx */
  push32((uint32_t)(EDX));
  /* 1027f8c3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1027f8c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f8c8 push eax */
  push32((uint32_t)(EAX));
  /* 1027f8c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f8cb call 0x10282d10 */
  push32(0x1027f8d0u); f_10282d10();
  /* 1027f8d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f8d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f8d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f8d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f8db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f8de add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f8e4 push edx */
  push32((uint32_t)(EDX));
  /* 1027f8e5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1027f8e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f8ea push eax */
  push32((uint32_t)(EAX));
  /* 1027f8eb push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f8ed call 0x10282d10 */
  push32(0x1027f8f2u); f_10282d10();
  /* 1027f8f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f8f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f8f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f8fa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f8fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f900 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f906 push edx */
  push32((uint32_t)(EDX));
  /* 1027f907 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1027f909 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027f90c push eax */
  push32((uint32_t)(EAX));
  /* 1027f90d push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f90f call 0x10282d10 */
  push32(0x1027f914u); f_10282d10();
  /* 1027f914 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f917 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f91a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f91c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f91f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f922 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f928 push edx */
  push32((uint32_t)(EDX));
  /* 1027f929 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1027f92b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027f92e push eax */
  push32((uint32_t)(EAX));
  /* 1027f92f push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f931 call 0x10282d10 */
  push32(0x1027f936u); f_10282d10();
  /* 1027f936 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f939 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f93c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f93e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f941 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f944 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f94a push edx */
  push32((uint32_t)(EDX));
  /* 1027f94b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1027f94d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027f950 push eax */
  push32((uint32_t)(EAX));
  /* 1027f951 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f953 call 0x10282d10 */
  push32(0x1027f958u); f_10282d10();
  /* 1027f958 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f95b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f95e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f960 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f963 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f966 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f96c push edx */
  push32((uint32_t)(EDX));
  /* 1027f96d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1027f972 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027f975 push eax */
  push32((uint32_t)(EAX));
  /* 1027f976 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027f978 call 0x10282d10 */
  push32(0x1027f97du); f_10282d10();
  /* 1027f97d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f980 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027f983 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027f985 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027f988 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1027f98b:;
  /* 1027f98b mov esp, ebp */
  ESP = (EBP);
  /* 1027f98d pop ebp */
  EBP = (pop32());
  /* 1027f98e ret  */
  ESPCHK(0x1027f400u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1027f990 (779 bytes, 265 insns) */
void f_1027f990(void) {
  FTRACE(0x1027f990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027f990 push ebp */
  push32((uint32_t)(EBP));
  /* 1027f991 mov ebp, esp */
  EBP = (ESP);
  /* 1027f993 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027f997 jne 0x1027f99e */
  if (!C.zf) goto L_1027f99e;
  /* 1027f999 jmp 0x1027fc99 */
  goto L_1027fc99;
L_1027f99e:;
  /* 1027f99e push 2 */
  push32((uint32_t)(0x2u));
  /* 1027f9a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f9a3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1027f9a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1027f9a7 call 0x102755e0 */
  push32(0x1027f9acu); f_102755e0();
  /* 1027f9ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f9af push 2 */
  push32((uint32_t)(0x2u));
  /* 1027f9b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f9b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1027f9b7 push eax */
  push32((uint32_t)(EAX));
  /* 1027f9b8 call 0x102755e0 */
  push32(0x1027f9bdu); f_102755e0();
  /* 1027f9bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f9c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027f9c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f9c5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1027f9c8 push edx */
  push32((uint32_t)(EDX));
  /* 1027f9c9 call 0x102755e0 */
  push32(0x1027f9ceu); f_102755e0();
  /* 1027f9ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f9d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027f9d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f9d6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1027f9d9 push ecx */
  push32((uint32_t)(ECX));
  /* 1027f9da call 0x102755e0 */
  push32(0x1027f9dfu); f_102755e0();
  /* 1027f9df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f9e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027f9e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f9e7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1027f9ea push eax */
  push32((uint32_t)(EAX));
  /* 1027f9eb call 0x102755e0 */
  push32(0x1027f9f0u); f_102755e0();
  /* 1027f9f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027f9f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027f9f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027f9f8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1027f9fb push edx */
  push32((uint32_t)(EDX));
  /* 1027f9fc call 0x102755e0 */
  push32(0x1027fa01u); f_102755e0();
  /* 1027fa01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fa04 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fa06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fa09 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1027fa0b push ecx */
  push32((uint32_t)(ECX));
  /* 1027fa0c call 0x102755e0 */
  push32(0x1027fa11u); f_102755e0();
  /* 1027fa11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fa14 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fa16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fa19 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1027fa1c push eax */
  push32((uint32_t)(EAX));
  /* 1027fa1d call 0x102755e0 */
  push32(0x1027fa22u); f_102755e0();
  /* 1027fa22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fa25 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fa27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fa2a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1027fa2d push edx */
  push32((uint32_t)(EDX));
  /* 1027fa2e call 0x102755e0 */
  push32(0x1027fa33u); f_102755e0();
  /* 1027fa33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fa36 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fa38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fa3b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1027fa3e push ecx */
  push32((uint32_t)(ECX));
  /* 1027fa3f call 0x102755e0 */
  push32(0x1027fa44u); f_102755e0();
  /* 1027fa44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fa47 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fa49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fa4c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1027fa4f push eax */
  push32((uint32_t)(EAX));
  /* 1027fa50 call 0x102755e0 */
  push32(0x1027fa55u); f_102755e0();
  /* 1027fa55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fa58 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fa5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fa5d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1027fa60 push edx */
  push32((uint32_t)(EDX));
  /* 1027fa61 call 0x102755e0 */
  push32(0x1027fa66u); f_102755e0();
  /* 1027fa66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fa69 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fa6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fa6e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1027fa71 push ecx */
  push32((uint32_t)(ECX));
  /* 1027fa72 call 0x102755e0 */
  push32(0x1027fa77u); f_102755e0();
  /* 1027fa77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fa7a push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fa7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fa7f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1027fa82 push eax */
  push32((uint32_t)(EAX));
  /* 1027fa83 call 0x102755e0 */
  push32(0x1027fa88u); f_102755e0();
  /* 1027fa88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fa8b push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fa8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fa90 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1027fa93 push edx */
  push32((uint32_t)(EDX));
  /* 1027fa94 call 0x102755e0 */
  push32(0x1027fa99u); f_102755e0();
  /* 1027fa99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fa9c push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fa9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027faa1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1027faa4 push ecx */
  push32((uint32_t)(ECX));
  /* 1027faa5 call 0x102755e0 */
  push32(0x1027faaau); f_102755e0();
  /* 1027faaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027faad push 2 */
  push32((uint32_t)(0x2u));
  /* 1027faaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fab2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1027fab5 push eax */
  push32((uint32_t)(EAX));
  /* 1027fab6 call 0x102755e0 */
  push32(0x1027fabbu); f_102755e0();
  /* 1027fabb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fabe push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fac0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fac3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1027fac6 push edx */
  push32((uint32_t)(EDX));
  /* 1027fac7 call 0x102755e0 */
  push32(0x1027faccu); f_102755e0();
  /* 1027facc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027facf push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fad1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fad4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1027fad7 push ecx */
  push32((uint32_t)(ECX));
  /* 1027fad8 call 0x102755e0 */
  push32(0x1027faddu); f_102755e0();
  /* 1027fadd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fae0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fae2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fae5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1027fae8 push eax */
  push32((uint32_t)(EAX));
  /* 1027fae9 call 0x102755e0 */
  push32(0x1027faeeu); f_102755e0();
  /* 1027faee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027faf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027faf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027faf6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1027faf9 push edx */
  push32((uint32_t)(EDX));
  /* 1027fafa call 0x102755e0 */
  push32(0x1027faffu); f_102755e0();
  /* 1027faff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fb02 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fb04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fb07 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1027fb0a push ecx */
  push32((uint32_t)(ECX));
  /* 1027fb0b call 0x102755e0 */
  push32(0x1027fb10u); f_102755e0();
  /* 1027fb10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fb13 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fb15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fb18 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1027fb1b push eax */
  push32((uint32_t)(EAX));
  /* 1027fb1c call 0x102755e0 */
  push32(0x1027fb21u); f_102755e0();
  /* 1027fb21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fb24 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fb26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fb29 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1027fb2c push edx */
  push32((uint32_t)(EDX));
  /* 1027fb2d call 0x102755e0 */
  push32(0x1027fb32u); f_102755e0();
  /* 1027fb32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fb35 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fb37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fb3a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1027fb3d push ecx */
  push32((uint32_t)(ECX));
  /* 1027fb3e call 0x102755e0 */
  push32(0x1027fb43u); f_102755e0();
  /* 1027fb43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fb46 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fb48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fb4b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1027fb4e push eax */
  push32((uint32_t)(EAX));
  /* 1027fb4f call 0x102755e0 */
  push32(0x1027fb54u); f_102755e0();
  /* 1027fb54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fb57 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fb59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fb5c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1027fb5f push edx */
  push32((uint32_t)(EDX));
  /* 1027fb60 call 0x102755e0 */
  push32(0x1027fb65u); f_102755e0();
  /* 1027fb65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fb68 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fb6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fb6d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1027fb70 push ecx */
  push32((uint32_t)(ECX));
  /* 1027fb71 call 0x102755e0 */
  push32(0x1027fb76u); f_102755e0();
  /* 1027fb76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fb79 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fb7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fb7e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1027fb81 push eax */
  push32((uint32_t)(EAX));
  /* 1027fb82 call 0x102755e0 */
  push32(0x1027fb87u); f_102755e0();
  /* 1027fb87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fb8a push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fb8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fb8f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1027fb92 push edx */
  push32((uint32_t)(EDX));
  /* 1027fb93 call 0x102755e0 */
  push32(0x1027fb98u); f_102755e0();
  /* 1027fb98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fb9b push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fb9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fba0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1027fba3 push ecx */
  push32((uint32_t)(ECX));
  /* 1027fba4 call 0x102755e0 */
  push32(0x1027fba9u); f_102755e0();
  /* 1027fba9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fbac push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fbae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fbb1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1027fbb4 push eax */
  push32((uint32_t)(EAX));
  /* 1027fbb5 call 0x102755e0 */
  push32(0x1027fbbau); f_102755e0();
  /* 1027fbba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fbbd push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fbbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fbc2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1027fbc8 push edx */
  push32((uint32_t)(EDX));
  /* 1027fbc9 call 0x102755e0 */
  push32(0x1027fbceu); f_102755e0();
  /* 1027fbce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fbd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fbd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fbd6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1027fbdc push ecx */
  push32((uint32_t)(ECX));
  /* 1027fbdd call 0x102755e0 */
  push32(0x1027fbe2u); f_102755e0();
  /* 1027fbe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fbe5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fbe7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fbea mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1027fbf0 push eax */
  push32((uint32_t)(EAX));
  /* 1027fbf1 call 0x102755e0 */
  push32(0x1027fbf6u); f_102755e0();
  /* 1027fbf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fbf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fbfb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fbfe mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1027fc04 push edx */
  push32((uint32_t)(EDX));
  /* 1027fc05 call 0x102755e0 */
  push32(0x1027fc0au); f_102755e0();
  /* 1027fc0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fc0d push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fc0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fc12 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1027fc18 push ecx */
  push32((uint32_t)(ECX));
  /* 1027fc19 call 0x102755e0 */
  push32(0x1027fc1eu); f_102755e0();
  /* 1027fc1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fc21 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fc23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fc26 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1027fc2c push eax */
  push32((uint32_t)(EAX));
  /* 1027fc2d call 0x102755e0 */
  push32(0x1027fc32u); f_102755e0();
  /* 1027fc32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fc35 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fc37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fc3a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1027fc40 push edx */
  push32((uint32_t)(EDX));
  /* 1027fc41 call 0x102755e0 */
  push32(0x1027fc46u); f_102755e0();
  /* 1027fc46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fc49 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fc4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fc4e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1027fc54 push ecx */
  push32((uint32_t)(ECX));
  /* 1027fc55 call 0x102755e0 */
  push32(0x1027fc5au); f_102755e0();
  /* 1027fc5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fc5d push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fc5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fc62 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1027fc68 push eax */
  push32((uint32_t)(EAX));
  /* 1027fc69 call 0x102755e0 */
  push32(0x1027fc6eu); f_102755e0();
  /* 1027fc6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fc71 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fc73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fc76 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1027fc7c push edx */
  push32((uint32_t)(EDX));
  /* 1027fc7d call 0x102755e0 */
  push32(0x1027fc82u); f_102755e0();
  /* 1027fc82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fc85 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fc87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027fc8a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1027fc90 push ecx */
  push32((uint32_t)(ECX));
  /* 1027fc91 call 0x102755e0 */
  push32(0x1027fc96u); f_102755e0();
  /* 1027fc96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027fc99:;
  /* 1027fc99 pop ebp */
  EBP = (pop32());
  /* 1027fc9a ret  */
  ESPCHK(0x1027f990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fca0 @ 0x1027fca0 (678 bytes, 180 insns) */
void f_1027fca0(void) {
  FTRACE(0x1027fca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027fca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027fca1 mov ebp, esp */
  EBP = (ESP);
  /* 1027fca3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027fca6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1027fcad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027fcaf mov ax, word ptr [0x102a080a] */
  AX = (r16((uint32_t)(0x102a080a)));
  /* 1027fcb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027fcb8 cmp dword ptr [0x102a07b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a07b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027fcbf je 0x1027fe1a */
  if (C.zf) goto L_1027fe1a;
  /* 1027fcc5 push 0x102a07d8 */
  push32((uint32_t)(0x102a07d8u));
  /* 1027fcca push 0xe */
  push32((uint32_t)(0xeu));
  /* 1027fccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027fccf push ecx */
  push32((uint32_t)(ECX));
  /* 1027fcd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027fcd2 call 0x10282d10 */
  push32(0x1027fcd7u); f_10282d10();
  /* 1027fcd7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fcda mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027fcdd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1027fcdf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1027fce2 push 0x102a07dc */
  push32((uint32_t)(0x102a07dcu));
  /* 1027fce7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1027fce9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027fcec push eax */
  push32((uint32_t)(EAX));
  /* 1027fced push 1 */
  push32((uint32_t)(0x1u));
  /* 1027fcef call 0x10282d10 */
  push32(0x1027fcf4u); f_10282d10();
  /* 1027fcf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fcf7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027fcfa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027fcfc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1027fcff push 0x102a07e0 */
  push32((uint32_t)(0x102a07e0u));
  /* 1027fd04 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1027fd06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027fd09 push edx */
  push32((uint32_t)(EDX));
  /* 1027fd0a push 1 */
  push32((uint32_t)(0x1u));
  /* 1027fd0c call 0x10282d10 */
  push32(0x1027fd11u); f_10282d10();
  /* 1027fd11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fd14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027fd17 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1027fd19 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1027fd1c mov edx, dword ptr [0x102a07e0] */
  EDX = (r32((uint32_t)(0x102a07e0)));
  /* 1027fd22 push edx */
  push32((uint32_t)(EDX));
  /* 1027fd23 call 0x1027ff50 */
  push32(0x1027fd28u); f_1027ff50();
  /* 1027fd28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fd2b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027fd2f je 0x1027fd89 */
  if (C.zf) goto L_1027fd89;
  /* 1027fd31 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fd33 mov eax, dword ptr [0x102a07d8] */
  EAX = (r32((uint32_t)(0x102a07d8)));
  /* 1027fd38 push eax */
  push32((uint32_t)(EAX));
  /* 1027fd39 call 0x102755e0 */
  push32(0x1027fd3eu); f_102755e0();
  /* 1027fd3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fd41 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fd43 mov ecx, dword ptr [0x102a07dc] */
  ECX = (r32((uint32_t)(0x102a07dc)));
  /* 1027fd49 push ecx */
  push32((uint32_t)(ECX));
  /* 1027fd4a call 0x102755e0 */
  push32(0x1027fd4fu); f_102755e0();
  /* 1027fd4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fd52 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fd54 mov edx, dword ptr [0x102a07e0] */
  EDX = (r32((uint32_t)(0x102a07e0)));
  /* 1027fd5a push edx */
  push32((uint32_t)(EDX));
  /* 1027fd5b call 0x102755e0 */
  push32(0x1027fd60u); f_102755e0();
  /* 1027fd60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fd63 mov dword ptr [0x102a07d8], 0 */
  w32((uint32_t)(0x102a07d8), (0x0u));
  /* 1027fd6d mov dword ptr [0x102a07dc], 0 */
  w32((uint32_t)(0x102a07dc), (0x0u));
  /* 1027fd77 mov dword ptr [0x102a07e0], 0 */
  w32((uint32_t)(0x102a07e0), (0x0u));
  /* 1027fd81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027fd84 jmp 0x1027ff42 */
  goto L_1027ff42;
L_1027fd89:;
  /* 1027fd89 mov eax, dword ptr [0x1029fd88] */
  EAX = (r32((uint32_t)(0x1029fd88)));
  /* 1027fd8e cmp dword ptr [eax], 0x1029fd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1029fd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027fd94 je 0x1027fdd0 */
  if (C.zf) goto L_1027fdd0;
  /* 1027fd96 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fd98 mov ecx, dword ptr [0x1029fd88] */
  ECX = (r32((uint32_t)(0x1029fd88)));
  /* 1027fd9e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1027fda0 push edx */
  push32((uint32_t)(EDX));
  /* 1027fda1 call 0x102755e0 */
  push32(0x1027fda6u); f_102755e0();
  /* 1027fda6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fda9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fdab mov eax, dword ptr [0x1029fd88] */
  EAX = (r32((uint32_t)(0x1029fd88)));
  /* 1027fdb0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1027fdb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1027fdb4 call 0x102755e0 */
  push32(0x1027fdb9u); f_102755e0();
  /* 1027fdb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fdbc push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fdbe mov edx, dword ptr [0x1029fd88] */
  EDX = (r32((uint32_t)(0x1029fd88)));
  /* 1027fdc4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1027fdc7 push eax */
  push32((uint32_t)(EAX));
  /* 1027fdc8 call 0x102755e0 */
  push32(0x1027fdcdu); f_102755e0();
  /* 1027fdcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027fdd0:;
  /* 1027fdd0 mov ecx, dword ptr [0x1029fd88] */
  ECX = (r32((uint32_t)(0x1029fd88)));
  /* 1027fdd6 mov edx, dword ptr [0x102a07d8] */
  EDX = (r32((uint32_t)(0x102a07d8)));
  /* 1027fddc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1027fdde mov eax, dword ptr [0x1029fd88] */
  EAX = (r32((uint32_t)(0x1029fd88)));
  /* 1027fde3 mov ecx, dword ptr [0x102a07dc] */
  ECX = (r32((uint32_t)(0x102a07dc)));
  /* 1027fde9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1027fdec mov edx, dword ptr [0x1029fd88] */
  EDX = (r32((uint32_t)(0x1029fd88)));
  /* 1027fdf2 mov eax, dword ptr [0x102a07e0] */
  EAX = (r32((uint32_t)(0x102a07e0)));
  /* 1027fdf7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1027fdfa mov ecx, dword ptr [0x1029fd88] */
  ECX = (r32((uint32_t)(0x1029fd88)));
  /* 1027fe00 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1027fe02 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1027fe04 mov byte ptr [0x1029eea8], al */
  w8((uint32_t)(0x1029eea8), (AL));
  /* 1027fe09 mov dword ptr [0x1029eeac], 1 */
  w32((uint32_t)(0x1029eeac), (0x1u));
  /* 1027fe13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027fe15 jmp 0x1027ff42 */
  goto L_1027ff42;
L_1027fe1a:;
  /* 1027fe1a push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fe1c mov ecx, dword ptr [0x102a07d8] */
  ECX = (r32((uint32_t)(0x102a07d8)));
  /* 1027fe22 push ecx */
  push32((uint32_t)(ECX));
  /* 1027fe23 call 0x102755e0 */
  push32(0x1027fe28u); f_102755e0();
  /* 1027fe28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fe2b push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fe2d mov edx, dword ptr [0x102a07dc] */
  EDX = (r32((uint32_t)(0x102a07dc)));
  /* 1027fe33 push edx */
  push32((uint32_t)(EDX));
  /* 1027fe34 call 0x102755e0 */
  push32(0x1027fe39u); f_102755e0();
  /* 1027fe39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fe3c push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fe3e mov eax, dword ptr [0x102a07e0] */
  EAX = (r32((uint32_t)(0x102a07e0)));
  /* 1027fe43 push eax */
  push32((uint32_t)(EAX));
  /* 1027fe44 call 0x102755e0 */
  push32(0x1027fe49u); f_102755e0();
  /* 1027fe49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fe4c mov dword ptr [0x102a07d8], 0 */
  w32((uint32_t)(0x102a07d8), (0x0u));
  /* 1027fe56 mov dword ptr [0x102a07dc], 0 */
  w32((uint32_t)(0x102a07dc), (0x0u));
  /* 1027fe60 mov dword ptr [0x102a07e0], 0 */
  w32((uint32_t)(0x102a07e0), (0x0u));
  /* 1027fe6a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1027fe6f push 0x1029c0bc */
  push32((uint32_t)(0x1029c0bcu));
  /* 1027fe74 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fe76 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fe78 call 0x10274b50 */
  push32(0x1027fe7du); f_10274b50();
  /* 1027fe7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fe80 mov ecx, dword ptr [0x1029fd88] */
  ECX = (r32((uint32_t)(0x1029fd88)));
  /* 1027fe86 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1027fe88 mov edx, dword ptr [0x1029fd88] */
  EDX = (r32((uint32_t)(0x1029fd88)));
  /* 1027fe8e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027fe91 jne 0x1027fe9b */
  if (!C.zf) goto L_1027fe9b;
  /* 1027fe93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027fe96 jmp 0x1027ff42 */
  goto L_1027ff42;
L_1027fe9b:;
  /* 1027fe9b push 0x1029c08c */
  push32((uint32_t)(0x1029c08cu));
  /* 1027fea0 mov eax, dword ptr [0x1029fd88] */
  EAX = (r32((uint32_t)(0x1029fd88)));
  /* 1027fea5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1027fea7 push ecx */
  push32((uint32_t)(ECX));
  /* 1027fea8 call 0x10277b00 */
  push32(0x1027feadu); f_10277b00();
  /* 1027fead add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027feb0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1027feb5 push 0x1029c0bc */
  push32((uint32_t)(0x1029c0bcu));
  /* 1027feba push 2 */
  push32((uint32_t)(0x2u));
  /* 1027febc push 2 */
  push32((uint32_t)(0x2u));
  /* 1027febe call 0x10274b50 */
  push32(0x1027fec3u); f_10274b50();
  /* 1027fec3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fec6 mov edx, dword ptr [0x1029fd88] */
  EDX = (r32((uint32_t)(0x1029fd88)));
  /* 1027fecc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1027fecf mov eax, dword ptr [0x1029fd88] */
  EAX = (r32((uint32_t)(0x1029fd88)));
  /* 1027fed4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027fed8 jne 0x1027fedf */
  if (!C.zf) goto L_1027fedf;
  /* 1027feda or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027fedd jmp 0x1027ff42 */
  goto L_1027ff42;
L_1027fedf:;
  /* 1027fedf mov ecx, dword ptr [0x1029fd88] */
  ECX = (r32((uint32_t)(0x1029fd88)));
  /* 1027fee5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1027fee8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1027feeb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1027fef0 push 0x1029c0bc */
  push32((uint32_t)(0x1029c0bcu));
  /* 1027fef5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fef7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027fef9 call 0x10274b50 */
  push32(0x1027fefeu); f_10274b50();
  /* 1027fefe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ff01 mov ecx, dword ptr [0x1029fd88] */
  ECX = (r32((uint32_t)(0x1029fd88)));
  /* 1027ff07 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1027ff0a mov edx, dword ptr [0x1029fd88] */
  EDX = (r32((uint32_t)(0x1029fd88)));
  /* 1027ff10 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ff14 jne 0x1027ff1b */
  if (!C.zf) goto L_1027ff1b;
  /* 1027ff16 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027ff19 jmp 0x1027ff42 */
  goto L_1027ff42;
L_1027ff1b:;
  /* 1027ff1b mov eax, dword ptr [0x1029fd88] */
  EAX = (r32((uint32_t)(0x1029fd88)));
  /* 1027ff20 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1027ff23 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1027ff26 mov edx, dword ptr [0x1029fd88] */
  EDX = (r32((uint32_t)(0x1029fd88)));
  /* 1027ff2c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1027ff2e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1027ff30 mov byte ptr [0x1029eea8], cl */
  w8((uint32_t)(0x1029eea8), (CL));
  /* 1027ff36 mov dword ptr [0x1029eeac], 1 */
  w32((uint32_t)(0x1029eeac), (0x1u));
  /* 1027ff40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1027ff42:;
  /* 1027ff42 mov esp, ebp */
  ESP = (EBP);
  /* 1027ff44 pop ebp */
  EBP = (pop32());
  /* 1027ff45 ret  */
  ESPCHK(0x1027fca0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1027ff50 (125 bytes, 49 insns) */
void f_1027ff50(void) {
  FTRACE(0x1027ff50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027ff50 push ebp */
  push32((uint32_t)(EBP));
  /* 1027ff51 mov ebp, esp */
  EBP = (ESP);
  /* 1027ff53 push ecx */
  push32((uint32_t)(ECX));
L_1027ff54:;
  /* 1027ff54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ff57 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1027ff5a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027ff5c je 0x1027ffc9 */
  if (C.zf) goto L_1027ffc9;
  /* 1027ff5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ff61 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1027ff64 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ff67 jl 0x1027ff8d */
  if ((C.sf!=C.of)) goto L_1027ff8d;
  /* 1027ff69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ff6c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1027ff6f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ff72 jg 0x1027ff8d */
  if ((!C.zf&&C.sf==C.of)) goto L_1027ff8d;
  /* 1027ff74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ff77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1027ff7a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027ff7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ff80 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1027ff82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ff85 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ff88 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1027ff8b jmp 0x1027ffc7 */
  goto L_1027ffc7;
L_1027ff8d:;
  /* 1027ff8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ff90 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1027ff93 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ff96 jne 0x1027ffbe */
  if (!C.zf) goto L_1027ffbe;
  /* 1027ff98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ff9b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1027ff9e:;
  /* 1027ff9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ffa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ffa4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1027ffa7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1027ffa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ffac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ffaf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1027ffb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027ffb5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1027ffb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027ffba jne 0x1027ff9e */
  if (!C.zf) goto L_1027ff9e;
  /* 1027ffbc jmp 0x1027ffc7 */
  goto L_1027ffc7;
L_1027ffbe:;
  /* 1027ffbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027ffc1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027ffc4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1027ffc7:;
  /* 1027ffc7 jmp 0x1027ff54 */
  goto L_1027ff54;
L_1027ffc9:;
  /* 1027ffc9 mov esp, ebp */
  ESP = (EBP);
  /* 1027ffcb pop ebp */
  EBP = (pop32());
  /* 1027ffcc ret  */
  ESPCHK(0x1027ff50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffd0 @ 0x1027ffd0 (304 bytes, 85 insns) */
void f_1027ffd0(void) {
  FTRACE(0x1027ffd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027ffd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1027ffd1 mov ebp, esp */
  EBP = (ESP);
  /* 1027ffd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1027ffd4 cmp dword ptr [0x102a07ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a07ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027ffdb je 0x1028009c */
  if (C.zf) goto L_1028009c;
  /* 1027ffe1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1027ffe3 push 0x1029c0c8 */
  push32((uint32_t)(0x1029c0c8u));
  /* 1027ffe8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027ffea push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1027ffec push 1 */
  push32((uint32_t)(0x1u));
  /* 1027ffee call 0x10274f60 */
  push32(0x1027fff3u); f_10274f60();
  /* 1027fff3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027fff6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027fff9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027fffd jne 0x10280009 */
  if (!C.zf) goto L_10280009;
  /* 1027ffff mov eax, 1 */
  EAX = (0x1u);
  /* 10280004 jmp 0x102800fc */
  goto L_102800fc;
L_10280009:;
  /* 10280009 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028000c push eax */
  push32((uint32_t)(EAX));
  /* 1028000d call 0x10280100 */
  push32(0x10280012u); f_10280100();
  /* 10280012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280015 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280017 je 0x1028003d */
  if (C.zf) goto L_1028003d;
  /* 10280019 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028001c push ecx */
  push32((uint32_t)(ECX));
  /* 1028001d call 0x10280390 */
  push32(0x10280022u); f_10280390();
  /* 10280022 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280025 push 2 */
  push32((uint32_t)(0x2u));
  /* 10280027 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028002a push edx */
  push32((uint32_t)(EDX));
  /* 1028002b call 0x102755e0 */
  push32(0x10280030u); f_102755e0();
  /* 10280030 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280033 mov eax, 1 */
  EAX = (0x1u);
  /* 10280038 jmp 0x102800fc */
  goto L_102800fc;
L_1028003d:;
  /* 1028003d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280040 mov ecx, dword ptr [0x1029fd88] */
  ECX = (r32((uint32_t)(0x1029fd88)));
  /* 10280046 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10280048 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1028004a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028004d mov ecx, dword ptr [0x1029fd88] */
  ECX = (r32((uint32_t)(0x1029fd88)));
  /* 10280053 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10280056 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10280059 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028005c mov ecx, dword ptr [0x1029fd88] */
  ECX = (r32((uint32_t)(0x1029fd88)));
  /* 10280062 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10280065 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10280068 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028006b mov dword ptr [0x1029fd88], eax */
  w32((uint32_t)(0x1029fd88), (EAX));
  /* 10280070 mov ecx, dword ptr [0x102a07e4] */
  ECX = (r32((uint32_t)(0x102a07e4)));
  /* 10280076 push ecx */
  push32((uint32_t)(ECX));
  /* 10280077 call 0x10280390 */
  push32(0x1028007cu); f_10280390();
  /* 1028007c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028007f push 2 */
  push32((uint32_t)(0x2u));
  /* 10280081 mov edx, dword ptr [0x102a07e4] */
  EDX = (r32((uint32_t)(0x102a07e4)));
  /* 10280087 push edx */
  push32((uint32_t)(EDX));
  /* 10280088 call 0x102755e0 */
  push32(0x1028008du); f_102755e0();
  /* 1028008d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280090 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280093 mov dword ptr [0x102a07e4], eax */
  w32((uint32_t)(0x102a07e4), (EAX));
  /* 10280098 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1028009a jmp 0x102800fc */
  goto L_102800fc;
L_1028009c:;
  /* 1028009c mov ecx, dword ptr [0x1029fd88] */
  ECX = (r32((uint32_t)(0x1029fd88)));
  /* 102800a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 102800a4 mov dword ptr [0x1029fd58], edx */
  w32((uint32_t)(0x1029fd58), (EDX));
  /* 102800aa mov eax, dword ptr [0x1029fd88] */
  EAX = (r32((uint32_t)(0x1029fd88)));
  /* 102800af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 102800b2 mov dword ptr [0x1029fd5c], ecx */
  w32((uint32_t)(0x1029fd5c), (ECX));
  /* 102800b8 mov edx, dword ptr [0x1029fd88] */
  EDX = (r32((uint32_t)(0x1029fd88)));
  /* 102800be mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 102800c1 mov dword ptr [0x1029fd60], eax */
  w32((uint32_t)(0x1029fd60), (EAX));
  /* 102800c6 mov dword ptr [0x1029fd88], 0x1029fd58 */
  w32((uint32_t)(0x1029fd88), (0x1029fd58u));
  /* 102800d0 mov ecx, dword ptr [0x102a07e4] */
  ECX = (r32((uint32_t)(0x102a07e4)));
  /* 102800d6 push ecx */
  push32((uint32_t)(ECX));
  /* 102800d7 call 0x10280390 */
  push32(0x102800dcu); f_10280390();
  /* 102800dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102800df push 2 */
  push32((uint32_t)(0x2u));
  /* 102800e1 mov edx, dword ptr [0x102a07e4] */
  EDX = (r32((uint32_t)(0x102a07e4)));
  /* 102800e7 push edx */
  push32((uint32_t)(EDX));
  /* 102800e8 call 0x102755e0 */
  push32(0x102800edu); f_102755e0();
  /* 102800ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102800f0 mov dword ptr [0x102a07e4], 0 */
  w32((uint32_t)(0x102a07e4), (0x0u));
  /* 102800fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102800fc:;
  /* 102800fc mov esp, ebp */
  ESP = (EBP);
  /* 102800fe pop ebp */
  EBP = (pop32());
  /* 102800ff ret  */
  ESPCHK(0x1027ffd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010100 @ 0x10280100 (525 bytes, 200 insns) */
void f_10280100(void) {
  FTRACE(0x10280100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10280100 push ebp */
  push32((uint32_t)(EBP));
  /* 10280101 mov ebp, esp */
  EBP = (ESP);
  /* 10280103 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10280106 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1028010d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1028010f mov ax, word ptr [0x102a0804] */
  AX = (r16((uint32_t)(0x102a0804)));
  /* 10280115 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10280118 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028011c jne 0x10280126 */
  if (!C.zf) goto L_10280126;
  /* 1028011e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10280121 jmp 0x10280309 */
  goto L_10280309;
L_10280126:;
  /* 10280126 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280129 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028012c push ecx */
  push32((uint32_t)(ECX));
  /* 1028012d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1028012f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280132 push edx */
  push32((uint32_t)(EDX));
  /* 10280133 push 1 */
  push32((uint32_t)(0x1u));
  /* 10280135 call 0x10282d10 */
  push32(0x1028013au); f_10282d10();
  /* 1028013a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028013d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10280140 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10280142 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10280145 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280148 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028014b push edx */
  push32((uint32_t)(EDX));
  /* 1028014c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1028014e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280151 push eax */
  push32((uint32_t)(EAX));
  /* 10280152 push 1 */
  push32((uint32_t)(0x1u));
  /* 10280154 call 0x10282d10 */
  push32(0x10280159u); f_10282d10();
  /* 10280159 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028015c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1028015f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10280161 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10280164 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280167 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028016a push edx */
  push32((uint32_t)(EDX));
  /* 1028016b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1028016d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280170 push eax */
  push32((uint32_t)(EAX));
  /* 10280171 push 1 */
  push32((uint32_t)(0x1u));
  /* 10280173 call 0x10282d10 */
  push32(0x10280178u); f_10282d10();
  /* 10280178 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028017b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1028017e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10280180 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10280183 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280186 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280189 push edx */
  push32((uint32_t)(EDX));
  /* 1028018a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1028018c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028018f push eax */
  push32((uint32_t)(EAX));
  /* 10280190 push 1 */
  push32((uint32_t)(0x1u));
  /* 10280192 call 0x10282d10 */
  push32(0x10280197u); f_10282d10();
  /* 10280197 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028019a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1028019d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1028019f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102801a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102801a5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102801a8 push edx */
  push32((uint32_t)(EDX));
  /* 102801a9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 102801ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102801ae push eax */
  push32((uint32_t)(EAX));
  /* 102801af push 1 */
  push32((uint32_t)(0x1u));
  /* 102801b1 call 0x10282d10 */
  push32(0x102801b6u); f_10282d10();
  /* 102801b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102801b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102801bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 102801be mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102801c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102801c4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 102801c7 push eax */
  push32((uint32_t)(EAX));
  /* 102801c8 call 0x10280310 */
  push32(0x102801cdu); f_10280310();
  /* 102801cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102801d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102801d3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102801d6 push ecx */
  push32((uint32_t)(ECX));
  /* 102801d7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 102801d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102801dc push edx */
  push32((uint32_t)(EDX));
  /* 102801dd push 1 */
  push32((uint32_t)(0x1u));
  /* 102801df call 0x10282d10 */
  push32(0x102801e4u); f_10282d10();
  /* 102801e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102801e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102801ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 102801ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102801ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102801f2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102801f5 push edx */
  push32((uint32_t)(EDX));
  /* 102801f6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 102801f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102801fb push eax */
  push32((uint32_t)(EAX));
  /* 102801fc push 1 */
  push32((uint32_t)(0x1u));
  /* 102801fe call 0x10282d10 */
  push32(0x10280203u); f_10282d10();
  /* 10280203 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280206 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10280209 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1028020b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1028020e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280211 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280214 push edx */
  push32((uint32_t)(EDX));
  /* 10280215 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10280217 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028021a push eax */
  push32((uint32_t)(EAX));
  /* 1028021b push 0 */
  push32((uint32_t)(0x0u));
  /* 1028021d call 0x10282d10 */
  push32(0x10280222u); f_10282d10();
  /* 10280222 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280225 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10280228 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1028022a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1028022d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280230 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280233 push edx */
  push32((uint32_t)(EDX));
  /* 10280234 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10280236 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280239 push eax */
  push32((uint32_t)(EAX));
  /* 1028023a push 0 */
  push32((uint32_t)(0x0u));
  /* 1028023c call 0x10282d10 */
  push32(0x10280241u); f_10282d10();
  /* 10280241 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280244 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10280247 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10280249 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1028024c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028024f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280252 push edx */
  push32((uint32_t)(EDX));
  /* 10280253 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10280255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280258 push eax */
  push32((uint32_t)(EAX));
  /* 10280259 push 0 */
  push32((uint32_t)(0x0u));
  /* 1028025b call 0x10282d10 */
  push32(0x10280260u); f_10282d10();
  /* 10280260 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280263 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10280266 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10280268 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1028026b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028026e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280271 push edx */
  push32((uint32_t)(EDX));
  /* 10280272 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10280274 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280277 push eax */
  push32((uint32_t)(EAX));
  /* 10280278 push 0 */
  push32((uint32_t)(0x0u));
  /* 1028027a call 0x10282d10 */
  push32(0x1028027fu); f_10282d10();
  /* 1028027f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280282 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10280285 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10280287 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1028028a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028028d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280290 push edx */
  push32((uint32_t)(EDX));
  /* 10280291 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10280293 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280296 push eax */
  push32((uint32_t)(EAX));
  /* 10280297 push 0 */
  push32((uint32_t)(0x0u));
  /* 10280299 call 0x10282d10 */
  push32(0x1028029eu); f_10282d10();
  /* 1028029e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102802a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102802a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 102802a6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102802a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102802ac add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102802af push edx */
  push32((uint32_t)(EDX));
  /* 102802b0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 102802b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102802b5 push eax */
  push32((uint32_t)(EAX));
  /* 102802b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102802b8 call 0x10282d10 */
  push32(0x102802bdu); f_10282d10();
  /* 102802bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102802c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102802c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 102802c5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102802c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102802cb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102802ce push edx */
  push32((uint32_t)(EDX));
  /* 102802cf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 102802d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102802d4 push eax */
  push32((uint32_t)(EAX));
  /* 102802d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102802d7 call 0x10282d10 */
  push32(0x102802dcu); f_10282d10();
  /* 102802dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102802df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102802e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 102802e4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102802e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102802ea add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102802ed push edx */
  push32((uint32_t)(EDX));
  /* 102802ee push 0x53 */
  push32((uint32_t)(0x53u));
  /* 102802f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102802f3 push eax */
  push32((uint32_t)(EAX));
  /* 102802f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102802f6 call 0x10282d10 */
  push32(0x102802fbu); f_10282d10();
  /* 102802fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102802fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10280301 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10280303 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10280306 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10280309:;
  /* 10280309 mov esp, ebp */
  ESP = (EBP);
  /* 1028030b pop ebp */
  EBP = (pop32());
  /* 1028030c ret  */
  ESPCHK(0x10280100u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10280310 (125 bytes, 49 insns) */
void f_10280310(void) {
  FTRACE(0x10280310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10280310 push ebp */
  push32((uint32_t)(EBP));
  /* 10280311 mov ebp, esp */
  EBP = (ESP);
  /* 10280313 push ecx */
  push32((uint32_t)(ECX));
L_10280314:;
  /* 10280314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280317 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1028031a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1028031c je 0x10280389 */
  if (C.zf) goto L_10280389;
  /* 1028031e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280321 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10280324 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280327 jl 0x1028034d */
  if ((C.sf!=C.of)) goto L_1028034d;
  /* 10280329 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028032c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1028032f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280332 jg 0x1028034d */
  if ((!C.zf&&C.sf==C.of)) goto L_1028034d;
  /* 10280334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280337 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1028033a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1028033d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280340 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10280342 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280345 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280348 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1028034b jmp 0x10280387 */
  goto L_10280387;
L_1028034d:;
  /* 1028034d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280350 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10280353 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280356 jne 0x1028037e */
  if (!C.zf) goto L_1028037e;
  /* 10280358 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028035b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1028035e:;
  /* 1028035e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280361 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280364 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10280367 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10280369 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028036c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028036f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10280372 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280375 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10280378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1028037a jne 0x1028035e */
  if (!C.zf) goto L_1028035e;
  /* 1028037c jmp 0x10280387 */
  goto L_10280387;
L_1028037e:;
  /* 1028037e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280381 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280384 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10280387:;
  /* 10280387 jmp 0x10280314 */
  goto L_10280314;
L_10280389:;
  /* 10280389 mov esp, ebp */
  ESP = (EBP);
  /* 1028038b pop ebp */
  EBP = (pop32());
  /* 1028038c ret  */
  ESPCHK(0x10280310u, _esp0);
  ESP += 4; return;
}

/* FUN_10010390 @ 0x10280390 (147 bytes, 52 insns) */
void f_10280390(void) {
  FTRACE(0x10280390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10280390 push ebp */
  push32((uint32_t)(EBP));
  /* 10280391 mov ebp, esp */
  EBP = (ESP);
  /* 10280393 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280397 jne 0x1028039e */
  if (!C.zf) goto L_1028039e;
  /* 10280399 jmp 0x10280421 */
  goto L_10280421;
L_1028039e:;
  /* 1028039e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102803a1 cmp dword ptr [eax + 0xc], 0x102a0840 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x102a0840u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102803a8 je 0x10280421 */
  if (C.zf) goto L_10280421;
  /* 102803aa push 2 */
  push32((uint32_t)(0x2u));
  /* 102803ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102803af mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 102803b2 push edx */
  push32((uint32_t)(EDX));
  /* 102803b3 call 0x102755e0 */
  push32(0x102803b8u); f_102755e0();
  /* 102803b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102803bb push 2 */
  push32((uint32_t)(0x2u));
  /* 102803bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102803c0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 102803c3 push ecx */
  push32((uint32_t)(ECX));
  /* 102803c4 call 0x102755e0 */
  push32(0x102803c9u); f_102755e0();
  /* 102803c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102803cc push 2 */
  push32((uint32_t)(0x2u));
  /* 102803ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102803d1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 102803d4 push eax */
  push32((uint32_t)(EAX));
  /* 102803d5 call 0x102755e0 */
  push32(0x102803dau); f_102755e0();
  /* 102803da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102803dd push 2 */
  push32((uint32_t)(0x2u));
  /* 102803df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102803e2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 102803e5 push edx */
  push32((uint32_t)(EDX));
  /* 102803e6 call 0x102755e0 */
  push32(0x102803ebu); f_102755e0();
  /* 102803eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102803ee push 2 */
  push32((uint32_t)(0x2u));
  /* 102803f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102803f3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 102803f6 push ecx */
  push32((uint32_t)(ECX));
  /* 102803f7 call 0x102755e0 */
  push32(0x102803fcu); f_102755e0();
  /* 102803fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102803ff push 2 */
  push32((uint32_t)(0x2u));
  /* 10280401 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280404 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10280407 push eax */
  push32((uint32_t)(EAX));
  /* 10280408 call 0x102755e0 */
  push32(0x1028040du); f_102755e0();
  /* 1028040d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280410 push 2 */
  push32((uint32_t)(0x2u));
  /* 10280412 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280415 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10280418 push edx */
  push32((uint32_t)(EDX));
  /* 10280419 call 0x102755e0 */
  push32(0x1028041eu); f_102755e0();
  /* 1028041e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10280421:;
  /* 10280421 pop ebp */
  EBP = (pop32());
  /* 10280422 ret  */
  ESPCHK(0x10280390u, _esp0);
  ESP += 4; return;
}

/* FUN_10010430 @ 0x10280430 (928 bytes, 284 insns) */
void f_10280430(void) {
  FTRACE(0x10280430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10280430 push ebp */
  push32((uint32_t)(EBP));
  /* 10280431 mov ebp, esp */
  EBP = (ESP);
  /* 10280433 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10280436 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1028043d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10280444 cmp dword ptr [0x102a07a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a07a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028044b je 0x10280781 */
  if (C.zf) goto L_10280781;
  /* 10280451 cmp dword ptr [0x102a07b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a07b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280458 jne 0x10280480 */
  if (!C.zf) goto L_10280480;
  /* 1028045a push 0x102a07b8 */
  push32((uint32_t)(0x102a07b8u));
  /* 1028045f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10280464 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10280466 mov ax, word ptr [0x102a07fc] */
  AX = (r16((uint32_t)(0x102a07fc)));
  /* 1028046c push eax */
  push32((uint32_t)(EAX));
  /* 1028046d push 0 */
  push32((uint32_t)(0x0u));
  /* 1028046f call 0x10282d10 */
  push32(0x10280474u); f_10282d10();
  /* 10280474 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280477 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280479 je 0x10280480 */
  if (C.zf) goto L_10280480;
  /* 1028047b jmp 0x10280742 */
  goto L_10280742;
L_10280480:;
  /* 10280480 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10280482 push 0x1029c0d4 */
  push32((uint32_t)(0x1029c0d4u));
  /* 10280487 push 2 */
  push32((uint32_t)(0x2u));
  /* 10280489 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1028048e call 0x10274b50 */
  push32(0x10280493u); f_10274b50();
  /* 10280493 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280496 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10280499 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1028049b push 0x1029c0d4 */
  push32((uint32_t)(0x1029c0d4u));
  /* 102804a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 102804a2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 102804a7 call 0x10274b50 */
  push32(0x102804acu); f_10274b50();
  /* 102804ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102804af mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 102804b2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 102804b4 push 0x1029c0d4 */
  push32((uint32_t)(0x1029c0d4u));
  /* 102804b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 102804bb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 102804c0 call 0x10274b50 */
  push32(0x102804c5u); f_10274b50();
  /* 102804c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102804c8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 102804cb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 102804cd push 0x1029c0d4 */
  push32((uint32_t)(0x1029c0d4u));
  /* 102804d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 102804d4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 102804d9 call 0x10274b50 */
  push32(0x102804deu); f_10274b50();
  /* 102804de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102804e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 102804e4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102804e8 je 0x102804fc */
  if (C.zf) goto L_102804fc;
  /* 102804ea cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102804ee je 0x102804fc */
  if (C.zf) goto L_102804fc;
  /* 102804f0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102804f4 je 0x102804fc */
  if (C.zf) goto L_102804fc;
  /* 102804f6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102804fa jne 0x10280501 */
  if (!C.zf) goto L_10280501;
L_102804fc:;
  /* 102804fc jmp 0x10280742 */
  goto L_10280742;
L_10280501:;
  /* 10280501 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10280504 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10280507 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1028050e jmp 0x10280519 */
  goto L_10280519;
L_10280510:;
  /* 10280510 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10280513 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280516 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10280519:;
  /* 10280519 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280520 jge 0x10280535 */
  if ((C.sf==C.of)) goto L_10280535;
  /* 10280522 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10280525 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10280528 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1028052a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1028052d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280530 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10280533 jmp 0x10280510 */
  goto L_10280510;
L_10280535:;
  /* 10280535 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10280538 push eax */
  push32((uint32_t)(EAX));
  /* 10280539 mov ecx, dword ptr [0x102a07b8] */
  ECX = (r32((uint32_t)(0x102a07b8)));
  /* 1028053f push ecx */
  push32((uint32_t)(ECX));
  /* 10280540 call dword ptr [0x102a32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32d8))), 0x10280546u);
  /* 10280546 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280548 jne 0x1028054f */
  if (!C.zf) goto L_1028054f;
  /* 1028054a jmp 0x10280742 */
  goto L_10280742;
L_1028054f:;
  /* 1028054f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280553 jbe 0x1028055a */
  if ((C.cf||C.zf)) goto L_1028055a;
  /* 10280555 jmp 0x10280742 */
  goto L_10280742;
L_1028055a:;
  /* 1028055a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1028055d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10280563 mov dword ptr [0x1029eea4], edx */
  w32((uint32_t)(0x1029eea4), (EDX));
  /* 10280569 cmp dword ptr [0x1029eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1029eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280570 jle 0x102805c9 */
  if ((C.zf||C.sf!=C.of)) goto L_102805c9;
  /* 10280572 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10280575 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10280578 jmp 0x10280583 */
  goto L_10280583;
L_1028057a:;
  /* 1028057a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1028057d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280580 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10280583:;
  /* 10280583 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10280586 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10280588 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1028058a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1028058c je 0x102805c9 */
  if (C.zf) goto L_102805c9;
  /* 1028058e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10280591 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10280593 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10280596 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10280598 je 0x102805c9 */
  if (C.zf) goto L_102805c9;
  /* 1028059a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1028059d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1028059f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 102805a1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 102805a4 jmp 0x102805af */
  goto L_102805af;
L_102805a6:;
  /* 102805a6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 102805a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102805ac mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_102805af:;
  /* 102805af mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 102805b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102805b4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 102805b7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102805ba jg 0x102805c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_102805c7;
  /* 102805bc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 102805bf add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102805c2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 102805c5 jmp 0x102805a6 */
  goto L_102805a6;
L_102805c7:;
  /* 102805c7 jmp 0x1028057a */
  goto L_1028057a;
L_102805c9:;
  /* 102805c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102805cb push 0 */
  push32((uint32_t)(0x0u));
  /* 102805cd push 0 */
  push32((uint32_t)(0x0u));
  /* 102805cf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 102805d2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102805d5 push eax */
  push32((uint32_t)(EAX));
  /* 102805d6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 102805db mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 102805de push ecx */
  push32((uint32_t)(ECX));
  /* 102805df push 1 */
  push32((uint32_t)(0x1u));
  /* 102805e1 call 0x1027cd80 */
  push32(0x102805e6u); f_1027cd80();
  /* 102805e6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102805e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102805eb jne 0x102805f2 */
  if (!C.zf) goto L_102805f2;
  /* 102805ed jmp 0x10280742 */
  goto L_10280742;
L_102805f2:;
  /* 102805f2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 102805f5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 102805fa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 102805fd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10280600 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10280607 jmp 0x10280612 */
  goto L_10280612;
L_10280609:;
  /* 10280609 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1028060c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028060f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10280612:;
  /* 10280612 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280619 jge 0x10280630 */
  if ((C.sf==C.of)) goto L_10280630;
  /* 1028061b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1028061e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10280622 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10280625 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10280628 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028062b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1028062e jmp 0x10280609 */
  goto L_10280609;
L_10280630:;
  /* 10280630 push 0 */
  push32((uint32_t)(0x0u));
  /* 10280632 push 0 */
  push32((uint32_t)(0x0u));
  /* 10280634 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10280637 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028063a push edx */
  push32((uint32_t)(EDX));
  /* 1028063b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10280640 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10280643 push eax */
  push32((uint32_t)(EAX));
  /* 10280644 push 1 */
  push32((uint32_t)(0x1u));
  /* 10280646 call 0x10282fb0 */
  push32(0x1028064bu); f_10282fb0();
  /* 1028064b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028064e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280650 jne 0x10280657 */
  if (!C.zf) goto L_10280657;
  /* 10280652 jmp 0x10280742 */
  goto L_10280742;
L_10280657:;
  /* 10280657 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1028065a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1028065f cmp dword ptr [0x1029eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1029eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280666 jle 0x102806c3 */
  if ((C.zf||C.sf!=C.of)) goto L_102806c3;
  /* 10280668 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1028066b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1028066e jmp 0x10280679 */
  goto L_10280679;
L_10280670:;
  /* 10280670 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10280673 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280676 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10280679:;
  /* 10280679 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1028067c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1028067e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10280680 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10280682 je 0x102806c3 */
  if (C.zf) goto L_102806c3;
  /* 10280684 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10280687 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10280689 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1028068c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1028068e je 0x102806c3 */
  if (C.zf) goto L_102806c3;
  /* 10280690 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10280693 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10280695 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10280697 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1028069a jmp 0x102806a5 */
  goto L_102806a5;
L_1028069c:;
  /* 1028069c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1028069f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102806a2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_102806a5:;
  /* 102806a5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 102806a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102806aa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 102806ad cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102806b0 jg 0x102806c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_102806c1;
  /* 102806b2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 102806b5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 102806b8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 102806bf jmp 0x1028069c */
  goto L_1028069c;
L_102806c1:;
  /* 102806c1 jmp 0x10280670 */
  goto L_10280670;
L_102806c3:;
  /* 102806c3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 102806c6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102806c9 mov dword ptr [0x1029ec98], eax */
  w32((uint32_t)(0x1029ec98), (EAX));
  /* 102806ce mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 102806d1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102806d4 mov dword ptr [0x1029ec9c], ecx */
  w32((uint32_t)(0x1029ec9c), (ECX));
  /* 102806da cmp dword ptr [0x102a07e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a07e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102806e1 je 0x102806f4 */
  if (C.zf) goto L_102806f4;
  /* 102806e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 102806e5 mov edx, dword ptr [0x102a07e8] */
  EDX = (r32((uint32_t)(0x102a07e8)));
  /* 102806eb push edx */
  push32((uint32_t)(EDX));
  /* 102806ec call 0x102755e0 */
  push32(0x102806f1u); f_102755e0();
  /* 102806f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102806f4:;
  /* 102806f4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 102806f7 mov dword ptr [0x102a07e8], eax */
  w32((uint32_t)(0x102a07e8), (EAX));
  /* 102806fc cmp dword ptr [0x102a07ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a07ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280703 je 0x10280716 */
  if (C.zf) goto L_10280716;
  /* 10280705 push 2 */
  push32((uint32_t)(0x2u));
  /* 10280707 mov ecx, dword ptr [0x102a07ec] */
  ECX = (r32((uint32_t)(0x102a07ec)));
  /* 1028070d push ecx */
  push32((uint32_t)(ECX));
  /* 1028070e call 0x102755e0 */
  push32(0x10280713u); f_102755e0();
  /* 10280713 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10280716:;
  /* 10280716 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10280719 mov dword ptr [0x102a07ec], edx */
  w32((uint32_t)(0x102a07ec), (EDX));
  /* 1028071f push 2 */
  push32((uint32_t)(0x2u));
  /* 10280721 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10280724 push eax */
  push32((uint32_t)(EAX));
  /* 10280725 call 0x102755e0 */
  push32(0x1028072au); f_102755e0();
  /* 1028072a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028072d push 2 */
  push32((uint32_t)(0x2u));
  /* 1028072f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10280732 push ecx */
  push32((uint32_t)(ECX));
  /* 10280733 call 0x102755e0 */
  push32(0x10280738u); f_102755e0();
  /* 10280738 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028073b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1028073d jmp 0x102807cc */
  goto L_102807cc;
L_10280742:;
  /* 10280742 push 2 */
  push32((uint32_t)(0x2u));
  /* 10280744 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10280747 push edx */
  push32((uint32_t)(EDX));
  /* 10280748 call 0x102755e0 */
  push32(0x1028074du); f_102755e0();
  /* 1028074d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280750 push 2 */
  push32((uint32_t)(0x2u));
  /* 10280752 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10280755 push eax */
  push32((uint32_t)(EAX));
  /* 10280756 call 0x102755e0 */
  push32(0x1028075bu); f_102755e0();
  /* 1028075b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028075e push 2 */
  push32((uint32_t)(0x2u));
  /* 10280760 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10280763 push ecx */
  push32((uint32_t)(ECX));
  /* 10280764 call 0x102755e0 */
  push32(0x10280769u); f_102755e0();
  /* 10280769 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028076c push 2 */
  push32((uint32_t)(0x2u));
  /* 1028076e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10280771 push edx */
  push32((uint32_t)(EDX));
  /* 10280772 call 0x102755e0 */
  push32(0x10280777u); f_102755e0();
  /* 10280777 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028077a mov eax, 1 */
  EAX = (0x1u);
  /* 1028077f jmp 0x102807cc */
  goto L_102807cc;
L_10280781:;
  /* 10280781 mov dword ptr [0x1029ec98], 0x1029eca2 */
  w32((uint32_t)(0x1029ec98), (0x1029eca2u));
  /* 1028078b mov dword ptr [0x1029ec9c], 0x1029eca2 */
  w32((uint32_t)(0x1029ec9c), (0x1029eca2u));
  /* 10280795 push 2 */
  push32((uint32_t)(0x2u));
  /* 10280797 mov eax, dword ptr [0x102a07e8] */
  EAX = (r32((uint32_t)(0x102a07e8)));
  /* 1028079c push eax */
  push32((uint32_t)(EAX));
  /* 1028079d call 0x102755e0 */
  push32(0x102807a2u); f_102755e0();
  /* 102807a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102807a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 102807a7 mov ecx, dword ptr [0x102a07ec] */
  ECX = (r32((uint32_t)(0x102a07ec)));
  /* 102807ad push ecx */
  push32((uint32_t)(ECX));
  /* 102807ae call 0x102755e0 */
  push32(0x102807b3u); f_102755e0();
  /* 102807b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102807b6 mov dword ptr [0x102a07e8], 0 */
  w32((uint32_t)(0x102a07e8), (0x0u));
  /* 102807c0 mov dword ptr [0x102a07ec], 0 */
  w32((uint32_t)(0x102a07ec), (0x0u));
  /* 102807ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102807cc:;
  /* 102807cc mov esp, ebp */
  ESP = (EBP);
  /* 102807ce pop ebp */
  EBP = (pop32());
  /* 102807cf ret  */
  ESPCHK(0x10280430u, _esp0);
  ESP += 4; return;
}

/* FUN_100107d0 @ 0x102807d0 (7 bytes, 5 insns) */
void f_102807d0(void) {
  FTRACE(0x102807d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102807d0 push ebp */
  push32((uint32_t)(EBP));
  /* 102807d1 mov ebp, esp */
  EBP = (ESP);
  /* 102807d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102807d5 pop ebp */
  EBP = (pop32());
  /* 102807d6 ret  */
  ESPCHK(0x102807d0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x102807e0 (129 bytes, 56 insns) */
void f_102807e0(void) {
  FTRACE(0x102807e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102807e0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 102807e4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 102807e8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 102807ee jne 0x1028082c */
  if (!C.zf) goto L_1028082c;
L_102807f0:;
  /* 102807f0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 102807f2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102807f4 jne 0x10280824 */
  if (!C.zf) goto L_10280824;
  /* 102807f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 102807f8 je 0x10280820 */
  if (C.zf) goto L_10280820;
  /* 102807fa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102807fd jne 0x10280824 */
  if (!C.zf) goto L_10280824;
  /* 102807ff or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10280801 je 0x10280820 */
  if (C.zf) goto L_10280820;
  /* 10280803 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10280806 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10280809 jne 0x10280824 */
  if (!C.zf) goto L_10280824;
  /* 1028080b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1028080d je 0x10280820 */
  if (C.zf) goto L_10280820;
  /* 1028080f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10280812 jne 0x10280824 */
  if (!C.zf) goto L_10280824;
  /* 10280814 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280817 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028081a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1028081c jne 0x102807f0 */
  if (!C.zf) goto L_102807f0;
  /* 1028081e mov edi, edi */
  EDI = (EDI);
L_10280820:;
  /* 10280820 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10280822 ret  */
  ESPCHK(0x102807e0u, _esp0);
  ESP += 4; return;
  /* 10280823 nop  */
  /* nop */
L_10280824:;
  /* 10280824 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10280826 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10280828 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10280829 ret  */
  ESPCHK(0x102807e0u, _esp0);
  ESP += 4; return;
  /* 1028082a mov edi, edi */
  EDI = (EDI);
L_1028082c:;
  /* 1028082c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10280832 je 0x10280848 */
  if (C.zf) goto L_10280848;
  /* 10280834 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10280836 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10280837 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10280839 jne 0x10280824 */
  if (!C.zf) goto L_10280824;
  /* 1028083b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1028083c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1028083e je 0x10280820 */
  if (C.zf) goto L_10280820;
  /* 10280840 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10280846 je 0x102807f0 */
  if (C.zf) goto L_102807f0;
L_10280848:;
  /* 10280848 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1028084b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028084e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10280850 jne 0x10280824 */
  if (!C.zf) goto L_10280824;
  /* 10280852 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10280854 je 0x10280820 */
  if (C.zf) goto L_10280820;
  /* 10280856 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10280859 jne 0x10280824 */
  if (!C.zf) goto L_10280824;
  /* 1028085b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1028085d je 0x10280820 */
  if (C.zf) goto L_10280820;
  /* 1028085f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280862 jmp 0x102807f0 */
  goto L_102807f0;
}

/* FUN_10010870 @ 0x10280870 (62 bytes, 35 insns) */
void f_10280870(void) {
  FTRACE(0x10280870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10280870 push ebp */
  push32((uint32_t)(EBP));
  /* 10280871 mov ebp, esp */
  EBP = (ESP);
  /* 10280873 push esi */
  push32((uint32_t)(ESI));
  /* 10280874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10280876 push eax */
  push32((uint32_t)(EAX));
  /* 10280877 push eax */
  push32((uint32_t)(EAX));
  /* 10280878 push eax */
  push32((uint32_t)(EAX));
  /* 10280879 push eax */
  push32((uint32_t)(EAX));
  /* 1028087a push eax */
  push32((uint32_t)(EAX));
  /* 1028087b push eax */
  push32((uint32_t)(EAX));
  /* 1028087c push eax */
  push32((uint32_t)(EAX));
  /* 1028087d push eax */
  push32((uint32_t)(EAX));
  /* 1028087e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10280881 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10280884:;
  /* 10280884 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10280886 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10280888 je 0x10280891 */
  if (C.zf) goto L_10280891;
  /* 1028088a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1028088b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1028088b");
  /* 1028088f jmp 0x10280884 */
  goto L_10280884;
L_10280891:;
  /* 10280891 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10280894 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10280897 nop  */
  /* nop */
L_10280898:;
  /* 10280898 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10280899 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1028089b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1028089d je 0x102808a6 */
  if (C.zf) goto L_102808a6;
  /* 1028089f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102808a0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x102808a0");
  /* 102808a4 jae 0x10280898 */
  if (!C.cf) goto L_10280898;
L_102808a6:;
  /* 102808a6 mov eax, ecx */
  EAX = (ECX);
  /* 102808a8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102808ab pop esi */
  ESI = (pop32());
  /* 102808ac leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102808ad ret  */
  ESPCHK(0x10280870u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x102808b0 (56 bytes, 31 insns) */
void f_102808b0(void) {
  FTRACE(0x102808b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102808b0 push ebp */
  push32((uint32_t)(EBP));
  /* 102808b1 mov ebp, esp */
  EBP = (ESP);
  /* 102808b3 push edi */
  push32((uint32_t)(EDI));
  /* 102808b4 push esi */
  push32((uint32_t)(ESI));
  /* 102808b5 push ebx */
  push32((uint32_t)(EBX));
  /* 102808b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102808b9 jecxz 0x102808e1 */
  x86_unimpl("jecxz @ 0x102808b9");
  /* 102808bb mov ebx, ecx */
  EBX = (ECX);
  /* 102808bd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 102808c0 mov esi, edi */
  ESI = (EDI);
  /* 102808c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102808c4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 102808c6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102808c8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102808ca mov edi, esi */
  EDI = (ESI);
  /* 102808cc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102808cf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 102808d1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 102808d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102808d6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102808d9 ja 0x102808df */
  if ((!C.cf&&!C.zf)) goto L_102808df;
  /* 102808db je 0x102808e1 */
  if (C.zf) goto L_102808e1;
  /* 102808dd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102808de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_102808df:;
  /* 102808df not ecx */
  ECX = (~(ECX));
L_102808e1:;
  /* 102808e1 mov eax, ecx */
  EAX = (ECX);
  /* 102808e3 pop ebx */
  EBX = (pop32());
  /* 102808e4 pop esi */
  ESI = (pop32());
  /* 102808e5 pop edi */
  EDI = (pop32());
  /* 102808e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102808e7 ret  */
  ESPCHK(0x102808b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100108f0 @ 0x102808f0 (58 bytes, 32 insns) */
void f_102808f0(void) {
  FTRACE(0x102808f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102808f0 push ebp */
  push32((uint32_t)(EBP));
  /* 102808f1 mov ebp, esp */
  EBP = (ESP);
  /* 102808f3 push esi */
  push32((uint32_t)(ESI));
  /* 102808f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102808f6 push eax */
  push32((uint32_t)(EAX));
  /* 102808f7 push eax */
  push32((uint32_t)(EAX));
  /* 102808f8 push eax */
  push32((uint32_t)(EAX));
  /* 102808f9 push eax */
  push32((uint32_t)(EAX));
  /* 102808fa push eax */
  push32((uint32_t)(EAX));
  /* 102808fb push eax */
  push32((uint32_t)(EAX));
  /* 102808fc push eax */
  push32((uint32_t)(EAX));
  /* 102808fd push eax */
  push32((uint32_t)(EAX));
  /* 102808fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10280901 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10280904:;
  /* 10280904 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10280906 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10280908 je 0x10280911 */
  if (C.zf) goto L_10280911;
  /* 1028090a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1028090b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1028090b");
  /* 1028090f jmp 0x10280904 */
  goto L_10280904;
L_10280911:;
  /* 10280911 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10280914:;
  /* 10280914 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10280916 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10280918 je 0x10280924 */
  if (C.zf) goto L_10280924;
  /* 1028091a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1028091b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1028091b");
  /* 1028091f jae 0x10280914 */
  if (!C.cf) goto L_10280914;
  /* 10280921 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10280924:;
  /* 10280924 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280927 pop esi */
  ESI = (pop32());
  /* 10280928 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10280929 ret  */
  ESPCHK(0x102808f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010930 @ 0x10280930 (512 bytes, 147 insns) */
void f_10280930(void) {
  FTRACE(0x10280930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10280930 push ebp */
  push32((uint32_t)(EBP));
  /* 10280931 mov ebp, esp */
  EBP = (ESP);
  /* 10280933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10280936 cmp dword ptr [0x102a0834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028093d jne 0x10280962 */
  if (!C.zf) goto L_10280962;
  /* 1028093f call 0x10281400 */
  push32(0x10280944u); f_10281400();
  /* 10280944 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280946 je 0x10280952 */
  if (C.zf) goto L_10280952;
  /* 10280948 mov eax, dword ptr [0x102a329c] */
  EAX = (r32((uint32_t)(0x102a329c)));
  /* 1028094d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10280950 jmp 0x10280959 */
  goto L_10280959;
L_10280952:;
  /* 10280952 mov dword ptr [ebp - 8], 0x10281450 */
  w32((uint32_t)(EBP + -0x8), (0x10281450u));
L_10280959:;
  /* 10280959 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1028095c mov dword ptr [0x102a0834], ecx */
  w32((uint32_t)(0x102a0834), (ECX));
L_10280962:;
  /* 10280962 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280966 jne 0x10280972 */
  if (!C.zf) goto L_10280972;
  /* 10280968 call 0x10281250 */
  push32(0x1028096du); f_10281250();
  /* 1028096d jmp 0x10280a3e */
  goto L_10280a3e;
L_10280972:;
  /* 10280972 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280975 mov dword ptr [0x102a0824], edx */
  w32((uint32_t)(0x102a0824), (EDX));
  /* 1028097b cmp dword ptr [0x102a0824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280982 je 0x102809a4 */
  if (C.zf) goto L_102809a4;
  /* 10280984 mov eax, dword ptr [0x102a0824] */
  EAX = (r32((uint32_t)(0x102a0824)));
  /* 10280989 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1028098c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1028098e je 0x102809a4 */
  if (C.zf) goto L_102809a4;
  /* 10280990 push 0x102a0824 */
  push32((uint32_t)(0x102a0824u));
  /* 10280995 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10280997 push 0x1029fa90 */
  push32((uint32_t)(0x1029fa90u));
  /* 1028099c call 0x10280b30 */
  push32(0x102809a1u); f_10280b30();
  /* 102809a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102809a4:;
  /* 102809a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102809a7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102809aa mov dword ptr [0x102a0828], edx */
  w32((uint32_t)(0x102a0828), (EDX));
  /* 102809b0 cmp dword ptr [0x102a0828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102809b7 je 0x102809d9 */
  if (C.zf) goto L_102809d9;
  /* 102809b9 mov eax, dword ptr [0x102a0828] */
  EAX = (r32((uint32_t)(0x102a0828)));
  /* 102809be movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 102809c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102809c3 je 0x102809d9 */
  if (C.zf) goto L_102809d9;
  /* 102809c5 push 0x102a0828 */
  push32((uint32_t)(0x102a0828u));
  /* 102809ca push 0x16 */
  push32((uint32_t)(0x16u));
  /* 102809cc push 0x1029f9d8 */
  push32((uint32_t)(0x1029f9d8u));
  /* 102809d1 call 0x10280b30 */
  push32(0x102809d6u); f_10280b30();
  /* 102809d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102809d9:;
  /* 102809d9 mov dword ptr [0x102a082c], 0 */
  w32((uint32_t)(0x102a082c), (0x0u));
  /* 102809e3 cmp dword ptr [0x102a0824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102809ea je 0x10280a1d */
  if (C.zf) goto L_10280a1d;
  /* 102809ec mov edx, dword ptr [0x102a0824] */
  EDX = (r32((uint32_t)(0x102a0824)));
  /* 102809f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 102809f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102809f7 je 0x10280a1d */
  if (C.zf) goto L_10280a1d;
  /* 102809f9 cmp dword ptr [0x102a0828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280a00 je 0x10280a16 */
  if (C.zf) goto L_10280a16;
  /* 10280a02 mov ecx, dword ptr [0x102a0828] */
  ECX = (r32((uint32_t)(0x102a0828)));
  /* 10280a08 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10280a0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10280a0d je 0x10280a16 */
  if (C.zf) goto L_10280a16;
  /* 10280a0f call 0x10280bc0 */
  push32(0x10280a14u); f_10280bc0();
  /* 10280a14 jmp 0x10280a1b */
  goto L_10280a1b;
L_10280a16:;
  /* 10280a16 call 0x10280fb0 */
  push32(0x10280a1bu); f_10280fb0();
L_10280a1b:;
  /* 10280a1b jmp 0x10280a3e */
  goto L_10280a3e;
L_10280a1d:;
  /* 10280a1d cmp dword ptr [0x102a0828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280a24 je 0x10280a39 */
  if (C.zf) goto L_10280a39;
  /* 10280a26 mov eax, dword ptr [0x102a0828] */
  EAX = (r32((uint32_t)(0x102a0828)));
  /* 10280a2b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10280a2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10280a30 je 0x10280a39 */
  if (C.zf) goto L_10280a39;
  /* 10280a32 call 0x10281150 */
  push32(0x10280a37u); f_10281150();
  /* 10280a37 jmp 0x10280a3e */
  goto L_10280a3e;
L_10280a39:;
  /* 10280a39 call 0x10281250 */
  push32(0x10280a3eu); f_10281250();
L_10280a3e:;
  /* 10280a3e cmp dword ptr [0x102a082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280a45 jne 0x10280a4e */
  if (!C.zf) goto L_10280a4e;
  /* 10280a47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10280a49 jmp 0x10280b2c */
  goto L_10280b2c;
L_10280a4e:;
  /* 10280a4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280a51 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280a57 push edx */
  push32((uint32_t)(EDX));
  /* 10280a58 call 0x10281280 */
  push32(0x10280a5du); f_10281280();
  /* 10280a5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280a60 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10280a63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280a67 je 0x10280a7c */
  if (C.zf) goto L_10280a7c;
  /* 10280a69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280a6c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10280a71 push eax */
  push32((uint32_t)(EAX));
  /* 10280a72 call dword ptr [0x102a32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32a0))), 0x10280a78u);
  /* 10280a78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280a7a jne 0x10280a83 */
  if (!C.zf) goto L_10280a83;
L_10280a7c:;
  /* 10280a7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10280a7e jmp 0x10280b2c */
  goto L_10280b2c;
L_10280a83:;
  /* 10280a83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10280a85 mov ecx, dword ptr [0x102a0814] */
  ECX = (r32((uint32_t)(0x102a0814)));
  /* 10280a8b push ecx */
  push32((uint32_t)(ECX));
  /* 10280a8c call dword ptr [0x102a32b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32b0))), 0x10280a92u);
  /* 10280a92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280a94 jne 0x10280a9d */
  if (!C.zf) goto L_10280a9d;
  /* 10280a96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10280a98 jmp 0x10280b2c */
  goto L_10280b2c;
L_10280a9d:;
  /* 10280a9d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280aa1 je 0x10280ac8 */
  if (C.zf) goto L_10280ac8;
  /* 10280aa3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10280aa6 mov ax, word ptr [0x102a0814] */
  AX = (r16((uint32_t)(0x102a0814)));
  /* 10280aac mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10280aaf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10280ab2 mov dx, word ptr [0x102a0830] */
  DX = (r16((uint32_t)(0x102a0830)));
  /* 10280ab9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10280abd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10280ac0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10280ac4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10280ac8:;
  /* 10280ac8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280acc je 0x10280b27 */
  if (C.zf) goto L_10280b27;
  /* 10280ace push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10280ad0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10280ad3 push edx */
  push32((uint32_t)(EDX));
  /* 10280ad4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10280ad9 mov eax, dword ptr [0x102a0814] */
  EAX = (r32((uint32_t)(0x102a0814)));
  /* 10280ade push eax */
  push32((uint32_t)(EAX));
  /* 10280adf call dword ptr [0x102a0834] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a0834))), 0x10280ae5u);
  /* 10280ae5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280ae7 jne 0x10280aed */
  if (!C.zf) goto L_10280aed;
  /* 10280ae9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10280aeb jmp 0x10280b2c */
  goto L_10280b2c;
L_10280aed:;
  /* 10280aed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10280aef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10280af2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280af5 push ecx */
  push32((uint32_t)(ECX));
  /* 10280af6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10280afb mov edx, dword ptr [0x102a0830] */
  EDX = (r32((uint32_t)(0x102a0830)));
  /* 10280b01 push edx */
  push32((uint32_t)(EDX));
  /* 10280b02 call dword ptr [0x102a0834] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a0834))), 0x10280b08u);
  /* 10280b08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280b0a jne 0x10280b10 */
  if (!C.zf) goto L_10280b10;
  /* 10280b0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10280b0e jmp 0x10280b2c */
  goto L_10280b2c;
L_10280b10:;
  /* 10280b10 push 0xa */
  push32((uint32_t)(0xau));
  /* 10280b12 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10280b15 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280b1a push eax */
  push32((uint32_t)(EAX));
  /* 10280b1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280b1e push ecx */
  push32((uint32_t)(ECX));
  /* 10280b1f call 0x10277690 */
  push32(0x10280b24u); f_10277690();
  /* 10280b24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10280b27:;
  /* 10280b27 mov eax, 1 */
  EAX = (0x1u);
L_10280b2c:;
  /* 10280b2c mov esp, ebp */
  ESP = (EBP);
  /* 10280b2e pop ebp */
  EBP = (pop32());
  /* 10280b2f ret  */
  ESPCHK(0x10280930u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b30 @ 0x10280b30 (130 bytes, 47 insns) */
void f_10280b30(void) {
  FTRACE(0x10280b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10280b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10280b31 mov ebp, esp */
  EBP = (ESP);
  /* 10280b33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10280b36 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10280b3d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10280b44:;
  /* 10280b44 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10280b47 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280b4a jg 0x10280bae */
  if ((!C.zf&&C.sf==C.of)) goto L_10280bae;
  /* 10280b4c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280b50 je 0x10280bae */
  if (C.zf) goto L_10280bae;
  /* 10280b52 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10280b55 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280b58 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10280b59 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10280b5b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10280b5d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10280b60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280b63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280b66 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10280b69 push eax */
  push32((uint32_t)(EAX));
  /* 10280b6a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10280b6d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10280b6f push edx */
  push32((uint32_t)(EDX));
  /* 10280b70 call 0x10283220 */
  push32(0x10280b75u); f_10283220();
  /* 10280b75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280b78 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10280b7b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280b7f jne 0x10280b92 */
  if (!C.zf) goto L_10280b92;
  /* 10280b81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280b84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280b87 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10280b8b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10280b8e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10280b90 jmp 0x10280bac */
  goto L_10280bac;
L_10280b92:;
  /* 10280b92 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280b96 jge 0x10280ba3 */
  if ((C.sf==C.of)) goto L_10280ba3;
  /* 10280b98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280b9b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10280b9e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10280ba1 jmp 0x10280bac */
  goto L_10280bac;
L_10280ba3:;
  /* 10280ba3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280ba6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280ba9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10280bac:;
  /* 10280bac jmp 0x10280b44 */
  goto L_10280b44;
L_10280bae:;
  /* 10280bae mov esp, ebp */
  ESP = (EBP);
  /* 10280bb0 pop ebp */
  EBP = (pop32());
  /* 10280bb1 ret  */
  ESPCHK(0x10280b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bc0 @ 0x10280bc0 (186 bytes, 50 insns) */
void f_10280bc0(void) {
  FTRACE(0x10280bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10280bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10280bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10280bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10280bc4 mov eax, dword ptr [0x102a0824] */
  EAX = (r32((uint32_t)(0x102a0824)));
  /* 10280bc9 push eax */
  push32((uint32_t)(EAX));
  /* 10280bca call 0x10277980 */
  push32(0x10280bcfu); f_10277980();
  /* 10280bcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280bd2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10280bd4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280bd7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10280bda mov dword ptr [0x102a0820], ecx */
  w32((uint32_t)(0x102a0820), (ECX));
  /* 10280be0 mov edx, dword ptr [0x102a0828] */
  EDX = (r32((uint32_t)(0x102a0828)));
  /* 10280be6 push edx */
  push32((uint32_t)(EDX));
  /* 10280be7 call 0x10277980 */
  push32(0x10280becu); f_10277980();
  /* 10280bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280bef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10280bf1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280bf4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10280bf7 mov dword ptr [0x102a0818], ecx */
  w32((uint32_t)(0x102a0818), (ECX));
  /* 10280bfd mov dword ptr [0x102a0814], 0 */
  w32((uint32_t)(0x102a0814), (0x0u));
  /* 10280c07 cmp dword ptr [0x102a0820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280c0e je 0x10280c19 */
  if (C.zf) goto L_10280c19;
  /* 10280c10 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10280c17 jmp 0x10280c2b */
  goto L_10280c2b;
L_10280c19:;
  /* 10280c19 mov edx, dword ptr [0x102a0824] */
  EDX = (r32((uint32_t)(0x102a0824)));
  /* 10280c1f push edx */
  push32((uint32_t)(EDX));
  /* 10280c20 call 0x10281660 */
  push32(0x10280c25u); f_10281660();
  /* 10280c25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280c28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10280c2b:;
  /* 10280c2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280c2e mov dword ptr [0x102a081c], eax */
  w32((uint32_t)(0x102a081c), (EAX));
  /* 10280c33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10280c35 push 0x10280c80 */
  push32((uint32_t)(0x10280c80u));
  /* 10280c3a call dword ptr [0x102a32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32a4))), 0x10280c40u);
  /* 10280c40 mov ecx, dword ptr [0x102a082c] */
  ECX = (r32((uint32_t)(0x102a082c)));
  /* 10280c46 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10280c4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10280c4e je 0x10280c6c */
  if (C.zf) goto L_10280c6c;
  /* 10280c50 mov edx, dword ptr [0x102a082c] */
  EDX = (r32((uint32_t)(0x102a082c)));
  /* 10280c56 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10280c5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10280c5e je 0x10280c6c */
  if (C.zf) goto L_10280c6c;
  /* 10280c60 mov eax, dword ptr [0x102a082c] */
  EAX = (r32((uint32_t)(0x102a082c)));
  /* 10280c65 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10280c68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280c6a jne 0x10280c76 */
  if (!C.zf) goto L_10280c76;
L_10280c6c:;
  /* 10280c6c mov dword ptr [0x102a082c], 0 */
  w32((uint32_t)(0x102a082c), (0x0u));
L_10280c76:;
  /* 10280c76 mov esp, ebp */
  ESP = (EBP);
  /* 10280c78 pop ebp */
  EBP = (pop32());
  /* 10280c79 ret  */
  ESPCHK(0x10280bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c80 @ 0x10280c80 (804 bytes, 220 insns) */
void f_10280c80(void) {
  FTRACE(0x10280c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10280c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10280c81 mov ebp, esp */
  EBP = (ESP);
  /* 10280c83 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10280c86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10280c89 push eax */
  push32((uint32_t)(EAX));
  /* 10280c8a call 0x102815e0 */
  push32(0x10280c8fu); f_102815e0();
  /* 10280c8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280c92 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10280c95 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10280c97 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10280c9a push ecx */
  push32((uint32_t)(ECX));
  /* 10280c9b mov edx, dword ptr [0x102a0818] */
  EDX = (r32((uint32_t)(0x102a0818)));
  /* 10280ca1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10280ca3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10280ca5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10280cab add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280cb1 push edx */
  push32((uint32_t)(EDX));
  /* 10280cb2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10280cb5 push eax */
  push32((uint32_t)(EAX));
  /* 10280cb6 call dword ptr [0x102a0834] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a0834))), 0x10280cbcu);
  /* 10280cbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280cbe jne 0x10280cd4 */
  if (!C.zf) goto L_10280cd4;
  /* 10280cc0 mov dword ptr [0x102a082c], 0 */
  w32((uint32_t)(0x102a082c), (0x0u));
  /* 10280cca mov eax, 1 */
  EAX = (0x1u);
  /* 10280ccf jmp 0x10280f9e */
  goto L_10280f9e;
L_10280cd4:;
  /* 10280cd4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10280cd7 push ecx */
  push32((uint32_t)(ECX));
  /* 10280cd8 mov edx, dword ptr [0x102a0828] */
  EDX = (r32((uint32_t)(0x102a0828)));
  /* 10280cde push edx */
  push32((uint32_t)(EDX));
  /* 10280cdf call 0x10283220 */
  push32(0x10280ce4u); f_10283220();
  /* 10280ce4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280ce7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280ce9 jne 0x10280e0f */
  if (!C.zf) goto L_10280e0f;
  /* 10280cef push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10280cf1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10280cf4 push eax */
  push32((uint32_t)(EAX));
  /* 10280cf5 mov ecx, dword ptr [0x102a0820] */
  ECX = (r32((uint32_t)(0x102a0820)));
  /* 10280cfb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10280cfd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10280cff and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10280d05 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280d0b push ecx */
  push32((uint32_t)(ECX));
  /* 10280d0c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10280d0f push edx */
  push32((uint32_t)(EDX));
  /* 10280d10 call dword ptr [0x102a0834] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a0834))), 0x10280d16u);
  /* 10280d16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280d18 jne 0x10280d2e */
  if (!C.zf) goto L_10280d2e;
  /* 10280d1a mov dword ptr [0x102a082c], 0 */
  w32((uint32_t)(0x102a082c), (0x0u));
  /* 10280d24 mov eax, 1 */
  EAX = (0x1u);
  /* 10280d29 jmp 0x10280f9e */
  goto L_10280f9e;
L_10280d2e:;
  /* 10280d2e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10280d31 push eax */
  push32((uint32_t)(EAX));
  /* 10280d32 mov ecx, dword ptr [0x102a0824] */
  ECX = (r32((uint32_t)(0x102a0824)));
  /* 10280d38 push ecx */
  push32((uint32_t)(ECX));
  /* 10280d39 call 0x10283220 */
  push32(0x10280d3eu); f_10283220();
  /* 10280d3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280d41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280d43 jne 0x10280d70 */
  if (!C.zf) goto L_10280d70;
  /* 10280d45 mov edx, dword ptr [0x102a082c] */
  EDX = (r32((uint32_t)(0x102a082c)));
  /* 10280d4b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10280d51 mov dword ptr [0x102a082c], edx */
  w32((uint32_t)(0x102a082c), (EDX));
  /* 10280d57 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10280d5a mov dword ptr [0x102a0830], eax */
  w32((uint32_t)(0x102a0830), (EAX));
  /* 10280d5f mov ecx, dword ptr [0x102a0830] */
  ECX = (r32((uint32_t)(0x102a0830)));
  /* 10280d65 mov dword ptr [0x102a0814], ecx */
  w32((uint32_t)(0x102a0814), (ECX));
  /* 10280d6b jmp 0x10280e0f */
  goto L_10280e0f;
L_10280d70:;
  /* 10280d70 mov edx, dword ptr [0x102a082c] */
  EDX = (r32((uint32_t)(0x102a082c)));
  /* 10280d76 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10280d79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10280d7b jne 0x10280e0f */
  if (!C.zf) goto L_10280e0f;
  /* 10280d81 cmp dword ptr [0x102a081c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a081c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280d88 je 0x10280ddd */
  if (C.zf) goto L_10280ddd;
  /* 10280d8a mov eax, dword ptr [0x102a081c] */
  EAX = (r32((uint32_t)(0x102a081c)));
  /* 10280d8f push eax */
  push32((uint32_t)(EAX));
  /* 10280d90 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10280d93 push ecx */
  push32((uint32_t)(ECX));
  /* 10280d94 mov edx, dword ptr [0x102a0824] */
  EDX = (r32((uint32_t)(0x102a0824)));
  /* 10280d9a push edx */
  push32((uint32_t)(EDX));
  /* 10280d9b call 0x102832f0 */
  push32(0x10280da0u); f_102832f0();
  /* 10280da0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280da3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280da5 jne 0x10280ddd */
  if (!C.zf) goto L_10280ddd;
  /* 10280da7 mov eax, dword ptr [0x102a082c] */
  EAX = (r32((uint32_t)(0x102a082c)));
  /* 10280dac or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10280dae mov dword ptr [0x102a082c], eax */
  w32((uint32_t)(0x102a082c), (EAX));
  /* 10280db3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10280db6 mov dword ptr [0x102a0830], ecx */
  w32((uint32_t)(0x102a0830), (ECX));
  /* 10280dbc mov edx, dword ptr [0x102a0824] */
  EDX = (r32((uint32_t)(0x102a0824)));
  /* 10280dc2 push edx */
  push32((uint32_t)(EDX));
  /* 10280dc3 call 0x10277980 */
  push32(0x10280dc8u); f_10277980();
  /* 10280dc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280dcb cmp eax, dword ptr [0x102a081c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102a081c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280dd1 jne 0x10280ddb */
  if (!C.zf) goto L_10280ddb;
  /* 10280dd3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10280dd6 mov dword ptr [0x102a0814], eax */
  w32((uint32_t)(0x102a0814), (EAX));
L_10280ddb:;
  /* 10280ddb jmp 0x10280e0f */
  goto L_10280e0f;
L_10280ddd:;
  /* 10280ddd mov ecx, dword ptr [0x102a082c] */
  ECX = (r32((uint32_t)(0x102a082c)));
  /* 10280de3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10280de6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10280de8 jne 0x10280e0f */
  if (!C.zf) goto L_10280e0f;
  /* 10280dea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10280ded push edx */
  push32((uint32_t)(EDX));
  /* 10280dee call 0x10281320 */
  push32(0x10280df3u); f_10281320();
  /* 10280df3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280df6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280df8 je 0x10280e0f */
  if (C.zf) goto L_10280e0f;
  /* 10280dfa mov eax, dword ptr [0x102a082c] */
  EAX = (r32((uint32_t)(0x102a082c)));
  /* 10280dff or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10280e01 mov dword ptr [0x102a082c], eax */
  w32((uint32_t)(0x102a082c), (EAX));
  /* 10280e06 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10280e09 mov dword ptr [0x102a0830], ecx */
  w32((uint32_t)(0x102a0830), (ECX));
L_10280e0f:;
  /* 10280e0f mov edx, dword ptr [0x102a082c] */
  EDX = (r32((uint32_t)(0x102a082c)));
  /* 10280e15 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10280e1b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280e21 je 0x10280f91 */
  if (C.zf) goto L_10280f91;
  /* 10280e27 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10280e29 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10280e2c push eax */
  push32((uint32_t)(EAX));
  /* 10280e2d mov ecx, dword ptr [0x102a0820] */
  ECX = (r32((uint32_t)(0x102a0820)));
  /* 10280e33 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10280e35 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10280e37 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10280e3d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10280e43 push ecx */
  push32((uint32_t)(ECX));
  /* 10280e44 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10280e47 push edx */
  push32((uint32_t)(EDX));
  /* 10280e48 call dword ptr [0x102a0834] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a0834))), 0x10280e4eu);
  /* 10280e4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280e50 jne 0x10280e66 */
  if (!C.zf) goto L_10280e66;
  /* 10280e52 mov dword ptr [0x102a082c], 0 */
  w32((uint32_t)(0x102a082c), (0x0u));
  /* 10280e5c mov eax, 1 */
  EAX = (0x1u);
  /* 10280e61 jmp 0x10280f9e */
  goto L_10280f9e;
L_10280e66:;
  /* 10280e66 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10280e69 push eax */
  push32((uint32_t)(EAX));
  /* 10280e6a mov ecx, dword ptr [0x102a0824] */
  ECX = (r32((uint32_t)(0x102a0824)));
  /* 10280e70 push ecx */
  push32((uint32_t)(ECX));
  /* 10280e71 call 0x10283220 */
  push32(0x10280e76u); f_10283220();
  /* 10280e76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280e79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280e7b jne 0x10280f30 */
  if (!C.zf) goto L_10280f30;
  /* 10280e81 mov edx, dword ptr [0x102a082c] */
  EDX = (r32((uint32_t)(0x102a082c)));
  /* 10280e87 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10280e8a mov dword ptr [0x102a082c], edx */
  w32((uint32_t)(0x102a082c), (EDX));
  /* 10280e90 cmp dword ptr [0x102a0820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280e97 je 0x10280eba */
  if (C.zf) goto L_10280eba;
  /* 10280e99 mov eax, dword ptr [0x102a082c] */
  EAX = (r32((uint32_t)(0x102a082c)));
  /* 10280e9e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10280ea1 mov dword ptr [0x102a082c], eax */
  w32((uint32_t)(0x102a082c), (EAX));
  /* 10280ea6 cmp dword ptr [0x102a0814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280ead jne 0x10280eb8 */
  if (!C.zf) goto L_10280eb8;
  /* 10280eaf mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10280eb2 mov dword ptr [0x102a0814], ecx */
  w32((uint32_t)(0x102a0814), (ECX));
L_10280eb8:;
  /* 10280eb8 jmp 0x10280f2e */
  goto L_10280f2e;
L_10280eba:;
  /* 10280eba cmp dword ptr [0x102a081c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a081c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280ec1 je 0x10280f0f */
  if (C.zf) goto L_10280f0f;
  /* 10280ec3 mov edx, dword ptr [0x102a0824] */
  EDX = (r32((uint32_t)(0x102a0824)));
  /* 10280ec9 push edx */
  push32((uint32_t)(EDX));
  /* 10280eca call 0x10277980 */
  push32(0x10280ecfu); f_10277980();
  /* 10280ecf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280ed2 cmp eax, dword ptr [0x102a081c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102a081c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280ed8 jne 0x10280f0f */
  if (!C.zf) goto L_10280f0f;
  /* 10280eda push 1 */
  push32((uint32_t)(0x1u));
  /* 10280edc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10280edf push eax */
  push32((uint32_t)(EAX));
  /* 10280ee0 call 0x10281370 */
  push32(0x10280ee5u); f_10281370();
  /* 10280ee5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280ee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280eea je 0x10280f0d */
  if (C.zf) goto L_10280f0d;
  /* 10280eec mov ecx, dword ptr [0x102a082c] */
  ECX = (r32((uint32_t)(0x102a082c)));
  /* 10280ef2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10280ef5 mov dword ptr [0x102a082c], ecx */
  w32((uint32_t)(0x102a082c), (ECX));
  /* 10280efb cmp dword ptr [0x102a0814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280f02 jne 0x10280f0d */
  if (!C.zf) goto L_10280f0d;
  /* 10280f04 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10280f07 mov dword ptr [0x102a0814], edx */
  w32((uint32_t)(0x102a0814), (EDX));
L_10280f0d:;
  /* 10280f0d jmp 0x10280f2e */
  goto L_10280f2e;
L_10280f0f:;
  /* 10280f0f mov eax, dword ptr [0x102a082c] */
  EAX = (r32((uint32_t)(0x102a082c)));
  /* 10280f14 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10280f17 mov dword ptr [0x102a082c], eax */
  w32((uint32_t)(0x102a082c), (EAX));
  /* 10280f1c cmp dword ptr [0x102a0814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280f23 jne 0x10280f2e */
  if (!C.zf) goto L_10280f2e;
  /* 10280f25 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10280f28 mov dword ptr [0x102a0814], ecx */
  w32((uint32_t)(0x102a0814), (ECX));
L_10280f2e:;
  /* 10280f2e jmp 0x10280f91 */
  goto L_10280f91;
L_10280f30:;
  /* 10280f30 cmp dword ptr [0x102a0820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280f37 jne 0x10280f91 */
  if (!C.zf) goto L_10280f91;
  /* 10280f39 cmp dword ptr [0x102a081c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a081c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280f40 je 0x10280f91 */
  if (C.zf) goto L_10280f91;
  /* 10280f42 mov edx, dword ptr [0x102a081c] */
  EDX = (r32((uint32_t)(0x102a081c)));
  /* 10280f48 push edx */
  push32((uint32_t)(EDX));
  /* 10280f49 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10280f4c push eax */
  push32((uint32_t)(EAX));
  /* 10280f4d mov ecx, dword ptr [0x102a0824] */
  ECX = (r32((uint32_t)(0x102a0824)));
  /* 10280f53 push ecx */
  push32((uint32_t)(ECX));
  /* 10280f54 call 0x102832f0 */
  push32(0x10280f59u); f_102832f0();
  /* 10280f59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280f5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280f5e jne 0x10280f91 */
  if (!C.zf) goto L_10280f91;
  /* 10280f60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10280f62 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10280f65 push edx */
  push32((uint32_t)(EDX));
  /* 10280f66 call 0x10281370 */
  push32(0x10280f6bu); f_10281370();
  /* 10280f6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280f6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10280f70 je 0x10280f91 */
  if (C.zf) goto L_10280f91;
  /* 10280f72 mov eax, dword ptr [0x102a082c] */
  EAX = (r32((uint32_t)(0x102a082c)));
  /* 10280f77 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10280f7a mov dword ptr [0x102a082c], eax */
  w32((uint32_t)(0x102a082c), (EAX));
  /* 10280f7f cmp dword ptr [0x102a0814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280f86 jne 0x10280f91 */
  if (!C.zf) goto L_10280f91;
  /* 10280f88 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10280f8b mov dword ptr [0x102a0814], ecx */
  w32((uint32_t)(0x102a0814), (ECX));
L_10280f91:;
  /* 10280f91 mov eax, dword ptr [0x102a082c] */
  EAX = (r32((uint32_t)(0x102a082c)));
  /* 10280f96 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10280f99 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10280f9b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10280f9d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10280f9e:;
  /* 10280f9e mov esp, ebp */
  ESP = (EBP);
  /* 10280fa0 pop ebp */
  EBP = (pop32());
  /* 10280fa1 ret 4 */
  ESPCHK(0x10280c80u, _esp0);
  ESP += 8; return;
}

/* FUN_10010fb0 @ 0x10280fb0 (116 bytes, 33 insns) */
void f_10280fb0(void) {
  FTRACE(0x10280fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10280fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10280fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10280fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10280fb4 mov eax, dword ptr [0x102a0824] */
  EAX = (r32((uint32_t)(0x102a0824)));
  /* 10280fb9 push eax */
  push32((uint32_t)(EAX));
  /* 10280fba call 0x10277980 */
  push32(0x10280fbfu); f_10277980();
  /* 10280fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280fc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10280fc4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280fc7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10280fca mov dword ptr [0x102a0820], ecx */
  w32((uint32_t)(0x102a0820), (ECX));
  /* 10280fd0 cmp dword ptr [0x102a0820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10280fd7 je 0x10280fe2 */
  if (C.zf) goto L_10280fe2;
  /* 10280fd9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10280fe0 jmp 0x10280ff4 */
  goto L_10280ff4;
L_10280fe2:;
  /* 10280fe2 mov edx, dword ptr [0x102a0824] */
  EDX = (r32((uint32_t)(0x102a0824)));
  /* 10280fe8 push edx */
  push32((uint32_t)(EDX));
  /* 10280fe9 call 0x10281660 */
  push32(0x10280feeu); f_10281660();
  /* 10280fee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10280ff1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10280ff4:;
  /* 10280ff4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10280ff7 mov dword ptr [0x102a081c], eax */
  w32((uint32_t)(0x102a081c), (EAX));
  /* 10280ffc push 1 */
  push32((uint32_t)(0x1u));
  /* 10280ffe push 0x10281030 */
  push32((uint32_t)(0x10281030u));
  /* 10281003 call dword ptr [0x102a32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32a4))), 0x10281009u);
  /* 10281009 mov ecx, dword ptr [0x102a082c] */
  ECX = (r32((uint32_t)(0x102a082c)));
  /* 1028100f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10281012 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10281014 jne 0x10281020 */
  if (!C.zf) goto L_10281020;
  /* 10281016 mov dword ptr [0x102a082c], 0 */
  w32((uint32_t)(0x102a082c), (0x0u));
L_10281020:;
  /* 10281020 mov esp, ebp */
  ESP = (EBP);
  /* 10281022 pop ebp */
  EBP = (pop32());
  /* 10281023 ret  */
  ESPCHK(0x10280fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011030 @ 0x10281030 (287 bytes, 86 insns) */
void f_10281030(void) {
  FTRACE(0x10281030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10281030 push ebp */
  push32((uint32_t)(EBP));
  /* 10281031 mov ebp, esp */
  EBP = (ESP);
  /* 10281033 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10281036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10281039 push eax */
  push32((uint32_t)(EAX));
  /* 1028103a call 0x102815e0 */
  push32(0x1028103fu); f_102815e0();
  /* 1028103f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281042 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10281045 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10281047 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1028104a push ecx */
  push32((uint32_t)(ECX));
  /* 1028104b mov edx, dword ptr [0x102a0820] */
  EDX = (r32((uint32_t)(0x102a0820)));
  /* 10281051 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10281053 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10281055 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1028105b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281061 push edx */
  push32((uint32_t)(EDX));
  /* 10281062 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10281065 push eax */
  push32((uint32_t)(EAX));
  /* 10281066 call dword ptr [0x102a0834] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a0834))), 0x1028106cu);
  /* 1028106c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1028106e jne 0x10281084 */
  if (!C.zf) goto L_10281084;
  /* 10281070 mov dword ptr [0x102a082c], 0 */
  w32((uint32_t)(0x102a082c), (0x0u));
  /* 1028107a mov eax, 1 */
  EAX = (0x1u);
  /* 1028107f jmp 0x10281149 */
  goto L_10281149;
L_10281084:;
  /* 10281084 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10281087 push ecx */
  push32((uint32_t)(ECX));
  /* 10281088 mov edx, dword ptr [0x102a0824] */
  EDX = (r32((uint32_t)(0x102a0824)));
  /* 1028108e push edx */
  push32((uint32_t)(EDX));
  /* 1028108f call 0x10283220 */
  push32(0x10281094u); f_10283220();
  /* 10281094 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10281099 jne 0x102810d9 */
  if (!C.zf) goto L_102810d9;
  /* 1028109b cmp dword ptr [0x102a0820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102810a2 jne 0x102810b6 */
  if (!C.zf) goto L_102810b6;
  /* 102810a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 102810a6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 102810a9 push eax */
  push32((uint32_t)(EAX));
  /* 102810aa call 0x10281370 */
  push32(0x102810afu); f_10281370();
  /* 102810af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102810b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102810b4 je 0x102810d7 */
  if (C.zf) goto L_102810d7;
L_102810b6:;
  /* 102810b6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 102810b9 mov dword ptr [0x102a0830], ecx */
  w32((uint32_t)(0x102a0830), (ECX));
  /* 102810bf mov edx, dword ptr [0x102a0830] */
  EDX = (r32((uint32_t)(0x102a0830)));
  /* 102810c5 mov dword ptr [0x102a0814], edx */
  w32((uint32_t)(0x102a0814), (EDX));
  /* 102810cb mov eax, dword ptr [0x102a082c] */
  EAX = (r32((uint32_t)(0x102a082c)));
  /* 102810d0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 102810d2 mov dword ptr [0x102a082c], eax */
  w32((uint32_t)(0x102a082c), (EAX));
L_102810d7:;
  /* 102810d7 jmp 0x1028113c */
  goto L_1028113c;
L_102810d9:;
  /* 102810d9 cmp dword ptr [0x102a0820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102810e0 jne 0x1028113c */
  if (!C.zf) goto L_1028113c;
  /* 102810e2 cmp dword ptr [0x102a081c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a081c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102810e9 je 0x1028113c */
  if (C.zf) goto L_1028113c;
  /* 102810eb mov ecx, dword ptr [0x102a081c] */
  ECX = (r32((uint32_t)(0x102a081c)));
  /* 102810f1 push ecx */
  push32((uint32_t)(ECX));
  /* 102810f2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 102810f5 push edx */
  push32((uint32_t)(EDX));
  /* 102810f6 mov eax, dword ptr [0x102a0824] */
  EAX = (r32((uint32_t)(0x102a0824)));
  /* 102810fb push eax */
  push32((uint32_t)(EAX));
  /* 102810fc call 0x102832f0 */
  push32(0x10281101u); f_102832f0();
  /* 10281101 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10281106 jne 0x1028113c */
  if (!C.zf) goto L_1028113c;
  /* 10281108 push 0 */
  push32((uint32_t)(0x0u));
  /* 1028110a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1028110d push ecx */
  push32((uint32_t)(ECX));
  /* 1028110e call 0x10281370 */
  push32(0x10281113u); f_10281370();
  /* 10281113 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281116 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10281118 je 0x1028113c */
  if (C.zf) goto L_1028113c;
  /* 1028111a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1028111d mov dword ptr [0x102a0830], edx */
  w32((uint32_t)(0x102a0830), (EDX));
  /* 10281123 mov eax, dword ptr [0x102a0830] */
  EAX = (r32((uint32_t)(0x102a0830)));
  /* 10281128 mov dword ptr [0x102a0814], eax */
  w32((uint32_t)(0x102a0814), (EAX));
  /* 1028112d mov ecx, dword ptr [0x102a082c] */
  ECX = (r32((uint32_t)(0x102a082c)));
  /* 10281133 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10281136 mov dword ptr [0x102a082c], ecx */
  w32((uint32_t)(0x102a082c), (ECX));
L_1028113c:;
  /* 1028113c mov eax, dword ptr [0x102a082c] */
  EAX = (r32((uint32_t)(0x102a082c)));
  /* 10281141 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10281144 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10281146 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10281148 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10281149:;
  /* 10281149 mov esp, ebp */
  ESP = (EBP);
  /* 1028114b pop ebp */
  EBP = (pop32());
  /* 1028114c ret 4 */
  ESPCHK(0x10281030u, _esp0);
  ESP += 8; return;
}

/* FUN_10011150 @ 0x10281150 (69 bytes, 20 insns) */
void f_10281150(void) {
  FTRACE(0x10281150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10281150 push ebp */
  push32((uint32_t)(EBP));
  /* 10281151 mov ebp, esp */
  EBP = (ESP);
  /* 10281153 mov eax, dword ptr [0x102a0828] */
  EAX = (r32((uint32_t)(0x102a0828)));
  /* 10281158 push eax */
  push32((uint32_t)(EAX));
  /* 10281159 call 0x10277980 */
  push32(0x1028115eu); f_10277980();
  /* 1028115e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281161 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10281163 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281166 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10281169 mov dword ptr [0x102a0818], ecx */
  w32((uint32_t)(0x102a0818), (ECX));
  /* 1028116f push 1 */
  push32((uint32_t)(0x1u));
  /* 10281171 push 0x102811a0 */
  push32((uint32_t)(0x102811a0u));
  /* 10281176 call dword ptr [0x102a32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32a4))), 0x1028117cu);
  /* 1028117c mov edx, dword ptr [0x102a082c] */
  EDX = (r32((uint32_t)(0x102a082c)));
  /* 10281182 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10281185 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10281187 jne 0x10281193 */
  if (!C.zf) goto L_10281193;
  /* 10281189 mov dword ptr [0x102a082c], 0 */
  w32((uint32_t)(0x102a082c), (0x0u));
L_10281193:;
  /* 10281193 pop ebp */
  EBP = (pop32());
  /* 10281194 ret  */
  ESPCHK(0x10281150u, _esp0);
  ESP += 4; return;
}

/* FUN_100111a0 @ 0x102811a0 (172 bytes, 54 insns) */
void f_102811a0(void) {
  FTRACE(0x102811a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102811a0 push ebp */
  push32((uint32_t)(EBP));
  /* 102811a1 mov ebp, esp */
  EBP = (ESP);
  /* 102811a3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102811a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102811a9 push eax */
  push32((uint32_t)(EAX));
  /* 102811aa call 0x102815e0 */
  push32(0x102811afu); f_102815e0();
  /* 102811af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102811b2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 102811b5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 102811b7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 102811ba push ecx */
  push32((uint32_t)(ECX));
  /* 102811bb mov edx, dword ptr [0x102a0818] */
  EDX = (r32((uint32_t)(0x102a0818)));
  /* 102811c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 102811c3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102811c5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 102811cb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102811d1 push edx */
  push32((uint32_t)(EDX));
  /* 102811d2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 102811d5 push eax */
  push32((uint32_t)(EAX));
  /* 102811d6 call dword ptr [0x102a0834] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a0834))), 0x102811dcu);
  /* 102811dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102811de jne 0x102811f1 */
  if (!C.zf) goto L_102811f1;
  /* 102811e0 mov dword ptr [0x102a082c], 0 */
  w32((uint32_t)(0x102a082c), (0x0u));
  /* 102811ea mov eax, 1 */
  EAX = (0x1u);
  /* 102811ef jmp 0x10281246 */
  goto L_10281246;
L_102811f1:;
  /* 102811f1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 102811f4 push ecx */
  push32((uint32_t)(ECX));
  /* 102811f5 mov edx, dword ptr [0x102a0828] */
  EDX = (r32((uint32_t)(0x102a0828)));
  /* 102811fb push edx */
  push32((uint32_t)(EDX));
  /* 102811fc call 0x10283220 */
  push32(0x10281201u); f_10283220();
  /* 10281201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10281206 jne 0x10281239 */
  if (!C.zf) goto L_10281239;
  /* 10281208 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1028120b push eax */
  push32((uint32_t)(EAX));
  /* 1028120c call 0x10281320 */
  push32(0x10281211u); f_10281320();
  /* 10281211 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10281216 je 0x10281239 */
  if (C.zf) goto L_10281239;
  /* 10281218 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1028121b mov dword ptr [0x102a0830], ecx */
  w32((uint32_t)(0x102a0830), (ECX));
  /* 10281221 mov edx, dword ptr [0x102a0830] */
  EDX = (r32((uint32_t)(0x102a0830)));
  /* 10281227 mov dword ptr [0x102a0814], edx */
  w32((uint32_t)(0x102a0814), (EDX));
  /* 1028122d mov eax, dword ptr [0x102a082c] */
  EAX = (r32((uint32_t)(0x102a082c)));
  /* 10281232 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10281234 mov dword ptr [0x102a082c], eax */
  w32((uint32_t)(0x102a082c), (EAX));
L_10281239:;
  /* 10281239 mov eax, dword ptr [0x102a082c] */
  EAX = (r32((uint32_t)(0x102a082c)));
  /* 1028123e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10281241 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10281243 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10281245 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10281246:;
  /* 10281246 mov esp, ebp */
  ESP = (EBP);
  /* 10281248 pop ebp */
  EBP = (pop32());
  /* 10281249 ret 4 */
  ESPCHK(0x102811a0u, _esp0);
  ESP += 8; return;
}

/* FUN_10011250 @ 0x10281250 (43 bytes, 11 insns) */
void f_10281250(void) {
  FTRACE(0x10281250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10281250 push ebp */
  push32((uint32_t)(EBP));
  /* 10281251 mov ebp, esp */
  EBP = (ESP);
  /* 10281253 mov eax, dword ptr [0x102a082c] */
  EAX = (r32((uint32_t)(0x102a082c)));
  /* 10281258 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1028125d mov dword ptr [0x102a082c], eax */
  w32((uint32_t)(0x102a082c), (EAX));
  /* 10281262 call dword ptr [0x102a3294] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3294))), 0x10281268u);
  /* 10281268 mov dword ptr [0x102a0830], eax */
  w32((uint32_t)(0x102a0830), (EAX));
  /* 1028126d mov ecx, dword ptr [0x102a0830] */
  ECX = (r32((uint32_t)(0x102a0830)));
  /* 10281273 mov dword ptr [0x102a0814], ecx */
  w32((uint32_t)(0x102a0814), (ECX));
  /* 10281279 pop ebp */
  EBP = (pop32());
  /* 1028127a ret  */
  ESPCHK(0x10281250u, _esp0);
  ESP += 4; return;
}

/* FUN_10011280 @ 0x10281280 (155 bytes, 57 insns) */
void f_10281280(void) {
  FTRACE(0x10281280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10281280 push ebp */
  push32((uint32_t)(EBP));
  /* 10281281 mov ebp, esp */
  EBP = (ESP);
  /* 10281283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10281286 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028128a je 0x102812ab */
  if (C.zf) goto L_102812ab;
  /* 1028128c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028128f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10281292 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10281294 je 0x102812ab */
  if (C.zf) goto L_102812ab;
  /* 10281296 push 0x1029c764 */
  push32((uint32_t)(0x1029c764u));
  /* 1028129b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028129e push edx */
  push32((uint32_t)(EDX));
  /* 1028129f call 0x102807e0 */
  push32(0x102812a4u); f_102807e0();
  /* 102812a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102812a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102812a9 jne 0x102812d3 */
  if (!C.zf) goto L_102812d3;
L_102812ab:;
  /* 102812ab push 8 */
  push32((uint32_t)(0x8u));
  /* 102812ad lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 102812b0 push eax */
  push32((uint32_t)(EAX));
  /* 102812b1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 102812b6 mov ecx, dword ptr [0x102a0830] */
  ECX = (r32((uint32_t)(0x102a0830)));
  /* 102812bc push ecx */
  push32((uint32_t)(ECX));
  /* 102812bd call dword ptr [0x102a0834] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a0834))), 0x102812c3u);
  /* 102812c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102812c5 jne 0x102812cb */
  if (!C.zf) goto L_102812cb;
  /* 102812c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102812c9 jmp 0x10281317 */
  goto L_10281317;
L_102812cb:;
  /* 102812cb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 102812ce mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 102812d1 jmp 0x1028130b */
  goto L_1028130b;
L_102812d3:;
  /* 102812d3 push 0x1029c760 */
  push32((uint32_t)(0x1029c760u));
  /* 102812d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102812db push eax */
  push32((uint32_t)(EAX));
  /* 102812dc call 0x102807e0 */
  push32(0x102812e1u); f_102807e0();
  /* 102812e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102812e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102812e6 jne 0x1028130b */
  if (!C.zf) goto L_1028130b;
  /* 102812e8 push 8 */
  push32((uint32_t)(0x8u));
  /* 102812ea lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 102812ed push ecx */
  push32((uint32_t)(ECX));
  /* 102812ee push 0xb */
  push32((uint32_t)(0xbu));
  /* 102812f0 mov edx, dword ptr [0x102a0830] */
  EDX = (r32((uint32_t)(0x102a0830)));
  /* 102812f6 push edx */
  push32((uint32_t)(EDX));
  /* 102812f7 call dword ptr [0x102a0834] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a0834))), 0x102812fdu);
  /* 102812fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102812ff jne 0x10281305 */
  if (!C.zf) goto L_10281305;
  /* 10281301 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10281303 jmp 0x10281317 */
  goto L_10281317;
L_10281305:;
  /* 10281305 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10281308 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1028130b:;
  /* 1028130b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028130e push ecx */
  push32((uint32_t)(ECX));
  /* 1028130f call 0x10283400 */
  push32(0x10281314u); f_10283400();
  /* 10281314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10281317:;
  /* 10281317 mov esp, ebp */
  ESP = (EBP);
  /* 10281319 pop ebp */
  EBP = (pop32());
  /* 1028131a ret  */
  ESPCHK(0x10281280u, _esp0);
  ESP += 4; return;
}

/* FUN_10011320 @ 0x10281320 (79 bytes, 26 insns) */
void f_10281320(void) {
  FTRACE(0x10281320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10281320 push ebp */
  push32((uint32_t)(EBP));
  /* 10281321 mov ebp, esp */
  EBP = (ESP);
  /* 10281323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10281326 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1028132a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1028132e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10281335 jmp 0x10281340 */
  goto L_10281340;
L_10281337:;
  /* 10281337 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1028133a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028133d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10281340:;
  /* 10281340 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281344 jae 0x10281366 */
  if (!C.cf) goto L_10281366;
  /* 10281346 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10281349 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1028134f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10281352 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10281354 mov cx, word ptr [eax*2 + 0x1029f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1029f9c4)));
  /* 1028135c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028135e jne 0x10281364 */
  if (!C.zf) goto L_10281364;
  /* 10281360 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10281362 jmp 0x1028136b */
  goto L_1028136b;
L_10281364:;
  /* 10281364 jmp 0x10281337 */
  goto L_10281337;
L_10281366:;
  /* 10281366 mov eax, 1 */
  EAX = (0x1u);
L_1028136b:;
  /* 1028136b mov esp, ebp */
  ESP = (EBP);
  /* 1028136d pop ebp */
  EBP = (pop32());
  /* 1028136e ret  */
  ESPCHK(0x10281320u, _esp0);
  ESP += 4; return;
}

/* FUN_10011370 @ 0x10281370 (135 bytes, 48 insns) */
void f_10281370(void) {
  FTRACE(0x10281370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10281370 push ebp */
  push32((uint32_t)(EBP));
  /* 10281371 mov ebp, esp */
  EBP = (ESP);
  /* 10281373 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10281376 push esi */
  push32((uint32_t)(ESI));
  /* 10281377 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028137a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1028137f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10281384 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10281389 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1028138c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10281391 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10281394 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10281396 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10281399 push ecx */
  push32((uint32_t)(ECX));
  /* 1028139a push 1 */
  push32((uint32_t)(0x1u));
  /* 1028139c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028139f push edx */
  push32((uint32_t)(EDX));
  /* 102813a0 call dword ptr [0x102a0834] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a0834))), 0x102813a6u);
  /* 102813a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102813a8 jne 0x102813ae */
  if (!C.zf) goto L_102813ae;
  /* 102813aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102813ac jmp 0x102813f2 */
  goto L_102813f2;
L_102813ae:;
  /* 102813ae lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 102813b1 push eax */
  push32((uint32_t)(EAX));
  /* 102813b2 call 0x102815e0 */
  push32(0x102813b7u); f_102815e0();
  /* 102813b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102813ba cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102813bd je 0x102813ed */
  if (C.zf) goto L_102813ed;
  /* 102813bf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102813c3 je 0x102813ed */
  if (C.zf) goto L_102813ed;
  /* 102813c5 mov ecx, dword ptr [0x102a0824] */
  ECX = (r32((uint32_t)(0x102a0824)));
  /* 102813cb push ecx */
  push32((uint32_t)(ECX));
  /* 102813cc call 0x10281660 */
  push32(0x102813d1u); f_10281660();
  /* 102813d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102813d4 mov esi, eax */
  ESI = (EAX);
  /* 102813d6 mov edx, dword ptr [0x102a0824] */
  EDX = (r32((uint32_t)(0x102a0824)));
  /* 102813dc push edx */
  push32((uint32_t)(EDX));
  /* 102813dd call 0x10277980 */
  push32(0x102813e2u); f_10277980();
  /* 102813e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102813e5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102813e7 jne 0x102813ed */
  if (!C.zf) goto L_102813ed;
  /* 102813e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102813eb jmp 0x102813f2 */
  goto L_102813f2;
L_102813ed:;
  /* 102813ed mov eax, 1 */
  EAX = (0x1u);
L_102813f2:;
  /* 102813f2 pop esi */
  ESI = (pop32());
  /* 102813f3 mov esp, ebp */
  ESP = (EBP);
  /* 102813f5 pop ebp */
  EBP = (pop32());
  /* 102813f6 ret  */
  ESPCHK(0x10281370u, _esp0);
  ESP += 4; return;
}

/* FUN_10011400 @ 0x10281400 (77 bytes, 18 insns) */
void f_10281400(void) {
  FTRACE(0x10281400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10281400 push ebp */
  push32((uint32_t)(EBP));
  /* 10281401 mov ebp, esp */
  EBP = (ESP);
  /* 10281403 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10281409 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10281413 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10281419 push eax */
  push32((uint32_t)(EAX));
  /* 1028141a call dword ptr [0x102a3290] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3290))), 0x10281420u);
  /* 10281420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10281422 je 0x10281439 */
  if (C.zf) goto L_10281439;
  /* 10281424 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028142b jne 0x10281439 */
  if (!C.zf) goto L_10281439;
  /* 1028142d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10281437 jmp 0x10281443 */
  goto L_10281443;
L_10281439:;
  /* 10281439 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10281443:;
  /* 10281443 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10281449 mov esp, ebp */
  ESP = (EBP);
  /* 1028144b pop ebp */
  EBP = (pop32());
  /* 1028144c ret  */
  ESPCHK(0x10281400u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10281450 (388 bytes, 118 insns) */
void f_10281450(void) {
  FTRACE(0x10281450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10281450 push ebp */
  push32((uint32_t)(EBP));
  /* 10281451 mov ebp, esp */
  EBP = (ESP);
  /* 10281453 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10281456 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1028145d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10281464 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1028146b:;
  /* 1028146b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1028146e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281471 jg 0x102815b8 */
  if ((!C.zf&&C.sf==C.of)) goto L_102815b8;
  /* 10281477 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1028147a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028147d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1028147e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10281480 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10281482 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10281485 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281488 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1028148b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028148e cmp edx, dword ptr [ecx + 0x1029f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1029f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281494 jne 0x1028158e */
  if (!C.zf) goto L_1028158e;
  /* 1028149a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1028149d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 102814a0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102814a4 ja 0x102814c7 */
  if ((!C.cf&&!C.zf)) goto L_102814c7;
  /* 102814a6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102814aa je 0x10281539 */
  if (C.zf) goto L_10281539;
  /* 102814b0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102814b4 je 0x102814e4 */
  if (C.zf) goto L_102814e4;
  /* 102814b6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102814ba je 0x10281506 */
  if (C.zf) goto L_10281506;
  /* 102814bc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102814c0 je 0x10281528 */
  if (C.zf) goto L_10281528;
  /* 102814c2 jmp 0x10281558 */
  goto L_10281558;
L_102814c7:;
  /* 102814c7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102814ce je 0x102814f5 */
  if (C.zf) goto L_102814f5;
  /* 102814d0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102814d7 je 0x10281517 */
  if (C.zf) goto L_10281517;
  /* 102814d9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102814e0 je 0x1028154a */
  if (C.zf) goto L_1028154a;
  /* 102814e2 jmp 0x10281558 */
  goto L_10281558;
L_102814e4:;
  /* 102814e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102814e7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102814ea add ecx, 0x1029f524 */
  { uint32_t _a=(ECX),_b=(0x1029f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102814f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102814f3 jmp 0x10281558 */
  goto L_10281558;
L_102814f5:;
  /* 102814f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 102814f8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102814fb mov eax, dword ptr [edx + 0x1029f52c] */
  EAX = (r32((uint32_t)(EDX + 0x1029f52c)));
  /* 10281501 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10281504 jmp 0x10281558 */
  goto L_10281558;
L_10281506:;
  /* 10281506 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281509 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1028150c add ecx, 0x1029f530 */
  { uint32_t _a=(ECX),_b=(0x1029f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281512 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10281515 jmp 0x10281558 */
  goto L_10281558;
L_10281517:;
  /* 10281517 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1028151a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1028151d mov eax, dword ptr [edx + 0x1029f534] */
  EAX = (r32((uint32_t)(EDX + 0x1029f534)));
  /* 10281523 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10281526 jmp 0x10281558 */
  goto L_10281558;
L_10281528:;
  /* 10281528 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1028152b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1028152e add ecx, 0x1029f538 */
  { uint32_t _a=(ECX),_b=(0x1029f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281534 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10281537 jmp 0x10281558 */
  goto L_10281558;
L_10281539:;
  /* 10281539 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1028153c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1028153f add edx, 0x1029f53c */
  { uint32_t _a=(EDX),_b=(0x1029f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281545 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10281548 jmp 0x10281558 */
  goto L_10281558;
L_1028154a:;
  /* 1028154a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1028154d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10281550 add eax, 0x1029f544 */
  { uint32_t _a=(EAX),_b=(0x1029f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281555 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10281558:;
  /* 10281558 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028155c je 0x10281564 */
  if (C.zf) goto L_10281564;
  /* 1028155e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281562 jge 0x10281566 */
  if ((C.sf==C.of)) goto L_10281566;
L_10281564:;
  /* 10281564 jmp 0x102815b8 */
  goto L_102815b8;
L_10281566:;
  /* 10281566 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10281569 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1028156c push ecx */
  push32((uint32_t)(ECX));
  /* 1028156d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10281570 push edx */
  push32((uint32_t)(EDX));
  /* 10281571 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10281574 push eax */
  push32((uint32_t)(EAX));
  /* 10281575 call 0x10278370 */
  push32(0x1028157au); f_10278370();
  /* 1028157a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028157d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10281580 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281583 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10281587 mov eax, 1 */
  EAX = (0x1u);
  /* 1028158c jmp 0x102815ce */
  goto L_102815ce;
L_1028158e:;
  /* 1028158e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281591 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10281594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10281597 cmp eax, dword ptr [edx + 0x1029f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1029f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028159d jae 0x102815aa */
  if (!C.cf) goto L_102815aa;
  /* 1028159f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102815a2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102815a5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 102815a8 jmp 0x102815b3 */
  goto L_102815b3;
L_102815aa:;
  /* 102815aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 102815ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102815b0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_102815b3:;
  /* 102815b3 jmp 0x1028146b */
  goto L_1028146b;
L_102815b8:;
  /* 102815b8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102815bb push eax */
  push32((uint32_t)(EAX));
  /* 102815bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102815bf push ecx */
  push32((uint32_t)(ECX));
  /* 102815c0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102815c3 push edx */
  push32((uint32_t)(EDX));
  /* 102815c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102815c7 push eax */
  push32((uint32_t)(EAX));
  /* 102815c8 call dword ptr [0x102a329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a329c))), 0x102815ceu);
L_102815ce:;
  /* 102815ce mov esp, ebp */
  ESP = (EBP);
  /* 102815d0 pop ebp */
  EBP = (pop32());
  /* 102815d1 ret 0x10 */
  ESPCHK(0x10281450u, _esp0);
  ESP += 20; return;
}

/* FUN_100115e0 @ 0x102815e0 (118 bytes, 42 insns) */
void f_102815e0(void) {
  FTRACE(0x102815e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102815e0 push ebp */
  push32((uint32_t)(EBP));
  /* 102815e1 mov ebp, esp */
  EBP = (ESP);
  /* 102815e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102815e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_102815ed:;
  /* 102815ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102815f0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 102815f2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 102815f5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 102815f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102815fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102815ff mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10281602 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10281604 je 0x1028164f */
  if (C.zf) goto L_1028164f;
  /* 10281606 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1028160a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028160d jl 0x10281622 */
  if ((C.sf!=C.of)) goto L_10281622;
  /* 1028160f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10281613 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281616 jg 0x10281622 */
  if ((!C.zf&&C.sf==C.of)) goto L_10281622;
  /* 10281618 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1028161b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1028161d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10281620 jmp 0x1028163c */
  goto L_1028163c;
L_10281622:;
  /* 10281622 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10281626 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281629 jl 0x1028163c */
  if ((C.sf!=C.of)) goto L_1028163c;
  /* 1028162b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1028162f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281632 jg 0x1028163c */
  if ((!C.zf&&C.sf==C.of)) goto L_1028163c;
  /* 10281634 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10281637 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10281639 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1028163c:;
  /* 1028163c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028163f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10281642 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10281646 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1028164a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1028164d jmp 0x102815ed */
  goto L_102815ed;
L_1028164f:;
  /* 1028164f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10281652 mov esp, ebp */
  ESP = (EBP);
  /* 10281654 pop ebp */
  EBP = (pop32());
  /* 10281655 ret  */
  ESPCHK(0x102815e0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10281660 (101 bytes, 36 insns) */
void f_10281660(void) {
  FTRACE(0x10281660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10281660 push ebp */
  push32((uint32_t)(EBP));
  /* 10281661 mov ebp, esp */
  EBP = (ESP);
  /* 10281663 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10281666 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1028166d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10281670 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10281672 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10281675 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10281678 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028167b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1028167e:;
  /* 1028167e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10281682 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281685 jl 0x10281690 */
  if ((C.sf!=C.of)) goto L_10281690;
  /* 10281687 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1028168b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028168e jle 0x102816a2 */
  if ((C.zf||C.sf!=C.of)) goto L_102816a2;
L_10281690:;
  /* 10281690 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10281694 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281697 jl 0x102816be */
  if ((C.sf!=C.of)) goto L_102816be;
  /* 10281699 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1028169d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102816a0 jg 0x102816be */
  if ((!C.zf&&C.sf==C.of)) goto L_102816be;
L_102816a2:;
  /* 102816a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102816a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102816a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102816ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102816ae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 102816b0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 102816b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102816b6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102816b9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 102816bc jmp 0x1028167e */
  goto L_1028167e;
L_102816be:;
  /* 102816be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102816c1 mov esp, ebp */
  ESP = (EBP);
  /* 102816c3 pop ebp */
  EBP = (pop32());
  /* 102816c4 ret  */
  ESPCHK(0x10281660u, _esp0);
  ESP += 4; return;
}

/* FUN_100116d0 @ 0x102816d0 (122 bytes, 39 insns) */
void f_102816d0(void) {
  FTRACE(0x102816d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102816d0 push ebp */
  push32((uint32_t)(EBP));
  /* 102816d1 mov ebp, esp */
  EBP = (ESP);
  /* 102816d3 push ecx */
  push32((uint32_t)(ECX));
  /* 102816d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102816d7 cmp eax, dword ptr [0x102a20bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102a20bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102816dd jae 0x10281701 */
  if (!C.cf) goto L_10281701;
  /* 102816df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102816e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 102816e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102816e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 102816eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102816ee mov eax, dword ptr [ecx*4 + 0x102a1f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x102a1f80)));
  /* 102816f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 102816fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 102816fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102816ff jne 0x1028171c */
  if (!C.zf) goto L_1028171c;
L_10281701:;
  /* 10281701 call 0x1027ca20 */
  push32(0x10281706u); f_1027ca20();
  /* 10281706 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1028170c call 0x1027ca30 */
  push32(0x10281711u); f_1027ca30();
  /* 10281711 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10281717 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1028171a jmp 0x10281746 */
  goto L_10281746;
L_1028171c:;
  /* 1028171c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028171f push edx */
  push32((uint32_t)(EDX));
  /* 10281720 call 0x1027e240 */
  push32(0x10281725u); f_1027e240();
  /* 10281725 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281728 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028172b push eax */
  push32((uint32_t)(EAX));
  /* 1028172c call 0x10281750 */
  push32(0x10281731u); f_10281750();
  /* 10281731 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281734 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10281737 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028173a push ecx */
  push32((uint32_t)(ECX));
  /* 1028173b call 0x1027e2d0 */
  push32(0x10281740u); f_1027e2d0();
  /* 10281740 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281743 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10281746:;
  /* 10281746 mov esp, ebp */
  ESP = (EBP);
  /* 10281748 pop ebp */
  EBP = (pop32());
  /* 10281749 ret  */
  ESPCHK(0x102816d0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10281750 (170 bytes, 59 insns) */
void f_10281750(void) {
  FTRACE(0x10281750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10281750 push ebp */
  push32((uint32_t)(EBP));
  /* 10281751 mov ebp, esp */
  EBP = (ESP);
  /* 10281753 push ecx */
  push32((uint32_t)(ECX));
  /* 10281754 push esi */
  push32((uint32_t)(ESI));
  /* 10281755 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10281758 push eax */
  push32((uint32_t)(EAX));
  /* 10281759 call 0x1027e0c0 */
  push32(0x1028175eu); f_1027e0c0();
  /* 1028175e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281761 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281764 je 0x102817a3 */
  if (C.zf) goto L_102817a3;
  /* 10281766 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028176a je 0x10281772 */
  if (C.zf) goto L_10281772;
  /* 1028176c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281770 jne 0x1028178c */
  if (!C.zf) goto L_1028178c;
L_10281772:;
  /* 10281772 push 1 */
  push32((uint32_t)(0x1u));
  /* 10281774 call 0x1027e0c0 */
  push32(0x10281779u); f_1027e0c0();
  /* 10281779 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028177c mov esi, eax */
  ESI = (EAX);
  /* 1028177e push 2 */
  push32((uint32_t)(0x2u));
  /* 10281780 call 0x1027e0c0 */
  push32(0x10281785u); f_1027e0c0();
  /* 10281785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281788 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028178a je 0x102817a3 */
  if (C.zf) goto L_102817a3;
L_1028178c:;
  /* 1028178c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028178f push ecx */
  push32((uint32_t)(ECX));
  /* 10281790 call 0x1027e0c0 */
  push32(0x10281795u); f_1027e0c0();
  /* 10281795 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281798 push eax */
  push32((uint32_t)(EAX));
  /* 10281799 call dword ptr [0x102a3298] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3298))), 0x1028179fu);
  /* 1028179f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102817a1 je 0x102817ac */
  if (C.zf) goto L_102817ac;
L_102817a3:;
  /* 102817a3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 102817aa jmp 0x102817b5 */
  goto L_102817b5;
L_102817ac:;
  /* 102817ac call dword ptr [0x102a3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3338))), 0x102817b2u);
  /* 102817b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_102817b5:;
  /* 102817b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102817b8 push edx */
  push32((uint32_t)(EDX));
  /* 102817b9 call 0x1027dfe0 */
  push32(0x102817beu); f_1027dfe0();
  /* 102817be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102817c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102817c4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 102817c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102817ca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 102817cd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102817d0 mov edx, dword ptr [eax*4 + 0x102a1f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x102a1f80)));
  /* 102817d7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 102817dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102817e0 je 0x102817f3 */
  if (C.zf) goto L_102817f3;
  /* 102817e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102817e5 push eax */
  push32((uint32_t)(EAX));
  /* 102817e6 call 0x1027c980 */
  push32(0x102817ebu); f_1027c980();
  /* 102817eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102817ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102817f1 jmp 0x102817f5 */
  goto L_102817f5;
L_102817f3:;
  /* 102817f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102817f5:;
  /* 102817f5 pop esi */
  ESI = (pop32());
  /* 102817f6 mov esp, ebp */
  ESP = (EBP);
  /* 102817f8 pop ebp */
  EBP = (pop32());
  /* 102817f9 ret  */
  ESPCHK(0x10281750u, _esp0);
  ESP += 4; return;
}

/* FUN_10011800 @ 0x10281800 (146 bytes, 52 insns) */
void f_10281800(void) {
  FTRACE(0x10281800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10281800 push ebp */
  push32((uint32_t)(EBP));
  /* 10281801 mov ebp, esp */
  EBP = (ESP);
  /* 10281803 push ebx */
  push32((uint32_t)(EBX));
  /* 10281804 push esi */
  push32((uint32_t)(ESI));
  /* 10281805 push edi */
  push32((uint32_t)(EDI));
L_10281806:;
  /* 10281806 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028180a jne 0x1028182a */
  if (!C.zf) goto L_1028182a;
  /* 1028180c push 0x1029c0a0 */
  push32((uint32_t)(0x1029c0a0u));
  /* 10281811 push 0 */
  push32((uint32_t)(0x0u));
  /* 10281813 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10281815 push 0x1029c768 */
  push32((uint32_t)(0x1029c768u));
  /* 1028181a push 2 */
  push32((uint32_t)(0x2u));
  /* 1028181c call 0x10273c10 */
  push32(0x10281821u); f_10273c10();
  /* 10281821 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281824 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281827 jne 0x1028182a */
  if (!C.zf) goto L_1028182a;
  /* 10281829 int3  */
  x86_unimpl("int3 @ 0x10281829");
L_1028182a:;
  /* 1028182a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1028182c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1028182e jne 0x10281806 */
  if (!C.zf) goto L_10281806;
  /* 10281830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10281833 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10281836 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1028183c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1028183e je 0x1028188d */
  if (C.zf) goto L_1028188d;
  /* 10281840 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10281843 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10281846 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10281849 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1028184b je 0x1028188d */
  if (C.zf) goto L_1028188d;
  /* 1028184d push 2 */
  push32((uint32_t)(0x2u));
  /* 1028184f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10281852 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10281855 push eax */
  push32((uint32_t)(EAX));
  /* 10281856 call 0x102755e0 */
  push32(0x1028185bu); f_102755e0();
  /* 1028185b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028185e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10281861 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10281864 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1028186a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028186d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10281870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10281873 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10281879 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028187c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10281883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10281886 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1028188d:;
  /* 1028188d pop edi */
  EDI = (pop32());
  /* 1028188e pop esi */
  ESI = (pop32());
  /* 1028188f pop ebx */
  EBX = (pop32());
  /* 10281890 pop ebp */
  EBP = (pop32());
  /* 10281891 ret  */
  ESPCHK(0x10281800u, _esp0);
  ESP += 4; return;
}

/* FUN_100118a0 @ 0x102818a0 (289 bytes, 97 insns) */
void f_102818a0(void) {
  FTRACE(0x102818a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102818a0 push ebp */
  push32((uint32_t)(EBP));
  /* 102818a1 mov ebp, esp */
  EBP = (ESP);
  /* 102818a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102818a6 push esi */
  push32((uint32_t)(ESI));
  /* 102818a7 mov eax, dword ptr [0x1029fc98] */
  EAX = (r32((uint32_t)(0x1029fc98)));
  /* 102818ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 102818af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 102818b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 102818bd jmp 0x102818c8 */
  goto L_102818c8;
L_102818bf:;
  /* 102818bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102818c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102818c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_102818c8:;
  /* 102818c8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102818cc jae 0x10281901 */
  if (!C.cf) goto L_10281901;
  /* 102818ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 102818d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102818d4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 102818d7 push ecx */
  push32((uint32_t)(ECX));
  /* 102818d8 call 0x10277980 */
  push32(0x102818ddu); f_10277980();
  /* 102818dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102818e0 mov esi, eax */
  ESI = (EAX);
  /* 102818e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 102818e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102818e8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 102818ec push ecx */
  push32((uint32_t)(ECX));
  /* 102818ed call 0x10277980 */
  push32(0x102818f2u); f_10277980();
  /* 102818f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102818f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102818f8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 102818fc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 102818ff jmp 0x102818bf */
  goto L_102818bf;
L_10281901:;
  /* 10281901 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10281904 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281907 push eax */
  push32((uint32_t)(EAX));
  /* 10281908 call 0x10274b30 */
  push32(0x1028190du); f_10274b30();
  /* 1028190d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281910 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10281913 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281917 je 0x102819b9 */
  if (C.zf) goto L_102819b9;
  /* 1028191d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10281920 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10281923 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1028192a jmp 0x10281935 */
  goto L_10281935;
L_1028192c:;
  /* 1028192c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1028192f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281932 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10281935:;
  /* 10281935 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281939 jae 0x102819aa */
  if (!C.cf) goto L_102819aa;
  /* 1028193b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1028193e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10281941 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281944 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281947 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1028194a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1028194d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281950 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10281953 push ecx */
  push32((uint32_t)(ECX));
  /* 10281954 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281957 push edx */
  push32((uint32_t)(EDX));
  /* 10281958 call 0x10277b00 */
  push32(0x1028195du); f_10277b00();
  /* 1028195d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281960 push eax */
  push32((uint32_t)(EAX));
  /* 10281961 call 0x10277980 */
  push32(0x10281966u); f_10277980();
  /* 10281966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281969 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1028196c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028196e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10281971 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281974 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10281977 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1028197a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028197d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10281980 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281983 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281986 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1028198a push eax */
  push32((uint32_t)(EAX));
  /* 1028198b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1028198e push ecx */
  push32((uint32_t)(ECX));
  /* 1028198f call 0x10277b00 */
  push32(0x10281994u); f_10277b00();
  /* 10281994 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281997 push eax */
  push32((uint32_t)(EAX));
  /* 10281998 call 0x10277980 */
  push32(0x1028199du); f_10277980();
  /* 1028199d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102819a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 102819a3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102819a5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 102819a8 jmp 0x1028192c */
  goto L_1028192c;
L_102819aa:;
  /* 102819aa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 102819ad mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 102819b0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 102819b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102819b6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_102819b9:;
  /* 102819b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102819bc pop esi */
  ESI = (pop32());
  /* 102819bd mov esp, ebp */
  ESP = (EBP);
  /* 102819bf pop ebp */
  EBP = (pop32());
  /* 102819c0 ret  */
  ESPCHK(0x102818a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100119d0 @ 0x102819d0 (291 bytes, 97 insns) */
void f_102819d0(void) {
  FTRACE(0x102819d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102819d0 push ebp */
  push32((uint32_t)(EBP));
  /* 102819d1 mov ebp, esp */
  EBP = (ESP);
  /* 102819d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102819d6 push esi */
  push32((uint32_t)(ESI));
  /* 102819d7 mov eax, dword ptr [0x1029fc98] */
  EAX = (r32((uint32_t)(0x1029fc98)));
  /* 102819dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 102819df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 102819e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 102819ed jmp 0x102819f8 */
  goto L_102819f8;
L_102819ef:;
  /* 102819ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102819f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102819f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_102819f8:;
  /* 102819f8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102819fc jae 0x10281a32 */
  if (!C.cf) goto L_10281a32;
  /* 102819fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281a01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281a04 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10281a08 push ecx */
  push32((uint32_t)(ECX));
  /* 10281a09 call 0x10277980 */
  push32(0x10281a0eu); f_10277980();
  /* 10281a0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281a11 mov esi, eax */
  ESI = (EAX);
  /* 10281a13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281a16 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281a19 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10281a1d push ecx */
  push32((uint32_t)(ECX));
  /* 10281a1e call 0x10277980 */
  push32(0x10281a23u); f_10277980();
  /* 10281a23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281a26 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281a29 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10281a2d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10281a30 jmp 0x102819ef */
  goto L_102819ef;
L_10281a32:;
  /* 10281a32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10281a35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281a38 push eax */
  push32((uint32_t)(EAX));
  /* 10281a39 call 0x10274b30 */
  push32(0x10281a3eu); f_10274b30();
  /* 10281a3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281a41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10281a44 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281a48 je 0x10281aeb */
  if (C.zf) goto L_10281aeb;
  /* 10281a4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10281a51 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10281a54 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10281a5b jmp 0x10281a66 */
  goto L_10281a66;
L_10281a5d:;
  /* 10281a5d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281a60 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281a63 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10281a66:;
  /* 10281a66 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281a6a jae 0x10281adc */
  if (!C.cf) goto L_10281adc;
  /* 10281a6c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281a6f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10281a72 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281a75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281a78 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10281a7b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281a7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281a81 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10281a85 push ecx */
  push32((uint32_t)(ECX));
  /* 10281a86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281a89 push edx */
  push32((uint32_t)(EDX));
  /* 10281a8a call 0x10277b00 */
  push32(0x10281a8fu); f_10277b00();
  /* 10281a8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281a92 push eax */
  push32((uint32_t)(EAX));
  /* 10281a93 call 0x10277980 */
  push32(0x10281a98u); f_10277980();
  /* 10281a98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281a9b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281a9e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281aa0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10281aa3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281aa6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10281aa9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281aac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281aaf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10281ab2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281ab5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281ab8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10281abc push eax */
  push32((uint32_t)(EAX));
  /* 10281abd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281ac0 push ecx */
  push32((uint32_t)(ECX));
  /* 10281ac1 call 0x10277b00 */
  push32(0x10281ac6u); f_10277b00();
  /* 10281ac6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281ac9 push eax */
  push32((uint32_t)(EAX));
  /* 10281aca call 0x10277980 */
  push32(0x10281acfu); f_10277980();
  /* 10281acf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281ad2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281ad5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281ad7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10281ada jmp 0x10281a5d */
  goto L_10281a5d;
L_10281adc:;
  /* 10281adc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281adf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10281ae2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281ae5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281ae8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10281aeb:;
  /* 10281aeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10281aee pop esi */
  ESI = (pop32());
  /* 10281aef mov esp, ebp */
  ESP = (EBP);
  /* 10281af1 pop ebp */
  EBP = (pop32());
  /* 10281af2 ret  */
  ESPCHK(0x102819d0u, _esp0);
  ESP += 4; return;
}

