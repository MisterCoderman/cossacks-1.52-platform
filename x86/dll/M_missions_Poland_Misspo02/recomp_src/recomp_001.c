#include "recomp.h"

/* FUN_10009fc0 @ 0x10839fc0 (116 bytes, 34 insns) */
void f_10839fc0(void) {
  FTRACE(0x10839fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10839fc1 mov ebp, esp */
  EBP = (ESP);
  /* 10839fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10839fc4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10839fcb push 9 */
  push32((uint32_t)(0x9u));
  /* 10839fcd call 0x108397e0 */
  push32(0x10839fd2u); f_108397e0();
  /* 10839fd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839fd5 call 0x1083b6d0 */
  push32(0x10839fdau); f_1083b6d0();
  /* 10839fda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10839fdc jge 0x10839fe5 */
  if ((C.sf==C.of)) goto L_10839fe5;
  /* 10839fde mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10839fe5:;
  /* 10839fe5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10839fe7 call 0x10839880 */
  push32(0x10839fecu); f_10839880();
  /* 10839fec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839fef push 0 */
  push32((uint32_t)(0x0u));
  /* 10839ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10839ff3 mov eax, dword ptr [0x10862f2c] */
  EAX = (r32((uint32_t)(0x10862f2c)));
  /* 10839ff8 push eax */
  push32((uint32_t)(EAX));
  /* 10839ff9 call dword ptr [0x1086437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086437c))), 0x10839fffu);
  /* 10839fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083a001 jne 0x1083a02d */
  if (!C.zf) goto L_1083a02d;
  /* 1083a003 call dword ptr [0x108643d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643d8))), 0x1083a009u);
  /* 1083a009 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a00c jne 0x1083a026 */
  if (!C.zf) goto L_1083a026;
  /* 1083a00e call 0x1083dcc0 */
  push32(0x1083a013u); f_1083dcc0();
  /* 1083a013 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1083a019 call 0x1083dcb0 */
  push32(0x1083a01eu); f_1083dcb0();
  /* 1083a01e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1083a024 jmp 0x1083a02d */
  goto L_1083a02d;
L_1083a026:;
  /* 1083a026 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1083a02d:;
  /* 1083a02d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083a030 mov esp, ebp */
  ESP = (EBP);
  /* 1083a032 pop ebp */
  EBP = (pop32());
  /* 1083a033 ret  */
  ESPCHK(0x10839fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a040 @ 0x1083a040 (10 bytes, 5 insns) */
void f_1083a040(void) {
  FTRACE(0x1083a040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083a040 push ebp */
  push32((uint32_t)(EBP));
  /* 1083a041 mov ebp, esp */
  EBP = (ESP);
  /* 1083a043 call 0x10839fc0 */
  push32(0x1083a048u); f_10839fc0();
  /* 1083a048 pop ebp */
  EBP = (pop32());
  /* 1083a049 ret  */
  ESPCHK(0x1083a040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a050 @ 0x1083a050 (10 bytes, 5 insns) */
void f_1083a050(void) {
  FTRACE(0x1083a050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083a050 push ebp */
  push32((uint32_t)(EBP));
  /* 1083a051 mov ebp, esp */
  EBP = (ESP);
  /* 1083a053 mov eax, dword ptr [0x1085fc94] */
  EAX = (r32((uint32_t)(0x1085fc94)));
  /* 1083a058 pop ebp */
  EBP = (pop32());
  /* 1083a059 ret  */
  ESPCHK(0x1083a050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a060 @ 0x1083a060 (31 bytes, 11 insns) */
void f_1083a060(void) {
  FTRACE(0x1083a060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083a060 push ebp */
  push32((uint32_t)(EBP));
  /* 1083a061 mov ebp, esp */
  EBP = (ESP);
  /* 1083a063 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a06a jbe 0x1083a070 */
  if ((C.cf||C.zf)) goto L_1083a070;
  /* 1083a06c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083a06e jmp 0x1083a07d */
  goto L_1083a07d;
L_1083a070:;
  /* 1083a070 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a073 mov dword ptr [0x1085fc94], eax */
  w32((uint32_t)(0x1085fc94), (EAX));
  /* 1083a078 mov eax, 1 */
  EAX = (0x1u);
L_1083a07d:;
  /* 1083a07d pop ebp */
  EBP = (pop32());
  /* 1083a07e ret  */
  ESPCHK(0x1083a060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a080 @ 0x1083a080 (89 bytes, 20 insns) */
void f_1083a080(void) {
  FTRACE(0x1083a080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083a080 push ebp */
  push32((uint32_t)(EBP));
  /* 1083a081 mov ebp, esp */
  EBP = (ESP);
  /* 1083a083 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1083a088 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083a08a mov eax, dword ptr [0x10862f2c] */
  EAX = (r32((uint32_t)(0x10862f2c)));
  /* 1083a08f push eax */
  push32((uint32_t)(EAX));
  /* 1083a090 call dword ptr [0x1086433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086433c))), 0x1083a096u);
  /* 1083a096 mov dword ptr [0x10862f28], eax */
  w32((uint32_t)(0x10862f28), (EAX));
  /* 1083a09b cmp dword ptr [0x10862f28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10862f28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a0a2 jne 0x1083a0a8 */
  if (!C.zf) goto L_1083a0a8;
  /* 1083a0a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083a0a6 jmp 0x1083a0d7 */
  goto L_1083a0d7;
L_1083a0a8:;
  /* 1083a0a8 mov ecx, dword ptr [0x10862f28] */
  ECX = (r32((uint32_t)(0x10862f28)));
  /* 1083a0ae mov dword ptr [0x10862f1c], ecx */
  w32((uint32_t)(0x10862f1c), (ECX));
  /* 1083a0b4 mov dword ptr [0x10862f20], 0 */
  w32((uint32_t)(0x10862f20), (0x0u));
  /* 1083a0be mov dword ptr [0x10862f24], 0 */
  w32((uint32_t)(0x10862f24), (0x0u));
  /* 1083a0c8 mov dword ptr [0x10862f08], 0x10 */
  w32((uint32_t)(0x10862f08), (0x10u));
  /* 1083a0d2 mov eax, 1 */
  EAX = (0x1u);
L_1083a0d7:;
  /* 1083a0d7 pop ebp */
  EBP = (pop32());
  /* 1083a0d8 ret  */
  ESPCHK(0x1083a080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0e0 @ 0x1083a0e0 (85 bytes, 29 insns) */
void f_1083a0e0(void) {
  FTRACE(0x1083a0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083a0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083a0e1 mov ebp, esp */
  EBP = (ESP);
  /* 1083a0e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a0e6 mov eax, dword ptr [0x10862f24] */
  EAX = (r32((uint32_t)(0x10862f24)));
  /* 1083a0eb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083a0ee mov ecx, dword ptr [0x10862f28] */
  ECX = (r32((uint32_t)(0x10862f28)));
  /* 1083a0f4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a0f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1083a0f9 mov edx, dword ptr [0x10862f28] */
  EDX = (r32((uint32_t)(0x10862f28)));
  /* 1083a0ff mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1083a102:;
  /* 1083a102 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083a105 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a108 jae 0x1083a12f */
  if (!C.cf) goto L_1083a12f;
  /* 1083a10a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083a10d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a110 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a113 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1083a116 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a11d jae 0x1083a124 */
  if (!C.cf) goto L_1083a124;
  /* 1083a11f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083a122 jmp 0x1083a131 */
  goto L_1083a131;
L_1083a124:;
  /* 1083a124 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083a127 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a12a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1083a12d jmp 0x1083a102 */
  goto L_1083a102;
L_1083a12f:;
  /* 1083a12f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1083a131:;
  /* 1083a131 mov esp, ebp */
  ESP = (EBP);
  /* 1083a133 pop ebp */
  EBP = (pop32());
  /* 1083a134 ret  */
  ESPCHK(0x1083a0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a140 @ 0x1083a140 (95 bytes, 33 insns) */
void f_1083a140(void) {
  FTRACE(0x1083a140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083a140 push ebp */
  push32((uint32_t)(EBP));
  /* 1083a141 mov ebp, esp */
  EBP = (ESP);
  /* 1083a143 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a146 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a149 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083a14c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a14f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1083a152 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083a155 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1083a158 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1083a15b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083a160 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083a163 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083a165 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a168 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1083a16b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1083a16d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083a16f jne 0x1083a191 */
  if (!C.zf) goto L_1083a191;
  /* 1083a171 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083a174 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1083a177 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083a179 jne 0x1083a191 */
  if (!C.zf) goto L_1083a191;
  /* 1083a17b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083a17e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1083a184 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083a186 je 0x1083a191 */
  if (C.zf) goto L_1083a191;
  /* 1083a188 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1083a18f jmp 0x1083a198 */
  goto L_1083a198;
L_1083a191:;
  /* 1083a191 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1083a198:;
  /* 1083a198 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083a19b mov esp, ebp */
  ESP = (EBP);
  /* 1083a19d pop ebp */
  EBP = (pop32());
  /* 1083a19e ret  */
  ESPCHK(0x1083a140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1a0 @ 0x1083a1a0 (1485 bytes, 453 insns) */
void f_1083a1a0(void) {
  FTRACE(0x1083a1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083a1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083a1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1083a1a3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a1a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a1a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1083a1ac mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1083a1af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a1b2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083a1b5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a1b8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1083a1bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083a1be shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1083a1c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1083a1c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083a1c7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083a1cd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a1d0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1083a1d7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1083a1da mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083a1dd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a1e0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1083a1e3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083a1e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1083a1e8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a1eb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1083a1ee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083a1f1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a1f4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1083a1f7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083a1fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1083a1fc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1083a1ff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083a202 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1083a205 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1083a208 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083a20b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1083a20e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083a210 jne 0x1083a338 */
  if (!C.zf) goto L_1083a338;
  /* 1083a216 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083a219 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1083a21c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a21f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1083a222 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a226 jbe 0x1083a22f */
  if ((C.cf||C.zf)) goto L_1083a22f;
  /* 1083a228 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1083a22f:;
  /* 1083a22f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083a232 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083a235 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1083a238 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a23b jne 0x1083a311 */
  if (!C.zf) goto L_1083a311;
  /* 1083a241 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a245 jae 0x1083a2a6 */
  if (!C.cf) goto L_1083a2a6;
  /* 1083a247 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083a24c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083a24f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083a251 not eax */
  EAX = (~(EAX));
  /* 1083a253 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083a256 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a259 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1083a25d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1083a25f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083a262 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a265 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1083a269 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a26c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a26f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1083a272 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1083a275 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a278 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a27b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1083a27e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a281 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a284 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1083a288 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083a28a jne 0x1083a2a4 */
  if (!C.zf) goto L_1083a2a4;
  /* 1083a28c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083a291 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083a294 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083a296 not eax */
  EAX = (~(EAX));
  /* 1083a298 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a29b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1083a29d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1083a29f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a2a2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1083a2a4:;
  /* 1083a2a4 jmp 0x1083a311 */
  goto L_1083a311;
L_1083a2a6:;
  /* 1083a2a6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083a2a9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a2ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083a2b1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083a2b3 not edx */
  EDX = (~(EDX));
  /* 1083a2b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083a2b8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a2bb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1083a2c2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1083a2c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083a2c7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a2ca mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1083a2d1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a2d4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a2d7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1083a2da sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1083a2dd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a2e0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a2e3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1083a2e6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a2e9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a2ec movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1083a2f0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083a2f2 jne 0x1083a311 */
  if (!C.zf) goto L_1083a311;
  /* 1083a2f4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083a2f7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a2fa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083a2ff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083a301 not edx */
  EDX = (~(EDX));
  /* 1083a303 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a306 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1083a309 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1083a30b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a30e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1083a311:;
  /* 1083a311 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083a314 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1083a317 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083a31a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1083a31d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1083a320 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083a323 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083a326 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083a329 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1083a32c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1083a32f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083a332 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a335 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1083a338:;
  /* 1083a338 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083a33b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1083a33e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a341 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1083a344 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a348 jbe 0x1083a351 */
  if ((C.cf||C.zf)) goto L_1083a351;
  /* 1083a34a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1083a351:;
  /* 1083a351 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083a354 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1083a357 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083a359 jne 0x1083a4b5 */
  if (!C.zf) goto L_1083a4b5;
  /* 1083a35f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083a362 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a365 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1083a368 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083a36b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1083a36e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a371 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1083a374 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a378 jbe 0x1083a381 */
  if ((C.cf||C.zf)) goto L_1083a381;
  /* 1083a37a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1083a381:;
  /* 1083a381 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083a384 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a387 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1083a38a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083a38d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1083a390 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a393 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1083a396 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a39a jbe 0x1083a3a3 */
  if ((C.cf||C.zf)) goto L_1083a3a3;
  /* 1083a39c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1083a3a3:;
  /* 1083a3a3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083a3a6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a3a9 je 0x1083a4af */
  if (C.zf) goto L_1083a4af;
  /* 1083a3af mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1083a3b2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1083a3b5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083a3b8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a3bb jne 0x1083a491 */
  if (!C.zf) goto L_1083a491;
  /* 1083a3c1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a3c5 jae 0x1083a426 */
  if (!C.cf) goto L_1083a426;
  /* 1083a3c7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083a3cc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083a3cf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083a3d1 not edx */
  EDX = (~(EDX));
  /* 1083a3d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083a3d6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a3d9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1083a3dd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1083a3df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083a3e2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a3e5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1083a3e9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a3ec add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a3ef mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1083a3f2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1083a3f5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a3f8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a3fb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1083a3fe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a401 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a404 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1083a408 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083a40a jne 0x1083a424 */
  if (!C.zf) goto L_1083a424;
  /* 1083a40c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083a411 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083a414 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083a416 not edx */
  EDX = (~(EDX));
  /* 1083a418 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a41b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1083a41d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1083a41f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a422 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1083a424:;
  /* 1083a424 jmp 0x1083a491 */
  goto L_1083a491;
L_1083a426:;
  /* 1083a426 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083a429 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a42c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083a431 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083a433 not eax */
  EAX = (~(EAX));
  /* 1083a435 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083a438 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a43b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1083a442 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1083a444 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083a447 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a44a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1083a451 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a454 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a457 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1083a45a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1083a45d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a460 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a463 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1083a466 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a469 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a46c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1083a470 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083a472 jne 0x1083a491 */
  if (!C.zf) goto L_1083a491;
  /* 1083a474 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083a477 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a47a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083a47f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083a481 not eax */
  EAX = (~(EAX));
  /* 1083a483 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a486 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083a489 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1083a48b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a48e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1083a491:;
  /* 1083a491 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1083a494 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1083a497 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1083a49a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1083a49d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1083a4a0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1083a4a3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1083a4a6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1083a4a9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1083a4ac mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1083a4af:;
  /* 1083a4af mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1083a4b2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1083a4b5:;
  /* 1083a4b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083a4b8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1083a4bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083a4bd jne 0x1083a4cb */
  if (!C.zf) goto L_1083a4cb;
  /* 1083a4bf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083a4c2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a4c5 je 0x1083a5db */
  if (C.zf) goto L_1083a5db;
L_1083a4cb:;
  /* 1083a4cb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083a4ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083a4d1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1083a4d4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1083a4d7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083a4da mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083a4dd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083a4e0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1083a4e3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083a4e6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083a4e9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1083a4ec mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083a4ef mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083a4f2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1083a4f5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083a4f8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083a4fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083a4fe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1083a501 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083a504 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083a507 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083a50a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a50d jne 0x1083a5db */
  if (!C.zf) goto L_1083a5db;
  /* 1083a513 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a517 jae 0x1083a574 */
  if (!C.cf) goto L_1083a574;
  /* 1083a519 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a51c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a51f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1083a523 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a526 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a529 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1083a52c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1083a52f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a532 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a535 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1083a538 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083a53a jne 0x1083a552 */
  if (!C.zf) goto L_1083a552;
  /* 1083a53c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083a541 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083a544 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083a546 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a549 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1083a54b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1083a54d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a550 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1083a552:;
  /* 1083a552 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083a557 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083a55a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083a55c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083a55f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a562 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1083a566 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1083a568 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083a56b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a56e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1083a572 jmp 0x1083a5db */
  goto L_1083a5db;
L_1083a574:;
  /* 1083a574 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a577 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a57a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1083a57e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a581 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a584 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1083a587 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1083a58a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a58d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a590 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1083a593 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083a595 jne 0x1083a5b2 */
  if (!C.zf) goto L_1083a5b2;
  /* 1083a597 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083a59a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a59d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083a5a2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083a5a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a5a7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1083a5aa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1083a5ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a5af mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1083a5b2:;
  /* 1083a5b2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083a5b5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a5b8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083a5bd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083a5bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083a5c2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a5c5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1083a5cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1083a5ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083a5d1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1083a5d4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1083a5db:;
  /* 1083a5db mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083a5de mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083a5e1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1083a5e3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083a5e6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a5e9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083a5ec mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1083a5ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083a5f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1083a5f4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a5f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083a5fa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1083a5fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083a5ff cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a602 jne 0x1083a769 */
  if (!C.zf) goto L_1083a769;
  /* 1083a608 cmp dword ptr [0x10862f20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10862f20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a60f je 0x1083a758 */
  if (C.zf) goto L_1083a758;
  /* 1083a615 mov eax, dword ptr [0x10862f18] */
  EAX = (r32((uint32_t)(0x10862f18)));
  /* 1083a61a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1083a61d mov ecx, dword ptr [0x10862f20] */
  ECX = (r32((uint32_t)(0x10862f20)));
  /* 1083a623 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1083a626 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a628 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1083a62b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1083a630 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1083a635 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a638 push eax */
  push32((uint32_t)(EAX));
  /* 1083a639 call dword ptr [0x10864358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864358))), 0x1083a63fu);
  /* 1083a63f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083a644 mov ecx, dword ptr [0x10862f18] */
  ECX = (r32((uint32_t)(0x10862f18)));
  /* 1083a64a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083a64c mov eax, dword ptr [0x10862f20] */
  EAX = (r32((uint32_t)(0x10862f20)));
  /* 1083a651 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1083a654 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1083a656 mov edx, dword ptr [0x10862f20] */
  EDX = (r32((uint32_t)(0x10862f20)));
  /* 1083a65c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1083a65f mov eax, dword ptr [0x10862f20] */
  EAX = (r32((uint32_t)(0x10862f20)));
  /* 1083a664 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1083a667 mov edx, dword ptr [0x10862f18] */
  EDX = (r32((uint32_t)(0x10862f18)));
  /* 1083a66d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1083a678 mov eax, dword ptr [0x10862f20] */
  EAX = (r32((uint32_t)(0x10862f20)));
  /* 1083a67d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1083a680 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1083a683 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1083a686 mov eax, dword ptr [0x10862f20] */
  EAX = (r32((uint32_t)(0x10862f20)));
  /* 1083a68b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1083a68e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1083a691 mov edx, dword ptr [0x10862f20] */
  EDX = (r32((uint32_t)(0x10862f20)));
  /* 1083a697 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1083a69a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1083a69e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083a6a0 jne 0x1083a6b6 */
  if (!C.zf) goto L_1083a6b6;
  /* 1083a6a2 mov edx, dword ptr [0x10862f20] */
  EDX = (r32((uint32_t)(0x10862f20)));
  /* 1083a6a8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1083a6ab and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1083a6ad mov ecx, dword ptr [0x10862f20] */
  ECX = (r32((uint32_t)(0x10862f20)));
  /* 1083a6b3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1083a6b6:;
  /* 1083a6b6 mov edx, dword ptr [0x10862f20] */
  EDX = (r32((uint32_t)(0x10862f20)));
  /* 1083a6bc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a6c0 jne 0x1083a758 */
  if (!C.zf) goto L_1083a758;
  /* 1083a6c6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1083a6cb push 0 */
  push32((uint32_t)(0x0u));
  /* 1083a6cd mov eax, dword ptr [0x10862f20] */
  EAX = (r32((uint32_t)(0x10862f20)));
  /* 1083a6d2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1083a6d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1083a6d6 call dword ptr [0x10864358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864358))), 0x1083a6dcu);
  /* 1083a6dc mov edx, dword ptr [0x10862f20] */
  EDX = (r32((uint32_t)(0x10862f20)));
  /* 1083a6e2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1083a6e5 push eax */
  push32((uint32_t)(EAX));
  /* 1083a6e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083a6e8 mov ecx, dword ptr [0x10862f2c] */
  ECX = (r32((uint32_t)(0x10862f2c)));
  /* 1083a6ee push ecx */
  push32((uint32_t)(ECX));
  /* 1083a6ef call dword ptr [0x10864368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864368))), 0x1083a6f5u);
  /* 1083a6f5 mov edx, dword ptr [0x10862f24] */
  EDX = (r32((uint32_t)(0x10862f24)));
  /* 1083a6fb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083a6fe mov eax, dword ptr [0x10862f28] */
  EAX = (r32((uint32_t)(0x10862f28)));
  /* 1083a703 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a705 mov ecx, dword ptr [0x10862f20] */
  ECX = (r32((uint32_t)(0x10862f20)));
  /* 1083a70b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a70e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a710 push eax */
  push32((uint32_t)(EAX));
  /* 1083a711 mov edx, dword ptr [0x10862f20] */
  EDX = (r32((uint32_t)(0x10862f20)));
  /* 1083a717 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a71a push edx */
  push32((uint32_t)(EDX));
  /* 1083a71b mov eax, dword ptr [0x10862f20] */
  EAX = (r32((uint32_t)(0x10862f20)));
  /* 1083a720 push eax */
  push32((uint32_t)(EAX));
  /* 1083a721 call 0x1083dcd0 */
  push32(0x1083a726u); f_1083dcd0();
  /* 1083a726 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a729 mov ecx, dword ptr [0x10862f24] */
  ECX = (r32((uint32_t)(0x10862f24)));
  /* 1083a72f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a732 mov dword ptr [0x10862f24], ecx */
  w32((uint32_t)(0x10862f24), (ECX));
  /* 1083a738 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a73b cmp edx, dword ptr [0x10862f20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10862f20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a741 jbe 0x1083a74c */
  if ((C.cf||C.zf)) goto L_1083a74c;
  /* 1083a743 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a746 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a749 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1083a74c:;
  /* 1083a74c mov ecx, dword ptr [0x10862f28] */
  ECX = (r32((uint32_t)(0x10862f28)));
  /* 1083a752 mov dword ptr [0x10862f1c], ecx */
  w32((uint32_t)(0x10862f1c), (ECX));
L_1083a758:;
  /* 1083a758 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a75b mov dword ptr [0x10862f20], edx */
  w32((uint32_t)(0x10862f20), (EDX));
  /* 1083a761 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083a764 mov dword ptr [0x10862f18], eax */
  w32((uint32_t)(0x10862f18), (EAX));
L_1083a769:;
  /* 1083a769 mov esp, ebp */
  ESP = (EBP);
  /* 1083a76b pop ebp */
  EBP = (pop32());
  /* 1083a76c ret  */
  ESPCHK(0x1083a1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a770 @ 0x1083a770 (1334 bytes, 427 insns) */
void f_1083a770(void) {
  FTRACE(0x1083a770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083a770 push ebp */
  push32((uint32_t)(EBP));
  /* 1083a771 mov ebp, esp */
  EBP = (ESP);
  /* 1083a773 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a776 push esi */
  push32((uint32_t)(ESI));
  /* 1083a777 mov eax, dword ptr [0x10862f24] */
  EAX = (r32((uint32_t)(0x10862f24)));
  /* 1083a77c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083a77f mov ecx, dword ptr [0x10862f28] */
  ECX = (r32((uint32_t)(0x10862f28)));
  /* 1083a785 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a787 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1083a78a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083a78d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a790 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1083a793 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1083a796 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083a799 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1083a79c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a79f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1083a7a2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a7a6 jge 0x1083a7bc */
  if ((C.sf==C.of)) goto L_1083a7bc;
  /* 1083a7a8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1083a7ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083a7ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083a7b0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1083a7b3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1083a7ba jmp 0x1083a7d1 */
  goto L_1083a7d1;
L_1083a7bc:;
  /* 1083a7bc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1083a7c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083a7c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a7c9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083a7cc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083a7ce mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1083a7d1:;
  /* 1083a7d1 mov ecx, dword ptr [0x10862f1c] */
  ECX = (r32((uint32_t)(0x10862f1c)));
  /* 1083a7d7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1083a7da:;
  /* 1083a7da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a7dd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a7e0 jae 0x1083a806 */
  if (!C.cf) goto L_1083a806;
  /* 1083a7e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a7e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083a7e8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1083a7ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a7ed mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1083a7f0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1083a7f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1083a7f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083a7f7 je 0x1083a7fb */
  if (C.zf) goto L_1083a7fb;
  /* 1083a7f9 jmp 0x1083a806 */
  goto L_1083a806;
L_1083a7fb:;
  /* 1083a7fb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a7fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a801 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1083a804 jmp 0x1083a7da */
  goto L_1083a7da;
L_1083a806:;
  /* 1083a806 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a809 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a80c jne 0x1083a8ed */
  if (!C.zf) goto L_1083a8ed;
  /* 1083a812 mov eax, dword ptr [0x10862f28] */
  EAX = (r32((uint32_t)(0x10862f28)));
  /* 1083a817 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1083a81a:;
  /* 1083a81a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a81d cmp ecx, dword ptr [0x10862f1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10862f1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a823 jae 0x1083a849 */
  if (!C.cf) goto L_1083a849;
  /* 1083a825 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a828 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083a82b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1083a82d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a830 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1083a833 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1083a836 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1083a838 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083a83a je 0x1083a83e */
  if (C.zf) goto L_1083a83e;
  /* 1083a83c jmp 0x1083a849 */
  goto L_1083a849;
L_1083a83e:;
  /* 1083a83e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a841 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a844 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1083a847 jmp 0x1083a81a */
  goto L_1083a81a;
L_1083a849:;
  /* 1083a849 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a84c cmp ecx, dword ptr [0x10862f1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10862f1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a852 jne 0x1083a8ed */
  if (!C.zf) goto L_1083a8ed;
L_1083a858:;
  /* 1083a858 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a85b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a85e jae 0x1083a876 */
  if (!C.cf) goto L_1083a876;
  /* 1083a860 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a863 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a867 je 0x1083a86b */
  if (C.zf) goto L_1083a86b;
  /* 1083a869 jmp 0x1083a876 */
  goto L_1083a876;
L_1083a86b:;
  /* 1083a86b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a86e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a871 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1083a874 jmp 0x1083a858 */
  goto L_1083a858;
L_1083a876:;
  /* 1083a876 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a879 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a87c jne 0x1083a8c7 */
  if (!C.zf) goto L_1083a8c7;
  /* 1083a87e mov eax, dword ptr [0x10862f28] */
  EAX = (r32((uint32_t)(0x10862f28)));
  /* 1083a883 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1083a886:;
  /* 1083a886 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a889 cmp ecx, dword ptr [0x10862f1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10862f1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a88f jae 0x1083a8a7 */
  if (!C.cf) goto L_1083a8a7;
  /* 1083a891 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a894 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a898 je 0x1083a89c */
  if (C.zf) goto L_1083a89c;
  /* 1083a89a jmp 0x1083a8a7 */
  goto L_1083a8a7;
L_1083a89c:;
  /* 1083a89c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a89f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a8a2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1083a8a5 jmp 0x1083a886 */
  goto L_1083a886;
L_1083a8a7:;
  /* 1083a8a7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a8aa cmp ecx, dword ptr [0x10862f1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10862f1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a8b0 jne 0x1083a8c7 */
  if (!C.zf) goto L_1083a8c7;
  /* 1083a8b2 call 0x1083acb0 */
  push32(0x1083a8b7u); f_1083acb0();
  /* 1083a8b7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1083a8ba cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a8be jne 0x1083a8c7 */
  if (!C.zf) goto L_1083a8c7;
  /* 1083a8c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083a8c2 jmp 0x1083aca1 */
  goto L_1083aca1;
L_1083a8c7:;
  /* 1083a8c7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a8ca push edx */
  push32((uint32_t)(EDX));
  /* 1083a8cb call 0x1083adc0 */
  push32(0x1083a8d0u); f_1083adc0();
  /* 1083a8d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a8d3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a8d6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1083a8d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1083a8db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a8de mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1083a8e1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a8e4 jne 0x1083a8ed */
  if (!C.zf) goto L_1083a8ed;
  /* 1083a8e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083a8e8 jmp 0x1083aca1 */
  goto L_1083aca1;
L_1083a8ed:;
  /* 1083a8ed mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a8f0 mov dword ptr [0x10862f1c], edx */
  w32((uint32_t)(0x10862f1c), (EDX));
  /* 1083a8f6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083a8f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1083a8fc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1083a8ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083a902 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1083a904 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1083a907 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a90b je 0x1083a930 */
  if (C.zf) goto L_1083a930;
  /* 1083a90d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083a910 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083a913 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083a916 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1083a91a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083a91d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083a920 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1083a923 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1083a92a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1083a92c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083a92e jne 0x1083a965 */
  if (!C.zf) goto L_1083a965;
L_1083a930:;
  /* 1083a930 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1083a937:;
  /* 1083a937 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083a93a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083a93d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083a940 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1083a944 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083a947 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083a94a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1083a94d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1083a954 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1083a956 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083a958 jne 0x1083a965 */
  if (!C.zf) goto L_1083a965;
  /* 1083a95a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083a95d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a960 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1083a963 jmp 0x1083a937 */
  goto L_1083a937;
L_1083a965:;
  /* 1083a965 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083a968 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083a96e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083a971 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1083a978 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1083a97b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1083a982 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083a985 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083a988 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083a98b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1083a98f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1083a992 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a996 jne 0x1083a9b2 */
  if (!C.zf) goto L_1083a9b2;
  /* 1083a998 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1083a99f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083a9a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083a9a5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1083a9a8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1083a9af mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1083a9b2:;
  /* 1083a9b2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a9b6 jl 0x1083a9cb */
  if ((C.sf!=C.of)) goto L_1083a9cb;
  /* 1083a9b8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083a9bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1083a9bd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1083a9c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083a9c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083a9c6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1083a9c9 jmp 0x1083a9b2 */
  goto L_1083a9b2;
L_1083a9cb:;
  /* 1083a9cb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083a9ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083a9d1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1083a9d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1083a9d8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083a9db mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1083a9dd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a9e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1083a9e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083a9e6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1083a9e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083a9ec mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1083a9ef cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083a9f3 jle 0x1083a9fc */
  if ((C.zf||C.sf!=C.of)) goto L_1083a9fc;
  /* 1083a9f5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1083a9fc:;
  /* 1083a9fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083a9ff cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083aa02 je 0x1083ac20 */
  if (C.zf) goto L_1083ac20;
  /* 1083aa08 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083aa0b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083aa0e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1083aa11 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083aa14 jne 0x1083aaea */
  if (!C.zf) goto L_1083aaea;
  /* 1083aa1a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083aa1e jge 0x1083aa7f */
  if ((C.sf==C.of)) goto L_1083aa7f;
  /* 1083aa20 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083aa25 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083aa28 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083aa2a not eax */
  EAX = (~(EAX));
  /* 1083aa2c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083aa2f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083aa32 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1083aa36 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1083aa38 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083aa3b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083aa3e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1083aa42 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083aa45 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083aa48 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1083aa4b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1083aa4e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083aa51 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083aa54 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1083aa57 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083aa5a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083aa5d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1083aa61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083aa63 jne 0x1083aa7d */
  if (!C.zf) goto L_1083aa7d;
  /* 1083aa65 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083aa6a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083aa6d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083aa6f not eax */
  EAX = (~(EAX));
  /* 1083aa71 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083aa74 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1083aa76 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1083aa78 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083aa7b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1083aa7d:;
  /* 1083aa7d jmp 0x1083aaea */
  goto L_1083aaea;
L_1083aa7f:;
  /* 1083aa7f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083aa82 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083aa85 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083aa8a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083aa8c not edx */
  EDX = (~(EDX));
  /* 1083aa8e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083aa91 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083aa94 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1083aa9b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1083aa9d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083aaa0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083aaa3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1083aaaa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083aaad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083aab0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1083aab3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1083aab6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083aab9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083aabc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1083aabf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083aac2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083aac5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1083aac9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083aacb jne 0x1083aaea */
  if (!C.zf) goto L_1083aaea;
  /* 1083aacd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083aad0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083aad3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083aad8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083aada not edx */
  EDX = (~(EDX));
  /* 1083aadc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083aadf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1083aae2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1083aae4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083aae7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1083aaea:;
  /* 1083aaea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083aaed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1083aaf0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083aaf3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1083aaf6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1083aaf9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083aafc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083aaff mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ab02 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1083ab05 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1083ab08 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ab0c je 0x1083ac20 */
  if (C.zf) goto L_1083ac20;
  /* 1083ab12 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083ab15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ab18 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1083ab1b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1083ab1e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ab21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083ab24 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1083ab27 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1083ab2a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ab2d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083ab30 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1083ab33 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083ab36 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ab39 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1083ab3c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ab3f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1083ab42 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ab45 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1083ab48 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ab4b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ab4e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1083ab51 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ab54 jne 0x1083ac20 */
  if (!C.zf) goto L_1083ac20;
  /* 1083ab5a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ab5e jge 0x1083abba */
  if ((C.sf==C.of)) goto L_1083abba;
  /* 1083ab60 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083ab63 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ab66 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1083ab6a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083ab6d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ab70 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1083ab73 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1083ab75 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083ab78 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ab7b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1083ab7e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083ab80 jne 0x1083ab98 */
  if (!C.zf) goto L_1083ab98;
  /* 1083ab82 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083ab87 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083ab8a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083ab8c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083ab8f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1083ab91 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1083ab93 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083ab96 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1083ab98:;
  /* 1083ab98 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083ab9d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083aba0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083aba2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083aba5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083aba8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1083abac or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1083abae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083abb1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083abb4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1083abb8 jmp 0x1083ac20 */
  goto L_1083ac20;
L_1083abba:;
  /* 1083abba mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083abbd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083abc0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1083abc4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083abc7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083abca mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1083abcd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1083abcf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083abd2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083abd5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1083abd8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083abda jne 0x1083abf7 */
  if (!C.zf) goto L_1083abf7;
  /* 1083abdc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083abdf sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083abe2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083abe7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083abe9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083abec mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083abef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1083abf1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083abf4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1083abf7:;
  /* 1083abf7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083abfa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083abfd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083ac02 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083ac04 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083ac07 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083ac0a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1083ac11 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1083ac13 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083ac16 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083ac19 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1083ac20:;
  /* 1083ac20 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ac24 je 0x1083ac3a */
  if (C.zf) goto L_1083ac3a;
  /* 1083ac26 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ac29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083ac2c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1083ac2e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ac31 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ac34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083ac37 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1083ac3a:;
  /* 1083ac3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ac3d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ac40 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1083ac43 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083ac46 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ac49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ac4c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1083ac4e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083ac51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ac54 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ac57 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ac5a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1083ac5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ac60 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1083ac62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ac65 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1083ac67 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ac6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ac6d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1083ac6f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083ac71 jne 0x1083ac93 */
  if (!C.zf) goto L_1083ac93;
  /* 1083ac73 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083ac76 cmp eax, dword ptr [0x10862f20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10862f20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ac7c jne 0x1083ac93 */
  if (!C.zf) goto L_1083ac93;
  /* 1083ac7e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083ac81 cmp ecx, dword ptr [0x10862f18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10862f18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ac87 jne 0x1083ac93 */
  if (!C.zf) goto L_1083ac93;
  /* 1083ac89 mov dword ptr [0x10862f20], 0 */
  w32((uint32_t)(0x10862f20), (0x0u));
L_1083ac93:;
  /* 1083ac93 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1083ac96 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083ac99 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1083ac9b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ac9e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1083aca1:;
  /* 1083aca1 pop esi */
  ESI = (pop32());
  /* 1083aca2 mov esp, ebp */
  ESP = (EBP);
  /* 1083aca4 pop ebp */
  EBP = (pop32());
  /* 1083aca5 ret  */
  ESPCHK(0x1083a770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acb0 @ 0x1083acb0 (271 bytes, 78 insns) */
void f_1083acb0(void) {
  FTRACE(0x1083acb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083acb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083acb1 mov ebp, esp */
  EBP = (ESP);
  /* 1083acb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1083acb4 mov eax, dword ptr [0x10862f24] */
  EAX = (r32((uint32_t)(0x10862f24)));
  /* 1083acb9 cmp eax, dword ptr [0x10862f08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10862f08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083acbf jne 0x1083ad0b */
  if (!C.zf) goto L_1083ad0b;
  /* 1083acc1 mov ecx, dword ptr [0x10862f08] */
  ECX = (r32((uint32_t)(0x10862f08)));
  /* 1083acc7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083acca imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083accd push ecx */
  push32((uint32_t)(ECX));
  /* 1083acce mov edx, dword ptr [0x10862f28] */
  EDX = (r32((uint32_t)(0x10862f28)));
  /* 1083acd4 push edx */
  push32((uint32_t)(EDX));
  /* 1083acd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083acd7 mov eax, dword ptr [0x10862f2c] */
  EAX = (r32((uint32_t)(0x10862f2c)));
  /* 1083acdc push eax */
  push32((uint32_t)(EAX));
  /* 1083acdd call dword ptr [0x10864344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864344))), 0x1083ace3u);
  /* 1083ace3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083ace6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083acea jne 0x1083acf3 */
  if (!C.zf) goto L_1083acf3;
  /* 1083acec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083acee jmp 0x1083adbb */
  goto L_1083adbb;
L_1083acf3:;
  /* 1083acf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083acf6 mov dword ptr [0x10862f28], ecx */
  w32((uint32_t)(0x10862f28), (ECX));
  /* 1083acfc mov edx, dword ptr [0x10862f08] */
  EDX = (r32((uint32_t)(0x10862f08)));
  /* 1083ad02 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ad05 mov dword ptr [0x10862f08], edx */
  w32((uint32_t)(0x10862f08), (EDX));
L_1083ad0b:;
  /* 1083ad0b mov eax, dword ptr [0x10862f24] */
  EAX = (r32((uint32_t)(0x10862f24)));
  /* 1083ad10 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083ad13 mov ecx, dword ptr [0x10862f28] */
  ECX = (r32((uint32_t)(0x10862f28)));
  /* 1083ad19 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ad1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1083ad1e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1083ad23 push 8 */
  push32((uint32_t)(0x8u));
  /* 1083ad25 mov edx, dword ptr [0x10862f2c] */
  EDX = (r32((uint32_t)(0x10862f2c)));
  /* 1083ad2b push edx */
  push32((uint32_t)(EDX));
  /* 1083ad2c call dword ptr [0x1086433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086433c))), 0x1083ad32u);
  /* 1083ad32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ad35 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1083ad38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ad3b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ad3f jne 0x1083ad45 */
  if (!C.zf) goto L_1083ad45;
  /* 1083ad41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083ad43 jmp 0x1083adbb */
  goto L_1083adbb;
L_1083ad45:;
  /* 1083ad45 push 4 */
  push32((uint32_t)(0x4u));
  /* 1083ad47 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1083ad4c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1083ad51 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083ad53 call dword ptr [0x10864334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864334))), 0x1083ad59u);
  /* 1083ad59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ad5c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1083ad5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ad62 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ad66 jne 0x1083ad82 */
  if (!C.zf) goto L_1083ad82;
  /* 1083ad68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ad6b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1083ad6e push ecx */
  push32((uint32_t)(ECX));
  /* 1083ad6f push 0 */
  push32((uint32_t)(0x0u));
  /* 1083ad71 mov edx, dword ptr [0x10862f2c] */
  EDX = (r32((uint32_t)(0x10862f2c)));
  /* 1083ad77 push edx */
  push32((uint32_t)(EDX));
  /* 1083ad78 call dword ptr [0x10864368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864368))), 0x1083ad7eu);
  /* 1083ad7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083ad80 jmp 0x1083adbb */
  goto L_1083adbb;
L_1083ad82:;
  /* 1083ad82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ad85 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1083ad8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ad8e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1083ad95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ad98 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1083ad9f mov eax, dword ptr [0x10862f24] */
  EAX = (r32((uint32_t)(0x10862f24)));
  /* 1083ada4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ada7 mov dword ptr [0x10862f24], eax */
  w32((uint32_t)(0x10862f24), (EAX));
  /* 1083adac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083adaf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1083adb2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1083adb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1083adbb:;
  /* 1083adbb mov esp, ebp */
  ESP = (EBP);
  /* 1083adbd pop ebp */
  EBP = (pop32());
  /* 1083adbe ret  */
  ESPCHK(0x1083acb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000adc0 @ 0x1083adc0 (494 bytes, 149 insns) */
void f_1083adc0(void) {
  FTRACE(0x1083adc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083adc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083adc1 mov ebp, esp */
  EBP = (ESP);
  /* 1083adc3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083adc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083adc9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1083adcc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1083adcf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083add2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1083add5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1083add8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1083addf:;
  /* 1083addf cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ade3 jl 0x1083adf8 */
  if ((C.sf!=C.of)) goto L_1083adf8;
  /* 1083ade5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083ade8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1083adea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1083aded mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083adf0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083adf3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1083adf6 jmp 0x1083addf */
  goto L_1083addf;
L_1083adf8:;
  /* 1083adf8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083adfb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083ae01 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083ae04 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1083ae0b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1083ae0e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1083ae15 jmp 0x1083ae20 */
  goto L_1083ae20;
L_1083ae17:;
  /* 1083ae17 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083ae1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ae1d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1083ae20:;
  /* 1083ae20 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ae24 jge 0x1083ae46 */
  if ((C.sf==C.of)) goto L_1083ae46;
  /* 1083ae26 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083ae29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083ae2c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1083ae2f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1083ae32 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083ae35 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083ae38 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1083ae3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083ae3e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083ae41 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1083ae44 jmp 0x1083ae17 */
  goto L_1083ae17;
L_1083ae46:;
  /* 1083ae46 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083ae49 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1083ae4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083ae4f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1083ae52 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ae54 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1083ae57 push 4 */
  push32((uint32_t)(0x4u));
  /* 1083ae59 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1083ae5e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1083ae63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ae66 push edx */
  push32((uint32_t)(EDX));
  /* 1083ae67 call dword ptr [0x10864334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864334))), 0x1083ae6du);
  /* 1083ae6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083ae6f jne 0x1083ae79 */
  if (!C.zf) goto L_1083ae79;
  /* 1083ae71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083ae74 jmp 0x1083afaa */
  goto L_1083afaa;
L_1083ae79:;
  /* 1083ae79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ae7c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ae81 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1083ae84 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ae87 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1083ae8a jmp 0x1083ae98 */
  goto L_1083ae98;
L_1083ae8c:;
  /* 1083ae8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ae8f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ae95 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1083ae98:;
  /* 1083ae98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ae9b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ae9e ja 0x1083aefd */
  if ((!C.cf&&!C.zf)) goto L_1083aefd;
  /* 1083aea0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083aea3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1083aeaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083aead mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1083aeb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083aeba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083aebd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1083aec0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083aec3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1083aec9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083aecc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083aed2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083aed5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1083aed8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083aedb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083aee1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083aee4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1083aee7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083aeea add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083aeef mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1083aef2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083aef5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1083aefb jmp 0x1083ae8c */
  goto L_1083ae8c;
L_1083aefd:;
  /* 1083aefd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083af00 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083af06 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1083af09 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083af0c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083af0f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083af12 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1083af15 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083af18 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1083af1b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1083af1e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083af21 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083af24 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1083af27 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083af2a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083af2d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083af30 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1083af33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083af36 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1083af39 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1083af3c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083af3f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083af42 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1083af45 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083af48 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083af4b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1083af53 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083af56 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083af59 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1083af64 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083af67 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1083af6b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083af6e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1083af71 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1083af74 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083af77 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1083af7a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083af7c jne 0x1083af8d */
  if (!C.zf) goto L_1083af8d;
  /* 1083af7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083af81 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083af84 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1083af87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083af8a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1083af8d:;
  /* 1083af8d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083af92 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083af95 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083af97 not edx */
  EDX = (~(EDX));
  /* 1083af99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083af9c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1083af9f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1083afa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083afa4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1083afa7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1083afaa:;
  /* 1083afaa mov esp, ebp */
  ESP = (EBP);
  /* 1083afac pop ebp */
  EBP = (pop32());
  /* 1083afad ret  */
  ESPCHK(0x1083adc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afb0 @ 0x1083afb0 (1515 bytes, 489 insns) */
void f_1083afb0(void) {
  FTRACE(0x1083afb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083afb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083afb1 mov ebp, esp */
  EBP = (ESP);
  /* 1083afb3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083afb6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083afb9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083afbc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1083afbe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1083afc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083afc4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1083afc7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1083afca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083afcd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083afd0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083afd3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1083afd6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083afd9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1083afdc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1083afdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083afe2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083afe8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083afeb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1083aff2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1083aff5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083aff8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083affb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1083affe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083b001 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1083b003 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b006 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1083b009 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083b00c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b00f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1083b012 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b015 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1083b017 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1083b01a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083b01d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b020 jle 0x1083b2d6 */
  if ((C.zf||C.sf!=C.of)) goto L_1083b2d6;
  /* 1083b026 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083b029 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1083b02c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083b02e jne 0x1083b03b */
  if (!C.zf) goto L_1083b03b;
  /* 1083b030 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083b033 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b036 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b039 jle 0x1083b042 */
  if ((C.zf||C.sf!=C.of)) goto L_1083b042;
L_1083b03b:;
  /* 1083b03b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083b03d jmp 0x1083b597 */
  goto L_1083b597;
L_1083b042:;
  /* 1083b042 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083b045 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1083b048 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b04b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1083b04e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b052 jbe 0x1083b05b */
  if ((C.cf||C.zf)) goto L_1083b05b;
  /* 1083b054 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1083b05b:;
  /* 1083b05b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b05e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b061 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083b064 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b067 jne 0x1083b13d */
  if (!C.zf) goto L_1083b13d;
  /* 1083b06d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b071 jae 0x1083b0d2 */
  if (!C.cf) goto L_1083b0d2;
  /* 1083b073 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083b078 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083b07b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083b07d not edx */
  EDX = (~(EDX));
  /* 1083b07f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083b082 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b085 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1083b089 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1083b08b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083b08e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b091 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1083b095 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b098 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b09b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1083b09e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1083b0a1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b0a4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b0a7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1083b0aa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b0ad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b0b0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1083b0b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083b0b6 jne 0x1083b0d0 */
  if (!C.zf) goto L_1083b0d0;
  /* 1083b0b8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083b0bd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083b0c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083b0c2 not edx */
  EDX = (~(EDX));
  /* 1083b0c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083b0c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1083b0c9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1083b0cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083b0ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1083b0d0:;
  /* 1083b0d0 jmp 0x1083b13d */
  goto L_1083b13d;
L_1083b0d2:;
  /* 1083b0d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083b0d5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b0d8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083b0dd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083b0df not eax */
  EAX = (~(EAX));
  /* 1083b0e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083b0e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b0e7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1083b0ee and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1083b0f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083b0f3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b0f6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1083b0fd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b100 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b103 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1083b106 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1083b109 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b10c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b10f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1083b112 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b115 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b118 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1083b11c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083b11e jne 0x1083b13d */
  if (!C.zf) goto L_1083b13d;
  /* 1083b120 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083b123 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b126 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083b12b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083b12d not eax */
  EAX = (~(EAX));
  /* 1083b12f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083b132 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083b135 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1083b137 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083b13a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1083b13d:;
  /* 1083b13d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b140 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1083b143 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b146 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1083b149 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1083b14c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b14f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1083b152 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b155 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1083b158 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1083b15b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083b15e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b161 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b164 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1083b167 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b16b jle 0x1083b2b7 */
  if ((C.zf||C.sf!=C.of)) goto L_1083b2b7;
  /* 1083b171 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083b174 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b177 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1083b17a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083b17d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1083b180 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b183 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1083b186 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b18a jbe 0x1083b193 */
  if ((C.cf||C.zf)) goto L_1083b193;
  /* 1083b18c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1083b193:;
  /* 1083b193 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083b196 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083b199 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1083b19c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1083b19f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b1a2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083b1a5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083b1a8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1083b1ab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b1ae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083b1b1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1083b1b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083b1b7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b1ba mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1083b1bd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b1c0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083b1c3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b1c6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1083b1c9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b1cc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b1cf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083b1d2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b1d5 jne 0x1083b2a3 */
  if (!C.zf) goto L_1083b2a3;
  /* 1083b1db cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b1df jae 0x1083b23c */
  if (!C.cf) goto L_1083b23c;
  /* 1083b1e1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b1e4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b1e7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1083b1eb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b1ee add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b1f1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1083b1f4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1083b1f7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b1fa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b1fd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1083b200 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083b202 jne 0x1083b21a */
  if (!C.zf) goto L_1083b21a;
  /* 1083b204 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083b209 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083b20c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083b20e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083b211 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1083b213 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1083b215 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083b218 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1083b21a:;
  /* 1083b21a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083b21f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083b222 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083b224 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083b227 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b22a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1083b22e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1083b230 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083b233 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b236 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1083b23a jmp 0x1083b2a3 */
  goto L_1083b2a3;
L_1083b23c:;
  /* 1083b23c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b23f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b242 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1083b246 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b249 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b24c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1083b24f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1083b252 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b255 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b258 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1083b25b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083b25d jne 0x1083b27a */
  if (!C.zf) goto L_1083b27a;
  /* 1083b25f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083b262 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b265 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083b26a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083b26c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083b26f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1083b272 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1083b274 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083b277 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1083b27a:;
  /* 1083b27a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083b27d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b280 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083b285 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083b287 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083b28a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b28d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1083b294 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1083b296 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083b299 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b29c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1083b2a3:;
  /* 1083b2a3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b2a6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083b2a9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1083b2ab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b2ae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b2b1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083b2b4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1083b2b7:;
  /* 1083b2b7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083b2ba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b2bd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083b2c0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1083b2c2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083b2c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b2c8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083b2cb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b2ce mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1083b2d1 jmp 0x1083b592 */
  goto L_1083b592;
L_1083b2d6:;
  /* 1083b2d6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083b2d9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b2dc jge 0x1083b592 */
  if ((C.sf==C.of)) goto L_1083b592;
  /* 1083b2e2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083b2e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b2e8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083b2eb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1083b2ed mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083b2f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b2f3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083b2f6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b2f9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1083b2fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083b2ff add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b302 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1083b305 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083b308 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b30b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1083b30e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083b311 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1083b314 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b317 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1083b31a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b31e jbe 0x1083b327 */
  if ((C.cf||C.zf)) goto L_1083b327;
  /* 1083b320 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1083b327:;
  /* 1083b327 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083b32a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1083b32d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083b32f jne 0x1083b470 */
  if (!C.zf) goto L_1083b470;
  /* 1083b335 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083b338 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1083b33b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b33e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1083b341 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b345 jbe 0x1083b34e */
  if ((C.cf||C.zf)) goto L_1083b34e;
  /* 1083b347 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1083b34e:;
  /* 1083b34e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b351 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b354 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083b357 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b35a jne 0x1083b430 */
  if (!C.zf) goto L_1083b430;
  /* 1083b360 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b364 jae 0x1083b3c5 */
  if (!C.cf) goto L_1083b3c5;
  /* 1083b366 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083b36b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083b36e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083b370 not edx */
  EDX = (~(EDX));
  /* 1083b372 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083b375 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b378 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1083b37c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1083b37e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083b381 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b384 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1083b388 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b38b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b38e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1083b391 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1083b394 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b397 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b39a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1083b39d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b3a0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b3a3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1083b3a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083b3a9 jne 0x1083b3c3 */
  if (!C.zf) goto L_1083b3c3;
  /* 1083b3ab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083b3b0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083b3b3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083b3b5 not edx */
  EDX = (~(EDX));
  /* 1083b3b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083b3ba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1083b3bc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1083b3be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083b3c1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1083b3c3:;
  /* 1083b3c3 jmp 0x1083b430 */
  goto L_1083b430;
L_1083b3c5:;
  /* 1083b3c5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083b3c8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b3cb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083b3d0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083b3d2 not eax */
  EAX = (~(EAX));
  /* 1083b3d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083b3d7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b3da mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1083b3e1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1083b3e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083b3e6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b3e9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1083b3f0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b3f3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b3f6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1083b3f9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1083b3fc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b3ff add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b402 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1083b405 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b408 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b40b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1083b40f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083b411 jne 0x1083b430 */
  if (!C.zf) goto L_1083b430;
  /* 1083b413 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083b416 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b419 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083b41e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083b420 not eax */
  EAX = (~(EAX));
  /* 1083b422 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083b425 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083b428 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1083b42a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083b42d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1083b430:;
  /* 1083b430 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b433 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1083b436 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b439 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1083b43c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1083b43f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b442 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1083b445 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083b448 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1083b44b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1083b44e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083b451 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b454 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1083b457 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083b45a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1083b45d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b460 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1083b463 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b467 jbe 0x1083b470 */
  if ((C.cf||C.zf)) goto L_1083b470;
  /* 1083b469 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1083b470:;
  /* 1083b470 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083b473 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083b476 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1083b479 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1083b47c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083b47f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083b482 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1083b485 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1083b488 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083b48b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083b48e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1083b491 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083b494 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083b497 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1083b49a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083b49d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1083b4a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083b4a3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1083b4a6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083b4a9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083b4ac mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1083b4af cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b4b2 jne 0x1083b57e */
  if (!C.zf) goto L_1083b57e;
  /* 1083b4b8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b4bc jae 0x1083b518 */
  if (!C.cf) goto L_1083b518;
  /* 1083b4be mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b4c1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b4c4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1083b4c8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b4cb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b4ce mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1083b4d1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1083b4d3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b4d6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b4d9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1083b4dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083b4de jne 0x1083b4f6 */
  if (!C.zf) goto L_1083b4f6;
  /* 1083b4e0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083b4e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083b4e8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083b4ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083b4ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1083b4ef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1083b4f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083b4f4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1083b4f6:;
  /* 1083b4f6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083b4fb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083b4fe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083b500 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083b503 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b506 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1083b50a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1083b50c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083b50f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b512 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1083b516 jmp 0x1083b57e */
  goto L_1083b57e;
L_1083b518:;
  /* 1083b518 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b51b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b51e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1083b522 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b525 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b528 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1083b52b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1083b52d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b530 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b533 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1083b536 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083b538 jne 0x1083b555 */
  if (!C.zf) goto L_1083b555;
  /* 1083b53a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083b53d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b540 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1083b545 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1083b547 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083b54a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083b54d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1083b54f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083b552 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1083b555:;
  /* 1083b555 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083b558 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b55b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083b560 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083b562 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083b565 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b568 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1083b56f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1083b571 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083b574 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083b577 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1083b57e:;
  /* 1083b57e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083b581 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083b584 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1083b586 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083b589 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b58c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083b58f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1083b592:;
  /* 1083b592 mov eax, 1 */
  EAX = (0x1u);
L_1083b597:;
  /* 1083b597 mov esp, ebp */
  ESP = (EBP);
  /* 1083b599 pop ebp */
  EBP = (pop32());
  /* 1083b59a ret  */
  ESPCHK(0x1083afb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5a0 @ 0x1083b5a0 (304 bytes, 79 insns) */
void f_1083b5a0(void) {
  FTRACE(0x1083b5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083b5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083b5a1 mov ebp, esp */
  EBP = (ESP);
  /* 1083b5a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1083b5a4 cmp dword ptr [0x10862f20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10862f20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b5ab je 0x1083b6cc */
  if (C.zf) goto L_1083b6cc;
  /* 1083b5b1 mov eax, dword ptr [0x10862f18] */
  EAX = (r32((uint32_t)(0x10862f18)));
  /* 1083b5b6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1083b5b9 mov ecx, dword ptr [0x10862f20] */
  ECX = (r32((uint32_t)(0x10862f20)));
  /* 1083b5bf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1083b5c2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b5c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1083b5c7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1083b5cc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1083b5d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083b5d4 push eax */
  push32((uint32_t)(EAX));
  /* 1083b5d5 call dword ptr [0x10864358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864358))), 0x1083b5dbu);
  /* 1083b5db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083b5e0 mov ecx, dword ptr [0x10862f18] */
  ECX = (r32((uint32_t)(0x10862f18)));
  /* 1083b5e6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083b5e8 mov eax, dword ptr [0x10862f20] */
  EAX = (r32((uint32_t)(0x10862f20)));
  /* 1083b5ed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1083b5f0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1083b5f2 mov edx, dword ptr [0x10862f20] */
  EDX = (r32((uint32_t)(0x10862f20)));
  /* 1083b5f8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1083b5fb mov eax, dword ptr [0x10862f20] */
  EAX = (r32((uint32_t)(0x10862f20)));
  /* 1083b600 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1083b603 mov edx, dword ptr [0x10862f18] */
  EDX = (r32((uint32_t)(0x10862f18)));
  /* 1083b609 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1083b614 mov eax, dword ptr [0x10862f20] */
  EAX = (r32((uint32_t)(0x10862f20)));
  /* 1083b619 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1083b61c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1083b61f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1083b622 mov eax, dword ptr [0x10862f20] */
  EAX = (r32((uint32_t)(0x10862f20)));
  /* 1083b627 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1083b62a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1083b62d mov edx, dword ptr [0x10862f20] */
  EDX = (r32((uint32_t)(0x10862f20)));
  /* 1083b633 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1083b636 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1083b63a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083b63c jne 0x1083b652 */
  if (!C.zf) goto L_1083b652;
  /* 1083b63e mov edx, dword ptr [0x10862f20] */
  EDX = (r32((uint32_t)(0x10862f20)));
  /* 1083b644 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1083b647 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1083b649 mov ecx, dword ptr [0x10862f20] */
  ECX = (r32((uint32_t)(0x10862f20)));
  /* 1083b64f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1083b652:;
  /* 1083b652 mov edx, dword ptr [0x10862f20] */
  EDX = (r32((uint32_t)(0x10862f20)));
  /* 1083b658 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b65c jne 0x1083b6c2 */
  if (!C.zf) goto L_1083b6c2;
  /* 1083b65e cmp dword ptr [0x10862f24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10862f24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b665 jle 0x1083b6c2 */
  if ((C.zf||C.sf!=C.of)) goto L_1083b6c2;
  /* 1083b667 mov eax, dword ptr [0x10862f20] */
  EAX = (r32((uint32_t)(0x10862f20)));
  /* 1083b66c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1083b66f push ecx */
  push32((uint32_t)(ECX));
  /* 1083b670 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083b672 mov edx, dword ptr [0x10862f2c] */
  EDX = (r32((uint32_t)(0x10862f2c)));
  /* 1083b678 push edx */
  push32((uint32_t)(EDX));
  /* 1083b679 call dword ptr [0x10864368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864368))), 0x1083b67fu);
  /* 1083b67f mov eax, dword ptr [0x10862f24] */
  EAX = (r32((uint32_t)(0x10862f24)));
  /* 1083b684 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083b687 mov ecx, dword ptr [0x10862f28] */
  ECX = (r32((uint32_t)(0x10862f28)));
  /* 1083b68d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b68f mov edx, dword ptr [0x10862f20] */
  EDX = (r32((uint32_t)(0x10862f20)));
  /* 1083b695 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b698 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b69a push ecx */
  push32((uint32_t)(ECX));
  /* 1083b69b mov eax, dword ptr [0x10862f20] */
  EAX = (r32((uint32_t)(0x10862f20)));
  /* 1083b6a0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b6a3 push eax */
  push32((uint32_t)(EAX));
  /* 1083b6a4 mov ecx, dword ptr [0x10862f20] */
  ECX = (r32((uint32_t)(0x10862f20)));
  /* 1083b6aa push ecx */
  push32((uint32_t)(ECX));
  /* 1083b6ab call 0x1083dcd0 */
  push32(0x1083b6b0u); f_1083dcd0();
  /* 1083b6b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b6b3 mov edx, dword ptr [0x10862f24] */
  EDX = (r32((uint32_t)(0x10862f24)));
  /* 1083b6b9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b6bc mov dword ptr [0x10862f24], edx */
  w32((uint32_t)(0x10862f24), (EDX));
L_1083b6c2:;
  /* 1083b6c2 mov dword ptr [0x10862f20], 0 */
  w32((uint32_t)(0x10862f20), (0x0u));
L_1083b6cc:;
  /* 1083b6cc mov esp, ebp */
  ESP = (EBP);
  /* 1083b6ce pop ebp */
  EBP = (pop32());
  /* 1083b6cf ret  */
  ESPCHK(0x1083b5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6d0 @ 0x1083b6d0 (1565 bytes, 343 insns) */
void f_1083b6d0(void) {
  FTRACE(0x1083b6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083b6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083b6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1083b6d3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b6d9 mov eax, dword ptr [0x10862f24] */
  EAX = (r32((uint32_t)(0x10862f24)));
  /* 1083b6de imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083b6e1 push eax */
  push32((uint32_t)(EAX));
  /* 1083b6e2 mov ecx, dword ptr [0x10862f28] */
  ECX = (r32((uint32_t)(0x10862f28)));
  /* 1083b6e8 push ecx */
  push32((uint32_t)(ECX));
  /* 1083b6e9 call dword ptr [0x10864384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864384))), 0x1083b6efu);
  /* 1083b6ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083b6f1 je 0x1083b6fb */
  if (C.zf) goto L_1083b6fb;
  /* 1083b6f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083b6f6 jmp 0x1083bce9 */
  goto L_1083bce9;
L_1083b6fb:;
  /* 1083b6fb mov edx, dword ptr [0x10862f28] */
  EDX = (r32((uint32_t)(0x10862f28)));
  /* 1083b701 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1083b707 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1083b711 jmp 0x1083b722 */
  goto L_1083b722;
L_1083b713:;
  /* 1083b713 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1083b719 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b71c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1083b722:;
  /* 1083b722 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1083b728 cmp ecx, dword ptr [0x10862f24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10862f24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b72e jge 0x1083bce7 */
  if ((C.sf==C.of)) goto L_1083bce7;
  /* 1083b734 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1083b73a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1083b73d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1083b743 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1083b748 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1083b74e push ecx */
  push32((uint32_t)(ECX));
  /* 1083b74f call dword ptr [0x10864384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864384))), 0x1083b755u);
  /* 1083b755 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083b757 je 0x1083b763 */
  if (C.zf) goto L_1083b763;
  /* 1083b759 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1083b75e jmp 0x1083bce9 */
  goto L_1083bce9;
L_1083b763:;
  /* 1083b763 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1083b769 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1083b76c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1083b772 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1083b778 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b77e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1083b781 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1083b787 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1083b78a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083b78d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1083b797 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1083b7a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1083b7a8 jmp 0x1083b7b3 */
  goto L_1083b7b3;
L_1083b7aa:;
  /* 1083b7aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083b7ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b7b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1083b7b3:;
  /* 1083b7b3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b7b7 jge 0x1083bcab */
  if ((C.sf==C.of)) goto L_1083bcab;
  /* 1083b7bd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1083b7c7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1083b7d1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1083b7db mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1083b7e5 jmp 0x1083b7f6 */
  goto L_1083b7f6;
L_1083b7e7:;
  /* 1083b7e7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1083b7ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b7f0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1083b7f6:;
  /* 1083b7f6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b7fd jge 0x1083b812 */
  if ((C.sf==C.of)) goto L_1083b812;
  /* 1083b7ff mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1083b805 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1083b810 jmp 0x1083b7e7 */
  goto L_1083b7e7;
L_1083b812:;
  /* 1083b812 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b816 jl 0x1083bc4d */
  if ((C.sf!=C.of)) goto L_1083bc4d;
  /* 1083b81c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1083b821 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1083b827 push ecx */
  push32((uint32_t)(ECX));
  /* 1083b828 call dword ptr [0x10864384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864384))), 0x1083b82eu);
  /* 1083b82e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083b830 je 0x1083b83c */
  if (C.zf) goto L_1083b83c;
  /* 1083b832 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1083b837 jmp 0x1083bce9 */
  goto L_1083bce9;
L_1083b83c:;
  /* 1083b83c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1083b842 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1083b845 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1083b84f jmp 0x1083b860 */
  goto L_1083b860;
L_1083b851:;
  /* 1083b851 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1083b857 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b85a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1083b860:;
  /* 1083b860 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b867 jge 0x1083b9e4 */
  if ((C.sf==C.of)) goto L_1083b9e4;
  /* 1083b86d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083b870 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b873 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1083b879 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1083b87f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b885 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1083b88b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1083b891 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b895 jne 0x1083b8a2 */
  if (!C.zf) goto L_1083b8a2;
  /* 1083b897 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1083b89d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b8a0 je 0x1083b8ac */
  if (C.zf) goto L_1083b8ac;
L_1083b8a2:;
  /* 1083b8a2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1083b8a7 jmp 0x1083bce9 */
  goto L_1083bce9;
L_1083b8ac:;
  /* 1083b8ac mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1083b8b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1083b8b4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1083b8ba mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1083b8c0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1083b8c6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1083b8cc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1083b8cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083b8d1 je 0x1083b909 */
  if (C.zf) goto L_1083b909;
  /* 1083b8d3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1083b8d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b8dc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1083b8e2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b8ec jle 0x1083b8f8 */
  if ((C.zf||C.sf!=C.of)) goto L_1083b8f8;
  /* 1083b8ee mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1083b8f3 jmp 0x1083bce9 */
  goto L_1083bce9;
L_1083b8f8:;
  /* 1083b8f8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1083b8fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b901 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1083b907 jmp 0x1083b94b */
  goto L_1083b94b;
L_1083b909:;
  /* 1083b909 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1083b90f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1083b912 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083b915 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1083b91b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b922 jle 0x1083b92e */
  if ((C.zf||C.sf!=C.of)) goto L_1083b92e;
  /* 1083b924 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1083b92e:;
  /* 1083b92e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1083b934 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1083b93b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b93e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1083b944 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1083b94b:;
  /* 1083b94b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b952 jl 0x1083b96d */
  if ((C.sf!=C.of)) goto L_1083b96d;
  /* 1083b954 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1083b95a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1083b95d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083b95f jne 0x1083b96d */
  if (!C.zf) goto L_1083b96d;
  /* 1083b961 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b96b jle 0x1083b977 */
  if ((C.zf||C.sf!=C.of)) goto L_1083b977;
L_1083b96d:;
  /* 1083b96d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1083b972 jmp 0x1083bce9 */
  goto L_1083bce9;
L_1083b977:;
  /* 1083b977 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1083b97d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b983 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1083b986 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b98c je 0x1083b998 */
  if (C.zf) goto L_1083b998;
  /* 1083b98e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1083b993 jmp 0x1083bce9 */
  goto L_1083bce9;
L_1083b998:;
  /* 1083b998 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1083b99e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b9a4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1083b9aa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1083b9b0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b9b6 jb 0x1083b8ac */
  if (C.cf) goto L_1083b8ac;
  /* 1083b9bc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1083b9c2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b9c8 je 0x1083b9d4 */
  if (C.zf) goto L_1083b9d4;
  /* 1083b9ca mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1083b9cf jmp 0x1083bce9 */
  goto L_1083bce9;
L_1083b9d4:;
  /* 1083b9d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083b9d7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083b9dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1083b9df jmp 0x1083b851 */
  goto L_1083b851;
L_1083b9e4:;
  /* 1083b9e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083b9e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1083b9e9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083b9ef je 0x1083b9fb */
  if (C.zf) goto L_1083b9fb;
  /* 1083b9f1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1083b9f6 jmp 0x1083bce9 */
  goto L_1083bce9;
L_1083b9fb:;
  /* 1083b9fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083b9fe mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1083ba04 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1083ba0b jmp 0x1083ba16 */
  goto L_1083ba16;
L_1083ba0d:;
  /* 1083ba0d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083ba10 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ba13 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1083ba16:;
  /* 1083ba16 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ba1a jge 0x1083bc4d */
  if ((C.sf==C.of)) goto L_1083bc4d;
  /* 1083ba20 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1083ba2a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1083ba30 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1083ba36:;
  /* 1083ba36 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1083ba3c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1083ba3f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1083ba45 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1083ba4b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ba51 je 0x1083bb7a */
  if (C.zf) goto L_1083bb7a;
  /* 1083ba57 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083ba5a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1083ba60 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ba67 je 0x1083bb7a */
  if (C.zf) goto L_1083bb7a;
  /* 1083ba6d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1083ba73 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ba79 jb 0x1083ba8e */
  if (C.cf) goto L_1083ba8e;
  /* 1083ba7b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1083ba81 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ba86 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ba8c jb 0x1083ba98 */
  if (C.cf) goto L_1083ba98;
L_1083ba8e:;
  /* 1083ba8e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1083ba93 jmp 0x1083bce9 */
  goto L_1083bce9;
L_1083ba98:;
  /* 1083ba98 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1083ba9e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1083baa4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1083baaa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1083bab0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bab3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1083bab6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083bab9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083babe mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1083bac4:;
  /* 1083bac4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083bac7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bacd je 0x1083baee */
  if (C.zf) goto L_1083baee;
  /* 1083bacf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083bad2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bad8 jne 0x1083badc */
  if (!C.zf) goto L_1083badc;
  /* 1083bada jmp 0x1083baee */
  goto L_1083baee;
L_1083badc:;
  /* 1083badc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083badf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1083bae1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1083bae4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083bae7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bae9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1083baec jmp 0x1083bac4 */
  goto L_1083bac4;
L_1083baee:;
  /* 1083baee mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083baf1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083baf7 jne 0x1083bb03 */
  if (!C.zf) goto L_1083bb03;
  /* 1083baf9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1083bafe jmp 0x1083bce9 */
  goto L_1083bce9;
L_1083bb03:;
  /* 1083bb03 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1083bb09 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1083bb0b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1083bb0e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083bb11 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1083bb17 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bb1e jle 0x1083bb2a */
  if ((C.zf||C.sf!=C.of)) goto L_1083bb2a;
  /* 1083bb20 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1083bb2a:;
  /* 1083bb2a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1083bb30 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bb33 je 0x1083bb3f */
  if (C.zf) goto L_1083bb3f;
  /* 1083bb35 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1083bb3a jmp 0x1083bce9 */
  goto L_1083bce9;
L_1083bb3f:;
  /* 1083bb3f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1083bb45 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1083bb48 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bb4e je 0x1083bb5a */
  if (C.zf) goto L_1083bb5a;
  /* 1083bb50 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1083bb55 jmp 0x1083bce9 */
  goto L_1083bce9;
L_1083bb5a:;
  /* 1083bb5a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1083bb60 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1083bb66 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1083bb6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bb6f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1083bb75 jmp 0x1083ba36 */
  goto L_1083ba36;
L_1083bb7a:;
  /* 1083bb7a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bb81 je 0x1083bbf1 */
  if (C.zf) goto L_1083bbf1;
  /* 1083bb83 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bb87 jge 0x1083bbbb */
  if ((C.sf==C.of)) goto L_1083bbbb;
  /* 1083bb89 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083bb8e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083bb91 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083bb93 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1083bb99 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1083bb9b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1083bba1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083bba6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083bba9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083bbab mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1083bbb1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1083bbb3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1083bbb9 jmp 0x1083bbf1 */
  goto L_1083bbf1;
L_1083bbbb:;
  /* 1083bbbb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083bbbe sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083bbc1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083bbc6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083bbc8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1083bbce or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1083bbd0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1083bbd6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083bbd9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083bbdc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1083bbe1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1083bbe3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1083bbe9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1083bbeb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1083bbf1:;
  /* 1083bbf1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1083bbf7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083bbfa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bc00 jne 0x1083bc14 */
  if (!C.zf) goto L_1083bc14;
  /* 1083bc02 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083bc05 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1083bc0b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bc12 je 0x1083bc1e */
  if (C.zf) goto L_1083bc1e;
L_1083bc14:;
  /* 1083bc14 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1083bc19 jmp 0x1083bce9 */
  goto L_1083bce9;
L_1083bc1e:;
  /* 1083bc1e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1083bc24 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1083bc27 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bc2d je 0x1083bc39 */
  if (C.zf) goto L_1083bc39;
  /* 1083bc2f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1083bc34 jmp 0x1083bce9 */
  goto L_1083bce9;
L_1083bc39:;
  /* 1083bc39 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1083bc3f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bc42 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1083bc48 jmp 0x1083ba0d */
  goto L_1083ba0d;
L_1083bc4d:;
  /* 1083bc4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083bc50 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1083bc56 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1083bc5c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bc60 jne 0x1083bc7a */
  if (!C.zf) goto L_1083bc7a;
  /* 1083bc62 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083bc65 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1083bc6b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1083bc71 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bc78 je 0x1083bc81 */
  if (C.zf) goto L_1083bc81;
L_1083bc7a:;
  /* 1083bc7a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1083bc7f jmp 0x1083bce9 */
  goto L_1083bce9;
L_1083bc81:;
  /* 1083bc81 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1083bc87 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bc8d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1083bc93 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083bc96 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bc9b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1083bc9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083bca1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1083bca3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1083bca6 jmp 0x1083b7aa */
  goto L_1083b7aa;
L_1083bcab:;
  /* 1083bcab mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1083bcb1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1083bcb7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bcb9 jne 0x1083bccc */
  if (!C.zf) goto L_1083bccc;
  /* 1083bcbb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1083bcc1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1083bcc7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bcca je 0x1083bcd3 */
  if (C.zf) goto L_1083bcd3;
L_1083bccc:;
  /* 1083bccc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1083bcd1 jmp 0x1083bce9 */
  goto L_1083bce9;
L_1083bcd3:;
  /* 1083bcd3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1083bcd9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bcdc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1083bce2 jmp 0x1083b713 */
  goto L_1083b713;
L_1083bce7:;
  /* 1083bce7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1083bce9:;
  /* 1083bce9 mov esp, ebp */
  ESP = (EBP);
  /* 1083bceb pop ebp */
  EBP = (pop32());
  /* 1083bcec ret  */
  ESPCHK(0x1083b6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcf0 @ 0x1083bcf0 (250 bytes, 92 insns) */
void f_1083bcf0(void) {
  FTRACE(0x1083bcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083bcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083bcf1 mov ebp, esp */
  EBP = (ESP);
  /* 1083bcf3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083bcf6 push ebx */
  push32((uint32_t)(EBX));
  /* 1083bcf7 push esi */
  push32((uint32_t)(ESI));
  /* 1083bcf8 push edi */
  push32((uint32_t)(EDI));
  /* 1083bcf9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1083bcfc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1083bcff lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1083bd02 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1083bd05:;
  /* 1083bd05 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bd09 jne 0x1083bd29 */
  if (!C.zf) goto L_1083bd29;
  /* 1083bd0b push 0x1085d0fc */
  push32((uint32_t)(0x1085d0fcu));
  /* 1083bd10 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083bd12 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1083bd14 push 0x1085d0f0 */
  push32((uint32_t)(0x1085d0f0u));
  /* 1083bd19 push 2 */
  push32((uint32_t)(0x2u));
  /* 1083bd1b call 0x10834ea0 */
  push32(0x1083bd20u); f_10834ea0();
  /* 1083bd20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bd23 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bd26 jne 0x1083bd29 */
  if (!C.zf) goto L_1083bd29;
  /* 1083bd28 int3  */
  x86_unimpl("int3 @ 0x1083bd28");
L_1083bd29:;
  /* 1083bd29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1083bd2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083bd2d jne 0x1083bd05 */
  if (!C.zf) goto L_1083bd05;
L_1083bd2f:;
  /* 1083bd2f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bd33 jne 0x1083bd53 */
  if (!C.zf) goto L_1083bd53;
  /* 1083bd35 push 0x1085d0e0 */
  push32((uint32_t)(0x1085d0e0u));
  /* 1083bd3a push 0 */
  push32((uint32_t)(0x0u));
  /* 1083bd3c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1083bd3e push 0x1085d0f0 */
  push32((uint32_t)(0x1085d0f0u));
  /* 1083bd43 push 2 */
  push32((uint32_t)(0x2u));
  /* 1083bd45 call 0x10834ea0 */
  push32(0x1083bd4au); f_10834ea0();
  /* 1083bd4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bd4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bd50 jne 0x1083bd53 */
  if (!C.zf) goto L_1083bd53;
  /* 1083bd52 int3  */
  x86_unimpl("int3 @ 0x1083bd52");
L_1083bd53:;
  /* 1083bd53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083bd55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083bd57 jne 0x1083bd2f */
  if (!C.zf) goto L_1083bd2f;
  /* 1083bd59 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083bd5c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1083bd63 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083bd66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083bd69 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1083bd6c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083bd6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083bd72 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1083bd74 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083bd77 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1083bd7e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083bd81 push ecx */
  push32((uint32_t)(ECX));
  /* 1083bd82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083bd85 push edx */
  push32((uint32_t)(EDX));
  /* 1083bd86 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083bd89 push eax */
  push32((uint32_t)(EAX));
  /* 1083bd8a call 0x1083cd70 */
  push32(0x1083bd8fu); f_1083cd70();
  /* 1083bd8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bd92 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1083bd95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083bd98 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083bd9b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083bd9e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083bda1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1083bda4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083bda7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bdab jl 0x1083bdcf */
  if ((C.sf!=C.of)) goto L_1083bdcf;
  /* 1083bdad mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083bdb0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1083bdb2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1083bdb5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1083bdb7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1083bdbd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1083bdc0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083bdc3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1083bdc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bdc8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083bdcb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1083bdcd jmp 0x1083bde0 */
  goto L_1083bde0;
L_1083bdcf:;
  /* 1083bdcf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083bdd2 push edx */
  push32((uint32_t)(EDX));
  /* 1083bdd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083bdd5 call 0x1083caf0 */
  push32(0x1083bddau); f_1083caf0();
  /* 1083bdda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bddd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1083bde0:;
  /* 1083bde0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083bde3 pop edi */
  EDI = (pop32());
  /* 1083bde4 pop esi */
  ESI = (pop32());
  /* 1083bde5 pop ebx */
  EBX = (pop32());
  /* 1083bde6 mov esp, ebp */
  ESP = (EBP);
  /* 1083bde8 pop ebp */
  EBP = (pop32());
  /* 1083bde9 ret  */
  ESPCHK(0x1083bcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdf0 @ 0x1083bdf0 (183 bytes, 58 insns) */
void f_1083bdf0(void) {
  FTRACE(0x1083bdf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083bdf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083bdf1 mov ebp, esp */
  EBP = (ESP);
  /* 1083bdf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083bdf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083bdf9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bdfc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083be01 ja 0x1083be1a */
  if ((!C.cf&&!C.zf)) goto L_1083be1a;
  /* 1083be03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083be06 mov edx, dword ptr [0x1085fc98] */
  EDX = (r32((uint32_t)(0x1085fc98)));
  /* 1083be0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083be0e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1083be12 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1083be15 jmp 0x1083bea3 */
  goto L_1083bea3;
L_1083be1a:;
  /* 1083be1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083be1d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1083be20 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1083be26 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1083be2c mov edx, dword ptr [0x1085fc98] */
  EDX = (r32((uint32_t)(0x1085fc98)));
  /* 1083be32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083be34 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1083be38 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1083be3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083be3f je 0x1083be63 */
  if (C.zf) goto L_1083be63;
  /* 1083be41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083be44 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1083be47 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1083be4d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1083be50 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1083be53 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1083be56 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1083be5a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1083be61 jmp 0x1083be74 */
  goto L_1083be74;
L_1083be63:;
  /* 1083be63 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1083be66 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1083be69 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1083be6d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1083be74:;
  /* 1083be74 push 1 */
  push32((uint32_t)(0x1u));
  /* 1083be76 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083be78 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083be7a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1083be7d push ecx */
  push32((uint32_t)(ECX));
  /* 1083be7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083be81 push edx */
  push32((uint32_t)(EDX));
  /* 1083be82 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1083be85 push eax */
  push32((uint32_t)(EAX));
  /* 1083be86 push 1 */
  push32((uint32_t)(0x1u));
  /* 1083be88 call 0x1083e010 */
  push32(0x1083be8du); f_1083e010();
  /* 1083be8d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083be90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083be92 jne 0x1083be98 */
  if (!C.zf) goto L_1083be98;
  /* 1083be94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083be96 jmp 0x1083bea3 */
  goto L_1083bea3;
L_1083be98:;
  /* 1083be98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083be9b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083bea0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1083bea3:;
  /* 1083bea3 mov esp, ebp */
  ESP = (EBP);
  /* 1083bea5 pop ebp */
  EBP = (pop32());
  /* 1083bea6 ret  */
  ESPCHK(0x1083bdf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000beb0 @ 0x1083beb0 (836 bytes, 238 insns) */
void f_1083beb0(void) {
  FTRACE(0x1083beb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083beb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083beb1 mov ebp, esp */
  EBP = (ESP);
  /* 1083beb3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083beb6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1083beb8 call 0x108397e0 */
  push32(0x1083bebdu); f_108397e0();
  /* 1083bebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bec0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083bec3 push eax */
  push32((uint32_t)(EAX));
  /* 1083bec4 call 0x1083c200 */
  push32(0x1083bec9u); f_1083c200();
  /* 1083bec9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083becc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1083becf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083bed2 cmp ecx, dword ptr [0x10862c64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10862c64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bed8 jne 0x1083beeb */
  if (!C.zf) goto L_1083beeb;
  /* 1083beda push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1083bedc call 0x10839880 */
  push32(0x1083bee1u); f_10839880();
  /* 1083bee1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bee4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083bee6 jmp 0x1083c1f0 */
  goto L_1083c1f0;
L_1083beeb:;
  /* 1083beeb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083beef jne 0x1083bf0c */
  if (!C.zf) goto L_1083bf0c;
  /* 1083bef1 call 0x1083c2e0 */
  push32(0x1083bef6u); f_1083c2e0();
  /* 1083bef6 call 0x1083c360 */
  push32(0x1083befbu); f_1083c360();
  /* 1083befb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1083befd call 0x10839880 */
  push32(0x1083bf02u); f_10839880();
  /* 1083bf02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bf05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083bf07 jmp 0x1083c1f0 */
  goto L_1083c1f0;
L_1083bf0c:;
  /* 1083bf0c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1083bf13 jmp 0x1083bf1e */
  goto L_1083bf1e;
L_1083bf15:;
  /* 1083bf15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083bf18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bf1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1083bf1e:;
  /* 1083bf1e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bf22 jae 0x1083c06f */
  if (!C.cf) goto L_1083c06f;
  /* 1083bf28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083bf2b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083bf2e mov ecx, dword ptr [eax + 0x1085feb8] */
  ECX = (r32((uint32_t)(EAX + 0x1085feb8)));
  /* 1083bf34 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bf37 jne 0x1083c06a */
  if (!C.zf) goto L_1083c06a;
  /* 1083bf3d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1083bf44 jmp 0x1083bf4f */
  goto L_1083bf4f;
L_1083bf46:;
  /* 1083bf46 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083bf49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bf4c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1083bf4f:;
  /* 1083bf4f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bf56 jae 0x1083bf64 */
  if (!C.cf) goto L_1083bf64;
  /* 1083bf58 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083bf5b mov byte ptr [eax + 0x10862e00], 0 */
  w8((uint32_t)(EAX + 0x10862e00), (0x0u));
  /* 1083bf62 jmp 0x1083bf46 */
  goto L_1083bf46;
L_1083bf64:;
  /* 1083bf64 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1083bf6b jmp 0x1083bf76 */
  goto L_1083bf76;
L_1083bf6d:;
  /* 1083bf6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083bf70 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bf73 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1083bf76:;
  /* 1083bf76 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bf7a jae 0x1083bff7 */
  if (!C.cf) goto L_1083bff7;
  /* 1083bf7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083bf7f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083bf82 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083bf85 lea ecx, [edx + eax*8 + 0x1085fec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1085fec8));
  /* 1083bf8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1083bf8f jmp 0x1083bf9a */
  goto L_1083bf9a;
L_1083bf91:;
  /* 1083bf91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083bf94 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bf97 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1083bf9a:;
  /* 1083bf9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083bf9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1083bf9f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1083bfa1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083bfa3 je 0x1083bff2 */
  if (C.zf) goto L_1083bff2;
  /* 1083bfa5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083bfa8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083bfaa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1083bfad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083bfaf je 0x1083bff2 */
  if (C.zf) goto L_1083bff2;
  /* 1083bfb1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083bfb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1083bfb6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1083bfb8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1083bfbb jmp 0x1083bfc6 */
  goto L_1083bfc6;
L_1083bfbd:;
  /* 1083bfbd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083bfc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083bfc3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1083bfc6:;
  /* 1083bfc6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083bfc9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1083bfcb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1083bfce cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083bfd1 ja 0x1083bff0 */
  if ((!C.cf&&!C.zf)) goto L_1083bff0;
  /* 1083bfd3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083bfd6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083bfd9 mov dl, byte ptr [eax + 0x10862e01] */
  DL = (r8((uint32_t)(EAX + 0x10862e01)));
  /* 1083bfdf or dl, byte ptr [ecx + 0x1085feb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1085feb0))); DL = (_r); fl_logic(_r,8); }
  /* 1083bfe5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083bfe8 mov byte ptr [eax + 0x10862e01], dl */
  w8((uint32_t)(EAX + 0x10862e01), (DL));
  /* 1083bfee jmp 0x1083bfbd */
  goto L_1083bfbd;
L_1083bff0:;
  /* 1083bff0 jmp 0x1083bf91 */
  goto L_1083bf91;
L_1083bff2:;
  /* 1083bff2 jmp 0x1083bf6d */
  goto L_1083bf6d;
L_1083bff7:;
  /* 1083bff7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083bffa mov dword ptr [0x10862c64], ecx */
  w32((uint32_t)(0x10862c64), (ECX));
  /* 1083c000 mov dword ptr [0x10862cec], 1 */
  w32((uint32_t)(0x10862cec), (0x1u));
  /* 1083c00a mov edx, dword ptr [0x10862c64] */
  EDX = (r32((uint32_t)(0x10862c64)));
  /* 1083c010 push edx */
  push32((uint32_t)(EDX));
  /* 1083c011 call 0x1083c260 */
  push32(0x1083c016u); f_1083c260();
  /* 1083c016 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c019 mov dword ptr [0x10862f04], eax */
  w32((uint32_t)(0x10862f04), (EAX));
  /* 1083c01e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1083c025 jmp 0x1083c030 */
  goto L_1083c030;
L_1083c027:;
  /* 1083c027 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083c02a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c02d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1083c030:;
  /* 1083c030 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c034 jae 0x1083c054 */
  if (!C.cf) goto L_1083c054;
  /* 1083c036 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083c039 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083c03c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083c03f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083c042 mov cx, word ptr [ecx + eax*2 + 0x1085febc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1085febc)));
  /* 1083c04a mov word ptr [edx*2 + 0x10862ce0], cx */
  w16((uint32_t)(EDX*2 + 0x10862ce0), (CX));
  /* 1083c052 jmp 0x1083c027 */
  goto L_1083c027;
L_1083c054:;
  /* 1083c054 call 0x1083c360 */
  push32(0x1083c059u); f_1083c360();
  /* 1083c059 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1083c05b call 0x10839880 */
  push32(0x1083c060u); f_10839880();
  /* 1083c060 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c063 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083c065 jmp 0x1083c1f0 */
  goto L_1083c1f0;
L_1083c06a:;
  /* 1083c06a jmp 0x1083bf15 */
  goto L_1083bf15;
L_1083c06f:;
  /* 1083c06f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1083c072 push edx */
  push32((uint32_t)(EDX));
  /* 1083c073 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083c076 push eax */
  push32((uint32_t)(EAX));
  /* 1083c077 call dword ptr [0x10864330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864330))), 0x1083c07du);
  /* 1083c07d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c080 jne 0x1083c1c2 */
  if (!C.zf) goto L_1083c1c2;
  /* 1083c086 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1083c08d jmp 0x1083c098 */
  goto L_1083c098;
L_1083c08f:;
  /* 1083c08f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083c092 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c095 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1083c098:;
  /* 1083c098 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c09f jae 0x1083c0ad */
  if (!C.cf) goto L_1083c0ad;
  /* 1083c0a1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083c0a4 mov byte ptr [edx + 0x10862e00], 0 */
  w8((uint32_t)(EDX + 0x10862e00), (0x0u));
  /* 1083c0ab jmp 0x1083c08f */
  goto L_1083c08f;
L_1083c0ad:;
  /* 1083c0ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083c0b0 mov dword ptr [0x10862c64], eax */
  w32((uint32_t)(0x10862c64), (EAX));
  /* 1083c0b5 mov dword ptr [0x10862f04], 0 */
  w32((uint32_t)(0x10862f04), (0x0u));
  /* 1083c0bf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c0c3 jbe 0x1083c17e */
  if ((C.cf||C.zf)) goto L_1083c17e;
  /* 1083c0c9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1083c0cc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1083c0cf jmp 0x1083c0da */
  goto L_1083c0da;
L_1083c0d1:;
  /* 1083c0d1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083c0d4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c0d7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1083c0da:;
  /* 1083c0da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083c0dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1083c0df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1083c0e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083c0e3 je 0x1083c12c */
  if (C.zf) goto L_1083c12c;
  /* 1083c0e5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083c0e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083c0ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1083c0ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083c0ef je 0x1083c12c */
  if (C.zf) goto L_1083c12c;
  /* 1083c0f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083c0f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1083c0f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1083c0f8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1083c0fb jmp 0x1083c106 */
  goto L_1083c106;
L_1083c0fd:;
  /* 1083c0fd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083c100 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c103 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1083c106:;
  /* 1083c106 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083c109 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1083c10b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1083c10e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c111 ja 0x1083c12a */
  if ((!C.cf&&!C.zf)) goto L_1083c12a;
  /* 1083c113 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083c116 mov cl, byte ptr [eax + 0x10862e01] */
  CL = (r8((uint32_t)(EAX + 0x10862e01)));
  /* 1083c11c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1083c11f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083c122 mov byte ptr [edx + 0x10862e01], cl */
  w8((uint32_t)(EDX + 0x10862e01), (CL));
  /* 1083c128 jmp 0x1083c0fd */
  goto L_1083c0fd;
L_1083c12a:;
  /* 1083c12a jmp 0x1083c0d1 */
  goto L_1083c0d1;
L_1083c12c:;
  /* 1083c12c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1083c133 jmp 0x1083c13e */
  goto L_1083c13e;
L_1083c135:;
  /* 1083c135 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083c138 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c13b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1083c13e:;
  /* 1083c13e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c145 jae 0x1083c15e */
  if (!C.cf) goto L_1083c15e;
  /* 1083c147 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083c14a mov dl, byte ptr [ecx + 0x10862e01] */
  DL = (r8((uint32_t)(ECX + 0x10862e01)));
  /* 1083c150 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1083c153 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083c156 mov byte ptr [eax + 0x10862e01], dl */
  w8((uint32_t)(EAX + 0x10862e01), (DL));
  /* 1083c15c jmp 0x1083c135 */
  goto L_1083c135;
L_1083c15e:;
  /* 1083c15e mov ecx, dword ptr [0x10862c64] */
  ECX = (r32((uint32_t)(0x10862c64)));
  /* 1083c164 push ecx */
  push32((uint32_t)(ECX));
  /* 1083c165 call 0x1083c260 */
  push32(0x1083c16au); f_1083c260();
  /* 1083c16a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c16d mov dword ptr [0x10862f04], eax */
  w32((uint32_t)(0x10862f04), (EAX));
  /* 1083c172 mov dword ptr [0x10862cec], 1 */
  w32((uint32_t)(0x10862cec), (0x1u));
  /* 1083c17c jmp 0x1083c188 */
  goto L_1083c188;
L_1083c17e:;
  /* 1083c17e mov dword ptr [0x10862cec], 0 */
  w32((uint32_t)(0x10862cec), (0x0u));
L_1083c188:;
  /* 1083c188 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1083c18f jmp 0x1083c19a */
  goto L_1083c19a;
L_1083c191:;
  /* 1083c191 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083c194 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c197 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1083c19a:;
  /* 1083c19a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c19e jae 0x1083c1af */
  if (!C.cf) goto L_1083c1af;
  /* 1083c1a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083c1a3 mov word ptr [eax*2 + 0x10862ce0], 0 */
  w16((uint32_t)(EAX*2 + 0x10862ce0), (0x0u));
  /* 1083c1ad jmp 0x1083c191 */
  goto L_1083c191;
L_1083c1af:;
  /* 1083c1af call 0x1083c360 */
  push32(0x1083c1b4u); f_1083c360();
  /* 1083c1b4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1083c1b6 call 0x10839880 */
  push32(0x1083c1bbu); f_10839880();
  /* 1083c1bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c1be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083c1c0 jmp 0x1083c1f0 */
  goto L_1083c1f0;
L_1083c1c2:;
  /* 1083c1c2 cmp dword ptr [0x10861778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c1c9 je 0x1083c1e3 */
  if (C.zf) goto L_1083c1e3;
  /* 1083c1cb call 0x1083c2e0 */
  push32(0x1083c1d0u); f_1083c2e0();
  /* 1083c1d0 call 0x1083c360 */
  push32(0x1083c1d5u); f_1083c360();
  /* 1083c1d5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1083c1d7 call 0x10839880 */
  push32(0x1083c1dcu); f_10839880();
  /* 1083c1dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c1df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083c1e1 jmp 0x1083c1f0 */
  goto L_1083c1f0;
L_1083c1e3:;
  /* 1083c1e3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1083c1e5 call 0x10839880 */
  push32(0x1083c1eau); f_10839880();
  /* 1083c1ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c1ed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1083c1f0:;
  /* 1083c1f0 mov esp, ebp */
  ESP = (EBP);
  /* 1083c1f2 pop ebp */
  EBP = (pop32());
  /* 1083c1f3 ret  */
  ESPCHK(0x1083beb0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1083c200 (89 bytes, 21 insns) */
void f_1083c200(void) {
  FTRACE(0x1083c200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083c200 push ebp */
  push32((uint32_t)(EBP));
  /* 1083c201 mov ebp, esp */
  EBP = (ESP);
  /* 1083c203 mov dword ptr [0x10861778], 0 */
  w32((uint32_t)(0x10861778), (0x0u));
  /* 1083c20d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c211 jne 0x1083c225 */
  if (!C.zf) goto L_1083c225;
  /* 1083c213 mov dword ptr [0x10861778], 1 */
  w32((uint32_t)(0x10861778), (0x1u));
  /* 1083c21d call dword ptr [0x10864328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864328))), 0x1083c223u);
  /* 1083c223 jmp 0x1083c257 */
  goto L_1083c257;
L_1083c225:;
  /* 1083c225 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c229 jne 0x1083c23d */
  if (!C.zf) goto L_1083c23d;
  /* 1083c22b mov dword ptr [0x10861778], 1 */
  w32((uint32_t)(0x10861778), (0x1u));
  /* 1083c235 call dword ptr [0x10864338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864338))), 0x1083c23bu);
  /* 1083c23b jmp 0x1083c257 */
  goto L_1083c257;
L_1083c23d:;
  /* 1083c23d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c241 jne 0x1083c254 */
  if (!C.zf) goto L_1083c254;
  /* 1083c243 mov dword ptr [0x10861778], 1 */
  w32((uint32_t)(0x10861778), (0x1u));
  /* 1083c24d mov eax, dword ptr [0x10861798] */
  EAX = (r32((uint32_t)(0x10861798)));
  /* 1083c252 jmp 0x1083c257 */
  goto L_1083c257;
L_1083c254:;
  /* 1083c254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1083c257:;
  /* 1083c257 pop ebp */
  EBP = (pop32());
  /* 1083c258 ret  */
  ESPCHK(0x1083c200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c260 @ 0x1083c260 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1083c260(void) {
  FTRACE(0x1083c260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083c260 push ebp */
  push32((uint32_t)(EBP));
  /* 1083c261 mov ebp, esp */
  EBP = (ESP);
  /* 1083c263 push ecx */
  push32((uint32_t)(ECX));
  /* 1083c264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083c267 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083c26a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083c26d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083c273 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1083c276 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c27a ja 0x1083c2aa */
  if ((!C.cf&&!C.zf)) goto L_1083c2aa;
  /* 1083c27c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083c27f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1083c281 mov dl, byte ptr [eax + 0x1083c2c4] */
  DL = (r8((uint32_t)(EAX + 0x1083c2c4)));
  /* 1083c287 jmp dword ptr [edx*4 + 0x1083c2b0] */
  switch (EDX) {
    case 0: goto L_1083c28e;
    case 1: goto L_1083c295;
    case 2: goto L_1083c29c;
    case 3: goto L_1083c2a3;
    case 4: goto L_1083c2aa;
    default: x86_unimpl("switch@0x1083c287 out of table"); return;
  }
L_1083c28e:;
  /* 1083c28e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1083c293 jmp 0x1083c2ac */
  goto L_1083c2ac;
L_1083c295:;
  /* 1083c295 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1083c29a jmp 0x1083c2ac */
  goto L_1083c2ac;
L_1083c29c:;
  /* 1083c29c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1083c2a1 jmp 0x1083c2ac */
  goto L_1083c2ac;
L_1083c2a3:;
  /* 1083c2a3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1083c2a8 jmp 0x1083c2ac */
  goto L_1083c2ac;
L_1083c2aa:;
  /* 1083c2aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1083c2ac:;
  /* 1083c2ac mov esp, ebp */
  ESP = (EBP);
  /* 1083c2ae pop ebp */
  EBP = (pop32());
  /* 1083c2af ret  */
  ESPCHK(0x1083c260u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1083c2e0 (116 bytes, 29 insns) */
void f_1083c2e0(void) {
  FTRACE(0x1083c2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083c2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083c2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1083c2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1083c2e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1083c2eb jmp 0x1083c2f6 */
  goto L_1083c2f6;
L_1083c2ed:;
  /* 1083c2ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083c2f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c2f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1083c2f6:;
  /* 1083c2f6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c2fd jge 0x1083c30b */
  if ((C.sf==C.of)) goto L_1083c30b;
  /* 1083c2ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083c302 mov byte ptr [ecx + 0x10862e00], 0 */
  w8((uint32_t)(ECX + 0x10862e00), (0x0u));
  /* 1083c309 jmp 0x1083c2ed */
  goto L_1083c2ed;
L_1083c30b:;
  /* 1083c30b mov dword ptr [0x10862c64], 0 */
  w32((uint32_t)(0x10862c64), (0x0u));
  /* 1083c315 mov dword ptr [0x10862cec], 0 */
  w32((uint32_t)(0x10862cec), (0x0u));
  /* 1083c31f mov dword ptr [0x10862f04], 0 */
  w32((uint32_t)(0x10862f04), (0x0u));
  /* 1083c329 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1083c330 jmp 0x1083c33b */
  goto L_1083c33b;
L_1083c332:;
  /* 1083c332 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083c335 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c338 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1083c33b:;
  /* 1083c33b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c33f jge 0x1083c350 */
  if ((C.sf==C.of)) goto L_1083c350;
  /* 1083c341 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083c344 mov word ptr [eax*2 + 0x10862ce0], 0 */
  w16((uint32_t)(EAX*2 + 0x10862ce0), (0x0u));
  /* 1083c34e jmp 0x1083c332 */
  goto L_1083c332;
L_1083c350:;
  /* 1083c350 mov esp, ebp */
  ESP = (EBP);
  /* 1083c352 pop ebp */
  EBP = (pop32());
  /* 1083c353 ret  */
  ESPCHK(0x1083c2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c360 @ 0x1083c360 (770 bytes, 175 insns) */
void f_1083c360(void) {
  FTRACE(0x1083c360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083c360 push ebp */
  push32((uint32_t)(EBP));
  /* 1083c361 mov ebp, esp */
  EBP = (ESP);
  /* 1083c363 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083c369 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1083c36f push eax */
  push32((uint32_t)(EAX));
  /* 1083c370 mov ecx, dword ptr [0x10862c64] */
  ECX = (r32((uint32_t)(0x10862c64)));
  /* 1083c376 push ecx */
  push32((uint32_t)(ECX));
  /* 1083c377 call dword ptr [0x10864330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864330))), 0x1083c37du);
  /* 1083c37d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c380 jne 0x1083c599 */
  if (!C.zf) goto L_1083c599;
  /* 1083c386 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1083c390 jmp 0x1083c3a1 */
  goto L_1083c3a1;
L_1083c392:;
  /* 1083c392 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c398 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c39b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1083c3a1:;
  /* 1083c3a1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c3ab jae 0x1083c3c2 */
  if (!C.cf) goto L_1083c3c2;
  /* 1083c3ad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c3b3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1083c3b9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1083c3c0 jmp 0x1083c392 */
  goto L_1083c392;
L_1083c3c2:;
  /* 1083c3c2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1083c3c9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1083c3cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1083c3d2 jmp 0x1083c3dd */
  goto L_1083c3dd;
L_1083c3d4:;
  /* 1083c3d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083c3d7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c3da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1083c3dd:;
  /* 1083c3dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083c3e0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1083c3e2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1083c3e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083c3e6 je 0x1083c428 */
  if (C.zf) goto L_1083c428;
  /* 1083c3e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083c3eb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1083c3ed mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1083c3ef mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1083c3f5 jmp 0x1083c406 */
  goto L_1083c406;
L_1083c3f7:;
  /* 1083c3f7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c3fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c400 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1083c406:;
  /* 1083c406 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083c409 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1083c40b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1083c40e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c414 ja 0x1083c426 */
  if ((!C.cf&&!C.zf)) goto L_1083c426;
  /* 1083c416 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c41c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1083c424 jmp 0x1083c3f7 */
  goto L_1083c3f7;
L_1083c426:;
  /* 1083c426 jmp 0x1083c3d4 */
  goto L_1083c3d4;
L_1083c428:;
  /* 1083c428 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083c42a mov eax, dword ptr [0x10862f04] */
  EAX = (r32((uint32_t)(0x10862f04)));
  /* 1083c42f push eax */
  push32((uint32_t)(EAX));
  /* 1083c430 mov ecx, dword ptr [0x10862c64] */
  ECX = (r32((uint32_t)(0x10862c64)));
  /* 1083c436 push ecx */
  push32((uint32_t)(ECX));
  /* 1083c437 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1083c43d push edx */
  push32((uint32_t)(EDX));
  /* 1083c43e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1083c443 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1083c449 push eax */
  push32((uint32_t)(EAX));
  /* 1083c44a push 1 */
  push32((uint32_t)(0x1u));
  /* 1083c44c call 0x1083e010 */
  push32(0x1083c451u); f_1083e010();
  /* 1083c451 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c454 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083c456 mov ecx, dword ptr [0x10862c64] */
  ECX = (r32((uint32_t)(0x10862c64)));
  /* 1083c45c push ecx */
  push32((uint32_t)(ECX));
  /* 1083c45d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1083c462 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1083c468 push edx */
  push32((uint32_t)(EDX));
  /* 1083c469 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1083c46e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1083c474 push eax */
  push32((uint32_t)(EAX));
  /* 1083c475 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1083c47a mov ecx, dword ptr [0x10862f04] */
  ECX = (r32((uint32_t)(0x10862f04)));
  /* 1083c480 push ecx */
  push32((uint32_t)(ECX));
  /* 1083c481 call 0x1083e1d0 */
  push32(0x1083c486u); f_1083e1d0();
  /* 1083c486 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c489 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083c48b mov edx, dword ptr [0x10862c64] */
  EDX = (r32((uint32_t)(0x10862c64)));
  /* 1083c491 push edx */
  push32((uint32_t)(EDX));
  /* 1083c492 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1083c497 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1083c49d push eax */
  push32((uint32_t)(EAX));
  /* 1083c49e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1083c4a3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1083c4a9 push ecx */
  push32((uint32_t)(ECX));
  /* 1083c4aa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1083c4af mov edx, dword ptr [0x10862f04] */
  EDX = (r32((uint32_t)(0x10862f04)));
  /* 1083c4b5 push edx */
  push32((uint32_t)(EDX));
  /* 1083c4b6 call 0x1083e1d0 */
  push32(0x1083c4bbu); f_1083e1d0();
  /* 1083c4bb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c4be mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1083c4c8 jmp 0x1083c4d9 */
  goto L_1083c4d9;
L_1083c4ca:;
  /* 1083c4ca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c4d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c4d3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1083c4d9:;
  /* 1083c4d9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c4e3 jae 0x1083c594 */
  if (!C.cf) goto L_1083c594;
  /* 1083c4e9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c4ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1083c4f1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1083c4f9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1083c4fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083c4fe je 0x1083c536 */
  if (C.zf) goto L_1083c536;
  /* 1083c500 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c506 mov cl, byte ptr [eax + 0x10862e01] */
  CL = (r8((uint32_t)(EAX + 0x10862e01)));
  /* 1083c50c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1083c50f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c515 mov byte ptr [edx + 0x10862e01], cl */
  w8((uint32_t)(EDX + 0x10862e01), (CL));
  /* 1083c51b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c521 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c527 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1083c52e mov byte ptr [eax + 0x10862d00], dl */
  w8((uint32_t)(EAX + 0x10862d00), (DL));
  /* 1083c534 jmp 0x1083c58f */
  goto L_1083c58f;
L_1083c536:;
  /* 1083c536 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c53c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1083c53e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1083c546 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1083c549 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083c54b je 0x1083c582 */
  if (C.zf) goto L_1083c582;
  /* 1083c54d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c553 mov al, byte ptr [edx + 0x10862e01] */
  AL = (r8((uint32_t)(EDX + 0x10862e01)));
  /* 1083c559 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1083c55b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c561 mov byte ptr [ecx + 0x10862e01], al */
  w8((uint32_t)(ECX + 0x10862e01), (AL));
  /* 1083c567 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c56d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c573 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1083c57a mov byte ptr [edx + 0x10862d00], cl */
  w8((uint32_t)(EDX + 0x10862d00), (CL));
  /* 1083c580 jmp 0x1083c58f */
  goto L_1083c58f;
L_1083c582:;
  /* 1083c582 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c588 mov byte ptr [edx + 0x10862d00], 0 */
  w8((uint32_t)(EDX + 0x10862d00), (0x0u));
L_1083c58f:;
  /* 1083c58f jmp 0x1083c4ca */
  goto L_1083c4ca;
L_1083c594:;
  /* 1083c594 jmp 0x1083c65e */
  goto L_1083c65e;
L_1083c599:;
  /* 1083c599 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1083c5a3 jmp 0x1083c5b4 */
  goto L_1083c5b4;
L_1083c5a5:;
  /* 1083c5a5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c5ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c5ae mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1083c5b4:;
  /* 1083c5b4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c5be jae 0x1083c65e */
  if (!C.cf) goto L_1083c65e;
  /* 1083c5c4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c5cb jb 0x1083c608 */
  if (C.cf) goto L_1083c608;
  /* 1083c5cd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c5d4 ja 0x1083c608 */
  if ((!C.cf&&!C.zf)) goto L_1083c608;
  /* 1083c5d6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c5dc mov dl, byte ptr [ecx + 0x10862e01] */
  DL = (r8((uint32_t)(ECX + 0x10862e01)));
  /* 1083c5e2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1083c5e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c5eb mov byte ptr [eax + 0x10862e01], dl */
  w8((uint32_t)(EAX + 0x10862e01), (DL));
  /* 1083c5f1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c5f7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c5fa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c600 mov byte ptr [edx + 0x10862d00], cl */
  w8((uint32_t)(EDX + 0x10862d00), (CL));
  /* 1083c606 jmp 0x1083c659 */
  goto L_1083c659;
L_1083c608:;
  /* 1083c608 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c60f jb 0x1083c64c */
  if (C.cf) goto L_1083c64c;
  /* 1083c611 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c618 ja 0x1083c64c */
  if ((!C.cf&&!C.zf)) goto L_1083c64c;
  /* 1083c61a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c620 mov cl, byte ptr [eax + 0x10862e01] */
  CL = (r8((uint32_t)(EAX + 0x10862e01)));
  /* 1083c626 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1083c629 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c62f mov byte ptr [edx + 0x10862e01], cl */
  w8((uint32_t)(EDX + 0x10862e01), (CL));
  /* 1083c635 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c63b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083c63e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c644 mov byte ptr [ecx + 0x10862d00], al */
  w8((uint32_t)(ECX + 0x10862d00), (AL));
  /* 1083c64a jmp 0x1083c659 */
  goto L_1083c659;
L_1083c64c:;
  /* 1083c64c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1083c652 mov byte ptr [edx + 0x10862d00], 0 */
  w8((uint32_t)(EDX + 0x10862d00), (0x0u));
L_1083c659:;
  /* 1083c659 jmp 0x1083c5a5 */
  goto L_1083c5a5;
L_1083c65e:;
  /* 1083c65e mov esp, ebp */
  ESP = (EBP);
  /* 1083c660 pop ebp */
  EBP = (pop32());
  /* 1083c661 ret  */
  ESPCHK(0x1083c360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c670 @ 0x1083c670 (23 bytes, 9 insns) */
void f_1083c670(void) {
  FTRACE(0x1083c670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083c670 push ebp */
  push32((uint32_t)(EBP));
  /* 1083c671 mov ebp, esp */
  EBP = (ESP);
  /* 1083c673 cmp dword ptr [0x10862cec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10862cec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c67a je 0x1083c683 */
  if (C.zf) goto L_1083c683;
  /* 1083c67c mov eax, dword ptr [0x10862c64] */
  EAX = (r32((uint32_t)(0x10862c64)));
  /* 1083c681 jmp 0x1083c685 */
  goto L_1083c685;
L_1083c683:;
  /* 1083c683 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1083c685:;
  /* 1083c685 pop ebp */
  EBP = (pop32());
  /* 1083c686 ret  */
  ESPCHK(0x1083c670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c690 @ 0x1083c690 (34 bytes, 10 insns) */
void f_1083c690(void) {
  FTRACE(0x1083c690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083c690 push ebp */
  push32((uint32_t)(EBP));
  /* 1083c691 mov ebp, esp */
  EBP = (ESP);
  /* 1083c693 cmp dword ptr [0x108630b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108630b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c69a jne 0x1083c6b0 */
  if (!C.zf) goto L_1083c6b0;
  /* 1083c69c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1083c69e call 0x1083beb0 */
  push32(0x1083c6a3u); f_1083beb0();
  /* 1083c6a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c6a6 mov dword ptr [0x108630b0], 1 */
  w32((uint32_t)(0x108630b0), (0x1u));
L_1083c6b0:;
  /* 1083c6b0 pop ebp */
  EBP = (pop32());
  /* 1083c6b1 ret  */
  ESPCHK(0x1083c690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6c0 @ 0x1083c6c0 (664 bytes, 265 insns) [15 switch table(s)] */
void f_1083c6c0(void) {
  FTRACE(0x1083c6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083c6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083c6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1083c6c3 push edi */
  push32((uint32_t)(EDI));
  /* 1083c6c4 push esi */
  push32((uint32_t)(ESI));
  /* 1083c6c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1083c6c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083c6cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1083c6ce mov eax, ecx */
  EAX = (ECX);
  /* 1083c6d0 mov edx, ecx */
  EDX = (ECX);
  /* 1083c6d2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c6d4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c6d6 jbe 0x1083c6e0 */
  if ((C.cf||C.zf)) goto L_1083c6e0;
  /* 1083c6d8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c6da jb 0x1083c858 */
  if (C.cf) goto L_1083c858;
L_1083c6e0:;
  /* 1083c6e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1083c6e6 jne 0x1083c6fc */
  if (!C.zf) goto L_1083c6fc;
  /* 1083c6e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1083c6eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1083c6ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c6f1 jb 0x1083c71c */
  if (C.cf) goto L_1083c71c;
  /* 1083c6f3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1083c6f5 jmp dword ptr [edx*4 + 0x1083c808] */
  switch (EDX) {
    case 0: goto L_1083c818;
    case 1: goto L_1083c820;
    case 2: goto L_1083c82c;
    case 3: goto L_1083c840;
    default: x86_unimpl("switch@0x1083c6f5 out of table"); return;
  }
L_1083c6fc:;
  /* 1083c6fc mov eax, edi */
  EAX = (EDI);
  /* 1083c6fe mov edx, 3 */
  EDX = (0x3u);
  /* 1083c703 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083c706 jb 0x1083c714 */
  if (C.cf) goto L_1083c714;
  /* 1083c708 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1083c70b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c70d jmp dword ptr [eax*4 + 0x1083c720] */
  switch (EAX) {
    case 1: goto L_1083c730;
    case 2: goto L_1083c75c;
    case 3: goto L_1083c780;
    default: x86_unimpl("switch@0x1083c70d out of table"); return;
  }
L_1083c714:;
  /* 1083c714 jmp dword ptr [ecx*4 + 0x1083c818] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1083c818)))); return;
  /* 1083c71b nop  */
  /* nop */
L_1083c71c:;
  /* 1083c71c jmp dword ptr [ecx*4 + 0x1083c79c] */
  switch (ECX) {
    case 0: goto L_1083c7ff;
    case 1: goto L_1083c7ec;
    case 2: goto L_1083c7e4;
    case 3: goto L_1083c7dc;
    case 4: goto L_1083c7d4;
    case 5: goto L_1083c7cc;
    case 6: goto L_1083c7c4;
    case 7: goto L_1083c7bc;
    default: x86_unimpl("switch@0x1083c71c out of table"); return;
  }
  /* 1083c723 nop  */
  /* nop */
L_1083c730:;
  /* 1083c730 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1083c732 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1083c734 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1083c736 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1083c739 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1083c73c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1083c73f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1083c742 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1083c745 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c748 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c74b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c74e jb 0x1083c71c */
  if (C.cf) goto L_1083c71c;
  /* 1083c750 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1083c752 jmp dword ptr [edx*4 + 0x1083c808] */
  switch (EDX) {
    case 0: goto L_1083c818;
    case 1: goto L_1083c820;
    case 2: goto L_1083c82c;
    case 3: goto L_1083c840;
    default: x86_unimpl("switch@0x1083c752 out of table"); return;
  }
  /* 1083c759 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1083c75c:;
  /* 1083c75c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1083c75e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1083c760 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1083c762 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1083c765 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1083c768 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1083c76b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c76e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c771 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c774 jb 0x1083c71c */
  if (C.cf) goto L_1083c71c;
  /* 1083c776 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1083c778 jmp dword ptr [edx*4 + 0x1083c808] */
  switch (EDX) {
    case 0: goto L_1083c818;
    case 1: goto L_1083c820;
    case 2: goto L_1083c82c;
    case 3: goto L_1083c840;
    default: x86_unimpl("switch@0x1083c778 out of table"); return;
  }
  /* 1083c77f nop  */
  /* nop */
L_1083c780:;
  /* 1083c780 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1083c782 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1083c784 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1083c786 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1083c787 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1083c78a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1083c78b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c78e jb 0x1083c71c */
  if (C.cf) goto L_1083c71c;
  /* 1083c790 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1083c792 jmp dword ptr [edx*4 + 0x1083c808] */
  switch (EDX) {
    case 0: goto L_1083c818;
    case 1: goto L_1083c820;
    case 2: goto L_1083c82c;
    case 3: goto L_1083c840;
    default: x86_unimpl("switch@0x1083c792 out of table"); return;
  }
  /* 1083c799 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1083c7bc:;
  /* 1083c7bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1083c7c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1083c7c4:;
  /* 1083c7c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1083c7c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1083c7cc:;
  /* 1083c7cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1083c7d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1083c7d4:;
  /* 1083c7d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1083c7d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1083c7dc:;
  /* 1083c7dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1083c7e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1083c7e4:;
  /* 1083c7e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1083c7e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1083c7ec:;
  /* 1083c7ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1083c7f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1083c7f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1083c7fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c7fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1083c7ff:;
  /* 1083c7ff jmp dword ptr [edx*4 + 0x1083c808] */
  switch (EDX) {
    case 0: goto L_1083c818;
    case 1: goto L_1083c820;
    case 2: goto L_1083c82c;
    case 3: goto L_1083c840;
    default: x86_unimpl("switch@0x1083c7ff out of table"); return;
  }
  /* 1083c806 mov edi, edi */
  EDI = (EDI);
L_1083c818:;
  /* 1083c818 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083c81b pop esi */
  ESI = (pop32());
  /* 1083c81c pop edi */
  EDI = (pop32());
  /* 1083c81d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083c81e ret  */
  ESPCHK(0x1083c6c0u, _esp0);
  ESP += 4; return;
  /* 1083c81f nop  */
  /* nop */
L_1083c820:;
  /* 1083c820 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1083c822 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1083c824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083c827 pop esi */
  ESI = (pop32());
  /* 1083c828 pop edi */
  EDI = (pop32());
  /* 1083c829 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083c82a ret  */
  ESPCHK(0x1083c6c0u, _esp0);
  ESP += 4; return;
  /* 1083c82b nop  */
  /* nop */
L_1083c82c:;
  /* 1083c82c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1083c82e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1083c830 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1083c833 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1083c836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083c839 pop esi */
  ESI = (pop32());
  /* 1083c83a pop edi */
  EDI = (pop32());
  /* 1083c83b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083c83c ret  */
  ESPCHK(0x1083c6c0u, _esp0);
  ESP += 4; return;
  /* 1083c83d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1083c840:;
  /* 1083c840 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1083c842 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1083c844 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1083c847 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1083c84a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1083c84d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1083c850 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083c853 pop esi */
  ESI = (pop32());
  /* 1083c854 pop edi */
  EDI = (pop32());
  /* 1083c855 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083c856 ret  */
  ESPCHK(0x1083c6c0u, _esp0);
  ESP += 4; return;
  /* 1083c857 nop  */
  /* nop */
L_1083c858:;
  /* 1083c858 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1083c85c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1083c860 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1083c866 jne 0x1083c88c */
  if (!C.zf) goto L_1083c88c;
  /* 1083c868 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1083c86b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1083c86e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c871 jb 0x1083c880 */
  if (C.cf) goto L_1083c880;
  /* 1083c873 std  */
  C.df=1;
  /* 1083c874 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1083c876 cld  */
  C.df=0;
  /* 1083c877 jmp dword ptr [edx*4 + 0x1083c9a0] */
  switch (EDX) {
    case 0: goto L_1083c9b0;
    case 1: goto L_1083c9b8;
    case 2: goto L_1083c9c8;
    case 3: goto L_1083c9dc;
    default: x86_unimpl("switch@0x1083c877 out of table"); return;
  }
  /* 1083c87e mov edi, edi */
  EDI = (EDI);
L_1083c880:;
  /* 1083c880 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1083c882 jmp dword ptr [ecx*4 + 0x1083c950] */
  switch (ECX) {
    case 0: goto L_1083c997;
    default: x86_unimpl("switch@0x1083c882 out of table"); return;
  }
  /* 1083c889 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1083c88c:;
  /* 1083c88c mov eax, edi */
  EAX = (EDI);
  /* 1083c88e mov edx, 3 */
  EDX = (0x3u);
  /* 1083c893 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c896 jb 0x1083c8a4 */
  if (C.cf) goto L_1083c8a4;
  /* 1083c898 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1083c89b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083c89d jmp dword ptr [eax*4 + 0x1083c8a8] */
  switch (EAX) {
    case 1: goto L_1083c8b8;
    case 2: goto L_1083c8d8;
    case 3: goto L_1083c900;
    default: x86_unimpl("switch@0x1083c89d out of table"); return;
  }
L_1083c8a4:;
  /* 1083c8a4 jmp dword ptr [ecx*4 + 0x1083c9a0] */
  switch (ECX) {
    case 0: goto L_1083c9b0;
    case 1: goto L_1083c9b8;
    case 2: goto L_1083c9c8;
    case 3: goto L_1083c9dc;
    default: x86_unimpl("switch@0x1083c8a4 out of table"); return;
  }
  /* 1083c8ab nop  */
  /* nop */
L_1083c8b8:;
  /* 1083c8b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1083c8bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1083c8bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1083c8c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1083c8c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1083c8c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1083c8c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c8c8 jb 0x1083c880 */
  if (C.cf) goto L_1083c880;
  /* 1083c8ca std  */
  C.df=1;
  /* 1083c8cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1083c8cd cld  */
  C.df=0;
  /* 1083c8ce jmp dword ptr [edx*4 + 0x1083c9a0] */
  switch (EDX) {
    case 0: goto L_1083c9b0;
    case 1: goto L_1083c9b8;
    case 2: goto L_1083c9c8;
    case 3: goto L_1083c9dc;
    default: x86_unimpl("switch@0x1083c8ce out of table"); return;
  }
  /* 1083c8d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1083c8d8:;
  /* 1083c8d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1083c8db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1083c8dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1083c8e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1083c8e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1083c8e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1083c8e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083c8ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083c8ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c8f2 jb 0x1083c880 */
  if (C.cf) goto L_1083c880;
  /* 1083c8f4 std  */
  C.df=1;
  /* 1083c8f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1083c8f7 cld  */
  C.df=0;
  /* 1083c8f8 jmp dword ptr [edx*4 + 0x1083c9a0] */
  switch (EDX) {
    case 0: goto L_1083c9b0;
    case 1: goto L_1083c9b8;
    case 2: goto L_1083c9c8;
    case 3: goto L_1083c9dc;
    default: x86_unimpl("switch@0x1083c8f8 out of table"); return;
  }
  /* 1083c8ff nop  */
  /* nop */
L_1083c900:;
  /* 1083c900 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1083c903 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1083c905 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1083c908 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1083c90b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1083c90e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1083c911 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1083c914 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1083c917 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083c91a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083c91d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083c920 jb 0x1083c880 */
  if (C.cf) goto L_1083c880;
  /* 1083c926 std  */
  C.df=1;
  /* 1083c927 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1083c929 cld  */
  C.df=0;
  /* 1083c92a jmp dword ptr [edx*4 + 0x1083c9a0] */
  switch (EDX) {
    case 0: goto L_1083c9b0;
    case 1: goto L_1083c9b8;
    case 2: goto L_1083c9c8;
    case 3: goto L_1083c9dc;
    default: x86_unimpl("switch@0x1083c92a out of table"); return;
  }
  /* 1083c931 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1083c934 push esp */
  push32((uint32_t)(ESP));
  /* 1083c935 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083c936 adc dword ptr [eax], 0x5c */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x5cu),_r=_a+_b+C.cf; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1083c939 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083c93a adc dword ptr [eax], 0x64 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x64u),_r=_a+_b+C.cf; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1083c93d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083c93e adc dword ptr [eax], 0x6c */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x6cu),_r=_a+_b+C.cf; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1083c941 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083c942 adc dword ptr [eax], 0x74 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x74u),_r=_a+_b+C.cf; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1083c945 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083c946 adc dword ptr [eax], 0x7c */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x7cu),_r=_a+_b+C.cf; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1083c949 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083c94a adc dword ptr [eax], -0x7c */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffff84u),_r=_a+_b+C.cf; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1083c94d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083c954 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1083c958 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1083c95c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1083c960 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1083c964 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1083c968 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1083c96c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1083c970 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1083c974 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1083c978 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1083c97c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1083c980 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1083c984 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1083c988 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1083c98c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1083c993 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1083c995 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1083c997:;
  /* 1083c997 jmp dword ptr [edx*4 + 0x1083c9a0] */
  switch (EDX) {
    case 0: goto L_1083c9b0;
    case 1: goto L_1083c9b8;
    case 2: goto L_1083c9c8;
    case 3: goto L_1083c9dc;
    default: x86_unimpl("switch@0x1083c997 out of table"); return;
  }
  /* 1083c99e mov edi, edi */
  EDI = (EDI);
L_1083c9b0:;
  /* 1083c9b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083c9b3 pop esi */
  ESI = (pop32());
  /* 1083c9b4 pop edi */
  EDI = (pop32());
  /* 1083c9b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083c9b6 ret  */
  ESPCHK(0x1083c6c0u, _esp0);
  ESP += 4; return;
  /* 1083c9b7 nop  */
  /* nop */
L_1083c9b8:;
  /* 1083c9b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1083c9bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1083c9be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083c9c1 pop esi */
  ESI = (pop32());
  /* 1083c9c2 pop edi */
  EDI = (pop32());
  /* 1083c9c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083c9c4 ret  */
  ESPCHK(0x1083c6c0u, _esp0);
  ESP += 4; return;
  /* 1083c9c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1083c9c8:;
  /* 1083c9c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1083c9cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1083c9ce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1083c9d1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1083c9d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083c9d7 pop esi */
  ESI = (pop32());
  /* 1083c9d8 pop edi */
  EDI = (pop32());
  /* 1083c9d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083c9da ret  */
  ESPCHK(0x1083c6c0u, _esp0);
  ESP += 4; return;
  /* 1083c9db nop  */
  /* nop */
L_1083c9dc:;
  /* 1083c9dc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1083c9df mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1083c9e2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1083c9e5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1083c9e8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1083c9eb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1083c9ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083c9f1 pop esi */
  ESI = (pop32());
  /* 1083c9f2 pop edi */
  EDI = (pop32());
  /* 1083c9f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083c9f4 ret  */
  ESPCHK(0x1083c6c0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1083ca00 (104 bytes, 43 insns) */
void f_1083ca00(void) {
  FTRACE(0x1083ca00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083ca00 push ebx */
  push32((uint32_t)(EBX));
  /* 1083ca01 push esi */
  push32((uint32_t)(ESI));
  /* 1083ca02 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1083ca06 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083ca08 jne 0x1083ca22 */
  if (!C.zf) goto L_1083ca22;
  /* 1083ca0a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1083ca0e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1083ca12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1083ca14 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1083ca16 mov ebx, eax */
  EBX = (EAX);
  /* 1083ca18 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1083ca1c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1083ca1e mov edx, ebx */
  EDX = (EBX);
  /* 1083ca20 jmp 0x1083ca63 */
  goto L_1083ca63;
L_1083ca22:;
  /* 1083ca22 mov ecx, eax */
  ECX = (EAX);
  /* 1083ca24 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1083ca28 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1083ca2c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1083ca30:;
  /* 1083ca30 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1083ca32 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1083ca34 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1083ca36 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1083ca38 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1083ca3a jne 0x1083ca30 */
  if (!C.zf) goto L_1083ca30;
  /* 1083ca3c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1083ca3e mov esi, eax */
  ESI = (EAX);
  /* 1083ca40 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1083ca44 mov ecx, eax */
  ECX = (EAX);
  /* 1083ca46 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1083ca4a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1083ca4c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ca4e jb 0x1083ca5e */
  if (C.cf) goto L_1083ca5e;
  /* 1083ca50 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ca54 ja 0x1083ca5e */
  if ((!C.cf&&!C.zf)) goto L_1083ca5e;
  /* 1083ca56 jb 0x1083ca5f */
  if (C.cf) goto L_1083ca5f;
  /* 1083ca58 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ca5c jbe 0x1083ca5f */
  if ((C.cf||C.zf)) goto L_1083ca5f;
L_1083ca5e:;
  /* 1083ca5e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1083ca5f:;
  /* 1083ca5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1083ca61 mov eax, esi */
  EAX = (ESI);
L_1083ca63:;
  /* 1083ca63 pop esi */
  ESI = (pop32());
  /* 1083ca64 pop ebx */
  EBX = (pop32());
  /* 1083ca65 ret 0x10 */
  ESPCHK(0x1083ca00u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1083ca70 (117 bytes, 44 insns) */
void f_1083ca70(void) {
  FTRACE(0x1083ca70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083ca70 push ebx */
  push32((uint32_t)(EBX));
  /* 1083ca71 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1083ca75 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083ca77 jne 0x1083ca91 */
  if (!C.zf) goto L_1083ca91;
  /* 1083ca79 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1083ca7d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1083ca81 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1083ca83 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1083ca85 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1083ca89 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1083ca8b mov eax, edx */
  EAX = (EDX);
  /* 1083ca8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1083ca8f jmp 0x1083cae1 */
  goto L_1083cae1;
L_1083ca91:;
  /* 1083ca91 mov ecx, eax */
  ECX = (EAX);
  /* 1083ca93 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1083ca97 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1083ca9b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1083ca9f:;
  /* 1083ca9f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1083caa1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1083caa3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1083caa5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1083caa7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1083caa9 jne 0x1083ca9f */
  if (!C.zf) goto L_1083ca9f;
  /* 1083caab div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1083caad mov ecx, eax */
  ECX = (EAX);
  /* 1083caaf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1083cab3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1083cab4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1083cab8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083caba jb 0x1083caca */
  if (C.cf) goto L_1083caca;
  /* 1083cabc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083cac0 ja 0x1083caca */
  if ((!C.cf&&!C.zf)) goto L_1083caca;
  /* 1083cac2 jb 0x1083cad2 */
  if (C.cf) goto L_1083cad2;
  /* 1083cac4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083cac8 jbe 0x1083cad2 */
  if ((C.cf||C.zf)) goto L_1083cad2;
L_1083caca:;
  /* 1083caca sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083cace sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1083cad2:;
  /* 1083cad2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083cad6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083cada neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1083cadc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1083cade sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1083cae1:;
  /* 1083cae1 pop ebx */
  EBX = (pop32());
  /* 1083cae2 ret 0x10 */
  ESPCHK(0x1083ca70u, _esp0);
  ESP += 20; return;
}

/* FUN_1000caf0 @ 0x1083caf0 (628 bytes, 214 insns) */
void f_1083caf0(void) {
  FTRACE(0x1083caf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083caf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083caf1 mov ebp, esp */
  EBP = (ESP);
  /* 1083caf3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083caf6 push ebx */
  push32((uint32_t)(EBX));
  /* 1083caf7 push esi */
  push32((uint32_t)(ESI));
  /* 1083caf8 push edi */
  push32((uint32_t)(EDI));
L_1083caf9:;
  /* 1083caf9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083cafd jne 0x1083cb1d */
  if (!C.zf) goto L_1083cb1d;
  /* 1083caff push 0x1085d1a8 */
  push32((uint32_t)(0x1085d1a8u));
  /* 1083cb04 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083cb06 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1083cb08 push 0x1085d19c */
  push32((uint32_t)(0x1085d19cu));
  /* 1083cb0d push 2 */
  push32((uint32_t)(0x2u));
  /* 1083cb0f call 0x10834ea0 */
  push32(0x1083cb14u); f_10834ea0();
  /* 1083cb14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083cb17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083cb1a jne 0x1083cb1d */
  if (!C.zf) goto L_1083cb1d;
  /* 1083cb1c int3  */
  x86_unimpl("int3 @ 0x1083cb1c");
L_1083cb1d:;
  /* 1083cb1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083cb1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083cb21 jne 0x1083caf9 */
  if (!C.zf) goto L_1083caf9;
  /* 1083cb23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083cb26 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1083cb29 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cb2c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1083cb2f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1083cb32 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cb35 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1083cb38 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1083cb3e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083cb40 je 0x1083cb4f */
  if (C.zf) goto L_1083cb4f;
  /* 1083cb42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cb45 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1083cb48 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1083cb4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083cb4d je 0x1083cb65 */
  if (C.zf) goto L_1083cb65;
L_1083cb4f:;
  /* 1083cb4f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cb52 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1083cb55 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1083cb57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cb5a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1083cb5d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083cb60 jmp 0x1083cd5d */
  goto L_1083cd5d;
L_1083cb65:;
  /* 1083cb65 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cb68 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1083cb6b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1083cb6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083cb70 je 0x1083cbbc */
  if (C.zf) goto L_1083cbbc;
  /* 1083cb72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cb75 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1083cb7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cb7f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1083cb82 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1083cb85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083cb87 je 0x1083cba5 */
  if (C.zf) goto L_1083cba5;
  /* 1083cb89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cb8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cb8f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1083cb92 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1083cb94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cb97 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1083cb9a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1083cb9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cba0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1083cba3 jmp 0x1083cbbc */
  goto L_1083cbbc;
L_1083cba5:;
  /* 1083cba5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cba8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1083cbab or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1083cbae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cbb1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1083cbb4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083cbb7 jmp 0x1083cd5d */
  goto L_1083cd5d;
L_1083cbbc:;
  /* 1083cbbc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cbbf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1083cbc2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1083cbc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cbc8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1083cbcb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cbce mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1083cbd1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1083cbd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cbd7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1083cbda mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cbdd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1083cbe4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1083cbeb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083cbee mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1083cbf1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cbf4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1083cbf7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1083cbfd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083cbff jne 0x1083cc2f */
  if (!C.zf) goto L_1083cc2f;
  /* 1083cc01 cmp dword ptr [ebp - 8], 0x10860140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10860140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083cc08 je 0x1083cc13 */
  if (C.zf) goto L_1083cc13;
  /* 1083cc0a cmp dword ptr [ebp - 8], 0x10860160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10860160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083cc11 jne 0x1083cc23 */
  if (!C.zf) goto L_1083cc23;
L_1083cc13:;
  /* 1083cc13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083cc16 push edx */
  push32((uint32_t)(EDX));
  /* 1083cc17 call 0x1083ea60 */
  push32(0x1083cc1cu); f_1083ea60();
  /* 1083cc1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083cc1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083cc21 jne 0x1083cc2f */
  if (!C.zf) goto L_1083cc2f;
L_1083cc23:;
  /* 1083cc23 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cc26 push eax */
  push32((uint32_t)(EAX));
  /* 1083cc27 call 0x1083e990 */
  push32(0x1083cc2cu); f_1083e990();
  /* 1083cc2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083cc2f:;
  /* 1083cc2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cc32 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1083cc35 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1083cc3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083cc3d je 0x1083cd1b */
  if (C.zf) goto L_1083cd1b;
L_1083cc43:;
  /* 1083cc43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cc46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cc49 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1083cc4b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083cc4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083cc50 jge 0x1083cc73 */
  if ((C.sf==C.of)) goto L_1083cc73;
  /* 1083cc52 push 0x1085d15c */
  push32((uint32_t)(0x1085d15cu));
  /* 1083cc57 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083cc59 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1083cc5e push 0x1085d19c */
  push32((uint32_t)(0x1085d19cu));
  /* 1083cc63 push 2 */
  push32((uint32_t)(0x2u));
  /* 1083cc65 call 0x10834ea0 */
  push32(0x1083cc6au); f_10834ea0();
  /* 1083cc6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083cc6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083cc70 jne 0x1083cc73 */
  if (!C.zf) goto L_1083cc73;
  /* 1083cc72 int3  */
  x86_unimpl("int3 @ 0x1083cc72");
L_1083cc73:;
  /* 1083cc73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083cc75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083cc77 jne 0x1083cc43 */
  if (!C.zf) goto L_1083cc43;
  /* 1083cc79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cc7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cc7f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1083cc81 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083cc84 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083cc87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cc8a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1083cc8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083cc90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cc93 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1083cc95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cc98 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1083cc9b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083cc9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cca1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1083cca4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083cca8 jle 0x1083ccc6 */
  if ((C.zf||C.sf!=C.of)) goto L_1083ccc6;
  /* 1083ccaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ccad push ecx */
  push32((uint32_t)(ECX));
  /* 1083ccae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083ccb1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1083ccb4 push eax */
  push32((uint32_t)(EAX));
  /* 1083ccb5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ccb8 push ecx */
  push32((uint32_t)(ECX));
  /* 1083ccb9 call 0x1083e680 */
  push32(0x1083ccbeu); f_1083e680();
  /* 1083ccbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ccc1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1083ccc4 jmp 0x1083cd0e */
  goto L_1083cd0e;
L_1083ccc6:;
  /* 1083ccc6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ccca je 0x1083cce9 */
  if (C.zf) goto L_1083cce9;
  /* 1083cccc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083cccf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1083ccd2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083ccd5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1083ccd8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083ccdb mov ecx, dword ptr [edx*4 + 0x10862f60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10862f60)));
  /* 1083cce2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083cce4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1083cce7 jmp 0x1083ccf0 */
  goto L_1083ccf0;
L_1083cce9:;
  /* 1083cce9 mov dword ptr [ebp - 0x14], 0x1085fa60 */
  w32((uint32_t)(EBP + -0x14), (0x1085fa60u));
L_1083ccf0:;
  /* 1083ccf0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083ccf3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1083ccf7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1083ccfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083ccfc je 0x1083cd0e */
  if (C.zf) goto L_1083cd0e;
  /* 1083ccfe push 2 */
  push32((uint32_t)(0x2u));
  /* 1083cd00 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083cd02 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083cd05 push ecx */
  push32((uint32_t)(ECX));
  /* 1083cd06 call 0x1083e530 */
  push32(0x1083cd0bu); f_1083e530();
  /* 1083cd0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083cd0e:;
  /* 1083cd0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cd11 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1083cd14 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1083cd17 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1083cd19 jmp 0x1083cd39 */
  goto L_1083cd39;
L_1083cd1b:;
  /* 1083cd1b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1083cd22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083cd25 push edx */
  push32((uint32_t)(EDX));
  /* 1083cd26 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1083cd29 push eax */
  push32((uint32_t)(EAX));
  /* 1083cd2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083cd2d push ecx */
  push32((uint32_t)(ECX));
  /* 1083cd2e call 0x1083e680 */
  push32(0x1083cd33u); f_1083e680();
  /* 1083cd33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083cd36 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1083cd39:;
  /* 1083cd39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083cd3c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083cd3f je 0x1083cd55 */
  if (C.zf) goto L_1083cd55;
  /* 1083cd41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cd44 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1083cd47 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1083cd4a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083cd4d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1083cd50 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083cd53 jmp 0x1083cd5d */
  goto L_1083cd5d;
L_1083cd55:;
  /* 1083cd55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083cd58 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1083cd5d:;
  /* 1083cd5d pop edi */
  EDI = (pop32());
  /* 1083cd5e pop esi */
  ESI = (pop32());
  /* 1083cd5f pop ebx */
  EBX = (pop32());
  /* 1083cd60 mov esp, ebp */
  ESP = (EBP);
  /* 1083cd62 pop ebp */
  EBP = (pop32());
  /* 1083cd63 ret  */
  ESPCHK(0x1083caf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd70 @ 0x1083cd70 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1083cd70(void) {
  FTRACE(0x1083cd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083cd70 push ebp */
  push32((uint32_t)(EBP));
  /* 1083cd71 mov ebp, esp */
  EBP = (ESP);
  /* 1083cd73 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083cd79 push ebx */
  push32((uint32_t)(EBX));
  /* 1083cd7a push esi */
  push32((uint32_t)(ESI));
  /* 1083cd7b push edi */
  push32((uint32_t)(EDI));
  /* 1083cd7c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1083cd83 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1083cd8d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1083cd94:;
  /* 1083cd94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083cd97 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1083cd99 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1083cd9c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1083cda0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083cda3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083cda6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1083cda9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083cdab je 0x1083d987 */
  if (C.zf) goto L_1083d987;
  /* 1083cdb1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083cdb8 jl 0x1083d987 */
  if ((C.sf!=C.of)) goto L_1083d987;
  /* 1083cdbe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1083cdc2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083cdc5 jl 0x1083cde6 */
  if ((C.sf!=C.of)) goto L_1083cde6;
  /* 1083cdc7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1083cdcb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083cdce jg 0x1083cde6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1083cde6;
  /* 1083cdd0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1083cdd4 movsx ecx, byte ptr [eax + 0x1085d194] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1085d194))));
  /* 1083cddb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1083cdde mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1083cde4 jmp 0x1083cdf0 */
  goto L_1083cdf0;
L_1083cde6:;
  /* 1083cde6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1083cdf0:;
  /* 1083cdf0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1083cdf6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1083cdf9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083cdfc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083cdff movsx edx, byte ptr [ecx + eax*8 + 0x1085d1b4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1085d1b4))));
  /* 1083ce07 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1083ce0a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1083ce0d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083ce10 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1083ce16 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ce1d ja 0x1083d982 */
  if ((!C.cf&&!C.zf)) goto L_1083d982;
  /* 1083ce23 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1083ce29 jmp dword ptr [ecx*4 + 0x1083d994] */
  switch (ECX) {
    case 0: goto L_1083ce30;
    case 1: goto L_1083ceca;
    case 2: goto L_1083cf0c;
    case 3: goto L_1083cf7b;
    case 4: goto L_1083cfd3;
    case 5: goto L_1083cfe2;
    case 6: goto L_1083d02e;
    case 7: goto L_1083d0c1;
    case 8: goto L_1083cf58;
    case 9: goto L_1083cf63;
    case 10: goto L_1083cf4e;
    case 11: goto L_1083cf43;
    case 12: goto L_1083cf6e;
    case 13: goto L_1083cf76;
    default: x86_unimpl("switch@0x1083ce29 out of table"); return;
  }
L_1083ce30:;
  /* 1083ce30 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1083ce37 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083ce3a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1083ce40 mov eax, dword ptr [0x1085fc98] */
  EAX = (r32((uint32_t)(0x1085fc98)));
  /* 1083ce45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1083ce47 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1083ce4b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1083ce51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083ce53 je 0x1083cead */
  if (C.zf) goto L_1083cead;
  /* 1083ce55 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1083ce5b push edx */
  push32((uint32_t)(EDX));
  /* 1083ce5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083ce5f push eax */
  push32((uint32_t)(EAX));
  /* 1083ce60 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1083ce64 push ecx */
  push32((uint32_t)(ECX));
  /* 1083ce65 call 0x1083daa0 */
  push32(0x1083ce6au); f_1083daa0();
  /* 1083ce6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ce6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083ce70 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1083ce72 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1083ce75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083ce78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ce7b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1083ce7e:;
  /* 1083ce7e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1083ce82 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083ce84 jne 0x1083cea7 */
  if (!C.zf) goto L_1083cea7;
  /* 1083ce86 push 0x1085d234 */
  push32((uint32_t)(0x1085d234u));
  /* 1083ce8b push 0 */
  push32((uint32_t)(0x0u));
  /* 1083ce8d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1083ce92 push 0x1085d228 */
  push32((uint32_t)(0x1085d228u));
  /* 1083ce97 push 2 */
  push32((uint32_t)(0x2u));
  /* 1083ce99 call 0x10834ea0 */
  push32(0x1083ce9eu); f_10834ea0();
  /* 1083ce9e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083cea1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083cea4 jne 0x1083cea7 */
  if (!C.zf) goto L_1083cea7;
  /* 1083cea6 int3  */
  x86_unimpl("int3 @ 0x1083cea6");
L_1083cea7:;
  /* 1083cea7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083cea9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083ceab jne 0x1083ce7e */
  if (!C.zf) goto L_1083ce7e;
L_1083cead:;
  /* 1083cead lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1083ceb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1083ceb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083ceb7 push edx */
  push32((uint32_t)(EDX));
  /* 1083ceb8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1083cebc push eax */
  push32((uint32_t)(EAX));
  /* 1083cebd call 0x1083daa0 */
  push32(0x1083cec2u); f_1083daa0();
  /* 1083cec2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083cec5 jmp 0x1083d982 */
  goto L_1083d982;
L_1083ceca:;
  /* 1083ceca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1083ced1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083ced4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1083ceda mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1083cee0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1083cee6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1083ceec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1083ceef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1083cef6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1083cf00 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1083cf07 jmp 0x1083d982 */
  goto L_1083d982;
L_1083cf0c:;
  /* 1083cf0c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1083cf10 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1083cf16 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1083cf1c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083cf1f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1083cf25 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083cf2c ja 0x1083cf76 */
  if ((!C.cf&&!C.zf)) goto L_1083cf76;
  /* 1083cf2e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1083cf34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083cf36 mov al, byte ptr [ecx + 0x1083d9cc] */
  AL = (r8((uint32_t)(ECX + 0x1083d9cc)));
  /* 1083cf3c jmp dword ptr [eax*4 + 0x1083d9b4] */
  switch (EAX) {
    case 0: goto L_1083cf58;
    case 1: goto L_1083cf63;
    case 2: goto L_1083cf4e;
    case 3: goto L_1083cf43;
    case 4: goto L_1083cf6e;
    case 5: goto L_1083cf76;
    default: x86_unimpl("switch@0x1083cf3c out of table"); return;
  }
L_1083cf43:;
  /* 1083cf43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083cf46 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1083cf49 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1083cf4c jmp 0x1083cf76 */
  goto L_1083cf76;
L_1083cf4e:;
  /* 1083cf4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083cf51 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1083cf53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083cf56 jmp 0x1083cf76 */
  goto L_1083cf76;
L_1083cf58:;
  /* 1083cf58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083cf5b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1083cf5e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1083cf61 jmp 0x1083cf76 */
  goto L_1083cf76;
L_1083cf63:;
  /* 1083cf63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083cf66 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1083cf69 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1083cf6c jmp 0x1083cf76 */
  goto L_1083cf76;
L_1083cf6e:;
  /* 1083cf6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083cf71 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1083cf73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1083cf76:;
  /* 1083cf76 jmp 0x1083d982 */
  goto L_1083d982;
L_1083cf7b:;
  /* 1083cf7b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1083cf7f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083cf82 jne 0x1083cfb7 */
  if (!C.zf) goto L_1083cfb7;
  /* 1083cf84 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1083cf87 push edx */
  push32((uint32_t)(EDX));
  /* 1083cf88 call 0x1083dbb0 */
  push32(0x1083cf8du); f_1083dbb0();
  /* 1083cf8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083cf90 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1083cf96 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083cf9d jge 0x1083cfb5 */
  if ((C.sf==C.of)) goto L_1083cfb5;
  /* 1083cf9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083cfa2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1083cfa4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083cfa7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1083cfad neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1083cfaf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1083cfb5:;
  /* 1083cfb5 jmp 0x1083cfce */
  goto L_1083cfce;
L_1083cfb7:;
  /* 1083cfb7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1083cfbd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083cfc0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1083cfc4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1083cfc8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1083cfce:;
  /* 1083cfce jmp 0x1083d982 */
  goto L_1083d982;
L_1083cfd3:;
  /* 1083cfd3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1083cfdd jmp 0x1083d982 */
  goto L_1083d982;
L_1083cfe2:;
  /* 1083cfe2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1083cfe6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083cfe9 jne 0x1083d012 */
  if (!C.zf) goto L_1083d012;
  /* 1083cfeb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1083cfee push eax */
  push32((uint32_t)(EAX));
  /* 1083cfef call 0x1083dbb0 */
  push32(0x1083cff4u); f_1083dbb0();
  /* 1083cff4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083cff7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1083cffd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d004 jge 0x1083d010 */
  if ((C.sf==C.of)) goto L_1083d010;
  /* 1083d006 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1083d010:;
  /* 1083d010 jmp 0x1083d029 */
  goto L_1083d029;
L_1083d012:;
  /* 1083d012 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1083d018 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083d01b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1083d01f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1083d023 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1083d029:;
  /* 1083d029 jmp 0x1083d982 */
  goto L_1083d982;
L_1083d02e:;
  /* 1083d02e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1083d032 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1083d038 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1083d03e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083d041 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1083d047 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d04e ja 0x1083d0bc */
  if ((!C.cf&&!C.zf)) goto L_1083d0bc;
  /* 1083d050 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1083d056 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083d058 mov al, byte ptr [ecx + 0x1083d9f1] */
  AL = (r8((uint32_t)(ECX + 0x1083d9f1)));
  /* 1083d05e jmp dword ptr [eax*4 + 0x1083d9dd] */
  switch (EAX) {
    case 0: goto L_1083d070;
    case 1: goto L_1083d0a9;
    case 2: goto L_1083d065;
    case 3: goto L_1083d0b3;
    case 4: goto L_1083d0bc;
    default: x86_unimpl("switch@0x1083d05e out of table"); return;
  }
L_1083d065:;
  /* 1083d065 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d068 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1083d06b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1083d06e jmp 0x1083d0bc */
  goto L_1083d0bc;
L_1083d070:;
  /* 1083d070 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083d073 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1083d076 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d079 jne 0x1083d09b */
  if (!C.zf) goto L_1083d09b;
  /* 1083d07b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083d07e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1083d082 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d085 jne 0x1083d09b */
  if (!C.zf) goto L_1083d09b;
  /* 1083d087 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083d08a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d08d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1083d090 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d093 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1083d096 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1083d099 jmp 0x1083d0a7 */
  goto L_1083d0a7;
L_1083d09b:;
  /* 1083d09b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1083d0a2 jmp 0x1083ce30 */
  goto L_1083ce30;
L_1083d0a7:;
  /* 1083d0a7 jmp 0x1083d0bc */
  goto L_1083d0bc;
L_1083d0a9:;
  /* 1083d0a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d0ac or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1083d0ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083d0b1 jmp 0x1083d0bc */
  goto L_1083d0bc;
L_1083d0b3:;
  /* 1083d0b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d0b6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1083d0b9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1083d0bc:;
  /* 1083d0bc jmp 0x1083d982 */
  goto L_1083d982;
L_1083d0c1:;
  /* 1083d0c1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1083d0c5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1083d0cb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1083d0d1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083d0d4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1083d0da cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d0e1 ja 0x1083d7a7 */
  if ((!C.cf&&!C.zf)) goto L_1083d7a7;
  /* 1083d0e7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1083d0ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1083d0ef mov cl, byte ptr [edx + 0x1083da5c] */
  CL = (r8((uint32_t)(EDX + 0x1083da5c)));
  /* 1083d0f5 jmp dword ptr [ecx*4 + 0x1083da20] */
  switch (ECX) {
    case 0: goto L_1083d0fc;
    case 1: goto L_1083d390;
    case 2: goto L_1083d220;
    case 3: goto L_1083d4c9;
    case 4: goto L_1083d18b;
    case 5: goto L_1083d111;
    case 6: goto L_1083d49b;
    case 7: goto L_1083d3a0;
    case 8: goto L_1083d345;
    case 9: goto L_1083d515;
    case 10: goto L_1083d4bf;
    case 11: goto L_1083d236;
    case 12: goto L_1083d4b3;
    case 13: goto L_1083d4d5;
    case 14: goto L_1083d7a7;
    default: x86_unimpl("switch@0x1083d0f5 out of table"); return;
  }
L_1083d0fc:;
  /* 1083d0fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d0ff and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1083d104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083d106 jne 0x1083d111 */
  if (!C.zf) goto L_1083d111;
  /* 1083d108 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d10b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1083d10e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1083d111:;
  /* 1083d111 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d114 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1083d11a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083d11c je 0x1083d157 */
  if (C.zf) goto L_1083d157;
  /* 1083d11e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1083d121 push eax */
  push32((uint32_t)(EAX));
  /* 1083d122 call 0x1083dbf0 */
  push32(0x1083d127u); f_1083dbf0();
  /* 1083d127 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d12a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1083d12e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1083d132 push ecx */
  push32((uint32_t)(ECX));
  /* 1083d133 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1083d139 push edx */
  push32((uint32_t)(EDX));
  /* 1083d13a call 0x1083ecd0 */
  push32(0x1083d13fu); f_1083ecd0();
  /* 1083d13f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d142 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1083d145 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d149 jge 0x1083d155 */
  if ((C.sf==C.of)) goto L_1083d155;
  /* 1083d14b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1083d155:;
  /* 1083d155 jmp 0x1083d17d */
  goto L_1083d17d;
L_1083d157:;
  /* 1083d157 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1083d15a push eax */
  push32((uint32_t)(EAX));
  /* 1083d15b call 0x1083dbb0 */
  push32(0x1083d160u); f_1083dbb0();
  /* 1083d160 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d163 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1083d16a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1083d170 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1083d176 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1083d17d:;
  /* 1083d17d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1083d183 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1083d186 jmp 0x1083d7a7 */
  goto L_1083d7a7;
L_1083d18b:;
  /* 1083d18b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1083d18e push eax */
  push32((uint32_t)(EAX));
  /* 1083d18f call 0x1083dbb0 */
  push32(0x1083d194u); f_1083dbb0();
  /* 1083d194 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d197 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1083d19d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d1a4 je 0x1083d1b2 */
  if (C.zf) goto L_1083d1b2;
  /* 1083d1a6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1083d1ac cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d1b0 jne 0x1083d1cc */
  if (!C.zf) goto L_1083d1cc;
L_1083d1b2:;
  /* 1083d1b2 mov edx, dword ptr [0x1085ffb0] */
  EDX = (r32((uint32_t)(0x1085ffb0)));
  /* 1083d1b8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1083d1bb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083d1be push eax */
  push32((uint32_t)(EAX));
  /* 1083d1bf call 0x10838c10 */
  push32(0x1083d1c4u); f_10838c10();
  /* 1083d1c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d1c7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1083d1ca jmp 0x1083d21b */
  goto L_1083d21b;
L_1083d1cc:;
  /* 1083d1cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d1cf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1083d1d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083d1d7 je 0x1083d1fc */
  if (C.zf) goto L_1083d1fc;
  /* 1083d1d9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1083d1df mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1083d1e2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1083d1e5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1083d1eb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1083d1ee shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1083d1f0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1083d1f3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1083d1fa jmp 0x1083d21b */
  goto L_1083d21b;
L_1083d1fc:;
  /* 1083d1fc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1083d203 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1083d209 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1083d20c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1083d20f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1083d215 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1083d218 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1083d21b:;
  /* 1083d21b jmp 0x1083d7a7 */
  goto L_1083d7a7;
L_1083d220:;
  /* 1083d220 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d223 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1083d229 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083d22b jne 0x1083d236 */
  if (!C.zf) goto L_1083d236;
  /* 1083d22d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d230 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1083d233 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1083d236:;
  /* 1083d236 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d23d jne 0x1083d24b */
  if (!C.zf) goto L_1083d24b;
  /* 1083d23f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1083d249 jmp 0x1083d257 */
  goto L_1083d257;
L_1083d24b:;
  /* 1083d24b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1083d251 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1083d257:;
  /* 1083d257 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1083d25d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1083d263 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1083d266 push edx */
  push32((uint32_t)(EDX));
  /* 1083d267 call 0x1083dbb0 */
  push32(0x1083d26cu); f_1083dbb0();
  /* 1083d26c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d26f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1083d272 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d275 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1083d27a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083d27c je 0x1083d2e6 */
  if (C.zf) goto L_1083d2e6;
  /* 1083d27e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d282 jne 0x1083d28d */
  if (!C.zf) goto L_1083d28d;
  /* 1083d284 mov ecx, dword ptr [0x1085ffb4] */
  ECX = (r32((uint32_t)(0x1085ffb4)));
  /* 1083d28a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1083d28d:;
  /* 1083d28d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1083d294 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083d297 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1083d29d:;
  /* 1083d29d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1083d2a3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1083d2a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083d2ac mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1083d2b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083d2b4 je 0x1083d2d6 */
  if (C.zf) goto L_1083d2d6;
  /* 1083d2b6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1083d2bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083d2be mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1083d2c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083d2c3 je 0x1083d2d6 */
  if (C.zf) goto L_1083d2d6;
  /* 1083d2c5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1083d2cb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d2ce mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1083d2d4 jmp 0x1083d29d */
  goto L_1083d29d;
L_1083d2d6:;
  /* 1083d2d6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1083d2dc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083d2df sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1083d2e1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1083d2e4 jmp 0x1083d340 */
  goto L_1083d340;
L_1083d2e6:;
  /* 1083d2e6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d2ea jne 0x1083d2f4 */
  if (!C.zf) goto L_1083d2f4;
  /* 1083d2ec mov eax, dword ptr [0x1085ffb0] */
  EAX = (r32((uint32_t)(0x1085ffb0)));
  /* 1083d2f1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1083d2f4:;
  /* 1083d2f4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083d2f7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1083d2fd:;
  /* 1083d2fd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1083d303 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1083d309 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083d30c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1083d312 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083d314 je 0x1083d334 */
  if (C.zf) goto L_1083d334;
  /* 1083d316 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1083d31c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1083d31f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083d321 je 0x1083d334 */
  if (C.zf) goto L_1083d334;
  /* 1083d323 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1083d329 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d32c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1083d332 jmp 0x1083d2fd */
  goto L_1083d2fd;
L_1083d334:;
  /* 1083d334 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1083d33a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083d33d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1083d340:;
  /* 1083d340 jmp 0x1083d7a7 */
  goto L_1083d7a7;
L_1083d345:;
  /* 1083d345 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1083d348 push edx */
  push32((uint32_t)(EDX));
  /* 1083d349 call 0x1083dbb0 */
  push32(0x1083d34eu); f_1083dbb0();
  /* 1083d34e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d351 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1083d357 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d35a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1083d35d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083d35f je 0x1083d373 */
  if (C.zf) goto L_1083d373;
  /* 1083d361 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1083d367 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1083d36e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1083d371 jmp 0x1083d381 */
  goto L_1083d381;
L_1083d373:;
  /* 1083d373 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1083d379 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1083d37f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1083d381:;
  /* 1083d381 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1083d38b jmp 0x1083d7a7 */
  goto L_1083d7a7;
L_1083d390:;
  /* 1083d390 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1083d397 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1083d39a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1083d39d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1083d3a0:;
  /* 1083d3a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d3a3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1083d3a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083d3a8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1083d3ae mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1083d3b1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d3b8 jge 0x1083d3c6 */
  if ((C.sf==C.of)) goto L_1083d3c6;
  /* 1083d3ba mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1083d3c4 jmp 0x1083d3e2 */
  goto L_1083d3e2;
L_1083d3c6:;
  /* 1083d3c6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d3cd jne 0x1083d3e2 */
  if (!C.zf) goto L_1083d3e2;
  /* 1083d3cf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1083d3d3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d3d6 jne 0x1083d3e2 */
  if (!C.zf) goto L_1083d3e2;
  /* 1083d3d8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1083d3e2:;
  /* 1083d3e2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083d3e5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d3e8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1083d3eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083d3ee sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083d3f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1083d3f3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083d3f6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1083d3fc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1083d402 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083d405 push ecx */
  push32((uint32_t)(ECX));
  /* 1083d406 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1083d40c push edx */
  push32((uint32_t)(EDX));
  /* 1083d40d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1083d411 push eax */
  push32((uint32_t)(EAX));
  /* 1083d412 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083d415 push ecx */
  push32((uint32_t)(ECX));
  /* 1083d416 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1083d41c push edx */
  push32((uint32_t)(EDX));
  /* 1083d41d call dword ptr [0x108603a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108603a0))), 0x1083d423u);
  /* 1083d423 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d426 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d429 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1083d42e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083d430 je 0x1083d448 */
  if (C.zf) goto L_1083d448;
  /* 1083d432 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d439 jne 0x1083d448 */
  if (!C.zf) goto L_1083d448;
  /* 1083d43b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083d43e push ecx */
  push32((uint32_t)(ECX));
  /* 1083d43f call dword ptr [0x108603ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108603ac))), 0x1083d445u);
  /* 1083d445 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083d448:;
  /* 1083d448 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1083d44c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d44f jne 0x1083d46a */
  if (!C.zf) goto L_1083d46a;
  /* 1083d451 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d454 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1083d459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083d45b jne 0x1083d46a */
  if (!C.zf) goto L_1083d46a;
  /* 1083d45d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083d460 push ecx */
  push32((uint32_t)(ECX));
  /* 1083d461 call dword ptr [0x108603a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108603a4))), 0x1083d467u);
  /* 1083d467 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083d46a:;
  /* 1083d46a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083d46d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1083d470 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d473 jne 0x1083d487 */
  if (!C.zf) goto L_1083d487;
  /* 1083d475 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d478 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1083d47b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1083d47e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083d481 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d484 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1083d487:;
  /* 1083d487 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083d48a push eax */
  push32((uint32_t)(EAX));
  /* 1083d48b call 0x10838c10 */
  push32(0x1083d490u); f_10838c10();
  /* 1083d490 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d493 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1083d496 jmp 0x1083d7a7 */
  goto L_1083d7a7;
L_1083d49b:;
  /* 1083d49b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d49e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1083d4a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1083d4a4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1083d4ae jmp 0x1083d535 */
  goto L_1083d535;
L_1083d4b3:;
  /* 1083d4b3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1083d4bd jmp 0x1083d535 */
  goto L_1083d535;
L_1083d4bf:;
  /* 1083d4bf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1083d4c9:;
  /* 1083d4c9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1083d4d3 jmp 0x1083d4df */
  goto L_1083d4df;
L_1083d4d5:;
  /* 1083d4d5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1083d4df:;
  /* 1083d4df mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1083d4e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d4ec and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1083d4f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083d4f4 je 0x1083d513 */
  if (C.zf) goto L_1083d513;
  /* 1083d4f6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1083d4fd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1083d503 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d506 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1083d50c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1083d513:;
  /* 1083d513 jmp 0x1083d535 */
  goto L_1083d535;
L_1083d515:;
  /* 1083d515 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1083d51f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d522 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1083d528 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083d52a je 0x1083d535 */
  if (C.zf) goto L_1083d535;
  /* 1083d52c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d52f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1083d532 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1083d535:;
  /* 1083d535 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d538 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1083d53d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083d53f je 0x1083d55e */
  if (C.zf) goto L_1083d55e;
  /* 1083d541 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1083d544 push ecx */
  push32((uint32_t)(ECX));
  /* 1083d545 call 0x1083dbd0 */
  push32(0x1083d54au); f_1083dbd0();
  /* 1083d54a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d54d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1083d553 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1083d559 jmp 0x1083d5ef */
  goto L_1083d5ef;
L_1083d55e:;
  /* 1083d55e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d561 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1083d564 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083d566 je 0x1083d5b0 */
  if (C.zf) goto L_1083d5b0;
  /* 1083d568 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d56b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1083d56e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083d570 je 0x1083d590 */
  if (C.zf) goto L_1083d590;
  /* 1083d572 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1083d575 push ecx */
  push32((uint32_t)(ECX));
  /* 1083d576 call 0x1083dbb0 */
  push32(0x1083d57bu); f_1083dbb0();
  /* 1083d57b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d57e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1083d581 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1083d582 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1083d588 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1083d58e jmp 0x1083d5ae */
  goto L_1083d5ae;
L_1083d590:;
  /* 1083d590 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1083d593 push edx */
  push32((uint32_t)(EDX));
  /* 1083d594 call 0x1083dbb0 */
  push32(0x1083d599u); f_1083dbb0();
  /* 1083d599 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d59c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083d5a1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1083d5a2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1083d5a8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1083d5ae:;
  /* 1083d5ae jmp 0x1083d5ef */
  goto L_1083d5ef;
L_1083d5b0:;
  /* 1083d5b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d5b3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1083d5b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083d5b8 je 0x1083d5d5 */
  if (C.zf) goto L_1083d5d5;
  /* 1083d5ba lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1083d5bd push ecx */
  push32((uint32_t)(ECX));
  /* 1083d5be call 0x1083dbb0 */
  push32(0x1083d5c3u); f_1083dbb0();
  /* 1083d5c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d5c6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1083d5c7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1083d5cd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1083d5d3 jmp 0x1083d5ef */
  goto L_1083d5ef;
L_1083d5d5:;
  /* 1083d5d5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1083d5d8 push edx */
  push32((uint32_t)(EDX));
  /* 1083d5d9 call 0x1083dbb0 */
  push32(0x1083d5deu); f_1083dbb0();
  /* 1083d5de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d5e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1083d5e3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1083d5e9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1083d5ef:;
  /* 1083d5ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d5f2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1083d5f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083d5f7 je 0x1083d637 */
  if (C.zf) goto L_1083d637;
  /* 1083d5f9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d600 jg 0x1083d637 */
  if ((!C.zf&&C.sf==C.of)) goto L_1083d637;
  /* 1083d602 jl 0x1083d60d */
  if ((C.sf!=C.of)) goto L_1083d60d;
  /* 1083d604 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d60b jae 0x1083d637 */
  if (!C.cf) goto L_1083d637;
L_1083d60d:;
  /* 1083d60d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1083d613 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1083d615 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1083d61b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d61e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1083d620 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1083d626 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1083d62c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d62f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1083d632 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1083d635 jmp 0x1083d64f */
  goto L_1083d64f;
L_1083d637:;
  /* 1083d637 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1083d63d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1083d643 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1083d649 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1083d64f:;
  /* 1083d64f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d652 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1083d658 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083d65a jne 0x1083d677 */
  if (!C.zf) goto L_1083d677;
  /* 1083d65c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1083d662 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1083d668 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1083d66b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1083d671 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1083d677:;
  /* 1083d677 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d67e jge 0x1083d68c */
  if ((C.sf==C.of)) goto L_1083d68c;
  /* 1083d680 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1083d68a jmp 0x1083d695 */
  goto L_1083d695;
L_1083d68c:;
  /* 1083d68c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d68f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1083d692 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1083d695:;
  /* 1083d695 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1083d69b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1083d6a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083d6a3 jne 0x1083d6ac */
  if (!C.zf) goto L_1083d6ac;
  /* 1083d6a5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1083d6ac:;
  /* 1083d6ac lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1083d6af mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1083d6b2:;
  /* 1083d6b2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1083d6b8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1083d6be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083d6c1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1083d6c7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083d6c9 jg 0x1083d6df */
  if ((!C.zf&&C.sf==C.of)) goto L_1083d6df;
  /* 1083d6cb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1083d6d1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1083d6d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083d6d9 je 0x1083d760 */
  if (C.zf) goto L_1083d760;
L_1083d6df:;
  /* 1083d6df mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1083d6e5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1083d6e6 push edx */
  push32((uint32_t)(EDX));
  /* 1083d6e7 push eax */
  push32((uint32_t)(EAX));
  /* 1083d6e8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1083d6ee push edx */
  push32((uint32_t)(EDX));
  /* 1083d6ef mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1083d6f5 push eax */
  push32((uint32_t)(EAX));
  /* 1083d6f6 call 0x1083ca70 */
  push32(0x1083d6fbu); f_1083ca70();
  /* 1083d6fb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d6fe mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1083d704 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1083d70a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1083d70b push edx */
  push32((uint32_t)(EDX));
  /* 1083d70c push eax */
  push32((uint32_t)(EAX));
  /* 1083d70d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1083d713 push ecx */
  push32((uint32_t)(ECX));
  /* 1083d714 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1083d71a push edx */
  push32((uint32_t)(EDX));
  /* 1083d71b call 0x1083ca00 */
  push32(0x1083d720u); f_1083ca00();
  /* 1083d720 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1083d726 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1083d72c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d733 jle 0x1083d747 */
  if ((C.zf||C.sf!=C.of)) goto L_1083d747;
  /* 1083d735 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1083d73b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d741 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1083d747:;
  /* 1083d747 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083d74a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1083d750 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1083d752 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083d755 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083d758 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1083d75b jmp 0x1083d6b2 */
  goto L_1083d6b2;
L_1083d760:;
  /* 1083d760 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1083d763 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083d766 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1083d769 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083d76c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d76f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1083d772 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d775 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1083d77a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083d77c je 0x1083d7a7 */
  if (C.zf) goto L_1083d7a7;
  /* 1083d77e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083d781 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1083d784 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d787 jne 0x1083d78f */
  if (!C.zf) goto L_1083d78f;
  /* 1083d789 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d78d jne 0x1083d7a7 */
  if (!C.zf) goto L_1083d7a7;
L_1083d78f:;
  /* 1083d78f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083d792 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083d795 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1083d798 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083d79b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1083d79e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083d7a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d7a4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1083d7a7:;
  /* 1083d7a7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d7ae jne 0x1083d982 */
  if (!C.zf) goto L_1083d982;
  /* 1083d7b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d7b7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1083d7ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083d7bc je 0x1083d80d */
  if (C.zf) goto L_1083d80d;
  /* 1083d7be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d7c1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1083d7c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083d7c9 je 0x1083d7db */
  if (C.zf) goto L_1083d7db;
  /* 1083d7cb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1083d7d2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1083d7d9 jmp 0x1083d80d */
  goto L_1083d80d;
L_1083d7db:;
  /* 1083d7db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d7de and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1083d7e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083d7e3 je 0x1083d7f5 */
  if (C.zf) goto L_1083d7f5;
  /* 1083d7e5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1083d7ec mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1083d7f3 jmp 0x1083d80d */
  goto L_1083d80d;
L_1083d7f5:;
  /* 1083d7f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d7f8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1083d7fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083d7fd je 0x1083d80d */
  if (C.zf) goto L_1083d80d;
  /* 1083d7ff mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1083d806 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1083d80d:;
  /* 1083d80d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1083d813 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083d816 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083d819 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1083d81f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d822 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1083d825 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083d827 jne 0x1083d845 */
  if (!C.zf) goto L_1083d845;
  /* 1083d829 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1083d82f push eax */
  push32((uint32_t)(EAX));
  /* 1083d830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083d833 push ecx */
  push32((uint32_t)(ECX));
  /* 1083d834 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1083d83a push edx */
  push32((uint32_t)(EDX));
  /* 1083d83b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1083d83d call 0x1083db20 */
  push32(0x1083d842u); f_1083db20();
  /* 1083d842 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083d845:;
  /* 1083d845 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1083d84b push eax */
  push32((uint32_t)(EAX));
  /* 1083d84c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083d84f push ecx */
  push32((uint32_t)(ECX));
  /* 1083d850 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083d853 push edx */
  push32((uint32_t)(EDX));
  /* 1083d854 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1083d85a push eax */
  push32((uint32_t)(EAX));
  /* 1083d85b call 0x1083db60 */
  push32(0x1083d860u); f_1083db60();
  /* 1083d860 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d863 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d866 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1083d869 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083d86b je 0x1083d893 */
  if (C.zf) goto L_1083d893;
  /* 1083d86d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d870 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1083d873 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083d875 jne 0x1083d893 */
  if (!C.zf) goto L_1083d893;
  /* 1083d877 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1083d87d push eax */
  push32((uint32_t)(EAX));
  /* 1083d87e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083d881 push ecx */
  push32((uint32_t)(ECX));
  /* 1083d882 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1083d888 push edx */
  push32((uint32_t)(EDX));
  /* 1083d889 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1083d88b call 0x1083db20 */
  push32(0x1083d890u); f_1083db20();
  /* 1083d890 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083d893:;
  /* 1083d893 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d897 je 0x1083d941 */
  if (C.zf) goto L_1083d941;
  /* 1083d89d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d8a1 jle 0x1083d941 */
  if ((C.zf||C.sf!=C.of)) goto L_1083d941;
  /* 1083d8a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083d8aa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1083d8b0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083d8b3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1083d8b9:;
  /* 1083d8b9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1083d8bf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1083d8c5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083d8c8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1083d8ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083d8d0 je 0x1083d93f */
  if (C.zf) goto L_1083d93f;
  /* 1083d8d2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1083d8d8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1083d8db mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1083d8e2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1083d8e9 push eax */
  push32((uint32_t)(EAX));
  /* 1083d8ea lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1083d8f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1083d8f1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1083d8f7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d8fa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1083d900 call 0x1083ecd0 */
  push32(0x1083d905u); f_1083ecd0();
  /* 1083d905 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d908 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1083d90e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083d915 jg 0x1083d919 */
  if ((!C.zf&&C.sf==C.of)) goto L_1083d919;
  /* 1083d917 jmp 0x1083d93f */
  goto L_1083d93f;
L_1083d919:;
  /* 1083d919 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1083d91f push eax */
  push32((uint32_t)(EAX));
  /* 1083d920 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083d923 push ecx */
  push32((uint32_t)(ECX));
  /* 1083d924 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1083d92a push edx */
  push32((uint32_t)(EDX));
  /* 1083d92b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1083d931 push eax */
  push32((uint32_t)(EAX));
  /* 1083d932 call 0x1083db60 */
  push32(0x1083d937u); f_1083db60();
  /* 1083d937 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083d93a jmp 0x1083d8b9 */
  goto L_1083d8b9;
L_1083d93f:;
  /* 1083d93f jmp 0x1083d95c */
  goto L_1083d95c;
L_1083d941:;
  /* 1083d941 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1083d947 push ecx */
  push32((uint32_t)(ECX));
  /* 1083d948 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083d94b push edx */
  push32((uint32_t)(EDX));
  /* 1083d94c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083d94f push eax */
  push32((uint32_t)(EAX));
  /* 1083d950 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083d953 push ecx */
  push32((uint32_t)(ECX));
  /* 1083d954 call 0x1083db60 */
  push32(0x1083d959u); f_1083db60();
  /* 1083d959 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083d95c:;
  /* 1083d95c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083d95f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1083d962 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083d964 je 0x1083d982 */
  if (C.zf) goto L_1083d982;
  /* 1083d966 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1083d96c push eax */
  push32((uint32_t)(EAX));
  /* 1083d96d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083d970 push ecx */
  push32((uint32_t)(ECX));
  /* 1083d971 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1083d977 push edx */
  push32((uint32_t)(EDX));
  /* 1083d978 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1083d97a call 0x1083db20 */
  push32(0x1083d97fu); f_1083db20();
  /* 1083d97f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083d982:;
  /* 1083d982 jmp 0x1083cd94 */
  goto L_1083cd94;
L_1083d987:;
  /* 1083d987 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1083d98d pop edi */
  EDI = (pop32());
  /* 1083d98e pop esi */
  ESI = (pop32());
  /* 1083d98f pop ebx */
  EBX = (pop32());
  /* 1083d990 mov esp, ebp */
  ESP = (EBP);
  /* 1083d992 pop ebp */
  EBP = (pop32());
  /* 1083d993 ret  */
  ESPCHK(0x1083cd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000daa0 @ 0x1083daa0 (119 bytes, 44 insns) */
void f_1083daa0(void) {
  FTRACE(0x1083daa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083daa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083daa1 mov ebp, esp */
  EBP = (ESP);
  /* 1083daa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1083daa4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083daa7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1083daaa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083daad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083dab0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1083dab3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083dab6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083daba jl 0x1083dae2 */
  if ((C.sf!=C.of)) goto L_1083dae2;
  /* 1083dabc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083dabf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1083dac1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1083dac4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1083dac6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1083daca and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1083dad0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1083dad3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083dad6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1083dad8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083dadb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083dade mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1083dae0 jmp 0x1083daf5 */
  goto L_1083daf5;
L_1083dae2:;
  /* 1083dae2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083dae5 push edx */
  push32((uint32_t)(EDX));
  /* 1083dae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083dae9 push eax */
  push32((uint32_t)(EAX));
  /* 1083daea call 0x1083caf0 */
  push32(0x1083daefu); f_1083caf0();
  /* 1083daef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083daf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1083daf5:;
  /* 1083daf5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083daf9 jne 0x1083db06 */
  if (!C.zf) goto L_1083db06;
  /* 1083dafb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083dafe mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1083db04 jmp 0x1083db13 */
  goto L_1083db13;
L_1083db06:;
  /* 1083db06 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083db09 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1083db0b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083db0e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083db11 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1083db13:;
  /* 1083db13 mov esp, ebp */
  ESP = (EBP);
  /* 1083db15 pop ebp */
  EBP = (pop32());
  /* 1083db16 ret  */
  ESPCHK(0x1083daa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db20 @ 0x1083db20 (53 bytes, 23 insns) */
void f_1083db20(void) {
  FTRACE(0x1083db20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083db20 push ebp */
  push32((uint32_t)(EBP));
  /* 1083db21 mov ebp, esp */
  EBP = (ESP);
L_1083db23:;
  /* 1083db23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083db26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083db29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083db2c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1083db2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083db31 jle 0x1083db53 */
  if ((C.zf||C.sf!=C.of)) goto L_1083db53;
  /* 1083db33 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1083db36 push edx */
  push32((uint32_t)(EDX));
  /* 1083db37 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083db3a push eax */
  push32((uint32_t)(EAX));
  /* 1083db3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083db3e push ecx */
  push32((uint32_t)(ECX));
  /* 1083db3f call 0x1083daa0 */
  push32(0x1083db44u); f_1083daa0();
  /* 1083db44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083db47 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1083db4a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083db4d jne 0x1083db51 */
  if (!C.zf) goto L_1083db51;
  /* 1083db4f jmp 0x1083db53 */
  goto L_1083db53;
L_1083db51:;
  /* 1083db51 jmp 0x1083db23 */
  goto L_1083db23;
L_1083db53:;
  /* 1083db53 pop ebp */
  EBP = (pop32());
  /* 1083db54 ret  */
  ESPCHK(0x1083db20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db60 @ 0x1083db60 (74 bytes, 31 insns) */
void f_1083db60(void) {
  FTRACE(0x1083db60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083db60 push ebp */
  push32((uint32_t)(EBP));
  /* 1083db61 mov ebp, esp */
  EBP = (ESP);
  /* 1083db63 push ecx */
  push32((uint32_t)(ECX));
L_1083db64:;
  /* 1083db64 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083db67 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083db6a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083db6d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1083db70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083db72 jle 0x1083dba6 */
  if ((C.zf||C.sf!=C.of)) goto L_1083dba6;
  /* 1083db74 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1083db77 push edx */
  push32((uint32_t)(EDX));
  /* 1083db78 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083db7b push eax */
  push32((uint32_t)(EAX));
  /* 1083db7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083db7f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1083db82 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1083db85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083db88 push eax */
  push32((uint32_t)(EAX));
  /* 1083db89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083db8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083db8f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1083db92 call 0x1083daa0 */
  push32(0x1083db97u); f_1083daa0();
  /* 1083db97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083db9a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1083db9d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083dba0 jne 0x1083dba4 */
  if (!C.zf) goto L_1083dba4;
  /* 1083dba2 jmp 0x1083dba6 */
  goto L_1083dba6;
L_1083dba4:;
  /* 1083dba4 jmp 0x1083db64 */
  goto L_1083db64;
L_1083dba6:;
  /* 1083dba6 mov esp, ebp */
  ESP = (EBP);
  /* 1083dba8 pop ebp */
  EBP = (pop32());
  /* 1083dba9 ret  */
  ESPCHK(0x1083db60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbb0 @ 0x1083dbb0 (26 bytes, 12 insns) */
void f_1083dbb0(void) {
  FTRACE(0x1083dbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083dbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083dbb1 mov ebp, esp */
  EBP = (ESP);
  /* 1083dbb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083dbb6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1083dbb8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083dbbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083dbbe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1083dbc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083dbc3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1083dbc5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1083dbc8 pop ebp */
  EBP = (pop32());
  /* 1083dbc9 ret  */
  ESPCHK(0x1083dbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbd0 @ 0x1083dbd0 (31 bytes, 14 insns) */
void f_1083dbd0(void) {
  FTRACE(0x1083dbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083dbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083dbd1 mov ebp, esp */
  EBP = (ESP);
  /* 1083dbd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083dbd6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1083dbd8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083dbdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083dbde mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1083dbe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083dbe3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1083dbe5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083dbe8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1083dbea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1083dbed pop ebp */
  EBP = (pop32());
  /* 1083dbee ret  */
  ESPCHK(0x1083dbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbf0 @ 0x1083dbf0 (27 bytes, 12 insns) */
void f_1083dbf0(void) {
  FTRACE(0x1083dbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083dbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083dbf1 mov ebp, esp */
  EBP = (ESP);
  /* 1083dbf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083dbf6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1083dbf8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083dbfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083dbfe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1083dc00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083dc03 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1083dc05 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1083dc09 pop ebp */
  EBP = (pop32());
  /* 1083dc0a ret  */
  ESPCHK(0x1083dbf0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1083dc10 (145 bytes, 42 insns) */
void f_1083dc10(void) {
  FTRACE(0x1083dc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083dc10 push ebp */
  push32((uint32_t)(EBP));
  /* 1083dc11 mov ebp, esp */
  EBP = (ESP);
  /* 1083dc13 push ecx */
  push32((uint32_t)(ECX));
  /* 1083dc14 call 0x1083dcc0 */
  push32(0x1083dc19u); f_1083dcc0();
  /* 1083dc19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083dc1c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1083dc1e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1083dc25 jmp 0x1083dc30 */
  goto L_1083dc30;
L_1083dc27:;
  /* 1083dc27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083dc2a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083dc2d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1083dc30:;
  /* 1083dc30 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083dc34 jae 0x1083dc5a */
  if (!C.cf) goto L_1083dc5a;
  /* 1083dc36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083dc39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083dc3c cmp ecx, dword ptr [eax*8 + 0x1085ffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1085ffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083dc43 jne 0x1083dc58 */
  if (!C.zf) goto L_1083dc58;
  /* 1083dc45 call 0x1083dcb0 */
  push32(0x1083dc4au); f_1083dcb0();
  /* 1083dc4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083dc4d mov ecx, dword ptr [edx*8 + 0x1085ffbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1085ffbc)));
  /* 1083dc54 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1083dc56 jmp 0x1083dc9d */
  goto L_1083dc9d;
L_1083dc58:;
  /* 1083dc58 jmp 0x1083dc27 */
  goto L_1083dc27;
L_1083dc5a:;
  /* 1083dc5a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083dc5e jb 0x1083dc73 */
  if (C.cf) goto L_1083dc73;
  /* 1083dc60 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083dc64 ja 0x1083dc73 */
  if ((!C.cf&&!C.zf)) goto L_1083dc73;
  /* 1083dc66 call 0x1083dcb0 */
  push32(0x1083dc6bu); f_1083dcb0();
  /* 1083dc6b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1083dc71 jmp 0x1083dc9d */
  goto L_1083dc9d;
L_1083dc73:;
  /* 1083dc73 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083dc7a jb 0x1083dc92 */
  if (C.cf) goto L_1083dc92;
  /* 1083dc7c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083dc83 ja 0x1083dc92 */
  if ((!C.cf&&!C.zf)) goto L_1083dc92;
  /* 1083dc85 call 0x1083dcb0 */
  push32(0x1083dc8au); f_1083dcb0();
  /* 1083dc8a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1083dc90 jmp 0x1083dc9d */
  goto L_1083dc9d;
L_1083dc92:;
  /* 1083dc92 call 0x1083dcb0 */
  push32(0x1083dc97u); f_1083dcb0();
  /* 1083dc97 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1083dc9d:;
  /* 1083dc9d mov esp, ebp */
  ESP = (EBP);
  /* 1083dc9f pop ebp */
  EBP = (pop32());
  /* 1083dca0 ret  */
  ESPCHK(0x1083dc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcb0 @ 0x1083dcb0 (13 bytes, 6 insns) */
void f_1083dcb0(void) {
  FTRACE(0x1083dcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083dcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083dcb1 mov ebp, esp */
  EBP = (ESP);
  /* 1083dcb3 call 0x10835820 */
  push32(0x1083dcb8u); f_10835820();
  /* 1083dcb8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083dcbb pop ebp */
  EBP = (pop32());
  /* 1083dcbc ret  */
  ESPCHK(0x1083dcb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcc0 @ 0x1083dcc0 (13 bytes, 6 insns) */
void f_1083dcc0(void) {
  FTRACE(0x1083dcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083dcc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083dcc1 mov ebp, esp */
  EBP = (ESP);
  /* 1083dcc3 call 0x10835820 */
  push32(0x1083dcc8u); f_10835820();
  /* 1083dcc8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083dccb pop ebp */
  EBP = (pop32());
  /* 1083dccc ret  */
  ESPCHK(0x1083dcc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcd0 @ 0x1083dcd0 (664 bytes, 256 insns) [15 switch table(s)] */
void f_1083dcd0(void) {
  FTRACE(0x1083dcd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083dcd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083dcd1 mov ebp, esp */
  EBP = (ESP);
  /* 1083dcd3 push edi */
  push32((uint32_t)(EDI));
  /* 1083dcd4 push esi */
  push32((uint32_t)(ESI));
  /* 1083dcd5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1083dcd8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083dcdb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1083dcde mov eax, ecx */
  EAX = (ECX);
  /* 1083dce0 mov edx, ecx */
  EDX = (ECX);
  /* 1083dce2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083dce4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083dce6 jbe 0x1083dcf0 */
  if ((C.cf||C.zf)) goto L_1083dcf0;
  /* 1083dce8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083dcea jb 0x1083de68 */
  if (C.cf) goto L_1083de68;
L_1083dcf0:;
  /* 1083dcf0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1083dcf6 jne 0x1083dd0c */
  if (!C.zf) goto L_1083dd0c;
  /* 1083dcf8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1083dcfb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1083dcfe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083dd01 jb 0x1083dd2c */
  if (C.cf) goto L_1083dd2c;
  /* 1083dd03 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1083dd05 jmp dword ptr [edx*4 + 0x1083de18] */
  switch (EDX) {
    case 0: goto L_1083de28;
    case 1: goto L_1083de30;
    case 2: goto L_1083de3c;
    case 3: goto L_1083de50;
    default: x86_unimpl("switch@0x1083dd05 out of table"); return;
  }
L_1083dd0c:;
  /* 1083dd0c mov eax, edi */
  EAX = (EDI);
  /* 1083dd0e mov edx, 3 */
  EDX = (0x3u);
  /* 1083dd13 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083dd16 jb 0x1083dd24 */
  if (C.cf) goto L_1083dd24;
  /* 1083dd18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1083dd1b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083dd1d jmp dword ptr [eax*4 + 0x1083dd30] */
  switch (EAX) {
    case 1: goto L_1083dd40;
    case 2: goto L_1083dd6c;
    case 3: goto L_1083dd90;
    default: x86_unimpl("switch@0x1083dd1d out of table"); return;
  }
L_1083dd24:;
  /* 1083dd24 jmp dword ptr [ecx*4 + 0x1083de28] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1083de28)))); return;
  /* 1083dd2b nop  */
  /* nop */
L_1083dd2c:;
  /* 1083dd2c jmp dword ptr [ecx*4 + 0x1083ddac] */
  switch (ECX) {
    case 0: goto L_1083de0f;
    case 1: goto L_1083ddfc;
    case 2: goto L_1083ddf4;
    case 3: goto L_1083ddec;
    case 4: goto L_1083dde4;
    case 5: goto L_1083dddc;
    case 6: goto L_1083ddd4;
    case 7: goto L_1083ddcc;
    default: x86_unimpl("switch@0x1083dd2c out of table"); return;
  }
  /* 1083dd33 nop  */
  /* nop */
L_1083dd40:;
  /* 1083dd40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1083dd42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1083dd44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1083dd46 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1083dd49 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1083dd4c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1083dd4f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1083dd52 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1083dd55 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1083dd58 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1083dd5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083dd5e jb 0x1083dd2c */
  if (C.cf) goto L_1083dd2c;
  /* 1083dd60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1083dd62 jmp dword ptr [edx*4 + 0x1083de18] */
  switch (EDX) {
    case 0: goto L_1083de28;
    case 1: goto L_1083de30;
    case 2: goto L_1083de3c;
    case 3: goto L_1083de50;
    default: x86_unimpl("switch@0x1083dd62 out of table"); return;
  }
  /* 1083dd69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1083dd6c:;
  /* 1083dd6c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1083dd6e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1083dd70 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1083dd72 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1083dd75 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1083dd78 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1083dd7b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1083dd7e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1083dd81 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083dd84 jb 0x1083dd2c */
  if (C.cf) goto L_1083dd2c;
  /* 1083dd86 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1083dd88 jmp dword ptr [edx*4 + 0x1083de18] */
  switch (EDX) {
    case 0: goto L_1083de28;
    case 1: goto L_1083de30;
    case 2: goto L_1083de3c;
    case 3: goto L_1083de50;
    default: x86_unimpl("switch@0x1083dd88 out of table"); return;
  }
  /* 1083dd8f nop  */
  /* nop */
L_1083dd90:;
  /* 1083dd90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1083dd92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1083dd94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1083dd96 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1083dd97 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1083dd9a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1083dd9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083dd9e jb 0x1083dd2c */
  if (C.cf) goto L_1083dd2c;
  /* 1083dda0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1083dda2 jmp dword ptr [edx*4 + 0x1083de18] */
  switch (EDX) {
    case 0: goto L_1083de28;
    case 1: goto L_1083de30;
    case 2: goto L_1083de3c;
    case 3: goto L_1083de50;
    default: x86_unimpl("switch@0x1083dda2 out of table"); return;
  }
  /* 1083dda9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1083ddcc:;
  /* 1083ddcc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1083ddd0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1083ddd4:;
  /* 1083ddd4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1083ddd8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1083dddc:;
  /* 1083dddc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1083dde0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1083dde4:;
  /* 1083dde4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1083dde8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1083ddec:;
  /* 1083ddec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1083ddf0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1083ddf4:;
  /* 1083ddf4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1083ddf8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1083ddfc:;
  /* 1083ddfc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1083de00 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1083de04 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1083de0b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1083de0d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1083de0f:;
  /* 1083de0f jmp dword ptr [edx*4 + 0x1083de18] */
  switch (EDX) {
    case 0: goto L_1083de28;
    case 1: goto L_1083de30;
    case 2: goto L_1083de3c;
    case 3: goto L_1083de50;
    default: x86_unimpl("switch@0x1083de0f out of table"); return;
  }
  /* 1083de16 mov edi, edi */
  EDI = (EDI);
L_1083de28:;
  /* 1083de28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083de2b pop esi */
  ESI = (pop32());
  /* 1083de2c pop edi */
  EDI = (pop32());
  /* 1083de2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083de2e ret  */
  ESPCHK(0x1083dcd0u, _esp0);
  ESP += 4; return;
  /* 1083de2f nop  */
  /* nop */
L_1083de30:;
  /* 1083de30 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1083de32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1083de34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083de37 pop esi */
  ESI = (pop32());
  /* 1083de38 pop edi */
  EDI = (pop32());
  /* 1083de39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083de3a ret  */
  ESPCHK(0x1083dcd0u, _esp0);
  ESP += 4; return;
  /* 1083de3b nop  */
  /* nop */
L_1083de3c:;
  /* 1083de3c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1083de3e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1083de40 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1083de43 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1083de46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083de49 pop esi */
  ESI = (pop32());
  /* 1083de4a pop edi */
  EDI = (pop32());
  /* 1083de4b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083de4c ret  */
  ESPCHK(0x1083dcd0u, _esp0);
  ESP += 4; return;
  /* 1083de4d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1083de50:;
  /* 1083de50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1083de52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1083de54 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1083de57 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1083de5a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1083de5d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1083de60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083de63 pop esi */
  ESI = (pop32());
  /* 1083de64 pop edi */
  EDI = (pop32());
  /* 1083de65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083de66 ret  */
  ESPCHK(0x1083dcd0u, _esp0);
  ESP += 4; return;
  /* 1083de67 nop  */
  /* nop */
L_1083de68:;
  /* 1083de68 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1083de6c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1083de70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1083de76 jne 0x1083de9c */
  if (!C.zf) goto L_1083de9c;
  /* 1083de78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1083de7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1083de7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083de81 jb 0x1083de90 */
  if (C.cf) goto L_1083de90;
  /* 1083de83 std  */
  C.df=1;
  /* 1083de84 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1083de86 cld  */
  C.df=0;
  /* 1083de87 jmp dword ptr [edx*4 + 0x1083dfb0] */
  switch (EDX) {
    case 0: goto L_1083dfc0;
    case 1: goto L_1083dfc8;
    case 2: goto L_1083dfd8;
    case 3: goto L_1083dfec;
    default: x86_unimpl("switch@0x1083de87 out of table"); return;
  }
  /* 1083de8e mov edi, edi */
  EDI = (EDI);
L_1083de90:;
  /* 1083de90 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1083de92 jmp dword ptr [ecx*4 + 0x1083df60] */
  switch (ECX) {
    case 0: goto L_1083dfa7;
    default: x86_unimpl("switch@0x1083de92 out of table"); return;
  }
  /* 1083de99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1083de9c:;
  /* 1083de9c mov eax, edi */
  EAX = (EDI);
  /* 1083de9e mov edx, 3 */
  EDX = (0x3u);
  /* 1083dea3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083dea6 jb 0x1083deb4 */
  if (C.cf) goto L_1083deb4;
  /* 1083dea8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1083deab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083dead jmp dword ptr [eax*4 + 0x1083deb8] */
  switch (EAX) {
    case 1: goto L_1083dec8;
    case 2: goto L_1083dee8;
    case 3: goto L_1083df10;
    default: x86_unimpl("switch@0x1083dead out of table"); return;
  }
L_1083deb4:;
  /* 1083deb4 jmp dword ptr [ecx*4 + 0x1083dfb0] */
  switch (ECX) {
    case 0: goto L_1083dfc0;
    case 1: goto L_1083dfc8;
    case 2: goto L_1083dfd8;
    case 3: goto L_1083dfec;
    default: x86_unimpl("switch@0x1083deb4 out of table"); return;
  }
  /* 1083debb nop  */
  /* nop */
L_1083dec8:;
  /* 1083dec8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1083decb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1083decd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1083ded0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1083ded1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1083ded4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1083ded5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ded8 jb 0x1083de90 */
  if (C.cf) goto L_1083de90;
  /* 1083deda std  */
  C.df=1;
  /* 1083dedb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1083dedd cld  */
  C.df=0;
  /* 1083dede jmp dword ptr [edx*4 + 0x1083dfb0] */
  switch (EDX) {
    case 0: goto L_1083dfc0;
    case 1: goto L_1083dfc8;
    case 2: goto L_1083dfd8;
    case 3: goto L_1083dfec;
    default: x86_unimpl("switch@0x1083dede out of table"); return;
  }
  /* 1083dee5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1083dee8:;
  /* 1083dee8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1083deeb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1083deed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1083def0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1083def3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1083def6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1083def9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083defc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083deff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083df02 jb 0x1083de90 */
  if (C.cf) goto L_1083de90;
  /* 1083df04 std  */
  C.df=1;
  /* 1083df05 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1083df07 cld  */
  C.df=0;
  /* 1083df08 jmp dword ptr [edx*4 + 0x1083dfb0] */
  switch (EDX) {
    case 0: goto L_1083dfc0;
    case 1: goto L_1083dfc8;
    case 2: goto L_1083dfd8;
    case 3: goto L_1083dfec;
    default: x86_unimpl("switch@0x1083df08 out of table"); return;
  }
  /* 1083df0f nop  */
  /* nop */
L_1083df10:;
  /* 1083df10 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1083df13 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1083df15 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1083df18 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1083df1b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1083df1e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1083df21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1083df24 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1083df27 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083df2a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083df2d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083df30 jb 0x1083de90 */
  if (C.cf) goto L_1083de90;
  /* 1083df36 std  */
  C.df=1;
  /* 1083df37 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1083df39 cld  */
  C.df=0;
  /* 1083df3a jmp dword ptr [edx*4 + 0x1083dfb0] */
  switch (EDX) {
    case 0: goto L_1083dfc0;
    case 1: goto L_1083dfc8;
    case 2: goto L_1083dfd8;
    case 3: goto L_1083dfec;
    default: x86_unimpl("switch@0x1083df3a out of table"); return;
  }
  /* 1083df41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1083df44 fild word ptr fs:[ebx - 0x7c2093f0] */
  fpu_push((double)(int16_t)r16((uint32_t)(EBX + -0x7c2093f0)));
  /* 1083df4b adc byte ptr [edi + ebx*8 - 0x7d], dh */
  { uint32_t _a=(r8((uint32_t)(EDI + EBX*8 + -0x7d))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EBX*8 + -0x7d), (_r)); fl_add(_a,_b,_r,8); }
  /* 1083df4f adc byte ptr [edi + ebx*8 - 0x7d], bh */
  { uint32_t _a=(r8((uint32_t)(EDI + EBX*8 + -0x7d))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EBX*8 + -0x7d), (_r)); fl_add(_a,_b,_r,8); }
  /* 1083df53 adc byte ptr [edi + ebx*8 - 0x2073ef7d], al */
  { uint32_t _a=(r8((uint32_t)(EDI + EBX*8 + -0x2073ef7d))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EBX*8 + -0x2073ef7d), (_r)); fl_add(_a,_b,_r,8); }
  /* 1083df5a adc dword ptr [eax], -0x6c */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffff94u),_r=_a+_b+C.cf; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1083df64 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1083df68 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1083df6c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1083df70 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1083df74 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1083df78 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1083df7c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1083df80 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1083df84 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1083df88 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1083df8c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1083df90 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1083df94 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1083df98 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1083df9c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1083dfa3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1083dfa5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1083dfa7:;
  /* 1083dfa7 jmp dword ptr [edx*4 + 0x1083dfb0] */
  switch (EDX) {
    case 0: goto L_1083dfc0;
    case 1: goto L_1083dfc8;
    case 2: goto L_1083dfd8;
    case 3: goto L_1083dfec;
    default: x86_unimpl("switch@0x1083dfa7 out of table"); return;
  }
  /* 1083dfae mov edi, edi */
  EDI = (EDI);
L_1083dfc0:;
  /* 1083dfc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083dfc3 pop esi */
  ESI = (pop32());
  /* 1083dfc4 pop edi */
  EDI = (pop32());
  /* 1083dfc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083dfc6 ret  */
  ESPCHK(0x1083dcd0u, _esp0);
  ESP += 4; return;
  /* 1083dfc7 nop  */
  /* nop */
L_1083dfc8:;
  /* 1083dfc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1083dfcb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1083dfce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083dfd1 pop esi */
  ESI = (pop32());
  /* 1083dfd2 pop edi */
  EDI = (pop32());
  /* 1083dfd3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083dfd4 ret  */
  ESPCHK(0x1083dcd0u, _esp0);
  ESP += 4; return;
  /* 1083dfd5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1083dfd8:;
  /* 1083dfd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1083dfdb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1083dfde mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1083dfe1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1083dfe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083dfe7 pop esi */
  ESI = (pop32());
  /* 1083dfe8 pop edi */
  EDI = (pop32());
  /* 1083dfe9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083dfea ret  */
  ESPCHK(0x1083dcd0u, _esp0);
  ESP += 4; return;
  /* 1083dfeb nop  */
  /* nop */
L_1083dfec:;
  /* 1083dfec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1083dfef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1083dff2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1083dff5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1083dff8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1083dffb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1083dffe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e001 pop esi */
  ESI = (pop32());
  /* 1083e002 pop edi */
  EDI = (pop32());
  /* 1083e003 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1083e004 ret  */
  ESPCHK(0x1083dcd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e010 @ 0x1083e010 (421 bytes, 148 insns) */
void f_1083e010(void) {
  FTRACE(0x1083e010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083e010 push ebp */
  push32((uint32_t)(EBP));
  /* 1083e011 mov ebp, esp */
  EBP = (ESP);
  /* 1083e013 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1083e015 push 0x1085d250 */
  push32((uint32_t)(0x1085d250u));
  /* 1083e01a push 0x1083eee8 */
  push32((uint32_t)(0x1083eee8u));
  /* 1083e01f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1083e025 push eax */
  push32((uint32_t)(EAX));
  /* 1083e026 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1083e02d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e030 push ebx */
  push32((uint32_t)(EBX));
  /* 1083e031 push esi */
  push32((uint32_t)(ESI));
  /* 1083e032 push edi */
  push32((uint32_t)(EDI));
  /* 1083e033 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1083e036 cmp dword ptr [0x1086177c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1086177c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e03d jne 0x1083e08e */
  if (!C.zf) goto L_1083e08e;
  /* 1083e03f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1083e042 push eax */
  push32((uint32_t)(EAX));
  /* 1083e043 push 1 */
  push32((uint32_t)(0x1u));
  /* 1083e045 push 0x1085d248 */
  push32((uint32_t)(0x1085d248u));
  /* 1083e04a push 1 */
  push32((uint32_t)(0x1u));
  /* 1083e04c call dword ptr [0x1086431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086431c))), 0x1083e052u);
  /* 1083e052 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083e054 je 0x1083e062 */
  if (C.zf) goto L_1083e062;
  /* 1083e056 mov dword ptr [0x1086177c], 1 */
  w32((uint32_t)(0x1086177c), (0x1u));
  /* 1083e060 jmp 0x1083e08e */
  goto L_1083e08e;
L_1083e062:;
  /* 1083e062 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1083e065 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e066 push 1 */
  push32((uint32_t)(0x1u));
  /* 1083e068 push 0x1085d244 */
  push32((uint32_t)(0x1085d244u));
  /* 1083e06d push 1 */
  push32((uint32_t)(0x1u));
  /* 1083e06f push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e071 call dword ptr [0x1086432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086432c))), 0x1083e077u);
  /* 1083e077 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083e079 je 0x1083e087 */
  if (C.zf) goto L_1083e087;
  /* 1083e07b mov dword ptr [0x1086177c], 2 */
  w32((uint32_t)(0x1086177c), (0x2u));
  /* 1083e085 jmp 0x1083e08e */
  goto L_1083e08e;
L_1083e087:;
  /* 1083e087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083e089 jmp 0x1083e1b8 */
  goto L_1083e1b8;
L_1083e08e:;
  /* 1083e08e cmp dword ptr [0x1086177c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1086177c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e095 jne 0x1083e0c5 */
  if (!C.zf) goto L_1083e0c5;
  /* 1083e097 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e09b jne 0x1083e0a6 */
  if (!C.zf) goto L_1083e0a6;
  /* 1083e09d mov edx, dword ptr [0x10861788] */
  EDX = (r32((uint32_t)(0x10861788)));
  /* 1083e0a3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1083e0a6:;
  /* 1083e0a6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1083e0a9 push eax */
  push32((uint32_t)(EAX));
  /* 1083e0aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083e0ad push ecx */
  push32((uint32_t)(ECX));
  /* 1083e0ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083e0b1 push edx */
  push32((uint32_t)(EDX));
  /* 1083e0b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e0b5 push eax */
  push32((uint32_t)(EAX));
  /* 1083e0b6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1083e0b9 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e0ba call dword ptr [0x1086432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086432c))), 0x1083e0c0u);
  /* 1083e0c0 jmp 0x1083e1b8 */
  goto L_1083e1b8;
L_1083e0c5:;
  /* 1083e0c5 cmp dword ptr [0x1086177c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1086177c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e0cc jne 0x1083e1b6 */
  if (!C.zf) goto L_1083e1b6;
  /* 1083e0d2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e0d6 jne 0x1083e0e1 */
  if (!C.zf) goto L_1083e0e1;
  /* 1083e0d8 mov edx, dword ptr [0x10861798] */
  EDX = (r32((uint32_t)(0x10861798)));
  /* 1083e0de mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1083e0e1:;
  /* 1083e0e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e0e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e0e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083e0e8 push eax */
  push32((uint32_t)(EAX));
  /* 1083e0e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083e0ec push ecx */
  push32((uint32_t)(ECX));
  /* 1083e0ed mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1083e0f0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1083e0f2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083e0f4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1083e0f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e0fa push edx */
  push32((uint32_t)(EDX));
  /* 1083e0fb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1083e0fe push eax */
  push32((uint32_t)(EAX));
  /* 1083e0ff call dword ptr [0x10864324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864324))), 0x1083e105u);
  /* 1083e105 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1083e108 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e10c jne 0x1083e115 */
  if (!C.zf) goto L_1083e115;
  /* 1083e10e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083e110 jmp 0x1083e1b8 */
  goto L_1083e1b8;
L_1083e115:;
  /* 1083e115 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1083e11c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083e11f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1083e121 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e124 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1083e126 call 0x10838f80 */
  push32(0x1083e12bu); f_10838f80();
  /* 1083e12b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1083e12e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1083e131 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083e134 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1083e137 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083e13a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1083e13c push edx */
  push32((uint32_t)(EDX));
  /* 1083e13d push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e13f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083e142 push eax */
  push32((uint32_t)(EAX));
  /* 1083e143 call 0x10839b50 */
  push32(0x1083e148u); f_10839b50();
  /* 1083e148 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e14b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1083e152 jmp 0x1083e16b */
  goto L_1083e16b;
  /* 1083e154 mov eax, 1 */
  EAX = (0x1u);
  /* 1083e159 ret  */
  ESPCHK(0x1083e010u, _esp0);
  ESP += 4; return;
  /* 1083e15a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1083e15d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1083e164 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1083e16b:;
  /* 1083e16b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e16f jne 0x1083e175 */
  if (!C.zf) goto L_1083e175;
  /* 1083e171 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083e173 jmp 0x1083e1b8 */
  goto L_1083e1b8;
L_1083e175:;
  /* 1083e175 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083e178 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e179 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083e17c push edx */
  push32((uint32_t)(EDX));
  /* 1083e17d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083e180 push eax */
  push32((uint32_t)(EAX));
  /* 1083e181 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083e184 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e185 push 1 */
  push32((uint32_t)(0x1u));
  /* 1083e187 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1083e18a push edx */
  push32((uint32_t)(EDX));
  /* 1083e18b call dword ptr [0x10864324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864324))), 0x1083e191u);
  /* 1083e191 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1083e194 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e198 jne 0x1083e19e */
  if (!C.zf) goto L_1083e19e;
  /* 1083e19a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083e19c jmp 0x1083e1b8 */
  goto L_1083e1b8;
L_1083e19e:;
  /* 1083e19e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1083e1a1 push eax */
  push32((uint32_t)(EAX));
  /* 1083e1a2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083e1a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e1a6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083e1a9 push edx */
  push32((uint32_t)(EDX));
  /* 1083e1aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e1ad push eax */
  push32((uint32_t)(EAX));
  /* 1083e1ae call dword ptr [0x1086431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086431c))), 0x1083e1b4u);
  /* 1083e1b4 jmp 0x1083e1b8 */
  goto L_1083e1b8;
L_1083e1b6:;
  /* 1083e1b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1083e1b8:;
  /* 1083e1b8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1083e1bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083e1be mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1083e1c5 pop edi */
  EDI = (pop32());
  /* 1083e1c6 pop esi */
  ESI = (pop32());
  /* 1083e1c7 pop ebx */
  EBX = (pop32());
  /* 1083e1c8 mov esp, ebp */
  ESP = (EBP);
  /* 1083e1ca pop ebp */
  EBP = (pop32());
  /* 1083e1cb ret  */
  ESPCHK(0x1083e010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1d0 @ 0x1083e1d0 (727 bytes, 263 insns) */
void f_1083e1d0(void) {
  FTRACE(0x1083e1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083e1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083e1d1 mov ebp, esp */
  EBP = (ESP);
  /* 1083e1d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1083e1d5 push 0x1085d260 */
  push32((uint32_t)(0x1085d260u));
  /* 1083e1da push 0x1083eee8 */
  push32((uint32_t)(0x1083eee8u));
  /* 1083e1df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1083e1e5 push eax */
  push32((uint32_t)(EAX));
  /* 1083e1e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1083e1ed add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e1f0 push ebx */
  push32((uint32_t)(EBX));
  /* 1083e1f1 push esi */
  push32((uint32_t)(ESI));
  /* 1083e1f2 push edi */
  push32((uint32_t)(EDI));
  /* 1083e1f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1083e1f6 cmp dword ptr [0x108617a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108617a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e1fd jne 0x1083e256 */
  if (!C.zf) goto L_1083e256;
  /* 1083e1ff push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e201 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e203 push 1 */
  push32((uint32_t)(0x1u));
  /* 1083e205 push 0x1085d248 */
  push32((uint32_t)(0x1085d248u));
  /* 1083e20a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1083e20f push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e211 call dword ptr [0x10864320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864320))), 0x1083e217u);
  /* 1083e217 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083e219 je 0x1083e227 */
  if (C.zf) goto L_1083e227;
  /* 1083e21b mov dword ptr [0x108617a0], 1 */
  w32((uint32_t)(0x108617a0), (0x1u));
  /* 1083e225 jmp 0x1083e256 */
  goto L_1083e256;
L_1083e227:;
  /* 1083e227 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e229 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e22b push 1 */
  push32((uint32_t)(0x1u));
  /* 1083e22d push 0x1085d244 */
  push32((uint32_t)(0x1085d244u));
  /* 1083e232 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1083e237 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e239 call dword ptr [0x10864318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864318))), 0x1083e23fu);
  /* 1083e23f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083e241 je 0x1083e24f */
  if (C.zf) goto L_1083e24f;
  /* 1083e243 mov dword ptr [0x108617a0], 2 */
  w32((uint32_t)(0x108617a0), (0x2u));
  /* 1083e24d jmp 0x1083e256 */
  goto L_1083e256;
L_1083e24f:;
  /* 1083e24f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083e251 jmp 0x1083e4c1 */
  goto L_1083e4c1;
L_1083e256:;
  /* 1083e256 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e25a jle 0x1083e26f */
  if ((C.zf||C.sf!=C.of)) goto L_1083e26f;
  /* 1083e25c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1083e25f push eax */
  push32((uint32_t)(EAX));
  /* 1083e260 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083e263 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e264 call 0x1083e4e0 */
  push32(0x1083e269u); f_1083e4e0();
  /* 1083e269 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e26c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1083e26f:;
  /* 1083e26f cmp dword ptr [0x108617a0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108617a0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e276 jne 0x1083e29b */
  if (!C.zf) goto L_1083e29b;
  /* 1083e278 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1083e27b push edx */
  push32((uint32_t)(EDX));
  /* 1083e27c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1083e27f push eax */
  push32((uint32_t)(EAX));
  /* 1083e280 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1083e283 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e284 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083e287 push edx */
  push32((uint32_t)(EDX));
  /* 1083e288 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083e28b push eax */
  push32((uint32_t)(EAX));
  /* 1083e28c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e28f push ecx */
  push32((uint32_t)(ECX));
  /* 1083e290 call dword ptr [0x10864318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864318))), 0x1083e296u);
  /* 1083e296 jmp 0x1083e4c1 */
  goto L_1083e4c1;
L_1083e29b:;
  /* 1083e29b cmp dword ptr [0x108617a0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108617a0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e2a2 jne 0x1083e4bf */
  if (!C.zf) goto L_1083e4bf;
  /* 1083e2a8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e2ac jne 0x1083e2b7 */
  if (!C.zf) goto L_1083e2b7;
  /* 1083e2ae mov edx, dword ptr [0x10861798] */
  EDX = (r32((uint32_t)(0x10861798)));
  /* 1083e2b4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1083e2b7:;
  /* 1083e2b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e2b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e2bb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1083e2be push eax */
  push32((uint32_t)(EAX));
  /* 1083e2bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083e2c2 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e2c3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1083e2c6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1083e2c8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083e2ca and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1083e2cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e2d0 push edx */
  push32((uint32_t)(EDX));
  /* 1083e2d1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1083e2d4 push eax */
  push32((uint32_t)(EAX));
  /* 1083e2d5 call dword ptr [0x10864324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864324))), 0x1083e2dbu);
  /* 1083e2db mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1083e2de cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e2e2 jne 0x1083e2eb */
  if (!C.zf) goto L_1083e2eb;
  /* 1083e2e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083e2e6 jmp 0x1083e4c1 */
  goto L_1083e4c1;
L_1083e2eb:;
  /* 1083e2eb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1083e2f2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083e2f5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1083e2f7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e2fa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1083e2fc call 0x10838f80 */
  push32(0x1083e301u); f_10838f80();
  /* 1083e301 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1083e304 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1083e307 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1083e30a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1083e30d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1083e314 jmp 0x1083e32d */
  goto L_1083e32d;
  /* 1083e316 mov eax, 1 */
  EAX = (0x1u);
  /* 1083e31b ret  */
  ESPCHK(0x1083e1d0u, _esp0);
  ESP += 4; return;
  /* 1083e31c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1083e31f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1083e326 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1083e32d:;
  /* 1083e32d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e331 jne 0x1083e33a */
  if (!C.zf) goto L_1083e33a;
  /* 1083e333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083e335 jmp 0x1083e4c1 */
  goto L_1083e4c1;
L_1083e33a:;
  /* 1083e33a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083e33d push edx */
  push32((uint32_t)(EDX));
  /* 1083e33e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083e341 push eax */
  push32((uint32_t)(EAX));
  /* 1083e342 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1083e345 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e346 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083e349 push edx */
  push32((uint32_t)(EDX));
  /* 1083e34a push 1 */
  push32((uint32_t)(0x1u));
  /* 1083e34c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1083e34f push eax */
  push32((uint32_t)(EAX));
  /* 1083e350 call dword ptr [0x10864324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864324))), 0x1083e356u);
  /* 1083e356 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083e358 jne 0x1083e361 */
  if (!C.zf) goto L_1083e361;
  /* 1083e35a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083e35c jmp 0x1083e4c1 */
  goto L_1083e4c1;
L_1083e361:;
  /* 1083e361 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e363 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e365 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083e368 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e369 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083e36c push edx */
  push32((uint32_t)(EDX));
  /* 1083e36d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083e370 push eax */
  push32((uint32_t)(EAX));
  /* 1083e371 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e374 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e375 call dword ptr [0x10864320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864320))), 0x1083e37bu);
  /* 1083e37b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1083e37e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e382 jne 0x1083e38b */
  if (!C.zf) goto L_1083e38b;
  /* 1083e384 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083e386 jmp 0x1083e4c1 */
  goto L_1083e4c1;
L_1083e38b:;
  /* 1083e38b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083e38e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1083e394 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083e396 je 0x1083e3db */
  if (C.zf) goto L_1083e3db;
  /* 1083e398 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e39c je 0x1083e3d6 */
  if (C.zf) goto L_1083e3d6;
  /* 1083e39e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083e3a1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e3a4 jle 0x1083e3ad */
  if ((C.zf||C.sf!=C.of)) goto L_1083e3ad;
  /* 1083e3a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083e3a8 jmp 0x1083e4c1 */
  goto L_1083e4c1;
L_1083e3ad:;
  /* 1083e3ad mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1083e3b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e3b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1083e3b4 push edx */
  push32((uint32_t)(EDX));
  /* 1083e3b5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083e3b8 push eax */
  push32((uint32_t)(EAX));
  /* 1083e3b9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083e3bc push ecx */
  push32((uint32_t)(ECX));
  /* 1083e3bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083e3c0 push edx */
  push32((uint32_t)(EDX));
  /* 1083e3c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e3c4 push eax */
  push32((uint32_t)(EAX));
  /* 1083e3c5 call dword ptr [0x10864320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864320))), 0x1083e3cbu);
  /* 1083e3cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083e3cd jne 0x1083e3d6 */
  if (!C.zf) goto L_1083e3d6;
  /* 1083e3cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083e3d1 jmp 0x1083e4c1 */
  goto L_1083e4c1;
L_1083e3d6:;
  /* 1083e3d6 jmp 0x1083e4ba */
  goto L_1083e4ba;
L_1083e3db:;
  /* 1083e3db mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083e3de mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1083e3e1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1083e3e8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083e3eb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1083e3ed add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e3f0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1083e3f2 call 0x10838f80 */
  push32(0x1083e3f7u); f_10838f80();
  /* 1083e3f7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1083e3fa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1083e3fd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1083e400 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1083e403 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1083e40a jmp 0x1083e423 */
  goto L_1083e423;
  /* 1083e40c mov eax, 1 */
  EAX = (0x1u);
  /* 1083e411 ret  */
  ESPCHK(0x1083e1d0u, _esp0);
  ESP += 4; return;
  /* 1083e412 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1083e415 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1083e41c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1083e423:;
  /* 1083e423 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e427 jne 0x1083e430 */
  if (!C.zf) goto L_1083e430;
  /* 1083e429 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083e42b jmp 0x1083e4c1 */
  goto L_1083e4c1;
L_1083e430:;
  /* 1083e430 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083e433 push eax */
  push32((uint32_t)(EAX));
  /* 1083e434 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083e437 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e438 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083e43b push edx */
  push32((uint32_t)(EDX));
  /* 1083e43c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1083e43f push eax */
  push32((uint32_t)(EAX));
  /* 1083e440 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083e443 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e444 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e447 push edx */
  push32((uint32_t)(EDX));
  /* 1083e448 call dword ptr [0x10864320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864320))), 0x1083e44eu);
  /* 1083e44e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083e450 jne 0x1083e456 */
  if (!C.zf) goto L_1083e456;
  /* 1083e452 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083e454 jmp 0x1083e4c1 */
  goto L_1083e4c1;
L_1083e456:;
  /* 1083e456 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e45a jne 0x1083e48a */
  if (!C.zf) goto L_1083e48a;
  /* 1083e45c push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e45e push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e460 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e462 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e464 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083e467 push eax */
  push32((uint32_t)(EAX));
  /* 1083e468 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083e46b push ecx */
  push32((uint32_t)(ECX));
  /* 1083e46c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1083e471 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1083e474 push edx */
  push32((uint32_t)(EDX));
  /* 1083e475 call dword ptr [0x10864370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864370))), 0x1083e47bu);
  /* 1083e47b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1083e47e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e482 jne 0x1083e488 */
  if (!C.zf) goto L_1083e488;
  /* 1083e484 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083e486 jmp 0x1083e4c1 */
  goto L_1083e4c1;
L_1083e488:;
  /* 1083e488 jmp 0x1083e4ba */
  goto L_1083e4ba;
L_1083e48a:;
  /* 1083e48a push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e48c push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e48e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1083e491 push eax */
  push32((uint32_t)(EAX));
  /* 1083e492 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1083e495 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e496 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1083e499 push edx */
  push32((uint32_t)(EDX));
  /* 1083e49a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1083e49d push eax */
  push32((uint32_t)(EAX));
  /* 1083e49e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1083e4a3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1083e4a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e4a7 call dword ptr [0x10864370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864370))), 0x1083e4adu);
  /* 1083e4ad mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1083e4b0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e4b4 jne 0x1083e4ba */
  if (!C.zf) goto L_1083e4ba;
  /* 1083e4b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083e4b8 jmp 0x1083e4c1 */
  goto L_1083e4c1;
L_1083e4ba:;
  /* 1083e4ba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1083e4bd jmp 0x1083e4c1 */
  goto L_1083e4c1;
L_1083e4bf:;
  /* 1083e4bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1083e4c1:;
  /* 1083e4c1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1083e4c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083e4c7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1083e4ce pop edi */
  EDI = (pop32());
  /* 1083e4cf pop esi */
  ESI = (pop32());
  /* 1083e4d0 pop ebx */
  EBX = (pop32());
  /* 1083e4d1 mov esp, ebp */
  ESP = (EBP);
  /* 1083e4d3 pop ebp */
  EBP = (pop32());
  /* 1083e4d4 ret  */
  ESPCHK(0x1083e1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4e0 @ 0x1083e4e0 (80 bytes, 32 insns) */
void f_1083e4e0(void) {
  FTRACE(0x1083e4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083e4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083e4e1 mov ebp, esp */
  EBP = (ESP);
  /* 1083e4e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083e4e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083e4e9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1083e4ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e4ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1083e4f2:;
  /* 1083e4f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083e4f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083e4f8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083e4fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1083e4fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083e500 je 0x1083e517 */
  if (C.zf) goto L_1083e517;
  /* 1083e502 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083e505 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1083e508 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083e50a je 0x1083e517 */
  if (C.zf) goto L_1083e517;
  /* 1083e50c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083e50f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e512 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083e515 jmp 0x1083e4f2 */
  goto L_1083e4f2;
L_1083e517:;
  /* 1083e517 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083e51a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1083e51d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083e51f jne 0x1083e529 */
  if (!C.zf) goto L_1083e529;
  /* 1083e521 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083e524 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083e527 jmp 0x1083e52c */
  goto L_1083e52c;
L_1083e529:;
  /* 1083e529 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1083e52c:;
  /* 1083e52c mov esp, ebp */
  ESP = (EBP);
  /* 1083e52e pop ebp */
  EBP = (pop32());
  /* 1083e52f ret  */
  ESPCHK(0x1083e4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e530 @ 0x1083e530 (130 bytes, 43 insns) */
void f_1083e530(void) {
  FTRACE(0x1083e530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083e530 push ebp */
  push32((uint32_t)(EBP));
  /* 1083e531 mov ebp, esp */
  EBP = (ESP);
  /* 1083e533 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e534 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e537 cmp eax, dword ptr [0x1086309c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1086309c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e53d jae 0x1083e561 */
  if (!C.cf) goto L_1083e561;
  /* 1083e53f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e542 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1083e545 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e548 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1083e54b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083e54e mov eax, dword ptr [ecx*4 + 0x10862f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10862f60)));
  /* 1083e555 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1083e55a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1083e55d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083e55f jne 0x1083e57c */
  if (!C.zf) goto L_1083e57c;
L_1083e561:;
  /* 1083e561 call 0x1083dcb0 */
  push32(0x1083e566u); f_1083dcb0();
  /* 1083e566 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1083e56c call 0x1083dcc0 */
  push32(0x1083e571u); f_1083dcc0();
  /* 1083e571 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1083e577 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083e57a jmp 0x1083e5ae */
  goto L_1083e5ae;
L_1083e57c:;
  /* 1083e57c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e57f push edx */
  push32((uint32_t)(EDX));
  /* 1083e580 call 0x1083f4d0 */
  push32(0x1083e585u); f_1083f4d0();
  /* 1083e585 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e588 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083e58b push eax */
  push32((uint32_t)(EAX));
  /* 1083e58c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083e58f push ecx */
  push32((uint32_t)(ECX));
  /* 1083e590 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e593 push edx */
  push32((uint32_t)(EDX));
  /* 1083e594 call 0x1083e5c0 */
  push32(0x1083e599u); f_1083e5c0();
  /* 1083e599 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e59c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083e59f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e5a2 push eax */
  push32((uint32_t)(EAX));
  /* 1083e5a3 call 0x1083f560 */
  push32(0x1083e5a8u); f_1083f560();
  /* 1083e5a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e5ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1083e5ae:;
  /* 1083e5ae mov esp, ebp */
  ESP = (EBP);
  /* 1083e5b0 pop ebp */
  EBP = (pop32());
  /* 1083e5b1 ret  */
  ESPCHK(0x1083e530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5c0 @ 0x1083e5c0 (178 bytes, 56 insns) */
void f_1083e5c0(void) {
  FTRACE(0x1083e5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083e5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083e5c1 mov ebp, esp */
  EBP = (ESP);
  /* 1083e5c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083e5c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e5c9 push eax */
  push32((uint32_t)(EAX));
  /* 1083e5ca call 0x1083f350 */
  push32(0x1083e5cfu); f_1083f350();
  /* 1083e5cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e5d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1083e5d5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e5d9 jne 0x1083e5ee */
  if (!C.zf) goto L_1083e5ee;
  /* 1083e5db call 0x1083dcb0 */
  push32(0x1083e5e0u); f_1083dcb0();
  /* 1083e5e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1083e5e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083e5e9 jmp 0x1083e66e */
  goto L_1083e66e;
L_1083e5ee:;
  /* 1083e5ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083e5f1 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e5f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e5f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083e5f7 push edx */
  push32((uint32_t)(EDX));
  /* 1083e5f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083e5fb push eax */
  push32((uint32_t)(EAX));
  /* 1083e5fc call dword ptr [0x10864310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864310))), 0x1083e602u);
  /* 1083e602 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1083e605 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e609 jne 0x1083e616 */
  if (!C.zf) goto L_1083e616;
  /* 1083e60b call dword ptr [0x108643d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643d8))), 0x1083e611u);
  /* 1083e611 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083e614 jmp 0x1083e61d */
  goto L_1083e61d;
L_1083e616:;
  /* 1083e616 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1083e61d:;
  /* 1083e61d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e621 je 0x1083e634 */
  if (C.zf) goto L_1083e634;
  /* 1083e623 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083e626 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e627 call 0x1083dc10 */
  push32(0x1083e62cu); f_1083dc10();
  /* 1083e62c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e62f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083e632 jmp 0x1083e66e */
  goto L_1083e66e;
L_1083e634:;
  /* 1083e634 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e637 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1083e63a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e63d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1083e640 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083e643 mov ecx, dword ptr [edx*4 + 0x10862f60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10862f60)));
  /* 1083e64a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1083e64e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1083e651 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e654 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1083e657 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e65a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1083e65d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083e660 mov eax, dword ptr [eax*4 + 0x10862f60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10862f60)));
  /* 1083e667 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1083e66b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1083e66e:;
  /* 1083e66e mov esp, ebp */
  ESP = (EBP);
  /* 1083e670 pop ebp */
  EBP = (pop32());
  /* 1083e671 ret  */
  ESPCHK(0x1083e5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e680 @ 0x1083e680 (130 bytes, 43 insns) */
void f_1083e680(void) {
  FTRACE(0x1083e680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083e680 push ebp */
  push32((uint32_t)(EBP));
  /* 1083e681 mov ebp, esp */
  EBP = (ESP);
  /* 1083e683 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e687 cmp eax, dword ptr [0x1086309c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1086309c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e68d jae 0x1083e6b1 */
  if (!C.cf) goto L_1083e6b1;
  /* 1083e68f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e692 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1083e695 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e698 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1083e69b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083e69e mov eax, dword ptr [ecx*4 + 0x10862f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10862f60)));
  /* 1083e6a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1083e6aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1083e6ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083e6af jne 0x1083e6cc */
  if (!C.zf) goto L_1083e6cc;
L_1083e6b1:;
  /* 1083e6b1 call 0x1083dcb0 */
  push32(0x1083e6b6u); f_1083dcb0();
  /* 1083e6b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1083e6bc call 0x1083dcc0 */
  push32(0x1083e6c1u); f_1083dcc0();
  /* 1083e6c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1083e6c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083e6ca jmp 0x1083e6fe */
  goto L_1083e6fe;
L_1083e6cc:;
  /* 1083e6cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e6cf push edx */
  push32((uint32_t)(EDX));
  /* 1083e6d0 call 0x1083f4d0 */
  push32(0x1083e6d5u); f_1083f4d0();
  /* 1083e6d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e6d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083e6db push eax */
  push32((uint32_t)(EAX));
  /* 1083e6dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083e6df push ecx */
  push32((uint32_t)(ECX));
  /* 1083e6e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e6e3 push edx */
  push32((uint32_t)(EDX));
  /* 1083e6e4 call 0x1083e710 */
  push32(0x1083e6e9u); f_1083e710();
  /* 1083e6e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e6ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083e6ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e6f2 push eax */
  push32((uint32_t)(EAX));
  /* 1083e6f3 call 0x1083f560 */
  push32(0x1083e6f8u); f_1083f560();
  /* 1083e6f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e6fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1083e6fe:;
  /* 1083e6fe mov esp, ebp */
  ESP = (EBP);
  /* 1083e700 pop ebp */
  EBP = (pop32());
  /* 1083e701 ret  */
  ESPCHK(0x1083e680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e710 @ 0x1083e710 (627 bytes, 182 insns) */
void f_1083e710(void) {
  FTRACE(0x1083e710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083e710 push ebp */
  push32((uint32_t)(EBP));
  /* 1083e711 mov ebp, esp */
  EBP = (ESP);
  /* 1083e713 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083e719 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1083e720 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083e723 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1083e729 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e72d jne 0x1083e736 */
  if (!C.zf) goto L_1083e736;
  /* 1083e72f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083e731 jmp 0x1083e97f */
  goto L_1083e97f;
L_1083e736:;
  /* 1083e736 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e739 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1083e73c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e73f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1083e742 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083e745 mov eax, dword ptr [ecx*4 + 0x10862f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10862f60)));
  /* 1083e74c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1083e751 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1083e754 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083e756 je 0x1083e768 */
  if (C.zf) goto L_1083e768;
  /* 1083e758 push 2 */
  push32((uint32_t)(0x2u));
  /* 1083e75a push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e75c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e75f push edx */
  push32((uint32_t)(EDX));
  /* 1083e760 call 0x1083e5c0 */
  push32(0x1083e765u); f_1083e5c0();
  /* 1083e765 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083e768:;
  /* 1083e768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e76b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1083e76e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e771 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1083e774 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083e777 mov edx, dword ptr [eax*4 + 0x10862f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10862f60)));
  /* 1083e77e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1083e783 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1083e788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083e78a je 0x1083e89c */
  if (C.zf) goto L_1083e89c;
  /* 1083e790 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083e793 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1083e796 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1083e79d:;
  /* 1083e79d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083e7a0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083e7a3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e7a6 jae 0x1083e89a */
  if (!C.cf) goto L_1083e89a;
  /* 1083e7ac lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1083e7b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1083e7b5:;
  /* 1083e7b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083e7b8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1083e7be sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083e7c0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e7c6 jge 0x1083e827 */
  if ((C.sf==C.of)) goto L_1083e827;
  /* 1083e7c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083e7cb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083e7ce cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e7d1 jae 0x1083e827 */
  if (!C.cf) goto L_1083e827;
  /* 1083e7d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083e7d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1083e7d8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1083e7de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083e7e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e7e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083e7e7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1083e7ee cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e7f1 jne 0x1083e811 */
  if (!C.zf) goto L_1083e811;
  /* 1083e7f3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1083e7f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e7fc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1083e802 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083e805 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1083e808 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083e80b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e80e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1083e811:;
  /* 1083e811 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083e814 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1083e81a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1083e81c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083e81f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e822 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1083e825 jmp 0x1083e7b5 */
  goto L_1083e7b5;
L_1083e827:;
  /* 1083e827 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e829 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1083e82f push edx */
  push32((uint32_t)(EDX));
  /* 1083e830 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083e833 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1083e839 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083e83b push eax */
  push32((uint32_t)(EAX));
  /* 1083e83c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1083e842 push edx */
  push32((uint32_t)(EDX));
  /* 1083e843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e846 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1083e849 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e84c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1083e84f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083e852 mov edx, dword ptr [eax*4 + 0x10862f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10862f60)));
  /* 1083e859 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1083e85c push eax */
  push32((uint32_t)(EAX));
  /* 1083e85d call dword ptr [0x10864398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864398))), 0x1083e863u);
  /* 1083e863 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083e865 je 0x1083e88a */
  if (C.zf) goto L_1083e88a;
  /* 1083e867 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083e86a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e870 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1083e873 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083e876 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1083e87c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083e87e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e884 jge 0x1083e888 */
  if ((C.sf==C.of)) goto L_1083e888;
  /* 1083e886 jmp 0x1083e89a */
  goto L_1083e89a;
L_1083e888:;
  /* 1083e888 jmp 0x1083e895 */
  goto L_1083e895;
L_1083e88a:;
  /* 1083e88a call dword ptr [0x108643d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643d8))), 0x1083e890u);
  /* 1083e890 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1083e893 jmp 0x1083e89a */
  goto L_1083e89a;
L_1083e895:;
  /* 1083e895 jmp 0x1083e79d */
  goto L_1083e79d;
L_1083e89a:;
  /* 1083e89a jmp 0x1083e8ec */
  goto L_1083e8ec;
L_1083e89c:;
  /* 1083e89c push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e89e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1083e8a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e8a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083e8a8 push edx */
  push32((uint32_t)(EDX));
  /* 1083e8a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083e8ac push eax */
  push32((uint32_t)(EAX));
  /* 1083e8ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e8b0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1083e8b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e8b6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1083e8b9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083e8bc mov eax, dword ptr [ecx*4 + 0x10862f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10862f60)));
  /* 1083e8c3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1083e8c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e8c7 call dword ptr [0x10864398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864398))), 0x1083e8cdu);
  /* 1083e8cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083e8cf je 0x1083e8e3 */
  if (C.zf) goto L_1083e8e3;
  /* 1083e8d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1083e8d8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1083e8de mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1083e8e1 jmp 0x1083e8ec */
  goto L_1083e8ec;
L_1083e8e3:;
  /* 1083e8e3 call dword ptr [0x108643d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643d8))), 0x1083e8e9u);
  /* 1083e8e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1083e8ec:;
  /* 1083e8ec cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e8f0 jne 0x1083e976 */
  if (!C.zf) goto L_1083e976;
  /* 1083e8f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e8fa je 0x1083e92a */
  if (C.zf) goto L_1083e92a;
  /* 1083e8fc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e900 jne 0x1083e919 */
  if (!C.zf) goto L_1083e919;
  /* 1083e902 call 0x1083dcb0 */
  push32(0x1083e907u); f_1083dcb0();
  /* 1083e907 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1083e90d call 0x1083dcc0 */
  push32(0x1083e912u); f_1083dcc0();
  /* 1083e912 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083e915 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1083e917 jmp 0x1083e925 */
  goto L_1083e925;
L_1083e919:;
  /* 1083e919 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083e91c push edx */
  push32((uint32_t)(EDX));
  /* 1083e91d call 0x1083dc10 */
  push32(0x1083e922u); f_1083dc10();
  /* 1083e922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083e925:;
  /* 1083e925 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083e928 jmp 0x1083e97f */
  goto L_1083e97f;
L_1083e92a:;
  /* 1083e92a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e92d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1083e930 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e933 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1083e936 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083e939 mov edx, dword ptr [eax*4 + 0x10862f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10862f60)));
  /* 1083e940 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1083e945 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1083e948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083e94a je 0x1083e95b */
  if (C.zf) goto L_1083e95b;
  /* 1083e94c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083e94f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1083e952 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e955 jne 0x1083e95b */
  if (!C.zf) goto L_1083e95b;
  /* 1083e957 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083e959 jmp 0x1083e97f */
  goto L_1083e97f;
L_1083e95b:;
  /* 1083e95b call 0x1083dcb0 */
  push32(0x1083e960u); f_1083dcb0();
  /* 1083e960 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1083e966 call 0x1083dcc0 */
  push32(0x1083e96bu); f_1083dcc0();
  /* 1083e96b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1083e971 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083e974 jmp 0x1083e97f */
  goto L_1083e97f;
L_1083e976:;
  /* 1083e976 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083e979 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1083e97f:;
  /* 1083e97f mov esp, ebp */
  ESP = (EBP);
  /* 1083e981 pop ebp */
  EBP = (pop32());
  /* 1083e982 ret  */
  ESPCHK(0x1083e710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e990 @ 0x1083e990 (199 bytes, 68 insns) */
void f_1083e990(void) {
  FTRACE(0x1083e990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083e990 push ebp */
  push32((uint32_t)(EBP));
  /* 1083e991 mov ebp, esp */
  EBP = (ESP);
  /* 1083e993 push ecx */
  push32((uint32_t)(ECX));
  /* 1083e994 push ebx */
  push32((uint32_t)(EBX));
  /* 1083e995 push esi */
  push32((uint32_t)(ESI));
  /* 1083e996 push edi */
  push32((uint32_t)(EDI));
L_1083e997:;
  /* 1083e997 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e99b jne 0x1083e9bb */
  if (!C.zf) goto L_1083e9bb;
  /* 1083e99d push 0x1085d1a8 */
  push32((uint32_t)(0x1085d1a8u));
  /* 1083e9a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083e9a4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1083e9a6 push 0x1085d278 */
  push32((uint32_t)(0x1085d278u));
  /* 1083e9ab push 2 */
  push32((uint32_t)(0x2u));
  /* 1083e9ad call 0x10834ea0 */
  push32(0x1083e9b2u); f_10834ea0();
  /* 1083e9b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e9b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e9b8 jne 0x1083e9bb */
  if (!C.zf) goto L_1083e9bb;
  /* 1083e9ba int3  */
  x86_unimpl("int3 @ 0x1083e9ba");
L_1083e9bb:;
  /* 1083e9bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083e9bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083e9bf jne 0x1083e997 */
  if (!C.zf) goto L_1083e997;
  /* 1083e9c1 mov ecx, dword ptr [0x108617a4] */
  ECX = (r32((uint32_t)(0x108617a4)));
  /* 1083e9c7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e9ca mov dword ptr [0x108617a4], ecx */
  w32((uint32_t)(0x108617a4), (ECX));
  /* 1083e9d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083e9d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1083e9d6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1083e9d8 push 0x1085d278 */
  push32((uint32_t)(0x1085d278u));
  /* 1083e9dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1083e9df push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1083e9e4 call 0x10835de0 */
  push32(0x1083e9e9u); f_10835de0();
  /* 1083e9e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083e9ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083e9ef mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1083e9f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083e9f5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083e9f9 je 0x1083ea16 */
  if (C.zf) goto L_1083ea16;
  /* 1083e9fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083e9fe mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1083ea01 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1083ea04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ea07 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1083ea0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ea0d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1083ea14 jmp 0x1083ea3b */
  goto L_1083ea3b;
L_1083ea16:;
  /* 1083ea16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ea19 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1083ea1c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1083ea1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ea22 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1083ea25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ea28 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ea2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ea2e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1083ea31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ea34 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1083ea3b:;
  /* 1083ea3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ea3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ea41 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1083ea44 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1083ea46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ea49 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1083ea50 pop edi */
  EDI = (pop32());
  /* 1083ea51 pop esi */
  ESI = (pop32());
  /* 1083ea52 pop ebx */
  EBX = (pop32());
  /* 1083ea53 mov esp, ebp */
  ESP = (EBP);
  /* 1083ea55 pop ebp */
  EBP = (pop32());
  /* 1083ea56 ret  */
  ESPCHK(0x1083e990u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1083ea60 (50 bytes, 17 insns) */
void f_1083ea60(void) {
  FTRACE(0x1083ea60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083ea60 push ebp */
  push32((uint32_t)(EBP));
  /* 1083ea61 mov ebp, esp */
  EBP = (ESP);
  /* 1083ea63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083ea66 cmp eax, dword ptr [0x1086309c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1086309c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ea6c jb 0x1083ea72 */
  if (C.cf) goto L_1083ea72;
  /* 1083ea6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083ea70 jmp 0x1083ea90 */
  goto L_1083ea90;
L_1083ea72:;
  /* 1083ea72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083ea75 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1083ea78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083ea7b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1083ea7e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083ea81 mov eax, dword ptr [ecx*4 + 0x10862f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10862f60)));
  /* 1083ea88 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1083ea8d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1083ea90:;
  /* 1083ea90 pop ebp */
  EBP = (pop32());
  /* 1083ea91 ret  */
  ESPCHK(0x1083ea60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaa0 @ 0x1083eaa0 (300 bytes, 80 insns) */
void f_1083eaa0(void) {
  FTRACE(0x1083eaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083eaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083eaa1 mov ebp, esp */
  EBP = (ESP);
  /* 1083eaa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1083eaa4 cmp dword ptr [0x10862c60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10862c60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083eaab jne 0x1083eab9 */
  if (!C.zf) goto L_1083eab9;
  /* 1083eaad mov dword ptr [0x10862c60], 0x200 */
  w32((uint32_t)(0x10862c60), (0x200u));
  /* 1083eab7 jmp 0x1083eacc */
  goto L_1083eacc;
L_1083eab9:;
  /* 1083eab9 cmp dword ptr [0x10862c60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10862c60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083eac0 jge 0x1083eacc */
  if ((C.sf==C.of)) goto L_1083eacc;
  /* 1083eac2 mov dword ptr [0x10862c60], 0x14 */
  w32((uint32_t)(0x10862c60), (0x14u));
L_1083eacc:;
  /* 1083eacc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1083ead1 push 0x1085d284 */
  push32((uint32_t)(0x1085d284u));
  /* 1083ead6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1083ead8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1083eada mov eax, dword ptr [0x10862c60] */
  EAX = (r32((uint32_t)(0x10862c60)));
  /* 1083eadf push eax */
  push32((uint32_t)(EAX));
  /* 1083eae0 call 0x108361f0 */
  push32(0x1083eae5u); f_108361f0();
  /* 1083eae5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083eae8 mov dword ptr [0x10861918], eax */
  w32((uint32_t)(0x10861918), (EAX));
  /* 1083eaed cmp dword ptr [0x10861918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083eaf4 jne 0x1083eb35 */
  if (!C.zf) goto L_1083eb35;
  /* 1083eaf6 mov dword ptr [0x10862c60], 0x14 */
  w32((uint32_t)(0x10862c60), (0x14u));
  /* 1083eb00 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1083eb05 push 0x1085d284 */
  push32((uint32_t)(0x1085d284u));
  /* 1083eb0a push 2 */
  push32((uint32_t)(0x2u));
  /* 1083eb0c push 4 */
  push32((uint32_t)(0x4u));
  /* 1083eb0e mov ecx, dword ptr [0x10862c60] */
  ECX = (r32((uint32_t)(0x10862c60)));
  /* 1083eb14 push ecx */
  push32((uint32_t)(ECX));
  /* 1083eb15 call 0x108361f0 */
  push32(0x1083eb1au); f_108361f0();
  /* 1083eb1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083eb1d mov dword ptr [0x10861918], eax */
  w32((uint32_t)(0x10861918), (EAX));
  /* 1083eb22 cmp dword ptr [0x10861918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083eb29 jne 0x1083eb35 */
  if (!C.zf) goto L_1083eb35;
  /* 1083eb2b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1083eb2d call 0x10834d50 */
  push32(0x1083eb32u); f_10834d50();
  /* 1083eb32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083eb35:;
  /* 1083eb35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1083eb3c jmp 0x1083eb47 */
  goto L_1083eb47;
L_1083eb3e:;
  /* 1083eb3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083eb41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083eb44 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1083eb47:;
  /* 1083eb47 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083eb4b jge 0x1083eb66 */
  if ((C.sf==C.of)) goto L_1083eb66;
  /* 1083eb4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083eb50 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1083eb53 add eax, 0x10860120 */
  { uint32_t _a=(EAX),_b=(0x10860120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083eb58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083eb5b mov edx, dword ptr [0x10861918] */
  EDX = (r32((uint32_t)(0x10861918)));
  /* 1083eb61 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1083eb64 jmp 0x1083eb3e */
  goto L_1083eb3e;
L_1083eb66:;
  /* 1083eb66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1083eb6d jmp 0x1083eb78 */
  goto L_1083eb78;
L_1083eb6f:;
  /* 1083eb6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083eb72 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083eb75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1083eb78:;
  /* 1083eb78 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083eb7c jge 0x1083ebc8 */
  if ((C.sf==C.of)) goto L_1083ebc8;
  /* 1083eb7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083eb81 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1083eb84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083eb87 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1083eb8a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083eb8d mov eax, dword ptr [ecx*4 + 0x10862f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10862f60)));
  /* 1083eb94 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083eb98 je 0x1083ebb6 */
  if (C.zf) goto L_1083ebb6;
  /* 1083eb9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083eb9d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1083eba0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083eba3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1083eba6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083eba9 mov eax, dword ptr [ecx*4 + 0x10862f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10862f60)));
  /* 1083ebb0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ebb4 jne 0x1083ebc6 */
  if (!C.zf) goto L_1083ebc6;
L_1083ebb6:;
  /* 1083ebb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ebb9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1083ebbc mov dword ptr [ecx + 0x10860130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10860130), (0xffffffffu));
L_1083ebc6:;
  /* 1083ebc6 jmp 0x1083eb6f */
  goto L_1083eb6f;
L_1083ebc8:;
  /* 1083ebc8 mov esp, ebp */
  ESP = (EBP);
  /* 1083ebca pop ebp */
  EBP = (pop32());
  /* 1083ebcb ret  */
  ESPCHK(0x1083eaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebd0 @ 0x1083ebd0 (26 bytes, 9 insns) */
void f_1083ebd0(void) {
  FTRACE(0x1083ebd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083ebd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083ebd1 mov ebp, esp */
  EBP = (ESP);
  /* 1083ebd3 call 0x1083f7d0 */
  push32(0x1083ebd8u); f_1083f7d0();
  /* 1083ebd8 movsx eax, byte ptr [0x108615c0] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x108615c0))));
  /* 1083ebdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083ebe1 je 0x1083ebe8 */
  if (C.zf) goto L_1083ebe8;
  /* 1083ebe3 call 0x1083f590 */
  push32(0x1083ebe8u); f_1083f590();
L_1083ebe8:;
  /* 1083ebe8 pop ebp */
  EBP = (pop32());
  /* 1083ebe9 ret  */
  ESPCHK(0x1083ebd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebf0 @ 0x1083ebf0 (61 bytes, 20 insns) */
void f_1083ebf0(void) {
  FTRACE(0x1083ebf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083ebf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083ebf1 mov ebp, esp */
  EBP = (ESP);
  /* 1083ebf3 cmp dword ptr [ebp + 8], 0x10860120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10860120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ebfa jb 0x1083ec1e */
  if (C.cf) goto L_1083ec1e;
  /* 1083ebfc cmp dword ptr [ebp + 8], 0x10860380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10860380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ec03 ja 0x1083ec1e */
  if ((!C.cf&&!C.zf)) goto L_1083ec1e;
  /* 1083ec05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083ec08 sub eax, 0x10860120 */
  { uint32_t _a=(EAX),_b=(0x10860120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083ec0d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1083ec10 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ec13 push eax */
  push32((uint32_t)(EAX));
  /* 1083ec14 call 0x108397e0 */
  push32(0x1083ec19u); f_108397e0();
  /* 1083ec19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ec1c jmp 0x1083ec2b */
  goto L_1083ec2b;
L_1083ec1e:;
  /* 1083ec1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083ec21 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ec24 push ecx */
  push32((uint32_t)(ECX));
  /* 1083ec25 call dword ptr [0x1086434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086434c))), 0x1083ec2bu);
L_1083ec2b:;
  /* 1083ec2b pop ebp */
  EBP = (pop32());
  /* 1083ec2c ret  */
  ESPCHK(0x1083ebf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec30 @ 0x1083ec30 (41 bytes, 16 insns) */
void f_1083ec30(void) {
  FTRACE(0x1083ec30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083ec30 push ebp */
  push32((uint32_t)(EBP));
  /* 1083ec31 mov ebp, esp */
  EBP = (ESP);
  /* 1083ec33 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ec37 jge 0x1083ec4a */
  if ((C.sf==C.of)) goto L_1083ec4a;
  /* 1083ec39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083ec3c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ec3f push eax */
  push32((uint32_t)(EAX));
  /* 1083ec40 call 0x108397e0 */
  push32(0x1083ec45u); f_108397e0();
  /* 1083ec45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ec48 jmp 0x1083ec57 */
  goto L_1083ec57;
L_1083ec4a:;
  /* 1083ec4a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083ec4d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ec50 push ecx */
  push32((uint32_t)(ECX));
  /* 1083ec51 call dword ptr [0x1086434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086434c))), 0x1083ec57u);
L_1083ec57:;
  /* 1083ec57 pop ebp */
  EBP = (pop32());
  /* 1083ec58 ret  */
  ESPCHK(0x1083ec30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec60 @ 0x1083ec60 (61 bytes, 20 insns) */
void f_1083ec60(void) {
  FTRACE(0x1083ec60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083ec60 push ebp */
  push32((uint32_t)(EBP));
  /* 1083ec61 mov ebp, esp */
  EBP = (ESP);
  /* 1083ec63 cmp dword ptr [ebp + 8], 0x10860120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10860120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ec6a jb 0x1083ec8e */
  if (C.cf) goto L_1083ec8e;
  /* 1083ec6c cmp dword ptr [ebp + 8], 0x10860380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10860380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ec73 ja 0x1083ec8e */
  if ((!C.cf&&!C.zf)) goto L_1083ec8e;
  /* 1083ec75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083ec78 sub eax, 0x10860120 */
  { uint32_t _a=(EAX),_b=(0x10860120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083ec7d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1083ec80 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ec83 push eax */
  push32((uint32_t)(EAX));
  /* 1083ec84 call 0x10839880 */
  push32(0x1083ec89u); f_10839880();
  /* 1083ec89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ec8c jmp 0x1083ec9b */
  goto L_1083ec9b;
L_1083ec8e:;
  /* 1083ec8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083ec91 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ec94 push ecx */
  push32((uint32_t)(ECX));
  /* 1083ec95 call dword ptr [0x10864348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864348))), 0x1083ec9bu);
L_1083ec9b:;
  /* 1083ec9b pop ebp */
  EBP = (pop32());
  /* 1083ec9c ret  */
  ESPCHK(0x1083ec60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eca0 @ 0x1083eca0 (41 bytes, 16 insns) */
void f_1083eca0(void) {
  FTRACE(0x1083eca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083eca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083eca1 mov ebp, esp */
  EBP = (ESP);
  /* 1083eca3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083eca7 jge 0x1083ecba */
  if ((C.sf==C.of)) goto L_1083ecba;
  /* 1083eca9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083ecac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ecaf push eax */
  push32((uint32_t)(EAX));
  /* 1083ecb0 call 0x10839880 */
  push32(0x1083ecb5u); f_10839880();
  /* 1083ecb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ecb8 jmp 0x1083ecc7 */
  goto L_1083ecc7;
L_1083ecba:;
  /* 1083ecba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083ecbd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ecc0 push ecx */
  push32((uint32_t)(ECX));
  /* 1083ecc1 call dword ptr [0x10864348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864348))), 0x1083ecc7u);
L_1083ecc7:;
  /* 1083ecc7 pop ebp */
  EBP = (pop32());
  /* 1083ecc8 ret  */
  ESPCHK(0x1083eca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecd0 @ 0x1083ecd0 (119 bytes, 34 insns) */
void f_1083ecd0(void) {
  FTRACE(0x1083ecd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083ecd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083ecd1 mov ebp, esp */
  EBP = (ESP);
  /* 1083ecd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083ecd6 push 0x10861914 */
  push32((uint32_t)(0x10861914u));
  /* 1083ecdb call dword ptr [0x108643ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643ac))), 0x1083ece1u);
  /* 1083ece1 cmp dword ptr [0x10861904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ece8 je 0x1083ed08 */
  if (C.zf) goto L_1083ed08;
  /* 1083ecea push 0x10861914 */
  push32((uint32_t)(0x10861914u));
  /* 1083ecef call dword ptr [0x1086439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086439c))), 0x1083ecf5u);
  /* 1083ecf5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1083ecf7 call 0x108397e0 */
  push32(0x1083ecfcu); f_108397e0();
  /* 1083ecfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ecff mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1083ed06 jmp 0x1083ed0f */
  goto L_1083ed0f;
L_1083ed08:;
  /* 1083ed08 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1083ed0f:;
  /* 1083ed0f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1083ed13 push eax */
  push32((uint32_t)(EAX));
  /* 1083ed14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083ed17 push ecx */
  push32((uint32_t)(ECX));
  /* 1083ed18 call 0x1083ed50 */
  push32(0x1083ed1du); f_1083ed50();
  /* 1083ed1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ed20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1083ed23 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ed27 je 0x1083ed35 */
  if (C.zf) goto L_1083ed35;
  /* 1083ed29 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1083ed2b call 0x10839880 */
  push32(0x1083ed30u); f_10839880();
  /* 1083ed30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ed33 jmp 0x1083ed40 */
  goto L_1083ed40;
L_1083ed35:;
  /* 1083ed35 push 0x10861914 */
  push32((uint32_t)(0x10861914u));
  /* 1083ed3a call dword ptr [0x1086439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086439c))), 0x1083ed40u);
L_1083ed40:;
  /* 1083ed40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083ed43 mov esp, ebp */
  ESP = (EBP);
  /* 1083ed45 pop ebp */
  EBP = (pop32());
  /* 1083ed46 ret  */
  ESPCHK(0x1083ecd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed50 @ 0x1083ed50 (160 bytes, 50 insns) */
void f_1083ed50(void) {
  FTRACE(0x1083ed50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083ed50 push ebp */
  push32((uint32_t)(EBP));
  /* 1083ed51 mov ebp, esp */
  EBP = (ESP);
  /* 1083ed53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083ed56 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ed5a jne 0x1083ed63 */
  if (!C.zf) goto L_1083ed63;
  /* 1083ed5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083ed5e jmp 0x1083edec */
  goto L_1083edec;
L_1083ed63:;
  /* 1083ed63 cmp dword ptr [0x10861788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ed6a jne 0x1083ed9a */
  if (!C.zf) goto L_1083ed9a;
  /* 1083ed6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083ed6f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083ed74 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ed79 jle 0x1083ed8b */
  if ((C.zf||C.sf!=C.of)) goto L_1083ed8b;
  /* 1083ed7b call 0x1083dcb0 */
  push32(0x1083ed80u); f_1083dcb0();
  /* 1083ed80 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1083ed86 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083ed89 jmp 0x1083edec */
  goto L_1083edec;
L_1083ed8b:;
  /* 1083ed8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083ed8e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1083ed91 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1083ed93 mov eax, 1 */
  EAX = (0x1u);
  /* 1083ed98 jmp 0x1083edec */
  goto L_1083edec;
L_1083ed9a:;
  /* 1083ed9a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1083eda1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1083eda4 push eax */
  push32((uint32_t)(EAX));
  /* 1083eda5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083eda7 mov ecx, dword ptr [0x1085fea4] */
  ECX = (r32((uint32_t)(0x1085fea4)));
  /* 1083edad push ecx */
  push32((uint32_t)(ECX));
  /* 1083edae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083edb1 push edx */
  push32((uint32_t)(EDX));
  /* 1083edb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1083edb4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1083edb7 push eax */
  push32((uint32_t)(EAX));
  /* 1083edb8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1083edbd mov ecx, dword ptr [0x10861798] */
  ECX = (r32((uint32_t)(0x10861798)));
  /* 1083edc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1083edc4 call dword ptr [0x10864370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864370))), 0x1083edcau);
  /* 1083edca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083edcd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083edd1 je 0x1083edd9 */
  if (C.zf) goto L_1083edd9;
  /* 1083edd3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083edd7 je 0x1083ede9 */
  if (C.zf) goto L_1083ede9;
L_1083edd9:;
  /* 1083edd9 call 0x1083dcb0 */
  push32(0x1083eddeu); f_1083dcb0();
  /* 1083edde mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1083ede4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083ede7 jmp 0x1083edec */
  goto L_1083edec;
L_1083ede9:;
  /* 1083ede9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1083edec:;
  /* 1083edec mov esp, ebp */
  ESP = (EBP);
  /* 1083edee pop ebp */
  EBP = (pop32());
  /* 1083edef ret  */
  ESPCHK(0x1083ed50u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1083edf0 (32 bytes, 18 insns) */
void f_1083edf0(void) {
  FTRACE(0x1083edf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083edf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083edf1 mov ebp, esp */
  EBP = (ESP);
  /* 1083edf3 push ebx */
  push32((uint32_t)(EBX));
  /* 1083edf4 push esi */
  push32((uint32_t)(ESI));
  /* 1083edf5 push edi */
  push32((uint32_t)(EDI));
  /* 1083edf6 push ebp */
  push32((uint32_t)(EBP));
  /* 1083edf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083edf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083edfb push 0x1083ee08 */
  push32((uint32_t)(0x1083ee08u));
  /* 1083ee00 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1083ee03 call 0x1084653c */
  push32(0x1083ee08u); f_1084653c();
  /* 1083ee08 pop ebp */
  EBP = (pop32());
  /* 1083ee09 pop edi */
  EDI = (pop32());
  /* 1083ee0a pop esi */
  ESI = (pop32());
  /* 1083ee0b pop ebx */
  EBX = (pop32());
  /* 1083ee0c mov esp, ebp */
  ESP = (EBP);
  /* 1083ee0e pop ebp */
  EBP = (pop32());
  /* 1083ee0f ret  */
  ESPCHK(0x1083edf0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1083ee32 (104 bytes, 33 insns) */
void f_1083ee32(void) {
  FTRACE(0x1083ee32u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083ee32 push ebx */
  push32((uint32_t)(EBX));
  /* 1083ee33 push esi */
  push32((uint32_t)(ESI));
  /* 1083ee34 push edi */
  push32((uint32_t)(EDI));
  /* 1083ee35 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1083ee39 push eax */
  push32((uint32_t)(EAX));
  /* 1083ee3a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1083ee3c push 0x1083ee10 */
  push32((uint32_t)(0x1083ee10u));
  /* 1083ee41 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1083ee48 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1083ee4f:;
  /* 1083ee4f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1083ee53 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1083ee56 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1083ee59 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ee5c je 0x1083ee8c */
  if (C.zf) goto L_1083ee8c;
  /* 1083ee5e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ee62 je 0x1083ee8c */
  if (C.zf) goto L_1083ee8c;
  /* 1083ee64 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1083ee67 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1083ee6a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1083ee6e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1083ee71 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ee76 jne 0x1083ee8a */
  if (!C.zf) goto L_1083ee8a;
  /* 1083ee78 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1083ee7d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1083ee81 call 0x1083eec6 */
  push32(0x1083ee86u); f_1083eec6();
  /* 1083ee86 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1083ee8au);
L_1083ee8a:;
  /* 1083ee8a jmp 0x1083ee4f */
  goto L_1083ee4f;
L_1083ee8c:;
  /* 1083ee8c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1083ee93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ee96 pop edi */
  EDI = (pop32());
  /* 1083ee97 pop esi */
  ESI = (pop32());
  /* 1083ee98 pop ebx */
  EBX = (pop32());
  /* 1083ee99 ret  */
  ESPCHK(0x1083ee32u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eec6 @ 0x1083eec6 (24 bytes, 10 insns) */
void f_1083eec6(void) {
  FTRACE(0x1083eec6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083eec6 push ebx */
  push32((uint32_t)(EBX));
  /* 1083eec7 push ecx */
  push32((uint32_t)(ECX));
  /* 1083eec8 mov ebx, 0x108603b8 */
  EBX = (0x108603b8u);
  /* 1083eecd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083eed0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1083eed3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1083eed6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1083eed9 pop ecx */
  ECX = (pop32());
  /* 1083eeda pop ebx */
  EBX = (pop32());
  /* 1083eedb ret 4 */
  ESPCHK(0x1083eec6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000efa5 @ 0x1083efa5 (27 bytes, 11 insns) */
void f_1083efa5(void) {
  FTRACE(0x1083efa5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083efa5 push ebp */
  push32((uint32_t)(EBP));
  /* 1083efa6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1083efaa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1083efac mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1083efaf push eax */
  push32((uint32_t)(EAX));
  /* 1083efb0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1083efb3 push eax */
  push32((uint32_t)(EAX));
  /* 1083efb4 call 0x1083ee32 */
  push32(0x1083efb9u); f_1083ee32();
  /* 1083efb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083efbc pop ebp */
  EBP = (pop32());
  /* 1083efbd ret 4 */
  ESPCHK(0x1083efa5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000efc0 @ 0x1083efc0 (482 bytes, 138 insns) */
void f_1083efc0(void) {
  FTRACE(0x1083efc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083efc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083efc1 mov ebp, esp */
  EBP = (ESP);
  /* 1083efc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083efc6 push esi */
  push32((uint32_t)(ESI));
  /* 1083efc7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1083efce push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1083efd0 call 0x108397e0 */
  push32(0x1083efd5u); f_108397e0();
  /* 1083efd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083efd8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1083efdf jmp 0x1083efea */
  goto L_1083efea;
L_1083efe1:;
  /* 1083efe1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083efe4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083efe7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1083efea:;
  /* 1083efea cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083efee jge 0x1083f190 */
  if ((C.sf==C.of)) goto L_1083f190;
  /* 1083eff4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083eff7 cmp dword ptr [ecx*4 + 0x10862f60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10862f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083efff je 0x1083f0f6 */
  if (C.zf) goto L_1083f0f6;
  /* 1083f005 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f008 mov eax, dword ptr [edx*4 + 0x10862f60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10862f60)));
  /* 1083f00f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083f012 jmp 0x1083f01d */
  goto L_1083f01d;
L_1083f014:;
  /* 1083f014 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f017 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f01a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1083f01d:;
  /* 1083f01d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f020 mov eax, dword ptr [edx*4 + 0x10862f60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10862f60)));
  /* 1083f027 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f02c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f02f jae 0x1083f0e6 */
  if (!C.cf) goto L_1083f0e6;
  /* 1083f035 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f038 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1083f03c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1083f03f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083f041 jne 0x1083f0e1 */
  if (!C.zf) goto L_1083f0e1;
  /* 1083f047 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f04a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f04e jne 0x1083f089 */
  if (!C.zf) goto L_1083f089;
  /* 1083f050 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1083f052 call 0x108397e0 */
  push32(0x1083f057u); f_108397e0();
  /* 1083f057 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f05a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f05d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f061 jne 0x1083f07f */
  if (!C.zf) goto L_1083f07f;
  /* 1083f063 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f066 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f069 push edx */
  push32((uint32_t)(EDX));
  /* 1083f06a call dword ptr [0x1086435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086435c))), 0x1083f070u);
  /* 1083f070 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f073 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1083f076 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f079 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f07c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1083f07f:;
  /* 1083f07f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1083f081 call 0x10839880 */
  push32(0x1083f086u); f_10839880();
  /* 1083f086 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083f089:;
  /* 1083f089 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f08c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f08f push eax */
  push32((uint32_t)(EAX));
  /* 1083f090 call dword ptr [0x1086434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086434c))), 0x1083f096u);
  /* 1083f096 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f099 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1083f09d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1083f0a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083f0a2 je 0x1083f0b6 */
  if (C.zf) goto L_1083f0b6;
  /* 1083f0a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f0a7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f0aa push eax */
  push32((uint32_t)(EAX));
  /* 1083f0ab call dword ptr [0x10864348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864348))), 0x1083f0b1u);
  /* 1083f0b1 jmp 0x1083f014 */
  goto L_1083f014;
L_1083f0b6:;
  /* 1083f0b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f0b9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1083f0bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f0c2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1083f0c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f0c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f0cb sub eax, dword ptr [edx*4 + 0x10862f60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10862f60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083f0d2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1083f0d3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1083f0d8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1083f0da add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f0dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1083f0df jmp 0x1083f0e6 */
  goto L_1083f0e6;
L_1083f0e1:;
  /* 1083f0e1 jmp 0x1083f014 */
  goto L_1083f014;
L_1083f0e6:;
  /* 1083f0e6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f0ea je 0x1083f0f1 */
  if (C.zf) goto L_1083f0f1;
  /* 1083f0ec jmp 0x1083f190 */
  goto L_1083f190;
L_1083f0f1:;
  /* 1083f0f1 jmp 0x1083f18b */
  goto L_1083f18b;
L_1083f0f6:;
  /* 1083f0f6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1083f0f8 push 0x1085d28c */
  push32((uint32_t)(0x1085d28cu));
  /* 1083f0fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1083f0ff push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1083f104 call 0x10835de0 */
  push32(0x1083f109u); f_10835de0();
  /* 1083f109 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f10c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083f10f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f113 je 0x1083f189 */
  if (C.zf) goto L_1083f189;
  /* 1083f115 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f118 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f11b mov dword ptr [eax*4 + 0x10862f60], ecx */
  w32((uint32_t)(EAX*4 + 0x10862f60), (ECX));
  /* 1083f122 mov edx, dword ptr [0x1086309c] */
  EDX = (r32((uint32_t)(0x1086309c)));
  /* 1083f128 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f12b mov dword ptr [0x1086309c], edx */
  w32((uint32_t)(0x1086309c), (EDX));
  /* 1083f131 jmp 0x1083f13c */
  goto L_1083f13c;
L_1083f133:;
  /* 1083f133 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f136 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f139 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1083f13c:;
  /* 1083f13c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f13f mov edx, dword ptr [ecx*4 + 0x10862f60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10862f60)));
  /* 1083f146 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f14c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f14f jae 0x1083f174 */
  if (!C.cf) goto L_1083f174;
  /* 1083f151 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f154 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1083f158 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f15b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1083f161 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f164 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1083f168 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f16b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1083f172 jmp 0x1083f133 */
  goto L_1083f133;
L_1083f174:;
  /* 1083f174 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f177 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1083f17a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1083f17d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f180 push edx */
  push32((uint32_t)(EDX));
  /* 1083f181 call 0x1083f4d0 */
  push32(0x1083f186u); f_1083f4d0();
  /* 1083f186 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083f189:;
  /* 1083f189 jmp 0x1083f190 */
  goto L_1083f190;
L_1083f18b:;
  /* 1083f18b jmp 0x1083efe1 */
  goto L_1083efe1;
L_1083f190:;
  /* 1083f190 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1083f192 call 0x10839880 */
  push32(0x1083f197u); f_10839880();
  /* 1083f197 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f19a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f19d pop esi */
  ESI = (pop32());
  /* 1083f19e mov esp, ebp */
  ESP = (EBP);
  /* 1083f1a0 pop ebp */
  EBP = (pop32());
  /* 1083f1a1 ret  */
  ESPCHK(0x1083efc0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1083f1b0 (183 bytes, 57 insns) */
void f_1083f1b0(void) {
  FTRACE(0x1083f1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083f1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083f1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1083f1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1083f1b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f1b7 cmp eax, dword ptr [0x1086309c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1086309c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f1bd jae 0x1083f24a */
  if (!C.cf) goto L_1083f24a;
  /* 1083f1c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f1c6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1083f1c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f1cc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1083f1cf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083f1d2 mov eax, dword ptr [ecx*4 + 0x10862f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10862f60)));
  /* 1083f1d9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f1dd jne 0x1083f24a */
  if (!C.zf) goto L_1083f24a;
  /* 1083f1df cmp dword ptr [0x10861580], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10861580))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f1e6 jne 0x1083f22a */
  if (!C.zf) goto L_1083f22a;
  /* 1083f1e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f1eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1083f1ee cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f1f2 je 0x1083f202 */
  if (C.zf) goto L_1083f202;
  /* 1083f1f4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f1f8 je 0x1083f210 */
  if (C.zf) goto L_1083f210;
  /* 1083f1fa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f1fe je 0x1083f21e */
  if (C.zf) goto L_1083f21e;
  /* 1083f200 jmp 0x1083f22a */
  goto L_1083f22a;
L_1083f202:;
  /* 1083f202 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083f205 push edx */
  push32((uint32_t)(EDX));
  /* 1083f206 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1083f208 call dword ptr [0x10864314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864314))), 0x1083f20eu);
  /* 1083f20e jmp 0x1083f22a */
  goto L_1083f22a;
L_1083f210:;
  /* 1083f210 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083f213 push eax */
  push32((uint32_t)(EAX));
  /* 1083f214 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1083f216 call dword ptr [0x10864314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864314))), 0x1083f21cu);
  /* 1083f21c jmp 0x1083f22a */
  goto L_1083f22a;
L_1083f21e:;
  /* 1083f21e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083f221 push ecx */
  push32((uint32_t)(ECX));
  /* 1083f222 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1083f224 call dword ptr [0x10864314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864314))), 0x1083f22au);
L_1083f22a:;
  /* 1083f22a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f22d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1083f230 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f233 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1083f236 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083f239 mov ecx, dword ptr [edx*4 + 0x10862f60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10862f60)));
  /* 1083f240 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083f243 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1083f246 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083f248 jmp 0x1083f263 */
  goto L_1083f263;
L_1083f24a:;
  /* 1083f24a call 0x1083dcb0 */
  push32(0x1083f24fu); f_1083dcb0();
  /* 1083f24f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1083f255 call 0x1083dcc0 */
  push32(0x1083f25au); f_1083dcc0();
  /* 1083f25a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1083f260 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1083f263:;
  /* 1083f263 mov esp, ebp */
  ESP = (EBP);
  /* 1083f265 pop ebp */
  EBP = (pop32());
  /* 1083f266 ret  */
  ESPCHK(0x1083f1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f270 @ 0x1083f270 (216 bytes, 63 insns) */
void f_1083f270(void) {
  FTRACE(0x1083f270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083f270 push ebp */
  push32((uint32_t)(EBP));
  /* 1083f271 mov ebp, esp */
  EBP = (ESP);
  /* 1083f273 push ecx */
  push32((uint32_t)(ECX));
  /* 1083f274 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f277 cmp eax, dword ptr [0x1086309c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1086309c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f27d jae 0x1083f32b */
  if (!C.cf) goto L_1083f32b;
  /* 1083f283 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f286 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1083f289 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f28c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1083f28f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083f292 mov eax, dword ptr [ecx*4 + 0x10862f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10862f60)));
  /* 1083f299 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1083f29e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1083f2a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083f2a3 je 0x1083f32b */
  if (C.zf) goto L_1083f32b;
  /* 1083f2a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f2ac sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1083f2af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f2b2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1083f2b5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083f2b8 mov ecx, dword ptr [edx*4 + 0x10862f60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10862f60)));
  /* 1083f2bf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f2c3 je 0x1083f32b */
  if (C.zf) goto L_1083f32b;
  /* 1083f2c5 cmp dword ptr [0x10861580], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10861580))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f2cc jne 0x1083f30a */
  if (!C.zf) goto L_1083f30a;
  /* 1083f2ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f2d1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1083f2d4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f2d8 je 0x1083f2e8 */
  if (C.zf) goto L_1083f2e8;
  /* 1083f2da cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f2de je 0x1083f2f4 */
  if (C.zf) goto L_1083f2f4;
  /* 1083f2e0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f2e4 je 0x1083f300 */
  if (C.zf) goto L_1083f300;
  /* 1083f2e6 jmp 0x1083f30a */
  goto L_1083f30a;
L_1083f2e8:;
  /* 1083f2e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083f2ea push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1083f2ec call dword ptr [0x10864314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864314))), 0x1083f2f2u);
  /* 1083f2f2 jmp 0x1083f30a */
  goto L_1083f30a;
L_1083f2f4:;
  /* 1083f2f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083f2f6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1083f2f8 call dword ptr [0x10864314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864314))), 0x1083f2feu);
  /* 1083f2fe jmp 0x1083f30a */
  goto L_1083f30a;
L_1083f300:;
  /* 1083f300 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083f302 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1083f304 call dword ptr [0x10864314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864314))), 0x1083f30au);
L_1083f30a:;
  /* 1083f30a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f30d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1083f310 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f313 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1083f316 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083f319 mov edx, dword ptr [eax*4 + 0x10862f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10862f60)));
  /* 1083f320 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1083f327 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083f329 jmp 0x1083f344 */
  goto L_1083f344;
L_1083f32b:;
  /* 1083f32b call 0x1083dcb0 */
  push32(0x1083f330u); f_1083dcb0();
  /* 1083f330 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1083f336 call 0x1083dcc0 */
  push32(0x1083f33bu); f_1083dcc0();
  /* 1083f33b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1083f341 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1083f344:;
  /* 1083f344 mov esp, ebp */
  ESP = (EBP);
  /* 1083f346 pop ebp */
  EBP = (pop32());
  /* 1083f347 ret  */
  ESPCHK(0x1083f270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f350 @ 0x1083f350 (102 bytes, 30 insns) */
void f_1083f350(void) {
  FTRACE(0x1083f350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083f350 push ebp */
  push32((uint32_t)(EBP));
  /* 1083f351 mov ebp, esp */
  EBP = (ESP);
  /* 1083f353 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f356 cmp eax, dword ptr [0x1086309c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1086309c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f35c jae 0x1083f39b */
  if (!C.cf) goto L_1083f39b;
  /* 1083f35e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f361 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1083f364 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f367 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1083f36a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083f36d mov eax, dword ptr [ecx*4 + 0x10862f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10862f60)));
  /* 1083f374 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1083f379 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1083f37c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083f37e je 0x1083f39b */
  if (C.zf) goto L_1083f39b;
  /* 1083f380 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f383 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1083f386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f389 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1083f38c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083f38f mov ecx, dword ptr [edx*4 + 0x10862f60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10862f60)));
  /* 1083f396 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1083f399 jmp 0x1083f3b4 */
  goto L_1083f3b4;
L_1083f39b:;
  /* 1083f39b call 0x1083dcb0 */
  push32(0x1083f3a0u); f_1083dcb0();
  /* 1083f3a0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1083f3a6 call 0x1083dcc0 */
  push32(0x1083f3abu); f_1083dcc0();
  /* 1083f3ab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1083f3b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1083f3b4:;
  /* 1083f3b4 pop ebp */
  EBP = (pop32());
  /* 1083f3b5 ret  */
  ESPCHK(0x1083f350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3c0 @ 0x1083f3c0 (260 bytes, 83 insns) */
void f_1083f3c0(void) {
  FTRACE(0x1083f3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083f3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083f3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1083f3c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083f3c6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1083f3ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083f3cd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1083f3d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083f3d2 je 0x1083f3dd */
  if (C.zf) goto L_1083f3dd;
  /* 1083f3d4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1083f3d7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1083f3da mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1083f3dd:;
  /* 1083f3dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083f3e0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1083f3e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083f3e8 je 0x1083f3f2 */
  if (C.zf) goto L_1083f3f2;
  /* 1083f3ea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1083f3ed or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1083f3ef mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1083f3f2:;
  /* 1083f3f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083f3f5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1083f3fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083f3fd je 0x1083f408 */
  if (C.zf) goto L_1083f408;
  /* 1083f3ff mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1083f402 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1083f405 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1083f408:;
  /* 1083f408 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f40b push eax */
  push32((uint32_t)(EAX));
  /* 1083f40c call dword ptr [0x108643e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643e4))), 0x1083f412u);
  /* 1083f412 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083f415 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f419 jne 0x1083f432 */
  if (!C.zf) goto L_1083f432;
  /* 1083f41b call dword ptr [0x108643d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643d8))), 0x1083f421u);
  /* 1083f421 push eax */
  push32((uint32_t)(EAX));
  /* 1083f422 call 0x1083dc10 */
  push32(0x1083f427u); f_1083dc10();
  /* 1083f427 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f42a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083f42d jmp 0x1083f4c0 */
  goto L_1083f4c0;
L_1083f432:;
  /* 1083f432 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f436 jne 0x1083f443 */
  if (!C.zf) goto L_1083f443;
  /* 1083f438 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1083f43b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1083f43e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1083f441 jmp 0x1083f452 */
  goto L_1083f452;
L_1083f443:;
  /* 1083f443 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f447 jne 0x1083f452 */
  if (!C.zf) goto L_1083f452;
  /* 1083f449 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1083f44c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1083f44f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1083f452:;
  /* 1083f452 call 0x1083efc0 */
  push32(0x1083f457u); f_1083efc0();
  /* 1083f457 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1083f45a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f45e jne 0x1083f47b */
  if (!C.zf) goto L_1083f47b;
  /* 1083f460 call 0x1083dcb0 */
  push32(0x1083f465u); f_1083dcb0();
  /* 1083f465 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1083f46b call 0x1083dcc0 */
  push32(0x1083f470u); f_1083dcc0();
  /* 1083f470 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1083f476 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083f479 jmp 0x1083f4c0 */
  goto L_1083f4c0;
L_1083f47b:;
  /* 1083f47b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f47e push eax */
  push32((uint32_t)(EAX));
  /* 1083f47f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f482 push ecx */
  push32((uint32_t)(ECX));
  /* 1083f483 call 0x1083f1b0 */
  push32(0x1083f488u); f_1083f1b0();
  /* 1083f488 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f48b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1083f48e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1083f491 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1083f494 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f497 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1083f49a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f49d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1083f4a0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083f4a3 mov edx, dword ptr [eax*4 + 0x10862f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10862f60)));
  /* 1083f4aa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1083f4ad mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1083f4b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f4b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1083f4b5 call 0x1083f560 */
  push32(0x1083f4bau); f_1083f560();
  /* 1083f4ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f4bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1083f4c0:;
  /* 1083f4c0 mov esp, ebp */
  ESP = (EBP);
  /* 1083f4c2 pop ebp */
  EBP = (pop32());
  /* 1083f4c3 ret  */
  ESPCHK(0x1083f3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4d0 @ 0x1083f4d0 (134 bytes, 44 insns) */
void f_1083f4d0(void) {
  FTRACE(0x1083f4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083f4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083f4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1083f4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1083f4d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f4d7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1083f4da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f4dd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1083f4e0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083f4e3 mov edx, dword ptr [eax*4 + 0x10862f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10862f60)));
  /* 1083f4ea add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f4ec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1083f4ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f4f2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f4f6 jne 0x1083f531 */
  if (!C.zf) goto L_1083f531;
  /* 1083f4f8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1083f4fa call 0x108397e0 */
  push32(0x1083f4ffu); f_108397e0();
  /* 1083f4ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f502 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f505 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f509 jne 0x1083f527 */
  if (!C.zf) goto L_1083f527;
  /* 1083f50b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f50e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f511 push edx */
  push32((uint32_t)(EDX));
  /* 1083f512 call dword ptr [0x1086435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086435c))), 0x1083f518u);
  /* 1083f518 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f51b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1083f51e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f521 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f524 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1083f527:;
  /* 1083f527 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1083f529 call 0x10839880 */
  push32(0x1083f52eu); f_10839880();
  /* 1083f52e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083f531:;
  /* 1083f531 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f534 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1083f537 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f53a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1083f53d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083f540 mov edx, dword ptr [eax*4 + 0x10862f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10862f60)));
  /* 1083f547 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1083f54b push eax */
  push32((uint32_t)(EAX));
  /* 1083f54c call dword ptr [0x1086434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086434c))), 0x1083f552u);
  /* 1083f552 mov esp, ebp */
  ESP = (EBP);
  /* 1083f554 pop ebp */
  EBP = (pop32());
  /* 1083f555 ret  */
  ESPCHK(0x1083f4d0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1083f560 (38 bytes, 13 insns) */
void f_1083f560(void) {
  FTRACE(0x1083f560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083f560 push ebp */
  push32((uint32_t)(EBP));
  /* 1083f561 mov ebp, esp */
  EBP = (ESP);
  /* 1083f563 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f566 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1083f569 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f56c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1083f56f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083f572 mov edx, dword ptr [eax*4 + 0x10862f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10862f60)));
  /* 1083f579 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1083f57d push eax */
  push32((uint32_t)(EAX));
  /* 1083f57e call dword ptr [0x10864348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864348))), 0x1083f584u);
  /* 1083f584 pop ebp */
  EBP = (pop32());
  /* 1083f585 ret  */
  ESPCHK(0x1083f560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f590 @ 0x1083f590 (218 bytes, 63 insns) */
void f_1083f590(void) {
  FTRACE(0x1083f590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083f590 push ebp */
  push32((uint32_t)(EBP));
  /* 1083f591 mov ebp, esp */
  EBP = (ESP);
  /* 1083f593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083f596 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1083f59d push 2 */
  push32((uint32_t)(0x2u));
  /* 1083f59f call 0x108397e0 */
  push32(0x1083f5a4u); f_108397e0();
  /* 1083f5a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f5a7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1083f5ae jmp 0x1083f5b9 */
  goto L_1083f5b9;
L_1083f5b0:;
  /* 1083f5b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f5b3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f5b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1083f5b9:;
  /* 1083f5b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f5bc cmp ecx, dword ptr [0x10862c60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10862c60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f5c2 jge 0x1083f659 */
  if ((C.sf==C.of)) goto L_1083f659;
  /* 1083f5c8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f5cb mov eax, dword ptr [0x10861918] */
  EAX = (r32((uint32_t)(0x10861918)));
  /* 1083f5d0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f5d4 je 0x1083f654 */
  if (C.zf) goto L_1083f654;
  /* 1083f5d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f5d9 mov edx, dword ptr [0x10861918] */
  EDX = (r32((uint32_t)(0x10861918)));
  /* 1083f5df mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1083f5e2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1083f5e5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1083f5eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083f5ed je 0x1083f611 */
  if (C.zf) goto L_1083f611;
  /* 1083f5ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f5f2 mov eax, dword ptr [0x10861918] */
  EAX = (r32((uint32_t)(0x10861918)));
  /* 1083f5f7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1083f5fa push ecx */
  push32((uint32_t)(ECX));
  /* 1083f5fb call 0x10840380 */
  push32(0x1083f600u); f_10840380();
  /* 1083f600 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f603 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f606 je 0x1083f611 */
  if (C.zf) goto L_1083f611;
  /* 1083f608 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f60b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f60e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1083f611:;
  /* 1083f611 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f615 jl 0x1083f654 */
  if ((C.sf!=C.of)) goto L_1083f654;
  /* 1083f617 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f61a mov ecx, dword ptr [0x10861918] */
  ECX = (r32((uint32_t)(0x10861918)));
  /* 1083f620 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1083f623 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f626 push edx */
  push32((uint32_t)(EDX));
  /* 1083f627 call dword ptr [0x108643b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643b8))), 0x1083f62du);
  /* 1083f62d push 2 */
  push32((uint32_t)(0x2u));
  /* 1083f62f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f632 mov ecx, dword ptr [0x10861918] */
  ECX = (r32((uint32_t)(0x10861918)));
  /* 1083f638 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1083f63b push edx */
  push32((uint32_t)(EDX));
  /* 1083f63c call 0x10836870 */
  push32(0x1083f641u); f_10836870();
  /* 1083f641 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f644 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f647 mov ecx, dword ptr [0x10861918] */
  ECX = (r32((uint32_t)(0x10861918)));
  /* 1083f64d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1083f654:;
  /* 1083f654 jmp 0x1083f5b0 */
  goto L_1083f5b0;
L_1083f659:;
  /* 1083f659 push 2 */
  push32((uint32_t)(0x2u));
  /* 1083f65b call 0x10839880 */
  push32(0x1083f660u); f_10839880();
  /* 1083f660 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f663 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f666 mov esp, ebp */
  ESP = (EBP);
  /* 1083f668 pop ebp */
  EBP = (pop32());
  /* 1083f669 ret  */
  ESPCHK(0x1083f590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f670 @ 0x1083f670 (68 bytes, 26 insns) */
void f_1083f670(void) {
  FTRACE(0x1083f670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083f670 push ebp */
  push32((uint32_t)(EBP));
  /* 1083f671 mov ebp, esp */
  EBP = (ESP);
  /* 1083f673 push ecx */
  push32((uint32_t)(ECX));
  /* 1083f674 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f678 jne 0x1083f686 */
  if (!C.zf) goto L_1083f686;
  /* 1083f67a push 0 */
  push32((uint32_t)(0x0u));
  /* 1083f67c call 0x1083f7e0 */
  push32(0x1083f681u); f_1083f7e0();
  /* 1083f681 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f684 jmp 0x1083f6b0 */
  goto L_1083f6b0;
L_1083f686:;
  /* 1083f686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f689 push eax */
  push32((uint32_t)(EAX));
  /* 1083f68a call 0x1083ebf0 */
  push32(0x1083f68fu); f_1083ebf0();
  /* 1083f68f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f692 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f695 push ecx */
  push32((uint32_t)(ECX));
  /* 1083f696 call 0x1083f6c0 */
  push32(0x1083f69bu); f_1083f6c0();
  /* 1083f69b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f69e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083f6a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f6a4 push edx */
  push32((uint32_t)(EDX));
  /* 1083f6a5 call 0x1083ec60 */
  push32(0x1083f6aau); f_1083ec60();
  /* 1083f6aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f6ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1083f6b0:;
  /* 1083f6b0 mov esp, ebp */
  ESP = (EBP);
  /* 1083f6b2 pop ebp */
  EBP = (pop32());
  /* 1083f6b3 ret  */
  ESPCHK(0x1083f670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6c0 @ 0x1083f6c0 (65 bytes, 26 insns) */
void f_1083f6c0(void) {
  FTRACE(0x1083f6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083f6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083f6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1083f6c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f6c6 push eax */
  push32((uint32_t)(EAX));
  /* 1083f6c7 call 0x1083f710 */
  push32(0x1083f6ccu); f_1083f710();
  /* 1083f6cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f6cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083f6d1 je 0x1083f6d8 */
  if (C.zf) goto L_1083f6d8;
  /* 1083f6d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083f6d6 jmp 0x1083f6ff */
  goto L_1083f6ff;
L_1083f6d8:;
  /* 1083f6d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f6db mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1083f6de and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1083f6e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083f6e6 je 0x1083f6fd */
  if (C.zf) goto L_1083f6fd;
  /* 1083f6e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f6eb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1083f6ee push ecx */
  push32((uint32_t)(ECX));
  /* 1083f6ef call 0x108404d0 */
  push32(0x1083f6f4u); f_108404d0();
  /* 1083f6f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f6f7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1083f6f9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083f6fb jmp 0x1083f6ff */
  goto L_1083f6ff;
L_1083f6fd:;
  /* 1083f6fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1083f6ff:;
  /* 1083f6ff pop ebp */
  EBP = (pop32());
  /* 1083f700 ret  */
  ESPCHK(0x1083f6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f710 @ 0x1083f710 (183 bytes, 62 insns) */
void f_1083f710(void) {
  FTRACE(0x1083f710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083f710 push ebp */
  push32((uint32_t)(EBP));
  /* 1083f711 mov ebp, esp */
  EBP = (ESP);
  /* 1083f713 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083f716 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1083f71d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f720 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1083f723 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f726 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1083f729 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1083f72c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f72f jne 0x1083f7ab */
  if (!C.zf) goto L_1083f7ab;
  /* 1083f731 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f734 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1083f737 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1083f73d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083f73f je 0x1083f7ab */
  if (C.zf) goto L_1083f7ab;
  /* 1083f741 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f744 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f747 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1083f749 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083f74c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1083f74f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f753 jle 0x1083f7ab */
  if ((C.zf||C.sf!=C.of)) goto L_1083f7ab;
  /* 1083f755 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f758 push edx */
  push32((uint32_t)(EDX));
  /* 1083f759 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f75c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1083f75f push ecx */
  push32((uint32_t)(ECX));
  /* 1083f760 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f763 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1083f766 push eax */
  push32((uint32_t)(EAX));
  /* 1083f767 call 0x1083e680 */
  push32(0x1083f76cu); f_1083e680();
  /* 1083f76c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f76f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f772 jne 0x1083f795 */
  if (!C.zf) goto L_1083f795;
  /* 1083f774 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f777 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1083f77a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1083f780 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083f782 je 0x1083f793 */
  if (C.zf) goto L_1083f793;
  /* 1083f784 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f787 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1083f78a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1083f78d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f790 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1083f793:;
  /* 1083f793 jmp 0x1083f7ab */
  goto L_1083f7ab;
L_1083f795:;
  /* 1083f795 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f798 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1083f79b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1083f79e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f7a1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1083f7a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1083f7ab:;
  /* 1083f7ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f7ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f7b1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1083f7b4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1083f7b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083f7b9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1083f7c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f7c3 mov esp, ebp */
  ESP = (EBP);
  /* 1083f7c5 pop ebp */
  EBP = (pop32());
  /* 1083f7c6 ret  */
  ESPCHK(0x1083f710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7d0 @ 0x1083f7d0 (15 bytes, 7 insns) */
void f_1083f7d0(void) {
  FTRACE(0x1083f7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083f7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083f7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1083f7d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1083f7d5 call 0x1083f7e0 */
  push32(0x1083f7dau); f_1083f7e0();
  /* 1083f7da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f7dd pop ebp */
  EBP = (pop32());
  /* 1083f7de ret  */
  ESPCHK(0x1083f7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7e0 @ 0x1083f7e0 (319 bytes, 94 insns) */
void f_1083f7e0(void) {
  FTRACE(0x1083f7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083f7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083f7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1083f7e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083f7e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1083f7ed mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1083f7f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1083f7f6 call 0x108397e0 */
  push32(0x1083f7fbu); f_108397e0();
  /* 1083f7fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f7fe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1083f805 jmp 0x1083f810 */
  goto L_1083f810;
L_1083f807:;
  /* 1083f807 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f80a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f80d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1083f810:;
  /* 1083f810 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f813 cmp ecx, dword ptr [0x10862c60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10862c60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f819 jge 0x1083f903 */
  if ((C.sf==C.of)) goto L_1083f903;
  /* 1083f81f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f822 mov eax, dword ptr [0x10861918] */
  EAX = (r32((uint32_t)(0x10861918)));
  /* 1083f827 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f82b je 0x1083f8fe */
  if (C.zf) goto L_1083f8fe;
  /* 1083f831 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f834 mov edx, dword ptr [0x10861918] */
  EDX = (r32((uint32_t)(0x10861918)));
  /* 1083f83a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1083f83d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1083f840 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1083f846 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083f848 je 0x1083f8fe */
  if (C.zf) goto L_1083f8fe;
  /* 1083f84e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f851 mov eax, dword ptr [0x10861918] */
  EAX = (r32((uint32_t)(0x10861918)));
  /* 1083f856 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1083f859 push ecx */
  push32((uint32_t)(ECX));
  /* 1083f85a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f85d push edx */
  push32((uint32_t)(EDX));
  /* 1083f85e call 0x1083ec30 */
  push32(0x1083f863u); f_1083ec30();
  /* 1083f863 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f866 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f869 mov ecx, dword ptr [0x10861918] */
  ECX = (r32((uint32_t)(0x10861918)));
  /* 1083f86f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1083f872 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1083f875 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1083f87a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083f87c je 0x1083f8e5 */
  if (C.zf) goto L_1083f8e5;
  /* 1083f87e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f882 jne 0x1083f8a9 */
  if (!C.zf) goto L_1083f8a9;
  /* 1083f884 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f887 mov edx, dword ptr [0x10861918] */
  EDX = (r32((uint32_t)(0x10861918)));
  /* 1083f88d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1083f890 push eax */
  push32((uint32_t)(EAX));
  /* 1083f891 call 0x1083f6c0 */
  push32(0x1083f896u); f_1083f6c0();
  /* 1083f896 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f899 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f89c je 0x1083f8a7 */
  if (C.zf) goto L_1083f8a7;
  /* 1083f89e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f8a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f8a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1083f8a7:;
  /* 1083f8a7 jmp 0x1083f8e5 */
  goto L_1083f8e5;
L_1083f8a9:;
  /* 1083f8a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f8ad jne 0x1083f8e5 */
  if (!C.zf) goto L_1083f8e5;
  /* 1083f8af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f8b2 mov eax, dword ptr [0x10861918] */
  EAX = (r32((uint32_t)(0x10861918)));
  /* 1083f8b7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1083f8ba mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1083f8bd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1083f8c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083f8c2 je 0x1083f8e5 */
  if (C.zf) goto L_1083f8e5;
  /* 1083f8c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f8c7 mov ecx, dword ptr [0x10861918] */
  ECX = (r32((uint32_t)(0x10861918)));
  /* 1083f8cd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1083f8d0 push edx */
  push32((uint32_t)(EDX));
  /* 1083f8d1 call 0x1083f6c0 */
  push32(0x1083f8d6u); f_1083f6c0();
  /* 1083f8d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f8d9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f8dc jne 0x1083f8e5 */
  if (!C.zf) goto L_1083f8e5;
  /* 1083f8de mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1083f8e5:;
  /* 1083f8e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f8e8 mov ecx, dword ptr [0x10861918] */
  ECX = (r32((uint32_t)(0x10861918)));
  /* 1083f8ee mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1083f8f1 push edx */
  push32((uint32_t)(EDX));
  /* 1083f8f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083f8f5 push eax */
  push32((uint32_t)(EAX));
  /* 1083f8f6 call 0x1083eca0 */
  push32(0x1083f8fbu); f_1083eca0();
  /* 1083f8fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083f8fe:;
  /* 1083f8fe jmp 0x1083f807 */
  goto L_1083f807;
L_1083f903:;
  /* 1083f903 push 2 */
  push32((uint32_t)(0x2u));
  /* 1083f905 call 0x10839880 */
  push32(0x1083f90au); f_10839880();
  /* 1083f90a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f90d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f911 jne 0x1083f918 */
  if (!C.zf) goto L_1083f918;
  /* 1083f913 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083f916 jmp 0x1083f91b */
  goto L_1083f91b;
L_1083f918:;
  /* 1083f918 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1083f91b:;
  /* 1083f91b mov esp, ebp */
  ESP = (EBP);
  /* 1083f91d pop ebp */
  EBP = (pop32());
  /* 1083f91e ret  */
  ESPCHK(0x1083f7e0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1083f920 (15 bytes, 7 insns) */
void f_1083f920(void) {
  FTRACE(0x1083f920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083f920 push ebp */
  push32((uint32_t)(EBP));
  /* 1083f921 mov ebp, esp */
  EBP = (ESP);
  /* 1083f923 push 2 */
  push32((uint32_t)(0x2u));
  /* 1083f925 call 0x10834d50 */
  push32(0x1083f92au); f_10834d50();
  /* 1083f92a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f92d pop ebp */
  EBP = (pop32());
  /* 1083f92e ret  */
  ESPCHK(0x1083f920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f930 @ 0x1083f930 (1007 bytes, 269 insns) */
void f_1083f930(void) {
  FTRACE(0x1083f930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083f930 push ebp */
  push32((uint32_t)(EBP));
  /* 1083f931 mov ebp, esp */
  EBP = (ESP);
  /* 1083f933 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083f939 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f93d jl 0x1083f945 */
  if ((C.sf!=C.of)) goto L_1083f945;
  /* 1083f93f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f943 jle 0x1083f94c */
  if ((C.zf||C.sf!=C.of)) goto L_1083f94c;
L_1083f945:;
  /* 1083f945 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083f947 jmp 0x1083fd1b */
  goto L_1083fd1b;
L_1083f94c:;
  /* 1083f94c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1083f94e call 0x108397e0 */
  push32(0x1083f953u); f_108397e0();
  /* 1083f953 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f956 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1083f95d mov eax, dword ptr [0x10861904] */
  EAX = (r32((uint32_t)(0x10861904)));
  /* 1083f962 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f965 mov dword ptr [0x10861904], eax */
  w32((uint32_t)(0x10861904), (EAX));
L_1083f96a:;
  /* 1083f96a cmp dword ptr [0x10861914], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861914))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f971 je 0x1083f97d */
  if (C.zf) goto L_1083f97d;
  /* 1083f973 push 1 */
  push32((uint32_t)(0x1u));
  /* 1083f975 call dword ptr [0x10864304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864304))), 0x1083f97bu);
  /* 1083f97b jmp 0x1083f96a */
  goto L_1083f96a;
L_1083f97d:;
  /* 1083f97d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f981 je 0x1083f9c1 */
  if (C.zf) goto L_1083f9c1;
  /* 1083f983 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f987 je 0x1083f9a1 */
  if (C.zf) goto L_1083f9a1;
  /* 1083f989 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083f98c push ecx */
  push32((uint32_t)(ECX));
  /* 1083f98d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f990 push edx */
  push32((uint32_t)(EDX));
  /* 1083f991 call 0x1083fd20 */
  push32(0x1083f996u); f_1083fd20();
  /* 1083f996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083f999 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1083f99f jmp 0x1083f9b3 */
  goto L_1083f9b3;
L_1083f9a1:;
  /* 1083f9a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083f9a4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083f9a7 mov ecx, dword ptr [eax + 0x108604dc] */
  ECX = (r32((uint32_t)(EAX + 0x108604dc)));
  /* 1083f9ad mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1083f9b3:;
  /* 1083f9b3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1083f9b9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1083f9bc jmp 0x1083fcfb */
  goto L_1083fcfb;
L_1083f9c1:;
  /* 1083f9c1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1083f9c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1083f9cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f9d3 je 0x1083fcf3 */
  if (C.zf) goto L_1083fcf3;
  /* 1083f9d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083f9dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1083f9df cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f9e2 jne 0x1083fc04 */
  if (!C.zf) goto L_1083fc04;
  /* 1083f9e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083f9eb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1083f9ef cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083f9f2 jne 0x1083fc04 */
  if (!C.zf) goto L_1083fc04;
  /* 1083f9f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083f9fb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1083f9ff cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fa02 jne 0x1083fc04 */
  if (!C.zf) goto L_1083fc04;
  /* 1083fa08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083fa0b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1083fa11:;
  /* 1083fa11 push 0x1085d2dc */
  push32((uint32_t)(0x1085d2dcu));
  /* 1083fa16 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1083fa1c push ecx */
  push32((uint32_t)(ECX));
  /* 1083fa1d call 0x10841b80 */
  push32(0x1083fa22u); f_10841b80();
  /* 1083fa22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fa25 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1083fa2b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fa32 je 0x1083fa5d */
  if (C.zf) goto L_1083fa5d;
  /* 1083fa34 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1083fa3a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083fa40 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1083fa46 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fa4d je 0x1083fa5d */
  if (C.zf) goto L_1083fa5d;
  /* 1083fa4f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1083fa55 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1083fa58 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fa5b jne 0x1083fa83 */
  if (!C.zf) goto L_1083fa83;
L_1083fa5d:;
  /* 1083fa5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fa61 je 0x1083fa7c */
  if (C.zf) goto L_1083fa7c;
  /* 1083fa63 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1083fa65 call 0x10839880 */
  push32(0x1083fa6au); f_10839880();
  /* 1083fa6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fa6d mov edx, dword ptr [0x10861904] */
  EDX = (r32((uint32_t)(0x10861904)));
  /* 1083fa73 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083fa76 mov dword ptr [0x10861904], edx */
  w32((uint32_t)(0x10861904), (EDX));
L_1083fa7c:;
  /* 1083fa7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083fa7e jmp 0x1083fd1b */
  goto L_1083fd1b;
L_1083fa83:;
  /* 1083fa83 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1083fa8a jmp 0x1083fa95 */
  goto L_1083fa95;
L_1083fa8c:;
  /* 1083fa8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083fa8f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fa92 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1083fa95:;
  /* 1083fa95 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fa99 jg 0x1083fae3 */
  if ((!C.zf&&C.sf==C.of)) goto L_1083fae3;
  /* 1083fa9b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1083faa1 push ecx */
  push32((uint32_t)(ECX));
  /* 1083faa2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1083faa8 push edx */
  push32((uint32_t)(EDX));
  /* 1083faa9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083faac imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083faaf mov ecx, dword ptr [eax + 0x108604d8] */
  ECX = (r32((uint32_t)(EAX + 0x108604d8)));
  /* 1083fab5 push ecx */
  push32((uint32_t)(ECX));
  /* 1083fab6 call 0x10841b40 */
  push32(0x1083fabbu); f_10841b40();
  /* 1083fabb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fabe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083fac0 jne 0x1083fae1 */
  if (!C.zf) goto L_1083fae1;
  /* 1083fac2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083fac5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083fac8 mov eax, dword ptr [edx + 0x108604d8] */
  EAX = (r32((uint32_t)(EDX + 0x108604d8)));
  /* 1083face push eax */
  push32((uint32_t)(EAX));
  /* 1083facf call 0x10838c10 */
  push32(0x1083fad4u); f_10838c10();
  /* 1083fad4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fad7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fadd jne 0x1083fae1 */
  if (!C.zf) goto L_1083fae1;
  /* 1083fadf jmp 0x1083fae3 */
  goto L_1083fae3;
L_1083fae1:;
  /* 1083fae1 jmp 0x1083fa8c */
  goto L_1083fa8c;
L_1083fae3:;
  /* 1083fae3 push 0x1085d2d8 */
  push32((uint32_t)(0x1085d2d8u));
  /* 1083fae8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1083faee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083faf1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1083faf7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1083fafd push edx */
  push32((uint32_t)(EDX));
  /* 1083fafe call 0x10841b00 */
  push32(0x1083fb03u); f_10841b00();
  /* 1083fb03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fb06 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1083fb0c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fb13 jne 0x1083fb49 */
  if (!C.zf) goto L_1083fb49;
  /* 1083fb15 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1083fb1b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1083fb1e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fb21 je 0x1083fb49 */
  if (C.zf) goto L_1083fb49;
  /* 1083fb23 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fb27 je 0x1083fb42 */
  if (C.zf) goto L_1083fb42;
  /* 1083fb29 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1083fb2b call 0x10839880 */
  push32(0x1083fb30u); f_10839880();
  /* 1083fb30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fb33 mov edx, dword ptr [0x10861904] */
  EDX = (r32((uint32_t)(0x10861904)));
  /* 1083fb39 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083fb3c mov dword ptr [0x10861904], edx */
  w32((uint32_t)(0x10861904), (EDX));
L_1083fb42:;
  /* 1083fb42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083fb44 jmp 0x1083fd1b */
  goto L_1083fd1b;
L_1083fb49:;
  /* 1083fb49 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fb4d jg 0x1083fb9a */
  if ((!C.zf&&C.sf==C.of)) goto L_1083fb9a;
  /* 1083fb4f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1083fb55 push eax */
  push32((uint32_t)(EAX));
  /* 1083fb56 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1083fb5c push ecx */
  push32((uint32_t)(ECX));
  /* 1083fb5d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1083fb63 push edx */
  push32((uint32_t)(EDX));
  /* 1083fb64 call 0x10839600 */
  push32(0x1083fb69u); f_10839600();
  /* 1083fb69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fb6c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1083fb72 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1083fb7a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1083fb80 push ecx */
  push32((uint32_t)(ECX));
  /* 1083fb81 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083fb84 push edx */
  push32((uint32_t)(EDX));
  /* 1083fb85 call 0x1083fd20 */
  push32(0x1083fb8au); f_1083fd20();
  /* 1083fb8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fb8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083fb8f je 0x1083fb9a */
  if (C.zf) goto L_1083fb9a;
  /* 1083fb91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083fb94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fb97 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1083fb9a:;
  /* 1083fb9a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1083fba0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fba6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1083fbac mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1083fbb2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1083fbb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083fbb7 je 0x1083fbc8 */
  if (C.zf) goto L_1083fbc8;
  /* 1083fbb9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1083fbbf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fbc2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1083fbc8:;
  /* 1083fbc8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1083fbce movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1083fbd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083fbd3 jne 0x1083fa11 */
  if (!C.zf) goto L_1083fa11;
  /* 1083fbd9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fbdd je 0x1083fbec */
  if (C.zf) goto L_1083fbec;
  /* 1083fbdf call 0x1083fec0 */
  push32(0x1083fbe4u); f_1083fec0();
  /* 1083fbe4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1083fbea jmp 0x1083fbf6 */
  goto L_1083fbf6;
L_1083fbec:;
  /* 1083fbec mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1083fbf6:;
  /* 1083fbf6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1083fbfc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1083fbff jmp 0x1083fcf1 */
  goto L_1083fcf1;
L_1083fc04:;
  /* 1083fc04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083fc07 push edx */
  push32((uint32_t)(EDX));
  /* 1083fc08 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083fc0a push 0 */
  push32((uint32_t)(0x0u));
  /* 1083fc0c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1083fc12 push eax */
  push32((uint32_t)(EAX));
  /* 1083fc13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083fc16 push ecx */
  push32((uint32_t)(ECX));
  /* 1083fc17 call 0x1083ffc0 */
  push32(0x1083fc1cu); f_1083ffc0();
  /* 1083fc1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fc1f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1083fc22 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fc26 je 0x1083fcf1 */
  if (C.zf) goto L_1083fcf1;
  /* 1083fc2c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1083fc33 jmp 0x1083fc3e */
  goto L_1083fc3e;
L_1083fc35:;
  /* 1083fc35 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083fc38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fc3b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1083fc3e:;
  /* 1083fc3e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fc42 jg 0x1083fca0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1083fca0;
  /* 1083fc44 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fc48 je 0x1083fc9e */
  if (C.zf) goto L_1083fc9e;
  /* 1083fc4a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083fc4d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083fc50 mov ecx, dword ptr [eax + 0x108604dc] */
  ECX = (r32((uint32_t)(EAX + 0x108604dc)));
  /* 1083fc56 push ecx */
  push32((uint32_t)(ECX));
  /* 1083fc57 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1083fc5d push edx */
  push32((uint32_t)(EDX));
  /* 1083fc5e call 0x10841a70 */
  push32(0x1083fc63u); f_10841a70();
  /* 1083fc63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fc66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083fc68 je 0x1083fc95 */
  if (C.zf) goto L_1083fc95;
  /* 1083fc6a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1083fc70 push eax */
  push32((uint32_t)(EAX));
  /* 1083fc71 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083fc74 push ecx */
  push32((uint32_t)(ECX));
  /* 1083fc75 call 0x1083fd20 */
  push32(0x1083fc7au); f_1083fd20();
  /* 1083fc7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fc7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083fc7f je 0x1083fc8c */
  if (C.zf) goto L_1083fc8c;
  /* 1083fc81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083fc84 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fc87 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1083fc8a jmp 0x1083fc93 */
  goto L_1083fc93;
L_1083fc8c:;
  /* 1083fc8c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1083fc93:;
  /* 1083fc93 jmp 0x1083fc9e */
  goto L_1083fc9e;
L_1083fc95:;
  /* 1083fc95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083fc98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fc9b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1083fc9e:;
  /* 1083fc9e jmp 0x1083fc35 */
  goto L_1083fc35;
L_1083fca0:;
  /* 1083fca0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fca4 je 0x1083fccb */
  if (C.zf) goto L_1083fccb;
  /* 1083fca6 call 0x1083fec0 */
  push32(0x1083fcabu); f_1083fec0();
  /* 1083fcab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1083fcae push 2 */
  push32((uint32_t)(0x2u));
  /* 1083fcb0 mov ecx, dword ptr [0x108604dc] */
  ECX = (r32((uint32_t)(0x108604dc)));
  /* 1083fcb6 push ecx */
  push32((uint32_t)(ECX));
  /* 1083fcb7 call 0x10836870 */
  push32(0x1083fcbcu); f_10836870();
  /* 1083fcbc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fcbf mov dword ptr [0x108604dc], 0 */
  w32((uint32_t)(0x108604dc), (0x0u));
  /* 1083fcc9 jmp 0x1083fcf1 */
  goto L_1083fcf1;
L_1083fccb:;
  /* 1083fccb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fccf je 0x1083fcde */
  if (C.zf) goto L_1083fcde;
  /* 1083fcd1 call 0x1083fec0 */
  push32(0x1083fcd6u); f_1083fec0();
  /* 1083fcd6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1083fcdc jmp 0x1083fce8 */
  goto L_1083fce8;
L_1083fcde:;
  /* 1083fcde mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1083fce8:;
  /* 1083fce8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1083fcee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1083fcf1:;
  /* 1083fcf1 jmp 0x1083fcfb */
  goto L_1083fcfb;
L_1083fcf3:;
  /* 1083fcf3 call 0x1083fec0 */
  push32(0x1083fcf8u); f_1083fec0();
  /* 1083fcf8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1083fcfb:;
  /* 1083fcfb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fcff je 0x1083fd18 */
  if (C.zf) goto L_1083fd18;
  /* 1083fd01 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1083fd03 call 0x10839880 */
  push32(0x1083fd08u); f_10839880();
  /* 1083fd08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fd0b mov eax, dword ptr [0x10861904] */
  EAX = (r32((uint32_t)(0x10861904)));
  /* 1083fd10 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083fd13 mov dword ptr [0x10861904], eax */
  w32((uint32_t)(0x10861904), (EAX));
L_1083fd18:;
  /* 1083fd18 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1083fd1b:;
  /* 1083fd1b mov esp, ebp */
  ESP = (EBP);
  /* 1083fd1d pop ebp */
  EBP = (pop32());
  /* 1083fd1e ret  */
  ESPCHK(0x1083f930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd20 @ 0x1083fd20 (403 bytes, 117 insns) */
void f_1083fd20(void) {
  FTRACE(0x1083fd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083fd20 push ebp */
  push32((uint32_t)(EBP));
  /* 1083fd21 mov ebp, esp */
  EBP = (ESP);
  /* 1083fd23 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083fd29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083fd2c push eax */
  push32((uint32_t)(EAX));
  /* 1083fd2d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1083fd33 push ecx */
  push32((uint32_t)(ECX));
  /* 1083fd34 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1083fd3a push edx */
  push32((uint32_t)(EDX));
  /* 1083fd3b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1083fd41 push eax */
  push32((uint32_t)(EAX));
  /* 1083fd42 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083fd45 push ecx */
  push32((uint32_t)(ECX));
  /* 1083fd46 call 0x1083ffc0 */
  push32(0x1083fd4bu); f_1083ffc0();
  /* 1083fd4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fd4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083fd50 jne 0x1083fd59 */
  if (!C.zf) goto L_1083fd59;
  /* 1083fd52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083fd54 jmp 0x1083feaf */
  goto L_1083feaf;
L_1083fd59:;
  /* 1083fd59 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1083fd5e push 0x1085d2e0 */
  push32((uint32_t)(0x1085d2e0u));
  /* 1083fd63 push 2 */
  push32((uint32_t)(0x2u));
  /* 1083fd65 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1083fd6b push edx */
  push32((uint32_t)(EDX));
  /* 1083fd6c call 0x10838c10 */
  push32(0x1083fd71u); f_10838c10();
  /* 1083fd71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fd74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fd77 push eax */
  push32((uint32_t)(EAX));
  /* 1083fd78 call 0x10835de0 */
  push32(0x1083fd7du); f_10835de0();
  /* 1083fd7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fd80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1083fd83 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fd87 jne 0x1083fd90 */
  if (!C.zf) goto L_1083fd90;
  /* 1083fd89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083fd8b jmp 0x1083feaf */
  goto L_1083feaf;
L_1083fd90:;
  /* 1083fd90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083fd93 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083fd96 mov ecx, dword ptr [eax + 0x108604dc] */
  ECX = (r32((uint32_t)(EAX + 0x108604dc)));
  /* 1083fd9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1083fd9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083fda2 mov eax, dword ptr [edx*4 + 0x10861780] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10861780)));
  /* 1083fda9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083fdac push 6 */
  push32((uint32_t)(0x6u));
  /* 1083fdae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083fdb1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083fdb4 add ecx, 0x108617d0 */
  { uint32_t _a=(ECX),_b=(0x108617d0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fdba push ecx */
  push32((uint32_t)(ECX));
  /* 1083fdbb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1083fdbe push edx */
  push32((uint32_t)(EDX));
  /* 1083fdbf call 0x1083c6c0 */
  push32(0x1083fdc4u); f_1083c6c0();
  /* 1083fdc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fdc7 mov eax, dword ptr [0x10861798] */
  EAX = (r32((uint32_t)(0x10861798)));
  /* 1083fdcc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1083fdcf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1083fdd5 push ecx */
  push32((uint32_t)(ECX));
  /* 1083fdd6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083fdd9 push edx */
  push32((uint32_t)(EDX));
  /* 1083fdda call 0x10838d90 */
  push32(0x1083fddfu); f_10838d90();
  /* 1083fddf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fde2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083fde5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083fde8 mov dword ptr [ecx + 0x108604dc], eax */
  w32((uint32_t)(ECX + 0x108604dc), (EAX));
  /* 1083fdee mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1083fdf4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1083fdfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083fdfd mov dword ptr [eax*4 + 0x10861780], edx */
  w32((uint32_t)(EAX*4 + 0x10861780), (EDX));
  /* 1083fe04 push 6 */
  push32((uint32_t)(0x6u));
  /* 1083fe06 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1083fe0c push ecx */
  push32((uint32_t)(ECX));
  /* 1083fe0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083fe10 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083fe13 add edx, 0x108617d0 */
  { uint32_t _a=(EDX),_b=(0x108617d0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fe19 push edx */
  push32((uint32_t)(EDX));
  /* 1083fe1a call 0x1083c6c0 */
  push32(0x1083fe1fu); f_1083c6c0();
  /* 1083fe1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fe22 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fe26 jne 0x1083fe33 */
  if (!C.zf) goto L_1083fe33;
  /* 1083fe28 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1083fe2e mov dword ptr [0x10861798], eax */
  w32((uint32_t)(0x10861798), (EAX));
L_1083fe33:;
  /* 1083fe33 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fe37 jne 0x1083fe45 */
  if (!C.zf) goto L_1083fe45;
  /* 1083fe39 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1083fe3f mov dword ptr [0x1086179c], ecx */
  w32((uint32_t)(0x1086179c), (ECX));
L_1083fe45:;
  /* 1083fe45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083fe48 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083fe4b call dword ptr [edx + 0x108604e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x108604e0))), 0x1083fe51u);
  /* 1083fe51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083fe53 je 0x1083fe8c */
  if (C.zf) goto L_1083fe8c;
  /* 1083fe55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083fe58 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083fe5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083fe5e mov dword ptr [eax + 0x108604dc], ecx */
  w32((uint32_t)(EAX + 0x108604dc), (ECX));
  /* 1083fe64 push 2 */
  push32((uint32_t)(0x2u));
  /* 1083fe66 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083fe69 push edx */
  push32((uint32_t)(EDX));
  /* 1083fe6a call 0x10836870 */
  push32(0x1083fe6fu); f_10836870();
  /* 1083fe6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083fe72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083fe75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083fe78 mov dword ptr [eax*4 + 0x10861780], ecx */
  w32((uint32_t)(EAX*4 + 0x10861780), (ECX));
  /* 1083fe7f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083fe82 mov dword ptr [0x10861798], edx */
  w32((uint32_t)(0x10861798), (EDX));
  /* 1083fe88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083fe8a jmp 0x1083feaf */
  goto L_1083feaf;
L_1083fe8c:;
  /* 1083fe8c cmp dword ptr [ebp - 0xc], 0x108603c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x108603c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fe93 je 0x1083fea3 */
  if (C.zf) goto L_1083fea3;
  /* 1083fe95 push 2 */
  push32((uint32_t)(0x2u));
  /* 1083fe97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083fe9a push eax */
  push32((uint32_t)(EAX));
  /* 1083fe9b call 0x10836870 */
  push32(0x1083fea0u); f_10836870();
  /* 1083fea0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083fea3:;
  /* 1083fea3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083fea6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083fea9 mov eax, dword ptr [ecx + 0x108604dc] */
  EAX = (r32((uint32_t)(ECX + 0x108604dc)));
L_1083feaf:;
  /* 1083feaf mov esp, ebp */
  ESP = (EBP);
  /* 1083feb1 pop ebp */
  EBP = (pop32());
  /* 1083feb2 ret  */
  ESPCHK(0x1083fd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fec0 @ 0x1083fec0 (256 bytes, 72 insns) */
void f_1083fec0(void) {
  FTRACE(0x1083fec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083fec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083fec1 mov ebp, esp */
  EBP = (ESP);
  /* 1083fec3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083fec6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1083fecd cmp dword ptr [0x108604dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108604dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fed4 jne 0x1083fef4 */
  if (!C.zf) goto L_1083fef4;
  /* 1083fed6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1083fedb push 0x1085d2e0 */
  push32((uint32_t)(0x1085d2e0u));
  /* 1083fee0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1083fee2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1083fee7 call 0x10835de0 */
  push32(0x1083feecu); f_10835de0();
  /* 1083feec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083feef mov dword ptr [0x108604dc], eax */
  w32((uint32_t)(0x108604dc), (EAX));
L_1083fef4:;
  /* 1083fef4 mov eax, dword ptr [0x108604dc] */
  EAX = (r32((uint32_t)(0x108604dc)));
  /* 1083fef9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1083fefc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1083ff03 jmp 0x1083ff0e */
  goto L_1083ff0e;
L_1083ff05:;
  /* 1083ff05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ff08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ff0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1083ff0e:;
  /* 1083ff0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ff11 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083ff14 mov eax, dword ptr [edx + 0x108604dc] */
  EAX = (r32((uint32_t)(EDX + 0x108604dc)));
  /* 1083ff1a push eax */
  push32((uint32_t)(EAX));
  /* 1083ff1b push 0x1085d2ec */
  push32((uint32_t)(0x1085d2ecu));
  /* 1083ff20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ff23 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083ff26 mov edx, dword ptr [ecx + 0x108604d8] */
  EDX = (r32((uint32_t)(ECX + 0x108604d8)));
  /* 1083ff2c push edx */
  push32((uint32_t)(EDX));
  /* 1083ff2d push 3 */
  push32((uint32_t)(0x3u));
  /* 1083ff2f mov eax, dword ptr [0x108604dc] */
  EAX = (r32((uint32_t)(0x108604dc)));
  /* 1083ff34 push eax */
  push32((uint32_t)(EAX));
  /* 1083ff35 call 0x10840160 */
  push32(0x1083ff3au); f_10840160();
  /* 1083ff3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ff3d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ff41 jge 0x1083ff89 */
  if ((C.sf==C.of)) goto L_1083ff89;
  /* 1083ff43 push 0x1085d2d8 */
  push32((uint32_t)(0x1085d2d8u));
  /* 1083ff48 mov ecx, dword ptr [0x108604dc] */
  ECX = (r32((uint32_t)(0x108604dc)));
  /* 1083ff4e push ecx */
  push32((uint32_t)(ECX));
  /* 1083ff4f call 0x10838da0 */
  push32(0x1083ff54u); f_10838da0();
  /* 1083ff54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ff57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ff5a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ff5d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083ff60 mov eax, dword ptr [edx + 0x108604dc] */
  EAX = (r32((uint32_t)(EDX + 0x108604dc)));
  /* 1083ff66 push eax */
  push32((uint32_t)(EAX));
  /* 1083ff67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083ff6a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083ff6d mov edx, dword ptr [ecx + 0x108604dc] */
  EDX = (r32((uint32_t)(ECX + 0x108604dc)));
  /* 1083ff73 push edx */
  push32((uint32_t)(EDX));
  /* 1083ff74 call 0x10841a70 */
  push32(0x1083ff79u); f_10841a70();
  /* 1083ff79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ff7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083ff7e je 0x1083ff87 */
  if (C.zf) goto L_1083ff87;
  /* 1083ff80 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1083ff87:;
  /* 1083ff87 jmp 0x1083ffb7 */
  goto L_1083ffb7;
L_1083ff89:;
  /* 1083ff89 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ff8d jne 0x1083ff96 */
  if (!C.zf) goto L_1083ff96;
  /* 1083ff8f mov eax, dword ptr [0x108604dc] */
  EAX = (r32((uint32_t)(0x108604dc)));
  /* 1083ff94 jmp 0x1083ffbc */
  goto L_1083ffbc;
L_1083ff96:;
  /* 1083ff96 push 2 */
  push32((uint32_t)(0x2u));
  /* 1083ff98 mov eax, dword ptr [0x108604dc] */
  EAX = (r32((uint32_t)(0x108604dc)));
  /* 1083ff9d push eax */
  push32((uint32_t)(EAX));
  /* 1083ff9e call 0x10836870 */
  push32(0x1083ffa3u); f_10836870();
  /* 1083ffa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083ffa6 mov dword ptr [0x108604dc], 0 */
  w32((uint32_t)(0x108604dc), (0x0u));
  /* 1083ffb0 mov eax, dword ptr [0x108604f4] */
  EAX = (r32((uint32_t)(0x108604f4)));
  /* 1083ffb5 jmp 0x1083ffbc */
  goto L_1083ffbc;
L_1083ffb7:;
  /* 1083ffb7 jmp 0x1083ff05 */
  goto L_1083ff05;
L_1083ffbc:;
  /* 1083ffbc mov esp, ebp */
  ESP = (EBP);
  /* 1083ffbe pop ebp */
  EBP = (pop32());
  /* 1083ffbf ret  */
  ESPCHK(0x1083fec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffc0 @ 0x1083ffc0 (388 bytes, 115 insns) */
void f_1083ffc0(void) {
  FTRACE(0x1083ffc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083ffc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1083ffc1 mov ebp, esp */
  EBP = (ESP);
  /* 1083ffc3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083ffc9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ffcd jne 0x1083ffd6 */
  if (!C.zf) goto L_1083ffd6;
  /* 1083ffcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083ffd1 jmp 0x10840140 */
  goto L_10840140;
L_1083ffd6:;
  /* 1083ffd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083ffd9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1083ffdc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083ffdf jne 0x10840030 */
  if (!C.zf) goto L_10840030;
  /* 1083ffe1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083ffe4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1083ffe8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083ffea jne 0x10840030 */
  if (!C.zf) goto L_10840030;
  /* 1083ffec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083ffef mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1083fff2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083fff5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1083fff9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083fffd je 0x10840019 */
  if (C.zf) goto L_10840019;
  /* 1083ffff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10840002 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10840007 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1084000a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10840010 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10840013 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10840019:;
  /* 10840019 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084001d je 0x10840028 */
  if (C.zf) goto L_10840028;
  /* 1084001f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10840022 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10840028:;
  /* 10840028 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1084002b jmp 0x10840140 */
  goto L_10840140;
L_10840030:;
  /* 10840030 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840033 push ecx */
  push32((uint32_t)(ECX));
  /* 10840034 push 0x10860450 */
  push32((uint32_t)(0x10860450u));
  /* 10840039 call 0x10841a70 */
  push32(0x1084003eu); f_10841a70();
  /* 1084003e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840041 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10840043 je 0x108400f8 */
  if (C.zf) goto L_108400f8;
  /* 10840049 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084004c push edx */
  push32((uint32_t)(EDX));
  /* 1084004d push 0x108603cc */
  push32((uint32_t)(0x108603ccu));
  /* 10840052 call 0x10841a70 */
  push32(0x10840057u); f_10841a70();
  /* 10840057 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084005a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1084005c je 0x108400f8 */
  if (C.zf) goto L_108400f8;
  /* 10840062 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840065 push eax */
  push32((uint32_t)(EAX));
  /* 10840066 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1084006c push ecx */
  push32((uint32_t)(ECX));
  /* 1084006d call 0x108401b0 */
  push32(0x10840072u); f_108401b0();
  /* 10840072 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840075 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10840077 je 0x10840080 */
  if (C.zf) goto L_10840080;
  /* 10840079 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084007b jmp 0x10840140 */
  goto L_10840140;
L_10840080:;
  /* 10840080 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10840086 push edx */
  push32((uint32_t)(EDX));
  /* 10840087 push 0x108617a8 */
  push32((uint32_t)(0x108617a8u));
  /* 1084008c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10840092 push eax */
  push32((uint32_t)(EAX));
  /* 10840093 call 0x10841bc0 */
  push32(0x10840098u); f_10841bc0();
  /* 10840098 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084009b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1084009d jne 0x108400a6 */
  if (!C.zf) goto L_108400a6;
  /* 1084009f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108400a1 jmp 0x10840140 */
  goto L_10840140;
L_108400a6:;
  /* 108400a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108400a8 mov cx, word ptr [0x108617ac] */
  CX = (r16((uint32_t)(0x108617ac)));
  /* 108400af mov dword ptr [0x108617b0], ecx */
  w32((uint32_t)(0x108617b0), (ECX));
  /* 108400b5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 108400bb push edx */
  push32((uint32_t)(EDX));
  /* 108400bc push 0x10860450 */
  push32((uint32_t)(0x10860450u));
  /* 108400c1 call 0x10840310 */
  push32(0x108400c6u); f_10840310();
  /* 108400c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108400c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108400cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108400cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108400d1 je 0x108400e6 */
  if (C.zf) goto L_108400e6;
  /* 108400d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108400d6 push edx */
  push32((uint32_t)(EDX));
  /* 108400d7 push 0x108603cc */
  push32((uint32_t)(0x108603ccu));
  /* 108400dc call 0x10838d90 */
  push32(0x108400e1u); f_10838d90();
  /* 108400e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108400e4 jmp 0x108400f8 */
  goto L_108400f8;
L_108400e6:;
  /* 108400e6 push 0x10860450 */
  push32((uint32_t)(0x10860450u));
  /* 108400eb push 0x108603cc */
  push32((uint32_t)(0x108603ccu));
  /* 108400f0 call 0x10838d90 */
  push32(0x108400f5u); f_10838d90();
  /* 108400f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108400f8:;
  /* 108400f8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108400fc je 0x10840111 */
  if (C.zf) goto L_10840111;
  /* 108400fe push 6 */
  push32((uint32_t)(0x6u));
  /* 10840100 push 0x108617a8 */
  push32((uint32_t)(0x108617a8u));
  /* 10840105 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10840108 push eax */
  push32((uint32_t)(EAX));
  /* 10840109 call 0x1083c6c0 */
  push32(0x1084010eu); f_1083c6c0();
  /* 1084010e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10840111:;
  /* 10840111 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10840115 je 0x1084012a */
  if (C.zf) goto L_1084012a;
  /* 10840117 push 4 */
  push32((uint32_t)(0x4u));
  /* 10840119 push 0x108617b0 */
  push32((uint32_t)(0x108617b0u));
  /* 1084011e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10840121 push ecx */
  push32((uint32_t)(ECX));
  /* 10840122 call 0x1083c6c0 */
  push32(0x10840127u); f_1083c6c0();
  /* 10840127 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1084012a:;
  /* 1084012a push 0x10860450 */
  push32((uint32_t)(0x10860450u));
  /* 1084012f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10840132 push edx */
  push32((uint32_t)(EDX));
  /* 10840133 call 0x10838d90 */
  push32(0x10840138u); f_10838d90();
  /* 10840138 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084013b mov eax, 0x10860450 */
  EAX = (0x10860450u);
L_10840140:;
  /* 10840140 mov esp, ebp */
  ESP = (EBP);
  /* 10840142 pop ebp */
  EBP = (pop32());
  /* 10840143 ret  */
  ESPCHK(0x1083ffc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010150 @ 0x10840150 (7 bytes, 5 insns) */
void f_10840150(void) {
  FTRACE(0x10840150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10840150 push ebp */
  push32((uint32_t)(EBP));
  /* 10840151 mov ebp, esp */
  EBP = (ESP);
  /* 10840153 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10840155 pop ebp */
  EBP = (pop32());
  /* 10840156 ret  */
  ESPCHK(0x10840150u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10840160 (79 bytes, 28 insns) */
void f_10840160(void) {
  FTRACE(0x10840160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10840160 push ebp */
  push32((uint32_t)(EBP));
  /* 10840161 mov ebp, esp */
  EBP = (ESP);
  /* 10840163 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10840166 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10840169 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1084016c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10840173 jmp 0x1084017e */
  goto L_1084017e;
L_10840175:;
  /* 10840175 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10840178 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084017b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1084017e:;
  /* 1084017e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10840181 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10840184 jge 0x108401a4 */
  if ((C.sf==C.of)) goto L_108401a4;
  /* 10840186 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840189 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084018c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1084018f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840192 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10840195 push edx */
  push32((uint32_t)(EDX));
  /* 10840196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840199 push eax */
  push32((uint32_t)(EAX));
  /* 1084019a call 0x10838da0 */
  push32(0x1084019fu); f_10838da0();
  /* 1084019f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108401a2 jmp 0x10840175 */
  goto L_10840175;
L_108401a4:;
  /* 108401a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108401ab mov esp, ebp */
  ESP = (EBP);
  /* 108401ad pop ebp */
  EBP = (pop32());
  /* 108401ae ret  */
  ESPCHK(0x10840160u, _esp0);
  ESP += 4; return;
}

/* FUN_100101b0 @ 0x108401b0 (349 bytes, 122 insns) */
void f_108401b0(void) {
  FTRACE(0x108401b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108401b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108401b1 mov ebp, esp */
  EBP = (ESP);
  /* 108401b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108401b6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 108401bb push 0 */
  push32((uint32_t)(0x0u));
  /* 108401bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108401c0 push eax */
  push32((uint32_t)(EAX));
  /* 108401c1 call 0x10839b50 */
  push32(0x108401c6u); f_10839b50();
  /* 108401c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108401c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108401cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108401cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108401d1 jne 0x108401da */
  if (!C.zf) goto L_108401da;
  /* 108401d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108401d5 jmp 0x10840309 */
  goto L_10840309;
L_108401da:;
  /* 108401da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108401dd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108401e0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108401e3 jne 0x10840210 */
  if (!C.zf) goto L_10840210;
  /* 108401e5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108401e8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 108401ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108401ee je 0x10840210 */
  if (C.zf) goto L_10840210;
  /* 108401f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108401f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108401f6 push ecx */
  push32((uint32_t)(ECX));
  /* 108401f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108401fa add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840200 push edx */
  push32((uint32_t)(EDX));
  /* 10840201 call 0x10838d90 */
  push32(0x10840206u); f_10838d90();
  /* 10840206 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840209 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084020b jmp 0x10840309 */
  goto L_10840309;
L_10840210:;
  /* 10840210 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10840217 jmp 0x10840222 */
  goto L_10840222;
L_10840219:;
  /* 10840219 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084021c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084021f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10840222:;
  /* 10840222 push 0x1085d2f0 */
  push32((uint32_t)(0x1085d2f0u));
  /* 10840227 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1084022a push ecx */
  push32((uint32_t)(ECX));
  /* 1084022b call 0x10841b00 */
  push32(0x10840230u); f_10841b00();
  /* 10840230 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840233 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10840236 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084023a jne 0x10840244 */
  if (!C.zf) goto L_10840244;
  /* 1084023c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1084023f jmp 0x10840309 */
  goto L_10840309;
L_10840244:;
  /* 10840244 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10840247 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084024a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1084024c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1084024f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10840253 jne 0x1084027a */
  if (!C.zf) goto L_1084027a;
  /* 10840255 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10840259 jge 0x1084027a */
  if ((C.sf==C.of)) goto L_1084027a;
  /* 1084025b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1084025f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10840262 je 0x1084027a */
  if (C.zf) goto L_1084027a;
  /* 10840264 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840267 push edx */
  push32((uint32_t)(EDX));
  /* 10840268 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1084026b push eax */
  push32((uint32_t)(EAX));
  /* 1084026c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084026f push ecx */
  push32((uint32_t)(ECX));
  /* 10840270 call 0x10839600 */
  push32(0x10840275u); f_10839600();
  /* 10840275 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840278 jmp 0x108402e0 */
  goto L_108402e0;
L_1084027a:;
  /* 1084027a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084027e jne 0x108402a8 */
  if (!C.zf) goto L_108402a8;
  /* 10840280 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10840284 jge 0x108402a8 */
  if ((C.sf==C.of)) goto L_108402a8;
  /* 10840286 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1084028a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084028d je 0x108402a8 */
  if (C.zf) goto L_108402a8;
  /* 1084028f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840292 push eax */
  push32((uint32_t)(EAX));
  /* 10840293 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10840296 push ecx */
  push32((uint32_t)(ECX));
  /* 10840297 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084029a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084029d push edx */
  push32((uint32_t)(EDX));
  /* 1084029e call 0x10839600 */
  push32(0x108402a3u); f_10839600();
  /* 108402a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108402a6 jmp 0x108402e0 */
  goto L_108402e0;
L_108402a8:;
  /* 108402a8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108402ac jne 0x108402db */
  if (!C.zf) goto L_108402db;
  /* 108402ae movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108402b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108402b4 je 0x108402bf */
  if (C.zf) goto L_108402bf;
  /* 108402b6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108402ba cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108402bd jne 0x108402db */
  if (!C.zf) goto L_108402db;
L_108402bf:;
  /* 108402bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108402c2 push edx */
  push32((uint32_t)(EDX));
  /* 108402c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108402c6 push eax */
  push32((uint32_t)(EAX));
  /* 108402c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108402ca add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108402d0 push ecx */
  push32((uint32_t)(ECX));
  /* 108402d1 call 0x10839600 */
  push32(0x108402d6u); f_10839600();
  /* 108402d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108402d9 jmp 0x108402e0 */
  goto L_108402e0;
L_108402db:;
  /* 108402db or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108402de jmp 0x10840309 */
  goto L_10840309;
L_108402e0:;
  /* 108402e0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108402e4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108402e7 jne 0x108402eb */
  if (!C.zf) goto L_108402eb;
  /* 108402e9 jmp 0x10840307 */
  goto L_10840307;
L_108402eb:;
  /* 108402eb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108402ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108402f1 jne 0x108402f5 */
  if (!C.zf) goto L_108402f5;
  /* 108402f3 jmp 0x10840307 */
  goto L_10840307;
L_108402f5:;
  /* 108402f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108402f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108402fb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 108402ff mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10840302 jmp 0x10840219 */
  goto L_10840219;
L_10840307:;
  /* 10840307 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10840309:;
  /* 10840309 mov esp, ebp */
  ESP = (EBP);
  /* 1084030b pop ebp */
  EBP = (pop32());
  /* 1084030c ret  */
  ESPCHK(0x108401b0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10840310 (101 bytes, 36 insns) */
void f_10840310(void) {
  FTRACE(0x10840310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10840310 push ebp */
  push32((uint32_t)(EBP));
  /* 10840311 mov ebp, esp */
  EBP = (ESP);
  /* 10840313 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10840316 push eax */
  push32((uint32_t)(EAX));
  /* 10840317 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084031a push ecx */
  push32((uint32_t)(ECX));
  /* 1084031b call 0x10838d90 */
  push32(0x10840320u); f_10838d90();
  /* 10840320 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840323 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10840326 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1084032a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1084032c je 0x10840348 */
  if (C.zf) goto L_10840348;
  /* 1084032e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10840331 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840334 push ecx */
  push32((uint32_t)(ECX));
  /* 10840335 push 0x1085d2f8 */
  push32((uint32_t)(0x1085d2f8u));
  /* 1084033a push 2 */
  push32((uint32_t)(0x2u));
  /* 1084033c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084033f push edx */
  push32((uint32_t)(EDX));
  /* 10840340 call 0x10840160 */
  push32(0x10840345u); f_10840160();
  /* 10840345 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10840348:;
  /* 10840348 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1084034b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10840352 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10840354 je 0x10840373 */
  if (C.zf) goto L_10840373;
  /* 10840356 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10840359 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084035f push edx */
  push32((uint32_t)(EDX));
  /* 10840360 push 0x1085d2f4 */
  push32((uint32_t)(0x1085d2f4u));
  /* 10840365 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840367 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084036a push eax */
  push32((uint32_t)(EAX));
  /* 1084036b call 0x10840160 */
  push32(0x10840370u); f_10840160();
  /* 10840370 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10840373:;
  /* 10840373 pop ebp */
  EBP = (pop32());
  /* 10840374 ret  */
  ESPCHK(0x10840310u, _esp0);
  ESP += 4; return;
}

/* FUN_10010380 @ 0x10840380 (130 bytes, 50 insns) */
void f_10840380(void) {
  FTRACE(0x10840380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10840380 push ebp */
  push32((uint32_t)(EBP));
  /* 10840381 mov ebp, esp */
  EBP = (ESP);
  /* 10840383 push ecx */
  push32((uint32_t)(ECX));
  /* 10840384 push ebx */
  push32((uint32_t)(EBX));
  /* 10840385 push esi */
  push32((uint32_t)(ESI));
  /* 10840386 push edi */
  push32((uint32_t)(EDI));
  /* 10840387 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1084038e:;
  /* 1084038e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10840392 jne 0x108403b2 */
  if (!C.zf) goto L_108403b2;
  /* 10840394 push 0x1085d308 */
  push32((uint32_t)(0x1085d308u));
  /* 10840399 push 0 */
  push32((uint32_t)(0x0u));
  /* 1084039b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1084039d push 0x1085d2fc */
  push32((uint32_t)(0x1085d2fcu));
  /* 108403a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 108403a4 call 0x10834ea0 */
  push32(0x108403a9u); f_10834ea0();
  /* 108403a9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108403ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108403af jne 0x108403b2 */
  if (!C.zf) goto L_108403b2;
  /* 108403b1 int3  */
  x86_unimpl("int3 @ 0x108403b1");
L_108403b2:;
  /* 108403b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108403b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108403b6 jne 0x1084038e */
  if (!C.zf) goto L_1084038e;
  /* 108403b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108403bb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108403be and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 108403c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108403c3 je 0x108403d1 */
  if (C.zf) goto L_108403d1;
  /* 108403c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108403c8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 108403cf jmp 0x108403f8 */
  goto L_108403f8;
L_108403d1:;
  /* 108403d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108403d4 push ecx */
  push32((uint32_t)(ECX));
  /* 108403d5 call 0x1083ebf0 */
  push32(0x108403dau); f_1083ebf0();
  /* 108403da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108403dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108403e0 push edx */
  push32((uint32_t)(EDX));
  /* 108403e1 call 0x10840410 */
  push32(0x108403e6u); f_10840410();
  /* 108403e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108403e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108403ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108403ef push eax */
  push32((uint32_t)(EAX));
  /* 108403f0 call 0x1083ec60 */
  push32(0x108403f5u); f_1083ec60();
  /* 108403f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108403f8:;
  /* 108403f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108403fb pop edi */
  EDI = (pop32());
  /* 108403fc pop esi */
  ESI = (pop32());
  /* 108403fd pop ebx */
  EBX = (pop32());
  /* 108403fe mov esp, ebp */
  ESP = (EBP);
  /* 10840400 pop ebp */
  EBP = (pop32());
  /* 10840401 ret  */
  ESPCHK(0x10840380u, _esp0);
  ESP += 4; return;
}

/* FUN_10010410 @ 0x10840410 (190 bytes, 67 insns) */
void f_10840410(void) {
  FTRACE(0x10840410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10840410 push ebp */
  push32((uint32_t)(EBP));
  /* 10840411 mov ebp, esp */
  EBP = (ESP);
  /* 10840413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10840416 push ebx */
  push32((uint32_t)(EBX));
  /* 10840417 push esi */
  push32((uint32_t)(ESI));
  /* 10840418 push edi */
  push32((uint32_t)(EDI));
  /* 10840419 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10840420 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840423 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10840426:;
  /* 10840426 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084042a jne 0x1084044a */
  if (!C.zf) goto L_1084044a;
  /* 1084042c push 0x1085d1a8 */
  push32((uint32_t)(0x1085d1a8u));
  /* 10840431 push 0 */
  push32((uint32_t)(0x0u));
  /* 10840433 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10840435 push 0x1085d2fc */
  push32((uint32_t)(0x1085d2fcu));
  /* 1084043a push 2 */
  push32((uint32_t)(0x2u));
  /* 1084043c call 0x10834ea0 */
  push32(0x10840441u); f_10834ea0();
  /* 10840441 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840444 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10840447 jne 0x1084044a */
  if (!C.zf) goto L_1084044a;
  /* 10840449 int3  */
  x86_unimpl("int3 @ 0x10840449");
L_1084044a:;
  /* 1084044a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1084044c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1084044e jne 0x10840426 */
  if (!C.zf) goto L_10840426;
  /* 10840450 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10840453 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10840456 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1084045b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1084045d je 0x108404ba */
  if (C.zf) goto L_108404ba;
  /* 1084045f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10840462 push ecx */
  push32((uint32_t)(ECX));
  /* 10840463 call 0x1083f710 */
  push32(0x10840468u); f_1083f710();
  /* 10840468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084046b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1084046e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10840471 push edx */
  push32((uint32_t)(EDX));
  /* 10840472 call 0x10842a90 */
  push32(0x10840477u); f_10842a90();
  /* 10840477 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084047a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1084047d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10840480 push ecx */
  push32((uint32_t)(ECX));
  /* 10840481 call 0x10842960 */
  push32(0x10840486u); f_10842960();
  /* 10840486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840489 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1084048b jge 0x10840496 */
  if ((C.sf==C.of)) goto L_10840496;
  /* 1084048d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10840494 jmp 0x108404ba */
  goto L_108404ba;
L_10840496:;
  /* 10840496 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10840499 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084049d je 0x108404ba */
  if (C.zf) goto L_108404ba;
  /* 1084049f push 2 */
  push32((uint32_t)(0x2u));
  /* 108404a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108404a4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 108404a7 push ecx */
  push32((uint32_t)(ECX));
  /* 108404a8 call 0x10836870 */
  push32(0x108404adu); f_10836870();
  /* 108404ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108404b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108404b3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_108404ba:;
  /* 108404ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108404bd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 108404c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108404c7 pop edi */
  EDI = (pop32());
  /* 108404c8 pop esi */
  ESI = (pop32());
  /* 108404c9 pop ebx */
  EBX = (pop32());
  /* 108404ca mov esp, ebp */
  ESP = (EBP);
  /* 108404cc pop ebp */
  EBP = (pop32());
  /* 108404cd ret  */
  ESPCHK(0x10840410u, _esp0);
  ESP += 4; return;
}

/* FUN_100104d0 @ 0x108404d0 (210 bytes, 63 insns) */
void f_108404d0(void) {
  FTRACE(0x108404d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108404d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108404d1 mov ebp, esp */
  EBP = (ESP);
  /* 108404d3 push ecx */
  push32((uint32_t)(ECX));
  /* 108404d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108404d7 cmp eax, dword ptr [0x1086309c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1086309c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108404dd jae 0x10840501 */
  if (!C.cf) goto L_10840501;
  /* 108404df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108404e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108404e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108404e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108404eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108404ee mov eax, dword ptr [ecx*4 + 0x10862f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10862f60)));
  /* 108404f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 108404fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108404fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108404ff jne 0x10840514 */
  if (!C.zf) goto L_10840514;
L_10840501:;
  /* 10840501 call 0x1083dcb0 */
  push32(0x10840506u); f_1083dcb0();
  /* 10840506 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1084050c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1084050f jmp 0x1084059e */
  goto L_1084059e;
L_10840514:;
  /* 10840514 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840517 push edx */
  push32((uint32_t)(EDX));
  /* 10840518 call 0x1083f4d0 */
  push32(0x1084051du); f_1083f4d0();
  /* 1084051d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840520 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840523 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10840526 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840529 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1084052c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1084052f mov edx, dword ptr [eax*4 + 0x10862f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10862f60)));
  /* 10840536 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1084053b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1084053e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10840540 je 0x1084057d */
  if (C.zf) goto L_1084057d;
  /* 10840542 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840545 push ecx */
  push32((uint32_t)(ECX));
  /* 10840546 call 0x1083f350 */
  push32(0x1084054bu); f_1083f350();
  /* 1084054b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084054e push eax */
  push32((uint32_t)(EAX));
  /* 1084054f call dword ptr [0x10864300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864300))), 0x10840555u);
  /* 10840555 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10840557 jne 0x10840564 */
  if (!C.zf) goto L_10840564;
  /* 10840559 call dword ptr [0x108643d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643d8))), 0x1084055fu);
  /* 1084055f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10840562 jmp 0x1084056b */
  goto L_1084056b;
L_10840564:;
  /* 10840564 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1084056b:;
  /* 1084056b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084056f jne 0x10840573 */
  if (!C.zf) goto L_10840573;
  /* 10840571 jmp 0x1084058f */
  goto L_1084058f;
L_10840573:;
  /* 10840573 call 0x1083dcc0 */
  push32(0x10840578u); f_1083dcc0();
  /* 10840578 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084057b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1084057d:;
  /* 1084057d call 0x1083dcb0 */
  push32(0x10840582u); f_1083dcb0();
  /* 10840582 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10840588 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1084058f:;
  /* 1084058f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840592 push eax */
  push32((uint32_t)(EAX));
  /* 10840593 call 0x1083f560 */
  push32(0x10840598u); f_1083f560();
  /* 10840598 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084059b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1084059e:;
  /* 1084059e mov esp, ebp */
  ESP = (EBP);
  /* 108405a0 pop ebp */
  EBP = (pop32());
  /* 108405a1 ret  */
  ESPCHK(0x108404d0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x108405b0 (219 bytes, 64 insns) */
void f_108405b0(void) {
  FTRACE(0x108405b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108405b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108405b1 mov ebp, esp */
  EBP = (ESP);
  /* 108405b3 push ecx */
  push32((uint32_t)(ECX));
  /* 108405b4 cmp dword ptr [0x10861794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108405bb je 0x10840651 */
  if (C.zf) goto L_10840651;
  /* 108405c1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 108405c3 push 0x1085d318 */
  push32((uint32_t)(0x1085d318u));
  /* 108405c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 108405ca push 0xac */
  push32((uint32_t)(0xacu));
  /* 108405cf push 1 */
  push32((uint32_t)(0x1u));
  /* 108405d1 call 0x108361f0 */
  push32(0x108405d6u); f_108361f0();
  /* 108405d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108405d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108405dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108405e0 jne 0x108405ec */
  if (!C.zf) goto L_108405ec;
  /* 108405e2 mov eax, 1 */
  EAX = (0x1u);
  /* 108405e7 jmp 0x10840687 */
  goto L_10840687;
L_108405ec:;
  /* 108405ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108405ef push eax */
  push32((uint32_t)(EAX));
  /* 108405f0 call 0x10840690 */
  push32(0x108405f5u); f_10840690();
  /* 108405f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108405f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108405fa je 0x1084061d */
  if (C.zf) goto L_1084061d;
  /* 108405fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108405ff push ecx */
  push32((uint32_t)(ECX));
  /* 10840600 call 0x10840c20 */
  push32(0x10840605u); f_10840c20();
  /* 10840605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840608 push 2 */
  push32((uint32_t)(0x2u));
  /* 1084060a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084060d push edx */
  push32((uint32_t)(EDX));
  /* 1084060e call 0x10836870 */
  push32(0x10840613u); f_10836870();
  /* 10840613 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840616 mov eax, 1 */
  EAX = (0x1u);
  /* 1084061b jmp 0x10840687 */
  goto L_10840687;
L_1084061d:;
  /* 1084061d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840620 mov dword ptr [0x10860c98], eax */
  w32((uint32_t)(0x10860c98), (EAX));
  /* 10840625 mov ecx, dword ptr [0x108617b4] */
  ECX = (r32((uint32_t)(0x108617b4)));
  /* 1084062b push ecx */
  push32((uint32_t)(ECX));
  /* 1084062c call 0x10840c20 */
  push32(0x10840631u); f_10840c20();
  /* 10840631 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840634 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840636 mov edx, dword ptr [0x108617b4] */
  EDX = (r32((uint32_t)(0x108617b4)));
  /* 1084063c push edx */
  push32((uint32_t)(EDX));
  /* 1084063d call 0x10836870 */
  push32(0x10840642u); f_10836870();
  /* 10840642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840645 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840648 mov dword ptr [0x108617b4], eax */
  w32((uint32_t)(0x108617b4), (EAX));
  /* 1084064d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084064f jmp 0x10840687 */
  goto L_10840687;
L_10840651:;
  /* 10840651 mov dword ptr [0x10860c98], 0x10860ca0 */
  w32((uint32_t)(0x10860c98), (0x10860ca0u));
  /* 1084065b mov ecx, dword ptr [0x108617b4] */
  ECX = (r32((uint32_t)(0x108617b4)));
  /* 10840661 push ecx */
  push32((uint32_t)(ECX));
  /* 10840662 call 0x10840c20 */
  push32(0x10840667u); f_10840c20();
  /* 10840667 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084066a push 2 */
  push32((uint32_t)(0x2u));
  /* 1084066c mov edx, dword ptr [0x108617b4] */
  EDX = (r32((uint32_t)(0x108617b4)));
  /* 10840672 push edx */
  push32((uint32_t)(EDX));
  /* 10840673 call 0x10836870 */
  push32(0x10840678u); f_10836870();
  /* 10840678 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084067b mov dword ptr [0x108617b4], 0 */
  w32((uint32_t)(0x108617b4), (0x0u));
  /* 10840685 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10840687:;
  /* 10840687 mov esp, ebp */
  ESP = (EBP);
  /* 10840689 pop ebp */
  EBP = (pop32());
  /* 1084068a ret  */
  ESPCHK(0x108405b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010690 @ 0x10840690 (1423 bytes, 533 insns) */
void f_10840690(void) {
  FTRACE(0x10840690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10840690 push ebp */
  push32((uint32_t)(EBP));
  /* 10840691 mov ebp, esp */
  EBP = (ESP);
  /* 10840693 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10840696 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1084069d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084069f mov ax, word ptr [0x108617ee] */
  AX = (r16((uint32_t)(0x108617ee)));
  /* 108406a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108406a8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108406aa mov cx, word ptr [0x108617f0] */
  CX = (r16((uint32_t)(0x108617f0)));
  /* 108406b1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108406b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108406b8 jne 0x108406c2 */
  if (!C.zf) goto L_108406c2;
  /* 108406ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108406bd jmp 0x10840c1b */
  goto L_10840c1b;
L_108406c2:;
  /* 108406c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108406c5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108406c8 push edx */
  push32((uint32_t)(EDX));
  /* 108406c9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 108406cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108406ce push eax */
  push32((uint32_t)(EAX));
  /* 108406cf push 1 */
  push32((uint32_t)(0x1u));
  /* 108406d1 call 0x10843fa0 */
  push32(0x108406d6u); f_10843fa0();
  /* 108406d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108406d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108406dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108406de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108406e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108406e4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108406e7 push edx */
  push32((uint32_t)(EDX));
  /* 108406e8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 108406ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108406ed push eax */
  push32((uint32_t)(EAX));
  /* 108406ee push 1 */
  push32((uint32_t)(0x1u));
  /* 108406f0 call 0x10843fa0 */
  push32(0x108406f5u); f_10843fa0();
  /* 108406f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108406f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108406fb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108406fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840700 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840703 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840706 push edx */
  push32((uint32_t)(EDX));
  /* 10840707 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10840709 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084070c push eax */
  push32((uint32_t)(EAX));
  /* 1084070d push 1 */
  push32((uint32_t)(0x1u));
  /* 1084070f call 0x10843fa0 */
  push32(0x10840714u); f_10843fa0();
  /* 10840714 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840717 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1084071a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1084071c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1084071f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840722 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840725 push edx */
  push32((uint32_t)(EDX));
  /* 10840726 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10840728 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084072b push eax */
  push32((uint32_t)(EAX));
  /* 1084072c push 1 */
  push32((uint32_t)(0x1u));
  /* 1084072e call 0x10843fa0 */
  push32(0x10840733u); f_10843fa0();
  /* 10840733 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840736 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840739 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1084073b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1084073e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840741 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840744 push edx */
  push32((uint32_t)(EDX));
  /* 10840745 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10840747 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084074a push eax */
  push32((uint32_t)(EAX));
  /* 1084074b push 1 */
  push32((uint32_t)(0x1u));
  /* 1084074d call 0x10843fa0 */
  push32(0x10840752u); f_10843fa0();
  /* 10840752 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840755 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840758 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1084075a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1084075d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840760 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840763 push edx */
  push32((uint32_t)(EDX));
  /* 10840764 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10840766 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840769 push eax */
  push32((uint32_t)(EAX));
  /* 1084076a push 1 */
  push32((uint32_t)(0x1u));
  /* 1084076c call 0x10843fa0 */
  push32(0x10840771u); f_10843fa0();
  /* 10840771 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840774 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840777 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840779 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1084077c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084077f push edx */
  push32((uint32_t)(EDX));
  /* 10840780 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10840782 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840785 push eax */
  push32((uint32_t)(EAX));
  /* 10840786 push 1 */
  push32((uint32_t)(0x1u));
  /* 10840788 call 0x10843fa0 */
  push32(0x1084078du); f_10843fa0();
  /* 1084078d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840790 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840793 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840795 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840798 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084079b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084079e push edx */
  push32((uint32_t)(EDX));
  /* 1084079f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 108407a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108407a4 push eax */
  push32((uint32_t)(EAX));
  /* 108407a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 108407a7 call 0x10843fa0 */
  push32(0x108407acu); f_10843fa0();
  /* 108407ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108407af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108407b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108407b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108407b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108407ba add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108407bd push edx */
  push32((uint32_t)(EDX));
  /* 108407be push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 108407c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108407c3 push eax */
  push32((uint32_t)(EAX));
  /* 108407c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 108407c6 call 0x10843fa0 */
  push32(0x108407cbu); f_10843fa0();
  /* 108407cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108407ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108407d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108407d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108407d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108407d9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108407dc push edx */
  push32((uint32_t)(EDX));
  /* 108407dd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 108407df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108407e2 push eax */
  push32((uint32_t)(EAX));
  /* 108407e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108407e5 call 0x10843fa0 */
  push32(0x108407eau); f_10843fa0();
  /* 108407ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108407ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108407f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108407f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108407f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108407f8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108407fb push edx */
  push32((uint32_t)(EDX));
  /* 108407fc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 108407fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840801 push eax */
  push32((uint32_t)(EAX));
  /* 10840802 push 1 */
  push32((uint32_t)(0x1u));
  /* 10840804 call 0x10843fa0 */
  push32(0x10840809u); f_10843fa0();
  /* 10840809 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084080c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1084080f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840811 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840814 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840817 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084081a push edx */
  push32((uint32_t)(EDX));
  /* 1084081b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1084081d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840820 push eax */
  push32((uint32_t)(EAX));
  /* 10840821 push 1 */
  push32((uint32_t)(0x1u));
  /* 10840823 call 0x10843fa0 */
  push32(0x10840828u); f_10843fa0();
  /* 10840828 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084082b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1084082e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840830 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840833 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840836 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840839 push edx */
  push32((uint32_t)(EDX));
  /* 1084083a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1084083c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084083f push eax */
  push32((uint32_t)(EAX));
  /* 10840840 push 1 */
  push32((uint32_t)(0x1u));
  /* 10840842 call 0x10843fa0 */
  push32(0x10840847u); f_10843fa0();
  /* 10840847 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084084a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1084084d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1084084f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840852 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840855 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840858 push edx */
  push32((uint32_t)(EDX));
  /* 10840859 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1084085b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084085e push eax */
  push32((uint32_t)(EAX));
  /* 1084085f push 1 */
  push32((uint32_t)(0x1u));
  /* 10840861 call 0x10843fa0 */
  push32(0x10840866u); f_10843fa0();
  /* 10840866 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840869 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1084086c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1084086e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840871 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840874 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840877 push edx */
  push32((uint32_t)(EDX));
  /* 10840878 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1084087a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084087d push eax */
  push32((uint32_t)(EAX));
  /* 1084087e push 1 */
  push32((uint32_t)(0x1u));
  /* 10840880 call 0x10843fa0 */
  push32(0x10840885u); f_10843fa0();
  /* 10840885 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840888 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1084088b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1084088d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840890 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840893 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840896 push edx */
  push32((uint32_t)(EDX));
  /* 10840897 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10840899 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084089c push eax */
  push32((uint32_t)(EAX));
  /* 1084089d push 1 */
  push32((uint32_t)(0x1u));
  /* 1084089f call 0x10843fa0 */
  push32(0x108408a4u); f_10843fa0();
  /* 108408a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108408a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108408aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108408ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108408af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108408b2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108408b5 push edx */
  push32((uint32_t)(EDX));
  /* 108408b6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 108408b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108408bb push eax */
  push32((uint32_t)(EAX));
  /* 108408bc push 1 */
  push32((uint32_t)(0x1u));
  /* 108408be call 0x10843fa0 */
  push32(0x108408c3u); f_10843fa0();
  /* 108408c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108408c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108408c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108408cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108408ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108408d1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108408d4 push edx */
  push32((uint32_t)(EDX));
  /* 108408d5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 108408d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108408da push eax */
  push32((uint32_t)(EAX));
  /* 108408db push 1 */
  push32((uint32_t)(0x1u));
  /* 108408dd call 0x10843fa0 */
  push32(0x108408e2u); f_10843fa0();
  /* 108408e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108408e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108408e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108408ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108408ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108408f0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108408f3 push edx */
  push32((uint32_t)(EDX));
  /* 108408f4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 108408f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108408f9 push eax */
  push32((uint32_t)(EAX));
  /* 108408fa push 1 */
  push32((uint32_t)(0x1u));
  /* 108408fc call 0x10843fa0 */
  push32(0x10840901u); f_10843fa0();
  /* 10840901 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840904 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840907 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840909 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1084090c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084090f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840912 push edx */
  push32((uint32_t)(EDX));
  /* 10840913 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10840915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840918 push eax */
  push32((uint32_t)(EAX));
  /* 10840919 push 1 */
  push32((uint32_t)(0x1u));
  /* 1084091b call 0x10843fa0 */
  push32(0x10840920u); f_10843fa0();
  /* 10840920 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840923 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840926 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840928 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1084092b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084092e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840931 push edx */
  push32((uint32_t)(EDX));
  /* 10840932 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10840934 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840937 push eax */
  push32((uint32_t)(EAX));
  /* 10840938 push 1 */
  push32((uint32_t)(0x1u));
  /* 1084093a call 0x10843fa0 */
  push32(0x1084093fu); f_10843fa0();
  /* 1084093f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840942 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840945 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840947 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1084094a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084094d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840950 push edx */
  push32((uint32_t)(EDX));
  /* 10840951 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10840953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840956 push eax */
  push32((uint32_t)(EAX));
  /* 10840957 push 1 */
  push32((uint32_t)(0x1u));
  /* 10840959 call 0x10843fa0 */
  push32(0x1084095eu); f_10843fa0();
  /* 1084095e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840961 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840964 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840966 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840969 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084096c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084096f push edx */
  push32((uint32_t)(EDX));
  /* 10840970 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10840972 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840975 push eax */
  push32((uint32_t)(EAX));
  /* 10840976 push 1 */
  push32((uint32_t)(0x1u));
  /* 10840978 call 0x10843fa0 */
  push32(0x1084097du); f_10843fa0();
  /* 1084097d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840980 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840983 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840985 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084098b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084098e push edx */
  push32((uint32_t)(EDX));
  /* 1084098f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10840991 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840994 push eax */
  push32((uint32_t)(EAX));
  /* 10840995 push 1 */
  push32((uint32_t)(0x1u));
  /* 10840997 call 0x10843fa0 */
  push32(0x1084099cu); f_10843fa0();
  /* 1084099c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084099f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108409a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108409a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108409a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108409aa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108409ad push edx */
  push32((uint32_t)(EDX));
  /* 108409ae push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 108409b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108409b3 push eax */
  push32((uint32_t)(EAX));
  /* 108409b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 108409b6 call 0x10843fa0 */
  push32(0x108409bbu); f_10843fa0();
  /* 108409bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108409be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108409c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108409c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108409c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108409c9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108409cc push edx */
  push32((uint32_t)(EDX));
  /* 108409cd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 108409cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108409d2 push eax */
  push32((uint32_t)(EAX));
  /* 108409d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108409d5 call 0x10843fa0 */
  push32(0x108409dau); f_10843fa0();
  /* 108409da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108409dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108409e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108409e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108409e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108409e8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108409eb push edx */
  push32((uint32_t)(EDX));
  /* 108409ec push 0x38 */
  push32((uint32_t)(0x38u));
  /* 108409ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108409f1 push eax */
  push32((uint32_t)(EAX));
  /* 108409f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 108409f4 call 0x10843fa0 */
  push32(0x108409f9u); f_10843fa0();
  /* 108409f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108409fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108409ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840a01 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840a04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840a07 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840a0a push edx */
  push32((uint32_t)(EDX));
  /* 10840a0b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10840a0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840a10 push eax */
  push32((uint32_t)(EAX));
  /* 10840a11 push 1 */
  push32((uint32_t)(0x1u));
  /* 10840a13 call 0x10843fa0 */
  push32(0x10840a18u); f_10843fa0();
  /* 10840a18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840a1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840a1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840a20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840a23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840a26 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840a29 push edx */
  push32((uint32_t)(EDX));
  /* 10840a2a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10840a2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840a2f push eax */
  push32((uint32_t)(EAX));
  /* 10840a30 push 1 */
  push32((uint32_t)(0x1u));
  /* 10840a32 call 0x10843fa0 */
  push32(0x10840a37u); f_10843fa0();
  /* 10840a37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840a3a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840a3d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840a3f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840a42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840a45 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840a48 push edx */
  push32((uint32_t)(EDX));
  /* 10840a49 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10840a4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840a4e push eax */
  push32((uint32_t)(EAX));
  /* 10840a4f push 1 */
  push32((uint32_t)(0x1u));
  /* 10840a51 call 0x10843fa0 */
  push32(0x10840a56u); f_10843fa0();
  /* 10840a56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840a59 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840a5c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840a5e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840a61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840a64 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840a67 push edx */
  push32((uint32_t)(EDX));
  /* 10840a68 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10840a6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840a6d push eax */
  push32((uint32_t)(EAX));
  /* 10840a6e push 1 */
  push32((uint32_t)(0x1u));
  /* 10840a70 call 0x10843fa0 */
  push32(0x10840a75u); f_10843fa0();
  /* 10840a75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840a78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840a7b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840a7d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840a80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840a83 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840a86 push edx */
  push32((uint32_t)(EDX));
  /* 10840a87 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10840a89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840a8c push eax */
  push32((uint32_t)(EAX));
  /* 10840a8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10840a8f call 0x10843fa0 */
  push32(0x10840a94u); f_10843fa0();
  /* 10840a94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840a97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840a9a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840a9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840a9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840aa2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840aa8 push edx */
  push32((uint32_t)(EDX));
  /* 10840aa9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10840aab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840aae push eax */
  push32((uint32_t)(EAX));
  /* 10840aaf push 1 */
  push32((uint32_t)(0x1u));
  /* 10840ab1 call 0x10843fa0 */
  push32(0x10840ab6u); f_10843fa0();
  /* 10840ab6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840ab9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840abc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840abe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840ac1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840ac4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840aca push edx */
  push32((uint32_t)(EDX));
  /* 10840acb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10840acd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840ad0 push eax */
  push32((uint32_t)(EAX));
  /* 10840ad1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10840ad3 call 0x10843fa0 */
  push32(0x10840ad8u); f_10843fa0();
  /* 10840ad8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840adb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840ade or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840ae0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840ae3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840ae6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840aec push edx */
  push32((uint32_t)(EDX));
  /* 10840aed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10840aef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840af2 push eax */
  push32((uint32_t)(EAX));
  /* 10840af3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10840af5 call 0x10843fa0 */
  push32(0x10840afau); f_10843fa0();
  /* 10840afa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840afd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840b00 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840b02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840b05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840b08 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840b0e push edx */
  push32((uint32_t)(EDX));
  /* 10840b0f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10840b11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840b14 push eax */
  push32((uint32_t)(EAX));
  /* 10840b15 push 1 */
  push32((uint32_t)(0x1u));
  /* 10840b17 call 0x10843fa0 */
  push32(0x10840b1cu); f_10843fa0();
  /* 10840b1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840b1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840b22 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840b24 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840b27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840b2a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840b30 push edx */
  push32((uint32_t)(EDX));
  /* 10840b31 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10840b33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840b36 push eax */
  push32((uint32_t)(EAX));
  /* 10840b37 push 1 */
  push32((uint32_t)(0x1u));
  /* 10840b39 call 0x10843fa0 */
  push32(0x10840b3eu); f_10843fa0();
  /* 10840b3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840b41 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840b44 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840b46 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840b49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840b4c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840b52 push edx */
  push32((uint32_t)(EDX));
  /* 10840b53 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10840b55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840b58 push eax */
  push32((uint32_t)(EAX));
  /* 10840b59 push 1 */
  push32((uint32_t)(0x1u));
  /* 10840b5b call 0x10843fa0 */
  push32(0x10840b60u); f_10843fa0();
  /* 10840b60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840b63 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840b66 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840b68 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840b6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840b6e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840b74 push edx */
  push32((uint32_t)(EDX));
  /* 10840b75 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10840b77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840b7a push eax */
  push32((uint32_t)(EAX));
  /* 10840b7b push 1 */
  push32((uint32_t)(0x1u));
  /* 10840b7d call 0x10843fa0 */
  push32(0x10840b82u); f_10843fa0();
  /* 10840b82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840b85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840b88 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840b8a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840b8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840b90 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840b96 push edx */
  push32((uint32_t)(EDX));
  /* 10840b97 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10840b99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840b9c push eax */
  push32((uint32_t)(EAX));
  /* 10840b9d push 1 */
  push32((uint32_t)(0x1u));
  /* 10840b9f call 0x10843fa0 */
  push32(0x10840ba4u); f_10843fa0();
  /* 10840ba4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840ba7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840baa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840bac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840baf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840bb2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840bb8 push edx */
  push32((uint32_t)(EDX));
  /* 10840bb9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10840bbb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10840bbe push eax */
  push32((uint32_t)(EAX));
  /* 10840bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 10840bc1 call 0x10843fa0 */
  push32(0x10840bc6u); f_10843fa0();
  /* 10840bc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840bc9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840bcc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840bce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840bd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840bd4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840bda push edx */
  push32((uint32_t)(EDX));
  /* 10840bdb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10840bdd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10840be0 push eax */
  push32((uint32_t)(EAX));
  /* 10840be1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10840be3 call 0x10843fa0 */
  push32(0x10840be8u); f_10843fa0();
  /* 10840be8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840beb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840bee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840bf0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840bf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840bf6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10840bfc push edx */
  push32((uint32_t)(EDX));
  /* 10840bfd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10840c02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10840c05 push eax */
  push32((uint32_t)(EAX));
  /* 10840c06 push 1 */
  push32((uint32_t)(0x1u));
  /* 10840c08 call 0x10843fa0 */
  push32(0x10840c0du); f_10843fa0();
  /* 10840c0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840c10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10840c13 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840c15 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10840c18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10840c1b:;
  /* 10840c1b mov esp, ebp */
  ESP = (EBP);
  /* 10840c1d pop ebp */
  EBP = (pop32());
  /* 10840c1e ret  */
  ESPCHK(0x10840690u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10840c20 (779 bytes, 265 insns) */
void f_10840c20(void) {
  FTRACE(0x10840c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10840c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10840c21 mov ebp, esp */
  EBP = (ESP);
  /* 10840c23 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10840c27 jne 0x10840c2e */
  if (!C.zf) goto L_10840c2e;
  /* 10840c29 jmp 0x10840f29 */
  goto L_10840f29;
L_10840c2e:;
  /* 10840c2e push 2 */
  push32((uint32_t)(0x2u));
  /* 10840c30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840c33 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10840c36 push ecx */
  push32((uint32_t)(ECX));
  /* 10840c37 call 0x10836870 */
  push32(0x10840c3cu); f_10836870();
  /* 10840c3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840c3f push 2 */
  push32((uint32_t)(0x2u));
  /* 10840c41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840c44 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10840c47 push eax */
  push32((uint32_t)(EAX));
  /* 10840c48 call 0x10836870 */
  push32(0x10840c4du); f_10836870();
  /* 10840c4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840c50 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840c52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840c55 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10840c58 push edx */
  push32((uint32_t)(EDX));
  /* 10840c59 call 0x10836870 */
  push32(0x10840c5eu); f_10836870();
  /* 10840c5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840c61 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840c63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840c66 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10840c69 push ecx */
  push32((uint32_t)(ECX));
  /* 10840c6a call 0x10836870 */
  push32(0x10840c6fu); f_10836870();
  /* 10840c6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840c72 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840c74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840c77 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10840c7a push eax */
  push32((uint32_t)(EAX));
  /* 10840c7b call 0x10836870 */
  push32(0x10840c80u); f_10836870();
  /* 10840c80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840c83 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840c85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840c88 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10840c8b push edx */
  push32((uint32_t)(EDX));
  /* 10840c8c call 0x10836870 */
  push32(0x10840c91u); f_10836870();
  /* 10840c91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840c94 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840c96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840c99 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10840c9b push ecx */
  push32((uint32_t)(ECX));
  /* 10840c9c call 0x10836870 */
  push32(0x10840ca1u); f_10836870();
  /* 10840ca1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840ca4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840ca6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840ca9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10840cac push eax */
  push32((uint32_t)(EAX));
  /* 10840cad call 0x10836870 */
  push32(0x10840cb2u); f_10836870();
  /* 10840cb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840cb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840cb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840cba mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10840cbd push edx */
  push32((uint32_t)(EDX));
  /* 10840cbe call 0x10836870 */
  push32(0x10840cc3u); f_10836870();
  /* 10840cc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840cc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840cc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840ccb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10840cce push ecx */
  push32((uint32_t)(ECX));
  /* 10840ccf call 0x10836870 */
  push32(0x10840cd4u); f_10836870();
  /* 10840cd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840cd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840cd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840cdc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10840cdf push eax */
  push32((uint32_t)(EAX));
  /* 10840ce0 call 0x10836870 */
  push32(0x10840ce5u); f_10836870();
  /* 10840ce5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840ce8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840cea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840ced mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10840cf0 push edx */
  push32((uint32_t)(EDX));
  /* 10840cf1 call 0x10836870 */
  push32(0x10840cf6u); f_10836870();
  /* 10840cf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840cf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840cfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840cfe mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10840d01 push ecx */
  push32((uint32_t)(ECX));
  /* 10840d02 call 0x10836870 */
  push32(0x10840d07u); f_10836870();
  /* 10840d07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840d0a push 2 */
  push32((uint32_t)(0x2u));
  /* 10840d0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840d0f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10840d12 push eax */
  push32((uint32_t)(EAX));
  /* 10840d13 call 0x10836870 */
  push32(0x10840d18u); f_10836870();
  /* 10840d18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840d1b push 2 */
  push32((uint32_t)(0x2u));
  /* 10840d1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840d20 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10840d23 push edx */
  push32((uint32_t)(EDX));
  /* 10840d24 call 0x10836870 */
  push32(0x10840d29u); f_10836870();
  /* 10840d29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840d2c push 2 */
  push32((uint32_t)(0x2u));
  /* 10840d2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840d31 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10840d34 push ecx */
  push32((uint32_t)(ECX));
  /* 10840d35 call 0x10836870 */
  push32(0x10840d3au); f_10836870();
  /* 10840d3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840d3d push 2 */
  push32((uint32_t)(0x2u));
  /* 10840d3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840d42 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10840d45 push eax */
  push32((uint32_t)(EAX));
  /* 10840d46 call 0x10836870 */
  push32(0x10840d4bu); f_10836870();
  /* 10840d4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840d4e push 2 */
  push32((uint32_t)(0x2u));
  /* 10840d50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840d53 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10840d56 push edx */
  push32((uint32_t)(EDX));
  /* 10840d57 call 0x10836870 */
  push32(0x10840d5cu); f_10836870();
  /* 10840d5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840d5f push 2 */
  push32((uint32_t)(0x2u));
  /* 10840d61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840d64 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10840d67 push ecx */
  push32((uint32_t)(ECX));
  /* 10840d68 call 0x10836870 */
  push32(0x10840d6du); f_10836870();
  /* 10840d6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840d70 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840d72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840d75 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10840d78 push eax */
  push32((uint32_t)(EAX));
  /* 10840d79 call 0x10836870 */
  push32(0x10840d7eu); f_10836870();
  /* 10840d7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840d81 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840d83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840d86 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10840d89 push edx */
  push32((uint32_t)(EDX));
  /* 10840d8a call 0x10836870 */
  push32(0x10840d8fu); f_10836870();
  /* 10840d8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840d92 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840d94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840d97 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10840d9a push ecx */
  push32((uint32_t)(ECX));
  /* 10840d9b call 0x10836870 */
  push32(0x10840da0u); f_10836870();
  /* 10840da0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840da3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840da5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840da8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10840dab push eax */
  push32((uint32_t)(EAX));
  /* 10840dac call 0x10836870 */
  push32(0x10840db1u); f_10836870();
  /* 10840db1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840db4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840db6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840db9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10840dbc push edx */
  push32((uint32_t)(EDX));
  /* 10840dbd call 0x10836870 */
  push32(0x10840dc2u); f_10836870();
  /* 10840dc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840dc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840dc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840dca mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10840dcd push ecx */
  push32((uint32_t)(ECX));
  /* 10840dce call 0x10836870 */
  push32(0x10840dd3u); f_10836870();
  /* 10840dd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840dd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840dd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840ddb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10840dde push eax */
  push32((uint32_t)(EAX));
  /* 10840ddf call 0x10836870 */
  push32(0x10840de4u); f_10836870();
  /* 10840de4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840de7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840de9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840dec mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10840def push edx */
  push32((uint32_t)(EDX));
  /* 10840df0 call 0x10836870 */
  push32(0x10840df5u); f_10836870();
  /* 10840df5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840df8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840dfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840dfd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10840e00 push ecx */
  push32((uint32_t)(ECX));
  /* 10840e01 call 0x10836870 */
  push32(0x10840e06u); f_10836870();
  /* 10840e06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840e09 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840e0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840e0e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10840e11 push eax */
  push32((uint32_t)(EAX));
  /* 10840e12 call 0x10836870 */
  push32(0x10840e17u); f_10836870();
  /* 10840e17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840e1a push 2 */
  push32((uint32_t)(0x2u));
  /* 10840e1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840e1f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10840e22 push edx */
  push32((uint32_t)(EDX));
  /* 10840e23 call 0x10836870 */
  push32(0x10840e28u); f_10836870();
  /* 10840e28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840e2b push 2 */
  push32((uint32_t)(0x2u));
  /* 10840e2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840e30 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10840e33 push ecx */
  push32((uint32_t)(ECX));
  /* 10840e34 call 0x10836870 */
  push32(0x10840e39u); f_10836870();
  /* 10840e39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840e3c push 2 */
  push32((uint32_t)(0x2u));
  /* 10840e3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840e41 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10840e44 push eax */
  push32((uint32_t)(EAX));
  /* 10840e45 call 0x10836870 */
  push32(0x10840e4au); f_10836870();
  /* 10840e4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840e4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10840e4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840e52 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10840e58 push edx */
  push32((uint32_t)(EDX));
  /* 10840e59 call 0x10836870 */
  push32(0x10840e5eu); f_10836870();
  /* 10840e5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840e61 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840e63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840e66 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10840e6c push ecx */
  push32((uint32_t)(ECX));
  /* 10840e6d call 0x10836870 */
  push32(0x10840e72u); f_10836870();
  /* 10840e72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840e75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840e77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840e7a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10840e80 push eax */
  push32((uint32_t)(EAX));
  /* 10840e81 call 0x10836870 */
  push32(0x10840e86u); f_10836870();
  /* 10840e86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840e89 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840e8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840e8e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10840e94 push edx */
  push32((uint32_t)(EDX));
  /* 10840e95 call 0x10836870 */
  push32(0x10840e9au); f_10836870();
  /* 10840e9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840e9d push 2 */
  push32((uint32_t)(0x2u));
  /* 10840e9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840ea2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10840ea8 push ecx */
  push32((uint32_t)(ECX));
  /* 10840ea9 call 0x10836870 */
  push32(0x10840eaeu); f_10836870();
  /* 10840eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840eb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840eb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840eb6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10840ebc push eax */
  push32((uint32_t)(EAX));
  /* 10840ebd call 0x10836870 */
  push32(0x10840ec2u); f_10836870();
  /* 10840ec2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840ec5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840ec7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840eca mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10840ed0 push edx */
  push32((uint32_t)(EDX));
  /* 10840ed1 call 0x10836870 */
  push32(0x10840ed6u); f_10836870();
  /* 10840ed6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840ed9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840edb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840ede mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10840ee4 push ecx */
  push32((uint32_t)(ECX));
  /* 10840ee5 call 0x10836870 */
  push32(0x10840eeau); f_10836870();
  /* 10840eea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840eed push 2 */
  push32((uint32_t)(0x2u));
  /* 10840eef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840ef2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10840ef8 push eax */
  push32((uint32_t)(EAX));
  /* 10840ef9 call 0x10836870 */
  push32(0x10840efeu); f_10836870();
  /* 10840efe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840f01 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840f03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840f06 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10840f0c push edx */
  push32((uint32_t)(EDX));
  /* 10840f0d call 0x10836870 */
  push32(0x10840f12u); f_10836870();
  /* 10840f12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840f15 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840f17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10840f1a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10840f20 push ecx */
  push32((uint32_t)(ECX));
  /* 10840f21 call 0x10836870 */
  push32(0x10840f26u); f_10836870();
  /* 10840f26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10840f29:;
  /* 10840f29 pop ebp */
  EBP = (pop32());
  /* 10840f2a ret  */
  ESPCHK(0x10840c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f30 @ 0x10840f30 (678 bytes, 180 insns) */
void f_10840f30(void) {
  FTRACE(0x10840f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10840f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10840f31 mov ebp, esp */
  EBP = (ESP);
  /* 10840f33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10840f36 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10840f3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10840f3f mov ax, word ptr [0x108617ea] */
  AX = (r16((uint32_t)(0x108617ea)));
  /* 10840f45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10840f48 cmp dword ptr [0x10861790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10840f4f je 0x108410aa */
  if (C.zf) goto L_108410aa;
  /* 10840f55 push 0x108617b8 */
  push32((uint32_t)(0x108617b8u));
  /* 10840f5a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10840f5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840f5f push ecx */
  push32((uint32_t)(ECX));
  /* 10840f60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10840f62 call 0x10843fa0 */
  push32(0x10840f67u); f_10843fa0();
  /* 10840f67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840f6a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10840f6d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10840f6f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10840f72 push 0x108617bc */
  push32((uint32_t)(0x108617bcu));
  /* 10840f77 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10840f79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840f7c push eax */
  push32((uint32_t)(EAX));
  /* 10840f7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10840f7f call 0x10843fa0 */
  push32(0x10840f84u); f_10843fa0();
  /* 10840f84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840f87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10840f8a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840f8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10840f8f push 0x108617c0 */
  push32((uint32_t)(0x108617c0u));
  /* 10840f94 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10840f96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10840f99 push edx */
  push32((uint32_t)(EDX));
  /* 10840f9a push 1 */
  push32((uint32_t)(0x1u));
  /* 10840f9c call 0x10843fa0 */
  push32(0x10840fa1u); f_10843fa0();
  /* 10840fa1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840fa4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10840fa7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10840fa9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10840fac mov edx, dword ptr [0x108617c0] */
  EDX = (r32((uint32_t)(0x108617c0)));
  /* 10840fb2 push edx */
  push32((uint32_t)(EDX));
  /* 10840fb3 call 0x108411e0 */
  push32(0x10840fb8u); f_108411e0();
  /* 10840fb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840fbb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10840fbf je 0x10841019 */
  if (C.zf) goto L_10841019;
  /* 10840fc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840fc3 mov eax, dword ptr [0x108617b8] */
  EAX = (r32((uint32_t)(0x108617b8)));
  /* 10840fc8 push eax */
  push32((uint32_t)(EAX));
  /* 10840fc9 call 0x10836870 */
  push32(0x10840fceu); f_10836870();
  /* 10840fce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840fd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840fd3 mov ecx, dword ptr [0x108617bc] */
  ECX = (r32((uint32_t)(0x108617bc)));
  /* 10840fd9 push ecx */
  push32((uint32_t)(ECX));
  /* 10840fda call 0x10836870 */
  push32(0x10840fdfu); f_10836870();
  /* 10840fdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840fe2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10840fe4 mov edx, dword ptr [0x108617c0] */
  EDX = (r32((uint32_t)(0x108617c0)));
  /* 10840fea push edx */
  push32((uint32_t)(EDX));
  /* 10840feb call 0x10836870 */
  push32(0x10840ff0u); f_10836870();
  /* 10840ff0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10840ff3 mov dword ptr [0x108617b8], 0 */
  w32((uint32_t)(0x108617b8), (0x0u));
  /* 10840ffd mov dword ptr [0x108617bc], 0 */
  w32((uint32_t)(0x108617bc), (0x0u));
  /* 10841007 mov dword ptr [0x108617c0], 0 */
  w32((uint32_t)(0x108617c0), (0x0u));
  /* 10841011 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10841014 jmp 0x108411d2 */
  goto L_108411d2;
L_10841019:;
  /* 10841019 mov eax, dword ptr [0x10860d88] */
  EAX = (r32((uint32_t)(0x10860d88)));
  /* 1084101e cmp dword ptr [eax], 0x10860d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10860d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841024 je 0x10841060 */
  if (C.zf) goto L_10841060;
  /* 10841026 push 2 */
  push32((uint32_t)(0x2u));
  /* 10841028 mov ecx, dword ptr [0x10860d88] */
  ECX = (r32((uint32_t)(0x10860d88)));
  /* 1084102e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10841030 push edx */
  push32((uint32_t)(EDX));
  /* 10841031 call 0x10836870 */
  push32(0x10841036u); f_10836870();
  /* 10841036 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841039 push 2 */
  push32((uint32_t)(0x2u));
  /* 1084103b mov eax, dword ptr [0x10860d88] */
  EAX = (r32((uint32_t)(0x10860d88)));
  /* 10841040 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10841043 push ecx */
  push32((uint32_t)(ECX));
  /* 10841044 call 0x10836870 */
  push32(0x10841049u); f_10836870();
  /* 10841049 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084104c push 2 */
  push32((uint32_t)(0x2u));
  /* 1084104e mov edx, dword ptr [0x10860d88] */
  EDX = (r32((uint32_t)(0x10860d88)));
  /* 10841054 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10841057 push eax */
  push32((uint32_t)(EAX));
  /* 10841058 call 0x10836870 */
  push32(0x1084105du); f_10836870();
  /* 1084105d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10841060:;
  /* 10841060 mov ecx, dword ptr [0x10860d88] */
  ECX = (r32((uint32_t)(0x10860d88)));
  /* 10841066 mov edx, dword ptr [0x108617b8] */
  EDX = (r32((uint32_t)(0x108617b8)));
  /* 1084106c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1084106e mov eax, dword ptr [0x10860d88] */
  EAX = (r32((uint32_t)(0x10860d88)));
  /* 10841073 mov ecx, dword ptr [0x108617bc] */
  ECX = (r32((uint32_t)(0x108617bc)));
  /* 10841079 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1084107c mov edx, dword ptr [0x10860d88] */
  EDX = (r32((uint32_t)(0x10860d88)));
  /* 10841082 mov eax, dword ptr [0x108617c0] */
  EAX = (r32((uint32_t)(0x108617c0)));
  /* 10841087 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1084108a mov ecx, dword ptr [0x10860d88] */
  ECX = (r32((uint32_t)(0x10860d88)));
  /* 10841090 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10841092 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10841094 mov byte ptr [0x1085fea8], al */
  w8((uint32_t)(0x1085fea8), (AL));
  /* 10841099 mov dword ptr [0x1085feac], 1 */
  w32((uint32_t)(0x1085feac), (0x1u));
  /* 108410a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108410a5 jmp 0x108411d2 */
  goto L_108411d2;
L_108410aa:;
  /* 108410aa push 2 */
  push32((uint32_t)(0x2u));
  /* 108410ac mov ecx, dword ptr [0x108617b8] */
  ECX = (r32((uint32_t)(0x108617b8)));
  /* 108410b2 push ecx */
  push32((uint32_t)(ECX));
  /* 108410b3 call 0x10836870 */
  push32(0x108410b8u); f_10836870();
  /* 108410b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108410bb push 2 */
  push32((uint32_t)(0x2u));
  /* 108410bd mov edx, dword ptr [0x108617bc] */
  EDX = (r32((uint32_t)(0x108617bc)));
  /* 108410c3 push edx */
  push32((uint32_t)(EDX));
  /* 108410c4 call 0x10836870 */
  push32(0x108410c9u); f_10836870();
  /* 108410c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108410cc push 2 */
  push32((uint32_t)(0x2u));
  /* 108410ce mov eax, dword ptr [0x108617c0] */
  EAX = (r32((uint32_t)(0x108617c0)));
  /* 108410d3 push eax */
  push32((uint32_t)(EAX));
  /* 108410d4 call 0x10836870 */
  push32(0x108410d9u); f_10836870();
  /* 108410d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108410dc mov dword ptr [0x108617b8], 0 */
  w32((uint32_t)(0x108617b8), (0x0u));
  /* 108410e6 mov dword ptr [0x108617bc], 0 */
  w32((uint32_t)(0x108617bc), (0x0u));
  /* 108410f0 mov dword ptr [0x108617c0], 0 */
  w32((uint32_t)(0x108617c0), (0x0u));
  /* 108410fa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 108410ff push 0x1085d324 */
  push32((uint32_t)(0x1085d324u));
  /* 10841104 push 2 */
  push32((uint32_t)(0x2u));
  /* 10841106 push 2 */
  push32((uint32_t)(0x2u));
  /* 10841108 call 0x10835de0 */
  push32(0x1084110du); f_10835de0();
  /* 1084110d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841110 mov ecx, dword ptr [0x10860d88] */
  ECX = (r32((uint32_t)(0x10860d88)));
  /* 10841116 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10841118 mov edx, dword ptr [0x10860d88] */
  EDX = (r32((uint32_t)(0x10860d88)));
  /* 1084111e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841121 jne 0x1084112b */
  if (!C.zf) goto L_1084112b;
  /* 10841123 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10841126 jmp 0x108411d2 */
  goto L_108411d2;
L_1084112b:;
  /* 1084112b push 0x1085d2f4 */
  push32((uint32_t)(0x1085d2f4u));
  /* 10841130 mov eax, dword ptr [0x10860d88] */
  EAX = (r32((uint32_t)(0x10860d88)));
  /* 10841135 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10841137 push ecx */
  push32((uint32_t)(ECX));
  /* 10841138 call 0x10838d90 */
  push32(0x1084113du); f_10838d90();
  /* 1084113d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841140 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10841145 push 0x1085d324 */
  push32((uint32_t)(0x1085d324u));
  /* 1084114a push 2 */
  push32((uint32_t)(0x2u));
  /* 1084114c push 2 */
  push32((uint32_t)(0x2u));
  /* 1084114e call 0x10835de0 */
  push32(0x10841153u); f_10835de0();
  /* 10841153 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841156 mov edx, dword ptr [0x10860d88] */
  EDX = (r32((uint32_t)(0x10860d88)));
  /* 1084115c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1084115f mov eax, dword ptr [0x10860d88] */
  EAX = (r32((uint32_t)(0x10860d88)));
  /* 10841164 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841168 jne 0x1084116f */
  if (!C.zf) goto L_1084116f;
  /* 1084116a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1084116d jmp 0x108411d2 */
  goto L_108411d2;
L_1084116f:;
  /* 1084116f mov ecx, dword ptr [0x10860d88] */
  ECX = (r32((uint32_t)(0x10860d88)));
  /* 10841175 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10841178 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1084117b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10841180 push 0x1085d324 */
  push32((uint32_t)(0x1085d324u));
  /* 10841185 push 2 */
  push32((uint32_t)(0x2u));
  /* 10841187 push 2 */
  push32((uint32_t)(0x2u));
  /* 10841189 call 0x10835de0 */
  push32(0x1084118eu); f_10835de0();
  /* 1084118e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841191 mov ecx, dword ptr [0x10860d88] */
  ECX = (r32((uint32_t)(0x10860d88)));
  /* 10841197 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1084119a mov edx, dword ptr [0x10860d88] */
  EDX = (r32((uint32_t)(0x10860d88)));
  /* 108411a0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108411a4 jne 0x108411ab */
  if (!C.zf) goto L_108411ab;
  /* 108411a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108411a9 jmp 0x108411d2 */
  goto L_108411d2;
L_108411ab:;
  /* 108411ab mov eax, dword ptr [0x10860d88] */
  EAX = (r32((uint32_t)(0x10860d88)));
  /* 108411b0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108411b3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 108411b6 mov edx, dword ptr [0x10860d88] */
  EDX = (r32((uint32_t)(0x10860d88)));
  /* 108411bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108411be mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108411c0 mov byte ptr [0x1085fea8], cl */
  w8((uint32_t)(0x1085fea8), (CL));
  /* 108411c6 mov dword ptr [0x1085feac], 1 */
  w32((uint32_t)(0x1085feac), (0x1u));
  /* 108411d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108411d2:;
  /* 108411d2 mov esp, ebp */
  ESP = (EBP);
  /* 108411d4 pop ebp */
  EBP = (pop32());
  /* 108411d5 ret  */
  ESPCHK(0x10840f30u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x108411e0 (125 bytes, 49 insns) */
void f_108411e0(void) {
  FTRACE(0x108411e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108411e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108411e1 mov ebp, esp */
  EBP = (ESP);
  /* 108411e3 push ecx */
  push32((uint32_t)(ECX));
L_108411e4:;
  /* 108411e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108411e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108411ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108411ec je 0x10841259 */
  if (C.zf) goto L_10841259;
  /* 108411ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108411f1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108411f4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108411f7 jl 0x1084121d */
  if ((C.sf!=C.of)) goto L_1084121d;
  /* 108411f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108411fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108411ff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841202 jg 0x1084121d */
  if ((!C.zf&&C.sf==C.of)) goto L_1084121d;
  /* 10841204 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841207 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1084120a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1084120d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841210 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10841212 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841215 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841218 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1084121b jmp 0x10841257 */
  goto L_10841257;
L_1084121d:;
  /* 1084121d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841220 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10841223 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841226 jne 0x1084124e */
  if (!C.zf) goto L_1084124e;
  /* 10841228 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084122b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1084122e:;
  /* 1084122e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10841231 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10841234 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10841237 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10841239 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084123c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084123f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10841242 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10841245 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10841248 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1084124a jne 0x1084122e */
  if (!C.zf) goto L_1084122e;
  /* 1084124c jmp 0x10841257 */
  goto L_10841257;
L_1084124e:;
  /* 1084124e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841251 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841254 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10841257:;
  /* 10841257 jmp 0x108411e4 */
  goto L_108411e4;
L_10841259:;
  /* 10841259 mov esp, ebp */
  ESP = (EBP);
  /* 1084125b pop ebp */
  EBP = (pop32());
  /* 1084125c ret  */
  ESPCHK(0x108411e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011260 @ 0x10841260 (304 bytes, 85 insns) */
void f_10841260(void) {
  FTRACE(0x10841260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10841260 push ebp */
  push32((uint32_t)(EBP));
  /* 10841261 mov ebp, esp */
  EBP = (ESP);
  /* 10841263 push ecx */
  push32((uint32_t)(ECX));
  /* 10841264 cmp dword ptr [0x1086178c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1086178c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084126b je 0x1084132c */
  if (C.zf) goto L_1084132c;
  /* 10841271 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10841273 push 0x1085d330 */
  push32((uint32_t)(0x1085d330u));
  /* 10841278 push 2 */
  push32((uint32_t)(0x2u));
  /* 1084127a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1084127c push 1 */
  push32((uint32_t)(0x1u));
  /* 1084127e call 0x108361f0 */
  push32(0x10841283u); f_108361f0();
  /* 10841283 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841286 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10841289 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084128d jne 0x10841299 */
  if (!C.zf) goto L_10841299;
  /* 1084128f mov eax, 1 */
  EAX = (0x1u);
  /* 10841294 jmp 0x1084138c */
  goto L_1084138c;
L_10841299:;
  /* 10841299 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084129c push eax */
  push32((uint32_t)(EAX));
  /* 1084129d call 0x10841390 */
  push32(0x108412a2u); f_10841390();
  /* 108412a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108412a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108412a7 je 0x108412cd */
  if (C.zf) goto L_108412cd;
  /* 108412a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108412ac push ecx */
  push32((uint32_t)(ECX));
  /* 108412ad call 0x10841620 */
  push32(0x108412b2u); f_10841620();
  /* 108412b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108412b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 108412b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108412ba push edx */
  push32((uint32_t)(EDX));
  /* 108412bb call 0x10836870 */
  push32(0x108412c0u); f_10836870();
  /* 108412c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108412c3 mov eax, 1 */
  EAX = (0x1u);
  /* 108412c8 jmp 0x1084138c */
  goto L_1084138c;
L_108412cd:;
  /* 108412cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108412d0 mov ecx, dword ptr [0x10860d88] */
  ECX = (r32((uint32_t)(0x10860d88)));
  /* 108412d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108412d8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108412da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108412dd mov ecx, dword ptr [0x10860d88] */
  ECX = (r32((uint32_t)(0x10860d88)));
  /* 108412e3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108412e6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108412e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108412ec mov ecx, dword ptr [0x10860d88] */
  ECX = (r32((uint32_t)(0x10860d88)));
  /* 108412f2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108412f5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 108412f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108412fb mov dword ptr [0x10860d88], eax */
  w32((uint32_t)(0x10860d88), (EAX));
  /* 10841300 mov ecx, dword ptr [0x108617c4] */
  ECX = (r32((uint32_t)(0x108617c4)));
  /* 10841306 push ecx */
  push32((uint32_t)(ECX));
  /* 10841307 call 0x10841620 */
  push32(0x1084130cu); f_10841620();
  /* 1084130c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084130f push 2 */
  push32((uint32_t)(0x2u));
  /* 10841311 mov edx, dword ptr [0x108617c4] */
  EDX = (r32((uint32_t)(0x108617c4)));
  /* 10841317 push edx */
  push32((uint32_t)(EDX));
  /* 10841318 call 0x10836870 */
  push32(0x1084131du); f_10836870();
  /* 1084131d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841320 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10841323 mov dword ptr [0x108617c4], eax */
  w32((uint32_t)(0x108617c4), (EAX));
  /* 10841328 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084132a jmp 0x1084138c */
  goto L_1084138c;
L_1084132c:;
  /* 1084132c mov ecx, dword ptr [0x10860d88] */
  ECX = (r32((uint32_t)(0x10860d88)));
  /* 10841332 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10841334 mov dword ptr [0x10860d58], edx */
  w32((uint32_t)(0x10860d58), (EDX));
  /* 1084133a mov eax, dword ptr [0x10860d88] */
  EAX = (r32((uint32_t)(0x10860d88)));
  /* 1084133f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10841342 mov dword ptr [0x10860d5c], ecx */
  w32((uint32_t)(0x10860d5c), (ECX));
  /* 10841348 mov edx, dword ptr [0x10860d88] */
  EDX = (r32((uint32_t)(0x10860d88)));
  /* 1084134e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10841351 mov dword ptr [0x10860d60], eax */
  w32((uint32_t)(0x10860d60), (EAX));
  /* 10841356 mov dword ptr [0x10860d88], 0x10860d58 */
  w32((uint32_t)(0x10860d88), (0x10860d58u));
  /* 10841360 mov ecx, dword ptr [0x108617c4] */
  ECX = (r32((uint32_t)(0x108617c4)));
  /* 10841366 push ecx */
  push32((uint32_t)(ECX));
  /* 10841367 call 0x10841620 */
  push32(0x1084136cu); f_10841620();
  /* 1084136c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084136f push 2 */
  push32((uint32_t)(0x2u));
  /* 10841371 mov edx, dword ptr [0x108617c4] */
  EDX = (r32((uint32_t)(0x108617c4)));
  /* 10841377 push edx */
  push32((uint32_t)(EDX));
  /* 10841378 call 0x10836870 */
  push32(0x1084137du); f_10836870();
  /* 1084137d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841380 mov dword ptr [0x108617c4], 0 */
  w32((uint32_t)(0x108617c4), (0x0u));
  /* 1084138a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1084138c:;
  /* 1084138c mov esp, ebp */
  ESP = (EBP);
  /* 1084138e pop ebp */
  EBP = (pop32());
  /* 1084138f ret  */
  ESPCHK(0x10841260u, _esp0);
  ESP += 4; return;
}

/* FUN_10011390 @ 0x10841390 (525 bytes, 200 insns) */
void f_10841390(void) {
  FTRACE(0x10841390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10841390 push ebp */
  push32((uint32_t)(EBP));
  /* 10841391 mov ebp, esp */
  EBP = (ESP);
  /* 10841393 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10841396 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1084139d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084139f mov ax, word ptr [0x108617e4] */
  AX = (r16((uint32_t)(0x108617e4)));
  /* 108413a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108413a8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108413ac jne 0x108413b6 */
  if (!C.zf) goto L_108413b6;
  /* 108413ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108413b1 jmp 0x10841599 */
  goto L_10841599;
L_108413b6:;
  /* 108413b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108413b9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108413bc push ecx */
  push32((uint32_t)(ECX));
  /* 108413bd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 108413bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108413c2 push edx */
  push32((uint32_t)(EDX));
  /* 108413c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108413c5 call 0x10843fa0 */
  push32(0x108413cau); f_10843fa0();
  /* 108413ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108413cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108413d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108413d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108413d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108413d8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108413db push edx */
  push32((uint32_t)(EDX));
  /* 108413dc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 108413de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108413e1 push eax */
  push32((uint32_t)(EAX));
  /* 108413e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 108413e4 call 0x10843fa0 */
  push32(0x108413e9u); f_10843fa0();
  /* 108413e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108413ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108413ef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108413f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108413f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108413f7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108413fa push edx */
  push32((uint32_t)(EDX));
  /* 108413fb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 108413fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10841400 push eax */
  push32((uint32_t)(EAX));
  /* 10841401 push 1 */
  push32((uint32_t)(0x1u));
  /* 10841403 call 0x10843fa0 */
  push32(0x10841408u); f_10843fa0();
  /* 10841408 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084140b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1084140e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10841410 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10841413 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841416 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841419 push edx */
  push32((uint32_t)(EDX));
  /* 1084141a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1084141c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084141f push eax */
  push32((uint32_t)(EAX));
  /* 10841420 push 1 */
  push32((uint32_t)(0x1u));
  /* 10841422 call 0x10843fa0 */
  push32(0x10841427u); f_10843fa0();
  /* 10841427 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084142a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1084142d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1084142f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10841432 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841435 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841438 push edx */
  push32((uint32_t)(EDX));
  /* 10841439 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1084143b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084143e push eax */
  push32((uint32_t)(EAX));
  /* 1084143f push 1 */
  push32((uint32_t)(0x1u));
  /* 10841441 call 0x10843fa0 */
  push32(0x10841446u); f_10843fa0();
  /* 10841446 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841449 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1084144c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1084144e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10841451 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841454 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10841457 push eax */
  push32((uint32_t)(EAX));
  /* 10841458 call 0x108415a0 */
  push32(0x1084145du); f_108415a0();
  /* 1084145d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841460 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841463 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841466 push ecx */
  push32((uint32_t)(ECX));
  /* 10841467 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10841469 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084146c push edx */
  push32((uint32_t)(EDX));
  /* 1084146d push 1 */
  push32((uint32_t)(0x1u));
  /* 1084146f call 0x10843fa0 */
  push32(0x10841474u); f_10843fa0();
  /* 10841474 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841477 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1084147a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1084147c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1084147f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841482 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841485 push edx */
  push32((uint32_t)(EDX));
  /* 10841486 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10841488 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084148b push eax */
  push32((uint32_t)(EAX));
  /* 1084148c push 1 */
  push32((uint32_t)(0x1u));
  /* 1084148e call 0x10843fa0 */
  push32(0x10841493u); f_10843fa0();
  /* 10841493 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841496 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10841499 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1084149b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1084149e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108414a1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108414a4 push edx */
  push32((uint32_t)(EDX));
  /* 108414a5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 108414a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108414aa push eax */
  push32((uint32_t)(EAX));
  /* 108414ab push 0 */
  push32((uint32_t)(0x0u));
  /* 108414ad call 0x10843fa0 */
  push32(0x108414b2u); f_10843fa0();
  /* 108414b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108414b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108414b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108414ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108414bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108414c0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108414c3 push edx */
  push32((uint32_t)(EDX));
  /* 108414c4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108414c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108414c9 push eax */
  push32((uint32_t)(EAX));
  /* 108414ca push 0 */
  push32((uint32_t)(0x0u));
  /* 108414cc call 0x10843fa0 */
  push32(0x108414d1u); f_10843fa0();
  /* 108414d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108414d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108414d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108414d9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108414dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108414df add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108414e2 push edx */
  push32((uint32_t)(EDX));
  /* 108414e3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 108414e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108414e8 push eax */
  push32((uint32_t)(EAX));
  /* 108414e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108414eb call 0x10843fa0 */
  push32(0x108414f0u); f_10843fa0();
  /* 108414f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108414f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108414f6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108414f8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108414fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108414fe add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841501 push edx */
  push32((uint32_t)(EDX));
  /* 10841502 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10841504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10841507 push eax */
  push32((uint32_t)(EAX));
  /* 10841508 push 0 */
  push32((uint32_t)(0x0u));
  /* 1084150a call 0x10843fa0 */
  push32(0x1084150fu); f_10843fa0();
  /* 1084150f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841512 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10841515 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10841517 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1084151a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084151d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841520 push edx */
  push32((uint32_t)(EDX));
  /* 10841521 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10841523 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10841526 push eax */
  push32((uint32_t)(EAX));
  /* 10841527 push 0 */
  push32((uint32_t)(0x0u));
  /* 10841529 call 0x10843fa0 */
  push32(0x1084152eu); f_10843fa0();
  /* 1084152e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841531 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10841534 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10841536 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10841539 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084153c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084153f push edx */
  push32((uint32_t)(EDX));
  /* 10841540 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10841542 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10841545 push eax */
  push32((uint32_t)(EAX));
  /* 10841546 push 0 */
  push32((uint32_t)(0x0u));
  /* 10841548 call 0x10843fa0 */
  push32(0x1084154du); f_10843fa0();
  /* 1084154d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841550 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10841553 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10841555 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10841558 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084155b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084155e push edx */
  push32((uint32_t)(EDX));
  /* 1084155f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10841561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10841564 push eax */
  push32((uint32_t)(EAX));
  /* 10841565 push 0 */
  push32((uint32_t)(0x0u));
  /* 10841567 call 0x10843fa0 */
  push32(0x1084156cu); f_10843fa0();
  /* 1084156c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084156f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10841572 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10841574 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10841577 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084157a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084157d push edx */
  push32((uint32_t)(EDX));
  /* 1084157e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10841580 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10841583 push eax */
  push32((uint32_t)(EAX));
  /* 10841584 push 0 */
  push32((uint32_t)(0x0u));
  /* 10841586 call 0x10843fa0 */
  push32(0x1084158bu); f_10843fa0();
  /* 1084158b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084158e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10841591 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10841593 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10841596 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10841599:;
  /* 10841599 mov esp, ebp */
  ESP = (EBP);
  /* 1084159b pop ebp */
  EBP = (pop32());
  /* 1084159c ret  */
  ESPCHK(0x10841390u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x108415a0 (125 bytes, 49 insns) */
void f_108415a0(void) {
  FTRACE(0x108415a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108415a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108415a1 mov ebp, esp */
  EBP = (ESP);
  /* 108415a3 push ecx */
  push32((uint32_t)(ECX));
L_108415a4:;
  /* 108415a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108415a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108415aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108415ac je 0x10841619 */
  if (C.zf) goto L_10841619;
  /* 108415ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108415b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108415b4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108415b7 jl 0x108415dd */
  if ((C.sf!=C.of)) goto L_108415dd;
  /* 108415b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108415bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108415bf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108415c2 jg 0x108415dd */
  if ((!C.zf&&C.sf==C.of)) goto L_108415dd;
  /* 108415c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108415c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108415ca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108415cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108415d0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 108415d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108415d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108415d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108415db jmp 0x10841617 */
  goto L_10841617;
L_108415dd:;
  /* 108415dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108415e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108415e3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108415e6 jne 0x1084160e */
  if (!C.zf) goto L_1084160e;
  /* 108415e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108415eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108415ee:;
  /* 108415ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108415f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108415f4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 108415f7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108415f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108415fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108415ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10841602 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10841605 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10841608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1084160a jne 0x108415ee */
  if (!C.zf) goto L_108415ee;
  /* 1084160c jmp 0x10841617 */
  goto L_10841617;
L_1084160e:;
  /* 1084160e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841611 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841614 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10841617:;
  /* 10841617 jmp 0x108415a4 */
  goto L_108415a4;
L_10841619:;
  /* 10841619 mov esp, ebp */
  ESP = (EBP);
  /* 1084161b pop ebp */
  EBP = (pop32());
  /* 1084161c ret  */
  ESPCHK(0x108415a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011620 @ 0x10841620 (147 bytes, 52 insns) */
void f_10841620(void) {
  FTRACE(0x10841620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10841620 push ebp */
  push32((uint32_t)(EBP));
  /* 10841621 mov ebp, esp */
  EBP = (ESP);
  /* 10841623 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841627 jne 0x1084162e */
  if (!C.zf) goto L_1084162e;
  /* 10841629 jmp 0x108416b1 */
  goto L_108416b1;
L_1084162e:;
  /* 1084162e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841631 cmp dword ptr [eax + 0xc], 0x10861820 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10861820u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841638 je 0x108416b1 */
  if (C.zf) goto L_108416b1;
  /* 1084163a push 2 */
  push32((uint32_t)(0x2u));
  /* 1084163c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084163f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10841642 push edx */
  push32((uint32_t)(EDX));
  /* 10841643 call 0x10836870 */
  push32(0x10841648u); f_10836870();
  /* 10841648 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084164b push 2 */
  push32((uint32_t)(0x2u));
  /* 1084164d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841650 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10841653 push ecx */
  push32((uint32_t)(ECX));
  /* 10841654 call 0x10836870 */
  push32(0x10841659u); f_10836870();
  /* 10841659 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084165c push 2 */
  push32((uint32_t)(0x2u));
  /* 1084165e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841661 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10841664 push eax */
  push32((uint32_t)(EAX));
  /* 10841665 call 0x10836870 */
  push32(0x1084166au); f_10836870();
  /* 1084166a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084166d push 2 */
  push32((uint32_t)(0x2u));
  /* 1084166f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841672 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10841675 push edx */
  push32((uint32_t)(EDX));
  /* 10841676 call 0x10836870 */
  push32(0x1084167bu); f_10836870();
  /* 1084167b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084167e push 2 */
  push32((uint32_t)(0x2u));
  /* 10841680 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841683 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10841686 push ecx */
  push32((uint32_t)(ECX));
  /* 10841687 call 0x10836870 */
  push32(0x1084168cu); f_10836870();
  /* 1084168c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084168f push 2 */
  push32((uint32_t)(0x2u));
  /* 10841691 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841694 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10841697 push eax */
  push32((uint32_t)(EAX));
  /* 10841698 call 0x10836870 */
  push32(0x1084169du); f_10836870();
  /* 1084169d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108416a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 108416a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108416a5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 108416a8 push edx */
  push32((uint32_t)(EDX));
  /* 108416a9 call 0x10836870 */
  push32(0x108416aeu); f_10836870();
  /* 108416ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108416b1:;
  /* 108416b1 pop ebp */
  EBP = (pop32());
  /* 108416b2 ret  */
  ESPCHK(0x10841620u, _esp0);
  ESP += 4; return;
}

/* FUN_100116c0 @ 0x108416c0 (928 bytes, 284 insns) */
void f_108416c0(void) {
  FTRACE(0x108416c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108416c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108416c1 mov ebp, esp */
  EBP = (ESP);
  /* 108416c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108416c6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 108416cd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 108416d4 cmp dword ptr [0x10861788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108416db je 0x10841a11 */
  if (C.zf) goto L_10841a11;
  /* 108416e1 cmp dword ptr [0x10861798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108416e8 jne 0x10841710 */
  if (!C.zf) goto L_10841710;
  /* 108416ea push 0x10861798 */
  push32((uint32_t)(0x10861798u));
  /* 108416ef push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 108416f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108416f6 mov ax, word ptr [0x108617dc] */
  AX = (r16((uint32_t)(0x108617dc)));
  /* 108416fc push eax */
  push32((uint32_t)(EAX));
  /* 108416fd push 0 */
  push32((uint32_t)(0x0u));
  /* 108416ff call 0x10843fa0 */
  push32(0x10841704u); f_10843fa0();
  /* 10841704 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10841709 je 0x10841710 */
  if (C.zf) goto L_10841710;
  /* 1084170b jmp 0x108419d2 */
  goto L_108419d2;
L_10841710:;
  /* 10841710 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10841712 push 0x1085d33c */
  push32((uint32_t)(0x1085d33cu));
  /* 10841717 push 2 */
  push32((uint32_t)(0x2u));
  /* 10841719 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1084171e call 0x10835de0 */
  push32(0x10841723u); f_10835de0();
  /* 10841723 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841726 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10841729 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1084172b push 0x1085d33c */
  push32((uint32_t)(0x1085d33cu));
  /* 10841730 push 2 */
  push32((uint32_t)(0x2u));
  /* 10841732 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10841737 call 0x10835de0 */
  push32(0x1084173cu); f_10835de0();
  /* 1084173c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084173f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10841742 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10841744 push 0x1085d33c */
  push32((uint32_t)(0x1085d33cu));
  /* 10841749 push 2 */
  push32((uint32_t)(0x2u));
  /* 1084174b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10841750 call 0x10835de0 */
  push32(0x10841755u); f_10835de0();
  /* 10841755 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841758 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1084175b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1084175d push 0x1085d33c */
  push32((uint32_t)(0x1085d33cu));
  /* 10841762 push 2 */
  push32((uint32_t)(0x2u));
  /* 10841764 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10841769 call 0x10835de0 */
  push32(0x1084176eu); f_10835de0();
  /* 1084176e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841771 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10841774 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841778 je 0x1084178c */
  if (C.zf) goto L_1084178c;
  /* 1084177a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084177e je 0x1084178c */
  if (C.zf) goto L_1084178c;
  /* 10841780 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841784 je 0x1084178c */
  if (C.zf) goto L_1084178c;
  /* 10841786 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084178a jne 0x10841791 */
  if (!C.zf) goto L_10841791;
L_1084178c:;
  /* 1084178c jmp 0x108419d2 */
  goto L_108419d2;
L_10841791:;
  /* 10841791 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10841794 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10841797 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1084179e jmp 0x108417a9 */
  goto L_108417a9;
L_108417a0:;
  /* 108417a0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108417a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108417a6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_108417a9:;
  /* 108417a9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108417b0 jge 0x108417c5 */
  if ((C.sf==C.of)) goto L_108417c5;
  /* 108417b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108417b5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 108417b8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 108417ba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108417bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108417c0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108417c3 jmp 0x108417a0 */
  goto L_108417a0;
L_108417c5:;
  /* 108417c5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 108417c8 push eax */
  push32((uint32_t)(EAX));
  /* 108417c9 mov ecx, dword ptr [0x10861798] */
  ECX = (r32((uint32_t)(0x10861798)));
  /* 108417cf push ecx */
  push32((uint32_t)(ECX));
  /* 108417d0 call dword ptr [0x10864330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864330))), 0x108417d6u);
  /* 108417d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108417d8 jne 0x108417df */
  if (!C.zf) goto L_108417df;
  /* 108417da jmp 0x108419d2 */
  goto L_108419d2;
L_108417df:;
  /* 108417df cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108417e3 jbe 0x108417ea */
  if ((C.cf||C.zf)) goto L_108417ea;
  /* 108417e5 jmp 0x108419d2 */
  goto L_108419d2;
L_108417ea:;
  /* 108417ea mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108417ed and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108417f3 mov dword ptr [0x1085fea4], edx */
  w32((uint32_t)(0x1085fea4), (EDX));
  /* 108417f9 cmp dword ptr [0x1085fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1085fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841800 jle 0x10841859 */
  if ((C.zf||C.sf!=C.of)) goto L_10841859;
  /* 10841802 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10841805 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10841808 jmp 0x10841813 */
  goto L_10841813;
L_1084180a:;
  /* 1084180a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1084180d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841810 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10841813:;
  /* 10841813 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10841816 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10841818 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1084181a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1084181c je 0x10841859 */
  if (C.zf) goto L_10841859;
  /* 1084181e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10841821 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10841823 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10841826 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10841828 je 0x10841859 */
  if (C.zf) goto L_10841859;
  /* 1084182a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1084182d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1084182f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10841831 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10841834 jmp 0x1084183f */
  goto L_1084183f;
L_10841836:;
  /* 10841836 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10841839 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084183c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1084183f:;
  /* 1084183f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10841842 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10841844 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10841847 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084184a jg 0x10841857 */
  if ((!C.zf&&C.sf==C.of)) goto L_10841857;
  /* 1084184c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1084184f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841852 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10841855 jmp 0x10841836 */
  goto L_10841836;
L_10841857:;
  /* 10841857 jmp 0x1084180a */
  goto L_1084180a;
L_10841859:;
  /* 10841859 push 0 */
  push32((uint32_t)(0x0u));
  /* 1084185b push 0 */
  push32((uint32_t)(0x0u));
  /* 1084185d push 0 */
  push32((uint32_t)(0x0u));
  /* 1084185f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10841862 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841865 push eax */
  push32((uint32_t)(EAX));
  /* 10841866 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1084186b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1084186e push ecx */
  push32((uint32_t)(ECX));
  /* 1084186f push 1 */
  push32((uint32_t)(0x1u));
  /* 10841871 call 0x1083e010 */
  push32(0x10841876u); f_1083e010();
  /* 10841876 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841879 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1084187b jne 0x10841882 */
  if (!C.zf) goto L_10841882;
  /* 1084187d jmp 0x108419d2 */
  goto L_108419d2;
L_10841882:;
  /* 10841882 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10841885 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1084188a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1084188d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10841890 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10841897 jmp 0x108418a2 */
  goto L_108418a2;
L_10841899:;
  /* 10841899 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1084189c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084189f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_108418a2:;
  /* 108418a2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108418a9 jge 0x108418c0 */
  if ((C.sf==C.of)) goto L_108418c0;
  /* 108418ab mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108418ae mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 108418b2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 108418b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108418b8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108418bb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 108418be jmp 0x10841899 */
  goto L_10841899;
L_108418c0:;
  /* 108418c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108418c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108418c4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108418c7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108418ca push edx */
  push32((uint32_t)(EDX));
  /* 108418cb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108418d0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108418d3 push eax */
  push32((uint32_t)(EAX));
  /* 108418d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 108418d6 call 0x10844240 */
  push32(0x108418dbu); f_10844240();
  /* 108418db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108418de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108418e0 jne 0x108418e7 */
  if (!C.zf) goto L_108418e7;
  /* 108418e2 jmp 0x108419d2 */
  goto L_108419d2;
L_108418e7:;
  /* 108418e7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108418ea mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 108418ef cmp dword ptr [0x1085fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1085fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108418f6 jle 0x10841953 */
  if ((C.zf||C.sf!=C.of)) goto L_10841953;
  /* 108418f8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 108418fb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108418fe jmp 0x10841909 */
  goto L_10841909;
L_10841900:;
  /* 10841900 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10841903 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841906 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10841909:;
  /* 10841909 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1084190c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1084190e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10841910 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10841912 je 0x10841953 */
  if (C.zf) goto L_10841953;
  /* 10841914 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10841917 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10841919 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1084191c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1084191e je 0x10841953 */
  if (C.zf) goto L_10841953;
  /* 10841920 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10841923 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10841925 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10841927 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1084192a jmp 0x10841935 */
  goto L_10841935;
L_1084192c:;
  /* 1084192c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1084192f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841932 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10841935:;
  /* 10841935 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10841938 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084193a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1084193d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841940 jg 0x10841951 */
  if ((!C.zf&&C.sf==C.of)) goto L_10841951;
  /* 10841942 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10841945 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10841948 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1084194f jmp 0x1084192c */
  goto L_1084192c;
L_10841951:;
  /* 10841951 jmp 0x10841900 */
  goto L_10841900;
L_10841953:;
  /* 10841953 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10841956 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841959 mov dword ptr [0x1085fc98], eax */
  w32((uint32_t)(0x1085fc98), (EAX));
  /* 1084195e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10841961 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841964 mov dword ptr [0x1085fc9c], ecx */
  w32((uint32_t)(0x1085fc9c), (ECX));
  /* 1084196a cmp dword ptr [0x108617c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108617c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841971 je 0x10841984 */
  if (C.zf) goto L_10841984;
  /* 10841973 push 2 */
  push32((uint32_t)(0x2u));
  /* 10841975 mov edx, dword ptr [0x108617c8] */
  EDX = (r32((uint32_t)(0x108617c8)));
  /* 1084197b push edx */
  push32((uint32_t)(EDX));
  /* 1084197c call 0x10836870 */
  push32(0x10841981u); f_10836870();
  /* 10841981 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10841984:;
  /* 10841984 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10841987 mov dword ptr [0x108617c8], eax */
  w32((uint32_t)(0x108617c8), (EAX));
  /* 1084198c cmp dword ptr [0x108617cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108617cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841993 je 0x108419a6 */
  if (C.zf) goto L_108419a6;
  /* 10841995 push 2 */
  push32((uint32_t)(0x2u));
  /* 10841997 mov ecx, dword ptr [0x108617cc] */
  ECX = (r32((uint32_t)(0x108617cc)));
  /* 1084199d push ecx */
  push32((uint32_t)(ECX));
  /* 1084199e call 0x10836870 */
  push32(0x108419a3u); f_10836870();
  /* 108419a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108419a6:;
  /* 108419a6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108419a9 mov dword ptr [0x108617cc], edx */
  w32((uint32_t)(0x108617cc), (EDX));
  /* 108419af push 2 */
  push32((uint32_t)(0x2u));
  /* 108419b1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108419b4 push eax */
  push32((uint32_t)(EAX));
  /* 108419b5 call 0x10836870 */
  push32(0x108419bau); f_10836870();
  /* 108419ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108419bd push 2 */
  push32((uint32_t)(0x2u));
  /* 108419bf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108419c2 push ecx */
  push32((uint32_t)(ECX));
  /* 108419c3 call 0x10836870 */
  push32(0x108419c8u); f_10836870();
  /* 108419c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108419cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108419cd jmp 0x10841a5c */
  goto L_10841a5c;
L_108419d2:;
  /* 108419d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 108419d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108419d7 push edx */
  push32((uint32_t)(EDX));
  /* 108419d8 call 0x10836870 */
  push32(0x108419ddu); f_10836870();
  /* 108419dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108419e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 108419e2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108419e5 push eax */
  push32((uint32_t)(EAX));
  /* 108419e6 call 0x10836870 */
  push32(0x108419ebu); f_10836870();
  /* 108419eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108419ee push 2 */
  push32((uint32_t)(0x2u));
  /* 108419f0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108419f3 push ecx */
  push32((uint32_t)(ECX));
  /* 108419f4 call 0x10836870 */
  push32(0x108419f9u); f_10836870();
  /* 108419f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108419fc push 2 */
  push32((uint32_t)(0x2u));
  /* 108419fe mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10841a01 push edx */
  push32((uint32_t)(EDX));
  /* 10841a02 call 0x10836870 */
  push32(0x10841a07u); f_10836870();
  /* 10841a07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841a0a mov eax, 1 */
  EAX = (0x1u);
  /* 10841a0f jmp 0x10841a5c */
  goto L_10841a5c;
L_10841a11:;
  /* 10841a11 mov dword ptr [0x1085fc98], 0x1085fca2 */
  w32((uint32_t)(0x1085fc98), (0x1085fca2u));
  /* 10841a1b mov dword ptr [0x1085fc9c], 0x1085fca2 */
  w32((uint32_t)(0x1085fc9c), (0x1085fca2u));
  /* 10841a25 push 2 */
  push32((uint32_t)(0x2u));
  /* 10841a27 mov eax, dword ptr [0x108617c8] */
  EAX = (r32((uint32_t)(0x108617c8)));
  /* 10841a2c push eax */
  push32((uint32_t)(EAX));
  /* 10841a2d call 0x10836870 */
  push32(0x10841a32u); f_10836870();
  /* 10841a32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841a35 push 2 */
  push32((uint32_t)(0x2u));
  /* 10841a37 mov ecx, dword ptr [0x108617cc] */
  ECX = (r32((uint32_t)(0x108617cc)));
  /* 10841a3d push ecx */
  push32((uint32_t)(ECX));
  /* 10841a3e call 0x10836870 */
  push32(0x10841a43u); f_10836870();
  /* 10841a43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841a46 mov dword ptr [0x108617c8], 0 */
  w32((uint32_t)(0x108617c8), (0x0u));
  /* 10841a50 mov dword ptr [0x108617cc], 0 */
  w32((uint32_t)(0x108617cc), (0x0u));
  /* 10841a5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10841a5c:;
  /* 10841a5c mov esp, ebp */
  ESP = (EBP);
  /* 10841a5e pop ebp */
  EBP = (pop32());
  /* 10841a5f ret  */
  ESPCHK(0x108416c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a60 @ 0x10841a60 (7 bytes, 5 insns) */
void f_10841a60(void) {
  FTRACE(0x10841a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10841a60 push ebp */
  push32((uint32_t)(EBP));
  /* 10841a61 mov ebp, esp */
  EBP = (ESP);
  /* 10841a63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10841a65 pop ebp */
  EBP = (pop32());
  /* 10841a66 ret  */
  ESPCHK(0x10841a60u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10841a70 (129 bytes, 56 insns) */
void f_10841a70(void) {
  FTRACE(0x10841a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10841a70 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10841a74 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10841a78 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10841a7e jne 0x10841abc */
  if (!C.zf) goto L_10841abc;
L_10841a80:;
  /* 10841a80 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10841a82 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10841a84 jne 0x10841ab4 */
  if (!C.zf) goto L_10841ab4;
  /* 10841a86 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10841a88 je 0x10841ab0 */
  if (C.zf) goto L_10841ab0;
  /* 10841a8a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10841a8d jne 0x10841ab4 */
  if (!C.zf) goto L_10841ab4;
  /* 10841a8f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10841a91 je 0x10841ab0 */
  if (C.zf) goto L_10841ab0;
  /* 10841a93 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10841a96 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10841a99 jne 0x10841ab4 */
  if (!C.zf) goto L_10841ab4;
  /* 10841a9b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10841a9d je 0x10841ab0 */
  if (C.zf) goto L_10841ab0;
  /* 10841a9f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10841aa2 jne 0x10841ab4 */
  if (!C.zf) goto L_10841ab4;
  /* 10841aa4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841aa7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841aaa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10841aac jne 0x10841a80 */
  if (!C.zf) goto L_10841a80;
  /* 10841aae mov edi, edi */
  EDI = (EDI);
L_10841ab0:;
  /* 10841ab0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10841ab2 ret  */
  ESPCHK(0x10841a70u, _esp0);
  ESP += 4; return;
  /* 10841ab3 nop  */
  /* nop */
L_10841ab4:;
  /* 10841ab4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10841ab6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10841ab8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10841ab9 ret  */
  ESPCHK(0x10841a70u, _esp0);
  ESP += 4; return;
  /* 10841aba mov edi, edi */
  EDI = (EDI);
L_10841abc:;
  /* 10841abc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10841ac2 je 0x10841ad8 */
  if (C.zf) goto L_10841ad8;
  /* 10841ac4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10841ac6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10841ac7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10841ac9 jne 0x10841ab4 */
  if (!C.zf) goto L_10841ab4;
  /* 10841acb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10841acc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10841ace je 0x10841ab0 */
  if (C.zf) goto L_10841ab0;
  /* 10841ad0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10841ad6 je 0x10841a80 */
  if (C.zf) goto L_10841a80;
L_10841ad8:;
  /* 10841ad8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10841adb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841ade cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10841ae0 jne 0x10841ab4 */
  if (!C.zf) goto L_10841ab4;
  /* 10841ae2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10841ae4 je 0x10841ab0 */
  if (C.zf) goto L_10841ab0;
  /* 10841ae6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10841ae9 jne 0x10841ab4 */
  if (!C.zf) goto L_10841ab4;
  /* 10841aeb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10841aed je 0x10841ab0 */
  if (C.zf) goto L_10841ab0;
  /* 10841aef add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841af2 jmp 0x10841a80 */
  goto L_10841a80;
}

/* FUN_10011b00 @ 0x10841b00 (62 bytes, 35 insns) */
void f_10841b00(void) {
  FTRACE(0x10841b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10841b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10841b01 mov ebp, esp */
  EBP = (ESP);
  /* 10841b03 push esi */
  push32((uint32_t)(ESI));
  /* 10841b04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10841b06 push eax */
  push32((uint32_t)(EAX));
  /* 10841b07 push eax */
  push32((uint32_t)(EAX));
  /* 10841b08 push eax */
  push32((uint32_t)(EAX));
  /* 10841b09 push eax */
  push32((uint32_t)(EAX));
  /* 10841b0a push eax */
  push32((uint32_t)(EAX));
  /* 10841b0b push eax */
  push32((uint32_t)(EAX));
  /* 10841b0c push eax */
  push32((uint32_t)(EAX));
  /* 10841b0d push eax */
  push32((uint32_t)(EAX));
  /* 10841b0e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10841b11 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10841b14:;
  /* 10841b14 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10841b16 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10841b18 je 0x10841b21 */
  if (C.zf) goto L_10841b21;
  /* 10841b1a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10841b1b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10841b1b");
  /* 10841b1f jmp 0x10841b14 */
  goto L_10841b14;
L_10841b21:;
  /* 10841b21 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10841b24 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10841b27 nop  */
  /* nop */
L_10841b28:;
  /* 10841b28 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10841b29 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10841b2b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10841b2d je 0x10841b36 */
  if (C.zf) goto L_10841b36;
  /* 10841b2f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10841b30 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10841b30");
  /* 10841b34 jae 0x10841b28 */
  if (!C.cf) goto L_10841b28;
L_10841b36:;
  /* 10841b36 mov eax, ecx */
  EAX = (ECX);
  /* 10841b38 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841b3b pop esi */
  ESI = (pop32());
  /* 10841b3c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10841b3d ret  */
  ESPCHK(0x10841b00u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10841b40 (56 bytes, 31 insns) */
void f_10841b40(void) {
  FTRACE(0x10841b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10841b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10841b41 mov ebp, esp */
  EBP = (ESP);
  /* 10841b43 push edi */
  push32((uint32_t)(EDI));
  /* 10841b44 push esi */
  push32((uint32_t)(ESI));
  /* 10841b45 push ebx */
  push32((uint32_t)(EBX));
  /* 10841b46 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10841b49 jecxz 0x10841b71 */
  x86_unimpl("jecxz @ 0x10841b49");
  /* 10841b4b mov ebx, ecx */
  EBX = (ECX);
  /* 10841b4d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10841b50 mov esi, edi */
  ESI = (EDI);
  /* 10841b52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10841b54 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10841b56 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10841b58 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841b5a mov edi, esi */
  EDI = (ESI);
  /* 10841b5c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10841b5f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10841b61 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10841b64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10841b66 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10841b69 ja 0x10841b6f */
  if ((!C.cf&&!C.zf)) goto L_10841b6f;
  /* 10841b6b je 0x10841b71 */
  if (C.zf) goto L_10841b71;
  /* 10841b6d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10841b6e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10841b6f:;
  /* 10841b6f not ecx */
  ECX = (~(ECX));
L_10841b71:;
  /* 10841b71 mov eax, ecx */
  EAX = (ECX);
  /* 10841b73 pop ebx */
  EBX = (pop32());
  /* 10841b74 pop esi */
  ESI = (pop32());
  /* 10841b75 pop edi */
  EDI = (pop32());
  /* 10841b76 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10841b77 ret  */
  ESPCHK(0x10841b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b80 @ 0x10841b80 (58 bytes, 32 insns) */
void f_10841b80(void) {
  FTRACE(0x10841b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10841b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10841b81 mov ebp, esp */
  EBP = (ESP);
  /* 10841b83 push esi */
  push32((uint32_t)(ESI));
  /* 10841b84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10841b86 push eax */
  push32((uint32_t)(EAX));
  /* 10841b87 push eax */
  push32((uint32_t)(EAX));
  /* 10841b88 push eax */
  push32((uint32_t)(EAX));
  /* 10841b89 push eax */
  push32((uint32_t)(EAX));
  /* 10841b8a push eax */
  push32((uint32_t)(EAX));
  /* 10841b8b push eax */
  push32((uint32_t)(EAX));
  /* 10841b8c push eax */
  push32((uint32_t)(EAX));
  /* 10841b8d push eax */
  push32((uint32_t)(EAX));
  /* 10841b8e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10841b91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10841b94:;
  /* 10841b94 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10841b96 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10841b98 je 0x10841ba1 */
  if (C.zf) goto L_10841ba1;
  /* 10841b9a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10841b9b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10841b9b");
  /* 10841b9f jmp 0x10841b94 */
  goto L_10841b94;
L_10841ba1:;
  /* 10841ba1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10841ba4:;
  /* 10841ba4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10841ba6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10841ba8 je 0x10841bb4 */
  if (C.zf) goto L_10841bb4;
  /* 10841baa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10841bab bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10841bab");
  /* 10841baf jae 0x10841ba4 */
  if (!C.cf) goto L_10841ba4;
  /* 10841bb1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10841bb4:;
  /* 10841bb4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841bb7 pop esi */
  ESI = (pop32());
  /* 10841bb8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10841bb9 ret  */
  ESPCHK(0x10841b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011bc0 @ 0x10841bc0 (512 bytes, 147 insns) */
void f_10841bc0(void) {
  FTRACE(0x10841bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10841bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10841bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10841bc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10841bc6 cmp dword ptr [0x10861814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841bcd jne 0x10841bf2 */
  if (!C.zf) goto L_10841bf2;
  /* 10841bcf call 0x10842690 */
  push32(0x10841bd4u); f_10842690();
  /* 10841bd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10841bd6 je 0x10841be2 */
  if (C.zf) goto L_10841be2;
  /* 10841bd8 mov eax, dword ptr [0x108642f4] */
  EAX = (r32((uint32_t)(0x108642f4)));
  /* 10841bdd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10841be0 jmp 0x10841be9 */
  goto L_10841be9;
L_10841be2:;
  /* 10841be2 mov dword ptr [ebp - 8], 0x108426e0 */
  w32((uint32_t)(EBP + -0x8), (0x108426e0u));
L_10841be9:;
  /* 10841be9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10841bec mov dword ptr [0x10861814], ecx */
  w32((uint32_t)(0x10861814), (ECX));
L_10841bf2:;
  /* 10841bf2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841bf6 jne 0x10841c02 */
  if (!C.zf) goto L_10841c02;
  /* 10841bf8 call 0x108424e0 */
  push32(0x10841bfdu); f_108424e0();
  /* 10841bfd jmp 0x10841cce */
  goto L_10841cce;
L_10841c02:;
  /* 10841c02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841c05 mov dword ptr [0x10861804], edx */
  w32((uint32_t)(0x10861804), (EDX));
  /* 10841c0b cmp dword ptr [0x10861804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841c12 je 0x10841c34 */
  if (C.zf) goto L_10841c34;
  /* 10841c14 mov eax, dword ptr [0x10861804] */
  EAX = (r32((uint32_t)(0x10861804)));
  /* 10841c19 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10841c1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10841c1e je 0x10841c34 */
  if (C.zf) goto L_10841c34;
  /* 10841c20 push 0x10861804 */
  push32((uint32_t)(0x10861804u));
  /* 10841c25 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10841c27 push 0x10860a90 */
  push32((uint32_t)(0x10860a90u));
  /* 10841c2c call 0x10841dc0 */
  push32(0x10841c31u); f_10841dc0();
  /* 10841c31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10841c34:;
  /* 10841c34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841c37 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841c3a mov dword ptr [0x10861808], edx */
  w32((uint32_t)(0x10861808), (EDX));
  /* 10841c40 cmp dword ptr [0x10861808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841c47 je 0x10841c69 */
  if (C.zf) goto L_10841c69;
  /* 10841c49 mov eax, dword ptr [0x10861808] */
  EAX = (r32((uint32_t)(0x10861808)));
  /* 10841c4e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10841c51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10841c53 je 0x10841c69 */
  if (C.zf) goto L_10841c69;
  /* 10841c55 push 0x10861808 */
  push32((uint32_t)(0x10861808u));
  /* 10841c5a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10841c5c push 0x108609d8 */
  push32((uint32_t)(0x108609d8u));
  /* 10841c61 call 0x10841dc0 */
  push32(0x10841c66u); f_10841dc0();
  /* 10841c66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10841c69:;
  /* 10841c69 mov dword ptr [0x1086180c], 0 */
  w32((uint32_t)(0x1086180c), (0x0u));
  /* 10841c73 cmp dword ptr [0x10861804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841c7a je 0x10841cad */
  if (C.zf) goto L_10841cad;
  /* 10841c7c mov edx, dword ptr [0x10861804] */
  EDX = (r32((uint32_t)(0x10861804)));
  /* 10841c82 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10841c85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10841c87 je 0x10841cad */
  if (C.zf) goto L_10841cad;
  /* 10841c89 cmp dword ptr [0x10861808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841c90 je 0x10841ca6 */
  if (C.zf) goto L_10841ca6;
  /* 10841c92 mov ecx, dword ptr [0x10861808] */
  ECX = (r32((uint32_t)(0x10861808)));
  /* 10841c98 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10841c9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10841c9d je 0x10841ca6 */
  if (C.zf) goto L_10841ca6;
  /* 10841c9f call 0x10841e50 */
  push32(0x10841ca4u); f_10841e50();
  /* 10841ca4 jmp 0x10841cab */
  goto L_10841cab;
L_10841ca6:;
  /* 10841ca6 call 0x10842240 */
  push32(0x10841cabu); f_10842240();
L_10841cab:;
  /* 10841cab jmp 0x10841cce */
  goto L_10841cce;
L_10841cad:;
  /* 10841cad cmp dword ptr [0x10861808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841cb4 je 0x10841cc9 */
  if (C.zf) goto L_10841cc9;
  /* 10841cb6 mov eax, dword ptr [0x10861808] */
  EAX = (r32((uint32_t)(0x10861808)));
  /* 10841cbb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10841cbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10841cc0 je 0x10841cc9 */
  if (C.zf) goto L_10841cc9;
  /* 10841cc2 call 0x108423e0 */
  push32(0x10841cc7u); f_108423e0();
  /* 10841cc7 jmp 0x10841cce */
  goto L_10841cce;
L_10841cc9:;
  /* 10841cc9 call 0x108424e0 */
  push32(0x10841cceu); f_108424e0();
L_10841cce:;
  /* 10841cce cmp dword ptr [0x1086180c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1086180c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841cd5 jne 0x10841cde */
  if (!C.zf) goto L_10841cde;
  /* 10841cd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10841cd9 jmp 0x10841dbc */
  goto L_10841dbc;
L_10841cde:;
  /* 10841cde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841ce1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841ce7 push edx */
  push32((uint32_t)(EDX));
  /* 10841ce8 call 0x10842510 */
  push32(0x10841cedu); f_10842510();
  /* 10841ced add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841cf0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10841cf3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841cf7 je 0x10841d0c */
  if (C.zf) goto L_10841d0c;
  /* 10841cf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10841cfc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10841d01 push eax */
  push32((uint32_t)(EAX));
  /* 10841d02 call dword ptr [0x108642f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642f8))), 0x10841d08u);
  /* 10841d08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10841d0a jne 0x10841d13 */
  if (!C.zf) goto L_10841d13;
L_10841d0c:;
  /* 10841d0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10841d0e jmp 0x10841dbc */
  goto L_10841dbc;
L_10841d13:;
  /* 10841d13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10841d15 mov ecx, dword ptr [0x108617f4] */
  ECX = (r32((uint32_t)(0x108617f4)));
  /* 10841d1b push ecx */
  push32((uint32_t)(ECX));
  /* 10841d1c call dword ptr [0x10864308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864308))), 0x10841d22u);
  /* 10841d22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10841d24 jne 0x10841d2d */
  if (!C.zf) goto L_10841d2d;
  /* 10841d26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10841d28 jmp 0x10841dbc */
  goto L_10841dbc;
L_10841d2d:;
  /* 10841d2d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841d31 je 0x10841d58 */
  if (C.zf) goto L_10841d58;
  /* 10841d33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10841d36 mov ax, word ptr [0x108617f4] */
  AX = (r16((uint32_t)(0x108617f4)));
  /* 10841d3c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10841d3f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10841d42 mov dx, word ptr [0x10861810] */
  DX = (r16((uint32_t)(0x10861810)));
  /* 10841d49 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10841d4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10841d50 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10841d54 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10841d58:;
  /* 10841d58 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841d5c je 0x10841db7 */
  if (C.zf) goto L_10841db7;
  /* 10841d5e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10841d60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10841d63 push edx */
  push32((uint32_t)(EDX));
  /* 10841d64 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10841d69 mov eax, dword ptr [0x108617f4] */
  EAX = (r32((uint32_t)(0x108617f4)));
  /* 10841d6e push eax */
  push32((uint32_t)(EAX));
  /* 10841d6f call dword ptr [0x10861814] */
  call_ind((uint32_t)(r32((uint32_t)(0x10861814))), 0x10841d75u);
  /* 10841d75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10841d77 jne 0x10841d7d */
  if (!C.zf) goto L_10841d7d;
  /* 10841d79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10841d7b jmp 0x10841dbc */
  goto L_10841dbc;
L_10841d7d:;
  /* 10841d7d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10841d7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10841d82 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841d85 push ecx */
  push32((uint32_t)(ECX));
  /* 10841d86 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10841d8b mov edx, dword ptr [0x10861810] */
  EDX = (r32((uint32_t)(0x10861810)));
  /* 10841d91 push edx */
  push32((uint32_t)(EDX));
  /* 10841d92 call dword ptr [0x10861814] */
  call_ind((uint32_t)(r32((uint32_t)(0x10861814))), 0x10841d98u);
  /* 10841d98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10841d9a jne 0x10841da0 */
  if (!C.zf) goto L_10841da0;
  /* 10841d9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10841d9e jmp 0x10841dbc */
  goto L_10841dbc;
L_10841da0:;
  /* 10841da0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10841da2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10841da5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841daa push eax */
  push32((uint32_t)(EAX));
  /* 10841dab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10841dae push ecx */
  push32((uint32_t)(ECX));
  /* 10841daf call 0x10838920 */
  push32(0x10841db4u); f_10838920();
  /* 10841db4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10841db7:;
  /* 10841db7 mov eax, 1 */
  EAX = (0x1u);
L_10841dbc:;
  /* 10841dbc mov esp, ebp */
  ESP = (EBP);
  /* 10841dbe pop ebp */
  EBP = (pop32());
  /* 10841dbf ret  */
  ESPCHK(0x10841bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011dc0 @ 0x10841dc0 (130 bytes, 47 insns) */
void f_10841dc0(void) {
  FTRACE(0x10841dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10841dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10841dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10841dc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10841dc6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10841dcd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10841dd4:;
  /* 10841dd4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10841dd7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841dda jg 0x10841e3e */
  if ((!C.zf&&C.sf==C.of)) goto L_10841e3e;
  /* 10841ddc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841de0 je 0x10841e3e */
  if (C.zf) goto L_10841e3e;
  /* 10841de2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10841de5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841de8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10841de9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10841deb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10841ded mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10841df0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10841df3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841df6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10841df9 push eax */
  push32((uint32_t)(EAX));
  /* 10841dfa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10841dfd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10841dff push edx */
  push32((uint32_t)(EDX));
  /* 10841e00 call 0x108444b0 */
  push32(0x10841e05u); f_108444b0();
  /* 10841e05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841e08 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10841e0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841e0f jne 0x10841e22 */
  if (!C.zf) goto L_10841e22;
  /* 10841e11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10841e14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841e17 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10841e1b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10841e1e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10841e20 jmp 0x10841e3c */
  goto L_10841e3c;
L_10841e22:;
  /* 10841e22 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841e26 jge 0x10841e33 */
  if ((C.sf==C.of)) goto L_10841e33;
  /* 10841e28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10841e2b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10841e2e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10841e31 jmp 0x10841e3c */
  goto L_10841e3c;
L_10841e33:;
  /* 10841e33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10841e36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841e39 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10841e3c:;
  /* 10841e3c jmp 0x10841dd4 */
  goto L_10841dd4;
L_10841e3e:;
  /* 10841e3e mov esp, ebp */
  ESP = (EBP);
  /* 10841e40 pop ebp */
  EBP = (pop32());
  /* 10841e41 ret  */
  ESPCHK(0x10841dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e50 @ 0x10841e50 (186 bytes, 50 insns) */
void f_10841e50(void) {
  FTRACE(0x10841e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10841e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10841e51 mov ebp, esp */
  EBP = (ESP);
  /* 10841e53 push ecx */
  push32((uint32_t)(ECX));
  /* 10841e54 mov eax, dword ptr [0x10861804] */
  EAX = (r32((uint32_t)(0x10861804)));
  /* 10841e59 push eax */
  push32((uint32_t)(EAX));
  /* 10841e5a call 0x10838c10 */
  push32(0x10841e5fu); f_10838c10();
  /* 10841e5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841e62 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10841e64 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841e67 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10841e6a mov dword ptr [0x10861800], ecx */
  w32((uint32_t)(0x10861800), (ECX));
  /* 10841e70 mov edx, dword ptr [0x10861808] */
  EDX = (r32((uint32_t)(0x10861808)));
  /* 10841e76 push edx */
  push32((uint32_t)(EDX));
  /* 10841e77 call 0x10838c10 */
  push32(0x10841e7cu); f_10838c10();
  /* 10841e7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841e7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10841e81 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841e84 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10841e87 mov dword ptr [0x108617f8], ecx */
  w32((uint32_t)(0x108617f8), (ECX));
  /* 10841e8d mov dword ptr [0x108617f4], 0 */
  w32((uint32_t)(0x108617f4), (0x0u));
  /* 10841e97 cmp dword ptr [0x10861800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10841e9e je 0x10841ea9 */
  if (C.zf) goto L_10841ea9;
  /* 10841ea0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10841ea7 jmp 0x10841ebb */
  goto L_10841ebb;
L_10841ea9:;
  /* 10841ea9 mov edx, dword ptr [0x10861804] */
  EDX = (r32((uint32_t)(0x10861804)));
  /* 10841eaf push edx */
  push32((uint32_t)(EDX));
  /* 10841eb0 call 0x108428f0 */
  push32(0x10841eb5u); f_108428f0();
  /* 10841eb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841eb8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10841ebb:;
  /* 10841ebb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10841ebe mov dword ptr [0x108617fc], eax */
  w32((uint32_t)(0x108617fc), (EAX));
  /* 10841ec3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10841ec5 push 0x10841f10 */
  push32((uint32_t)(0x10841f10u));
  /* 10841eca call dword ptr [0x108642fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642fc))), 0x10841ed0u);
  /* 10841ed0 mov ecx, dword ptr [0x1086180c] */
  ECX = (r32((uint32_t)(0x1086180c)));
  /* 10841ed6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10841edc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10841ede je 0x10841efc */
  if (C.zf) goto L_10841efc;
  /* 10841ee0 mov edx, dword ptr [0x1086180c] */
  EDX = (r32((uint32_t)(0x1086180c)));
  /* 10841ee6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10841eec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10841eee je 0x10841efc */
  if (C.zf) goto L_10841efc;
  /* 10841ef0 mov eax, dword ptr [0x1086180c] */
  EAX = (r32((uint32_t)(0x1086180c)));
  /* 10841ef5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10841ef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10841efa jne 0x10841f06 */
  if (!C.zf) goto L_10841f06;
L_10841efc:;
  /* 10841efc mov dword ptr [0x1086180c], 0 */
  w32((uint32_t)(0x1086180c), (0x0u));
L_10841f06:;
  /* 10841f06 mov esp, ebp */
  ESP = (EBP);
  /* 10841f08 pop ebp */
  EBP = (pop32());
  /* 10841f09 ret  */
  ESPCHK(0x10841e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f10 @ 0x10841f10 (804 bytes, 220 insns) */
void f_10841f10(void) {
  FTRACE(0x10841f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10841f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10841f11 mov ebp, esp */
  EBP = (ESP);
  /* 10841f13 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10841f16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10841f19 push eax */
  push32((uint32_t)(EAX));
  /* 10841f1a call 0x10842870 */
  push32(0x10841f1fu); f_10842870();
  /* 10841f1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841f22 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10841f25 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10841f27 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10841f2a push ecx */
  push32((uint32_t)(ECX));
  /* 10841f2b mov edx, dword ptr [0x108617f8] */
  EDX = (r32((uint32_t)(0x108617f8)));
  /* 10841f31 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10841f33 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10841f35 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10841f3b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841f41 push edx */
  push32((uint32_t)(EDX));
  /* 10841f42 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10841f45 push eax */
  push32((uint32_t)(EAX));
  /* 10841f46 call dword ptr [0x10861814] */
  call_ind((uint32_t)(r32((uint32_t)(0x10861814))), 0x10841f4cu);
  /* 10841f4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10841f4e jne 0x10841f64 */
  if (!C.zf) goto L_10841f64;
  /* 10841f50 mov dword ptr [0x1086180c], 0 */
  w32((uint32_t)(0x1086180c), (0x0u));
  /* 10841f5a mov eax, 1 */
  EAX = (0x1u);
  /* 10841f5f jmp 0x1084222e */
  goto L_1084222e;
L_10841f64:;
  /* 10841f64 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10841f67 push ecx */
  push32((uint32_t)(ECX));
  /* 10841f68 mov edx, dword ptr [0x10861808] */
  EDX = (r32((uint32_t)(0x10861808)));
  /* 10841f6e push edx */
  push32((uint32_t)(EDX));
  /* 10841f6f call 0x108444b0 */
  push32(0x10841f74u); f_108444b0();
  /* 10841f74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841f77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10841f79 jne 0x1084209f */
  if (!C.zf) goto L_1084209f;
  /* 10841f7f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10841f81 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10841f84 push eax */
  push32((uint32_t)(EAX));
  /* 10841f85 mov ecx, dword ptr [0x10861800] */
  ECX = (r32((uint32_t)(0x10861800)));
  /* 10841f8b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10841f8d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10841f8f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10841f95 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10841f9b push ecx */
  push32((uint32_t)(ECX));
  /* 10841f9c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10841f9f push edx */
  push32((uint32_t)(EDX));
  /* 10841fa0 call dword ptr [0x10861814] */
  call_ind((uint32_t)(r32((uint32_t)(0x10861814))), 0x10841fa6u);
  /* 10841fa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10841fa8 jne 0x10841fbe */
  if (!C.zf) goto L_10841fbe;
  /* 10841faa mov dword ptr [0x1086180c], 0 */
  w32((uint32_t)(0x1086180c), (0x0u));
  /* 10841fb4 mov eax, 1 */
  EAX = (0x1u);
  /* 10841fb9 jmp 0x1084222e */
  goto L_1084222e;
L_10841fbe:;
  /* 10841fbe lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10841fc1 push eax */
  push32((uint32_t)(EAX));
  /* 10841fc2 mov ecx, dword ptr [0x10861804] */
  ECX = (r32((uint32_t)(0x10861804)));
  /* 10841fc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10841fc9 call 0x108444b0 */
  push32(0x10841fceu); f_108444b0();
  /* 10841fce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10841fd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10841fd3 jne 0x10842000 */
  if (!C.zf) goto L_10842000;
  /* 10841fd5 mov edx, dword ptr [0x1086180c] */
  EDX = (r32((uint32_t)(0x1086180c)));
  /* 10841fdb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10841fe1 mov dword ptr [0x1086180c], edx */
  w32((uint32_t)(0x1086180c), (EDX));
  /* 10841fe7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10841fea mov dword ptr [0x10861810], eax */
  w32((uint32_t)(0x10861810), (EAX));
  /* 10841fef mov ecx, dword ptr [0x10861810] */
  ECX = (r32((uint32_t)(0x10861810)));
  /* 10841ff5 mov dword ptr [0x108617f4], ecx */
  w32((uint32_t)(0x108617f4), (ECX));
  /* 10841ffb jmp 0x1084209f */
  goto L_1084209f;
L_10842000:;
  /* 10842000 mov edx, dword ptr [0x1086180c] */
  EDX = (r32((uint32_t)(0x1086180c)));
  /* 10842006 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10842009 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1084200b jne 0x1084209f */
  if (!C.zf) goto L_1084209f;
  /* 10842011 cmp dword ptr [0x108617fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108617fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842018 je 0x1084206d */
  if (C.zf) goto L_1084206d;
  /* 1084201a mov eax, dword ptr [0x108617fc] */
  EAX = (r32((uint32_t)(0x108617fc)));
  /* 1084201f push eax */
  push32((uint32_t)(EAX));
  /* 10842020 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10842023 push ecx */
  push32((uint32_t)(ECX));
  /* 10842024 mov edx, dword ptr [0x10861804] */
  EDX = (r32((uint32_t)(0x10861804)));
  /* 1084202a push edx */
  push32((uint32_t)(EDX));
  /* 1084202b call 0x10844580 */
  push32(0x10842030u); f_10844580();
  /* 10842030 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842033 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10842035 jne 0x1084206d */
  if (!C.zf) goto L_1084206d;
  /* 10842037 mov eax, dword ptr [0x1086180c] */
  EAX = (r32((uint32_t)(0x1086180c)));
  /* 1084203c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1084203e mov dword ptr [0x1086180c], eax */
  w32((uint32_t)(0x1086180c), (EAX));
  /* 10842043 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10842046 mov dword ptr [0x10861810], ecx */
  w32((uint32_t)(0x10861810), (ECX));
  /* 1084204c mov edx, dword ptr [0x10861804] */
  EDX = (r32((uint32_t)(0x10861804)));
  /* 10842052 push edx */
  push32((uint32_t)(EDX));
  /* 10842053 call 0x10838c10 */
  push32(0x10842058u); f_10838c10();
  /* 10842058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084205b cmp eax, dword ptr [0x108617fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108617fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842061 jne 0x1084206b */
  if (!C.zf) goto L_1084206b;
  /* 10842063 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10842066 mov dword ptr [0x108617f4], eax */
  w32((uint32_t)(0x108617f4), (EAX));
L_1084206b:;
  /* 1084206b jmp 0x1084209f */
  goto L_1084209f;
L_1084206d:;
  /* 1084206d mov ecx, dword ptr [0x1086180c] */
  ECX = (r32((uint32_t)(0x1086180c)));
  /* 10842073 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10842076 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10842078 jne 0x1084209f */
  if (!C.zf) goto L_1084209f;
  /* 1084207a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1084207d push edx */
  push32((uint32_t)(EDX));
  /* 1084207e call 0x108425b0 */
  push32(0x10842083u); f_108425b0();
  /* 10842083 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842086 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10842088 je 0x1084209f */
  if (C.zf) goto L_1084209f;
  /* 1084208a mov eax, dword ptr [0x1086180c] */
  EAX = (r32((uint32_t)(0x1086180c)));
  /* 1084208f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10842091 mov dword ptr [0x1086180c], eax */
  w32((uint32_t)(0x1086180c), (EAX));
  /* 10842096 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10842099 mov dword ptr [0x10861810], ecx */
  w32((uint32_t)(0x10861810), (ECX));
L_1084209f:;
  /* 1084209f mov edx, dword ptr [0x1086180c] */
  EDX = (r32((uint32_t)(0x1086180c)));
  /* 108420a5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 108420ab cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108420b1 je 0x10842221 */
  if (C.zf) goto L_10842221;
  /* 108420b7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 108420b9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 108420bc push eax */
  push32((uint32_t)(EAX));
  /* 108420bd mov ecx, dword ptr [0x10861800] */
  ECX = (r32((uint32_t)(0x10861800)));
  /* 108420c3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108420c5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108420c7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 108420cd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108420d3 push ecx */
  push32((uint32_t)(ECX));
  /* 108420d4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108420d7 push edx */
  push32((uint32_t)(EDX));
  /* 108420d8 call dword ptr [0x10861814] */
  call_ind((uint32_t)(r32((uint32_t)(0x10861814))), 0x108420deu);
  /* 108420de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108420e0 jne 0x108420f6 */
  if (!C.zf) goto L_108420f6;
  /* 108420e2 mov dword ptr [0x1086180c], 0 */
  w32((uint32_t)(0x1086180c), (0x0u));
  /* 108420ec mov eax, 1 */
  EAX = (0x1u);
  /* 108420f1 jmp 0x1084222e */
  goto L_1084222e;
L_108420f6:;
  /* 108420f6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 108420f9 push eax */
  push32((uint32_t)(EAX));
  /* 108420fa mov ecx, dword ptr [0x10861804] */
  ECX = (r32((uint32_t)(0x10861804)));
  /* 10842100 push ecx */
  push32((uint32_t)(ECX));
  /* 10842101 call 0x108444b0 */
  push32(0x10842106u); f_108444b0();
  /* 10842106 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1084210b jne 0x108421c0 */
  if (!C.zf) goto L_108421c0;
  /* 10842111 mov edx, dword ptr [0x1086180c] */
  EDX = (r32((uint32_t)(0x1086180c)));
  /* 10842117 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1084211a mov dword ptr [0x1086180c], edx */
  w32((uint32_t)(0x1086180c), (EDX));
  /* 10842120 cmp dword ptr [0x10861800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842127 je 0x1084214a */
  if (C.zf) goto L_1084214a;
  /* 10842129 mov eax, dword ptr [0x1086180c] */
  EAX = (r32((uint32_t)(0x1086180c)));
  /* 1084212e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10842131 mov dword ptr [0x1086180c], eax */
  w32((uint32_t)(0x1086180c), (EAX));
  /* 10842136 cmp dword ptr [0x108617f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108617f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084213d jne 0x10842148 */
  if (!C.zf) goto L_10842148;
  /* 1084213f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10842142 mov dword ptr [0x108617f4], ecx */
  w32((uint32_t)(0x108617f4), (ECX));
L_10842148:;
  /* 10842148 jmp 0x108421be */
  goto L_108421be;
L_1084214a:;
  /* 1084214a cmp dword ptr [0x108617fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108617fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842151 je 0x1084219f */
  if (C.zf) goto L_1084219f;
  /* 10842153 mov edx, dword ptr [0x10861804] */
  EDX = (r32((uint32_t)(0x10861804)));
  /* 10842159 push edx */
  push32((uint32_t)(EDX));
  /* 1084215a call 0x10838c10 */
  push32(0x1084215fu); f_10838c10();
  /* 1084215f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842162 cmp eax, dword ptr [0x108617fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108617fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842168 jne 0x1084219f */
  if (!C.zf) goto L_1084219f;
  /* 1084216a push 1 */
  push32((uint32_t)(0x1u));
  /* 1084216c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1084216f push eax */
  push32((uint32_t)(EAX));
  /* 10842170 call 0x10842600 */
  push32(0x10842175u); f_10842600();
  /* 10842175 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842178 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1084217a je 0x1084219d */
  if (C.zf) goto L_1084219d;
  /* 1084217c mov ecx, dword ptr [0x1086180c] */
  ECX = (r32((uint32_t)(0x1086180c)));
  /* 10842182 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10842185 mov dword ptr [0x1086180c], ecx */
  w32((uint32_t)(0x1086180c), (ECX));
  /* 1084218b cmp dword ptr [0x108617f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108617f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842192 jne 0x1084219d */
  if (!C.zf) goto L_1084219d;
  /* 10842194 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10842197 mov dword ptr [0x108617f4], edx */
  w32((uint32_t)(0x108617f4), (EDX));
L_1084219d:;
  /* 1084219d jmp 0x108421be */
  goto L_108421be;
L_1084219f:;
  /* 1084219f mov eax, dword ptr [0x1086180c] */
  EAX = (r32((uint32_t)(0x1086180c)));
  /* 108421a4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 108421a7 mov dword ptr [0x1086180c], eax */
  w32((uint32_t)(0x1086180c), (EAX));
  /* 108421ac cmp dword ptr [0x108617f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108617f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108421b3 jne 0x108421be */
  if (!C.zf) goto L_108421be;
  /* 108421b5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108421b8 mov dword ptr [0x108617f4], ecx */
  w32((uint32_t)(0x108617f4), (ECX));
L_108421be:;
  /* 108421be jmp 0x10842221 */
  goto L_10842221;
L_108421c0:;
  /* 108421c0 cmp dword ptr [0x10861800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108421c7 jne 0x10842221 */
  if (!C.zf) goto L_10842221;
  /* 108421c9 cmp dword ptr [0x108617fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108617fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108421d0 je 0x10842221 */
  if (C.zf) goto L_10842221;
  /* 108421d2 mov edx, dword ptr [0x108617fc] */
  EDX = (r32((uint32_t)(0x108617fc)));
  /* 108421d8 push edx */
  push32((uint32_t)(EDX));
  /* 108421d9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 108421dc push eax */
  push32((uint32_t)(EAX));
  /* 108421dd mov ecx, dword ptr [0x10861804] */
  ECX = (r32((uint32_t)(0x10861804)));
  /* 108421e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108421e4 call 0x10844580 */
  push32(0x108421e9u); f_10844580();
  /* 108421e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108421ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108421ee jne 0x10842221 */
  if (!C.zf) goto L_10842221;
  /* 108421f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108421f2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108421f5 push edx */
  push32((uint32_t)(EDX));
  /* 108421f6 call 0x10842600 */
  push32(0x108421fbu); f_10842600();
  /* 108421fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108421fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10842200 je 0x10842221 */
  if (C.zf) goto L_10842221;
  /* 10842202 mov eax, dword ptr [0x1086180c] */
  EAX = (r32((uint32_t)(0x1086180c)));
  /* 10842207 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1084220a mov dword ptr [0x1086180c], eax */
  w32((uint32_t)(0x1086180c), (EAX));
  /* 1084220f cmp dword ptr [0x108617f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108617f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842216 jne 0x10842221 */
  if (!C.zf) goto L_10842221;
  /* 10842218 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1084221b mov dword ptr [0x108617f4], ecx */
  w32((uint32_t)(0x108617f4), (ECX));
L_10842221:;
  /* 10842221 mov eax, dword ptr [0x1086180c] */
  EAX = (r32((uint32_t)(0x1086180c)));
  /* 10842226 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10842229 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1084222b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1084222d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1084222e:;
  /* 1084222e mov esp, ebp */
  ESP = (EBP);
  /* 10842230 pop ebp */
  EBP = (pop32());
  /* 10842231 ret 4 */
  ESPCHK(0x10841f10u, _esp0);
  ESP += 8; return;
}

/* FUN_10012240 @ 0x10842240 (116 bytes, 33 insns) */
void f_10842240(void) {
  FTRACE(0x10842240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10842240 push ebp */
  push32((uint32_t)(EBP));
  /* 10842241 mov ebp, esp */
  EBP = (ESP);
  /* 10842243 push ecx */
  push32((uint32_t)(ECX));
  /* 10842244 mov eax, dword ptr [0x10861804] */
  EAX = (r32((uint32_t)(0x10861804)));
  /* 10842249 push eax */
  push32((uint32_t)(EAX));
  /* 1084224a call 0x10838c10 */
  push32(0x1084224fu); f_10838c10();
  /* 1084224f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842252 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10842254 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842257 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1084225a mov dword ptr [0x10861800], ecx */
  w32((uint32_t)(0x10861800), (ECX));
  /* 10842260 cmp dword ptr [0x10861800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842267 je 0x10842272 */
  if (C.zf) goto L_10842272;
  /* 10842269 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10842270 jmp 0x10842284 */
  goto L_10842284;
L_10842272:;
  /* 10842272 mov edx, dword ptr [0x10861804] */
  EDX = (r32((uint32_t)(0x10861804)));
  /* 10842278 push edx */
  push32((uint32_t)(EDX));
  /* 10842279 call 0x108428f0 */
  push32(0x1084227eu); f_108428f0();
  /* 1084227e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842281 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10842284:;
  /* 10842284 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10842287 mov dword ptr [0x108617fc], eax */
  w32((uint32_t)(0x108617fc), (EAX));
  /* 1084228c push 1 */
  push32((uint32_t)(0x1u));
  /* 1084228e push 0x108422c0 */
  push32((uint32_t)(0x108422c0u));
  /* 10842293 call dword ptr [0x108642fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642fc))), 0x10842299u);
  /* 10842299 mov ecx, dword ptr [0x1086180c] */
  ECX = (r32((uint32_t)(0x1086180c)));
  /* 1084229f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 108422a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108422a4 jne 0x108422b0 */
  if (!C.zf) goto L_108422b0;
  /* 108422a6 mov dword ptr [0x1086180c], 0 */
  w32((uint32_t)(0x1086180c), (0x0u));
L_108422b0:;
  /* 108422b0 mov esp, ebp */
  ESP = (EBP);
  /* 108422b2 pop ebp */
  EBP = (pop32());
  /* 108422b3 ret  */
  ESPCHK(0x10842240u, _esp0);
  ESP += 4; return;
}

/* FUN_100122c0 @ 0x108422c0 (287 bytes, 86 insns) */
void f_108422c0(void) {
  FTRACE(0x108422c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108422c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108422c1 mov ebp, esp */
  EBP = (ESP);
  /* 108422c3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108422c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108422c9 push eax */
  push32((uint32_t)(EAX));
  /* 108422ca call 0x10842870 */
  push32(0x108422cfu); f_10842870();
  /* 108422cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108422d2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 108422d5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 108422d7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 108422da push ecx */
  push32((uint32_t)(ECX));
  /* 108422db mov edx, dword ptr [0x10861800] */
  EDX = (r32((uint32_t)(0x10861800)));
  /* 108422e1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 108422e3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108422e5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 108422eb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108422f1 push edx */
  push32((uint32_t)(EDX));
  /* 108422f2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108422f5 push eax */
  push32((uint32_t)(EAX));
  /* 108422f6 call dword ptr [0x10861814] */
  call_ind((uint32_t)(r32((uint32_t)(0x10861814))), 0x108422fcu);
  /* 108422fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108422fe jne 0x10842314 */
  if (!C.zf) goto L_10842314;
  /* 10842300 mov dword ptr [0x1086180c], 0 */
  w32((uint32_t)(0x1086180c), (0x0u));
  /* 1084230a mov eax, 1 */
  EAX = (0x1u);
  /* 1084230f jmp 0x108423d9 */
  goto L_108423d9;
L_10842314:;
  /* 10842314 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10842317 push ecx */
  push32((uint32_t)(ECX));
  /* 10842318 mov edx, dword ptr [0x10861804] */
  EDX = (r32((uint32_t)(0x10861804)));
  /* 1084231e push edx */
  push32((uint32_t)(EDX));
  /* 1084231f call 0x108444b0 */
  push32(0x10842324u); f_108444b0();
  /* 10842324 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842327 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10842329 jne 0x10842369 */
  if (!C.zf) goto L_10842369;
  /* 1084232b cmp dword ptr [0x10861800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842332 jne 0x10842346 */
  if (!C.zf) goto L_10842346;
  /* 10842334 push 1 */
  push32((uint32_t)(0x1u));
  /* 10842336 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10842339 push eax */
  push32((uint32_t)(EAX));
  /* 1084233a call 0x10842600 */
  push32(0x1084233fu); f_10842600();
  /* 1084233f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842342 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10842344 je 0x10842367 */
  if (C.zf) goto L_10842367;
L_10842346:;
  /* 10842346 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10842349 mov dword ptr [0x10861810], ecx */
  w32((uint32_t)(0x10861810), (ECX));
  /* 1084234f mov edx, dword ptr [0x10861810] */
  EDX = (r32((uint32_t)(0x10861810)));
  /* 10842355 mov dword ptr [0x108617f4], edx */
  w32((uint32_t)(0x108617f4), (EDX));
  /* 1084235b mov eax, dword ptr [0x1086180c] */
  EAX = (r32((uint32_t)(0x1086180c)));
  /* 10842360 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10842362 mov dword ptr [0x1086180c], eax */
  w32((uint32_t)(0x1086180c), (EAX));
L_10842367:;
  /* 10842367 jmp 0x108423cc */
  goto L_108423cc;
L_10842369:;
  /* 10842369 cmp dword ptr [0x10861800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842370 jne 0x108423cc */
  if (!C.zf) goto L_108423cc;
  /* 10842372 cmp dword ptr [0x108617fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108617fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842379 je 0x108423cc */
  if (C.zf) goto L_108423cc;
  /* 1084237b mov ecx, dword ptr [0x108617fc] */
  ECX = (r32((uint32_t)(0x108617fc)));
  /* 10842381 push ecx */
  push32((uint32_t)(ECX));
  /* 10842382 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10842385 push edx */
  push32((uint32_t)(EDX));
  /* 10842386 mov eax, dword ptr [0x10861804] */
  EAX = (r32((uint32_t)(0x10861804)));
  /* 1084238b push eax */
  push32((uint32_t)(EAX));
  /* 1084238c call 0x10844580 */
  push32(0x10842391u); f_10844580();
  /* 10842391 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10842396 jne 0x108423cc */
  if (!C.zf) goto L_108423cc;
  /* 10842398 push 0 */
  push32((uint32_t)(0x0u));
  /* 1084239a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1084239d push ecx */
  push32((uint32_t)(ECX));
  /* 1084239e call 0x10842600 */
  push32(0x108423a3u); f_10842600();
  /* 108423a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108423a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108423a8 je 0x108423cc */
  if (C.zf) goto L_108423cc;
  /* 108423aa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108423ad mov dword ptr [0x10861810], edx */
  w32((uint32_t)(0x10861810), (EDX));
  /* 108423b3 mov eax, dword ptr [0x10861810] */
  EAX = (r32((uint32_t)(0x10861810)));
  /* 108423b8 mov dword ptr [0x108617f4], eax */
  w32((uint32_t)(0x108617f4), (EAX));
  /* 108423bd mov ecx, dword ptr [0x1086180c] */
  ECX = (r32((uint32_t)(0x1086180c)));
  /* 108423c3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 108423c6 mov dword ptr [0x1086180c], ecx */
  w32((uint32_t)(0x1086180c), (ECX));
L_108423cc:;
  /* 108423cc mov eax, dword ptr [0x1086180c] */
  EAX = (r32((uint32_t)(0x1086180c)));
  /* 108423d1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108423d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108423d6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108423d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_108423d9:;
  /* 108423d9 mov esp, ebp */
  ESP = (EBP);
  /* 108423db pop ebp */
  EBP = (pop32());
  /* 108423dc ret 4 */
  ESPCHK(0x108422c0u, _esp0);
  ESP += 8; return;
}

/* FUN_100123e0 @ 0x108423e0 (69 bytes, 20 insns) */
void f_108423e0(void) {
  FTRACE(0x108423e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108423e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108423e1 mov ebp, esp */
  EBP = (ESP);
  /* 108423e3 mov eax, dword ptr [0x10861808] */
  EAX = (r32((uint32_t)(0x10861808)));
  /* 108423e8 push eax */
  push32((uint32_t)(EAX));
  /* 108423e9 call 0x10838c10 */
  push32(0x108423eeu); f_10838c10();
  /* 108423ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108423f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108423f3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108423f6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 108423f9 mov dword ptr [0x108617f8], ecx */
  w32((uint32_t)(0x108617f8), (ECX));
  /* 108423ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10842401 push 0x10842430 */
  push32((uint32_t)(0x10842430u));
  /* 10842406 call dword ptr [0x108642fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642fc))), 0x1084240cu);
  /* 1084240c mov edx, dword ptr [0x1086180c] */
  EDX = (r32((uint32_t)(0x1086180c)));
  /* 10842412 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10842415 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10842417 jne 0x10842423 */
  if (!C.zf) goto L_10842423;
  /* 10842419 mov dword ptr [0x1086180c], 0 */
  w32((uint32_t)(0x1086180c), (0x0u));
L_10842423:;
  /* 10842423 pop ebp */
  EBP = (pop32());
  /* 10842424 ret  */
  ESPCHK(0x108423e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012430 @ 0x10842430 (172 bytes, 54 insns) */
void f_10842430(void) {
  FTRACE(0x10842430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10842430 push ebp */
  push32((uint32_t)(EBP));
  /* 10842431 mov ebp, esp */
  EBP = (ESP);
  /* 10842433 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10842436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842439 push eax */
  push32((uint32_t)(EAX));
  /* 1084243a call 0x10842870 */
  push32(0x1084243fu); f_10842870();
  /* 1084243f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842442 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10842445 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10842447 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1084244a push ecx */
  push32((uint32_t)(ECX));
  /* 1084244b mov edx, dword ptr [0x108617f8] */
  EDX = (r32((uint32_t)(0x108617f8)));
  /* 10842451 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10842453 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10842455 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1084245b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842461 push edx */
  push32((uint32_t)(EDX));
  /* 10842462 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10842465 push eax */
  push32((uint32_t)(EAX));
  /* 10842466 call dword ptr [0x10861814] */
  call_ind((uint32_t)(r32((uint32_t)(0x10861814))), 0x1084246cu);
  /* 1084246c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1084246e jne 0x10842481 */
  if (!C.zf) goto L_10842481;
  /* 10842470 mov dword ptr [0x1086180c], 0 */
  w32((uint32_t)(0x1086180c), (0x0u));
  /* 1084247a mov eax, 1 */
  EAX = (0x1u);
  /* 1084247f jmp 0x108424d6 */
  goto L_108424d6;
L_10842481:;
  /* 10842481 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10842484 push ecx */
  push32((uint32_t)(ECX));
  /* 10842485 mov edx, dword ptr [0x10861808] */
  EDX = (r32((uint32_t)(0x10861808)));
  /* 1084248b push edx */
  push32((uint32_t)(EDX));
  /* 1084248c call 0x108444b0 */
  push32(0x10842491u); f_108444b0();
  /* 10842491 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842494 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10842496 jne 0x108424c9 */
  if (!C.zf) goto L_108424c9;
  /* 10842498 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1084249b push eax */
  push32((uint32_t)(EAX));
  /* 1084249c call 0x108425b0 */
  push32(0x108424a1u); f_108425b0();
  /* 108424a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108424a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108424a6 je 0x108424c9 */
  if (C.zf) goto L_108424c9;
  /* 108424a8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108424ab mov dword ptr [0x10861810], ecx */
  w32((uint32_t)(0x10861810), (ECX));
  /* 108424b1 mov edx, dword ptr [0x10861810] */
  EDX = (r32((uint32_t)(0x10861810)));
  /* 108424b7 mov dword ptr [0x108617f4], edx */
  w32((uint32_t)(0x108617f4), (EDX));
  /* 108424bd mov eax, dword ptr [0x1086180c] */
  EAX = (r32((uint32_t)(0x1086180c)));
  /* 108424c2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 108424c4 mov dword ptr [0x1086180c], eax */
  w32((uint32_t)(0x1086180c), (EAX));
L_108424c9:;
  /* 108424c9 mov eax, dword ptr [0x1086180c] */
  EAX = (r32((uint32_t)(0x1086180c)));
  /* 108424ce and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108424d1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108424d3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108424d5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_108424d6:;
  /* 108424d6 mov esp, ebp */
  ESP = (EBP);
  /* 108424d8 pop ebp */
  EBP = (pop32());
  /* 108424d9 ret 4 */
  ESPCHK(0x10842430u, _esp0);
  ESP += 8; return;
}

/* FUN_100124e0 @ 0x108424e0 (43 bytes, 11 insns) */
void f_108424e0(void) {
  FTRACE(0x108424e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108424e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108424e1 mov ebp, esp */
  EBP = (ESP);
  /* 108424e3 mov eax, dword ptr [0x1086180c] */
  EAX = (r32((uint32_t)(0x1086180c)));
  /* 108424e8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 108424ed mov dword ptr [0x1086180c], eax */
  w32((uint32_t)(0x1086180c), (EAX));
  /* 108424f2 call dword ptr [0x108642ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642ec))), 0x108424f8u);
  /* 108424f8 mov dword ptr [0x10861810], eax */
  w32((uint32_t)(0x10861810), (EAX));
  /* 108424fd mov ecx, dword ptr [0x10861810] */
  ECX = (r32((uint32_t)(0x10861810)));
  /* 10842503 mov dword ptr [0x108617f4], ecx */
  w32((uint32_t)(0x108617f4), (ECX));
  /* 10842509 pop ebp */
  EBP = (pop32());
  /* 1084250a ret  */
  ESPCHK(0x108424e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012510 @ 0x10842510 (155 bytes, 57 insns) */
void f_10842510(void) {
  FTRACE(0x10842510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10842510 push ebp */
  push32((uint32_t)(EBP));
  /* 10842511 mov ebp, esp */
  EBP = (ESP);
  /* 10842513 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10842516 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084251a je 0x1084253b */
  if (C.zf) goto L_1084253b;
  /* 1084251c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084251f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10842522 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10842524 je 0x1084253b */
  if (C.zf) goto L_1084253b;
  /* 10842526 push 0x1085d9cc */
  push32((uint32_t)(0x1085d9ccu));
  /* 1084252b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084252e push edx */
  push32((uint32_t)(EDX));
  /* 1084252f call 0x10841a70 */
  push32(0x10842534u); f_10841a70();
  /* 10842534 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842537 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10842539 jne 0x10842563 */
  if (!C.zf) goto L_10842563;
L_1084253b:;
  /* 1084253b push 8 */
  push32((uint32_t)(0x8u));
  /* 1084253d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10842540 push eax */
  push32((uint32_t)(EAX));
  /* 10842541 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10842546 mov ecx, dword ptr [0x10861810] */
  ECX = (r32((uint32_t)(0x10861810)));
  /* 1084254c push ecx */
  push32((uint32_t)(ECX));
  /* 1084254d call dword ptr [0x10861814] */
  call_ind((uint32_t)(r32((uint32_t)(0x10861814))), 0x10842553u);
  /* 10842553 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10842555 jne 0x1084255b */
  if (!C.zf) goto L_1084255b;
  /* 10842557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10842559 jmp 0x108425a7 */
  goto L_108425a7;
L_1084255b:;
  /* 1084255b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1084255e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10842561 jmp 0x1084259b */
  goto L_1084259b;
L_10842563:;
  /* 10842563 push 0x1085d9c8 */
  push32((uint32_t)(0x1085d9c8u));
  /* 10842568 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084256b push eax */
  push32((uint32_t)(EAX));
  /* 1084256c call 0x10841a70 */
  push32(0x10842571u); f_10841a70();
  /* 10842571 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842574 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10842576 jne 0x1084259b */
  if (!C.zf) goto L_1084259b;
  /* 10842578 push 8 */
  push32((uint32_t)(0x8u));
  /* 1084257a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1084257d push ecx */
  push32((uint32_t)(ECX));
  /* 1084257e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10842580 mov edx, dword ptr [0x10861810] */
  EDX = (r32((uint32_t)(0x10861810)));
  /* 10842586 push edx */
  push32((uint32_t)(EDX));
  /* 10842587 call dword ptr [0x10861814] */
  call_ind((uint32_t)(r32((uint32_t)(0x10861814))), 0x1084258du);
  /* 1084258d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1084258f jne 0x10842595 */
  if (!C.zf) goto L_10842595;
  /* 10842591 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10842593 jmp 0x108425a7 */
  goto L_108425a7;
L_10842595:;
  /* 10842595 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10842598 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1084259b:;
  /* 1084259b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084259e push ecx */
  push32((uint32_t)(ECX));
  /* 1084259f call 0x10844690 */
  push32(0x108425a4u); f_10844690();
  /* 108425a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108425a7:;
  /* 108425a7 mov esp, ebp */
  ESP = (EBP);
  /* 108425a9 pop ebp */
  EBP = (pop32());
  /* 108425aa ret  */
  ESPCHK(0x10842510u, _esp0);
  ESP += 4; return;
}

/* FUN_100125b0 @ 0x108425b0 (79 bytes, 26 insns) */
void f_108425b0(void) {
  FTRACE(0x108425b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108425b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108425b1 mov ebp, esp */
  EBP = (ESP);
  /* 108425b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108425b6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 108425ba mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 108425be mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108425c5 jmp 0x108425d0 */
  goto L_108425d0;
L_108425c7:;
  /* 108425c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108425ca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108425cd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_108425d0:;
  /* 108425d0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108425d4 jae 0x108425f6 */
  if (!C.cf) goto L_108425f6;
  /* 108425d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108425d9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108425df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108425e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108425e4 mov cx, word ptr [eax*2 + 0x108609c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x108609c4)));
  /* 108425ec cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108425ee jne 0x108425f4 */
  if (!C.zf) goto L_108425f4;
  /* 108425f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108425f2 jmp 0x108425fb */
  goto L_108425fb;
L_108425f4:;
  /* 108425f4 jmp 0x108425c7 */
  goto L_108425c7;
L_108425f6:;
  /* 108425f6 mov eax, 1 */
  EAX = (0x1u);
L_108425fb:;
  /* 108425fb mov esp, ebp */
  ESP = (EBP);
  /* 108425fd pop ebp */
  EBP = (pop32());
  /* 108425fe ret  */
  ESPCHK(0x108425b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012600 @ 0x10842600 (135 bytes, 48 insns) */
void f_10842600(void) {
  FTRACE(0x10842600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10842600 push ebp */
  push32((uint32_t)(EBP));
  /* 10842601 mov ebp, esp */
  EBP = (ESP);
  /* 10842603 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10842606 push esi */
  push32((uint32_t)(ESI));
  /* 10842607 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084260a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1084260f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10842614 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10842619 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1084261c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10842621 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10842624 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10842626 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10842629 push ecx */
  push32((uint32_t)(ECX));
  /* 1084262a push 1 */
  push32((uint32_t)(0x1u));
  /* 1084262c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084262f push edx */
  push32((uint32_t)(EDX));
  /* 10842630 call dword ptr [0x10861814] */
  call_ind((uint32_t)(r32((uint32_t)(0x10861814))), 0x10842636u);
  /* 10842636 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10842638 jne 0x1084263e */
  if (!C.zf) goto L_1084263e;
  /* 1084263a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084263c jmp 0x10842682 */
  goto L_10842682;
L_1084263e:;
  /* 1084263e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10842641 push eax */
  push32((uint32_t)(EAX));
  /* 10842642 call 0x10842870 */
  push32(0x10842647u); f_10842870();
  /* 10842647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084264a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084264d je 0x1084267d */
  if (C.zf) goto L_1084267d;
  /* 1084264f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842653 je 0x1084267d */
  if (C.zf) goto L_1084267d;
  /* 10842655 mov ecx, dword ptr [0x10861804] */
  ECX = (r32((uint32_t)(0x10861804)));
  /* 1084265b push ecx */
  push32((uint32_t)(ECX));
  /* 1084265c call 0x108428f0 */
  push32(0x10842661u); f_108428f0();
  /* 10842661 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842664 mov esi, eax */
  ESI = (EAX);
  /* 10842666 mov edx, dword ptr [0x10861804] */
  EDX = (r32((uint32_t)(0x10861804)));
  /* 1084266c push edx */
  push32((uint32_t)(EDX));
  /* 1084266d call 0x10838c10 */
  push32(0x10842672u); f_10838c10();
  /* 10842672 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842675 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842677 jne 0x1084267d */
  if (!C.zf) goto L_1084267d;
  /* 10842679 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084267b jmp 0x10842682 */
  goto L_10842682;
L_1084267d:;
  /* 1084267d mov eax, 1 */
  EAX = (0x1u);
L_10842682:;
  /* 10842682 pop esi */
  ESI = (pop32());
  /* 10842683 mov esp, ebp */
  ESP = (EBP);
  /* 10842685 pop ebp */
  EBP = (pop32());
  /* 10842686 ret  */
  ESPCHK(0x10842600u, _esp0);
  ESP += 4; return;
}

/* FUN_10012690 @ 0x10842690 (77 bytes, 18 insns) */
void f_10842690(void) {
  FTRACE(0x10842690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10842690 push ebp */
  push32((uint32_t)(EBP));
  /* 10842691 mov ebp, esp */
  EBP = (ESP);
  /* 10842693 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10842699 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 108426a3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 108426a9 push eax */
  push32((uint32_t)(EAX));
  /* 108426aa call dword ptr [0x108642e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642e8))), 0x108426b0u);
  /* 108426b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108426b2 je 0x108426c9 */
  if (C.zf) goto L_108426c9;
  /* 108426b4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108426bb jne 0x108426c9 */
  if (!C.zf) goto L_108426c9;
  /* 108426bd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 108426c7 jmp 0x108426d3 */
  goto L_108426d3;
L_108426c9:;
  /* 108426c9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_108426d3:;
  /* 108426d3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 108426d9 mov esp, ebp */
  ESP = (EBP);
  /* 108426db pop ebp */
  EBP = (pop32());
  /* 108426dc ret  */
  ESPCHK(0x10842690u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x108426e0 (388 bytes, 118 insns) */
void f_108426e0(void) {
  FTRACE(0x108426e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108426e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108426e1 mov ebp, esp */
  EBP = (ESP);
  /* 108426e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108426e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 108426ed mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 108426f4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_108426fb:;
  /* 108426fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108426fe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842701 jg 0x10842848 */
  if ((!C.zf&&C.sf==C.of)) goto L_10842848;
  /* 10842707 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1084270a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084270d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1084270e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10842710 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10842712 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10842715 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842718 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1084271b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084271e cmp edx, dword ptr [ecx + 0x10860520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10860520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842724 jne 0x1084281e */
  if (!C.zf) goto L_1084281e;
  /* 1084272a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1084272d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10842730 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842734 ja 0x10842757 */
  if ((!C.cf&&!C.zf)) goto L_10842757;
  /* 10842736 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084273a je 0x108427c9 */
  if (C.zf) goto L_108427c9;
  /* 10842740 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842744 je 0x10842774 */
  if (C.zf) goto L_10842774;
  /* 10842746 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084274a je 0x10842796 */
  if (C.zf) goto L_10842796;
  /* 1084274c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842750 je 0x108427b8 */
  if (C.zf) goto L_108427b8;
  /* 10842752 jmp 0x108427e8 */
  goto L_108427e8;
L_10842757:;
  /* 10842757 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084275e je 0x10842785 */
  if (C.zf) goto L_10842785;
  /* 10842760 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842767 je 0x108427a7 */
  if (C.zf) goto L_108427a7;
  /* 10842769 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842770 je 0x108427da */
  if (C.zf) goto L_108427da;
  /* 10842772 jmp 0x108427e8 */
  goto L_108427e8;
L_10842774:;
  /* 10842774 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842777 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1084277a add ecx, 0x10860524 */
  { uint32_t _a=(ECX),_b=(0x10860524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842780 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10842783 jmp 0x108427e8 */
  goto L_108427e8;
L_10842785:;
  /* 10842785 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842788 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1084278b mov eax, dword ptr [edx + 0x1086052c] */
  EAX = (r32((uint32_t)(EDX + 0x1086052c)));
  /* 10842791 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10842794 jmp 0x108427e8 */
  goto L_108427e8;
L_10842796:;
  /* 10842796 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842799 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1084279c add ecx, 0x10860530 */
  { uint32_t _a=(ECX),_b=(0x10860530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108427a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108427a5 jmp 0x108427e8 */
  goto L_108427e8;
L_108427a7:;
  /* 108427a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108427aa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108427ad mov eax, dword ptr [edx + 0x10860534] */
  EAX = (r32((uint32_t)(EDX + 0x10860534)));
  /* 108427b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108427b6 jmp 0x108427e8 */
  goto L_108427e8;
L_108427b8:;
  /* 108427b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108427bb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108427be add ecx, 0x10860538 */
  { uint32_t _a=(ECX),_b=(0x10860538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108427c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108427c7 jmp 0x108427e8 */
  goto L_108427e8;
L_108427c9:;
  /* 108427c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108427cc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108427cf add edx, 0x1086053c */
  { uint32_t _a=(EDX),_b=(0x1086053cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108427d5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108427d8 jmp 0x108427e8 */
  goto L_108427e8;
L_108427da:;
  /* 108427da mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108427dd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108427e0 add eax, 0x10860544 */
  { uint32_t _a=(EAX),_b=(0x10860544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108427e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108427e8:;
  /* 108427e8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108427ec je 0x108427f4 */
  if (C.zf) goto L_108427f4;
  /* 108427ee cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108427f2 jge 0x108427f6 */
  if ((C.sf==C.of)) goto L_108427f6;
L_108427f4:;
  /* 108427f4 jmp 0x10842848 */
  goto L_10842848;
L_108427f6:;
  /* 108427f6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108427f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108427fc push ecx */
  push32((uint32_t)(ECX));
  /* 108427fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10842800 push edx */
  push32((uint32_t)(EDX));
  /* 10842801 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10842804 push eax */
  push32((uint32_t)(EAX));
  /* 10842805 call 0x10839600 */
  push32(0x1084280au); f_10839600();
  /* 1084280a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084280d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10842810 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842813 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10842817 mov eax, 1 */
  EAX = (0x1u);
  /* 1084281c jmp 0x1084285e */
  goto L_1084285e;
L_1084281e:;
  /* 1084281e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842821 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10842824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842827 cmp eax, dword ptr [edx + 0x10860520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10860520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084282d jae 0x1084283a */
  if (!C.cf) goto L_1084283a;
  /* 1084282f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842832 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10842835 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10842838 jmp 0x10842843 */
  goto L_10842843;
L_1084283a:;
  /* 1084283a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1084283d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842840 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10842843:;
  /* 10842843 jmp 0x108426fb */
  goto L_108426fb;
L_10842848:;
  /* 10842848 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1084284b push eax */
  push32((uint32_t)(EAX));
  /* 1084284c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1084284f push ecx */
  push32((uint32_t)(ECX));
  /* 10842850 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10842853 push edx */
  push32((uint32_t)(EDX));
  /* 10842854 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842857 push eax */
  push32((uint32_t)(EAX));
  /* 10842858 call dword ptr [0x108642f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642f4))), 0x1084285eu);
L_1084285e:;
  /* 1084285e mov esp, ebp */
  ESP = (EBP);
  /* 10842860 pop ebp */
  EBP = (pop32());
  /* 10842861 ret 0x10 */
  ESPCHK(0x108426e0u, _esp0);
  ESP += 20; return;
}

/* FUN_10012870 @ 0x10842870 (118 bytes, 42 insns) */
void f_10842870(void) {
  FTRACE(0x10842870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10842870 push ebp */
  push32((uint32_t)(EBP));
  /* 10842871 mov ebp, esp */
  EBP = (ESP);
  /* 10842873 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10842876 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1084287d:;
  /* 1084287d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842880 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10842882 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10842885 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10842889 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084288c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084288f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10842892 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10842894 je 0x108428df */
  if (C.zf) goto L_108428df;
  /* 10842896 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1084289a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084289d jl 0x108428b2 */
  if ((C.sf!=C.of)) goto L_108428b2;
  /* 1084289f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108428a3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108428a6 jg 0x108428b2 */
  if ((!C.zf&&C.sf==C.of)) goto L_108428b2;
  /* 108428a8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 108428ab add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108428ad mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 108428b0 jmp 0x108428cc */
  goto L_108428cc;
L_108428b2:;
  /* 108428b2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108428b6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108428b9 jl 0x108428cc */
  if ((C.sf!=C.of)) goto L_108428cc;
  /* 108428bb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108428bf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108428c2 jg 0x108428cc */
  if ((!C.zf&&C.sf==C.of)) goto L_108428cc;
  /* 108428c4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 108428c7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108428c9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_108428cc:;
  /* 108428cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108428cf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 108428d2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108428d6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 108428da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108428dd jmp 0x1084287d */
  goto L_1084287d;
L_108428df:;
  /* 108428df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108428e2 mov esp, ebp */
  ESP = (EBP);
  /* 108428e4 pop ebp */
  EBP = (pop32());
  /* 108428e5 ret  */
  ESPCHK(0x10842870u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x108428f0 (101 bytes, 36 insns) */
void f_108428f0(void) {
  FTRACE(0x108428f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108428f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108428f1 mov ebp, esp */
  EBP = (ESP);
  /* 108428f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108428f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108428fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842900 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10842902 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10842905 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842908 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084290b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1084290e:;
  /* 1084290e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10842912 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842915 jl 0x10842920 */
  if ((C.sf!=C.of)) goto L_10842920;
  /* 10842917 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1084291b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084291e jle 0x10842932 */
  if ((C.zf||C.sf!=C.of)) goto L_10842932;
L_10842920:;
  /* 10842920 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10842924 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842927 jl 0x1084294e */
  if ((C.sf!=C.of)) goto L_1084294e;
  /* 10842929 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1084292d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842930 jg 0x1084294e */
  if ((!C.zf&&C.sf==C.of)) goto L_1084294e;
L_10842932:;
  /* 10842932 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10842935 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842938 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1084293b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084293e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10842940 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10842943 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842946 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842949 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1084294c jmp 0x1084290e */
  goto L_1084290e;
L_1084294e:;
  /* 1084294e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10842951 mov esp, ebp */
  ESP = (EBP);
  /* 10842953 pop ebp */
  EBP = (pop32());
  /* 10842954 ret  */
  ESPCHK(0x108428f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012960 @ 0x10842960 (122 bytes, 39 insns) */
void f_10842960(void) {
  FTRACE(0x10842960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10842960 push ebp */
  push32((uint32_t)(EBP));
  /* 10842961 mov ebp, esp */
  EBP = (ESP);
  /* 10842963 push ecx */
  push32((uint32_t)(ECX));
  /* 10842964 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842967 cmp eax, dword ptr [0x1086309c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1086309c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084296d jae 0x10842991 */
  if (!C.cf) goto L_10842991;
  /* 1084296f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842972 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10842975 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842978 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1084297b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1084297e mov eax, dword ptr [ecx*4 + 0x10862f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10862f60)));
  /* 10842985 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1084298a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1084298d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1084298f jne 0x108429ac */
  if (!C.zf) goto L_108429ac;
L_10842991:;
  /* 10842991 call 0x1083dcb0 */
  push32(0x10842996u); f_1083dcb0();
  /* 10842996 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1084299c call 0x1083dcc0 */
  push32(0x108429a1u); f_1083dcc0();
  /* 108429a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108429a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108429aa jmp 0x108429d6 */
  goto L_108429d6;
L_108429ac:;
  /* 108429ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108429af push edx */
  push32((uint32_t)(EDX));
  /* 108429b0 call 0x1083f4d0 */
  push32(0x108429b5u); f_1083f4d0();
  /* 108429b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108429b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108429bb push eax */
  push32((uint32_t)(EAX));
  /* 108429bc call 0x108429e0 */
  push32(0x108429c1u); f_108429e0();
  /* 108429c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108429c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108429c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108429ca push ecx */
  push32((uint32_t)(ECX));
  /* 108429cb call 0x1083f560 */
  push32(0x108429d0u); f_1083f560();
  /* 108429d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108429d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108429d6:;
  /* 108429d6 mov esp, ebp */
  ESP = (EBP);
  /* 108429d8 pop ebp */
  EBP = (pop32());
  /* 108429d9 ret  */
  ESPCHK(0x10842960u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x108429e0 (170 bytes, 59 insns) */
void f_108429e0(void) {
  FTRACE(0x108429e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108429e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108429e1 mov ebp, esp */
  EBP = (ESP);
  /* 108429e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108429e4 push esi */
  push32((uint32_t)(ESI));
  /* 108429e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108429e8 push eax */
  push32((uint32_t)(EAX));
  /* 108429e9 call 0x1083f350 */
  push32(0x108429eeu); f_1083f350();
  /* 108429ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108429f1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108429f4 je 0x10842a33 */
  if (C.zf) goto L_10842a33;
  /* 108429f6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108429fa je 0x10842a02 */
  if (C.zf) goto L_10842a02;
  /* 108429fc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842a00 jne 0x10842a1c */
  if (!C.zf) goto L_10842a1c;
L_10842a02:;
  /* 10842a02 push 1 */
  push32((uint32_t)(0x1u));
  /* 10842a04 call 0x1083f350 */
  push32(0x10842a09u); f_1083f350();
  /* 10842a09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842a0c mov esi, eax */
  ESI = (EAX);
  /* 10842a0e push 2 */
  push32((uint32_t)(0x2u));
  /* 10842a10 call 0x1083f350 */
  push32(0x10842a15u); f_1083f350();
  /* 10842a15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842a18 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842a1a je 0x10842a33 */
  if (C.zf) goto L_10842a33;
L_10842a1c:;
  /* 10842a1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842a1f push ecx */
  push32((uint32_t)(ECX));
  /* 10842a20 call 0x1083f350 */
  push32(0x10842a25u); f_1083f350();
  /* 10842a25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842a28 push eax */
  push32((uint32_t)(EAX));
  /* 10842a29 call dword ptr [0x108642f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642f0))), 0x10842a2fu);
  /* 10842a2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10842a31 je 0x10842a3c */
  if (C.zf) goto L_10842a3c;
L_10842a33:;
  /* 10842a33 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10842a3a jmp 0x10842a45 */
  goto L_10842a45;
L_10842a3c:;
  /* 10842a3c call dword ptr [0x108643d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643d8))), 0x10842a42u);
  /* 10842a42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10842a45:;
  /* 10842a45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842a48 push edx */
  push32((uint32_t)(EDX));
  /* 10842a49 call 0x1083f270 */
  push32(0x10842a4eu); f_1083f270();
  /* 10842a4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842a51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842a54 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10842a57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842a5a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10842a5d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10842a60 mov edx, dword ptr [eax*4 + 0x10862f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10862f60)));
  /* 10842a67 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10842a6c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842a70 je 0x10842a83 */
  if (C.zf) goto L_10842a83;
  /* 10842a72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10842a75 push eax */
  push32((uint32_t)(EAX));
  /* 10842a76 call 0x1083dc10 */
  push32(0x10842a7bu); f_1083dc10();
  /* 10842a7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842a7e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10842a81 jmp 0x10842a85 */
  goto L_10842a85;
L_10842a83:;
  /* 10842a83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10842a85:;
  /* 10842a85 pop esi */
  ESI = (pop32());
  /* 10842a86 mov esp, ebp */
  ESP = (EBP);
  /* 10842a88 pop ebp */
  EBP = (pop32());
  /* 10842a89 ret  */
  ESPCHK(0x108429e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a90 @ 0x10842a90 (146 bytes, 52 insns) */
void f_10842a90(void) {
  FTRACE(0x10842a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10842a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10842a91 mov ebp, esp */
  EBP = (ESP);
  /* 10842a93 push ebx */
  push32((uint32_t)(EBX));
  /* 10842a94 push esi */
  push32((uint32_t)(ESI));
  /* 10842a95 push edi */
  push32((uint32_t)(EDI));
L_10842a96:;
  /* 10842a96 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842a9a jne 0x10842aba */
  if (!C.zf) goto L_10842aba;
  /* 10842a9c push 0x1085d308 */
  push32((uint32_t)(0x1085d308u));
  /* 10842aa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10842aa3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10842aa5 push 0x1085d9d0 */
  push32((uint32_t)(0x1085d9d0u));
  /* 10842aaa push 2 */
  push32((uint32_t)(0x2u));
  /* 10842aac call 0x10834ea0 */
  push32(0x10842ab1u); f_10834ea0();
  /* 10842ab1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842ab4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842ab7 jne 0x10842aba */
  if (!C.zf) goto L_10842aba;
  /* 10842ab9 int3  */
  x86_unimpl("int3 @ 0x10842ab9");
L_10842aba:;
  /* 10842aba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10842abc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10842abe jne 0x10842a96 */
  if (!C.zf) goto L_10842a96;
  /* 10842ac0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842ac3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10842ac6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10842acc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10842ace je 0x10842b1d */
  if (C.zf) goto L_10842b1d;
  /* 10842ad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842ad3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10842ad6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10842ad9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10842adb je 0x10842b1d */
  if (C.zf) goto L_10842b1d;
  /* 10842add push 2 */
  push32((uint32_t)(0x2u));
  /* 10842adf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842ae2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10842ae5 push eax */
  push32((uint32_t)(EAX));
  /* 10842ae6 call 0x10836870 */
  push32(0x10842aebu); f_10836870();
  /* 10842aeb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842aee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842af1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10842af4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10842afa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842afd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10842b00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842b03 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10842b09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842b0c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10842b13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10842b16 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10842b1d:;
  /* 10842b1d pop edi */
  EDI = (pop32());
  /* 10842b1e pop esi */
  ESI = (pop32());
  /* 10842b1f pop ebx */
  EBX = (pop32());
  /* 10842b20 pop ebp */
  EBP = (pop32());
  /* 10842b21 ret  */
  ESPCHK(0x10842a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b30 @ 0x10842b30 (289 bytes, 97 insns) */
void f_10842b30(void) {
  FTRACE(0x10842b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10842b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10842b31 mov ebp, esp */
  EBP = (ESP);
  /* 10842b33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10842b36 push esi */
  push32((uint32_t)(ESI));
  /* 10842b37 mov eax, dword ptr [0x10860c98] */
  EAX = (r32((uint32_t)(0x10860c98)));
  /* 10842b3c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10842b3f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10842b46 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10842b4d jmp 0x10842b58 */
  goto L_10842b58;
L_10842b4f:;
  /* 10842b4f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842b52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842b55 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10842b58:;
  /* 10842b58 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842b5c jae 0x10842b91 */
  if (!C.cf) goto L_10842b91;
  /* 10842b5e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842b61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842b64 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10842b67 push ecx */
  push32((uint32_t)(ECX));
  /* 10842b68 call 0x10838c10 */
  push32(0x10842b6du); f_10838c10();
  /* 10842b6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842b70 mov esi, eax */
  ESI = (EAX);
  /* 10842b72 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842b75 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842b78 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10842b7c push ecx */
  push32((uint32_t)(ECX));
  /* 10842b7d call 0x10838c10 */
  push32(0x10842b82u); f_10838c10();
  /* 10842b82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842b85 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842b88 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10842b8c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10842b8f jmp 0x10842b4f */
  goto L_10842b4f;
L_10842b91:;
  /* 10842b91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10842b94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842b97 push eax */
  push32((uint32_t)(EAX));
  /* 10842b98 call 0x10835dc0 */
  push32(0x10842b9du); f_10835dc0();
  /* 10842b9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842ba0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10842ba3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842ba7 je 0x10842c49 */
  if (C.zf) goto L_10842c49;
  /* 10842bad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10842bb0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10842bb3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10842bba jmp 0x10842bc5 */
  goto L_10842bc5;
L_10842bbc:;
  /* 10842bbc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842bbf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842bc2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10842bc5:;
  /* 10842bc5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842bc9 jae 0x10842c3a */
  if (!C.cf) goto L_10842c3a;
  /* 10842bcb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842bce mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10842bd1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842bd4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842bd7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10842bda mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842bdd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842be0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10842be3 push ecx */
  push32((uint32_t)(ECX));
  /* 10842be4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842be7 push edx */
  push32((uint32_t)(EDX));
  /* 10842be8 call 0x10838d90 */
  push32(0x10842bedu); f_10838d90();
  /* 10842bed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842bf0 push eax */
  push32((uint32_t)(EAX));
  /* 10842bf1 call 0x10838c10 */
  push32(0x10842bf6u); f_10838c10();
  /* 10842bf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842bf9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842bfc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842bfe mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10842c01 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842c04 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10842c07 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842c0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842c0d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10842c10 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842c13 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842c16 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10842c1a push eax */
  push32((uint32_t)(EAX));
  /* 10842c1b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842c1e push ecx */
  push32((uint32_t)(ECX));
  /* 10842c1f call 0x10838d90 */
  push32(0x10842c24u); f_10838d90();
  /* 10842c24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842c27 push eax */
  push32((uint32_t)(EAX));
  /* 10842c28 call 0x10838c10 */
  push32(0x10842c2du); f_10838c10();
  /* 10842c2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842c30 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842c33 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842c35 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10842c38 jmp 0x10842bbc */
  goto L_10842bbc;
L_10842c3a:;
  /* 10842c3a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842c3d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10842c40 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842c43 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842c46 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10842c49:;
  /* 10842c49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10842c4c pop esi */
  ESI = (pop32());
  /* 10842c4d mov esp, ebp */
  ESP = (EBP);
  /* 10842c4f pop ebp */
  EBP = (pop32());
  /* 10842c50 ret  */
  ESPCHK(0x10842b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c60 @ 0x10842c60 (291 bytes, 97 insns) */
void f_10842c60(void) {
  FTRACE(0x10842c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10842c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10842c61 mov ebp, esp */
  EBP = (ESP);
  /* 10842c63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10842c66 push esi */
  push32((uint32_t)(ESI));
  /* 10842c67 mov eax, dword ptr [0x10860c98] */
  EAX = (r32((uint32_t)(0x10860c98)));
  /* 10842c6c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10842c6f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10842c76 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10842c7d jmp 0x10842c88 */
  goto L_10842c88;
L_10842c7f:;
  /* 10842c7f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842c82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842c85 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10842c88:;
  /* 10842c88 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842c8c jae 0x10842cc2 */
  if (!C.cf) goto L_10842cc2;
  /* 10842c8e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842c91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842c94 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10842c98 push ecx */
  push32((uint32_t)(ECX));
  /* 10842c99 call 0x10838c10 */
  push32(0x10842c9eu); f_10838c10();
  /* 10842c9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842ca1 mov esi, eax */
  ESI = (EAX);
  /* 10842ca3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842ca6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842ca9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10842cad push ecx */
  push32((uint32_t)(ECX));
  /* 10842cae call 0x10838c10 */
  push32(0x10842cb3u); f_10838c10();
  /* 10842cb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842cb6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842cb9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10842cbd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10842cc0 jmp 0x10842c7f */
  goto L_10842c7f;
L_10842cc2:;
  /* 10842cc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10842cc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842cc8 push eax */
  push32((uint32_t)(EAX));
  /* 10842cc9 call 0x10835dc0 */
  push32(0x10842cceu); f_10835dc0();
  /* 10842cce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842cd1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10842cd4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842cd8 je 0x10842d7b */
  if (C.zf) goto L_10842d7b;
  /* 10842cde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10842ce1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10842ce4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10842ceb jmp 0x10842cf6 */
  goto L_10842cf6;
L_10842ced:;
  /* 10842ced mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842cf0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842cf3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10842cf6:;
  /* 10842cf6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842cfa jae 0x10842d6c */
  if (!C.cf) goto L_10842d6c;
  /* 10842cfc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842cff mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10842d02 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842d05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842d08 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10842d0b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842d0e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842d11 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10842d15 push ecx */
  push32((uint32_t)(ECX));
  /* 10842d16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842d19 push edx */
  push32((uint32_t)(EDX));
  /* 10842d1a call 0x10838d90 */
  push32(0x10842d1fu); f_10838d90();
  /* 10842d1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842d22 push eax */
  push32((uint32_t)(EAX));
  /* 10842d23 call 0x10838c10 */
  push32(0x10842d28u); f_10838c10();
  /* 10842d28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842d2b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842d2e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842d30 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10842d33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842d36 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10842d39 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842d3c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842d3f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10842d42 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842d45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842d48 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10842d4c push eax */
  push32((uint32_t)(EAX));
  /* 10842d4d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842d50 push ecx */
  push32((uint32_t)(ECX));
  /* 10842d51 call 0x10838d90 */
  push32(0x10842d56u); f_10838d90();
  /* 10842d56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842d59 push eax */
  push32((uint32_t)(EAX));
  /* 10842d5a call 0x10838c10 */
  push32(0x10842d5fu); f_10838c10();
  /* 10842d5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842d62 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842d65 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842d67 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10842d6a jmp 0x10842ced */
  goto L_10842ced;
L_10842d6c:;
  /* 10842d6c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842d6f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10842d72 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842d75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842d78 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10842d7b:;
  /* 10842d7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10842d7e pop esi */
  ESI = (pop32());
  /* 10842d7f mov esp, ebp */
  ESP = (EBP);
  /* 10842d81 pop ebp */
  EBP = (pop32());
  /* 10842d82 ret  */
  ESPCHK(0x10842c60u, _esp0);
  ESP += 4; return;
}

