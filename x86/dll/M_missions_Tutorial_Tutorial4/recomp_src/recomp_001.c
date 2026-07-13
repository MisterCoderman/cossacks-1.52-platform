#include "recomp.h"

/* FUN_1000ba00 @ 0x1245ba00 (116 bytes, 34 insns) */
void f_1245ba00(void) {
  FTRACE(0x1245ba00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245ba00 push ebp */
  push32((uint32_t)(EBP));
  /* 1245ba01 mov ebp, esp */
  EBP = (ESP);
  /* 1245ba03 push ecx */
  push32((uint32_t)(ECX));
  /* 1245ba04 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1245ba0b push 9 */
  push32((uint32_t)(0x9u));
  /* 1245ba0d call 0x1245b220 */
  push32(0x1245ba12u); f_1245b220();
  /* 1245ba12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ba15 call 0x1245d110 */
  push32(0x1245ba1au); f_1245d110();
  /* 1245ba1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245ba1c jge 0x1245ba25 */
  if ((C.sf==C.of)) goto L_1245ba25;
  /* 1245ba1e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1245ba25:;
  /* 1245ba25 push 9 */
  push32((uint32_t)(0x9u));
  /* 1245ba27 call 0x1245b2c0 */
  push32(0x1245ba2cu); f_1245b2c0();
  /* 1245ba2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ba2f push 0 */
  push32((uint32_t)(0x0u));
  /* 1245ba31 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245ba33 mov eax, dword ptr [0x1248520c] */
  EAX = (r32((uint32_t)(0x1248520c)));
  /* 1245ba38 push eax */
  push32((uint32_t)(EAX));
  /* 1245ba39 call dword ptr [0x124863a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863a8))), 0x1245ba3fu);
  /* 1245ba3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245ba41 jne 0x1245ba6d */
  if (!C.zf) goto L_1245ba6d;
  /* 1245ba43 call dword ptr [0x12486388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486388))), 0x1245ba49u);
  /* 1245ba49 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ba4c jne 0x1245ba66 */
  if (!C.zf) goto L_1245ba66;
  /* 1245ba4e call 0x1245f700 */
  push32(0x1245ba53u); f_1245f700();
  /* 1245ba53 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1245ba59 call 0x1245f6f0 */
  push32(0x1245ba5eu); f_1245f6f0();
  /* 1245ba5e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1245ba64 jmp 0x1245ba6d */
  goto L_1245ba6d;
L_1245ba66:;
  /* 1245ba66 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1245ba6d:;
  /* 1245ba6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ba70 mov esp, ebp */
  ESP = (EBP);
  /* 1245ba72 pop ebp */
  EBP = (pop32());
  /* 1245ba73 ret  */
  ESPCHK(0x1245ba00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba80 @ 0x1245ba80 (10 bytes, 5 insns) */
void f_1245ba80(void) {
  FTRACE(0x1245ba80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245ba80 push ebp */
  push32((uint32_t)(EBP));
  /* 1245ba81 mov ebp, esp */
  EBP = (ESP);
  /* 1245ba83 call 0x1245ba00 */
  push32(0x1245ba88u); f_1245ba00();
  /* 1245ba88 pop ebp */
  EBP = (pop32());
  /* 1245ba89 ret  */
  ESPCHK(0x1245ba80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba90 @ 0x1245ba90 (10 bytes, 5 insns) */
void f_1245ba90(void) {
  FTRACE(0x1245ba90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245ba90 push ebp */
  push32((uint32_t)(EBP));
  /* 1245ba91 mov ebp, esp */
  EBP = (ESP);
  /* 1245ba93 mov eax, dword ptr [0x12481c94] */
  EAX = (r32((uint32_t)(0x12481c94)));
  /* 1245ba98 pop ebp */
  EBP = (pop32());
  /* 1245ba99 ret  */
  ESPCHK(0x1245ba90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000baa0 @ 0x1245baa0 (31 bytes, 11 insns) */
void f_1245baa0(void) {
  FTRACE(0x1245baa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245baa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245baa1 mov ebp, esp */
  EBP = (ESP);
  /* 1245baa3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245baaa jbe 0x1245bab0 */
  if ((C.cf||C.zf)) goto L_1245bab0;
  /* 1245baac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245baae jmp 0x1245babd */
  goto L_1245babd;
L_1245bab0:;
  /* 1245bab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245bab3 mov dword ptr [0x12481c94], eax */
  w32((uint32_t)(0x12481c94), (EAX));
  /* 1245bab8 mov eax, 1 */
  EAX = (0x1u);
L_1245babd:;
  /* 1245babd pop ebp */
  EBP = (pop32());
  /* 1245babe ret  */
  ESPCHK(0x1245baa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bac0 @ 0x1245bac0 (89 bytes, 20 insns) */
void f_1245bac0(void) {
  FTRACE(0x1245bac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245bac0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245bac1 mov ebp, esp */
  EBP = (ESP);
  /* 1245bac3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1245bac8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245baca mov eax, dword ptr [0x1248520c] */
  EAX = (r32((uint32_t)(0x1248520c)));
  /* 1245bacf push eax */
  push32((uint32_t)(EAX));
  /* 1245bad0 call dword ptr [0x12486314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486314))), 0x1245bad6u);
  /* 1245bad6 mov dword ptr [0x12485208], eax */
  w32((uint32_t)(0x12485208), (EAX));
  /* 1245badb cmp dword ptr [0x12485208], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12485208))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245bae2 jne 0x1245bae8 */
  if (!C.zf) goto L_1245bae8;
  /* 1245bae4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245bae6 jmp 0x1245bb17 */
  goto L_1245bb17;
L_1245bae8:;
  /* 1245bae8 mov ecx, dword ptr [0x12485208] */
  ECX = (r32((uint32_t)(0x12485208)));
  /* 1245baee mov dword ptr [0x124851fc], ecx */
  w32((uint32_t)(0x124851fc), (ECX));
  /* 1245baf4 mov dword ptr [0x12485200], 0 */
  w32((uint32_t)(0x12485200), (0x0u));
  /* 1245bafe mov dword ptr [0x12485204], 0 */
  w32((uint32_t)(0x12485204), (0x0u));
  /* 1245bb08 mov dword ptr [0x124851e8], 0x10 */
  w32((uint32_t)(0x124851e8), (0x10u));
  /* 1245bb12 mov eax, 1 */
  EAX = (0x1u);
L_1245bb17:;
  /* 1245bb17 pop ebp */
  EBP = (pop32());
  /* 1245bb18 ret  */
  ESPCHK(0x1245bac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb20 @ 0x1245bb20 (85 bytes, 29 insns) */
void f_1245bb20(void) {
  FTRACE(0x1245bb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245bb20 push ebp */
  push32((uint32_t)(EBP));
  /* 1245bb21 mov ebp, esp */
  EBP = (ESP);
  /* 1245bb23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245bb26 mov eax, dword ptr [0x12485204] */
  EAX = (r32((uint32_t)(0x12485204)));
  /* 1245bb2b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245bb2e mov ecx, dword ptr [0x12485208] */
  ECX = (r32((uint32_t)(0x12485208)));
  /* 1245bb34 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245bb36 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1245bb39 mov edx, dword ptr [0x12485208] */
  EDX = (r32((uint32_t)(0x12485208)));
  /* 1245bb3f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1245bb42:;
  /* 1245bb42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245bb45 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245bb48 jae 0x1245bb6f */
  if (!C.cf) goto L_1245bb6f;
  /* 1245bb4a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245bb4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245bb50 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245bb53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1245bb56 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245bb5d jae 0x1245bb64 */
  if (!C.cf) goto L_1245bb64;
  /* 1245bb5f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245bb62 jmp 0x1245bb71 */
  goto L_1245bb71;
L_1245bb64:;
  /* 1245bb64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245bb67 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245bb6a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1245bb6d jmp 0x1245bb42 */
  goto L_1245bb42;
L_1245bb6f:;
  /* 1245bb6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1245bb71:;
  /* 1245bb71 mov esp, ebp */
  ESP = (EBP);
  /* 1245bb73 pop ebp */
  EBP = (pop32());
  /* 1245bb74 ret  */
  ESPCHK(0x1245bb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb80 @ 0x1245bb80 (95 bytes, 33 insns) */
void f_1245bb80(void) {
  FTRACE(0x1245bb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245bb80 push ebp */
  push32((uint32_t)(EBP));
  /* 1245bb81 mov ebp, esp */
  EBP = (ESP);
  /* 1245bb83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245bb86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245bb89 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245bb8c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245bb8f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1245bb92 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245bb95 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1245bb98 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1245bb9b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245bba0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245bba3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245bba5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245bba8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1245bbab and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1245bbad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245bbaf jne 0x1245bbd1 */
  if (!C.zf) goto L_1245bbd1;
  /* 1245bbb1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245bbb4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1245bbb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245bbb9 jne 0x1245bbd1 */
  if (!C.zf) goto L_1245bbd1;
  /* 1245bbbb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245bbbe and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1245bbc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245bbc6 je 0x1245bbd1 */
  if (C.zf) goto L_1245bbd1;
  /* 1245bbc8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1245bbcf jmp 0x1245bbd8 */
  goto L_1245bbd8;
L_1245bbd1:;
  /* 1245bbd1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1245bbd8:;
  /* 1245bbd8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245bbdb mov esp, ebp */
  ESP = (EBP);
  /* 1245bbdd pop ebp */
  EBP = (pop32());
  /* 1245bbde ret  */
  ESPCHK(0x1245bb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbe0 @ 0x1245bbe0 (1485 bytes, 453 insns) */
void f_1245bbe0(void) {
  FTRACE(0x1245bbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245bbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245bbe1 mov ebp, esp */
  EBP = (ESP);
  /* 1245bbe3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245bbe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245bbe9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1245bbec mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1245bbef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245bbf2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245bbf5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245bbf8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1245bbfb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245bbfe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1245bc01 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1245bc04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245bc07 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245bc0d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bc10 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1245bc17 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1245bc1a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245bc1d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245bc20 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1245bc23 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245bc26 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245bc28 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245bc2b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1245bc2e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245bc31 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245bc34 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1245bc37 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245bc3a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245bc3c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1245bc3f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245bc42 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1245bc45 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1245bc48 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245bc4b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1245bc4e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245bc50 jne 0x1245bd78 */
  if (!C.zf) goto L_1245bd78;
  /* 1245bc56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245bc59 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1245bc5c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245bc5f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1245bc62 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245bc66 jbe 0x1245bc6f */
  if ((C.cf||C.zf)) goto L_1245bc6f;
  /* 1245bc68 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1245bc6f:;
  /* 1245bc6f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245bc72 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245bc75 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245bc78 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245bc7b jne 0x1245bd51 */
  if (!C.zf) goto L_1245bd51;
  /* 1245bc81 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245bc85 jae 0x1245bce6 */
  if (!C.cf) goto L_1245bce6;
  /* 1245bc87 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245bc8c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245bc8f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245bc91 not eax */
  EAX = (~(EAX));
  /* 1245bc93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245bc96 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bc99 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1245bc9d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1245bc9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245bca2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bca5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1245bca9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bcac add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245bcaf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1245bcb2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1245bcb5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bcb8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245bcbb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1245bcbe mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bcc1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245bcc4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1245bcc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245bcca jne 0x1245bce4 */
  if (!C.zf) goto L_1245bce4;
  /* 1245bccc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245bcd1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245bcd4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245bcd6 not eax */
  EAX = (~(EAX));
  /* 1245bcd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245bcdb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1245bcdd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1245bcdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245bce2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1245bce4:;
  /* 1245bce4 jmp 0x1245bd51 */
  goto L_1245bd51;
L_1245bce6:;
  /* 1245bce6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245bce9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245bcec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245bcf1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245bcf3 not edx */
  EDX = (~(EDX));
  /* 1245bcf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245bcf8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bcfb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1245bd02 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1245bd04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245bd07 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bd0a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1245bd11 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bd14 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245bd17 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1245bd1a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1245bd1d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bd20 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245bd23 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1245bd26 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bd29 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245bd2c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1245bd30 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245bd32 jne 0x1245bd51 */
  if (!C.zf) goto L_1245bd51;
  /* 1245bd34 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245bd37 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245bd3a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245bd3f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245bd41 not edx */
  EDX = (~(EDX));
  /* 1245bd43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245bd46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245bd49 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1245bd4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245bd4e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1245bd51:;
  /* 1245bd51 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245bd54 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1245bd57 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245bd5a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1245bd5d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1245bd60 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245bd63 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245bd66 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245bd69 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1245bd6c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1245bd6f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245bd72 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245bd75 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1245bd78:;
  /* 1245bd78 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245bd7b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1245bd7e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245bd81 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1245bd84 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245bd88 jbe 0x1245bd91 */
  if ((C.cf||C.zf)) goto L_1245bd91;
  /* 1245bd8a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1245bd91:;
  /* 1245bd91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245bd94 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1245bd97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245bd99 jne 0x1245bef5 */
  if (!C.zf) goto L_1245bef5;
  /* 1245bd9f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245bda2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245bda5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1245bda8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245bdab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1245bdae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245bdb1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1245bdb4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245bdb8 jbe 0x1245bdc1 */
  if ((C.cf||C.zf)) goto L_1245bdc1;
  /* 1245bdba mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1245bdc1:;
  /* 1245bdc1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245bdc4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245bdc7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1245bdca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245bdcd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1245bdd0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245bdd3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1245bdd6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245bdda jbe 0x1245bde3 */
  if ((C.cf||C.zf)) goto L_1245bde3;
  /* 1245bddc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1245bde3:;
  /* 1245bde3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245bde6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245bde9 je 0x1245beef */
  if (C.zf) goto L_1245beef;
  /* 1245bdef mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1245bdf2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1245bdf5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245bdf8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245bdfb jne 0x1245bed1 */
  if (!C.zf) goto L_1245bed1;
  /* 1245be01 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245be05 jae 0x1245be66 */
  if (!C.cf) goto L_1245be66;
  /* 1245be07 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245be0c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245be0f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245be11 not edx */
  EDX = (~(EDX));
  /* 1245be13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245be16 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245be19 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1245be1d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1245be1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245be22 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245be25 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1245be29 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245be2c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245be2f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1245be32 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1245be35 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245be38 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245be3b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1245be3e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245be41 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245be44 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1245be48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245be4a jne 0x1245be64 */
  if (!C.zf) goto L_1245be64;
  /* 1245be4c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245be51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245be54 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245be56 not edx */
  EDX = (~(EDX));
  /* 1245be58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245be5b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245be5d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1245be5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245be62 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1245be64:;
  /* 1245be64 jmp 0x1245bed1 */
  goto L_1245bed1;
L_1245be66:;
  /* 1245be66 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245be69 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245be6c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245be71 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245be73 not eax */
  EAX = (~(EAX));
  /* 1245be75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245be78 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245be7b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1245be82 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1245be84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245be87 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245be8a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1245be91 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245be94 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245be97 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1245be9a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1245be9d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bea0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245bea3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1245bea6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bea9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245beac movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1245beb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245beb2 jne 0x1245bed1 */
  if (!C.zf) goto L_1245bed1;
  /* 1245beb4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245beb7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245beba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245bebf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245bec1 not eax */
  EAX = (~(EAX));
  /* 1245bec3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245bec6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245bec9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1245becb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245bece mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1245bed1:;
  /* 1245bed1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1245bed4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1245bed7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1245beda mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245bedd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1245bee0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1245bee3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1245bee6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1245bee9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1245beec mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1245beef:;
  /* 1245beef mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1245bef2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1245bef5:;
  /* 1245bef5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245bef8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1245befb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245befd jne 0x1245bf0b */
  if (!C.zf) goto L_1245bf0b;
  /* 1245beff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245bf02 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245bf05 je 0x1245c01b */
  if (C.zf) goto L_1245c01b;
L_1245bf0b:;
  /* 1245bf0b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245bf0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245bf11 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1245bf14 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1245bf17 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245bf1a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245bf1d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245bf20 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1245bf23 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245bf26 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245bf29 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1245bf2c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245bf2f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245bf32 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1245bf35 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245bf38 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245bf3b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245bf3e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1245bf41 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245bf44 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245bf47 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245bf4a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245bf4d jne 0x1245c01b */
  if (!C.zf) goto L_1245c01b;
  /* 1245bf53 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245bf57 jae 0x1245bfb4 */
  if (!C.cf) goto L_1245bfb4;
  /* 1245bf59 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bf5c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245bf5f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1245bf63 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bf66 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245bf69 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1245bf6c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1245bf6f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bf72 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245bf75 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1245bf78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245bf7a jne 0x1245bf92 */
  if (!C.zf) goto L_1245bf92;
  /* 1245bf7c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245bf81 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245bf84 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245bf86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245bf89 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245bf8b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1245bf8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245bf90 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1245bf92:;
  /* 1245bf92 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245bf97 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245bf9a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245bf9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245bf9f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bfa2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1245bfa6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1245bfa8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245bfab mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bfae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1245bfb2 jmp 0x1245c01b */
  goto L_1245c01b;
L_1245bfb4:;
  /* 1245bfb4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bfb7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245bfba movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1245bfbe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bfc1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245bfc4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1245bfc7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1245bfca mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245bfcd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245bfd0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1245bfd3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245bfd5 jne 0x1245bff2 */
  if (!C.zf) goto L_1245bff2;
  /* 1245bfd7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245bfda sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245bfdd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245bfe2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245bfe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245bfe7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245bfea or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1245bfec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245bfef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1245bff2:;
  /* 1245bff2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245bff5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245bff8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245bffd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245bfff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c002 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245c005 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1245c00c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1245c00e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c011 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1245c014 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1245c01b:;
  /* 1245c01b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245c01e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c021 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1245c023 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245c026 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c029 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c02c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1245c02f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245c032 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1245c034 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245c037 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245c03a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1245c03c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245c03f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c042 jne 0x1245c1a9 */
  if (!C.zf) goto L_1245c1a9;
  /* 1245c048 cmp dword ptr [0x12485200], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12485200))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c04f je 0x1245c198 */
  if (C.zf) goto L_1245c198;
  /* 1245c055 mov eax, dword ptr [0x124851f8] */
  EAX = (r32((uint32_t)(0x124851f8)));
  /* 1245c05a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1245c05d mov ecx, dword ptr [0x12485200] */
  ECX = (r32((uint32_t)(0x12485200)));
  /* 1245c063 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1245c066 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c068 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1245c06b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1245c070 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1245c075 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c078 push eax */
  push32((uint32_t)(EAX));
  /* 1245c079 call dword ptr [0x12486330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486330))), 0x1245c07fu);
  /* 1245c07f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245c084 mov ecx, dword ptr [0x124851f8] */
  ECX = (r32((uint32_t)(0x124851f8)));
  /* 1245c08a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245c08c mov eax, dword ptr [0x12485200] */
  EAX = (r32((uint32_t)(0x12485200)));
  /* 1245c091 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1245c094 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1245c096 mov edx, dword ptr [0x12485200] */
  EDX = (r32((uint32_t)(0x12485200)));
  /* 1245c09c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1245c09f mov eax, dword ptr [0x12485200] */
  EAX = (r32((uint32_t)(0x12485200)));
  /* 1245c0a4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1245c0a7 mov edx, dword ptr [0x124851f8] */
  EDX = (r32((uint32_t)(0x124851f8)));
  /* 1245c0ad mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1245c0b8 mov eax, dword ptr [0x12485200] */
  EAX = (r32((uint32_t)(0x12485200)));
  /* 1245c0bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1245c0c0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1245c0c3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1245c0c6 mov eax, dword ptr [0x12485200] */
  EAX = (r32((uint32_t)(0x12485200)));
  /* 1245c0cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1245c0ce mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1245c0d1 mov edx, dword ptr [0x12485200] */
  EDX = (r32((uint32_t)(0x12485200)));
  /* 1245c0d7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1245c0da movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1245c0de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245c0e0 jne 0x1245c0f6 */
  if (!C.zf) goto L_1245c0f6;
  /* 1245c0e2 mov edx, dword ptr [0x12485200] */
  EDX = (r32((uint32_t)(0x12485200)));
  /* 1245c0e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1245c0eb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1245c0ed mov ecx, dword ptr [0x12485200] */
  ECX = (r32((uint32_t)(0x12485200)));
  /* 1245c0f3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1245c0f6:;
  /* 1245c0f6 mov edx, dword ptr [0x12485200] */
  EDX = (r32((uint32_t)(0x12485200)));
  /* 1245c0fc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c100 jne 0x1245c198 */
  if (!C.zf) goto L_1245c198;
  /* 1245c106 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1245c10b push 0 */
  push32((uint32_t)(0x0u));
  /* 1245c10d mov eax, dword ptr [0x12485200] */
  EAX = (r32((uint32_t)(0x12485200)));
  /* 1245c112 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1245c115 push ecx */
  push32((uint32_t)(ECX));
  /* 1245c116 call dword ptr [0x12486330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486330))), 0x1245c11cu);
  /* 1245c11c mov edx, dword ptr [0x12485200] */
  EDX = (r32((uint32_t)(0x12485200)));
  /* 1245c122 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1245c125 push eax */
  push32((uint32_t)(EAX));
  /* 1245c126 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245c128 mov ecx, dword ptr [0x1248520c] */
  ECX = (r32((uint32_t)(0x1248520c)));
  /* 1245c12e push ecx */
  push32((uint32_t)(ECX));
  /* 1245c12f call dword ptr [0x12486334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486334))), 0x1245c135u);
  /* 1245c135 mov edx, dword ptr [0x12485204] */
  EDX = (r32((uint32_t)(0x12485204)));
  /* 1245c13b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245c13e mov eax, dword ptr [0x12485208] */
  EAX = (r32((uint32_t)(0x12485208)));
  /* 1245c143 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c145 mov ecx, dword ptr [0x12485200] */
  ECX = (r32((uint32_t)(0x12485200)));
  /* 1245c14b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c14e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245c150 push eax */
  push32((uint32_t)(EAX));
  /* 1245c151 mov edx, dword ptr [0x12485200] */
  EDX = (r32((uint32_t)(0x12485200)));
  /* 1245c157 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c15a push edx */
  push32((uint32_t)(EDX));
  /* 1245c15b mov eax, dword ptr [0x12485200] */
  EAX = (r32((uint32_t)(0x12485200)));
  /* 1245c160 push eax */
  push32((uint32_t)(EAX));
  /* 1245c161 call 0x1245f710 */
  push32(0x1245c166u); f_1245f710();
  /* 1245c166 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c169 mov ecx, dword ptr [0x12485204] */
  ECX = (r32((uint32_t)(0x12485204)));
  /* 1245c16f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245c172 mov dword ptr [0x12485204], ecx */
  w32((uint32_t)(0x12485204), (ECX));
  /* 1245c178 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245c17b cmp edx, dword ptr [0x12485200] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12485200))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c181 jbe 0x1245c18c */
  if ((C.cf||C.zf)) goto L_1245c18c;
  /* 1245c183 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245c186 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245c189 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1245c18c:;
  /* 1245c18c mov ecx, dword ptr [0x12485208] */
  ECX = (r32((uint32_t)(0x12485208)));
  /* 1245c192 mov dword ptr [0x124851fc], ecx */
  w32((uint32_t)(0x124851fc), (ECX));
L_1245c198:;
  /* 1245c198 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245c19b mov dword ptr [0x12485200], edx */
  w32((uint32_t)(0x12485200), (EDX));
  /* 1245c1a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c1a4 mov dword ptr [0x124851f8], eax */
  w32((uint32_t)(0x124851f8), (EAX));
L_1245c1a9:;
  /* 1245c1a9 mov esp, ebp */
  ESP = (EBP);
  /* 1245c1ab pop ebp */
  EBP = (pop32());
  /* 1245c1ac ret  */
  ESPCHK(0x1245bbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1b0 @ 0x1245c1b0 (1334 bytes, 427 insns) */
void f_1245c1b0(void) {
  FTRACE(0x1245c1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245c1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245c1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1245c1b3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245c1b6 push esi */
  push32((uint32_t)(ESI));
  /* 1245c1b7 mov eax, dword ptr [0x12485204] */
  EAX = (r32((uint32_t)(0x12485204)));
  /* 1245c1bc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245c1bf mov ecx, dword ptr [0x12485208] */
  ECX = (r32((uint32_t)(0x12485208)));
  /* 1245c1c5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c1c7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1245c1ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245c1cd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c1d0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1245c1d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1245c1d6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245c1d9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1245c1dc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245c1df mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1245c1e2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c1e6 jge 0x1245c1fc */
  if ((C.sf==C.of)) goto L_1245c1fc;
  /* 1245c1e8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1245c1eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245c1ee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245c1f0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1245c1f3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1245c1fa jmp 0x1245c211 */
  goto L_1245c211;
L_1245c1fc:;
  /* 1245c1fc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1245c203 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245c206 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245c209 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245c20c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245c20e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1245c211:;
  /* 1245c211 mov ecx, dword ptr [0x124851fc] */
  ECX = (r32((uint32_t)(0x124851fc)));
  /* 1245c217 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1245c21a:;
  /* 1245c21a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c21d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c220 jae 0x1245c246 */
  if (!C.cf) goto L_1245c246;
  /* 1245c222 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c225 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245c228 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1245c22a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c22d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1245c230 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1245c233 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1245c235 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245c237 je 0x1245c23b */
  if (C.zf) goto L_1245c23b;
  /* 1245c239 jmp 0x1245c246 */
  goto L_1245c246;
L_1245c23b:;
  /* 1245c23b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c23e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c241 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1245c244 jmp 0x1245c21a */
  goto L_1245c21a;
L_1245c246:;
  /* 1245c246 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c249 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c24c jne 0x1245c32d */
  if (!C.zf) goto L_1245c32d;
  /* 1245c252 mov eax, dword ptr [0x12485208] */
  EAX = (r32((uint32_t)(0x12485208)));
  /* 1245c257 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1245c25a:;
  /* 1245c25a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c25d cmp ecx, dword ptr [0x124851fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124851fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c263 jae 0x1245c289 */
  if (!C.cf) goto L_1245c289;
  /* 1245c265 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c268 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245c26b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1245c26d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c270 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1245c273 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1245c276 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1245c278 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245c27a je 0x1245c27e */
  if (C.zf) goto L_1245c27e;
  /* 1245c27c jmp 0x1245c289 */
  goto L_1245c289;
L_1245c27e:;
  /* 1245c27e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c281 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c284 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1245c287 jmp 0x1245c25a */
  goto L_1245c25a;
L_1245c289:;
  /* 1245c289 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c28c cmp ecx, dword ptr [0x124851fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124851fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c292 jne 0x1245c32d */
  if (!C.zf) goto L_1245c32d;
L_1245c298:;
  /* 1245c298 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c29b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c29e jae 0x1245c2b6 */
  if (!C.cf) goto L_1245c2b6;
  /* 1245c2a0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c2a3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c2a7 je 0x1245c2ab */
  if (C.zf) goto L_1245c2ab;
  /* 1245c2a9 jmp 0x1245c2b6 */
  goto L_1245c2b6;
L_1245c2ab:;
  /* 1245c2ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c2ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c2b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1245c2b4 jmp 0x1245c298 */
  goto L_1245c298;
L_1245c2b6:;
  /* 1245c2b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c2b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c2bc jne 0x1245c307 */
  if (!C.zf) goto L_1245c307;
  /* 1245c2be mov eax, dword ptr [0x12485208] */
  EAX = (r32((uint32_t)(0x12485208)));
  /* 1245c2c3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1245c2c6:;
  /* 1245c2c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c2c9 cmp ecx, dword ptr [0x124851fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124851fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c2cf jae 0x1245c2e7 */
  if (!C.cf) goto L_1245c2e7;
  /* 1245c2d1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c2d4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c2d8 je 0x1245c2dc */
  if (C.zf) goto L_1245c2dc;
  /* 1245c2da jmp 0x1245c2e7 */
  goto L_1245c2e7;
L_1245c2dc:;
  /* 1245c2dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c2df add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c2e2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1245c2e5 jmp 0x1245c2c6 */
  goto L_1245c2c6;
L_1245c2e7:;
  /* 1245c2e7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c2ea cmp ecx, dword ptr [0x124851fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124851fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c2f0 jne 0x1245c307 */
  if (!C.zf) goto L_1245c307;
  /* 1245c2f2 call 0x1245c6f0 */
  push32(0x1245c2f7u); f_1245c6f0();
  /* 1245c2f7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1245c2fa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c2fe jne 0x1245c307 */
  if (!C.zf) goto L_1245c307;
  /* 1245c300 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245c302 jmp 0x1245c6e1 */
  goto L_1245c6e1;
L_1245c307:;
  /* 1245c307 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c30a push edx */
  push32((uint32_t)(EDX));
  /* 1245c30b call 0x1245c800 */
  push32(0x1245c310u); f_1245c800();
  /* 1245c310 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c313 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c316 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1245c319 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1245c31b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c31e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1245c321 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c324 jne 0x1245c32d */
  if (!C.zf) goto L_1245c32d;
  /* 1245c326 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245c328 jmp 0x1245c6e1 */
  goto L_1245c6e1;
L_1245c32d:;
  /* 1245c32d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c330 mov dword ptr [0x124851fc], edx */
  w32((uint32_t)(0x124851fc), (EDX));
  /* 1245c336 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c339 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1245c33c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1245c33f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c342 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1245c344 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1245c347 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c34b je 0x1245c370 */
  if (C.zf) goto L_1245c370;
  /* 1245c34d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c350 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c353 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245c356 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1245c35a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c35d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c360 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1245c363 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1245c36a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1245c36c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245c36e jne 0x1245c3a5 */
  if (!C.zf) goto L_1245c3a5;
L_1245c370:;
  /* 1245c370 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1245c377:;
  /* 1245c377 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c37a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c37d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245c380 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1245c384 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c387 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c38a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1245c38d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1245c394 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1245c396 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245c398 jne 0x1245c3a5 */
  if (!C.zf) goto L_1245c3a5;
  /* 1245c39a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c39d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c3a0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1245c3a3 jmp 0x1245c377 */
  goto L_1245c377;
L_1245c3a5:;
  /* 1245c3a5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c3a8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245c3ae mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c3b1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1245c3b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1245c3bb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1245c3c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c3c5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c3c8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245c3cb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1245c3cf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1245c3d2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c3d6 jne 0x1245c3f2 */
  if (!C.zf) goto L_1245c3f2;
  /* 1245c3d8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1245c3df mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c3e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c3e5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1245c3e8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1245c3ef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1245c3f2:;
  /* 1245c3f2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c3f6 jl 0x1245c40b */
  if ((C.sf!=C.of)) goto L_1245c40b;
  /* 1245c3f8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245c3fb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1245c3fd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1245c400 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245c403 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c406 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1245c409 jmp 0x1245c3f2 */
  goto L_1245c3f2;
L_1245c40b:;
  /* 1245c40b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245c40e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c411 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1245c415 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1245c418 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c41b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1245c41d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245c420 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1245c423 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245c426 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1245c429 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245c42c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1245c42f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c433 jle 0x1245c43c */
  if ((C.zf||C.sf!=C.of)) goto L_1245c43c;
  /* 1245c435 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1245c43c:;
  /* 1245c43c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245c43f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c442 je 0x1245c660 */
  if (C.zf) goto L_1245c660;
  /* 1245c448 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c44b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c44e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245c451 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c454 jne 0x1245c52a */
  if (!C.zf) goto L_1245c52a;
  /* 1245c45a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c45e jge 0x1245c4bf */
  if ((C.sf==C.of)) goto L_1245c4bf;
  /* 1245c460 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245c465 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245c468 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245c46a not eax */
  EAX = (~(EAX));
  /* 1245c46c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c46f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c472 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1245c476 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1245c478 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c47b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c47e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1245c482 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c485 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c488 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1245c48b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1245c48e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c491 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c494 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1245c497 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c49a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c49d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1245c4a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245c4a3 jne 0x1245c4bd */
  if (!C.zf) goto L_1245c4bd;
  /* 1245c4a5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245c4aa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245c4ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245c4af not eax */
  EAX = (~(EAX));
  /* 1245c4b1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c4b4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1245c4b6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1245c4b8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c4bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1245c4bd:;
  /* 1245c4bd jmp 0x1245c52a */
  goto L_1245c52a;
L_1245c4bf:;
  /* 1245c4bf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245c4c2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245c4c5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245c4ca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245c4cc not edx */
  EDX = (~(EDX));
  /* 1245c4ce mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c4d1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c4d4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1245c4db and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1245c4dd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c4e0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c4e3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1245c4ea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c4ed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c4f0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1245c4f3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1245c4f6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c4f9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c4fc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1245c4ff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c502 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c505 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1245c509 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245c50b jne 0x1245c52a */
  if (!C.zf) goto L_1245c52a;
  /* 1245c50d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245c510 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245c513 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245c518 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245c51a not edx */
  EDX = (~(EDX));
  /* 1245c51c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c51f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245c522 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1245c524 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c527 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1245c52a:;
  /* 1245c52a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c52d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1245c530 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c533 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1245c536 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1245c539 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c53c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245c53f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c542 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1245c545 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1245c548 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c54c je 0x1245c660 */
  if (C.zf) goto L_1245c660;
  /* 1245c552 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245c555 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c558 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1245c55b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1245c55e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c561 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245c564 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245c567 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1245c56a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c56d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245c570 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1245c573 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245c576 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c579 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1245c57c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c57f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245c582 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c585 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1245c588 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c58b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c58e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245c591 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c594 jne 0x1245c660 */
  if (!C.zf) goto L_1245c660;
  /* 1245c59a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c59e jge 0x1245c5fa */
  if ((C.sf==C.of)) goto L_1245c5fa;
  /* 1245c5a0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c5a3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c5a6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1245c5aa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c5ad add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c5b0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1245c5b3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1245c5b5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c5b8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c5bb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1245c5be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245c5c0 jne 0x1245c5d8 */
  if (!C.zf) goto L_1245c5d8;
  /* 1245c5c2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245c5c7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245c5ca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245c5cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c5cf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1245c5d1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1245c5d3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c5d6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1245c5d8:;
  /* 1245c5d8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245c5dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245c5e0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245c5e2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c5e5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c5e8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1245c5ec or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1245c5ee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c5f1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c5f4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1245c5f8 jmp 0x1245c660 */
  goto L_1245c660;
L_1245c5fa:;
  /* 1245c5fa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c5fd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c600 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1245c604 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c607 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c60a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1245c60d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1245c60f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c612 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c615 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1245c618 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245c61a jne 0x1245c637 */
  if (!C.zf) goto L_1245c637;
  /* 1245c61c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245c61f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245c622 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245c627 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245c629 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c62c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245c62f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1245c631 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c634 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1245c637:;
  /* 1245c637 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245c63a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245c63d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245c642 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245c644 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c647 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c64a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1245c651 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1245c653 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c656 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c659 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1245c660:;
  /* 1245c660 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c664 je 0x1245c67a */
  if (C.zf) goto L_1245c67a;
  /* 1245c666 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c669 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245c66c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1245c66e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c671 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c674 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245c677 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1245c67a:;
  /* 1245c67a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c67d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c680 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1245c683 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245c686 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c689 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c68c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1245c68e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245c691 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c694 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c697 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c69a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1245c69d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c6a0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245c6a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c6a5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1245c6a7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c6aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c6ad mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1245c6af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245c6b1 jne 0x1245c6d3 */
  if (!C.zf) goto L_1245c6d3;
  /* 1245c6b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c6b6 cmp eax, dword ptr [0x12485200] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12485200))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c6bc jne 0x1245c6d3 */
  if (!C.zf) goto L_1245c6d3;
  /* 1245c6be mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c6c1 cmp ecx, dword ptr [0x124851f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124851f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c6c7 jne 0x1245c6d3 */
  if (!C.zf) goto L_1245c6d3;
  /* 1245c6c9 mov dword ptr [0x12485200], 0 */
  w32((uint32_t)(0x12485200), (0x0u));
L_1245c6d3:;
  /* 1245c6d3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1245c6d6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245c6d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1245c6db mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c6de add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1245c6e1:;
  /* 1245c6e1 pop esi */
  ESI = (pop32());
  /* 1245c6e2 mov esp, ebp */
  ESP = (EBP);
  /* 1245c6e4 pop ebp */
  EBP = (pop32());
  /* 1245c6e5 ret  */
  ESPCHK(0x1245c1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6f0 @ 0x1245c6f0 (271 bytes, 78 insns) */
void f_1245c6f0(void) {
  FTRACE(0x1245c6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245c6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245c6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1245c6f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1245c6f4 mov eax, dword ptr [0x12485204] */
  EAX = (r32((uint32_t)(0x12485204)));
  /* 1245c6f9 cmp eax, dword ptr [0x124851e8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124851e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c6ff jne 0x1245c74b */
  if (!C.zf) goto L_1245c74b;
  /* 1245c701 mov ecx, dword ptr [0x124851e8] */
  ECX = (r32((uint32_t)(0x124851e8)));
  /* 1245c707 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c70a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245c70d push ecx */
  push32((uint32_t)(ECX));
  /* 1245c70e mov edx, dword ptr [0x12485208] */
  EDX = (r32((uint32_t)(0x12485208)));
  /* 1245c714 push edx */
  push32((uint32_t)(EDX));
  /* 1245c715 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245c717 mov eax, dword ptr [0x1248520c] */
  EAX = (r32((uint32_t)(0x1248520c)));
  /* 1245c71c push eax */
  push32((uint32_t)(EAX));
  /* 1245c71d call dword ptr [0x12486310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486310))), 0x1245c723u);
  /* 1245c723 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245c726 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c72a jne 0x1245c733 */
  if (!C.zf) goto L_1245c733;
  /* 1245c72c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245c72e jmp 0x1245c7fb */
  goto L_1245c7fb;
L_1245c733:;
  /* 1245c733 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c736 mov dword ptr [0x12485208], ecx */
  w32((uint32_t)(0x12485208), (ECX));
  /* 1245c73c mov edx, dword ptr [0x124851e8] */
  EDX = (r32((uint32_t)(0x124851e8)));
  /* 1245c742 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c745 mov dword ptr [0x124851e8], edx */
  w32((uint32_t)(0x124851e8), (EDX));
L_1245c74b:;
  /* 1245c74b mov eax, dword ptr [0x12485204] */
  EAX = (r32((uint32_t)(0x12485204)));
  /* 1245c750 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245c753 mov ecx, dword ptr [0x12485208] */
  ECX = (r32((uint32_t)(0x12485208)));
  /* 1245c759 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c75b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1245c75e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1245c763 push 8 */
  push32((uint32_t)(0x8u));
  /* 1245c765 mov edx, dword ptr [0x1248520c] */
  EDX = (r32((uint32_t)(0x1248520c)));
  /* 1245c76b push edx */
  push32((uint32_t)(EDX));
  /* 1245c76c call dword ptr [0x12486314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486314))), 0x1245c772u);
  /* 1245c772 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c775 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1245c778 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c77b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c77f jne 0x1245c785 */
  if (!C.zf) goto L_1245c785;
  /* 1245c781 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245c783 jmp 0x1245c7fb */
  goto L_1245c7fb;
L_1245c785:;
  /* 1245c785 push 4 */
  push32((uint32_t)(0x4u));
  /* 1245c787 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1245c78c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1245c791 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245c793 call dword ptr [0x1248630c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248630c))), 0x1245c799u);
  /* 1245c799 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c79c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1245c79f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c7a2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c7a6 jne 0x1245c7c2 */
  if (!C.zf) goto L_1245c7c2;
  /* 1245c7a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c7ab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1245c7ae push ecx */
  push32((uint32_t)(ECX));
  /* 1245c7af push 0 */
  push32((uint32_t)(0x0u));
  /* 1245c7b1 mov edx, dword ptr [0x1248520c] */
  EDX = (r32((uint32_t)(0x1248520c)));
  /* 1245c7b7 push edx */
  push32((uint32_t)(EDX));
  /* 1245c7b8 call dword ptr [0x12486334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486334))), 0x1245c7beu);
  /* 1245c7be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245c7c0 jmp 0x1245c7fb */
  goto L_1245c7fb;
L_1245c7c2:;
  /* 1245c7c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c7c5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1245c7cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c7ce mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1245c7d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c7d8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1245c7df mov eax, dword ptr [0x12485204] */
  EAX = (r32((uint32_t)(0x12485204)));
  /* 1245c7e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c7e7 mov dword ptr [0x12485204], eax */
  w32((uint32_t)(0x12485204), (EAX));
  /* 1245c7ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c7ef mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1245c7f2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1245c7f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1245c7fb:;
  /* 1245c7fb mov esp, ebp */
  ESP = (EBP);
  /* 1245c7fd pop ebp */
  EBP = (pop32());
  /* 1245c7fe ret  */
  ESPCHK(0x1245c6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c800 @ 0x1245c800 (494 bytes, 149 insns) */
void f_1245c800(void) {
  FTRACE(0x1245c800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245c800 push ebp */
  push32((uint32_t)(EBP));
  /* 1245c801 mov ebp, esp */
  EBP = (ESP);
  /* 1245c803 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245c806 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245c809 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1245c80c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1245c80f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245c812 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1245c815 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1245c818 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1245c81f:;
  /* 1245c81f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c823 jl 0x1245c838 */
  if ((C.sf!=C.of)) goto L_1245c838;
  /* 1245c825 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245c828 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1245c82a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1245c82d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245c830 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c833 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1245c836 jmp 0x1245c81f */
  goto L_1245c81f;
L_1245c838:;
  /* 1245c838 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245c83b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245c841 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245c844 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1245c84b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1245c84e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1245c855 jmp 0x1245c860 */
  goto L_1245c860;
L_1245c857:;
  /* 1245c857 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245c85a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c85d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1245c860:;
  /* 1245c860 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c864 jge 0x1245c886 */
  if ((C.sf==C.of)) goto L_1245c886;
  /* 1245c866 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245c869 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245c86c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1245c86f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1245c872 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c875 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c878 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1245c87b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c87e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c881 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1245c884 jmp 0x1245c857 */
  goto L_1245c857;
L_1245c886:;
  /* 1245c886 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245c889 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1245c88c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245c88f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1245c892 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c894 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1245c897 push 4 */
  push32((uint32_t)(0x4u));
  /* 1245c899 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1245c89e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1245c8a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c8a6 push edx */
  push32((uint32_t)(EDX));
  /* 1245c8a7 call dword ptr [0x1248630c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248630c))), 0x1245c8adu);
  /* 1245c8ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245c8af jne 0x1245c8b9 */
  if (!C.zf) goto L_1245c8b9;
  /* 1245c8b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245c8b4 jmp 0x1245c9ea */
  goto L_1245c9ea;
L_1245c8b9:;
  /* 1245c8b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c8bc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c8c1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1245c8c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c8c7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1245c8ca jmp 0x1245c8d8 */
  goto L_1245c8d8;
L_1245c8cc:;
  /* 1245c8cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c8cf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c8d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1245c8d8:;
  /* 1245c8d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c8db cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245c8de ja 0x1245c93d */
  if ((!C.cf&&!C.zf)) goto L_1245c93d;
  /* 1245c8e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c8e3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1245c8ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c8ed mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1245c8f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245c8fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c8fd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1245c900 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c903 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1245c909 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c90c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c912 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c915 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1245c918 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c91b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245c921 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c924 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1245c927 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c92a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c92f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1245c932 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245c935 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1245c93b jmp 0x1245c8cc */
  goto L_1245c8cc;
L_1245c93d:;
  /* 1245c93d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245c940 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c946 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1245c949 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245c94c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c94f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245c952 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1245c955 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245c958 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1245c95b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1245c95e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c961 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245c964 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1245c967 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245c96a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c96d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245c970 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1245c973 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245c976 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1245c979 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1245c97c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245c97f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245c982 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1245c985 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245c988 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245c98b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1245c993 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245c996 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245c999 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1245c9a4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245c9a7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1245c9ab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245c9ae mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1245c9b1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1245c9b4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245c9b7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1245c9ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245c9bc jne 0x1245c9cd */
  if (!C.zf) goto L_1245c9cd;
  /* 1245c9be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245c9c1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245c9c4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1245c9c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245c9ca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1245c9cd:;
  /* 1245c9cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245c9d2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245c9d5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245c9d7 not edx */
  EDX = (~(EDX));
  /* 1245c9d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245c9dc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1245c9df and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1245c9e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245c9e4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1245c9e7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1245c9ea:;
  /* 1245c9ea mov esp, ebp */
  ESP = (EBP);
  /* 1245c9ec pop ebp */
  EBP = (pop32());
  /* 1245c9ed ret  */
  ESPCHK(0x1245c800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9f0 @ 0x1245c9f0 (1515 bytes, 489 insns) */
void f_1245c9f0(void) {
  FTRACE(0x1245c9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245c9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245c9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1245c9f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245c9f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245c9f9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245c9fc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1245c9fe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1245ca01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245ca04 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1245ca07 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1245ca0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245ca0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245ca10 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245ca13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1245ca16 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245ca19 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1245ca1c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1245ca1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ca22 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245ca28 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245ca2b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1245ca32 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1245ca35 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245ca38 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245ca3b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1245ca3e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245ca41 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1245ca43 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245ca46 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1245ca49 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245ca4c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ca4f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1245ca52 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245ca55 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1245ca57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1245ca5a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245ca5d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ca60 jle 0x1245cd16 */
  if ((C.zf||C.sf!=C.of)) goto L_1245cd16;
  /* 1245ca66 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245ca69 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1245ca6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245ca6e jne 0x1245ca7b */
  if (!C.zf) goto L_1245ca7b;
  /* 1245ca70 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245ca73 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ca76 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ca79 jle 0x1245ca82 */
  if ((C.zf||C.sf!=C.of)) goto L_1245ca82;
L_1245ca7b:;
  /* 1245ca7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245ca7d jmp 0x1245cfd7 */
  goto L_1245cfd7;
L_1245ca82:;
  /* 1245ca82 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245ca85 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1245ca88 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245ca8b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1245ca8e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ca92 jbe 0x1245ca9b */
  if ((C.cf||C.zf)) goto L_1245ca9b;
  /* 1245ca94 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1245ca9b:;
  /* 1245ca9b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245ca9e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245caa1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245caa4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245caa7 jne 0x1245cb7d */
  if (!C.zf) goto L_1245cb7d;
  /* 1245caad cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245cab1 jae 0x1245cb12 */
  if (!C.cf) goto L_1245cb12;
  /* 1245cab3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245cab8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245cabb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245cabd not edx */
  EDX = (~(EDX));
  /* 1245cabf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245cac2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cac5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1245cac9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1245cacb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245cace mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cad1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1245cad5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cad8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cadb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1245cade sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1245cae1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cae4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cae7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1245caea mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245caed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245caf0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1245caf4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245caf6 jne 0x1245cb10 */
  if (!C.zf) goto L_1245cb10;
  /* 1245caf8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245cafd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245cb00 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245cb02 not edx */
  EDX = (~(EDX));
  /* 1245cb04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245cb07 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245cb09 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1245cb0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245cb0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1245cb10:;
  /* 1245cb10 jmp 0x1245cb7d */
  goto L_1245cb7d;
L_1245cb12:;
  /* 1245cb12 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245cb15 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245cb18 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245cb1d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245cb1f not eax */
  EAX = (~(EAX));
  /* 1245cb21 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245cb24 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cb27 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1245cb2e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1245cb30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245cb33 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cb36 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1245cb3d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cb40 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cb43 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1245cb46 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1245cb49 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cb4c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cb4f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1245cb52 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cb55 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cb58 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1245cb5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245cb5e jne 0x1245cb7d */
  if (!C.zf) goto L_1245cb7d;
  /* 1245cb60 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245cb63 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245cb66 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245cb6b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245cb6d not eax */
  EAX = (~(EAX));
  /* 1245cb6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245cb72 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245cb75 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1245cb77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245cb7a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1245cb7d:;
  /* 1245cb7d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245cb80 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1245cb83 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245cb86 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245cb89 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1245cb8c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245cb8f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1245cb92 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245cb95 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1245cb98 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1245cb9b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245cb9e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cba1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245cba4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1245cba7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245cbab jle 0x1245ccf7 */
  if ((C.zf||C.sf!=C.of)) goto L_1245ccf7;
  /* 1245cbb1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245cbb4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cbb7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1245cbba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245cbbd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1245cbc0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245cbc3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1245cbc6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245cbca jbe 0x1245cbd3 */
  if ((C.cf||C.zf)) goto L_1245cbd3;
  /* 1245cbcc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1245cbd3:;
  /* 1245cbd3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245cbd6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245cbd9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1245cbdc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1245cbdf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245cbe2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245cbe5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245cbe8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1245cbeb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245cbee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245cbf1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1245cbf4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245cbf7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245cbfa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1245cbfd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245cc00 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245cc03 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245cc06 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1245cc09 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245cc0c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245cc0f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245cc12 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245cc15 jne 0x1245cce3 */
  if (!C.zf) goto L_1245cce3;
  /* 1245cc1b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245cc1f jae 0x1245cc7c */
  if (!C.cf) goto L_1245cc7c;
  /* 1245cc21 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cc24 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cc27 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1245cc2b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cc2e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cc31 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1245cc34 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1245cc37 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cc3a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cc3d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1245cc40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245cc42 jne 0x1245cc5a */
  if (!C.zf) goto L_1245cc5a;
  /* 1245cc44 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245cc49 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245cc4c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245cc4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245cc51 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245cc53 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1245cc55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245cc58 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1245cc5a:;
  /* 1245cc5a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245cc5f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245cc62 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245cc64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245cc67 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cc6a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1245cc6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1245cc70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245cc73 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cc76 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1245cc7a jmp 0x1245cce3 */
  goto L_1245cce3;
L_1245cc7c:;
  /* 1245cc7c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cc7f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cc82 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1245cc86 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cc89 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cc8c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1245cc8f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1245cc92 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cc95 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cc98 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1245cc9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245cc9d jne 0x1245ccba */
  if (!C.zf) goto L_1245ccba;
  /* 1245cc9f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245cca2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245cca5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245ccaa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245ccac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245ccaf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245ccb2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1245ccb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245ccb7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1245ccba:;
  /* 1245ccba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245ccbd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245ccc0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245ccc5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245ccc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ccca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cccd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1245ccd4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1245ccd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ccd9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245ccdc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1245cce3:;
  /* 1245cce3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245cce6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245cce9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1245cceb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245ccee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ccf1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245ccf4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1245ccf7:;
  /* 1245ccf7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245ccfa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ccfd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245cd00 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1245cd02 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245cd05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cd08 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245cd0b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cd0e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1245cd11 jmp 0x1245cfd2 */
  goto L_1245cfd2;
L_1245cd16:;
  /* 1245cd16 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245cd19 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245cd1c jge 0x1245cfd2 */
  if ((C.sf==C.of)) goto L_1245cfd2;
  /* 1245cd22 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245cd25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cd28 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245cd2b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1245cd2d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245cd30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cd33 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245cd36 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cd39 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1245cd3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245cd3f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cd42 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1245cd45 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245cd48 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245cd4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1245cd4e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245cd51 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1245cd54 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245cd57 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1245cd5a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245cd5e jbe 0x1245cd67 */
  if ((C.cf||C.zf)) goto L_1245cd67;
  /* 1245cd60 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1245cd67:;
  /* 1245cd67 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245cd6a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1245cd6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245cd6f jne 0x1245ceb0 */
  if (!C.zf) goto L_1245ceb0;
  /* 1245cd75 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245cd78 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1245cd7b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245cd7e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1245cd81 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245cd85 jbe 0x1245cd8e */
  if ((C.cf||C.zf)) goto L_1245cd8e;
  /* 1245cd87 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1245cd8e:;
  /* 1245cd8e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245cd91 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245cd94 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245cd97 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245cd9a jne 0x1245ce70 */
  if (!C.zf) goto L_1245ce70;
  /* 1245cda0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245cda4 jae 0x1245ce05 */
  if (!C.cf) goto L_1245ce05;
  /* 1245cda6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245cdab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245cdae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245cdb0 not edx */
  EDX = (~(EDX));
  /* 1245cdb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245cdb5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cdb8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1245cdbc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1245cdbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245cdc1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cdc4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1245cdc8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cdcb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cdce mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1245cdd1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1245cdd4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cdd7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cdda mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1245cddd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cde0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cde3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1245cde7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245cde9 jne 0x1245ce03 */
  if (!C.zf) goto L_1245ce03;
  /* 1245cdeb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245cdf0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245cdf3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245cdf5 not edx */
  EDX = (~(EDX));
  /* 1245cdf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245cdfa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245cdfc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1245cdfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245ce01 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1245ce03:;
  /* 1245ce03 jmp 0x1245ce70 */
  goto L_1245ce70;
L_1245ce05:;
  /* 1245ce05 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245ce08 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245ce0b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245ce10 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245ce12 not eax */
  EAX = (~(EAX));
  /* 1245ce14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ce17 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245ce1a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1245ce21 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1245ce23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ce26 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245ce29 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1245ce30 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245ce33 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ce36 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1245ce39 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1245ce3c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245ce3f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ce42 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1245ce45 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245ce48 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ce4b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1245ce4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245ce51 jne 0x1245ce70 */
  if (!C.zf) goto L_1245ce70;
  /* 1245ce53 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245ce56 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245ce59 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245ce5e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245ce60 not eax */
  EAX = (~(EAX));
  /* 1245ce62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245ce65 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245ce68 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1245ce6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245ce6d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1245ce70:;
  /* 1245ce70 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245ce73 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1245ce76 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245ce79 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245ce7c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1245ce7f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245ce82 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1245ce85 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245ce88 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1245ce8b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1245ce8e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245ce91 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ce94 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1245ce97 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245ce9a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1245ce9d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245cea0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1245cea3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245cea7 jbe 0x1245ceb0 */
  if ((C.cf||C.zf)) goto L_1245ceb0;
  /* 1245cea9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1245ceb0:;
  /* 1245ceb0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245ceb3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245ceb6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1245ceb9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1245cebc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245cebf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245cec2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245cec5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1245cec8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245cecb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245cece mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1245ced1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245ced4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245ced7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1245ceda mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245cedd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245cee0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245cee3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1245cee6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245cee9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245ceec mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245ceef cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245cef2 jne 0x1245cfbe */
  if (!C.zf) goto L_1245cfbe;
  /* 1245cef8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245cefc jae 0x1245cf58 */
  if (!C.cf) goto L_1245cf58;
  /* 1245cefe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cf01 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cf04 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1245cf08 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cf0b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cf0e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1245cf11 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1245cf13 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cf16 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cf19 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1245cf1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245cf1e jne 0x1245cf36 */
  if (!C.zf) goto L_1245cf36;
  /* 1245cf20 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245cf25 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245cf28 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245cf2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245cf2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1245cf2f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1245cf31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245cf34 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1245cf36:;
  /* 1245cf36 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245cf3b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245cf3e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245cf40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245cf43 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cf46 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1245cf4a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1245cf4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245cf4f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cf52 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1245cf56 jmp 0x1245cfbe */
  goto L_1245cfbe;
L_1245cf58:;
  /* 1245cf58 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cf5b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cf5e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1245cf62 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cf65 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cf68 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1245cf6b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1245cf6d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cf70 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cf73 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1245cf76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245cf78 jne 0x1245cf95 */
  if (!C.zf) goto L_1245cf95;
  /* 1245cf7a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245cf7d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245cf80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1245cf85 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1245cf87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245cf8a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245cf8d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1245cf8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245cf92 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1245cf95:;
  /* 1245cf95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245cf98 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245cf9b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245cfa0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245cfa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245cfa5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cfa8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1245cfaf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1245cfb1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245cfb4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245cfb7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1245cfbe:;
  /* 1245cfbe mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245cfc1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245cfc4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1245cfc6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245cfc9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245cfcc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245cfcf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1245cfd2:;
  /* 1245cfd2 mov eax, 1 */
  EAX = (0x1u);
L_1245cfd7:;
  /* 1245cfd7 mov esp, ebp */
  ESP = (EBP);
  /* 1245cfd9 pop ebp */
  EBP = (pop32());
  /* 1245cfda ret  */
  ESPCHK(0x1245c9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfe0 @ 0x1245cfe0 (304 bytes, 79 insns) */
void f_1245cfe0(void) {
  FTRACE(0x1245cfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245cfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245cfe1 mov ebp, esp */
  EBP = (ESP);
  /* 1245cfe3 push ecx */
  push32((uint32_t)(ECX));
  /* 1245cfe4 cmp dword ptr [0x12485200], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12485200))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245cfeb je 0x1245d10c */
  if (C.zf) goto L_1245d10c;
  /* 1245cff1 mov eax, dword ptr [0x124851f8] */
  EAX = (r32((uint32_t)(0x124851f8)));
  /* 1245cff6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1245cff9 mov ecx, dword ptr [0x12485200] */
  ECX = (r32((uint32_t)(0x12485200)));
  /* 1245cfff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1245d002 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d004 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1245d007 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1245d00c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1245d011 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245d014 push eax */
  push32((uint32_t)(EAX));
  /* 1245d015 call dword ptr [0x12486330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486330))), 0x1245d01bu);
  /* 1245d01b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245d020 mov ecx, dword ptr [0x124851f8] */
  ECX = (r32((uint32_t)(0x124851f8)));
  /* 1245d026 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245d028 mov eax, dword ptr [0x12485200] */
  EAX = (r32((uint32_t)(0x12485200)));
  /* 1245d02d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1245d030 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1245d032 mov edx, dword ptr [0x12485200] */
  EDX = (r32((uint32_t)(0x12485200)));
  /* 1245d038 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1245d03b mov eax, dword ptr [0x12485200] */
  EAX = (r32((uint32_t)(0x12485200)));
  /* 1245d040 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1245d043 mov edx, dword ptr [0x124851f8] */
  EDX = (r32((uint32_t)(0x124851f8)));
  /* 1245d049 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1245d054 mov eax, dword ptr [0x12485200] */
  EAX = (r32((uint32_t)(0x12485200)));
  /* 1245d059 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1245d05c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1245d05f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1245d062 mov eax, dword ptr [0x12485200] */
  EAX = (r32((uint32_t)(0x12485200)));
  /* 1245d067 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1245d06a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1245d06d mov edx, dword ptr [0x12485200] */
  EDX = (r32((uint32_t)(0x12485200)));
  /* 1245d073 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1245d076 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1245d07a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245d07c jne 0x1245d092 */
  if (!C.zf) goto L_1245d092;
  /* 1245d07e mov edx, dword ptr [0x12485200] */
  EDX = (r32((uint32_t)(0x12485200)));
  /* 1245d084 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1245d087 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1245d089 mov ecx, dword ptr [0x12485200] */
  ECX = (r32((uint32_t)(0x12485200)));
  /* 1245d08f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1245d092:;
  /* 1245d092 mov edx, dword ptr [0x12485200] */
  EDX = (r32((uint32_t)(0x12485200)));
  /* 1245d098 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d09c jne 0x1245d102 */
  if (!C.zf) goto L_1245d102;
  /* 1245d09e cmp dword ptr [0x12485204], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12485204))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d0a5 jle 0x1245d102 */
  if ((C.zf||C.sf!=C.of)) goto L_1245d102;
  /* 1245d0a7 mov eax, dword ptr [0x12485200] */
  EAX = (r32((uint32_t)(0x12485200)));
  /* 1245d0ac mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1245d0af push ecx */
  push32((uint32_t)(ECX));
  /* 1245d0b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245d0b2 mov edx, dword ptr [0x1248520c] */
  EDX = (r32((uint32_t)(0x1248520c)));
  /* 1245d0b8 push edx */
  push32((uint32_t)(EDX));
  /* 1245d0b9 call dword ptr [0x12486334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486334))), 0x1245d0bfu);
  /* 1245d0bf mov eax, dword ptr [0x12485204] */
  EAX = (r32((uint32_t)(0x12485204)));
  /* 1245d0c4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245d0c7 mov ecx, dword ptr [0x12485208] */
  ECX = (r32((uint32_t)(0x12485208)));
  /* 1245d0cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d0cf mov edx, dword ptr [0x12485200] */
  EDX = (r32((uint32_t)(0x12485200)));
  /* 1245d0d5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d0d8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245d0da push ecx */
  push32((uint32_t)(ECX));
  /* 1245d0db mov eax, dword ptr [0x12485200] */
  EAX = (r32((uint32_t)(0x12485200)));
  /* 1245d0e0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d0e3 push eax */
  push32((uint32_t)(EAX));
  /* 1245d0e4 mov ecx, dword ptr [0x12485200] */
  ECX = (r32((uint32_t)(0x12485200)));
  /* 1245d0ea push ecx */
  push32((uint32_t)(ECX));
  /* 1245d0eb call 0x1245f710 */
  push32(0x1245d0f0u); f_1245f710();
  /* 1245d0f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d0f3 mov edx, dword ptr [0x12485204] */
  EDX = (r32((uint32_t)(0x12485204)));
  /* 1245d0f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245d0fc mov dword ptr [0x12485204], edx */
  w32((uint32_t)(0x12485204), (EDX));
L_1245d102:;
  /* 1245d102 mov dword ptr [0x12485200], 0 */
  w32((uint32_t)(0x12485200), (0x0u));
L_1245d10c:;
  /* 1245d10c mov esp, ebp */
  ESP = (EBP);
  /* 1245d10e pop ebp */
  EBP = (pop32());
  /* 1245d10f ret  */
  ESPCHK(0x1245cfe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d110 @ 0x1245d110 (1565 bytes, 343 insns) */
void f_1245d110(void) {
  FTRACE(0x1245d110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245d110 push ebp */
  push32((uint32_t)(EBP));
  /* 1245d111 mov ebp, esp */
  EBP = (ESP);
  /* 1245d113 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245d119 mov eax, dword ptr [0x12485204] */
  EAX = (r32((uint32_t)(0x12485204)));
  /* 1245d11e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245d121 push eax */
  push32((uint32_t)(EAX));
  /* 1245d122 mov ecx, dword ptr [0x12485208] */
  ECX = (r32((uint32_t)(0x12485208)));
  /* 1245d128 push ecx */
  push32((uint32_t)(ECX));
  /* 1245d129 call dword ptr [0x1248637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248637c))), 0x1245d12fu);
  /* 1245d12f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245d131 je 0x1245d13b */
  if (C.zf) goto L_1245d13b;
  /* 1245d133 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245d136 jmp 0x1245d729 */
  goto L_1245d729;
L_1245d13b:;
  /* 1245d13b mov edx, dword ptr [0x12485208] */
  EDX = (r32((uint32_t)(0x12485208)));
  /* 1245d141 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1245d147 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1245d151 jmp 0x1245d162 */
  goto L_1245d162;
L_1245d153:;
  /* 1245d153 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1245d159 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d15c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1245d162:;
  /* 1245d162 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1245d168 cmp ecx, dword ptr [0x12485204] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12485204))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d16e jge 0x1245d727 */
  if ((C.sf==C.of)) goto L_1245d727;
  /* 1245d174 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1245d17a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1245d17d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1245d183 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1245d188 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1245d18e push ecx */
  push32((uint32_t)(ECX));
  /* 1245d18f call dword ptr [0x1248637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248637c))), 0x1245d195u);
  /* 1245d195 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245d197 je 0x1245d1a3 */
  if (C.zf) goto L_1245d1a3;
  /* 1245d199 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1245d19e jmp 0x1245d729 */
  goto L_1245d729;
L_1245d1a3:;
  /* 1245d1a3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1245d1a9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1245d1ac mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1245d1b2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1245d1b8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d1be mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1245d1c1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1245d1c7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1245d1ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245d1cd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1245d1d7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1245d1e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1245d1e8 jmp 0x1245d1f3 */
  goto L_1245d1f3;
L_1245d1ea:;
  /* 1245d1ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245d1ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d1f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1245d1f3:;
  /* 1245d1f3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d1f7 jge 0x1245d6eb */
  if ((C.sf==C.of)) goto L_1245d6eb;
  /* 1245d1fd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1245d207 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1245d211 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1245d21b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1245d225 jmp 0x1245d236 */
  goto L_1245d236;
L_1245d227:;
  /* 1245d227 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1245d22d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d230 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1245d236:;
  /* 1245d236 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d23d jge 0x1245d252 */
  if ((C.sf==C.of)) goto L_1245d252;
  /* 1245d23f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1245d245 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1245d250 jmp 0x1245d227 */
  goto L_1245d227;
L_1245d252:;
  /* 1245d252 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d256 jl 0x1245d68d */
  if ((C.sf!=C.of)) goto L_1245d68d;
  /* 1245d25c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1245d261 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1245d267 push ecx */
  push32((uint32_t)(ECX));
  /* 1245d268 call dword ptr [0x1248637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248637c))), 0x1245d26eu);
  /* 1245d26e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245d270 je 0x1245d27c */
  if (C.zf) goto L_1245d27c;
  /* 1245d272 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1245d277 jmp 0x1245d729 */
  goto L_1245d729;
L_1245d27c:;
  /* 1245d27c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1245d282 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1245d285 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1245d28f jmp 0x1245d2a0 */
  goto L_1245d2a0;
L_1245d291:;
  /* 1245d291 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1245d297 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d29a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1245d2a0:;
  /* 1245d2a0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d2a7 jge 0x1245d424 */
  if ((C.sf==C.of)) goto L_1245d424;
  /* 1245d2ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245d2b0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d2b3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1245d2b9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1245d2bf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d2c5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1245d2cb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1245d2d1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d2d5 jne 0x1245d2e2 */
  if (!C.zf) goto L_1245d2e2;
  /* 1245d2d7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1245d2dd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d2e0 je 0x1245d2ec */
  if (C.zf) goto L_1245d2ec;
L_1245d2e2:;
  /* 1245d2e2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1245d2e7 jmp 0x1245d729 */
  goto L_1245d729;
L_1245d2ec:;
  /* 1245d2ec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1245d2f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1245d2f4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1245d2fa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1245d300 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1245d306 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1245d30c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1245d30f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245d311 je 0x1245d349 */
  if (C.zf) goto L_1245d349;
  /* 1245d313 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1245d319 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245d31c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1245d322 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d32c jle 0x1245d338 */
  if ((C.zf||C.sf!=C.of)) goto L_1245d338;
  /* 1245d32e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1245d333 jmp 0x1245d729 */
  goto L_1245d729;
L_1245d338:;
  /* 1245d338 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1245d33e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d341 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1245d347 jmp 0x1245d38b */
  goto L_1245d38b;
L_1245d349:;
  /* 1245d349 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1245d34f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1245d352 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245d355 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1245d35b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d362 jle 0x1245d36e */
  if ((C.zf||C.sf!=C.of)) goto L_1245d36e;
  /* 1245d364 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1245d36e:;
  /* 1245d36e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1245d374 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1245d37b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d37e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1245d384 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1245d38b:;
  /* 1245d38b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d392 jl 0x1245d3ad */
  if ((C.sf!=C.of)) goto L_1245d3ad;
  /* 1245d394 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1245d39a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1245d39d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245d39f jne 0x1245d3ad */
  if (!C.zf) goto L_1245d3ad;
  /* 1245d3a1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d3ab jle 0x1245d3b7 */
  if ((C.zf||C.sf!=C.of)) goto L_1245d3b7;
L_1245d3ad:;
  /* 1245d3ad mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1245d3b2 jmp 0x1245d729 */
  goto L_1245d729;
L_1245d3b7:;
  /* 1245d3b7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1245d3bd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d3c3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1245d3c6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d3cc je 0x1245d3d8 */
  if (C.zf) goto L_1245d3d8;
  /* 1245d3ce mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1245d3d3 jmp 0x1245d729 */
  goto L_1245d729;
L_1245d3d8:;
  /* 1245d3d8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1245d3de add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d3e4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1245d3ea mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1245d3f0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d3f6 jb 0x1245d2ec */
  if (C.cf) goto L_1245d2ec;
  /* 1245d3fc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1245d402 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d408 je 0x1245d414 */
  if (C.zf) goto L_1245d414;
  /* 1245d40a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1245d40f jmp 0x1245d729 */
  goto L_1245d729;
L_1245d414:;
  /* 1245d414 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245d417 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d41c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1245d41f jmp 0x1245d291 */
  goto L_1245d291;
L_1245d424:;
  /* 1245d424 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245d427 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1245d429 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d42f je 0x1245d43b */
  if (C.zf) goto L_1245d43b;
  /* 1245d431 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1245d436 jmp 0x1245d729 */
  goto L_1245d729;
L_1245d43b:;
  /* 1245d43b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245d43e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1245d444 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1245d44b jmp 0x1245d456 */
  goto L_1245d456;
L_1245d44d:;
  /* 1245d44d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245d450 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d453 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1245d456:;
  /* 1245d456 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d45a jge 0x1245d68d */
  if ((C.sf==C.of)) goto L_1245d68d;
  /* 1245d460 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1245d46a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1245d470 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1245d476:;
  /* 1245d476 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1245d47c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245d47f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1245d485 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1245d48b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d491 je 0x1245d5ba */
  if (C.zf) goto L_1245d5ba;
  /* 1245d497 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245d49a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1245d4a0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d4a7 je 0x1245d5ba */
  if (C.zf) goto L_1245d5ba;
  /* 1245d4ad mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1245d4b3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d4b9 jb 0x1245d4ce */
  if (C.cf) goto L_1245d4ce;
  /* 1245d4bb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1245d4c1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d4c6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d4cc jb 0x1245d4d8 */
  if (C.cf) goto L_1245d4d8;
L_1245d4ce:;
  /* 1245d4ce mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1245d4d3 jmp 0x1245d729 */
  goto L_1245d729;
L_1245d4d8:;
  /* 1245d4d8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1245d4de and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1245d4e4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1245d4ea mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1245d4f0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d4f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1245d4f6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245d4f9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d4fe mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1245d504:;
  /* 1245d504 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245d507 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d50d je 0x1245d52e */
  if (C.zf) goto L_1245d52e;
  /* 1245d50f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245d512 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d518 jne 0x1245d51c */
  if (!C.zf) goto L_1245d51c;
  /* 1245d51a jmp 0x1245d52e */
  goto L_1245d52e;
L_1245d51c:;
  /* 1245d51c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245d51f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245d521 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1245d524 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245d527 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d529 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1245d52c jmp 0x1245d504 */
  goto L_1245d504;
L_1245d52e:;
  /* 1245d52e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245d531 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d537 jne 0x1245d543 */
  if (!C.zf) goto L_1245d543;
  /* 1245d539 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1245d53e jmp 0x1245d729 */
  goto L_1245d729;
L_1245d543:;
  /* 1245d543 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1245d549 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1245d54b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1245d54e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245d551 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1245d557 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d55e jle 0x1245d56a */
  if ((C.zf||C.sf!=C.of)) goto L_1245d56a;
  /* 1245d560 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1245d56a:;
  /* 1245d56a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1245d570 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d573 je 0x1245d57f */
  if (C.zf) goto L_1245d57f;
  /* 1245d575 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1245d57a jmp 0x1245d729 */
  goto L_1245d729;
L_1245d57f:;
  /* 1245d57f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1245d585 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1245d588 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d58e je 0x1245d59a */
  if (C.zf) goto L_1245d59a;
  /* 1245d590 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1245d595 jmp 0x1245d729 */
  goto L_1245d729;
L_1245d59a:;
  /* 1245d59a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1245d5a0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1245d5a6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1245d5ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d5af mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1245d5b5 jmp 0x1245d476 */
  goto L_1245d476;
L_1245d5ba:;
  /* 1245d5ba cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d5c1 je 0x1245d631 */
  if (C.zf) goto L_1245d631;
  /* 1245d5c3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d5c7 jge 0x1245d5fb */
  if ((C.sf==C.of)) goto L_1245d5fb;
  /* 1245d5c9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245d5ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245d5d1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245d5d3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1245d5d9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1245d5db mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1245d5e1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245d5e6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245d5e9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245d5eb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1245d5f1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1245d5f3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1245d5f9 jmp 0x1245d631 */
  goto L_1245d631;
L_1245d5fb:;
  /* 1245d5fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245d5fe sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245d601 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245d606 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245d608 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1245d60e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1245d610 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1245d616 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245d619 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245d61c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1245d621 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1245d623 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1245d629 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1245d62b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1245d631:;
  /* 1245d631 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1245d637 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245d63a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d640 jne 0x1245d654 */
  if (!C.zf) goto L_1245d654;
  /* 1245d642 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245d645 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1245d64b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d652 je 0x1245d65e */
  if (C.zf) goto L_1245d65e;
L_1245d654:;
  /* 1245d654 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1245d659 jmp 0x1245d729 */
  goto L_1245d729;
L_1245d65e:;
  /* 1245d65e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1245d664 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1245d667 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d66d je 0x1245d679 */
  if (C.zf) goto L_1245d679;
  /* 1245d66f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1245d674 jmp 0x1245d729 */
  goto L_1245d729;
L_1245d679:;
  /* 1245d679 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1245d67f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d682 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1245d688 jmp 0x1245d44d */
  goto L_1245d44d;
L_1245d68d:;
  /* 1245d68d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245d690 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1245d696 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1245d69c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d6a0 jne 0x1245d6ba */
  if (!C.zf) goto L_1245d6ba;
  /* 1245d6a2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245d6a5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1245d6ab mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1245d6b1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d6b8 je 0x1245d6c1 */
  if (C.zf) goto L_1245d6c1;
L_1245d6ba:;
  /* 1245d6ba mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1245d6bf jmp 0x1245d729 */
  goto L_1245d729;
L_1245d6c1:;
  /* 1245d6c1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1245d6c7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d6cd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1245d6d3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245d6d6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d6db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1245d6de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245d6e1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1245d6e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1245d6e6 jmp 0x1245d1ea */
  goto L_1245d1ea;
L_1245d6eb:;
  /* 1245d6eb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1245d6f1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1245d6f7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d6f9 jne 0x1245d70c */
  if (!C.zf) goto L_1245d70c;
  /* 1245d6fb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1245d701 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1245d707 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d70a je 0x1245d713 */
  if (C.zf) goto L_1245d713;
L_1245d70c:;
  /* 1245d70c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1245d711 jmp 0x1245d729 */
  goto L_1245d729;
L_1245d713:;
  /* 1245d713 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1245d719 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d71c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1245d722 jmp 0x1245d153 */
  goto L_1245d153;
L_1245d727:;
  /* 1245d727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1245d729:;
  /* 1245d729 mov esp, ebp */
  ESP = (EBP);
  /* 1245d72b pop ebp */
  EBP = (pop32());
  /* 1245d72c ret  */
  ESPCHK(0x1245d110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d730 @ 0x1245d730 (250 bytes, 92 insns) */
void f_1245d730(void) {
  FTRACE(0x1245d730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245d730 push ebp */
  push32((uint32_t)(EBP));
  /* 1245d731 mov ebp, esp */
  EBP = (ESP);
  /* 1245d733 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245d736 push ebx */
  push32((uint32_t)(EBX));
  /* 1245d737 push esi */
  push32((uint32_t)(ESI));
  /* 1245d738 push edi */
  push32((uint32_t)(EDI));
  /* 1245d739 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1245d73c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1245d73f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1245d742 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1245d745:;
  /* 1245d745 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d749 jne 0x1245d769 */
  if (!C.zf) goto L_1245d769;
  /* 1245d74b push 0x1247f57c */
  push32((uint32_t)(0x1247f57cu));
  /* 1245d750 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245d752 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1245d754 push 0x1247f570 */
  push32((uint32_t)(0x1247f570u));
  /* 1245d759 push 2 */
  push32((uint32_t)(0x2u));
  /* 1245d75b call 0x124568e0 */
  push32(0x1245d760u); f_124568e0();
  /* 1245d760 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d763 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d766 jne 0x1245d769 */
  if (!C.zf) goto L_1245d769;
  /* 1245d768 int3  */
  x86_unimpl("int3 @ 0x1245d768");
L_1245d769:;
  /* 1245d769 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245d76b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245d76d jne 0x1245d745 */
  if (!C.zf) goto L_1245d745;
L_1245d76f:;
  /* 1245d76f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d773 jne 0x1245d793 */
  if (!C.zf) goto L_1245d793;
  /* 1245d775 push 0x1247f560 */
  push32((uint32_t)(0x1247f560u));
  /* 1245d77a push 0 */
  push32((uint32_t)(0x0u));
  /* 1245d77c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1245d77e push 0x1247f570 */
  push32((uint32_t)(0x1247f570u));
  /* 1245d783 push 2 */
  push32((uint32_t)(0x2u));
  /* 1245d785 call 0x124568e0 */
  push32(0x1245d78au); f_124568e0();
  /* 1245d78a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d78d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d790 jne 0x1245d793 */
  if (!C.zf) goto L_1245d793;
  /* 1245d792 int3  */
  x86_unimpl("int3 @ 0x1245d792");
L_1245d793:;
  /* 1245d793 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245d795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245d797 jne 0x1245d76f */
  if (!C.zf) goto L_1245d76f;
  /* 1245d799 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245d79c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1245d7a3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245d7a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245d7a9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1245d7ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245d7af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245d7b2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1245d7b4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245d7b7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1245d7be mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245d7c1 push ecx */
  push32((uint32_t)(ECX));
  /* 1245d7c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245d7c5 push edx */
  push32((uint32_t)(EDX));
  /* 1245d7c6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245d7c9 push eax */
  push32((uint32_t)(EAX));
  /* 1245d7ca call 0x1245e7b0 */
  push32(0x1245d7cfu); f_1245e7b0();
  /* 1245d7cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d7d2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1245d7d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245d7d8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245d7db sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245d7de mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245d7e1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1245d7e4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245d7e7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d7eb jl 0x1245d80f */
  if ((C.sf!=C.of)) goto L_1245d80f;
  /* 1245d7ed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245d7f0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1245d7f2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1245d7f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245d7f7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1245d7fd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1245d800 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245d803 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1245d805 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d808 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245d80b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1245d80d jmp 0x1245d820 */
  goto L_1245d820;
L_1245d80f:;
  /* 1245d80f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245d812 push edx */
  push32((uint32_t)(EDX));
  /* 1245d813 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245d815 call 0x1245e530 */
  push32(0x1245d81au); f_1245e530();
  /* 1245d81a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d81d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1245d820:;
  /* 1245d820 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245d823 pop edi */
  EDI = (pop32());
  /* 1245d824 pop esi */
  ESI = (pop32());
  /* 1245d825 pop ebx */
  EBX = (pop32());
  /* 1245d826 mov esp, ebp */
  ESP = (EBP);
  /* 1245d828 pop ebp */
  EBP = (pop32());
  /* 1245d829 ret  */
  ESPCHK(0x1245d730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d830 @ 0x1245d830 (183 bytes, 58 insns) */
void f_1245d830(void) {
  FTRACE(0x1245d830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245d830 push ebp */
  push32((uint32_t)(EBP));
  /* 1245d831 mov ebp, esp */
  EBP = (ESP);
  /* 1245d833 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245d836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245d839 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d83c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d841 ja 0x1245d85a */
  if ((!C.cf&&!C.zf)) goto L_1245d85a;
  /* 1245d843 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245d846 mov edx, dword ptr [0x12481c98] */
  EDX = (r32((uint32_t)(0x12481c98)));
  /* 1245d84c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245d84e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1245d852 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1245d855 jmp 0x1245d8e3 */
  goto L_1245d8e3;
L_1245d85a:;
  /* 1245d85a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245d85d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1245d860 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1245d866 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1245d86c mov edx, dword ptr [0x12481c98] */
  EDX = (r32((uint32_t)(0x12481c98)));
  /* 1245d872 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245d874 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1245d878 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1245d87d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245d87f je 0x1245d8a3 */
  if (C.zf) goto L_1245d8a3;
  /* 1245d881 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245d884 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1245d887 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1245d88d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1245d890 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1245d893 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1245d896 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1245d89a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1245d8a1 jmp 0x1245d8b4 */
  goto L_1245d8b4;
L_1245d8a3:;
  /* 1245d8a3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1245d8a6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1245d8a9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1245d8ad mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1245d8b4:;
  /* 1245d8b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1245d8b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245d8b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245d8ba lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1245d8bd push ecx */
  push32((uint32_t)(ECX));
  /* 1245d8be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245d8c1 push edx */
  push32((uint32_t)(EDX));
  /* 1245d8c2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1245d8c5 push eax */
  push32((uint32_t)(EAX));
  /* 1245d8c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1245d8c8 call 0x1245fa50 */
  push32(0x1245d8cdu); f_1245fa50();
  /* 1245d8cd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d8d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245d8d2 jne 0x1245d8d8 */
  if (!C.zf) goto L_1245d8d8;
  /* 1245d8d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245d8d6 jmp 0x1245d8e3 */
  goto L_1245d8e3;
L_1245d8d8:;
  /* 1245d8d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245d8db and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245d8e0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1245d8e3:;
  /* 1245d8e3 mov esp, ebp */
  ESP = (EBP);
  /* 1245d8e5 pop ebp */
  EBP = (pop32());
  /* 1245d8e6 ret  */
  ESPCHK(0x1245d830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8f0 @ 0x1245d8f0 (836 bytes, 238 insns) */
void f_1245d8f0(void) {
  FTRACE(0x1245d8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245d8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245d8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1245d8f3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245d8f6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1245d8f8 call 0x1245b220 */
  push32(0x1245d8fdu); f_1245b220();
  /* 1245d8fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245d903 push eax */
  push32((uint32_t)(EAX));
  /* 1245d904 call 0x1245dc40 */
  push32(0x1245d909u); f_1245dc40();
  /* 1245d909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d90c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1245d90f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245d912 cmp ecx, dword ptr [0x12484f44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12484f44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d918 jne 0x1245d92b */
  if (!C.zf) goto L_1245d92b;
  /* 1245d91a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1245d91c call 0x1245b2c0 */
  push32(0x1245d921u); f_1245b2c0();
  /* 1245d921 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d924 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245d926 jmp 0x1245dc30 */
  goto L_1245dc30;
L_1245d92b:;
  /* 1245d92b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d92f jne 0x1245d94c */
  if (!C.zf) goto L_1245d94c;
  /* 1245d931 call 0x1245dd20 */
  push32(0x1245d936u); f_1245dd20();
  /* 1245d936 call 0x1245dda0 */
  push32(0x1245d93bu); f_1245dda0();
  /* 1245d93b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1245d93d call 0x1245b2c0 */
  push32(0x1245d942u); f_1245b2c0();
  /* 1245d942 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d945 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245d947 jmp 0x1245dc30 */
  goto L_1245dc30;
L_1245d94c:;
  /* 1245d94c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1245d953 jmp 0x1245d95e */
  goto L_1245d95e;
L_1245d955:;
  /* 1245d955 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245d958 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d95b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1245d95e:;
  /* 1245d95e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d962 jae 0x1245daaf */
  if (!C.cf) goto L_1245daaf;
  /* 1245d968 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245d96b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245d96e mov ecx, dword ptr [eax + 0x12481eb8] */
  ECX = (r32((uint32_t)(EAX + 0x12481eb8)));
  /* 1245d974 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d977 jne 0x1245daaa */
  if (!C.zf) goto L_1245daaa;
  /* 1245d97d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1245d984 jmp 0x1245d98f */
  goto L_1245d98f;
L_1245d986:;
  /* 1245d986 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245d989 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d98c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1245d98f:;
  /* 1245d98f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d996 jae 0x1245d9a4 */
  if (!C.cf) goto L_1245d9a4;
  /* 1245d998 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245d99b mov byte ptr [eax + 0x124850e0], 0 */
  w8((uint32_t)(EAX + 0x124850e0), (0x0u));
  /* 1245d9a2 jmp 0x1245d986 */
  goto L_1245d986;
L_1245d9a4:;
  /* 1245d9a4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1245d9ab jmp 0x1245d9b6 */
  goto L_1245d9b6;
L_1245d9ad:;
  /* 1245d9ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245d9b0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d9b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1245d9b6:;
  /* 1245d9b6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245d9ba jae 0x1245da37 */
  if (!C.cf) goto L_1245da37;
  /* 1245d9bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245d9bf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245d9c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245d9c5 lea ecx, [edx + eax*8 + 0x12481ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12481ec8));
  /* 1245d9cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1245d9cf jmp 0x1245d9da */
  goto L_1245d9da;
L_1245d9d1:;
  /* 1245d9d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245d9d4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245d9d7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1245d9da:;
  /* 1245d9da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245d9dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245d9df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1245d9e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245d9e3 je 0x1245da32 */
  if (C.zf) goto L_1245da32;
  /* 1245d9e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245d9e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245d9ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1245d9ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245d9ef je 0x1245da32 */
  if (C.zf) goto L_1245da32;
  /* 1245d9f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245d9f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245d9f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1245d9f8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1245d9fb jmp 0x1245da06 */
  goto L_1245da06;
L_1245d9fd:;
  /* 1245d9fd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245da00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245da03 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1245da06:;
  /* 1245da06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245da09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245da0b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1245da0e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245da11 ja 0x1245da30 */
  if ((!C.cf&&!C.zf)) goto L_1245da30;
  /* 1245da13 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245da16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245da19 mov dl, byte ptr [eax + 0x124850e1] */
  DL = (r8((uint32_t)(EAX + 0x124850e1)));
  /* 1245da1f or dl, byte ptr [ecx + 0x12481eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12481eb0))); DL = (_r); fl_logic(_r,8); }
  /* 1245da25 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245da28 mov byte ptr [eax + 0x124850e1], dl */
  w8((uint32_t)(EAX + 0x124850e1), (DL));
  /* 1245da2e jmp 0x1245d9fd */
  goto L_1245d9fd;
L_1245da30:;
  /* 1245da30 jmp 0x1245d9d1 */
  goto L_1245d9d1;
L_1245da32:;
  /* 1245da32 jmp 0x1245d9ad */
  goto L_1245d9ad;
L_1245da37:;
  /* 1245da37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245da3a mov dword ptr [0x12484f44], ecx */
  w32((uint32_t)(0x12484f44), (ECX));
  /* 1245da40 mov dword ptr [0x12484fcc], 1 */
  w32((uint32_t)(0x12484fcc), (0x1u));
  /* 1245da4a mov edx, dword ptr [0x12484f44] */
  EDX = (r32((uint32_t)(0x12484f44)));
  /* 1245da50 push edx */
  push32((uint32_t)(EDX));
  /* 1245da51 call 0x1245dca0 */
  push32(0x1245da56u); f_1245dca0();
  /* 1245da56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245da59 mov dword ptr [0x124851e4], eax */
  w32((uint32_t)(0x124851e4), (EAX));
  /* 1245da5e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1245da65 jmp 0x1245da70 */
  goto L_1245da70;
L_1245da67:;
  /* 1245da67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245da6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245da6d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1245da70:;
  /* 1245da70 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245da74 jae 0x1245da94 */
  if (!C.cf) goto L_1245da94;
  /* 1245da76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245da79 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245da7c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245da7f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245da82 mov cx, word ptr [ecx + eax*2 + 0x12481ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12481ebc)));
  /* 1245da8a mov word ptr [edx*2 + 0x12484fc0], cx */
  w16((uint32_t)(EDX*2 + 0x12484fc0), (CX));
  /* 1245da92 jmp 0x1245da67 */
  goto L_1245da67;
L_1245da94:;
  /* 1245da94 call 0x1245dda0 */
  push32(0x1245da99u); f_1245dda0();
  /* 1245da99 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1245da9b call 0x1245b2c0 */
  push32(0x1245daa0u); f_1245b2c0();
  /* 1245daa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245daa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245daa5 jmp 0x1245dc30 */
  goto L_1245dc30;
L_1245daaa:;
  /* 1245daaa jmp 0x1245d955 */
  goto L_1245d955;
L_1245daaf:;
  /* 1245daaf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1245dab2 push edx */
  push32((uint32_t)(EDX));
  /* 1245dab3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245dab6 push eax */
  push32((uint32_t)(EAX));
  /* 1245dab7 call dword ptr [0x12486308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486308))), 0x1245dabdu);
  /* 1245dabd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245dac0 jne 0x1245dc02 */
  if (!C.zf) goto L_1245dc02;
  /* 1245dac6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1245dacd jmp 0x1245dad8 */
  goto L_1245dad8;
L_1245dacf:;
  /* 1245dacf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245dad2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245dad5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1245dad8:;
  /* 1245dad8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245dadf jae 0x1245daed */
  if (!C.cf) goto L_1245daed;
  /* 1245dae1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245dae4 mov byte ptr [edx + 0x124850e0], 0 */
  w8((uint32_t)(EDX + 0x124850e0), (0x0u));
  /* 1245daeb jmp 0x1245dacf */
  goto L_1245dacf;
L_1245daed:;
  /* 1245daed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245daf0 mov dword ptr [0x12484f44], eax */
  w32((uint32_t)(0x12484f44), (EAX));
  /* 1245daf5 mov dword ptr [0x124851e4], 0 */
  w32((uint32_t)(0x124851e4), (0x0u));
  /* 1245daff cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245db03 jbe 0x1245dbbe */
  if ((C.cf||C.zf)) goto L_1245dbbe;
  /* 1245db09 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1245db0c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1245db0f jmp 0x1245db1a */
  goto L_1245db1a;
L_1245db11:;
  /* 1245db11 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245db14 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245db17 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1245db1a:;
  /* 1245db1a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245db1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245db1f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1245db21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245db23 je 0x1245db6c */
  if (C.zf) goto L_1245db6c;
  /* 1245db25 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245db28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245db2a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1245db2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245db2f je 0x1245db6c */
  if (C.zf) goto L_1245db6c;
  /* 1245db31 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245db34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245db36 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1245db38 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1245db3b jmp 0x1245db46 */
  goto L_1245db46;
L_1245db3d:;
  /* 1245db3d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245db40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245db43 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1245db46:;
  /* 1245db46 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245db49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245db4b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1245db4e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245db51 ja 0x1245db6a */
  if ((!C.cf&&!C.zf)) goto L_1245db6a;
  /* 1245db53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245db56 mov cl, byte ptr [eax + 0x124850e1] */
  CL = (r8((uint32_t)(EAX + 0x124850e1)));
  /* 1245db5c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1245db5f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245db62 mov byte ptr [edx + 0x124850e1], cl */
  w8((uint32_t)(EDX + 0x124850e1), (CL));
  /* 1245db68 jmp 0x1245db3d */
  goto L_1245db3d;
L_1245db6a:;
  /* 1245db6a jmp 0x1245db11 */
  goto L_1245db11;
L_1245db6c:;
  /* 1245db6c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1245db73 jmp 0x1245db7e */
  goto L_1245db7e;
L_1245db75:;
  /* 1245db75 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245db78 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245db7b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1245db7e:;
  /* 1245db7e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245db85 jae 0x1245db9e */
  if (!C.cf) goto L_1245db9e;
  /* 1245db87 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245db8a mov dl, byte ptr [ecx + 0x124850e1] */
  DL = (r8((uint32_t)(ECX + 0x124850e1)));
  /* 1245db90 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1245db93 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245db96 mov byte ptr [eax + 0x124850e1], dl */
  w8((uint32_t)(EAX + 0x124850e1), (DL));
  /* 1245db9c jmp 0x1245db75 */
  goto L_1245db75;
L_1245db9e:;
  /* 1245db9e mov ecx, dword ptr [0x12484f44] */
  ECX = (r32((uint32_t)(0x12484f44)));
  /* 1245dba4 push ecx */
  push32((uint32_t)(ECX));
  /* 1245dba5 call 0x1245dca0 */
  push32(0x1245dbaau); f_1245dca0();
  /* 1245dbaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245dbad mov dword ptr [0x124851e4], eax */
  w32((uint32_t)(0x124851e4), (EAX));
  /* 1245dbb2 mov dword ptr [0x12484fcc], 1 */
  w32((uint32_t)(0x12484fcc), (0x1u));
  /* 1245dbbc jmp 0x1245dbc8 */
  goto L_1245dbc8;
L_1245dbbe:;
  /* 1245dbbe mov dword ptr [0x12484fcc], 0 */
  w32((uint32_t)(0x12484fcc), (0x0u));
L_1245dbc8:;
  /* 1245dbc8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1245dbcf jmp 0x1245dbda */
  goto L_1245dbda;
L_1245dbd1:;
  /* 1245dbd1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245dbd4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245dbd7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1245dbda:;
  /* 1245dbda cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245dbde jae 0x1245dbef */
  if (!C.cf) goto L_1245dbef;
  /* 1245dbe0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245dbe3 mov word ptr [eax*2 + 0x12484fc0], 0 */
  w16((uint32_t)(EAX*2 + 0x12484fc0), (0x0u));
  /* 1245dbed jmp 0x1245dbd1 */
  goto L_1245dbd1;
L_1245dbef:;
  /* 1245dbef call 0x1245dda0 */
  push32(0x1245dbf4u); f_1245dda0();
  /* 1245dbf4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1245dbf6 call 0x1245b2c0 */
  push32(0x1245dbfbu); f_1245b2c0();
  /* 1245dbfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245dbfe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245dc00 jmp 0x1245dc30 */
  goto L_1245dc30;
L_1245dc02:;
  /* 1245dc02 cmp dword ptr [0x12483a48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483a48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245dc09 je 0x1245dc23 */
  if (C.zf) goto L_1245dc23;
  /* 1245dc0b call 0x1245dd20 */
  push32(0x1245dc10u); f_1245dd20();
  /* 1245dc10 call 0x1245dda0 */
  push32(0x1245dc15u); f_1245dda0();
  /* 1245dc15 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1245dc17 call 0x1245b2c0 */
  push32(0x1245dc1cu); f_1245b2c0();
  /* 1245dc1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245dc1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245dc21 jmp 0x1245dc30 */
  goto L_1245dc30;
L_1245dc23:;
  /* 1245dc23 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1245dc25 call 0x1245b2c0 */
  push32(0x1245dc2au); f_1245b2c0();
  /* 1245dc2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245dc2d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1245dc30:;
  /* 1245dc30 mov esp, ebp */
  ESP = (EBP);
  /* 1245dc32 pop ebp */
  EBP = (pop32());
  /* 1245dc33 ret  */
  ESPCHK(0x1245d8f0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1245dc40 (89 bytes, 21 insns) */
void f_1245dc40(void) {
  FTRACE(0x1245dc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245dc40 push ebp */
  push32((uint32_t)(EBP));
  /* 1245dc41 mov ebp, esp */
  EBP = (ESP);
  /* 1245dc43 mov dword ptr [0x12483a48], 0 */
  w32((uint32_t)(0x12483a48), (0x0u));
  /* 1245dc4d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245dc51 jne 0x1245dc65 */
  if (!C.zf) goto L_1245dc65;
  /* 1245dc53 mov dword ptr [0x12483a48], 1 */
  w32((uint32_t)(0x12483a48), (0x1u));
  /* 1245dc5d call dword ptr [0x12486300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486300))), 0x1245dc63u);
  /* 1245dc63 jmp 0x1245dc97 */
  goto L_1245dc97;
L_1245dc65:;
  /* 1245dc65 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245dc69 jne 0x1245dc7d */
  if (!C.zf) goto L_1245dc7d;
  /* 1245dc6b mov dword ptr [0x12483a48], 1 */
  w32((uint32_t)(0x12483a48), (0x1u));
  /* 1245dc75 call dword ptr [0x12486304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486304))), 0x1245dc7bu);
  /* 1245dc7b jmp 0x1245dc97 */
  goto L_1245dc97;
L_1245dc7d:;
  /* 1245dc7d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245dc81 jne 0x1245dc94 */
  if (!C.zf) goto L_1245dc94;
  /* 1245dc83 mov dword ptr [0x12483a48], 1 */
  w32((uint32_t)(0x12483a48), (0x1u));
  /* 1245dc8d mov eax, dword ptr [0x12483a68] */
  EAX = (r32((uint32_t)(0x12483a68)));
  /* 1245dc92 jmp 0x1245dc97 */
  goto L_1245dc97;
L_1245dc94:;
  /* 1245dc94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1245dc97:;
  /* 1245dc97 pop ebp */
  EBP = (pop32());
  /* 1245dc98 ret  */
  ESPCHK(0x1245dc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dca0 @ 0x1245dca0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1245dca0(void) {
  FTRACE(0x1245dca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245dca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245dca1 mov ebp, esp */
  EBP = (ESP);
  /* 1245dca3 push ecx */
  push32((uint32_t)(ECX));
  /* 1245dca4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245dca7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245dcaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245dcad sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245dcb3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1245dcb6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245dcba ja 0x1245dcea */
  if ((!C.cf&&!C.zf)) goto L_1245dcea;
  /* 1245dcbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245dcbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245dcc1 mov dl, byte ptr [eax + 0x1245dd04] */
  DL = (r8((uint32_t)(EAX + 0x1245dd04)));
  /* 1245dcc7 jmp dword ptr [edx*4 + 0x1245dcf0] */
  switch (EDX) {
    case 0: goto L_1245dcce;
    case 1: goto L_1245dcd5;
    case 2: goto L_1245dcdc;
    case 3: goto L_1245dce3;
    case 4: goto L_1245dcea;
    default: x86_unimpl("switch@0x1245dcc7 out of table"); return;
  }
L_1245dcce:;
  /* 1245dcce mov eax, 0x411 */
  EAX = (0x411u);
  /* 1245dcd3 jmp 0x1245dcec */
  goto L_1245dcec;
L_1245dcd5:;
  /* 1245dcd5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1245dcda jmp 0x1245dcec */
  goto L_1245dcec;
L_1245dcdc:;
  /* 1245dcdc mov eax, 0x412 */
  EAX = (0x412u);
  /* 1245dce1 jmp 0x1245dcec */
  goto L_1245dcec;
L_1245dce3:;
  /* 1245dce3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1245dce8 jmp 0x1245dcec */
  goto L_1245dcec;
L_1245dcea:;
  /* 1245dcea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1245dcec:;
  /* 1245dcec mov esp, ebp */
  ESP = (EBP);
  /* 1245dcee pop ebp */
  EBP = (pop32());
  /* 1245dcef ret  */
  ESPCHK(0x1245dca0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1245dd20 (116 bytes, 29 insns) */
void f_1245dd20(void) {
  FTRACE(0x1245dd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245dd20 push ebp */
  push32((uint32_t)(EBP));
  /* 1245dd21 mov ebp, esp */
  EBP = (ESP);
  /* 1245dd23 push ecx */
  push32((uint32_t)(ECX));
  /* 1245dd24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1245dd2b jmp 0x1245dd36 */
  goto L_1245dd36;
L_1245dd2d:;
  /* 1245dd2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245dd30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245dd33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1245dd36:;
  /* 1245dd36 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245dd3d jge 0x1245dd4b */
  if ((C.sf==C.of)) goto L_1245dd4b;
  /* 1245dd3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245dd42 mov byte ptr [ecx + 0x124850e0], 0 */
  w8((uint32_t)(ECX + 0x124850e0), (0x0u));
  /* 1245dd49 jmp 0x1245dd2d */
  goto L_1245dd2d;
L_1245dd4b:;
  /* 1245dd4b mov dword ptr [0x12484f44], 0 */
  w32((uint32_t)(0x12484f44), (0x0u));
  /* 1245dd55 mov dword ptr [0x12484fcc], 0 */
  w32((uint32_t)(0x12484fcc), (0x0u));
  /* 1245dd5f mov dword ptr [0x124851e4], 0 */
  w32((uint32_t)(0x124851e4), (0x0u));
  /* 1245dd69 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1245dd70 jmp 0x1245dd7b */
  goto L_1245dd7b;
L_1245dd72:;
  /* 1245dd72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245dd75 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245dd78 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1245dd7b:;
  /* 1245dd7b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245dd7f jge 0x1245dd90 */
  if ((C.sf==C.of)) goto L_1245dd90;
  /* 1245dd81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245dd84 mov word ptr [eax*2 + 0x12484fc0], 0 */
  w16((uint32_t)(EAX*2 + 0x12484fc0), (0x0u));
  /* 1245dd8e jmp 0x1245dd72 */
  goto L_1245dd72;
L_1245dd90:;
  /* 1245dd90 mov esp, ebp */
  ESP = (EBP);
  /* 1245dd92 pop ebp */
  EBP = (pop32());
  /* 1245dd93 ret  */
  ESPCHK(0x1245dd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dda0 @ 0x1245dda0 (770 bytes, 175 insns) */
void f_1245dda0(void) {
  FTRACE(0x1245dda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245dda0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245dda1 mov ebp, esp */
  EBP = (ESP);
  /* 1245dda3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245dda9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1245ddaf push eax */
  push32((uint32_t)(EAX));
  /* 1245ddb0 mov ecx, dword ptr [0x12484f44] */
  ECX = (r32((uint32_t)(0x12484f44)));
  /* 1245ddb6 push ecx */
  push32((uint32_t)(ECX));
  /* 1245ddb7 call dword ptr [0x12486308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486308))), 0x1245ddbdu);
  /* 1245ddbd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ddc0 jne 0x1245dfd9 */
  if (!C.zf) goto L_1245dfd9;
  /* 1245ddc6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1245ddd0 jmp 0x1245dde1 */
  goto L_1245dde1;
L_1245ddd2:;
  /* 1245ddd2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245ddd8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245dddb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1245dde1:;
  /* 1245dde1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ddeb jae 0x1245de02 */
  if (!C.cf) goto L_1245de02;
  /* 1245dded mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245ddf3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1245ddf9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1245de00 jmp 0x1245ddd2 */
  goto L_1245ddd2;
L_1245de02:;
  /* 1245de02 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1245de09 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1245de0f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1245de12 jmp 0x1245de1d */
  goto L_1245de1d;
L_1245de14:;
  /* 1245de14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245de17 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245de1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1245de1d:;
  /* 1245de1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245de20 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245de22 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1245de24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245de26 je 0x1245de68 */
  if (C.zf) goto L_1245de68;
  /* 1245de28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245de2b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245de2d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1245de2f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1245de35 jmp 0x1245de46 */
  goto L_1245de46;
L_1245de37:;
  /* 1245de37 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245de3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245de40 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1245de46:;
  /* 1245de46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245de49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245de4b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1245de4e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245de54 ja 0x1245de66 */
  if ((!C.cf&&!C.zf)) goto L_1245de66;
  /* 1245de56 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245de5c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1245de64 jmp 0x1245de37 */
  goto L_1245de37;
L_1245de66:;
  /* 1245de66 jmp 0x1245de14 */
  goto L_1245de14;
L_1245de68:;
  /* 1245de68 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245de6a mov eax, dword ptr [0x124851e4] */
  EAX = (r32((uint32_t)(0x124851e4)));
  /* 1245de6f push eax */
  push32((uint32_t)(EAX));
  /* 1245de70 mov ecx, dword ptr [0x12484f44] */
  ECX = (r32((uint32_t)(0x12484f44)));
  /* 1245de76 push ecx */
  push32((uint32_t)(ECX));
  /* 1245de77 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1245de7d push edx */
  push32((uint32_t)(EDX));
  /* 1245de7e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1245de83 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1245de89 push eax */
  push32((uint32_t)(EAX));
  /* 1245de8a push 1 */
  push32((uint32_t)(0x1u));
  /* 1245de8c call 0x1245fa50 */
  push32(0x1245de91u); f_1245fa50();
  /* 1245de91 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245de94 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245de96 mov ecx, dword ptr [0x12484f44] */
  ECX = (r32((uint32_t)(0x12484f44)));
  /* 1245de9c push ecx */
  push32((uint32_t)(ECX));
  /* 1245de9d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1245dea2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1245dea8 push edx */
  push32((uint32_t)(EDX));
  /* 1245dea9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1245deae lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1245deb4 push eax */
  push32((uint32_t)(EAX));
  /* 1245deb5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1245deba mov ecx, dword ptr [0x124851e4] */
  ECX = (r32((uint32_t)(0x124851e4)));
  /* 1245dec0 push ecx */
  push32((uint32_t)(ECX));
  /* 1245dec1 call 0x1245fc10 */
  push32(0x1245dec6u); f_1245fc10();
  /* 1245dec6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245dec9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245decb mov edx, dword ptr [0x12484f44] */
  EDX = (r32((uint32_t)(0x12484f44)));
  /* 1245ded1 push edx */
  push32((uint32_t)(EDX));
  /* 1245ded2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1245ded7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1245dedd push eax */
  push32((uint32_t)(EAX));
  /* 1245dede push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1245dee3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1245dee9 push ecx */
  push32((uint32_t)(ECX));
  /* 1245deea push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1245deef mov edx, dword ptr [0x124851e4] */
  EDX = (r32((uint32_t)(0x124851e4)));
  /* 1245def5 push edx */
  push32((uint32_t)(EDX));
  /* 1245def6 call 0x1245fc10 */
  push32(0x1245defbu); f_1245fc10();
  /* 1245defb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245defe mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1245df08 jmp 0x1245df19 */
  goto L_1245df19;
L_1245df0a:;
  /* 1245df0a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245df10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245df13 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1245df19:;
  /* 1245df19 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245df23 jae 0x1245dfd4 */
  if (!C.cf) goto L_1245dfd4;
  /* 1245df29 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245df2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245df31 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1245df39 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1245df3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245df3e je 0x1245df76 */
  if (C.zf) goto L_1245df76;
  /* 1245df40 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245df46 mov cl, byte ptr [eax + 0x124850e1] */
  CL = (r8((uint32_t)(EAX + 0x124850e1)));
  /* 1245df4c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1245df4f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245df55 mov byte ptr [edx + 0x124850e1], cl */
  w8((uint32_t)(EDX + 0x124850e1), (CL));
  /* 1245df5b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245df61 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245df67 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1245df6e mov byte ptr [eax + 0x12484fe0], dl */
  w8((uint32_t)(EAX + 0x12484fe0), (DL));
  /* 1245df74 jmp 0x1245dfcf */
  goto L_1245dfcf;
L_1245df76:;
  /* 1245df76 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245df7c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245df7e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1245df86 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1245df89 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245df8b je 0x1245dfc2 */
  if (C.zf) goto L_1245dfc2;
  /* 1245df8d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245df93 mov al, byte ptr [edx + 0x124850e1] */
  AL = (r8((uint32_t)(EDX + 0x124850e1)));
  /* 1245df99 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1245df9b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245dfa1 mov byte ptr [ecx + 0x124850e1], al */
  w8((uint32_t)(ECX + 0x124850e1), (AL));
  /* 1245dfa7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245dfad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245dfb3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1245dfba mov byte ptr [edx + 0x12484fe0], cl */
  w8((uint32_t)(EDX + 0x12484fe0), (CL));
  /* 1245dfc0 jmp 0x1245dfcf */
  goto L_1245dfcf;
L_1245dfc2:;
  /* 1245dfc2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245dfc8 mov byte ptr [edx + 0x12484fe0], 0 */
  w8((uint32_t)(EDX + 0x12484fe0), (0x0u));
L_1245dfcf:;
  /* 1245dfcf jmp 0x1245df0a */
  goto L_1245df0a;
L_1245dfd4:;
  /* 1245dfd4 jmp 0x1245e09e */
  goto L_1245e09e;
L_1245dfd9:;
  /* 1245dfd9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1245dfe3 jmp 0x1245dff4 */
  goto L_1245dff4;
L_1245dfe5:;
  /* 1245dfe5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245dfeb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245dfee mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1245dff4:;
  /* 1245dff4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245dffe jae 0x1245e09e */
  if (!C.cf) goto L_1245e09e;
  /* 1245e004 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e00b jb 0x1245e048 */
  if (C.cf) goto L_1245e048;
  /* 1245e00d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e014 ja 0x1245e048 */
  if ((!C.cf&&!C.zf)) goto L_1245e048;
  /* 1245e016 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245e01c mov dl, byte ptr [ecx + 0x124850e1] */
  DL = (r8((uint32_t)(ECX + 0x124850e1)));
  /* 1245e022 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1245e025 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245e02b mov byte ptr [eax + 0x124850e1], dl */
  w8((uint32_t)(EAX + 0x124850e1), (DL));
  /* 1245e031 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245e037 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e03a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245e040 mov byte ptr [edx + 0x12484fe0], cl */
  w8((uint32_t)(EDX + 0x12484fe0), (CL));
  /* 1245e046 jmp 0x1245e099 */
  goto L_1245e099;
L_1245e048:;
  /* 1245e048 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e04f jb 0x1245e08c */
  if (C.cf) goto L_1245e08c;
  /* 1245e051 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e058 ja 0x1245e08c */
  if ((!C.cf&&!C.zf)) goto L_1245e08c;
  /* 1245e05a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245e060 mov cl, byte ptr [eax + 0x124850e1] */
  CL = (r8((uint32_t)(EAX + 0x124850e1)));
  /* 1245e066 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1245e069 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245e06f mov byte ptr [edx + 0x124850e1], cl */
  w8((uint32_t)(EDX + 0x124850e1), (CL));
  /* 1245e075 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245e07b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245e07e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245e084 mov byte ptr [ecx + 0x12484fe0], al */
  w8((uint32_t)(ECX + 0x12484fe0), (AL));
  /* 1245e08a jmp 0x1245e099 */
  goto L_1245e099;
L_1245e08c:;
  /* 1245e08c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1245e092 mov byte ptr [edx + 0x12484fe0], 0 */
  w8((uint32_t)(EDX + 0x12484fe0), (0x0u));
L_1245e099:;
  /* 1245e099 jmp 0x1245dfe5 */
  goto L_1245dfe5;
L_1245e09e:;
  /* 1245e09e mov esp, ebp */
  ESP = (EBP);
  /* 1245e0a0 pop ebp */
  EBP = (pop32());
  /* 1245e0a1 ret  */
  ESPCHK(0x1245dda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0b0 @ 0x1245e0b0 (23 bytes, 9 insns) */
void f_1245e0b0(void) {
  FTRACE(0x1245e0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245e0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245e0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1245e0b3 cmp dword ptr [0x12484fcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12484fcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e0ba je 0x1245e0c3 */
  if (C.zf) goto L_1245e0c3;
  /* 1245e0bc mov eax, dword ptr [0x12484f44] */
  EAX = (r32((uint32_t)(0x12484f44)));
  /* 1245e0c1 jmp 0x1245e0c5 */
  goto L_1245e0c5;
L_1245e0c3:;
  /* 1245e0c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1245e0c5:;
  /* 1245e0c5 pop ebp */
  EBP = (pop32());
  /* 1245e0c6 ret  */
  ESPCHK(0x1245e0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0d0 @ 0x1245e0d0 (34 bytes, 10 insns) */
void f_1245e0d0(void) {
  FTRACE(0x1245e0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245e0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245e0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1245e0d3 cmp dword ptr [0x12485390], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12485390))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e0da jne 0x1245e0f0 */
  if (!C.zf) goto L_1245e0f0;
  /* 1245e0dc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1245e0de call 0x1245d8f0 */
  push32(0x1245e0e3u); f_1245d8f0();
  /* 1245e0e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e0e6 mov dword ptr [0x12485390], 1 */
  w32((uint32_t)(0x12485390), (0x1u));
L_1245e0f0:;
  /* 1245e0f0 pop ebp */
  EBP = (pop32());
  /* 1245e0f1 ret  */
  ESPCHK(0x1245e0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e100 @ 0x1245e100 (664 bytes, 259 insns) [15 switch table(s)] */
void f_1245e100(void) {
  FTRACE(0x1245e100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245e100 push ebp */
  push32((uint32_t)(EBP));
  /* 1245e101 mov ebp, esp */
  EBP = (ESP);
  /* 1245e103 push edi */
  push32((uint32_t)(EDI));
  /* 1245e104 push esi */
  push32((uint32_t)(ESI));
  /* 1245e105 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1245e108 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245e10b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1245e10e mov eax, ecx */
  EAX = (ECX);
  /* 1245e110 mov edx, ecx */
  EDX = (ECX);
  /* 1245e112 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e114 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e116 jbe 0x1245e120 */
  if ((C.cf||C.zf)) goto L_1245e120;
  /* 1245e118 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e11a jb 0x1245e298 */
  if (C.cf) goto L_1245e298;
L_1245e120:;
  /* 1245e120 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1245e126 jne 0x1245e13c */
  if (!C.zf) goto L_1245e13c;
  /* 1245e128 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245e12b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1245e12e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e131 jb 0x1245e15c */
  if (C.cf) goto L_1245e15c;
  /* 1245e133 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1245e135 jmp dword ptr [edx*4 + 0x1245e248] */
  switch (EDX) {
    case 0: goto L_1245e258;
    case 1: goto L_1245e260;
    case 2: goto L_1245e26c;
    case 3: goto L_1245e280;
    default: x86_unimpl("switch@0x1245e135 out of table"); return;
  }
L_1245e13c:;
  /* 1245e13c mov eax, edi */
  EAX = (EDI);
  /* 1245e13e mov edx, 3 */
  EDX = (0x3u);
  /* 1245e143 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245e146 jb 0x1245e154 */
  if (C.cf) goto L_1245e154;
  /* 1245e148 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1245e14b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e14d jmp dword ptr [eax*4 + 0x1245e160] */
  switch (EAX) {
    case 1: goto L_1245e170;
    case 2: goto L_1245e19c;
    case 3: goto L_1245e1c0;
    default: x86_unimpl("switch@0x1245e14d out of table"); return;
  }
L_1245e154:;
  /* 1245e154 jmp dword ptr [ecx*4 + 0x1245e258] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1245e258)))); return;
  /* 1245e15b nop  */
  /* nop */
L_1245e15c:;
  /* 1245e15c jmp dword ptr [ecx*4 + 0x1245e1dc] */
  switch (ECX) {
    case 0: goto L_1245e23f;
    case 1: goto L_1245e22c;
    case 2: goto L_1245e224;
    case 3: goto L_1245e21c;
    case 4: goto L_1245e214;
    case 5: goto L_1245e20c;
    case 6: goto L_1245e204;
    case 7: goto L_1245e1fc;
    default: x86_unimpl("switch@0x1245e15c out of table"); return;
  }
  /* 1245e163 nop  */
  /* nop */
L_1245e170:;
  /* 1245e170 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1245e172 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1245e174 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1245e176 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1245e179 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1245e17c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1245e17f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245e182 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1245e185 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e188 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e18b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e18e jb 0x1245e15c */
  if (C.cf) goto L_1245e15c;
  /* 1245e190 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1245e192 jmp dword ptr [edx*4 + 0x1245e248] */
  switch (EDX) {
    case 0: goto L_1245e258;
    case 1: goto L_1245e260;
    case 2: goto L_1245e26c;
    case 3: goto L_1245e280;
    default: x86_unimpl("switch@0x1245e192 out of table"); return;
  }
  /* 1245e199 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1245e19c:;
  /* 1245e19c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1245e19e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1245e1a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1245e1a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1245e1a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245e1a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1245e1ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e1ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e1b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e1b4 jb 0x1245e15c */
  if (C.cf) goto L_1245e15c;
  /* 1245e1b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1245e1b8 jmp dword ptr [edx*4 + 0x1245e248] */
  switch (EDX) {
    case 0: goto L_1245e258;
    case 1: goto L_1245e260;
    case 2: goto L_1245e26c;
    case 3: goto L_1245e280;
    default: x86_unimpl("switch@0x1245e1b8 out of table"); return;
  }
  /* 1245e1bf nop  */
  /* nop */
L_1245e1c0:;
  /* 1245e1c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1245e1c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1245e1c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1245e1c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1245e1c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245e1ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1245e1cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e1ce jb 0x1245e15c */
  if (C.cf) goto L_1245e15c;
  /* 1245e1d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1245e1d2 jmp dword ptr [edx*4 + 0x1245e248] */
  switch (EDX) {
    case 0: goto L_1245e258;
    case 1: goto L_1245e260;
    case 2: goto L_1245e26c;
    case 3: goto L_1245e280;
    default: x86_unimpl("switch@0x1245e1d2 out of table"); return;
  }
  /* 1245e1d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1245e1fc:;
  /* 1245e1fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1245e200 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1245e204:;
  /* 1245e204 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1245e208 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1245e20c:;
  /* 1245e20c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1245e210 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1245e214:;
  /* 1245e214 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1245e218 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1245e21c:;
  /* 1245e21c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1245e220 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1245e224:;
  /* 1245e224 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1245e228 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1245e22c:;
  /* 1245e22c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1245e230 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1245e234 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1245e23b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e23d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1245e23f:;
  /* 1245e23f jmp dword ptr [edx*4 + 0x1245e248] */
  switch (EDX) {
    case 0: goto L_1245e258;
    case 1: goto L_1245e260;
    case 2: goto L_1245e26c;
    case 3: goto L_1245e280;
    default: x86_unimpl("switch@0x1245e23f out of table"); return;
  }
  /* 1245e246 mov edi, edi */
  EDI = (EDI);
L_1245e258:;
  /* 1245e258 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245e25b pop esi */
  ESI = (pop32());
  /* 1245e25c pop edi */
  EDI = (pop32());
  /* 1245e25d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1245e25e ret  */
  ESPCHK(0x1245e100u, _esp0);
  ESP += 4; return;
  /* 1245e25f nop  */
  /* nop */
L_1245e260:;
  /* 1245e260 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1245e262 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1245e264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245e267 pop esi */
  ESI = (pop32());
  /* 1245e268 pop edi */
  EDI = (pop32());
  /* 1245e269 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1245e26a ret  */
  ESPCHK(0x1245e100u, _esp0);
  ESP += 4; return;
  /* 1245e26b nop  */
  /* nop */
L_1245e26c:;
  /* 1245e26c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1245e26e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1245e270 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1245e273 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1245e276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245e279 pop esi */
  ESI = (pop32());
  /* 1245e27a pop edi */
  EDI = (pop32());
  /* 1245e27b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1245e27c ret  */
  ESPCHK(0x1245e100u, _esp0);
  ESP += 4; return;
  /* 1245e27d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1245e280:;
  /* 1245e280 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1245e282 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1245e284 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1245e287 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1245e28a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1245e28d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1245e290 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245e293 pop esi */
  ESI = (pop32());
  /* 1245e294 pop edi */
  EDI = (pop32());
  /* 1245e295 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1245e296 ret  */
  ESPCHK(0x1245e100u, _esp0);
  ESP += 4; return;
  /* 1245e297 nop  */
  /* nop */
L_1245e298:;
  /* 1245e298 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1245e29c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1245e2a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1245e2a6 jne 0x1245e2cc */
  if (!C.zf) goto L_1245e2cc;
  /* 1245e2a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245e2ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1245e2ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e2b1 jb 0x1245e2c0 */
  if (C.cf) goto L_1245e2c0;
  /* 1245e2b3 std  */
  C.df=1;
  /* 1245e2b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1245e2b6 cld  */
  C.df=0;
  /* 1245e2b7 jmp dword ptr [edx*4 + 0x1245e3e0] */
  switch (EDX) {
    case 0: goto L_1245e3f0;
    case 1: goto L_1245e3f8;
    case 2: goto L_1245e408;
    case 3: goto L_1245e41c;
    default: x86_unimpl("switch@0x1245e2b7 out of table"); return;
  }
  /* 1245e2be mov edi, edi */
  EDI = (EDI);
L_1245e2c0:;
  /* 1245e2c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1245e2c2 jmp dword ptr [ecx*4 + 0x1245e390] */
  switch (ECX) {
    case 0: goto L_1245e3d7;
    default: x86_unimpl("switch@0x1245e2c2 out of table"); return;
  }
  /* 1245e2c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1245e2cc:;
  /* 1245e2cc mov eax, edi */
  EAX = (EDI);
  /* 1245e2ce mov edx, 3 */
  EDX = (0x3u);
  /* 1245e2d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e2d6 jb 0x1245e2e4 */
  if (C.cf) goto L_1245e2e4;
  /* 1245e2d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1245e2db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245e2dd jmp dword ptr [eax*4 + 0x1245e2e8] */
  switch (EAX) {
    case 1: goto L_1245e2f8;
    case 2: goto L_1245e318;
    case 3: goto L_1245e340;
    default: x86_unimpl("switch@0x1245e2dd out of table"); return;
  }
L_1245e2e4:;
  /* 1245e2e4 jmp dword ptr [ecx*4 + 0x1245e3e0] */
  switch (ECX) {
    case 0: goto L_1245e3f0;
    case 1: goto L_1245e3f8;
    case 2: goto L_1245e408;
    case 3: goto L_1245e41c;
    default: x86_unimpl("switch@0x1245e2e4 out of table"); return;
  }
  /* 1245e2eb nop  */
  /* nop */
L_1245e2f8:;
  /* 1245e2f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1245e2fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1245e2fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1245e300 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1245e301 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245e304 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1245e305 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e308 jb 0x1245e2c0 */
  if (C.cf) goto L_1245e2c0;
  /* 1245e30a std  */
  C.df=1;
  /* 1245e30b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1245e30d cld  */
  C.df=0;
  /* 1245e30e jmp dword ptr [edx*4 + 0x1245e3e0] */
  switch (EDX) {
    case 0: goto L_1245e3f0;
    case 1: goto L_1245e3f8;
    case 2: goto L_1245e408;
    case 3: goto L_1245e41c;
    default: x86_unimpl("switch@0x1245e30e out of table"); return;
  }
  /* 1245e315 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1245e318:;
  /* 1245e318 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1245e31b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1245e31d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1245e320 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1245e323 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245e326 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1245e329 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245e32c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245e32f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e332 jb 0x1245e2c0 */
  if (C.cf) goto L_1245e2c0;
  /* 1245e334 std  */
  C.df=1;
  /* 1245e335 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1245e337 cld  */
  C.df=0;
  /* 1245e338 jmp dword ptr [edx*4 + 0x1245e3e0] */
  switch (EDX) {
    case 0: goto L_1245e3f0;
    case 1: goto L_1245e3f8;
    case 2: goto L_1245e408;
    case 3: goto L_1245e41c;
    default: x86_unimpl("switch@0x1245e338 out of table"); return;
  }
  /* 1245e33f nop  */
  /* nop */
L_1245e340:;
  /* 1245e340 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1245e343 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1245e345 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1245e348 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1245e34b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1245e34e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1245e351 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245e354 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1245e357 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245e35a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245e35d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e360 jb 0x1245e2c0 */
  if (C.cf) goto L_1245e2c0;
  /* 1245e366 std  */
  C.df=1;
  /* 1245e367 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1245e369 cld  */
  C.df=0;
  /* 1245e36a jmp dword ptr [edx*4 + 0x1245e3e0] */
  switch (EDX) {
    case 0: goto L_1245e3f0;
    case 1: goto L_1245e3f8;
    case 2: goto L_1245e408;
    case 3: goto L_1245e41c;
    default: x86_unimpl("switch@0x1245e36a out of table"); return;
  }
  /* 1245e371 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1245e374 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1245e375 jecxz 0x1245e3bc */
  x86_unimpl("jecxz @ 0x1245e375");
  /* 1245e377 adc bl, byte ptr [ebx - 0x1c5bedbb] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EBX + -0x1c5bedbb))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 1245e37e inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1245e37f adc ch, byte ptr [ebx - 0x1c4bedbb] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EBX + -0x1c4bedbb))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1245e386 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1245e387 adc bh, byte ptr [ebx - 0x1c3bedbb] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EBX + -0x1c3bedbb))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1245e38e inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1245e394 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1245e398 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1245e39c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1245e3a0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1245e3a4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1245e3a8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1245e3ac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1245e3b0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1245e3b4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1245e3b8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1245e3bc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1245e3c0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1245e3c4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1245e3c8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1245e3cc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1245e3d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e3d5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1245e3d7:;
  /* 1245e3d7 jmp dword ptr [edx*4 + 0x1245e3e0] */
  switch (EDX) {
    case 0: goto L_1245e3f0;
    case 1: goto L_1245e3f8;
    case 2: goto L_1245e408;
    case 3: goto L_1245e41c;
    default: x86_unimpl("switch@0x1245e3d7 out of table"); return;
  }
  /* 1245e3de mov edi, edi */
  EDI = (EDI);
L_1245e3f0:;
  /* 1245e3f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245e3f3 pop esi */
  ESI = (pop32());
  /* 1245e3f4 pop edi */
  EDI = (pop32());
  /* 1245e3f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1245e3f6 ret  */
  ESPCHK(0x1245e100u, _esp0);
  ESP += 4; return;
  /* 1245e3f7 nop  */
  /* nop */
L_1245e3f8:;
  /* 1245e3f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1245e3fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1245e3fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245e401 pop esi */
  ESI = (pop32());
  /* 1245e402 pop edi */
  EDI = (pop32());
  /* 1245e403 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1245e404 ret  */
  ESPCHK(0x1245e100u, _esp0);
  ESP += 4; return;
  /* 1245e405 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1245e408:;
  /* 1245e408 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1245e40b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1245e40e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1245e411 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1245e414 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245e417 pop esi */
  ESI = (pop32());
  /* 1245e418 pop edi */
  EDI = (pop32());
  /* 1245e419 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1245e41a ret  */
  ESPCHK(0x1245e100u, _esp0);
  ESP += 4; return;
  /* 1245e41b nop  */
  /* nop */
L_1245e41c:;
  /* 1245e41c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1245e41f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1245e422 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1245e425 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1245e428 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1245e42b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1245e42e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245e431 pop esi */
  ESI = (pop32());
  /* 1245e432 pop edi */
  EDI = (pop32());
  /* 1245e433 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1245e434 ret  */
  ESPCHK(0x1245e100u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1245e440 (104 bytes, 43 insns) */
void f_1245e440(void) {
  FTRACE(0x1245e440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245e440 push ebx */
  push32((uint32_t)(EBX));
  /* 1245e441 push esi */
  push32((uint32_t)(ESI));
  /* 1245e442 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1245e446 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245e448 jne 0x1245e462 */
  if (!C.zf) goto L_1245e462;
  /* 1245e44a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1245e44e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1245e452 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245e454 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1245e456 mov ebx, eax */
  EBX = (EAX);
  /* 1245e458 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1245e45c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1245e45e mov edx, ebx */
  EDX = (EBX);
  /* 1245e460 jmp 0x1245e4a3 */
  goto L_1245e4a3;
L_1245e462:;
  /* 1245e462 mov ecx, eax */
  ECX = (EAX);
  /* 1245e464 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1245e468 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1245e46c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1245e470:;
  /* 1245e470 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1245e472 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1245e474 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1245e476 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1245e478 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245e47a jne 0x1245e470 */
  if (!C.zf) goto L_1245e470;
  /* 1245e47c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1245e47e mov esi, eax */
  ESI = (EAX);
  /* 1245e480 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1245e484 mov ecx, eax */
  ECX = (EAX);
  /* 1245e486 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1245e48a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1245e48c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e48e jb 0x1245e49e */
  if (C.cf) goto L_1245e49e;
  /* 1245e490 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e494 ja 0x1245e49e */
  if ((!C.cf&&!C.zf)) goto L_1245e49e;
  /* 1245e496 jb 0x1245e49f */
  if (C.cf) goto L_1245e49f;
  /* 1245e498 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e49c jbe 0x1245e49f */
  if ((C.cf||C.zf)) goto L_1245e49f;
L_1245e49e:;
  /* 1245e49e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1245e49f:;
  /* 1245e49f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245e4a1 mov eax, esi */
  EAX = (ESI);
L_1245e4a3:;
  /* 1245e4a3 pop esi */
  ESI = (pop32());
  /* 1245e4a4 pop ebx */
  EBX = (pop32());
  /* 1245e4a5 ret 0x10 */
  ESPCHK(0x1245e440u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1245e4b0 (117 bytes, 44 insns) */
void f_1245e4b0(void) {
  FTRACE(0x1245e4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245e4b0 push ebx */
  push32((uint32_t)(EBX));
  /* 1245e4b1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1245e4b5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245e4b7 jne 0x1245e4d1 */
  if (!C.zf) goto L_1245e4d1;
  /* 1245e4b9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1245e4bd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1245e4c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245e4c3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1245e4c5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1245e4c9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1245e4cb mov eax, edx */
  EAX = (EDX);
  /* 1245e4cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245e4cf jmp 0x1245e521 */
  goto L_1245e521;
L_1245e4d1:;
  /* 1245e4d1 mov ecx, eax */
  ECX = (EAX);
  /* 1245e4d3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1245e4d7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1245e4db mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1245e4df:;
  /* 1245e4df shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1245e4e1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1245e4e3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1245e4e5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1245e4e7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245e4e9 jne 0x1245e4df */
  if (!C.zf) goto L_1245e4df;
  /* 1245e4eb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1245e4ed mov ecx, eax */
  ECX = (EAX);
  /* 1245e4ef mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1245e4f3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1245e4f4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1245e4f8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e4fa jb 0x1245e50a */
  if (C.cf) goto L_1245e50a;
  /* 1245e4fc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e500 ja 0x1245e50a */
  if ((!C.cf&&!C.zf)) goto L_1245e50a;
  /* 1245e502 jb 0x1245e512 */
  if (C.cf) goto L_1245e512;
  /* 1245e504 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e508 jbe 0x1245e512 */
  if ((C.cf||C.zf)) goto L_1245e512;
L_1245e50a:;
  /* 1245e50a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245e50e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1245e512:;
  /* 1245e512 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245e516 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245e51a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1245e51c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1245e51e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1245e521:;
  /* 1245e521 pop ebx */
  EBX = (pop32());
  /* 1245e522 ret 0x10 */
  ESPCHK(0x1245e4b0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000e530 @ 0x1245e530 (628 bytes, 214 insns) */
void f_1245e530(void) {
  FTRACE(0x1245e530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245e530 push ebp */
  push32((uint32_t)(EBP));
  /* 1245e531 mov ebp, esp */
  EBP = (ESP);
  /* 1245e533 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245e536 push ebx */
  push32((uint32_t)(EBX));
  /* 1245e537 push esi */
  push32((uint32_t)(ESI));
  /* 1245e538 push edi */
  push32((uint32_t)(EDI));
L_1245e539:;
  /* 1245e539 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e53d jne 0x1245e55d */
  if (!C.zf) goto L_1245e55d;
  /* 1245e53f push 0x1247f628 */
  push32((uint32_t)(0x1247f628u));
  /* 1245e544 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245e546 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1245e548 push 0x1247f61c */
  push32((uint32_t)(0x1247f61cu));
  /* 1245e54d push 2 */
  push32((uint32_t)(0x2u));
  /* 1245e54f call 0x124568e0 */
  push32(0x1245e554u); f_124568e0();
  /* 1245e554 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e557 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e55a jne 0x1245e55d */
  if (!C.zf) goto L_1245e55d;
  /* 1245e55c int3  */
  x86_unimpl("int3 @ 0x1245e55c");
L_1245e55d:;
  /* 1245e55d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245e55f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245e561 jne 0x1245e539 */
  if (!C.zf) goto L_1245e539;
  /* 1245e563 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245e566 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1245e569 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e56c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1245e56f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1245e572 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e575 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1245e578 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1245e57e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245e580 je 0x1245e58f */
  if (C.zf) goto L_1245e58f;
  /* 1245e582 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e585 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1245e588 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1245e58b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245e58d je 0x1245e5a5 */
  if (C.zf) goto L_1245e5a5;
L_1245e58f:;
  /* 1245e58f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e592 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1245e595 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1245e597 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e59a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1245e59d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245e5a0 jmp 0x1245e79d */
  goto L_1245e79d;
L_1245e5a5:;
  /* 1245e5a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e5a8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1245e5ab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1245e5ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245e5b0 je 0x1245e5fc */
  if (C.zf) goto L_1245e5fc;
  /* 1245e5b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e5b5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1245e5bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e5bf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1245e5c2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1245e5c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245e5c7 je 0x1245e5e5 */
  if (C.zf) goto L_1245e5e5;
  /* 1245e5c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e5cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e5cf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1245e5d2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1245e5d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e5d7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1245e5da and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1245e5dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e5e0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1245e5e3 jmp 0x1245e5fc */
  goto L_1245e5fc;
L_1245e5e5:;
  /* 1245e5e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e5e8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1245e5eb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1245e5ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e5f1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1245e5f4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245e5f7 jmp 0x1245e79d */
  goto L_1245e79d;
L_1245e5fc:;
  /* 1245e5fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e5ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1245e602 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1245e605 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e608 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1245e60b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e60e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1245e611 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1245e614 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e617 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1245e61a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e61d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1245e624 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1245e62b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245e62e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1245e631 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e634 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1245e637 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1245e63d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245e63f jne 0x1245e66f */
  if (!C.zf) goto L_1245e66f;
  /* 1245e641 cmp dword ptr [ebp - 8], 0x12482140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12482140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e648 je 0x1245e653 */
  if (C.zf) goto L_1245e653;
  /* 1245e64a cmp dword ptr [ebp - 8], 0x12482160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12482160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e651 jne 0x1245e663 */
  if (!C.zf) goto L_1245e663;
L_1245e653:;
  /* 1245e653 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245e656 push edx */
  push32((uint32_t)(EDX));
  /* 1245e657 call 0x124604a0 */
  push32(0x1245e65cu); f_124604a0();
  /* 1245e65c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e65f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245e661 jne 0x1245e66f */
  if (!C.zf) goto L_1245e66f;
L_1245e663:;
  /* 1245e663 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e666 push eax */
  push32((uint32_t)(EAX));
  /* 1245e667 call 0x124603d0 */
  push32(0x1245e66cu); f_124603d0();
  /* 1245e66c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245e66f:;
  /* 1245e66f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e672 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1245e675 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1245e67b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245e67d je 0x1245e75b */
  if (C.zf) goto L_1245e75b;
L_1245e683:;
  /* 1245e683 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e686 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e689 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1245e68b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245e68e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245e690 jge 0x1245e6b3 */
  if ((C.sf==C.of)) goto L_1245e6b3;
  /* 1245e692 push 0x1247f5dc */
  push32((uint32_t)(0x1247f5dcu));
  /* 1245e697 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245e699 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1245e69e push 0x1247f61c */
  push32((uint32_t)(0x1247f61cu));
  /* 1245e6a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1245e6a5 call 0x124568e0 */
  push32(0x1245e6aau); f_124568e0();
  /* 1245e6aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e6ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e6b0 jne 0x1245e6b3 */
  if (!C.zf) goto L_1245e6b3;
  /* 1245e6b2 int3  */
  x86_unimpl("int3 @ 0x1245e6b2");
L_1245e6b3:;
  /* 1245e6b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245e6b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245e6b7 jne 0x1245e683 */
  if (!C.zf) goto L_1245e683;
  /* 1245e6b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e6bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e6bf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1245e6c1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245e6c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245e6c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e6ca mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1245e6cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e6d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e6d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1245e6d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e6d8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1245e6db sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245e6de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e6e1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1245e6e4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e6e8 jle 0x1245e706 */
  if ((C.zf||C.sf!=C.of)) goto L_1245e706;
  /* 1245e6ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245e6ed push ecx */
  push32((uint32_t)(ECX));
  /* 1245e6ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e6f1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1245e6f4 push eax */
  push32((uint32_t)(EAX));
  /* 1245e6f5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245e6f8 push ecx */
  push32((uint32_t)(ECX));
  /* 1245e6f9 call 0x124600c0 */
  push32(0x1245e6feu); f_124600c0();
  /* 1245e6fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e701 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1245e704 jmp 0x1245e74e */
  goto L_1245e74e;
L_1245e706:;
  /* 1245e706 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e70a je 0x1245e729 */
  if (C.zf) goto L_1245e729;
  /* 1245e70c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245e70f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1245e712 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245e715 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1245e718 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245e71b mov ecx, dword ptr [edx*4 + 0x12485240] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12485240)));
  /* 1245e722 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e724 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1245e727 jmp 0x1245e730 */
  goto L_1245e730;
L_1245e729:;
  /* 1245e729 mov dword ptr [ebp - 0x14], 0x12481a60 */
  w32((uint32_t)(EBP + -0x14), (0x12481a60u));
L_1245e730:;
  /* 1245e730 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245e733 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1245e737 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1245e73a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245e73c je 0x1245e74e */
  if (C.zf) goto L_1245e74e;
  /* 1245e73e push 2 */
  push32((uint32_t)(0x2u));
  /* 1245e740 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245e742 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245e745 push ecx */
  push32((uint32_t)(ECX));
  /* 1245e746 call 0x1245ff70 */
  push32(0x1245e74bu); f_1245ff70();
  /* 1245e74b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245e74e:;
  /* 1245e74e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e751 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1245e754 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1245e757 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1245e759 jmp 0x1245e779 */
  goto L_1245e779;
L_1245e75b:;
  /* 1245e75b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1245e762 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245e765 push edx */
  push32((uint32_t)(EDX));
  /* 1245e766 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1245e769 push eax */
  push32((uint32_t)(EAX));
  /* 1245e76a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245e76d push ecx */
  push32((uint32_t)(ECX));
  /* 1245e76e call 0x124600c0 */
  push32(0x1245e773u); f_124600c0();
  /* 1245e773 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e776 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1245e779:;
  /* 1245e779 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245e77c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e77f je 0x1245e795 */
  if (C.zf) goto L_1245e795;
  /* 1245e781 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e784 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1245e787 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1245e78a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e78d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1245e790 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245e793 jmp 0x1245e79d */
  goto L_1245e79d;
L_1245e795:;
  /* 1245e795 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245e798 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1245e79d:;
  /* 1245e79d pop edi */
  EDI = (pop32());
  /* 1245e79e pop esi */
  ESI = (pop32());
  /* 1245e79f pop ebx */
  EBX = (pop32());
  /* 1245e7a0 mov esp, ebp */
  ESP = (EBP);
  /* 1245e7a2 pop ebp */
  EBP = (pop32());
  /* 1245e7a3 ret  */
  ESPCHK(0x1245e530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7b0 @ 0x1245e7b0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1245e7b0(void) {
  FTRACE(0x1245e7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245e7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245e7b1 mov ebp, esp */
  EBP = (ESP);
  /* 1245e7b3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245e7b9 push ebx */
  push32((uint32_t)(EBX));
  /* 1245e7ba push esi */
  push32((uint32_t)(ESI));
  /* 1245e7bb push edi */
  push32((uint32_t)(EDI));
  /* 1245e7bc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1245e7c3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1245e7cd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1245e7d4:;
  /* 1245e7d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245e7d7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1245e7d9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1245e7dc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1245e7e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245e7e3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e7e6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1245e7e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245e7eb je 0x1245f3c7 */
  if (C.zf) goto L_1245f3c7;
  /* 1245e7f1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e7f8 jl 0x1245f3c7 */
  if ((C.sf!=C.of)) goto L_1245f3c7;
  /* 1245e7fe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1245e802 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e805 jl 0x1245e826 */
  if ((C.sf!=C.of)) goto L_1245e826;
  /* 1245e807 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1245e80b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e80e jg 0x1245e826 */
  if ((!C.zf&&C.sf==C.of)) goto L_1245e826;
  /* 1245e810 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1245e814 movsx ecx, byte ptr [eax + 0x1247f614] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1247f614))));
  /* 1245e81b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1245e81e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1245e824 jmp 0x1245e830 */
  goto L_1245e830;
L_1245e826:;
  /* 1245e826 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1245e830:;
  /* 1245e830 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1245e836 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1245e839 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245e83c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245e83f movsx edx, byte ptr [ecx + eax*8 + 0x1247f634] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1247f634))));
  /* 1245e847 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1245e84a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1245e84d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245e850 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1245e856 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e85d ja 0x1245f3c2 */
  if ((!C.cf&&!C.zf)) goto L_1245f3c2;
  /* 1245e863 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1245e869 jmp dword ptr [ecx*4 + 0x1245f3d4] */
  switch (ECX) {
    case 0: goto L_1245e870;
    case 1: goto L_1245e90a;
    case 2: goto L_1245e94c;
    case 3: goto L_1245e9bb;
    case 4: goto L_1245ea13;
    case 5: goto L_1245ea22;
    case 6: goto L_1245ea6e;
    case 7: goto L_1245eb01;
    case 8: goto L_1245e998;
    case 9: goto L_1245e9a3;
    case 10: goto L_1245e98e;
    case 11: goto L_1245e983;
    case 12: goto L_1245e9ae;
    case 13: goto L_1245e9b6;
    default: x86_unimpl("switch@0x1245e869 out of table"); return;
  }
L_1245e870:;
  /* 1245e870 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1245e877 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245e87a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1245e880 mov eax, dword ptr [0x12481c98] */
  EAX = (r32((uint32_t)(0x12481c98)));
  /* 1245e885 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245e887 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1245e88b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1245e891 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245e893 je 0x1245e8ed */
  if (C.zf) goto L_1245e8ed;
  /* 1245e895 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1245e89b push edx */
  push32((uint32_t)(EDX));
  /* 1245e89c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245e89f push eax */
  push32((uint32_t)(EAX));
  /* 1245e8a0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1245e8a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1245e8a5 call 0x1245f4e0 */
  push32(0x1245e8aau); f_1245f4e0();
  /* 1245e8aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e8ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245e8b0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1245e8b2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1245e8b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245e8b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e8bb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1245e8be:;
  /* 1245e8be movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1245e8c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245e8c4 jne 0x1245e8e7 */
  if (!C.zf) goto L_1245e8e7;
  /* 1245e8c6 push 0x1247f6b4 */
  push32((uint32_t)(0x1247f6b4u));
  /* 1245e8cb push 0 */
  push32((uint32_t)(0x0u));
  /* 1245e8cd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1245e8d2 push 0x1247f6a8 */
  push32((uint32_t)(0x1247f6a8u));
  /* 1245e8d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1245e8d9 call 0x124568e0 */
  push32(0x1245e8deu); f_124568e0();
  /* 1245e8de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e8e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e8e4 jne 0x1245e8e7 */
  if (!C.zf) goto L_1245e8e7;
  /* 1245e8e6 int3  */
  x86_unimpl("int3 @ 0x1245e8e6");
L_1245e8e7:;
  /* 1245e8e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245e8e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245e8eb jne 0x1245e8be */
  if (!C.zf) goto L_1245e8be;
L_1245e8ed:;
  /* 1245e8ed lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1245e8f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1245e8f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245e8f7 push edx */
  push32((uint32_t)(EDX));
  /* 1245e8f8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1245e8fc push eax */
  push32((uint32_t)(EAX));
  /* 1245e8fd call 0x1245f4e0 */
  push32(0x1245e902u); f_1245f4e0();
  /* 1245e902 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e905 jmp 0x1245f3c2 */
  goto L_1245f3c2;
L_1245e90a:;
  /* 1245e90a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1245e911 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245e914 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1245e91a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1245e920 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1245e926 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1245e92c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1245e92f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1245e936 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1245e940 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1245e947 jmp 0x1245f3c2 */
  goto L_1245f3c2;
L_1245e94c:;
  /* 1245e94c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1245e950 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1245e956 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1245e95c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245e95f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1245e965 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e96c ja 0x1245e9b6 */
  if ((!C.cf&&!C.zf)) goto L_1245e9b6;
  /* 1245e96e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1245e974 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245e976 mov al, byte ptr [ecx + 0x1245f40c] */
  AL = (r8((uint32_t)(ECX + 0x1245f40c)));
  /* 1245e97c jmp dword ptr [eax*4 + 0x1245f3f4] */
  switch (EAX) {
    case 0: goto L_1245e998;
    case 1: goto L_1245e9a3;
    case 2: goto L_1245e98e;
    case 3: goto L_1245e983;
    case 4: goto L_1245e9ae;
    case 5: goto L_1245e9b6;
    default: x86_unimpl("switch@0x1245e97c out of table"); return;
  }
L_1245e983:;
  /* 1245e983 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245e986 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1245e989 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1245e98c jmp 0x1245e9b6 */
  goto L_1245e9b6;
L_1245e98e:;
  /* 1245e98e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245e991 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1245e993 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245e996 jmp 0x1245e9b6 */
  goto L_1245e9b6;
L_1245e998:;
  /* 1245e998 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245e99b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1245e99e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1245e9a1 jmp 0x1245e9b6 */
  goto L_1245e9b6;
L_1245e9a3:;
  /* 1245e9a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245e9a6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1245e9a9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1245e9ac jmp 0x1245e9b6 */
  goto L_1245e9b6;
L_1245e9ae:;
  /* 1245e9ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245e9b1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1245e9b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1245e9b6:;
  /* 1245e9b6 jmp 0x1245f3c2 */
  goto L_1245f3c2;
L_1245e9bb:;
  /* 1245e9bb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1245e9bf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e9c2 jne 0x1245e9f7 */
  if (!C.zf) goto L_1245e9f7;
  /* 1245e9c4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1245e9c7 push edx */
  push32((uint32_t)(EDX));
  /* 1245e9c8 call 0x1245f5f0 */
  push32(0x1245e9cdu); f_1245f5f0();
  /* 1245e9cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245e9d0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1245e9d6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245e9dd jge 0x1245e9f5 */
  if ((C.sf==C.of)) goto L_1245e9f5;
  /* 1245e9df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245e9e2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1245e9e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245e9e7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1245e9ed neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1245e9ef mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1245e9f5:;
  /* 1245e9f5 jmp 0x1245ea0e */
  goto L_1245ea0e;
L_1245e9f7:;
  /* 1245e9f7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1245e9fd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245ea00 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1245ea04 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1245ea08 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1245ea0e:;
  /* 1245ea0e jmp 0x1245f3c2 */
  goto L_1245f3c2;
L_1245ea13:;
  /* 1245ea13 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1245ea1d jmp 0x1245f3c2 */
  goto L_1245f3c2;
L_1245ea22:;
  /* 1245ea22 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1245ea26 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ea29 jne 0x1245ea52 */
  if (!C.zf) goto L_1245ea52;
  /* 1245ea2b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1245ea2e push eax */
  push32((uint32_t)(EAX));
  /* 1245ea2f call 0x1245f5f0 */
  push32(0x1245ea34u); f_1245f5f0();
  /* 1245ea34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ea37 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1245ea3d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ea44 jge 0x1245ea50 */
  if ((C.sf==C.of)) goto L_1245ea50;
  /* 1245ea46 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1245ea50:;
  /* 1245ea50 jmp 0x1245ea69 */
  goto L_1245ea69;
L_1245ea52:;
  /* 1245ea52 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1245ea58 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245ea5b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1245ea5f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1245ea63 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1245ea69:;
  /* 1245ea69 jmp 0x1245f3c2 */
  goto L_1245f3c2;
L_1245ea6e:;
  /* 1245ea6e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1245ea72 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1245ea78 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1245ea7e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245ea81 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1245ea87 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ea8e ja 0x1245eafc */
  if ((!C.cf&&!C.zf)) goto L_1245eafc;
  /* 1245ea90 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1245ea96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245ea98 mov al, byte ptr [ecx + 0x1245f431] */
  AL = (r8((uint32_t)(ECX + 0x1245f431)));
  /* 1245ea9e jmp dword ptr [eax*4 + 0x1245f41d] */
  switch (EAX) {
    case 0: goto L_1245eab0;
    case 1: goto L_1245eae9;
    case 2: goto L_1245eaa5;
    case 3: goto L_1245eaf3;
    case 4: goto L_1245eafc;
    default: x86_unimpl("switch@0x1245ea9e out of table"); return;
  }
L_1245eaa5:;
  /* 1245eaa5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245eaa8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1245eaab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1245eaae jmp 0x1245eafc */
  goto L_1245eafc;
L_1245eab0:;
  /* 1245eab0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245eab3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1245eab6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245eab9 jne 0x1245eadb */
  if (!C.zf) goto L_1245eadb;
  /* 1245eabb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245eabe movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1245eac2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245eac5 jne 0x1245eadb */
  if (!C.zf) goto L_1245eadb;
  /* 1245eac7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245eaca add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245eacd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1245ead0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ead3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1245ead6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1245ead9 jmp 0x1245eae7 */
  goto L_1245eae7;
L_1245eadb:;
  /* 1245eadb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1245eae2 jmp 0x1245e870 */
  goto L_1245e870;
L_1245eae7:;
  /* 1245eae7 jmp 0x1245eafc */
  goto L_1245eafc;
L_1245eae9:;
  /* 1245eae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245eaec or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1245eaee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245eaf1 jmp 0x1245eafc */
  goto L_1245eafc;
L_1245eaf3:;
  /* 1245eaf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245eaf6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1245eaf9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1245eafc:;
  /* 1245eafc jmp 0x1245f3c2 */
  goto L_1245f3c2;
L_1245eb01:;
  /* 1245eb01 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1245eb05 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1245eb0b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1245eb11 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245eb14 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1245eb1a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245eb21 ja 0x1245f1e7 */
  if ((!C.cf&&!C.zf)) goto L_1245f1e7;
  /* 1245eb27 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1245eb2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245eb2f mov cl, byte ptr [edx + 0x1245f49c] */
  CL = (r8((uint32_t)(EDX + 0x1245f49c)));
  /* 1245eb35 jmp dword ptr [ecx*4 + 0x1245f460] */
  switch (ECX) {
    case 0: goto L_1245eb3c;
    case 1: goto L_1245edd0;
    case 2: goto L_1245ec60;
    case 3: goto L_1245ef09;
    case 4: goto L_1245ebcb;
    case 5: goto L_1245eb51;
    case 6: goto L_1245eedb;
    case 7: goto L_1245ede0;
    case 8: goto L_1245ed85;
    case 9: goto L_1245ef55;
    case 10: goto L_1245eeff;
    case 11: goto L_1245ec76;
    case 12: goto L_1245eef3;
    case 13: goto L_1245ef15;
    case 14: goto L_1245f1e7;
    default: x86_unimpl("switch@0x1245eb35 out of table"); return;
  }
L_1245eb3c:;
  /* 1245eb3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245eb3f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1245eb44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245eb46 jne 0x1245eb51 */
  if (!C.zf) goto L_1245eb51;
  /* 1245eb48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245eb4b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1245eb4e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1245eb51:;
  /* 1245eb51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245eb54 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1245eb5a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245eb5c je 0x1245eb97 */
  if (C.zf) goto L_1245eb97;
  /* 1245eb5e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1245eb61 push eax */
  push32((uint32_t)(EAX));
  /* 1245eb62 call 0x1245f630 */
  push32(0x1245eb67u); f_1245f630();
  /* 1245eb67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245eb6a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1245eb6e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1245eb72 push ecx */
  push32((uint32_t)(ECX));
  /* 1245eb73 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1245eb79 push edx */
  push32((uint32_t)(EDX));
  /* 1245eb7a call 0x12460710 */
  push32(0x1245eb7fu); f_12460710();
  /* 1245eb7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245eb82 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1245eb85 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245eb89 jge 0x1245eb95 */
  if ((C.sf==C.of)) goto L_1245eb95;
  /* 1245eb8b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1245eb95:;
  /* 1245eb95 jmp 0x1245ebbd */
  goto L_1245ebbd;
L_1245eb97:;
  /* 1245eb97 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1245eb9a push eax */
  push32((uint32_t)(EAX));
  /* 1245eb9b call 0x1245f5f0 */
  push32(0x1245eba0u); f_1245f5f0();
  /* 1245eba0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245eba3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1245ebaa mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1245ebb0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1245ebb6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1245ebbd:;
  /* 1245ebbd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1245ebc3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1245ebc6 jmp 0x1245f1e7 */
  goto L_1245f1e7;
L_1245ebcb:;
  /* 1245ebcb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1245ebce push eax */
  push32((uint32_t)(EAX));
  /* 1245ebcf call 0x1245f5f0 */
  push32(0x1245ebd4u); f_1245f5f0();
  /* 1245ebd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ebd7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1245ebdd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ebe4 je 0x1245ebf2 */
  if (C.zf) goto L_1245ebf2;
  /* 1245ebe6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1245ebec cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ebf0 jne 0x1245ec0c */
  if (!C.zf) goto L_1245ec0c;
L_1245ebf2:;
  /* 1245ebf2 mov edx, dword ptr [0x12481fb0] */
  EDX = (r32((uint32_t)(0x12481fb0)));
  /* 1245ebf8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1245ebfb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245ebfe push eax */
  push32((uint32_t)(EAX));
  /* 1245ebff call 0x1245a650 */
  push32(0x1245ec04u); f_1245a650();
  /* 1245ec04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ec07 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1245ec0a jmp 0x1245ec5b */
  goto L_1245ec5b;
L_1245ec0c:;
  /* 1245ec0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ec0f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1245ec15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245ec17 je 0x1245ec3c */
  if (C.zf) goto L_1245ec3c;
  /* 1245ec19 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1245ec1f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1245ec22 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1245ec25 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1245ec2b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1245ec2e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1245ec30 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1245ec33 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1245ec3a jmp 0x1245ec5b */
  goto L_1245ec5b;
L_1245ec3c:;
  /* 1245ec3c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1245ec43 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1245ec49 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245ec4c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1245ec4f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1245ec55 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1245ec58 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1245ec5b:;
  /* 1245ec5b jmp 0x1245f1e7 */
  goto L_1245f1e7;
L_1245ec60:;
  /* 1245ec60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ec63 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1245ec69 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245ec6b jne 0x1245ec76 */
  if (!C.zf) goto L_1245ec76;
  /* 1245ec6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ec70 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1245ec73 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1245ec76:;
  /* 1245ec76 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ec7d jne 0x1245ec8b */
  if (!C.zf) goto L_1245ec8b;
  /* 1245ec7f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1245ec89 jmp 0x1245ec97 */
  goto L_1245ec97;
L_1245ec8b:;
  /* 1245ec8b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1245ec91 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1245ec97:;
  /* 1245ec97 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1245ec9d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1245eca3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1245eca6 push edx */
  push32((uint32_t)(EDX));
  /* 1245eca7 call 0x1245f5f0 */
  push32(0x1245ecacu); f_1245f5f0();
  /* 1245ecac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ecaf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1245ecb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ecb5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1245ecba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245ecbc je 0x1245ed26 */
  if (C.zf) goto L_1245ed26;
  /* 1245ecbe cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ecc2 jne 0x1245eccd */
  if (!C.zf) goto L_1245eccd;
  /* 1245ecc4 mov ecx, dword ptr [0x12481fb4] */
  ECX = (r32((uint32_t)(0x12481fb4)));
  /* 1245ecca mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1245eccd:;
  /* 1245eccd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1245ecd4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245ecd7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1245ecdd:;
  /* 1245ecdd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1245ece3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1245ece9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245ecec mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1245ecf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245ecf4 je 0x1245ed16 */
  if (C.zf) goto L_1245ed16;
  /* 1245ecf6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1245ecfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245ecfe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1245ed01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245ed03 je 0x1245ed16 */
  if (C.zf) goto L_1245ed16;
  /* 1245ed05 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1245ed0b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ed0e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1245ed14 jmp 0x1245ecdd */
  goto L_1245ecdd;
L_1245ed16:;
  /* 1245ed16 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1245ed1c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245ed1f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1245ed21 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1245ed24 jmp 0x1245ed80 */
  goto L_1245ed80;
L_1245ed26:;
  /* 1245ed26 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ed2a jne 0x1245ed34 */
  if (!C.zf) goto L_1245ed34;
  /* 1245ed2c mov eax, dword ptr [0x12481fb0] */
  EAX = (r32((uint32_t)(0x12481fb0)));
  /* 1245ed31 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1245ed34:;
  /* 1245ed34 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245ed37 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1245ed3d:;
  /* 1245ed3d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1245ed43 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1245ed49 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245ed4c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1245ed52 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245ed54 je 0x1245ed74 */
  if (C.zf) goto L_1245ed74;
  /* 1245ed56 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1245ed5c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1245ed5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245ed61 je 0x1245ed74 */
  if (C.zf) goto L_1245ed74;
  /* 1245ed63 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1245ed69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ed6c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1245ed72 jmp 0x1245ed3d */
  goto L_1245ed3d;
L_1245ed74:;
  /* 1245ed74 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1245ed7a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245ed7d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1245ed80:;
  /* 1245ed80 jmp 0x1245f1e7 */
  goto L_1245f1e7;
L_1245ed85:;
  /* 1245ed85 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1245ed88 push edx */
  push32((uint32_t)(EDX));
  /* 1245ed89 call 0x1245f5f0 */
  push32(0x1245ed8eu); f_1245f5f0();
  /* 1245ed8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ed91 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1245ed97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ed9a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1245ed9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245ed9f je 0x1245edb3 */
  if (C.zf) goto L_1245edb3;
  /* 1245eda1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1245eda7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1245edae mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1245edb1 jmp 0x1245edc1 */
  goto L_1245edc1;
L_1245edb3:;
  /* 1245edb3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1245edb9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1245edbf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1245edc1:;
  /* 1245edc1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1245edcb jmp 0x1245f1e7 */
  goto L_1245f1e7;
L_1245edd0:;
  /* 1245edd0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1245edd7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1245edda add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1245eddd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1245ede0:;
  /* 1245ede0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ede3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1245ede5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245ede8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1245edee mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1245edf1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245edf8 jge 0x1245ee06 */
  if ((C.sf==C.of)) goto L_1245ee06;
  /* 1245edfa mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1245ee04 jmp 0x1245ee22 */
  goto L_1245ee22;
L_1245ee06:;
  /* 1245ee06 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ee0d jne 0x1245ee22 */
  if (!C.zf) goto L_1245ee22;
  /* 1245ee0f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1245ee13 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ee16 jne 0x1245ee22 */
  if (!C.zf) goto L_1245ee22;
  /* 1245ee18 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1245ee22:;
  /* 1245ee22 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245ee25 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ee28 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1245ee2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245ee2e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245ee31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1245ee33 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245ee36 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1245ee3c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1245ee42 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245ee45 push ecx */
  push32((uint32_t)(ECX));
  /* 1245ee46 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1245ee4c push edx */
  push32((uint32_t)(EDX));
  /* 1245ee4d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1245ee51 push eax */
  push32((uint32_t)(EAX));
  /* 1245ee52 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245ee55 push ecx */
  push32((uint32_t)(ECX));
  /* 1245ee56 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1245ee5c push edx */
  push32((uint32_t)(EDX));
  /* 1245ee5d call dword ptr [0x124823a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124823a0))), 0x1245ee63u);
  /* 1245ee63 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ee66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ee69 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1245ee6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245ee70 je 0x1245ee88 */
  if (C.zf) goto L_1245ee88;
  /* 1245ee72 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ee79 jne 0x1245ee88 */
  if (!C.zf) goto L_1245ee88;
  /* 1245ee7b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245ee7e push ecx */
  push32((uint32_t)(ECX));
  /* 1245ee7f call dword ptr [0x124823ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124823ac))), 0x1245ee85u);
  /* 1245ee85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245ee88:;
  /* 1245ee88 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1245ee8c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ee8f jne 0x1245eeaa */
  if (!C.zf) goto L_1245eeaa;
  /* 1245ee91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ee94 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1245ee99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245ee9b jne 0x1245eeaa */
  if (!C.zf) goto L_1245eeaa;
  /* 1245ee9d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245eea0 push ecx */
  push32((uint32_t)(ECX));
  /* 1245eea1 call dword ptr [0x124823a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124823a4))), 0x1245eea7u);
  /* 1245eea7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245eeaa:;
  /* 1245eeaa mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245eead movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1245eeb0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245eeb3 jne 0x1245eec7 */
  if (!C.zf) goto L_1245eec7;
  /* 1245eeb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245eeb8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1245eebb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1245eebe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245eec1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245eec4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1245eec7:;
  /* 1245eec7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245eeca push eax */
  push32((uint32_t)(EAX));
  /* 1245eecb call 0x1245a650 */
  push32(0x1245eed0u); f_1245a650();
  /* 1245eed0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245eed3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1245eed6 jmp 0x1245f1e7 */
  goto L_1245f1e7;
L_1245eedb:;
  /* 1245eedb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245eede or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1245eee1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1245eee4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1245eeee jmp 0x1245ef75 */
  goto L_1245ef75;
L_1245eef3:;
  /* 1245eef3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1245eefd jmp 0x1245ef75 */
  goto L_1245ef75;
L_1245eeff:;
  /* 1245eeff mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1245ef09:;
  /* 1245ef09 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1245ef13 jmp 0x1245ef1f */
  goto L_1245ef1f;
L_1245ef15:;
  /* 1245ef15 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1245ef1f:;
  /* 1245ef1f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1245ef29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ef2c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1245ef32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245ef34 je 0x1245ef53 */
  if (C.zf) goto L_1245ef53;
  /* 1245ef36 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1245ef3d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1245ef43 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ef46 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1245ef4c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1245ef53:;
  /* 1245ef53 jmp 0x1245ef75 */
  goto L_1245ef75;
L_1245ef55:;
  /* 1245ef55 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1245ef5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ef62 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1245ef68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245ef6a je 0x1245ef75 */
  if (C.zf) goto L_1245ef75;
  /* 1245ef6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ef6f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1245ef72 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1245ef75:;
  /* 1245ef75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ef78 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1245ef7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245ef7f je 0x1245ef9e */
  if (C.zf) goto L_1245ef9e;
  /* 1245ef81 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1245ef84 push ecx */
  push32((uint32_t)(ECX));
  /* 1245ef85 call 0x1245f610 */
  push32(0x1245ef8au); f_1245f610();
  /* 1245ef8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ef8d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1245ef93 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1245ef99 jmp 0x1245f02f */
  goto L_1245f02f;
L_1245ef9e:;
  /* 1245ef9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245efa1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1245efa4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245efa6 je 0x1245eff0 */
  if (C.zf) goto L_1245eff0;
  /* 1245efa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245efab and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1245efae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245efb0 je 0x1245efd0 */
  if (C.zf) goto L_1245efd0;
  /* 1245efb2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1245efb5 push ecx */
  push32((uint32_t)(ECX));
  /* 1245efb6 call 0x1245f5f0 */
  push32(0x1245efbbu); f_1245f5f0();
  /* 1245efbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245efbe movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1245efc1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1245efc2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1245efc8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1245efce jmp 0x1245efee */
  goto L_1245efee;
L_1245efd0:;
  /* 1245efd0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1245efd3 push edx */
  push32((uint32_t)(EDX));
  /* 1245efd4 call 0x1245f5f0 */
  push32(0x1245efd9u); f_1245f5f0();
  /* 1245efd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245efdc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245efe1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1245efe2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1245efe8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1245efee:;
  /* 1245efee jmp 0x1245f02f */
  goto L_1245f02f;
L_1245eff0:;
  /* 1245eff0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245eff3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1245eff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245eff8 je 0x1245f015 */
  if (C.zf) goto L_1245f015;
  /* 1245effa lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1245effd push ecx */
  push32((uint32_t)(ECX));
  /* 1245effe call 0x1245f5f0 */
  push32(0x1245f003u); f_1245f5f0();
  /* 1245f003 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f006 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1245f007 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1245f00d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1245f013 jmp 0x1245f02f */
  goto L_1245f02f;
L_1245f015:;
  /* 1245f015 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1245f018 push edx */
  push32((uint32_t)(EDX));
  /* 1245f019 call 0x1245f5f0 */
  push32(0x1245f01eu); f_1245f5f0();
  /* 1245f01e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f021 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245f023 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1245f029 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1245f02f:;
  /* 1245f02f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245f032 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1245f035 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245f037 je 0x1245f077 */
  if (C.zf) goto L_1245f077;
  /* 1245f039 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f040 jg 0x1245f077 */
  if ((!C.zf&&C.sf==C.of)) goto L_1245f077;
  /* 1245f042 jl 0x1245f04d */
  if ((C.sf!=C.of)) goto L_1245f04d;
  /* 1245f044 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f04b jae 0x1245f077 */
  if (!C.cf) goto L_1245f077;
L_1245f04d:;
  /* 1245f04d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1245f053 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1245f055 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1245f05b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f05e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1245f060 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1245f066 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1245f06c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245f06f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1245f072 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1245f075 jmp 0x1245f08f */
  goto L_1245f08f;
L_1245f077:;
  /* 1245f077 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1245f07d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1245f083 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1245f089 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1245f08f:;
  /* 1245f08f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245f092 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1245f098 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245f09a jne 0x1245f0b7 */
  if (!C.zf) goto L_1245f0b7;
  /* 1245f09c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1245f0a2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1245f0a8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1245f0ab mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1245f0b1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1245f0b7:;
  /* 1245f0b7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f0be jge 0x1245f0cc */
  if ((C.sf==C.of)) goto L_1245f0cc;
  /* 1245f0c0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1245f0ca jmp 0x1245f0d5 */
  goto L_1245f0d5;
L_1245f0cc:;
  /* 1245f0cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245f0cf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1245f0d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1245f0d5:;
  /* 1245f0d5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1245f0db or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1245f0e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245f0e3 jne 0x1245f0ec */
  if (!C.zf) goto L_1245f0ec;
  /* 1245f0e5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1245f0ec:;
  /* 1245f0ec lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1245f0ef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1245f0f2:;
  /* 1245f0f2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1245f0f8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1245f0fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245f101 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1245f107 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245f109 jg 0x1245f11f */
  if ((!C.zf&&C.sf==C.of)) goto L_1245f11f;
  /* 1245f10b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1245f111 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1245f117 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245f119 je 0x1245f1a0 */
  if (C.zf) goto L_1245f1a0;
L_1245f11f:;
  /* 1245f11f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1245f125 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1245f126 push edx */
  push32((uint32_t)(EDX));
  /* 1245f127 push eax */
  push32((uint32_t)(EAX));
  /* 1245f128 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1245f12e push edx */
  push32((uint32_t)(EDX));
  /* 1245f12f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1245f135 push eax */
  push32((uint32_t)(EAX));
  /* 1245f136 call 0x1245e4b0 */
  push32(0x1245f13bu); f_1245e4b0();
  /* 1245f13b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f13e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1245f144 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1245f14a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1245f14b push edx */
  push32((uint32_t)(EDX));
  /* 1245f14c push eax */
  push32((uint32_t)(EAX));
  /* 1245f14d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1245f153 push ecx */
  push32((uint32_t)(ECX));
  /* 1245f154 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1245f15a push edx */
  push32((uint32_t)(EDX));
  /* 1245f15b call 0x1245e440 */
  push32(0x1245f160u); f_1245e440();
  /* 1245f160 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1245f166 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1245f16c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f173 jle 0x1245f187 */
  if ((C.zf||C.sf!=C.of)) goto L_1245f187;
  /* 1245f175 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1245f17b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f181 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1245f187:;
  /* 1245f187 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245f18a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1245f190 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1245f192 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245f195 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245f198 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1245f19b jmp 0x1245f0f2 */
  goto L_1245f0f2;
L_1245f1a0:;
  /* 1245f1a0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1245f1a3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245f1a6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1245f1a9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245f1ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f1af mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1245f1b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245f1b5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1245f1ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245f1bc je 0x1245f1e7 */
  if (C.zf) goto L_1245f1e7;
  /* 1245f1be mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245f1c1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1245f1c4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f1c7 jne 0x1245f1cf */
  if (!C.zf) goto L_1245f1cf;
  /* 1245f1c9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f1cd jne 0x1245f1e7 */
  if (!C.zf) goto L_1245f1e7;
L_1245f1cf:;
  /* 1245f1cf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245f1d2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245f1d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1245f1d8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245f1db mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1245f1de mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245f1e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f1e4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1245f1e7:;
  /* 1245f1e7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f1ee jne 0x1245f3c2 */
  if (!C.zf) goto L_1245f3c2;
  /* 1245f1f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245f1f7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1245f1fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245f1fc je 0x1245f24d */
  if (C.zf) goto L_1245f24d;
  /* 1245f1fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245f201 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1245f207 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245f209 je 0x1245f21b */
  if (C.zf) goto L_1245f21b;
  /* 1245f20b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1245f212 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1245f219 jmp 0x1245f24d */
  goto L_1245f24d;
L_1245f21b:;
  /* 1245f21b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245f21e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1245f221 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245f223 je 0x1245f235 */
  if (C.zf) goto L_1245f235;
  /* 1245f225 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1245f22c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1245f233 jmp 0x1245f24d */
  goto L_1245f24d;
L_1245f235:;
  /* 1245f235 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245f238 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1245f23b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245f23d je 0x1245f24d */
  if (C.zf) goto L_1245f24d;
  /* 1245f23f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1245f246 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1245f24d:;
  /* 1245f24d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1245f253 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245f256 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245f259 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1245f25f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245f262 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1245f265 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245f267 jne 0x1245f285 */
  if (!C.zf) goto L_1245f285;
  /* 1245f269 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1245f26f push eax */
  push32((uint32_t)(EAX));
  /* 1245f270 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f273 push ecx */
  push32((uint32_t)(ECX));
  /* 1245f274 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1245f27a push edx */
  push32((uint32_t)(EDX));
  /* 1245f27b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1245f27d call 0x1245f560 */
  push32(0x1245f282u); f_1245f560();
  /* 1245f282 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245f285:;
  /* 1245f285 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1245f28b push eax */
  push32((uint32_t)(EAX));
  /* 1245f28c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f28f push ecx */
  push32((uint32_t)(ECX));
  /* 1245f290 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245f293 push edx */
  push32((uint32_t)(EDX));
  /* 1245f294 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1245f29a push eax */
  push32((uint32_t)(EAX));
  /* 1245f29b call 0x1245f5a0 */
  push32(0x1245f2a0u); f_1245f5a0();
  /* 1245f2a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f2a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245f2a6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1245f2a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245f2ab je 0x1245f2d3 */
  if (C.zf) goto L_1245f2d3;
  /* 1245f2ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245f2b0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1245f2b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245f2b5 jne 0x1245f2d3 */
  if (!C.zf) goto L_1245f2d3;
  /* 1245f2b7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1245f2bd push eax */
  push32((uint32_t)(EAX));
  /* 1245f2be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f2c1 push ecx */
  push32((uint32_t)(ECX));
  /* 1245f2c2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1245f2c8 push edx */
  push32((uint32_t)(EDX));
  /* 1245f2c9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1245f2cb call 0x1245f560 */
  push32(0x1245f2d0u); f_1245f560();
  /* 1245f2d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245f2d3:;
  /* 1245f2d3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f2d7 je 0x1245f381 */
  if (C.zf) goto L_1245f381;
  /* 1245f2dd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f2e1 jle 0x1245f381 */
  if ((C.zf||C.sf!=C.of)) goto L_1245f381;
  /* 1245f2e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245f2ea mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1245f2f0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245f2f3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1245f2f9:;
  /* 1245f2f9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1245f2ff mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1245f305 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245f308 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1245f30e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245f310 je 0x1245f37f */
  if (C.zf) goto L_1245f37f;
  /* 1245f312 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1245f318 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1245f31b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1245f322 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1245f329 push eax */
  push32((uint32_t)(EAX));
  /* 1245f32a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1245f330 push ecx */
  push32((uint32_t)(ECX));
  /* 1245f331 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1245f337 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f33a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1245f340 call 0x12460710 */
  push32(0x1245f345u); f_12460710();
  /* 1245f345 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f348 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1245f34e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f355 jg 0x1245f359 */
  if ((!C.zf&&C.sf==C.of)) goto L_1245f359;
  /* 1245f357 jmp 0x1245f37f */
  goto L_1245f37f;
L_1245f359:;
  /* 1245f359 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1245f35f push eax */
  push32((uint32_t)(EAX));
  /* 1245f360 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f363 push ecx */
  push32((uint32_t)(ECX));
  /* 1245f364 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1245f36a push edx */
  push32((uint32_t)(EDX));
  /* 1245f36b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1245f371 push eax */
  push32((uint32_t)(EAX));
  /* 1245f372 call 0x1245f5a0 */
  push32(0x1245f377u); f_1245f5a0();
  /* 1245f377 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f37a jmp 0x1245f2f9 */
  goto L_1245f2f9;
L_1245f37f:;
  /* 1245f37f jmp 0x1245f39c */
  goto L_1245f39c;
L_1245f381:;
  /* 1245f381 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1245f387 push ecx */
  push32((uint32_t)(ECX));
  /* 1245f388 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f38b push edx */
  push32((uint32_t)(EDX));
  /* 1245f38c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245f38f push eax */
  push32((uint32_t)(EAX));
  /* 1245f390 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245f393 push ecx */
  push32((uint32_t)(ECX));
  /* 1245f394 call 0x1245f5a0 */
  push32(0x1245f399u); f_1245f5a0();
  /* 1245f399 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245f39c:;
  /* 1245f39c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245f39f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1245f3a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245f3a4 je 0x1245f3c2 */
  if (C.zf) goto L_1245f3c2;
  /* 1245f3a6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1245f3ac push eax */
  push32((uint32_t)(EAX));
  /* 1245f3ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f3b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1245f3b1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1245f3b7 push edx */
  push32((uint32_t)(EDX));
  /* 1245f3b8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1245f3ba call 0x1245f560 */
  push32(0x1245f3bfu); f_1245f560();
  /* 1245f3bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245f3c2:;
  /* 1245f3c2 jmp 0x1245e7d4 */
  goto L_1245e7d4;
L_1245f3c7:;
  /* 1245f3c7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1245f3cd pop edi */
  EDI = (pop32());
  /* 1245f3ce pop esi */
  ESI = (pop32());
  /* 1245f3cf pop ebx */
  EBX = (pop32());
  /* 1245f3d0 mov esp, ebp */
  ESP = (EBP);
  /* 1245f3d2 pop ebp */
  EBP = (pop32());
  /* 1245f3d3 ret  */
  ESPCHK(0x1245e7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4e0 @ 0x1245f4e0 (119 bytes, 44 insns) */
void f_1245f4e0(void) {
  FTRACE(0x1245f4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245f4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245f4e1 mov ebp, esp */
  EBP = (ESP);
  /* 1245f4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1245f4e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245f4e7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245f4ea sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245f4ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245f4f0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1245f4f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245f4f6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f4fa jl 0x1245f522 */
  if ((C.sf!=C.of)) goto L_1245f522;
  /* 1245f4fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245f4ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1245f501 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1245f504 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1245f506 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1245f50a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1245f510 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1245f513 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245f516 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1245f518 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f51b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245f51e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1245f520 jmp 0x1245f535 */
  goto L_1245f535;
L_1245f522:;
  /* 1245f522 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245f525 push edx */
  push32((uint32_t)(EDX));
  /* 1245f526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f529 push eax */
  push32((uint32_t)(EAX));
  /* 1245f52a call 0x1245e530 */
  push32(0x1245f52fu); f_1245e530();
  /* 1245f52f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f532 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1245f535:;
  /* 1245f535 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f539 jne 0x1245f546 */
  if (!C.zf) goto L_1245f546;
  /* 1245f53b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245f53e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1245f544 jmp 0x1245f553 */
  goto L_1245f553;
L_1245f546:;
  /* 1245f546 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245f549 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1245f54b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f54e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245f551 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1245f553:;
  /* 1245f553 mov esp, ebp */
  ESP = (EBP);
  /* 1245f555 pop ebp */
  EBP = (pop32());
  /* 1245f556 ret  */
  ESPCHK(0x1245f4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f560 @ 0x1245f560 (53 bytes, 23 insns) */
void f_1245f560(void) {
  FTRACE(0x1245f560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245f560 push ebp */
  push32((uint32_t)(EBP));
  /* 1245f561 mov ebp, esp */
  EBP = (ESP);
L_1245f563:;
  /* 1245f563 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245f566 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245f569 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245f56c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1245f56f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245f571 jle 0x1245f593 */
  if ((C.zf||C.sf!=C.of)) goto L_1245f593;
  /* 1245f573 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1245f576 push edx */
  push32((uint32_t)(EDX));
  /* 1245f577 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245f57a push eax */
  push32((uint32_t)(EAX));
  /* 1245f57b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f57e push ecx */
  push32((uint32_t)(ECX));
  /* 1245f57f call 0x1245f4e0 */
  push32(0x1245f584u); f_1245f4e0();
  /* 1245f584 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f587 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1245f58a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f58d jne 0x1245f591 */
  if (!C.zf) goto L_1245f591;
  /* 1245f58f jmp 0x1245f593 */
  goto L_1245f593;
L_1245f591:;
  /* 1245f591 jmp 0x1245f563 */
  goto L_1245f563;
L_1245f593:;
  /* 1245f593 pop ebp */
  EBP = (pop32());
  /* 1245f594 ret  */
  ESPCHK(0x1245f560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5a0 @ 0x1245f5a0 (74 bytes, 31 insns) */
void f_1245f5a0(void) {
  FTRACE(0x1245f5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245f5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245f5a1 mov ebp, esp */
  EBP = (ESP);
  /* 1245f5a3 push ecx */
  push32((uint32_t)(ECX));
L_1245f5a4:;
  /* 1245f5a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245f5a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245f5aa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245f5ad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1245f5b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245f5b2 jle 0x1245f5e6 */
  if ((C.zf||C.sf!=C.of)) goto L_1245f5e6;
  /* 1245f5b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1245f5b7 push edx */
  push32((uint32_t)(EDX));
  /* 1245f5b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245f5bb push eax */
  push32((uint32_t)(EAX));
  /* 1245f5bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f5bf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1245f5c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1245f5c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245f5c8 push eax */
  push32((uint32_t)(EAX));
  /* 1245f5c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f5cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f5cf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1245f5d2 call 0x1245f4e0 */
  push32(0x1245f5d7u); f_1245f4e0();
  /* 1245f5d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f5da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1245f5dd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f5e0 jne 0x1245f5e4 */
  if (!C.zf) goto L_1245f5e4;
  /* 1245f5e2 jmp 0x1245f5e6 */
  goto L_1245f5e6;
L_1245f5e4:;
  /* 1245f5e4 jmp 0x1245f5a4 */
  goto L_1245f5a4;
L_1245f5e6:;
  /* 1245f5e6 mov esp, ebp */
  ESP = (EBP);
  /* 1245f5e8 pop ebp */
  EBP = (pop32());
  /* 1245f5e9 ret  */
  ESPCHK(0x1245f5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5f0 @ 0x1245f5f0 (26 bytes, 12 insns) */
void f_1245f5f0(void) {
  FTRACE(0x1245f5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245f5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245f5f1 mov ebp, esp */
  EBP = (ESP);
  /* 1245f5f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f5f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245f5f8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f5fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f5fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1245f600 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f603 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245f605 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1245f608 pop ebp */
  EBP = (pop32());
  /* 1245f609 ret  */
  ESPCHK(0x1245f5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f610 @ 0x1245f610 (31 bytes, 14 insns) */
void f_1245f610(void) {
  FTRACE(0x1245f610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245f610 push ebp */
  push32((uint32_t)(EBP));
  /* 1245f611 mov ebp, esp */
  EBP = (ESP);
  /* 1245f613 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f616 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245f618 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f61b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f61e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1245f620 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f623 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245f625 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245f628 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1245f62a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245f62d pop ebp */
  EBP = (pop32());
  /* 1245f62e ret  */
  ESPCHK(0x1245f610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f630 @ 0x1245f630 (27 bytes, 12 insns) */
void f_1245f630(void) {
  FTRACE(0x1245f630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245f630 push ebp */
  push32((uint32_t)(EBP));
  /* 1245f631 mov ebp, esp */
  EBP = (ESP);
  /* 1245f633 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f636 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245f638 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f63b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f63e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1245f640 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f643 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245f645 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1245f649 pop ebp */
  EBP = (pop32());
  /* 1245f64a ret  */
  ESPCHK(0x1245f630u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1245f650 (145 bytes, 42 insns) */
void f_1245f650(void) {
  FTRACE(0x1245f650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245f650 push ebp */
  push32((uint32_t)(EBP));
  /* 1245f651 mov ebp, esp */
  EBP = (ESP);
  /* 1245f653 push ecx */
  push32((uint32_t)(ECX));
  /* 1245f654 call 0x1245f700 */
  push32(0x1245f659u); f_1245f700();
  /* 1245f659 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f65c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1245f65e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1245f665 jmp 0x1245f670 */
  goto L_1245f670;
L_1245f667:;
  /* 1245f667 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245f66a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f66d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1245f670:;
  /* 1245f670 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f674 jae 0x1245f69a */
  if (!C.cf) goto L_1245f69a;
  /* 1245f676 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245f679 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f67c cmp ecx, dword ptr [eax*8 + 0x12481fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12481fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f683 jne 0x1245f698 */
  if (!C.zf) goto L_1245f698;
  /* 1245f685 call 0x1245f6f0 */
  push32(0x1245f68au); f_1245f6f0();
  /* 1245f68a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245f68d mov ecx, dword ptr [edx*8 + 0x12481fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12481fbc)));
  /* 1245f694 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1245f696 jmp 0x1245f6dd */
  goto L_1245f6dd;
L_1245f698:;
  /* 1245f698 jmp 0x1245f667 */
  goto L_1245f667;
L_1245f69a:;
  /* 1245f69a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f69e jb 0x1245f6b3 */
  if (C.cf) goto L_1245f6b3;
  /* 1245f6a0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f6a4 ja 0x1245f6b3 */
  if ((!C.cf&&!C.zf)) goto L_1245f6b3;
  /* 1245f6a6 call 0x1245f6f0 */
  push32(0x1245f6abu); f_1245f6f0();
  /* 1245f6ab mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1245f6b1 jmp 0x1245f6dd */
  goto L_1245f6dd;
L_1245f6b3:;
  /* 1245f6b3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f6ba jb 0x1245f6d2 */
  if (C.cf) goto L_1245f6d2;
  /* 1245f6bc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f6c3 ja 0x1245f6d2 */
  if ((!C.cf&&!C.zf)) goto L_1245f6d2;
  /* 1245f6c5 call 0x1245f6f0 */
  push32(0x1245f6cau); f_1245f6f0();
  /* 1245f6ca mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1245f6d0 jmp 0x1245f6dd */
  goto L_1245f6dd;
L_1245f6d2:;
  /* 1245f6d2 call 0x1245f6f0 */
  push32(0x1245f6d7u); f_1245f6f0();
  /* 1245f6d7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1245f6dd:;
  /* 1245f6dd mov esp, ebp */
  ESP = (EBP);
  /* 1245f6df pop ebp */
  EBP = (pop32());
  /* 1245f6e0 ret  */
  ESPCHK(0x1245f650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6f0 @ 0x1245f6f0 (13 bytes, 6 insns) */
void f_1245f6f0(void) {
  FTRACE(0x1245f6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245f6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245f6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1245f6f3 call 0x12457260 */
  push32(0x1245f6f8u); f_12457260();
  /* 1245f6f8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f6fb pop ebp */
  EBP = (pop32());
  /* 1245f6fc ret  */
  ESPCHK(0x1245f6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f700 @ 0x1245f700 (13 bytes, 6 insns) */
void f_1245f700(void) {
  FTRACE(0x1245f700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245f700 push ebp */
  push32((uint32_t)(EBP));
  /* 1245f701 mov ebp, esp */
  EBP = (ESP);
  /* 1245f703 call 0x12457260 */
  push32(0x1245f708u); f_12457260();
  /* 1245f708 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f70b pop ebp */
  EBP = (pop32());
  /* 1245f70c ret  */
  ESPCHK(0x1245f700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f710 @ 0x1245f710 (664 bytes, 264 insns) [15 switch table(s)] */
void f_1245f710(void) {
  FTRACE(0x1245f710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245f710 push ebp */
  push32((uint32_t)(EBP));
  /* 1245f711 mov ebp, esp */
  EBP = (ESP);
  /* 1245f713 push edi */
  push32((uint32_t)(EDI));
  /* 1245f714 push esi */
  push32((uint32_t)(ESI));
  /* 1245f715 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1245f718 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245f71b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f71e mov eax, ecx */
  EAX = (ECX);
  /* 1245f720 mov edx, ecx */
  EDX = (ECX);
  /* 1245f722 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f724 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f726 jbe 0x1245f730 */
  if ((C.cf||C.zf)) goto L_1245f730;
  /* 1245f728 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f72a jb 0x1245f8a8 */
  if (C.cf) goto L_1245f8a8;
L_1245f730:;
  /* 1245f730 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1245f736 jne 0x1245f74c */
  if (!C.zf) goto L_1245f74c;
  /* 1245f738 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245f73b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1245f73e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f741 jb 0x1245f76c */
  if (C.cf) goto L_1245f76c;
  /* 1245f743 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1245f745 jmp dword ptr [edx*4 + 0x1245f858] */
  switch (EDX) {
    case 0: goto L_1245f868;
    case 1: goto L_1245f870;
    case 2: goto L_1245f87c;
    case 3: goto L_1245f890;
    default: x86_unimpl("switch@0x1245f745 out of table"); return;
  }
L_1245f74c:;
  /* 1245f74c mov eax, edi */
  EAX = (EDI);
  /* 1245f74e mov edx, 3 */
  EDX = (0x3u);
  /* 1245f753 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245f756 jb 0x1245f764 */
  if (C.cf) goto L_1245f764;
  /* 1245f758 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1245f75b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f75d jmp dword ptr [eax*4 + 0x1245f770] */
  switch (EAX) {
    case 1: goto L_1245f780;
    case 2: goto L_1245f7ac;
    case 3: goto L_1245f7d0;
    default: x86_unimpl("switch@0x1245f75d out of table"); return;
  }
L_1245f764:;
  /* 1245f764 jmp dword ptr [ecx*4 + 0x1245f868] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1245f868)))); return;
  /* 1245f76b nop  */
  /* nop */
L_1245f76c:;
  /* 1245f76c jmp dword ptr [ecx*4 + 0x1245f7ec] */
  switch (ECX) {
    case 0: goto L_1245f84f;
    case 1: goto L_1245f83c;
    case 2: goto L_1245f834;
    case 3: goto L_1245f82c;
    case 4: goto L_1245f824;
    case 5: goto L_1245f81c;
    case 6: goto L_1245f814;
    case 7: goto L_1245f80c;
    default: x86_unimpl("switch@0x1245f76c out of table"); return;
  }
  /* 1245f773 nop  */
  /* nop */
L_1245f780:;
  /* 1245f780 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1245f782 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1245f784 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1245f786 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1245f789 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1245f78c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1245f78f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245f792 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1245f795 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f798 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f79b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f79e jb 0x1245f76c */
  if (C.cf) goto L_1245f76c;
  /* 1245f7a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1245f7a2 jmp dword ptr [edx*4 + 0x1245f858] */
  switch (EDX) {
    case 0: goto L_1245f868;
    case 1: goto L_1245f870;
    case 2: goto L_1245f87c;
    case 3: goto L_1245f890;
    default: x86_unimpl("switch@0x1245f7a2 out of table"); return;
  }
  /* 1245f7a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1245f7ac:;
  /* 1245f7ac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1245f7ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1245f7b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1245f7b2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1245f7b5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245f7b8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1245f7bb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f7be add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f7c1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f7c4 jb 0x1245f76c */
  if (C.cf) goto L_1245f76c;
  /* 1245f7c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1245f7c8 jmp dword ptr [edx*4 + 0x1245f858] */
  switch (EDX) {
    case 0: goto L_1245f868;
    case 1: goto L_1245f870;
    case 2: goto L_1245f87c;
    case 3: goto L_1245f890;
    default: x86_unimpl("switch@0x1245f7c8 out of table"); return;
  }
  /* 1245f7cf nop  */
  /* nop */
L_1245f7d0:;
  /* 1245f7d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1245f7d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1245f7d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1245f7d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1245f7d7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245f7da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1245f7db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f7de jb 0x1245f76c */
  if (C.cf) goto L_1245f76c;
  /* 1245f7e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1245f7e2 jmp dword ptr [edx*4 + 0x1245f858] */
  switch (EDX) {
    case 0: goto L_1245f868;
    case 1: goto L_1245f870;
    case 2: goto L_1245f87c;
    case 3: goto L_1245f890;
    default: x86_unimpl("switch@0x1245f7e2 out of table"); return;
  }
  /* 1245f7e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1245f80c:;
  /* 1245f80c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1245f810 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1245f814:;
  /* 1245f814 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1245f818 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1245f81c:;
  /* 1245f81c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1245f820 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1245f824:;
  /* 1245f824 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1245f828 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1245f82c:;
  /* 1245f82c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1245f830 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1245f834:;
  /* 1245f834 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1245f838 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1245f83c:;
  /* 1245f83c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1245f840 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1245f844 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1245f84b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f84d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1245f84f:;
  /* 1245f84f jmp dword ptr [edx*4 + 0x1245f858] */
  switch (EDX) {
    case 0: goto L_1245f868;
    case 1: goto L_1245f870;
    case 2: goto L_1245f87c;
    case 3: goto L_1245f890;
    default: x86_unimpl("switch@0x1245f84f out of table"); return;
  }
  /* 1245f856 mov edi, edi */
  EDI = (EDI);
L_1245f868:;
  /* 1245f868 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f86b pop esi */
  ESI = (pop32());
  /* 1245f86c pop edi */
  EDI = (pop32());
  /* 1245f86d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1245f86e ret  */
  ESPCHK(0x1245f710u, _esp0);
  ESP += 4; return;
  /* 1245f86f nop  */
  /* nop */
L_1245f870:;
  /* 1245f870 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1245f872 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1245f874 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f877 pop esi */
  ESI = (pop32());
  /* 1245f878 pop edi */
  EDI = (pop32());
  /* 1245f879 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1245f87a ret  */
  ESPCHK(0x1245f710u, _esp0);
  ESP += 4; return;
  /* 1245f87b nop  */
  /* nop */
L_1245f87c:;
  /* 1245f87c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1245f87e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1245f880 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1245f883 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1245f886 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f889 pop esi */
  ESI = (pop32());
  /* 1245f88a pop edi */
  EDI = (pop32());
  /* 1245f88b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1245f88c ret  */
  ESPCHK(0x1245f710u, _esp0);
  ESP += 4; return;
  /* 1245f88d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1245f890:;
  /* 1245f890 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1245f892 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1245f894 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1245f897 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1245f89a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1245f89d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1245f8a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245f8a3 pop esi */
  ESI = (pop32());
  /* 1245f8a4 pop edi */
  EDI = (pop32());
  /* 1245f8a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1245f8a6 ret  */
  ESPCHK(0x1245f710u, _esp0);
  ESP += 4; return;
  /* 1245f8a7 nop  */
  /* nop */
L_1245f8a8:;
  /* 1245f8a8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1245f8ac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1245f8b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1245f8b6 jne 0x1245f8dc */
  if (!C.zf) goto L_1245f8dc;
  /* 1245f8b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245f8bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1245f8be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f8c1 jb 0x1245f8d0 */
  if (C.cf) goto L_1245f8d0;
  /* 1245f8c3 std  */
  C.df=1;
  /* 1245f8c4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1245f8c6 cld  */
  C.df=0;
  /* 1245f8c7 jmp dword ptr [edx*4 + 0x1245f9f0] */
  switch (EDX) {
    case 0: goto L_1245fa00;
    case 1: goto L_1245fa08;
    case 2: goto L_1245fa18;
    case 3: goto L_1245fa2c;
    default: x86_unimpl("switch@0x1245f8c7 out of table"); return;
  }
  /* 1245f8ce mov edi, edi */
  EDI = (EDI);
L_1245f8d0:;
  /* 1245f8d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1245f8d2 jmp dword ptr [ecx*4 + 0x1245f9a0] */
  switch (ECX) {
    case 0: goto L_1245f9e7;
    default: x86_unimpl("switch@0x1245f8d2 out of table"); return;
  }
  /* 1245f8d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1245f8dc:;
  /* 1245f8dc mov eax, edi */
  EAX = (EDI);
  /* 1245f8de mov edx, 3 */
  EDX = (0x3u);
  /* 1245f8e3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f8e6 jb 0x1245f8f4 */
  if (C.cf) goto L_1245f8f4;
  /* 1245f8e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1245f8eb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245f8ed jmp dword ptr [eax*4 + 0x1245f8f8] */
  switch (EAX) {
    case 1: goto L_1245f908;
    case 2: goto L_1245f928;
    case 3: goto L_1245f950;
    default: x86_unimpl("switch@0x1245f8ed out of table"); return;
  }
L_1245f8f4:;
  /* 1245f8f4 jmp dword ptr [ecx*4 + 0x1245f9f0] */
  switch (ECX) {
    case 0: goto L_1245fa00;
    case 1: goto L_1245fa08;
    case 2: goto L_1245fa18;
    case 3: goto L_1245fa2c;
    default: x86_unimpl("switch@0x1245f8f4 out of table"); return;
  }
  /* 1245f8fb nop  */
  /* nop */
L_1245f908:;
  /* 1245f908 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1245f90b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1245f90d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1245f910 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1245f911 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245f914 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1245f915 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f918 jb 0x1245f8d0 */
  if (C.cf) goto L_1245f8d0;
  /* 1245f91a std  */
  C.df=1;
  /* 1245f91b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1245f91d cld  */
  C.df=0;
  /* 1245f91e jmp dword ptr [edx*4 + 0x1245f9f0] */
  switch (EDX) {
    case 0: goto L_1245fa00;
    case 1: goto L_1245fa08;
    case 2: goto L_1245fa18;
    case 3: goto L_1245fa2c;
    default: x86_unimpl("switch@0x1245f91e out of table"); return;
  }
  /* 1245f925 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1245f928:;
  /* 1245f928 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1245f92b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1245f92d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1245f930 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1245f933 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245f936 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1245f939 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245f93c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245f93f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f942 jb 0x1245f8d0 */
  if (C.cf) goto L_1245f8d0;
  /* 1245f944 std  */
  C.df=1;
  /* 1245f945 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1245f947 cld  */
  C.df=0;
  /* 1245f948 jmp dword ptr [edx*4 + 0x1245f9f0] */
  switch (EDX) {
    case 0: goto L_1245fa00;
    case 1: goto L_1245fa08;
    case 2: goto L_1245fa18;
    case 3: goto L_1245fa2c;
    default: x86_unimpl("switch@0x1245f948 out of table"); return;
  }
  /* 1245f94f nop  */
  /* nop */
L_1245f950:;
  /* 1245f950 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1245f953 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1245f955 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1245f958 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1245f95b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1245f95e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1245f961 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245f964 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1245f967 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245f96a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245f96d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245f970 jb 0x1245f8d0 */
  if (C.cf) goto L_1245f8d0;
  /* 1245f976 std  */
  C.df=1;
  /* 1245f977 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1245f979 cld  */
  C.df=0;
  /* 1245f97a jmp dword ptr [edx*4 + 0x1245f9f0] */
  switch (EDX) {
    case 0: goto L_1245fa00;
    case 1: goto L_1245fa08;
    case 2: goto L_1245fa18;
    case 3: goto L_1245fa2c;
    default: x86_unimpl("switch@0x1245f97a out of table"); return;
  }
  /* 1245f981 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1245f984 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1245f985 stc  */
  x86_unimpl("stc @ 0x1245f985");
  /* 1245f986 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1245f987 adc ch, byte ptr [ecx + edi*8 - 0x64bedbb] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(ECX + EDI*8 + -0x64bedbb))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1245f98e inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1245f98f adc bh, byte ptr [ecx + edi*8 - 0x63bedbb] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(ECX + EDI*8 + -0x63bedbb))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1245f996 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1245f997 adc cl, ah */
  { uint32_t _a=(CL),_b=(AH),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1245f999 stc  */
  x86_unimpl("stc @ 0x1245f999");
  /* 1245f99a inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1245f99b adc dl, ah */
  { uint32_t _a=(DL),_b=(AH),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1245f99d stc  */
  x86_unimpl("stc @ 0x1245f99d");
  /* 1245f99e inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1245f9a4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1245f9a8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1245f9ac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1245f9b0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1245f9b4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1245f9b8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1245f9bc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1245f9c0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1245f9c4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1245f9c8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1245f9cc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1245f9d0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1245f9d4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1245f9d8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1245f9dc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1245f9e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1245f9e5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1245f9e7:;
  /* 1245f9e7 jmp dword ptr [edx*4 + 0x1245f9f0] */
  switch (EDX) {
    case 0: goto L_1245fa00;
    case 1: goto L_1245fa08;
    case 2: goto L_1245fa18;
    case 3: goto L_1245fa2c;
    default: x86_unimpl("switch@0x1245f9e7 out of table"); return;
  }
  /* 1245f9ee mov edi, edi */
  EDI = (EDI);
L_1245fa00:;
  /* 1245fa00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245fa03 pop esi */
  ESI = (pop32());
  /* 1245fa04 pop edi */
  EDI = (pop32());
  /* 1245fa05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1245fa06 ret  */
  ESPCHK(0x1245f710u, _esp0);
  ESP += 4; return;
  /* 1245fa07 nop  */
  /* nop */
L_1245fa08:;
  /* 1245fa08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1245fa0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1245fa0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245fa11 pop esi */
  ESI = (pop32());
  /* 1245fa12 pop edi */
  EDI = (pop32());
  /* 1245fa13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1245fa14 ret  */
  ESPCHK(0x1245f710u, _esp0);
  ESP += 4; return;
  /* 1245fa15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1245fa18:;
  /* 1245fa18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1245fa1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1245fa1e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1245fa21 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1245fa24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245fa27 pop esi */
  ESI = (pop32());
  /* 1245fa28 pop edi */
  EDI = (pop32());
  /* 1245fa29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1245fa2a ret  */
  ESPCHK(0x1245f710u, _esp0);
  ESP += 4; return;
  /* 1245fa2b nop  */
  /* nop */
L_1245fa2c:;
  /* 1245fa2c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1245fa2f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1245fa32 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1245fa35 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1245fa38 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1245fa3b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1245fa3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245fa41 pop esi */
  ESI = (pop32());
  /* 1245fa42 pop edi */
  EDI = (pop32());
  /* 1245fa43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1245fa44 ret  */
  ESPCHK(0x1245f710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa50 @ 0x1245fa50 (421 bytes, 148 insns) */
void f_1245fa50(void) {
  FTRACE(0x1245fa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245fa50 push ebp */
  push32((uint32_t)(EBP));
  /* 1245fa51 mov ebp, esp */
  EBP = (ESP);
  /* 1245fa53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1245fa55 push 0x1247f6d0 */
  push32((uint32_t)(0x1247f6d0u));
  /* 1245fa5a push 0x12460928 */
  push32((uint32_t)(0x12460928u));
  /* 1245fa5f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1245fa65 push eax */
  push32((uint32_t)(EAX));
  /* 1245fa66 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1245fa6d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245fa70 push ebx */
  push32((uint32_t)(EBX));
  /* 1245fa71 push esi */
  push32((uint32_t)(ESI));
  /* 1245fa72 push edi */
  push32((uint32_t)(EDI));
  /* 1245fa73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1245fa76 cmp dword ptr [0x12483a4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483a4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fa7d jne 0x1245face */
  if (!C.zf) goto L_1245face;
  /* 1245fa7f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1245fa82 push eax */
  push32((uint32_t)(EAX));
  /* 1245fa83 push 1 */
  push32((uint32_t)(0x1u));
  /* 1245fa85 push 0x1247f6c8 */
  push32((uint32_t)(0x1247f6c8u));
  /* 1245fa8a push 1 */
  push32((uint32_t)(0x1u));
  /* 1245fa8c call dword ptr [0x124862f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862f4))), 0x1245fa92u);
  /* 1245fa92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245fa94 je 0x1245faa2 */
  if (C.zf) goto L_1245faa2;
  /* 1245fa96 mov dword ptr [0x12483a4c], 1 */
  w32((uint32_t)(0x12483a4c), (0x1u));
  /* 1245faa0 jmp 0x1245face */
  goto L_1245face;
L_1245faa2:;
  /* 1245faa2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1245faa5 push ecx */
  push32((uint32_t)(ECX));
  /* 1245faa6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1245faa8 push 0x1247f6c4 */
  push32((uint32_t)(0x1247f6c4u));
  /* 1245faad push 1 */
  push32((uint32_t)(0x1u));
  /* 1245faaf push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fab1 call dword ptr [0x124862f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862f8))), 0x1245fab7u);
  /* 1245fab7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245fab9 je 0x1245fac7 */
  if (C.zf) goto L_1245fac7;
  /* 1245fabb mov dword ptr [0x12483a4c], 2 */
  w32((uint32_t)(0x12483a4c), (0x2u));
  /* 1245fac5 jmp 0x1245face */
  goto L_1245face;
L_1245fac7:;
  /* 1245fac7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245fac9 jmp 0x1245fbf8 */
  goto L_1245fbf8;
L_1245face:;
  /* 1245face cmp dword ptr [0x12483a4c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12483a4c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fad5 jne 0x1245fb05 */
  if (!C.zf) goto L_1245fb05;
  /* 1245fad7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fadb jne 0x1245fae6 */
  if (!C.zf) goto L_1245fae6;
  /* 1245fadd mov edx, dword ptr [0x12483a58] */
  EDX = (r32((uint32_t)(0x12483a58)));
  /* 1245fae3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1245fae6:;
  /* 1245fae6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1245fae9 push eax */
  push32((uint32_t)(EAX));
  /* 1245faea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245faed push ecx */
  push32((uint32_t)(ECX));
  /* 1245faee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245faf1 push edx */
  push32((uint32_t)(EDX));
  /* 1245faf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245faf5 push eax */
  push32((uint32_t)(EAX));
  /* 1245faf6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1245faf9 push ecx */
  push32((uint32_t)(ECX));
  /* 1245fafa call dword ptr [0x124862f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862f8))), 0x1245fb00u);
  /* 1245fb00 jmp 0x1245fbf8 */
  goto L_1245fbf8;
L_1245fb05:;
  /* 1245fb05 cmp dword ptr [0x12483a4c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12483a4c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fb0c jne 0x1245fbf6 */
  if (!C.zf) goto L_1245fbf6;
  /* 1245fb12 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fb16 jne 0x1245fb21 */
  if (!C.zf) goto L_1245fb21;
  /* 1245fb18 mov edx, dword ptr [0x12483a68] */
  EDX = (r32((uint32_t)(0x12483a68)));
  /* 1245fb1e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1245fb21:;
  /* 1245fb21 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fb23 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fb25 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245fb28 push eax */
  push32((uint32_t)(EAX));
  /* 1245fb29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245fb2c push ecx */
  push32((uint32_t)(ECX));
  /* 1245fb2d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1245fb30 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1245fb32 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245fb34 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1245fb37 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245fb3a push edx */
  push32((uint32_t)(EDX));
  /* 1245fb3b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1245fb3e push eax */
  push32((uint32_t)(EAX));
  /* 1245fb3f call dword ptr [0x124862fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862fc))), 0x1245fb45u);
  /* 1245fb45 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1245fb48 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fb4c jne 0x1245fb55 */
  if (!C.zf) goto L_1245fb55;
  /* 1245fb4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245fb50 jmp 0x1245fbf8 */
  goto L_1245fbf8;
L_1245fb55:;
  /* 1245fb55 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1245fb5c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245fb5f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1245fb61 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245fb64 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1245fb66 call 0x1245a9c0 */
  push32(0x1245fb6bu); f_1245a9c0();
  /* 1245fb6b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1245fb6e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1245fb71 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245fb74 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1245fb77 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245fb7a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1245fb7c push edx */
  push32((uint32_t)(EDX));
  /* 1245fb7d push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fb7f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245fb82 push eax */
  push32((uint32_t)(EAX));
  /* 1245fb83 call 0x1245b590 */
  push32(0x1245fb88u); f_1245b590();
  /* 1245fb88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245fb8b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1245fb92 jmp 0x1245fbab */
  goto L_1245fbab;
  /* 1245fb94 mov eax, 1 */
  EAX = (0x1u);
  /* 1245fb99 ret  */
  ESPCHK(0x1245fa50u, _esp0);
  ESP += 4; return;
  /* 1245fb9a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1245fb9d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1245fba4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1245fbab:;
  /* 1245fbab cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fbaf jne 0x1245fbb5 */
  if (!C.zf) goto L_1245fbb5;
  /* 1245fbb1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245fbb3 jmp 0x1245fbf8 */
  goto L_1245fbf8;
L_1245fbb5:;
  /* 1245fbb5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245fbb8 push ecx */
  push32((uint32_t)(ECX));
  /* 1245fbb9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245fbbc push edx */
  push32((uint32_t)(EDX));
  /* 1245fbbd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245fbc0 push eax */
  push32((uint32_t)(EAX));
  /* 1245fbc1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245fbc4 push ecx */
  push32((uint32_t)(ECX));
  /* 1245fbc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1245fbc7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1245fbca push edx */
  push32((uint32_t)(EDX));
  /* 1245fbcb call dword ptr [0x124862fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862fc))), 0x1245fbd1u);
  /* 1245fbd1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1245fbd4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fbd8 jne 0x1245fbde */
  if (!C.zf) goto L_1245fbde;
  /* 1245fbda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245fbdc jmp 0x1245fbf8 */
  goto L_1245fbf8;
L_1245fbde:;
  /* 1245fbde mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1245fbe1 push eax */
  push32((uint32_t)(EAX));
  /* 1245fbe2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245fbe5 push ecx */
  push32((uint32_t)(ECX));
  /* 1245fbe6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245fbe9 push edx */
  push32((uint32_t)(EDX));
  /* 1245fbea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245fbed push eax */
  push32((uint32_t)(EAX));
  /* 1245fbee call dword ptr [0x124862f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862f4))), 0x1245fbf4u);
  /* 1245fbf4 jmp 0x1245fbf8 */
  goto L_1245fbf8;
L_1245fbf6:;
  /* 1245fbf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1245fbf8:;
  /* 1245fbf8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1245fbfb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245fbfe mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1245fc05 pop edi */
  EDI = (pop32());
  /* 1245fc06 pop esi */
  ESI = (pop32());
  /* 1245fc07 pop ebx */
  EBX = (pop32());
  /* 1245fc08 mov esp, ebp */
  ESP = (EBP);
  /* 1245fc0a pop ebp */
  EBP = (pop32());
  /* 1245fc0b ret  */
  ESPCHK(0x1245fa50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc10 @ 0x1245fc10 (727 bytes, 263 insns) */
void f_1245fc10(void) {
  FTRACE(0x1245fc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245fc10 push ebp */
  push32((uint32_t)(EBP));
  /* 1245fc11 mov ebp, esp */
  EBP = (ESP);
  /* 1245fc13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1245fc15 push 0x1247f6e0 */
  push32((uint32_t)(0x1247f6e0u));
  /* 1245fc1a push 0x12460928 */
  push32((uint32_t)(0x12460928u));
  /* 1245fc1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1245fc25 push eax */
  push32((uint32_t)(EAX));
  /* 1245fc26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1245fc2d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245fc30 push ebx */
  push32((uint32_t)(EBX));
  /* 1245fc31 push esi */
  push32((uint32_t)(ESI));
  /* 1245fc32 push edi */
  push32((uint32_t)(EDI));
  /* 1245fc33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1245fc36 cmp dword ptr [0x12483a70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483a70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fc3d jne 0x1245fc96 */
  if (!C.zf) goto L_1245fc96;
  /* 1245fc3f push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fc41 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fc43 push 1 */
  push32((uint32_t)(0x1u));
  /* 1245fc45 push 0x1247f6c8 */
  push32((uint32_t)(0x1247f6c8u));
  /* 1245fc4a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1245fc4f push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fc51 call dword ptr [0x124862ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862ec))), 0x1245fc57u);
  /* 1245fc57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245fc59 je 0x1245fc67 */
  if (C.zf) goto L_1245fc67;
  /* 1245fc5b mov dword ptr [0x12483a70], 1 */
  w32((uint32_t)(0x12483a70), (0x1u));
  /* 1245fc65 jmp 0x1245fc96 */
  goto L_1245fc96;
L_1245fc67:;
  /* 1245fc67 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fc69 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fc6b push 1 */
  push32((uint32_t)(0x1u));
  /* 1245fc6d push 0x1247f6c4 */
  push32((uint32_t)(0x1247f6c4u));
  /* 1245fc72 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1245fc77 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fc79 call dword ptr [0x124862f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862f0))), 0x1245fc7fu);
  /* 1245fc7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245fc81 je 0x1245fc8f */
  if (C.zf) goto L_1245fc8f;
  /* 1245fc83 mov dword ptr [0x12483a70], 2 */
  w32((uint32_t)(0x12483a70), (0x2u));
  /* 1245fc8d jmp 0x1245fc96 */
  goto L_1245fc96;
L_1245fc8f:;
  /* 1245fc8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245fc91 jmp 0x1245ff01 */
  goto L_1245ff01;
L_1245fc96:;
  /* 1245fc96 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fc9a jle 0x1245fcaf */
  if ((C.zf||C.sf!=C.of)) goto L_1245fcaf;
  /* 1245fc9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1245fc9f push eax */
  push32((uint32_t)(EAX));
  /* 1245fca0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245fca3 push ecx */
  push32((uint32_t)(ECX));
  /* 1245fca4 call 0x1245ff20 */
  push32(0x1245fca9u); f_1245ff20();
  /* 1245fca9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245fcac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1245fcaf:;
  /* 1245fcaf cmp dword ptr [0x12483a70], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12483a70))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fcb6 jne 0x1245fcdb */
  if (!C.zf) goto L_1245fcdb;
  /* 1245fcb8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1245fcbb push edx */
  push32((uint32_t)(EDX));
  /* 1245fcbc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1245fcbf push eax */
  push32((uint32_t)(EAX));
  /* 1245fcc0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1245fcc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1245fcc4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245fcc7 push edx */
  push32((uint32_t)(EDX));
  /* 1245fcc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245fccb push eax */
  push32((uint32_t)(EAX));
  /* 1245fccc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245fccf push ecx */
  push32((uint32_t)(ECX));
  /* 1245fcd0 call dword ptr [0x124862f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862f0))), 0x1245fcd6u);
  /* 1245fcd6 jmp 0x1245ff01 */
  goto L_1245ff01;
L_1245fcdb:;
  /* 1245fcdb cmp dword ptr [0x12483a70], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12483a70))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fce2 jne 0x1245feff */
  if (!C.zf) goto L_1245feff;
  /* 1245fce8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fcec jne 0x1245fcf7 */
  if (!C.zf) goto L_1245fcf7;
  /* 1245fcee mov edx, dword ptr [0x12483a68] */
  EDX = (r32((uint32_t)(0x12483a68)));
  /* 1245fcf4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1245fcf7:;
  /* 1245fcf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fcf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fcfb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1245fcfe push eax */
  push32((uint32_t)(EAX));
  /* 1245fcff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245fd02 push ecx */
  push32((uint32_t)(ECX));
  /* 1245fd03 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1245fd06 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1245fd08 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245fd0a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1245fd0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245fd10 push edx */
  push32((uint32_t)(EDX));
  /* 1245fd11 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1245fd14 push eax */
  push32((uint32_t)(EAX));
  /* 1245fd15 call dword ptr [0x124862fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862fc))), 0x1245fd1bu);
  /* 1245fd1b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1245fd1e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fd22 jne 0x1245fd2b */
  if (!C.zf) goto L_1245fd2b;
  /* 1245fd24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245fd26 jmp 0x1245ff01 */
  goto L_1245ff01;
L_1245fd2b:;
  /* 1245fd2b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1245fd32 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245fd35 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1245fd37 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245fd3a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1245fd3c call 0x1245a9c0 */
  push32(0x1245fd41u); f_1245a9c0();
  /* 1245fd41 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1245fd44 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1245fd47 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1245fd4a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1245fd4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1245fd54 jmp 0x1245fd6d */
  goto L_1245fd6d;
  /* 1245fd56 mov eax, 1 */
  EAX = (0x1u);
  /* 1245fd5b ret  */
  ESPCHK(0x1245fc10u, _esp0);
  ESP += 4; return;
  /* 1245fd5c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1245fd5f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1245fd66 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1245fd6d:;
  /* 1245fd6d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fd71 jne 0x1245fd7a */
  if (!C.zf) goto L_1245fd7a;
  /* 1245fd73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245fd75 jmp 0x1245ff01 */
  goto L_1245ff01;
L_1245fd7a:;
  /* 1245fd7a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245fd7d push edx */
  push32((uint32_t)(EDX));
  /* 1245fd7e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245fd81 push eax */
  push32((uint32_t)(EAX));
  /* 1245fd82 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1245fd85 push ecx */
  push32((uint32_t)(ECX));
  /* 1245fd86 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245fd89 push edx */
  push32((uint32_t)(EDX));
  /* 1245fd8a push 1 */
  push32((uint32_t)(0x1u));
  /* 1245fd8c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1245fd8f push eax */
  push32((uint32_t)(EAX));
  /* 1245fd90 call dword ptr [0x124862fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862fc))), 0x1245fd96u);
  /* 1245fd96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245fd98 jne 0x1245fda1 */
  if (!C.zf) goto L_1245fda1;
  /* 1245fd9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245fd9c jmp 0x1245ff01 */
  goto L_1245ff01;
L_1245fda1:;
  /* 1245fda1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fda3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fda5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245fda8 push ecx */
  push32((uint32_t)(ECX));
  /* 1245fda9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245fdac push edx */
  push32((uint32_t)(EDX));
  /* 1245fdad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245fdb0 push eax */
  push32((uint32_t)(EAX));
  /* 1245fdb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245fdb4 push ecx */
  push32((uint32_t)(ECX));
  /* 1245fdb5 call dword ptr [0x124862ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862ec))), 0x1245fdbbu);
  /* 1245fdbb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1245fdbe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fdc2 jne 0x1245fdcb */
  if (!C.zf) goto L_1245fdcb;
  /* 1245fdc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245fdc6 jmp 0x1245ff01 */
  goto L_1245ff01;
L_1245fdcb:;
  /* 1245fdcb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245fdce and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1245fdd4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245fdd6 je 0x1245fe1b */
  if (C.zf) goto L_1245fe1b;
  /* 1245fdd8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fddc je 0x1245fe16 */
  if (C.zf) goto L_1245fe16;
  /* 1245fdde mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245fde1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fde4 jle 0x1245fded */
  if ((C.zf||C.sf!=C.of)) goto L_1245fded;
  /* 1245fde6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245fde8 jmp 0x1245ff01 */
  goto L_1245ff01;
L_1245fded:;
  /* 1245fded mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1245fdf0 push ecx */
  push32((uint32_t)(ECX));
  /* 1245fdf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1245fdf4 push edx */
  push32((uint32_t)(EDX));
  /* 1245fdf5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245fdf8 push eax */
  push32((uint32_t)(EAX));
  /* 1245fdf9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245fdfc push ecx */
  push32((uint32_t)(ECX));
  /* 1245fdfd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245fe00 push edx */
  push32((uint32_t)(EDX));
  /* 1245fe01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245fe04 push eax */
  push32((uint32_t)(EAX));
  /* 1245fe05 call dword ptr [0x124862ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862ec))), 0x1245fe0bu);
  /* 1245fe0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245fe0d jne 0x1245fe16 */
  if (!C.zf) goto L_1245fe16;
  /* 1245fe0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245fe11 jmp 0x1245ff01 */
  goto L_1245ff01;
L_1245fe16:;
  /* 1245fe16 jmp 0x1245fefa */
  goto L_1245fefa;
L_1245fe1b:;
  /* 1245fe1b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245fe1e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1245fe21 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1245fe28 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245fe2b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1245fe2d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245fe30 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1245fe32 call 0x1245a9c0 */
  push32(0x1245fe37u); f_1245a9c0();
  /* 1245fe37 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1245fe3a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1245fe3d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1245fe40 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1245fe43 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1245fe4a jmp 0x1245fe63 */
  goto L_1245fe63;
  /* 1245fe4c mov eax, 1 */
  EAX = (0x1u);
  /* 1245fe51 ret  */
  ESPCHK(0x1245fc10u, _esp0);
  ESP += 4; return;
  /* 1245fe52 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1245fe55 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1245fe5c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1245fe63:;
  /* 1245fe63 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fe67 jne 0x1245fe70 */
  if (!C.zf) goto L_1245fe70;
  /* 1245fe69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245fe6b jmp 0x1245ff01 */
  goto L_1245ff01;
L_1245fe70:;
  /* 1245fe70 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245fe73 push eax */
  push32((uint32_t)(EAX));
  /* 1245fe74 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245fe77 push ecx */
  push32((uint32_t)(ECX));
  /* 1245fe78 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1245fe7b push edx */
  push32((uint32_t)(EDX));
  /* 1245fe7c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245fe7f push eax */
  push32((uint32_t)(EAX));
  /* 1245fe80 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245fe83 push ecx */
  push32((uint32_t)(ECX));
  /* 1245fe84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245fe87 push edx */
  push32((uint32_t)(EDX));
  /* 1245fe88 call dword ptr [0x124862ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862ec))), 0x1245fe8eu);
  /* 1245fe8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245fe90 jne 0x1245fe96 */
  if (!C.zf) goto L_1245fe96;
  /* 1245fe92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245fe94 jmp 0x1245ff01 */
  goto L_1245ff01;
L_1245fe96:;
  /* 1245fe96 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fe9a jne 0x1245feca */
  if (!C.zf) goto L_1245feca;
  /* 1245fe9c push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fe9e push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fea0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fea4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245fea7 push eax */
  push32((uint32_t)(EAX));
  /* 1245fea8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245feab push ecx */
  push32((uint32_t)(ECX));
  /* 1245feac push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1245feb1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1245feb4 push edx */
  push32((uint32_t)(EDX));
  /* 1245feb5 call dword ptr [0x124863b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863b0))), 0x1245febbu);
  /* 1245febb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1245febe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fec2 jne 0x1245fec8 */
  if (!C.zf) goto L_1245fec8;
  /* 1245fec4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245fec6 jmp 0x1245ff01 */
  goto L_1245ff01;
L_1245fec8:;
  /* 1245fec8 jmp 0x1245fefa */
  goto L_1245fefa;
L_1245feca:;
  /* 1245feca push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fecc push 0 */
  push32((uint32_t)(0x0u));
  /* 1245fece mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1245fed1 push eax */
  push32((uint32_t)(EAX));
  /* 1245fed2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1245fed5 push ecx */
  push32((uint32_t)(ECX));
  /* 1245fed6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245fed9 push edx */
  push32((uint32_t)(EDX));
  /* 1245feda mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245fedd push eax */
  push32((uint32_t)(EAX));
  /* 1245fede push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1245fee3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1245fee6 push ecx */
  push32((uint32_t)(ECX));
  /* 1245fee7 call dword ptr [0x124863b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863b0))), 0x1245feedu);
  /* 1245feed mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1245fef0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245fef4 jne 0x1245fefa */
  if (!C.zf) goto L_1245fefa;
  /* 1245fef6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245fef8 jmp 0x1245ff01 */
  goto L_1245ff01;
L_1245fefa:;
  /* 1245fefa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245fefd jmp 0x1245ff01 */
  goto L_1245ff01;
L_1245feff:;
  /* 1245feff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1245ff01:;
  /* 1245ff01 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1245ff04 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245ff07 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1245ff0e pop edi */
  EDI = (pop32());
  /* 1245ff0f pop esi */
  ESI = (pop32());
  /* 1245ff10 pop ebx */
  EBX = (pop32());
  /* 1245ff11 mov esp, ebp */
  ESP = (EBP);
  /* 1245ff13 pop ebp */
  EBP = (pop32());
  /* 1245ff14 ret  */
  ESPCHK(0x1245fc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff20 @ 0x1245ff20 (80 bytes, 32 insns) */
void f_1245ff20(void) {
  FTRACE(0x1245ff20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245ff20 push ebp */
  push32((uint32_t)(EBP));
  /* 1245ff21 mov ebp, esp */
  EBP = (ESP);
  /* 1245ff23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245ff26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245ff29 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1245ff2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245ff2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1245ff32:;
  /* 1245ff32 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245ff35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245ff38 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245ff3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1245ff3e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245ff40 je 0x1245ff57 */
  if (C.zf) goto L_1245ff57;
  /* 1245ff42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ff45 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1245ff48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245ff4a je 0x1245ff57 */
  if (C.zf) goto L_1245ff57;
  /* 1245ff4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ff4f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ff52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245ff55 jmp 0x1245ff32 */
  goto L_1245ff32;
L_1245ff57:;
  /* 1245ff57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ff5a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1245ff5d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245ff5f jne 0x1245ff69 */
  if (!C.zf) goto L_1245ff69;
  /* 1245ff61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ff64 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245ff67 jmp 0x1245ff6c */
  goto L_1245ff6c;
L_1245ff69:;
  /* 1245ff69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1245ff6c:;
  /* 1245ff6c mov esp, ebp */
  ESP = (EBP);
  /* 1245ff6e pop ebp */
  EBP = (pop32());
  /* 1245ff6f ret  */
  ESPCHK(0x1245ff20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff70 @ 0x1245ff70 (130 bytes, 43 insns) */
void f_1245ff70(void) {
  FTRACE(0x1245ff70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245ff70 push ebp */
  push32((uint32_t)(EBP));
  /* 1245ff71 mov ebp, esp */
  EBP = (ESP);
  /* 1245ff73 push ecx */
  push32((uint32_t)(ECX));
  /* 1245ff74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245ff77 cmp eax, dword ptr [0x1248537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1248537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ff7d jae 0x1245ffa1 */
  if (!C.cf) goto L_1245ffa1;
  /* 1245ff7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245ff82 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1245ff85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245ff88 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1245ff8b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245ff8e mov eax, dword ptr [ecx*4 + 0x12485240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12485240)));
  /* 1245ff95 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1245ff9a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1245ff9d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245ff9f jne 0x1245ffbc */
  if (!C.zf) goto L_1245ffbc;
L_1245ffa1:;
  /* 1245ffa1 call 0x1245f6f0 */
  push32(0x1245ffa6u); f_1245f6f0();
  /* 1245ffa6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1245ffac call 0x1245f700 */
  push32(0x1245ffb1u); f_1245f700();
  /* 1245ffb1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1245ffb7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245ffba jmp 0x1245ffee */
  goto L_1245ffee;
L_1245ffbc:;
  /* 1245ffbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245ffbf push edx */
  push32((uint32_t)(EDX));
  /* 1245ffc0 call 0x12460f10 */
  push32(0x1245ffc5u); f_12460f10();
  /* 1245ffc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ffc8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245ffcb push eax */
  push32((uint32_t)(EAX));
  /* 1245ffcc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245ffcf push ecx */
  push32((uint32_t)(ECX));
  /* 1245ffd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245ffd3 push edx */
  push32((uint32_t)(EDX));
  /* 1245ffd4 call 0x12460000 */
  push32(0x1245ffd9u); f_12460000();
  /* 1245ffd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ffdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245ffdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245ffe2 push eax */
  push32((uint32_t)(EAX));
  /* 1245ffe3 call 0x12460fa0 */
  push32(0x1245ffe8u); f_12460fa0();
  /* 1245ffe8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ffeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1245ffee:;
  /* 1245ffee mov esp, ebp */
  ESP = (EBP);
  /* 1245fff0 pop ebp */
  EBP = (pop32());
  /* 1245fff1 ret  */
  ESPCHK(0x1245ff70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010000 @ 0x12460000 (178 bytes, 56 insns) */
void f_12460000(void) {
  FTRACE(0x12460000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12460000 push ebp */
  push32((uint32_t)(EBP));
  /* 12460001 mov ebp, esp */
  EBP = (ESP);
  /* 12460003 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12460006 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460009 push eax */
  push32((uint32_t)(EAX));
  /* 1246000a call 0x12460d90 */
  push32(0x1246000fu); f_12460d90();
  /* 1246000f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12460012 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12460015 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460019 jne 0x1246002e */
  if (!C.zf) goto L_1246002e;
  /* 1246001b call 0x1245f6f0 */
  push32(0x12460020u); f_1245f6f0();
  /* 12460020 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12460026 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12460029 jmp 0x124600ae */
  goto L_124600ae;
L_1246002e:;
  /* 1246002e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12460031 push ecx */
  push32((uint32_t)(ECX));
  /* 12460032 push 0 */
  push32((uint32_t)(0x0u));
  /* 12460034 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12460037 push edx */
  push32((uint32_t)(EDX));
  /* 12460038 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246003b push eax */
  push32((uint32_t)(EAX));
  /* 1246003c call dword ptr [0x124862e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862e8))), 0x12460042u);
  /* 12460042 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12460045 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460049 jne 0x12460056 */
  if (!C.zf) goto L_12460056;
  /* 1246004b call dword ptr [0x12486388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486388))), 0x12460051u);
  /* 12460051 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12460054 jmp 0x1246005d */
  goto L_1246005d;
L_12460056:;
  /* 12460056 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1246005d:;
  /* 1246005d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460061 je 0x12460074 */
  if (C.zf) goto L_12460074;
  /* 12460063 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460066 push ecx */
  push32((uint32_t)(ECX));
  /* 12460067 call 0x1245f650 */
  push32(0x1246006cu); f_1245f650();
  /* 1246006c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246006f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12460072 jmp 0x124600ae */
  goto L_124600ae;
L_12460074:;
  /* 12460074 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460077 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1246007a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246007d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12460080 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12460083 mov ecx, dword ptr [edx*4 + 0x12485240] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12485240)));
  /* 1246008a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1246008e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12460091 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460094 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12460097 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246009a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1246009d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124600a0 mov eax, dword ptr [eax*4 + 0x12485240] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12485240)));
  /* 124600a7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 124600ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_124600ae:;
  /* 124600ae mov esp, ebp */
  ESP = (EBP);
  /* 124600b0 pop ebp */
  EBP = (pop32());
  /* 124600b1 ret  */
  ESPCHK(0x12460000u, _esp0);
  ESP += 4; return;
}

/* FUN_100100c0 @ 0x124600c0 (130 bytes, 43 insns) */
void f_124600c0(void) {
  FTRACE(0x124600c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124600c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124600c1 mov ebp, esp */
  EBP = (ESP);
  /* 124600c3 push ecx */
  push32((uint32_t)(ECX));
  /* 124600c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124600c7 cmp eax, dword ptr [0x1248537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1248537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124600cd jae 0x124600f1 */
  if (!C.cf) goto L_124600f1;
  /* 124600cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124600d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124600d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124600d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124600db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124600de mov eax, dword ptr [ecx*4 + 0x12485240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12485240)));
  /* 124600e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124600ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124600ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124600ef jne 0x1246010c */
  if (!C.zf) goto L_1246010c;
L_124600f1:;
  /* 124600f1 call 0x1245f6f0 */
  push32(0x124600f6u); f_1245f6f0();
  /* 124600f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124600fc call 0x1245f700 */
  push32(0x12460101u); f_1245f700();
  /* 12460101 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12460107 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1246010a jmp 0x1246013e */
  goto L_1246013e;
L_1246010c:;
  /* 1246010c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246010f push edx */
  push32((uint32_t)(EDX));
  /* 12460110 call 0x12460f10 */
  push32(0x12460115u); f_12460f10();
  /* 12460115 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12460118 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246011b push eax */
  push32((uint32_t)(EAX));
  /* 1246011c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1246011f push ecx */
  push32((uint32_t)(ECX));
  /* 12460120 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460123 push edx */
  push32((uint32_t)(EDX));
  /* 12460124 call 0x12460150 */
  push32(0x12460129u); f_12460150();
  /* 12460129 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246012c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1246012f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460132 push eax */
  push32((uint32_t)(EAX));
  /* 12460133 call 0x12460fa0 */
  push32(0x12460138u); f_12460fa0();
  /* 12460138 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246013b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1246013e:;
  /* 1246013e mov esp, ebp */
  ESP = (EBP);
  /* 12460140 pop ebp */
  EBP = (pop32());
  /* 12460141 ret  */
  ESPCHK(0x124600c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010150 @ 0x12460150 (627 bytes, 182 insns) */
void f_12460150(void) {
  FTRACE(0x12460150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12460150 push ebp */
  push32((uint32_t)(EBP));
  /* 12460151 mov ebp, esp */
  EBP = (ESP);
  /* 12460153 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12460159 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12460160 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12460163 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12460169 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246016d jne 0x12460176 */
  if (!C.zf) goto L_12460176;
  /* 1246016f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12460171 jmp 0x124603bf */
  goto L_124603bf;
L_12460176:;
  /* 12460176 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460179 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1246017c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246017f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12460182 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12460185 mov eax, dword ptr [ecx*4 + 0x12485240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12485240)));
  /* 1246018c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12460191 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12460194 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12460196 je 0x124601a8 */
  if (C.zf) goto L_124601a8;
  /* 12460198 push 2 */
  push32((uint32_t)(0x2u));
  /* 1246019a push 0 */
  push32((uint32_t)(0x0u));
  /* 1246019c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246019f push edx */
  push32((uint32_t)(EDX));
  /* 124601a0 call 0x12460000 */
  push32(0x124601a5u); f_12460000();
  /* 124601a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124601a8:;
  /* 124601a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124601ab sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124601ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124601b1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124601b4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124601b7 mov edx, dword ptr [eax*4 + 0x12485240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12485240)));
  /* 124601be movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 124601c3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 124601c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124601ca je 0x124602dc */
  if (C.zf) goto L_124602dc;
  /* 124601d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124601d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124601d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_124601dd:;
  /* 124601dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124601e0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124601e3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124601e6 jae 0x124602da */
  if (!C.cf) goto L_124602da;
  /* 124601ec lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 124601f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124601f5:;
  /* 124601f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124601f8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 124601fe sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12460200 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460206 jge 0x12460267 */
  if ((C.sf==C.of)) goto L_12460267;
  /* 12460208 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246020b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1246020e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460211 jae 0x12460267 */
  if (!C.cf) goto L_12460267;
  /* 12460213 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460216 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12460218 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1246021e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460221 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460224 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12460227 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1246022e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460231 jne 0x12460251 */
  if (!C.zf) goto L_12460251;
  /* 12460233 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12460239 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246023c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12460242 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12460245 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12460248 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1246024b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246024e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12460251:;
  /* 12460251 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12460254 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1246025a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1246025c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1246025f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460262 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12460265 jmp 0x124601f5 */
  goto L_124601f5;
L_12460267:;
  /* 12460267 push 0 */
  push32((uint32_t)(0x0u));
  /* 12460269 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1246026f push edx */
  push32((uint32_t)(EDX));
  /* 12460270 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12460273 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12460279 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1246027b push eax */
  push32((uint32_t)(EAX));
  /* 1246027c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12460282 push edx */
  push32((uint32_t)(EDX));
  /* 12460283 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460286 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12460289 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246028c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1246028f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12460292 mov edx, dword ptr [eax*4 + 0x12485240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12485240)));
  /* 12460299 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1246029c push eax */
  push32((uint32_t)(EAX));
  /* 1246029d call dword ptr [0x12486348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486348))), 0x124602a3u);
  /* 124602a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124602a5 je 0x124602ca */
  if (C.zf) goto L_124602ca;
  /* 124602a7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124602aa add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124602b0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 124602b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124602b6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 124602bc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124602be cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124602c4 jge 0x124602c8 */
  if ((C.sf==C.of)) goto L_124602c8;
  /* 124602c6 jmp 0x124602da */
  goto L_124602da;
L_124602c8:;
  /* 124602c8 jmp 0x124602d5 */
  goto L_124602d5;
L_124602ca:;
  /* 124602ca call dword ptr [0x12486388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486388))), 0x124602d0u);
  /* 124602d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124602d3 jmp 0x124602da */
  goto L_124602da;
L_124602d5:;
  /* 124602d5 jmp 0x124601dd */
  goto L_124601dd;
L_124602da:;
  /* 124602da jmp 0x1246032c */
  goto L_1246032c;
L_124602dc:;
  /* 124602dc push 0 */
  push32((uint32_t)(0x0u));
  /* 124602de lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 124602e4 push ecx */
  push32((uint32_t)(ECX));
  /* 124602e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124602e8 push edx */
  push32((uint32_t)(EDX));
  /* 124602e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124602ec push eax */
  push32((uint32_t)(EAX));
  /* 124602ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124602f0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124602f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124602f6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124602f9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124602fc mov eax, dword ptr [ecx*4 + 0x12485240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12485240)));
  /* 12460303 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12460306 push ecx */
  push32((uint32_t)(ECX));
  /* 12460307 call dword ptr [0x12486348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486348))), 0x1246030du);
  /* 1246030d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1246030f je 0x12460323 */
  if (C.zf) goto L_12460323;
  /* 12460311 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12460318 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1246031e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12460321 jmp 0x1246032c */
  goto L_1246032c;
L_12460323:;
  /* 12460323 call dword ptr [0x12486388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486388))), 0x12460329u);
  /* 12460329 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1246032c:;
  /* 1246032c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460330 jne 0x124603b6 */
  if (!C.zf) goto L_124603b6;
  /* 12460336 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246033a je 0x1246036a */
  if (C.zf) goto L_1246036a;
  /* 1246033c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460340 jne 0x12460359 */
  if (!C.zf) goto L_12460359;
  /* 12460342 call 0x1245f6f0 */
  push32(0x12460347u); f_1245f6f0();
  /* 12460347 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1246034d call 0x1245f700 */
  push32(0x12460352u); f_1245f700();
  /* 12460352 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12460355 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12460357 jmp 0x12460365 */
  goto L_12460365;
L_12460359:;
  /* 12460359 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246035c push edx */
  push32((uint32_t)(EDX));
  /* 1246035d call 0x1245f650 */
  push32(0x12460362u); f_1245f650();
  /* 12460362 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12460365:;
  /* 12460365 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12460368 jmp 0x124603bf */
  goto L_124603bf;
L_1246036a:;
  /* 1246036a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246036d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12460370 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460373 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12460376 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12460379 mov edx, dword ptr [eax*4 + 0x12485240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12485240)));
  /* 12460380 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12460385 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12460388 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1246038a je 0x1246039b */
  if (C.zf) goto L_1246039b;
  /* 1246038c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1246038f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12460392 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460395 jne 0x1246039b */
  if (!C.zf) goto L_1246039b;
  /* 12460397 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12460399 jmp 0x124603bf */
  goto L_124603bf;
L_1246039b:;
  /* 1246039b call 0x1245f6f0 */
  push32(0x124603a0u); f_1245f6f0();
  /* 124603a0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 124603a6 call 0x1245f700 */
  push32(0x124603abu); f_1245f700();
  /* 124603ab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124603b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124603b4 jmp 0x124603bf */
  goto L_124603bf;
L_124603b6:;
  /* 124603b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124603b9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_124603bf:;
  /* 124603bf mov esp, ebp */
  ESP = (EBP);
  /* 124603c1 pop ebp */
  EBP = (pop32());
  /* 124603c2 ret  */
  ESPCHK(0x12460150u, _esp0);
  ESP += 4; return;
}

/* FUN_100103d0 @ 0x124603d0 (199 bytes, 68 insns) */
void f_124603d0(void) {
  FTRACE(0x124603d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124603d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124603d1 mov ebp, esp */
  EBP = (ESP);
  /* 124603d3 push ecx */
  push32((uint32_t)(ECX));
  /* 124603d4 push ebx */
  push32((uint32_t)(EBX));
  /* 124603d5 push esi */
  push32((uint32_t)(ESI));
  /* 124603d6 push edi */
  push32((uint32_t)(EDI));
L_124603d7:;
  /* 124603d7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124603db jne 0x124603fb */
  if (!C.zf) goto L_124603fb;
  /* 124603dd push 0x1247f628 */
  push32((uint32_t)(0x1247f628u));
  /* 124603e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124603e4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 124603e6 push 0x1247f6f8 */
  push32((uint32_t)(0x1247f6f8u));
  /* 124603eb push 2 */
  push32((uint32_t)(0x2u));
  /* 124603ed call 0x124568e0 */
  push32(0x124603f2u); f_124568e0();
  /* 124603f2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124603f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124603f8 jne 0x124603fb */
  if (!C.zf) goto L_124603fb;
  /* 124603fa int3  */
  x86_unimpl("int3 @ 0x124603fa");
L_124603fb:;
  /* 124603fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124603fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124603ff jne 0x124603d7 */
  if (!C.zf) goto L_124603d7;
  /* 12460401 mov ecx, dword ptr [0x12483a74] */
  ECX = (r32((uint32_t)(0x12483a74)));
  /* 12460407 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246040a mov dword ptr [0x12483a74], ecx */
  w32((uint32_t)(0x12483a74), (ECX));
  /* 12460410 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460413 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12460416 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12460418 push 0x1247f6f8 */
  push32((uint32_t)(0x1247f6f8u));
  /* 1246041d push 2 */
  push32((uint32_t)(0x2u));
  /* 1246041f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12460424 call 0x12457820 */
  push32(0x12460429u); f_12457820();
  /* 12460429 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246042c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246042f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12460432 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460435 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460439 je 0x12460456 */
  if (C.zf) goto L_12460456;
  /* 1246043b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246043e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12460441 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12460444 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460447 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1246044a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246044d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12460454 jmp 0x1246047b */
  goto L_1246047b;
L_12460456:;
  /* 12460456 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460459 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1246045c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1246045f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460462 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12460465 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460468 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246046b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246046e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12460471 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460474 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1246047b:;
  /* 1246047b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246047e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460481 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12460484 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12460486 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460489 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12460490 pop edi */
  EDI = (pop32());
  /* 12460491 pop esi */
  ESI = (pop32());
  /* 12460492 pop ebx */
  EBX = (pop32());
  /* 12460493 mov esp, ebp */
  ESP = (EBP);
  /* 12460495 pop ebp */
  EBP = (pop32());
  /* 12460496 ret  */
  ESPCHK(0x124603d0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x124604a0 (50 bytes, 17 insns) */
void f_124604a0(void) {
  FTRACE(0x124604a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124604a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124604a1 mov ebp, esp */
  EBP = (ESP);
  /* 124604a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124604a6 cmp eax, dword ptr [0x1248537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1248537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124604ac jb 0x124604b2 */
  if (C.cf) goto L_124604b2;
  /* 124604ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124604b0 jmp 0x124604d0 */
  goto L_124604d0;
L_124604b2:;
  /* 124604b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124604b5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124604b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124604bb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124604be imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124604c1 mov eax, dword ptr [ecx*4 + 0x12485240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12485240)));
  /* 124604c8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124604cd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_124604d0:;
  /* 124604d0 pop ebp */
  EBP = (pop32());
  /* 124604d1 ret  */
  ESPCHK(0x124604a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100104e0 @ 0x124604e0 (300 bytes, 80 insns) */
void f_124604e0(void) {
  FTRACE(0x124604e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124604e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124604e1 mov ebp, esp */
  EBP = (ESP);
  /* 124604e3 push ecx */
  push32((uint32_t)(ECX));
  /* 124604e4 cmp dword ptr [0x12484f40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12484f40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124604eb jne 0x124604f9 */
  if (!C.zf) goto L_124604f9;
  /* 124604ed mov dword ptr [0x12484f40], 0x200 */
  w32((uint32_t)(0x12484f40), (0x200u));
  /* 124604f7 jmp 0x1246050c */
  goto L_1246050c;
L_124604f9:;
  /* 124604f9 cmp dword ptr [0x12484f40], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12484f40))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460500 jge 0x1246050c */
  if ((C.sf==C.of)) goto L_1246050c;
  /* 12460502 mov dword ptr [0x12484f40], 0x14 */
  w32((uint32_t)(0x12484f40), (0x14u));
L_1246050c:;
  /* 1246050c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12460511 push 0x1247f704 */
  push32((uint32_t)(0x1247f704u));
  /* 12460516 push 2 */
  push32((uint32_t)(0x2u));
  /* 12460518 push 4 */
  push32((uint32_t)(0x4u));
  /* 1246051a mov eax, dword ptr [0x12484f40] */
  EAX = (r32((uint32_t)(0x12484f40)));
  /* 1246051f push eax */
  push32((uint32_t)(EAX));
  /* 12460520 call 0x12457c30 */
  push32(0x12460525u); f_12457c30();
  /* 12460525 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12460528 mov dword ptr [0x12483be8], eax */
  w32((uint32_t)(0x12483be8), (EAX));
  /* 1246052d cmp dword ptr [0x12483be8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483be8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460534 jne 0x12460575 */
  if (!C.zf) goto L_12460575;
  /* 12460536 mov dword ptr [0x12484f40], 0x14 */
  w32((uint32_t)(0x12484f40), (0x14u));
  /* 12460540 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12460545 push 0x1247f704 */
  push32((uint32_t)(0x1247f704u));
  /* 1246054a push 2 */
  push32((uint32_t)(0x2u));
  /* 1246054c push 4 */
  push32((uint32_t)(0x4u));
  /* 1246054e mov ecx, dword ptr [0x12484f40] */
  ECX = (r32((uint32_t)(0x12484f40)));
  /* 12460554 push ecx */
  push32((uint32_t)(ECX));
  /* 12460555 call 0x12457c30 */
  push32(0x1246055au); f_12457c30();
  /* 1246055a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246055d mov dword ptr [0x12483be8], eax */
  w32((uint32_t)(0x12483be8), (EAX));
  /* 12460562 cmp dword ptr [0x12483be8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483be8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460569 jne 0x12460575 */
  if (!C.zf) goto L_12460575;
  /* 1246056b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1246056d call 0x12456790 */
  push32(0x12460572u); f_12456790();
  /* 12460572 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12460575:;
  /* 12460575 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1246057c jmp 0x12460587 */
  goto L_12460587;
L_1246057e:;
  /* 1246057e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460581 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460584 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12460587:;
  /* 12460587 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246058b jge 0x124605a6 */
  if ((C.sf==C.of)) goto L_124605a6;
  /* 1246058d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460590 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12460593 add eax, 0x12482120 */
  { uint32_t _a=(EAX),_b=(0x12482120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460598 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246059b mov edx, dword ptr [0x12483be8] */
  EDX = (r32((uint32_t)(0x12483be8)));
  /* 124605a1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 124605a4 jmp 0x1246057e */
  goto L_1246057e;
L_124605a6:;
  /* 124605a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124605ad jmp 0x124605b8 */
  goto L_124605b8;
L_124605af:;
  /* 124605af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124605b2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124605b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124605b8:;
  /* 124605b8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124605bc jge 0x12460608 */
  if ((C.sf==C.of)) goto L_12460608;
  /* 124605be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124605c1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124605c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124605c7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124605ca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124605cd mov eax, dword ptr [ecx*4 + 0x12485240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12485240)));
  /* 124605d4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124605d8 je 0x124605f6 */
  if (C.zf) goto L_124605f6;
  /* 124605da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124605dd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124605e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124605e3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124605e6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124605e9 mov eax, dword ptr [ecx*4 + 0x12485240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12485240)));
  /* 124605f0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124605f4 jne 0x12460606 */
  if (!C.zf) goto L_12460606;
L_124605f6:;
  /* 124605f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124605f9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124605fc mov dword ptr [ecx + 0x12482130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12482130), (0xffffffffu));
L_12460606:;
  /* 12460606 jmp 0x124605af */
  goto L_124605af;
L_12460608:;
  /* 12460608 mov esp, ebp */
  ESP = (EBP);
  /* 1246060a pop ebp */
  EBP = (pop32());
  /* 1246060b ret  */
  ESPCHK(0x124604e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010610 @ 0x12460610 (26 bytes, 9 insns) */
void f_12460610(void) {
  FTRACE(0x12460610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12460610 push ebp */
  push32((uint32_t)(EBP));
  /* 12460611 mov ebp, esp */
  EBP = (ESP);
  /* 12460613 call 0x12461210 */
  push32(0x12460618u); f_12461210();
  /* 12460618 movsx eax, byte ptr [0x12483890] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12483890))));
  /* 1246061f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12460621 je 0x12460628 */
  if (C.zf) goto L_12460628;
  /* 12460623 call 0x12460fd0 */
  push32(0x12460628u); f_12460fd0();
L_12460628:;
  /* 12460628 pop ebp */
  EBP = (pop32());
  /* 12460629 ret  */
  ESPCHK(0x12460610u, _esp0);
  ESP += 4; return;
}

/* FUN_10010630 @ 0x12460630 (61 bytes, 20 insns) */
void f_12460630(void) {
  FTRACE(0x12460630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12460630 push ebp */
  push32((uint32_t)(EBP));
  /* 12460631 mov ebp, esp */
  EBP = (ESP);
  /* 12460633 cmp dword ptr [ebp + 8], 0x12482120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12482120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246063a jb 0x1246065e */
  if (C.cf) goto L_1246065e;
  /* 1246063c cmp dword ptr [ebp + 8], 0x12482380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12482380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460643 ja 0x1246065e */
  if ((!C.cf&&!C.zf)) goto L_1246065e;
  /* 12460645 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460648 sub eax, 0x12482120 */
  { uint32_t _a=(EAX),_b=(0x12482120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1246064d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12460650 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460653 push eax */
  push32((uint32_t)(EAX));
  /* 12460654 call 0x1245b220 */
  push32(0x12460659u); f_1245b220();
  /* 12460659 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246065c jmp 0x1246066b */
  goto L_1246066b;
L_1246065e:;
  /* 1246065e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460661 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460664 push ecx */
  push32((uint32_t)(ECX));
  /* 12460665 call dword ptr [0x12486324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486324))), 0x1246066bu);
L_1246066b:;
  /* 1246066b pop ebp */
  EBP = (pop32());
  /* 1246066c ret  */
  ESPCHK(0x12460630u, _esp0);
  ESP += 4; return;
}

/* FUN_10010670 @ 0x12460670 (41 bytes, 16 insns) */
void f_12460670(void) {
  FTRACE(0x12460670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12460670 push ebp */
  push32((uint32_t)(EBP));
  /* 12460671 mov ebp, esp */
  EBP = (ESP);
  /* 12460673 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460677 jge 0x1246068a */
  if ((C.sf==C.of)) goto L_1246068a;
  /* 12460679 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246067c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246067f push eax */
  push32((uint32_t)(EAX));
  /* 12460680 call 0x1245b220 */
  push32(0x12460685u); f_1245b220();
  /* 12460685 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12460688 jmp 0x12460697 */
  goto L_12460697;
L_1246068a:;
  /* 1246068a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1246068d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460690 push ecx */
  push32((uint32_t)(ECX));
  /* 12460691 call dword ptr [0x12486324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486324))), 0x12460697u);
L_12460697:;
  /* 12460697 pop ebp */
  EBP = (pop32());
  /* 12460698 ret  */
  ESPCHK(0x12460670u, _esp0);
  ESP += 4; return;
}

/* FUN_100106a0 @ 0x124606a0 (61 bytes, 20 insns) */
void f_124606a0(void) {
  FTRACE(0x124606a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124606a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124606a1 mov ebp, esp */
  EBP = (ESP);
  /* 124606a3 cmp dword ptr [ebp + 8], 0x12482120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12482120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124606aa jb 0x124606ce */
  if (C.cf) goto L_124606ce;
  /* 124606ac cmp dword ptr [ebp + 8], 0x12482380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12482380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124606b3 ja 0x124606ce */
  if ((!C.cf&&!C.zf)) goto L_124606ce;
  /* 124606b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124606b8 sub eax, 0x12482120 */
  { uint32_t _a=(EAX),_b=(0x12482120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124606bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124606c0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124606c3 push eax */
  push32((uint32_t)(EAX));
  /* 124606c4 call 0x1245b2c0 */
  push32(0x124606c9u); f_1245b2c0();
  /* 124606c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124606cc jmp 0x124606db */
  goto L_124606db;
L_124606ce:;
  /* 124606ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124606d1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124606d4 push ecx */
  push32((uint32_t)(ECX));
  /* 124606d5 call dword ptr [0x12486320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486320))), 0x124606dbu);
L_124606db:;
  /* 124606db pop ebp */
  EBP = (pop32());
  /* 124606dc ret  */
  ESPCHK(0x124606a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100106e0 @ 0x124606e0 (41 bytes, 16 insns) */
void f_124606e0(void) {
  FTRACE(0x124606e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124606e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124606e1 mov ebp, esp */
  EBP = (ESP);
  /* 124606e3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124606e7 jge 0x124606fa */
  if ((C.sf==C.of)) goto L_124606fa;
  /* 124606e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124606ec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124606ef push eax */
  push32((uint32_t)(EAX));
  /* 124606f0 call 0x1245b2c0 */
  push32(0x124606f5u); f_1245b2c0();
  /* 124606f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124606f8 jmp 0x12460707 */
  goto L_12460707;
L_124606fa:;
  /* 124606fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124606fd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460700 push ecx */
  push32((uint32_t)(ECX));
  /* 12460701 call dword ptr [0x12486320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486320))), 0x12460707u);
L_12460707:;
  /* 12460707 pop ebp */
  EBP = (pop32());
  /* 12460708 ret  */
  ESPCHK(0x124606e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010710 @ 0x12460710 (119 bytes, 34 insns) */
void f_12460710(void) {
  FTRACE(0x12460710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12460710 push ebp */
  push32((uint32_t)(EBP));
  /* 12460711 mov ebp, esp */
  EBP = (ESP);
  /* 12460713 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12460716 push 0x12483be4 */
  push32((uint32_t)(0x12483be4u));
  /* 1246071b call dword ptr [0x1248635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248635c))), 0x12460721u);
  /* 12460721 cmp dword ptr [0x12483bd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483bd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460728 je 0x12460748 */
  if (C.zf) goto L_12460748;
  /* 1246072a push 0x12483be4 */
  push32((uint32_t)(0x12483be4u));
  /* 1246072f call dword ptr [0x1248634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248634c))), 0x12460735u);
  /* 12460735 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12460737 call 0x1245b220 */
  push32(0x1246073cu); f_1245b220();
  /* 1246073c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246073f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12460746 jmp 0x1246074f */
  goto L_1246074f;
L_12460748:;
  /* 12460748 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1246074f:;
  /* 1246074f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12460753 push eax */
  push32((uint32_t)(EAX));
  /* 12460754 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460757 push ecx */
  push32((uint32_t)(ECX));
  /* 12460758 call 0x12460790 */
  push32(0x1246075du); f_12460790();
  /* 1246075d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12460760 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12460763 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460767 je 0x12460775 */
  if (C.zf) goto L_12460775;
  /* 12460769 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1246076b call 0x1245b2c0 */
  push32(0x12460770u); f_1245b2c0();
  /* 12460770 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12460773 jmp 0x12460780 */
  goto L_12460780;
L_12460775:;
  /* 12460775 push 0x12483be4 */
  push32((uint32_t)(0x12483be4u));
  /* 1246077a call dword ptr [0x1248634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248634c))), 0x12460780u);
L_12460780:;
  /* 12460780 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12460783 mov esp, ebp */
  ESP = (EBP);
  /* 12460785 pop ebp */
  EBP = (pop32());
  /* 12460786 ret  */
  ESPCHK(0x12460710u, _esp0);
  ESP += 4; return;
}

/* FUN_10010790 @ 0x12460790 (160 bytes, 50 insns) */
void f_12460790(void) {
  FTRACE(0x12460790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12460790 push ebp */
  push32((uint32_t)(EBP));
  /* 12460791 mov ebp, esp */
  EBP = (ESP);
  /* 12460793 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12460796 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246079a jne 0x124607a3 */
  if (!C.zf) goto L_124607a3;
  /* 1246079c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1246079e jmp 0x1246082c */
  goto L_1246082c;
L_124607a3:;
  /* 124607a3 cmp dword ptr [0x12483a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124607aa jne 0x124607da */
  if (!C.zf) goto L_124607da;
  /* 124607ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124607af and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124607b4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124607b9 jle 0x124607cb */
  if ((C.zf||C.sf!=C.of)) goto L_124607cb;
  /* 124607bb call 0x1245f6f0 */
  push32(0x124607c0u); f_1245f6f0();
  /* 124607c0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 124607c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124607c9 jmp 0x1246082c */
  goto L_1246082c;
L_124607cb:;
  /* 124607cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124607ce mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 124607d1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 124607d3 mov eax, 1 */
  EAX = (0x1u);
  /* 124607d8 jmp 0x1246082c */
  goto L_1246082c;
L_124607da:;
  /* 124607da mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124607e1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 124607e4 push eax */
  push32((uint32_t)(EAX));
  /* 124607e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124607e7 mov ecx, dword ptr [0x12481ea4] */
  ECX = (r32((uint32_t)(0x12481ea4)));
  /* 124607ed push ecx */
  push32((uint32_t)(ECX));
  /* 124607ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124607f1 push edx */
  push32((uint32_t)(EDX));
  /* 124607f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 124607f4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 124607f7 push eax */
  push32((uint32_t)(EAX));
  /* 124607f8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124607fd mov ecx, dword ptr [0x12483a68] */
  ECX = (r32((uint32_t)(0x12483a68)));
  /* 12460803 push ecx */
  push32((uint32_t)(ECX));
  /* 12460804 call dword ptr [0x124863b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863b0))), 0x1246080au);
  /* 1246080a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1246080d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460811 je 0x12460819 */
  if (C.zf) goto L_12460819;
  /* 12460813 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460817 je 0x12460829 */
  if (C.zf) goto L_12460829;
L_12460819:;
  /* 12460819 call 0x1245f6f0 */
  push32(0x1246081eu); f_1245f6f0();
  /* 1246081e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12460824 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12460827 jmp 0x1246082c */
  goto L_1246082c;
L_12460829:;
  /* 12460829 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1246082c:;
  /* 1246082c mov esp, ebp */
  ESP = (EBP);
  /* 1246082e pop ebp */
  EBP = (pop32());
  /* 1246082f ret  */
  ESPCHK(0x12460790u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12460830 (32 bytes, 18 insns) */
void f_12460830(void) {
  FTRACE(0x12460830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12460830 push ebp */
  push32((uint32_t)(EBP));
  /* 12460831 mov ebp, esp */
  EBP = (ESP);
  /* 12460833 push ebx */
  push32((uint32_t)(EBX));
  /* 12460834 push esi */
  push32((uint32_t)(ESI));
  /* 12460835 push edi */
  push32((uint32_t)(EDI));
  /* 12460836 push ebp */
  push32((uint32_t)(EBP));
  /* 12460837 push 0 */
  push32((uint32_t)(0x0u));
  /* 12460839 push 0 */
  push32((uint32_t)(0x0u));
  /* 1246083b push 0x12460848 */
  push32((uint32_t)(0x12460848u));
  /* 12460840 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12460843 call 0x12467f7c */
  push32(0x12460848u); f_12467f7c();
  /* 12460848 pop ebp */
  EBP = (pop32());
  /* 12460849 pop edi */
  EDI = (pop32());
  /* 1246084a pop esi */
  ESI = (pop32());
  /* 1246084b pop ebx */
  EBX = (pop32());
  /* 1246084c mov esp, ebp */
  ESP = (EBP);
  /* 1246084e pop ebp */
  EBP = (pop32());
  /* 1246084f ret  */
  ESPCHK(0x12460830u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12460872 (104 bytes, 33 insns) */
void f_12460872(void) {
  FTRACE(0x12460872u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12460872 push ebx */
  push32((uint32_t)(EBX));
  /* 12460873 push esi */
  push32((uint32_t)(ESI));
  /* 12460874 push edi */
  push32((uint32_t)(EDI));
  /* 12460875 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12460879 push eax */
  push32((uint32_t)(EAX));
  /* 1246087a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1246087c push 0x12460850 */
  push32((uint32_t)(0x12460850u));
  /* 12460881 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12460888 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1246088f:;
  /* 1246088f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12460893 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12460896 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12460899 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246089c je 0x124608cc */
  if (C.zf) goto L_124608cc;
  /* 1246089e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124608a2 je 0x124608cc */
  if (C.zf) goto L_124608cc;
  /* 124608a4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 124608a7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 124608aa mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 124608ae mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 124608b1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124608b6 jne 0x124608ca */
  if (!C.zf) goto L_124608ca;
  /* 124608b8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 124608bd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 124608c1 call 0x12460906 */
  push32(0x124608c6u); f_12460906();
  /* 124608c6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x124608cau);
L_124608ca:;
  /* 124608ca jmp 0x1246088f */
  goto L_1246088f;
L_124608cc:;
  /* 124608cc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 124608d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124608d6 pop edi */
  EDI = (pop32());
  /* 124608d7 pop esi */
  ESI = (pop32());
  /* 124608d8 pop ebx */
  EBX = (pop32());
  /* 124608d9 ret  */
  ESPCHK(0x12460872u, _esp0);
  ESP += 4; return;
}

/* FUN_10010906 @ 0x12460906 (24 bytes, 10 insns) */
void f_12460906(void) {
  FTRACE(0x12460906u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12460906 push ebx */
  push32((uint32_t)(EBX));
  /* 12460907 push ecx */
  push32((uint32_t)(ECX));
  /* 12460908 mov ebx, 0x124823b8 */
  EBX = (0x124823b8u);
  /* 1246090d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460910 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12460913 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12460916 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12460919 pop ecx */
  ECX = (pop32());
  /* 1246091a pop ebx */
  EBX = (pop32());
  /* 1246091b ret 4 */
  ESPCHK(0x12460906u, _esp0);
  ESP += 8; return;
}

/* FUN_100109e5 @ 0x124609e5 (27 bytes, 11 insns) */
void f_124609e5(void) {
  FTRACE(0x124609e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124609e5 push ebp */
  push32((uint32_t)(EBP));
  /* 124609e6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 124609ea mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 124609ec mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 124609ef push eax */
  push32((uint32_t)(EAX));
  /* 124609f0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 124609f3 push eax */
  push32((uint32_t)(EAX));
  /* 124609f4 call 0x12460872 */
  push32(0x124609f9u); f_12460872();
  /* 124609f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124609fc pop ebp */
  EBP = (pop32());
  /* 124609fd ret 4 */
  ESPCHK(0x124609e5u, _esp0);
  ESP += 8; return;
}

/* FUN_10010a00 @ 0x12460a00 (482 bytes, 138 insns) */
void f_12460a00(void) {
  FTRACE(0x12460a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12460a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12460a01 mov ebp, esp */
  EBP = (ESP);
  /* 12460a03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12460a06 push esi */
  push32((uint32_t)(ESI));
  /* 12460a07 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 12460a0e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12460a10 call 0x1245b220 */
  push32(0x12460a15u); f_1245b220();
  /* 12460a15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12460a18 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12460a1f jmp 0x12460a2a */
  goto L_12460a2a;
L_12460a21:;
  /* 12460a21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12460a24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460a27 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12460a2a:;
  /* 12460a2a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460a2e jge 0x12460bd0 */
  if ((C.sf==C.of)) goto L_12460bd0;
  /* 12460a34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12460a37 cmp dword ptr [ecx*4 + 0x12485240], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12485240))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460a3f je 0x12460b36 */
  if (C.zf) goto L_12460b36;
  /* 12460a45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12460a48 mov eax, dword ptr [edx*4 + 0x12485240] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12485240)));
  /* 12460a4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12460a52 jmp 0x12460a5d */
  goto L_12460a5d;
L_12460a54:;
  /* 12460a54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460a57 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460a5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12460a5d:;
  /* 12460a5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12460a60 mov eax, dword ptr [edx*4 + 0x12485240] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12485240)));
  /* 12460a67 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460a6c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460a6f jae 0x12460b26 */
  if (!C.cf) goto L_12460b26;
  /* 12460a75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460a78 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12460a7c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12460a7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12460a81 jne 0x12460b21 */
  if (!C.zf) goto L_12460b21;
  /* 12460a87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460a8a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460a8e jne 0x12460ac9 */
  if (!C.zf) goto L_12460ac9;
  /* 12460a90 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12460a92 call 0x1245b220 */
  push32(0x12460a97u); f_1245b220();
  /* 12460a97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12460a9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460a9d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460aa1 jne 0x12460abf */
  if (!C.zf) goto L_12460abf;
  /* 12460aa3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460aa6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460aa9 push edx */
  push32((uint32_t)(EDX));
  /* 12460aaa call dword ptr [0x12486328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486328))), 0x12460ab0u);
  /* 12460ab0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460ab3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12460ab6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460ab9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460abc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12460abf:;
  /* 12460abf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12460ac1 call 0x1245b2c0 */
  push32(0x12460ac6u); f_1245b2c0();
  /* 12460ac6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12460ac9:;
  /* 12460ac9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460acc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460acf push eax */
  push32((uint32_t)(EAX));
  /* 12460ad0 call dword ptr [0x12486324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486324))), 0x12460ad6u);
  /* 12460ad6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460ad9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12460add and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12460ae0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12460ae2 je 0x12460af6 */
  if (C.zf) goto L_12460af6;
  /* 12460ae4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460ae7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460aea push eax */
  push32((uint32_t)(EAX));
  /* 12460aeb call dword ptr [0x12486320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486320))), 0x12460af1u);
  /* 12460af1 jmp 0x12460a54 */
  goto L_12460a54;
L_12460af6:;
  /* 12460af6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460af9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12460aff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12460b02 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12460b05 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12460b08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460b0b sub eax, dword ptr [edx*4 + 0x12485240] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12485240))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12460b12 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12460b13 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12460b18 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12460b1a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460b1c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12460b1f jmp 0x12460b26 */
  goto L_12460b26;
L_12460b21:;
  /* 12460b21 jmp 0x12460a54 */
  goto L_12460a54;
L_12460b26:;
  /* 12460b26 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460b2a je 0x12460b31 */
  if (C.zf) goto L_12460b31;
  /* 12460b2c jmp 0x12460bd0 */
  goto L_12460bd0;
L_12460b31:;
  /* 12460b31 jmp 0x12460bcb */
  goto L_12460bcb;
L_12460b36:;
  /* 12460b36 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12460b38 push 0x1247f70c */
  push32((uint32_t)(0x1247f70cu));
  /* 12460b3d push 2 */
  push32((uint32_t)(0x2u));
  /* 12460b3f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12460b44 call 0x12457820 */
  push32(0x12460b49u); f_12457820();
  /* 12460b49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12460b4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12460b4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460b53 je 0x12460bc9 */
  if (C.zf) goto L_12460bc9;
  /* 12460b55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12460b58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460b5b mov dword ptr [eax*4 + 0x12485240], ecx */
  w32((uint32_t)(EAX*4 + 0x12485240), (ECX));
  /* 12460b62 mov edx, dword ptr [0x1248537c] */
  EDX = (r32((uint32_t)(0x1248537c)));
  /* 12460b68 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460b6b mov dword ptr [0x1248537c], edx */
  w32((uint32_t)(0x1248537c), (EDX));
  /* 12460b71 jmp 0x12460b7c */
  goto L_12460b7c;
L_12460b73:;
  /* 12460b73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460b76 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460b79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12460b7c:;
  /* 12460b7c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12460b7f mov edx, dword ptr [ecx*4 + 0x12485240] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12485240)));
  /* 12460b86 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460b8c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460b8f jae 0x12460bb4 */
  if (!C.cf) goto L_12460bb4;
  /* 12460b91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460b94 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12460b98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460b9b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12460ba1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460ba4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12460ba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460bab mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12460bb2 jmp 0x12460b73 */
  goto L_12460b73;
L_12460bb4:;
  /* 12460bb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12460bb7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12460bba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12460bbd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12460bc0 push edx */
  push32((uint32_t)(EDX));
  /* 12460bc1 call 0x12460f10 */
  push32(0x12460bc6u); f_12460f10();
  /* 12460bc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12460bc9:;
  /* 12460bc9 jmp 0x12460bd0 */
  goto L_12460bd0;
L_12460bcb:;
  /* 12460bcb jmp 0x12460a21 */
  goto L_12460a21;
L_12460bd0:;
  /* 12460bd0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12460bd2 call 0x1245b2c0 */
  push32(0x12460bd7u); f_1245b2c0();
  /* 12460bd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12460bda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12460bdd pop esi */
  ESI = (pop32());
  /* 12460bde mov esp, ebp */
  ESP = (EBP);
  /* 12460be0 pop ebp */
  EBP = (pop32());
  /* 12460be1 ret  */
  ESPCHK(0x12460a00u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12460bf0 (183 bytes, 57 insns) */
void f_12460bf0(void) {
  FTRACE(0x12460bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12460bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12460bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12460bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12460bf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460bf7 cmp eax, dword ptr [0x1248537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1248537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460bfd jae 0x12460c8a */
  if (!C.cf) goto L_12460c8a;
  /* 12460c03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460c06 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12460c09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460c0c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12460c0f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12460c12 mov eax, dword ptr [ecx*4 + 0x12485240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12485240)));
  /* 12460c19 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460c1d jne 0x12460c8a */
  if (!C.zf) goto L_12460c8a;
  /* 12460c1f cmp dword ptr [0x12483850], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12483850))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460c26 jne 0x12460c6a */
  if (!C.zf) goto L_12460c6a;
  /* 12460c28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460c2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12460c2e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460c32 je 0x12460c42 */
  if (C.zf) goto L_12460c42;
  /* 12460c34 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460c38 je 0x12460c50 */
  if (C.zf) goto L_12460c50;
  /* 12460c3a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460c3e je 0x12460c5e */
  if (C.zf) goto L_12460c5e;
  /* 12460c40 jmp 0x12460c6a */
  goto L_12460c6a;
L_12460c42:;
  /* 12460c42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12460c45 push edx */
  push32((uint32_t)(EDX));
  /* 12460c46 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12460c48 call dword ptr [0x124862e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862e0))), 0x12460c4eu);
  /* 12460c4e jmp 0x12460c6a */
  goto L_12460c6a;
L_12460c50:;
  /* 12460c50 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12460c53 push eax */
  push32((uint32_t)(EAX));
  /* 12460c54 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12460c56 call dword ptr [0x124862e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862e0))), 0x12460c5cu);
  /* 12460c5c jmp 0x12460c6a */
  goto L_12460c6a;
L_12460c5e:;
  /* 12460c5e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12460c61 push ecx */
  push32((uint32_t)(ECX));
  /* 12460c62 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12460c64 call dword ptr [0x124862e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862e0))), 0x12460c6au);
L_12460c6a:;
  /* 12460c6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460c6d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12460c70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460c73 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12460c76 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12460c79 mov ecx, dword ptr [edx*4 + 0x12485240] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12485240)));
  /* 12460c80 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12460c83 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12460c86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12460c88 jmp 0x12460ca3 */
  goto L_12460ca3;
L_12460c8a:;
  /* 12460c8a call 0x1245f6f0 */
  push32(0x12460c8fu); f_1245f6f0();
  /* 12460c8f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12460c95 call 0x1245f700 */
  push32(0x12460c9au); f_1245f700();
  /* 12460c9a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12460ca0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12460ca3:;
  /* 12460ca3 mov esp, ebp */
  ESP = (EBP);
  /* 12460ca5 pop ebp */
  EBP = (pop32());
  /* 12460ca6 ret  */
  ESPCHK(0x12460bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010cb0 @ 0x12460cb0 (216 bytes, 63 insns) */
void f_12460cb0(void) {
  FTRACE(0x12460cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12460cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12460cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12460cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12460cb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460cb7 cmp eax, dword ptr [0x1248537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1248537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460cbd jae 0x12460d6b */
  if (!C.cf) goto L_12460d6b;
  /* 12460cc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460cc6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12460cc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460ccc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12460ccf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12460cd2 mov eax, dword ptr [ecx*4 + 0x12485240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12485240)));
  /* 12460cd9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12460cde and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12460ce1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12460ce3 je 0x12460d6b */
  if (C.zf) goto L_12460d6b;
  /* 12460ce9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460cec sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12460cef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460cf2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12460cf5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12460cf8 mov ecx, dword ptr [edx*4 + 0x12485240] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12485240)));
  /* 12460cff cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460d03 je 0x12460d6b */
  if (C.zf) goto L_12460d6b;
  /* 12460d05 cmp dword ptr [0x12483850], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12483850))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460d0c jne 0x12460d4a */
  if (!C.zf) goto L_12460d4a;
  /* 12460d0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460d11 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12460d14 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460d18 je 0x12460d28 */
  if (C.zf) goto L_12460d28;
  /* 12460d1a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460d1e je 0x12460d34 */
  if (C.zf) goto L_12460d34;
  /* 12460d20 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460d24 je 0x12460d40 */
  if (C.zf) goto L_12460d40;
  /* 12460d26 jmp 0x12460d4a */
  goto L_12460d4a;
L_12460d28:;
  /* 12460d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12460d2a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12460d2c call dword ptr [0x124862e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862e0))), 0x12460d32u);
  /* 12460d32 jmp 0x12460d4a */
  goto L_12460d4a;
L_12460d34:;
  /* 12460d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12460d36 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12460d38 call dword ptr [0x124862e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862e0))), 0x12460d3eu);
  /* 12460d3e jmp 0x12460d4a */
  goto L_12460d4a;
L_12460d40:;
  /* 12460d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12460d42 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12460d44 call dword ptr [0x124862e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862e0))), 0x12460d4au);
L_12460d4a:;
  /* 12460d4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460d4d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12460d50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460d53 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12460d56 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12460d59 mov edx, dword ptr [eax*4 + 0x12485240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12485240)));
  /* 12460d60 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 12460d67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12460d69 jmp 0x12460d84 */
  goto L_12460d84;
L_12460d6b:;
  /* 12460d6b call 0x1245f6f0 */
  push32(0x12460d70u); f_1245f6f0();
  /* 12460d70 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12460d76 call 0x1245f700 */
  push32(0x12460d7bu); f_1245f700();
  /* 12460d7b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12460d81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12460d84:;
  /* 12460d84 mov esp, ebp */
  ESP = (EBP);
  /* 12460d86 pop ebp */
  EBP = (pop32());
  /* 12460d87 ret  */
  ESPCHK(0x12460cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d90 @ 0x12460d90 (102 bytes, 30 insns) */
void f_12460d90(void) {
  FTRACE(0x12460d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12460d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12460d91 mov ebp, esp */
  EBP = (ESP);
  /* 12460d93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460d96 cmp eax, dword ptr [0x1248537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1248537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460d9c jae 0x12460ddb */
  if (!C.cf) goto L_12460ddb;
  /* 12460d9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460da1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12460da4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460da7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12460daa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12460dad mov eax, dword ptr [ecx*4 + 0x12485240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12485240)));
  /* 12460db4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12460db9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12460dbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12460dbe je 0x12460ddb */
  if (C.zf) goto L_12460ddb;
  /* 12460dc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460dc3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12460dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460dc9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12460dcc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12460dcf mov ecx, dword ptr [edx*4 + 0x12485240] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12485240)));
  /* 12460dd6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12460dd9 jmp 0x12460df4 */
  goto L_12460df4;
L_12460ddb:;
  /* 12460ddb call 0x1245f6f0 */
  push32(0x12460de0u); f_1245f6f0();
  /* 12460de0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12460de6 call 0x1245f700 */
  push32(0x12460debu); f_1245f700();
  /* 12460deb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12460df1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12460df4:;
  /* 12460df4 pop ebp */
  EBP = (pop32());
  /* 12460df5 ret  */
  ESPCHK(0x12460d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e00 @ 0x12460e00 (260 bytes, 83 insns) */
void f_12460e00(void) {
  FTRACE(0x12460e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12460e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12460e01 mov ebp, esp */
  EBP = (ESP);
  /* 12460e03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12460e06 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 12460e0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12460e0d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12460e10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12460e12 je 0x12460e1d */
  if (C.zf) goto L_12460e1d;
  /* 12460e14 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12460e17 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12460e1a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_12460e1d:;
  /* 12460e1d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12460e20 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12460e26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12460e28 je 0x12460e32 */
  if (C.zf) goto L_12460e32;
  /* 12460e2a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12460e2d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 12460e2f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12460e32:;
  /* 12460e32 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12460e35 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12460e3b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12460e3d je 0x12460e48 */
  if (C.zf) goto L_12460e48;
  /* 12460e3f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12460e42 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12460e45 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12460e48:;
  /* 12460e48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460e4b push eax */
  push32((uint32_t)(EAX));
  /* 12460e4c call dword ptr [0x12486394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486394))), 0x12460e52u);
  /* 12460e52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12460e55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460e59 jne 0x12460e72 */
  if (!C.zf) goto L_12460e72;
  /* 12460e5b call dword ptr [0x12486388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486388))), 0x12460e61u);
  /* 12460e61 push eax */
  push32((uint32_t)(EAX));
  /* 12460e62 call 0x1245f650 */
  push32(0x12460e67u); f_1245f650();
  /* 12460e67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12460e6a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12460e6d jmp 0x12460f00 */
  goto L_12460f00;
L_12460e72:;
  /* 12460e72 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460e76 jne 0x12460e83 */
  if (!C.zf) goto L_12460e83;
  /* 12460e78 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12460e7b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12460e7e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12460e81 jmp 0x12460e92 */
  goto L_12460e92;
L_12460e83:;
  /* 12460e83 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460e87 jne 0x12460e92 */
  if (!C.zf) goto L_12460e92;
  /* 12460e89 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12460e8c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12460e8f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12460e92:;
  /* 12460e92 call 0x12460a00 */
  push32(0x12460e97u); f_12460a00();
  /* 12460e97 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12460e9a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460e9e jne 0x12460ebb */
  if (!C.zf) goto L_12460ebb;
  /* 12460ea0 call 0x1245f6f0 */
  push32(0x12460ea5u); f_1245f6f0();
  /* 12460ea5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12460eab call 0x1245f700 */
  push32(0x12460eb0u); f_1245f700();
  /* 12460eb0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12460eb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12460eb9 jmp 0x12460f00 */
  goto L_12460f00;
L_12460ebb:;
  /* 12460ebb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460ebe push eax */
  push32((uint32_t)(EAX));
  /* 12460ebf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12460ec2 push ecx */
  push32((uint32_t)(ECX));
  /* 12460ec3 call 0x12460bf0 */
  push32(0x12460ec8u); f_12460bf0();
  /* 12460ec8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12460ecb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12460ece or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12460ed1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12460ed4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12460ed7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12460eda mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12460edd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12460ee0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12460ee3 mov edx, dword ptr [eax*4 + 0x12485240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12485240)));
  /* 12460eea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12460eed mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12460ef1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12460ef4 push ecx */
  push32((uint32_t)(ECX));
  /* 12460ef5 call 0x12460fa0 */
  push32(0x12460efau); f_12460fa0();
  /* 12460efa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12460efd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12460f00:;
  /* 12460f00 mov esp, ebp */
  ESP = (EBP);
  /* 12460f02 pop ebp */
  EBP = (pop32());
  /* 12460f03 ret  */
  ESPCHK(0x12460e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f10 @ 0x12460f10 (134 bytes, 44 insns) */
void f_12460f10(void) {
  FTRACE(0x12460f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12460f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12460f11 mov ebp, esp */
  EBP = (ESP);
  /* 12460f13 push ecx */
  push32((uint32_t)(ECX));
  /* 12460f14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460f17 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12460f1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460f1d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12460f20 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12460f23 mov edx, dword ptr [eax*4 + 0x12485240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12485240)));
  /* 12460f2a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460f2c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12460f2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460f32 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460f36 jne 0x12460f71 */
  if (!C.zf) goto L_12460f71;
  /* 12460f38 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12460f3a call 0x1245b220 */
  push32(0x12460f3fu); f_1245b220();
  /* 12460f3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12460f42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460f45 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12460f49 jne 0x12460f67 */
  if (!C.zf) goto L_12460f67;
  /* 12460f4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460f4e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460f51 push edx */
  push32((uint32_t)(EDX));
  /* 12460f52 call dword ptr [0x12486328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486328))), 0x12460f58u);
  /* 12460f58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460f5b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12460f5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460f61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12460f64 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12460f67:;
  /* 12460f67 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12460f69 call 0x1245b2c0 */
  push32(0x12460f6eu); f_1245b2c0();
  /* 12460f6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12460f71:;
  /* 12460f71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460f74 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12460f77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460f7a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12460f7d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12460f80 mov edx, dword ptr [eax*4 + 0x12485240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12485240)));
  /* 12460f87 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12460f8b push eax */
  push32((uint32_t)(EAX));
  /* 12460f8c call dword ptr [0x12486324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486324))), 0x12460f92u);
  /* 12460f92 mov esp, ebp */
  ESP = (EBP);
  /* 12460f94 pop ebp */
  EBP = (pop32());
  /* 12460f95 ret  */
  ESPCHK(0x12460f10u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12460fa0 (38 bytes, 13 insns) */
void f_12460fa0(void) {
  FTRACE(0x12460fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12460fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12460fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12460fa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460fa6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12460fa9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12460fac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12460faf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12460fb2 mov edx, dword ptr [eax*4 + 0x12485240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12485240)));
  /* 12460fb9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12460fbd push eax */
  push32((uint32_t)(EAX));
  /* 12460fbe call dword ptr [0x12486320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486320))), 0x12460fc4u);
  /* 12460fc4 pop ebp */
  EBP = (pop32());
  /* 12460fc5 ret  */
  ESPCHK(0x12460fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fd0 @ 0x12460fd0 (218 bytes, 63 insns) */
void f_12460fd0(void) {
  FTRACE(0x12460fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12460fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12460fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12460fd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12460fd6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12460fdd push 2 */
  push32((uint32_t)(0x2u));
  /* 12460fdf call 0x1245b220 */
  push32(0x12460fe4u); f_1245b220();
  /* 12460fe4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12460fe7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12460fee jmp 0x12460ff9 */
  goto L_12460ff9;
L_12460ff0:;
  /* 12460ff0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12460ff3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12460ff6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12460ff9:;
  /* 12460ff9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12460ffc cmp ecx, dword ptr [0x12484f40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12484f40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461002 jge 0x12461099 */
  if ((C.sf==C.of)) goto L_12461099;
  /* 12461008 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1246100b mov eax, dword ptr [0x12483be8] */
  EAX = (r32((uint32_t)(0x12483be8)));
  /* 12461010 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461014 je 0x12461094 */
  if (C.zf) goto L_12461094;
  /* 12461016 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461019 mov edx, dword ptr [0x12483be8] */
  EDX = (r32((uint32_t)(0x12483be8)));
  /* 1246101f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12461022 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12461025 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1246102b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1246102d je 0x12461051 */
  if (C.zf) goto L_12461051;
  /* 1246102f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461032 mov eax, dword ptr [0x12483be8] */
  EAX = (r32((uint32_t)(0x12483be8)));
  /* 12461037 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1246103a push ecx */
  push32((uint32_t)(ECX));
  /* 1246103b call 0x12461dc0 */
  push32(0x12461040u); f_12461dc0();
  /* 12461040 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461043 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461046 je 0x12461051 */
  if (C.zf) goto L_12461051;
  /* 12461048 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246104b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246104e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12461051:;
  /* 12461051 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461055 jl 0x12461094 */
  if ((C.sf!=C.of)) goto L_12461094;
  /* 12461057 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1246105a mov ecx, dword ptr [0x12483be8] */
  ECX = (r32((uint32_t)(0x12483be8)));
  /* 12461060 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12461063 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12461066 push edx */
  push32((uint32_t)(EDX));
  /* 12461067 call dword ptr [0x1248639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248639c))), 0x1246106du);
  /* 1246106d push 2 */
  push32((uint32_t)(0x2u));
  /* 1246106f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461072 mov ecx, dword ptr [0x12483be8] */
  ECX = (r32((uint32_t)(0x12483be8)));
  /* 12461078 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1246107b push edx */
  push32((uint32_t)(EDX));
  /* 1246107c call 0x124582b0 */
  push32(0x12461081u); f_124582b0();
  /* 12461081 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461084 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461087 mov ecx, dword ptr [0x12483be8] */
  ECX = (r32((uint32_t)(0x12483be8)));
  /* 1246108d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12461094:;
  /* 12461094 jmp 0x12460ff0 */
  goto L_12460ff0;
L_12461099:;
  /* 12461099 push 2 */
  push32((uint32_t)(0x2u));
  /* 1246109b call 0x1245b2c0 */
  push32(0x124610a0u); f_1245b2c0();
  /* 124610a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124610a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124610a6 mov esp, ebp */
  ESP = (EBP);
  /* 124610a8 pop ebp */
  EBP = (pop32());
  /* 124610a9 ret  */
  ESPCHK(0x12460fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100110b0 @ 0x124610b0 (68 bytes, 26 insns) */
void f_124610b0(void) {
  FTRACE(0x124610b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124610b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124610b1 mov ebp, esp */
  EBP = (ESP);
  /* 124610b3 push ecx */
  push32((uint32_t)(ECX));
  /* 124610b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124610b8 jne 0x124610c6 */
  if (!C.zf) goto L_124610c6;
  /* 124610ba push 0 */
  push32((uint32_t)(0x0u));
  /* 124610bc call 0x12461220 */
  push32(0x124610c1u); f_12461220();
  /* 124610c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124610c4 jmp 0x124610f0 */
  goto L_124610f0;
L_124610c6:;
  /* 124610c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124610c9 push eax */
  push32((uint32_t)(EAX));
  /* 124610ca call 0x12460630 */
  push32(0x124610cfu); f_12460630();
  /* 124610cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124610d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124610d5 push ecx */
  push32((uint32_t)(ECX));
  /* 124610d6 call 0x12461100 */
  push32(0x124610dbu); f_12461100();
  /* 124610db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124610de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124610e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124610e4 push edx */
  push32((uint32_t)(EDX));
  /* 124610e5 call 0x124606a0 */
  push32(0x124610eau); f_124606a0();
  /* 124610ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124610ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124610f0:;
  /* 124610f0 mov esp, ebp */
  ESP = (EBP);
  /* 124610f2 pop ebp */
  EBP = (pop32());
  /* 124610f3 ret  */
  ESPCHK(0x124610b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011100 @ 0x12461100 (65 bytes, 26 insns) */
void f_12461100(void) {
  FTRACE(0x12461100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12461100 push ebp */
  push32((uint32_t)(EBP));
  /* 12461101 mov ebp, esp */
  EBP = (ESP);
  /* 12461103 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461106 push eax */
  push32((uint32_t)(EAX));
  /* 12461107 call 0x12461150 */
  push32(0x1246110cu); f_12461150();
  /* 1246110c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246110f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461111 je 0x12461118 */
  if (C.zf) goto L_12461118;
  /* 12461113 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12461116 jmp 0x1246113f */
  goto L_1246113f;
L_12461118:;
  /* 12461118 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246111b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1246111e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12461124 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12461126 je 0x1246113d */
  if (C.zf) goto L_1246113d;
  /* 12461128 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246112b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1246112e push ecx */
  push32((uint32_t)(ECX));
  /* 1246112f call 0x12461f10 */
  push32(0x12461134u); f_12461f10();
  /* 12461134 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461137 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12461139 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1246113b jmp 0x1246113f */
  goto L_1246113f;
L_1246113d:;
  /* 1246113d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1246113f:;
  /* 1246113f pop ebp */
  EBP = (pop32());
  /* 12461140 ret  */
  ESPCHK(0x12461100u, _esp0);
  ESP += 4; return;
}

/* FUN_10011150 @ 0x12461150 (183 bytes, 62 insns) */
void f_12461150(void) {
  FTRACE(0x12461150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12461150 push ebp */
  push32((uint32_t)(EBP));
  /* 12461151 mov ebp, esp */
  EBP = (ESP);
  /* 12461153 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12461156 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1246115d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461160 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12461163 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461166 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12461169 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1246116c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246116f jne 0x124611eb */
  if (!C.zf) goto L_124611eb;
  /* 12461171 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461174 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12461177 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1246117d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1246117f je 0x124611eb */
  if (C.zf) goto L_124611eb;
  /* 12461181 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461184 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461187 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12461189 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1246118c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1246118f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461193 jle 0x124611eb */
  if ((C.zf||C.sf!=C.of)) goto L_124611eb;
  /* 12461195 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12461198 push edx */
  push32((uint32_t)(EDX));
  /* 12461199 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1246119c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1246119f push ecx */
  push32((uint32_t)(ECX));
  /* 124611a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124611a3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 124611a6 push eax */
  push32((uint32_t)(EAX));
  /* 124611a7 call 0x124600c0 */
  push32(0x124611acu); f_124600c0();
  /* 124611ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124611af cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124611b2 jne 0x124611d5 */
  if (!C.zf) goto L_124611d5;
  /* 124611b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124611b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124611ba and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 124611c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124611c2 je 0x124611d3 */
  if (C.zf) goto L_124611d3;
  /* 124611c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124611c7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124611ca and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 124611cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124611d0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_124611d3:;
  /* 124611d3 jmp 0x124611eb */
  goto L_124611eb;
L_124611d5:;
  /* 124611d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124611d8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124611db or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 124611de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124611e1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 124611e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124611eb:;
  /* 124611eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124611ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124611f1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 124611f4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124611f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124611f9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12461200 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12461203 mov esp, ebp */
  ESP = (EBP);
  /* 12461205 pop ebp */
  EBP = (pop32());
  /* 12461206 ret  */
  ESPCHK(0x12461150u, _esp0);
  ESP += 4; return;
}

/* FUN_10011210 @ 0x12461210 (15 bytes, 7 insns) */
void f_12461210(void) {
  FTRACE(0x12461210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12461210 push ebp */
  push32((uint32_t)(EBP));
  /* 12461211 mov ebp, esp */
  EBP = (ESP);
  /* 12461213 push 1 */
  push32((uint32_t)(0x1u));
  /* 12461215 call 0x12461220 */
  push32(0x1246121au); f_12461220();
  /* 1246121a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246121d pop ebp */
  EBP = (pop32());
  /* 1246121e ret  */
  ESPCHK(0x12461210u, _esp0);
  ESP += 4; return;
}

/* FUN_10011220 @ 0x12461220 (319 bytes, 94 insns) */
void f_12461220(void) {
  FTRACE(0x12461220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12461220 push ebp */
  push32((uint32_t)(EBP));
  /* 12461221 mov ebp, esp */
  EBP = (ESP);
  /* 12461223 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12461226 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1246122d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12461234 push 2 */
  push32((uint32_t)(0x2u));
  /* 12461236 call 0x1245b220 */
  push32(0x1246123bu); f_1245b220();
  /* 1246123b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246123e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12461245 jmp 0x12461250 */
  goto L_12461250;
L_12461247:;
  /* 12461247 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246124a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246124d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12461250:;
  /* 12461250 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12461253 cmp ecx, dword ptr [0x12484f40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12484f40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461259 jge 0x12461343 */
  if ((C.sf==C.of)) goto L_12461343;
  /* 1246125f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12461262 mov eax, dword ptr [0x12483be8] */
  EAX = (r32((uint32_t)(0x12483be8)));
  /* 12461267 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246126b je 0x1246133e */
  if (C.zf) goto L_1246133e;
  /* 12461271 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12461274 mov edx, dword ptr [0x12483be8] */
  EDX = (r32((uint32_t)(0x12483be8)));
  /* 1246127a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1246127d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12461280 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12461286 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12461288 je 0x1246133e */
  if (C.zf) goto L_1246133e;
  /* 1246128e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12461291 mov eax, dword ptr [0x12483be8] */
  EAX = (r32((uint32_t)(0x12483be8)));
  /* 12461296 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12461299 push ecx */
  push32((uint32_t)(ECX));
  /* 1246129a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246129d push edx */
  push32((uint32_t)(EDX));
  /* 1246129e call 0x12460670 */
  push32(0x124612a3u); f_12460670();
  /* 124612a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124612a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124612a9 mov ecx, dword ptr [0x12483be8] */
  ECX = (r32((uint32_t)(0x12483be8)));
  /* 124612af mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 124612b2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 124612b5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 124612ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124612bc je 0x12461325 */
  if (C.zf) goto L_12461325;
  /* 124612be cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124612c2 jne 0x124612e9 */
  if (!C.zf) goto L_124612e9;
  /* 124612c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124612c7 mov edx, dword ptr [0x12483be8] */
  EDX = (r32((uint32_t)(0x12483be8)));
  /* 124612cd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 124612d0 push eax */
  push32((uint32_t)(EAX));
  /* 124612d1 call 0x12461100 */
  push32(0x124612d6u); f_12461100();
  /* 124612d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124612d9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124612dc je 0x124612e7 */
  if (C.zf) goto L_124612e7;
  /* 124612de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124612e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124612e4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124612e7:;
  /* 124612e7 jmp 0x12461325 */
  goto L_12461325;
L_124612e9:;
  /* 124612e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124612ed jne 0x12461325 */
  if (!C.zf) goto L_12461325;
  /* 124612ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124612f2 mov eax, dword ptr [0x12483be8] */
  EAX = (r32((uint32_t)(0x12483be8)));
  /* 124612f7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 124612fa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124612fd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12461300 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12461302 je 0x12461325 */
  if (C.zf) goto L_12461325;
  /* 12461304 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12461307 mov ecx, dword ptr [0x12483be8] */
  ECX = (r32((uint32_t)(0x12483be8)));
  /* 1246130d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12461310 push edx */
  push32((uint32_t)(EDX));
  /* 12461311 call 0x12461100 */
  push32(0x12461316u); f_12461100();
  /* 12461316 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461319 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246131c jne 0x12461325 */
  if (!C.zf) goto L_12461325;
  /* 1246131e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12461325:;
  /* 12461325 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12461328 mov ecx, dword ptr [0x12483be8] */
  ECX = (r32((uint32_t)(0x12483be8)));
  /* 1246132e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12461331 push edx */
  push32((uint32_t)(EDX));
  /* 12461332 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12461335 push eax */
  push32((uint32_t)(EAX));
  /* 12461336 call 0x124606e0 */
  push32(0x1246133bu); f_124606e0();
  /* 1246133b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1246133e:;
  /* 1246133e jmp 0x12461247 */
  goto L_12461247;
L_12461343:;
  /* 12461343 push 2 */
  push32((uint32_t)(0x2u));
  /* 12461345 call 0x1245b2c0 */
  push32(0x1246134au); f_1245b2c0();
  /* 1246134a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246134d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461351 jne 0x12461358 */
  if (!C.zf) goto L_12461358;
  /* 12461353 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12461356 jmp 0x1246135b */
  goto L_1246135b;
L_12461358:;
  /* 12461358 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1246135b:;
  /* 1246135b mov esp, ebp */
  ESP = (EBP);
  /* 1246135d pop ebp */
  EBP = (pop32());
  /* 1246135e ret  */
  ESPCHK(0x12461220u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12461360 (15 bytes, 7 insns) */
void f_12461360(void) {
  FTRACE(0x12461360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12461360 push ebp */
  push32((uint32_t)(EBP));
  /* 12461361 mov ebp, esp */
  EBP = (ESP);
  /* 12461363 push 2 */
  push32((uint32_t)(0x2u));
  /* 12461365 call 0x12456790 */
  push32(0x1246136au); f_12456790();
  /* 1246136a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246136d pop ebp */
  EBP = (pop32());
  /* 1246136e ret  */
  ESPCHK(0x12461360u, _esp0);
  ESP += 4; return;
}

/* FUN_10011370 @ 0x12461370 (1007 bytes, 269 insns) */
void f_12461370(void) {
  FTRACE(0x12461370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12461370 push ebp */
  push32((uint32_t)(EBP));
  /* 12461371 mov ebp, esp */
  EBP = (ESP);
  /* 12461373 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12461379 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246137d jl 0x12461385 */
  if ((C.sf!=C.of)) goto L_12461385;
  /* 1246137f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461383 jle 0x1246138c */
  if ((C.zf||C.sf!=C.of)) goto L_1246138c;
L_12461385:;
  /* 12461385 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12461387 jmp 0x1246175b */
  goto L_1246175b;
L_1246138c:;
  /* 1246138c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1246138e call 0x1245b220 */
  push32(0x12461393u); f_1245b220();
  /* 12461393 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461396 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1246139d mov eax, dword ptr [0x12483bd4] */
  EAX = (r32((uint32_t)(0x12483bd4)));
  /* 124613a2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124613a5 mov dword ptr [0x12483bd4], eax */
  w32((uint32_t)(0x12483bd4), (EAX));
L_124613aa:;
  /* 124613aa cmp dword ptr [0x12483be4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483be4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124613b1 je 0x124613bd */
  if (C.zf) goto L_124613bd;
  /* 124613b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124613b5 call dword ptr [0x124862dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862dc))), 0x124613bbu);
  /* 124613bb jmp 0x124613aa */
  goto L_124613aa;
L_124613bd:;
  /* 124613bd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124613c1 je 0x12461401 */
  if (C.zf) goto L_12461401;
  /* 124613c3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124613c7 je 0x124613e1 */
  if (C.zf) goto L_124613e1;
  /* 124613c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124613cc push ecx */
  push32((uint32_t)(ECX));
  /* 124613cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124613d0 push edx */
  push32((uint32_t)(EDX));
  /* 124613d1 call 0x12461760 */
  push32(0x124613d6u); f_12461760();
  /* 124613d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124613d9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 124613df jmp 0x124613f3 */
  goto L_124613f3;
L_124613e1:;
  /* 124613e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124613e4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124613e7 mov ecx, dword ptr [eax + 0x124824dc] */
  ECX = (r32((uint32_t)(EAX + 0x124824dc)));
  /* 124613ed mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_124613f3:;
  /* 124613f3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 124613f9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124613fc jmp 0x1246173b */
  goto L_1246173b;
L_12461401:;
  /* 12461401 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12461408 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1246140f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461413 je 0x12461733 */
  if (C.zf) goto L_12461733;
  /* 12461419 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1246141c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1246141f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461422 jne 0x12461644 */
  if (!C.zf) goto L_12461644;
  /* 12461428 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1246142b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1246142f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461432 jne 0x12461644 */
  if (!C.zf) goto L_12461644;
  /* 12461438 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1246143b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1246143f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461442 jne 0x12461644 */
  if (!C.zf) goto L_12461644;
  /* 12461448 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1246144b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12461451:;
  /* 12461451 push 0x1247f75c */
  push32((uint32_t)(0x1247f75cu));
  /* 12461456 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1246145c push ecx */
  push32((uint32_t)(ECX));
  /* 1246145d call 0x124635c0 */
  push32(0x12461462u); f_124635c0();
  /* 12461462 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461465 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1246146b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461472 je 0x1246149d */
  if (C.zf) goto L_1246149d;
  /* 12461474 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1246147a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12461480 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12461486 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246148d je 0x1246149d */
  if (C.zf) goto L_1246149d;
  /* 1246148f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12461495 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12461498 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246149b jne 0x124614c3 */
  if (!C.zf) goto L_124614c3;
L_1246149d:;
  /* 1246149d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124614a1 je 0x124614bc */
  if (C.zf) goto L_124614bc;
  /* 124614a3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124614a5 call 0x1245b2c0 */
  push32(0x124614aau); f_1245b2c0();
  /* 124614aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124614ad mov edx, dword ptr [0x12483bd4] */
  EDX = (r32((uint32_t)(0x12483bd4)));
  /* 124614b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124614b6 mov dword ptr [0x12483bd4], edx */
  w32((uint32_t)(0x12483bd4), (EDX));
L_124614bc:;
  /* 124614bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124614be jmp 0x1246175b */
  goto L_1246175b;
L_124614c3:;
  /* 124614c3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 124614ca jmp 0x124614d5 */
  goto L_124614d5;
L_124614cc:;
  /* 124614cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124614cf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124614d2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_124614d5:;
  /* 124614d5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124614d9 jg 0x12461523 */
  if ((!C.zf&&C.sf==C.of)) goto L_12461523;
  /* 124614db mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 124614e1 push ecx */
  push32((uint32_t)(ECX));
  /* 124614e2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124614e8 push edx */
  push32((uint32_t)(EDX));
  /* 124614e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124614ec imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124614ef mov ecx, dword ptr [eax + 0x124824d8] */
  ECX = (r32((uint32_t)(EAX + 0x124824d8)));
  /* 124614f5 push ecx */
  push32((uint32_t)(ECX));
  /* 124614f6 call 0x12463580 */
  push32(0x124614fbu); f_12463580();
  /* 124614fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124614fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461500 jne 0x12461521 */
  if (!C.zf) goto L_12461521;
  /* 12461502 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12461505 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12461508 mov eax, dword ptr [edx + 0x124824d8] */
  EAX = (r32((uint32_t)(EDX + 0x124824d8)));
  /* 1246150e push eax */
  push32((uint32_t)(EAX));
  /* 1246150f call 0x1245a650 */
  push32(0x12461514u); f_1245a650();
  /* 12461514 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461517 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246151d jne 0x12461521 */
  if (!C.zf) goto L_12461521;
  /* 1246151f jmp 0x12461523 */
  goto L_12461523;
L_12461521:;
  /* 12461521 jmp 0x124614cc */
  goto L_124614cc;
L_12461523:;
  /* 12461523 push 0x1247f758 */
  push32((uint32_t)(0x1247f758u));
  /* 12461528 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1246152e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12461531 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12461537 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1246153d push edx */
  push32((uint32_t)(EDX));
  /* 1246153e call 0x12463540 */
  push32(0x12461543u); f_12463540();
  /* 12461543 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461546 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1246154c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461553 jne 0x12461589 */
  if (!C.zf) goto L_12461589;
  /* 12461555 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1246155b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1246155e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461561 je 0x12461589 */
  if (C.zf) goto L_12461589;
  /* 12461563 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461567 je 0x12461582 */
  if (C.zf) goto L_12461582;
  /* 12461569 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1246156b call 0x1245b2c0 */
  push32(0x12461570u); f_1245b2c0();
  /* 12461570 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461573 mov edx, dword ptr [0x12483bd4] */
  EDX = (r32((uint32_t)(0x12483bd4)));
  /* 12461579 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1246157c mov dword ptr [0x12483bd4], edx */
  w32((uint32_t)(0x12483bd4), (EDX));
L_12461582:;
  /* 12461582 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12461584 jmp 0x1246175b */
  goto L_1246175b;
L_12461589:;
  /* 12461589 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246158d jg 0x124615da */
  if ((!C.zf&&C.sf==C.of)) goto L_124615da;
  /* 1246158f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12461595 push eax */
  push32((uint32_t)(EAX));
  /* 12461596 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1246159c push ecx */
  push32((uint32_t)(ECX));
  /* 1246159d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 124615a3 push edx */
  push32((uint32_t)(EDX));
  /* 124615a4 call 0x1245b040 */
  push32(0x124615a9u); f_1245b040();
  /* 124615a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124615ac mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 124615b2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 124615ba lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 124615c0 push ecx */
  push32((uint32_t)(ECX));
  /* 124615c1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124615c4 push edx */
  push32((uint32_t)(EDX));
  /* 124615c5 call 0x12461760 */
  push32(0x124615cau); f_12461760();
  /* 124615ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124615cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124615cf je 0x124615da */
  if (C.zf) goto L_124615da;
  /* 124615d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124615d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124615d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_124615da:;
  /* 124615da mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124615e0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124615e6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 124615ec mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124615f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124615f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124615f7 je 0x12461608 */
  if (C.zf) goto L_12461608;
  /* 124615f9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124615ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12461602 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12461608:;
  /* 12461608 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1246160e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12461611 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461613 jne 0x12461451 */
  if (!C.zf) goto L_12461451;
  /* 12461619 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246161d je 0x1246162c */
  if (C.zf) goto L_1246162c;
  /* 1246161f call 0x12461900 */
  push32(0x12461624u); f_12461900();
  /* 12461624 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1246162a jmp 0x12461636 */
  goto L_12461636;
L_1246162c:;
  /* 1246162c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12461636:;
  /* 12461636 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1246163c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1246163f jmp 0x12461731 */
  goto L_12461731;
L_12461644:;
  /* 12461644 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461647 push edx */
  push32((uint32_t)(EDX));
  /* 12461648 push 0 */
  push32((uint32_t)(0x0u));
  /* 1246164a push 0 */
  push32((uint32_t)(0x0u));
  /* 1246164c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12461652 push eax */
  push32((uint32_t)(EAX));
  /* 12461653 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461656 push ecx */
  push32((uint32_t)(ECX));
  /* 12461657 call 0x12461a00 */
  push32(0x1246165cu); f_12461a00();
  /* 1246165c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246165f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12461662 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461666 je 0x12461731 */
  if (C.zf) goto L_12461731;
  /* 1246166c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12461673 jmp 0x1246167e */
  goto L_1246167e;
L_12461675:;
  /* 12461675 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12461678 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246167b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1246167e:;
  /* 1246167e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461682 jg 0x124616e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_124616e0;
  /* 12461684 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461688 je 0x124616de */
  if (C.zf) goto L_124616de;
  /* 1246168a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1246168d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12461690 mov ecx, dword ptr [eax + 0x124824dc] */
  ECX = (r32((uint32_t)(EAX + 0x124824dc)));
  /* 12461696 push ecx */
  push32((uint32_t)(ECX));
  /* 12461697 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1246169d push edx */
  push32((uint32_t)(EDX));
  /* 1246169e call 0x124634b0 */
  push32(0x124616a3u); f_124634b0();
  /* 124616a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124616a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124616a8 je 0x124616d5 */
  if (C.zf) goto L_124616d5;
  /* 124616aa lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 124616b0 push eax */
  push32((uint32_t)(EAX));
  /* 124616b1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124616b4 push ecx */
  push32((uint32_t)(ECX));
  /* 124616b5 call 0x12461760 */
  push32(0x124616bau); f_12461760();
  /* 124616ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124616bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124616bf je 0x124616cc */
  if (C.zf) goto L_124616cc;
  /* 124616c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124616c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124616c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 124616ca jmp 0x124616d3 */
  goto L_124616d3;
L_124616cc:;
  /* 124616cc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_124616d3:;
  /* 124616d3 jmp 0x124616de */
  goto L_124616de;
L_124616d5:;
  /* 124616d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124616d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124616db mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_124616de:;
  /* 124616de jmp 0x12461675 */
  goto L_12461675;
L_124616e0:;
  /* 124616e0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124616e4 je 0x1246170b */
  if (C.zf) goto L_1246170b;
  /* 124616e6 call 0x12461900 */
  push32(0x124616ebu); f_12461900();
  /* 124616eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124616ee push 2 */
  push32((uint32_t)(0x2u));
  /* 124616f0 mov ecx, dword ptr [0x124824dc] */
  ECX = (r32((uint32_t)(0x124824dc)));
  /* 124616f6 push ecx */
  push32((uint32_t)(ECX));
  /* 124616f7 call 0x124582b0 */
  push32(0x124616fcu); f_124582b0();
  /* 124616fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124616ff mov dword ptr [0x124824dc], 0 */
  w32((uint32_t)(0x124824dc), (0x0u));
  /* 12461709 jmp 0x12461731 */
  goto L_12461731;
L_1246170b:;
  /* 1246170b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246170f je 0x1246171e */
  if (C.zf) goto L_1246171e;
  /* 12461711 call 0x12461900 */
  push32(0x12461716u); f_12461900();
  /* 12461716 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1246171c jmp 0x12461728 */
  goto L_12461728;
L_1246171e:;
  /* 1246171e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12461728:;
  /* 12461728 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1246172e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12461731:;
  /* 12461731 jmp 0x1246173b */
  goto L_1246173b;
L_12461733:;
  /* 12461733 call 0x12461900 */
  push32(0x12461738u); f_12461900();
  /* 12461738 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1246173b:;
  /* 1246173b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246173f je 0x12461758 */
  if (C.zf) goto L_12461758;
  /* 12461741 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12461743 call 0x1245b2c0 */
  push32(0x12461748u); f_1245b2c0();
  /* 12461748 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246174b mov eax, dword ptr [0x12483bd4] */
  EAX = (r32((uint32_t)(0x12483bd4)));
  /* 12461750 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12461753 mov dword ptr [0x12483bd4], eax */
  w32((uint32_t)(0x12483bd4), (EAX));
L_12461758:;
  /* 12461758 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1246175b:;
  /* 1246175b mov esp, ebp */
  ESP = (EBP);
  /* 1246175d pop ebp */
  EBP = (pop32());
  /* 1246175e ret  */
  ESPCHK(0x12461370u, _esp0);
  ESP += 4; return;
}

/* FUN_10011760 @ 0x12461760 (403 bytes, 117 insns) */
void f_12461760(void) {
  FTRACE(0x12461760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12461760 push ebp */
  push32((uint32_t)(EBP));
  /* 12461761 mov ebp, esp */
  EBP = (ESP);
  /* 12461763 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12461769 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246176c push eax */
  push32((uint32_t)(EAX));
  /* 1246176d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12461773 push ecx */
  push32((uint32_t)(ECX));
  /* 12461774 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1246177a push edx */
  push32((uint32_t)(EDX));
  /* 1246177b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12461781 push eax */
  push32((uint32_t)(EAX));
  /* 12461782 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461785 push ecx */
  push32((uint32_t)(ECX));
  /* 12461786 call 0x12461a00 */
  push32(0x1246178bu); f_12461a00();
  /* 1246178b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246178e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461790 jne 0x12461799 */
  if (!C.zf) goto L_12461799;
  /* 12461792 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12461794 jmp 0x124618ef */
  goto L_124618ef;
L_12461799:;
  /* 12461799 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1246179e push 0x1247f760 */
  push32((uint32_t)(0x1247f760u));
  /* 124617a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 124617a5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 124617ab push edx */
  push32((uint32_t)(EDX));
  /* 124617ac call 0x1245a650 */
  push32(0x124617b1u); f_1245a650();
  /* 124617b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124617b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124617b7 push eax */
  push32((uint32_t)(EAX));
  /* 124617b8 call 0x12457820 */
  push32(0x124617bdu); f_12457820();
  /* 124617bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124617c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124617c3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124617c7 jne 0x124617d0 */
  if (!C.zf) goto L_124617d0;
  /* 124617c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124617cb jmp 0x124618ef */
  goto L_124618ef;
L_124617d0:;
  /* 124617d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124617d3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124617d6 mov ecx, dword ptr [eax + 0x124824dc] */
  ECX = (r32((uint32_t)(EAX + 0x124824dc)));
  /* 124617dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124617df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124617e2 mov eax, dword ptr [edx*4 + 0x12483a50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12483a50)));
  /* 124617e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124617ec push 6 */
  push32((uint32_t)(0x6u));
  /* 124617ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124617f1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124617f4 add ecx, 0x12483aa0 */
  { uint32_t _a=(ECX),_b=(0x12483aa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124617fa push ecx */
  push32((uint32_t)(ECX));
  /* 124617fb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 124617fe push edx */
  push32((uint32_t)(EDX));
  /* 124617ff call 0x1245e100 */
  push32(0x12461804u); f_1245e100();
  /* 12461804 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461807 mov eax, dword ptr [0x12483a68] */
  EAX = (r32((uint32_t)(0x12483a68)));
  /* 1246180c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1246180f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12461815 push ecx */
  push32((uint32_t)(ECX));
  /* 12461816 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461819 push edx */
  push32((uint32_t)(EDX));
  /* 1246181a call 0x1245a7d0 */
  push32(0x1246181fu); f_1245a7d0();
  /* 1246181f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461822 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461825 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12461828 mov dword ptr [ecx + 0x124824dc], eax */
  w32((uint32_t)(ECX + 0x124824dc), (EAX));
  /* 1246182e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12461834 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1246183a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246183d mov dword ptr [eax*4 + 0x12483a50], edx */
  w32((uint32_t)(EAX*4 + 0x12483a50), (EDX));
  /* 12461844 push 6 */
  push32((uint32_t)(0x6u));
  /* 12461846 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1246184c push ecx */
  push32((uint32_t)(ECX));
  /* 1246184d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461850 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12461853 add edx, 0x12483aa0 */
  { uint32_t _a=(EDX),_b=(0x12483aa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12461859 push edx */
  push32((uint32_t)(EDX));
  /* 1246185a call 0x1245e100 */
  push32(0x1246185fu); f_1245e100();
  /* 1246185f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461862 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461866 jne 0x12461873 */
  if (!C.zf) goto L_12461873;
  /* 12461868 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1246186e mov dword ptr [0x12483a68], eax */
  w32((uint32_t)(0x12483a68), (EAX));
L_12461873:;
  /* 12461873 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461877 jne 0x12461885 */
  if (!C.zf) goto L_12461885;
  /* 12461879 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1246187f mov dword ptr [0x12483a6c], ecx */
  w32((uint32_t)(0x12483a6c), (ECX));
L_12461885:;
  /* 12461885 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461888 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1246188b call dword ptr [edx + 0x124824e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x124824e0))), 0x12461891u);
  /* 12461891 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461893 je 0x124618cc */
  if (C.zf) goto L_124618cc;
  /* 12461895 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461898 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1246189b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246189e mov dword ptr [eax + 0x124824dc], ecx */
  w32((uint32_t)(EAX + 0x124824dc), (ECX));
  /* 124618a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 124618a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124618a9 push edx */
  push32((uint32_t)(EDX));
  /* 124618aa call 0x124582b0 */
  push32(0x124618afu); f_124582b0();
  /* 124618af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124618b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124618b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124618b8 mov dword ptr [eax*4 + 0x12483a50], ecx */
  w32((uint32_t)(EAX*4 + 0x12483a50), (ECX));
  /* 124618bf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124618c2 mov dword ptr [0x12483a68], edx */
  w32((uint32_t)(0x12483a68), (EDX));
  /* 124618c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124618ca jmp 0x124618ef */
  goto L_124618ef;
L_124618cc:;
  /* 124618cc cmp dword ptr [ebp - 0xc], 0x124823c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x124823c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124618d3 je 0x124618e3 */
  if (C.zf) goto L_124618e3;
  /* 124618d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 124618d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124618da push eax */
  push32((uint32_t)(EAX));
  /* 124618db call 0x124582b0 */
  push32(0x124618e0u); f_124582b0();
  /* 124618e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124618e3:;
  /* 124618e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124618e6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124618e9 mov eax, dword ptr [ecx + 0x124824dc] */
  EAX = (r32((uint32_t)(ECX + 0x124824dc)));
L_124618ef:;
  /* 124618ef mov esp, ebp */
  ESP = (EBP);
  /* 124618f1 pop ebp */
  EBP = (pop32());
  /* 124618f2 ret  */
  ESPCHK(0x12461760u, _esp0);
  ESP += 4; return;
}

/* FUN_10011900 @ 0x12461900 (256 bytes, 72 insns) */
void f_12461900(void) {
  FTRACE(0x12461900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12461900 push ebp */
  push32((uint32_t)(EBP));
  /* 12461901 mov ebp, esp */
  EBP = (ESP);
  /* 12461903 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12461906 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1246190d cmp dword ptr [0x124824dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124824dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461914 jne 0x12461934 */
  if (!C.zf) goto L_12461934;
  /* 12461916 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1246191b push 0x1247f760 */
  push32((uint32_t)(0x1247f760u));
  /* 12461920 push 2 */
  push32((uint32_t)(0x2u));
  /* 12461922 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12461927 call 0x12457820 */
  push32(0x1246192cu); f_12457820();
  /* 1246192c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246192f mov dword ptr [0x124824dc], eax */
  w32((uint32_t)(0x124824dc), (EAX));
L_12461934:;
  /* 12461934 mov eax, dword ptr [0x124824dc] */
  EAX = (r32((uint32_t)(0x124824dc)));
  /* 12461939 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1246193c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12461943 jmp 0x1246194e */
  goto L_1246194e;
L_12461945:;
  /* 12461945 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12461948 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246194b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1246194e:;
  /* 1246194e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12461951 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12461954 mov eax, dword ptr [edx + 0x124824dc] */
  EAX = (r32((uint32_t)(EDX + 0x124824dc)));
  /* 1246195a push eax */
  push32((uint32_t)(EAX));
  /* 1246195b push 0x1247f76c */
  push32((uint32_t)(0x1247f76cu));
  /* 12461960 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12461963 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12461966 mov edx, dword ptr [ecx + 0x124824d8] */
  EDX = (r32((uint32_t)(ECX + 0x124824d8)));
  /* 1246196c push edx */
  push32((uint32_t)(EDX));
  /* 1246196d push 3 */
  push32((uint32_t)(0x3u));
  /* 1246196f mov eax, dword ptr [0x124824dc] */
  EAX = (r32((uint32_t)(0x124824dc)));
  /* 12461974 push eax */
  push32((uint32_t)(EAX));
  /* 12461975 call 0x12461ba0 */
  push32(0x1246197au); f_12461ba0();
  /* 1246197a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246197d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461981 jge 0x124619c9 */
  if ((C.sf==C.of)) goto L_124619c9;
  /* 12461983 push 0x1247f758 */
  push32((uint32_t)(0x1247f758u));
  /* 12461988 mov ecx, dword ptr [0x124824dc] */
  ECX = (r32((uint32_t)(0x124824dc)));
  /* 1246198e push ecx */
  push32((uint32_t)(ECX));
  /* 1246198f call 0x1245a7e0 */
  push32(0x12461994u); f_1245a7e0();
  /* 12461994 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461997 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246199a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246199d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124619a0 mov eax, dword ptr [edx + 0x124824dc] */
  EAX = (r32((uint32_t)(EDX + 0x124824dc)));
  /* 124619a6 push eax */
  push32((uint32_t)(EAX));
  /* 124619a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124619aa imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124619ad mov edx, dword ptr [ecx + 0x124824dc] */
  EDX = (r32((uint32_t)(ECX + 0x124824dc)));
  /* 124619b3 push edx */
  push32((uint32_t)(EDX));
  /* 124619b4 call 0x124634b0 */
  push32(0x124619b9u); f_124634b0();
  /* 124619b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124619bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124619be je 0x124619c7 */
  if (C.zf) goto L_124619c7;
  /* 124619c0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_124619c7:;
  /* 124619c7 jmp 0x124619f7 */
  goto L_124619f7;
L_124619c9:;
  /* 124619c9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124619cd jne 0x124619d6 */
  if (!C.zf) goto L_124619d6;
  /* 124619cf mov eax, dword ptr [0x124824dc] */
  EAX = (r32((uint32_t)(0x124824dc)));
  /* 124619d4 jmp 0x124619fc */
  goto L_124619fc;
L_124619d6:;
  /* 124619d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 124619d8 mov eax, dword ptr [0x124824dc] */
  EAX = (r32((uint32_t)(0x124824dc)));
  /* 124619dd push eax */
  push32((uint32_t)(EAX));
  /* 124619de call 0x124582b0 */
  push32(0x124619e3u); f_124582b0();
  /* 124619e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124619e6 mov dword ptr [0x124824dc], 0 */
  w32((uint32_t)(0x124824dc), (0x0u));
  /* 124619f0 mov eax, dword ptr [0x124824f4] */
  EAX = (r32((uint32_t)(0x124824f4)));
  /* 124619f5 jmp 0x124619fc */
  goto L_124619fc;
L_124619f7:;
  /* 124619f7 jmp 0x12461945 */
  goto L_12461945;
L_124619fc:;
  /* 124619fc mov esp, ebp */
  ESP = (EBP);
  /* 124619fe pop ebp */
  EBP = (pop32());
  /* 124619ff ret  */
  ESPCHK(0x12461900u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a00 @ 0x12461a00 (388 bytes, 115 insns) */
void f_12461a00(void) {
  FTRACE(0x12461a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12461a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12461a01 mov ebp, esp */
  EBP = (ESP);
  /* 12461a03 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12461a09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461a0d jne 0x12461a16 */
  if (!C.zf) goto L_12461a16;
  /* 12461a0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12461a11 jmp 0x12461b80 */
  goto L_12461b80;
L_12461a16:;
  /* 12461a16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461a19 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12461a1c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461a1f jne 0x12461a70 */
  if (!C.zf) goto L_12461a70;
  /* 12461a21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461a24 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12461a28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461a2a jne 0x12461a70 */
  if (!C.zf) goto L_12461a70;
  /* 12461a2c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461a2f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12461a32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461a35 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12461a39 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461a3d je 0x12461a59 */
  if (C.zf) goto L_12461a59;
  /* 12461a3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12461a42 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12461a47 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12461a4a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12461a50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12461a53 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12461a59:;
  /* 12461a59 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461a5d je 0x12461a68 */
  if (C.zf) goto L_12461a68;
  /* 12461a5f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12461a62 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12461a68:;
  /* 12461a68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461a6b jmp 0x12461b80 */
  goto L_12461b80;
L_12461a70:;
  /* 12461a70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461a73 push ecx */
  push32((uint32_t)(ECX));
  /* 12461a74 push 0x12482450 */
  push32((uint32_t)(0x12482450u));
  /* 12461a79 call 0x124634b0 */
  push32(0x12461a7eu); f_124634b0();
  /* 12461a7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461a81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461a83 je 0x12461b38 */
  if (C.zf) goto L_12461b38;
  /* 12461a89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461a8c push edx */
  push32((uint32_t)(EDX));
  /* 12461a8d push 0x124823cc */
  push32((uint32_t)(0x124823ccu));
  /* 12461a92 call 0x124634b0 */
  push32(0x12461a97u); f_124634b0();
  /* 12461a97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461a9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461a9c je 0x12461b38 */
  if (C.zf) goto L_12461b38;
  /* 12461aa2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461aa5 push eax */
  push32((uint32_t)(EAX));
  /* 12461aa6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 12461aac push ecx */
  push32((uint32_t)(ECX));
  /* 12461aad call 0x12461bf0 */
  push32(0x12461ab2u); f_12461bf0();
  /* 12461ab2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461ab5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461ab7 je 0x12461ac0 */
  if (C.zf) goto L_12461ac0;
  /* 12461ab9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12461abb jmp 0x12461b80 */
  goto L_12461b80;
L_12461ac0:;
  /* 12461ac0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12461ac6 push edx */
  push32((uint32_t)(EDX));
  /* 12461ac7 push 0x12483a78 */
  push32((uint32_t)(0x12483a78u));
  /* 12461acc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12461ad2 push eax */
  push32((uint32_t)(EAX));
  /* 12461ad3 call 0x12463600 */
  push32(0x12461ad8u); f_12463600();
  /* 12461ad8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461adb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461add jne 0x12461ae6 */
  if (!C.zf) goto L_12461ae6;
  /* 12461adf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12461ae1 jmp 0x12461b80 */
  goto L_12461b80;
L_12461ae6:;
  /* 12461ae6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12461ae8 mov cx, word ptr [0x12483a7c] */
  CX = (r16((uint32_t)(0x12483a7c)));
  /* 12461aef mov dword ptr [0x12483a80], ecx */
  w32((uint32_t)(0x12483a80), (ECX));
  /* 12461af5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12461afb push edx */
  push32((uint32_t)(EDX));
  /* 12461afc push 0x12482450 */
  push32((uint32_t)(0x12482450u));
  /* 12461b01 call 0x12461d50 */
  push32(0x12461b06u); f_12461d50();
  /* 12461b06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461b09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461b0c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12461b0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12461b11 je 0x12461b26 */
  if (C.zf) goto L_12461b26;
  /* 12461b13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461b16 push edx */
  push32((uint32_t)(EDX));
  /* 12461b17 push 0x124823cc */
  push32((uint32_t)(0x124823ccu));
  /* 12461b1c call 0x1245a7d0 */
  push32(0x12461b21u); f_1245a7d0();
  /* 12461b21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461b24 jmp 0x12461b38 */
  goto L_12461b38;
L_12461b26:;
  /* 12461b26 push 0x12482450 */
  push32((uint32_t)(0x12482450u));
  /* 12461b2b push 0x124823cc */
  push32((uint32_t)(0x124823ccu));
  /* 12461b30 call 0x1245a7d0 */
  push32(0x12461b35u); f_1245a7d0();
  /* 12461b35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12461b38:;
  /* 12461b38 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461b3c je 0x12461b51 */
  if (C.zf) goto L_12461b51;
  /* 12461b3e push 6 */
  push32((uint32_t)(0x6u));
  /* 12461b40 push 0x12483a78 */
  push32((uint32_t)(0x12483a78u));
  /* 12461b45 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12461b48 push eax */
  push32((uint32_t)(EAX));
  /* 12461b49 call 0x1245e100 */
  push32(0x12461b4eu); f_1245e100();
  /* 12461b4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12461b51:;
  /* 12461b51 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461b55 je 0x12461b6a */
  if (C.zf) goto L_12461b6a;
  /* 12461b57 push 4 */
  push32((uint32_t)(0x4u));
  /* 12461b59 push 0x12483a80 */
  push32((uint32_t)(0x12483a80u));
  /* 12461b5e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12461b61 push ecx */
  push32((uint32_t)(ECX));
  /* 12461b62 call 0x1245e100 */
  push32(0x12461b67u); f_1245e100();
  /* 12461b67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12461b6a:;
  /* 12461b6a push 0x12482450 */
  push32((uint32_t)(0x12482450u));
  /* 12461b6f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461b72 push edx */
  push32((uint32_t)(EDX));
  /* 12461b73 call 0x1245a7d0 */
  push32(0x12461b78u); f_1245a7d0();
  /* 12461b78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461b7b mov eax, 0x12482450 */
  EAX = (0x12482450u);
L_12461b80:;
  /* 12461b80 mov esp, ebp */
  ESP = (EBP);
  /* 12461b82 pop ebp */
  EBP = (pop32());
  /* 12461b83 ret  */
  ESPCHK(0x12461a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b90 @ 0x12461b90 (7 bytes, 5 insns) */
void f_12461b90(void) {
  FTRACE(0x12461b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12461b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12461b91 mov ebp, esp */
  EBP = (ESP);
  /* 12461b93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12461b95 pop ebp */
  EBP = (pop32());
  /* 12461b96 ret  */
  ESPCHK(0x12461b90u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12461ba0 (79 bytes, 28 insns) */
void f_12461ba0(void) {
  FTRACE(0x12461ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12461ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12461ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12461ba3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12461ba6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12461ba9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12461bac mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12461bb3 jmp 0x12461bbe */
  goto L_12461bbe;
L_12461bb5:;
  /* 12461bb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461bb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12461bbb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12461bbe:;
  /* 12461bbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461bc1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461bc4 jge 0x12461be4 */
  if ((C.sf==C.of)) goto L_12461be4;
  /* 12461bc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12461bc9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12461bcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12461bcf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12461bd2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12461bd5 push edx */
  push32((uint32_t)(EDX));
  /* 12461bd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461bd9 push eax */
  push32((uint32_t)(EAX));
  /* 12461bda call 0x1245a7e0 */
  push32(0x12461bdfu); f_1245a7e0();
  /* 12461bdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461be2 jmp 0x12461bb5 */
  goto L_12461bb5;
L_12461be4:;
  /* 12461be4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12461beb mov esp, ebp */
  ESP = (EBP);
  /* 12461bed pop ebp */
  EBP = (pop32());
  /* 12461bee ret  */
  ESPCHK(0x12461ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011bf0 @ 0x12461bf0 (349 bytes, 122 insns) */
void f_12461bf0(void) {
  FTRACE(0x12461bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12461bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12461bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12461bf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12461bf6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12461bfb push 0 */
  push32((uint32_t)(0x0u));
  /* 12461bfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461c00 push eax */
  push32((uint32_t)(EAX));
  /* 12461c01 call 0x1245b590 */
  push32(0x12461c06u); f_1245b590();
  /* 12461c06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461c09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461c0c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12461c0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12461c11 jne 0x12461c1a */
  if (!C.zf) goto L_12461c1a;
  /* 12461c13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12461c15 jmp 0x12461d49 */
  goto L_12461d49;
L_12461c1a:;
  /* 12461c1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461c1d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12461c20 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461c23 jne 0x12461c50 */
  if (!C.zf) goto L_12461c50;
  /* 12461c25 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461c28 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12461c2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461c2e je 0x12461c50 */
  if (C.zf) goto L_12461c50;
  /* 12461c30 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461c33 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12461c36 push ecx */
  push32((uint32_t)(ECX));
  /* 12461c37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461c3a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12461c40 push edx */
  push32((uint32_t)(EDX));
  /* 12461c41 call 0x1245a7d0 */
  push32(0x12461c46u); f_1245a7d0();
  /* 12461c46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461c49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12461c4b jmp 0x12461d49 */
  goto L_12461d49;
L_12461c50:;
  /* 12461c50 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12461c57 jmp 0x12461c62 */
  goto L_12461c62;
L_12461c59:;
  /* 12461c59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12461c5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12461c5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12461c62:;
  /* 12461c62 push 0x1247f770 */
  push32((uint32_t)(0x1247f770u));
  /* 12461c67 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461c6a push ecx */
  push32((uint32_t)(ECX));
  /* 12461c6b call 0x12463540 */
  push32(0x12461c70u); f_12463540();
  /* 12461c70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461c73 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12461c76 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461c7a jne 0x12461c84 */
  if (!C.zf) goto L_12461c84;
  /* 12461c7c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12461c7f jmp 0x12461d49 */
  goto L_12461d49;
L_12461c84:;
  /* 12461c84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461c87 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12461c8a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12461c8c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12461c8f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461c93 jne 0x12461cba */
  if (!C.zf) goto L_12461cba;
  /* 12461c95 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461c99 jge 0x12461cba */
  if ((C.sf==C.of)) goto L_12461cba;
  /* 12461c9b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12461c9f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461ca2 je 0x12461cba */
  if (C.zf) goto L_12461cba;
  /* 12461ca4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12461ca7 push edx */
  push32((uint32_t)(EDX));
  /* 12461ca8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461cab push eax */
  push32((uint32_t)(EAX));
  /* 12461cac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461caf push ecx */
  push32((uint32_t)(ECX));
  /* 12461cb0 call 0x1245b040 */
  push32(0x12461cb5u); f_1245b040();
  /* 12461cb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461cb8 jmp 0x12461d20 */
  goto L_12461d20;
L_12461cba:;
  /* 12461cba cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461cbe jne 0x12461ce8 */
  if (!C.zf) goto L_12461ce8;
  /* 12461cc0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461cc4 jge 0x12461ce8 */
  if ((C.sf==C.of)) goto L_12461ce8;
  /* 12461cc6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12461cca cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461ccd je 0x12461ce8 */
  if (C.zf) goto L_12461ce8;
  /* 12461ccf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12461cd2 push eax */
  push32((uint32_t)(EAX));
  /* 12461cd3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461cd6 push ecx */
  push32((uint32_t)(ECX));
  /* 12461cd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461cda add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12461cdd push edx */
  push32((uint32_t)(EDX));
  /* 12461cde call 0x1245b040 */
  push32(0x12461ce3u); f_1245b040();
  /* 12461ce3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461ce6 jmp 0x12461d20 */
  goto L_12461d20;
L_12461ce8:;
  /* 12461ce8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461cec jne 0x12461d1b */
  if (!C.zf) goto L_12461d1b;
  /* 12461cee movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12461cf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461cf4 je 0x12461cff */
  if (C.zf) goto L_12461cff;
  /* 12461cf6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12461cfa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461cfd jne 0x12461d1b */
  if (!C.zf) goto L_12461d1b;
L_12461cff:;
  /* 12461cff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12461d02 push edx */
  push32((uint32_t)(EDX));
  /* 12461d03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461d06 push eax */
  push32((uint32_t)(EAX));
  /* 12461d07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461d0a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12461d10 push ecx */
  push32((uint32_t)(ECX));
  /* 12461d11 call 0x1245b040 */
  push32(0x12461d16u); f_1245b040();
  /* 12461d16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461d19 jmp 0x12461d20 */
  goto L_12461d20;
L_12461d1b:;
  /* 12461d1b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12461d1e jmp 0x12461d49 */
  goto L_12461d49;
L_12461d20:;
  /* 12461d20 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12461d24 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461d27 jne 0x12461d2b */
  if (!C.zf) goto L_12461d2b;
  /* 12461d29 jmp 0x12461d47 */
  goto L_12461d47;
L_12461d2b:;
  /* 12461d2b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12461d2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461d31 jne 0x12461d35 */
  if (!C.zf) goto L_12461d35;
  /* 12461d33 jmp 0x12461d47 */
  goto L_12461d47;
L_12461d35:;
  /* 12461d35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12461d38 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461d3b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12461d3f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12461d42 jmp 0x12461c59 */
  goto L_12461c59;
L_12461d47:;
  /* 12461d47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12461d49:;
  /* 12461d49 mov esp, ebp */
  ESP = (EBP);
  /* 12461d4b pop ebp */
  EBP = (pop32());
  /* 12461d4c ret  */
  ESPCHK(0x12461bf0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12461d50 (101 bytes, 36 insns) */
void f_12461d50(void) {
  FTRACE(0x12461d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12461d50 push ebp */
  push32((uint32_t)(EBP));
  /* 12461d51 mov ebp, esp */
  EBP = (ESP);
  /* 12461d53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461d56 push eax */
  push32((uint32_t)(EAX));
  /* 12461d57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461d5a push ecx */
  push32((uint32_t)(ECX));
  /* 12461d5b call 0x1245a7d0 */
  push32(0x12461d60u); f_1245a7d0();
  /* 12461d60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461d63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461d66 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12461d6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461d6c je 0x12461d88 */
  if (C.zf) goto L_12461d88;
  /* 12461d6e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461d71 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12461d74 push ecx */
  push32((uint32_t)(ECX));
  /* 12461d75 push 0x1247f778 */
  push32((uint32_t)(0x1247f778u));
  /* 12461d7a push 2 */
  push32((uint32_t)(0x2u));
  /* 12461d7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461d7f push edx */
  push32((uint32_t)(EDX));
  /* 12461d80 call 0x12461ba0 */
  push32(0x12461d85u); f_12461ba0();
  /* 12461d85 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12461d88:;
  /* 12461d88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461d8b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12461d92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12461d94 je 0x12461db3 */
  if (C.zf) goto L_12461db3;
  /* 12461d96 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12461d99 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12461d9f push edx */
  push32((uint32_t)(EDX));
  /* 12461da0 push 0x1247f774 */
  push32((uint32_t)(0x1247f774u));
  /* 12461da5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12461da7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461daa push eax */
  push32((uint32_t)(EAX));
  /* 12461dab call 0x12461ba0 */
  push32(0x12461db0u); f_12461ba0();
  /* 12461db0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12461db3:;
  /* 12461db3 pop ebp */
  EBP = (pop32());
  /* 12461db4 ret  */
  ESPCHK(0x12461d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011dc0 @ 0x12461dc0 (130 bytes, 50 insns) */
void f_12461dc0(void) {
  FTRACE(0x12461dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12461dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12461dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12461dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12461dc4 push ebx */
  push32((uint32_t)(EBX));
  /* 12461dc5 push esi */
  push32((uint32_t)(ESI));
  /* 12461dc6 push edi */
  push32((uint32_t)(EDI));
  /* 12461dc7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12461dce:;
  /* 12461dce cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461dd2 jne 0x12461df2 */
  if (!C.zf) goto L_12461df2;
  /* 12461dd4 push 0x1247f788 */
  push32((uint32_t)(0x1247f788u));
  /* 12461dd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12461ddb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12461ddd push 0x1247f77c */
  push32((uint32_t)(0x1247f77cu));
  /* 12461de2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12461de4 call 0x124568e0 */
  push32(0x12461de9u); f_124568e0();
  /* 12461de9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461dec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461def jne 0x12461df2 */
  if (!C.zf) goto L_12461df2;
  /* 12461df1 int3  */
  x86_unimpl("int3 @ 0x12461df1");
L_12461df2:;
  /* 12461df2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12461df4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461df6 jne 0x12461dce */
  if (!C.zf) goto L_12461dce;
  /* 12461df8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461dfb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12461dfe and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12461e01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12461e03 je 0x12461e11 */
  if (C.zf) goto L_12461e11;
  /* 12461e05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461e08 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12461e0f jmp 0x12461e38 */
  goto L_12461e38;
L_12461e11:;
  /* 12461e11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461e14 push ecx */
  push32((uint32_t)(ECX));
  /* 12461e15 call 0x12460630 */
  push32(0x12461e1au); f_12460630();
  /* 12461e1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461e1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461e20 push edx */
  push32((uint32_t)(EDX));
  /* 12461e21 call 0x12461e50 */
  push32(0x12461e26u); f_12461e50();
  /* 12461e26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461e29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12461e2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461e2f push eax */
  push32((uint32_t)(EAX));
  /* 12461e30 call 0x124606a0 */
  push32(0x12461e35u); f_124606a0();
  /* 12461e35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12461e38:;
  /* 12461e38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12461e3b pop edi */
  EDI = (pop32());
  /* 12461e3c pop esi */
  ESI = (pop32());
  /* 12461e3d pop ebx */
  EBX = (pop32());
  /* 12461e3e mov esp, ebp */
  ESP = (EBP);
  /* 12461e40 pop ebp */
  EBP = (pop32());
  /* 12461e41 ret  */
  ESPCHK(0x12461dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e50 @ 0x12461e50 (190 bytes, 67 insns) */
void f_12461e50(void) {
  FTRACE(0x12461e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12461e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12461e51 mov ebp, esp */
  EBP = (ESP);
  /* 12461e53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12461e56 push ebx */
  push32((uint32_t)(EBX));
  /* 12461e57 push esi */
  push32((uint32_t)(ESI));
  /* 12461e58 push edi */
  push32((uint32_t)(EDI));
  /* 12461e59 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12461e60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461e63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12461e66:;
  /* 12461e66 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461e6a jne 0x12461e8a */
  if (!C.zf) goto L_12461e8a;
  /* 12461e6c push 0x1247f628 */
  push32((uint32_t)(0x1247f628u));
  /* 12461e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12461e73 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12461e75 push 0x1247f77c */
  push32((uint32_t)(0x1247f77cu));
  /* 12461e7a push 2 */
  push32((uint32_t)(0x2u));
  /* 12461e7c call 0x124568e0 */
  push32(0x12461e81u); f_124568e0();
  /* 12461e81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461e84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461e87 jne 0x12461e8a */
  if (!C.zf) goto L_12461e8a;
  /* 12461e89 int3  */
  x86_unimpl("int3 @ 0x12461e89");
L_12461e8a:;
  /* 12461e8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12461e8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12461e8e jne 0x12461e66 */
  if (!C.zf) goto L_12461e66;
  /* 12461e90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461e93 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12461e96 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12461e9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461e9d je 0x12461efa */
  if (C.zf) goto L_12461efa;
  /* 12461e9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461ea2 push ecx */
  push32((uint32_t)(ECX));
  /* 12461ea3 call 0x12461150 */
  push32(0x12461ea8u); f_12461150();
  /* 12461ea8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461eab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12461eae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461eb1 push edx */
  push32((uint32_t)(EDX));
  /* 12461eb2 call 0x124644d0 */
  push32(0x12461eb7u); f_124644d0();
  /* 12461eb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461eba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461ebd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12461ec0 push ecx */
  push32((uint32_t)(ECX));
  /* 12461ec1 call 0x124643a0 */
  push32(0x12461ec6u); f_124643a0();
  /* 12461ec6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461ec9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461ecb jge 0x12461ed6 */
  if ((C.sf==C.of)) goto L_12461ed6;
  /* 12461ecd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12461ed4 jmp 0x12461efa */
  goto L_12461efa;
L_12461ed6:;
  /* 12461ed6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461ed9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461edd je 0x12461efa */
  if (C.zf) goto L_12461efa;
  /* 12461edf push 2 */
  push32((uint32_t)(0x2u));
  /* 12461ee1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461ee4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12461ee7 push ecx */
  push32((uint32_t)(ECX));
  /* 12461ee8 call 0x124582b0 */
  push32(0x12461eedu); f_124582b0();
  /* 12461eed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461ef0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461ef3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12461efa:;
  /* 12461efa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12461efd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12461f04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12461f07 pop edi */
  EDI = (pop32());
  /* 12461f08 pop esi */
  ESI = (pop32());
  /* 12461f09 pop ebx */
  EBX = (pop32());
  /* 12461f0a mov esp, ebp */
  ESP = (EBP);
  /* 12461f0c pop ebp */
  EBP = (pop32());
  /* 12461f0d ret  */
  ESPCHK(0x12461e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f10 @ 0x12461f10 (210 bytes, 63 insns) */
void f_12461f10(void) {
  FTRACE(0x12461f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12461f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12461f11 mov ebp, esp */
  EBP = (ESP);
  /* 12461f13 push ecx */
  push32((uint32_t)(ECX));
  /* 12461f14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461f17 cmp eax, dword ptr [0x1248537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1248537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461f1d jae 0x12461f41 */
  if (!C.cf) goto L_12461f41;
  /* 12461f1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461f22 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12461f25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461f28 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12461f2b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12461f2e mov eax, dword ptr [ecx*4 + 0x12485240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12485240)));
  /* 12461f35 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12461f3a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12461f3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12461f3f jne 0x12461f54 */
  if (!C.zf) goto L_12461f54;
L_12461f41:;
  /* 12461f41 call 0x1245f6f0 */
  push32(0x12461f46u); f_1245f6f0();
  /* 12461f46 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12461f4c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12461f4f jmp 0x12461fde */
  goto L_12461fde;
L_12461f54:;
  /* 12461f54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461f57 push edx */
  push32((uint32_t)(EDX));
  /* 12461f58 call 0x12460f10 */
  push32(0x12461f5du); f_12460f10();
  /* 12461f5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461f60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461f63 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12461f66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461f69 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12461f6c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12461f6f mov edx, dword ptr [eax*4 + 0x12485240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12485240)));
  /* 12461f76 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12461f7b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12461f7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461f80 je 0x12461fbd */
  if (C.zf) goto L_12461fbd;
  /* 12461f82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461f85 push ecx */
  push32((uint32_t)(ECX));
  /* 12461f86 call 0x12460d90 */
  push32(0x12461f8bu); f_12460d90();
  /* 12461f8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461f8e push eax */
  push32((uint32_t)(EAX));
  /* 12461f8f call dword ptr [0x124862d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862d8))), 0x12461f95u);
  /* 12461f95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12461f97 jne 0x12461fa4 */
  if (!C.zf) goto L_12461fa4;
  /* 12461f99 call dword ptr [0x12486388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486388))), 0x12461f9fu);
  /* 12461f9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12461fa2 jmp 0x12461fab */
  goto L_12461fab;
L_12461fa4:;
  /* 12461fa4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12461fab:;
  /* 12461fab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461faf jne 0x12461fb3 */
  if (!C.zf) goto L_12461fb3;
  /* 12461fb1 jmp 0x12461fcf */
  goto L_12461fcf;
L_12461fb3:;
  /* 12461fb3 call 0x1245f700 */
  push32(0x12461fb8u); f_1245f700();
  /* 12461fb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12461fbb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12461fbd:;
  /* 12461fbd call 0x1245f6f0 */
  push32(0x12461fc2u); f_1245f6f0();
  /* 12461fc2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12461fc8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12461fcf:;
  /* 12461fcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12461fd2 push eax */
  push32((uint32_t)(EAX));
  /* 12461fd3 call 0x12460fa0 */
  push32(0x12461fd8u); f_12460fa0();
  /* 12461fd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12461fdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12461fde:;
  /* 12461fde mov esp, ebp */
  ESP = (EBP);
  /* 12461fe0 pop ebp */
  EBP = (pop32());
  /* 12461fe1 ret  */
  ESPCHK(0x12461f10u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12461ff0 (219 bytes, 64 insns) */
void f_12461ff0(void) {
  FTRACE(0x12461ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12461ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12461ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12461ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 12461ff4 cmp dword ptr [0x12483a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12461ffb je 0x12462091 */
  if (C.zf) goto L_12462091;
  /* 12462001 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12462003 push 0x1247f798 */
  push32((uint32_t)(0x1247f798u));
  /* 12462008 push 2 */
  push32((uint32_t)(0x2u));
  /* 1246200a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1246200f push 1 */
  push32((uint32_t)(0x1u));
  /* 12462011 call 0x12457c30 */
  push32(0x12462016u); f_12457c30();
  /* 12462016 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462019 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1246201c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12462020 jne 0x1246202c */
  if (!C.zf) goto L_1246202c;
  /* 12462022 mov eax, 1 */
  EAX = (0x1u);
  /* 12462027 jmp 0x124620c7 */
  goto L_124620c7;
L_1246202c:;
  /* 1246202c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246202f push eax */
  push32((uint32_t)(EAX));
  /* 12462030 call 0x124620d0 */
  push32(0x12462035u); f_124620d0();
  /* 12462035 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1246203a je 0x1246205d */
  if (C.zf) goto L_1246205d;
  /* 1246203c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246203f push ecx */
  push32((uint32_t)(ECX));
  /* 12462040 call 0x12462660 */
  push32(0x12462045u); f_12462660();
  /* 12462045 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462048 push 2 */
  push32((uint32_t)(0x2u));
  /* 1246204a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246204d push edx */
  push32((uint32_t)(EDX));
  /* 1246204e call 0x124582b0 */
  push32(0x12462053u); f_124582b0();
  /* 12462053 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462056 mov eax, 1 */
  EAX = (0x1u);
  /* 1246205b jmp 0x124620c7 */
  goto L_124620c7;
L_1246205d:;
  /* 1246205d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462060 mov dword ptr [0x12482c98], eax */
  w32((uint32_t)(0x12482c98), (EAX));
  /* 12462065 mov ecx, dword ptr [0x12483a84] */
  ECX = (r32((uint32_t)(0x12483a84)));
  /* 1246206b push ecx */
  push32((uint32_t)(ECX));
  /* 1246206c call 0x12462660 */
  push32(0x12462071u); f_12462660();
  /* 12462071 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462074 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462076 mov edx, dword ptr [0x12483a84] */
  EDX = (r32((uint32_t)(0x12483a84)));
  /* 1246207c push edx */
  push32((uint32_t)(EDX));
  /* 1246207d call 0x124582b0 */
  push32(0x12462082u); f_124582b0();
  /* 12462082 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462085 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462088 mov dword ptr [0x12483a84], eax */
  w32((uint32_t)(0x12483a84), (EAX));
  /* 1246208d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1246208f jmp 0x124620c7 */
  goto L_124620c7;
L_12462091:;
  /* 12462091 mov dword ptr [0x12482c98], 0x12482ca0 */
  w32((uint32_t)(0x12482c98), (0x12482ca0u));
  /* 1246209b mov ecx, dword ptr [0x12483a84] */
  ECX = (r32((uint32_t)(0x12483a84)));
  /* 124620a1 push ecx */
  push32((uint32_t)(ECX));
  /* 124620a2 call 0x12462660 */
  push32(0x124620a7u); f_12462660();
  /* 124620a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124620aa push 2 */
  push32((uint32_t)(0x2u));
  /* 124620ac mov edx, dword ptr [0x12483a84] */
  EDX = (r32((uint32_t)(0x12483a84)));
  /* 124620b2 push edx */
  push32((uint32_t)(EDX));
  /* 124620b3 call 0x124582b0 */
  push32(0x124620b8u); f_124582b0();
  /* 124620b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124620bb mov dword ptr [0x12483a84], 0 */
  w32((uint32_t)(0x12483a84), (0x0u));
  /* 124620c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124620c7:;
  /* 124620c7 mov esp, ebp */
  ESP = (EBP);
  /* 124620c9 pop ebp */
  EBP = (pop32());
  /* 124620ca ret  */
  ESPCHK(0x12461ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100120d0 @ 0x124620d0 (1423 bytes, 533 insns) */
void f_124620d0(void) {
  FTRACE(0x124620d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124620d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124620d1 mov ebp, esp */
  EBP = (ESP);
  /* 124620d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124620d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124620dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124620df mov ax, word ptr [0x12483abe] */
  AX = (r16((uint32_t)(0x12483abe)));
  /* 124620e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124620e8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124620ea mov cx, word ptr [0x12483ac0] */
  CX = (r16((uint32_t)(0x12483ac0)));
  /* 124620f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124620f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124620f8 jne 0x12462102 */
  if (!C.zf) goto L_12462102;
  /* 124620fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124620fd jmp 0x1246265b */
  goto L_1246265b;
L_12462102:;
  /* 12462102 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462105 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462108 push edx */
  push32((uint32_t)(EDX));
  /* 12462109 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1246210b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246210e push eax */
  push32((uint32_t)(EAX));
  /* 1246210f push 1 */
  push32((uint32_t)(0x1u));
  /* 12462111 call 0x124659e0 */
  push32(0x12462116u); f_124659e0();
  /* 12462116 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462119 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246211c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1246211e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462121 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462124 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462127 push edx */
  push32((uint32_t)(EDX));
  /* 12462128 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1246212a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246212d push eax */
  push32((uint32_t)(EAX));
  /* 1246212e push 1 */
  push32((uint32_t)(0x1u));
  /* 12462130 call 0x124659e0 */
  push32(0x12462135u); f_124659e0();
  /* 12462135 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462138 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246213b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1246213d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462140 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462143 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462146 push edx */
  push32((uint32_t)(EDX));
  /* 12462147 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12462149 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246214c push eax */
  push32((uint32_t)(EAX));
  /* 1246214d push 1 */
  push32((uint32_t)(0x1u));
  /* 1246214f call 0x124659e0 */
  push32(0x12462154u); f_124659e0();
  /* 12462154 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462157 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246215a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1246215c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1246215f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462162 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462165 push edx */
  push32((uint32_t)(EDX));
  /* 12462166 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12462168 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246216b push eax */
  push32((uint32_t)(EAX));
  /* 1246216c push 1 */
  push32((uint32_t)(0x1u));
  /* 1246216e call 0x124659e0 */
  push32(0x12462173u); f_124659e0();
  /* 12462173 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462176 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12462179 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1246217b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1246217e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462181 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462184 push edx */
  push32((uint32_t)(EDX));
  /* 12462185 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12462187 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246218a push eax */
  push32((uint32_t)(EAX));
  /* 1246218b push 1 */
  push32((uint32_t)(0x1u));
  /* 1246218d call 0x124659e0 */
  push32(0x12462192u); f_124659e0();
  /* 12462192 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462195 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12462198 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1246219a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1246219d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124621a0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124621a3 push edx */
  push32((uint32_t)(EDX));
  /* 124621a4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 124621a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124621a9 push eax */
  push32((uint32_t)(EAX));
  /* 124621aa push 1 */
  push32((uint32_t)(0x1u));
  /* 124621ac call 0x124659e0 */
  push32(0x124621b1u); f_124659e0();
  /* 124621b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124621b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124621b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124621b9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124621bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124621bf push edx */
  push32((uint32_t)(EDX));
  /* 124621c0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 124621c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124621c5 push eax */
  push32((uint32_t)(EAX));
  /* 124621c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 124621c8 call 0x124659e0 */
  push32(0x124621cdu); f_124659e0();
  /* 124621cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124621d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124621d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124621d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124621d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124621db add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124621de push edx */
  push32((uint32_t)(EDX));
  /* 124621df push 0x2a */
  push32((uint32_t)(0x2au));
  /* 124621e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124621e4 push eax */
  push32((uint32_t)(EAX));
  /* 124621e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 124621e7 call 0x124659e0 */
  push32(0x124621ecu); f_124659e0();
  /* 124621ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124621ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124621f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124621f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124621f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124621fa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124621fd push edx */
  push32((uint32_t)(EDX));
  /* 124621fe push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12462200 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462203 push eax */
  push32((uint32_t)(EAX));
  /* 12462204 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462206 call 0x124659e0 */
  push32(0x1246220bu); f_124659e0();
  /* 1246220b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246220e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12462211 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462213 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462216 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462219 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246221c push edx */
  push32((uint32_t)(EDX));
  /* 1246221d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1246221f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462222 push eax */
  push32((uint32_t)(EAX));
  /* 12462223 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462225 call 0x124659e0 */
  push32(0x1246222au); f_124659e0();
  /* 1246222a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246222d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12462230 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462232 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462235 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462238 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246223b push edx */
  push32((uint32_t)(EDX));
  /* 1246223c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1246223e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462241 push eax */
  push32((uint32_t)(EAX));
  /* 12462242 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462244 call 0x124659e0 */
  push32(0x12462249u); f_124659e0();
  /* 12462249 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246224c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246224f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462251 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462254 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462257 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246225a push edx */
  push32((uint32_t)(EDX));
  /* 1246225b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1246225d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462260 push eax */
  push32((uint32_t)(EAX));
  /* 12462261 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462263 call 0x124659e0 */
  push32(0x12462268u); f_124659e0();
  /* 12462268 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246226b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246226e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462270 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462273 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462276 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462279 push edx */
  push32((uint32_t)(EDX));
  /* 1246227a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1246227c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246227f push eax */
  push32((uint32_t)(EAX));
  /* 12462280 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462282 call 0x124659e0 */
  push32(0x12462287u); f_124659e0();
  /* 12462287 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246228a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246228d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1246228f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462292 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462295 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462298 push edx */
  push32((uint32_t)(EDX));
  /* 12462299 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1246229b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246229e push eax */
  push32((uint32_t)(EAX));
  /* 1246229f push 1 */
  push32((uint32_t)(0x1u));
  /* 124622a1 call 0x124659e0 */
  push32(0x124622a6u); f_124659e0();
  /* 124622a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124622a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124622ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124622ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124622b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124622b4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124622b7 push edx */
  push32((uint32_t)(EDX));
  /* 124622b8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 124622ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124622bd push eax */
  push32((uint32_t)(EAX));
  /* 124622be push 1 */
  push32((uint32_t)(0x1u));
  /* 124622c0 call 0x124659e0 */
  push32(0x124622c5u); f_124659e0();
  /* 124622c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124622c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124622cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124622cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124622d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124622d3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124622d6 push edx */
  push32((uint32_t)(EDX));
  /* 124622d7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 124622d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124622dc push eax */
  push32((uint32_t)(EAX));
  /* 124622dd push 1 */
  push32((uint32_t)(0x1u));
  /* 124622df call 0x124659e0 */
  push32(0x124622e4u); f_124659e0();
  /* 124622e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124622e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124622ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124622ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124622ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124622f2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124622f5 push edx */
  push32((uint32_t)(EDX));
  /* 124622f6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 124622f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124622fb push eax */
  push32((uint32_t)(EAX));
  /* 124622fc push 1 */
  push32((uint32_t)(0x1u));
  /* 124622fe call 0x124659e0 */
  push32(0x12462303u); f_124659e0();
  /* 12462303 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462306 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12462309 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1246230b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1246230e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462311 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462314 push edx */
  push32((uint32_t)(EDX));
  /* 12462315 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12462317 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246231a push eax */
  push32((uint32_t)(EAX));
  /* 1246231b push 1 */
  push32((uint32_t)(0x1u));
  /* 1246231d call 0x124659e0 */
  push32(0x12462322u); f_124659e0();
  /* 12462322 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462325 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12462328 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1246232a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1246232d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462330 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462333 push edx */
  push32((uint32_t)(EDX));
  /* 12462334 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12462336 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462339 push eax */
  push32((uint32_t)(EAX));
  /* 1246233a push 1 */
  push32((uint32_t)(0x1u));
  /* 1246233c call 0x124659e0 */
  push32(0x12462341u); f_124659e0();
  /* 12462341 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462344 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12462347 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462349 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1246234c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246234f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462352 push edx */
  push32((uint32_t)(EDX));
  /* 12462353 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12462355 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462358 push eax */
  push32((uint32_t)(EAX));
  /* 12462359 push 1 */
  push32((uint32_t)(0x1u));
  /* 1246235b call 0x124659e0 */
  push32(0x12462360u); f_124659e0();
  /* 12462360 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462363 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12462366 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462368 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1246236b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246236e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462371 push edx */
  push32((uint32_t)(EDX));
  /* 12462372 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12462374 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462377 push eax */
  push32((uint32_t)(EAX));
  /* 12462378 push 1 */
  push32((uint32_t)(0x1u));
  /* 1246237a call 0x124659e0 */
  push32(0x1246237fu); f_124659e0();
  /* 1246237f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462382 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12462385 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462387 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1246238a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246238d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462390 push edx */
  push32((uint32_t)(EDX));
  /* 12462391 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12462393 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462396 push eax */
  push32((uint32_t)(EAX));
  /* 12462397 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462399 call 0x124659e0 */
  push32(0x1246239eu); f_124659e0();
  /* 1246239e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124623a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124623a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124623a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124623a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124623ac add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124623af push edx */
  push32((uint32_t)(EDX));
  /* 124623b0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 124623b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124623b5 push eax */
  push32((uint32_t)(EAX));
  /* 124623b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 124623b8 call 0x124659e0 */
  push32(0x124623bdu); f_124659e0();
  /* 124623bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124623c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124623c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124623c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124623c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124623cb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124623ce push edx */
  push32((uint32_t)(EDX));
  /* 124623cf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 124623d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124623d4 push eax */
  push32((uint32_t)(EAX));
  /* 124623d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 124623d7 call 0x124659e0 */
  push32(0x124623dcu); f_124659e0();
  /* 124623dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124623df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124623e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124623e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124623e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124623ea add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124623ed push edx */
  push32((uint32_t)(EDX));
  /* 124623ee push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 124623f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124623f3 push eax */
  push32((uint32_t)(EAX));
  /* 124623f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 124623f6 call 0x124659e0 */
  push32(0x124623fbu); f_124659e0();
  /* 124623fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124623fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12462401 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462403 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462406 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462409 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246240c push edx */
  push32((uint32_t)(EDX));
  /* 1246240d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1246240f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462412 push eax */
  push32((uint32_t)(EAX));
  /* 12462413 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462415 call 0x124659e0 */
  push32(0x1246241au); f_124659e0();
  /* 1246241a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246241d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12462420 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462422 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462425 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462428 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246242b push edx */
  push32((uint32_t)(EDX));
  /* 1246242c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1246242e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462431 push eax */
  push32((uint32_t)(EAX));
  /* 12462432 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462434 call 0x124659e0 */
  push32(0x12462439u); f_124659e0();
  /* 12462439 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246243c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246243f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462441 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462444 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462447 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246244a push edx */
  push32((uint32_t)(EDX));
  /* 1246244b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1246244d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462450 push eax */
  push32((uint32_t)(EAX));
  /* 12462451 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462453 call 0x124659e0 */
  push32(0x12462458u); f_124659e0();
  /* 12462458 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246245b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246245e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462460 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462463 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462466 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462469 push edx */
  push32((uint32_t)(EDX));
  /* 1246246a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1246246c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246246f push eax */
  push32((uint32_t)(EAX));
  /* 12462470 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462472 call 0x124659e0 */
  push32(0x12462477u); f_124659e0();
  /* 12462477 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246247a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246247d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1246247f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462482 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462485 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462488 push edx */
  push32((uint32_t)(EDX));
  /* 12462489 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1246248b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246248e push eax */
  push32((uint32_t)(EAX));
  /* 1246248f push 1 */
  push32((uint32_t)(0x1u));
  /* 12462491 call 0x124659e0 */
  push32(0x12462496u); f_124659e0();
  /* 12462496 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462499 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246249c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1246249e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124624a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124624a4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124624a7 push edx */
  push32((uint32_t)(EDX));
  /* 124624a8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 124624aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124624ad push eax */
  push32((uint32_t)(EAX));
  /* 124624ae push 1 */
  push32((uint32_t)(0x1u));
  /* 124624b0 call 0x124659e0 */
  push32(0x124624b5u); f_124659e0();
  /* 124624b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124624b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124624bb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124624bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124624c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124624c3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124624c6 push edx */
  push32((uint32_t)(EDX));
  /* 124624c7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 124624c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124624cc push eax */
  push32((uint32_t)(EAX));
  /* 124624cd push 1 */
  push32((uint32_t)(0x1u));
  /* 124624cf call 0x124659e0 */
  push32(0x124624d4u); f_124659e0();
  /* 124624d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124624d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124624da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124624dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124624df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124624e2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124624e8 push edx */
  push32((uint32_t)(EDX));
  /* 124624e9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 124624eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124624ee push eax */
  push32((uint32_t)(EAX));
  /* 124624ef push 1 */
  push32((uint32_t)(0x1u));
  /* 124624f1 call 0x124659e0 */
  push32(0x124624f6u); f_124659e0();
  /* 124624f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124624f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124624fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124624fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462501 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462504 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246250a push edx */
  push32((uint32_t)(EDX));
  /* 1246250b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1246250d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462510 push eax */
  push32((uint32_t)(EAX));
  /* 12462511 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462513 call 0x124659e0 */
  push32(0x12462518u); f_124659e0();
  /* 12462518 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246251b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246251e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462520 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462523 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462526 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246252c push edx */
  push32((uint32_t)(EDX));
  /* 1246252d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1246252f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462532 push eax */
  push32((uint32_t)(EAX));
  /* 12462533 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462535 call 0x124659e0 */
  push32(0x1246253au); f_124659e0();
  /* 1246253a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246253d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12462540 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462542 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462545 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462548 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246254e push edx */
  push32((uint32_t)(EDX));
  /* 1246254f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12462551 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462554 push eax */
  push32((uint32_t)(EAX));
  /* 12462555 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462557 call 0x124659e0 */
  push32(0x1246255cu); f_124659e0();
  /* 1246255c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246255f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12462562 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462564 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462567 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246256a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462570 push edx */
  push32((uint32_t)(EDX));
  /* 12462571 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12462573 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462576 push eax */
  push32((uint32_t)(EAX));
  /* 12462577 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462579 call 0x124659e0 */
  push32(0x1246257eu); f_124659e0();
  /* 1246257e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462581 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12462584 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462586 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462589 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246258c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462592 push edx */
  push32((uint32_t)(EDX));
  /* 12462593 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12462595 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462598 push eax */
  push32((uint32_t)(EAX));
  /* 12462599 push 1 */
  push32((uint32_t)(0x1u));
  /* 1246259b call 0x124659e0 */
  push32(0x124625a0u); f_124659e0();
  /* 124625a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124625a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124625a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124625a8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124625ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124625ae add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124625b4 push edx */
  push32((uint32_t)(EDX));
  /* 124625b5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 124625b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124625ba push eax */
  push32((uint32_t)(EAX));
  /* 124625bb push 1 */
  push32((uint32_t)(0x1u));
  /* 124625bd call 0x124659e0 */
  push32(0x124625c2u); f_124659e0();
  /* 124625c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124625c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124625c8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124625ca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124625cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124625d0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124625d6 push edx */
  push32((uint32_t)(EDX));
  /* 124625d7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 124625d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124625dc push eax */
  push32((uint32_t)(EAX));
  /* 124625dd push 1 */
  push32((uint32_t)(0x1u));
  /* 124625df call 0x124659e0 */
  push32(0x124625e4u); f_124659e0();
  /* 124625e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124625e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124625ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124625ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124625ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124625f2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124625f8 push edx */
  push32((uint32_t)(EDX));
  /* 124625f9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 124625fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124625fe push eax */
  push32((uint32_t)(EAX));
  /* 124625ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12462601 call 0x124659e0 */
  push32(0x12462606u); f_124659e0();
  /* 12462606 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462609 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246260c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1246260e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462611 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462614 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246261a push edx */
  push32((uint32_t)(EDX));
  /* 1246261b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1246261d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12462620 push eax */
  push32((uint32_t)(EAX));
  /* 12462621 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462623 call 0x124659e0 */
  push32(0x12462628u); f_124659e0();
  /* 12462628 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246262b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246262e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462630 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462633 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462636 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246263c push edx */
  push32((uint32_t)(EDX));
  /* 1246263d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12462642 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12462645 push eax */
  push32((uint32_t)(EAX));
  /* 12462646 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462648 call 0x124659e0 */
  push32(0x1246264du); f_124659e0();
  /* 1246264d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462650 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12462653 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462655 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12462658 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1246265b:;
  /* 1246265b mov esp, ebp */
  ESP = (EBP);
  /* 1246265d pop ebp */
  EBP = (pop32());
  /* 1246265e ret  */
  ESPCHK(0x124620d0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12462660 (779 bytes, 265 insns) */
void f_12462660(void) {
  FTRACE(0x12462660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12462660 push ebp */
  push32((uint32_t)(EBP));
  /* 12462661 mov ebp, esp */
  EBP = (ESP);
  /* 12462663 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12462667 jne 0x1246266e */
  if (!C.zf) goto L_1246266e;
  /* 12462669 jmp 0x12462969 */
  goto L_12462969;
L_1246266e:;
  /* 1246266e push 2 */
  push32((uint32_t)(0x2u));
  /* 12462670 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462673 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12462676 push ecx */
  push32((uint32_t)(ECX));
  /* 12462677 call 0x124582b0 */
  push32(0x1246267cu); f_124582b0();
  /* 1246267c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246267f push 2 */
  push32((uint32_t)(0x2u));
  /* 12462681 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462684 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12462687 push eax */
  push32((uint32_t)(EAX));
  /* 12462688 call 0x124582b0 */
  push32(0x1246268du); f_124582b0();
  /* 1246268d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462690 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462692 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462695 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12462698 push edx */
  push32((uint32_t)(EDX));
  /* 12462699 call 0x124582b0 */
  push32(0x1246269eu); f_124582b0();
  /* 1246269e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124626a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 124626a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124626a6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124626a9 push ecx */
  push32((uint32_t)(ECX));
  /* 124626aa call 0x124582b0 */
  push32(0x124626afu); f_124582b0();
  /* 124626af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124626b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 124626b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124626b7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124626ba push eax */
  push32((uint32_t)(EAX));
  /* 124626bb call 0x124582b0 */
  push32(0x124626c0u); f_124582b0();
  /* 124626c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124626c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 124626c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124626c8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 124626cb push edx */
  push32((uint32_t)(EDX));
  /* 124626cc call 0x124582b0 */
  push32(0x124626d1u); f_124582b0();
  /* 124626d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124626d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 124626d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124626d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124626db push ecx */
  push32((uint32_t)(ECX));
  /* 124626dc call 0x124582b0 */
  push32(0x124626e1u); f_124582b0();
  /* 124626e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124626e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 124626e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124626e9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 124626ec push eax */
  push32((uint32_t)(EAX));
  /* 124626ed call 0x124582b0 */
  push32(0x124626f2u); f_124582b0();
  /* 124626f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124626f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 124626f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124626fa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 124626fd push edx */
  push32((uint32_t)(EDX));
  /* 124626fe call 0x124582b0 */
  push32(0x12462703u); f_124582b0();
  /* 12462703 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462706 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462708 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246270b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1246270e push ecx */
  push32((uint32_t)(ECX));
  /* 1246270f call 0x124582b0 */
  push32(0x12462714u); f_124582b0();
  /* 12462714 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462717 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462719 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246271c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1246271f push eax */
  push32((uint32_t)(EAX));
  /* 12462720 call 0x124582b0 */
  push32(0x12462725u); f_124582b0();
  /* 12462725 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462728 push 2 */
  push32((uint32_t)(0x2u));
  /* 1246272a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246272d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12462730 push edx */
  push32((uint32_t)(EDX));
  /* 12462731 call 0x124582b0 */
  push32(0x12462736u); f_124582b0();
  /* 12462736 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462739 push 2 */
  push32((uint32_t)(0x2u));
  /* 1246273b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246273e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12462741 push ecx */
  push32((uint32_t)(ECX));
  /* 12462742 call 0x124582b0 */
  push32(0x12462747u); f_124582b0();
  /* 12462747 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246274a push 2 */
  push32((uint32_t)(0x2u));
  /* 1246274c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246274f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12462752 push eax */
  push32((uint32_t)(EAX));
  /* 12462753 call 0x124582b0 */
  push32(0x12462758u); f_124582b0();
  /* 12462758 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246275b push 2 */
  push32((uint32_t)(0x2u));
  /* 1246275d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462760 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12462763 push edx */
  push32((uint32_t)(EDX));
  /* 12462764 call 0x124582b0 */
  push32(0x12462769u); f_124582b0();
  /* 12462769 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246276c push 2 */
  push32((uint32_t)(0x2u));
  /* 1246276e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462771 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12462774 push ecx */
  push32((uint32_t)(ECX));
  /* 12462775 call 0x124582b0 */
  push32(0x1246277au); f_124582b0();
  /* 1246277a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246277d push 2 */
  push32((uint32_t)(0x2u));
  /* 1246277f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462782 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12462785 push eax */
  push32((uint32_t)(EAX));
  /* 12462786 call 0x124582b0 */
  push32(0x1246278bu); f_124582b0();
  /* 1246278b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246278e push 2 */
  push32((uint32_t)(0x2u));
  /* 12462790 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462793 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12462796 push edx */
  push32((uint32_t)(EDX));
  /* 12462797 call 0x124582b0 */
  push32(0x1246279cu); f_124582b0();
  /* 1246279c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246279f push 2 */
  push32((uint32_t)(0x2u));
  /* 124627a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124627a4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 124627a7 push ecx */
  push32((uint32_t)(ECX));
  /* 124627a8 call 0x124582b0 */
  push32(0x124627adu); f_124582b0();
  /* 124627ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124627b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 124627b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124627b5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 124627b8 push eax */
  push32((uint32_t)(EAX));
  /* 124627b9 call 0x124582b0 */
  push32(0x124627beu); f_124582b0();
  /* 124627be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124627c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 124627c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124627c6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 124627c9 push edx */
  push32((uint32_t)(EDX));
  /* 124627ca call 0x124582b0 */
  push32(0x124627cfu); f_124582b0();
  /* 124627cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124627d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 124627d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124627d7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 124627da push ecx */
  push32((uint32_t)(ECX));
  /* 124627db call 0x124582b0 */
  push32(0x124627e0u); f_124582b0();
  /* 124627e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124627e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 124627e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124627e8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 124627eb push eax */
  push32((uint32_t)(EAX));
  /* 124627ec call 0x124582b0 */
  push32(0x124627f1u); f_124582b0();
  /* 124627f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124627f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 124627f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124627f9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 124627fc push edx */
  push32((uint32_t)(EDX));
  /* 124627fd call 0x124582b0 */
  push32(0x12462802u); f_124582b0();
  /* 12462802 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462805 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462807 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246280a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1246280d push ecx */
  push32((uint32_t)(ECX));
  /* 1246280e call 0x124582b0 */
  push32(0x12462813u); f_124582b0();
  /* 12462813 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462816 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462818 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246281b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1246281e push eax */
  push32((uint32_t)(EAX));
  /* 1246281f call 0x124582b0 */
  push32(0x12462824u); f_124582b0();
  /* 12462824 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462827 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462829 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246282c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1246282f push edx */
  push32((uint32_t)(EDX));
  /* 12462830 call 0x124582b0 */
  push32(0x12462835u); f_124582b0();
  /* 12462835 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462838 push 2 */
  push32((uint32_t)(0x2u));
  /* 1246283a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246283d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12462840 push ecx */
  push32((uint32_t)(ECX));
  /* 12462841 call 0x124582b0 */
  push32(0x12462846u); f_124582b0();
  /* 12462846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462849 push 2 */
  push32((uint32_t)(0x2u));
  /* 1246284b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246284e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12462851 push eax */
  push32((uint32_t)(EAX));
  /* 12462852 call 0x124582b0 */
  push32(0x12462857u); f_124582b0();
  /* 12462857 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246285a push 2 */
  push32((uint32_t)(0x2u));
  /* 1246285c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246285f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12462862 push edx */
  push32((uint32_t)(EDX));
  /* 12462863 call 0x124582b0 */
  push32(0x12462868u); f_124582b0();
  /* 12462868 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246286b push 2 */
  push32((uint32_t)(0x2u));
  /* 1246286d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462870 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12462873 push ecx */
  push32((uint32_t)(ECX));
  /* 12462874 call 0x124582b0 */
  push32(0x12462879u); f_124582b0();
  /* 12462879 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246287c push 2 */
  push32((uint32_t)(0x2u));
  /* 1246287e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462881 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12462884 push eax */
  push32((uint32_t)(EAX));
  /* 12462885 call 0x124582b0 */
  push32(0x1246288au); f_124582b0();
  /* 1246288a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246288d push 2 */
  push32((uint32_t)(0x2u));
  /* 1246288f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462892 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12462898 push edx */
  push32((uint32_t)(EDX));
  /* 12462899 call 0x124582b0 */
  push32(0x1246289eu); f_124582b0();
  /* 1246289e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124628a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 124628a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124628a6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 124628ac push ecx */
  push32((uint32_t)(ECX));
  /* 124628ad call 0x124582b0 */
  push32(0x124628b2u); f_124582b0();
  /* 124628b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124628b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 124628b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124628ba mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 124628c0 push eax */
  push32((uint32_t)(EAX));
  /* 124628c1 call 0x124582b0 */
  push32(0x124628c6u); f_124582b0();
  /* 124628c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124628c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 124628cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124628ce mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 124628d4 push edx */
  push32((uint32_t)(EDX));
  /* 124628d5 call 0x124582b0 */
  push32(0x124628dau); f_124582b0();
  /* 124628da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124628dd push 2 */
  push32((uint32_t)(0x2u));
  /* 124628df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124628e2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 124628e8 push ecx */
  push32((uint32_t)(ECX));
  /* 124628e9 call 0x124582b0 */
  push32(0x124628eeu); f_124582b0();
  /* 124628ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124628f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 124628f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124628f6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 124628fc push eax */
  push32((uint32_t)(EAX));
  /* 124628fd call 0x124582b0 */
  push32(0x12462902u); f_124582b0();
  /* 12462902 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462905 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462907 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246290a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12462910 push edx */
  push32((uint32_t)(EDX));
  /* 12462911 call 0x124582b0 */
  push32(0x12462916u); f_124582b0();
  /* 12462916 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462919 push 2 */
  push32((uint32_t)(0x2u));
  /* 1246291b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246291e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12462924 push ecx */
  push32((uint32_t)(ECX));
  /* 12462925 call 0x124582b0 */
  push32(0x1246292au); f_124582b0();
  /* 1246292a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246292d push 2 */
  push32((uint32_t)(0x2u));
  /* 1246292f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462932 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12462938 push eax */
  push32((uint32_t)(EAX));
  /* 12462939 call 0x124582b0 */
  push32(0x1246293eu); f_124582b0();
  /* 1246293e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462941 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462943 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462946 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1246294c push edx */
  push32((uint32_t)(EDX));
  /* 1246294d call 0x124582b0 */
  push32(0x12462952u); f_124582b0();
  /* 12462952 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462955 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462957 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246295a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12462960 push ecx */
  push32((uint32_t)(ECX));
  /* 12462961 call 0x124582b0 */
  push32(0x12462966u); f_124582b0();
  /* 12462966 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12462969:;
  /* 12462969 pop ebp */
  EBP = (pop32());
  /* 1246296a ret  */
  ESPCHK(0x12462660u, _esp0);
  ESP += 4; return;
}

/* FUN_10012970 @ 0x12462970 (678 bytes, 180 insns) */
void f_12462970(void) {
  FTRACE(0x12462970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12462970 push ebp */
  push32((uint32_t)(EBP));
  /* 12462971 mov ebp, esp */
  EBP = (ESP);
  /* 12462973 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12462976 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1246297d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1246297f mov ax, word ptr [0x12483aba] */
  AX = (r16((uint32_t)(0x12483aba)));
  /* 12462985 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12462988 cmp dword ptr [0x12483a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246298f je 0x12462aea */
  if (C.zf) goto L_12462aea;
  /* 12462995 push 0x12483a88 */
  push32((uint32_t)(0x12483a88u));
  /* 1246299a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1246299c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246299f push ecx */
  push32((uint32_t)(ECX));
  /* 124629a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 124629a2 call 0x124659e0 */
  push32(0x124629a7u); f_124659e0();
  /* 124629a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124629aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124629ad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 124629af mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124629b2 push 0x12483a8c */
  push32((uint32_t)(0x12483a8cu));
  /* 124629b7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 124629b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124629bc push eax */
  push32((uint32_t)(EAX));
  /* 124629bd push 1 */
  push32((uint32_t)(0x1u));
  /* 124629bf call 0x124659e0 */
  push32(0x124629c4u); f_124659e0();
  /* 124629c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124629c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124629ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124629cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124629cf push 0x12483a90 */
  push32((uint32_t)(0x12483a90u));
  /* 124629d4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 124629d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124629d9 push edx */
  push32((uint32_t)(EDX));
  /* 124629da push 1 */
  push32((uint32_t)(0x1u));
  /* 124629dc call 0x124659e0 */
  push32(0x124629e1u); f_124659e0();
  /* 124629e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124629e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124629e7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124629e9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124629ec mov edx, dword ptr [0x12483a90] */
  EDX = (r32((uint32_t)(0x12483a90)));
  /* 124629f2 push edx */
  push32((uint32_t)(EDX));
  /* 124629f3 call 0x12462c20 */
  push32(0x124629f8u); f_12462c20();
  /* 124629f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124629fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124629ff je 0x12462a59 */
  if (C.zf) goto L_12462a59;
  /* 12462a01 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462a03 mov eax, dword ptr [0x12483a88] */
  EAX = (r32((uint32_t)(0x12483a88)));
  /* 12462a08 push eax */
  push32((uint32_t)(EAX));
  /* 12462a09 call 0x124582b0 */
  push32(0x12462a0eu); f_124582b0();
  /* 12462a0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462a11 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462a13 mov ecx, dword ptr [0x12483a8c] */
  ECX = (r32((uint32_t)(0x12483a8c)));
  /* 12462a19 push ecx */
  push32((uint32_t)(ECX));
  /* 12462a1a call 0x124582b0 */
  push32(0x12462a1fu); f_124582b0();
  /* 12462a1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462a22 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462a24 mov edx, dword ptr [0x12483a90] */
  EDX = (r32((uint32_t)(0x12483a90)));
  /* 12462a2a push edx */
  push32((uint32_t)(EDX));
  /* 12462a2b call 0x124582b0 */
  push32(0x12462a30u); f_124582b0();
  /* 12462a30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462a33 mov dword ptr [0x12483a88], 0 */
  w32((uint32_t)(0x12483a88), (0x0u));
  /* 12462a3d mov dword ptr [0x12483a8c], 0 */
  w32((uint32_t)(0x12483a8c), (0x0u));
  /* 12462a47 mov dword ptr [0x12483a90], 0 */
  w32((uint32_t)(0x12483a90), (0x0u));
  /* 12462a51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12462a54 jmp 0x12462c12 */
  goto L_12462c12;
L_12462a59:;
  /* 12462a59 mov eax, dword ptr [0x12482d88] */
  EAX = (r32((uint32_t)(0x12482d88)));
  /* 12462a5e cmp dword ptr [eax], 0x12482d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12482d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12462a64 je 0x12462aa0 */
  if (C.zf) goto L_12462aa0;
  /* 12462a66 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462a68 mov ecx, dword ptr [0x12482d88] */
  ECX = (r32((uint32_t)(0x12482d88)));
  /* 12462a6e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12462a70 push edx */
  push32((uint32_t)(EDX));
  /* 12462a71 call 0x124582b0 */
  push32(0x12462a76u); f_124582b0();
  /* 12462a76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462a79 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462a7b mov eax, dword ptr [0x12482d88] */
  EAX = (r32((uint32_t)(0x12482d88)));
  /* 12462a80 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12462a83 push ecx */
  push32((uint32_t)(ECX));
  /* 12462a84 call 0x124582b0 */
  push32(0x12462a89u); f_124582b0();
  /* 12462a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462a8c push 2 */
  push32((uint32_t)(0x2u));
  /* 12462a8e mov edx, dword ptr [0x12482d88] */
  EDX = (r32((uint32_t)(0x12482d88)));
  /* 12462a94 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12462a97 push eax */
  push32((uint32_t)(EAX));
  /* 12462a98 call 0x124582b0 */
  push32(0x12462a9du); f_124582b0();
  /* 12462a9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12462aa0:;
  /* 12462aa0 mov ecx, dword ptr [0x12482d88] */
  ECX = (r32((uint32_t)(0x12482d88)));
  /* 12462aa6 mov edx, dword ptr [0x12483a88] */
  EDX = (r32((uint32_t)(0x12483a88)));
  /* 12462aac mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12462aae mov eax, dword ptr [0x12482d88] */
  EAX = (r32((uint32_t)(0x12482d88)));
  /* 12462ab3 mov ecx, dword ptr [0x12483a8c] */
  ECX = (r32((uint32_t)(0x12483a8c)));
  /* 12462ab9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12462abc mov edx, dword ptr [0x12482d88] */
  EDX = (r32((uint32_t)(0x12482d88)));
  /* 12462ac2 mov eax, dword ptr [0x12483a90] */
  EAX = (r32((uint32_t)(0x12483a90)));
  /* 12462ac7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12462aca mov ecx, dword ptr [0x12482d88] */
  ECX = (r32((uint32_t)(0x12482d88)));
  /* 12462ad0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12462ad2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12462ad4 mov byte ptr [0x12481ea8], al */
  w8((uint32_t)(0x12481ea8), (AL));
  /* 12462ad9 mov dword ptr [0x12481eac], 1 */
  w32((uint32_t)(0x12481eac), (0x1u));
  /* 12462ae3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12462ae5 jmp 0x12462c12 */
  goto L_12462c12;
L_12462aea:;
  /* 12462aea push 2 */
  push32((uint32_t)(0x2u));
  /* 12462aec mov ecx, dword ptr [0x12483a88] */
  ECX = (r32((uint32_t)(0x12483a88)));
  /* 12462af2 push ecx */
  push32((uint32_t)(ECX));
  /* 12462af3 call 0x124582b0 */
  push32(0x12462af8u); f_124582b0();
  /* 12462af8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462afb push 2 */
  push32((uint32_t)(0x2u));
  /* 12462afd mov edx, dword ptr [0x12483a8c] */
  EDX = (r32((uint32_t)(0x12483a8c)));
  /* 12462b03 push edx */
  push32((uint32_t)(EDX));
  /* 12462b04 call 0x124582b0 */
  push32(0x12462b09u); f_124582b0();
  /* 12462b09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462b0c push 2 */
  push32((uint32_t)(0x2u));
  /* 12462b0e mov eax, dword ptr [0x12483a90] */
  EAX = (r32((uint32_t)(0x12483a90)));
  /* 12462b13 push eax */
  push32((uint32_t)(EAX));
  /* 12462b14 call 0x124582b0 */
  push32(0x12462b19u); f_124582b0();
  /* 12462b19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462b1c mov dword ptr [0x12483a88], 0 */
  w32((uint32_t)(0x12483a88), (0x0u));
  /* 12462b26 mov dword ptr [0x12483a8c], 0 */
  w32((uint32_t)(0x12483a8c), (0x0u));
  /* 12462b30 mov dword ptr [0x12483a90], 0 */
  w32((uint32_t)(0x12483a90), (0x0u));
  /* 12462b3a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12462b3f push 0x1247f7a4 */
  push32((uint32_t)(0x1247f7a4u));
  /* 12462b44 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462b46 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462b48 call 0x12457820 */
  push32(0x12462b4du); f_12457820();
  /* 12462b4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462b50 mov ecx, dword ptr [0x12482d88] */
  ECX = (r32((uint32_t)(0x12482d88)));
  /* 12462b56 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12462b58 mov edx, dword ptr [0x12482d88] */
  EDX = (r32((uint32_t)(0x12482d88)));
  /* 12462b5e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12462b61 jne 0x12462b6b */
  if (!C.zf) goto L_12462b6b;
  /* 12462b63 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12462b66 jmp 0x12462c12 */
  goto L_12462c12;
L_12462b6b:;
  /* 12462b6b push 0x1247f774 */
  push32((uint32_t)(0x1247f774u));
  /* 12462b70 mov eax, dword ptr [0x12482d88] */
  EAX = (r32((uint32_t)(0x12482d88)));
  /* 12462b75 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12462b77 push ecx */
  push32((uint32_t)(ECX));
  /* 12462b78 call 0x1245a7d0 */
  push32(0x12462b7du); f_1245a7d0();
  /* 12462b7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462b80 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12462b85 push 0x1247f7a4 */
  push32((uint32_t)(0x1247f7a4u));
  /* 12462b8a push 2 */
  push32((uint32_t)(0x2u));
  /* 12462b8c push 2 */
  push32((uint32_t)(0x2u));
  /* 12462b8e call 0x12457820 */
  push32(0x12462b93u); f_12457820();
  /* 12462b93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462b96 mov edx, dword ptr [0x12482d88] */
  EDX = (r32((uint32_t)(0x12482d88)));
  /* 12462b9c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12462b9f mov eax, dword ptr [0x12482d88] */
  EAX = (r32((uint32_t)(0x12482d88)));
  /* 12462ba4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12462ba8 jne 0x12462baf */
  if (!C.zf) goto L_12462baf;
  /* 12462baa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12462bad jmp 0x12462c12 */
  goto L_12462c12;
L_12462baf:;
  /* 12462baf mov ecx, dword ptr [0x12482d88] */
  ECX = (r32((uint32_t)(0x12482d88)));
  /* 12462bb5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12462bb8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12462bbb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12462bc0 push 0x1247f7a4 */
  push32((uint32_t)(0x1247f7a4u));
  /* 12462bc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462bc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462bc9 call 0x12457820 */
  push32(0x12462bceu); f_12457820();
  /* 12462bce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462bd1 mov ecx, dword ptr [0x12482d88] */
  ECX = (r32((uint32_t)(0x12482d88)));
  /* 12462bd7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12462bda mov edx, dword ptr [0x12482d88] */
  EDX = (r32((uint32_t)(0x12482d88)));
  /* 12462be0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12462be4 jne 0x12462beb */
  if (!C.zf) goto L_12462beb;
  /* 12462be6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12462be9 jmp 0x12462c12 */
  goto L_12462c12;
L_12462beb:;
  /* 12462beb mov eax, dword ptr [0x12482d88] */
  EAX = (r32((uint32_t)(0x12482d88)));
  /* 12462bf0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12462bf3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12462bf6 mov edx, dword ptr [0x12482d88] */
  EDX = (r32((uint32_t)(0x12482d88)));
  /* 12462bfc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12462bfe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12462c00 mov byte ptr [0x12481ea8], cl */
  w8((uint32_t)(0x12481ea8), (CL));
  /* 12462c06 mov dword ptr [0x12481eac], 1 */
  w32((uint32_t)(0x12481eac), (0x1u));
  /* 12462c10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12462c12:;
  /* 12462c12 mov esp, ebp */
  ESP = (EBP);
  /* 12462c14 pop ebp */
  EBP = (pop32());
  /* 12462c15 ret  */
  ESPCHK(0x12462970u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12462c20 (125 bytes, 49 insns) */
void f_12462c20(void) {
  FTRACE(0x12462c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12462c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12462c21 mov ebp, esp */
  EBP = (ESP);
  /* 12462c23 push ecx */
  push32((uint32_t)(ECX));
L_12462c24:;
  /* 12462c24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462c27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12462c2a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12462c2c je 0x12462c99 */
  if (C.zf) goto L_12462c99;
  /* 12462c2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462c31 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12462c34 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12462c37 jl 0x12462c5d */
  if ((C.sf!=C.of)) goto L_12462c5d;
  /* 12462c39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462c3c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12462c3f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12462c42 jg 0x12462c5d */
  if ((!C.zf&&C.sf==C.of)) goto L_12462c5d;
  /* 12462c44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462c47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12462c4a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12462c4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462c50 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12462c52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462c55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462c58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12462c5b jmp 0x12462c97 */
  goto L_12462c97;
L_12462c5d:;
  /* 12462c5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462c60 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12462c63 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12462c66 jne 0x12462c8e */
  if (!C.zf) goto L_12462c8e;
  /* 12462c68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462c6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12462c6e:;
  /* 12462c6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462c71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462c74 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12462c77 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12462c79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462c7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462c7f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12462c82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462c85 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12462c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12462c8a jne 0x12462c6e */
  if (!C.zf) goto L_12462c6e;
  /* 12462c8c jmp 0x12462c97 */
  goto L_12462c97;
L_12462c8e:;
  /* 12462c8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462c91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462c94 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12462c97:;
  /* 12462c97 jmp 0x12462c24 */
  goto L_12462c24;
L_12462c99:;
  /* 12462c99 mov esp, ebp */
  ESP = (EBP);
  /* 12462c9b pop ebp */
  EBP = (pop32());
  /* 12462c9c ret  */
  ESPCHK(0x12462c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ca0 @ 0x12462ca0 (304 bytes, 85 insns) */
void f_12462ca0(void) {
  FTRACE(0x12462ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12462ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12462ca1 mov ebp, esp */
  EBP = (ESP);
  /* 12462ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 12462ca4 cmp dword ptr [0x12483a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12462cab je 0x12462d6c */
  if (C.zf) goto L_12462d6c;
  /* 12462cb1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12462cb3 push 0x1247f7b0 */
  push32((uint32_t)(0x1247f7b0u));
  /* 12462cb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462cba push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12462cbc push 1 */
  push32((uint32_t)(0x1u));
  /* 12462cbe call 0x12457c30 */
  push32(0x12462cc3u); f_12457c30();
  /* 12462cc3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462cc6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12462cc9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12462ccd jne 0x12462cd9 */
  if (!C.zf) goto L_12462cd9;
  /* 12462ccf mov eax, 1 */
  EAX = (0x1u);
  /* 12462cd4 jmp 0x12462dcc */
  goto L_12462dcc;
L_12462cd9:;
  /* 12462cd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462cdc push eax */
  push32((uint32_t)(EAX));
  /* 12462cdd call 0x12462dd0 */
  push32(0x12462ce2u); f_12462dd0();
  /* 12462ce2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462ce5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12462ce7 je 0x12462d0d */
  if (C.zf) goto L_12462d0d;
  /* 12462ce9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462cec push ecx */
  push32((uint32_t)(ECX));
  /* 12462ced call 0x12463060 */
  push32(0x12462cf2u); f_12463060();
  /* 12462cf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462cf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12462cf7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462cfa push edx */
  push32((uint32_t)(EDX));
  /* 12462cfb call 0x124582b0 */
  push32(0x12462d00u); f_124582b0();
  /* 12462d00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462d03 mov eax, 1 */
  EAX = (0x1u);
  /* 12462d08 jmp 0x12462dcc */
  goto L_12462dcc;
L_12462d0d:;
  /* 12462d0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462d10 mov ecx, dword ptr [0x12482d88] */
  ECX = (r32((uint32_t)(0x12482d88)));
  /* 12462d16 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12462d18 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12462d1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462d1d mov ecx, dword ptr [0x12482d88] */
  ECX = (r32((uint32_t)(0x12482d88)));
  /* 12462d23 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12462d26 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12462d29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462d2c mov ecx, dword ptr [0x12482d88] */
  ECX = (r32((uint32_t)(0x12482d88)));
  /* 12462d32 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12462d35 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12462d38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462d3b mov dword ptr [0x12482d88], eax */
  w32((uint32_t)(0x12482d88), (EAX));
  /* 12462d40 mov ecx, dword ptr [0x12483a94] */
  ECX = (r32((uint32_t)(0x12483a94)));
  /* 12462d46 push ecx */
  push32((uint32_t)(ECX));
  /* 12462d47 call 0x12463060 */
  push32(0x12462d4cu); f_12463060();
  /* 12462d4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462d4f push 2 */
  push32((uint32_t)(0x2u));
  /* 12462d51 mov edx, dword ptr [0x12483a94] */
  EDX = (r32((uint32_t)(0x12483a94)));
  /* 12462d57 push edx */
  push32((uint32_t)(EDX));
  /* 12462d58 call 0x124582b0 */
  push32(0x12462d5du); f_124582b0();
  /* 12462d5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462d60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462d63 mov dword ptr [0x12483a94], eax */
  w32((uint32_t)(0x12483a94), (EAX));
  /* 12462d68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12462d6a jmp 0x12462dcc */
  goto L_12462dcc;
L_12462d6c:;
  /* 12462d6c mov ecx, dword ptr [0x12482d88] */
  ECX = (r32((uint32_t)(0x12482d88)));
  /* 12462d72 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12462d74 mov dword ptr [0x12482d58], edx */
  w32((uint32_t)(0x12482d58), (EDX));
  /* 12462d7a mov eax, dword ptr [0x12482d88] */
  EAX = (r32((uint32_t)(0x12482d88)));
  /* 12462d7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12462d82 mov dword ptr [0x12482d5c], ecx */
  w32((uint32_t)(0x12482d5c), (ECX));
  /* 12462d88 mov edx, dword ptr [0x12482d88] */
  EDX = (r32((uint32_t)(0x12482d88)));
  /* 12462d8e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12462d91 mov dword ptr [0x12482d60], eax */
  w32((uint32_t)(0x12482d60), (EAX));
  /* 12462d96 mov dword ptr [0x12482d88], 0x12482d58 */
  w32((uint32_t)(0x12482d88), (0x12482d58u));
  /* 12462da0 mov ecx, dword ptr [0x12483a94] */
  ECX = (r32((uint32_t)(0x12483a94)));
  /* 12462da6 push ecx */
  push32((uint32_t)(ECX));
  /* 12462da7 call 0x12463060 */
  push32(0x12462dacu); f_12463060();
  /* 12462dac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462daf push 2 */
  push32((uint32_t)(0x2u));
  /* 12462db1 mov edx, dword ptr [0x12483a94] */
  EDX = (r32((uint32_t)(0x12483a94)));
  /* 12462db7 push edx */
  push32((uint32_t)(EDX));
  /* 12462db8 call 0x124582b0 */
  push32(0x12462dbdu); f_124582b0();
  /* 12462dbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462dc0 mov dword ptr [0x12483a94], 0 */
  w32((uint32_t)(0x12483a94), (0x0u));
  /* 12462dca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12462dcc:;
  /* 12462dcc mov esp, ebp */
  ESP = (EBP);
  /* 12462dce pop ebp */
  EBP = (pop32());
  /* 12462dcf ret  */
  ESPCHK(0x12462ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012dd0 @ 0x12462dd0 (525 bytes, 200 insns) */
void f_12462dd0(void) {
  FTRACE(0x12462dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12462dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12462dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12462dd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12462dd6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12462ddd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12462ddf mov ax, word ptr [0x12483ab4] */
  AX = (r16((uint32_t)(0x12483ab4)));
  /* 12462de5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12462de8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12462dec jne 0x12462df6 */
  if (!C.zf) goto L_12462df6;
  /* 12462dee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12462df1 jmp 0x12462fd9 */
  goto L_12462fd9;
L_12462df6:;
  /* 12462df6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462df9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462dfc push ecx */
  push32((uint32_t)(ECX));
  /* 12462dfd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12462dff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462e02 push edx */
  push32((uint32_t)(EDX));
  /* 12462e03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462e05 call 0x124659e0 */
  push32(0x12462e0au); f_124659e0();
  /* 12462e0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462e0d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12462e10 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462e12 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12462e15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462e18 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462e1b push edx */
  push32((uint32_t)(EDX));
  /* 12462e1c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12462e1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462e21 push eax */
  push32((uint32_t)(EAX));
  /* 12462e22 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462e24 call 0x124659e0 */
  push32(0x12462e29u); f_124659e0();
  /* 12462e29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462e2c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12462e2f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462e31 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12462e34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462e37 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462e3a push edx */
  push32((uint32_t)(EDX));
  /* 12462e3b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12462e3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462e40 push eax */
  push32((uint32_t)(EAX));
  /* 12462e41 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462e43 call 0x124659e0 */
  push32(0x12462e48u); f_124659e0();
  /* 12462e48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462e4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12462e4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462e50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12462e53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462e56 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462e59 push edx */
  push32((uint32_t)(EDX));
  /* 12462e5a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12462e5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462e5f push eax */
  push32((uint32_t)(EAX));
  /* 12462e60 push 1 */
  push32((uint32_t)(0x1u));
  /* 12462e62 call 0x124659e0 */
  push32(0x12462e67u); f_124659e0();
  /* 12462e67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462e6a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12462e6d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462e6f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12462e72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462e75 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462e78 push edx */
  push32((uint32_t)(EDX));
  /* 12462e79 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12462e7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462e7e push eax */
  push32((uint32_t)(EAX));
  /* 12462e7f push 1 */
  push32((uint32_t)(0x1u));
  /* 12462e81 call 0x124659e0 */
  push32(0x12462e86u); f_124659e0();
  /* 12462e86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462e89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12462e8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462e8e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12462e91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462e94 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12462e97 push eax */
  push32((uint32_t)(EAX));
  /* 12462e98 call 0x12462fe0 */
  push32(0x12462e9du); f_12462fe0();
  /* 12462e9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462ea0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462ea3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462ea6 push ecx */
  push32((uint32_t)(ECX));
  /* 12462ea7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12462ea9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462eac push edx */
  push32((uint32_t)(EDX));
  /* 12462ead push 1 */
  push32((uint32_t)(0x1u));
  /* 12462eaf call 0x124659e0 */
  push32(0x12462eb4u); f_124659e0();
  /* 12462eb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462eb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12462eba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462ebc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12462ebf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462ec2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462ec5 push edx */
  push32((uint32_t)(EDX));
  /* 12462ec6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12462ec8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462ecb push eax */
  push32((uint32_t)(EAX));
  /* 12462ecc push 1 */
  push32((uint32_t)(0x1u));
  /* 12462ece call 0x124659e0 */
  push32(0x12462ed3u); f_124659e0();
  /* 12462ed3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462ed6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12462ed9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462edb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12462ede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462ee1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462ee4 push edx */
  push32((uint32_t)(EDX));
  /* 12462ee5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12462ee7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462eea push eax */
  push32((uint32_t)(EAX));
  /* 12462eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 12462eed call 0x124659e0 */
  push32(0x12462ef2u); f_124659e0();
  /* 12462ef2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462ef5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12462ef8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462efa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12462efd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462f00 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462f03 push edx */
  push32((uint32_t)(EDX));
  /* 12462f04 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12462f06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462f09 push eax */
  push32((uint32_t)(EAX));
  /* 12462f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12462f0c call 0x124659e0 */
  push32(0x12462f11u); f_124659e0();
  /* 12462f11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462f14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12462f17 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462f19 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12462f1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462f1f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462f22 push edx */
  push32((uint32_t)(EDX));
  /* 12462f23 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12462f25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462f28 push eax */
  push32((uint32_t)(EAX));
  /* 12462f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12462f2b call 0x124659e0 */
  push32(0x12462f30u); f_124659e0();
  /* 12462f30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462f33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12462f36 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462f38 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12462f3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462f3e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462f41 push edx */
  push32((uint32_t)(EDX));
  /* 12462f42 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12462f44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462f47 push eax */
  push32((uint32_t)(EAX));
  /* 12462f48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12462f4a call 0x124659e0 */
  push32(0x12462f4fu); f_124659e0();
  /* 12462f4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462f52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12462f55 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462f57 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12462f5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462f5d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462f60 push edx */
  push32((uint32_t)(EDX));
  /* 12462f61 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12462f63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462f66 push eax */
  push32((uint32_t)(EAX));
  /* 12462f67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12462f69 call 0x124659e0 */
  push32(0x12462f6eu); f_124659e0();
  /* 12462f6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462f71 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12462f74 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462f76 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12462f79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462f7c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462f7f push edx */
  push32((uint32_t)(EDX));
  /* 12462f80 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12462f82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462f85 push eax */
  push32((uint32_t)(EAX));
  /* 12462f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12462f88 call 0x124659e0 */
  push32(0x12462f8du); f_124659e0();
  /* 12462f8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462f90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12462f93 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462f95 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12462f98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462f9b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462f9e push edx */
  push32((uint32_t)(EDX));
  /* 12462f9f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12462fa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462fa4 push eax */
  push32((uint32_t)(EAX));
  /* 12462fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12462fa7 call 0x124659e0 */
  push32(0x12462facu); f_124659e0();
  /* 12462fac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462faf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12462fb2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462fb4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12462fb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462fba add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12462fbd push edx */
  push32((uint32_t)(EDX));
  /* 12462fbe push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12462fc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12462fc3 push eax */
  push32((uint32_t)(EAX));
  /* 12462fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12462fc6 call 0x124659e0 */
  push32(0x12462fcbu); f_124659e0();
  /* 12462fcb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12462fce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12462fd1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12462fd3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12462fd6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12462fd9:;
  /* 12462fd9 mov esp, ebp */
  ESP = (EBP);
  /* 12462fdb pop ebp */
  EBP = (pop32());
  /* 12462fdc ret  */
  ESPCHK(0x12462dd0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12462fe0 (125 bytes, 49 insns) */
void f_12462fe0(void) {
  FTRACE(0x12462fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12462fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12462fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12462fe3 push ecx */
  push32((uint32_t)(ECX));
L_12462fe4:;
  /* 12462fe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462fe7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12462fea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12462fec je 0x12463059 */
  if (C.zf) goto L_12463059;
  /* 12462fee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462ff1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12462ff4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12462ff7 jl 0x1246301d */
  if ((C.sf!=C.of)) goto L_1246301d;
  /* 12462ff9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12462ffc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12462fff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463002 jg 0x1246301d */
  if ((!C.zf&&C.sf==C.of)) goto L_1246301d;
  /* 12463004 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463007 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1246300a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1246300d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463010 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12463012 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463015 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12463018 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1246301b jmp 0x12463057 */
  goto L_12463057;
L_1246301d:;
  /* 1246301d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463020 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12463023 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463026 jne 0x1246304e */
  if (!C.zf) goto L_1246304e;
  /* 12463028 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246302b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1246302e:;
  /* 1246302e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12463031 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12463034 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12463037 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12463039 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246303c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246303f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12463042 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12463045 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12463048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1246304a jne 0x1246302e */
  if (!C.zf) goto L_1246302e;
  /* 1246304c jmp 0x12463057 */
  goto L_12463057;
L_1246304e:;
  /* 1246304e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463051 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12463054 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12463057:;
  /* 12463057 jmp 0x12462fe4 */
  goto L_12462fe4;
L_12463059:;
  /* 12463059 mov esp, ebp */
  ESP = (EBP);
  /* 1246305b pop ebp */
  EBP = (pop32());
  /* 1246305c ret  */
  ESPCHK(0x12462fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013060 @ 0x12463060 (147 bytes, 52 insns) */
void f_12463060(void) {
  FTRACE(0x12463060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12463060 push ebp */
  push32((uint32_t)(EBP));
  /* 12463061 mov ebp, esp */
  EBP = (ESP);
  /* 12463063 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463067 jne 0x1246306e */
  if (!C.zf) goto L_1246306e;
  /* 12463069 jmp 0x124630f1 */
  goto L_124630f1;
L_1246306e:;
  /* 1246306e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463071 cmp dword ptr [eax + 0xc], 0x12483af0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12483af0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463078 je 0x124630f1 */
  if (C.zf) goto L_124630f1;
  /* 1246307a push 2 */
  push32((uint32_t)(0x2u));
  /* 1246307c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246307f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12463082 push edx */
  push32((uint32_t)(EDX));
  /* 12463083 call 0x124582b0 */
  push32(0x12463088u); f_124582b0();
  /* 12463088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246308b push 2 */
  push32((uint32_t)(0x2u));
  /* 1246308d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463090 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12463093 push ecx */
  push32((uint32_t)(ECX));
  /* 12463094 call 0x124582b0 */
  push32(0x12463099u); f_124582b0();
  /* 12463099 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246309c push 2 */
  push32((uint32_t)(0x2u));
  /* 1246309e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124630a1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124630a4 push eax */
  push32((uint32_t)(EAX));
  /* 124630a5 call 0x124582b0 */
  push32(0x124630aau); f_124582b0();
  /* 124630aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124630ad push 2 */
  push32((uint32_t)(0x2u));
  /* 124630af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124630b2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 124630b5 push edx */
  push32((uint32_t)(EDX));
  /* 124630b6 call 0x124582b0 */
  push32(0x124630bbu); f_124582b0();
  /* 124630bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124630be push 2 */
  push32((uint32_t)(0x2u));
  /* 124630c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124630c3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 124630c6 push ecx */
  push32((uint32_t)(ECX));
  /* 124630c7 call 0x124582b0 */
  push32(0x124630ccu); f_124582b0();
  /* 124630cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124630cf push 2 */
  push32((uint32_t)(0x2u));
  /* 124630d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124630d4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 124630d7 push eax */
  push32((uint32_t)(EAX));
  /* 124630d8 call 0x124582b0 */
  push32(0x124630ddu); f_124582b0();
  /* 124630dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124630e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 124630e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124630e5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 124630e8 push edx */
  push32((uint32_t)(EDX));
  /* 124630e9 call 0x124582b0 */
  push32(0x124630eeu); f_124582b0();
  /* 124630ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124630f1:;
  /* 124630f1 pop ebp */
  EBP = (pop32());
  /* 124630f2 ret  */
  ESPCHK(0x12463060u, _esp0);
  ESP += 4; return;
}

/* FUN_10013100 @ 0x12463100 (928 bytes, 284 insns) */
void f_12463100(void) {
  FTRACE(0x12463100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12463100 push ebp */
  push32((uint32_t)(EBP));
  /* 12463101 mov ebp, esp */
  EBP = (ESP);
  /* 12463103 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12463106 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1246310d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12463114 cmp dword ptr [0x12483a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246311b je 0x12463451 */
  if (C.zf) goto L_12463451;
  /* 12463121 cmp dword ptr [0x12483a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463128 jne 0x12463150 */
  if (!C.zf) goto L_12463150;
  /* 1246312a push 0x12483a68 */
  push32((uint32_t)(0x12483a68u));
  /* 1246312f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12463134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12463136 mov ax, word ptr [0x12483aac] */
  AX = (r16((uint32_t)(0x12483aac)));
  /* 1246313c push eax */
  push32((uint32_t)(EAX));
  /* 1246313d push 0 */
  push32((uint32_t)(0x0u));
  /* 1246313f call 0x124659e0 */
  push32(0x12463144u); f_124659e0();
  /* 12463144 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463147 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463149 je 0x12463150 */
  if (C.zf) goto L_12463150;
  /* 1246314b jmp 0x12463412 */
  goto L_12463412;
L_12463150:;
  /* 12463150 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12463152 push 0x1247f7bc */
  push32((uint32_t)(0x1247f7bcu));
  /* 12463157 push 2 */
  push32((uint32_t)(0x2u));
  /* 12463159 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1246315e call 0x12457820 */
  push32(0x12463163u); f_12457820();
  /* 12463163 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463166 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12463169 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1246316b push 0x1247f7bc */
  push32((uint32_t)(0x1247f7bcu));
  /* 12463170 push 2 */
  push32((uint32_t)(0x2u));
  /* 12463172 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12463177 call 0x12457820 */
  push32(0x1246317cu); f_12457820();
  /* 1246317c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246317f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12463182 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12463184 push 0x1247f7bc */
  push32((uint32_t)(0x1247f7bcu));
  /* 12463189 push 2 */
  push32((uint32_t)(0x2u));
  /* 1246318b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12463190 call 0x12457820 */
  push32(0x12463195u); f_12457820();
  /* 12463195 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463198 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1246319b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1246319d push 0x1247f7bc */
  push32((uint32_t)(0x1247f7bcu));
  /* 124631a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 124631a4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 124631a9 call 0x12457820 */
  push32(0x124631aeu); f_12457820();
  /* 124631ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124631b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 124631b4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124631b8 je 0x124631cc */
  if (C.zf) goto L_124631cc;
  /* 124631ba cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124631be je 0x124631cc */
  if (C.zf) goto L_124631cc;
  /* 124631c0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124631c4 je 0x124631cc */
  if (C.zf) goto L_124631cc;
  /* 124631c6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124631ca jne 0x124631d1 */
  if (!C.zf) goto L_124631d1;
L_124631cc:;
  /* 124631cc jmp 0x12463412 */
  goto L_12463412;
L_124631d1:;
  /* 124631d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124631d4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 124631d7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 124631de jmp 0x124631e9 */
  goto L_124631e9;
L_124631e0:;
  /* 124631e0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 124631e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124631e6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_124631e9:;
  /* 124631e9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124631f0 jge 0x12463205 */
  if ((C.sf==C.of)) goto L_12463205;
  /* 124631f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124631f5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 124631f8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 124631fa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124631fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12463200 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12463203 jmp 0x124631e0 */
  goto L_124631e0;
L_12463205:;
  /* 12463205 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12463208 push eax */
  push32((uint32_t)(EAX));
  /* 12463209 mov ecx, dword ptr [0x12483a68] */
  ECX = (r32((uint32_t)(0x12483a68)));
  /* 1246320f push ecx */
  push32((uint32_t)(ECX));
  /* 12463210 call dword ptr [0x12486308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486308))), 0x12463216u);
  /* 12463216 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463218 jne 0x1246321f */
  if (!C.zf) goto L_1246321f;
  /* 1246321a jmp 0x12463412 */
  goto L_12463412;
L_1246321f:;
  /* 1246321f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463223 jbe 0x1246322a */
  if ((C.cf||C.zf)) goto L_1246322a;
  /* 12463225 jmp 0x12463412 */
  goto L_12463412;
L_1246322a:;
  /* 1246322a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1246322d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12463233 mov dword ptr [0x12481ea4], edx */
  w32((uint32_t)(0x12481ea4), (EDX));
  /* 12463239 cmp dword ptr [0x12481ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12481ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463240 jle 0x12463299 */
  if ((C.zf||C.sf!=C.of)) goto L_12463299;
  /* 12463242 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12463245 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12463248 jmp 0x12463253 */
  goto L_12463253;
L_1246324a:;
  /* 1246324a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1246324d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12463250 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12463253:;
  /* 12463253 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12463256 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12463258 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1246325a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1246325c je 0x12463299 */
  if (C.zf) goto L_12463299;
  /* 1246325e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12463261 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12463263 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12463266 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12463268 je 0x12463299 */
  if (C.zf) goto L_12463299;
  /* 1246326a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1246326d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1246326f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12463271 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12463274 jmp 0x1246327f */
  goto L_1246327f;
L_12463276:;
  /* 12463276 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12463279 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246327c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1246327f:;
  /* 1246327f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12463282 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12463284 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12463287 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246328a jg 0x12463297 */
  if ((!C.zf&&C.sf==C.of)) goto L_12463297;
  /* 1246328c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1246328f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12463292 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12463295 jmp 0x12463276 */
  goto L_12463276;
L_12463297:;
  /* 12463297 jmp 0x1246324a */
  goto L_1246324a;
L_12463299:;
  /* 12463299 push 0 */
  push32((uint32_t)(0x0u));
  /* 1246329b push 0 */
  push32((uint32_t)(0x0u));
  /* 1246329d push 0 */
  push32((uint32_t)(0x0u));
  /* 1246329f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124632a2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124632a5 push eax */
  push32((uint32_t)(EAX));
  /* 124632a6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 124632ab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124632ae push ecx */
  push32((uint32_t)(ECX));
  /* 124632af push 1 */
  push32((uint32_t)(0x1u));
  /* 124632b1 call 0x1245fa50 */
  push32(0x124632b6u); f_1245fa50();
  /* 124632b6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124632b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124632bb jne 0x124632c2 */
  if (!C.zf) goto L_124632c2;
  /* 124632bd jmp 0x12463412 */
  goto L_12463412;
L_124632c2:;
  /* 124632c2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124632c5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 124632ca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124632cd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 124632d0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 124632d7 jmp 0x124632e2 */
  goto L_124632e2;
L_124632d9:;
  /* 124632d9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124632dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124632df mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_124632e2:;
  /* 124632e2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124632e9 jge 0x12463300 */
  if ((C.sf==C.of)) goto L_12463300;
  /* 124632eb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124632ee mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 124632f2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 124632f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124632f8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124632fb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 124632fe jmp 0x124632d9 */
  goto L_124632d9;
L_12463300:;
  /* 12463300 push 0 */
  push32((uint32_t)(0x0u));
  /* 12463302 push 0 */
  push32((uint32_t)(0x0u));
  /* 12463304 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12463307 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246330a push edx */
  push32((uint32_t)(EDX));
  /* 1246330b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12463310 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12463313 push eax */
  push32((uint32_t)(EAX));
  /* 12463314 push 1 */
  push32((uint32_t)(0x1u));
  /* 12463316 call 0x12465c80 */
  push32(0x1246331bu); f_12465c80();
  /* 1246331b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246331e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463320 jne 0x12463327 */
  if (!C.zf) goto L_12463327;
  /* 12463322 jmp 0x12463412 */
  goto L_12463412;
L_12463327:;
  /* 12463327 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1246332a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1246332f cmp dword ptr [0x12481ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12481ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463336 jle 0x12463393 */
  if ((C.zf||C.sf!=C.of)) goto L_12463393;
  /* 12463338 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1246333b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1246333e jmp 0x12463349 */
  goto L_12463349;
L_12463340:;
  /* 12463340 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12463343 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12463346 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12463349:;
  /* 12463349 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1246334c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1246334e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12463350 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12463352 je 0x12463393 */
  if (C.zf) goto L_12463393;
  /* 12463354 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12463357 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12463359 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1246335c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1246335e je 0x12463393 */
  if (C.zf) goto L_12463393;
  /* 12463360 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12463363 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12463365 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12463367 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1246336a jmp 0x12463375 */
  goto L_12463375;
L_1246336c:;
  /* 1246336c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1246336f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12463372 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12463375:;
  /* 12463375 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12463378 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1246337a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1246337d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463380 jg 0x12463391 */
  if ((!C.zf&&C.sf==C.of)) goto L_12463391;
  /* 12463382 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12463385 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12463388 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1246338f jmp 0x1246336c */
  goto L_1246336c;
L_12463391:;
  /* 12463391 jmp 0x12463340 */
  goto L_12463340;
L_12463393:;
  /* 12463393 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12463396 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12463399 mov dword ptr [0x12481c98], eax */
  w32((uint32_t)(0x12481c98), (EAX));
  /* 1246339e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124633a1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124633a4 mov dword ptr [0x12481c9c], ecx */
  w32((uint32_t)(0x12481c9c), (ECX));
  /* 124633aa cmp dword ptr [0x12483a98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483a98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124633b1 je 0x124633c4 */
  if (C.zf) goto L_124633c4;
  /* 124633b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 124633b5 mov edx, dword ptr [0x12483a98] */
  EDX = (r32((uint32_t)(0x12483a98)));
  /* 124633bb push edx */
  push32((uint32_t)(EDX));
  /* 124633bc call 0x124582b0 */
  push32(0x124633c1u); f_124582b0();
  /* 124633c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124633c4:;
  /* 124633c4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124633c7 mov dword ptr [0x12483a98], eax */
  w32((uint32_t)(0x12483a98), (EAX));
  /* 124633cc cmp dword ptr [0x12483a9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483a9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124633d3 je 0x124633e6 */
  if (C.zf) goto L_124633e6;
  /* 124633d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 124633d7 mov ecx, dword ptr [0x12483a9c] */
  ECX = (r32((uint32_t)(0x12483a9c)));
  /* 124633dd push ecx */
  push32((uint32_t)(ECX));
  /* 124633de call 0x124582b0 */
  push32(0x124633e3u); f_124582b0();
  /* 124633e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124633e6:;
  /* 124633e6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124633e9 mov dword ptr [0x12483a9c], edx */
  w32((uint32_t)(0x12483a9c), (EDX));
  /* 124633ef push 2 */
  push32((uint32_t)(0x2u));
  /* 124633f1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124633f4 push eax */
  push32((uint32_t)(EAX));
  /* 124633f5 call 0x124582b0 */
  push32(0x124633fau); f_124582b0();
  /* 124633fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124633fd push 2 */
  push32((uint32_t)(0x2u));
  /* 124633ff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12463402 push ecx */
  push32((uint32_t)(ECX));
  /* 12463403 call 0x124582b0 */
  push32(0x12463408u); f_124582b0();
  /* 12463408 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246340b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1246340d jmp 0x1246349c */
  goto L_1246349c;
L_12463412:;
  /* 12463412 push 2 */
  push32((uint32_t)(0x2u));
  /* 12463414 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12463417 push edx */
  push32((uint32_t)(EDX));
  /* 12463418 call 0x124582b0 */
  push32(0x1246341du); f_124582b0();
  /* 1246341d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463420 push 2 */
  push32((uint32_t)(0x2u));
  /* 12463422 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12463425 push eax */
  push32((uint32_t)(EAX));
  /* 12463426 call 0x124582b0 */
  push32(0x1246342bu); f_124582b0();
  /* 1246342b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246342e push 2 */
  push32((uint32_t)(0x2u));
  /* 12463430 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12463433 push ecx */
  push32((uint32_t)(ECX));
  /* 12463434 call 0x124582b0 */
  push32(0x12463439u); f_124582b0();
  /* 12463439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246343c push 2 */
  push32((uint32_t)(0x2u));
  /* 1246343e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12463441 push edx */
  push32((uint32_t)(EDX));
  /* 12463442 call 0x124582b0 */
  push32(0x12463447u); f_124582b0();
  /* 12463447 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246344a mov eax, 1 */
  EAX = (0x1u);
  /* 1246344f jmp 0x1246349c */
  goto L_1246349c;
L_12463451:;
  /* 12463451 mov dword ptr [0x12481c98], 0x12481ca2 */
  w32((uint32_t)(0x12481c98), (0x12481ca2u));
  /* 1246345b mov dword ptr [0x12481c9c], 0x12481ca2 */
  w32((uint32_t)(0x12481c9c), (0x12481ca2u));
  /* 12463465 push 2 */
  push32((uint32_t)(0x2u));
  /* 12463467 mov eax, dword ptr [0x12483a98] */
  EAX = (r32((uint32_t)(0x12483a98)));
  /* 1246346c push eax */
  push32((uint32_t)(EAX));
  /* 1246346d call 0x124582b0 */
  push32(0x12463472u); f_124582b0();
  /* 12463472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463475 push 2 */
  push32((uint32_t)(0x2u));
  /* 12463477 mov ecx, dword ptr [0x12483a9c] */
  ECX = (r32((uint32_t)(0x12483a9c)));
  /* 1246347d push ecx */
  push32((uint32_t)(ECX));
  /* 1246347e call 0x124582b0 */
  push32(0x12463483u); f_124582b0();
  /* 12463483 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463486 mov dword ptr [0x12483a98], 0 */
  w32((uint32_t)(0x12483a98), (0x0u));
  /* 12463490 mov dword ptr [0x12483a9c], 0 */
  w32((uint32_t)(0x12483a9c), (0x0u));
  /* 1246349a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1246349c:;
  /* 1246349c mov esp, ebp */
  ESP = (EBP);
  /* 1246349e pop ebp */
  EBP = (pop32());
  /* 1246349f ret  */
  ESPCHK(0x12463100u, _esp0);
  ESP += 4; return;
}

/* FUN_100134a0 @ 0x124634a0 (7 bytes, 5 insns) */
void f_124634a0(void) {
  FTRACE(0x124634a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124634a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124634a1 mov ebp, esp */
  EBP = (ESP);
  /* 124634a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124634a5 pop ebp */
  EBP = (pop32());
  /* 124634a6 ret  */
  ESPCHK(0x124634a0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x124634b0 (129 bytes, 56 insns) */
void f_124634b0(void) {
  FTRACE(0x124634b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124634b0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 124634b4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 124634b8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 124634be jne 0x124634fc */
  if (!C.zf) goto L_124634fc;
L_124634c0:;
  /* 124634c0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124634c2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124634c4 jne 0x124634f4 */
  if (!C.zf) goto L_124634f4;
  /* 124634c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124634c8 je 0x124634f0 */
  if (C.zf) goto L_124634f0;
  /* 124634ca cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124634cd jne 0x124634f4 */
  if (!C.zf) goto L_124634f4;
  /* 124634cf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 124634d1 je 0x124634f0 */
  if (C.zf) goto L_124634f0;
  /* 124634d3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 124634d6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124634d9 jne 0x124634f4 */
  if (!C.zf) goto L_124634f4;
  /* 124634db or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124634dd je 0x124634f0 */
  if (C.zf) goto L_124634f0;
  /* 124634df cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124634e2 jne 0x124634f4 */
  if (!C.zf) goto L_124634f4;
  /* 124634e4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124634e7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124634ea or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 124634ec jne 0x124634c0 */
  if (!C.zf) goto L_124634c0;
  /* 124634ee mov edi, edi */
  EDI = (EDI);
L_124634f0:;
  /* 124634f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124634f2 ret  */
  ESPCHK(0x124634b0u, _esp0);
  ESP += 4; return;
  /* 124634f3 nop  */
  /* nop */
L_124634f4:;
  /* 124634f4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124634f6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124634f8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 124634f9 ret  */
  ESPCHK(0x124634b0u, _esp0);
  ESP += 4; return;
  /* 124634fa mov edi, edi */
  EDI = (EDI);
L_124634fc:;
  /* 124634fc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12463502 je 0x12463518 */
  if (C.zf) goto L_12463518;
  /* 12463504 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12463506 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12463507 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12463509 jne 0x124634f4 */
  if (!C.zf) goto L_124634f4;
  /* 1246350b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1246350c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1246350e je 0x124634f0 */
  if (C.zf) goto L_124634f0;
  /* 12463510 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12463516 je 0x124634c0 */
  if (C.zf) goto L_124634c0;
L_12463518:;
  /* 12463518 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1246351b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246351e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12463520 jne 0x124634f4 */
  if (!C.zf) goto L_124634f4;
  /* 12463522 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12463524 je 0x124634f0 */
  if (C.zf) goto L_124634f0;
  /* 12463526 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12463529 jne 0x124634f4 */
  if (!C.zf) goto L_124634f4;
  /* 1246352b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1246352d je 0x124634f0 */
  if (C.zf) goto L_124634f0;
  /* 1246352f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12463532 jmp 0x124634c0 */
  goto L_124634c0;
}

/* FUN_10013540 @ 0x12463540 (62 bytes, 35 insns) */
void f_12463540(void) {
  FTRACE(0x12463540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12463540 push ebp */
  push32((uint32_t)(EBP));
  /* 12463541 mov ebp, esp */
  EBP = (ESP);
  /* 12463543 push esi */
  push32((uint32_t)(ESI));
  /* 12463544 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12463546 push eax */
  push32((uint32_t)(EAX));
  /* 12463547 push eax */
  push32((uint32_t)(EAX));
  /* 12463548 push eax */
  push32((uint32_t)(EAX));
  /* 12463549 push eax */
  push32((uint32_t)(EAX));
  /* 1246354a push eax */
  push32((uint32_t)(EAX));
  /* 1246354b push eax */
  push32((uint32_t)(EAX));
  /* 1246354c push eax */
  push32((uint32_t)(EAX));
  /* 1246354d push eax */
  push32((uint32_t)(EAX));
  /* 1246354e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12463551 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12463554:;
  /* 12463554 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12463556 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12463558 je 0x12463561 */
  if (C.zf) goto L_12463561;
  /* 1246355a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1246355b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1246355b");
  /* 1246355f jmp 0x12463554 */
  goto L_12463554;
L_12463561:;
  /* 12463561 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12463564 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12463567 nop  */
  /* nop */
L_12463568:;
  /* 12463568 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12463569 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1246356b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1246356d je 0x12463576 */
  if (C.zf) goto L_12463576;
  /* 1246356f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12463570 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12463570");
  /* 12463574 jae 0x12463568 */
  if (!C.cf) goto L_12463568;
L_12463576:;
  /* 12463576 mov eax, ecx */
  EAX = (ECX);
  /* 12463578 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246357b pop esi */
  ESI = (pop32());
  /* 1246357c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1246357d ret  */
  ESPCHK(0x12463540u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12463580 (56 bytes, 31 insns) */
void f_12463580(void) {
  FTRACE(0x12463580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12463580 push ebp */
  push32((uint32_t)(EBP));
  /* 12463581 mov ebp, esp */
  EBP = (ESP);
  /* 12463583 push edi */
  push32((uint32_t)(EDI));
  /* 12463584 push esi */
  push32((uint32_t)(ESI));
  /* 12463585 push ebx */
  push32((uint32_t)(EBX));
  /* 12463586 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12463589 jecxz 0x124635b1 */
  x86_unimpl("jecxz @ 0x12463589");
  /* 1246358b mov ebx, ecx */
  EBX = (ECX);
  /* 1246358d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12463590 mov esi, edi */
  ESI = (EDI);
  /* 12463592 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12463594 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12463596 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12463598 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246359a mov edi, esi */
  EDI = (ESI);
  /* 1246359c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1246359f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 124635a1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 124635a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124635a6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124635a9 ja 0x124635af */
  if ((!C.cf&&!C.zf)) goto L_124635af;
  /* 124635ab je 0x124635b1 */
  if (C.zf) goto L_124635b1;
  /* 124635ad dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 124635ae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_124635af:;
  /* 124635af not ecx */
  ECX = (~(ECX));
L_124635b1:;
  /* 124635b1 mov eax, ecx */
  EAX = (ECX);
  /* 124635b3 pop ebx */
  EBX = (pop32());
  /* 124635b4 pop esi */
  ESI = (pop32());
  /* 124635b5 pop edi */
  EDI = (pop32());
  /* 124635b6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124635b7 ret  */
  ESPCHK(0x12463580u, _esp0);
  ESP += 4; return;
}

/* FUN_100135c0 @ 0x124635c0 (58 bytes, 32 insns) */
void f_124635c0(void) {
  FTRACE(0x124635c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124635c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124635c1 mov ebp, esp */
  EBP = (ESP);
  /* 124635c3 push esi */
  push32((uint32_t)(ESI));
  /* 124635c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124635c6 push eax */
  push32((uint32_t)(EAX));
  /* 124635c7 push eax */
  push32((uint32_t)(EAX));
  /* 124635c8 push eax */
  push32((uint32_t)(EAX));
  /* 124635c9 push eax */
  push32((uint32_t)(EAX));
  /* 124635ca push eax */
  push32((uint32_t)(EAX));
  /* 124635cb push eax */
  push32((uint32_t)(EAX));
  /* 124635cc push eax */
  push32((uint32_t)(EAX));
  /* 124635cd push eax */
  push32((uint32_t)(EAX));
  /* 124635ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124635d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124635d4:;
  /* 124635d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124635d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124635d8 je 0x124635e1 */
  if (C.zf) goto L_124635e1;
  /* 124635da inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 124635db bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x124635db");
  /* 124635df jmp 0x124635d4 */
  goto L_124635d4;
L_124635e1:;
  /* 124635e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_124635e4:;
  /* 124635e4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124635e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124635e8 je 0x124635f4 */
  if (C.zf) goto L_124635f4;
  /* 124635ea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 124635eb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x124635eb");
  /* 124635ef jae 0x124635e4 */
  if (!C.cf) goto L_124635e4;
  /* 124635f1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_124635f4:;
  /* 124635f4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124635f7 pop esi */
  ESI = (pop32());
  /* 124635f8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124635f9 ret  */
  ESPCHK(0x124635c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013600 @ 0x12463600 (512 bytes, 147 insns) */
void f_12463600(void) {
  FTRACE(0x12463600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12463600 push ebp */
  push32((uint32_t)(EBP));
  /* 12463601 mov ebp, esp */
  EBP = (ESP);
  /* 12463603 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12463606 cmp dword ptr [0x12483ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246360d jne 0x12463632 */
  if (!C.zf) goto L_12463632;
  /* 1246360f call 0x124640d0 */
  push32(0x12463614u); f_124640d0();
  /* 12463614 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463616 je 0x12463622 */
  if (C.zf) goto L_12463622;
  /* 12463618 mov eax, dword ptr [0x124862cc] */
  EAX = (r32((uint32_t)(0x124862cc)));
  /* 1246361d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12463620 jmp 0x12463629 */
  goto L_12463629;
L_12463622:;
  /* 12463622 mov dword ptr [ebp - 8], 0x12464120 */
  w32((uint32_t)(EBP + -0x8), (0x12464120u));
L_12463629:;
  /* 12463629 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1246362c mov dword ptr [0x12483ae4], ecx */
  w32((uint32_t)(0x12483ae4), (ECX));
L_12463632:;
  /* 12463632 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463636 jne 0x12463642 */
  if (!C.zf) goto L_12463642;
  /* 12463638 call 0x12463f20 */
  push32(0x1246363du); f_12463f20();
  /* 1246363d jmp 0x1246370e */
  goto L_1246370e;
L_12463642:;
  /* 12463642 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463645 mov dword ptr [0x12483ad4], edx */
  w32((uint32_t)(0x12483ad4), (EDX));
  /* 1246364b cmp dword ptr [0x12483ad4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483ad4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463652 je 0x12463674 */
  if (C.zf) goto L_12463674;
  /* 12463654 mov eax, dword ptr [0x12483ad4] */
  EAX = (r32((uint32_t)(0x12483ad4)));
  /* 12463659 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1246365c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1246365e je 0x12463674 */
  if (C.zf) goto L_12463674;
  /* 12463660 push 0x12483ad4 */
  push32((uint32_t)(0x12483ad4u));
  /* 12463665 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12463667 push 0x12482a90 */
  push32((uint32_t)(0x12482a90u));
  /* 1246366c call 0x12463800 */
  push32(0x12463671u); f_12463800();
  /* 12463671 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12463674:;
  /* 12463674 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463677 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246367a mov dword ptr [0x12483ad8], edx */
  w32((uint32_t)(0x12483ad8), (EDX));
  /* 12463680 cmp dword ptr [0x12483ad8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483ad8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463687 je 0x124636a9 */
  if (C.zf) goto L_124636a9;
  /* 12463689 mov eax, dword ptr [0x12483ad8] */
  EAX = (r32((uint32_t)(0x12483ad8)));
  /* 1246368e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12463691 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12463693 je 0x124636a9 */
  if (C.zf) goto L_124636a9;
  /* 12463695 push 0x12483ad8 */
  push32((uint32_t)(0x12483ad8u));
  /* 1246369a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1246369c push 0x124829d8 */
  push32((uint32_t)(0x124829d8u));
  /* 124636a1 call 0x12463800 */
  push32(0x124636a6u); f_12463800();
  /* 124636a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124636a9:;
  /* 124636a9 mov dword ptr [0x12483adc], 0 */
  w32((uint32_t)(0x12483adc), (0x0u));
  /* 124636b3 cmp dword ptr [0x12483ad4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483ad4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124636ba je 0x124636ed */
  if (C.zf) goto L_124636ed;
  /* 124636bc mov edx, dword ptr [0x12483ad4] */
  EDX = (r32((uint32_t)(0x12483ad4)));
  /* 124636c2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124636c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124636c7 je 0x124636ed */
  if (C.zf) goto L_124636ed;
  /* 124636c9 cmp dword ptr [0x12483ad8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483ad8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124636d0 je 0x124636e6 */
  if (C.zf) goto L_124636e6;
  /* 124636d2 mov ecx, dword ptr [0x12483ad8] */
  ECX = (r32((uint32_t)(0x12483ad8)));
  /* 124636d8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124636db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124636dd je 0x124636e6 */
  if (C.zf) goto L_124636e6;
  /* 124636df call 0x12463890 */
  push32(0x124636e4u); f_12463890();
  /* 124636e4 jmp 0x124636eb */
  goto L_124636eb;
L_124636e6:;
  /* 124636e6 call 0x12463c80 */
  push32(0x124636ebu); f_12463c80();
L_124636eb:;
  /* 124636eb jmp 0x1246370e */
  goto L_1246370e;
L_124636ed:;
  /* 124636ed cmp dword ptr [0x12483ad8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483ad8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124636f4 je 0x12463709 */
  if (C.zf) goto L_12463709;
  /* 124636f6 mov eax, dword ptr [0x12483ad8] */
  EAX = (r32((uint32_t)(0x12483ad8)));
  /* 124636fb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124636fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12463700 je 0x12463709 */
  if (C.zf) goto L_12463709;
  /* 12463702 call 0x12463e20 */
  push32(0x12463707u); f_12463e20();
  /* 12463707 jmp 0x1246370e */
  goto L_1246370e;
L_12463709:;
  /* 12463709 call 0x12463f20 */
  push32(0x1246370eu); f_12463f20();
L_1246370e:;
  /* 1246370e cmp dword ptr [0x12483adc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483adc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463715 jne 0x1246371e */
  if (!C.zf) goto L_1246371e;
  /* 12463717 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12463719 jmp 0x124637fc */
  goto L_124637fc;
L_1246371e:;
  /* 1246371e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463721 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12463727 push edx */
  push32((uint32_t)(EDX));
  /* 12463728 call 0x12463f50 */
  push32(0x1246372du); f_12463f50();
  /* 1246372d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463730 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12463733 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463737 je 0x1246374c */
  if (C.zf) goto L_1246374c;
  /* 12463739 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246373c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12463741 push eax */
  push32((uint32_t)(EAX));
  /* 12463742 call dword ptr [0x124862d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862d0))), 0x12463748u);
  /* 12463748 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1246374a jne 0x12463753 */
  if (!C.zf) goto L_12463753;
L_1246374c:;
  /* 1246374c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1246374e jmp 0x124637fc */
  goto L_124637fc;
L_12463753:;
  /* 12463753 push 1 */
  push32((uint32_t)(0x1u));
  /* 12463755 mov ecx, dword ptr [0x12483ac4] */
  ECX = (r32((uint32_t)(0x12483ac4)));
  /* 1246375b push ecx */
  push32((uint32_t)(ECX));
  /* 1246375c call dword ptr [0x124862d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862d4))), 0x12463762u);
  /* 12463762 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463764 jne 0x1246376d */
  if (!C.zf) goto L_1246376d;
  /* 12463766 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12463768 jmp 0x124637fc */
  goto L_124637fc;
L_1246376d:;
  /* 1246376d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463771 je 0x12463798 */
  if (C.zf) goto L_12463798;
  /* 12463773 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12463776 mov ax, word ptr [0x12483ac4] */
  AX = (r16((uint32_t)(0x12483ac4)));
  /* 1246377c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1246377f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12463782 mov dx, word ptr [0x12483ae0] */
  DX = (r16((uint32_t)(0x12483ae0)));
  /* 12463789 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1246378d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12463790 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12463794 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12463798:;
  /* 12463798 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246379c je 0x124637f7 */
  if (C.zf) goto L_124637f7;
  /* 1246379e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 124637a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124637a3 push edx */
  push32((uint32_t)(EDX));
  /* 124637a4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 124637a9 mov eax, dword ptr [0x12483ac4] */
  EAX = (r32((uint32_t)(0x12483ac4)));
  /* 124637ae push eax */
  push32((uint32_t)(EAX));
  /* 124637af call dword ptr [0x12483ae4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12483ae4))), 0x124637b5u);
  /* 124637b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124637b7 jne 0x124637bd */
  if (!C.zf) goto L_124637bd;
  /* 124637b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124637bb jmp 0x124637fc */
  goto L_124637fc;
L_124637bd:;
  /* 124637bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 124637bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124637c2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124637c5 push ecx */
  push32((uint32_t)(ECX));
  /* 124637c6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 124637cb mov edx, dword ptr [0x12483ae0] */
  EDX = (r32((uint32_t)(0x12483ae0)));
  /* 124637d1 push edx */
  push32((uint32_t)(EDX));
  /* 124637d2 call dword ptr [0x12483ae4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12483ae4))), 0x124637d8u);
  /* 124637d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124637da jne 0x124637e0 */
  if (!C.zf) goto L_124637e0;
  /* 124637dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124637de jmp 0x124637fc */
  goto L_124637fc;
L_124637e0:;
  /* 124637e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 124637e2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124637e5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124637ea push eax */
  push32((uint32_t)(EAX));
  /* 124637eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124637ee push ecx */
  push32((uint32_t)(ECX));
  /* 124637ef call 0x1245a360 */
  push32(0x124637f4u); f_1245a360();
  /* 124637f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124637f7:;
  /* 124637f7 mov eax, 1 */
  EAX = (0x1u);
L_124637fc:;
  /* 124637fc mov esp, ebp */
  ESP = (EBP);
  /* 124637fe pop ebp */
  EBP = (pop32());
  /* 124637ff ret  */
  ESPCHK(0x12463600u, _esp0);
  ESP += 4; return;
}

/* FUN_10013800 @ 0x12463800 (130 bytes, 47 insns) */
void f_12463800(void) {
  FTRACE(0x12463800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12463800 push ebp */
  push32((uint32_t)(EBP));
  /* 12463801 mov ebp, esp */
  EBP = (ESP);
  /* 12463803 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12463806 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1246380d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12463814:;
  /* 12463814 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12463817 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246381a jg 0x1246387e */
  if ((!C.zf&&C.sf==C.of)) goto L_1246387e;
  /* 1246381c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463820 je 0x1246387e */
  if (C.zf) goto L_1246387e;
  /* 12463822 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12463825 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12463828 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12463829 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1246382b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1246382d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12463830 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12463833 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463836 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12463839 push eax */
  push32((uint32_t)(EAX));
  /* 1246383a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246383d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1246383f push edx */
  push32((uint32_t)(EDX));
  /* 12463840 call 0x12465ef0 */
  push32(0x12463845u); f_12465ef0();
  /* 12463845 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463848 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1246384b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246384f jne 0x12463862 */
  if (!C.zf) goto L_12463862;
  /* 12463851 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12463854 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463857 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1246385b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246385e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12463860 jmp 0x1246387c */
  goto L_1246387c;
L_12463862:;
  /* 12463862 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463866 jge 0x12463873 */
  if ((C.sf==C.of)) goto L_12463873;
  /* 12463868 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246386b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1246386e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12463871 jmp 0x1246387c */
  goto L_1246387c;
L_12463873:;
  /* 12463873 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12463876 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12463879 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1246387c:;
  /* 1246387c jmp 0x12463814 */
  goto L_12463814;
L_1246387e:;
  /* 1246387e mov esp, ebp */
  ESP = (EBP);
  /* 12463880 pop ebp */
  EBP = (pop32());
  /* 12463881 ret  */
  ESPCHK(0x12463800u, _esp0);
  ESP += 4; return;
}

/* FUN_10013890 @ 0x12463890 (186 bytes, 50 insns) */
void f_12463890(void) {
  FTRACE(0x12463890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12463890 push ebp */
  push32((uint32_t)(EBP));
  /* 12463891 mov ebp, esp */
  EBP = (ESP);
  /* 12463893 push ecx */
  push32((uint32_t)(ECX));
  /* 12463894 mov eax, dword ptr [0x12483ad4] */
  EAX = (r32((uint32_t)(0x12483ad4)));
  /* 12463899 push eax */
  push32((uint32_t)(EAX));
  /* 1246389a call 0x1245a650 */
  push32(0x1246389fu); f_1245a650();
  /* 1246389f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124638a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124638a4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124638a7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 124638aa mov dword ptr [0x12483ad0], ecx */
  w32((uint32_t)(0x12483ad0), (ECX));
  /* 124638b0 mov edx, dword ptr [0x12483ad8] */
  EDX = (r32((uint32_t)(0x12483ad8)));
  /* 124638b6 push edx */
  push32((uint32_t)(EDX));
  /* 124638b7 call 0x1245a650 */
  push32(0x124638bcu); f_1245a650();
  /* 124638bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124638bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124638c1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124638c4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 124638c7 mov dword ptr [0x12483ac8], ecx */
  w32((uint32_t)(0x12483ac8), (ECX));
  /* 124638cd mov dword ptr [0x12483ac4], 0 */
  w32((uint32_t)(0x12483ac4), (0x0u));
  /* 124638d7 cmp dword ptr [0x12483ad0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483ad0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124638de je 0x124638e9 */
  if (C.zf) goto L_124638e9;
  /* 124638e0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 124638e7 jmp 0x124638fb */
  goto L_124638fb;
L_124638e9:;
  /* 124638e9 mov edx, dword ptr [0x12483ad4] */
  EDX = (r32((uint32_t)(0x12483ad4)));
  /* 124638ef push edx */
  push32((uint32_t)(EDX));
  /* 124638f0 call 0x12464330 */
  push32(0x124638f5u); f_12464330();
  /* 124638f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124638f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124638fb:;
  /* 124638fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124638fe mov dword ptr [0x12483acc], eax */
  w32((uint32_t)(0x12483acc), (EAX));
  /* 12463903 push 1 */
  push32((uint32_t)(0x1u));
  /* 12463905 push 0x12463950 */
  push32((uint32_t)(0x12463950u));
  /* 1246390a call dword ptr [0x124862c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862c8))), 0x12463910u);
  /* 12463910 mov ecx, dword ptr [0x12483adc] */
  ECX = (r32((uint32_t)(0x12483adc)));
  /* 12463916 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1246391c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1246391e je 0x1246393c */
  if (C.zf) goto L_1246393c;
  /* 12463920 mov edx, dword ptr [0x12483adc] */
  EDX = (r32((uint32_t)(0x12483adc)));
  /* 12463926 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1246392c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1246392e je 0x1246393c */
  if (C.zf) goto L_1246393c;
  /* 12463930 mov eax, dword ptr [0x12483adc] */
  EAX = (r32((uint32_t)(0x12483adc)));
  /* 12463935 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12463938 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1246393a jne 0x12463946 */
  if (!C.zf) goto L_12463946;
L_1246393c:;
  /* 1246393c mov dword ptr [0x12483adc], 0 */
  w32((uint32_t)(0x12483adc), (0x0u));
L_12463946:;
  /* 12463946 mov esp, ebp */
  ESP = (EBP);
  /* 12463948 pop ebp */
  EBP = (pop32());
  /* 12463949 ret  */
  ESPCHK(0x12463890u, _esp0);
  ESP += 4; return;
}

/* FUN_10013950 @ 0x12463950 (804 bytes, 220 insns) */
void f_12463950(void) {
  FTRACE(0x12463950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12463950 push ebp */
  push32((uint32_t)(EBP));
  /* 12463951 mov ebp, esp */
  EBP = (ESP);
  /* 12463953 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12463956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463959 push eax */
  push32((uint32_t)(EAX));
  /* 1246395a call 0x124642b0 */
  push32(0x1246395fu); f_124642b0();
  /* 1246395f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463962 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12463965 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12463967 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1246396a push ecx */
  push32((uint32_t)(ECX));
  /* 1246396b mov edx, dword ptr [0x12483ac8] */
  EDX = (r32((uint32_t)(0x12483ac8)));
  /* 12463971 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12463973 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12463975 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1246397b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12463981 push edx */
  push32((uint32_t)(EDX));
  /* 12463982 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463985 push eax */
  push32((uint32_t)(EAX));
  /* 12463986 call dword ptr [0x12483ae4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12483ae4))), 0x1246398cu);
  /* 1246398c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1246398e jne 0x124639a4 */
  if (!C.zf) goto L_124639a4;
  /* 12463990 mov dword ptr [0x12483adc], 0 */
  w32((uint32_t)(0x12483adc), (0x0u));
  /* 1246399a mov eax, 1 */
  EAX = (0x1u);
  /* 1246399f jmp 0x12463c6e */
  goto L_12463c6e;
L_124639a4:;
  /* 124639a4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 124639a7 push ecx */
  push32((uint32_t)(ECX));
  /* 124639a8 mov edx, dword ptr [0x12483ad8] */
  EDX = (r32((uint32_t)(0x12483ad8)));
  /* 124639ae push edx */
  push32((uint32_t)(EDX));
  /* 124639af call 0x12465ef0 */
  push32(0x124639b4u); f_12465ef0();
  /* 124639b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124639b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124639b9 jne 0x12463adf */
  if (!C.zf) goto L_12463adf;
  /* 124639bf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 124639c1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 124639c4 push eax */
  push32((uint32_t)(EAX));
  /* 124639c5 mov ecx, dword ptr [0x12483ad0] */
  ECX = (r32((uint32_t)(0x12483ad0)));
  /* 124639cb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 124639cd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124639cf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 124639d5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124639db push ecx */
  push32((uint32_t)(ECX));
  /* 124639dc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124639df push edx */
  push32((uint32_t)(EDX));
  /* 124639e0 call dword ptr [0x12483ae4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12483ae4))), 0x124639e6u);
  /* 124639e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124639e8 jne 0x124639fe */
  if (!C.zf) goto L_124639fe;
  /* 124639ea mov dword ptr [0x12483adc], 0 */
  w32((uint32_t)(0x12483adc), (0x0u));
  /* 124639f4 mov eax, 1 */
  EAX = (0x1u);
  /* 124639f9 jmp 0x12463c6e */
  goto L_12463c6e;
L_124639fe:;
  /* 124639fe lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12463a01 push eax */
  push32((uint32_t)(EAX));
  /* 12463a02 mov ecx, dword ptr [0x12483ad4] */
  ECX = (r32((uint32_t)(0x12483ad4)));
  /* 12463a08 push ecx */
  push32((uint32_t)(ECX));
  /* 12463a09 call 0x12465ef0 */
  push32(0x12463a0eu); f_12465ef0();
  /* 12463a0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463a11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463a13 jne 0x12463a40 */
  if (!C.zf) goto L_12463a40;
  /* 12463a15 mov edx, dword ptr [0x12483adc] */
  EDX = (r32((uint32_t)(0x12483adc)));
  /* 12463a1b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12463a21 mov dword ptr [0x12483adc], edx */
  w32((uint32_t)(0x12483adc), (EDX));
  /* 12463a27 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463a2a mov dword ptr [0x12483ae0], eax */
  w32((uint32_t)(0x12483ae0), (EAX));
  /* 12463a2f mov ecx, dword ptr [0x12483ae0] */
  ECX = (r32((uint32_t)(0x12483ae0)));
  /* 12463a35 mov dword ptr [0x12483ac4], ecx */
  w32((uint32_t)(0x12483ac4), (ECX));
  /* 12463a3b jmp 0x12463adf */
  goto L_12463adf;
L_12463a40:;
  /* 12463a40 mov edx, dword ptr [0x12483adc] */
  EDX = (r32((uint32_t)(0x12483adc)));
  /* 12463a46 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12463a49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12463a4b jne 0x12463adf */
  if (!C.zf) goto L_12463adf;
  /* 12463a51 cmp dword ptr [0x12483acc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483acc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463a58 je 0x12463aad */
  if (C.zf) goto L_12463aad;
  /* 12463a5a mov eax, dword ptr [0x12483acc] */
  EAX = (r32((uint32_t)(0x12483acc)));
  /* 12463a5f push eax */
  push32((uint32_t)(EAX));
  /* 12463a60 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12463a63 push ecx */
  push32((uint32_t)(ECX));
  /* 12463a64 mov edx, dword ptr [0x12483ad4] */
  EDX = (r32((uint32_t)(0x12483ad4)));
  /* 12463a6a push edx */
  push32((uint32_t)(EDX));
  /* 12463a6b call 0x12465fc0 */
  push32(0x12463a70u); f_12465fc0();
  /* 12463a70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463a73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463a75 jne 0x12463aad */
  if (!C.zf) goto L_12463aad;
  /* 12463a77 mov eax, dword ptr [0x12483adc] */
  EAX = (r32((uint32_t)(0x12483adc)));
  /* 12463a7c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12463a7e mov dword ptr [0x12483adc], eax */
  w32((uint32_t)(0x12483adc), (EAX));
  /* 12463a83 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463a86 mov dword ptr [0x12483ae0], ecx */
  w32((uint32_t)(0x12483ae0), (ECX));
  /* 12463a8c mov edx, dword ptr [0x12483ad4] */
  EDX = (r32((uint32_t)(0x12483ad4)));
  /* 12463a92 push edx */
  push32((uint32_t)(EDX));
  /* 12463a93 call 0x1245a650 */
  push32(0x12463a98u); f_1245a650();
  /* 12463a98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463a9b cmp eax, dword ptr [0x12483acc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12483acc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463aa1 jne 0x12463aab */
  if (!C.zf) goto L_12463aab;
  /* 12463aa3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463aa6 mov dword ptr [0x12483ac4], eax */
  w32((uint32_t)(0x12483ac4), (EAX));
L_12463aab:;
  /* 12463aab jmp 0x12463adf */
  goto L_12463adf;
L_12463aad:;
  /* 12463aad mov ecx, dword ptr [0x12483adc] */
  ECX = (r32((uint32_t)(0x12483adc)));
  /* 12463ab3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12463ab6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12463ab8 jne 0x12463adf */
  if (!C.zf) goto L_12463adf;
  /* 12463aba mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463abd push edx */
  push32((uint32_t)(EDX));
  /* 12463abe call 0x12463ff0 */
  push32(0x12463ac3u); f_12463ff0();
  /* 12463ac3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463ac6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463ac8 je 0x12463adf */
  if (C.zf) goto L_12463adf;
  /* 12463aca mov eax, dword ptr [0x12483adc] */
  EAX = (r32((uint32_t)(0x12483adc)));
  /* 12463acf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12463ad1 mov dword ptr [0x12483adc], eax */
  w32((uint32_t)(0x12483adc), (EAX));
  /* 12463ad6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463ad9 mov dword ptr [0x12483ae0], ecx */
  w32((uint32_t)(0x12483ae0), (ECX));
L_12463adf:;
  /* 12463adf mov edx, dword ptr [0x12483adc] */
  EDX = (r32((uint32_t)(0x12483adc)));
  /* 12463ae5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12463aeb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463af1 je 0x12463c61 */
  if (C.zf) goto L_12463c61;
  /* 12463af7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12463af9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12463afc push eax */
  push32((uint32_t)(EAX));
  /* 12463afd mov ecx, dword ptr [0x12483ad0] */
  ECX = (r32((uint32_t)(0x12483ad0)));
  /* 12463b03 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12463b05 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12463b07 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12463b0d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12463b13 push ecx */
  push32((uint32_t)(ECX));
  /* 12463b14 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463b17 push edx */
  push32((uint32_t)(EDX));
  /* 12463b18 call dword ptr [0x12483ae4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12483ae4))), 0x12463b1eu);
  /* 12463b1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463b20 jne 0x12463b36 */
  if (!C.zf) goto L_12463b36;
  /* 12463b22 mov dword ptr [0x12483adc], 0 */
  w32((uint32_t)(0x12483adc), (0x0u));
  /* 12463b2c mov eax, 1 */
  EAX = (0x1u);
  /* 12463b31 jmp 0x12463c6e */
  goto L_12463c6e;
L_12463b36:;
  /* 12463b36 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12463b39 push eax */
  push32((uint32_t)(EAX));
  /* 12463b3a mov ecx, dword ptr [0x12483ad4] */
  ECX = (r32((uint32_t)(0x12483ad4)));
  /* 12463b40 push ecx */
  push32((uint32_t)(ECX));
  /* 12463b41 call 0x12465ef0 */
  push32(0x12463b46u); f_12465ef0();
  /* 12463b46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463b49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463b4b jne 0x12463c00 */
  if (!C.zf) goto L_12463c00;
  /* 12463b51 mov edx, dword ptr [0x12483adc] */
  EDX = (r32((uint32_t)(0x12483adc)));
  /* 12463b57 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12463b5a mov dword ptr [0x12483adc], edx */
  w32((uint32_t)(0x12483adc), (EDX));
  /* 12463b60 cmp dword ptr [0x12483ad0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483ad0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463b67 je 0x12463b8a */
  if (C.zf) goto L_12463b8a;
  /* 12463b69 mov eax, dword ptr [0x12483adc] */
  EAX = (r32((uint32_t)(0x12483adc)));
  /* 12463b6e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12463b71 mov dword ptr [0x12483adc], eax */
  w32((uint32_t)(0x12483adc), (EAX));
  /* 12463b76 cmp dword ptr [0x12483ac4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483ac4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463b7d jne 0x12463b88 */
  if (!C.zf) goto L_12463b88;
  /* 12463b7f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463b82 mov dword ptr [0x12483ac4], ecx */
  w32((uint32_t)(0x12483ac4), (ECX));
L_12463b88:;
  /* 12463b88 jmp 0x12463bfe */
  goto L_12463bfe;
L_12463b8a:;
  /* 12463b8a cmp dword ptr [0x12483acc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483acc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463b91 je 0x12463bdf */
  if (C.zf) goto L_12463bdf;
  /* 12463b93 mov edx, dword ptr [0x12483ad4] */
  EDX = (r32((uint32_t)(0x12483ad4)));
  /* 12463b99 push edx */
  push32((uint32_t)(EDX));
  /* 12463b9a call 0x1245a650 */
  push32(0x12463b9fu); f_1245a650();
  /* 12463b9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463ba2 cmp eax, dword ptr [0x12483acc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12483acc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463ba8 jne 0x12463bdf */
  if (!C.zf) goto L_12463bdf;
  /* 12463baa push 1 */
  push32((uint32_t)(0x1u));
  /* 12463bac mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463baf push eax */
  push32((uint32_t)(EAX));
  /* 12463bb0 call 0x12464040 */
  push32(0x12463bb5u); f_12464040();
  /* 12463bb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463bb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463bba je 0x12463bdd */
  if (C.zf) goto L_12463bdd;
  /* 12463bbc mov ecx, dword ptr [0x12483adc] */
  ECX = (r32((uint32_t)(0x12483adc)));
  /* 12463bc2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12463bc5 mov dword ptr [0x12483adc], ecx */
  w32((uint32_t)(0x12483adc), (ECX));
  /* 12463bcb cmp dword ptr [0x12483ac4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483ac4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463bd2 jne 0x12463bdd */
  if (!C.zf) goto L_12463bdd;
  /* 12463bd4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463bd7 mov dword ptr [0x12483ac4], edx */
  w32((uint32_t)(0x12483ac4), (EDX));
L_12463bdd:;
  /* 12463bdd jmp 0x12463bfe */
  goto L_12463bfe;
L_12463bdf:;
  /* 12463bdf mov eax, dword ptr [0x12483adc] */
  EAX = (r32((uint32_t)(0x12483adc)));
  /* 12463be4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12463be7 mov dword ptr [0x12483adc], eax */
  w32((uint32_t)(0x12483adc), (EAX));
  /* 12463bec cmp dword ptr [0x12483ac4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483ac4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463bf3 jne 0x12463bfe */
  if (!C.zf) goto L_12463bfe;
  /* 12463bf5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463bf8 mov dword ptr [0x12483ac4], ecx */
  w32((uint32_t)(0x12483ac4), (ECX));
L_12463bfe:;
  /* 12463bfe jmp 0x12463c61 */
  goto L_12463c61;
L_12463c00:;
  /* 12463c00 cmp dword ptr [0x12483ad0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483ad0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463c07 jne 0x12463c61 */
  if (!C.zf) goto L_12463c61;
  /* 12463c09 cmp dword ptr [0x12483acc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483acc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463c10 je 0x12463c61 */
  if (C.zf) goto L_12463c61;
  /* 12463c12 mov edx, dword ptr [0x12483acc] */
  EDX = (r32((uint32_t)(0x12483acc)));
  /* 12463c18 push edx */
  push32((uint32_t)(EDX));
  /* 12463c19 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12463c1c push eax */
  push32((uint32_t)(EAX));
  /* 12463c1d mov ecx, dword ptr [0x12483ad4] */
  ECX = (r32((uint32_t)(0x12483ad4)));
  /* 12463c23 push ecx */
  push32((uint32_t)(ECX));
  /* 12463c24 call 0x12465fc0 */
  push32(0x12463c29u); f_12465fc0();
  /* 12463c29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463c2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463c2e jne 0x12463c61 */
  if (!C.zf) goto L_12463c61;
  /* 12463c30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12463c32 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463c35 push edx */
  push32((uint32_t)(EDX));
  /* 12463c36 call 0x12464040 */
  push32(0x12463c3bu); f_12464040();
  /* 12463c3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463c3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463c40 je 0x12463c61 */
  if (C.zf) goto L_12463c61;
  /* 12463c42 mov eax, dword ptr [0x12483adc] */
  EAX = (r32((uint32_t)(0x12483adc)));
  /* 12463c47 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12463c4a mov dword ptr [0x12483adc], eax */
  w32((uint32_t)(0x12483adc), (EAX));
  /* 12463c4f cmp dword ptr [0x12483ac4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483ac4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463c56 jne 0x12463c61 */
  if (!C.zf) goto L_12463c61;
  /* 12463c58 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463c5b mov dword ptr [0x12483ac4], ecx */
  w32((uint32_t)(0x12483ac4), (ECX));
L_12463c61:;
  /* 12463c61 mov eax, dword ptr [0x12483adc] */
  EAX = (r32((uint32_t)(0x12483adc)));
  /* 12463c66 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12463c69 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12463c6b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12463c6d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12463c6e:;
  /* 12463c6e mov esp, ebp */
  ESP = (EBP);
  /* 12463c70 pop ebp */
  EBP = (pop32());
  /* 12463c71 ret 4 */
  ESPCHK(0x12463950u, _esp0);
  ESP += 8; return;
}

/* FUN_10013c80 @ 0x12463c80 (116 bytes, 33 insns) */
void f_12463c80(void) {
  FTRACE(0x12463c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12463c80 push ebp */
  push32((uint32_t)(EBP));
  /* 12463c81 mov ebp, esp */
  EBP = (ESP);
  /* 12463c83 push ecx */
  push32((uint32_t)(ECX));
  /* 12463c84 mov eax, dword ptr [0x12483ad4] */
  EAX = (r32((uint32_t)(0x12483ad4)));
  /* 12463c89 push eax */
  push32((uint32_t)(EAX));
  /* 12463c8a call 0x1245a650 */
  push32(0x12463c8fu); f_1245a650();
  /* 12463c8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463c92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12463c94 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463c97 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12463c9a mov dword ptr [0x12483ad0], ecx */
  w32((uint32_t)(0x12483ad0), (ECX));
  /* 12463ca0 cmp dword ptr [0x12483ad0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483ad0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463ca7 je 0x12463cb2 */
  if (C.zf) goto L_12463cb2;
  /* 12463ca9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12463cb0 jmp 0x12463cc4 */
  goto L_12463cc4;
L_12463cb2:;
  /* 12463cb2 mov edx, dword ptr [0x12483ad4] */
  EDX = (r32((uint32_t)(0x12483ad4)));
  /* 12463cb8 push edx */
  push32((uint32_t)(EDX));
  /* 12463cb9 call 0x12464330 */
  push32(0x12463cbeu); f_12464330();
  /* 12463cbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463cc1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12463cc4:;
  /* 12463cc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12463cc7 mov dword ptr [0x12483acc], eax */
  w32((uint32_t)(0x12483acc), (EAX));
  /* 12463ccc push 1 */
  push32((uint32_t)(0x1u));
  /* 12463cce push 0x12463d00 */
  push32((uint32_t)(0x12463d00u));
  /* 12463cd3 call dword ptr [0x124862c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862c8))), 0x12463cd9u);
  /* 12463cd9 mov ecx, dword ptr [0x12483adc] */
  ECX = (r32((uint32_t)(0x12483adc)));
  /* 12463cdf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12463ce2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12463ce4 jne 0x12463cf0 */
  if (!C.zf) goto L_12463cf0;
  /* 12463ce6 mov dword ptr [0x12483adc], 0 */
  w32((uint32_t)(0x12483adc), (0x0u));
L_12463cf0:;
  /* 12463cf0 mov esp, ebp */
  ESP = (EBP);
  /* 12463cf2 pop ebp */
  EBP = (pop32());
  /* 12463cf3 ret  */
  ESPCHK(0x12463c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d00 @ 0x12463d00 (287 bytes, 86 insns) */
void f_12463d00(void) {
  FTRACE(0x12463d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12463d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12463d01 mov ebp, esp */
  EBP = (ESP);
  /* 12463d03 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12463d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463d09 push eax */
  push32((uint32_t)(EAX));
  /* 12463d0a call 0x124642b0 */
  push32(0x12463d0fu); f_124642b0();
  /* 12463d0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463d12 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12463d15 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12463d17 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12463d1a push ecx */
  push32((uint32_t)(ECX));
  /* 12463d1b mov edx, dword ptr [0x12483ad0] */
  EDX = (r32((uint32_t)(0x12483ad0)));
  /* 12463d21 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12463d23 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12463d25 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12463d2b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12463d31 push edx */
  push32((uint32_t)(EDX));
  /* 12463d32 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463d35 push eax */
  push32((uint32_t)(EAX));
  /* 12463d36 call dword ptr [0x12483ae4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12483ae4))), 0x12463d3cu);
  /* 12463d3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463d3e jne 0x12463d54 */
  if (!C.zf) goto L_12463d54;
  /* 12463d40 mov dword ptr [0x12483adc], 0 */
  w32((uint32_t)(0x12483adc), (0x0u));
  /* 12463d4a mov eax, 1 */
  EAX = (0x1u);
  /* 12463d4f jmp 0x12463e19 */
  goto L_12463e19;
L_12463d54:;
  /* 12463d54 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12463d57 push ecx */
  push32((uint32_t)(ECX));
  /* 12463d58 mov edx, dword ptr [0x12483ad4] */
  EDX = (r32((uint32_t)(0x12483ad4)));
  /* 12463d5e push edx */
  push32((uint32_t)(EDX));
  /* 12463d5f call 0x12465ef0 */
  push32(0x12463d64u); f_12465ef0();
  /* 12463d64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463d67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463d69 jne 0x12463da9 */
  if (!C.zf) goto L_12463da9;
  /* 12463d6b cmp dword ptr [0x12483ad0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483ad0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463d72 jne 0x12463d86 */
  if (!C.zf) goto L_12463d86;
  /* 12463d74 push 1 */
  push32((uint32_t)(0x1u));
  /* 12463d76 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463d79 push eax */
  push32((uint32_t)(EAX));
  /* 12463d7a call 0x12464040 */
  push32(0x12463d7fu); f_12464040();
  /* 12463d7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463d82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463d84 je 0x12463da7 */
  if (C.zf) goto L_12463da7;
L_12463d86:;
  /* 12463d86 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463d89 mov dword ptr [0x12483ae0], ecx */
  w32((uint32_t)(0x12483ae0), (ECX));
  /* 12463d8f mov edx, dword ptr [0x12483ae0] */
  EDX = (r32((uint32_t)(0x12483ae0)));
  /* 12463d95 mov dword ptr [0x12483ac4], edx */
  w32((uint32_t)(0x12483ac4), (EDX));
  /* 12463d9b mov eax, dword ptr [0x12483adc] */
  EAX = (r32((uint32_t)(0x12483adc)));
  /* 12463da0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12463da2 mov dword ptr [0x12483adc], eax */
  w32((uint32_t)(0x12483adc), (EAX));
L_12463da7:;
  /* 12463da7 jmp 0x12463e0c */
  goto L_12463e0c;
L_12463da9:;
  /* 12463da9 cmp dword ptr [0x12483ad0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483ad0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463db0 jne 0x12463e0c */
  if (!C.zf) goto L_12463e0c;
  /* 12463db2 cmp dword ptr [0x12483acc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483acc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463db9 je 0x12463e0c */
  if (C.zf) goto L_12463e0c;
  /* 12463dbb mov ecx, dword ptr [0x12483acc] */
  ECX = (r32((uint32_t)(0x12483acc)));
  /* 12463dc1 push ecx */
  push32((uint32_t)(ECX));
  /* 12463dc2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12463dc5 push edx */
  push32((uint32_t)(EDX));
  /* 12463dc6 mov eax, dword ptr [0x12483ad4] */
  EAX = (r32((uint32_t)(0x12483ad4)));
  /* 12463dcb push eax */
  push32((uint32_t)(EAX));
  /* 12463dcc call 0x12465fc0 */
  push32(0x12463dd1u); f_12465fc0();
  /* 12463dd1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463dd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463dd6 jne 0x12463e0c */
  if (!C.zf) goto L_12463e0c;
  /* 12463dd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12463dda mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463ddd push ecx */
  push32((uint32_t)(ECX));
  /* 12463dde call 0x12464040 */
  push32(0x12463de3u); f_12464040();
  /* 12463de3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463de6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463de8 je 0x12463e0c */
  if (C.zf) goto L_12463e0c;
  /* 12463dea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463ded mov dword ptr [0x12483ae0], edx */
  w32((uint32_t)(0x12483ae0), (EDX));
  /* 12463df3 mov eax, dword ptr [0x12483ae0] */
  EAX = (r32((uint32_t)(0x12483ae0)));
  /* 12463df8 mov dword ptr [0x12483ac4], eax */
  w32((uint32_t)(0x12483ac4), (EAX));
  /* 12463dfd mov ecx, dword ptr [0x12483adc] */
  ECX = (r32((uint32_t)(0x12483adc)));
  /* 12463e03 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12463e06 mov dword ptr [0x12483adc], ecx */
  w32((uint32_t)(0x12483adc), (ECX));
L_12463e0c:;
  /* 12463e0c mov eax, dword ptr [0x12483adc] */
  EAX = (r32((uint32_t)(0x12483adc)));
  /* 12463e11 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12463e14 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12463e16 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12463e18 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12463e19:;
  /* 12463e19 mov esp, ebp */
  ESP = (EBP);
  /* 12463e1b pop ebp */
  EBP = (pop32());
  /* 12463e1c ret 4 */
  ESPCHK(0x12463d00u, _esp0);
  ESP += 8; return;
}

/* FUN_10013e20 @ 0x12463e20 (69 bytes, 20 insns) */
void f_12463e20(void) {
  FTRACE(0x12463e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12463e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12463e21 mov ebp, esp */
  EBP = (ESP);
  /* 12463e23 mov eax, dword ptr [0x12483ad8] */
  EAX = (r32((uint32_t)(0x12483ad8)));
  /* 12463e28 push eax */
  push32((uint32_t)(EAX));
  /* 12463e29 call 0x1245a650 */
  push32(0x12463e2eu); f_1245a650();
  /* 12463e2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463e31 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12463e33 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463e36 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12463e39 mov dword ptr [0x12483ac8], ecx */
  w32((uint32_t)(0x12483ac8), (ECX));
  /* 12463e3f push 1 */
  push32((uint32_t)(0x1u));
  /* 12463e41 push 0x12463e70 */
  push32((uint32_t)(0x12463e70u));
  /* 12463e46 call dword ptr [0x124862c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862c8))), 0x12463e4cu);
  /* 12463e4c mov edx, dword ptr [0x12483adc] */
  EDX = (r32((uint32_t)(0x12483adc)));
  /* 12463e52 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12463e55 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12463e57 jne 0x12463e63 */
  if (!C.zf) goto L_12463e63;
  /* 12463e59 mov dword ptr [0x12483adc], 0 */
  w32((uint32_t)(0x12483adc), (0x0u));
L_12463e63:;
  /* 12463e63 pop ebp */
  EBP = (pop32());
  /* 12463e64 ret  */
  ESPCHK(0x12463e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e70 @ 0x12463e70 (172 bytes, 54 insns) */
void f_12463e70(void) {
  FTRACE(0x12463e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12463e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12463e71 mov ebp, esp */
  EBP = (ESP);
  /* 12463e73 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12463e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463e79 push eax */
  push32((uint32_t)(EAX));
  /* 12463e7a call 0x124642b0 */
  push32(0x12463e7fu); f_124642b0();
  /* 12463e7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463e82 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12463e85 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12463e87 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12463e8a push ecx */
  push32((uint32_t)(ECX));
  /* 12463e8b mov edx, dword ptr [0x12483ac8] */
  EDX = (r32((uint32_t)(0x12483ac8)));
  /* 12463e91 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12463e93 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12463e95 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12463e9b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12463ea1 push edx */
  push32((uint32_t)(EDX));
  /* 12463ea2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463ea5 push eax */
  push32((uint32_t)(EAX));
  /* 12463ea6 call dword ptr [0x12483ae4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12483ae4))), 0x12463eacu);
  /* 12463eac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463eae jne 0x12463ec1 */
  if (!C.zf) goto L_12463ec1;
  /* 12463eb0 mov dword ptr [0x12483adc], 0 */
  w32((uint32_t)(0x12483adc), (0x0u));
  /* 12463eba mov eax, 1 */
  EAX = (0x1u);
  /* 12463ebf jmp 0x12463f16 */
  goto L_12463f16;
L_12463ec1:;
  /* 12463ec1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12463ec4 push ecx */
  push32((uint32_t)(ECX));
  /* 12463ec5 mov edx, dword ptr [0x12483ad8] */
  EDX = (r32((uint32_t)(0x12483ad8)));
  /* 12463ecb push edx */
  push32((uint32_t)(EDX));
  /* 12463ecc call 0x12465ef0 */
  push32(0x12463ed1u); f_12465ef0();
  /* 12463ed1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463ed4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463ed6 jne 0x12463f09 */
  if (!C.zf) goto L_12463f09;
  /* 12463ed8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463edb push eax */
  push32((uint32_t)(EAX));
  /* 12463edc call 0x12463ff0 */
  push32(0x12463ee1u); f_12463ff0();
  /* 12463ee1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463ee4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463ee6 je 0x12463f09 */
  if (C.zf) goto L_12463f09;
  /* 12463ee8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12463eeb mov dword ptr [0x12483ae0], ecx */
  w32((uint32_t)(0x12483ae0), (ECX));
  /* 12463ef1 mov edx, dword ptr [0x12483ae0] */
  EDX = (r32((uint32_t)(0x12483ae0)));
  /* 12463ef7 mov dword ptr [0x12483ac4], edx */
  w32((uint32_t)(0x12483ac4), (EDX));
  /* 12463efd mov eax, dword ptr [0x12483adc] */
  EAX = (r32((uint32_t)(0x12483adc)));
  /* 12463f02 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12463f04 mov dword ptr [0x12483adc], eax */
  w32((uint32_t)(0x12483adc), (EAX));
L_12463f09:;
  /* 12463f09 mov eax, dword ptr [0x12483adc] */
  EAX = (r32((uint32_t)(0x12483adc)));
  /* 12463f0e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12463f11 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12463f13 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12463f15 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12463f16:;
  /* 12463f16 mov esp, ebp */
  ESP = (EBP);
  /* 12463f18 pop ebp */
  EBP = (pop32());
  /* 12463f19 ret 4 */
  ESPCHK(0x12463e70u, _esp0);
  ESP += 8; return;
}

/* FUN_10013f20 @ 0x12463f20 (43 bytes, 11 insns) */
void f_12463f20(void) {
  FTRACE(0x12463f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12463f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12463f21 mov ebp, esp */
  EBP = (ESP);
  /* 12463f23 mov eax, dword ptr [0x12483adc] */
  EAX = (r32((uint32_t)(0x12483adc)));
  /* 12463f28 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12463f2d mov dword ptr [0x12483adc], eax */
  w32((uint32_t)(0x12483adc), (EAX));
  /* 12463f32 call dword ptr [0x124862c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862c4))), 0x12463f38u);
  /* 12463f38 mov dword ptr [0x12483ae0], eax */
  w32((uint32_t)(0x12483ae0), (EAX));
  /* 12463f3d mov ecx, dword ptr [0x12483ae0] */
  ECX = (r32((uint32_t)(0x12483ae0)));
  /* 12463f43 mov dword ptr [0x12483ac4], ecx */
  w32((uint32_t)(0x12483ac4), (ECX));
  /* 12463f49 pop ebp */
  EBP = (pop32());
  /* 12463f4a ret  */
  ESPCHK(0x12463f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f50 @ 0x12463f50 (155 bytes, 57 insns) */
void f_12463f50(void) {
  FTRACE(0x12463f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12463f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12463f51 mov ebp, esp */
  EBP = (ESP);
  /* 12463f53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12463f56 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12463f5a je 0x12463f7b */
  if (C.zf) goto L_12463f7b;
  /* 12463f5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463f5f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12463f62 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12463f64 je 0x12463f7b */
  if (C.zf) goto L_12463f7b;
  /* 12463f66 push 0x1247fe4c */
  push32((uint32_t)(0x1247fe4cu));
  /* 12463f6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463f6e push edx */
  push32((uint32_t)(EDX));
  /* 12463f6f call 0x124634b0 */
  push32(0x12463f74u); f_124634b0();
  /* 12463f74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463f77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463f79 jne 0x12463fa3 */
  if (!C.zf) goto L_12463fa3;
L_12463f7b:;
  /* 12463f7b push 8 */
  push32((uint32_t)(0x8u));
  /* 12463f7d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12463f80 push eax */
  push32((uint32_t)(EAX));
  /* 12463f81 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12463f86 mov ecx, dword ptr [0x12483ae0] */
  ECX = (r32((uint32_t)(0x12483ae0)));
  /* 12463f8c push ecx */
  push32((uint32_t)(ECX));
  /* 12463f8d call dword ptr [0x12483ae4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12483ae4))), 0x12463f93u);
  /* 12463f93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463f95 jne 0x12463f9b */
  if (!C.zf) goto L_12463f9b;
  /* 12463f97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12463f99 jmp 0x12463fe7 */
  goto L_12463fe7;
L_12463f9b:;
  /* 12463f9b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12463f9e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12463fa1 jmp 0x12463fdb */
  goto L_12463fdb;
L_12463fa3:;
  /* 12463fa3 push 0x1247fe48 */
  push32((uint32_t)(0x1247fe48u));
  /* 12463fa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463fab push eax */
  push32((uint32_t)(EAX));
  /* 12463fac call 0x124634b0 */
  push32(0x12463fb1u); f_124634b0();
  /* 12463fb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12463fb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463fb6 jne 0x12463fdb */
  if (!C.zf) goto L_12463fdb;
  /* 12463fb8 push 8 */
  push32((uint32_t)(0x8u));
  /* 12463fba lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12463fbd push ecx */
  push32((uint32_t)(ECX));
  /* 12463fbe push 0xb */
  push32((uint32_t)(0xbu));
  /* 12463fc0 mov edx, dword ptr [0x12483ae0] */
  EDX = (r32((uint32_t)(0x12483ae0)));
  /* 12463fc6 push edx */
  push32((uint32_t)(EDX));
  /* 12463fc7 call dword ptr [0x12483ae4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12483ae4))), 0x12463fcdu);
  /* 12463fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12463fcf jne 0x12463fd5 */
  if (!C.zf) goto L_12463fd5;
  /* 12463fd1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12463fd3 jmp 0x12463fe7 */
  goto L_12463fe7;
L_12463fd5:;
  /* 12463fd5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12463fd8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12463fdb:;
  /* 12463fdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12463fde push ecx */
  push32((uint32_t)(ECX));
  /* 12463fdf call 0x124660d0 */
  push32(0x12463fe4u); f_124660d0();
  /* 12463fe4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12463fe7:;
  /* 12463fe7 mov esp, ebp */
  ESP = (EBP);
  /* 12463fe9 pop ebp */
  EBP = (pop32());
  /* 12463fea ret  */
  ESPCHK(0x12463f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ff0 @ 0x12463ff0 (79 bytes, 26 insns) */
void f_12463ff0(void) {
  FTRACE(0x12463ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12463ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12463ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12463ff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12463ff6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12463ffa mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12463ffe mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12464005 jmp 0x12464010 */
  goto L_12464010;
L_12464007:;
  /* 12464007 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1246400a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246400d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12464010:;
  /* 12464010 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464014 jae 0x12464036 */
  if (!C.cf) goto L_12464036;
  /* 12464016 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12464019 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1246401f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12464022 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12464024 mov cx, word ptr [eax*2 + 0x124829c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x124829c4)));
  /* 1246402c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246402e jne 0x12464034 */
  if (!C.zf) goto L_12464034;
  /* 12464030 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12464032 jmp 0x1246403b */
  goto L_1246403b;
L_12464034:;
  /* 12464034 jmp 0x12464007 */
  goto L_12464007;
L_12464036:;
  /* 12464036 mov eax, 1 */
  EAX = (0x1u);
L_1246403b:;
  /* 1246403b mov esp, ebp */
  ESP = (EBP);
  /* 1246403d pop ebp */
  EBP = (pop32());
  /* 1246403e ret  */
  ESPCHK(0x12463ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014040 @ 0x12464040 (135 bytes, 48 insns) */
void f_12464040(void) {
  FTRACE(0x12464040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12464040 push ebp */
  push32((uint32_t)(EBP));
  /* 12464041 mov ebp, esp */
  EBP = (ESP);
  /* 12464043 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12464046 push esi */
  push32((uint32_t)(ESI));
  /* 12464047 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246404a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1246404f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12464054 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12464059 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1246405c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12464061 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12464064 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12464066 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12464069 push ecx */
  push32((uint32_t)(ECX));
  /* 1246406a push 1 */
  push32((uint32_t)(0x1u));
  /* 1246406c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246406f push edx */
  push32((uint32_t)(EDX));
  /* 12464070 call dword ptr [0x12483ae4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12483ae4))), 0x12464076u);
  /* 12464076 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12464078 jne 0x1246407e */
  if (!C.zf) goto L_1246407e;
  /* 1246407a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1246407c jmp 0x124640c2 */
  goto L_124640c2;
L_1246407e:;
  /* 1246407e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12464081 push eax */
  push32((uint32_t)(EAX));
  /* 12464082 call 0x124642b0 */
  push32(0x12464087u); f_124642b0();
  /* 12464087 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246408a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246408d je 0x124640bd */
  if (C.zf) goto L_124640bd;
  /* 1246408f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464093 je 0x124640bd */
  if (C.zf) goto L_124640bd;
  /* 12464095 mov ecx, dword ptr [0x12483ad4] */
  ECX = (r32((uint32_t)(0x12483ad4)));
  /* 1246409b push ecx */
  push32((uint32_t)(ECX));
  /* 1246409c call 0x12464330 */
  push32(0x124640a1u); f_12464330();
  /* 124640a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124640a4 mov esi, eax */
  ESI = (EAX);
  /* 124640a6 mov edx, dword ptr [0x12483ad4] */
  EDX = (r32((uint32_t)(0x12483ad4)));
  /* 124640ac push edx */
  push32((uint32_t)(EDX));
  /* 124640ad call 0x1245a650 */
  push32(0x124640b2u); f_1245a650();
  /* 124640b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124640b5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124640b7 jne 0x124640bd */
  if (!C.zf) goto L_124640bd;
  /* 124640b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124640bb jmp 0x124640c2 */
  goto L_124640c2;
L_124640bd:;
  /* 124640bd mov eax, 1 */
  EAX = (0x1u);
L_124640c2:;
  /* 124640c2 pop esi */
  ESI = (pop32());
  /* 124640c3 mov esp, ebp */
  ESP = (EBP);
  /* 124640c5 pop ebp */
  EBP = (pop32());
  /* 124640c6 ret  */
  ESPCHK(0x12464040u, _esp0);
  ESP += 4; return;
}

/* FUN_100140d0 @ 0x124640d0 (77 bytes, 18 insns) */
void f_124640d0(void) {
  FTRACE(0x124640d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124640d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124640d1 mov ebp, esp */
  EBP = (ESP);
  /* 124640d3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124640d9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 124640e3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 124640e9 push eax */
  push32((uint32_t)(EAX));
  /* 124640ea call dword ptr [0x124862c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862c0))), 0x124640f0u);
  /* 124640f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124640f2 je 0x12464109 */
  if (C.zf) goto L_12464109;
  /* 124640f4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124640fb jne 0x12464109 */
  if (!C.zf) goto L_12464109;
  /* 124640fd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12464107 jmp 0x12464113 */
  goto L_12464113;
L_12464109:;
  /* 12464109 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12464113:;
  /* 12464113 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12464119 mov esp, ebp */
  ESP = (EBP);
  /* 1246411b pop ebp */
  EBP = (pop32());
  /* 1246411c ret  */
  ESPCHK(0x124640d0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12464120 (388 bytes, 118 insns) */
void f_12464120(void) {
  FTRACE(0x12464120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12464120 push ebp */
  push32((uint32_t)(EBP));
  /* 12464121 mov ebp, esp */
  EBP = (ESP);
  /* 12464123 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12464126 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1246412d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12464134 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1246413b:;
  /* 1246413b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1246413e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464141 jg 0x12464288 */
  if ((!C.zf&&C.sf==C.of)) goto L_12464288;
  /* 12464147 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1246414a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246414d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1246414e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12464150 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12464152 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12464155 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464158 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1246415b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246415e cmp edx, dword ptr [ecx + 0x12482520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12482520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464164 jne 0x1246425e */
  if (!C.zf) goto L_1246425e;
  /* 1246416a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1246416d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12464170 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464174 ja 0x12464197 */
  if ((!C.cf&&!C.zf)) goto L_12464197;
  /* 12464176 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246417a je 0x12464209 */
  if (C.zf) goto L_12464209;
  /* 12464180 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464184 je 0x124641b4 */
  if (C.zf) goto L_124641b4;
  /* 12464186 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246418a je 0x124641d6 */
  if (C.zf) goto L_124641d6;
  /* 1246418c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464190 je 0x124641f8 */
  if (C.zf) goto L_124641f8;
  /* 12464192 jmp 0x12464228 */
  goto L_12464228;
L_12464197:;
  /* 12464197 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246419e je 0x124641c5 */
  if (C.zf) goto L_124641c5;
  /* 124641a0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124641a7 je 0x124641e7 */
  if (C.zf) goto L_124641e7;
  /* 124641a9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124641b0 je 0x1246421a */
  if (C.zf) goto L_1246421a;
  /* 124641b2 jmp 0x12464228 */
  goto L_12464228;
L_124641b4:;
  /* 124641b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124641b7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124641ba add ecx, 0x12482524 */
  { uint32_t _a=(ECX),_b=(0x12482524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124641c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124641c3 jmp 0x12464228 */
  goto L_12464228;
L_124641c5:;
  /* 124641c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124641c8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124641cb mov eax, dword ptr [edx + 0x1248252c] */
  EAX = (r32((uint32_t)(EDX + 0x1248252c)));
  /* 124641d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124641d4 jmp 0x12464228 */
  goto L_12464228;
L_124641d6:;
  /* 124641d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124641d9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124641dc add ecx, 0x12482530 */
  { uint32_t _a=(ECX),_b=(0x12482530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124641e2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124641e5 jmp 0x12464228 */
  goto L_12464228;
L_124641e7:;
  /* 124641e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124641ea imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124641ed mov eax, dword ptr [edx + 0x12482534] */
  EAX = (r32((uint32_t)(EDX + 0x12482534)));
  /* 124641f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124641f6 jmp 0x12464228 */
  goto L_12464228;
L_124641f8:;
  /* 124641f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124641fb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124641fe add ecx, 0x12482538 */
  { uint32_t _a=(ECX),_b=(0x12482538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464204 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12464207 jmp 0x12464228 */
  goto L_12464228;
L_12464209:;
  /* 12464209 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246420c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1246420f add edx, 0x1248253c */
  { uint32_t _a=(EDX),_b=(0x1248253cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464215 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12464218 jmp 0x12464228 */
  goto L_12464228;
L_1246421a:;
  /* 1246421a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246421d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12464220 add eax, 0x12482544 */
  { uint32_t _a=(EAX),_b=(0x12482544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464225 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12464228:;
  /* 12464228 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246422c je 0x12464234 */
  if (C.zf) goto L_12464234;
  /* 1246422e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464232 jge 0x12464236 */
  if ((C.sf==C.of)) goto L_12464236;
L_12464234:;
  /* 12464234 jmp 0x12464288 */
  goto L_12464288;
L_12464236:;
  /* 12464236 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464239 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1246423c push ecx */
  push32((uint32_t)(ECX));
  /* 1246423d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12464240 push edx */
  push32((uint32_t)(EDX));
  /* 12464241 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464244 push eax */
  push32((uint32_t)(EAX));
  /* 12464245 call 0x1245b040 */
  push32(0x1246424au); f_1245b040();
  /* 1246424a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246424d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464250 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464253 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12464257 mov eax, 1 */
  EAX = (0x1u);
  /* 1246425c jmp 0x1246429e */
  goto L_1246429e;
L_1246425e:;
  /* 1246425e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464261 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12464264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464267 cmp eax, dword ptr [edx + 0x12482520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12482520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246426d jae 0x1246427a */
  if (!C.cf) goto L_1246427a;
  /* 1246426f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464272 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12464275 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12464278 jmp 0x12464283 */
  goto L_12464283;
L_1246427a:;
  /* 1246427a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246427d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464280 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12464283:;
  /* 12464283 jmp 0x1246413b */
  goto L_1246413b;
L_12464288:;
  /* 12464288 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1246428b push eax */
  push32((uint32_t)(EAX));
  /* 1246428c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246428f push ecx */
  push32((uint32_t)(ECX));
  /* 12464290 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464293 push edx */
  push32((uint32_t)(EDX));
  /* 12464294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464297 push eax */
  push32((uint32_t)(EAX));
  /* 12464298 call dword ptr [0x124862cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862cc))), 0x1246429eu);
L_1246429e:;
  /* 1246429e mov esp, ebp */
  ESP = (EBP);
  /* 124642a0 pop ebp */
  EBP = (pop32());
  /* 124642a1 ret 0x10 */
  ESPCHK(0x12464120u, _esp0);
  ESP += 20; return;
}

/* FUN_100142b0 @ 0x124642b0 (118 bytes, 42 insns) */
void f_124642b0(void) {
  FTRACE(0x124642b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124642b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124642b1 mov ebp, esp */
  EBP = (ESP);
  /* 124642b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124642b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_124642bd:;
  /* 124642bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124642c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124642c2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 124642c5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124642c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124642cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124642cf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124642d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124642d4 je 0x1246431f */
  if (C.zf) goto L_1246431f;
  /* 124642d6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124642da cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124642dd jl 0x124642f2 */
  if ((C.sf!=C.of)) goto L_124642f2;
  /* 124642df movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124642e3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124642e6 jg 0x124642f2 */
  if ((!C.zf&&C.sf==C.of)) goto L_124642f2;
  /* 124642e8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 124642eb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 124642ed mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 124642f0 jmp 0x1246430c */
  goto L_1246430c;
L_124642f2:;
  /* 124642f2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124642f6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124642f9 jl 0x1246430c */
  if ((C.sf!=C.of)) goto L_1246430c;
  /* 124642fb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124642ff cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464302 jg 0x1246430c */
  if ((!C.zf&&C.sf==C.of)) goto L_1246430c;
  /* 12464304 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12464307 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12464309 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1246430c:;
  /* 1246430c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246430f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12464312 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12464316 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1246431a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1246431d jmp 0x124642bd */
  goto L_124642bd;
L_1246431f:;
  /* 1246431f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12464322 mov esp, ebp */
  ESP = (EBP);
  /* 12464324 pop ebp */
  EBP = (pop32());
  /* 12464325 ret  */
  ESPCHK(0x124642b0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12464330 (101 bytes, 36 insns) */
void f_12464330(void) {
  FTRACE(0x12464330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12464330 push ebp */
  push32((uint32_t)(EBP));
  /* 12464331 mov ebp, esp */
  EBP = (ESP);
  /* 12464333 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12464336 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1246433d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464340 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12464342 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12464345 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464348 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246434b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1246434e:;
  /* 1246434e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12464352 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464355 jl 0x12464360 */
  if ((C.sf!=C.of)) goto L_12464360;
  /* 12464357 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1246435b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246435e jle 0x12464372 */
  if ((C.zf||C.sf!=C.of)) goto L_12464372;
L_12464360:;
  /* 12464360 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12464364 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464367 jl 0x1246438e */
  if ((C.sf!=C.of)) goto L_1246438e;
  /* 12464369 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1246436d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464370 jg 0x1246438e */
  if ((!C.zf&&C.sf==C.of)) goto L_1246438e;
L_12464372:;
  /* 12464372 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12464375 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464378 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1246437b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246437e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12464380 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12464383 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464386 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464389 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1246438c jmp 0x1246434e */
  goto L_1246434e;
L_1246438e:;
  /* 1246438e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12464391 mov esp, ebp */
  ESP = (EBP);
  /* 12464393 pop ebp */
  EBP = (pop32());
  /* 12464394 ret  */
  ESPCHK(0x12464330u, _esp0);
  ESP += 4; return;
}

/* FUN_100143a0 @ 0x124643a0 (122 bytes, 39 insns) */
void f_124643a0(void) {
  FTRACE(0x124643a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124643a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124643a1 mov ebp, esp */
  EBP = (ESP);
  /* 124643a3 push ecx */
  push32((uint32_t)(ECX));
  /* 124643a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124643a7 cmp eax, dword ptr [0x1248537c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1248537c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124643ad jae 0x124643d1 */
  if (!C.cf) goto L_124643d1;
  /* 124643af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124643b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124643b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124643b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124643bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124643be mov eax, dword ptr [ecx*4 + 0x12485240] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12485240)));
  /* 124643c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124643ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124643cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124643cf jne 0x124643ec */
  if (!C.zf) goto L_124643ec;
L_124643d1:;
  /* 124643d1 call 0x1245f6f0 */
  push32(0x124643d6u); f_1245f6f0();
  /* 124643d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124643dc call 0x1245f700 */
  push32(0x124643e1u); f_1245f700();
  /* 124643e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124643e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124643ea jmp 0x12464416 */
  goto L_12464416;
L_124643ec:;
  /* 124643ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124643ef push edx */
  push32((uint32_t)(EDX));
  /* 124643f0 call 0x12460f10 */
  push32(0x124643f5u); f_12460f10();
  /* 124643f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124643f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124643fb push eax */
  push32((uint32_t)(EAX));
  /* 124643fc call 0x12464420 */
  push32(0x12464401u); f_12464420();
  /* 12464401 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464404 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12464407 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246440a push ecx */
  push32((uint32_t)(ECX));
  /* 1246440b call 0x12460fa0 */
  push32(0x12464410u); f_12460fa0();
  /* 12464410 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464413 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12464416:;
  /* 12464416 mov esp, ebp */
  ESP = (EBP);
  /* 12464418 pop ebp */
  EBP = (pop32());
  /* 12464419 ret  */
  ESPCHK(0x124643a0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12464420 (170 bytes, 59 insns) */
void f_12464420(void) {
  FTRACE(0x12464420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12464420 push ebp */
  push32((uint32_t)(EBP));
  /* 12464421 mov ebp, esp */
  EBP = (ESP);
  /* 12464423 push ecx */
  push32((uint32_t)(ECX));
  /* 12464424 push esi */
  push32((uint32_t)(ESI));
  /* 12464425 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464428 push eax */
  push32((uint32_t)(EAX));
  /* 12464429 call 0x12460d90 */
  push32(0x1246442eu); f_12460d90();
  /* 1246442e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464431 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464434 je 0x12464473 */
  if (C.zf) goto L_12464473;
  /* 12464436 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246443a je 0x12464442 */
  if (C.zf) goto L_12464442;
  /* 1246443c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464440 jne 0x1246445c */
  if (!C.zf) goto L_1246445c;
L_12464442:;
  /* 12464442 push 1 */
  push32((uint32_t)(0x1u));
  /* 12464444 call 0x12460d90 */
  push32(0x12464449u); f_12460d90();
  /* 12464449 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246444c mov esi, eax */
  ESI = (EAX);
  /* 1246444e push 2 */
  push32((uint32_t)(0x2u));
  /* 12464450 call 0x12460d90 */
  push32(0x12464455u); f_12460d90();
  /* 12464455 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464458 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246445a je 0x12464473 */
  if (C.zf) goto L_12464473;
L_1246445c:;
  /* 1246445c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246445f push ecx */
  push32((uint32_t)(ECX));
  /* 12464460 call 0x12460d90 */
  push32(0x12464465u); f_12460d90();
  /* 12464465 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464468 push eax */
  push32((uint32_t)(EAX));
  /* 12464469 call dword ptr [0x124862bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862bc))), 0x1246446fu);
  /* 1246446f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12464471 je 0x1246447c */
  if (C.zf) goto L_1246447c;
L_12464473:;
  /* 12464473 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1246447a jmp 0x12464485 */
  goto L_12464485;
L_1246447c:;
  /* 1246447c call dword ptr [0x12486388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486388))), 0x12464482u);
  /* 12464482 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12464485:;
  /* 12464485 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464488 push edx */
  push32((uint32_t)(EDX));
  /* 12464489 call 0x12460cb0 */
  push32(0x1246448eu); f_12460cb0();
  /* 1246448e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464491 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464494 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12464497 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246449a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1246449d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124644a0 mov edx, dword ptr [eax*4 + 0x12485240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12485240)));
  /* 124644a7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 124644ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124644b0 je 0x124644c3 */
  if (C.zf) goto L_124644c3;
  /* 124644b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124644b5 push eax */
  push32((uint32_t)(EAX));
  /* 124644b6 call 0x1245f650 */
  push32(0x124644bbu); f_1245f650();
  /* 124644bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124644be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124644c1 jmp 0x124644c5 */
  goto L_124644c5;
L_124644c3:;
  /* 124644c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124644c5:;
  /* 124644c5 pop esi */
  ESI = (pop32());
  /* 124644c6 mov esp, ebp */
  ESP = (EBP);
  /* 124644c8 pop ebp */
  EBP = (pop32());
  /* 124644c9 ret  */
  ESPCHK(0x12464420u, _esp0);
  ESP += 4; return;
}

/* FUN_100144d0 @ 0x124644d0 (146 bytes, 52 insns) */
void f_124644d0(void) {
  FTRACE(0x124644d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124644d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124644d1 mov ebp, esp */
  EBP = (ESP);
  /* 124644d3 push ebx */
  push32((uint32_t)(EBX));
  /* 124644d4 push esi */
  push32((uint32_t)(ESI));
  /* 124644d5 push edi */
  push32((uint32_t)(EDI));
L_124644d6:;
  /* 124644d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124644da jne 0x124644fa */
  if (!C.zf) goto L_124644fa;
  /* 124644dc push 0x1247f788 */
  push32((uint32_t)(0x1247f788u));
  /* 124644e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124644e3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 124644e5 push 0x1247fe50 */
  push32((uint32_t)(0x1247fe50u));
  /* 124644ea push 2 */
  push32((uint32_t)(0x2u));
  /* 124644ec call 0x124568e0 */
  push32(0x124644f1u); f_124568e0();
  /* 124644f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124644f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124644f7 jne 0x124644fa */
  if (!C.zf) goto L_124644fa;
  /* 124644f9 int3  */
  x86_unimpl("int3 @ 0x124644f9");
L_124644fa:;
  /* 124644fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124644fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124644fe jne 0x124644d6 */
  if (!C.zf) goto L_124644d6;
  /* 12464500 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464503 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12464506 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1246450c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1246450e je 0x1246455d */
  if (C.zf) goto L_1246455d;
  /* 12464510 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464513 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12464516 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12464519 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1246451b je 0x1246455d */
  if (C.zf) goto L_1246455d;
  /* 1246451d push 2 */
  push32((uint32_t)(0x2u));
  /* 1246451f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464522 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12464525 push eax */
  push32((uint32_t)(EAX));
  /* 12464526 call 0x124582b0 */
  push32(0x1246452bu); f_124582b0();
  /* 1246452b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246452e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464531 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12464534 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1246453a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246453d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12464540 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464543 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12464549 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246454c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12464553 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464556 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1246455d:;
  /* 1246455d pop edi */
  EDI = (pop32());
  /* 1246455e pop esi */
  ESI = (pop32());
  /* 1246455f pop ebx */
  EBX = (pop32());
  /* 12464560 pop ebp */
  EBP = (pop32());
  /* 12464561 ret  */
  ESPCHK(0x124644d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014570 @ 0x12464570 (289 bytes, 97 insns) */
void f_12464570(void) {
  FTRACE(0x12464570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12464570 push ebp */
  push32((uint32_t)(EBP));
  /* 12464571 mov ebp, esp */
  EBP = (ESP);
  /* 12464573 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12464576 push esi */
  push32((uint32_t)(ESI));
  /* 12464577 mov eax, dword ptr [0x12482c98] */
  EAX = (r32((uint32_t)(0x12482c98)));
  /* 1246457c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1246457f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12464586 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1246458d jmp 0x12464598 */
  goto L_12464598;
L_1246458f:;
  /* 1246458f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12464592 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464595 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12464598:;
  /* 12464598 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246459c jae 0x124645d1 */
  if (!C.cf) goto L_124645d1;
  /* 1246459e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124645a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124645a4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 124645a7 push ecx */
  push32((uint32_t)(ECX));
  /* 124645a8 call 0x1245a650 */
  push32(0x124645adu); f_1245a650();
  /* 124645ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124645b0 mov esi, eax */
  ESI = (EAX);
  /* 124645b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124645b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124645b8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 124645bc push ecx */
  push32((uint32_t)(ECX));
  /* 124645bd call 0x1245a650 */
  push32(0x124645c2u); f_1245a650();
  /* 124645c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124645c5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124645c8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 124645cc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124645cf jmp 0x1246458f */
  goto L_1246458f;
L_124645d1:;
  /* 124645d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124645d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124645d7 push eax */
  push32((uint32_t)(EAX));
  /* 124645d8 call 0x12457800 */
  push32(0x124645ddu); f_12457800();
  /* 124645dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124645e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124645e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124645e7 je 0x12464689 */
  if (C.zf) goto L_12464689;
  /* 124645ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124645f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124645f3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124645fa jmp 0x12464605 */
  goto L_12464605;
L_124645fc:;
  /* 124645fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124645ff add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464602 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12464605:;
  /* 12464605 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464609 jae 0x1246467a */
  if (!C.cf) goto L_1246467a;
  /* 1246460b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1246460e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12464611 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464614 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464617 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1246461a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1246461d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464620 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12464623 push ecx */
  push32((uint32_t)(ECX));
  /* 12464624 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464627 push edx */
  push32((uint32_t)(EDX));
  /* 12464628 call 0x1245a7d0 */
  push32(0x1246462du); f_1245a7d0();
  /* 1246462d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464630 push eax */
  push32((uint32_t)(EAX));
  /* 12464631 call 0x1245a650 */
  push32(0x12464636u); f_1245a650();
  /* 12464636 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464639 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1246463c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246463e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12464641 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464644 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12464647 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1246464a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246464d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12464650 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12464653 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464656 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1246465a push eax */
  push32((uint32_t)(EAX));
  /* 1246465b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1246465e push ecx */
  push32((uint32_t)(ECX));
  /* 1246465f call 0x1245a7d0 */
  push32(0x12464664u); f_1245a7d0();
  /* 12464664 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464667 push eax */
  push32((uint32_t)(EAX));
  /* 12464668 call 0x1245a650 */
  push32(0x1246466du); f_1245a650();
  /* 1246466d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464670 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464673 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464675 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12464678 jmp 0x124645fc */
  goto L_124645fc;
L_1246467a:;
  /* 1246467a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1246467d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12464680 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464683 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464686 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12464689:;
  /* 12464689 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246468c pop esi */
  ESI = (pop32());
  /* 1246468d mov esp, ebp */
  ESP = (EBP);
  /* 1246468f pop ebp */
  EBP = (pop32());
  /* 12464690 ret  */
  ESPCHK(0x12464570u, _esp0);
  ESP += 4; return;
}

/* FUN_100146a0 @ 0x124646a0 (291 bytes, 97 insns) */
void f_124646a0(void) {
  FTRACE(0x124646a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124646a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124646a1 mov ebp, esp */
  EBP = (ESP);
  /* 124646a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124646a6 push esi */
  push32((uint32_t)(ESI));
  /* 124646a7 mov eax, dword ptr [0x12482c98] */
  EAX = (r32((uint32_t)(0x12482c98)));
  /* 124646ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124646af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124646b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124646bd jmp 0x124646c8 */
  goto L_124646c8;
L_124646bf:;
  /* 124646bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124646c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124646c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_124646c8:;
  /* 124646c8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124646cc jae 0x12464702 */
  if (!C.cf) goto L_12464702;
  /* 124646ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124646d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124646d4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 124646d8 push ecx */
  push32((uint32_t)(ECX));
  /* 124646d9 call 0x1245a650 */
  push32(0x124646deu); f_1245a650();
  /* 124646de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124646e1 mov esi, eax */
  ESI = (EAX);
  /* 124646e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124646e6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124646e9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 124646ed push ecx */
  push32((uint32_t)(ECX));
  /* 124646ee call 0x1245a650 */
  push32(0x124646f3u); f_1245a650();
  /* 124646f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124646f6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124646f9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 124646fd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12464700 jmp 0x124646bf */
  goto L_124646bf;
L_12464702:;
  /* 12464702 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12464705 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464708 push eax */
  push32((uint32_t)(EAX));
  /* 12464709 call 0x12457800 */
  push32(0x1246470eu); f_12457800();
  /* 1246470e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464711 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12464714 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464718 je 0x124647bb */
  if (C.zf) goto L_124647bb;
  /* 1246471e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12464721 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12464724 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1246472b jmp 0x12464736 */
  goto L_12464736;
L_1246472d:;
  /* 1246472d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12464730 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464733 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12464736:;
  /* 12464736 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246473a jae 0x124647ac */
  if (!C.cf) goto L_124647ac;
  /* 1246473c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1246473f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12464742 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464745 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464748 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1246474b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1246474e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464751 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12464755 push ecx */
  push32((uint32_t)(ECX));
  /* 12464756 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464759 push edx */
  push32((uint32_t)(EDX));
  /* 1246475a call 0x1245a7d0 */
  push32(0x1246475fu); f_1245a7d0();
  /* 1246475f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464762 push eax */
  push32((uint32_t)(EAX));
  /* 12464763 call 0x1245a650 */
  push32(0x12464768u); f_1245a650();
  /* 12464768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246476b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1246476e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464770 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12464773 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464776 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12464779 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1246477c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246477f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12464782 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12464785 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464788 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1246478c push eax */
  push32((uint32_t)(EAX));
  /* 1246478d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464790 push ecx */
  push32((uint32_t)(ECX));
  /* 12464791 call 0x1245a7d0 */
  push32(0x12464796u); f_1245a7d0();
  /* 12464796 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464799 push eax */
  push32((uint32_t)(EAX));
  /* 1246479a call 0x1245a650 */
  push32(0x1246479fu); f_1245a650();
  /* 1246479f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124647a2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124647a5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124647a7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124647aa jmp 0x1246472d */
  goto L_1246472d;
L_124647ac:;
  /* 124647ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124647af mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 124647b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124647b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124647b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_124647bb:;
  /* 124647bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124647be pop esi */
  ESI = (pop32());
  /* 124647bf mov esp, ebp */
  ESP = (EBP);
  /* 124647c1 pop ebp */
  EBP = (pop32());
  /* 124647c2 ret  */
  ESPCHK(0x124646a0u, _esp0);
  ESP += 4; return;
}

