#include "recomp.h"

/* FUN_10007f10 @ 0x108b7f10 (116 bytes, 34 insns) */
void f_108b7f10(void) {
  FTRACE(0x108b7f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7f10 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7f11 mov ebp, esp */
  EBP = (ESP);
  /* 108b7f13 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7f14 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 108b7f1b push 9 */
  push32((uint32_t)(0x9u));
  /* 108b7f1d call 0x108b7730 */
  push32(0x108b7f22u); f_108b7730();
  /* 108b7f22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7f25 call 0x108b9620 */
  push32(0x108b7f2au); f_108b9620();
  /* 108b7f2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b7f2c jge 0x108b7f35 */
  if ((C.sf==C.of)) goto L_108b7f35;
  /* 108b7f2e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_108b7f35:;
  /* 108b7f35 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b7f37 call 0x108b77d0 */
  push32(0x108b7f3cu); f_108b77d0();
  /* 108b7f3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7f3f push 0 */
  push32((uint32_t)(0x0u));
  /* 108b7f41 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b7f43 mov eax, dword ptr [0x108e0f0c] */
  EAX = (r32((uint32_t)(0x108e0f0c)));
  /* 108b7f48 push eax */
  push32((uint32_t)(EAX));
  /* 108b7f49 call dword ptr [0x108e237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e237c))), 0x108b7f4fu);
  /* 108b7f4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b7f51 jne 0x108b7f7d */
  if (!C.zf) goto L_108b7f7d;
  /* 108b7f53 call dword ptr [0x108e228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e228c))), 0x108b7f59u);
  /* 108b7f59 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7f5c jne 0x108b7f76 */
  if (!C.zf) goto L_108b7f76;
  /* 108b7f5e call 0x108bbc10 */
  push32(0x108b7f63u); f_108bbc10();
  /* 108b7f63 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 108b7f69 call 0x108bbc00 */
  push32(0x108b7f6eu); f_108bbc00();
  /* 108b7f6e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 108b7f74 jmp 0x108b7f7d */
  goto L_108b7f7d;
L_108b7f76:;
  /* 108b7f76 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_108b7f7d:;
  /* 108b7f7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7f80 mov esp, ebp */
  ESP = (EBP);
  /* 108b7f82 pop ebp */
  EBP = (pop32());
  /* 108b7f83 ret  */
  ESPCHK(0x108b7f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f90 @ 0x108b7f90 (10 bytes, 5 insns) */
void f_108b7f90(void) {
  FTRACE(0x108b7f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7f90 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7f91 mov ebp, esp */
  EBP = (ESP);
  /* 108b7f93 call 0x108b7f10 */
  push32(0x108b7f98u); f_108b7f10();
  /* 108b7f98 pop ebp */
  EBP = (pop32());
  /* 108b7f99 ret  */
  ESPCHK(0x108b7f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa0 @ 0x108b7fa0 (10 bytes, 5 insns) */
void f_108b7fa0(void) {
  FTRACE(0x108b7fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7fa1 mov ebp, esp */
  EBP = (ESP);
  /* 108b7fa3 mov eax, dword ptr [0x108ddc94] */
  EAX = (r32((uint32_t)(0x108ddc94)));
  /* 108b7fa8 pop ebp */
  EBP = (pop32());
  /* 108b7fa9 ret  */
  ESPCHK(0x108b7fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fb0 @ 0x108b7fb0 (31 bytes, 11 insns) */
void f_108b7fb0(void) {
  FTRACE(0x108b7fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7fb1 mov ebp, esp */
  EBP = (ESP);
  /* 108b7fb3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7fba jbe 0x108b7fc0 */
  if ((C.cf||C.zf)) goto L_108b7fc0;
  /* 108b7fbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b7fbe jmp 0x108b7fcd */
  goto L_108b7fcd;
L_108b7fc0:;
  /* 108b7fc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7fc3 mov dword ptr [0x108ddc94], eax */
  w32((uint32_t)(0x108ddc94), (EAX));
  /* 108b7fc8 mov eax, 1 */
  EAX = (0x1u);
L_108b7fcd:;
  /* 108b7fcd pop ebp */
  EBP = (pop32());
  /* 108b7fce ret  */
  ESPCHK(0x108b7fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fd0 @ 0x108b7fd0 (89 bytes, 20 insns) */
void f_108b7fd0(void) {
  FTRACE(0x108b7fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7fd1 mov ebp, esp */
  EBP = (ESP);
  /* 108b7fd3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 108b7fd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b7fda mov eax, dword ptr [0x108e0f0c] */
  EAX = (r32((uint32_t)(0x108e0f0c)));
  /* 108b7fdf push eax */
  push32((uint32_t)(EAX));
  /* 108b7fe0 call dword ptr [0x108e22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22f8))), 0x108b7fe6u);
  /* 108b7fe6 mov dword ptr [0x108e0f08], eax */
  w32((uint32_t)(0x108e0f08), (EAX));
  /* 108b7feb cmp dword ptr [0x108e0f08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108e0f08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7ff2 jne 0x108b7ff8 */
  if (!C.zf) goto L_108b7ff8;
  /* 108b7ff4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b7ff6 jmp 0x108b8027 */
  goto L_108b8027;
L_108b7ff8:;
  /* 108b7ff8 mov ecx, dword ptr [0x108e0f08] */
  ECX = (r32((uint32_t)(0x108e0f08)));
  /* 108b7ffe mov dword ptr [0x108e0efc], ecx */
  w32((uint32_t)(0x108e0efc), (ECX));
  /* 108b8004 mov dword ptr [0x108e0f00], 0 */
  w32((uint32_t)(0x108e0f00), (0x0u));
  /* 108b800e mov dword ptr [0x108e0f04], 0 */
  w32((uint32_t)(0x108e0f04), (0x0u));
  /* 108b8018 mov dword ptr [0x108e0ee8], 0x10 */
  w32((uint32_t)(0x108e0ee8), (0x10u));
  /* 108b8022 mov eax, 1 */
  EAX = (0x1u);
L_108b8027:;
  /* 108b8027 pop ebp */
  EBP = (pop32());
  /* 108b8028 ret  */
  ESPCHK(0x108b7fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008030 @ 0x108b8030 (85 bytes, 29 insns) */
void f_108b8030(void) {
  FTRACE(0x108b8030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b8030 push ebp */
  push32((uint32_t)(EBP));
  /* 108b8031 mov ebp, esp */
  EBP = (ESP);
  /* 108b8033 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8036 mov eax, dword ptr [0x108e0f04] */
  EAX = (r32((uint32_t)(0x108e0f04)));
  /* 108b803b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b803e mov ecx, dword ptr [0x108e0f08] */
  ECX = (r32((uint32_t)(0x108e0f08)));
  /* 108b8044 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8046 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108b8049 mov edx, dword ptr [0x108e0f08] */
  EDX = (r32((uint32_t)(0x108e0f08)));
  /* 108b804f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108b8052:;
  /* 108b8052 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b8055 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8058 jae 0x108b807f */
  if (!C.cf) goto L_108b807f;
  /* 108b805a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b805d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b8060 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8063 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b8066 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b806d jae 0x108b8074 */
  if (!C.cf) goto L_108b8074;
  /* 108b806f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b8072 jmp 0x108b8081 */
  goto L_108b8081;
L_108b8074:;
  /* 108b8074 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b8077 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b807a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b807d jmp 0x108b8052 */
  goto L_108b8052;
L_108b807f:;
  /* 108b807f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108b8081:;
  /* 108b8081 mov esp, ebp */
  ESP = (EBP);
  /* 108b8083 pop ebp */
  EBP = (pop32());
  /* 108b8084 ret  */
  ESPCHK(0x108b8030u, _esp0);
  ESP += 4; return;
}

/* FUN_10008090 @ 0x108b8090 (95 bytes, 33 insns) */
void f_108b8090(void) {
  FTRACE(0x108b8090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b8090 push ebp */
  push32((uint32_t)(EBP));
  /* 108b8091 mov ebp, esp */
  EBP = (ESP);
  /* 108b8093 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b8099 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b809c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b809f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108b80a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b80a5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 108b80a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b80ab mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b80b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b80b3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b80b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b80b8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108b80bb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108b80bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b80bf jne 0x108b80e1 */
  if (!C.zf) goto L_108b80e1;
  /* 108b80c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b80c4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 108b80c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b80c9 jne 0x108b80e1 */
  if (!C.zf) goto L_108b80e1;
  /* 108b80cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b80ce and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b80d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b80d6 je 0x108b80e1 */
  if (C.zf) goto L_108b80e1;
  /* 108b80d8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 108b80df jmp 0x108b80e8 */
  goto L_108b80e8;
L_108b80e1:;
  /* 108b80e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_108b80e8:;
  /* 108b80e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b80eb mov esp, ebp */
  ESP = (EBP);
  /* 108b80ed pop ebp */
  EBP = (pop32());
  /* 108b80ee ret  */
  ESPCHK(0x108b8090u, _esp0);
  ESP += 4; return;
}

/* FUN_100080f0 @ 0x108b80f0 (1485 bytes, 453 insns) */
void f_108b80f0(void) {
  FTRACE(0x108b80f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b80f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b80f1 mov ebp, esp */
  EBP = (ESP);
  /* 108b80f3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b80f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b80f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108b80fc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 108b80ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b8102 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b8105 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8108 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108b810b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b810e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 108b8111 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108b8114 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8117 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b811d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b8120 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 108b8127 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108b812a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b812d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8130 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108b8133 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b8136 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b8138 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b813b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 108b813e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b8141 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8144 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 108b8147 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b814a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b814c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108b814f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b8152 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 108b8155 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108b8158 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b815b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108b815e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b8160 jne 0x108b8288 */
  if (!C.zf) goto L_108b8288;
  /* 108b8166 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b8169 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 108b816c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b816f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 108b8172 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8176 jbe 0x108b817f */
  if ((C.cf||C.zf)) goto L_108b817f;
  /* 108b8178 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_108b817f:;
  /* 108b817f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8182 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8185 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b8188 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b818b jne 0x108b8261 */
  if (!C.zf) goto L_108b8261;
  /* 108b8191 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8195 jae 0x108b81f6 */
  if (!C.cf) goto L_108b81f6;
  /* 108b8197 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b819c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b819f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b81a1 not eax */
  EAX = (~(EAX));
  /* 108b81a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b81a6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b81a9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 108b81ad and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108b81af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b81b2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b81b5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 108b81b9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b81bc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b81bf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 108b81c2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108b81c5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b81c8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b81cb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 108b81ce mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b81d1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b81d4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108b81d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b81da jne 0x108b81f4 */
  if (!C.zf) goto L_108b81f4;
  /* 108b81dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b81e1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b81e4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b81e6 not eax */
  EAX = (~(EAX));
  /* 108b81e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b81eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b81ed and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108b81ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b81f2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_108b81f4:;
  /* 108b81f4 jmp 0x108b8261 */
  goto L_108b8261;
L_108b81f6:;
  /* 108b81f6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b81f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b81fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b8201 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b8203 not edx */
  EDX = (~(EDX));
  /* 108b8205 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8208 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b820b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 108b8212 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108b8214 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8217 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b821a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 108b8221 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b8224 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8227 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108b822a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108b822d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b8230 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8233 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 108b8236 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b8239 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b823c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 108b8240 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b8242 jne 0x108b8261 */
  if (!C.zf) goto L_108b8261;
  /* 108b8244 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b8247 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b824a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b824f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b8251 not edx */
  EDX = (~(EDX));
  /* 108b8253 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b8256 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b8259 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108b825b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b825e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_108b8261:;
  /* 108b8261 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8264 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108b8267 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b826a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108b826d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 108b8270 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8273 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b8276 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8279 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108b827c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 108b827f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b8282 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8285 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_108b8288:;
  /* 108b8288 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b828b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 108b828e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8291 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108b8294 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8298 jbe 0x108b82a1 */
  if ((C.cf||C.zf)) goto L_108b82a1;
  /* 108b829a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_108b82a1:;
  /* 108b82a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b82a4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108b82a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b82a9 jne 0x108b8405 */
  if (!C.zf) goto L_108b8405;
  /* 108b82af mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b82b2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b82b5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 108b82b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b82bb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 108b82be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b82c1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 108b82c4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b82c8 jbe 0x108b82d1 */
  if ((C.cf||C.zf)) goto L_108b82d1;
  /* 108b82ca mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_108b82d1:;
  /* 108b82d1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b82d4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b82d7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 108b82da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b82dd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 108b82e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b82e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 108b82e6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b82ea jbe 0x108b82f3 */
  if ((C.cf||C.zf)) goto L_108b82f3;
  /* 108b82ec mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_108b82f3:;
  /* 108b82f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b82f6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b82f9 je 0x108b83ff */
  if (C.zf) goto L_108b83ff;
  /* 108b82ff mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 108b8302 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 108b8305 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b8308 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b830b jne 0x108b83e1 */
  if (!C.zf) goto L_108b83e1;
  /* 108b8311 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8315 jae 0x108b8376 */
  if (!C.cf) goto L_108b8376;
  /* 108b8317 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b831c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b831f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b8321 not edx */
  EDX = (~(EDX));
  /* 108b8323 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8326 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b8329 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 108b832d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108b832f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8332 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b8335 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 108b8339 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b833c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b833f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108b8342 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108b8345 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b8348 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b834b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 108b834e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b8351 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8354 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 108b8358 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b835a jne 0x108b8374 */
  if (!C.zf) goto L_108b8374;
  /* 108b835c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b8361 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b8364 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b8366 not edx */
  EDX = (~(EDX));
  /* 108b8368 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b836b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b836d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108b836f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b8372 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108b8374:;
  /* 108b8374 jmp 0x108b83e1 */
  goto L_108b83e1;
L_108b8376:;
  /* 108b8376 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b8379 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b837c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b8381 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b8383 not eax */
  EAX = (~(EAX));
  /* 108b8385 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8388 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b838b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 108b8392 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108b8394 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8397 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b839a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 108b83a1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b83a4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b83a7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 108b83aa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108b83ad mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b83b0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b83b3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 108b83b6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b83b9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b83bc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108b83c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b83c2 jne 0x108b83e1 */
  if (!C.zf) goto L_108b83e1;
  /* 108b83c4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b83c7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b83ca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b83cf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b83d1 not eax */
  EAX = (~(EAX));
  /* 108b83d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b83d6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b83d9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108b83db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b83de mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_108b83e1:;
  /* 108b83e1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 108b83e4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108b83e7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 108b83ea mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b83ed mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 108b83f0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 108b83f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108b83f6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 108b83f9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108b83fc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_108b83ff:;
  /* 108b83ff mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 108b8402 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_108b8405:;
  /* 108b8405 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b8408 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108b840b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b840d jne 0x108b841b */
  if (!C.zf) goto L_108b841b;
  /* 108b840f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b8412 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8415 je 0x108b852b */
  if (C.zf) goto L_108b852b;
L_108b841b:;
  /* 108b841b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b841e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b8421 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 108b8424 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 108b8427 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b842a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b842d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b8430 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108b8433 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b8436 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b8439 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 108b843c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b843f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b8442 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 108b8445 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b8448 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b844b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b844e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108b8451 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b8454 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b8457 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b845a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b845d jne 0x108b852b */
  if (!C.zf) goto L_108b852b;
  /* 108b8463 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8467 jae 0x108b84c4 */
  if (!C.cf) goto L_108b84c4;
  /* 108b8469 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b846c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b846f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108b8473 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b8476 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8479 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108b847c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 108b847f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b8482 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8485 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 108b8488 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b848a jne 0x108b84a2 */
  if (!C.zf) goto L_108b84a2;
  /* 108b848c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b8491 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b8494 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b8496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b8499 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b849b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108b849d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b84a0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108b84a2:;
  /* 108b84a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b84a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b84aa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b84ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b84af mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b84b2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 108b84b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108b84b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b84bb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b84be mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 108b84c2 jmp 0x108b852b */
  goto L_108b852b;
L_108b84c4:;
  /* 108b84c4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b84c7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b84ca movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108b84ce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b84d1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b84d4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108b84d7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 108b84da mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b84dd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b84e0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 108b84e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b84e5 jne 0x108b8502 */
  if (!C.zf) goto L_108b8502;
  /* 108b84e7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b84ea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b84ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b84f2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b84f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b84f7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b84fa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108b84fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b84ff mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_108b8502:;
  /* 108b8502 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b8505 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8508 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b850d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b850f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8512 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b8515 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 108b851c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108b851e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8521 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 108b8524 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_108b852b:;
  /* 108b852b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b852e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b8531 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 108b8533 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b8536 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8539 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b853c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 108b853f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b8542 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b8544 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8547 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b854a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108b854c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b854f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8552 jne 0x108b86b9 */
  if (!C.zf) goto L_108b86b9;
  /* 108b8558 cmp dword ptr [0x108e0f00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108e0f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b855f je 0x108b86a8 */
  if (C.zf) goto L_108b86a8;
  /* 108b8565 mov eax, dword ptr [0x108e0ef8] */
  EAX = (r32((uint32_t)(0x108e0ef8)));
  /* 108b856a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 108b856d mov ecx, dword ptr [0x108e0f00] */
  ECX = (r32((uint32_t)(0x108e0f00)));
  /* 108b8573 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108b8576 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8578 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108b857b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 108b8580 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 108b8585 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8588 push eax */
  push32((uint32_t)(EAX));
  /* 108b8589 call dword ptr [0x108e239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e239c))), 0x108b858fu);
  /* 108b858f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b8594 mov ecx, dword ptr [0x108e0ef8] */
  ECX = (r32((uint32_t)(0x108e0ef8)));
  /* 108b859a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b859c mov eax, dword ptr [0x108e0f00] */
  EAX = (r32((uint32_t)(0x108e0f00)));
  /* 108b85a1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108b85a4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108b85a6 mov edx, dword ptr [0x108e0f00] */
  EDX = (r32((uint32_t)(0x108e0f00)));
  /* 108b85ac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 108b85af mov eax, dword ptr [0x108e0f00] */
  EAX = (r32((uint32_t)(0x108e0f00)));
  /* 108b85b4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108b85b7 mov edx, dword ptr [0x108e0ef8] */
  EDX = (r32((uint32_t)(0x108e0ef8)));
  /* 108b85bd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 108b85c8 mov eax, dword ptr [0x108e0f00] */
  EAX = (r32((uint32_t)(0x108e0f00)));
  /* 108b85cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108b85d0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 108b85d3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108b85d6 mov eax, dword ptr [0x108e0f00] */
  EAX = (r32((uint32_t)(0x108e0f00)));
  /* 108b85db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108b85de mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 108b85e1 mov edx, dword ptr [0x108e0f00] */
  EDX = (r32((uint32_t)(0x108e0f00)));
  /* 108b85e7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108b85ea movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 108b85ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b85f0 jne 0x108b8606 */
  if (!C.zf) goto L_108b8606;
  /* 108b85f2 mov edx, dword ptr [0x108e0f00] */
  EDX = (r32((uint32_t)(0x108e0f00)));
  /* 108b85f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108b85fb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 108b85fd mov ecx, dword ptr [0x108e0f00] */
  ECX = (r32((uint32_t)(0x108e0f00)));
  /* 108b8603 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_108b8606:;
  /* 108b8606 mov edx, dword ptr [0x108e0f00] */
  EDX = (r32((uint32_t)(0x108e0f00)));
  /* 108b860c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8610 jne 0x108b86a8 */
  if (!C.zf) goto L_108b86a8;
  /* 108b8616 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 108b861b push 0 */
  push32((uint32_t)(0x0u));
  /* 108b861d mov eax, dword ptr [0x108e0f00] */
  EAX = (r32((uint32_t)(0x108e0f00)));
  /* 108b8622 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108b8625 push ecx */
  push32((uint32_t)(ECX));
  /* 108b8626 call dword ptr [0x108e239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e239c))), 0x108b862cu);
  /* 108b862c mov edx, dword ptr [0x108e0f00] */
  EDX = (r32((uint32_t)(0x108e0f00)));
  /* 108b8632 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108b8635 push eax */
  push32((uint32_t)(EAX));
  /* 108b8636 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b8638 mov ecx, dword ptr [0x108e0f0c] */
  ECX = (r32((uint32_t)(0x108e0f0c)));
  /* 108b863e push ecx */
  push32((uint32_t)(ECX));
  /* 108b863f call dword ptr [0x108e2398] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2398))), 0x108b8645u);
  /* 108b8645 mov edx, dword ptr [0x108e0f04] */
  EDX = (r32((uint32_t)(0x108e0f04)));
  /* 108b864b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b864e mov eax, dword ptr [0x108e0f08] */
  EAX = (r32((uint32_t)(0x108e0f08)));
  /* 108b8653 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8655 mov ecx, dword ptr [0x108e0f00] */
  ECX = (r32((uint32_t)(0x108e0f00)));
  /* 108b865b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b865e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8660 push eax */
  push32((uint32_t)(EAX));
  /* 108b8661 mov edx, dword ptr [0x108e0f00] */
  EDX = (r32((uint32_t)(0x108e0f00)));
  /* 108b8667 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b866a push edx */
  push32((uint32_t)(EDX));
  /* 108b866b mov eax, dword ptr [0x108e0f00] */
  EAX = (r32((uint32_t)(0x108e0f00)));
  /* 108b8670 push eax */
  push32((uint32_t)(EAX));
  /* 108b8671 call 0x108bbc20 */
  push32(0x108b8676u); f_108bbc20();
  /* 108b8676 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8679 mov ecx, dword ptr [0x108e0f04] */
  ECX = (r32((uint32_t)(0x108e0f04)));
  /* 108b867f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8682 mov dword ptr [0x108e0f04], ecx */
  w32((uint32_t)(0x108e0f04), (ECX));
  /* 108b8688 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b868b cmp edx, dword ptr [0x108e0f00] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x108e0f00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8691 jbe 0x108b869c */
  if ((C.cf||C.zf)) goto L_108b869c;
  /* 108b8693 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b8696 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8699 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_108b869c:;
  /* 108b869c mov ecx, dword ptr [0x108e0f08] */
  ECX = (r32((uint32_t)(0x108e0f08)));
  /* 108b86a2 mov dword ptr [0x108e0efc], ecx */
  w32((uint32_t)(0x108e0efc), (ECX));
L_108b86a8:;
  /* 108b86a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b86ab mov dword ptr [0x108e0f00], edx */
  w32((uint32_t)(0x108e0f00), (EDX));
  /* 108b86b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b86b4 mov dword ptr [0x108e0ef8], eax */
  w32((uint32_t)(0x108e0ef8), (EAX));
L_108b86b9:;
  /* 108b86b9 mov esp, ebp */
  ESP = (EBP);
  /* 108b86bb pop ebp */
  EBP = (pop32());
  /* 108b86bc ret  */
  ESPCHK(0x108b80f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100086c0 @ 0x108b86c0 (1334 bytes, 427 insns) */
void f_108b86c0(void) {
  FTRACE(0x108b86c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b86c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b86c1 mov ebp, esp */
  EBP = (ESP);
  /* 108b86c3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b86c6 push esi */
  push32((uint32_t)(ESI));
  /* 108b86c7 mov eax, dword ptr [0x108e0f04] */
  EAX = (r32((uint32_t)(0x108e0f04)));
  /* 108b86cc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b86cf mov ecx, dword ptr [0x108e0f08] */
  ECX = (r32((uint32_t)(0x108e0f08)));
  /* 108b86d5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b86d7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 108b86da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b86dd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b86e0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 108b86e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 108b86e6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b86e9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 108b86ec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b86ef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108b86f2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b86f6 jge 0x108b870c */
  if ((C.sf==C.of)) goto L_108b870c;
  /* 108b86f8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108b86fb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b86fe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b8700 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 108b8703 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 108b870a jmp 0x108b8721 */
  goto L_108b8721;
L_108b870c:;
  /* 108b870c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 108b8713 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b8716 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8719 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b871c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b871e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_108b8721:;
  /* 108b8721 mov ecx, dword ptr [0x108e0efc] */
  ECX = (r32((uint32_t)(0x108e0efc)));
  /* 108b8727 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_108b872a:;
  /* 108b872a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b872d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8730 jae 0x108b8756 */
  if (!C.cf) goto L_108b8756;
  /* 108b8732 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8735 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b8738 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 108b873a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b873d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 108b8740 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 108b8743 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108b8745 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b8747 je 0x108b874b */
  if (C.zf) goto L_108b874b;
  /* 108b8749 jmp 0x108b8756 */
  goto L_108b8756;
L_108b874b:;
  /* 108b874b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b874e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8751 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 108b8754 jmp 0x108b872a */
  goto L_108b872a;
L_108b8756:;
  /* 108b8756 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8759 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b875c jne 0x108b883d */
  if (!C.zf) goto L_108b883d;
  /* 108b8762 mov eax, dword ptr [0x108e0f08] */
  EAX = (r32((uint32_t)(0x108e0f08)));
  /* 108b8767 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_108b876a:;
  /* 108b876a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b876d cmp ecx, dword ptr [0x108e0efc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108e0efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8773 jae 0x108b8799 */
  if (!C.cf) goto L_108b8799;
  /* 108b8775 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8778 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b877b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 108b877d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8780 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 108b8783 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 108b8786 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108b8788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b878a je 0x108b878e */
  if (C.zf) goto L_108b878e;
  /* 108b878c jmp 0x108b8799 */
  goto L_108b8799;
L_108b878e:;
  /* 108b878e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8791 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8794 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108b8797 jmp 0x108b876a */
  goto L_108b876a;
L_108b8799:;
  /* 108b8799 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b879c cmp ecx, dword ptr [0x108e0efc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108e0efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b87a2 jne 0x108b883d */
  if (!C.zf) goto L_108b883d;
L_108b87a8:;
  /* 108b87a8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b87ab cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b87ae jae 0x108b87c6 */
  if (!C.cf) goto L_108b87c6;
  /* 108b87b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b87b3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b87b7 je 0x108b87bb */
  if (C.zf) goto L_108b87bb;
  /* 108b87b9 jmp 0x108b87c6 */
  goto L_108b87c6;
L_108b87bb:;
  /* 108b87bb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b87be add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b87c1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 108b87c4 jmp 0x108b87a8 */
  goto L_108b87a8;
L_108b87c6:;
  /* 108b87c6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b87c9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b87cc jne 0x108b8817 */
  if (!C.zf) goto L_108b8817;
  /* 108b87ce mov eax, dword ptr [0x108e0f08] */
  EAX = (r32((uint32_t)(0x108e0f08)));
  /* 108b87d3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_108b87d6:;
  /* 108b87d6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b87d9 cmp ecx, dword ptr [0x108e0efc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108e0efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b87df jae 0x108b87f7 */
  if (!C.cf) goto L_108b87f7;
  /* 108b87e1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b87e4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b87e8 je 0x108b87ec */
  if (C.zf) goto L_108b87ec;
  /* 108b87ea jmp 0x108b87f7 */
  goto L_108b87f7;
L_108b87ec:;
  /* 108b87ec mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b87ef add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b87f2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108b87f5 jmp 0x108b87d6 */
  goto L_108b87d6;
L_108b87f7:;
  /* 108b87f7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b87fa cmp ecx, dword ptr [0x108e0efc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108e0efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8800 jne 0x108b8817 */
  if (!C.zf) goto L_108b8817;
  /* 108b8802 call 0x108b8c00 */
  push32(0x108b8807u); f_108b8c00();
  /* 108b8807 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108b880a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b880e jne 0x108b8817 */
  if (!C.zf) goto L_108b8817;
  /* 108b8810 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b8812 jmp 0x108b8bf1 */
  goto L_108b8bf1;
L_108b8817:;
  /* 108b8817 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b881a push edx */
  push32((uint32_t)(EDX));
  /* 108b881b call 0x108b8d10 */
  push32(0x108b8820u); f_108b8d10();
  /* 108b8820 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8823 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8826 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 108b8829 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 108b882b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b882e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108b8831 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8834 jne 0x108b883d */
  if (!C.zf) goto L_108b883d;
  /* 108b8836 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b8838 jmp 0x108b8bf1 */
  goto L_108b8bf1;
L_108b883d:;
  /* 108b883d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8840 mov dword ptr [0x108e0efc], edx */
  w32((uint32_t)(0x108e0efc), (EDX));
  /* 108b8846 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8849 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108b884c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 108b884f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8852 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b8854 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 108b8857 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b885b je 0x108b8880 */
  if (C.zf) goto L_108b8880;
  /* 108b885d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b8860 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8863 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b8866 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 108b886a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b886d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8870 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 108b8873 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 108b887a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 108b887c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b887e jne 0x108b88b5 */
  if (!C.zf) goto L_108b88b5;
L_108b8880:;
  /* 108b8880 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_108b8887:;
  /* 108b8887 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b888a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b888d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b8890 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 108b8894 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b8897 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b889a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 108b889d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 108b88a4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 108b88a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b88a8 jne 0x108b88b5 */
  if (!C.zf) goto L_108b88b5;
  /* 108b88aa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b88ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b88b0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 108b88b3 jmp 0x108b8887 */
  goto L_108b8887;
L_108b88b5:;
  /* 108b88b5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b88b8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b88be mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b88c1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 108b88c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b88cb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 108b88d2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b88d5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b88d8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b88db and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 108b88df mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108b88e2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b88e6 jne 0x108b8902 */
  if (!C.zf) goto L_108b8902;
  /* 108b88e8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 108b88ef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b88f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b88f5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 108b88f8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 108b88ff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_108b8902:;
  /* 108b8902 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8906 jl 0x108b891b */
  if ((C.sf!=C.of)) goto L_108b891b;
  /* 108b8908 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b890b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108b890d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 108b8910 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b8913 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8916 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 108b8919 jmp 0x108b8902 */
  goto L_108b8902;
L_108b891b:;
  /* 108b891b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b891e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8921 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 108b8925 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108b8928 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b892b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b892d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8930 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b8933 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b8936 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 108b8939 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b893c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108b893f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8943 jle 0x108b894c */
  if ((C.zf||C.sf!=C.of)) goto L_108b894c;
  /* 108b8945 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_108b894c:;
  /* 108b894c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b894f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8952 je 0x108b8b70 */
  if (C.zf) goto L_108b8b70;
  /* 108b8958 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b895b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b895e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b8961 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8964 jne 0x108b8a3a */
  if (!C.zf) goto L_108b8a3a;
  /* 108b896a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b896e jge 0x108b89cf */
  if ((C.sf==C.of)) goto L_108b89cf;
  /* 108b8970 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b8975 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b8978 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b897a not eax */
  EAX = (~(EAX));
  /* 108b897c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b897f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8982 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 108b8986 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108b8988 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b898b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b898e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 108b8992 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8995 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8998 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 108b899b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108b899e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b89a1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b89a4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 108b89a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b89aa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b89ad movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108b89b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b89b3 jne 0x108b89cd */
  if (!C.zf) goto L_108b89cd;
  /* 108b89b5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b89ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b89bd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b89bf not eax */
  EAX = (~(EAX));
  /* 108b89c1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b89c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b89c6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108b89c8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b89cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_108b89cd:;
  /* 108b89cd jmp 0x108b8a3a */
  goto L_108b8a3a;
L_108b89cf:;
  /* 108b89cf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b89d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b89d5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b89da shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b89dc not edx */
  EDX = (~(EDX));
  /* 108b89de mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b89e1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b89e4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 108b89eb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108b89ed mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b89f0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b89f3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 108b89fa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b89fd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8a00 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108b8a03 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108b8a06 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8a09 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8a0c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 108b8a0f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8a12 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8a15 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 108b8a19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b8a1b jne 0x108b8a3a */
  if (!C.zf) goto L_108b8a3a;
  /* 108b8a1d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b8a20 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8a23 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b8a28 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b8a2a not edx */
  EDX = (~(EDX));
  /* 108b8a2c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8a2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b8a32 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108b8a34 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8a37 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_108b8a3a:;
  /* 108b8a3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8a3d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108b8a40 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8a43 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108b8a46 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 108b8a49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8a4c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b8a4f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8a52 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108b8a55 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 108b8a58 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8a5c je 0x108b8b70 */
  if (C.zf) goto L_108b8b70;
  /* 108b8a62 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b8a65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8a68 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 108b8a6b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108b8a6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8a71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b8a74 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b8a77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 108b8a7a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8a7d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b8a80 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108b8a83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b8a86 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8a89 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 108b8a8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8a8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b8a92 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8a95 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 108b8a98 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8a9b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8a9e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b8aa1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8aa4 jne 0x108b8b70 */
  if (!C.zf) goto L_108b8b70;
  /* 108b8aaa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8aae jge 0x108b8b0a */
  if ((C.sf==C.of)) goto L_108b8b0a;
  /* 108b8ab0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8ab3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8ab6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 108b8aba mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8abd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8ac0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 108b8ac3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108b8ac5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8ac8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8acb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 108b8ace test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b8ad0 jne 0x108b8ae8 */
  if (!C.zf) goto L_108b8ae8;
  /* 108b8ad2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b8ad7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b8ada shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b8adc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8adf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b8ae1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108b8ae3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8ae6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_108b8ae8:;
  /* 108b8ae8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b8aed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b8af0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b8af2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b8af5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8af8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 108b8afc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108b8afe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b8b01 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8b04 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 108b8b08 jmp 0x108b8b70 */
  goto L_108b8b70;
L_108b8b0a:;
  /* 108b8b0a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8b0d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8b10 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 108b8b14 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8b17 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8b1a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 108b8b1d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108b8b1f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8b22 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8b25 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 108b8b28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b8b2a jne 0x108b8b47 */
  if (!C.zf) goto L_108b8b47;
  /* 108b8b2c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b8b2f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8b32 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b8b37 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b8b39 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8b3c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b8b3f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108b8b41 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8b44 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_108b8b47:;
  /* 108b8b47 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b8b4a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8b4d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b8b52 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b8b54 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b8b57 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8b5a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 108b8b61 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108b8b63 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b8b66 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8b69 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_108b8b70:;
  /* 108b8b70 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8b74 je 0x108b8b8a */
  if (C.zf) goto L_108b8b8a;
  /* 108b8b76 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8b79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b8b7c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108b8b7e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8b81 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8b84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b8b87 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_108b8b8a:;
  /* 108b8b8a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8b8d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8b90 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108b8b93 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b8b96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8b99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8b9c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108b8b9e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b8ba1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8ba4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8ba7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8baa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 108b8bad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8bb0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b8bb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8bb5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b8bb7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8bba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8bbd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 108b8bbf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b8bc1 jne 0x108b8be3 */
  if (!C.zf) goto L_108b8be3;
  /* 108b8bc3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8bc6 cmp eax, dword ptr [0x108e0f00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108e0f00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8bcc jne 0x108b8be3 */
  if (!C.zf) goto L_108b8be3;
  /* 108b8bce mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b8bd1 cmp ecx, dword ptr [0x108e0ef8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108e0ef8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8bd7 jne 0x108b8be3 */
  if (!C.zf) goto L_108b8be3;
  /* 108b8bd9 mov dword ptr [0x108e0f00], 0 */
  w32((uint32_t)(0x108e0f00), (0x0u));
L_108b8be3:;
  /* 108b8be3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 108b8be6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b8be9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 108b8beb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8bee add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_108b8bf1:;
  /* 108b8bf1 pop esi */
  ESI = (pop32());
  /* 108b8bf2 mov esp, ebp */
  ESP = (EBP);
  /* 108b8bf4 pop ebp */
  EBP = (pop32());
  /* 108b8bf5 ret  */
  ESPCHK(0x108b86c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c00 @ 0x108b8c00 (271 bytes, 78 insns) */
void f_108b8c00(void) {
  FTRACE(0x108b8c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b8c00 push ebp */
  push32((uint32_t)(EBP));
  /* 108b8c01 mov ebp, esp */
  EBP = (ESP);
  /* 108b8c03 push ecx */
  push32((uint32_t)(ECX));
  /* 108b8c04 mov eax, dword ptr [0x108e0f04] */
  EAX = (r32((uint32_t)(0x108e0f04)));
  /* 108b8c09 cmp eax, dword ptr [0x108e0ee8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108e0ee8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8c0f jne 0x108b8c5b */
  if (!C.zf) goto L_108b8c5b;
  /* 108b8c11 mov ecx, dword ptr [0x108e0ee8] */
  ECX = (r32((uint32_t)(0x108e0ee8)));
  /* 108b8c17 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8c1a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b8c1d push ecx */
  push32((uint32_t)(ECX));
  /* 108b8c1e mov edx, dword ptr [0x108e0f08] */
  EDX = (r32((uint32_t)(0x108e0f08)));
  /* 108b8c24 push edx */
  push32((uint32_t)(EDX));
  /* 108b8c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b8c27 mov eax, dword ptr [0x108e0f0c] */
  EAX = (r32((uint32_t)(0x108e0f0c)));
  /* 108b8c2c push eax */
  push32((uint32_t)(EAX));
  /* 108b8c2d call dword ptr [0x108e2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2300))), 0x108b8c33u);
  /* 108b8c33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b8c36 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8c3a jne 0x108b8c43 */
  if (!C.zf) goto L_108b8c43;
  /* 108b8c3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b8c3e jmp 0x108b8d0b */
  goto L_108b8d0b;
L_108b8c43:;
  /* 108b8c43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8c46 mov dword ptr [0x108e0f08], ecx */
  w32((uint32_t)(0x108e0f08), (ECX));
  /* 108b8c4c mov edx, dword ptr [0x108e0ee8] */
  EDX = (r32((uint32_t)(0x108e0ee8)));
  /* 108b8c52 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8c55 mov dword ptr [0x108e0ee8], edx */
  w32((uint32_t)(0x108e0ee8), (EDX));
L_108b8c5b:;
  /* 108b8c5b mov eax, dword ptr [0x108e0f04] */
  EAX = (r32((uint32_t)(0x108e0f04)));
  /* 108b8c60 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b8c63 mov ecx, dword ptr [0x108e0f08] */
  ECX = (r32((uint32_t)(0x108e0f08)));
  /* 108b8c69 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8c6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108b8c6e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 108b8c73 push 8 */
  push32((uint32_t)(0x8u));
  /* 108b8c75 mov edx, dword ptr [0x108e0f0c] */
  EDX = (r32((uint32_t)(0x108e0f0c)));
  /* 108b8c7b push edx */
  push32((uint32_t)(EDX));
  /* 108b8c7c call dword ptr [0x108e22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22f8))), 0x108b8c82u);
  /* 108b8c82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8c85 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 108b8c88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8c8b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8c8f jne 0x108b8c95 */
  if (!C.zf) goto L_108b8c95;
  /* 108b8c91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b8c93 jmp 0x108b8d0b */
  goto L_108b8d0b;
L_108b8c95:;
  /* 108b8c95 push 4 */
  push32((uint32_t)(0x4u));
  /* 108b8c97 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 108b8c9c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 108b8ca1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b8ca3 call dword ptr [0x108e22f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22f0))), 0x108b8ca9u);
  /* 108b8ca9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8cac mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 108b8caf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8cb2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8cb6 jne 0x108b8cd2 */
  if (!C.zf) goto L_108b8cd2;
  /* 108b8cb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8cbb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108b8cbe push ecx */
  push32((uint32_t)(ECX));
  /* 108b8cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 108b8cc1 mov edx, dword ptr [0x108e0f0c] */
  EDX = (r32((uint32_t)(0x108e0f0c)));
  /* 108b8cc7 push edx */
  push32((uint32_t)(EDX));
  /* 108b8cc8 call dword ptr [0x108e2398] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2398))), 0x108b8cceu);
  /* 108b8cce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b8cd0 jmp 0x108b8d0b */
  goto L_108b8d0b;
L_108b8cd2:;
  /* 108b8cd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8cd5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108b8cdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8cde mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 108b8ce5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8ce8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 108b8cef mov eax, dword ptr [0x108e0f04] */
  EAX = (r32((uint32_t)(0x108e0f04)));
  /* 108b8cf4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8cf7 mov dword ptr [0x108e0f04], eax */
  w32((uint32_t)(0x108e0f04), (EAX));
  /* 108b8cfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8cff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 108b8d02 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 108b8d08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108b8d0b:;
  /* 108b8d0b mov esp, ebp */
  ESP = (EBP);
  /* 108b8d0d pop ebp */
  EBP = (pop32());
  /* 108b8d0e ret  */
  ESPCHK(0x108b8c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d10 @ 0x108b8d10 (494 bytes, 149 insns) */
void f_108b8d10(void) {
  FTRACE(0x108b8d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b8d10 push ebp */
  push32((uint32_t)(EBP));
  /* 108b8d11 mov ebp, esp */
  EBP = (ESP);
  /* 108b8d13 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8d16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b8d19 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108b8d1c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 108b8d1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b8d22 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108b8d25 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b8d28 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_108b8d2f:;
  /* 108b8d2f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8d33 jl 0x108b8d48 */
  if ((C.sf!=C.of)) goto L_108b8d48;
  /* 108b8d35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b8d38 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 108b8d3a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108b8d3d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b8d40 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8d43 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 108b8d46 jmp 0x108b8d2f */
  goto L_108b8d2f;
L_108b8d48:;
  /* 108b8d48 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b8d4b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b8d51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b8d54 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 108b8d5b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108b8d5e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 108b8d65 jmp 0x108b8d70 */
  goto L_108b8d70;
L_108b8d67:;
  /* 108b8d67 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b8d6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8d6d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_108b8d70:;
  /* 108b8d70 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8d74 jge 0x108b8d96 */
  if ((C.sf==C.of)) goto L_108b8d96;
  /* 108b8d76 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b8d79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b8d7c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 108b8d7f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108b8d82 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8d85 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8d88 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 108b8d8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8d8e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8d91 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 108b8d94 jmp 0x108b8d67 */
  goto L_108b8d67;
L_108b8d96:;
  /* 108b8d96 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b8d99 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 108b8d9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b8d9f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108b8da2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8da4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108b8da7 push 4 */
  push32((uint32_t)(0x4u));
  /* 108b8da9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 108b8dae push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 108b8db3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8db6 push edx */
  push32((uint32_t)(EDX));
  /* 108b8db7 call dword ptr [0x108e22f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22f0))), 0x108b8dbdu);
  /* 108b8dbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b8dbf jne 0x108b8dc9 */
  if (!C.zf) goto L_108b8dc9;
  /* 108b8dc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b8dc4 jmp 0x108b8efa */
  goto L_108b8efa;
L_108b8dc9:;
  /* 108b8dc9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8dcc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8dd1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 108b8dd4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8dd7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108b8dda jmp 0x108b8de8 */
  goto L_108b8de8;
L_108b8ddc:;
  /* 108b8ddc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8ddf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8de5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108b8de8:;
  /* 108b8de8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8deb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8dee ja 0x108b8e4d */
  if ((!C.cf&&!C.zf)) goto L_108b8e4d;
  /* 108b8df0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8df3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 108b8dfa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8dfd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 108b8e07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8e0a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8e0d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108b8e10 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8e13 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 108b8e19 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8e1c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8e22 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8e25 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108b8e28 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8e2b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8e31 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8e34 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 108b8e37 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8e3a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8e3f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108b8e42 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b8e45 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 108b8e4b jmp 0x108b8ddc */
  goto L_108b8ddc;
L_108b8e4d:;
  /* 108b8e4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b8e50 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8e56 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108b8e59 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8e5c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8e5f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b8e62 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 108b8e65 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b8e68 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108b8e6b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108b8e6e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8e71 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b8e74 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 108b8e77 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b8e7a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8e7d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b8e80 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 108b8e83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b8e86 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108b8e89 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108b8e8c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b8e8f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b8e92 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 108b8e95 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b8e98 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b8e9b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 108b8ea3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b8ea6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b8ea9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 108b8eb4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b8eb7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 108b8ebb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b8ebe mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 108b8ec1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 108b8ec4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b8ec7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 108b8eca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b8ecc jne 0x108b8edd */
  if (!C.zf) goto L_108b8edd;
  /* 108b8ece mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b8ed1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b8ed4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108b8ed7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b8eda mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_108b8edd:;
  /* 108b8edd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b8ee2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b8ee5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b8ee7 not edx */
  EDX = (~(EDX));
  /* 108b8ee9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b8eec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108b8eef and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108b8ef1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b8ef4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 108b8ef7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_108b8efa:;
  /* 108b8efa mov esp, ebp */
  ESP = (EBP);
  /* 108b8efc pop ebp */
  EBP = (pop32());
  /* 108b8efd ret  */
  ESPCHK(0x108b8d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f00 @ 0x108b8f00 (1515 bytes, 489 insns) */
void f_108b8f00(void) {
  FTRACE(0x108b8f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b8f00 push ebp */
  push32((uint32_t)(EBP));
  /* 108b8f01 mov ebp, esp */
  EBP = (ESP);
  /* 108b8f03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8f06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b8f09 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8f0c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 108b8f0e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 108b8f11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b8f14 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 108b8f17 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 108b8f1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b8f1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b8f20 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8f23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108b8f26 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b8f29 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 108b8f2c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b8f2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8f32 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b8f38 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b8f3b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 108b8f42 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108b8f45 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b8f48 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8f4b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108b8f4e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b8f51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b8f53 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8f56 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 108b8f59 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b8f5c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8f5f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 108b8f62 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b8f65 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b8f67 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108b8f6a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b8f6d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8f70 jle 0x108b9226 */
  if ((C.zf||C.sf!=C.of)) goto L_108b9226;
  /* 108b8f76 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8f79 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108b8f7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b8f7e jne 0x108b8f8b */
  if (!C.zf) goto L_108b8f8b;
  /* 108b8f80 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b8f83 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8f86 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8f89 jle 0x108b8f92 */
  if ((C.zf||C.sf!=C.of)) goto L_108b8f92;
L_108b8f8b:;
  /* 108b8f8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b8f8d jmp 0x108b94e7 */
  goto L_108b94e7;
L_108b8f92:;
  /* 108b8f92 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b8f95 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 108b8f98 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b8f9b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108b8f9e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8fa2 jbe 0x108b8fab */
  if ((C.cf||C.zf)) goto L_108b8fab;
  /* 108b8fa4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_108b8fab:;
  /* 108b8fab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b8fae mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b8fb1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b8fb4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8fb7 jne 0x108b908d */
  if (!C.zf) goto L_108b908d;
  /* 108b8fbd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b8fc1 jae 0x108b9022 */
  if (!C.cf) goto L_108b9022;
  /* 108b8fc3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b8fc8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b8fcb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b8fcd not edx */
  EDX = (~(EDX));
  /* 108b8fcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8fd2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b8fd5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 108b8fd9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108b8fdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b8fde mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b8fe1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 108b8fe5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b8fe8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8feb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108b8fee sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108b8ff1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b8ff4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b8ff7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 108b8ffa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b8ffd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9000 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 108b9004 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b9006 jne 0x108b9020 */
  if (!C.zf) goto L_108b9020;
  /* 108b9008 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b900d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b9010 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b9012 not edx */
  EDX = (~(EDX));
  /* 108b9014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b9017 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b9019 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108b901b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b901e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108b9020:;
  /* 108b9020 jmp 0x108b908d */
  goto L_108b908d;
L_108b9022:;
  /* 108b9022 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b9025 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b9028 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b902d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b902f not eax */
  EAX = (~(EAX));
  /* 108b9031 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b9034 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b9037 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 108b903e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108b9040 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b9043 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b9046 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 108b904d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b9050 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9053 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 108b9056 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108b9059 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b905c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b905f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 108b9062 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b9065 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9068 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108b906c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b906e jne 0x108b908d */
  if (!C.zf) goto L_108b908d;
  /* 108b9070 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b9073 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b9076 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b907b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b907d not eax */
  EAX = (~(EAX));
  /* 108b907f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b9082 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b9085 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108b9087 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b908a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_108b908d:;
  /* 108b908d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b9090 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108b9093 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b9096 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b9099 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 108b909c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b909f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108b90a2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b90a5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108b90a8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 108b90ab mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b90ae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b90b1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b90b4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108b90b7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b90bb jle 0x108b9207 */
  if ((C.zf||C.sf!=C.of)) goto L_108b9207;
  /* 108b90c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b90c4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b90c7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 108b90ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b90cd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 108b90d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b90d3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 108b90d6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b90da jbe 0x108b90e3 */
  if ((C.cf||C.zf)) goto L_108b90e3;
  /* 108b90dc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_108b90e3:;
  /* 108b90e3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b90e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b90e9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 108b90ec mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108b90ef mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b90f2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b90f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b90f8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108b90fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b90fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b9101 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 108b9104 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b9107 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b910a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 108b910d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b9110 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b9113 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b9116 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108b9119 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b911c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b911f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b9122 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9125 jne 0x108b91f3 */
  if (!C.zf) goto L_108b91f3;
  /* 108b912b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b912f jae 0x108b918c */
  if (!C.cf) goto L_108b918c;
  /* 108b9131 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b9134 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9137 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108b913b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b913e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9141 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108b9144 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 108b9147 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b914a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b914d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 108b9150 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b9152 jne 0x108b916a */
  if (!C.zf) goto L_108b916a;
  /* 108b9154 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b9159 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b915c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b915e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b9161 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b9163 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108b9165 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b9168 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108b916a:;
  /* 108b916a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b916f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b9172 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b9174 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b9177 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b917a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 108b917e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108b9180 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b9183 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b9186 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 108b918a jmp 0x108b91f3 */
  goto L_108b91f3;
L_108b918c:;
  /* 108b918c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b918f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9192 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108b9196 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b9199 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b919c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108b919f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 108b91a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b91a5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b91a8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 108b91ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b91ad jne 0x108b91ca */
  if (!C.zf) goto L_108b91ca;
  /* 108b91af mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b91b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b91b5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b91ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b91bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b91bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b91c2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108b91c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b91c7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_108b91ca:;
  /* 108b91ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b91cd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b91d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b91d5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b91d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b91da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b91dd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 108b91e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108b91e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b91e9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b91ec mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_108b91f3:;
  /* 108b91f3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b91f6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b91f9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 108b91fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b91fe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9201 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b9204 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_108b9207:;
  /* 108b9207 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b920a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b920d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b9210 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108b9212 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b9215 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9218 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b921b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b921e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 108b9221 jmp 0x108b94e2 */
  goto L_108b94e2;
L_108b9226:;
  /* 108b9226 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b9229 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b922c jge 0x108b94e2 */
  if ((C.sf==C.of)) goto L_108b94e2;
  /* 108b9232 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b9235 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9238 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b923b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108b923d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108b9240 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9243 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b9246 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9249 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 108b924c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b924f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9252 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108b9255 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b9258 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b925b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108b925e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b9261 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 108b9264 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b9267 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 108b926a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b926e jbe 0x108b9277 */
  if ((C.cf||C.zf)) goto L_108b9277;
  /* 108b9270 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_108b9277:;
  /* 108b9277 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b927a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108b927d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b927f jne 0x108b93c0 */
  if (!C.zf) goto L_108b93c0;
  /* 108b9285 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b9288 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 108b928b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b928e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108b9291 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9295 jbe 0x108b929e */
  if ((C.cf||C.zf)) goto L_108b929e;
  /* 108b9297 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_108b929e:;
  /* 108b929e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b92a1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b92a4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b92a7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b92aa jne 0x108b9380 */
  if (!C.zf) goto L_108b9380;
  /* 108b92b0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b92b4 jae 0x108b9315 */
  if (!C.cf) goto L_108b9315;
  /* 108b92b6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b92bb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b92be shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b92c0 not edx */
  EDX = (~(EDX));
  /* 108b92c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b92c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b92c8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 108b92cc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108b92ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b92d1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b92d4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 108b92d8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b92db add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b92de mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108b92e1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108b92e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b92e7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b92ea mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 108b92ed mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b92f0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b92f3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 108b92f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b92f9 jne 0x108b9313 */
  if (!C.zf) goto L_108b9313;
  /* 108b92fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b9300 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b9303 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b9305 not edx */
  EDX = (~(EDX));
  /* 108b9307 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b930a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b930c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108b930e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b9311 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108b9313:;
  /* 108b9313 jmp 0x108b9380 */
  goto L_108b9380;
L_108b9315:;
  /* 108b9315 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b9318 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b931b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b9320 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b9322 not eax */
  EAX = (~(EAX));
  /* 108b9324 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b9327 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b932a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 108b9331 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108b9333 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b9336 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b9339 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 108b9340 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b9343 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9346 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 108b9349 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108b934c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b934f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9352 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 108b9355 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b9358 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b935b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108b935f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b9361 jne 0x108b9380 */
  if (!C.zf) goto L_108b9380;
  /* 108b9363 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b9366 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b9369 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b936e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b9370 not eax */
  EAX = (~(EAX));
  /* 108b9372 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b9375 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b9378 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108b937a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b937d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_108b9380:;
  /* 108b9380 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b9383 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108b9386 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b9389 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b938c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 108b938f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b9392 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108b9395 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b9398 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108b939b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 108b939e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b93a1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b93a4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108b93a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b93aa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 108b93ad sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b93b0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 108b93b3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b93b7 jbe 0x108b93c0 */
  if ((C.cf||C.zf)) goto L_108b93c0;
  /* 108b93b9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_108b93c0:;
  /* 108b93c0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b93c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b93c6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 108b93c9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 108b93cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b93cf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b93d2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b93d5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 108b93d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b93db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b93de mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108b93e1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b93e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b93e7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 108b93ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b93ed mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b93f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b93f3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 108b93f6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b93f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b93fc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b93ff cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9402 jne 0x108b94ce */
  if (!C.zf) goto L_108b94ce;
  /* 108b9408 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b940c jae 0x108b9468 */
  if (!C.cf) goto L_108b9468;
  /* 108b940e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b9411 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9414 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 108b9418 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b941b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b941e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 108b9421 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108b9423 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b9426 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9429 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 108b942c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b942e jne 0x108b9446 */
  if (!C.zf) goto L_108b9446;
  /* 108b9430 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b9435 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9438 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b943a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b943d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b943f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108b9441 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b9444 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_108b9446:;
  /* 108b9446 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b944b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b944e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b9450 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b9453 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b9456 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 108b945a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108b945c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b945f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b9462 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 108b9466 jmp 0x108b94ce */
  goto L_108b94ce;
L_108b9468:;
  /* 108b9468 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b946b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b946e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 108b9472 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b9475 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9478 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 108b947b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108b947d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b9480 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9483 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 108b9486 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b9488 jne 0x108b94a5 */
  if (!C.zf) goto L_108b94a5;
  /* 108b948a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b948d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b9490 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 108b9495 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108b9497 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b949a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b949d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108b949f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b94a2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_108b94a5:;
  /* 108b94a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b94a8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b94ab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b94b0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b94b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b94b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b94b8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 108b94bf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108b94c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b94c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108b94c7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_108b94ce:;
  /* 108b94ce mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b94d1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b94d4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108b94d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b94d9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b94dc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b94df mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_108b94e2:;
  /* 108b94e2 mov eax, 1 */
  EAX = (0x1u);
L_108b94e7:;
  /* 108b94e7 mov esp, ebp */
  ESP = (EBP);
  /* 108b94e9 pop ebp */
  EBP = (pop32());
  /* 108b94ea ret  */
  ESPCHK(0x108b8f00u, _esp0);
  ESP += 4; return;
}

/* FUN_100094f0 @ 0x108b94f0 (304 bytes, 79 insns) */
void f_108b94f0(void) {
  FTRACE(0x108b94f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b94f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b94f1 mov ebp, esp */
  EBP = (ESP);
  /* 108b94f3 push ecx */
  push32((uint32_t)(ECX));
  /* 108b94f4 cmp dword ptr [0x108e0f00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108e0f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b94fb je 0x108b961c */
  if (C.zf) goto L_108b961c;
  /* 108b9501 mov eax, dword ptr [0x108e0ef8] */
  EAX = (r32((uint32_t)(0x108e0ef8)));
  /* 108b9506 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 108b9509 mov ecx, dword ptr [0x108e0f00] */
  ECX = (r32((uint32_t)(0x108e0f00)));
  /* 108b950f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108b9512 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9514 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b9517 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 108b951c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 108b9521 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b9524 push eax */
  push32((uint32_t)(EAX));
  /* 108b9525 call dword ptr [0x108e239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e239c))), 0x108b952bu);
  /* 108b952b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b9530 mov ecx, dword ptr [0x108e0ef8] */
  ECX = (r32((uint32_t)(0x108e0ef8)));
  /* 108b9536 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b9538 mov eax, dword ptr [0x108e0f00] */
  EAX = (r32((uint32_t)(0x108e0f00)));
  /* 108b953d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108b9540 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 108b9542 mov edx, dword ptr [0x108e0f00] */
  EDX = (r32((uint32_t)(0x108e0f00)));
  /* 108b9548 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 108b954b mov eax, dword ptr [0x108e0f00] */
  EAX = (r32((uint32_t)(0x108e0f00)));
  /* 108b9550 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108b9553 mov edx, dword ptr [0x108e0ef8] */
  EDX = (r32((uint32_t)(0x108e0ef8)));
  /* 108b9559 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 108b9564 mov eax, dword ptr [0x108e0f00] */
  EAX = (r32((uint32_t)(0x108e0f00)));
  /* 108b9569 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108b956c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 108b956f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108b9572 mov eax, dword ptr [0x108e0f00] */
  EAX = (r32((uint32_t)(0x108e0f00)));
  /* 108b9577 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108b957a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 108b957d mov edx, dword ptr [0x108e0f00] */
  EDX = (r32((uint32_t)(0x108e0f00)));
  /* 108b9583 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108b9586 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 108b958a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b958c jne 0x108b95a2 */
  if (!C.zf) goto L_108b95a2;
  /* 108b958e mov edx, dword ptr [0x108e0f00] */
  EDX = (r32((uint32_t)(0x108e0f00)));
  /* 108b9594 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108b9597 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 108b9599 mov ecx, dword ptr [0x108e0f00] */
  ECX = (r32((uint32_t)(0x108e0f00)));
  /* 108b959f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_108b95a2:;
  /* 108b95a2 mov edx, dword ptr [0x108e0f00] */
  EDX = (r32((uint32_t)(0x108e0f00)));
  /* 108b95a8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b95ac jne 0x108b9612 */
  if (!C.zf) goto L_108b9612;
  /* 108b95ae cmp dword ptr [0x108e0f04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108e0f04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b95b5 jle 0x108b9612 */
  if ((C.zf||C.sf!=C.of)) goto L_108b9612;
  /* 108b95b7 mov eax, dword ptr [0x108e0f00] */
  EAX = (r32((uint32_t)(0x108e0f00)));
  /* 108b95bc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108b95bf push ecx */
  push32((uint32_t)(ECX));
  /* 108b95c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b95c2 mov edx, dword ptr [0x108e0f0c] */
  EDX = (r32((uint32_t)(0x108e0f0c)));
  /* 108b95c8 push edx */
  push32((uint32_t)(EDX));
  /* 108b95c9 call dword ptr [0x108e2398] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2398))), 0x108b95cfu);
  /* 108b95cf mov eax, dword ptr [0x108e0f04] */
  EAX = (r32((uint32_t)(0x108e0f04)));
  /* 108b95d4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b95d7 mov ecx, dword ptr [0x108e0f08] */
  ECX = (r32((uint32_t)(0x108e0f08)));
  /* 108b95dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b95df mov edx, dword ptr [0x108e0f00] */
  EDX = (r32((uint32_t)(0x108e0f00)));
  /* 108b95e5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b95e8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b95ea push ecx */
  push32((uint32_t)(ECX));
  /* 108b95eb mov eax, dword ptr [0x108e0f00] */
  EAX = (r32((uint32_t)(0x108e0f00)));
  /* 108b95f0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b95f3 push eax */
  push32((uint32_t)(EAX));
  /* 108b95f4 mov ecx, dword ptr [0x108e0f00] */
  ECX = (r32((uint32_t)(0x108e0f00)));
  /* 108b95fa push ecx */
  push32((uint32_t)(ECX));
  /* 108b95fb call 0x108bbc20 */
  push32(0x108b9600u); f_108bbc20();
  /* 108b9600 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9603 mov edx, dword ptr [0x108e0f04] */
  EDX = (r32((uint32_t)(0x108e0f04)));
  /* 108b9609 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b960c mov dword ptr [0x108e0f04], edx */
  w32((uint32_t)(0x108e0f04), (EDX));
L_108b9612:;
  /* 108b9612 mov dword ptr [0x108e0f00], 0 */
  w32((uint32_t)(0x108e0f00), (0x0u));
L_108b961c:;
  /* 108b961c mov esp, ebp */
  ESP = (EBP);
  /* 108b961e pop ebp */
  EBP = (pop32());
  /* 108b961f ret  */
  ESPCHK(0x108b94f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009620 @ 0x108b9620 (1565 bytes, 343 insns) */
void f_108b9620(void) {
  FTRACE(0x108b9620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b9620 push ebp */
  push32((uint32_t)(EBP));
  /* 108b9621 mov ebp, esp */
  EBP = (ESP);
  /* 108b9623 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b9629 mov eax, dword ptr [0x108e0f04] */
  EAX = (r32((uint32_t)(0x108e0f04)));
  /* 108b962e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b9631 push eax */
  push32((uint32_t)(EAX));
  /* 108b9632 mov ecx, dword ptr [0x108e0f08] */
  ECX = (r32((uint32_t)(0x108e0f08)));
  /* 108b9638 push ecx */
  push32((uint32_t)(ECX));
  /* 108b9639 call dword ptr [0x108e2374] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2374))), 0x108b963fu);
  /* 108b963f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b9641 je 0x108b964b */
  if (C.zf) goto L_108b964b;
  /* 108b9643 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b9646 jmp 0x108b9c39 */
  goto L_108b9c39;
L_108b964b:;
  /* 108b964b mov edx, dword ptr [0x108e0f08] */
  EDX = (r32((uint32_t)(0x108e0f08)));
  /* 108b9651 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 108b9657 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 108b9661 jmp 0x108b9672 */
  goto L_108b9672;
L_108b9663:;
  /* 108b9663 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 108b9669 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b966c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_108b9672:;
  /* 108b9672 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 108b9678 cmp ecx, dword ptr [0x108e0f04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108e0f04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b967e jge 0x108b9c37 */
  if ((C.sf==C.of)) goto L_108b9c37;
  /* 108b9684 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 108b968a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108b968d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 108b9693 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 108b9698 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 108b969e push ecx */
  push32((uint32_t)(ECX));
  /* 108b969f call dword ptr [0x108e2374] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2374))), 0x108b96a5u);
  /* 108b96a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b96a7 je 0x108b96b3 */
  if (C.zf) goto L_108b96b3;
  /* 108b96a9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 108b96ae jmp 0x108b9c39 */
  goto L_108b9c39;
L_108b96b3:;
  /* 108b96b3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 108b96b9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108b96bc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 108b96c2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 108b96c8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b96ce mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 108b96d1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 108b96d7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108b96da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b96dd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 108b96e7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 108b96f1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108b96f8 jmp 0x108b9703 */
  goto L_108b9703;
L_108b96fa:;
  /* 108b96fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b96fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9700 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_108b9703:;
  /* 108b9703 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9707 jge 0x108b9bfb */
  if ((C.sf==C.of)) goto L_108b9bfb;
  /* 108b970d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 108b9717 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 108b9721 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 108b972b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 108b9735 jmp 0x108b9746 */
  goto L_108b9746;
L_108b9737:;
  /* 108b9737 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 108b973d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9740 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_108b9746:;
  /* 108b9746 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b974d jge 0x108b9762 */
  if ((C.sf==C.of)) goto L_108b9762;
  /* 108b974f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 108b9755 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 108b9760 jmp 0x108b9737 */
  goto L_108b9737;
L_108b9762:;
  /* 108b9762 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9766 jl 0x108b9b9d */
  if ((C.sf!=C.of)) goto L_108b9b9d;
  /* 108b976c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 108b9771 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 108b9777 push ecx */
  push32((uint32_t)(ECX));
  /* 108b9778 call dword ptr [0x108e2374] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2374))), 0x108b977eu);
  /* 108b977e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b9780 je 0x108b978c */
  if (C.zf) goto L_108b978c;
  /* 108b9782 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 108b9787 jmp 0x108b9c39 */
  goto L_108b9c39;
L_108b978c:;
  /* 108b978c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 108b9792 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108b9795 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 108b979f jmp 0x108b97b0 */
  goto L_108b97b0;
L_108b97a1:;
  /* 108b97a1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 108b97a7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b97aa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_108b97b0:;
  /* 108b97b0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b97b7 jge 0x108b9934 */
  if ((C.sf==C.of)) goto L_108b9934;
  /* 108b97bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b97c0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b97c3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 108b97c9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 108b97cf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b97d5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 108b97db mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 108b97e1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b97e5 jne 0x108b97f2 */
  if (!C.zf) goto L_108b97f2;
  /* 108b97e7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 108b97ed cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b97f0 je 0x108b97fc */
  if (C.zf) goto L_108b97fc;
L_108b97f2:;
  /* 108b97f2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 108b97f7 jmp 0x108b9c39 */
  goto L_108b9c39;
L_108b97fc:;
  /* 108b97fc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 108b9802 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b9804 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 108b980a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 108b9810 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 108b9816 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 108b981c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108b981f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b9821 je 0x108b9859 */
  if (C.zf) goto L_108b9859;
  /* 108b9823 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 108b9829 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b982c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 108b9832 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b983c jle 0x108b9848 */
  if ((C.zf||C.sf!=C.of)) goto L_108b9848;
  /* 108b983e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 108b9843 jmp 0x108b9c39 */
  goto L_108b9c39;
L_108b9848:;
  /* 108b9848 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 108b984e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9851 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 108b9857 jmp 0x108b989b */
  goto L_108b989b;
L_108b9859:;
  /* 108b9859 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 108b985f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 108b9862 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b9865 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 108b986b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9872 jle 0x108b987e */
  if ((C.zf||C.sf!=C.of)) goto L_108b987e;
  /* 108b9874 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_108b987e:;
  /* 108b987e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 108b9884 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 108b988b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b988e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 108b9894 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_108b989b:;
  /* 108b989b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b98a2 jl 0x108b98bd */
  if ((C.sf!=C.of)) goto L_108b98bd;
  /* 108b98a4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 108b98aa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 108b98ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b98af jne 0x108b98bd */
  if (!C.zf) goto L_108b98bd;
  /* 108b98b1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b98bb jle 0x108b98c7 */
  if ((C.zf||C.sf!=C.of)) goto L_108b98c7;
L_108b98bd:;
  /* 108b98bd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 108b98c2 jmp 0x108b9c39 */
  goto L_108b9c39;
L_108b98c7:;
  /* 108b98c7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 108b98cd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b98d3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 108b98d6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b98dc je 0x108b98e8 */
  if (C.zf) goto L_108b98e8;
  /* 108b98de mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 108b98e3 jmp 0x108b9c39 */
  goto L_108b9c39;
L_108b98e8:;
  /* 108b98e8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 108b98ee add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b98f4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 108b98fa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 108b9900 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9906 jb 0x108b97fc */
  if (C.cf) goto L_108b97fc;
  /* 108b990c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 108b9912 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9918 je 0x108b9924 */
  if (C.zf) goto L_108b9924;
  /* 108b991a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 108b991f jmp 0x108b9c39 */
  goto L_108b9c39;
L_108b9924:;
  /* 108b9924 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b9927 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b992c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b992f jmp 0x108b97a1 */
  goto L_108b97a1;
L_108b9934:;
  /* 108b9934 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b9937 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b9939 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b993f je 0x108b994b */
  if (C.zf) goto L_108b994b;
  /* 108b9941 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 108b9946 jmp 0x108b9c39 */
  goto L_108b9c39;
L_108b994b:;
  /* 108b994b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b994e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 108b9954 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 108b995b jmp 0x108b9966 */
  goto L_108b9966;
L_108b995d:;
  /* 108b995d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b9960 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9963 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_108b9966:;
  /* 108b9966 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b996a jge 0x108b9b9d */
  if ((C.sf==C.of)) goto L_108b9b9d;
  /* 108b9970 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 108b997a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 108b9980 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_108b9986:;
  /* 108b9986 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 108b998c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b998f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 108b9995 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 108b999b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b99a1 je 0x108b9aca */
  if (C.zf) goto L_108b9aca;
  /* 108b99a7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b99aa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 108b99b0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b99b7 je 0x108b9aca */
  if (C.zf) goto L_108b9aca;
  /* 108b99bd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 108b99c3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b99c9 jb 0x108b99de */
  if (C.cf) goto L_108b99de;
  /* 108b99cb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 108b99d1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b99d6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b99dc jb 0x108b99e8 */
  if (C.cf) goto L_108b99e8;
L_108b99de:;
  /* 108b99de mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 108b99e3 jmp 0x108b9c39 */
  goto L_108b9c39;
L_108b99e8:;
  /* 108b99e8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 108b99ee and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 108b99f4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 108b99fa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 108b9a00 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9a03 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108b9a06 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b9a09 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9a0e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_108b9a14:;
  /* 108b9a14 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b9a17 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9a1d je 0x108b9a3e */
  if (C.zf) goto L_108b9a3e;
  /* 108b9a1f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b9a22 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9a28 jne 0x108b9a2c */
  if (!C.zf) goto L_108b9a2c;
  /* 108b9a2a jmp 0x108b9a3e */
  goto L_108b9a3e;
L_108b9a2c:;
  /* 108b9a2c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b9a2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b9a31 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 108b9a34 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b9a37 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9a39 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108b9a3c jmp 0x108b9a14 */
  goto L_108b9a14;
L_108b9a3e:;
  /* 108b9a3e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b9a41 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9a47 jne 0x108b9a53 */
  if (!C.zf) goto L_108b9a53;
  /* 108b9a49 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 108b9a4e jmp 0x108b9c39 */
  goto L_108b9c39;
L_108b9a53:;
  /* 108b9a53 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 108b9a59 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b9a5b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 108b9a5e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b9a61 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 108b9a67 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9a6e jle 0x108b9a7a */
  if ((C.zf||C.sf!=C.of)) goto L_108b9a7a;
  /* 108b9a70 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_108b9a7a:;
  /* 108b9a7a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 108b9a80 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9a83 je 0x108b9a8f */
  if (C.zf) goto L_108b9a8f;
  /* 108b9a85 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 108b9a8a jmp 0x108b9c39 */
  goto L_108b9c39;
L_108b9a8f:;
  /* 108b9a8f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 108b9a95 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108b9a98 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9a9e je 0x108b9aaa */
  if (C.zf) goto L_108b9aaa;
  /* 108b9aa0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 108b9aa5 jmp 0x108b9c39 */
  goto L_108b9c39;
L_108b9aaa:;
  /* 108b9aaa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 108b9ab0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 108b9ab6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 108b9abc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9abf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 108b9ac5 jmp 0x108b9986 */
  goto L_108b9986;
L_108b9aca:;
  /* 108b9aca cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9ad1 je 0x108b9b41 */
  if (C.zf) goto L_108b9b41;
  /* 108b9ad3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9ad7 jge 0x108b9b0b */
  if ((C.sf==C.of)) goto L_108b9b0b;
  /* 108b9ad9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b9ade mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b9ae1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b9ae3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 108b9ae9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108b9aeb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 108b9af1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b9af6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b9af9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b9afb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 108b9b01 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108b9b03 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 108b9b09 jmp 0x108b9b41 */
  goto L_108b9b41;
L_108b9b0b:;
  /* 108b9b0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b9b0e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b9b11 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b9b16 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b9b18 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 108b9b1e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108b9b20 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 108b9b26 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b9b29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b9b2c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108b9b31 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108b9b33 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 108b9b39 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108b9b3b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_108b9b41:;
  /* 108b9b41 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 108b9b47 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b9b4a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9b50 jne 0x108b9b64 */
  if (!C.zf) goto L_108b9b64;
  /* 108b9b52 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b9b55 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 108b9b5b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9b62 je 0x108b9b6e */
  if (C.zf) goto L_108b9b6e;
L_108b9b64:;
  /* 108b9b64 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 108b9b69 jmp 0x108b9c39 */
  goto L_108b9c39;
L_108b9b6e:;
  /* 108b9b6e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 108b9b74 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108b9b77 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9b7d je 0x108b9b89 */
  if (C.zf) goto L_108b9b89;
  /* 108b9b7f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 108b9b84 jmp 0x108b9c39 */
  goto L_108b9c39;
L_108b9b89:;
  /* 108b9b89 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 108b9b8f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9b92 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 108b9b98 jmp 0x108b995d */
  goto L_108b995d;
L_108b9b9d:;
  /* 108b9b9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b9ba0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 108b9ba6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 108b9bac cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9bb0 jne 0x108b9bca */
  if (!C.zf) goto L_108b9bca;
  /* 108b9bb2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b9bb5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 108b9bbb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 108b9bc1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9bc8 je 0x108b9bd1 */
  if (C.zf) goto L_108b9bd1;
L_108b9bca:;
  /* 108b9bca mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 108b9bcf jmp 0x108b9c39 */
  goto L_108b9c39;
L_108b9bd1:;
  /* 108b9bd1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 108b9bd7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9bdd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 108b9be3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b9be6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9beb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108b9bee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b9bf1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 108b9bf3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108b9bf6 jmp 0x108b96fa */
  goto L_108b96fa;
L_108b9bfb:;
  /* 108b9bfb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 108b9c01 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 108b9c07 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9c09 jne 0x108b9c1c */
  if (!C.zf) goto L_108b9c1c;
  /* 108b9c0b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 108b9c11 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 108b9c17 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9c1a je 0x108b9c23 */
  if (C.zf) goto L_108b9c23;
L_108b9c1c:;
  /* 108b9c1c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 108b9c21 jmp 0x108b9c39 */
  goto L_108b9c39;
L_108b9c23:;
  /* 108b9c23 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 108b9c29 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9c2c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 108b9c32 jmp 0x108b9663 */
  goto L_108b9663;
L_108b9c37:;
  /* 108b9c37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108b9c39:;
  /* 108b9c39 mov esp, ebp */
  ESP = (EBP);
  /* 108b9c3b pop ebp */
  EBP = (pop32());
  /* 108b9c3c ret  */
  ESPCHK(0x108b9620u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c40 @ 0x108b9c40 (250 bytes, 92 insns) */
void f_108b9c40(void) {
  FTRACE(0x108b9c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b9c40 push ebp */
  push32((uint32_t)(EBP));
  /* 108b9c41 mov ebp, esp */
  EBP = (ESP);
  /* 108b9c43 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b9c46 push ebx */
  push32((uint32_t)(EBX));
  /* 108b9c47 push esi */
  push32((uint32_t)(ESI));
  /* 108b9c48 push edi */
  push32((uint32_t)(EDI));
  /* 108b9c49 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 108b9c4c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108b9c4f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 108b9c52 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_108b9c55:;
  /* 108b9c55 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9c59 jne 0x108b9c79 */
  if (!C.zf) goto L_108b9c79;
  /* 108b9c5b push 0x108dae90 */
  push32((uint32_t)(0x108dae90u));
  /* 108b9c60 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b9c62 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 108b9c64 push 0x108dae84 */
  push32((uint32_t)(0x108dae84u));
  /* 108b9c69 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b9c6b call 0x108b2df0 */
  push32(0x108b9c70u); f_108b2df0();
  /* 108b9c70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9c73 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9c76 jne 0x108b9c79 */
  if (!C.zf) goto L_108b9c79;
  /* 108b9c78 int3  */
  x86_unimpl("int3 @ 0x108b9c78");
L_108b9c79:;
  /* 108b9c79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b9c7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b9c7d jne 0x108b9c55 */
  if (!C.zf) goto L_108b9c55;
L_108b9c7f:;
  /* 108b9c7f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9c83 jne 0x108b9ca3 */
  if (!C.zf) goto L_108b9ca3;
  /* 108b9c85 push 0x108dae74 */
  push32((uint32_t)(0x108dae74u));
  /* 108b9c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 108b9c8c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 108b9c8e push 0x108dae84 */
  push32((uint32_t)(0x108dae84u));
  /* 108b9c93 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b9c95 call 0x108b2df0 */
  push32(0x108b9c9au); f_108b2df0();
  /* 108b9c9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9c9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9ca0 jne 0x108b9ca3 */
  if (!C.zf) goto L_108b9ca3;
  /* 108b9ca2 int3  */
  x86_unimpl("int3 @ 0x108b9ca2");
L_108b9ca3:;
  /* 108b9ca3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b9ca5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b9ca7 jne 0x108b9c7f */
  if (!C.zf) goto L_108b9c7f;
  /* 108b9ca9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9cac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 108b9cb3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9cb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b9cb9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108b9cbc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9cbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b9cc2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 108b9cc4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9cc7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 108b9cce mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b9cd1 push ecx */
  push32((uint32_t)(ECX));
  /* 108b9cd2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b9cd5 push edx */
  push32((uint32_t)(EDX));
  /* 108b9cd6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9cd9 push eax */
  push32((uint32_t)(EAX));
  /* 108b9cda call 0x108bacc0 */
  push32(0x108b9cdfu); f_108bacc0();
  /* 108b9cdf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9ce2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108b9ce5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9ce8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b9ceb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b9cee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9cf1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108b9cf4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9cf7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9cfb jl 0x108b9d1f */
  if ((C.sf!=C.of)) goto L_108b9d1f;
  /* 108b9cfd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9d00 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b9d02 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 108b9d05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b9d07 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b9d0d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 108b9d10 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9d13 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b9d15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9d18 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9d1b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108b9d1d jmp 0x108b9d30 */
  goto L_108b9d30;
L_108b9d1f:;
  /* 108b9d1f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9d22 push edx */
  push32((uint32_t)(EDX));
  /* 108b9d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b9d25 call 0x108baa40 */
  push32(0x108b9d2au); f_108baa40();
  /* 108b9d2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9d2d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_108b9d30:;
  /* 108b9d30 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b9d33 pop edi */
  EDI = (pop32());
  /* 108b9d34 pop esi */
  ESI = (pop32());
  /* 108b9d35 pop ebx */
  EBX = (pop32());
  /* 108b9d36 mov esp, ebp */
  ESP = (EBP);
  /* 108b9d38 pop ebp */
  EBP = (pop32());
  /* 108b9d39 ret  */
  ESPCHK(0x108b9c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d40 @ 0x108b9d40 (183 bytes, 58 insns) */
void f_108b9d40(void) {
  FTRACE(0x108b9d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b9d40 push ebp */
  push32((uint32_t)(EBP));
  /* 108b9d41 mov ebp, esp */
  EBP = (ESP);
  /* 108b9d43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b9d46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b9d49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9d4c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9d51 ja 0x108b9d6a */
  if ((!C.cf&&!C.zf)) goto L_108b9d6a;
  /* 108b9d53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b9d56 mov edx, dword ptr [0x108ddc98] */
  EDX = (r32((uint32_t)(0x108ddc98)));
  /* 108b9d5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b9d5e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 108b9d62 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 108b9d65 jmp 0x108b9df3 */
  goto L_108b9df3;
L_108b9d6a:;
  /* 108b9d6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b9d6d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 108b9d70 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b9d76 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b9d7c mov edx, dword ptr [0x108ddc98] */
  EDX = (r32((uint32_t)(0x108ddc98)));
  /* 108b9d82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b9d84 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 108b9d88 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 108b9d8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b9d8f je 0x108b9db3 */
  if (C.zf) goto L_108b9db3;
  /* 108b9d91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b9d94 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 108b9d97 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b9d9d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 108b9da0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 108b9da3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 108b9da6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 108b9daa mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 108b9db1 jmp 0x108b9dc4 */
  goto L_108b9dc4;
L_108b9db3:;
  /* 108b9db3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 108b9db6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 108b9db9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 108b9dbd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_108b9dc4:;
  /* 108b9dc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b9dc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b9dc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b9dca lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 108b9dcd push ecx */
  push32((uint32_t)(ECX));
  /* 108b9dce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b9dd1 push edx */
  push32((uint32_t)(EDX));
  /* 108b9dd2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 108b9dd5 push eax */
  push32((uint32_t)(EAX));
  /* 108b9dd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b9dd8 call 0x108bbf60 */
  push32(0x108b9dddu); f_108bbf60();
  /* 108b9ddd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9de0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b9de2 jne 0x108b9de8 */
  if (!C.zf) goto L_108b9de8;
  /* 108b9de4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b9de6 jmp 0x108b9df3 */
  goto L_108b9df3;
L_108b9de8:;
  /* 108b9de8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b9deb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b9df0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_108b9df3:;
  /* 108b9df3 mov esp, ebp */
  ESP = (EBP);
  /* 108b9df5 pop ebp */
  EBP = (pop32());
  /* 108b9df6 ret  */
  ESPCHK(0x108b9d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e00 @ 0x108b9e00 (836 bytes, 238 insns) */
void f_108b9e00(void) {
  FTRACE(0x108b9e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b9e00 push ebp */
  push32((uint32_t)(EBP));
  /* 108b9e01 mov ebp, esp */
  EBP = (ESP);
  /* 108b9e03 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b9e06 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108b9e08 call 0x108b7730 */
  push32(0x108b9e0du); f_108b7730();
  /* 108b9e0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9e10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b9e13 push eax */
  push32((uint32_t)(EAX));
  /* 108b9e14 call 0x108ba150 */
  push32(0x108b9e19u); f_108ba150();
  /* 108b9e19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9e1c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108b9e1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b9e22 cmp ecx, dword ptr [0x108e0c44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108e0c44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9e28 jne 0x108b9e3b */
  if (!C.zf) goto L_108b9e3b;
  /* 108b9e2a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108b9e2c call 0x108b77d0 */
  push32(0x108b9e31u); f_108b77d0();
  /* 108b9e31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9e34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b9e36 jmp 0x108ba140 */
  goto L_108ba140;
L_108b9e3b:;
  /* 108b9e3b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9e3f jne 0x108b9e5c */
  if (!C.zf) goto L_108b9e5c;
  /* 108b9e41 call 0x108ba230 */
  push32(0x108b9e46u); f_108ba230();
  /* 108b9e46 call 0x108ba2b0 */
  push32(0x108b9e4bu); f_108ba2b0();
  /* 108b9e4b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108b9e4d call 0x108b77d0 */
  push32(0x108b9e52u); f_108b77d0();
  /* 108b9e52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9e55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b9e57 jmp 0x108ba140 */
  goto L_108ba140;
L_108b9e5c:;
  /* 108b9e5c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108b9e63 jmp 0x108b9e6e */
  goto L_108b9e6e;
L_108b9e65:;
  /* 108b9e65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b9e68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9e6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108b9e6e:;
  /* 108b9e6e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9e72 jae 0x108b9fbf */
  if (!C.cf) goto L_108b9fbf;
  /* 108b9e78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b9e7b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b9e7e mov ecx, dword ptr [eax + 0x108ddeb8] */
  ECX = (r32((uint32_t)(EAX + 0x108ddeb8)));
  /* 108b9e84 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9e87 jne 0x108b9fba */
  if (!C.zf) goto L_108b9fba;
  /* 108b9e8d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 108b9e94 jmp 0x108b9e9f */
  goto L_108b9e9f;
L_108b9e96:;
  /* 108b9e96 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9e99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9e9c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_108b9e9f:;
  /* 108b9e9f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9ea6 jae 0x108b9eb4 */
  if (!C.cf) goto L_108b9eb4;
  /* 108b9ea8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9eab mov byte ptr [eax + 0x108e0de0], 0 */
  w8((uint32_t)(EAX + 0x108e0de0), (0x0u));
  /* 108b9eb2 jmp 0x108b9e96 */
  goto L_108b9e96;
L_108b9eb4:;
  /* 108b9eb4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108b9ebb jmp 0x108b9ec6 */
  goto L_108b9ec6;
L_108b9ebd:;
  /* 108b9ebd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b9ec0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9ec3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_108b9ec6:;
  /* 108b9ec6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9eca jae 0x108b9f47 */
  if (!C.cf) goto L_108b9f47;
  /* 108b9ecc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b9ecf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b9ed2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b9ed5 lea ecx, [edx + eax*8 + 0x108ddec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x108ddec8));
  /* 108b9edc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108b9edf jmp 0x108b9eea */
  goto L_108b9eea;
L_108b9ee1:;
  /* 108b9ee1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b9ee4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9ee7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108b9eea:;
  /* 108b9eea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b9eed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b9eef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108b9ef1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b9ef3 je 0x108b9f42 */
  if (C.zf) goto L_108b9f42;
  /* 108b9ef5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b9ef8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b9efa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 108b9efd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b9eff je 0x108b9f42 */
  if (C.zf) goto L_108b9f42;
  /* 108b9f01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b9f04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b9f06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108b9f08 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 108b9f0b jmp 0x108b9f16 */
  goto L_108b9f16;
L_108b9f0d:;
  /* 108b9f0d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9f10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9f13 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_108b9f16:;
  /* 108b9f16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b9f19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b9f1b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 108b9f1e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9f21 ja 0x108b9f40 */
  if ((!C.cf&&!C.zf)) goto L_108b9f40;
  /* 108b9f23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9f26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b9f29 mov dl, byte ptr [eax + 0x108e0de1] */
  DL = (r8((uint32_t)(EAX + 0x108e0de1)));
  /* 108b9f2f or dl, byte ptr [ecx + 0x108ddeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x108ddeb0))); DL = (_r); fl_logic(_r,8); }
  /* 108b9f35 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9f38 mov byte ptr [eax + 0x108e0de1], dl */
  w8((uint32_t)(EAX + 0x108e0de1), (DL));
  /* 108b9f3e jmp 0x108b9f0d */
  goto L_108b9f0d;
L_108b9f40:;
  /* 108b9f40 jmp 0x108b9ee1 */
  goto L_108b9ee1;
L_108b9f42:;
  /* 108b9f42 jmp 0x108b9ebd */
  goto L_108b9ebd;
L_108b9f47:;
  /* 108b9f47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b9f4a mov dword ptr [0x108e0c44], ecx */
  w32((uint32_t)(0x108e0c44), (ECX));
  /* 108b9f50 mov dword ptr [0x108e0ccc], 1 */
  w32((uint32_t)(0x108e0ccc), (0x1u));
  /* 108b9f5a mov edx, dword ptr [0x108e0c44] */
  EDX = (r32((uint32_t)(0x108e0c44)));
  /* 108b9f60 push edx */
  push32((uint32_t)(EDX));
  /* 108b9f61 call 0x108ba1b0 */
  push32(0x108b9f66u); f_108ba1b0();
  /* 108b9f66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9f69 mov dword ptr [0x108e0ee4], eax */
  w32((uint32_t)(0x108e0ee4), (EAX));
  /* 108b9f6e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108b9f75 jmp 0x108b9f80 */
  goto L_108b9f80;
L_108b9f77:;
  /* 108b9f77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b9f7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9f7d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_108b9f80:;
  /* 108b9f80 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9f84 jae 0x108b9fa4 */
  if (!C.cf) goto L_108b9fa4;
  /* 108b9f86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b9f89 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b9f8c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b9f8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b9f92 mov cx, word ptr [ecx + eax*2 + 0x108ddebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x108ddebc)));
  /* 108b9f9a mov word ptr [edx*2 + 0x108e0cc0], cx */
  w16((uint32_t)(EDX*2 + 0x108e0cc0), (CX));
  /* 108b9fa2 jmp 0x108b9f77 */
  goto L_108b9f77;
L_108b9fa4:;
  /* 108b9fa4 call 0x108ba2b0 */
  push32(0x108b9fa9u); f_108ba2b0();
  /* 108b9fa9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108b9fab call 0x108b77d0 */
  push32(0x108b9fb0u); f_108b77d0();
  /* 108b9fb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9fb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b9fb5 jmp 0x108ba140 */
  goto L_108ba140;
L_108b9fba:;
  /* 108b9fba jmp 0x108b9e65 */
  goto L_108b9e65;
L_108b9fbf:;
  /* 108b9fbf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 108b9fc2 push edx */
  push32((uint32_t)(EDX));
  /* 108b9fc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b9fc6 push eax */
  push32((uint32_t)(EAX));
  /* 108b9fc7 call dword ptr [0x108e22ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22ec))), 0x108b9fcdu);
  /* 108b9fcd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9fd0 jne 0x108ba112 */
  if (!C.zf) goto L_108ba112;
  /* 108b9fd6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 108b9fdd jmp 0x108b9fe8 */
  goto L_108b9fe8;
L_108b9fdf:;
  /* 108b9fdf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9fe2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b9fe5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_108b9fe8:;
  /* 108b9fe8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b9fef jae 0x108b9ffd */
  if (!C.cf) goto L_108b9ffd;
  /* 108b9ff1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b9ff4 mov byte ptr [edx + 0x108e0de0], 0 */
  w8((uint32_t)(EDX + 0x108e0de0), (0x0u));
  /* 108b9ffb jmp 0x108b9fdf */
  goto L_108b9fdf;
L_108b9ffd:;
  /* 108b9ffd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ba000 mov dword ptr [0x108e0c44], eax */
  w32((uint32_t)(0x108e0c44), (EAX));
  /* 108ba005 mov dword ptr [0x108e0ee4], 0 */
  w32((uint32_t)(0x108e0ee4), (0x0u));
  /* 108ba00f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba013 jbe 0x108ba0ce */
  if ((C.cf||C.zf)) goto L_108ba0ce;
  /* 108ba019 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 108ba01c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 108ba01f jmp 0x108ba02a */
  goto L_108ba02a;
L_108ba021:;
  /* 108ba021 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108ba024 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba027 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_108ba02a:;
  /* 108ba02a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108ba02d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108ba02f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108ba031 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108ba033 je 0x108ba07c */
  if (C.zf) goto L_108ba07c;
  /* 108ba035 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108ba038 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108ba03a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 108ba03d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108ba03f je 0x108ba07c */
  if (C.zf) goto L_108ba07c;
  /* 108ba041 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108ba044 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108ba046 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108ba048 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 108ba04b jmp 0x108ba056 */
  goto L_108ba056;
L_108ba04d:;
  /* 108ba04d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108ba050 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba053 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_108ba056:;
  /* 108ba056 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108ba059 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108ba05b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 108ba05e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba061 ja 0x108ba07a */
  if ((!C.cf&&!C.zf)) goto L_108ba07a;
  /* 108ba063 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108ba066 mov cl, byte ptr [eax + 0x108e0de1] */
  CL = (r8((uint32_t)(EAX + 0x108e0de1)));
  /* 108ba06c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 108ba06f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108ba072 mov byte ptr [edx + 0x108e0de1], cl */
  w8((uint32_t)(EDX + 0x108e0de1), (CL));
  /* 108ba078 jmp 0x108ba04d */
  goto L_108ba04d;
L_108ba07a:;
  /* 108ba07a jmp 0x108ba021 */
  goto L_108ba021;
L_108ba07c:;
  /* 108ba07c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 108ba083 jmp 0x108ba08e */
  goto L_108ba08e;
L_108ba085:;
  /* 108ba085 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108ba088 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba08b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_108ba08e:;
  /* 108ba08e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba095 jae 0x108ba0ae */
  if (!C.cf) goto L_108ba0ae;
  /* 108ba097 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108ba09a mov dl, byte ptr [ecx + 0x108e0de1] */
  DL = (r8((uint32_t)(ECX + 0x108e0de1)));
  /* 108ba0a0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 108ba0a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108ba0a6 mov byte ptr [eax + 0x108e0de1], dl */
  w8((uint32_t)(EAX + 0x108e0de1), (DL));
  /* 108ba0ac jmp 0x108ba085 */
  goto L_108ba085;
L_108ba0ae:;
  /* 108ba0ae mov ecx, dword ptr [0x108e0c44] */
  ECX = (r32((uint32_t)(0x108e0c44)));
  /* 108ba0b4 push ecx */
  push32((uint32_t)(ECX));
  /* 108ba0b5 call 0x108ba1b0 */
  push32(0x108ba0bau); f_108ba1b0();
  /* 108ba0ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba0bd mov dword ptr [0x108e0ee4], eax */
  w32((uint32_t)(0x108e0ee4), (EAX));
  /* 108ba0c2 mov dword ptr [0x108e0ccc], 1 */
  w32((uint32_t)(0x108e0ccc), (0x1u));
  /* 108ba0cc jmp 0x108ba0d8 */
  goto L_108ba0d8;
L_108ba0ce:;
  /* 108ba0ce mov dword ptr [0x108e0ccc], 0 */
  w32((uint32_t)(0x108e0ccc), (0x0u));
L_108ba0d8:;
  /* 108ba0d8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108ba0df jmp 0x108ba0ea */
  goto L_108ba0ea;
L_108ba0e1:;
  /* 108ba0e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108ba0e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba0e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_108ba0ea:;
  /* 108ba0ea cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba0ee jae 0x108ba0ff */
  if (!C.cf) goto L_108ba0ff;
  /* 108ba0f0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108ba0f3 mov word ptr [eax*2 + 0x108e0cc0], 0 */
  w16((uint32_t)(EAX*2 + 0x108e0cc0), (0x0u));
  /* 108ba0fd jmp 0x108ba0e1 */
  goto L_108ba0e1;
L_108ba0ff:;
  /* 108ba0ff call 0x108ba2b0 */
  push32(0x108ba104u); f_108ba2b0();
  /* 108ba104 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108ba106 call 0x108b77d0 */
  push32(0x108ba10bu); f_108b77d0();
  /* 108ba10b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba10e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108ba110 jmp 0x108ba140 */
  goto L_108ba140;
L_108ba112:;
  /* 108ba112 cmp dword ptr [0x108df760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba119 je 0x108ba133 */
  if (C.zf) goto L_108ba133;
  /* 108ba11b call 0x108ba230 */
  push32(0x108ba120u); f_108ba230();
  /* 108ba120 call 0x108ba2b0 */
  push32(0x108ba125u); f_108ba2b0();
  /* 108ba125 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108ba127 call 0x108b77d0 */
  push32(0x108ba12cu); f_108b77d0();
  /* 108ba12c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba12f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108ba131 jmp 0x108ba140 */
  goto L_108ba140;
L_108ba133:;
  /* 108ba133 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108ba135 call 0x108b77d0 */
  push32(0x108ba13au); f_108b77d0();
  /* 108ba13a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba13d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_108ba140:;
  /* 108ba140 mov esp, ebp */
  ESP = (EBP);
  /* 108ba142 pop ebp */
  EBP = (pop32());
  /* 108ba143 ret  */
  ESPCHK(0x108b9e00u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x108ba150 (89 bytes, 21 insns) */
void f_108ba150(void) {
  FTRACE(0x108ba150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108ba150 push ebp */
  push32((uint32_t)(EBP));
  /* 108ba151 mov ebp, esp */
  EBP = (ESP);
  /* 108ba153 mov dword ptr [0x108df760], 0 */
  w32((uint32_t)(0x108df760), (0x0u));
  /* 108ba15d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba161 jne 0x108ba175 */
  if (!C.zf) goto L_108ba175;
  /* 108ba163 mov dword ptr [0x108df760], 1 */
  w32((uint32_t)(0x108df760), (0x1u));
  /* 108ba16d call dword ptr [0x108e22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22e4))), 0x108ba173u);
  /* 108ba173 jmp 0x108ba1a7 */
  goto L_108ba1a7;
L_108ba175:;
  /* 108ba175 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba179 jne 0x108ba18d */
  if (!C.zf) goto L_108ba18d;
  /* 108ba17b mov dword ptr [0x108df760], 1 */
  w32((uint32_t)(0x108df760), (0x1u));
  /* 108ba185 call dword ptr [0x108e22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22f4))), 0x108ba18bu);
  /* 108ba18b jmp 0x108ba1a7 */
  goto L_108ba1a7;
L_108ba18d:;
  /* 108ba18d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba191 jne 0x108ba1a4 */
  if (!C.zf) goto L_108ba1a4;
  /* 108ba193 mov dword ptr [0x108df760], 1 */
  w32((uint32_t)(0x108df760), (0x1u));
  /* 108ba19d mov eax, dword ptr [0x108df780] */
  EAX = (r32((uint32_t)(0x108df780)));
  /* 108ba1a2 jmp 0x108ba1a7 */
  goto L_108ba1a7;
L_108ba1a4:;
  /* 108ba1a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_108ba1a7:;
  /* 108ba1a7 pop ebp */
  EBP = (pop32());
  /* 108ba1a8 ret  */
  ESPCHK(0x108ba150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1b0 @ 0x108ba1b0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_108ba1b0(void) {
  FTRACE(0x108ba1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108ba1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108ba1b1 mov ebp, esp */
  EBP = (ESP);
  /* 108ba1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 108ba1b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ba1b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108ba1ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ba1bd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108ba1c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108ba1c6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba1ca ja 0x108ba1fa */
  if ((!C.cf&&!C.zf)) goto L_108ba1fa;
  /* 108ba1cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ba1cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108ba1d1 mov dl, byte ptr [eax + 0x108ba214] */
  DL = (r8((uint32_t)(EAX + 0x108ba214)));
  /* 108ba1d7 jmp dword ptr [edx*4 + 0x108ba200] */
  switch (EDX) {
    case 0: goto L_108ba1de;
    case 1: goto L_108ba1e5;
    case 2: goto L_108ba1ec;
    case 3: goto L_108ba1f3;
    case 4: goto L_108ba1fa;
    default: x86_unimpl("switch@0x108ba1d7 out of table"); return;
  }
L_108ba1de:;
  /* 108ba1de mov eax, 0x411 */
  EAX = (0x411u);
  /* 108ba1e3 jmp 0x108ba1fc */
  goto L_108ba1fc;
L_108ba1e5:;
  /* 108ba1e5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 108ba1ea jmp 0x108ba1fc */
  goto L_108ba1fc;
L_108ba1ec:;
  /* 108ba1ec mov eax, 0x412 */
  EAX = (0x412u);
  /* 108ba1f1 jmp 0x108ba1fc */
  goto L_108ba1fc;
L_108ba1f3:;
  /* 108ba1f3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 108ba1f8 jmp 0x108ba1fc */
  goto L_108ba1fc;
L_108ba1fa:;
  /* 108ba1fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108ba1fc:;
  /* 108ba1fc mov esp, ebp */
  ESP = (EBP);
  /* 108ba1fe pop ebp */
  EBP = (pop32());
  /* 108ba1ff ret  */
  ESPCHK(0x108ba1b0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x108ba230 (116 bytes, 29 insns) */
void f_108ba230(void) {
  FTRACE(0x108ba230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108ba230 push ebp */
  push32((uint32_t)(EBP));
  /* 108ba231 mov ebp, esp */
  EBP = (ESP);
  /* 108ba233 push ecx */
  push32((uint32_t)(ECX));
  /* 108ba234 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108ba23b jmp 0x108ba246 */
  goto L_108ba246;
L_108ba23d:;
  /* 108ba23d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ba240 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba243 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108ba246:;
  /* 108ba246 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba24d jge 0x108ba25b */
  if ((C.sf==C.of)) goto L_108ba25b;
  /* 108ba24f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ba252 mov byte ptr [ecx + 0x108e0de0], 0 */
  w8((uint32_t)(ECX + 0x108e0de0), (0x0u));
  /* 108ba259 jmp 0x108ba23d */
  goto L_108ba23d;
L_108ba25b:;
  /* 108ba25b mov dword ptr [0x108e0c44], 0 */
  w32((uint32_t)(0x108e0c44), (0x0u));
  /* 108ba265 mov dword ptr [0x108e0ccc], 0 */
  w32((uint32_t)(0x108e0ccc), (0x0u));
  /* 108ba26f mov dword ptr [0x108e0ee4], 0 */
  w32((uint32_t)(0x108e0ee4), (0x0u));
  /* 108ba279 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108ba280 jmp 0x108ba28b */
  goto L_108ba28b;
L_108ba282:;
  /* 108ba282 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ba285 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba288 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108ba28b:;
  /* 108ba28b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba28f jge 0x108ba2a0 */
  if ((C.sf==C.of)) goto L_108ba2a0;
  /* 108ba291 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ba294 mov word ptr [eax*2 + 0x108e0cc0], 0 */
  w16((uint32_t)(EAX*2 + 0x108e0cc0), (0x0u));
  /* 108ba29e jmp 0x108ba282 */
  goto L_108ba282;
L_108ba2a0:;
  /* 108ba2a0 mov esp, ebp */
  ESP = (EBP);
  /* 108ba2a2 pop ebp */
  EBP = (pop32());
  /* 108ba2a3 ret  */
  ESPCHK(0x108ba230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2b0 @ 0x108ba2b0 (770 bytes, 175 insns) */
void f_108ba2b0(void) {
  FTRACE(0x108ba2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108ba2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108ba2b1 mov ebp, esp */
  EBP = (ESP);
  /* 108ba2b3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108ba2b9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 108ba2bf push eax */
  push32((uint32_t)(EAX));
  /* 108ba2c0 mov ecx, dword ptr [0x108e0c44] */
  ECX = (r32((uint32_t)(0x108e0c44)));
  /* 108ba2c6 push ecx */
  push32((uint32_t)(ECX));
  /* 108ba2c7 call dword ptr [0x108e22ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22ec))), 0x108ba2cdu);
  /* 108ba2cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba2d0 jne 0x108ba4e9 */
  if (!C.zf) goto L_108ba4e9;
  /* 108ba2d6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 108ba2e0 jmp 0x108ba2f1 */
  goto L_108ba2f1;
L_108ba2e2:;
  /* 108ba2e2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba2e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba2eb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_108ba2f1:;
  /* 108ba2f1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba2fb jae 0x108ba312 */
  if (!C.cf) goto L_108ba312;
  /* 108ba2fd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba303 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 108ba309 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 108ba310 jmp 0x108ba2e2 */
  goto L_108ba2e2;
L_108ba312:;
  /* 108ba312 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 108ba319 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 108ba31f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108ba322 jmp 0x108ba32d */
  goto L_108ba32d;
L_108ba324:;
  /* 108ba324 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ba327 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba32a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108ba32d:;
  /* 108ba32d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ba330 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108ba332 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108ba334 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108ba336 je 0x108ba378 */
  if (C.zf) goto L_108ba378;
  /* 108ba338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ba33b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108ba33d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108ba33f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 108ba345 jmp 0x108ba356 */
  goto L_108ba356;
L_108ba347:;
  /* 108ba347 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba34d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba350 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_108ba356:;
  /* 108ba356 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108ba359 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108ba35b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 108ba35e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba364 ja 0x108ba376 */
  if ((!C.cf&&!C.zf)) goto L_108ba376;
  /* 108ba366 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba36c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 108ba374 jmp 0x108ba347 */
  goto L_108ba347;
L_108ba376:;
  /* 108ba376 jmp 0x108ba324 */
  goto L_108ba324;
L_108ba378:;
  /* 108ba378 push 0 */
  push32((uint32_t)(0x0u));
  /* 108ba37a mov eax, dword ptr [0x108e0ee4] */
  EAX = (r32((uint32_t)(0x108e0ee4)));
  /* 108ba37f push eax */
  push32((uint32_t)(EAX));
  /* 108ba380 mov ecx, dword ptr [0x108e0c44] */
  ECX = (r32((uint32_t)(0x108e0c44)));
  /* 108ba386 push ecx */
  push32((uint32_t)(ECX));
  /* 108ba387 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 108ba38d push edx */
  push32((uint32_t)(EDX));
  /* 108ba38e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108ba393 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 108ba399 push eax */
  push32((uint32_t)(EAX));
  /* 108ba39a push 1 */
  push32((uint32_t)(0x1u));
  /* 108ba39c call 0x108bbf60 */
  push32(0x108ba3a1u); f_108bbf60();
  /* 108ba3a1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba3a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108ba3a6 mov ecx, dword ptr [0x108e0c44] */
  ECX = (r32((uint32_t)(0x108e0c44)));
  /* 108ba3ac push ecx */
  push32((uint32_t)(ECX));
  /* 108ba3ad push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108ba3b2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 108ba3b8 push edx */
  push32((uint32_t)(EDX));
  /* 108ba3b9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108ba3be lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 108ba3c4 push eax */
  push32((uint32_t)(EAX));
  /* 108ba3c5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108ba3ca mov ecx, dword ptr [0x108e0ee4] */
  ECX = (r32((uint32_t)(0x108e0ee4)));
  /* 108ba3d0 push ecx */
  push32((uint32_t)(ECX));
  /* 108ba3d1 call 0x108bc120 */
  push32(0x108ba3d6u); f_108bc120();
  /* 108ba3d6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba3d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108ba3db mov edx, dword ptr [0x108e0c44] */
  EDX = (r32((uint32_t)(0x108e0c44)));
  /* 108ba3e1 push edx */
  push32((uint32_t)(EDX));
  /* 108ba3e2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108ba3e7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 108ba3ed push eax */
  push32((uint32_t)(EAX));
  /* 108ba3ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108ba3f3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 108ba3f9 push ecx */
  push32((uint32_t)(ECX));
  /* 108ba3fa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 108ba3ff mov edx, dword ptr [0x108e0ee4] */
  EDX = (r32((uint32_t)(0x108e0ee4)));
  /* 108ba405 push edx */
  push32((uint32_t)(EDX));
  /* 108ba406 call 0x108bc120 */
  push32(0x108ba40bu); f_108bc120();
  /* 108ba40b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba40e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 108ba418 jmp 0x108ba429 */
  goto L_108ba429;
L_108ba41a:;
  /* 108ba41a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba420 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba423 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_108ba429:;
  /* 108ba429 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba433 jae 0x108ba4e4 */
  if (!C.cf) goto L_108ba4e4;
  /* 108ba439 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba43f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108ba441 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 108ba449 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108ba44c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108ba44e je 0x108ba486 */
  if (C.zf) goto L_108ba486;
  /* 108ba450 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba456 mov cl, byte ptr [eax + 0x108e0de1] */
  CL = (r8((uint32_t)(EAX + 0x108e0de1)));
  /* 108ba45c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 108ba45f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba465 mov byte ptr [edx + 0x108e0de1], cl */
  w8((uint32_t)(EDX + 0x108e0de1), (CL));
  /* 108ba46b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba471 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba477 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 108ba47e mov byte ptr [eax + 0x108e0ce0], dl */
  w8((uint32_t)(EAX + 0x108e0ce0), (DL));
  /* 108ba484 jmp 0x108ba4df */
  goto L_108ba4df;
L_108ba486:;
  /* 108ba486 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba48c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108ba48e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 108ba496 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 108ba499 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108ba49b je 0x108ba4d2 */
  if (C.zf) goto L_108ba4d2;
  /* 108ba49d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba4a3 mov al, byte ptr [edx + 0x108e0de1] */
  AL = (r8((uint32_t)(EDX + 0x108e0de1)));
  /* 108ba4a9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 108ba4ab mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba4b1 mov byte ptr [ecx + 0x108e0de1], al */
  w8((uint32_t)(ECX + 0x108e0de1), (AL));
  /* 108ba4b7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba4bd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba4c3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 108ba4ca mov byte ptr [edx + 0x108e0ce0], cl */
  w8((uint32_t)(EDX + 0x108e0ce0), (CL));
  /* 108ba4d0 jmp 0x108ba4df */
  goto L_108ba4df;
L_108ba4d2:;
  /* 108ba4d2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba4d8 mov byte ptr [edx + 0x108e0ce0], 0 */
  w8((uint32_t)(EDX + 0x108e0ce0), (0x0u));
L_108ba4df:;
  /* 108ba4df jmp 0x108ba41a */
  goto L_108ba41a;
L_108ba4e4:;
  /* 108ba4e4 jmp 0x108ba5ae */
  goto L_108ba5ae;
L_108ba4e9:;
  /* 108ba4e9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 108ba4f3 jmp 0x108ba504 */
  goto L_108ba504;
L_108ba4f5:;
  /* 108ba4f5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba4fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba4fe mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_108ba504:;
  /* 108ba504 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba50e jae 0x108ba5ae */
  if (!C.cf) goto L_108ba5ae;
  /* 108ba514 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba51b jb 0x108ba558 */
  if (C.cf) goto L_108ba558;
  /* 108ba51d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba524 ja 0x108ba558 */
  if ((!C.cf&&!C.zf)) goto L_108ba558;
  /* 108ba526 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba52c mov dl, byte ptr [ecx + 0x108e0de1] */
  DL = (r8((uint32_t)(ECX + 0x108e0de1)));
  /* 108ba532 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 108ba535 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba53b mov byte ptr [eax + 0x108e0de1], dl */
  w8((uint32_t)(EAX + 0x108e0de1), (DL));
  /* 108ba541 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba547 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba54a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba550 mov byte ptr [edx + 0x108e0ce0], cl */
  w8((uint32_t)(EDX + 0x108e0ce0), (CL));
  /* 108ba556 jmp 0x108ba5a9 */
  goto L_108ba5a9;
L_108ba558:;
  /* 108ba558 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba55f jb 0x108ba59c */
  if (C.cf) goto L_108ba59c;
  /* 108ba561 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba568 ja 0x108ba59c */
  if ((!C.cf&&!C.zf)) goto L_108ba59c;
  /* 108ba56a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba570 mov cl, byte ptr [eax + 0x108e0de1] */
  CL = (r8((uint32_t)(EAX + 0x108e0de1)));
  /* 108ba576 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 108ba579 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba57f mov byte ptr [edx + 0x108e0de1], cl */
  w8((uint32_t)(EDX + 0x108e0de1), (CL));
  /* 108ba585 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba58b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108ba58e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba594 mov byte ptr [ecx + 0x108e0ce0], al */
  w8((uint32_t)(ECX + 0x108e0ce0), (AL));
  /* 108ba59a jmp 0x108ba5a9 */
  goto L_108ba5a9;
L_108ba59c:;
  /* 108ba59c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 108ba5a2 mov byte ptr [edx + 0x108e0ce0], 0 */
  w8((uint32_t)(EDX + 0x108e0ce0), (0x0u));
L_108ba5a9:;
  /* 108ba5a9 jmp 0x108ba4f5 */
  goto L_108ba4f5;
L_108ba5ae:;
  /* 108ba5ae mov esp, ebp */
  ESP = (EBP);
  /* 108ba5b0 pop ebp */
  EBP = (pop32());
  /* 108ba5b1 ret  */
  ESPCHK(0x108ba2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5c0 @ 0x108ba5c0 (23 bytes, 9 insns) */
void f_108ba5c0(void) {
  FTRACE(0x108ba5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108ba5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108ba5c1 mov ebp, esp */
  EBP = (ESP);
  /* 108ba5c3 cmp dword ptr [0x108e0ccc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108e0ccc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba5ca je 0x108ba5d3 */
  if (C.zf) goto L_108ba5d3;
  /* 108ba5cc mov eax, dword ptr [0x108e0c44] */
  EAX = (r32((uint32_t)(0x108e0c44)));
  /* 108ba5d1 jmp 0x108ba5d5 */
  goto L_108ba5d5;
L_108ba5d3:;
  /* 108ba5d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108ba5d5:;
  /* 108ba5d5 pop ebp */
  EBP = (pop32());
  /* 108ba5d6 ret  */
  ESPCHK(0x108ba5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5e0 @ 0x108ba5e0 (34 bytes, 10 insns) */
void f_108ba5e0(void) {
  FTRACE(0x108ba5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108ba5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108ba5e1 mov ebp, esp */
  EBP = (ESP);
  /* 108ba5e3 cmp dword ptr [0x108e1090], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108e1090))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba5ea jne 0x108ba600 */
  if (!C.zf) goto L_108ba600;
  /* 108ba5ec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 108ba5ee call 0x108b9e00 */
  push32(0x108ba5f3u); f_108b9e00();
  /* 108ba5f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba5f6 mov dword ptr [0x108e1090], 1 */
  w32((uint32_t)(0x108e1090), (0x1u));
L_108ba600:;
  /* 108ba600 pop ebp */
  EBP = (pop32());
  /* 108ba601 ret  */
  ESPCHK(0x108ba5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a610 @ 0x108ba610 (664 bytes, 261 insns) [15 switch table(s)] */
void f_108ba610(void) {
  FTRACE(0x108ba610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108ba610 push ebp */
  push32((uint32_t)(EBP));
  /* 108ba611 mov ebp, esp */
  EBP = (ESP);
  /* 108ba613 push edi */
  push32((uint32_t)(EDI));
  /* 108ba614 push esi */
  push32((uint32_t)(ESI));
  /* 108ba615 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 108ba618 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108ba61b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 108ba61e mov eax, ecx */
  EAX = (ECX);
  /* 108ba620 mov edx, ecx */
  EDX = (ECX);
  /* 108ba622 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba624 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba626 jbe 0x108ba630 */
  if ((C.cf||C.zf)) goto L_108ba630;
  /* 108ba628 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba62a jb 0x108ba7a8 */
  if (C.cf) goto L_108ba7a8;
L_108ba630:;
  /* 108ba630 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 108ba636 jne 0x108ba64c */
  if (!C.zf) goto L_108ba64c;
  /* 108ba638 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108ba63b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 108ba63e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba641 jb 0x108ba66c */
  if (C.cf) goto L_108ba66c;
  /* 108ba643 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108ba645 jmp dword ptr [edx*4 + 0x108ba758] */
  switch (EDX) {
    case 0: goto L_108ba768;
    case 1: goto L_108ba770;
    case 2: goto L_108ba77c;
    case 3: goto L_108ba790;
    default: x86_unimpl("switch@0x108ba645 out of table"); return;
  }
L_108ba64c:;
  /* 108ba64c mov eax, edi */
  EAX = (EDI);
  /* 108ba64e mov edx, 3 */
  EDX = (0x3u);
  /* 108ba653 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108ba656 jb 0x108ba664 */
  if (C.cf) goto L_108ba664;
  /* 108ba658 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 108ba65b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba65d jmp dword ptr [eax*4 + 0x108ba670] */
  switch (EAX) {
    case 1: goto L_108ba680;
    case 2: goto L_108ba6ac;
    case 3: goto L_108ba6d0;
    default: x86_unimpl("switch@0x108ba65d out of table"); return;
  }
L_108ba664:;
  /* 108ba664 jmp dword ptr [ecx*4 + 0x108ba768] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x108ba768)))); return;
  /* 108ba66b nop  */
  /* nop */
L_108ba66c:;
  /* 108ba66c jmp dword ptr [ecx*4 + 0x108ba6ec] */
  switch (ECX) {
    case 0: goto L_108ba74f;
    case 1: goto L_108ba73c;
    case 2: goto L_108ba734;
    case 3: goto L_108ba72c;
    case 4: goto L_108ba724;
    case 5: goto L_108ba71c;
    case 6: goto L_108ba714;
    case 7: goto L_108ba70c;
    default: x86_unimpl("switch@0x108ba66c out of table"); return;
  }
  /* 108ba673 nop  */
  /* nop */
L_108ba680:;
  /* 108ba680 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108ba682 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108ba684 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108ba686 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108ba689 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108ba68c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108ba68f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108ba692 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108ba695 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba698 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba69b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba69e jb 0x108ba66c */
  if (C.cf) goto L_108ba66c;
  /* 108ba6a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108ba6a2 jmp dword ptr [edx*4 + 0x108ba758] */
  switch (EDX) {
    case 0: goto L_108ba768;
    case 1: goto L_108ba770;
    case 2: goto L_108ba77c;
    case 3: goto L_108ba790;
    default: x86_unimpl("switch@0x108ba6a2 out of table"); return;
  }
  /* 108ba6a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108ba6ac:;
  /* 108ba6ac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108ba6ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108ba6b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108ba6b2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108ba6b5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108ba6b8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108ba6bb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba6be add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba6c1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba6c4 jb 0x108ba66c */
  if (C.cf) goto L_108ba66c;
  /* 108ba6c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108ba6c8 jmp dword ptr [edx*4 + 0x108ba758] */
  switch (EDX) {
    case 0: goto L_108ba768;
    case 1: goto L_108ba770;
    case 2: goto L_108ba77c;
    case 3: goto L_108ba790;
    default: x86_unimpl("switch@0x108ba6c8 out of table"); return;
  }
  /* 108ba6cf nop  */
  /* nop */
L_108ba6d0:;
  /* 108ba6d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108ba6d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108ba6d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108ba6d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 108ba6d7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108ba6da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108ba6db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba6de jb 0x108ba66c */
  if (C.cf) goto L_108ba66c;
  /* 108ba6e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108ba6e2 jmp dword ptr [edx*4 + 0x108ba758] */
  switch (EDX) {
    case 0: goto L_108ba768;
    case 1: goto L_108ba770;
    case 2: goto L_108ba77c;
    case 3: goto L_108ba790;
    default: x86_unimpl("switch@0x108ba6e2 out of table"); return;
  }
  /* 108ba6e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108ba70c:;
  /* 108ba70c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 108ba710 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_108ba714:;
  /* 108ba714 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 108ba718 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_108ba71c:;
  /* 108ba71c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 108ba720 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_108ba724:;
  /* 108ba724 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 108ba728 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_108ba72c:;
  /* 108ba72c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 108ba730 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_108ba734:;
  /* 108ba734 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 108ba738 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_108ba73c:;
  /* 108ba73c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 108ba740 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 108ba744 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 108ba74b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba74d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_108ba74f:;
  /* 108ba74f jmp dword ptr [edx*4 + 0x108ba758] */
  switch (EDX) {
    case 0: goto L_108ba768;
    case 1: goto L_108ba770;
    case 2: goto L_108ba77c;
    case 3: goto L_108ba790;
    default: x86_unimpl("switch@0x108ba74f out of table"); return;
  }
  /* 108ba756 mov edi, edi */
  EDI = (EDI);
L_108ba768:;
  /* 108ba768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ba76b pop esi */
  ESI = (pop32());
  /* 108ba76c pop edi */
  EDI = (pop32());
  /* 108ba76d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108ba76e ret  */
  ESPCHK(0x108ba610u, _esp0);
  ESP += 4; return;
  /* 108ba76f nop  */
  /* nop */
L_108ba770:;
  /* 108ba770 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108ba772 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108ba774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ba777 pop esi */
  ESI = (pop32());
  /* 108ba778 pop edi */
  EDI = (pop32());
  /* 108ba779 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108ba77a ret  */
  ESPCHK(0x108ba610u, _esp0);
  ESP += 4; return;
  /* 108ba77b nop  */
  /* nop */
L_108ba77c:;
  /* 108ba77c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108ba77e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108ba780 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108ba783 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108ba786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ba789 pop esi */
  ESI = (pop32());
  /* 108ba78a pop edi */
  EDI = (pop32());
  /* 108ba78b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108ba78c ret  */
  ESPCHK(0x108ba610u, _esp0);
  ESP += 4; return;
  /* 108ba78d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108ba790:;
  /* 108ba790 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108ba792 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108ba794 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108ba797 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108ba79a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108ba79d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108ba7a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ba7a3 pop esi */
  ESI = (pop32());
  /* 108ba7a4 pop edi */
  EDI = (pop32());
  /* 108ba7a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108ba7a6 ret  */
  ESPCHK(0x108ba610u, _esp0);
  ESP += 4; return;
  /* 108ba7a7 nop  */
  /* nop */
L_108ba7a8:;
  /* 108ba7a8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 108ba7ac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 108ba7b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 108ba7b6 jne 0x108ba7dc */
  if (!C.zf) goto L_108ba7dc;
  /* 108ba7b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108ba7bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 108ba7be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba7c1 jb 0x108ba7d0 */
  if (C.cf) goto L_108ba7d0;
  /* 108ba7c3 std  */
  C.df=1;
  /* 108ba7c4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108ba7c6 cld  */
  C.df=0;
  /* 108ba7c7 jmp dword ptr [edx*4 + 0x108ba8f0] */
  switch (EDX) {
    case 0: goto L_108ba900;
    case 1: goto L_108ba908;
    case 2: goto L_108ba918;
    case 3: goto L_108ba92c;
    default: x86_unimpl("switch@0x108ba7c7 out of table"); return;
  }
  /* 108ba7ce mov edi, edi */
  EDI = (EDI);
L_108ba7d0:;
  /* 108ba7d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108ba7d2 jmp dword ptr [ecx*4 + 0x108ba8a0] */
  switch (ECX) {
    case 0: goto L_108ba8e7;
    default: x86_unimpl("switch@0x108ba7d2 out of table"); return;
  }
  /* 108ba7d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108ba7dc:;
  /* 108ba7dc mov eax, edi */
  EAX = (EDI);
  /* 108ba7de mov edx, 3 */
  EDX = (0x3u);
  /* 108ba7e3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba7e6 jb 0x108ba7f4 */
  if (C.cf) goto L_108ba7f4;
  /* 108ba7e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 108ba7eb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108ba7ed jmp dword ptr [eax*4 + 0x108ba7f8] */
  switch (EAX) {
    case 1: goto L_108ba808;
    case 2: goto L_108ba828;
    case 3: goto L_108ba850;
    default: x86_unimpl("switch@0x108ba7ed out of table"); return;
  }
L_108ba7f4:;
  /* 108ba7f4 jmp dword ptr [ecx*4 + 0x108ba8f0] */
  switch (ECX) {
    case 0: goto L_108ba900;
    case 1: goto L_108ba908;
    case 2: goto L_108ba918;
    case 3: goto L_108ba92c;
    default: x86_unimpl("switch@0x108ba7f4 out of table"); return;
  }
  /* 108ba7fb nop  */
  /* nop */
L_108ba808:;
  /* 108ba808 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108ba80b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108ba80d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108ba810 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 108ba811 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108ba814 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 108ba815 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba818 jb 0x108ba7d0 */
  if (C.cf) goto L_108ba7d0;
  /* 108ba81a std  */
  C.df=1;
  /* 108ba81b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108ba81d cld  */
  C.df=0;
  /* 108ba81e jmp dword ptr [edx*4 + 0x108ba8f0] */
  switch (EDX) {
    case 0: goto L_108ba900;
    case 1: goto L_108ba908;
    case 2: goto L_108ba918;
    case 3: goto L_108ba92c;
    default: x86_unimpl("switch@0x108ba81e out of table"); return;
  }
  /* 108ba825 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108ba828:;
  /* 108ba828 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108ba82b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108ba82d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108ba830 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108ba833 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108ba836 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108ba839 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108ba83c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108ba83f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba842 jb 0x108ba7d0 */
  if (C.cf) goto L_108ba7d0;
  /* 108ba844 std  */
  C.df=1;
  /* 108ba845 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108ba847 cld  */
  C.df=0;
  /* 108ba848 jmp dword ptr [edx*4 + 0x108ba8f0] */
  switch (EDX) {
    case 0: goto L_108ba900;
    case 1: goto L_108ba908;
    case 2: goto L_108ba918;
    case 3: goto L_108ba92c;
    default: x86_unimpl("switch@0x108ba848 out of table"); return;
  }
  /* 108ba84f nop  */
  /* nop */
L_108ba850:;
  /* 108ba850 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108ba853 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108ba855 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108ba858 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108ba85b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108ba85e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108ba861 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108ba864 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108ba867 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108ba86a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108ba86d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba870 jb 0x108ba7d0 */
  if (C.cf) goto L_108ba7d0;
  /* 108ba876 std  */
  C.df=1;
  /* 108ba877 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108ba879 cld  */
  C.df=0;
  /* 108ba87a jmp dword ptr [edx*4 + 0x108ba8f0] */
  switch (EDX) {
    case 0: goto L_108ba900;
    case 1: goto L_108ba908;
    case 2: goto L_108ba918;
    case 3: goto L_108ba92c;
    default: x86_unimpl("switch@0x108ba87a out of table"); return;
  }
  /* 108ba881 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 108ba884 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 108ba885 test al, 0x8b */
  { uint32_t _r=(AL)&(0x8bu); fl_logic(_r,8); }
  /* 108ba887 adc byte ptr [eax + ebp*4 - 0x574bef75], ch */
  { uint32_t _a=(r8((uint32_t)(EAX + EBP*4 + -0x574bef75))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EAX + EBP*4 + -0x574bef75), (_r)); fl_add(_a,_b,_r,8); }
  /* 108ba88e mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 108ba890 mov esp, 0xc4108ba8 */
  ESP = (0xc4108ba8u);
  /* 108ba895 test al, 0x8b */
  { uint32_t _r=(AL)&(0x8bu); fl_logic(_r,8); }
  /* 108ba897 adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 108ba899 test al, 0x8b */
  { uint32_t _r=(AL)&(0x8bu); fl_logic(_r,8); }
  /* 108ba89b adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 108ba89d test al, 0x8b */
  { uint32_t _r=(AL)&(0x8bu); fl_logic(_r,8); }
  /* 108ba8a4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 108ba8a8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 108ba8ac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 108ba8b0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 108ba8b4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 108ba8b8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 108ba8bc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 108ba8c0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 108ba8c4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 108ba8c8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 108ba8cc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 108ba8d0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 108ba8d4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 108ba8d8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 108ba8dc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 108ba8e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba8e5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_108ba8e7:;
  /* 108ba8e7 jmp dword ptr [edx*4 + 0x108ba8f0] */
  switch (EDX) {
    case 0: goto L_108ba900;
    case 1: goto L_108ba908;
    case 2: goto L_108ba918;
    case 3: goto L_108ba92c;
    default: x86_unimpl("switch@0x108ba8e7 out of table"); return;
  }
  /* 108ba8ee mov edi, edi */
  EDI = (EDI);
L_108ba900:;
  /* 108ba900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ba903 pop esi */
  ESI = (pop32());
  /* 108ba904 pop edi */
  EDI = (pop32());
  /* 108ba905 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108ba906 ret  */
  ESPCHK(0x108ba610u, _esp0);
  ESP += 4; return;
  /* 108ba907 nop  */
  /* nop */
L_108ba908:;
  /* 108ba908 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108ba90b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108ba90e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ba911 pop esi */
  ESI = (pop32());
  /* 108ba912 pop edi */
  EDI = (pop32());
  /* 108ba913 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108ba914 ret  */
  ESPCHK(0x108ba610u, _esp0);
  ESP += 4; return;
  /* 108ba915 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108ba918:;
  /* 108ba918 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108ba91b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108ba91e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108ba921 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108ba924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ba927 pop esi */
  ESI = (pop32());
  /* 108ba928 pop edi */
  EDI = (pop32());
  /* 108ba929 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108ba92a ret  */
  ESPCHK(0x108ba610u, _esp0);
  ESP += 4; return;
  /* 108ba92b nop  */
  /* nop */
L_108ba92c:;
  /* 108ba92c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108ba92f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108ba932 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108ba935 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108ba938 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108ba93b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108ba93e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108ba941 pop esi */
  ESI = (pop32());
  /* 108ba942 pop edi */
  EDI = (pop32());
  /* 108ba943 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108ba944 ret  */
  ESPCHK(0x108ba610u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x108ba950 (104 bytes, 43 insns) */
void f_108ba950(void) {
  FTRACE(0x108ba950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108ba950 push ebx */
  push32((uint32_t)(EBX));
  /* 108ba951 push esi */
  push32((uint32_t)(ESI));
  /* 108ba952 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 108ba956 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108ba958 jne 0x108ba972 */
  if (!C.zf) goto L_108ba972;
  /* 108ba95a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 108ba95e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 108ba962 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108ba964 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108ba966 mov ebx, eax */
  EBX = (EAX);
  /* 108ba968 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 108ba96c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108ba96e mov edx, ebx */
  EDX = (EBX);
  /* 108ba970 jmp 0x108ba9b3 */
  goto L_108ba9b3;
L_108ba972:;
  /* 108ba972 mov ecx, eax */
  ECX = (EAX);
  /* 108ba974 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 108ba978 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 108ba97c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_108ba980:;
  /* 108ba980 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 108ba982 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 108ba984 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 108ba986 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 108ba988 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108ba98a jne 0x108ba980 */
  if (!C.zf) goto L_108ba980;
  /* 108ba98c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108ba98e mov esi, eax */
  ESI = (EAX);
  /* 108ba990 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 108ba994 mov ecx, eax */
  ECX = (EAX);
  /* 108ba996 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 108ba99a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 108ba99c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108ba99e jb 0x108ba9ae */
  if (C.cf) goto L_108ba9ae;
  /* 108ba9a0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba9a4 ja 0x108ba9ae */
  if ((!C.cf&&!C.zf)) goto L_108ba9ae;
  /* 108ba9a6 jb 0x108ba9af */
  if (C.cf) goto L_108ba9af;
  /* 108ba9a8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108ba9ac jbe 0x108ba9af */
  if ((C.cf||C.zf)) goto L_108ba9af;
L_108ba9ae:;
  /* 108ba9ae dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_108ba9af:;
  /* 108ba9af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108ba9b1 mov eax, esi */
  EAX = (ESI);
L_108ba9b3:;
  /* 108ba9b3 pop esi */
  ESI = (pop32());
  /* 108ba9b4 pop ebx */
  EBX = (pop32());
  /* 108ba9b5 ret 0x10 */
  ESPCHK(0x108ba950u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x108ba9c0 (117 bytes, 44 insns) */
void f_108ba9c0(void) {
  FTRACE(0x108ba9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108ba9c0 push ebx */
  push32((uint32_t)(EBX));
  /* 108ba9c1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 108ba9c5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108ba9c7 jne 0x108ba9e1 */
  if (!C.zf) goto L_108ba9e1;
  /* 108ba9c9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 108ba9cd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 108ba9d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108ba9d3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108ba9d5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 108ba9d9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108ba9db mov eax, edx */
  EAX = (EDX);
  /* 108ba9dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108ba9df jmp 0x108baa31 */
  goto L_108baa31;
L_108ba9e1:;
  /* 108ba9e1 mov ecx, eax */
  ECX = (EAX);
  /* 108ba9e3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 108ba9e7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 108ba9eb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_108ba9ef:;
  /* 108ba9ef shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 108ba9f1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 108ba9f3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 108ba9f5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 108ba9f7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108ba9f9 jne 0x108ba9ef */
  if (!C.zf) goto L_108ba9ef;
  /* 108ba9fb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108ba9fd mov ecx, eax */
  ECX = (EAX);
  /* 108ba9ff mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 108baa03 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 108baa04 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 108baa08 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108baa0a jb 0x108baa1a */
  if (C.cf) goto L_108baa1a;
  /* 108baa0c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108baa10 ja 0x108baa1a */
  if ((!C.cf&&!C.zf)) goto L_108baa1a;
  /* 108baa12 jb 0x108baa22 */
  if (C.cf) goto L_108baa22;
  /* 108baa14 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108baa18 jbe 0x108baa22 */
  if ((C.cf||C.zf)) goto L_108baa22;
L_108baa1a:;
  /* 108baa1a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108baa1e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_108baa22:;
  /* 108baa22 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108baa26 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108baa2a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 108baa2c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108baa2e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_108baa31:;
  /* 108baa31 pop ebx */
  EBX = (pop32());
  /* 108baa32 ret 0x10 */
  ESPCHK(0x108ba9c0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000aa40 @ 0x108baa40 (628 bytes, 214 insns) */
void f_108baa40(void) {
  FTRACE(0x108baa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108baa40 push ebp */
  push32((uint32_t)(EBP));
  /* 108baa41 mov ebp, esp */
  EBP = (ESP);
  /* 108baa43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108baa46 push ebx */
  push32((uint32_t)(EBX));
  /* 108baa47 push esi */
  push32((uint32_t)(ESI));
  /* 108baa48 push edi */
  push32((uint32_t)(EDI));
L_108baa49:;
  /* 108baa49 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108baa4d jne 0x108baa6d */
  if (!C.zf) goto L_108baa6d;
  /* 108baa4f push 0x108daf3c */
  push32((uint32_t)(0x108daf3cu));
  /* 108baa54 push 0 */
  push32((uint32_t)(0x0u));
  /* 108baa56 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 108baa58 push 0x108daf30 */
  push32((uint32_t)(0x108daf30u));
  /* 108baa5d push 2 */
  push32((uint32_t)(0x2u));
  /* 108baa5f call 0x108b2df0 */
  push32(0x108baa64u); f_108b2df0();
  /* 108baa64 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108baa67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108baa6a jne 0x108baa6d */
  if (!C.zf) goto L_108baa6d;
  /* 108baa6c int3  */
  x86_unimpl("int3 @ 0x108baa6c");
L_108baa6d:;
  /* 108baa6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108baa6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108baa71 jne 0x108baa49 */
  if (!C.zf) goto L_108baa49;
  /* 108baa73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108baa76 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108baa79 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108baa7c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108baa7f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108baa82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108baa85 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108baa88 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 108baa8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108baa90 je 0x108baa9f */
  if (C.zf) goto L_108baa9f;
  /* 108baa92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108baa95 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108baa98 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 108baa9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108baa9d je 0x108baab5 */
  if (C.zf) goto L_108baab5;
L_108baa9f:;
  /* 108baa9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108baaa2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108baaa5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 108baaa7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108baaaa mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 108baaad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108baab0 jmp 0x108bacad */
  goto L_108bacad;
L_108baab5:;
  /* 108baab5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108baab8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108baabb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 108baabe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108baac0 je 0x108bab0c */
  if (C.zf) goto L_108bab0c;
  /* 108baac2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108baac5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 108baacc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108baacf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108baad2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 108baad5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108baad7 je 0x108baaf5 */
  if (C.zf) goto L_108baaf5;
  /* 108baad9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108baadc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108baadf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108baae2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108baae4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108baae7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108baaea and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 108baaed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108baaf0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 108baaf3 jmp 0x108bab0c */
  goto L_108bab0c;
L_108baaf5:;
  /* 108baaf5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108baaf8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108baafb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 108baafe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bab01 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 108bab04 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bab07 jmp 0x108bacad */
  goto L_108bacad;
L_108bab0c:;
  /* 108bab0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bab0f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108bab12 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 108bab15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bab18 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 108bab1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bab1e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108bab21 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 108bab24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bab27 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 108bab2a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bab2d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 108bab34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108bab3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bab3e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108bab41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bab44 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108bab47 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 108bab4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bab4f jne 0x108bab7f */
  if (!C.zf) goto L_108bab7f;
  /* 108bab51 cmp dword ptr [ebp - 8], 0x108de140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x108de140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bab58 je 0x108bab63 */
  if (C.zf) goto L_108bab63;
  /* 108bab5a cmp dword ptr [ebp - 8], 0x108de160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x108de160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bab61 jne 0x108bab73 */
  if (!C.zf) goto L_108bab73;
L_108bab63:;
  /* 108bab63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bab66 push edx */
  push32((uint32_t)(EDX));
  /* 108bab67 call 0x108bc9b0 */
  push32(0x108bab6cu); f_108bc9b0();
  /* 108bab6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bab6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bab71 jne 0x108bab7f */
  if (!C.zf) goto L_108bab7f;
L_108bab73:;
  /* 108bab73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bab76 push eax */
  push32((uint32_t)(EAX));
  /* 108bab77 call 0x108bc8e0 */
  push32(0x108bab7cu); f_108bc8e0();
  /* 108bab7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bab7f:;
  /* 108bab7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bab82 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108bab85 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 108bab8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bab8d je 0x108bac6b */
  if (C.zf) goto L_108bac6b;
L_108bab93:;
  /* 108bab93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bab96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bab99 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 108bab9b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bab9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108baba0 jge 0x108babc3 */
  if ((C.sf==C.of)) goto L_108babc3;
  /* 108baba2 push 0x108daef0 */
  push32((uint32_t)(0x108daef0u));
  /* 108baba7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108baba9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 108babae push 0x108daf30 */
  push32((uint32_t)(0x108daf30u));
  /* 108babb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 108babb5 call 0x108b2df0 */
  push32(0x108babbau); f_108b2df0();
  /* 108babba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108babbd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108babc0 jne 0x108babc3 */
  if (!C.zf) goto L_108babc3;
  /* 108babc2 int3  */
  x86_unimpl("int3 @ 0x108babc2");
L_108babc3:;
  /* 108babc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108babc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108babc7 jne 0x108bab93 */
  if (!C.zf) goto L_108bab93;
  /* 108babc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108babcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108babcf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 108babd1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108babd4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108babd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108babda mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108babdd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108babe0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108babe3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108babe5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108babe8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 108babeb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108babee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108babf1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108babf4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108babf8 jle 0x108bac16 */
  if ((C.zf||C.sf!=C.of)) goto L_108bac16;
  /* 108babfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108babfd push ecx */
  push32((uint32_t)(ECX));
  /* 108babfe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bac01 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108bac04 push eax */
  push32((uint32_t)(EAX));
  /* 108bac05 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bac08 push ecx */
  push32((uint32_t)(ECX));
  /* 108bac09 call 0x108bc5d0 */
  push32(0x108bac0eu); f_108bc5d0();
  /* 108bac0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bac11 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108bac14 jmp 0x108bac5e */
  goto L_108bac5e;
L_108bac16:;
  /* 108bac16 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bac1a je 0x108bac39 */
  if (C.zf) goto L_108bac39;
  /* 108bac1c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bac1f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 108bac22 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bac25 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 108bac28 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bac2b mov ecx, dword ptr [edx*4 + 0x108e0f40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x108e0f40)));
  /* 108bac32 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bac34 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108bac37 jmp 0x108bac40 */
  goto L_108bac40;
L_108bac39:;
  /* 108bac39 mov dword ptr [ebp - 0x14], 0x108dda60 */
  w32((uint32_t)(EBP + -0x14), (0x108dda60u));
L_108bac40:;
  /* 108bac40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108bac43 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 108bac47 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 108bac4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bac4c je 0x108bac5e */
  if (C.zf) goto L_108bac5e;
  /* 108bac4e push 2 */
  push32((uint32_t)(0x2u));
  /* 108bac50 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bac52 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bac55 push ecx */
  push32((uint32_t)(ECX));
  /* 108bac56 call 0x108bc480 */
  push32(0x108bac5bu); f_108bc480();
  /* 108bac5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bac5e:;
  /* 108bac5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bac61 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108bac64 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 108bac67 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 108bac69 jmp 0x108bac89 */
  goto L_108bac89;
L_108bac6b:;
  /* 108bac6b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108bac72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bac75 push edx */
  push32((uint32_t)(EDX));
  /* 108bac76 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 108bac79 push eax */
  push32((uint32_t)(EAX));
  /* 108bac7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bac7d push ecx */
  push32((uint32_t)(ECX));
  /* 108bac7e call 0x108bc5d0 */
  push32(0x108bac83u); f_108bc5d0();
  /* 108bac83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bac86 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_108bac89:;
  /* 108bac89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bac8c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bac8f je 0x108baca5 */
  if (C.zf) goto L_108baca5;
  /* 108bac91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bac94 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108bac97 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 108bac9a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bac9d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 108baca0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108baca3 jmp 0x108bacad */
  goto L_108bacad;
L_108baca5:;
  /* 108baca5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108baca8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_108bacad:;
  /* 108bacad pop edi */
  EDI = (pop32());
  /* 108bacae pop esi */
  ESI = (pop32());
  /* 108bacaf pop ebx */
  EBX = (pop32());
  /* 108bacb0 mov esp, ebp */
  ESP = (EBP);
  /* 108bacb2 pop ebp */
  EBP = (pop32());
  /* 108bacb3 ret  */
  ESPCHK(0x108baa40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acc0 @ 0x108bacc0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_108bacc0(void) {
  FTRACE(0x108bacc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bacc0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bacc1 mov ebp, esp */
  EBP = (ESP);
  /* 108bacc3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bacc9 push ebx */
  push32((uint32_t)(EBX));
  /* 108bacca push esi */
  push32((uint32_t)(ESI));
  /* 108baccb push edi */
  push32((uint32_t)(EDI));
  /* 108baccc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 108bacd3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 108bacdd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_108bace4:;
  /* 108bace4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bace7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108bace9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 108bacec movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108bacf0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bacf3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bacf6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 108bacf9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bacfb je 0x108bb8d7 */
  if (C.zf) goto L_108bb8d7;
  /* 108bad01 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bad08 jl 0x108bb8d7 */
  if ((C.sf!=C.of)) goto L_108bb8d7;
  /* 108bad0e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108bad12 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bad15 jl 0x108bad36 */
  if ((C.sf!=C.of)) goto L_108bad36;
  /* 108bad17 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108bad1b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bad1e jg 0x108bad36 */
  if ((!C.zf&&C.sf==C.of)) goto L_108bad36;
  /* 108bad20 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108bad24 movsx ecx, byte ptr [eax + 0x108daf28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x108daf28))));
  /* 108bad2b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 108bad2e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 108bad34 jmp 0x108bad40 */
  goto L_108bad40;
L_108bad36:;
  /* 108bad36 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_108bad40:;
  /* 108bad40 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 108bad46 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108bad49 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bad4c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108bad4f movsx edx, byte ptr [ecx + eax*8 + 0x108daf48] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x108daf48))));
  /* 108bad57 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 108bad5a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108bad5d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108bad60 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 108bad66 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bad6d ja 0x108bb8d2 */
  if ((!C.cf&&!C.zf)) goto L_108bb8d2;
  /* 108bad73 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 108bad79 jmp dword ptr [ecx*4 + 0x108bb8e4] */
  switch (ECX) {
    case 0: goto L_108bad80;
    case 1: goto L_108bae1a;
    case 2: goto L_108bae5c;
    case 3: goto L_108baecb;
    case 4: goto L_108baf23;
    case 5: goto L_108baf32;
    case 6: goto L_108baf7e;
    case 7: goto L_108bb011;
    case 8: goto L_108baea8;
    case 9: goto L_108baeb3;
    case 10: goto L_108bae9e;
    case 11: goto L_108bae93;
    case 12: goto L_108baebe;
    case 13: goto L_108baec6;
    default: x86_unimpl("switch@0x108bad79 out of table"); return;
  }
L_108bad80:;
  /* 108bad80 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 108bad87 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108bad8a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108bad90 mov eax, dword ptr [0x108ddc98] */
  EAX = (r32((uint32_t)(0x108ddc98)));
  /* 108bad95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108bad97 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 108bad9b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 108bada1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bada3 je 0x108badfd */
  if (C.zf) goto L_108badfd;
  /* 108bada5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 108badab push edx */
  push32((uint32_t)(EDX));
  /* 108badac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108badaf push eax */
  push32((uint32_t)(EAX));
  /* 108badb0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108badb4 push ecx */
  push32((uint32_t)(ECX));
  /* 108badb5 call 0x108bb9f0 */
  push32(0x108badbau); f_108bb9f0();
  /* 108badba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108badbd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108badc0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108badc2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 108badc5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108badc8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108badcb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_108badce:;
  /* 108badce movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108badd2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108badd4 jne 0x108badf7 */
  if (!C.zf) goto L_108badf7;
  /* 108badd6 push 0x108dafc8 */
  push32((uint32_t)(0x108dafc8u));
  /* 108baddb push 0 */
  push32((uint32_t)(0x0u));
  /* 108baddd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 108bade2 push 0x108dafbc */
  push32((uint32_t)(0x108dafbcu));
  /* 108bade7 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bade9 call 0x108b2df0 */
  push32(0x108badeeu); f_108b2df0();
  /* 108badee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108badf1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108badf4 jne 0x108badf7 */
  if (!C.zf) goto L_108badf7;
  /* 108badf6 int3  */
  x86_unimpl("int3 @ 0x108badf6");
L_108badf7:;
  /* 108badf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108badf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108badfb jne 0x108badce */
  if (!C.zf) goto L_108badce;
L_108badfd:;
  /* 108badfd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 108bae03 push ecx */
  push32((uint32_t)(ECX));
  /* 108bae04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bae07 push edx */
  push32((uint32_t)(EDX));
  /* 108bae08 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108bae0c push eax */
  push32((uint32_t)(EAX));
  /* 108bae0d call 0x108bb9f0 */
  push32(0x108bae12u); f_108bb9f0();
  /* 108bae12 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bae15 jmp 0x108bb8d2 */
  goto L_108bb8d2;
L_108bae1a:;
  /* 108bae1a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108bae21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bae24 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 108bae2a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 108bae30 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 108bae36 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 108bae3c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108bae3f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108bae46 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 108bae50 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 108bae57 jmp 0x108bb8d2 */
  goto L_108bb8d2;
L_108bae5c:;
  /* 108bae5c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108bae60 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 108bae66 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 108bae6c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bae6f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 108bae75 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bae7c ja 0x108baec6 */
  if ((!C.cf&&!C.zf)) goto L_108baec6;
  /* 108bae7e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 108bae84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bae86 mov al, byte ptr [ecx + 0x108bb91c] */
  AL = (r8((uint32_t)(ECX + 0x108bb91c)));
  /* 108bae8c jmp dword ptr [eax*4 + 0x108bb904] */
  switch (EAX) {
    case 0: goto L_108baea8;
    case 1: goto L_108baeb3;
    case 2: goto L_108bae9e;
    case 3: goto L_108bae93;
    case 4: goto L_108baebe;
    case 5: goto L_108baec6;
    default: x86_unimpl("switch@0x108bae8c out of table"); return;
  }
L_108bae93:;
  /* 108bae93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bae96 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 108bae99 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108bae9c jmp 0x108baec6 */
  goto L_108baec6;
L_108bae9e:;
  /* 108bae9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108baea1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 108baea3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108baea6 jmp 0x108baec6 */
  goto L_108baec6;
L_108baea8:;
  /* 108baea8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108baeab or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 108baeae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108baeb1 jmp 0x108baec6 */
  goto L_108baec6;
L_108baeb3:;
  /* 108baeb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108baeb6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 108baeb9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108baebc jmp 0x108baec6 */
  goto L_108baec6;
L_108baebe:;
  /* 108baebe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108baec1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 108baec3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108baec6:;
  /* 108baec6 jmp 0x108bb8d2 */
  goto L_108bb8d2;
L_108baecb:;
  /* 108baecb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108baecf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108baed2 jne 0x108baf07 */
  if (!C.zf) goto L_108baf07;
  /* 108baed4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 108baed7 push edx */
  push32((uint32_t)(EDX));
  /* 108baed8 call 0x108bbb00 */
  push32(0x108baeddu); f_108bbb00();
  /* 108baedd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108baee0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 108baee6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108baeed jge 0x108baf05 */
  if ((C.sf==C.of)) goto L_108baf05;
  /* 108baeef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108baef2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 108baef4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108baef7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 108baefd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108baeff mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_108baf05:;
  /* 108baf05 jmp 0x108baf1e */
  goto L_108baf1e;
L_108baf07:;
  /* 108baf07 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 108baf0d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108baf10 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108baf14 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 108baf18 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_108baf1e:;
  /* 108baf1e jmp 0x108bb8d2 */
  goto L_108bb8d2;
L_108baf23:;
  /* 108baf23 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 108baf2d jmp 0x108bb8d2 */
  goto L_108bb8d2;
L_108baf32:;
  /* 108baf32 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108baf36 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108baf39 jne 0x108baf62 */
  if (!C.zf) goto L_108baf62;
  /* 108baf3b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 108baf3e push eax */
  push32((uint32_t)(EAX));
  /* 108baf3f call 0x108bbb00 */
  push32(0x108baf44u); f_108bbb00();
  /* 108baf44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108baf47 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 108baf4d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108baf54 jge 0x108baf60 */
  if ((C.sf==C.of)) goto L_108baf60;
  /* 108baf56 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_108baf60:;
  /* 108baf60 jmp 0x108baf79 */
  goto L_108baf79;
L_108baf62:;
  /* 108baf62 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 108baf68 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108baf6b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108baf6f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 108baf73 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_108baf79:;
  /* 108baf79 jmp 0x108bb8d2 */
  goto L_108bb8d2;
L_108baf7e:;
  /* 108baf7e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108baf82 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 108baf88 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 108baf8e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108baf91 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 108baf97 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108baf9e ja 0x108bb00c */
  if ((!C.cf&&!C.zf)) goto L_108bb00c;
  /* 108bafa0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 108bafa6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bafa8 mov al, byte ptr [ecx + 0x108bb941] */
  AL = (r8((uint32_t)(ECX + 0x108bb941)));
  /* 108bafae jmp dword ptr [eax*4 + 0x108bb92d] */
  switch (EAX) {
    case 0: goto L_108bafc0;
    case 1: goto L_108baff9;
    case 2: goto L_108bafb5;
    case 3: goto L_108bb003;
    case 4: goto L_108bb00c;
    default: x86_unimpl("switch@0x108bafae out of table"); return;
  }
L_108bafb5:;
  /* 108bafb5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bafb8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 108bafbb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108bafbe jmp 0x108bb00c */
  goto L_108bb00c;
L_108bafc0:;
  /* 108bafc0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bafc3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108bafc6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bafc9 jne 0x108bafeb */
  if (!C.zf) goto L_108bafeb;
  /* 108bafcb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bafce movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 108bafd2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bafd5 jne 0x108bafeb */
  if (!C.zf) goto L_108bafeb;
  /* 108bafd7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bafda add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bafdd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 108bafe0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bafe3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 108bafe6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108bafe9 jmp 0x108baff7 */
  goto L_108baff7;
L_108bafeb:;
  /* 108bafeb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 108baff2 jmp 0x108bad80 */
  goto L_108bad80;
L_108baff7:;
  /* 108baff7 jmp 0x108bb00c */
  goto L_108bb00c;
L_108baff9:;
  /* 108baff9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108baffc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 108baffe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108bb001 jmp 0x108bb00c */
  goto L_108bb00c;
L_108bb003:;
  /* 108bb003 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb006 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 108bb009 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108bb00c:;
  /* 108bb00c jmp 0x108bb8d2 */
  goto L_108bb8d2;
L_108bb011:;
  /* 108bb011 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108bb015 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 108bb01b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 108bb021 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bb024 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 108bb02a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb031 ja 0x108bb6f7 */
  if ((!C.cf&&!C.zf)) goto L_108bb6f7;
  /* 108bb037 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 108bb03d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108bb03f mov cl, byte ptr [edx + 0x108bb9ac] */
  CL = (r8((uint32_t)(EDX + 0x108bb9ac)));
  /* 108bb045 jmp dword ptr [ecx*4 + 0x108bb970] */
  switch (ECX) {
    case 0: goto L_108bb04c;
    case 1: goto L_108bb2e0;
    case 2: goto L_108bb170;
    case 3: goto L_108bb419;
    case 4: goto L_108bb0db;
    case 5: goto L_108bb061;
    case 6: goto L_108bb3eb;
    case 7: goto L_108bb2f0;
    case 8: goto L_108bb295;
    case 9: goto L_108bb465;
    case 10: goto L_108bb40f;
    case 11: goto L_108bb186;
    case 12: goto L_108bb403;
    case 13: goto L_108bb425;
    case 14: goto L_108bb6f7;
    default: x86_unimpl("switch@0x108bb045 out of table"); return;
  }
L_108bb04c:;
  /* 108bb04c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb04f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 108bb054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bb056 jne 0x108bb061 */
  if (!C.zf) goto L_108bb061;
  /* 108bb058 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb05b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 108bb05e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108bb061:;
  /* 108bb061 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb064 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 108bb06a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bb06c je 0x108bb0a7 */
  if (C.zf) goto L_108bb0a7;
  /* 108bb06e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 108bb071 push eax */
  push32((uint32_t)(EAX));
  /* 108bb072 call 0x108bbb40 */
  push32(0x108bb077u); f_108bbb40();
  /* 108bb077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb07a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 108bb07e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 108bb082 push ecx */
  push32((uint32_t)(ECX));
  /* 108bb083 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 108bb089 push edx */
  push32((uint32_t)(EDX));
  /* 108bb08a call 0x108bcc20 */
  push32(0x108bb08fu); f_108bcc20();
  /* 108bb08f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb092 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108bb095 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb099 jge 0x108bb0a5 */
  if ((C.sf==C.of)) goto L_108bb0a5;
  /* 108bb09b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_108bb0a5:;
  /* 108bb0a5 jmp 0x108bb0cd */
  goto L_108bb0cd;
L_108bb0a7:;
  /* 108bb0a7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 108bb0aa push eax */
  push32((uint32_t)(EAX));
  /* 108bb0ab call 0x108bbb00 */
  push32(0x108bb0b0u); f_108bbb00();
  /* 108bb0b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb0b3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 108bb0ba mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 108bb0c0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 108bb0c6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_108bb0cd:;
  /* 108bb0cd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 108bb0d3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 108bb0d6 jmp 0x108bb6f7 */
  goto L_108bb6f7;
L_108bb0db:;
  /* 108bb0db lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 108bb0de push eax */
  push32((uint32_t)(EAX));
  /* 108bb0df call 0x108bbb00 */
  push32(0x108bb0e4u); f_108bbb00();
  /* 108bb0e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb0e7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 108bb0ed cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb0f4 je 0x108bb102 */
  if (C.zf) goto L_108bb102;
  /* 108bb0f6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 108bb0fc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb100 jne 0x108bb11c */
  if (!C.zf) goto L_108bb11c;
L_108bb102:;
  /* 108bb102 mov edx, dword ptr [0x108ddfb0] */
  EDX = (r32((uint32_t)(0x108ddfb0)));
  /* 108bb108 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 108bb10b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bb10e push eax */
  push32((uint32_t)(EAX));
  /* 108bb10f call 0x108b6b60 */
  push32(0x108bb114u); f_108b6b60();
  /* 108bb114 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb117 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108bb11a jmp 0x108bb16b */
  goto L_108bb16b;
L_108bb11c:;
  /* 108bb11c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb11f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 108bb125 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bb127 je 0x108bb14c */
  if (C.zf) goto L_108bb14c;
  /* 108bb129 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 108bb12f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108bb132 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108bb135 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 108bb13b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 108bb13e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 108bb140 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 108bb143 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 108bb14a jmp 0x108bb16b */
  goto L_108bb16b;
L_108bb14c:;
  /* 108bb14c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 108bb153 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 108bb159 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108bb15c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 108bb15f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 108bb165 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 108bb168 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_108bb16b:;
  /* 108bb16b jmp 0x108bb6f7 */
  goto L_108bb6f7;
L_108bb170:;
  /* 108bb170 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb173 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 108bb179 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bb17b jne 0x108bb186 */
  if (!C.zf) goto L_108bb186;
  /* 108bb17d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb180 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 108bb183 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108bb186:;
  /* 108bb186 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb18d jne 0x108bb19b */
  if (!C.zf) goto L_108bb19b;
  /* 108bb18f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 108bb199 jmp 0x108bb1a7 */
  goto L_108bb1a7;
L_108bb19b:;
  /* 108bb19b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 108bb1a1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_108bb1a7:;
  /* 108bb1a7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 108bb1ad mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 108bb1b3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 108bb1b6 push edx */
  push32((uint32_t)(EDX));
  /* 108bb1b7 call 0x108bbb00 */
  push32(0x108bb1bcu); f_108bbb00();
  /* 108bb1bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb1bf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108bb1c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb1c5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 108bb1ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bb1cc je 0x108bb236 */
  if (C.zf) goto L_108bb236;
  /* 108bb1ce cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb1d2 jne 0x108bb1dd */
  if (!C.zf) goto L_108bb1dd;
  /* 108bb1d4 mov ecx, dword ptr [0x108ddfb4] */
  ECX = (r32((uint32_t)(0x108ddfb4)));
  /* 108bb1da mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_108bb1dd:;
  /* 108bb1dd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 108bb1e4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bb1e7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_108bb1ed:;
  /* 108bb1ed mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 108bb1f3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 108bb1f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bb1fc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 108bb202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bb204 je 0x108bb226 */
  if (C.zf) goto L_108bb226;
  /* 108bb206 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 108bb20c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bb20e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 108bb211 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bb213 je 0x108bb226 */
  if (C.zf) goto L_108bb226;
  /* 108bb215 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 108bb21b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb21e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 108bb224 jmp 0x108bb1ed */
  goto L_108bb1ed;
L_108bb226:;
  /* 108bb226 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 108bb22c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bb22f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 108bb231 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 108bb234 jmp 0x108bb290 */
  goto L_108bb290;
L_108bb236:;
  /* 108bb236 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb23a jne 0x108bb244 */
  if (!C.zf) goto L_108bb244;
  /* 108bb23c mov eax, dword ptr [0x108ddfb0] */
  EAX = (r32((uint32_t)(0x108ddfb0)));
  /* 108bb241 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_108bb244:;
  /* 108bb244 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bb247 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_108bb24d:;
  /* 108bb24d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 108bb253 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 108bb259 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bb25c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 108bb262 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bb264 je 0x108bb284 */
  if (C.zf) goto L_108bb284;
  /* 108bb266 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 108bb26c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108bb26f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bb271 je 0x108bb284 */
  if (C.zf) goto L_108bb284;
  /* 108bb273 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 108bb279 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb27c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 108bb282 jmp 0x108bb24d */
  goto L_108bb24d;
L_108bb284:;
  /* 108bb284 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 108bb28a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bb28d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_108bb290:;
  /* 108bb290 jmp 0x108bb6f7 */
  goto L_108bb6f7;
L_108bb295:;
  /* 108bb295 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 108bb298 push edx */
  push32((uint32_t)(EDX));
  /* 108bb299 call 0x108bbb00 */
  push32(0x108bb29eu); f_108bbb00();
  /* 108bb29e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb2a1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 108bb2a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb2aa and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 108bb2ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bb2af je 0x108bb2c3 */
  if (C.zf) goto L_108bb2c3;
  /* 108bb2b1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 108bb2b7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 108bb2be mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 108bb2c1 jmp 0x108bb2d1 */
  goto L_108bb2d1;
L_108bb2c3:;
  /* 108bb2c3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 108bb2c9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 108bb2cf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_108bb2d1:;
  /* 108bb2d1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 108bb2db jmp 0x108bb6f7 */
  goto L_108bb6f7;
L_108bb2e0:;
  /* 108bb2e0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 108bb2e7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 108bb2ea add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 108bb2ed mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_108bb2f0:;
  /* 108bb2f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb2f3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 108bb2f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108bb2f8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 108bb2fe mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 108bb301 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb308 jge 0x108bb316 */
  if ((C.sf==C.of)) goto L_108bb316;
  /* 108bb30a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 108bb314 jmp 0x108bb332 */
  goto L_108bb332;
L_108bb316:;
  /* 108bb316 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb31d jne 0x108bb332 */
  if (!C.zf) goto L_108bb332;
  /* 108bb31f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108bb323 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb326 jne 0x108bb332 */
  if (!C.zf) goto L_108bb332;
  /* 108bb328 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_108bb332:;
  /* 108bb332 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bb335 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb338 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 108bb33b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bb33e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bb341 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108bb343 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 108bb346 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 108bb34c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 108bb352 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bb355 push ecx */
  push32((uint32_t)(ECX));
  /* 108bb356 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 108bb35c push edx */
  push32((uint32_t)(EDX));
  /* 108bb35d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108bb361 push eax */
  push32((uint32_t)(EAX));
  /* 108bb362 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bb365 push ecx */
  push32((uint32_t)(ECX));
  /* 108bb366 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 108bb36c push edx */
  push32((uint32_t)(EDX));
  /* 108bb36d call dword ptr [0x108de3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108de3a0))), 0x108bb373u);
  /* 108bb373 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb376 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb379 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 108bb37e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bb380 je 0x108bb398 */
  if (C.zf) goto L_108bb398;
  /* 108bb382 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb389 jne 0x108bb398 */
  if (!C.zf) goto L_108bb398;
  /* 108bb38b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bb38e push ecx */
  push32((uint32_t)(ECX));
  /* 108bb38f call dword ptr [0x108de3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108de3ac))), 0x108bb395u);
  /* 108bb395 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bb398:;
  /* 108bb398 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 108bb39c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb39f jne 0x108bb3ba */
  if (!C.zf) goto L_108bb3ba;
  /* 108bb3a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb3a4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 108bb3a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bb3ab jne 0x108bb3ba */
  if (!C.zf) goto L_108bb3ba;
  /* 108bb3ad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bb3b0 push ecx */
  push32((uint32_t)(ECX));
  /* 108bb3b1 call dword ptr [0x108de3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108de3a4))), 0x108bb3b7u);
  /* 108bb3b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bb3ba:;
  /* 108bb3ba mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bb3bd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108bb3c0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb3c3 jne 0x108bb3d7 */
  if (!C.zf) goto L_108bb3d7;
  /* 108bb3c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb3c8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 108bb3cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108bb3ce mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bb3d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb3d4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_108bb3d7:;
  /* 108bb3d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bb3da push eax */
  push32((uint32_t)(EAX));
  /* 108bb3db call 0x108b6b60 */
  push32(0x108bb3e0u); f_108b6b60();
  /* 108bb3e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb3e3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108bb3e6 jmp 0x108bb6f7 */
  goto L_108bb6f7;
L_108bb3eb:;
  /* 108bb3eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb3ee or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 108bb3f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108bb3f4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 108bb3fe jmp 0x108bb485 */
  goto L_108bb485;
L_108bb403:;
  /* 108bb403 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 108bb40d jmp 0x108bb485 */
  goto L_108bb485;
L_108bb40f:;
  /* 108bb40f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_108bb419:;
  /* 108bb419 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 108bb423 jmp 0x108bb42f */
  goto L_108bb42f;
L_108bb425:;
  /* 108bb425 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_108bb42f:;
  /* 108bb42f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 108bb439 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb43c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 108bb442 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bb444 je 0x108bb463 */
  if (C.zf) goto L_108bb463;
  /* 108bb446 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 108bb44d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 108bb453 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb456 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 108bb45c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_108bb463:;
  /* 108bb463 jmp 0x108bb485 */
  goto L_108bb485;
L_108bb465:;
  /* 108bb465 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 108bb46f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb472 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 108bb478 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bb47a je 0x108bb485 */
  if (C.zf) goto L_108bb485;
  /* 108bb47c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb47f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 108bb482 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108bb485:;
  /* 108bb485 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb488 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 108bb48d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bb48f je 0x108bb4ae */
  if (C.zf) goto L_108bb4ae;
  /* 108bb491 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 108bb494 push ecx */
  push32((uint32_t)(ECX));
  /* 108bb495 call 0x108bbb20 */
  push32(0x108bb49au); f_108bbb20();
  /* 108bb49a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb49d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 108bb4a3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 108bb4a9 jmp 0x108bb53f */
  goto L_108bb53f;
L_108bb4ae:;
  /* 108bb4ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb4b1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 108bb4b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bb4b6 je 0x108bb500 */
  if (C.zf) goto L_108bb500;
  /* 108bb4b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb4bb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 108bb4be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bb4c0 je 0x108bb4e0 */
  if (C.zf) goto L_108bb4e0;
  /* 108bb4c2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 108bb4c5 push ecx */
  push32((uint32_t)(ECX));
  /* 108bb4c6 call 0x108bbb00 */
  push32(0x108bb4cbu); f_108bbb00();
  /* 108bb4cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb4ce movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 108bb4d1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108bb4d2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 108bb4d8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 108bb4de jmp 0x108bb4fe */
  goto L_108bb4fe;
L_108bb4e0:;
  /* 108bb4e0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 108bb4e3 push edx */
  push32((uint32_t)(EDX));
  /* 108bb4e4 call 0x108bbb00 */
  push32(0x108bb4e9u); f_108bbb00();
  /* 108bb4e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb4ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bb4f1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108bb4f2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 108bb4f8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_108bb4fe:;
  /* 108bb4fe jmp 0x108bb53f */
  goto L_108bb53f;
L_108bb500:;
  /* 108bb500 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb503 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 108bb506 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bb508 je 0x108bb525 */
  if (C.zf) goto L_108bb525;
  /* 108bb50a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 108bb50d push ecx */
  push32((uint32_t)(ECX));
  /* 108bb50e call 0x108bbb00 */
  push32(0x108bb513u); f_108bbb00();
  /* 108bb513 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb516 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108bb517 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 108bb51d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 108bb523 jmp 0x108bb53f */
  goto L_108bb53f;
L_108bb525:;
  /* 108bb525 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 108bb528 push edx */
  push32((uint32_t)(EDX));
  /* 108bb529 call 0x108bbb00 */
  push32(0x108bb52eu); f_108bbb00();
  /* 108bb52e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb531 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108bb533 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 108bb539 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_108bb53f:;
  /* 108bb53f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb542 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 108bb545 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bb547 je 0x108bb587 */
  if (C.zf) goto L_108bb587;
  /* 108bb549 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb550 jg 0x108bb587 */
  if ((!C.zf&&C.sf==C.of)) goto L_108bb587;
  /* 108bb552 jl 0x108bb55d */
  if ((C.sf!=C.of)) goto L_108bb55d;
  /* 108bb554 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb55b jae 0x108bb587 */
  if (!C.cf) goto L_108bb587;
L_108bb55d:;
  /* 108bb55d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 108bb563 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108bb565 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 108bb56b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb56e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108bb570 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 108bb576 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 108bb57c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb57f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 108bb582 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108bb585 jmp 0x108bb59f */
  goto L_108bb59f;
L_108bb587:;
  /* 108bb587 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 108bb58d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 108bb593 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 108bb599 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_108bb59f:;
  /* 108bb59f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb5a2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 108bb5a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bb5aa jne 0x108bb5c7 */
  if (!C.zf) goto L_108bb5c7;
  /* 108bb5ac mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 108bb5b2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 108bb5b8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 108bb5bb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 108bb5c1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_108bb5c7:;
  /* 108bb5c7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb5ce jge 0x108bb5dc */
  if ((C.sf==C.of)) goto L_108bb5dc;
  /* 108bb5d0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 108bb5da jmp 0x108bb5e5 */
  goto L_108bb5e5;
L_108bb5dc:;
  /* 108bb5dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb5df and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 108bb5e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108bb5e5:;
  /* 108bb5e5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 108bb5eb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 108bb5f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bb5f3 jne 0x108bb5fc */
  if (!C.zf) goto L_108bb5fc;
  /* 108bb5f5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_108bb5fc:;
  /* 108bb5fc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 108bb5ff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_108bb602:;
  /* 108bb602 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 108bb608 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 108bb60e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bb611 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 108bb617 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bb619 jg 0x108bb62f */
  if ((!C.zf&&C.sf==C.of)) goto L_108bb62f;
  /* 108bb61b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 108bb621 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 108bb627 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bb629 je 0x108bb6b0 */
  if (C.zf) goto L_108bb6b0;
L_108bb62f:;
  /* 108bb62f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 108bb635 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108bb636 push edx */
  push32((uint32_t)(EDX));
  /* 108bb637 push eax */
  push32((uint32_t)(EAX));
  /* 108bb638 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 108bb63e push edx */
  push32((uint32_t)(EDX));
  /* 108bb63f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 108bb645 push eax */
  push32((uint32_t)(EAX));
  /* 108bb646 call 0x108ba9c0 */
  push32(0x108bb64bu); f_108ba9c0();
  /* 108bb64b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb64e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 108bb654 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 108bb65a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108bb65b push edx */
  push32((uint32_t)(EDX));
  /* 108bb65c push eax */
  push32((uint32_t)(EAX));
  /* 108bb65d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 108bb663 push ecx */
  push32((uint32_t)(ECX));
  /* 108bb664 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 108bb66a push edx */
  push32((uint32_t)(EDX));
  /* 108bb66b call 0x108ba950 */
  push32(0x108bb670u); f_108ba950();
  /* 108bb670 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 108bb676 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 108bb67c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb683 jle 0x108bb697 */
  if ((C.zf||C.sf!=C.of)) goto L_108bb697;
  /* 108bb685 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 108bb68b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb691 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_108bb697:;
  /* 108bb697 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bb69a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 108bb6a0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 108bb6a2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bb6a5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bb6a8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108bb6ab jmp 0x108bb602 */
  goto L_108bb602;
L_108bb6b0:;
  /* 108bb6b0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 108bb6b3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bb6b6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 108bb6b9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bb6bc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb6bf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 108bb6c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb6c5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 108bb6ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bb6cc je 0x108bb6f7 */
  if (C.zf) goto L_108bb6f7;
  /* 108bb6ce mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bb6d1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108bb6d4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb6d7 jne 0x108bb6df */
  if (!C.zf) goto L_108bb6df;
  /* 108bb6d9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb6dd jne 0x108bb6f7 */
  if (!C.zf) goto L_108bb6f7;
L_108bb6df:;
  /* 108bb6df mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bb6e2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bb6e5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108bb6e8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bb6eb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 108bb6ee mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108bb6f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb6f4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_108bb6f7:;
  /* 108bb6f7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb6fe jne 0x108bb8d2 */
  if (!C.zf) goto L_108bb8d2;
  /* 108bb704 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb707 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 108bb70a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bb70c je 0x108bb75d */
  if (C.zf) goto L_108bb75d;
  /* 108bb70e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb711 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 108bb717 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bb719 je 0x108bb72b */
  if (C.zf) goto L_108bb72b;
  /* 108bb71b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 108bb722 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 108bb729 jmp 0x108bb75d */
  goto L_108bb75d;
L_108bb72b:;
  /* 108bb72b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb72e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108bb731 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bb733 je 0x108bb745 */
  if (C.zf) goto L_108bb745;
  /* 108bb735 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 108bb73c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 108bb743 jmp 0x108bb75d */
  goto L_108bb75d;
L_108bb745:;
  /* 108bb745 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb748 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 108bb74b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bb74d je 0x108bb75d */
  if (C.zf) goto L_108bb75d;
  /* 108bb74f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 108bb756 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_108bb75d:;
  /* 108bb75d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 108bb763 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bb766 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bb769 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 108bb76f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb772 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 108bb775 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bb777 jne 0x108bb795 */
  if (!C.zf) goto L_108bb795;
  /* 108bb779 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 108bb77f push eax */
  push32((uint32_t)(EAX));
  /* 108bb780 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bb783 push ecx */
  push32((uint32_t)(ECX));
  /* 108bb784 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 108bb78a push edx */
  push32((uint32_t)(EDX));
  /* 108bb78b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 108bb78d call 0x108bba70 */
  push32(0x108bb792u); f_108bba70();
  /* 108bb792 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bb795:;
  /* 108bb795 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 108bb79b push eax */
  push32((uint32_t)(EAX));
  /* 108bb79c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bb79f push ecx */
  push32((uint32_t)(ECX));
  /* 108bb7a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bb7a3 push edx */
  push32((uint32_t)(EDX));
  /* 108bb7a4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 108bb7aa push eax */
  push32((uint32_t)(EAX));
  /* 108bb7ab call 0x108bbab0 */
  push32(0x108bb7b0u); f_108bbab0();
  /* 108bb7b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb7b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb7b6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 108bb7b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bb7bb je 0x108bb7e3 */
  if (C.zf) goto L_108bb7e3;
  /* 108bb7bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb7c0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 108bb7c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bb7c5 jne 0x108bb7e3 */
  if (!C.zf) goto L_108bb7e3;
  /* 108bb7c7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 108bb7cd push eax */
  push32((uint32_t)(EAX));
  /* 108bb7ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bb7d1 push ecx */
  push32((uint32_t)(ECX));
  /* 108bb7d2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 108bb7d8 push edx */
  push32((uint32_t)(EDX));
  /* 108bb7d9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 108bb7db call 0x108bba70 */
  push32(0x108bb7e0u); f_108bba70();
  /* 108bb7e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bb7e3:;
  /* 108bb7e3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb7e7 je 0x108bb891 */
  if (C.zf) goto L_108bb891;
  /* 108bb7ed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb7f1 jle 0x108bb891 */
  if ((C.zf||C.sf!=C.of)) goto L_108bb891;
  /* 108bb7f7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bb7fa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 108bb800 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108bb803 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_108bb809:;
  /* 108bb809 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 108bb80f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 108bb815 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bb818 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 108bb81e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bb820 je 0x108bb88f */
  if (C.zf) goto L_108bb88f;
  /* 108bb822 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 108bb828 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 108bb82b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 108bb832 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 108bb839 push eax */
  push32((uint32_t)(EAX));
  /* 108bb83a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 108bb840 push ecx */
  push32((uint32_t)(ECX));
  /* 108bb841 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 108bb847 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb84a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 108bb850 call 0x108bcc20 */
  push32(0x108bb855u); f_108bcc20();
  /* 108bb855 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb858 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 108bb85e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bb865 jg 0x108bb869 */
  if ((!C.zf&&C.sf==C.of)) goto L_108bb869;
  /* 108bb867 jmp 0x108bb88f */
  goto L_108bb88f;
L_108bb869:;
  /* 108bb869 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 108bb86f push eax */
  push32((uint32_t)(EAX));
  /* 108bb870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bb873 push ecx */
  push32((uint32_t)(ECX));
  /* 108bb874 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 108bb87a push edx */
  push32((uint32_t)(EDX));
  /* 108bb87b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 108bb881 push eax */
  push32((uint32_t)(EAX));
  /* 108bb882 call 0x108bbab0 */
  push32(0x108bb887u); f_108bbab0();
  /* 108bb887 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bb88a jmp 0x108bb809 */
  goto L_108bb809;
L_108bb88f:;
  /* 108bb88f jmp 0x108bb8ac */
  goto L_108bb8ac;
L_108bb891:;
  /* 108bb891 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 108bb897 push ecx */
  push32((uint32_t)(ECX));
  /* 108bb898 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bb89b push edx */
  push32((uint32_t)(EDX));
  /* 108bb89c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108bb89f push eax */
  push32((uint32_t)(EAX));
  /* 108bb8a0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bb8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 108bb8a4 call 0x108bbab0 */
  push32(0x108bb8a9u); f_108bbab0();
  /* 108bb8a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bb8ac:;
  /* 108bb8ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bb8af and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 108bb8b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bb8b4 je 0x108bb8d2 */
  if (C.zf) goto L_108bb8d2;
  /* 108bb8b6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 108bb8bc push eax */
  push32((uint32_t)(EAX));
  /* 108bb8bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bb8c0 push ecx */
  push32((uint32_t)(ECX));
  /* 108bb8c1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 108bb8c7 push edx */
  push32((uint32_t)(EDX));
  /* 108bb8c8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 108bb8ca call 0x108bba70 */
  push32(0x108bb8cfu); f_108bba70();
  /* 108bb8cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bb8d2:;
  /* 108bb8d2 jmp 0x108bace4 */
  goto L_108bace4;
L_108bb8d7:;
  /* 108bb8d7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 108bb8dd pop edi */
  EDI = (pop32());
  /* 108bb8de pop esi */
  ESI = (pop32());
  /* 108bb8df pop ebx */
  EBX = (pop32());
  /* 108bb8e0 mov esp, ebp */
  ESP = (EBP);
  /* 108bb8e2 pop ebp */
  EBP = (pop32());
  /* 108bb8e3 ret  */
  ESPCHK(0x108bacc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9f0 @ 0x108bb9f0 (119 bytes, 44 insns) */
void f_108bb9f0(void) {
  FTRACE(0x108bb9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bb9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bb9f1 mov ebp, esp */
  EBP = (ESP);
  /* 108bb9f3 push ecx */
  push32((uint32_t)(ECX));
  /* 108bb9f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bb9f7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108bb9fa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bb9fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bba00 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 108bba03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bba06 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bba0a jl 0x108bba32 */
  if ((C.sf!=C.of)) goto L_108bba32;
  /* 108bba0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bba0f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108bba11 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 108bba14 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 108bba16 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 108bba1a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108bba20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108bba23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bba26 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108bba28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bba2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bba2e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108bba30 jmp 0x108bba45 */
  goto L_108bba45;
L_108bba32:;
  /* 108bba32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bba35 push edx */
  push32((uint32_t)(EDX));
  /* 108bba36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bba39 push eax */
  push32((uint32_t)(EAX));
  /* 108bba3a call 0x108baa40 */
  push32(0x108bba3fu); f_108baa40();
  /* 108bba3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bba42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108bba45:;
  /* 108bba45 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bba49 jne 0x108bba56 */
  if (!C.zf) goto L_108bba56;
  /* 108bba4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bba4e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 108bba54 jmp 0x108bba63 */
  goto L_108bba63;
L_108bba56:;
  /* 108bba56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bba59 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108bba5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bba5e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bba61 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_108bba63:;
  /* 108bba63 mov esp, ebp */
  ESP = (EBP);
  /* 108bba65 pop ebp */
  EBP = (pop32());
  /* 108bba66 ret  */
  ESPCHK(0x108bb9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba70 @ 0x108bba70 (53 bytes, 23 insns) */
void f_108bba70(void) {
  FTRACE(0x108bba70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bba70 push ebp */
  push32((uint32_t)(EBP));
  /* 108bba71 mov ebp, esp */
  EBP = (ESP);
L_108bba73:;
  /* 108bba73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bba76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bba79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bba7c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 108bba7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bba81 jle 0x108bbaa3 */
  if ((C.zf||C.sf!=C.of)) goto L_108bbaa3;
  /* 108bba83 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108bba86 push edx */
  push32((uint32_t)(EDX));
  /* 108bba87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bba8a push eax */
  push32((uint32_t)(EAX));
  /* 108bba8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bba8e push ecx */
  push32((uint32_t)(ECX));
  /* 108bba8f call 0x108bb9f0 */
  push32(0x108bba94u); f_108bb9f0();
  /* 108bba94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bba97 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108bba9a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bba9d jne 0x108bbaa1 */
  if (!C.zf) goto L_108bbaa1;
  /* 108bba9f jmp 0x108bbaa3 */
  goto L_108bbaa3;
L_108bbaa1:;
  /* 108bbaa1 jmp 0x108bba73 */
  goto L_108bba73;
L_108bbaa3:;
  /* 108bbaa3 pop ebp */
  EBP = (pop32());
  /* 108bbaa4 ret  */
  ESPCHK(0x108bba70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bab0 @ 0x108bbab0 (74 bytes, 31 insns) */
void f_108bbab0(void) {
  FTRACE(0x108bbab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bbab0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bbab1 mov ebp, esp */
  EBP = (ESP);
  /* 108bbab3 push ecx */
  push32((uint32_t)(ECX));
L_108bbab4:;
  /* 108bbab4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bbab7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bbaba sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bbabd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 108bbac0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bbac2 jle 0x108bbaf6 */
  if ((C.zf||C.sf!=C.of)) goto L_108bbaf6;
  /* 108bbac4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108bbac7 push edx */
  push32((uint32_t)(EDX));
  /* 108bbac8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bbacb push eax */
  push32((uint32_t)(EAX));
  /* 108bbacc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbacf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108bbad2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108bbad5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bbad8 push eax */
  push32((uint32_t)(EAX));
  /* 108bbad9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbadc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bbadf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 108bbae2 call 0x108bb9f0 */
  push32(0x108bbae7u); f_108bb9f0();
  /* 108bbae7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bbaea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108bbaed cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbaf0 jne 0x108bbaf4 */
  if (!C.zf) goto L_108bbaf4;
  /* 108bbaf2 jmp 0x108bbaf6 */
  goto L_108bbaf6;
L_108bbaf4:;
  /* 108bbaf4 jmp 0x108bbab4 */
  goto L_108bbab4;
L_108bbaf6:;
  /* 108bbaf6 mov esp, ebp */
  ESP = (EBP);
  /* 108bbaf8 pop ebp */
  EBP = (pop32());
  /* 108bbaf9 ret  */
  ESPCHK(0x108bbab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb00 @ 0x108bbb00 (26 bytes, 12 insns) */
void f_108bbb00(void) {
  FTRACE(0x108bbb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bbb00 push ebp */
  push32((uint32_t)(EBP));
  /* 108bbb01 mov ebp, esp */
  EBP = (ESP);
  /* 108bbb03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbb06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108bbb08 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bbb0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbb0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108bbb10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbb13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108bbb15 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 108bbb18 pop ebp */
  EBP = (pop32());
  /* 108bbb19 ret  */
  ESPCHK(0x108bbb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb20 @ 0x108bbb20 (31 bytes, 14 insns) */
void f_108bbb20(void) {
  FTRACE(0x108bbb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bbb20 push ebp */
  push32((uint32_t)(EBP));
  /* 108bbb21 mov ebp, esp */
  EBP = (ESP);
  /* 108bbb23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbb26 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108bbb28 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bbb2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbb2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108bbb30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbb33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108bbb35 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bbb38 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 108bbb3a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108bbb3d pop ebp */
  EBP = (pop32());
  /* 108bbb3e ret  */
  ESPCHK(0x108bbb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb40 @ 0x108bbb40 (27 bytes, 12 insns) */
void f_108bbb40(void) {
  FTRACE(0x108bbb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bbb40 push ebp */
  push32((uint32_t)(EBP));
  /* 108bbb41 mov ebp, esp */
  EBP = (ESP);
  /* 108bbb43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbb46 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108bbb48 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bbb4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbb4e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108bbb50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbb53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108bbb55 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 108bbb59 pop ebp */
  EBP = (pop32());
  /* 108bbb5a ret  */
  ESPCHK(0x108bbb40u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x108bbb60 (145 bytes, 42 insns) */
void f_108bbb60(void) {
  FTRACE(0x108bbb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bbb60 push ebp */
  push32((uint32_t)(EBP));
  /* 108bbb61 mov ebp, esp */
  EBP = (ESP);
  /* 108bbb63 push ecx */
  push32((uint32_t)(ECX));
  /* 108bbb64 call 0x108bbc10 */
  push32(0x108bbb69u); f_108bbc10();
  /* 108bbb69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbb6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108bbb6e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108bbb75 jmp 0x108bbb80 */
  goto L_108bbb80;
L_108bbb77:;
  /* 108bbb77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bbb7a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bbb7d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108bbb80:;
  /* 108bbb80 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbb84 jae 0x108bbbaa */
  if (!C.cf) goto L_108bbbaa;
  /* 108bbb86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bbb89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbb8c cmp ecx, dword ptr [eax*8 + 0x108ddfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x108ddfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbb93 jne 0x108bbba8 */
  if (!C.zf) goto L_108bbba8;
  /* 108bbb95 call 0x108bbc00 */
  push32(0x108bbb9au); f_108bbc00();
  /* 108bbb9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bbb9d mov ecx, dword ptr [edx*8 + 0x108ddfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x108ddfbc)));
  /* 108bbba4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108bbba6 jmp 0x108bbbed */
  goto L_108bbbed;
L_108bbba8:;
  /* 108bbba8 jmp 0x108bbb77 */
  goto L_108bbb77;
L_108bbbaa:;
  /* 108bbbaa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbbae jb 0x108bbbc3 */
  if (C.cf) goto L_108bbbc3;
  /* 108bbbb0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbbb4 ja 0x108bbbc3 */
  if ((!C.cf&&!C.zf)) goto L_108bbbc3;
  /* 108bbbb6 call 0x108bbc00 */
  push32(0x108bbbbbu); f_108bbc00();
  /* 108bbbbb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 108bbbc1 jmp 0x108bbbed */
  goto L_108bbbed;
L_108bbbc3:;
  /* 108bbbc3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbbca jb 0x108bbbe2 */
  if (C.cf) goto L_108bbbe2;
  /* 108bbbcc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbbd3 ja 0x108bbbe2 */
  if ((!C.cf&&!C.zf)) goto L_108bbbe2;
  /* 108bbbd5 call 0x108bbc00 */
  push32(0x108bbbdau); f_108bbc00();
  /* 108bbbda mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 108bbbe0 jmp 0x108bbbed */
  goto L_108bbbed;
L_108bbbe2:;
  /* 108bbbe2 call 0x108bbc00 */
  push32(0x108bbbe7u); f_108bbc00();
  /* 108bbbe7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_108bbbed:;
  /* 108bbbed mov esp, ebp */
  ESP = (EBP);
  /* 108bbbef pop ebp */
  EBP = (pop32());
  /* 108bbbf0 ret  */
  ESPCHK(0x108bbb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc00 @ 0x108bbc00 (13 bytes, 6 insns) */
void f_108bbc00(void) {
  FTRACE(0x108bbc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bbc00 push ebp */
  push32((uint32_t)(EBP));
  /* 108bbc01 mov ebp, esp */
  EBP = (ESP);
  /* 108bbc03 call 0x108b3770 */
  push32(0x108bbc08u); f_108b3770();
  /* 108bbc08 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bbc0b pop ebp */
  EBP = (pop32());
  /* 108bbc0c ret  */
  ESPCHK(0x108bbc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc10 @ 0x108bbc10 (13 bytes, 6 insns) */
void f_108bbc10(void) {
  FTRACE(0x108bbc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bbc10 push ebp */
  push32((uint32_t)(EBP));
  /* 108bbc11 mov ebp, esp */
  EBP = (ESP);
  /* 108bbc13 call 0x108b3770 */
  push32(0x108bbc18u); f_108b3770();
  /* 108bbc18 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bbc1b pop ebp */
  EBP = (pop32());
  /* 108bbc1c ret  */
  ESPCHK(0x108bbc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc20 @ 0x108bbc20 (664 bytes, 260 insns) [15 switch table(s)] */
void f_108bbc20(void) {
  FTRACE(0x108bbc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bbc20 push ebp */
  push32((uint32_t)(EBP));
  /* 108bbc21 mov ebp, esp */
  EBP = (ESP);
  /* 108bbc23 push edi */
  push32((uint32_t)(EDI));
  /* 108bbc24 push esi */
  push32((uint32_t)(ESI));
  /* 108bbc25 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 108bbc28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bbc2b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbc2e mov eax, ecx */
  EAX = (ECX);
  /* 108bbc30 mov edx, ecx */
  EDX = (ECX);
  /* 108bbc32 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bbc34 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbc36 jbe 0x108bbc40 */
  if ((C.cf||C.zf)) goto L_108bbc40;
  /* 108bbc38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbc3a jb 0x108bbdb8 */
  if (C.cf) goto L_108bbdb8;
L_108bbc40:;
  /* 108bbc40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 108bbc46 jne 0x108bbc5c */
  if (!C.zf) goto L_108bbc5c;
  /* 108bbc48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108bbc4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 108bbc4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbc51 jb 0x108bbc7c */
  if (C.cf) goto L_108bbc7c;
  /* 108bbc53 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108bbc55 jmp dword ptr [edx*4 + 0x108bbd68] */
  switch (EDX) {
    case 0: goto L_108bbd78;
    case 1: goto L_108bbd80;
    case 2: goto L_108bbd8c;
    case 3: goto L_108bbda0;
    default: x86_unimpl("switch@0x108bbc55 out of table"); return;
  }
L_108bbc5c:;
  /* 108bbc5c mov eax, edi */
  EAX = (EDI);
  /* 108bbc5e mov edx, 3 */
  EDX = (0x3u);
  /* 108bbc63 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bbc66 jb 0x108bbc74 */
  if (C.cf) goto L_108bbc74;
  /* 108bbc68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 108bbc6b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bbc6d jmp dword ptr [eax*4 + 0x108bbc80] */
  switch (EAX) {
    case 1: goto L_108bbc90;
    case 2: goto L_108bbcbc;
    case 3: goto L_108bbce0;
    default: x86_unimpl("switch@0x108bbc6d out of table"); return;
  }
L_108bbc74:;
  /* 108bbc74 jmp dword ptr [ecx*4 + 0x108bbd78] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x108bbd78)))); return;
  /* 108bbc7b nop  */
  /* nop */
L_108bbc7c:;
  /* 108bbc7c jmp dword ptr [ecx*4 + 0x108bbcfc] */
  switch (ECX) {
    case 0: goto L_108bbd5f;
    case 1: goto L_108bbd4c;
    case 2: goto L_108bbd44;
    case 3: goto L_108bbd3c;
    case 4: goto L_108bbd34;
    case 5: goto L_108bbd2c;
    case 6: goto L_108bbd24;
    case 7: goto L_108bbd1c;
    default: x86_unimpl("switch@0x108bbc7c out of table"); return;
  }
  /* 108bbc83 nop  */
  /* nop */
L_108bbc90:;
  /* 108bbc90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108bbc92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108bbc94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108bbc96 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108bbc99 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108bbc9c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108bbc9f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108bbca2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108bbca5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108bbca8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108bbcab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbcae jb 0x108bbc7c */
  if (C.cf) goto L_108bbc7c;
  /* 108bbcb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108bbcb2 jmp dword ptr [edx*4 + 0x108bbd68] */
  switch (EDX) {
    case 0: goto L_108bbd78;
    case 1: goto L_108bbd80;
    case 2: goto L_108bbd8c;
    case 3: goto L_108bbda0;
    default: x86_unimpl("switch@0x108bbcb2 out of table"); return;
  }
  /* 108bbcb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108bbcbc:;
  /* 108bbcbc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108bbcbe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108bbcc0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108bbcc2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108bbcc5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108bbcc8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108bbccb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108bbcce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108bbcd1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbcd4 jb 0x108bbc7c */
  if (C.cf) goto L_108bbc7c;
  /* 108bbcd6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108bbcd8 jmp dword ptr [edx*4 + 0x108bbd68] */
  switch (EDX) {
    case 0: goto L_108bbd78;
    case 1: goto L_108bbd80;
    case 2: goto L_108bbd8c;
    case 3: goto L_108bbda0;
    default: x86_unimpl("switch@0x108bbcd8 out of table"); return;
  }
  /* 108bbcdf nop  */
  /* nop */
L_108bbce0:;
  /* 108bbce0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108bbce2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108bbce4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108bbce6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 108bbce7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108bbcea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108bbceb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbcee jb 0x108bbc7c */
  if (C.cf) goto L_108bbc7c;
  /* 108bbcf0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108bbcf2 jmp dword ptr [edx*4 + 0x108bbd68] */
  switch (EDX) {
    case 0: goto L_108bbd78;
    case 1: goto L_108bbd80;
    case 2: goto L_108bbd8c;
    case 3: goto L_108bbda0;
    default: x86_unimpl("switch@0x108bbcf2 out of table"); return;
  }
  /* 108bbcf9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108bbd1c:;
  /* 108bbd1c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 108bbd20 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_108bbd24:;
  /* 108bbd24 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 108bbd28 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_108bbd2c:;
  /* 108bbd2c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 108bbd30 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_108bbd34:;
  /* 108bbd34 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 108bbd38 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_108bbd3c:;
  /* 108bbd3c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 108bbd40 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_108bbd44:;
  /* 108bbd44 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 108bbd48 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_108bbd4c:;
  /* 108bbd4c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 108bbd50 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 108bbd54 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 108bbd5b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108bbd5d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_108bbd5f:;
  /* 108bbd5f jmp dword ptr [edx*4 + 0x108bbd68] */
  switch (EDX) {
    case 0: goto L_108bbd78;
    case 1: goto L_108bbd80;
    case 2: goto L_108bbd8c;
    case 3: goto L_108bbda0;
    default: x86_unimpl("switch@0x108bbd5f out of table"); return;
  }
  /* 108bbd66 mov edi, edi */
  EDI = (EDI);
L_108bbd78:;
  /* 108bbd78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbd7b pop esi */
  ESI = (pop32());
  /* 108bbd7c pop edi */
  EDI = (pop32());
  /* 108bbd7d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108bbd7e ret  */
  ESPCHK(0x108bbc20u, _esp0);
  ESP += 4; return;
  /* 108bbd7f nop  */
  /* nop */
L_108bbd80:;
  /* 108bbd80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108bbd82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108bbd84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbd87 pop esi */
  ESI = (pop32());
  /* 108bbd88 pop edi */
  EDI = (pop32());
  /* 108bbd89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108bbd8a ret  */
  ESPCHK(0x108bbc20u, _esp0);
  ESP += 4; return;
  /* 108bbd8b nop  */
  /* nop */
L_108bbd8c:;
  /* 108bbd8c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108bbd8e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108bbd90 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108bbd93 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108bbd96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbd99 pop esi */
  ESI = (pop32());
  /* 108bbd9a pop edi */
  EDI = (pop32());
  /* 108bbd9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108bbd9c ret  */
  ESPCHK(0x108bbc20u, _esp0);
  ESP += 4; return;
  /* 108bbd9d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108bbda0:;
  /* 108bbda0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108bbda2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108bbda4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108bbda7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108bbdaa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108bbdad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108bbdb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbdb3 pop esi */
  ESI = (pop32());
  /* 108bbdb4 pop edi */
  EDI = (pop32());
  /* 108bbdb5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108bbdb6 ret  */
  ESPCHK(0x108bbc20u, _esp0);
  ESP += 4; return;
  /* 108bbdb7 nop  */
  /* nop */
L_108bbdb8:;
  /* 108bbdb8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 108bbdbc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 108bbdc0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 108bbdc6 jne 0x108bbdec */
  if (!C.zf) goto L_108bbdec;
  /* 108bbdc8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108bbdcb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 108bbdce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbdd1 jb 0x108bbde0 */
  if (C.cf) goto L_108bbde0;
  /* 108bbdd3 std  */
  C.df=1;
  /* 108bbdd4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108bbdd6 cld  */
  C.df=0;
  /* 108bbdd7 jmp dword ptr [edx*4 + 0x108bbf00] */
  switch (EDX) {
    case 0: goto L_108bbf10;
    case 1: goto L_108bbf18;
    case 2: goto L_108bbf28;
    case 3: goto L_108bbf3c;
    default: x86_unimpl("switch@0x108bbdd7 out of table"); return;
  }
  /* 108bbdde mov edi, edi */
  EDI = (EDI);
L_108bbde0:;
  /* 108bbde0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108bbde2 jmp dword ptr [ecx*4 + 0x108bbeb0] */
  switch (ECX) {
    case 0: goto L_108bbef7;
    default: x86_unimpl("switch@0x108bbde2 out of table"); return;
  }
  /* 108bbde9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108bbdec:;
  /* 108bbdec mov eax, edi */
  EAX = (EDI);
  /* 108bbdee mov edx, 3 */
  EDX = (0x3u);
  /* 108bbdf3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbdf6 jb 0x108bbe04 */
  if (C.cf) goto L_108bbe04;
  /* 108bbdf8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 108bbdfb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bbdfd jmp dword ptr [eax*4 + 0x108bbe08] */
  switch (EAX) {
    case 1: goto L_108bbe18;
    case 2: goto L_108bbe38;
    case 3: goto L_108bbe60;
    default: x86_unimpl("switch@0x108bbdfd out of table"); return;
  }
L_108bbe04:;
  /* 108bbe04 jmp dword ptr [ecx*4 + 0x108bbf00] */
  switch (ECX) {
    case 0: goto L_108bbf10;
    case 1: goto L_108bbf18;
    case 2: goto L_108bbf28;
    case 3: goto L_108bbf3c;
    default: x86_unimpl("switch@0x108bbe04 out of table"); return;
  }
  /* 108bbe0b nop  */
  /* nop */
L_108bbe18:;
  /* 108bbe18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108bbe1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108bbe1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108bbe20 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 108bbe21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108bbe24 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 108bbe25 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbe28 jb 0x108bbde0 */
  if (C.cf) goto L_108bbde0;
  /* 108bbe2a std  */
  C.df=1;
  /* 108bbe2b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108bbe2d cld  */
  C.df=0;
  /* 108bbe2e jmp dword ptr [edx*4 + 0x108bbf00] */
  switch (EDX) {
    case 0: goto L_108bbf10;
    case 1: goto L_108bbf18;
    case 2: goto L_108bbf28;
    case 3: goto L_108bbf3c;
    default: x86_unimpl("switch@0x108bbe2e out of table"); return;
  }
  /* 108bbe35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108bbe38:;
  /* 108bbe38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108bbe3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108bbe3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108bbe40 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108bbe43 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108bbe46 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108bbe49 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bbe4c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bbe4f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbe52 jb 0x108bbde0 */
  if (C.cf) goto L_108bbde0;
  /* 108bbe54 std  */
  C.df=1;
  /* 108bbe55 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108bbe57 cld  */
  C.df=0;
  /* 108bbe58 jmp dword ptr [edx*4 + 0x108bbf00] */
  switch (EDX) {
    case 0: goto L_108bbf10;
    case 1: goto L_108bbf18;
    case 2: goto L_108bbf28;
    case 3: goto L_108bbf3c;
    default: x86_unimpl("switch@0x108bbe58 out of table"); return;
  }
  /* 108bbe5f nop  */
  /* nop */
L_108bbe60:;
  /* 108bbe60 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108bbe63 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108bbe65 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108bbe68 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108bbe6b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108bbe6e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108bbe71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108bbe74 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108bbe77 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bbe7a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bbe7d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbe80 jb 0x108bbde0 */
  if (C.cf) goto L_108bbde0;
  /* 108bbe86 std  */
  C.df=1;
  /* 108bbe87 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108bbe89 cld  */
  C.df=0;
  /* 108bbe8a jmp dword ptr [edx*4 + 0x108bbf00] */
  switch (EDX) {
    case 0: goto L_108bbf10;
    case 1: goto L_108bbf18;
    case 2: goto L_108bbf28;
    case 3: goto L_108bbf3c;
    default: x86_unimpl("switch@0x108bbe8a out of table"); return;
  }
  /* 108bbe91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 108bbe94 mov ah, 0xbe */
  AH = (0xbeu);
  /* 108bbe96 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 108bbe98 mov esp, 0xc4108bbe */
  ESP = (0xc4108bbeu);
  /* 108bbe9d mov esi, 0xbecc108b */
  ESI = (0xbecc108bu);
  /* 108bbea2 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 108bbea4 aam 0xbe */
  x86_unimpl("aam @ 0x108bbea4");
  /* 108bbea6 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 108bbea8 fdivr qword ptr [esi - 0x411bef75] */
  FPU_ST(0) = (rf64((uint32_t)(ESI + -0x411bef75))) / FPU_ST(0);
  /* 108bbeae mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 108bbeb4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 108bbeb8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 108bbebc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 108bbec0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 108bbec4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 108bbec8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 108bbecc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 108bbed0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 108bbed4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 108bbed8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 108bbedc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 108bbee0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 108bbee4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 108bbee8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 108bbeec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 108bbef3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108bbef5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_108bbef7:;
  /* 108bbef7 jmp dword ptr [edx*4 + 0x108bbf00] */
  switch (EDX) {
    case 0: goto L_108bbf10;
    case 1: goto L_108bbf18;
    case 2: goto L_108bbf28;
    case 3: goto L_108bbf3c;
    default: x86_unimpl("switch@0x108bbef7 out of table"); return;
  }
  /* 108bbefe mov edi, edi */
  EDI = (EDI);
L_108bbf10:;
  /* 108bbf10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbf13 pop esi */
  ESI = (pop32());
  /* 108bbf14 pop edi */
  EDI = (pop32());
  /* 108bbf15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108bbf16 ret  */
  ESPCHK(0x108bbc20u, _esp0);
  ESP += 4; return;
  /* 108bbf17 nop  */
  /* nop */
L_108bbf18:;
  /* 108bbf18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108bbf1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108bbf1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbf21 pop esi */
  ESI = (pop32());
  /* 108bbf22 pop edi */
  EDI = (pop32());
  /* 108bbf23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108bbf24 ret  */
  ESPCHK(0x108bbc20u, _esp0);
  ESP += 4; return;
  /* 108bbf25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108bbf28:;
  /* 108bbf28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108bbf2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108bbf2e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108bbf31 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108bbf34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbf37 pop esi */
  ESI = (pop32());
  /* 108bbf38 pop edi */
  EDI = (pop32());
  /* 108bbf39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108bbf3a ret  */
  ESPCHK(0x108bbc20u, _esp0);
  ESP += 4; return;
  /* 108bbf3b nop  */
  /* nop */
L_108bbf3c:;
  /* 108bbf3c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108bbf3f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108bbf42 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108bbf45 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108bbf48 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108bbf4b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108bbf4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bbf51 pop esi */
  ESI = (pop32());
  /* 108bbf52 pop edi */
  EDI = (pop32());
  /* 108bbf53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108bbf54 ret  */
  ESPCHK(0x108bbc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf60 @ 0x108bbf60 (421 bytes, 148 insns) */
void f_108bbf60(void) {
  FTRACE(0x108bbf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bbf60 push ebp */
  push32((uint32_t)(EBP));
  /* 108bbf61 mov ebp, esp */
  EBP = (ESP);
  /* 108bbf63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108bbf65 push 0x108dafe0 */
  push32((uint32_t)(0x108dafe0u));
  /* 108bbf6a push 0x108bce38 */
  push32((uint32_t)(0x108bce38u));
  /* 108bbf6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 108bbf75 push eax */
  push32((uint32_t)(EAX));
  /* 108bbf76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 108bbf7d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bbf80 push ebx */
  push32((uint32_t)(EBX));
  /* 108bbf81 push esi */
  push32((uint32_t)(ESI));
  /* 108bbf82 push edi */
  push32((uint32_t)(EDI));
  /* 108bbf83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108bbf86 cmp dword ptr [0x108df764], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df764))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbf8d jne 0x108bbfde */
  if (!C.zf) goto L_108bbfde;
  /* 108bbf8f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 108bbf92 push eax */
  push32((uint32_t)(EAX));
  /* 108bbf93 push 1 */
  push32((uint32_t)(0x1u));
  /* 108bbf95 push 0x108dafdc */
  push32((uint32_t)(0x108dafdcu));
  /* 108bbf9a push 1 */
  push32((uint32_t)(0x1u));
  /* 108bbf9c call dword ptr [0x108e22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22d8))), 0x108bbfa2u);
  /* 108bbfa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bbfa4 je 0x108bbfb2 */
  if (C.zf) goto L_108bbfb2;
  /* 108bbfa6 mov dword ptr [0x108df764], 1 */
  w32((uint32_t)(0x108df764), (0x1u));
  /* 108bbfb0 jmp 0x108bbfde */
  goto L_108bbfde;
L_108bbfb2:;
  /* 108bbfb2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 108bbfb5 push ecx */
  push32((uint32_t)(ECX));
  /* 108bbfb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 108bbfb8 push 0x108dafd8 */
  push32((uint32_t)(0x108dafd8u));
  /* 108bbfbd push 1 */
  push32((uint32_t)(0x1u));
  /* 108bbfbf push 0 */
  push32((uint32_t)(0x0u));
  /* 108bbfc1 call dword ptr [0x108e22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22e8))), 0x108bbfc7u);
  /* 108bbfc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bbfc9 je 0x108bbfd7 */
  if (C.zf) goto L_108bbfd7;
  /* 108bbfcb mov dword ptr [0x108df764], 2 */
  w32((uint32_t)(0x108df764), (0x2u));
  /* 108bbfd5 jmp 0x108bbfde */
  goto L_108bbfde;
L_108bbfd7:;
  /* 108bbfd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bbfd9 jmp 0x108bc108 */
  goto L_108bc108;
L_108bbfde:;
  /* 108bbfde cmp dword ptr [0x108df764], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108df764))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbfe5 jne 0x108bc015 */
  if (!C.zf) goto L_108bc015;
  /* 108bbfe7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bbfeb jne 0x108bbff6 */
  if (!C.zf) goto L_108bbff6;
  /* 108bbfed mov edx, dword ptr [0x108df770] */
  EDX = (r32((uint32_t)(0x108df770)));
  /* 108bbff3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_108bbff6:;
  /* 108bbff6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108bbff9 push eax */
  push32((uint32_t)(EAX));
  /* 108bbffa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bbffd push ecx */
  push32((uint32_t)(ECX));
  /* 108bbffe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bc001 push edx */
  push32((uint32_t)(EDX));
  /* 108bc002 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc005 push eax */
  push32((uint32_t)(EAX));
  /* 108bc006 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108bc009 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc00a call dword ptr [0x108e22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22e8))), 0x108bc010u);
  /* 108bc010 jmp 0x108bc108 */
  goto L_108bc108;
L_108bc015:;
  /* 108bc015 cmp dword ptr [0x108df764], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108df764))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc01c jne 0x108bc106 */
  if (!C.zf) goto L_108bc106;
  /* 108bc022 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc026 jne 0x108bc031 */
  if (!C.zf) goto L_108bc031;
  /* 108bc028 mov edx, dword ptr [0x108df780] */
  EDX = (r32((uint32_t)(0x108df780)));
  /* 108bc02e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_108bc031:;
  /* 108bc031 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc033 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc035 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bc038 push eax */
  push32((uint32_t)(EAX));
  /* 108bc039 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bc03c push ecx */
  push32((uint32_t)(ECX));
  /* 108bc03d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 108bc040 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 108bc042 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bc044 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 108bc047 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc04a push edx */
  push32((uint32_t)(EDX));
  /* 108bc04b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108bc04e push eax */
  push32((uint32_t)(EAX));
  /* 108bc04f call dword ptr [0x108e22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22e0))), 0x108bc055u);
  /* 108bc055 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108bc058 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc05c jne 0x108bc065 */
  if (!C.zf) goto L_108bc065;
  /* 108bc05e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bc060 jmp 0x108bc108 */
  goto L_108bc108;
L_108bc065:;
  /* 108bc065 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108bc06c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bc06f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108bc071 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc074 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 108bc076 call 0x108b6ed0 */
  push32(0x108bc07bu); f_108b6ed0();
  /* 108bc07b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 108bc07e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108bc081 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108bc084 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 108bc087 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bc08a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 108bc08c push edx */
  push32((uint32_t)(EDX));
  /* 108bc08d push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc08f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108bc092 push eax */
  push32((uint32_t)(EAX));
  /* 108bc093 call 0x108b7aa0 */
  push32(0x108bc098u); f_108b7aa0();
  /* 108bc098 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc09b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108bc0a2 jmp 0x108bc0bb */
  goto L_108bc0bb;
  /* 108bc0a4 mov eax, 1 */
  EAX = (0x1u);
  /* 108bc0a9 ret  */
  ESPCHK(0x108bbf60u, _esp0);
  ESP += 4; return;
  /* 108bc0aa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 108bc0ad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 108bc0b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108bc0bb:;
  /* 108bc0bb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc0bf jne 0x108bc0c5 */
  if (!C.zf) goto L_108bc0c5;
  /* 108bc0c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bc0c3 jmp 0x108bc108 */
  goto L_108bc108;
L_108bc0c5:;
  /* 108bc0c5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bc0c8 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc0c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108bc0cc push edx */
  push32((uint32_t)(EDX));
  /* 108bc0cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bc0d0 push eax */
  push32((uint32_t)(EAX));
  /* 108bc0d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bc0d4 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc0d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 108bc0d7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108bc0da push edx */
  push32((uint32_t)(EDX));
  /* 108bc0db call dword ptr [0x108e22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22e0))), 0x108bc0e1u);
  /* 108bc0e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108bc0e4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc0e8 jne 0x108bc0ee */
  if (!C.zf) goto L_108bc0ee;
  /* 108bc0ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bc0ec jmp 0x108bc108 */
  goto L_108bc108;
L_108bc0ee:;
  /* 108bc0ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108bc0f1 push eax */
  push32((uint32_t)(EAX));
  /* 108bc0f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108bc0f5 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc0f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108bc0f9 push edx */
  push32((uint32_t)(EDX));
  /* 108bc0fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc0fd push eax */
  push32((uint32_t)(EAX));
  /* 108bc0fe call dword ptr [0x108e22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22d8))), 0x108bc104u);
  /* 108bc104 jmp 0x108bc108 */
  goto L_108bc108;
L_108bc106:;
  /* 108bc106 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108bc108:;
  /* 108bc108 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 108bc10b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bc10e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 108bc115 pop edi */
  EDI = (pop32());
  /* 108bc116 pop esi */
  ESI = (pop32());
  /* 108bc117 pop ebx */
  EBX = (pop32());
  /* 108bc118 mov esp, ebp */
  ESP = (EBP);
  /* 108bc11a pop ebp */
  EBP = (pop32());
  /* 108bc11b ret  */
  ESPCHK(0x108bbf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c120 @ 0x108bc120 (727 bytes, 263 insns) */
void f_108bc120(void) {
  FTRACE(0x108bc120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bc120 push ebp */
  push32((uint32_t)(EBP));
  /* 108bc121 mov ebp, esp */
  EBP = (ESP);
  /* 108bc123 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108bc125 push 0x108daff0 */
  push32((uint32_t)(0x108daff0u));
  /* 108bc12a push 0x108bce38 */
  push32((uint32_t)(0x108bce38u));
  /* 108bc12f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 108bc135 push eax */
  push32((uint32_t)(EAX));
  /* 108bc136 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 108bc13d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc140 push ebx */
  push32((uint32_t)(EBX));
  /* 108bc141 push esi */
  push32((uint32_t)(ESI));
  /* 108bc142 push edi */
  push32((uint32_t)(EDI));
  /* 108bc143 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108bc146 cmp dword ptr [0x108df788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc14d jne 0x108bc1a6 */
  if (!C.zf) goto L_108bc1a6;
  /* 108bc14f push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc151 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc153 push 1 */
  push32((uint32_t)(0x1u));
  /* 108bc155 push 0x108dafdc */
  push32((uint32_t)(0x108dafdcu));
  /* 108bc15a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108bc15f push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc161 call dword ptr [0x108e22dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22dc))), 0x108bc167u);
  /* 108bc167 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bc169 je 0x108bc177 */
  if (C.zf) goto L_108bc177;
  /* 108bc16b mov dword ptr [0x108df788], 1 */
  w32((uint32_t)(0x108df788), (0x1u));
  /* 108bc175 jmp 0x108bc1a6 */
  goto L_108bc1a6;
L_108bc177:;
  /* 108bc177 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc179 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc17b push 1 */
  push32((uint32_t)(0x1u));
  /* 108bc17d push 0x108dafd8 */
  push32((uint32_t)(0x108dafd8u));
  /* 108bc182 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108bc187 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc189 call dword ptr [0x108e22d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22d4))), 0x108bc18fu);
  /* 108bc18f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bc191 je 0x108bc19f */
  if (C.zf) goto L_108bc19f;
  /* 108bc193 mov dword ptr [0x108df788], 2 */
  w32((uint32_t)(0x108df788), (0x2u));
  /* 108bc19d jmp 0x108bc1a6 */
  goto L_108bc1a6;
L_108bc19f:;
  /* 108bc19f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bc1a1 jmp 0x108bc411 */
  goto L_108bc411;
L_108bc1a6:;
  /* 108bc1a6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc1aa jle 0x108bc1bf */
  if ((C.zf||C.sf!=C.of)) goto L_108bc1bf;
  /* 108bc1ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108bc1af push eax */
  push32((uint32_t)(EAX));
  /* 108bc1b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bc1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc1b4 call 0x108bc430 */
  push32(0x108bc1b9u); f_108bc430();
  /* 108bc1b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc1bc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_108bc1bf:;
  /* 108bc1bf cmp dword ptr [0x108df788], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108df788))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc1c6 jne 0x108bc1eb */
  if (!C.zf) goto L_108bc1eb;
  /* 108bc1c8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108bc1cb push edx */
  push32((uint32_t)(EDX));
  /* 108bc1cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108bc1cf push eax */
  push32((uint32_t)(EAX));
  /* 108bc1d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108bc1d3 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc1d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bc1d7 push edx */
  push32((uint32_t)(EDX));
  /* 108bc1d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bc1db push eax */
  push32((uint32_t)(EAX));
  /* 108bc1dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc1df push ecx */
  push32((uint32_t)(ECX));
  /* 108bc1e0 call dword ptr [0x108e22d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22d4))), 0x108bc1e6u);
  /* 108bc1e6 jmp 0x108bc411 */
  goto L_108bc411;
L_108bc1eb:;
  /* 108bc1eb cmp dword ptr [0x108df788], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108df788))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc1f2 jne 0x108bc40f */
  if (!C.zf) goto L_108bc40f;
  /* 108bc1f8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc1fc jne 0x108bc207 */
  if (!C.zf) goto L_108bc207;
  /* 108bc1fe mov edx, dword ptr [0x108df780] */
  EDX = (r32((uint32_t)(0x108df780)));
  /* 108bc204 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_108bc207:;
  /* 108bc207 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc209 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc20b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108bc20e push eax */
  push32((uint32_t)(EAX));
  /* 108bc20f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bc212 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc213 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 108bc216 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 108bc218 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bc21a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 108bc21d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc220 push edx */
  push32((uint32_t)(EDX));
  /* 108bc221 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 108bc224 push eax */
  push32((uint32_t)(EAX));
  /* 108bc225 call dword ptr [0x108e22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22e0))), 0x108bc22bu);
  /* 108bc22b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 108bc22e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc232 jne 0x108bc23b */
  if (!C.zf) goto L_108bc23b;
  /* 108bc234 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bc236 jmp 0x108bc411 */
  goto L_108bc411;
L_108bc23b:;
  /* 108bc23b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108bc242 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108bc245 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108bc247 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc24a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 108bc24c call 0x108b6ed0 */
  push32(0x108bc251u); f_108b6ed0();
  /* 108bc251 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 108bc254 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108bc257 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108bc25a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 108bc25d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108bc264 jmp 0x108bc27d */
  goto L_108bc27d;
  /* 108bc266 mov eax, 1 */
  EAX = (0x1u);
  /* 108bc26b ret  */
  ESPCHK(0x108bc120u, _esp0);
  ESP += 4; return;
  /* 108bc26c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 108bc26f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 108bc276 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108bc27d:;
  /* 108bc27d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc281 jne 0x108bc28a */
  if (!C.zf) goto L_108bc28a;
  /* 108bc283 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bc285 jmp 0x108bc411 */
  goto L_108bc411;
L_108bc28a:;
  /* 108bc28a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108bc28d push edx */
  push32((uint32_t)(EDX));
  /* 108bc28e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108bc291 push eax */
  push32((uint32_t)(EAX));
  /* 108bc292 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108bc295 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc296 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bc299 push edx */
  push32((uint32_t)(EDX));
  /* 108bc29a push 1 */
  push32((uint32_t)(0x1u));
  /* 108bc29c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 108bc29f push eax */
  push32((uint32_t)(EAX));
  /* 108bc2a0 call dword ptr [0x108e22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22e0))), 0x108bc2a6u);
  /* 108bc2a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bc2a8 jne 0x108bc2b1 */
  if (!C.zf) goto L_108bc2b1;
  /* 108bc2aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bc2ac jmp 0x108bc411 */
  goto L_108bc411;
L_108bc2b1:;
  /* 108bc2b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc2b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc2b5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108bc2b8 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc2b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108bc2bc push edx */
  push32((uint32_t)(EDX));
  /* 108bc2bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bc2c0 push eax */
  push32((uint32_t)(EAX));
  /* 108bc2c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc2c4 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc2c5 call dword ptr [0x108e22dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22dc))), 0x108bc2cbu);
  /* 108bc2cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108bc2ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc2d2 jne 0x108bc2db */
  if (!C.zf) goto L_108bc2db;
  /* 108bc2d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bc2d6 jmp 0x108bc411 */
  goto L_108bc411;
L_108bc2db:;
  /* 108bc2db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bc2de and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 108bc2e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bc2e6 je 0x108bc32b */
  if (C.zf) goto L_108bc32b;
  /* 108bc2e8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc2ec je 0x108bc326 */
  if (C.zf) goto L_108bc326;
  /* 108bc2ee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108bc2f1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc2f4 jle 0x108bc2fd */
  if ((C.zf||C.sf!=C.of)) goto L_108bc2fd;
  /* 108bc2f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bc2f8 jmp 0x108bc411 */
  goto L_108bc411;
L_108bc2fd:;
  /* 108bc2fd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108bc300 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc301 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108bc304 push edx */
  push32((uint32_t)(EDX));
  /* 108bc305 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108bc308 push eax */
  push32((uint32_t)(EAX));
  /* 108bc309 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108bc30c push ecx */
  push32((uint32_t)(ECX));
  /* 108bc30d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bc310 push edx */
  push32((uint32_t)(EDX));
  /* 108bc311 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc314 push eax */
  push32((uint32_t)(EAX));
  /* 108bc315 call dword ptr [0x108e22dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22dc))), 0x108bc31bu);
  /* 108bc31b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bc31d jne 0x108bc326 */
  if (!C.zf) goto L_108bc326;
  /* 108bc31f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bc321 jmp 0x108bc411 */
  goto L_108bc411;
L_108bc326:;
  /* 108bc326 jmp 0x108bc40a */
  goto L_108bc40a;
L_108bc32b:;
  /* 108bc32b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108bc32e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 108bc331 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108bc338 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108bc33b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108bc33d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc340 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 108bc342 call 0x108b6ed0 */
  push32(0x108bc347u); f_108b6ed0();
  /* 108bc347 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 108bc34a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108bc34d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 108bc350 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 108bc353 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108bc35a jmp 0x108bc373 */
  goto L_108bc373;
  /* 108bc35c mov eax, 1 */
  EAX = (0x1u);
  /* 108bc361 ret  */
  ESPCHK(0x108bc120u, _esp0);
  ESP += 4; return;
  /* 108bc362 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 108bc365 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 108bc36c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108bc373:;
  /* 108bc373 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc377 jne 0x108bc380 */
  if (!C.zf) goto L_108bc380;
  /* 108bc379 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bc37b jmp 0x108bc411 */
  goto L_108bc411;
L_108bc380:;
  /* 108bc380 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108bc383 push eax */
  push32((uint32_t)(EAX));
  /* 108bc384 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bc387 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc388 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108bc38b push edx */
  push32((uint32_t)(EDX));
  /* 108bc38c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108bc38f push eax */
  push32((uint32_t)(EAX));
  /* 108bc390 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bc393 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc394 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc397 push edx */
  push32((uint32_t)(EDX));
  /* 108bc398 call dword ptr [0x108e22dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22dc))), 0x108bc39eu);
  /* 108bc39e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bc3a0 jne 0x108bc3a6 */
  if (!C.zf) goto L_108bc3a6;
  /* 108bc3a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bc3a4 jmp 0x108bc411 */
  goto L_108bc411;
L_108bc3a6:;
  /* 108bc3a6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc3aa jne 0x108bc3da */
  if (!C.zf) goto L_108bc3da;
  /* 108bc3ac push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc3ae push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc3b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc3b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc3b4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108bc3b7 push eax */
  push32((uint32_t)(EAX));
  /* 108bc3b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bc3bb push ecx */
  push32((uint32_t)(ECX));
  /* 108bc3bc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 108bc3c1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 108bc3c4 push edx */
  push32((uint32_t)(EDX));
  /* 108bc3c5 call dword ptr [0x108e2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2388))), 0x108bc3cbu);
  /* 108bc3cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108bc3ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc3d2 jne 0x108bc3d8 */
  if (!C.zf) goto L_108bc3d8;
  /* 108bc3d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bc3d6 jmp 0x108bc411 */
  goto L_108bc411;
L_108bc3d8:;
  /* 108bc3d8 jmp 0x108bc40a */
  goto L_108bc40a;
L_108bc3da:;
  /* 108bc3da push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc3dc push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc3de mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108bc3e1 push eax */
  push32((uint32_t)(EAX));
  /* 108bc3e2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108bc3e5 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc3e6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108bc3e9 push edx */
  push32((uint32_t)(EDX));
  /* 108bc3ea mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bc3ed push eax */
  push32((uint32_t)(EAX));
  /* 108bc3ee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 108bc3f3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 108bc3f6 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc3f7 call dword ptr [0x108e2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2388))), 0x108bc3fdu);
  /* 108bc3fd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108bc400 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc404 jne 0x108bc40a */
  if (!C.zf) goto L_108bc40a;
  /* 108bc406 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bc408 jmp 0x108bc411 */
  goto L_108bc411;
L_108bc40a:;
  /* 108bc40a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108bc40d jmp 0x108bc411 */
  goto L_108bc411;
L_108bc40f:;
  /* 108bc40f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108bc411:;
  /* 108bc411 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 108bc414 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bc417 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 108bc41e pop edi */
  EDI = (pop32());
  /* 108bc41f pop esi */
  ESI = (pop32());
  /* 108bc420 pop ebx */
  EBX = (pop32());
  /* 108bc421 mov esp, ebp */
  ESP = (EBP);
  /* 108bc423 pop ebp */
  EBP = (pop32());
  /* 108bc424 ret  */
  ESPCHK(0x108bc120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c430 @ 0x108bc430 (80 bytes, 32 insns) */
void f_108bc430(void) {
  FTRACE(0x108bc430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bc430 push ebp */
  push32((uint32_t)(EBP));
  /* 108bc431 mov ebp, esp */
  EBP = (ESP);
  /* 108bc433 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bc436 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bc439 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108bc43c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc43f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108bc442:;
  /* 108bc442 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bc445 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bc448 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bc44b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108bc44e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bc450 je 0x108bc467 */
  if (C.zf) goto L_108bc467;
  /* 108bc452 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc455 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108bc458 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bc45a je 0x108bc467 */
  if (C.zf) goto L_108bc467;
  /* 108bc45c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc45f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc462 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108bc465 jmp 0x108bc442 */
  goto L_108bc442;
L_108bc467:;
  /* 108bc467 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc46a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108bc46d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bc46f jne 0x108bc479 */
  if (!C.zf) goto L_108bc479;
  /* 108bc471 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc474 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bc477 jmp 0x108bc47c */
  goto L_108bc47c;
L_108bc479:;
  /* 108bc479 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_108bc47c:;
  /* 108bc47c mov esp, ebp */
  ESP = (EBP);
  /* 108bc47e pop ebp */
  EBP = (pop32());
  /* 108bc47f ret  */
  ESPCHK(0x108bc430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c480 @ 0x108bc480 (130 bytes, 43 insns) */
void f_108bc480(void) {
  FTRACE(0x108bc480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bc480 push ebp */
  push32((uint32_t)(EBP));
  /* 108bc481 mov ebp, esp */
  EBP = (ESP);
  /* 108bc483 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc484 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc487 cmp eax, dword ptr [0x108e107c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108e107c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc48d jae 0x108bc4b1 */
  if (!C.cf) goto L_108bc4b1;
  /* 108bc48f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc492 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108bc495 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc498 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108bc49b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bc49e mov eax, dword ptr [ecx*4 + 0x108e0f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108e0f40)));
  /* 108bc4a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 108bc4aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108bc4ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bc4af jne 0x108bc4cc */
  if (!C.zf) goto L_108bc4cc;
L_108bc4b1:;
  /* 108bc4b1 call 0x108bbc00 */
  push32(0x108bc4b6u); f_108bbc00();
  /* 108bc4b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108bc4bc call 0x108bbc10 */
  push32(0x108bc4c1u); f_108bbc10();
  /* 108bc4c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108bc4c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bc4ca jmp 0x108bc4fe */
  goto L_108bc4fe;
L_108bc4cc:;
  /* 108bc4cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc4cf push edx */
  push32((uint32_t)(EDX));
  /* 108bc4d0 call 0x108bd420 */
  push32(0x108bc4d5u); f_108bd420();
  /* 108bc4d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc4d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bc4db push eax */
  push32((uint32_t)(EAX));
  /* 108bc4dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bc4df push ecx */
  push32((uint32_t)(ECX));
  /* 108bc4e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc4e3 push edx */
  push32((uint32_t)(EDX));
  /* 108bc4e4 call 0x108bc510 */
  push32(0x108bc4e9u); f_108bc510();
  /* 108bc4e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc4ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108bc4ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc4f2 push eax */
  push32((uint32_t)(EAX));
  /* 108bc4f3 call 0x108bd4b0 */
  push32(0x108bc4f8u); f_108bd4b0();
  /* 108bc4f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc4fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108bc4fe:;
  /* 108bc4fe mov esp, ebp */
  ESP = (EBP);
  /* 108bc500 pop ebp */
  EBP = (pop32());
  /* 108bc501 ret  */
  ESPCHK(0x108bc480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c510 @ 0x108bc510 (178 bytes, 56 insns) */
void f_108bc510(void) {
  FTRACE(0x108bc510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bc510 push ebp */
  push32((uint32_t)(EBP));
  /* 108bc511 mov ebp, esp */
  EBP = (ESP);
  /* 108bc513 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bc516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc519 push eax */
  push32((uint32_t)(EAX));
  /* 108bc51a call 0x108bd2a0 */
  push32(0x108bc51fu); f_108bd2a0();
  /* 108bc51f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc522 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108bc525 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc529 jne 0x108bc53e */
  if (!C.zf) goto L_108bc53e;
  /* 108bc52b call 0x108bbc00 */
  push32(0x108bc530u); f_108bbc00();
  /* 108bc530 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108bc536 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bc539 jmp 0x108bc5be */
  goto L_108bc5be;
L_108bc53e:;
  /* 108bc53e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bc541 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc542 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc544 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bc547 push edx */
  push32((uint32_t)(EDX));
  /* 108bc548 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bc54b push eax */
  push32((uint32_t)(EAX));
  /* 108bc54c call dword ptr [0x108e22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22cc))), 0x108bc552u);
  /* 108bc552 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108bc555 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc559 jne 0x108bc566 */
  if (!C.zf) goto L_108bc566;
  /* 108bc55b call dword ptr [0x108e228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e228c))), 0x108bc561u);
  /* 108bc561 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108bc564 jmp 0x108bc56d */
  goto L_108bc56d;
L_108bc566:;
  /* 108bc566 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108bc56d:;
  /* 108bc56d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc571 je 0x108bc584 */
  if (C.zf) goto L_108bc584;
  /* 108bc573 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc576 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc577 call 0x108bbb60 */
  push32(0x108bc57cu); f_108bbb60();
  /* 108bc57c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc57f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bc582 jmp 0x108bc5be */
  goto L_108bc5be;
L_108bc584:;
  /* 108bc584 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc587 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 108bc58a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc58d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 108bc590 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bc593 mov ecx, dword ptr [edx*4 + 0x108e0f40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x108e0f40)));
  /* 108bc59a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 108bc59e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 108bc5a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc5a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108bc5a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc5aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108bc5ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bc5b0 mov eax, dword ptr [eax*4 + 0x108e0f40] */
  EAX = (r32((uint32_t)(EAX*4 + 0x108e0f40)));
  /* 108bc5b7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 108bc5bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_108bc5be:;
  /* 108bc5be mov esp, ebp */
  ESP = (EBP);
  /* 108bc5c0 pop ebp */
  EBP = (pop32());
  /* 108bc5c1 ret  */
  ESPCHK(0x108bc510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5d0 @ 0x108bc5d0 (130 bytes, 43 insns) */
void f_108bc5d0(void) {
  FTRACE(0x108bc5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bc5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bc5d1 mov ebp, esp */
  EBP = (ESP);
  /* 108bc5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc5d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc5d7 cmp eax, dword ptr [0x108e107c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108e107c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc5dd jae 0x108bc601 */
  if (!C.cf) goto L_108bc601;
  /* 108bc5df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc5e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108bc5e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc5e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108bc5eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bc5ee mov eax, dword ptr [ecx*4 + 0x108e0f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108e0f40)));
  /* 108bc5f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 108bc5fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108bc5fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bc5ff jne 0x108bc61c */
  if (!C.zf) goto L_108bc61c;
L_108bc601:;
  /* 108bc601 call 0x108bbc00 */
  push32(0x108bc606u); f_108bbc00();
  /* 108bc606 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108bc60c call 0x108bbc10 */
  push32(0x108bc611u); f_108bbc10();
  /* 108bc611 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108bc617 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bc61a jmp 0x108bc64e */
  goto L_108bc64e;
L_108bc61c:;
  /* 108bc61c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc61f push edx */
  push32((uint32_t)(EDX));
  /* 108bc620 call 0x108bd420 */
  push32(0x108bc625u); f_108bd420();
  /* 108bc625 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc628 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bc62b push eax */
  push32((uint32_t)(EAX));
  /* 108bc62c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bc62f push ecx */
  push32((uint32_t)(ECX));
  /* 108bc630 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc633 push edx */
  push32((uint32_t)(EDX));
  /* 108bc634 call 0x108bc660 */
  push32(0x108bc639u); f_108bc660();
  /* 108bc639 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc63c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108bc63f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc642 push eax */
  push32((uint32_t)(EAX));
  /* 108bc643 call 0x108bd4b0 */
  push32(0x108bc648u); f_108bd4b0();
  /* 108bc648 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc64b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108bc64e:;
  /* 108bc64e mov esp, ebp */
  ESP = (EBP);
  /* 108bc650 pop ebp */
  EBP = (pop32());
  /* 108bc651 ret  */
  ESPCHK(0x108bc5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c660 @ 0x108bc660 (627 bytes, 182 insns) */
void f_108bc660(void) {
  FTRACE(0x108bc660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bc660 push ebp */
  push32((uint32_t)(EBP));
  /* 108bc661 mov ebp, esp */
  EBP = (ESP);
  /* 108bc663 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bc669 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 108bc670 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bc673 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 108bc679 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc67d jne 0x108bc686 */
  if (!C.zf) goto L_108bc686;
  /* 108bc67f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bc681 jmp 0x108bc8cf */
  goto L_108bc8cf;
L_108bc686:;
  /* 108bc686 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc689 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108bc68c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc68f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108bc692 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bc695 mov eax, dword ptr [ecx*4 + 0x108e0f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108e0f40)));
  /* 108bc69c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 108bc6a1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 108bc6a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bc6a6 je 0x108bc6b8 */
  if (C.zf) goto L_108bc6b8;
  /* 108bc6a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bc6aa push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc6ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc6af push edx */
  push32((uint32_t)(EDX));
  /* 108bc6b0 call 0x108bc510 */
  push32(0x108bc6b5u); f_108bc510();
  /* 108bc6b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bc6b8:;
  /* 108bc6b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc6bb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108bc6be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc6c1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108bc6c4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bc6c7 mov edx, dword ptr [eax*4 + 0x108e0f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108e0f40)));
  /* 108bc6ce movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 108bc6d3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 108bc6d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bc6da je 0x108bc7ec */
  if (C.zf) goto L_108bc7ec;
  /* 108bc6e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bc6e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108bc6e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_108bc6ed:;
  /* 108bc6ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc6f0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bc6f3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc6f6 jae 0x108bc7ea */
  if (!C.cf) goto L_108bc7ea;
  /* 108bc6fc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 108bc702 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108bc705:;
  /* 108bc705 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bc708 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 108bc70e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bc710 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc716 jge 0x108bc777 */
  if ((C.sf==C.of)) goto L_108bc777;
  /* 108bc718 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc71b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bc71e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc721 jae 0x108bc777 */
  if (!C.cf) goto L_108bc777;
  /* 108bc723 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc726 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108bc728 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 108bc72e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc731 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc734 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108bc737 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 108bc73e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc741 jne 0x108bc761 */
  if (!C.zf) goto L_108bc761;
  /* 108bc743 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 108bc749 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc74c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 108bc752 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bc755 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 108bc758 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bc75b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc75e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_108bc761:;
  /* 108bc761 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bc764 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 108bc76a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 108bc76c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bc76f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc772 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bc775 jmp 0x108bc705 */
  goto L_108bc705;
L_108bc777:;
  /* 108bc777 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc779 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 108bc77f push edx */
  push32((uint32_t)(EDX));
  /* 108bc780 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bc783 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 108bc789 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bc78b push eax */
  push32((uint32_t)(EAX));
  /* 108bc78c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 108bc792 push edx */
  push32((uint32_t)(EDX));
  /* 108bc793 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc796 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108bc799 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc79c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108bc79f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bc7a2 mov edx, dword ptr [eax*4 + 0x108e0f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108e0f40)));
  /* 108bc7a9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 108bc7ac push eax */
  push32((uint32_t)(EAX));
  /* 108bc7ad call dword ptr [0x108e231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e231c))), 0x108bc7b3u);
  /* 108bc7b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bc7b5 je 0x108bc7da */
  if (C.zf) goto L_108bc7da;
  /* 108bc7b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bc7ba add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc7c0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108bc7c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bc7c6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 108bc7cc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bc7ce cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc7d4 jge 0x108bc7d8 */
  if ((C.sf==C.of)) goto L_108bc7d8;
  /* 108bc7d6 jmp 0x108bc7ea */
  goto L_108bc7ea;
L_108bc7d8:;
  /* 108bc7d8 jmp 0x108bc7e5 */
  goto L_108bc7e5;
L_108bc7da:;
  /* 108bc7da call dword ptr [0x108e228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e228c))), 0x108bc7e0u);
  /* 108bc7e0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108bc7e3 jmp 0x108bc7ea */
  goto L_108bc7ea;
L_108bc7e5:;
  /* 108bc7e5 jmp 0x108bc6ed */
  goto L_108bc6ed;
L_108bc7ea:;
  /* 108bc7ea jmp 0x108bc83c */
  goto L_108bc83c;
L_108bc7ec:;
  /* 108bc7ec push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc7ee lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 108bc7f4 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc7f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bc7f8 push edx */
  push32((uint32_t)(EDX));
  /* 108bc7f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bc7fc push eax */
  push32((uint32_t)(EAX));
  /* 108bc7fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc800 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108bc803 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc806 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108bc809 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bc80c mov eax, dword ptr [ecx*4 + 0x108e0f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108e0f40)));
  /* 108bc813 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 108bc816 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc817 call dword ptr [0x108e231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e231c))), 0x108bc81du);
  /* 108bc81d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bc81f je 0x108bc833 */
  if (C.zf) goto L_108bc833;
  /* 108bc821 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108bc828 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 108bc82e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108bc831 jmp 0x108bc83c */
  goto L_108bc83c;
L_108bc833:;
  /* 108bc833 call dword ptr [0x108e228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e228c))), 0x108bc839u);
  /* 108bc839 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_108bc83c:;
  /* 108bc83c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc840 jne 0x108bc8c6 */
  if (!C.zf) goto L_108bc8c6;
  /* 108bc846 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc84a je 0x108bc87a */
  if (C.zf) goto L_108bc87a;
  /* 108bc84c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc850 jne 0x108bc869 */
  if (!C.zf) goto L_108bc869;
  /* 108bc852 call 0x108bbc00 */
  push32(0x108bc857u); f_108bbc00();
  /* 108bc857 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108bc85d call 0x108bbc10 */
  push32(0x108bc862u); f_108bbc10();
  /* 108bc862 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bc865 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108bc867 jmp 0x108bc875 */
  goto L_108bc875;
L_108bc869:;
  /* 108bc869 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bc86c push edx */
  push32((uint32_t)(EDX));
  /* 108bc86d call 0x108bbb60 */
  push32(0x108bc872u); f_108bbb60();
  /* 108bc872 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bc875:;
  /* 108bc875 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bc878 jmp 0x108bc8cf */
  goto L_108bc8cf;
L_108bc87a:;
  /* 108bc87a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc87d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108bc880 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc883 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108bc886 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bc889 mov edx, dword ptr [eax*4 + 0x108e0f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108e0f40)));
  /* 108bc890 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 108bc895 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 108bc898 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bc89a je 0x108bc8ab */
  if (C.zf) goto L_108bc8ab;
  /* 108bc89c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bc89f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108bc8a2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc8a5 jne 0x108bc8ab */
  if (!C.zf) goto L_108bc8ab;
  /* 108bc8a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bc8a9 jmp 0x108bc8cf */
  goto L_108bc8cf;
L_108bc8ab:;
  /* 108bc8ab call 0x108bbc00 */
  push32(0x108bc8b0u); f_108bbc00();
  /* 108bc8b0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 108bc8b6 call 0x108bbc10 */
  push32(0x108bc8bbu); f_108bbc10();
  /* 108bc8bb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108bc8c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bc8c4 jmp 0x108bc8cf */
  goto L_108bc8cf;
L_108bc8c6:;
  /* 108bc8c6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bc8c9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_108bc8cf:;
  /* 108bc8cf mov esp, ebp */
  ESP = (EBP);
  /* 108bc8d1 pop ebp */
  EBP = (pop32());
  /* 108bc8d2 ret  */
  ESPCHK(0x108bc660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8e0 @ 0x108bc8e0 (199 bytes, 68 insns) */
void f_108bc8e0(void) {
  FTRACE(0x108bc8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bc8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bc8e1 mov ebp, esp */
  EBP = (ESP);
  /* 108bc8e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc8e4 push ebx */
  push32((uint32_t)(EBX));
  /* 108bc8e5 push esi */
  push32((uint32_t)(ESI));
  /* 108bc8e6 push edi */
  push32((uint32_t)(EDI));
L_108bc8e7:;
  /* 108bc8e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc8eb jne 0x108bc90b */
  if (!C.zf) goto L_108bc90b;
  /* 108bc8ed push 0x108daf3c */
  push32((uint32_t)(0x108daf3cu));
  /* 108bc8f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bc8f4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 108bc8f6 push 0x108db008 */
  push32((uint32_t)(0x108db008u));
  /* 108bc8fb push 2 */
  push32((uint32_t)(0x2u));
  /* 108bc8fd call 0x108b2df0 */
  push32(0x108bc902u); f_108b2df0();
  /* 108bc902 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc905 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc908 jne 0x108bc90b */
  if (!C.zf) goto L_108bc90b;
  /* 108bc90a int3  */
  x86_unimpl("int3 @ 0x108bc90a");
L_108bc90b:;
  /* 108bc90b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bc90d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bc90f jne 0x108bc8e7 */
  if (!C.zf) goto L_108bc8e7;
  /* 108bc911 mov ecx, dword ptr [0x108df78c] */
  ECX = (r32((uint32_t)(0x108df78c)));
  /* 108bc917 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc91a mov dword ptr [0x108df78c], ecx */
  w32((uint32_t)(0x108df78c), (ECX));
  /* 108bc920 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc923 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108bc926 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 108bc928 push 0x108db008 */
  push32((uint32_t)(0x108db008u));
  /* 108bc92d push 2 */
  push32((uint32_t)(0x2u));
  /* 108bc92f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 108bc934 call 0x108b3d30 */
  push32(0x108bc939u); f_108b3d30();
  /* 108bc939 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc93c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc93f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 108bc942 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc945 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc949 je 0x108bc966 */
  if (C.zf) goto L_108bc966;
  /* 108bc94b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc94e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108bc951 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 108bc954 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc957 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 108bc95a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc95d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 108bc964 jmp 0x108bc98b */
  goto L_108bc98b;
L_108bc966:;
  /* 108bc966 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc969 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108bc96c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 108bc96f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc972 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 108bc975 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc978 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bc97b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc97e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 108bc981 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc984 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_108bc98b:;
  /* 108bc98b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc98e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc991 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108bc994 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108bc996 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bc999 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 108bc9a0 pop edi */
  EDI = (pop32());
  /* 108bc9a1 pop esi */
  ESI = (pop32());
  /* 108bc9a2 pop ebx */
  EBX = (pop32());
  /* 108bc9a3 mov esp, ebp */
  ESP = (EBP);
  /* 108bc9a5 pop ebp */
  EBP = (pop32());
  /* 108bc9a6 ret  */
  ESPCHK(0x108bc8e0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x108bc9b0 (50 bytes, 17 insns) */
void f_108bc9b0(void) {
  FTRACE(0x108bc9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bc9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bc9b1 mov ebp, esp */
  EBP = (ESP);
  /* 108bc9b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc9b6 cmp eax, dword ptr [0x108e107c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108e107c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc9bc jb 0x108bc9c2 */
  if (C.cf) goto L_108bc9c2;
  /* 108bc9be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bc9c0 jmp 0x108bc9e0 */
  goto L_108bc9e0;
L_108bc9c2:;
  /* 108bc9c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc9c5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108bc9c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bc9cb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108bc9ce imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bc9d1 mov eax, dword ptr [ecx*4 + 0x108e0f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108e0f40)));
  /* 108bc9d8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 108bc9dd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_108bc9e0:;
  /* 108bc9e0 pop ebp */
  EBP = (pop32());
  /* 108bc9e1 ret  */
  ESPCHK(0x108bc9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9f0 @ 0x108bc9f0 (300 bytes, 80 insns) */
void f_108bc9f0(void) {
  FTRACE(0x108bc9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bc9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bc9f1 mov ebp, esp */
  EBP = (ESP);
  /* 108bc9f3 push ecx */
  push32((uint32_t)(ECX));
  /* 108bc9f4 cmp dword ptr [0x108e0c40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108e0c40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bc9fb jne 0x108bca09 */
  if (!C.zf) goto L_108bca09;
  /* 108bc9fd mov dword ptr [0x108e0c40], 0x200 */
  w32((uint32_t)(0x108e0c40), (0x200u));
  /* 108bca07 jmp 0x108bca1c */
  goto L_108bca1c;
L_108bca09:;
  /* 108bca09 cmp dword ptr [0x108e0c40], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x108e0c40))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bca10 jge 0x108bca1c */
  if ((C.sf==C.of)) goto L_108bca1c;
  /* 108bca12 mov dword ptr [0x108e0c40], 0x14 */
  w32((uint32_t)(0x108e0c40), (0x14u));
L_108bca1c:;
  /* 108bca1c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 108bca21 push 0x108db014 */
  push32((uint32_t)(0x108db014u));
  /* 108bca26 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bca28 push 4 */
  push32((uint32_t)(0x4u));
  /* 108bca2a mov eax, dword ptr [0x108e0c40] */
  EAX = (r32((uint32_t)(0x108e0c40)));
  /* 108bca2f push eax */
  push32((uint32_t)(EAX));
  /* 108bca30 call 0x108b4140 */
  push32(0x108bca35u); f_108b4140();
  /* 108bca35 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bca38 mov dword ptr [0x108df900], eax */
  w32((uint32_t)(0x108df900), (EAX));
  /* 108bca3d cmp dword ptr [0x108df900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bca44 jne 0x108bca85 */
  if (!C.zf) goto L_108bca85;
  /* 108bca46 mov dword ptr [0x108e0c40], 0x14 */
  w32((uint32_t)(0x108e0c40), (0x14u));
  /* 108bca50 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 108bca55 push 0x108db014 */
  push32((uint32_t)(0x108db014u));
  /* 108bca5a push 2 */
  push32((uint32_t)(0x2u));
  /* 108bca5c push 4 */
  push32((uint32_t)(0x4u));
  /* 108bca5e mov ecx, dword ptr [0x108e0c40] */
  ECX = (r32((uint32_t)(0x108e0c40)));
  /* 108bca64 push ecx */
  push32((uint32_t)(ECX));
  /* 108bca65 call 0x108b4140 */
  push32(0x108bca6au); f_108b4140();
  /* 108bca6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bca6d mov dword ptr [0x108df900], eax */
  w32((uint32_t)(0x108df900), (EAX));
  /* 108bca72 cmp dword ptr [0x108df900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bca79 jne 0x108bca85 */
  if (!C.zf) goto L_108bca85;
  /* 108bca7b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 108bca7d call 0x108b2ca0 */
  push32(0x108bca82u); f_108b2ca0();
  /* 108bca82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bca85:;
  /* 108bca85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108bca8c jmp 0x108bca97 */
  goto L_108bca97;
L_108bca8e:;
  /* 108bca8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bca91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bca94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108bca97:;
  /* 108bca97 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bca9b jge 0x108bcab6 */
  if ((C.sf==C.of)) goto L_108bcab6;
  /* 108bca9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bcaa0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108bcaa3 add eax, 0x108de120 */
  { uint32_t _a=(EAX),_b=(0x108de120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcaa8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bcaab mov edx, dword ptr [0x108df900] */
  EDX = (r32((uint32_t)(0x108df900)));
  /* 108bcab1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 108bcab4 jmp 0x108bca8e */
  goto L_108bca8e;
L_108bcab6:;
  /* 108bcab6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108bcabd jmp 0x108bcac8 */
  goto L_108bcac8;
L_108bcabf:;
  /* 108bcabf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bcac2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcac5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108bcac8:;
  /* 108bcac8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcacc jge 0x108bcb18 */
  if ((C.sf==C.of)) goto L_108bcb18;
  /* 108bcace mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bcad1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108bcad4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bcad7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108bcada imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bcadd mov eax, dword ptr [ecx*4 + 0x108e0f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108e0f40)));
  /* 108bcae4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcae8 je 0x108bcb06 */
  if (C.zf) goto L_108bcb06;
  /* 108bcaea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bcaed sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108bcaf0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bcaf3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108bcaf6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bcaf9 mov eax, dword ptr [ecx*4 + 0x108e0f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108e0f40)));
  /* 108bcb00 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcb04 jne 0x108bcb16 */
  if (!C.zf) goto L_108bcb16;
L_108bcb06:;
  /* 108bcb06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bcb09 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108bcb0c mov dword ptr [ecx + 0x108de130], 0xffffffff */
  w32((uint32_t)(ECX + 0x108de130), (0xffffffffu));
L_108bcb16:;
  /* 108bcb16 jmp 0x108bcabf */
  goto L_108bcabf;
L_108bcb18:;
  /* 108bcb18 mov esp, ebp */
  ESP = (EBP);
  /* 108bcb1a pop ebp */
  EBP = (pop32());
  /* 108bcb1b ret  */
  ESPCHK(0x108bc9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb20 @ 0x108bcb20 (26 bytes, 9 insns) */
void f_108bcb20(void) {
  FTRACE(0x108bcb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bcb20 push ebp */
  push32((uint32_t)(EBP));
  /* 108bcb21 mov ebp, esp */
  EBP = (ESP);
  /* 108bcb23 call 0x108bd720 */
  push32(0x108bcb28u); f_108bd720();
  /* 108bcb28 movsx eax, byte ptr [0x108df5a4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x108df5a4))));
  /* 108bcb2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bcb31 je 0x108bcb38 */
  if (C.zf) goto L_108bcb38;
  /* 108bcb33 call 0x108bd4e0 */
  push32(0x108bcb38u); f_108bd4e0();
L_108bcb38:;
  /* 108bcb38 pop ebp */
  EBP = (pop32());
  /* 108bcb39 ret  */
  ESPCHK(0x108bcb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb40 @ 0x108bcb40 (61 bytes, 20 insns) */
void f_108bcb40(void) {
  FTRACE(0x108bcb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bcb40 push ebp */
  push32((uint32_t)(EBP));
  /* 108bcb41 mov ebp, esp */
  EBP = (ESP);
  /* 108bcb43 cmp dword ptr [ebp + 8], 0x108de120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x108de120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcb4a jb 0x108bcb6e */
  if (C.cf) goto L_108bcb6e;
  /* 108bcb4c cmp dword ptr [ebp + 8], 0x108de380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x108de380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcb53 ja 0x108bcb6e */
  if ((!C.cf&&!C.zf)) goto L_108bcb6e;
  /* 108bcb55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bcb58 sub eax, 0x108de120 */
  { uint32_t _a=(EAX),_b=(0x108de120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bcb5d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108bcb60 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcb63 push eax */
  push32((uint32_t)(EAX));
  /* 108bcb64 call 0x108b7730 */
  push32(0x108bcb69u); f_108b7730();
  /* 108bcb69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcb6c jmp 0x108bcb7b */
  goto L_108bcb7b;
L_108bcb6e:;
  /* 108bcb6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bcb71 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcb74 push ecx */
  push32((uint32_t)(ECX));
  /* 108bcb75 call dword ptr [0x108e2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2308))), 0x108bcb7bu);
L_108bcb7b:;
  /* 108bcb7b pop ebp */
  EBP = (pop32());
  /* 108bcb7c ret  */
  ESPCHK(0x108bcb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb80 @ 0x108bcb80 (41 bytes, 16 insns) */
void f_108bcb80(void) {
  FTRACE(0x108bcb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bcb80 push ebp */
  push32((uint32_t)(EBP));
  /* 108bcb81 mov ebp, esp */
  EBP = (ESP);
  /* 108bcb83 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcb87 jge 0x108bcb9a */
  if ((C.sf==C.of)) goto L_108bcb9a;
  /* 108bcb89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bcb8c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcb8f push eax */
  push32((uint32_t)(EAX));
  /* 108bcb90 call 0x108b7730 */
  push32(0x108bcb95u); f_108b7730();
  /* 108bcb95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcb98 jmp 0x108bcba7 */
  goto L_108bcba7;
L_108bcb9a:;
  /* 108bcb9a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bcb9d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcba0 push ecx */
  push32((uint32_t)(ECX));
  /* 108bcba1 call dword ptr [0x108e2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2308))), 0x108bcba7u);
L_108bcba7:;
  /* 108bcba7 pop ebp */
  EBP = (pop32());
  /* 108bcba8 ret  */
  ESPCHK(0x108bcb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbb0 @ 0x108bcbb0 (61 bytes, 20 insns) */
void f_108bcbb0(void) {
  FTRACE(0x108bcbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bcbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bcbb1 mov ebp, esp */
  EBP = (ESP);
  /* 108bcbb3 cmp dword ptr [ebp + 8], 0x108de120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x108de120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcbba jb 0x108bcbde */
  if (C.cf) goto L_108bcbde;
  /* 108bcbbc cmp dword ptr [ebp + 8], 0x108de380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x108de380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcbc3 ja 0x108bcbde */
  if ((!C.cf&&!C.zf)) goto L_108bcbde;
  /* 108bcbc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bcbc8 sub eax, 0x108de120 */
  { uint32_t _a=(EAX),_b=(0x108de120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bcbcd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108bcbd0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcbd3 push eax */
  push32((uint32_t)(EAX));
  /* 108bcbd4 call 0x108b77d0 */
  push32(0x108bcbd9u); f_108b77d0();
  /* 108bcbd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcbdc jmp 0x108bcbeb */
  goto L_108bcbeb;
L_108bcbde:;
  /* 108bcbde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bcbe1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcbe4 push ecx */
  push32((uint32_t)(ECX));
  /* 108bcbe5 call dword ptr [0x108e2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2304))), 0x108bcbebu);
L_108bcbeb:;
  /* 108bcbeb pop ebp */
  EBP = (pop32());
  /* 108bcbec ret  */
  ESPCHK(0x108bcbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbf0 @ 0x108bcbf0 (41 bytes, 16 insns) */
void f_108bcbf0(void) {
  FTRACE(0x108bcbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bcbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bcbf1 mov ebp, esp */
  EBP = (ESP);
  /* 108bcbf3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcbf7 jge 0x108bcc0a */
  if ((C.sf==C.of)) goto L_108bcc0a;
  /* 108bcbf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bcbfc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcbff push eax */
  push32((uint32_t)(EAX));
  /* 108bcc00 call 0x108b77d0 */
  push32(0x108bcc05u); f_108b77d0();
  /* 108bcc05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcc08 jmp 0x108bcc17 */
  goto L_108bcc17;
L_108bcc0a:;
  /* 108bcc0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bcc0d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcc10 push ecx */
  push32((uint32_t)(ECX));
  /* 108bcc11 call dword ptr [0x108e2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2304))), 0x108bcc17u);
L_108bcc17:;
  /* 108bcc17 pop ebp */
  EBP = (pop32());
  /* 108bcc18 ret  */
  ESPCHK(0x108bcbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc20 @ 0x108bcc20 (119 bytes, 34 insns) */
void f_108bcc20(void) {
  FTRACE(0x108bcc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bcc20 push ebp */
  push32((uint32_t)(EBP));
  /* 108bcc21 mov ebp, esp */
  EBP = (ESP);
  /* 108bcc23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bcc26 push 0x108df8fc */
  push32((uint32_t)(0x108df8fcu));
  /* 108bcc2b call dword ptr [0x108e2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2330))), 0x108bcc31u);
  /* 108bcc31 cmp dword ptr [0x108df8ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df8ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcc38 je 0x108bcc58 */
  if (C.zf) goto L_108bcc58;
  /* 108bcc3a push 0x108df8fc */
  push32((uint32_t)(0x108df8fcu));
  /* 108bcc3f call dword ptr [0x108e2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2320))), 0x108bcc45u);
  /* 108bcc45 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108bcc47 call 0x108b7730 */
  push32(0x108bcc4cu); f_108b7730();
  /* 108bcc4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcc4f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108bcc56 jmp 0x108bcc5f */
  goto L_108bcc5f;
L_108bcc58:;
  /* 108bcc58 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108bcc5f:;
  /* 108bcc5f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 108bcc63 push eax */
  push32((uint32_t)(EAX));
  /* 108bcc64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bcc67 push ecx */
  push32((uint32_t)(ECX));
  /* 108bcc68 call 0x108bcca0 */
  push32(0x108bcc6du); f_108bcca0();
  /* 108bcc6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcc70 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108bcc73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcc77 je 0x108bcc85 */
  if (C.zf) goto L_108bcc85;
  /* 108bcc79 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108bcc7b call 0x108b77d0 */
  push32(0x108bcc80u); f_108b77d0();
  /* 108bcc80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcc83 jmp 0x108bcc90 */
  goto L_108bcc90;
L_108bcc85:;
  /* 108bcc85 push 0x108df8fc */
  push32((uint32_t)(0x108df8fcu));
  /* 108bcc8a call dword ptr [0x108e2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2320))), 0x108bcc90u);
L_108bcc90:;
  /* 108bcc90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bcc93 mov esp, ebp */
  ESP = (EBP);
  /* 108bcc95 pop ebp */
  EBP = (pop32());
  /* 108bcc96 ret  */
  ESPCHK(0x108bcc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cca0 @ 0x108bcca0 (160 bytes, 50 insns) */
void f_108bcca0(void) {
  FTRACE(0x108bcca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bcca0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bcca1 mov ebp, esp */
  EBP = (ESP);
  /* 108bcca3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bcca6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bccaa jne 0x108bccb3 */
  if (!C.zf) goto L_108bccb3;
  /* 108bccac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bccae jmp 0x108bcd3c */
  goto L_108bcd3c;
L_108bccb3:;
  /* 108bccb3 cmp dword ptr [0x108df770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bccba jne 0x108bccea */
  if (!C.zf) goto L_108bccea;
  /* 108bccbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bccbf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bccc4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bccc9 jle 0x108bccdb */
  if ((C.zf||C.sf!=C.of)) goto L_108bccdb;
  /* 108bcccb call 0x108bbc00 */
  push32(0x108bccd0u); f_108bbc00();
  /* 108bccd0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 108bccd6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bccd9 jmp 0x108bcd3c */
  goto L_108bcd3c;
L_108bccdb:;
  /* 108bccdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bccde mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 108bcce1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 108bcce3 mov eax, 1 */
  EAX = (0x1u);
  /* 108bcce8 jmp 0x108bcd3c */
  goto L_108bcd3c;
L_108bccea:;
  /* 108bccea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108bccf1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 108bccf4 push eax */
  push32((uint32_t)(EAX));
  /* 108bccf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bccf7 mov ecx, dword ptr [0x108ddea4] */
  ECX = (r32((uint32_t)(0x108ddea4)));
  /* 108bccfd push ecx */
  push32((uint32_t)(ECX));
  /* 108bccfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bcd01 push edx */
  push32((uint32_t)(EDX));
  /* 108bcd02 push 1 */
  push32((uint32_t)(0x1u));
  /* 108bcd04 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 108bcd07 push eax */
  push32((uint32_t)(EAX));
  /* 108bcd08 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 108bcd0d mov ecx, dword ptr [0x108df780] */
  ECX = (r32((uint32_t)(0x108df780)));
  /* 108bcd13 push ecx */
  push32((uint32_t)(ECX));
  /* 108bcd14 call dword ptr [0x108e2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2388))), 0x108bcd1au);
  /* 108bcd1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108bcd1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcd21 je 0x108bcd29 */
  if (C.zf) goto L_108bcd29;
  /* 108bcd23 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcd27 je 0x108bcd39 */
  if (C.zf) goto L_108bcd39;
L_108bcd29:;
  /* 108bcd29 call 0x108bbc00 */
  push32(0x108bcd2eu); f_108bbc00();
  /* 108bcd2e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 108bcd34 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bcd37 jmp 0x108bcd3c */
  goto L_108bcd3c;
L_108bcd39:;
  /* 108bcd39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108bcd3c:;
  /* 108bcd3c mov esp, ebp */
  ESP = (EBP);
  /* 108bcd3e pop ebp */
  EBP = (pop32());
  /* 108bcd3f ret  */
  ESPCHK(0x108bcca0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x108bcd40 (32 bytes, 18 insns) */
void f_108bcd40(void) {
  FTRACE(0x108bcd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bcd40 push ebp */
  push32((uint32_t)(EBP));
  /* 108bcd41 mov ebp, esp */
  EBP = (ESP);
  /* 108bcd43 push ebx */
  push32((uint32_t)(EBX));
  /* 108bcd44 push esi */
  push32((uint32_t)(ESI));
  /* 108bcd45 push edi */
  push32((uint32_t)(EDI));
  /* 108bcd46 push ebp */
  push32((uint32_t)(EBP));
  /* 108bcd47 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bcd49 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bcd4b push 0x108bcd58 */
  push32((uint32_t)(0x108bcd58u));
  /* 108bcd50 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 108bcd53 call 0x108c448c */
  push32(0x108bcd58u); f_108c448c();
  /* 108bcd58 pop ebp */
  EBP = (pop32());
  /* 108bcd59 pop edi */
  EDI = (pop32());
  /* 108bcd5a pop esi */
  ESI = (pop32());
  /* 108bcd5b pop ebx */
  EBX = (pop32());
  /* 108bcd5c mov esp, ebp */
  ESP = (EBP);
  /* 108bcd5e pop ebp */
  EBP = (pop32());
  /* 108bcd5f ret  */
  ESPCHK(0x108bcd40u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x108bcd82 (104 bytes, 33 insns) */
void f_108bcd82(void) {
  FTRACE(0x108bcd82u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bcd82 push ebx */
  push32((uint32_t)(EBX));
  /* 108bcd83 push esi */
  push32((uint32_t)(ESI));
  /* 108bcd84 push edi */
  push32((uint32_t)(EDI));
  /* 108bcd85 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 108bcd89 push eax */
  push32((uint32_t)(EAX));
  /* 108bcd8a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 108bcd8c push 0x108bcd60 */
  push32((uint32_t)(0x108bcd60u));
  /* 108bcd91 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 108bcd98 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_108bcd9f:;
  /* 108bcd9f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 108bcda3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 108bcda6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 108bcda9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcdac je 0x108bcddc */
  if (C.zf) goto L_108bcddc;
  /* 108bcdae cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcdb2 je 0x108bcddc */
  if (C.zf) goto L_108bcddc;
  /* 108bcdb4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 108bcdb7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 108bcdba mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 108bcdbe mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 108bcdc1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcdc6 jne 0x108bcdda */
  if (!C.zf) goto L_108bcdda;
  /* 108bcdc8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 108bcdcd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 108bcdd1 call 0x108bce16 */
  push32(0x108bcdd6u); f_108bce16();
  /* 108bcdd6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x108bcddau);
L_108bcdda:;
  /* 108bcdda jmp 0x108bcd9f */
  goto L_108bcd9f;
L_108bcddc:;
  /* 108bcddc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 108bcde3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcde6 pop edi */
  EDI = (pop32());
  /* 108bcde7 pop esi */
  ESI = (pop32());
  /* 108bcde8 pop ebx */
  EBX = (pop32());
  /* 108bcde9 ret  */
  ESPCHK(0x108bcd82u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce16 @ 0x108bce16 (24 bytes, 10 insns) */
void f_108bce16(void) {
  FTRACE(0x108bce16u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bce16 push ebx */
  push32((uint32_t)(EBX));
  /* 108bce17 push ecx */
  push32((uint32_t)(ECX));
  /* 108bce18 mov ebx, 0x108de3b8 */
  EBX = (0x108de3b8u);
  /* 108bce1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bce20 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 108bce23 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 108bce26 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 108bce29 pop ecx */
  ECX = (pop32());
  /* 108bce2a pop ebx */
  EBX = (pop32());
  /* 108bce2b ret 4 */
  ESPCHK(0x108bce16u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cef5 @ 0x108bcef5 (27 bytes, 11 insns) */
void f_108bcef5(void) {
  FTRACE(0x108bcef5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bcef5 push ebp */
  push32((uint32_t)(EBP));
  /* 108bcef6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 108bcefa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 108bcefc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 108bceff push eax */
  push32((uint32_t)(EAX));
  /* 108bcf00 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 108bcf03 push eax */
  push32((uint32_t)(EAX));
  /* 108bcf04 call 0x108bcd82 */
  push32(0x108bcf09u); f_108bcd82();
  /* 108bcf09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcf0c pop ebp */
  EBP = (pop32());
  /* 108bcf0d ret 4 */
  ESPCHK(0x108bcef5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cf10 @ 0x108bcf10 (482 bytes, 138 insns) */
void f_108bcf10(void) {
  FTRACE(0x108bcf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bcf10 push ebp */
  push32((uint32_t)(EBP));
  /* 108bcf11 mov ebp, esp */
  EBP = (ESP);
  /* 108bcf13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bcf16 push esi */
  push32((uint32_t)(ESI));
  /* 108bcf17 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 108bcf1e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 108bcf20 call 0x108b7730 */
  push32(0x108bcf25u); f_108b7730();
  /* 108bcf25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcf28 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108bcf2f jmp 0x108bcf3a */
  goto L_108bcf3a;
L_108bcf31:;
  /* 108bcf31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bcf34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcf37 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_108bcf3a:;
  /* 108bcf3a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcf3e jge 0x108bd0e0 */
  if ((C.sf==C.of)) goto L_108bd0e0;
  /* 108bcf44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bcf47 cmp dword ptr [ecx*4 + 0x108e0f40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x108e0f40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcf4f je 0x108bd046 */
  if (C.zf) goto L_108bd046;
  /* 108bcf55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bcf58 mov eax, dword ptr [edx*4 + 0x108e0f40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x108e0f40)));
  /* 108bcf5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108bcf62 jmp 0x108bcf6d */
  goto L_108bcf6d;
L_108bcf64:;
  /* 108bcf64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bcf67 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcf6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108bcf6d:;
  /* 108bcf6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bcf70 mov eax, dword ptr [edx*4 + 0x108e0f40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x108e0f40)));
  /* 108bcf77 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcf7c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcf7f jae 0x108bd036 */
  if (!C.cf) goto L_108bd036;
  /* 108bcf85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bcf88 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108bcf8c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108bcf8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bcf91 jne 0x108bd031 */
  if (!C.zf) goto L_108bd031;
  /* 108bcf97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bcf9a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcf9e jne 0x108bcfd9 */
  if (!C.zf) goto L_108bcfd9;
  /* 108bcfa0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 108bcfa2 call 0x108b7730 */
  push32(0x108bcfa7u); f_108b7730();
  /* 108bcfa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcfaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bcfad cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bcfb1 jne 0x108bcfcf */
  if (!C.zf) goto L_108bcfcf;
  /* 108bcfb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bcfb6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcfb9 push edx */
  push32((uint32_t)(EDX));
  /* 108bcfba call dword ptr [0x108e23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e23a4))), 0x108bcfc0u);
  /* 108bcfc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bcfc3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108bcfc6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcfc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bcfcc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_108bcfcf:;
  /* 108bcfcf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 108bcfd1 call 0x108b77d0 */
  push32(0x108bcfd6u); f_108b77d0();
  /* 108bcfd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bcfd9:;
  /* 108bcfd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bcfdc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcfdf push eax */
  push32((uint32_t)(EAX));
  /* 108bcfe0 call dword ptr [0x108e2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2308))), 0x108bcfe6u);
  /* 108bcfe6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bcfe9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 108bcfed and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108bcff0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bcff2 je 0x108bd006 */
  if (C.zf) goto L_108bd006;
  /* 108bcff4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bcff7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bcffa push eax */
  push32((uint32_t)(EAX));
  /* 108bcffb call dword ptr [0x108e2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2304))), 0x108bd001u);
  /* 108bd001 jmp 0x108bcf64 */
  goto L_108bcf64;
L_108bd006:;
  /* 108bd006 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bd009 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 108bd00f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bd012 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108bd015 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bd018 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bd01b sub eax, dword ptr [edx*4 + 0x108e0f40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x108e0f40))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bd022 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108bd023 mov esi, 0x24 */
  ESI = (0x24u);
  /* 108bd028 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108bd02a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd02c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bd02f jmp 0x108bd036 */
  goto L_108bd036;
L_108bd031:;
  /* 108bd031 jmp 0x108bcf64 */
  goto L_108bcf64;
L_108bd036:;
  /* 108bd036 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd03a je 0x108bd041 */
  if (C.zf) goto L_108bd041;
  /* 108bd03c jmp 0x108bd0e0 */
  goto L_108bd0e0;
L_108bd041:;
  /* 108bd041 jmp 0x108bd0db */
  goto L_108bd0db;
L_108bd046:;
  /* 108bd046 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 108bd048 push 0x108db01c */
  push32((uint32_t)(0x108db01cu));
  /* 108bd04d push 2 */
  push32((uint32_t)(0x2u));
  /* 108bd04f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 108bd054 call 0x108b3d30 */
  push32(0x108bd059u); f_108b3d30();
  /* 108bd059 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd05c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108bd05f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd063 je 0x108bd0d9 */
  if (C.zf) goto L_108bd0d9;
  /* 108bd065 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bd068 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bd06b mov dword ptr [eax*4 + 0x108e0f40], ecx */
  w32((uint32_t)(EAX*4 + 0x108e0f40), (ECX));
  /* 108bd072 mov edx, dword ptr [0x108e107c] */
  EDX = (r32((uint32_t)(0x108e107c)));
  /* 108bd078 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd07b mov dword ptr [0x108e107c], edx */
  w32((uint32_t)(0x108e107c), (EDX));
  /* 108bd081 jmp 0x108bd08c */
  goto L_108bd08c;
L_108bd083:;
  /* 108bd083 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bd086 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd089 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108bd08c:;
  /* 108bd08c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bd08f mov edx, dword ptr [ecx*4 + 0x108e0f40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x108e0f40)));
  /* 108bd096 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd09c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd09f jae 0x108bd0c4 */
  if (!C.cf) goto L_108bd0c4;
  /* 108bd0a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bd0a4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 108bd0a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bd0ab mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 108bd0b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bd0b4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 108bd0b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bd0bb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 108bd0c2 jmp 0x108bd083 */
  goto L_108bd083;
L_108bd0c4:;
  /* 108bd0c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bd0c7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108bd0ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bd0cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd0d0 push edx */
  push32((uint32_t)(EDX));
  /* 108bd0d1 call 0x108bd420 */
  push32(0x108bd0d6u); f_108bd420();
  /* 108bd0d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bd0d9:;
  /* 108bd0d9 jmp 0x108bd0e0 */
  goto L_108bd0e0;
L_108bd0db:;
  /* 108bd0db jmp 0x108bcf31 */
  goto L_108bcf31;
L_108bd0e0:;
  /* 108bd0e0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 108bd0e2 call 0x108b77d0 */
  push32(0x108bd0e7u); f_108b77d0();
  /* 108bd0e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd0ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd0ed pop esi */
  ESI = (pop32());
  /* 108bd0ee mov esp, ebp */
  ESP = (EBP);
  /* 108bd0f0 pop ebp */
  EBP = (pop32());
  /* 108bd0f1 ret  */
  ESPCHK(0x108bcf10u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x108bd100 (183 bytes, 57 insns) */
void f_108bd100(void) {
  FTRACE(0x108bd100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bd100 push ebp */
  push32((uint32_t)(EBP));
  /* 108bd101 mov ebp, esp */
  EBP = (ESP);
  /* 108bd103 push ecx */
  push32((uint32_t)(ECX));
  /* 108bd104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd107 cmp eax, dword ptr [0x108e107c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108e107c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd10d jae 0x108bd19a */
  if (!C.cf) goto L_108bd19a;
  /* 108bd113 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd116 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108bd119 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd11c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108bd11f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bd122 mov eax, dword ptr [ecx*4 + 0x108e0f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108e0f40)));
  /* 108bd129 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd12d jne 0x108bd19a */
  if (!C.zf) goto L_108bd19a;
  /* 108bd12f cmp dword ptr [0x108df564], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108df564))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd136 jne 0x108bd17a */
  if (!C.zf) goto L_108bd17a;
  /* 108bd138 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd13b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108bd13e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd142 je 0x108bd152 */
  if (C.zf) goto L_108bd152;
  /* 108bd144 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd148 je 0x108bd160 */
  if (C.zf) goto L_108bd160;
  /* 108bd14a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd14e je 0x108bd16e */
  if (C.zf) goto L_108bd16e;
  /* 108bd150 jmp 0x108bd17a */
  goto L_108bd17a;
L_108bd152:;
  /* 108bd152 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bd155 push edx */
  push32((uint32_t)(EDX));
  /* 108bd156 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 108bd158 call dword ptr [0x108e22d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22d0))), 0x108bd15eu);
  /* 108bd15e jmp 0x108bd17a */
  goto L_108bd17a;
L_108bd160:;
  /* 108bd160 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bd163 push eax */
  push32((uint32_t)(EAX));
  /* 108bd164 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 108bd166 call dword ptr [0x108e22d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22d0))), 0x108bd16cu);
  /* 108bd16c jmp 0x108bd17a */
  goto L_108bd17a;
L_108bd16e:;
  /* 108bd16e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bd171 push ecx */
  push32((uint32_t)(ECX));
  /* 108bd172 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 108bd174 call dword ptr [0x108e22d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22d0))), 0x108bd17au);
L_108bd17a:;
  /* 108bd17a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd17d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 108bd180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd183 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 108bd186 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bd189 mov ecx, dword ptr [edx*4 + 0x108e0f40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x108e0f40)));
  /* 108bd190 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bd193 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 108bd196 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bd198 jmp 0x108bd1b3 */
  goto L_108bd1b3;
L_108bd19a:;
  /* 108bd19a call 0x108bbc00 */
  push32(0x108bd19fu); f_108bbc00();
  /* 108bd19f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108bd1a5 call 0x108bbc10 */
  push32(0x108bd1aau); f_108bbc10();
  /* 108bd1aa mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108bd1b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_108bd1b3:;
  /* 108bd1b3 mov esp, ebp */
  ESP = (EBP);
  /* 108bd1b5 pop ebp */
  EBP = (pop32());
  /* 108bd1b6 ret  */
  ESPCHK(0x108bd100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1c0 @ 0x108bd1c0 (216 bytes, 63 insns) */
void f_108bd1c0(void) {
  FTRACE(0x108bd1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bd1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bd1c1 mov ebp, esp */
  EBP = (ESP);
  /* 108bd1c3 push ecx */
  push32((uint32_t)(ECX));
  /* 108bd1c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd1c7 cmp eax, dword ptr [0x108e107c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108e107c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd1cd jae 0x108bd27b */
  if (!C.cf) goto L_108bd27b;
  /* 108bd1d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd1d6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108bd1d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd1dc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108bd1df imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bd1e2 mov eax, dword ptr [ecx*4 + 0x108e0f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108e0f40)));
  /* 108bd1e9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 108bd1ee and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108bd1f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bd1f3 je 0x108bd27b */
  if (C.zf) goto L_108bd27b;
  /* 108bd1f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd1fc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 108bd1ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd202 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 108bd205 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bd208 mov ecx, dword ptr [edx*4 + 0x108e0f40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x108e0f40)));
  /* 108bd20f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd213 je 0x108bd27b */
  if (C.zf) goto L_108bd27b;
  /* 108bd215 cmp dword ptr [0x108df564], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108df564))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd21c jne 0x108bd25a */
  if (!C.zf) goto L_108bd25a;
  /* 108bd21e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd221 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108bd224 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd228 je 0x108bd238 */
  if (C.zf) goto L_108bd238;
  /* 108bd22a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd22e je 0x108bd244 */
  if (C.zf) goto L_108bd244;
  /* 108bd230 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd234 je 0x108bd250 */
  if (C.zf) goto L_108bd250;
  /* 108bd236 jmp 0x108bd25a */
  goto L_108bd25a;
L_108bd238:;
  /* 108bd238 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bd23a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 108bd23c call dword ptr [0x108e22d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22d0))), 0x108bd242u);
  /* 108bd242 jmp 0x108bd25a */
  goto L_108bd25a;
L_108bd244:;
  /* 108bd244 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bd246 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 108bd248 call dword ptr [0x108e22d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22d0))), 0x108bd24eu);
  /* 108bd24e jmp 0x108bd25a */
  goto L_108bd25a;
L_108bd250:;
  /* 108bd250 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bd252 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 108bd254 call dword ptr [0x108e22d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22d0))), 0x108bd25au);
L_108bd25a:;
  /* 108bd25a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd25d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108bd260 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd263 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108bd266 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bd269 mov edx, dword ptr [eax*4 + 0x108e0f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108e0f40)));
  /* 108bd270 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 108bd277 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bd279 jmp 0x108bd294 */
  goto L_108bd294;
L_108bd27b:;
  /* 108bd27b call 0x108bbc00 */
  push32(0x108bd280u); f_108bbc00();
  /* 108bd280 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108bd286 call 0x108bbc10 */
  push32(0x108bd28bu); f_108bbc10();
  /* 108bd28b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108bd291 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_108bd294:;
  /* 108bd294 mov esp, ebp */
  ESP = (EBP);
  /* 108bd296 pop ebp */
  EBP = (pop32());
  /* 108bd297 ret  */
  ESPCHK(0x108bd1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2a0 @ 0x108bd2a0 (102 bytes, 30 insns) */
void f_108bd2a0(void) {
  FTRACE(0x108bd2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bd2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bd2a1 mov ebp, esp */
  EBP = (ESP);
  /* 108bd2a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd2a6 cmp eax, dword ptr [0x108e107c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108e107c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd2ac jae 0x108bd2eb */
  if (!C.cf) goto L_108bd2eb;
  /* 108bd2ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd2b1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108bd2b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd2b7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108bd2ba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bd2bd mov eax, dword ptr [ecx*4 + 0x108e0f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108e0f40)));
  /* 108bd2c4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 108bd2c9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108bd2cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bd2ce je 0x108bd2eb */
  if (C.zf) goto L_108bd2eb;
  /* 108bd2d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd2d3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 108bd2d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd2d9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 108bd2dc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bd2df mov ecx, dword ptr [edx*4 + 0x108e0f40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x108e0f40)));
  /* 108bd2e6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 108bd2e9 jmp 0x108bd304 */
  goto L_108bd304;
L_108bd2eb:;
  /* 108bd2eb call 0x108bbc00 */
  push32(0x108bd2f0u); f_108bbc00();
  /* 108bd2f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108bd2f6 call 0x108bbc10 */
  push32(0x108bd2fbu); f_108bbc10();
  /* 108bd2fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108bd301 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_108bd304:;
  /* 108bd304 pop ebp */
  EBP = (pop32());
  /* 108bd305 ret  */
  ESPCHK(0x108bd2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d310 @ 0x108bd310 (260 bytes, 83 insns) */
void f_108bd310(void) {
  FTRACE(0x108bd310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bd310 push ebp */
  push32((uint32_t)(EBP));
  /* 108bd311 mov ebp, esp */
  EBP = (ESP);
  /* 108bd313 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bd316 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 108bd31a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bd31d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 108bd320 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bd322 je 0x108bd32d */
  if (C.zf) goto L_108bd32d;
  /* 108bd324 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 108bd327 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 108bd32a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_108bd32d:;
  /* 108bd32d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bd330 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 108bd336 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bd338 je 0x108bd342 */
  if (C.zf) goto L_108bd342;
  /* 108bd33a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 108bd33d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 108bd33f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_108bd342:;
  /* 108bd342 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bd345 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 108bd34b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bd34d je 0x108bd358 */
  if (C.zf) goto L_108bd358;
  /* 108bd34f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 108bd352 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 108bd355 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_108bd358:;
  /* 108bd358 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd35b push eax */
  push32((uint32_t)(EAX));
  /* 108bd35c call dword ptr [0x108e2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2368))), 0x108bd362u);
  /* 108bd362 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108bd365 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd369 jne 0x108bd382 */
  if (!C.zf) goto L_108bd382;
  /* 108bd36b call dword ptr [0x108e228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e228c))), 0x108bd371u);
  /* 108bd371 push eax */
  push32((uint32_t)(EAX));
  /* 108bd372 call 0x108bbb60 */
  push32(0x108bd377u); f_108bbb60();
  /* 108bd377 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd37a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bd37d jmp 0x108bd410 */
  goto L_108bd410;
L_108bd382:;
  /* 108bd382 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd386 jne 0x108bd393 */
  if (!C.zf) goto L_108bd393;
  /* 108bd388 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 108bd38b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 108bd38e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 108bd391 jmp 0x108bd3a2 */
  goto L_108bd3a2;
L_108bd393:;
  /* 108bd393 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd397 jne 0x108bd3a2 */
  if (!C.zf) goto L_108bd3a2;
  /* 108bd399 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 108bd39c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 108bd39f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_108bd3a2:;
  /* 108bd3a2 call 0x108bcf10 */
  push32(0x108bd3a7u); f_108bcf10();
  /* 108bd3a7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108bd3aa cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd3ae jne 0x108bd3cb */
  if (!C.zf) goto L_108bd3cb;
  /* 108bd3b0 call 0x108bbc00 */
  push32(0x108bd3b5u); f_108bbc00();
  /* 108bd3b5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 108bd3bb call 0x108bbc10 */
  push32(0x108bd3c0u); f_108bbc10();
  /* 108bd3c0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108bd3c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bd3c9 jmp 0x108bd410 */
  goto L_108bd410;
L_108bd3cb:;
  /* 108bd3cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd3ce push eax */
  push32((uint32_t)(EAX));
  /* 108bd3cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd3d2 push ecx */
  push32((uint32_t)(ECX));
  /* 108bd3d3 call 0x108bd100 */
  push32(0x108bd3d8u); f_108bd100();
  /* 108bd3d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd3db mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 108bd3de or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 108bd3e1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 108bd3e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd3e7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108bd3ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd3ed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108bd3f0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bd3f3 mov edx, dword ptr [eax*4 + 0x108e0f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108e0f40)));
  /* 108bd3fa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 108bd3fd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 108bd401 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd404 push ecx */
  push32((uint32_t)(ECX));
  /* 108bd405 call 0x108bd4b0 */
  push32(0x108bd40au); f_108bd4b0();
  /* 108bd40a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd40d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_108bd410:;
  /* 108bd410 mov esp, ebp */
  ESP = (EBP);
  /* 108bd412 pop ebp */
  EBP = (pop32());
  /* 108bd413 ret  */
  ESPCHK(0x108bd310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d420 @ 0x108bd420 (134 bytes, 44 insns) */
void f_108bd420(void) {
  FTRACE(0x108bd420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bd420 push ebp */
  push32((uint32_t)(EBP));
  /* 108bd421 mov ebp, esp */
  EBP = (ESP);
  /* 108bd423 push ecx */
  push32((uint32_t)(ECX));
  /* 108bd424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd427 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108bd42a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd42d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108bd430 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bd433 mov edx, dword ptr [eax*4 + 0x108e0f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108e0f40)));
  /* 108bd43a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd43c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108bd43f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bd442 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd446 jne 0x108bd481 */
  if (!C.zf) goto L_108bd481;
  /* 108bd448 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 108bd44a call 0x108b7730 */
  push32(0x108bd44fu); f_108b7730();
  /* 108bd44f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd452 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bd455 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd459 jne 0x108bd477 */
  if (!C.zf) goto L_108bd477;
  /* 108bd45b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bd45e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd461 push edx */
  push32((uint32_t)(EDX));
  /* 108bd462 call dword ptr [0x108e23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e23a4))), 0x108bd468u);
  /* 108bd468 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bd46b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108bd46e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd471 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bd474 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_108bd477:;
  /* 108bd477 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 108bd479 call 0x108b77d0 */
  push32(0x108bd47eu); f_108b77d0();
  /* 108bd47e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bd481:;
  /* 108bd481 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd484 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108bd487 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd48a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108bd48d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bd490 mov edx, dword ptr [eax*4 + 0x108e0f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108e0f40)));
  /* 108bd497 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 108bd49b push eax */
  push32((uint32_t)(EAX));
  /* 108bd49c call dword ptr [0x108e2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2308))), 0x108bd4a2u);
  /* 108bd4a2 mov esp, ebp */
  ESP = (EBP);
  /* 108bd4a4 pop ebp */
  EBP = (pop32());
  /* 108bd4a5 ret  */
  ESPCHK(0x108bd420u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x108bd4b0 (38 bytes, 13 insns) */
void f_108bd4b0(void) {
  FTRACE(0x108bd4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bd4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bd4b1 mov ebp, esp */
  EBP = (ESP);
  /* 108bd4b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd4b6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108bd4b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd4bc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108bd4bf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bd4c2 mov edx, dword ptr [eax*4 + 0x108e0f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108e0f40)));
  /* 108bd4c9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 108bd4cd push eax */
  push32((uint32_t)(EAX));
  /* 108bd4ce call dword ptr [0x108e2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2304))), 0x108bd4d4u);
  /* 108bd4d4 pop ebp */
  EBP = (pop32());
  /* 108bd4d5 ret  */
  ESPCHK(0x108bd4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4e0 @ 0x108bd4e0 (218 bytes, 63 insns) */
void f_108bd4e0(void) {
  FTRACE(0x108bd4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bd4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bd4e1 mov ebp, esp */
  EBP = (ESP);
  /* 108bd4e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bd4e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108bd4ed push 2 */
  push32((uint32_t)(0x2u));
  /* 108bd4ef call 0x108b7730 */
  push32(0x108bd4f4u); f_108b7730();
  /* 108bd4f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd4f7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 108bd4fe jmp 0x108bd509 */
  goto L_108bd509;
L_108bd500:;
  /* 108bd500 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd503 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd506 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108bd509:;
  /* 108bd509 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd50c cmp ecx, dword ptr [0x108e0c40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108e0c40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd512 jge 0x108bd5a9 */
  if ((C.sf==C.of)) goto L_108bd5a9;
  /* 108bd518 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd51b mov eax, dword ptr [0x108df900] */
  EAX = (r32((uint32_t)(0x108df900)));
  /* 108bd520 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd524 je 0x108bd5a4 */
  if (C.zf) goto L_108bd5a4;
  /* 108bd526 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd529 mov edx, dword ptr [0x108df900] */
  EDX = (r32((uint32_t)(0x108df900)));
  /* 108bd52f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 108bd532 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108bd535 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 108bd53b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bd53d je 0x108bd561 */
  if (C.zf) goto L_108bd561;
  /* 108bd53f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd542 mov eax, dword ptr [0x108df900] */
  EAX = (r32((uint32_t)(0x108df900)));
  /* 108bd547 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 108bd54a push ecx */
  push32((uint32_t)(ECX));
  /* 108bd54b call 0x108be2d0 */
  push32(0x108bd550u); f_108be2d0();
  /* 108bd550 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd553 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd556 je 0x108bd561 */
  if (C.zf) goto L_108bd561;
  /* 108bd558 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bd55b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd55e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108bd561:;
  /* 108bd561 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd565 jl 0x108bd5a4 */
  if ((C.sf!=C.of)) goto L_108bd5a4;
  /* 108bd567 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd56a mov ecx, dword ptr [0x108df900] */
  ECX = (r32((uint32_t)(0x108df900)));
  /* 108bd570 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 108bd573 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd576 push edx */
  push32((uint32_t)(EDX));
  /* 108bd577 call dword ptr [0x108e2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2370))), 0x108bd57du);
  /* 108bd57d push 2 */
  push32((uint32_t)(0x2u));
  /* 108bd57f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd582 mov ecx, dword ptr [0x108df900] */
  ECX = (r32((uint32_t)(0x108df900)));
  /* 108bd588 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 108bd58b push edx */
  push32((uint32_t)(EDX));
  /* 108bd58c call 0x108b47c0 */
  push32(0x108bd591u); f_108b47c0();
  /* 108bd591 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd594 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd597 mov ecx, dword ptr [0x108df900] */
  ECX = (r32((uint32_t)(0x108df900)));
  /* 108bd59d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_108bd5a4:;
  /* 108bd5a4 jmp 0x108bd500 */
  goto L_108bd500;
L_108bd5a9:;
  /* 108bd5a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bd5ab call 0x108b77d0 */
  push32(0x108bd5b0u); f_108b77d0();
  /* 108bd5b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd5b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bd5b6 mov esp, ebp */
  ESP = (EBP);
  /* 108bd5b8 pop ebp */
  EBP = (pop32());
  /* 108bd5b9 ret  */
  ESPCHK(0x108bd4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5c0 @ 0x108bd5c0 (68 bytes, 26 insns) */
void f_108bd5c0(void) {
  FTRACE(0x108bd5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bd5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bd5c1 mov ebp, esp */
  EBP = (ESP);
  /* 108bd5c3 push ecx */
  push32((uint32_t)(ECX));
  /* 108bd5c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd5c8 jne 0x108bd5d6 */
  if (!C.zf) goto L_108bd5d6;
  /* 108bd5ca push 0 */
  push32((uint32_t)(0x0u));
  /* 108bd5cc call 0x108bd730 */
  push32(0x108bd5d1u); f_108bd730();
  /* 108bd5d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd5d4 jmp 0x108bd600 */
  goto L_108bd600;
L_108bd5d6:;
  /* 108bd5d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd5d9 push eax */
  push32((uint32_t)(EAX));
  /* 108bd5da call 0x108bcb40 */
  push32(0x108bd5dfu); f_108bcb40();
  /* 108bd5df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd5e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd5e5 push ecx */
  push32((uint32_t)(ECX));
  /* 108bd5e6 call 0x108bd610 */
  push32(0x108bd5ebu); f_108bd610();
  /* 108bd5eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd5ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108bd5f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd5f4 push edx */
  push32((uint32_t)(EDX));
  /* 108bd5f5 call 0x108bcbb0 */
  push32(0x108bd5fau); f_108bcbb0();
  /* 108bd5fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd5fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108bd600:;
  /* 108bd600 mov esp, ebp */
  ESP = (EBP);
  /* 108bd602 pop ebp */
  EBP = (pop32());
  /* 108bd603 ret  */
  ESPCHK(0x108bd5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d610 @ 0x108bd610 (65 bytes, 26 insns) */
void f_108bd610(void) {
  FTRACE(0x108bd610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bd610 push ebp */
  push32((uint32_t)(EBP));
  /* 108bd611 mov ebp, esp */
  EBP = (ESP);
  /* 108bd613 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd616 push eax */
  push32((uint32_t)(EAX));
  /* 108bd617 call 0x108bd660 */
  push32(0x108bd61cu); f_108bd660();
  /* 108bd61c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd61f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bd621 je 0x108bd628 */
  if (C.zf) goto L_108bd628;
  /* 108bd623 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bd626 jmp 0x108bd64f */
  goto L_108bd64f;
L_108bd628:;
  /* 108bd628 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd62b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108bd62e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 108bd634 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bd636 je 0x108bd64d */
  if (C.zf) goto L_108bd64d;
  /* 108bd638 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd63b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108bd63e push ecx */
  push32((uint32_t)(ECX));
  /* 108bd63f call 0x108be420 */
  push32(0x108bd644u); f_108be420();
  /* 108bd644 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd647 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108bd649 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bd64b jmp 0x108bd64f */
  goto L_108bd64f;
L_108bd64d:;
  /* 108bd64d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108bd64f:;
  /* 108bd64f pop ebp */
  EBP = (pop32());
  /* 108bd650 ret  */
  ESPCHK(0x108bd610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d660 @ 0x108bd660 (183 bytes, 62 insns) */
void f_108bd660(void) {
  FTRACE(0x108bd660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bd660 push ebp */
  push32((uint32_t)(EBP));
  /* 108bd661 mov ebp, esp */
  EBP = (ESP);
  /* 108bd663 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bd666 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108bd66d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd670 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108bd673 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd676 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108bd679 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 108bd67c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd67f jne 0x108bd6fb */
  if (!C.zf) goto L_108bd6fb;
  /* 108bd681 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd684 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108bd687 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 108bd68d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bd68f je 0x108bd6fb */
  if (C.zf) goto L_108bd6fb;
  /* 108bd691 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd694 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd697 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 108bd699 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bd69c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108bd69f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd6a3 jle 0x108bd6fb */
  if ((C.zf||C.sf!=C.of)) goto L_108bd6fb;
  /* 108bd6a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bd6a8 push edx */
  push32((uint32_t)(EDX));
  /* 108bd6a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd6ac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108bd6af push ecx */
  push32((uint32_t)(ECX));
  /* 108bd6b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd6b3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108bd6b6 push eax */
  push32((uint32_t)(EAX));
  /* 108bd6b7 call 0x108bc5d0 */
  push32(0x108bd6bcu); f_108bc5d0();
  /* 108bd6bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd6bf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd6c2 jne 0x108bd6e5 */
  if (!C.zf) goto L_108bd6e5;
  /* 108bd6c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd6c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108bd6ca and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 108bd6d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bd6d2 je 0x108bd6e3 */
  if (C.zf) goto L_108bd6e3;
  /* 108bd6d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd6d7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108bd6da and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 108bd6dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd6e0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_108bd6e3:;
  /* 108bd6e3 jmp 0x108bd6fb */
  goto L_108bd6fb;
L_108bd6e5:;
  /* 108bd6e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd6e8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108bd6eb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 108bd6ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd6f1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 108bd6f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108bd6fb:;
  /* 108bd6fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd6fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd701 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108bd704 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108bd706 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bd709 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 108bd710 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bd713 mov esp, ebp */
  ESP = (EBP);
  /* 108bd715 pop ebp */
  EBP = (pop32());
  /* 108bd716 ret  */
  ESPCHK(0x108bd660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d720 @ 0x108bd720 (15 bytes, 7 insns) */
void f_108bd720(void) {
  FTRACE(0x108bd720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bd720 push ebp */
  push32((uint32_t)(EBP));
  /* 108bd721 mov ebp, esp */
  EBP = (ESP);
  /* 108bd723 push 1 */
  push32((uint32_t)(0x1u));
  /* 108bd725 call 0x108bd730 */
  push32(0x108bd72au); f_108bd730();
  /* 108bd72a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd72d pop ebp */
  EBP = (pop32());
  /* 108bd72e ret  */
  ESPCHK(0x108bd720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d730 @ 0x108bd730 (319 bytes, 94 insns) */
void f_108bd730(void) {
  FTRACE(0x108bd730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bd730 push ebp */
  push32((uint32_t)(EBP));
  /* 108bd731 mov ebp, esp */
  EBP = (ESP);
  /* 108bd733 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bd736 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108bd73d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108bd744 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bd746 call 0x108b7730 */
  push32(0x108bd74bu); f_108b7730();
  /* 108bd74b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd74e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108bd755 jmp 0x108bd760 */
  goto L_108bd760;
L_108bd757:;
  /* 108bd757 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bd75a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd75d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_108bd760:;
  /* 108bd760 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bd763 cmp ecx, dword ptr [0x108e0c40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108e0c40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd769 jge 0x108bd853 */
  if ((C.sf==C.of)) goto L_108bd853;
  /* 108bd76f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bd772 mov eax, dword ptr [0x108df900] */
  EAX = (r32((uint32_t)(0x108df900)));
  /* 108bd777 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd77b je 0x108bd84e */
  if (C.zf) goto L_108bd84e;
  /* 108bd781 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bd784 mov edx, dword ptr [0x108df900] */
  EDX = (r32((uint32_t)(0x108df900)));
  /* 108bd78a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 108bd78d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108bd790 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 108bd796 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bd798 je 0x108bd84e */
  if (C.zf) goto L_108bd84e;
  /* 108bd79e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bd7a1 mov eax, dword ptr [0x108df900] */
  EAX = (r32((uint32_t)(0x108df900)));
  /* 108bd7a6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 108bd7a9 push ecx */
  push32((uint32_t)(ECX));
  /* 108bd7aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bd7ad push edx */
  push32((uint32_t)(EDX));
  /* 108bd7ae call 0x108bcb80 */
  push32(0x108bd7b3u); f_108bcb80();
  /* 108bd7b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd7b6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bd7b9 mov ecx, dword ptr [0x108df900] */
  ECX = (r32((uint32_t)(0x108df900)));
  /* 108bd7bf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 108bd7c2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108bd7c5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 108bd7ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bd7cc je 0x108bd835 */
  if (C.zf) goto L_108bd835;
  /* 108bd7ce cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd7d2 jne 0x108bd7f9 */
  if (!C.zf) goto L_108bd7f9;
  /* 108bd7d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bd7d7 mov edx, dword ptr [0x108df900] */
  EDX = (r32((uint32_t)(0x108df900)));
  /* 108bd7dd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 108bd7e0 push eax */
  push32((uint32_t)(EAX));
  /* 108bd7e1 call 0x108bd610 */
  push32(0x108bd7e6u); f_108bd610();
  /* 108bd7e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd7e9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd7ec je 0x108bd7f7 */
  if (C.zf) goto L_108bd7f7;
  /* 108bd7ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bd7f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd7f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108bd7f7:;
  /* 108bd7f7 jmp 0x108bd835 */
  goto L_108bd835;
L_108bd7f9:;
  /* 108bd7f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd7fd jne 0x108bd835 */
  if (!C.zf) goto L_108bd835;
  /* 108bd7ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bd802 mov eax, dword ptr [0x108df900] */
  EAX = (r32((uint32_t)(0x108df900)));
  /* 108bd807 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 108bd80a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108bd80d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 108bd810 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bd812 je 0x108bd835 */
  if (C.zf) goto L_108bd835;
  /* 108bd814 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bd817 mov ecx, dword ptr [0x108df900] */
  ECX = (r32((uint32_t)(0x108df900)));
  /* 108bd81d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 108bd820 push edx */
  push32((uint32_t)(EDX));
  /* 108bd821 call 0x108bd610 */
  push32(0x108bd826u); f_108bd610();
  /* 108bd826 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd829 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd82c jne 0x108bd835 */
  if (!C.zf) goto L_108bd835;
  /* 108bd82e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_108bd835:;
  /* 108bd835 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bd838 mov ecx, dword ptr [0x108df900] */
  ECX = (r32((uint32_t)(0x108df900)));
  /* 108bd83e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 108bd841 push edx */
  push32((uint32_t)(EDX));
  /* 108bd842 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bd845 push eax */
  push32((uint32_t)(EAX));
  /* 108bd846 call 0x108bcbf0 */
  push32(0x108bd84bu); f_108bcbf0();
  /* 108bd84b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bd84e:;
  /* 108bd84e jmp 0x108bd757 */
  goto L_108bd757;
L_108bd853:;
  /* 108bd853 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bd855 call 0x108b77d0 */
  push32(0x108bd85au); f_108b77d0();
  /* 108bd85a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd85d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd861 jne 0x108bd868 */
  if (!C.zf) goto L_108bd868;
  /* 108bd863 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bd866 jmp 0x108bd86b */
  goto L_108bd86b;
L_108bd868:;
  /* 108bd868 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_108bd86b:;
  /* 108bd86b mov esp, ebp */
  ESP = (EBP);
  /* 108bd86d pop ebp */
  EBP = (pop32());
  /* 108bd86e ret  */
  ESPCHK(0x108bd730u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x108bd870 (15 bytes, 7 insns) */
void f_108bd870(void) {
  FTRACE(0x108bd870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bd870 push ebp */
  push32((uint32_t)(EBP));
  /* 108bd871 mov ebp, esp */
  EBP = (ESP);
  /* 108bd873 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bd875 call 0x108b2ca0 */
  push32(0x108bd87au); f_108b2ca0();
  /* 108bd87a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd87d pop ebp */
  EBP = (pop32());
  /* 108bd87e ret  */
  ESPCHK(0x108bd870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d880 @ 0x108bd880 (1007 bytes, 269 insns) */
void f_108bd880(void) {
  FTRACE(0x108bd880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bd880 push ebp */
  push32((uint32_t)(EBP));
  /* 108bd881 mov ebp, esp */
  EBP = (ESP);
  /* 108bd883 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bd889 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd88d jl 0x108bd895 */
  if ((C.sf!=C.of)) goto L_108bd895;
  /* 108bd88f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd893 jle 0x108bd89c */
  if ((C.zf||C.sf!=C.of)) goto L_108bd89c;
L_108bd895:;
  /* 108bd895 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bd897 jmp 0x108bdc6b */
  goto L_108bdc6b;
L_108bd89c:;
  /* 108bd89c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108bd89e call 0x108b7730 */
  push32(0x108bd8a3u); f_108b7730();
  /* 108bd8a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd8a6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108bd8ad mov eax, dword ptr [0x108df8ec] */
  EAX = (r32((uint32_t)(0x108df8ec)));
  /* 108bd8b2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd8b5 mov dword ptr [0x108df8ec], eax */
  w32((uint32_t)(0x108df8ec), (EAX));
L_108bd8ba:;
  /* 108bd8ba cmp dword ptr [0x108df8fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df8fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd8c1 je 0x108bd8cd */
  if (C.zf) goto L_108bd8cd;
  /* 108bd8c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108bd8c5 call dword ptr [0x108e22c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22c0))), 0x108bd8cbu);
  /* 108bd8cb jmp 0x108bd8ba */
  goto L_108bd8ba;
L_108bd8cd:;
  /* 108bd8cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd8d1 je 0x108bd911 */
  if (C.zf) goto L_108bd911;
  /* 108bd8d3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd8d7 je 0x108bd8f1 */
  if (C.zf) goto L_108bd8f1;
  /* 108bd8d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bd8dc push ecx */
  push32((uint32_t)(ECX));
  /* 108bd8dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd8e0 push edx */
  push32((uint32_t)(EDX));
  /* 108bd8e1 call 0x108bdc70 */
  push32(0x108bd8e6u); f_108bdc70();
  /* 108bd8e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd8e9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 108bd8ef jmp 0x108bd903 */
  goto L_108bd903;
L_108bd8f1:;
  /* 108bd8f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bd8f4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bd8f7 mov ecx, dword ptr [eax + 0x108de4dc] */
  ECX = (r32((uint32_t)(EAX + 0x108de4dc)));
  /* 108bd8fd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_108bd903:;
  /* 108bd903 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 108bd909 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108bd90c jmp 0x108bdc4b */
  goto L_108bdc4b;
L_108bd911:;
  /* 108bd911 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 108bd918 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108bd91f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd923 je 0x108bdc43 */
  if (C.zf) goto L_108bdc43;
  /* 108bd929 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bd92c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108bd92f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd932 jne 0x108bdb54 */
  if (!C.zf) goto L_108bdb54;
  /* 108bd938 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bd93b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 108bd93f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd942 jne 0x108bdb54 */
  if (!C.zf) goto L_108bdb54;
  /* 108bd948 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bd94b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 108bd94f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd952 jne 0x108bdb54 */
  if (!C.zf) goto L_108bdb54;
  /* 108bd958 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bd95b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_108bd961:;
  /* 108bd961 push 0x108db06c */
  push32((uint32_t)(0x108db06cu));
  /* 108bd966 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 108bd96c push ecx */
  push32((uint32_t)(ECX));
  /* 108bd96d call 0x108bfad0 */
  push32(0x108bd972u); f_108bfad0();
  /* 108bd972 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd975 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 108bd97b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd982 je 0x108bd9ad */
  if (C.zf) goto L_108bd9ad;
  /* 108bd984 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108bd98a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bd990 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 108bd996 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd99d je 0x108bd9ad */
  if (C.zf) goto L_108bd9ad;
  /* 108bd99f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108bd9a5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108bd9a8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd9ab jne 0x108bd9d3 */
  if (!C.zf) goto L_108bd9d3;
L_108bd9ad:;
  /* 108bd9ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd9b1 je 0x108bd9cc */
  if (C.zf) goto L_108bd9cc;
  /* 108bd9b3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108bd9b5 call 0x108b77d0 */
  push32(0x108bd9bau); f_108b77d0();
  /* 108bd9ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd9bd mov edx, dword ptr [0x108df8ec] */
  EDX = (r32((uint32_t)(0x108df8ec)));
  /* 108bd9c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bd9c6 mov dword ptr [0x108df8ec], edx */
  w32((uint32_t)(0x108df8ec), (EDX));
L_108bd9cc:;
  /* 108bd9cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bd9ce jmp 0x108bdc6b */
  goto L_108bdc6b;
L_108bd9d3:;
  /* 108bd9d3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 108bd9da jmp 0x108bd9e5 */
  goto L_108bd9e5;
L_108bd9dc:;
  /* 108bd9dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bd9df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bd9e2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_108bd9e5:;
  /* 108bd9e5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bd9e9 jg 0x108bda33 */
  if ((!C.zf&&C.sf==C.of)) goto L_108bda33;
  /* 108bd9eb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 108bd9f1 push ecx */
  push32((uint32_t)(ECX));
  /* 108bd9f2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 108bd9f8 push edx */
  push32((uint32_t)(EDX));
  /* 108bd9f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bd9fc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bd9ff mov ecx, dword ptr [eax + 0x108de4d8] */
  ECX = (r32((uint32_t)(EAX + 0x108de4d8)));
  /* 108bda05 push ecx */
  push32((uint32_t)(ECX));
  /* 108bda06 call 0x108bfa90 */
  push32(0x108bda0bu); f_108bfa90();
  /* 108bda0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bda0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bda10 jne 0x108bda31 */
  if (!C.zf) goto L_108bda31;
  /* 108bda12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bda15 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bda18 mov eax, dword ptr [edx + 0x108de4d8] */
  EAX = (r32((uint32_t)(EDX + 0x108de4d8)));
  /* 108bda1e push eax */
  push32((uint32_t)(EAX));
  /* 108bda1f call 0x108b6b60 */
  push32(0x108bda24u); f_108b6b60();
  /* 108bda24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bda27 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bda2d jne 0x108bda31 */
  if (!C.zf) goto L_108bda31;
  /* 108bda2f jmp 0x108bda33 */
  goto L_108bda33;
L_108bda31:;
  /* 108bda31 jmp 0x108bd9dc */
  goto L_108bd9dc;
L_108bda33:;
  /* 108bda33 push 0x108db068 */
  push32((uint32_t)(0x108db068u));
  /* 108bda38 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108bda3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bda41 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 108bda47 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108bda4d push edx */
  push32((uint32_t)(EDX));
  /* 108bda4e call 0x108bfa50 */
  push32(0x108bda53u); f_108bfa50();
  /* 108bda53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bda56 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 108bda5c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bda63 jne 0x108bda99 */
  if (!C.zf) goto L_108bda99;
  /* 108bda65 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108bda6b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108bda6e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bda71 je 0x108bda99 */
  if (C.zf) goto L_108bda99;
  /* 108bda73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bda77 je 0x108bda92 */
  if (C.zf) goto L_108bda92;
  /* 108bda79 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108bda7b call 0x108b77d0 */
  push32(0x108bda80u); f_108b77d0();
  /* 108bda80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bda83 mov edx, dword ptr [0x108df8ec] */
  EDX = (r32((uint32_t)(0x108df8ec)));
  /* 108bda89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bda8c mov dword ptr [0x108df8ec], edx */
  w32((uint32_t)(0x108df8ec), (EDX));
L_108bda92:;
  /* 108bda92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bda94 jmp 0x108bdc6b */
  goto L_108bdc6b;
L_108bda99:;
  /* 108bda99 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bda9d jg 0x108bdaea */
  if ((!C.zf&&C.sf==C.of)) goto L_108bdaea;
  /* 108bda9f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 108bdaa5 push eax */
  push32((uint32_t)(EAX));
  /* 108bdaa6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108bdaac push ecx */
  push32((uint32_t)(ECX));
  /* 108bdaad lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 108bdab3 push edx */
  push32((uint32_t)(EDX));
  /* 108bdab4 call 0x108b7550 */
  push32(0x108bdab9u); f_108b7550();
  /* 108bdab9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdabc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 108bdac2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 108bdaca lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 108bdad0 push ecx */
  push32((uint32_t)(ECX));
  /* 108bdad1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bdad4 push edx */
  push32((uint32_t)(EDX));
  /* 108bdad5 call 0x108bdc70 */
  push32(0x108bdadau); f_108bdc70();
  /* 108bdada add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdadd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bdadf je 0x108bdaea */
  if (C.zf) goto L_108bdaea;
  /* 108bdae1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bdae4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdae7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_108bdaea:;
  /* 108bdaea mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108bdaf0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdaf6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 108bdafc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 108bdb02 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108bdb05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bdb07 je 0x108bdb18 */
  if (C.zf) goto L_108bdb18;
  /* 108bdb09 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 108bdb0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdb12 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_108bdb18:;
  /* 108bdb18 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 108bdb1e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108bdb21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bdb23 jne 0x108bd961 */
  if (!C.zf) goto L_108bd961;
  /* 108bdb29 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bdb2d je 0x108bdb3c */
  if (C.zf) goto L_108bdb3c;
  /* 108bdb2f call 0x108bde10 */
  push32(0x108bdb34u); f_108bde10();
  /* 108bdb34 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 108bdb3a jmp 0x108bdb46 */
  goto L_108bdb46;
L_108bdb3c:;
  /* 108bdb3c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_108bdb46:;
  /* 108bdb46 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 108bdb4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bdb4f jmp 0x108bdc41 */
  goto L_108bdc41;
L_108bdb54:;
  /* 108bdb54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bdb57 push edx */
  push32((uint32_t)(EDX));
  /* 108bdb58 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bdb5a push 0 */
  push32((uint32_t)(0x0u));
  /* 108bdb5c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 108bdb62 push eax */
  push32((uint32_t)(EAX));
  /* 108bdb63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bdb66 push ecx */
  push32((uint32_t)(ECX));
  /* 108bdb67 call 0x108bdf10 */
  push32(0x108bdb6cu); f_108bdf10();
  /* 108bdb6c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdb6f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108bdb72 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bdb76 je 0x108bdc41 */
  if (C.zf) goto L_108bdc41;
  /* 108bdb7c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 108bdb83 jmp 0x108bdb8e */
  goto L_108bdb8e;
L_108bdb85:;
  /* 108bdb85 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bdb88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdb8b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_108bdb8e:;
  /* 108bdb8e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bdb92 jg 0x108bdbf0 */
  if ((!C.zf&&C.sf==C.of)) goto L_108bdbf0;
  /* 108bdb94 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bdb98 je 0x108bdbee */
  if (C.zf) goto L_108bdbee;
  /* 108bdb9a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bdb9d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bdba0 mov ecx, dword ptr [eax + 0x108de4dc] */
  ECX = (r32((uint32_t)(EAX + 0x108de4dc)));
  /* 108bdba6 push ecx */
  push32((uint32_t)(ECX));
  /* 108bdba7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 108bdbad push edx */
  push32((uint32_t)(EDX));
  /* 108bdbae call 0x108bf9c0 */
  push32(0x108bdbb3u); f_108bf9c0();
  /* 108bdbb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdbb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bdbb8 je 0x108bdbe5 */
  if (C.zf) goto L_108bdbe5;
  /* 108bdbba lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 108bdbc0 push eax */
  push32((uint32_t)(EAX));
  /* 108bdbc1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108bdbc4 push ecx */
  push32((uint32_t)(ECX));
  /* 108bdbc5 call 0x108bdc70 */
  push32(0x108bdbcau); f_108bdc70();
  /* 108bdbca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdbcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bdbcf je 0x108bdbdc */
  if (C.zf) goto L_108bdbdc;
  /* 108bdbd1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bdbd4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdbd7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108bdbda jmp 0x108bdbe3 */
  goto L_108bdbe3;
L_108bdbdc:;
  /* 108bdbdc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_108bdbe3:;
  /* 108bdbe3 jmp 0x108bdbee */
  goto L_108bdbee;
L_108bdbe5:;
  /* 108bdbe5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bdbe8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdbeb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_108bdbee:;
  /* 108bdbee jmp 0x108bdb85 */
  goto L_108bdb85;
L_108bdbf0:;
  /* 108bdbf0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bdbf4 je 0x108bdc1b */
  if (C.zf) goto L_108bdc1b;
  /* 108bdbf6 call 0x108bde10 */
  push32(0x108bdbfbu); f_108bde10();
  /* 108bdbfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108bdbfe push 2 */
  push32((uint32_t)(0x2u));
  /* 108bdc00 mov ecx, dword ptr [0x108de4dc] */
  ECX = (r32((uint32_t)(0x108de4dc)));
  /* 108bdc06 push ecx */
  push32((uint32_t)(ECX));
  /* 108bdc07 call 0x108b47c0 */
  push32(0x108bdc0cu); f_108b47c0();
  /* 108bdc0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdc0f mov dword ptr [0x108de4dc], 0 */
  w32((uint32_t)(0x108de4dc), (0x0u));
  /* 108bdc19 jmp 0x108bdc41 */
  goto L_108bdc41;
L_108bdc1b:;
  /* 108bdc1b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bdc1f je 0x108bdc2e */
  if (C.zf) goto L_108bdc2e;
  /* 108bdc21 call 0x108bde10 */
  push32(0x108bdc26u); f_108bde10();
  /* 108bdc26 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 108bdc2c jmp 0x108bdc38 */
  goto L_108bdc38;
L_108bdc2e:;
  /* 108bdc2e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_108bdc38:;
  /* 108bdc38 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 108bdc3e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108bdc41:;
  /* 108bdc41 jmp 0x108bdc4b */
  goto L_108bdc4b;
L_108bdc43:;
  /* 108bdc43 call 0x108bde10 */
  push32(0x108bdc48u); f_108bde10();
  /* 108bdc48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108bdc4b:;
  /* 108bdc4b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bdc4f je 0x108bdc68 */
  if (C.zf) goto L_108bdc68;
  /* 108bdc51 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108bdc53 call 0x108b77d0 */
  push32(0x108bdc58u); f_108b77d0();
  /* 108bdc58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdc5b mov eax, dword ptr [0x108df8ec] */
  EAX = (r32((uint32_t)(0x108df8ec)));
  /* 108bdc60 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bdc63 mov dword ptr [0x108df8ec], eax */
  w32((uint32_t)(0x108df8ec), (EAX));
L_108bdc68:;
  /* 108bdc68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_108bdc6b:;
  /* 108bdc6b mov esp, ebp */
  ESP = (EBP);
  /* 108bdc6d pop ebp */
  EBP = (pop32());
  /* 108bdc6e ret  */
  ESPCHK(0x108bd880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc70 @ 0x108bdc70 (403 bytes, 117 insns) */
void f_108bdc70(void) {
  FTRACE(0x108bdc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bdc70 push ebp */
  push32((uint32_t)(EBP));
  /* 108bdc71 mov ebp, esp */
  EBP = (ESP);
  /* 108bdc73 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bdc79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bdc7c push eax */
  push32((uint32_t)(EAX));
  /* 108bdc7d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 108bdc83 push ecx */
  push32((uint32_t)(ECX));
  /* 108bdc84 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 108bdc8a push edx */
  push32((uint32_t)(EDX));
  /* 108bdc8b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 108bdc91 push eax */
  push32((uint32_t)(EAX));
  /* 108bdc92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bdc95 push ecx */
  push32((uint32_t)(ECX));
  /* 108bdc96 call 0x108bdf10 */
  push32(0x108bdc9bu); f_108bdf10();
  /* 108bdc9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdc9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bdca0 jne 0x108bdca9 */
  if (!C.zf) goto L_108bdca9;
  /* 108bdca2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bdca4 jmp 0x108bddff */
  goto L_108bddff;
L_108bdca9:;
  /* 108bdca9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 108bdcae push 0x108db070 */
  push32((uint32_t)(0x108db070u));
  /* 108bdcb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bdcb5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 108bdcbb push edx */
  push32((uint32_t)(EDX));
  /* 108bdcbc call 0x108b6b60 */
  push32(0x108bdcc1u); f_108b6b60();
  /* 108bdcc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdcc4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdcc7 push eax */
  push32((uint32_t)(EAX));
  /* 108bdcc8 call 0x108b3d30 */
  push32(0x108bdccdu); f_108b3d30();
  /* 108bdccd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdcd0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108bdcd3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bdcd7 jne 0x108bdce0 */
  if (!C.zf) goto L_108bdce0;
  /* 108bdcd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bdcdb jmp 0x108bddff */
  goto L_108bddff;
L_108bdce0:;
  /* 108bdce0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bdce3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bdce6 mov ecx, dword ptr [eax + 0x108de4dc] */
  ECX = (r32((uint32_t)(EAX + 0x108de4dc)));
  /* 108bdcec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108bdcef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bdcf2 mov eax, dword ptr [edx*4 + 0x108df768] */
  EAX = (r32((uint32_t)(EDX*4 + 0x108df768)));
  /* 108bdcf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108bdcfc push 6 */
  push32((uint32_t)(0x6u));
  /* 108bdcfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bdd01 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bdd04 add ecx, 0x108df7b8 */
  { uint32_t _a=(ECX),_b=(0x108df7b8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdd0a push ecx */
  push32((uint32_t)(ECX));
  /* 108bdd0b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 108bdd0e push edx */
  push32((uint32_t)(EDX));
  /* 108bdd0f call 0x108ba610 */
  push32(0x108bdd14u); f_108ba610();
  /* 108bdd14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdd17 mov eax, dword ptr [0x108df780] */
  EAX = (r32((uint32_t)(0x108df780)));
  /* 108bdd1c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108bdd1f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 108bdd25 push ecx */
  push32((uint32_t)(ECX));
  /* 108bdd26 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bdd29 push edx */
  push32((uint32_t)(EDX));
  /* 108bdd2a call 0x108b6ce0 */
  push32(0x108bdd2fu); f_108b6ce0();
  /* 108bdd2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdd32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bdd35 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bdd38 mov dword ptr [ecx + 0x108de4dc], eax */
  w32((uint32_t)(ECX + 0x108de4dc), (EAX));
  /* 108bdd3e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 108bdd44 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108bdd4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bdd4d mov dword ptr [eax*4 + 0x108df768], edx */
  w32((uint32_t)(EAX*4 + 0x108df768), (EDX));
  /* 108bdd54 push 6 */
  push32((uint32_t)(0x6u));
  /* 108bdd56 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 108bdd5c push ecx */
  push32((uint32_t)(ECX));
  /* 108bdd5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bdd60 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bdd63 add edx, 0x108df7b8 */
  { uint32_t _a=(EDX),_b=(0x108df7b8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdd69 push edx */
  push32((uint32_t)(EDX));
  /* 108bdd6a call 0x108ba610 */
  push32(0x108bdd6fu); f_108ba610();
  /* 108bdd6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdd72 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bdd76 jne 0x108bdd83 */
  if (!C.zf) goto L_108bdd83;
  /* 108bdd78 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108bdd7e mov dword ptr [0x108df780], eax */
  w32((uint32_t)(0x108df780), (EAX));
L_108bdd83:;
  /* 108bdd83 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bdd87 jne 0x108bdd95 */
  if (!C.zf) goto L_108bdd95;
  /* 108bdd89 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108bdd8f mov dword ptr [0x108df784], ecx */
  w32((uint32_t)(0x108df784), (ECX));
L_108bdd95:;
  /* 108bdd95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bdd98 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bdd9b call dword ptr [edx + 0x108de4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x108de4e0))), 0x108bdda1u);
  /* 108bdda1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bdda3 je 0x108bdddc */
  if (C.zf) goto L_108bdddc;
  /* 108bdda5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bdda8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bddab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bddae mov dword ptr [eax + 0x108de4dc], ecx */
  w32((uint32_t)(EAX + 0x108de4dc), (ECX));
  /* 108bddb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bddb6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bddb9 push edx */
  push32((uint32_t)(EDX));
  /* 108bddba call 0x108b47c0 */
  push32(0x108bddbfu); f_108b47c0();
  /* 108bddbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bddc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bddc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bddc8 mov dword ptr [eax*4 + 0x108df768], ecx */
  w32((uint32_t)(EAX*4 + 0x108df768), (ECX));
  /* 108bddcf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108bddd2 mov dword ptr [0x108df780], edx */
  w32((uint32_t)(0x108df780), (EDX));
  /* 108bddd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bddda jmp 0x108bddff */
  goto L_108bddff;
L_108bdddc:;
  /* 108bdddc cmp dword ptr [ebp - 0xc], 0x108de3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x108de3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bdde3 je 0x108bddf3 */
  if (C.zf) goto L_108bddf3;
  /* 108bdde5 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bdde7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bddea push eax */
  push32((uint32_t)(EAX));
  /* 108bddeb call 0x108b47c0 */
  push32(0x108bddf0u); f_108b47c0();
  /* 108bddf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bddf3:;
  /* 108bddf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bddf6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bddf9 mov eax, dword ptr [ecx + 0x108de4dc] */
  EAX = (r32((uint32_t)(ECX + 0x108de4dc)));
L_108bddff:;
  /* 108bddff mov esp, ebp */
  ESP = (EBP);
  /* 108bde01 pop ebp */
  EBP = (pop32());
  /* 108bde02 ret  */
  ESPCHK(0x108bdc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de10 @ 0x108bde10 (256 bytes, 72 insns) */
void f_108bde10(void) {
  FTRACE(0x108bde10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bde10 push ebp */
  push32((uint32_t)(EBP));
  /* 108bde11 mov ebp, esp */
  EBP = (ESP);
  /* 108bde13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bde16 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 108bde1d cmp dword ptr [0x108de4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108de4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bde24 jne 0x108bde44 */
  if (!C.zf) goto L_108bde44;
  /* 108bde26 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 108bde2b push 0x108db070 */
  push32((uint32_t)(0x108db070u));
  /* 108bde30 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bde32 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 108bde37 call 0x108b3d30 */
  push32(0x108bde3cu); f_108b3d30();
  /* 108bde3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bde3f mov dword ptr [0x108de4dc], eax */
  w32((uint32_t)(0x108de4dc), (EAX));
L_108bde44:;
  /* 108bde44 mov eax, dword ptr [0x108de4dc] */
  EAX = (r32((uint32_t)(0x108de4dc)));
  /* 108bde49 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 108bde4c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108bde53 jmp 0x108bde5e */
  goto L_108bde5e;
L_108bde55:;
  /* 108bde55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bde58 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bde5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108bde5e:;
  /* 108bde5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bde61 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bde64 mov eax, dword ptr [edx + 0x108de4dc] */
  EAX = (r32((uint32_t)(EDX + 0x108de4dc)));
  /* 108bde6a push eax */
  push32((uint32_t)(EAX));
  /* 108bde6b push 0x108db07c */
  push32((uint32_t)(0x108db07cu));
  /* 108bde70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bde73 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bde76 mov edx, dword ptr [ecx + 0x108de4d8] */
  EDX = (r32((uint32_t)(ECX + 0x108de4d8)));
  /* 108bde7c push edx */
  push32((uint32_t)(EDX));
  /* 108bde7d push 3 */
  push32((uint32_t)(0x3u));
  /* 108bde7f mov eax, dword ptr [0x108de4dc] */
  EAX = (r32((uint32_t)(0x108de4dc)));
  /* 108bde84 push eax */
  push32((uint32_t)(EAX));
  /* 108bde85 call 0x108be0b0 */
  push32(0x108bde8au); f_108be0b0();
  /* 108bde8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bde8d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bde91 jge 0x108bded9 */
  if ((C.sf==C.of)) goto L_108bded9;
  /* 108bde93 push 0x108db068 */
  push32((uint32_t)(0x108db068u));
  /* 108bde98 mov ecx, dword ptr [0x108de4dc] */
  ECX = (r32((uint32_t)(0x108de4dc)));
  /* 108bde9e push ecx */
  push32((uint32_t)(ECX));
  /* 108bde9f call 0x108b6cf0 */
  push32(0x108bdea4u); f_108b6cf0();
  /* 108bdea4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdea7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bdeaa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdead imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bdeb0 mov eax, dword ptr [edx + 0x108de4dc] */
  EAX = (r32((uint32_t)(EDX + 0x108de4dc)));
  /* 108bdeb6 push eax */
  push32((uint32_t)(EAX));
  /* 108bdeb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bdeba imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108bdebd mov edx, dword ptr [ecx + 0x108de4dc] */
  EDX = (r32((uint32_t)(ECX + 0x108de4dc)));
  /* 108bdec3 push edx */
  push32((uint32_t)(EDX));
  /* 108bdec4 call 0x108bf9c0 */
  push32(0x108bdec9u); f_108bf9c0();
  /* 108bdec9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdecc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bdece je 0x108bded7 */
  if (C.zf) goto L_108bded7;
  /* 108bded0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_108bded7:;
  /* 108bded7 jmp 0x108bdf07 */
  goto L_108bdf07;
L_108bded9:;
  /* 108bded9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bdedd jne 0x108bdee6 */
  if (!C.zf) goto L_108bdee6;
  /* 108bdedf mov eax, dword ptr [0x108de4dc] */
  EAX = (r32((uint32_t)(0x108de4dc)));
  /* 108bdee4 jmp 0x108bdf0c */
  goto L_108bdf0c;
L_108bdee6:;
  /* 108bdee6 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bdee8 mov eax, dword ptr [0x108de4dc] */
  EAX = (r32((uint32_t)(0x108de4dc)));
  /* 108bdeed push eax */
  push32((uint32_t)(EAX));
  /* 108bdeee call 0x108b47c0 */
  push32(0x108bdef3u); f_108b47c0();
  /* 108bdef3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdef6 mov dword ptr [0x108de4dc], 0 */
  w32((uint32_t)(0x108de4dc), (0x0u));
  /* 108bdf00 mov eax, dword ptr [0x108de4f4] */
  EAX = (r32((uint32_t)(0x108de4f4)));
  /* 108bdf05 jmp 0x108bdf0c */
  goto L_108bdf0c;
L_108bdf07:;
  /* 108bdf07 jmp 0x108bde55 */
  goto L_108bde55;
L_108bdf0c:;
  /* 108bdf0c mov esp, ebp */
  ESP = (EBP);
  /* 108bdf0e pop ebp */
  EBP = (pop32());
  /* 108bdf0f ret  */
  ESPCHK(0x108bde10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df10 @ 0x108bdf10 (388 bytes, 115 insns) */
void f_108bdf10(void) {
  FTRACE(0x108bdf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bdf10 push ebp */
  push32((uint32_t)(EBP));
  /* 108bdf11 mov ebp, esp */
  EBP = (ESP);
  /* 108bdf13 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bdf19 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bdf1d jne 0x108bdf26 */
  if (!C.zf) goto L_108bdf26;
  /* 108bdf1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bdf21 jmp 0x108be090 */
  goto L_108be090;
L_108bdf26:;
  /* 108bdf26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bdf29 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108bdf2c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bdf2f jne 0x108bdf80 */
  if (!C.zf) goto L_108bdf80;
  /* 108bdf31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bdf34 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 108bdf38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bdf3a jne 0x108bdf80 */
  if (!C.zf) goto L_108bdf80;
  /* 108bdf3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bdf3f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 108bdf42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bdf45 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 108bdf49 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bdf4d je 0x108bdf69 */
  if (C.zf) goto L_108bdf69;
  /* 108bdf4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bdf52 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 108bdf57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bdf5a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 108bdf60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bdf63 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_108bdf69:;
  /* 108bdf69 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bdf6d je 0x108bdf78 */
  if (C.zf) goto L_108bdf78;
  /* 108bdf6f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108bdf72 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_108bdf78:;
  /* 108bdf78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bdf7b jmp 0x108be090 */
  goto L_108be090;
L_108bdf80:;
  /* 108bdf80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bdf83 push ecx */
  push32((uint32_t)(ECX));
  /* 108bdf84 push 0x108de450 */
  push32((uint32_t)(0x108de450u));
  /* 108bdf89 call 0x108bf9c0 */
  push32(0x108bdf8eu); f_108bf9c0();
  /* 108bdf8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdf91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bdf93 je 0x108be048 */
  if (C.zf) goto L_108be048;
  /* 108bdf99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bdf9c push edx */
  push32((uint32_t)(EDX));
  /* 108bdf9d push 0x108de3cc */
  push32((uint32_t)(0x108de3ccu));
  /* 108bdfa2 call 0x108bf9c0 */
  push32(0x108bdfa7u); f_108bf9c0();
  /* 108bdfa7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdfaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bdfac je 0x108be048 */
  if (C.zf) goto L_108be048;
  /* 108bdfb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bdfb5 push eax */
  push32((uint32_t)(EAX));
  /* 108bdfb6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 108bdfbc push ecx */
  push32((uint32_t)(ECX));
  /* 108bdfbd call 0x108be100 */
  push32(0x108bdfc2u); f_108be100();
  /* 108bdfc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdfc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bdfc7 je 0x108bdfd0 */
  if (C.zf) goto L_108bdfd0;
  /* 108bdfc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bdfcb jmp 0x108be090 */
  goto L_108be090;
L_108bdfd0:;
  /* 108bdfd0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 108bdfd6 push edx */
  push32((uint32_t)(EDX));
  /* 108bdfd7 push 0x108df790 */
  push32((uint32_t)(0x108df790u));
  /* 108bdfdc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 108bdfe2 push eax */
  push32((uint32_t)(EAX));
  /* 108bdfe3 call 0x108bfb10 */
  push32(0x108bdfe8u); f_108bfb10();
  /* 108bdfe8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bdfeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bdfed jne 0x108bdff6 */
  if (!C.zf) goto L_108bdff6;
  /* 108bdfef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bdff1 jmp 0x108be090 */
  goto L_108be090;
L_108bdff6:;
  /* 108bdff6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108bdff8 mov cx, word ptr [0x108df794] */
  CX = (r16((uint32_t)(0x108df794)));
  /* 108bdfff mov dword ptr [0x108df798], ecx */
  w32((uint32_t)(0x108df798), (ECX));
  /* 108be005 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 108be00b push edx */
  push32((uint32_t)(EDX));
  /* 108be00c push 0x108de450 */
  push32((uint32_t)(0x108de450u));
  /* 108be011 call 0x108be260 */
  push32(0x108be016u); f_108be260();
  /* 108be016 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be019 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be01c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108be01f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108be021 je 0x108be036 */
  if (C.zf) goto L_108be036;
  /* 108be023 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be026 push edx */
  push32((uint32_t)(EDX));
  /* 108be027 push 0x108de3cc */
  push32((uint32_t)(0x108de3ccu));
  /* 108be02c call 0x108b6ce0 */
  push32(0x108be031u); f_108b6ce0();
  /* 108be031 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be034 jmp 0x108be048 */
  goto L_108be048;
L_108be036:;
  /* 108be036 push 0x108de450 */
  push32((uint32_t)(0x108de450u));
  /* 108be03b push 0x108de3cc */
  push32((uint32_t)(0x108de3ccu));
  /* 108be040 call 0x108b6ce0 */
  push32(0x108be045u); f_108b6ce0();
  /* 108be045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108be048:;
  /* 108be048 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be04c je 0x108be061 */
  if (C.zf) goto L_108be061;
  /* 108be04e push 6 */
  push32((uint32_t)(0x6u));
  /* 108be050 push 0x108df790 */
  push32((uint32_t)(0x108df790u));
  /* 108be055 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108be058 push eax */
  push32((uint32_t)(EAX));
  /* 108be059 call 0x108ba610 */
  push32(0x108be05eu); f_108ba610();
  /* 108be05e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108be061:;
  /* 108be061 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be065 je 0x108be07a */
  if (C.zf) goto L_108be07a;
  /* 108be067 push 4 */
  push32((uint32_t)(0x4u));
  /* 108be069 push 0x108df798 */
  push32((uint32_t)(0x108df798u));
  /* 108be06e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108be071 push ecx */
  push32((uint32_t)(ECX));
  /* 108be072 call 0x108ba610 */
  push32(0x108be077u); f_108ba610();
  /* 108be077 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108be07a:;
  /* 108be07a push 0x108de450 */
  push32((uint32_t)(0x108de450u));
  /* 108be07f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108be082 push edx */
  push32((uint32_t)(EDX));
  /* 108be083 call 0x108b6ce0 */
  push32(0x108be088u); f_108b6ce0();
  /* 108be088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be08b mov eax, 0x108de450 */
  EAX = (0x108de450u);
L_108be090:;
  /* 108be090 mov esp, ebp */
  ESP = (EBP);
  /* 108be092 pop ebp */
  EBP = (pop32());
  /* 108be093 ret  */
  ESPCHK(0x108bdf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0a0 @ 0x108be0a0 (7 bytes, 5 insns) */
void f_108be0a0(void) {
  FTRACE(0x108be0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108be0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108be0a1 mov ebp, esp */
  EBP = (ESP);
  /* 108be0a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108be0a5 pop ebp */
  EBP = (pop32());
  /* 108be0a6 ret  */
  ESPCHK(0x108be0a0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x108be0b0 (79 bytes, 28 insns) */
void f_108be0b0(void) {
  FTRACE(0x108be0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108be0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108be0b1 mov ebp, esp */
  EBP = (ESP);
  /* 108be0b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108be0b6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 108be0b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108be0bc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108be0c3 jmp 0x108be0ce */
  goto L_108be0ce;
L_108be0c5:;
  /* 108be0c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108be0c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be0cb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_108be0ce:;
  /* 108be0ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108be0d1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be0d4 jge 0x108be0f4 */
  if ((C.sf==C.of)) goto L_108be0f4;
  /* 108be0d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be0d9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be0dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108be0df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be0e2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 108be0e5 push edx */
  push32((uint32_t)(EDX));
  /* 108be0e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be0e9 push eax */
  push32((uint32_t)(EAX));
  /* 108be0ea call 0x108b6cf0 */
  push32(0x108be0efu); f_108b6cf0();
  /* 108be0ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be0f2 jmp 0x108be0c5 */
  goto L_108be0c5;
L_108be0f4:;
  /* 108be0f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108be0fb mov esp, ebp */
  ESP = (EBP);
  /* 108be0fd pop ebp */
  EBP = (pop32());
  /* 108be0fe ret  */
  ESPCHK(0x108be0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e100 @ 0x108be100 (349 bytes, 122 insns) */
void f_108be100(void) {
  FTRACE(0x108be100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108be100 push ebp */
  push32((uint32_t)(EBP));
  /* 108be101 mov ebp, esp */
  EBP = (ESP);
  /* 108be103 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108be106 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 108be10b push 0 */
  push32((uint32_t)(0x0u));
  /* 108be10d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be110 push eax */
  push32((uint32_t)(EAX));
  /* 108be111 call 0x108b7aa0 */
  push32(0x108be116u); f_108b7aa0();
  /* 108be116 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be119 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108be11c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108be11f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108be121 jne 0x108be12a */
  if (!C.zf) goto L_108be12a;
  /* 108be123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108be125 jmp 0x108be259 */
  goto L_108be259;
L_108be12a:;
  /* 108be12a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108be12d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108be130 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be133 jne 0x108be160 */
  if (!C.zf) goto L_108be160;
  /* 108be135 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108be138 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 108be13c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108be13e je 0x108be160 */
  if (C.zf) goto L_108be160;
  /* 108be140 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108be143 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be146 push ecx */
  push32((uint32_t)(ECX));
  /* 108be147 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be14a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be150 push edx */
  push32((uint32_t)(EDX));
  /* 108be151 call 0x108b6ce0 */
  push32(0x108be156u); f_108b6ce0();
  /* 108be156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be159 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108be15b jmp 0x108be259 */
  goto L_108be259;
L_108be160:;
  /* 108be160 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108be167 jmp 0x108be172 */
  goto L_108be172;
L_108be169:;
  /* 108be169 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be16c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be16f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108be172:;
  /* 108be172 push 0x108db080 */
  push32((uint32_t)(0x108db080u));
  /* 108be177 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108be17a push ecx */
  push32((uint32_t)(ECX));
  /* 108be17b call 0x108bfa50 */
  push32(0x108be180u); f_108bfa50();
  /* 108be180 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be183 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108be186 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be18a jne 0x108be194 */
  if (!C.zf) goto L_108be194;
  /* 108be18c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108be18f jmp 0x108be259 */
  goto L_108be259;
L_108be194:;
  /* 108be194 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108be197 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be19a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108be19c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 108be19f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be1a3 jne 0x108be1ca */
  if (!C.zf) goto L_108be1ca;
  /* 108be1a5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be1a9 jge 0x108be1ca */
  if ((C.sf==C.of)) goto L_108be1ca;
  /* 108be1ab movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108be1af cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be1b2 je 0x108be1ca */
  if (C.zf) goto L_108be1ca;
  /* 108be1b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be1b7 push edx */
  push32((uint32_t)(EDX));
  /* 108be1b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108be1bb push eax */
  push32((uint32_t)(EAX));
  /* 108be1bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be1bf push ecx */
  push32((uint32_t)(ECX));
  /* 108be1c0 call 0x108b7550 */
  push32(0x108be1c5u); f_108b7550();
  /* 108be1c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be1c8 jmp 0x108be230 */
  goto L_108be230;
L_108be1ca:;
  /* 108be1ca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be1ce jne 0x108be1f8 */
  if (!C.zf) goto L_108be1f8;
  /* 108be1d0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be1d4 jge 0x108be1f8 */
  if ((C.sf==C.of)) goto L_108be1f8;
  /* 108be1d6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108be1da cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be1dd je 0x108be1f8 */
  if (C.zf) goto L_108be1f8;
  /* 108be1df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be1e2 push eax */
  push32((uint32_t)(EAX));
  /* 108be1e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108be1e6 push ecx */
  push32((uint32_t)(ECX));
  /* 108be1e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be1ea add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be1ed push edx */
  push32((uint32_t)(EDX));
  /* 108be1ee call 0x108b7550 */
  push32(0x108be1f3u); f_108b7550();
  /* 108be1f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be1f6 jmp 0x108be230 */
  goto L_108be230;
L_108be1f8:;
  /* 108be1f8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be1fc jne 0x108be22b */
  if (!C.zf) goto L_108be22b;
  /* 108be1fe movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108be202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108be204 je 0x108be20f */
  if (C.zf) goto L_108be20f;
  /* 108be206 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108be20a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be20d jne 0x108be22b */
  if (!C.zf) goto L_108be22b;
L_108be20f:;
  /* 108be20f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be212 push edx */
  push32((uint32_t)(EDX));
  /* 108be213 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108be216 push eax */
  push32((uint32_t)(EAX));
  /* 108be217 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be21a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be220 push ecx */
  push32((uint32_t)(ECX));
  /* 108be221 call 0x108b7550 */
  push32(0x108be226u); f_108b7550();
  /* 108be226 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be229 jmp 0x108be230 */
  goto L_108be230;
L_108be22b:;
  /* 108be22b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108be22e jmp 0x108be259 */
  goto L_108be259;
L_108be230:;
  /* 108be230 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108be234 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be237 jne 0x108be23b */
  if (!C.zf) goto L_108be23b;
  /* 108be239 jmp 0x108be257 */
  goto L_108be257;
L_108be23b:;
  /* 108be23b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108be23f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108be241 jne 0x108be245 */
  if (!C.zf) goto L_108be245;
  /* 108be243 jmp 0x108be257 */
  goto L_108be257;
L_108be245:;
  /* 108be245 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be248 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108be24b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 108be24f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 108be252 jmp 0x108be169 */
  goto L_108be169;
L_108be257:;
  /* 108be257 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108be259:;
  /* 108be259 mov esp, ebp */
  ESP = (EBP);
  /* 108be25b pop ebp */
  EBP = (pop32());
  /* 108be25c ret  */
  ESPCHK(0x108be100u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x108be260 (101 bytes, 36 insns) */
void f_108be260(void) {
  FTRACE(0x108be260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108be260 push ebp */
  push32((uint32_t)(EBP));
  /* 108be261 mov ebp, esp */
  EBP = (ESP);
  /* 108be263 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108be266 push eax */
  push32((uint32_t)(EAX));
  /* 108be267 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be26a push ecx */
  push32((uint32_t)(ECX));
  /* 108be26b call 0x108b6ce0 */
  push32(0x108be270u); f_108b6ce0();
  /* 108be270 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be273 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108be276 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 108be27a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108be27c je 0x108be298 */
  if (C.zf) goto L_108be298;
  /* 108be27e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108be281 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be284 push ecx */
  push32((uint32_t)(ECX));
  /* 108be285 push 0x108db088 */
  push32((uint32_t)(0x108db088u));
  /* 108be28a push 2 */
  push32((uint32_t)(0x2u));
  /* 108be28c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be28f push edx */
  push32((uint32_t)(EDX));
  /* 108be290 call 0x108be0b0 */
  push32(0x108be295u); f_108be0b0();
  /* 108be295 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108be298:;
  /* 108be298 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108be29b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 108be2a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108be2a4 je 0x108be2c3 */
  if (C.zf) goto L_108be2c3;
  /* 108be2a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108be2a9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be2af push edx */
  push32((uint32_t)(EDX));
  /* 108be2b0 push 0x108db084 */
  push32((uint32_t)(0x108db084u));
  /* 108be2b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 108be2b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be2ba push eax */
  push32((uint32_t)(EAX));
  /* 108be2bb call 0x108be0b0 */
  push32(0x108be2c0u); f_108be0b0();
  /* 108be2c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108be2c3:;
  /* 108be2c3 pop ebp */
  EBP = (pop32());
  /* 108be2c4 ret  */
  ESPCHK(0x108be260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2d0 @ 0x108be2d0 (130 bytes, 50 insns) */
void f_108be2d0(void) {
  FTRACE(0x108be2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108be2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108be2d1 mov ebp, esp */
  EBP = (ESP);
  /* 108be2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 108be2d4 push ebx */
  push32((uint32_t)(EBX));
  /* 108be2d5 push esi */
  push32((uint32_t)(ESI));
  /* 108be2d6 push edi */
  push32((uint32_t)(EDI));
  /* 108be2d7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108be2de:;
  /* 108be2de cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be2e2 jne 0x108be302 */
  if (!C.zf) goto L_108be302;
  /* 108be2e4 push 0x108db098 */
  push32((uint32_t)(0x108db098u));
  /* 108be2e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108be2eb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 108be2ed push 0x108db08c */
  push32((uint32_t)(0x108db08cu));
  /* 108be2f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 108be2f4 call 0x108b2df0 */
  push32(0x108be2f9u); f_108b2df0();
  /* 108be2f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be2fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be2ff jne 0x108be302 */
  if (!C.zf) goto L_108be302;
  /* 108be301 int3  */
  x86_unimpl("int3 @ 0x108be301");
L_108be302:;
  /* 108be302 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108be304 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108be306 jne 0x108be2de */
  if (!C.zf) goto L_108be2de;
  /* 108be308 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be30b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108be30e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 108be311 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108be313 je 0x108be321 */
  if (C.zf) goto L_108be321;
  /* 108be315 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be318 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 108be31f jmp 0x108be348 */
  goto L_108be348;
L_108be321:;
  /* 108be321 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be324 push ecx */
  push32((uint32_t)(ECX));
  /* 108be325 call 0x108bcb40 */
  push32(0x108be32au); f_108bcb40();
  /* 108be32a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be32d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be330 push edx */
  push32((uint32_t)(EDX));
  /* 108be331 call 0x108be360 */
  push32(0x108be336u); f_108be360();
  /* 108be336 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be339 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108be33c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be33f push eax */
  push32((uint32_t)(EAX));
  /* 108be340 call 0x108bcbb0 */
  push32(0x108be345u); f_108bcbb0();
  /* 108be345 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108be348:;
  /* 108be348 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be34b pop edi */
  EDI = (pop32());
  /* 108be34c pop esi */
  ESI = (pop32());
  /* 108be34d pop ebx */
  EBX = (pop32());
  /* 108be34e mov esp, ebp */
  ESP = (EBP);
  /* 108be350 pop ebp */
  EBP = (pop32());
  /* 108be351 ret  */
  ESPCHK(0x108be2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e360 @ 0x108be360 (190 bytes, 67 insns) */
void f_108be360(void) {
  FTRACE(0x108be360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108be360 push ebp */
  push32((uint32_t)(EBP));
  /* 108be361 mov ebp, esp */
  EBP = (ESP);
  /* 108be363 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108be366 push ebx */
  push32((uint32_t)(EBX));
  /* 108be367 push esi */
  push32((uint32_t)(ESI));
  /* 108be368 push edi */
  push32((uint32_t)(EDI));
  /* 108be369 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108be370 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be373 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108be376:;
  /* 108be376 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be37a jne 0x108be39a */
  if (!C.zf) goto L_108be39a;
  /* 108be37c push 0x108daf3c */
  push32((uint32_t)(0x108daf3cu));
  /* 108be381 push 0 */
  push32((uint32_t)(0x0u));
  /* 108be383 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 108be385 push 0x108db08c */
  push32((uint32_t)(0x108db08cu));
  /* 108be38a push 2 */
  push32((uint32_t)(0x2u));
  /* 108be38c call 0x108b2df0 */
  push32(0x108be391u); f_108b2df0();
  /* 108be391 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be394 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be397 jne 0x108be39a */
  if (!C.zf) goto L_108be39a;
  /* 108be399 int3  */
  x86_unimpl("int3 @ 0x108be399");
L_108be39a:;
  /* 108be39a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108be39c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108be39e jne 0x108be376 */
  if (!C.zf) goto L_108be376;
  /* 108be3a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108be3a3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108be3a6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 108be3ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108be3ad je 0x108be40a */
  if (C.zf) goto L_108be40a;
  /* 108be3af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108be3b2 push ecx */
  push32((uint32_t)(ECX));
  /* 108be3b3 call 0x108bd660 */
  push32(0x108be3b8u); f_108bd660();
  /* 108be3b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be3bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108be3be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108be3c1 push edx */
  push32((uint32_t)(EDX));
  /* 108be3c2 call 0x108c09e0 */
  push32(0x108be3c7u); f_108c09e0();
  /* 108be3c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be3ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108be3cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108be3d0 push ecx */
  push32((uint32_t)(ECX));
  /* 108be3d1 call 0x108c08b0 */
  push32(0x108be3d6u); f_108c08b0();
  /* 108be3d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be3d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108be3db jge 0x108be3e6 */
  if ((C.sf==C.of)) goto L_108be3e6;
  /* 108be3dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108be3e4 jmp 0x108be40a */
  goto L_108be40a;
L_108be3e6:;
  /* 108be3e6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108be3e9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be3ed je 0x108be40a */
  if (C.zf) goto L_108be40a;
  /* 108be3ef push 2 */
  push32((uint32_t)(0x2u));
  /* 108be3f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108be3f4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 108be3f7 push ecx */
  push32((uint32_t)(ECX));
  /* 108be3f8 call 0x108b47c0 */
  push32(0x108be3fdu); f_108b47c0();
  /* 108be3fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be400 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108be403 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_108be40a:;
  /* 108be40a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108be40d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 108be414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be417 pop edi */
  EDI = (pop32());
  /* 108be418 pop esi */
  ESI = (pop32());
  /* 108be419 pop ebx */
  EBX = (pop32());
  /* 108be41a mov esp, ebp */
  ESP = (EBP);
  /* 108be41c pop ebp */
  EBP = (pop32());
  /* 108be41d ret  */
  ESPCHK(0x108be360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e420 @ 0x108be420 (210 bytes, 63 insns) */
void f_108be420(void) {
  FTRACE(0x108be420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108be420 push ebp */
  push32((uint32_t)(EBP));
  /* 108be421 mov ebp, esp */
  EBP = (ESP);
  /* 108be423 push ecx */
  push32((uint32_t)(ECX));
  /* 108be424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be427 cmp eax, dword ptr [0x108e107c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108e107c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be42d jae 0x108be451 */
  if (!C.cf) goto L_108be451;
  /* 108be42f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be432 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108be435 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be438 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108be43b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108be43e mov eax, dword ptr [ecx*4 + 0x108e0f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108e0f40)));
  /* 108be445 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 108be44a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108be44d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108be44f jne 0x108be464 */
  if (!C.zf) goto L_108be464;
L_108be451:;
  /* 108be451 call 0x108bbc00 */
  push32(0x108be456u); f_108bbc00();
  /* 108be456 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108be45c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108be45f jmp 0x108be4ee */
  goto L_108be4ee;
L_108be464:;
  /* 108be464 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be467 push edx */
  push32((uint32_t)(EDX));
  /* 108be468 call 0x108bd420 */
  push32(0x108be46du); f_108bd420();
  /* 108be46d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be470 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be473 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108be476 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be479 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108be47c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108be47f mov edx, dword ptr [eax*4 + 0x108e0f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108e0f40)));
  /* 108be486 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 108be48b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 108be48e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108be490 je 0x108be4cd */
  if (C.zf) goto L_108be4cd;
  /* 108be492 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be495 push ecx */
  push32((uint32_t)(ECX));
  /* 108be496 call 0x108bd2a0 */
  push32(0x108be49bu); f_108bd2a0();
  /* 108be49b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be49e push eax */
  push32((uint32_t)(EAX));
  /* 108be49f call dword ptr [0x108e22bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22bc))), 0x108be4a5u);
  /* 108be4a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108be4a7 jne 0x108be4b4 */
  if (!C.zf) goto L_108be4b4;
  /* 108be4a9 call dword ptr [0x108e228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e228c))), 0x108be4afu);
  /* 108be4af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108be4b2 jmp 0x108be4bb */
  goto L_108be4bb;
L_108be4b4:;
  /* 108be4b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108be4bb:;
  /* 108be4bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be4bf jne 0x108be4c3 */
  if (!C.zf) goto L_108be4c3;
  /* 108be4c1 jmp 0x108be4df */
  goto L_108be4df;
L_108be4c3:;
  /* 108be4c3 call 0x108bbc10 */
  push32(0x108be4c8u); f_108bbc10();
  /* 108be4c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be4cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_108be4cd:;
  /* 108be4cd call 0x108bbc00 */
  push32(0x108be4d2u); f_108bbc00();
  /* 108be4d2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108be4d8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108be4df:;
  /* 108be4df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be4e2 push eax */
  push32((uint32_t)(EAX));
  /* 108be4e3 call 0x108bd4b0 */
  push32(0x108be4e8u); f_108bd4b0();
  /* 108be4e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be4eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108be4ee:;
  /* 108be4ee mov esp, ebp */
  ESP = (EBP);
  /* 108be4f0 pop ebp */
  EBP = (pop32());
  /* 108be4f1 ret  */
  ESPCHK(0x108be420u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x108be500 (219 bytes, 64 insns) */
void f_108be500(void) {
  FTRACE(0x108be500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108be500 push ebp */
  push32((uint32_t)(EBP));
  /* 108be501 mov ebp, esp */
  EBP = (ESP);
  /* 108be503 push ecx */
  push32((uint32_t)(ECX));
  /* 108be504 cmp dword ptr [0x108df77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be50b je 0x108be5a1 */
  if (C.zf) goto L_108be5a1;
  /* 108be511 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 108be513 push 0x108db0a8 */
  push32((uint32_t)(0x108db0a8u));
  /* 108be518 push 2 */
  push32((uint32_t)(0x2u));
  /* 108be51a push 0xac */
  push32((uint32_t)(0xacu));
  /* 108be51f push 1 */
  push32((uint32_t)(0x1u));
  /* 108be521 call 0x108b4140 */
  push32(0x108be526u); f_108b4140();
  /* 108be526 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be529 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108be52c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be530 jne 0x108be53c */
  if (!C.zf) goto L_108be53c;
  /* 108be532 mov eax, 1 */
  EAX = (0x1u);
  /* 108be537 jmp 0x108be5d7 */
  goto L_108be5d7;
L_108be53c:;
  /* 108be53c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be53f push eax */
  push32((uint32_t)(EAX));
  /* 108be540 call 0x108be5e0 */
  push32(0x108be545u); f_108be5e0();
  /* 108be545 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be548 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108be54a je 0x108be56d */
  if (C.zf) goto L_108be56d;
  /* 108be54c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be54f push ecx */
  push32((uint32_t)(ECX));
  /* 108be550 call 0x108beb70 */
  push32(0x108be555u); f_108beb70();
  /* 108be555 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be558 push 2 */
  push32((uint32_t)(0x2u));
  /* 108be55a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be55d push edx */
  push32((uint32_t)(EDX));
  /* 108be55e call 0x108b47c0 */
  push32(0x108be563u); f_108b47c0();
  /* 108be563 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be566 mov eax, 1 */
  EAX = (0x1u);
  /* 108be56b jmp 0x108be5d7 */
  goto L_108be5d7;
L_108be56d:;
  /* 108be56d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be570 mov dword ptr [0x108dec98], eax */
  w32((uint32_t)(0x108dec98), (EAX));
  /* 108be575 mov ecx, dword ptr [0x108df79c] */
  ECX = (r32((uint32_t)(0x108df79c)));
  /* 108be57b push ecx */
  push32((uint32_t)(ECX));
  /* 108be57c call 0x108beb70 */
  push32(0x108be581u); f_108beb70();
  /* 108be581 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be584 push 2 */
  push32((uint32_t)(0x2u));
  /* 108be586 mov edx, dword ptr [0x108df79c] */
  EDX = (r32((uint32_t)(0x108df79c)));
  /* 108be58c push edx */
  push32((uint32_t)(EDX));
  /* 108be58d call 0x108b47c0 */
  push32(0x108be592u); f_108b47c0();
  /* 108be592 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be595 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be598 mov dword ptr [0x108df79c], eax */
  w32((uint32_t)(0x108df79c), (EAX));
  /* 108be59d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108be59f jmp 0x108be5d7 */
  goto L_108be5d7;
L_108be5a1:;
  /* 108be5a1 mov dword ptr [0x108dec98], 0x108deca0 */
  w32((uint32_t)(0x108dec98), (0x108deca0u));
  /* 108be5ab mov ecx, dword ptr [0x108df79c] */
  ECX = (r32((uint32_t)(0x108df79c)));
  /* 108be5b1 push ecx */
  push32((uint32_t)(ECX));
  /* 108be5b2 call 0x108beb70 */
  push32(0x108be5b7u); f_108beb70();
  /* 108be5b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be5ba push 2 */
  push32((uint32_t)(0x2u));
  /* 108be5bc mov edx, dword ptr [0x108df79c] */
  EDX = (r32((uint32_t)(0x108df79c)));
  /* 108be5c2 push edx */
  push32((uint32_t)(EDX));
  /* 108be5c3 call 0x108b47c0 */
  push32(0x108be5c8u); f_108b47c0();
  /* 108be5c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be5cb mov dword ptr [0x108df79c], 0 */
  w32((uint32_t)(0x108df79c), (0x0u));
  /* 108be5d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108be5d7:;
  /* 108be5d7 mov esp, ebp */
  ESP = (EBP);
  /* 108be5d9 pop ebp */
  EBP = (pop32());
  /* 108be5da ret  */
  ESPCHK(0x108be500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5e0 @ 0x108be5e0 (1423 bytes, 533 insns) */
void f_108be5e0(void) {
  FTRACE(0x108be5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108be5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108be5e1 mov ebp, esp */
  EBP = (ESP);
  /* 108be5e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108be5e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108be5ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108be5ef mov ax, word ptr [0x108df7d6] */
  AX = (r16((uint32_t)(0x108df7d6)));
  /* 108be5f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108be5f8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108be5fa mov cx, word ptr [0x108df7d8] */
  CX = (r16((uint32_t)(0x108df7d8)));
  /* 108be601 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108be604 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108be608 jne 0x108be612 */
  if (!C.zf) goto L_108be612;
  /* 108be60a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108be60d jmp 0x108beb6b */
  goto L_108beb6b;
L_108be612:;
  /* 108be612 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be615 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be618 push edx */
  push32((uint32_t)(EDX));
  /* 108be619 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 108be61b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be61e push eax */
  push32((uint32_t)(EAX));
  /* 108be61f push 1 */
  push32((uint32_t)(0x1u));
  /* 108be621 call 0x108c1ef0 */
  push32(0x108be626u); f_108c1ef0();
  /* 108be626 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be629 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be62c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be62e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be631 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be634 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be637 push edx */
  push32((uint32_t)(EDX));
  /* 108be638 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 108be63a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be63d push eax */
  push32((uint32_t)(EAX));
  /* 108be63e push 1 */
  push32((uint32_t)(0x1u));
  /* 108be640 call 0x108c1ef0 */
  push32(0x108be645u); f_108c1ef0();
  /* 108be645 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be648 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be64b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be64d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be650 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be653 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be656 push edx */
  push32((uint32_t)(EDX));
  /* 108be657 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 108be659 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be65c push eax */
  push32((uint32_t)(EAX));
  /* 108be65d push 1 */
  push32((uint32_t)(0x1u));
  /* 108be65f call 0x108c1ef0 */
  push32(0x108be664u); f_108c1ef0();
  /* 108be664 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be667 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be66a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be66c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be66f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be672 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be675 push edx */
  push32((uint32_t)(EDX));
  /* 108be676 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 108be678 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be67b push eax */
  push32((uint32_t)(EAX));
  /* 108be67c push 1 */
  push32((uint32_t)(0x1u));
  /* 108be67e call 0x108c1ef0 */
  push32(0x108be683u); f_108c1ef0();
  /* 108be683 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be686 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be689 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be68b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be68e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be691 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be694 push edx */
  push32((uint32_t)(EDX));
  /* 108be695 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 108be697 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be69a push eax */
  push32((uint32_t)(EAX));
  /* 108be69b push 1 */
  push32((uint32_t)(0x1u));
  /* 108be69d call 0x108c1ef0 */
  push32(0x108be6a2u); f_108c1ef0();
  /* 108be6a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be6a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be6a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be6aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be6ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be6b0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be6b3 push edx */
  push32((uint32_t)(EDX));
  /* 108be6b4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 108be6b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be6b9 push eax */
  push32((uint32_t)(EAX));
  /* 108be6ba push 1 */
  push32((uint32_t)(0x1u));
  /* 108be6bc call 0x108c1ef0 */
  push32(0x108be6c1u); f_108c1ef0();
  /* 108be6c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be6c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be6c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be6c9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be6cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be6cf push edx */
  push32((uint32_t)(EDX));
  /* 108be6d0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 108be6d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be6d5 push eax */
  push32((uint32_t)(EAX));
  /* 108be6d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 108be6d8 call 0x108c1ef0 */
  push32(0x108be6ddu); f_108c1ef0();
  /* 108be6dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be6e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be6e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be6e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be6e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be6eb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be6ee push edx */
  push32((uint32_t)(EDX));
  /* 108be6ef push 0x2a */
  push32((uint32_t)(0x2au));
  /* 108be6f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be6f4 push eax */
  push32((uint32_t)(EAX));
  /* 108be6f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 108be6f7 call 0x108c1ef0 */
  push32(0x108be6fcu); f_108c1ef0();
  /* 108be6fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be6ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be702 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be704 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be707 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be70a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be70d push edx */
  push32((uint32_t)(EDX));
  /* 108be70e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 108be710 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be713 push eax */
  push32((uint32_t)(EAX));
  /* 108be714 push 1 */
  push32((uint32_t)(0x1u));
  /* 108be716 call 0x108c1ef0 */
  push32(0x108be71bu); f_108c1ef0();
  /* 108be71b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be71e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be721 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be723 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be726 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be729 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be72c push edx */
  push32((uint32_t)(EDX));
  /* 108be72d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 108be72f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be732 push eax */
  push32((uint32_t)(EAX));
  /* 108be733 push 1 */
  push32((uint32_t)(0x1u));
  /* 108be735 call 0x108c1ef0 */
  push32(0x108be73au); f_108c1ef0();
  /* 108be73a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be73d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be740 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be742 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be745 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be748 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be74b push edx */
  push32((uint32_t)(EDX));
  /* 108be74c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 108be74e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be751 push eax */
  push32((uint32_t)(EAX));
  /* 108be752 push 1 */
  push32((uint32_t)(0x1u));
  /* 108be754 call 0x108c1ef0 */
  push32(0x108be759u); f_108c1ef0();
  /* 108be759 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be75c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be75f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be761 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be764 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be767 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be76a push edx */
  push32((uint32_t)(EDX));
  /* 108be76b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 108be76d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be770 push eax */
  push32((uint32_t)(EAX));
  /* 108be771 push 1 */
  push32((uint32_t)(0x1u));
  /* 108be773 call 0x108c1ef0 */
  push32(0x108be778u); f_108c1ef0();
  /* 108be778 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be77b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be77e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be780 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be783 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be786 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be789 push edx */
  push32((uint32_t)(EDX));
  /* 108be78a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 108be78c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be78f push eax */
  push32((uint32_t)(EAX));
  /* 108be790 push 1 */
  push32((uint32_t)(0x1u));
  /* 108be792 call 0x108c1ef0 */
  push32(0x108be797u); f_108c1ef0();
  /* 108be797 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be79a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be79d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be79f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be7a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be7a5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be7a8 push edx */
  push32((uint32_t)(EDX));
  /* 108be7a9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 108be7ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be7ae push eax */
  push32((uint32_t)(EAX));
  /* 108be7af push 1 */
  push32((uint32_t)(0x1u));
  /* 108be7b1 call 0x108c1ef0 */
  push32(0x108be7b6u); f_108c1ef0();
  /* 108be7b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be7b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be7bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be7be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be7c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be7c4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be7c7 push edx */
  push32((uint32_t)(EDX));
  /* 108be7c8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 108be7ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be7cd push eax */
  push32((uint32_t)(EAX));
  /* 108be7ce push 1 */
  push32((uint32_t)(0x1u));
  /* 108be7d0 call 0x108c1ef0 */
  push32(0x108be7d5u); f_108c1ef0();
  /* 108be7d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be7d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be7db or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be7dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be7e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be7e3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be7e6 push edx */
  push32((uint32_t)(EDX));
  /* 108be7e7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 108be7e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be7ec push eax */
  push32((uint32_t)(EAX));
  /* 108be7ed push 1 */
  push32((uint32_t)(0x1u));
  /* 108be7ef call 0x108c1ef0 */
  push32(0x108be7f4u); f_108c1ef0();
  /* 108be7f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be7f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be7fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be7fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be7ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be802 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be805 push edx */
  push32((uint32_t)(EDX));
  /* 108be806 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 108be808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be80b push eax */
  push32((uint32_t)(EAX));
  /* 108be80c push 1 */
  push32((uint32_t)(0x1u));
  /* 108be80e call 0x108c1ef0 */
  push32(0x108be813u); f_108c1ef0();
  /* 108be813 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be816 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be819 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be81b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be81e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be821 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be824 push edx */
  push32((uint32_t)(EDX));
  /* 108be825 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 108be827 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be82a push eax */
  push32((uint32_t)(EAX));
  /* 108be82b push 1 */
  push32((uint32_t)(0x1u));
  /* 108be82d call 0x108c1ef0 */
  push32(0x108be832u); f_108c1ef0();
  /* 108be832 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be835 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be838 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be83a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be83d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be840 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be843 push edx */
  push32((uint32_t)(EDX));
  /* 108be844 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 108be846 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be849 push eax */
  push32((uint32_t)(EAX));
  /* 108be84a push 1 */
  push32((uint32_t)(0x1u));
  /* 108be84c call 0x108c1ef0 */
  push32(0x108be851u); f_108c1ef0();
  /* 108be851 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be854 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be857 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be859 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be85c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be85f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be862 push edx */
  push32((uint32_t)(EDX));
  /* 108be863 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 108be865 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be868 push eax */
  push32((uint32_t)(EAX));
  /* 108be869 push 1 */
  push32((uint32_t)(0x1u));
  /* 108be86b call 0x108c1ef0 */
  push32(0x108be870u); f_108c1ef0();
  /* 108be870 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be873 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be876 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be878 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be87b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be87e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be881 push edx */
  push32((uint32_t)(EDX));
  /* 108be882 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 108be884 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be887 push eax */
  push32((uint32_t)(EAX));
  /* 108be888 push 1 */
  push32((uint32_t)(0x1u));
  /* 108be88a call 0x108c1ef0 */
  push32(0x108be88fu); f_108c1ef0();
  /* 108be88f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be892 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be895 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be897 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be89a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be89d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be8a0 push edx */
  push32((uint32_t)(EDX));
  /* 108be8a1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 108be8a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be8a6 push eax */
  push32((uint32_t)(EAX));
  /* 108be8a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108be8a9 call 0x108c1ef0 */
  push32(0x108be8aeu); f_108c1ef0();
  /* 108be8ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be8b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be8b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be8b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be8b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be8bc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be8bf push edx */
  push32((uint32_t)(EDX));
  /* 108be8c0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 108be8c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be8c5 push eax */
  push32((uint32_t)(EAX));
  /* 108be8c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 108be8c8 call 0x108c1ef0 */
  push32(0x108be8cdu); f_108c1ef0();
  /* 108be8cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be8d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be8d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be8d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be8d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be8db add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be8de push edx */
  push32((uint32_t)(EDX));
  /* 108be8df push 0x4d */
  push32((uint32_t)(0x4du));
  /* 108be8e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be8e4 push eax */
  push32((uint32_t)(EAX));
  /* 108be8e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 108be8e7 call 0x108c1ef0 */
  push32(0x108be8ecu); f_108c1ef0();
  /* 108be8ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be8ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be8f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be8f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be8f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be8fa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be8fd push edx */
  push32((uint32_t)(EDX));
  /* 108be8fe push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 108be900 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be903 push eax */
  push32((uint32_t)(EAX));
  /* 108be904 push 1 */
  push32((uint32_t)(0x1u));
  /* 108be906 call 0x108c1ef0 */
  push32(0x108be90bu); f_108c1ef0();
  /* 108be90b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be90e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be911 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be913 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be916 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be919 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be91c push edx */
  push32((uint32_t)(EDX));
  /* 108be91d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 108be91f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be922 push eax */
  push32((uint32_t)(EAX));
  /* 108be923 push 1 */
  push32((uint32_t)(0x1u));
  /* 108be925 call 0x108c1ef0 */
  push32(0x108be92au); f_108c1ef0();
  /* 108be92a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be92d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be930 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be932 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be935 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be938 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be93b push edx */
  push32((uint32_t)(EDX));
  /* 108be93c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 108be93e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be941 push eax */
  push32((uint32_t)(EAX));
  /* 108be942 push 1 */
  push32((uint32_t)(0x1u));
  /* 108be944 call 0x108c1ef0 */
  push32(0x108be949u); f_108c1ef0();
  /* 108be949 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be94c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be94f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be951 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be954 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be957 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be95a push edx */
  push32((uint32_t)(EDX));
  /* 108be95b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 108be95d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be960 push eax */
  push32((uint32_t)(EAX));
  /* 108be961 push 1 */
  push32((uint32_t)(0x1u));
  /* 108be963 call 0x108c1ef0 */
  push32(0x108be968u); f_108c1ef0();
  /* 108be968 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be96b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be96e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be970 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be973 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be976 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be979 push edx */
  push32((uint32_t)(EDX));
  /* 108be97a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 108be97c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be97f push eax */
  push32((uint32_t)(EAX));
  /* 108be980 push 1 */
  push32((uint32_t)(0x1u));
  /* 108be982 call 0x108c1ef0 */
  push32(0x108be987u); f_108c1ef0();
  /* 108be987 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be98a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be98d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be98f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be992 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be995 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be998 push edx */
  push32((uint32_t)(EDX));
  /* 108be999 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 108be99b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be99e push eax */
  push32((uint32_t)(EAX));
  /* 108be99f push 1 */
  push32((uint32_t)(0x1u));
  /* 108be9a1 call 0x108c1ef0 */
  push32(0x108be9a6u); f_108c1ef0();
  /* 108be9a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be9a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be9ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be9ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be9b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be9b4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be9b7 push edx */
  push32((uint32_t)(EDX));
  /* 108be9b8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 108be9ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be9bd push eax */
  push32((uint32_t)(EAX));
  /* 108be9be push 1 */
  push32((uint32_t)(0x1u));
  /* 108be9c0 call 0x108c1ef0 */
  push32(0x108be9c5u); f_108c1ef0();
  /* 108be9c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be9c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be9cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be9cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be9d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be9d3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be9d6 push edx */
  push32((uint32_t)(EDX));
  /* 108be9d7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 108be9d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be9dc push eax */
  push32((uint32_t)(EAX));
  /* 108be9dd push 1 */
  push32((uint32_t)(0x1u));
  /* 108be9df call 0x108c1ef0 */
  push32(0x108be9e4u); f_108c1ef0();
  /* 108be9e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108be9e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108be9ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108be9ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108be9ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108be9f2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108be9f8 push edx */
  push32((uint32_t)(EDX));
  /* 108be9f9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 108be9fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108be9fe push eax */
  push32((uint32_t)(EAX));
  /* 108be9ff push 1 */
  push32((uint32_t)(0x1u));
  /* 108bea01 call 0x108c1ef0 */
  push32(0x108bea06u); f_108c1ef0();
  /* 108bea06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bea09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bea0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bea0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108bea11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bea14 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bea1a push edx */
  push32((uint32_t)(EDX));
  /* 108bea1b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 108bea1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bea20 push eax */
  push32((uint32_t)(EAX));
  /* 108bea21 push 1 */
  push32((uint32_t)(0x1u));
  /* 108bea23 call 0x108c1ef0 */
  push32(0x108bea28u); f_108c1ef0();
  /* 108bea28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bea2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bea2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bea30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108bea33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bea36 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bea3c push edx */
  push32((uint32_t)(EDX));
  /* 108bea3d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 108bea3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bea42 push eax */
  push32((uint32_t)(EAX));
  /* 108bea43 push 1 */
  push32((uint32_t)(0x1u));
  /* 108bea45 call 0x108c1ef0 */
  push32(0x108bea4au); f_108c1ef0();
  /* 108bea4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bea4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bea50 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bea52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108bea55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bea58 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bea5e push edx */
  push32((uint32_t)(EDX));
  /* 108bea5f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 108bea61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bea64 push eax */
  push32((uint32_t)(EAX));
  /* 108bea65 push 1 */
  push32((uint32_t)(0x1u));
  /* 108bea67 call 0x108c1ef0 */
  push32(0x108bea6cu); f_108c1ef0();
  /* 108bea6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bea6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bea72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bea74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108bea77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bea7a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bea80 push edx */
  push32((uint32_t)(EDX));
  /* 108bea81 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 108bea83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bea86 push eax */
  push32((uint32_t)(EAX));
  /* 108bea87 push 1 */
  push32((uint32_t)(0x1u));
  /* 108bea89 call 0x108c1ef0 */
  push32(0x108bea8eu); f_108c1ef0();
  /* 108bea8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bea91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bea94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bea96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108bea99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bea9c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108beaa2 push edx */
  push32((uint32_t)(EDX));
  /* 108beaa3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 108beaa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108beaa8 push eax */
  push32((uint32_t)(EAX));
  /* 108beaa9 push 1 */
  push32((uint32_t)(0x1u));
  /* 108beaab call 0x108c1ef0 */
  push32(0x108beab0u); f_108c1ef0();
  /* 108beab0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108beab3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108beab6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108beab8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108beabb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108beabe add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108beac4 push edx */
  push32((uint32_t)(EDX));
  /* 108beac5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 108beac7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108beaca push eax */
  push32((uint32_t)(EAX));
  /* 108beacb push 1 */
  push32((uint32_t)(0x1u));
  /* 108beacd call 0x108c1ef0 */
  push32(0x108bead2u); f_108c1ef0();
  /* 108bead2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bead5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bead8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108beada mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108beadd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108beae0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108beae6 push edx */
  push32((uint32_t)(EDX));
  /* 108beae7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 108beae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108beaec push eax */
  push32((uint32_t)(EAX));
  /* 108beaed push 1 */
  push32((uint32_t)(0x1u));
  /* 108beaef call 0x108c1ef0 */
  push32(0x108beaf4u); f_108c1ef0();
  /* 108beaf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108beaf7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108beafa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108beafc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108beaff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108beb02 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108beb08 push edx */
  push32((uint32_t)(EDX));
  /* 108beb09 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 108beb0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108beb0e push eax */
  push32((uint32_t)(EAX));
  /* 108beb0f push 1 */
  push32((uint32_t)(0x1u));
  /* 108beb11 call 0x108c1ef0 */
  push32(0x108beb16u); f_108c1ef0();
  /* 108beb16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108beb19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108beb1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108beb1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108beb21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108beb24 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108beb2a push edx */
  push32((uint32_t)(EDX));
  /* 108beb2b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 108beb2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108beb30 push eax */
  push32((uint32_t)(EAX));
  /* 108beb31 push 1 */
  push32((uint32_t)(0x1u));
  /* 108beb33 call 0x108c1ef0 */
  push32(0x108beb38u); f_108c1ef0();
  /* 108beb38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108beb3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108beb3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108beb40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108beb43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108beb46 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108beb4c push edx */
  push32((uint32_t)(EDX));
  /* 108beb4d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 108beb52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108beb55 push eax */
  push32((uint32_t)(EAX));
  /* 108beb56 push 1 */
  push32((uint32_t)(0x1u));
  /* 108beb58 call 0x108c1ef0 */
  push32(0x108beb5du); f_108c1ef0();
  /* 108beb5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108beb60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108beb63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108beb65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108beb68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_108beb6b:;
  /* 108beb6b mov esp, ebp */
  ESP = (EBP);
  /* 108beb6d pop ebp */
  EBP = (pop32());
  /* 108beb6e ret  */
  ESPCHK(0x108be5e0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x108beb70 (779 bytes, 265 insns) */
void f_108beb70(void) {
  FTRACE(0x108beb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108beb70 push ebp */
  push32((uint32_t)(EBP));
  /* 108beb71 mov ebp, esp */
  EBP = (ESP);
  /* 108beb73 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108beb77 jne 0x108beb7e */
  if (!C.zf) goto L_108beb7e;
  /* 108beb79 jmp 0x108bee79 */
  goto L_108bee79;
L_108beb7e:;
  /* 108beb7e push 2 */
  push32((uint32_t)(0x2u));
  /* 108beb80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108beb83 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108beb86 push ecx */
  push32((uint32_t)(ECX));
  /* 108beb87 call 0x108b47c0 */
  push32(0x108beb8cu); f_108b47c0();
  /* 108beb8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108beb8f push 2 */
  push32((uint32_t)(0x2u));
  /* 108beb91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108beb94 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108beb97 push eax */
  push32((uint32_t)(EAX));
  /* 108beb98 call 0x108b47c0 */
  push32(0x108beb9du); f_108b47c0();
  /* 108beb9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108beba0 push 2 */
  push32((uint32_t)(0x2u));
  /* 108beba2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108beba5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108beba8 push edx */
  push32((uint32_t)(EDX));
  /* 108beba9 call 0x108b47c0 */
  push32(0x108bebaeu); f_108b47c0();
  /* 108bebae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bebb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bebb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bebb6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108bebb9 push ecx */
  push32((uint32_t)(ECX));
  /* 108bebba call 0x108b47c0 */
  push32(0x108bebbfu); f_108b47c0();
  /* 108bebbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bebc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bebc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bebc7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108bebca push eax */
  push32((uint32_t)(EAX));
  /* 108bebcb call 0x108b47c0 */
  push32(0x108bebd0u); f_108b47c0();
  /* 108bebd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bebd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bebd5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bebd8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 108bebdb push edx */
  push32((uint32_t)(EDX));
  /* 108bebdc call 0x108b47c0 */
  push32(0x108bebe1u); f_108b47c0();
  /* 108bebe1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bebe4 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bebe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bebe9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108bebeb push ecx */
  push32((uint32_t)(ECX));
  /* 108bebec call 0x108b47c0 */
  push32(0x108bebf1u); f_108b47c0();
  /* 108bebf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bebf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bebf6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bebf9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 108bebfc push eax */
  push32((uint32_t)(EAX));
  /* 108bebfd call 0x108b47c0 */
  push32(0x108bec02u); f_108b47c0();
  /* 108bec02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bec05 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bec07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bec0a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 108bec0d push edx */
  push32((uint32_t)(EDX));
  /* 108bec0e call 0x108b47c0 */
  push32(0x108bec13u); f_108b47c0();
  /* 108bec13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bec16 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bec18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bec1b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 108bec1e push ecx */
  push32((uint32_t)(ECX));
  /* 108bec1f call 0x108b47c0 */
  push32(0x108bec24u); f_108b47c0();
  /* 108bec24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bec27 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bec29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bec2c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 108bec2f push eax */
  push32((uint32_t)(EAX));
  /* 108bec30 call 0x108b47c0 */
  push32(0x108bec35u); f_108b47c0();
  /* 108bec35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bec38 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bec3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bec3d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 108bec40 push edx */
  push32((uint32_t)(EDX));
  /* 108bec41 call 0x108b47c0 */
  push32(0x108bec46u); f_108b47c0();
  /* 108bec46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bec49 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bec4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bec4e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 108bec51 push ecx */
  push32((uint32_t)(ECX));
  /* 108bec52 call 0x108b47c0 */
  push32(0x108bec57u); f_108b47c0();
  /* 108bec57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bec5a push 2 */
  push32((uint32_t)(0x2u));
  /* 108bec5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bec5f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 108bec62 push eax */
  push32((uint32_t)(EAX));
  /* 108bec63 call 0x108b47c0 */
  push32(0x108bec68u); f_108b47c0();
  /* 108bec68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bec6b push 2 */
  push32((uint32_t)(0x2u));
  /* 108bec6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bec70 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 108bec73 push edx */
  push32((uint32_t)(EDX));
  /* 108bec74 call 0x108b47c0 */
  push32(0x108bec79u); f_108b47c0();
  /* 108bec79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bec7c push 2 */
  push32((uint32_t)(0x2u));
  /* 108bec7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bec81 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 108bec84 push ecx */
  push32((uint32_t)(ECX));
  /* 108bec85 call 0x108b47c0 */
  push32(0x108bec8au); f_108b47c0();
  /* 108bec8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bec8d push 2 */
  push32((uint32_t)(0x2u));
  /* 108bec8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bec92 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 108bec95 push eax */
  push32((uint32_t)(EAX));
  /* 108bec96 call 0x108b47c0 */
  push32(0x108bec9bu); f_108b47c0();
  /* 108bec9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bec9e push 2 */
  push32((uint32_t)(0x2u));
  /* 108beca0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108beca3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 108beca6 push edx */
  push32((uint32_t)(EDX));
  /* 108beca7 call 0x108b47c0 */
  push32(0x108becacu); f_108b47c0();
  /* 108becac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108becaf push 2 */
  push32((uint32_t)(0x2u));
  /* 108becb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108becb4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 108becb7 push ecx */
  push32((uint32_t)(ECX));
  /* 108becb8 call 0x108b47c0 */
  push32(0x108becbdu); f_108b47c0();
  /* 108becbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108becc0 push 2 */
  push32((uint32_t)(0x2u));
  /* 108becc2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108becc5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 108becc8 push eax */
  push32((uint32_t)(EAX));
  /* 108becc9 call 0x108b47c0 */
  push32(0x108becceu); f_108b47c0();
  /* 108becce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108becd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 108becd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108becd6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 108becd9 push edx */
  push32((uint32_t)(EDX));
  /* 108becda call 0x108b47c0 */
  push32(0x108becdfu); f_108b47c0();
  /* 108becdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bece2 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bece4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bece7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 108becea push ecx */
  push32((uint32_t)(ECX));
  /* 108beceb call 0x108b47c0 */
  push32(0x108becf0u); f_108b47c0();
  /* 108becf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108becf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 108becf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108becf8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 108becfb push eax */
  push32((uint32_t)(EAX));
  /* 108becfc call 0x108b47c0 */
  push32(0x108bed01u); f_108b47c0();
  /* 108bed01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bed04 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bed06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bed09 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 108bed0c push edx */
  push32((uint32_t)(EDX));
  /* 108bed0d call 0x108b47c0 */
  push32(0x108bed12u); f_108b47c0();
  /* 108bed12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bed15 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bed17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bed1a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 108bed1d push ecx */
  push32((uint32_t)(ECX));
  /* 108bed1e call 0x108b47c0 */
  push32(0x108bed23u); f_108b47c0();
  /* 108bed23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bed26 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bed28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bed2b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 108bed2e push eax */
  push32((uint32_t)(EAX));
  /* 108bed2f call 0x108b47c0 */
  push32(0x108bed34u); f_108b47c0();
  /* 108bed34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bed37 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bed39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bed3c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 108bed3f push edx */
  push32((uint32_t)(EDX));
  /* 108bed40 call 0x108b47c0 */
  push32(0x108bed45u); f_108b47c0();
  /* 108bed45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bed48 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bed4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bed4d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 108bed50 push ecx */
  push32((uint32_t)(ECX));
  /* 108bed51 call 0x108b47c0 */
  push32(0x108bed56u); f_108b47c0();
  /* 108bed56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bed59 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bed5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bed5e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 108bed61 push eax */
  push32((uint32_t)(EAX));
  /* 108bed62 call 0x108b47c0 */
  push32(0x108bed67u); f_108b47c0();
  /* 108bed67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bed6a push 2 */
  push32((uint32_t)(0x2u));
  /* 108bed6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bed6f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 108bed72 push edx */
  push32((uint32_t)(EDX));
  /* 108bed73 call 0x108b47c0 */
  push32(0x108bed78u); f_108b47c0();
  /* 108bed78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bed7b push 2 */
  push32((uint32_t)(0x2u));
  /* 108bed7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bed80 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 108bed83 push ecx */
  push32((uint32_t)(ECX));
  /* 108bed84 call 0x108b47c0 */
  push32(0x108bed89u); f_108b47c0();
  /* 108bed89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bed8c push 2 */
  push32((uint32_t)(0x2u));
  /* 108bed8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bed91 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 108bed94 push eax */
  push32((uint32_t)(EAX));
  /* 108bed95 call 0x108b47c0 */
  push32(0x108bed9au); f_108b47c0();
  /* 108bed9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bed9d push 2 */
  push32((uint32_t)(0x2u));
  /* 108bed9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108beda2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 108beda8 push edx */
  push32((uint32_t)(EDX));
  /* 108beda9 call 0x108b47c0 */
  push32(0x108bedaeu); f_108b47c0();
  /* 108bedae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bedb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bedb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bedb6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 108bedbc push ecx */
  push32((uint32_t)(ECX));
  /* 108bedbd call 0x108b47c0 */
  push32(0x108bedc2u); f_108b47c0();
  /* 108bedc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bedc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bedc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bedca mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 108bedd0 push eax */
  push32((uint32_t)(EAX));
  /* 108bedd1 call 0x108b47c0 */
  push32(0x108bedd6u); f_108b47c0();
  /* 108bedd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bedd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 108beddb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bedde mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 108bede4 push edx */
  push32((uint32_t)(EDX));
  /* 108bede5 call 0x108b47c0 */
  push32(0x108bedeau); f_108b47c0();
  /* 108bedea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108beded push 2 */
  push32((uint32_t)(0x2u));
  /* 108bedef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bedf2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 108bedf8 push ecx */
  push32((uint32_t)(ECX));
  /* 108bedf9 call 0x108b47c0 */
  push32(0x108bedfeu); f_108b47c0();
  /* 108bedfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bee01 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bee03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bee06 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 108bee0c push eax */
  push32((uint32_t)(EAX));
  /* 108bee0d call 0x108b47c0 */
  push32(0x108bee12u); f_108b47c0();
  /* 108bee12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bee15 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bee17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bee1a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 108bee20 push edx */
  push32((uint32_t)(EDX));
  /* 108bee21 call 0x108b47c0 */
  push32(0x108bee26u); f_108b47c0();
  /* 108bee26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bee29 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bee2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bee2e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 108bee34 push ecx */
  push32((uint32_t)(ECX));
  /* 108bee35 call 0x108b47c0 */
  push32(0x108bee3au); f_108b47c0();
  /* 108bee3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bee3d push 2 */
  push32((uint32_t)(0x2u));
  /* 108bee3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bee42 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 108bee48 push eax */
  push32((uint32_t)(EAX));
  /* 108bee49 call 0x108b47c0 */
  push32(0x108bee4eu); f_108b47c0();
  /* 108bee4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bee51 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bee53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bee56 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 108bee5c push edx */
  push32((uint32_t)(EDX));
  /* 108bee5d call 0x108b47c0 */
  push32(0x108bee62u); f_108b47c0();
  /* 108bee62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bee65 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bee67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bee6a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 108bee70 push ecx */
  push32((uint32_t)(ECX));
  /* 108bee71 call 0x108b47c0 */
  push32(0x108bee76u); f_108b47c0();
  /* 108bee76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bee79:;
  /* 108bee79 pop ebp */
  EBP = (pop32());
  /* 108bee7a ret  */
  ESPCHK(0x108beb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee80 @ 0x108bee80 (678 bytes, 180 insns) */
void f_108bee80(void) {
  FTRACE(0x108bee80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bee80 push ebp */
  push32((uint32_t)(EBP));
  /* 108bee81 mov ebp, esp */
  EBP = (ESP);
  /* 108bee83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bee86 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108bee8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bee8f mov ax, word ptr [0x108df7d2] */
  AX = (r16((uint32_t)(0x108df7d2)));
  /* 108bee95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108bee98 cmp dword ptr [0x108df778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bee9f je 0x108beffa */
  if (C.zf) goto L_108beffa;
  /* 108beea5 push 0x108df7a0 */
  push32((uint32_t)(0x108df7a0u));
  /* 108beeaa push 0xe */
  push32((uint32_t)(0xeu));
  /* 108beeac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108beeaf push ecx */
  push32((uint32_t)(ECX));
  /* 108beeb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 108beeb2 call 0x108c1ef0 */
  push32(0x108beeb7u); f_108c1ef0();
  /* 108beeb7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108beeba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108beebd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 108beebf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108beec2 push 0x108df7a4 */
  push32((uint32_t)(0x108df7a4u));
  /* 108beec7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 108beec9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108beecc push eax */
  push32((uint32_t)(EAX));
  /* 108beecd push 1 */
  push32((uint32_t)(0x1u));
  /* 108beecf call 0x108c1ef0 */
  push32(0x108beed4u); f_108c1ef0();
  /* 108beed4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108beed7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108beeda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108beedc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108beedf push 0x108df7a8 */
  push32((uint32_t)(0x108df7a8u));
  /* 108beee4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 108beee6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108beee9 push edx */
  push32((uint32_t)(EDX));
  /* 108beeea push 1 */
  push32((uint32_t)(0x1u));
  /* 108beeec call 0x108c1ef0 */
  push32(0x108beef1u); f_108c1ef0();
  /* 108beef1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108beef4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108beef7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108beef9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108beefc mov edx, dword ptr [0x108df7a8] */
  EDX = (r32((uint32_t)(0x108df7a8)));
  /* 108bef02 push edx */
  push32((uint32_t)(EDX));
  /* 108bef03 call 0x108bf130 */
  push32(0x108bef08u); f_108bf130();
  /* 108bef08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bef0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bef0f je 0x108bef69 */
  if (C.zf) goto L_108bef69;
  /* 108bef11 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bef13 mov eax, dword ptr [0x108df7a0] */
  EAX = (r32((uint32_t)(0x108df7a0)));
  /* 108bef18 push eax */
  push32((uint32_t)(EAX));
  /* 108bef19 call 0x108b47c0 */
  push32(0x108bef1eu); f_108b47c0();
  /* 108bef1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bef21 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bef23 mov ecx, dword ptr [0x108df7a4] */
  ECX = (r32((uint32_t)(0x108df7a4)));
  /* 108bef29 push ecx */
  push32((uint32_t)(ECX));
  /* 108bef2a call 0x108b47c0 */
  push32(0x108bef2fu); f_108b47c0();
  /* 108bef2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bef32 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bef34 mov edx, dword ptr [0x108df7a8] */
  EDX = (r32((uint32_t)(0x108df7a8)));
  /* 108bef3a push edx */
  push32((uint32_t)(EDX));
  /* 108bef3b call 0x108b47c0 */
  push32(0x108bef40u); f_108b47c0();
  /* 108bef40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bef43 mov dword ptr [0x108df7a0], 0 */
  w32((uint32_t)(0x108df7a0), (0x0u));
  /* 108bef4d mov dword ptr [0x108df7a4], 0 */
  w32((uint32_t)(0x108df7a4), (0x0u));
  /* 108bef57 mov dword ptr [0x108df7a8], 0 */
  w32((uint32_t)(0x108df7a8), (0x0u));
  /* 108bef61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bef64 jmp 0x108bf122 */
  goto L_108bf122;
L_108bef69:;
  /* 108bef69 mov eax, dword ptr [0x108ded88] */
  EAX = (r32((uint32_t)(0x108ded88)));
  /* 108bef6e cmp dword ptr [eax], 0x108ded50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x108ded50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bef74 je 0x108befb0 */
  if (C.zf) goto L_108befb0;
  /* 108bef76 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bef78 mov ecx, dword ptr [0x108ded88] */
  ECX = (r32((uint32_t)(0x108ded88)));
  /* 108bef7e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108bef80 push edx */
  push32((uint32_t)(EDX));
  /* 108bef81 call 0x108b47c0 */
  push32(0x108bef86u); f_108b47c0();
  /* 108bef86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bef89 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bef8b mov eax, dword ptr [0x108ded88] */
  EAX = (r32((uint32_t)(0x108ded88)));
  /* 108bef90 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108bef93 push ecx */
  push32((uint32_t)(ECX));
  /* 108bef94 call 0x108b47c0 */
  push32(0x108bef99u); f_108b47c0();
  /* 108bef99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bef9c push 2 */
  push32((uint32_t)(0x2u));
  /* 108bef9e mov edx, dword ptr [0x108ded88] */
  EDX = (r32((uint32_t)(0x108ded88)));
  /* 108befa4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108befa7 push eax */
  push32((uint32_t)(EAX));
  /* 108befa8 call 0x108b47c0 */
  push32(0x108befadu); f_108b47c0();
  /* 108befad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108befb0:;
  /* 108befb0 mov ecx, dword ptr [0x108ded88] */
  ECX = (r32((uint32_t)(0x108ded88)));
  /* 108befb6 mov edx, dword ptr [0x108df7a0] */
  EDX = (r32((uint32_t)(0x108df7a0)));
  /* 108befbc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 108befbe mov eax, dword ptr [0x108ded88] */
  EAX = (r32((uint32_t)(0x108ded88)));
  /* 108befc3 mov ecx, dword ptr [0x108df7a4] */
  ECX = (r32((uint32_t)(0x108df7a4)));
  /* 108befc9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 108befcc mov edx, dword ptr [0x108ded88] */
  EDX = (r32((uint32_t)(0x108ded88)));
  /* 108befd2 mov eax, dword ptr [0x108df7a8] */
  EAX = (r32((uint32_t)(0x108df7a8)));
  /* 108befd7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108befda mov ecx, dword ptr [0x108ded88] */
  ECX = (r32((uint32_t)(0x108ded88)));
  /* 108befe0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108befe2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108befe4 mov byte ptr [0x108ddea8], al */
  w8((uint32_t)(0x108ddea8), (AL));
  /* 108befe9 mov dword ptr [0x108ddeac], 1 */
  w32((uint32_t)(0x108ddeac), (0x1u));
  /* 108beff3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108beff5 jmp 0x108bf122 */
  goto L_108bf122;
L_108beffa:;
  /* 108beffa push 2 */
  push32((uint32_t)(0x2u));
  /* 108beffc mov ecx, dword ptr [0x108df7a0] */
  ECX = (r32((uint32_t)(0x108df7a0)));
  /* 108bf002 push ecx */
  push32((uint32_t)(ECX));
  /* 108bf003 call 0x108b47c0 */
  push32(0x108bf008u); f_108b47c0();
  /* 108bf008 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf00b push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf00d mov edx, dword ptr [0x108df7a4] */
  EDX = (r32((uint32_t)(0x108df7a4)));
  /* 108bf013 push edx */
  push32((uint32_t)(EDX));
  /* 108bf014 call 0x108b47c0 */
  push32(0x108bf019u); f_108b47c0();
  /* 108bf019 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf01c push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf01e mov eax, dword ptr [0x108df7a8] */
  EAX = (r32((uint32_t)(0x108df7a8)));
  /* 108bf023 push eax */
  push32((uint32_t)(EAX));
  /* 108bf024 call 0x108b47c0 */
  push32(0x108bf029u); f_108b47c0();
  /* 108bf029 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf02c mov dword ptr [0x108df7a0], 0 */
  w32((uint32_t)(0x108df7a0), (0x0u));
  /* 108bf036 mov dword ptr [0x108df7a4], 0 */
  w32((uint32_t)(0x108df7a4), (0x0u));
  /* 108bf040 mov dword ptr [0x108df7a8], 0 */
  w32((uint32_t)(0x108df7a8), (0x0u));
  /* 108bf04a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 108bf04f push 0x108db0b4 */
  push32((uint32_t)(0x108db0b4u));
  /* 108bf054 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf056 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf058 call 0x108b3d30 */
  push32(0x108bf05du); f_108b3d30();
  /* 108bf05d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf060 mov ecx, dword ptr [0x108ded88] */
  ECX = (r32((uint32_t)(0x108ded88)));
  /* 108bf066 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108bf068 mov edx, dword ptr [0x108ded88] */
  EDX = (r32((uint32_t)(0x108ded88)));
  /* 108bf06e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf071 jne 0x108bf07b */
  if (!C.zf) goto L_108bf07b;
  /* 108bf073 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bf076 jmp 0x108bf122 */
  goto L_108bf122;
L_108bf07b:;
  /* 108bf07b push 0x108db084 */
  push32((uint32_t)(0x108db084u));
  /* 108bf080 mov eax, dword ptr [0x108ded88] */
  EAX = (r32((uint32_t)(0x108ded88)));
  /* 108bf085 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108bf087 push ecx */
  push32((uint32_t)(ECX));
  /* 108bf088 call 0x108b6ce0 */
  push32(0x108bf08du); f_108b6ce0();
  /* 108bf08d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf090 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 108bf095 push 0x108db0b4 */
  push32((uint32_t)(0x108db0b4u));
  /* 108bf09a push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf09c push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf09e call 0x108b3d30 */
  push32(0x108bf0a3u); f_108b3d30();
  /* 108bf0a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf0a6 mov edx, dword ptr [0x108ded88] */
  EDX = (r32((uint32_t)(0x108ded88)));
  /* 108bf0ac mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 108bf0af mov eax, dword ptr [0x108ded88] */
  EAX = (r32((uint32_t)(0x108ded88)));
  /* 108bf0b4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf0b8 jne 0x108bf0bf */
  if (!C.zf) goto L_108bf0bf;
  /* 108bf0ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bf0bd jmp 0x108bf122 */
  goto L_108bf122;
L_108bf0bf:;
  /* 108bf0bf mov ecx, dword ptr [0x108ded88] */
  ECX = (r32((uint32_t)(0x108ded88)));
  /* 108bf0c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108bf0c8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 108bf0cb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 108bf0d0 push 0x108db0b4 */
  push32((uint32_t)(0x108db0b4u));
  /* 108bf0d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf0d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf0d9 call 0x108b3d30 */
  push32(0x108bf0deu); f_108b3d30();
  /* 108bf0de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf0e1 mov ecx, dword ptr [0x108ded88] */
  ECX = (r32((uint32_t)(0x108ded88)));
  /* 108bf0e7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 108bf0ea mov edx, dword ptr [0x108ded88] */
  EDX = (r32((uint32_t)(0x108ded88)));
  /* 108bf0f0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf0f4 jne 0x108bf0fb */
  if (!C.zf) goto L_108bf0fb;
  /* 108bf0f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bf0f9 jmp 0x108bf122 */
  goto L_108bf122;
L_108bf0fb:;
  /* 108bf0fb mov eax, dword ptr [0x108ded88] */
  EAX = (r32((uint32_t)(0x108ded88)));
  /* 108bf100 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108bf103 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 108bf106 mov edx, dword ptr [0x108ded88] */
  EDX = (r32((uint32_t)(0x108ded88)));
  /* 108bf10c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108bf10e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108bf110 mov byte ptr [0x108ddea8], cl */
  w8((uint32_t)(0x108ddea8), (CL));
  /* 108bf116 mov dword ptr [0x108ddeac], 1 */
  w32((uint32_t)(0x108ddeac), (0x1u));
  /* 108bf120 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108bf122:;
  /* 108bf122 mov esp, ebp */
  ESP = (EBP);
  /* 108bf124 pop ebp */
  EBP = (pop32());
  /* 108bf125 ret  */
  ESPCHK(0x108bee80u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x108bf130 (125 bytes, 49 insns) */
void f_108bf130(void) {
  FTRACE(0x108bf130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bf130 push ebp */
  push32((uint32_t)(EBP));
  /* 108bf131 mov ebp, esp */
  EBP = (ESP);
  /* 108bf133 push ecx */
  push32((uint32_t)(ECX));
L_108bf134:;
  /* 108bf134 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf137 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108bf13a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bf13c je 0x108bf1a9 */
  if (C.zf) goto L_108bf1a9;
  /* 108bf13e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf141 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108bf144 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf147 jl 0x108bf16d */
  if ((C.sf!=C.of)) goto L_108bf16d;
  /* 108bf149 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf14c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108bf14f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf152 jg 0x108bf16d */
  if ((!C.zf&&C.sf==C.of)) goto L_108bf16d;
  /* 108bf154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf157 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108bf15a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bf15d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf160 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 108bf162 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf165 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf168 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108bf16b jmp 0x108bf1a7 */
  goto L_108bf1a7;
L_108bf16d:;
  /* 108bf16d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf170 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108bf173 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf176 jne 0x108bf19e */
  if (!C.zf) goto L_108bf19e;
  /* 108bf178 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf17b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108bf17e:;
  /* 108bf17e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf181 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf184 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 108bf187 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108bf189 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf18c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf18f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108bf192 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf195 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108bf198 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bf19a jne 0x108bf17e */
  if (!C.zf) goto L_108bf17e;
  /* 108bf19c jmp 0x108bf1a7 */
  goto L_108bf1a7;
L_108bf19e:;
  /* 108bf19e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf1a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf1a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_108bf1a7:;
  /* 108bf1a7 jmp 0x108bf134 */
  goto L_108bf134;
L_108bf1a9:;
  /* 108bf1a9 mov esp, ebp */
  ESP = (EBP);
  /* 108bf1ab pop ebp */
  EBP = (pop32());
  /* 108bf1ac ret  */
  ESPCHK(0x108bf130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1b0 @ 0x108bf1b0 (304 bytes, 85 insns) */
void f_108bf1b0(void) {
  FTRACE(0x108bf1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bf1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bf1b1 mov ebp, esp */
  EBP = (ESP);
  /* 108bf1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 108bf1b4 cmp dword ptr [0x108df774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf1bb je 0x108bf27c */
  if (C.zf) goto L_108bf27c;
  /* 108bf1c1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 108bf1c3 push 0x108db0c0 */
  push32((uint32_t)(0x108db0c0u));
  /* 108bf1c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf1ca push 0x30 */
  push32((uint32_t)(0x30u));
  /* 108bf1cc push 1 */
  push32((uint32_t)(0x1u));
  /* 108bf1ce call 0x108b4140 */
  push32(0x108bf1d3u); f_108b4140();
  /* 108bf1d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf1d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108bf1d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf1dd jne 0x108bf1e9 */
  if (!C.zf) goto L_108bf1e9;
  /* 108bf1df mov eax, 1 */
  EAX = (0x1u);
  /* 108bf1e4 jmp 0x108bf2dc */
  goto L_108bf2dc;
L_108bf1e9:;
  /* 108bf1e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf1ec push eax */
  push32((uint32_t)(EAX));
  /* 108bf1ed call 0x108bf2e0 */
  push32(0x108bf1f2u); f_108bf2e0();
  /* 108bf1f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf1f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bf1f7 je 0x108bf21d */
  if (C.zf) goto L_108bf21d;
  /* 108bf1f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf1fc push ecx */
  push32((uint32_t)(ECX));
  /* 108bf1fd call 0x108bf570 */
  push32(0x108bf202u); f_108bf570();
  /* 108bf202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf205 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf207 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf20a push edx */
  push32((uint32_t)(EDX));
  /* 108bf20b call 0x108b47c0 */
  push32(0x108bf210u); f_108b47c0();
  /* 108bf210 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf213 mov eax, 1 */
  EAX = (0x1u);
  /* 108bf218 jmp 0x108bf2dc */
  goto L_108bf2dc;
L_108bf21d:;
  /* 108bf21d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf220 mov ecx, dword ptr [0x108ded88] */
  ECX = (r32((uint32_t)(0x108ded88)));
  /* 108bf226 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108bf228 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108bf22a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf22d mov ecx, dword ptr [0x108ded88] */
  ECX = (r32((uint32_t)(0x108ded88)));
  /* 108bf233 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108bf236 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108bf239 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf23c mov ecx, dword ptr [0x108ded88] */
  ECX = (r32((uint32_t)(0x108ded88)));
  /* 108bf242 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108bf245 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 108bf248 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf24b mov dword ptr [0x108ded88], eax */
  w32((uint32_t)(0x108ded88), (EAX));
  /* 108bf250 mov ecx, dword ptr [0x108df7ac] */
  ECX = (r32((uint32_t)(0x108df7ac)));
  /* 108bf256 push ecx */
  push32((uint32_t)(ECX));
  /* 108bf257 call 0x108bf570 */
  push32(0x108bf25cu); f_108bf570();
  /* 108bf25c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf25f push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf261 mov edx, dword ptr [0x108df7ac] */
  EDX = (r32((uint32_t)(0x108df7ac)));
  /* 108bf267 push edx */
  push32((uint32_t)(EDX));
  /* 108bf268 call 0x108b47c0 */
  push32(0x108bf26du); f_108b47c0();
  /* 108bf26d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf270 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf273 mov dword ptr [0x108df7ac], eax */
  w32((uint32_t)(0x108df7ac), (EAX));
  /* 108bf278 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bf27a jmp 0x108bf2dc */
  goto L_108bf2dc;
L_108bf27c:;
  /* 108bf27c mov ecx, dword ptr [0x108ded88] */
  ECX = (r32((uint32_t)(0x108ded88)));
  /* 108bf282 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108bf284 mov dword ptr [0x108ded58], edx */
  w32((uint32_t)(0x108ded58), (EDX));
  /* 108bf28a mov eax, dword ptr [0x108ded88] */
  EAX = (r32((uint32_t)(0x108ded88)));
  /* 108bf28f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108bf292 mov dword ptr [0x108ded5c], ecx */
  w32((uint32_t)(0x108ded5c), (ECX));
  /* 108bf298 mov edx, dword ptr [0x108ded88] */
  EDX = (r32((uint32_t)(0x108ded88)));
  /* 108bf29e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108bf2a1 mov dword ptr [0x108ded60], eax */
  w32((uint32_t)(0x108ded60), (EAX));
  /* 108bf2a6 mov dword ptr [0x108ded88], 0x108ded58 */
  w32((uint32_t)(0x108ded88), (0x108ded58u));
  /* 108bf2b0 mov ecx, dword ptr [0x108df7ac] */
  ECX = (r32((uint32_t)(0x108df7ac)));
  /* 108bf2b6 push ecx */
  push32((uint32_t)(ECX));
  /* 108bf2b7 call 0x108bf570 */
  push32(0x108bf2bcu); f_108bf570();
  /* 108bf2bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf2bf push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf2c1 mov edx, dword ptr [0x108df7ac] */
  EDX = (r32((uint32_t)(0x108df7ac)));
  /* 108bf2c7 push edx */
  push32((uint32_t)(EDX));
  /* 108bf2c8 call 0x108b47c0 */
  push32(0x108bf2cdu); f_108b47c0();
  /* 108bf2cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf2d0 mov dword ptr [0x108df7ac], 0 */
  w32((uint32_t)(0x108df7ac), (0x0u));
  /* 108bf2da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108bf2dc:;
  /* 108bf2dc mov esp, ebp */
  ESP = (EBP);
  /* 108bf2de pop ebp */
  EBP = (pop32());
  /* 108bf2df ret  */
  ESPCHK(0x108bf1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2e0 @ 0x108bf2e0 (525 bytes, 200 insns) */
void f_108bf2e0(void) {
  FTRACE(0x108bf2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bf2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bf2e1 mov ebp, esp */
  EBP = (ESP);
  /* 108bf2e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bf2e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108bf2ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bf2ef mov ax, word ptr [0x108df7cc] */
  AX = (r16((uint32_t)(0x108df7cc)));
  /* 108bf2f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108bf2f8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf2fc jne 0x108bf306 */
  if (!C.zf) goto L_108bf306;
  /* 108bf2fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bf301 jmp 0x108bf4e9 */
  goto L_108bf4e9;
L_108bf306:;
  /* 108bf306 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf309 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf30c push ecx */
  push32((uint32_t)(ECX));
  /* 108bf30d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 108bf30f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf312 push edx */
  push32((uint32_t)(EDX));
  /* 108bf313 push 1 */
  push32((uint32_t)(0x1u));
  /* 108bf315 call 0x108c1ef0 */
  push32(0x108bf31au); f_108c1ef0();
  /* 108bf31a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf31d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bf320 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bf322 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bf325 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf328 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf32b push edx */
  push32((uint32_t)(EDX));
  /* 108bf32c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 108bf32e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf331 push eax */
  push32((uint32_t)(EAX));
  /* 108bf332 push 1 */
  push32((uint32_t)(0x1u));
  /* 108bf334 call 0x108c1ef0 */
  push32(0x108bf339u); f_108c1ef0();
  /* 108bf339 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf33c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bf33f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bf341 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bf344 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf347 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf34a push edx */
  push32((uint32_t)(EDX));
  /* 108bf34b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 108bf34d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf350 push eax */
  push32((uint32_t)(EAX));
  /* 108bf351 push 1 */
  push32((uint32_t)(0x1u));
  /* 108bf353 call 0x108c1ef0 */
  push32(0x108bf358u); f_108c1ef0();
  /* 108bf358 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf35b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bf35e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bf360 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bf363 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf366 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf369 push edx */
  push32((uint32_t)(EDX));
  /* 108bf36a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 108bf36c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf36f push eax */
  push32((uint32_t)(EAX));
  /* 108bf370 push 1 */
  push32((uint32_t)(0x1u));
  /* 108bf372 call 0x108c1ef0 */
  push32(0x108bf377u); f_108c1ef0();
  /* 108bf377 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf37a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bf37d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bf37f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bf382 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf385 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf388 push edx */
  push32((uint32_t)(EDX));
  /* 108bf389 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 108bf38b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf38e push eax */
  push32((uint32_t)(EAX));
  /* 108bf38f push 1 */
  push32((uint32_t)(0x1u));
  /* 108bf391 call 0x108c1ef0 */
  push32(0x108bf396u); f_108c1ef0();
  /* 108bf396 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf399 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bf39c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bf39e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bf3a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf3a4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 108bf3a7 push eax */
  push32((uint32_t)(EAX));
  /* 108bf3a8 call 0x108bf4f0 */
  push32(0x108bf3adu); f_108bf4f0();
  /* 108bf3ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf3b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf3b3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf3b6 push ecx */
  push32((uint32_t)(ECX));
  /* 108bf3b7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 108bf3b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf3bc push edx */
  push32((uint32_t)(EDX));
  /* 108bf3bd push 1 */
  push32((uint32_t)(0x1u));
  /* 108bf3bf call 0x108c1ef0 */
  push32(0x108bf3c4u); f_108c1ef0();
  /* 108bf3c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf3c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bf3ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bf3cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bf3cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf3d2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf3d5 push edx */
  push32((uint32_t)(EDX));
  /* 108bf3d6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 108bf3d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf3db push eax */
  push32((uint32_t)(EAX));
  /* 108bf3dc push 1 */
  push32((uint32_t)(0x1u));
  /* 108bf3de call 0x108c1ef0 */
  push32(0x108bf3e3u); f_108c1ef0();
  /* 108bf3e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf3e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bf3e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bf3eb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bf3ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf3f1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf3f4 push edx */
  push32((uint32_t)(EDX));
  /* 108bf3f5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 108bf3f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf3fa push eax */
  push32((uint32_t)(EAX));
  /* 108bf3fb push 0 */
  push32((uint32_t)(0x0u));
  /* 108bf3fd call 0x108c1ef0 */
  push32(0x108bf402u); f_108c1ef0();
  /* 108bf402 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf405 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bf408 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bf40a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bf40d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf410 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf413 push edx */
  push32((uint32_t)(EDX));
  /* 108bf414 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108bf416 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf419 push eax */
  push32((uint32_t)(EAX));
  /* 108bf41a push 0 */
  push32((uint32_t)(0x0u));
  /* 108bf41c call 0x108c1ef0 */
  push32(0x108bf421u); f_108c1ef0();
  /* 108bf421 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf424 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bf427 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bf429 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bf42c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf42f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf432 push edx */
  push32((uint32_t)(EDX));
  /* 108bf433 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 108bf435 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf438 push eax */
  push32((uint32_t)(EAX));
  /* 108bf439 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bf43b call 0x108c1ef0 */
  push32(0x108bf440u); f_108c1ef0();
  /* 108bf440 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf443 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bf446 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bf448 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bf44b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf44e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf451 push edx */
  push32((uint32_t)(EDX));
  /* 108bf452 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 108bf454 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf457 push eax */
  push32((uint32_t)(EAX));
  /* 108bf458 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bf45a call 0x108c1ef0 */
  push32(0x108bf45fu); f_108c1ef0();
  /* 108bf45f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf462 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bf465 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bf467 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bf46a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf46d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf470 push edx */
  push32((uint32_t)(EDX));
  /* 108bf471 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 108bf473 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf476 push eax */
  push32((uint32_t)(EAX));
  /* 108bf477 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bf479 call 0x108c1ef0 */
  push32(0x108bf47eu); f_108c1ef0();
  /* 108bf47e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf481 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bf484 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bf486 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bf489 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf48c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf48f push edx */
  push32((uint32_t)(EDX));
  /* 108bf490 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 108bf492 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf495 push eax */
  push32((uint32_t)(EAX));
  /* 108bf496 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bf498 call 0x108c1ef0 */
  push32(0x108bf49du); f_108c1ef0();
  /* 108bf49d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf4a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bf4a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bf4a5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bf4a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf4ab add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf4ae push edx */
  push32((uint32_t)(EDX));
  /* 108bf4af push 0x52 */
  push32((uint32_t)(0x52u));
  /* 108bf4b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf4b4 push eax */
  push32((uint32_t)(EAX));
  /* 108bf4b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bf4b7 call 0x108c1ef0 */
  push32(0x108bf4bcu); f_108c1ef0();
  /* 108bf4bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf4bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bf4c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bf4c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bf4c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf4ca add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf4cd push edx */
  push32((uint32_t)(EDX));
  /* 108bf4ce push 0x53 */
  push32((uint32_t)(0x53u));
  /* 108bf4d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf4d3 push eax */
  push32((uint32_t)(EAX));
  /* 108bf4d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bf4d6 call 0x108c1ef0 */
  push32(0x108bf4dbu); f_108c1ef0();
  /* 108bf4db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf4de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bf4e1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108bf4e3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108bf4e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_108bf4e9:;
  /* 108bf4e9 mov esp, ebp */
  ESP = (EBP);
  /* 108bf4eb pop ebp */
  EBP = (pop32());
  /* 108bf4ec ret  */
  ESPCHK(0x108bf2e0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x108bf4f0 (125 bytes, 49 insns) */
void f_108bf4f0(void) {
  FTRACE(0x108bf4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bf4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bf4f1 mov ebp, esp */
  EBP = (ESP);
  /* 108bf4f3 push ecx */
  push32((uint32_t)(ECX));
L_108bf4f4:;
  /* 108bf4f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf4f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108bf4fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bf4fc je 0x108bf569 */
  if (C.zf) goto L_108bf569;
  /* 108bf4fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf501 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108bf504 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf507 jl 0x108bf52d */
  if ((C.sf!=C.of)) goto L_108bf52d;
  /* 108bf509 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf50c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108bf50f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf512 jg 0x108bf52d */
  if ((!C.zf&&C.sf==C.of)) goto L_108bf52d;
  /* 108bf514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf517 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108bf51a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bf51d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf520 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 108bf522 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf525 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf528 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108bf52b jmp 0x108bf567 */
  goto L_108bf567;
L_108bf52d:;
  /* 108bf52d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf530 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108bf533 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf536 jne 0x108bf55e */
  if (!C.zf) goto L_108bf55e;
  /* 108bf538 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf53b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108bf53e:;
  /* 108bf53e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf541 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf544 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 108bf547 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108bf549 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf54c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf54f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108bf552 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bf555 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108bf558 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bf55a jne 0x108bf53e */
  if (!C.zf) goto L_108bf53e;
  /* 108bf55c jmp 0x108bf567 */
  goto L_108bf567;
L_108bf55e:;
  /* 108bf55e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf561 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf564 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_108bf567:;
  /* 108bf567 jmp 0x108bf4f4 */
  goto L_108bf4f4;
L_108bf569:;
  /* 108bf569 mov esp, ebp */
  ESP = (EBP);
  /* 108bf56b pop ebp */
  EBP = (pop32());
  /* 108bf56c ret  */
  ESPCHK(0x108bf4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f570 @ 0x108bf570 (147 bytes, 52 insns) */
void f_108bf570(void) {
  FTRACE(0x108bf570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bf570 push ebp */
  push32((uint32_t)(EBP));
  /* 108bf571 mov ebp, esp */
  EBP = (ESP);
  /* 108bf573 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf577 jne 0x108bf57e */
  if (!C.zf) goto L_108bf57e;
  /* 108bf579 jmp 0x108bf601 */
  goto L_108bf601;
L_108bf57e:;
  /* 108bf57e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf581 cmp dword ptr [eax + 0xc], 0x108df808 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x108df808u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf588 je 0x108bf601 */
  if (C.zf) goto L_108bf601;
  /* 108bf58a push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf58c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf58f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108bf592 push edx */
  push32((uint32_t)(EDX));
  /* 108bf593 call 0x108b47c0 */
  push32(0x108bf598u); f_108b47c0();
  /* 108bf598 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf59b push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf59d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf5a0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108bf5a3 push ecx */
  push32((uint32_t)(ECX));
  /* 108bf5a4 call 0x108b47c0 */
  push32(0x108bf5a9u); f_108b47c0();
  /* 108bf5a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf5ac push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf5ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf5b1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108bf5b4 push eax */
  push32((uint32_t)(EAX));
  /* 108bf5b5 call 0x108b47c0 */
  push32(0x108bf5bau); f_108b47c0();
  /* 108bf5ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf5bd push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf5bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf5c2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 108bf5c5 push edx */
  push32((uint32_t)(EDX));
  /* 108bf5c6 call 0x108b47c0 */
  push32(0x108bf5cbu); f_108b47c0();
  /* 108bf5cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf5ce push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf5d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf5d3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 108bf5d6 push ecx */
  push32((uint32_t)(ECX));
  /* 108bf5d7 call 0x108b47c0 */
  push32(0x108bf5dcu); f_108b47c0();
  /* 108bf5dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf5df push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf5e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf5e4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 108bf5e7 push eax */
  push32((uint32_t)(EAX));
  /* 108bf5e8 call 0x108b47c0 */
  push32(0x108bf5edu); f_108b47c0();
  /* 108bf5ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf5f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf5f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bf5f5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 108bf5f8 push edx */
  push32((uint32_t)(EDX));
  /* 108bf5f9 call 0x108b47c0 */
  push32(0x108bf5feu); f_108b47c0();
  /* 108bf5fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bf601:;
  /* 108bf601 pop ebp */
  EBP = (pop32());
  /* 108bf602 ret  */
  ESPCHK(0x108bf570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f610 @ 0x108bf610 (928 bytes, 284 insns) */
void f_108bf610(void) {
  FTRACE(0x108bf610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bf610 push ebp */
  push32((uint32_t)(EBP));
  /* 108bf611 mov ebp, esp */
  EBP = (ESP);
  /* 108bf613 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bf616 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 108bf61d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 108bf624 cmp dword ptr [0x108df770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf62b je 0x108bf961 */
  if (C.zf) goto L_108bf961;
  /* 108bf631 cmp dword ptr [0x108df780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf638 jne 0x108bf660 */
  if (!C.zf) goto L_108bf660;
  /* 108bf63a push 0x108df780 */
  push32((uint32_t)(0x108df780u));
  /* 108bf63f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 108bf644 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bf646 mov ax, word ptr [0x108df7c4] */
  AX = (r16((uint32_t)(0x108df7c4)));
  /* 108bf64c push eax */
  push32((uint32_t)(EAX));
  /* 108bf64d push 0 */
  push32((uint32_t)(0x0u));
  /* 108bf64f call 0x108c1ef0 */
  push32(0x108bf654u); f_108c1ef0();
  /* 108bf654 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf657 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bf659 je 0x108bf660 */
  if (C.zf) goto L_108bf660;
  /* 108bf65b jmp 0x108bf922 */
  goto L_108bf922;
L_108bf660:;
  /* 108bf660 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 108bf662 push 0x108db0cc */
  push32((uint32_t)(0x108db0ccu));
  /* 108bf667 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf669 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 108bf66e call 0x108b3d30 */
  push32(0x108bf673u); f_108b3d30();
  /* 108bf673 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf676 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 108bf679 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 108bf67b push 0x108db0cc */
  push32((uint32_t)(0x108db0ccu));
  /* 108bf680 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf682 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 108bf687 call 0x108b3d30 */
  push32(0x108bf68cu); f_108b3d30();
  /* 108bf68c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf68f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 108bf692 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 108bf694 push 0x108db0cc */
  push32((uint32_t)(0x108db0ccu));
  /* 108bf699 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf69b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 108bf6a0 call 0x108b3d30 */
  push32(0x108bf6a5u); f_108b3d30();
  /* 108bf6a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf6a8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 108bf6ab push 0x62 */
  push32((uint32_t)(0x62u));
  /* 108bf6ad push 0x108db0cc */
  push32((uint32_t)(0x108db0ccu));
  /* 108bf6b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf6b4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 108bf6b9 call 0x108b3d30 */
  push32(0x108bf6beu); f_108b3d30();
  /* 108bf6be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf6c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108bf6c4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf6c8 je 0x108bf6dc */
  if (C.zf) goto L_108bf6dc;
  /* 108bf6ca cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf6ce je 0x108bf6dc */
  if (C.zf) goto L_108bf6dc;
  /* 108bf6d0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf6d4 je 0x108bf6dc */
  if (C.zf) goto L_108bf6dc;
  /* 108bf6d6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf6da jne 0x108bf6e1 */
  if (!C.zf) goto L_108bf6e1;
L_108bf6dc:;
  /* 108bf6dc jmp 0x108bf922 */
  goto L_108bf922;
L_108bf6e1:;
  /* 108bf6e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108bf6e4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 108bf6e7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 108bf6ee jmp 0x108bf6f9 */
  goto L_108bf6f9;
L_108bf6f0:;
  /* 108bf6f0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bf6f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf6f6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_108bf6f9:;
  /* 108bf6f9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf700 jge 0x108bf715 */
  if ((C.sf==C.of)) goto L_108bf715;
  /* 108bf702 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108bf705 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 108bf708 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 108bf70a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108bf70d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf710 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108bf713 jmp 0x108bf6f0 */
  goto L_108bf6f0;
L_108bf715:;
  /* 108bf715 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 108bf718 push eax */
  push32((uint32_t)(EAX));
  /* 108bf719 mov ecx, dword ptr [0x108df780] */
  ECX = (r32((uint32_t)(0x108df780)));
  /* 108bf71f push ecx */
  push32((uint32_t)(ECX));
  /* 108bf720 call dword ptr [0x108e22ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22ec))), 0x108bf726u);
  /* 108bf726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bf728 jne 0x108bf72f */
  if (!C.zf) goto L_108bf72f;
  /* 108bf72a jmp 0x108bf922 */
  goto L_108bf922;
L_108bf72f:;
  /* 108bf72f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf733 jbe 0x108bf73a */
  if ((C.cf||C.zf)) goto L_108bf73a;
  /* 108bf735 jmp 0x108bf922 */
  goto L_108bf922;
L_108bf73a:;
  /* 108bf73a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108bf73d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108bf743 mov dword ptr [0x108ddea4], edx */
  w32((uint32_t)(0x108ddea4), (EDX));
  /* 108bf749 cmp dword ptr [0x108ddea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108ddea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf750 jle 0x108bf7a9 */
  if ((C.zf||C.sf!=C.of)) goto L_108bf7a9;
  /* 108bf752 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 108bf755 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108bf758 jmp 0x108bf763 */
  goto L_108bf763;
L_108bf75a:;
  /* 108bf75a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108bf75d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf760 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_108bf763:;
  /* 108bf763 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108bf766 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bf768 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108bf76a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bf76c je 0x108bf7a9 */
  if (C.zf) goto L_108bf7a9;
  /* 108bf76e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108bf771 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108bf773 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 108bf776 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bf778 je 0x108bf7a9 */
  if (C.zf) goto L_108bf7a9;
  /* 108bf77a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108bf77d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108bf77f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108bf781 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 108bf784 jmp 0x108bf78f */
  goto L_108bf78f;
L_108bf786:;
  /* 108bf786 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bf789 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf78c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_108bf78f:;
  /* 108bf78f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108bf792 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108bf794 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 108bf797 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf79a jg 0x108bf7a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_108bf7a7;
  /* 108bf79c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108bf79f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf7a2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 108bf7a5 jmp 0x108bf786 */
  goto L_108bf786;
L_108bf7a7:;
  /* 108bf7a7 jmp 0x108bf75a */
  goto L_108bf75a;
L_108bf7a9:;
  /* 108bf7a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bf7ab push 0 */
  push32((uint32_t)(0x0u));
  /* 108bf7ad push 0 */
  push32((uint32_t)(0x0u));
  /* 108bf7af mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108bf7b2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf7b5 push eax */
  push32((uint32_t)(EAX));
  /* 108bf7b6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108bf7bb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108bf7be push ecx */
  push32((uint32_t)(ECX));
  /* 108bf7bf push 1 */
  push32((uint32_t)(0x1u));
  /* 108bf7c1 call 0x108bbf60 */
  push32(0x108bf7c6u); f_108bbf60();
  /* 108bf7c6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf7c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bf7cb jne 0x108bf7d2 */
  if (!C.zf) goto L_108bf7d2;
  /* 108bf7cd jmp 0x108bf922 */
  goto L_108bf922;
L_108bf7d2:;
  /* 108bf7d2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108bf7d5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 108bf7da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108bf7dd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108bf7e0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 108bf7e7 jmp 0x108bf7f2 */
  goto L_108bf7f2;
L_108bf7e9:;
  /* 108bf7e9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bf7ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf7ef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_108bf7f2:;
  /* 108bf7f2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf7f9 jge 0x108bf810 */
  if ((C.sf==C.of)) goto L_108bf810;
  /* 108bf7fb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108bf7fe mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 108bf802 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 108bf805 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108bf808 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf80b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 108bf80e jmp 0x108bf7e9 */
  goto L_108bf7e9;
L_108bf810:;
  /* 108bf810 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bf812 push 0 */
  push32((uint32_t)(0x0u));
  /* 108bf814 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108bf817 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf81a push edx */
  push32((uint32_t)(EDX));
  /* 108bf81b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108bf820 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108bf823 push eax */
  push32((uint32_t)(EAX));
  /* 108bf824 push 1 */
  push32((uint32_t)(0x1u));
  /* 108bf826 call 0x108c2190 */
  push32(0x108bf82bu); f_108c2190();
  /* 108bf82b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf82e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bf830 jne 0x108bf837 */
  if (!C.zf) goto L_108bf837;
  /* 108bf832 jmp 0x108bf922 */
  goto L_108bf922;
L_108bf837:;
  /* 108bf837 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108bf83a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 108bf83f cmp dword ptr [0x108ddea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108ddea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf846 jle 0x108bf8a3 */
  if ((C.zf||C.sf!=C.of)) goto L_108bf8a3;
  /* 108bf848 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 108bf84b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108bf84e jmp 0x108bf859 */
  goto L_108bf859;
L_108bf850:;
  /* 108bf850 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108bf853 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf856 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_108bf859:;
  /* 108bf859 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108bf85c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108bf85e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108bf860 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bf862 je 0x108bf8a3 */
  if (C.zf) goto L_108bf8a3;
  /* 108bf864 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108bf867 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108bf869 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 108bf86c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bf86e je 0x108bf8a3 */
  if (C.zf) goto L_108bf8a3;
  /* 108bf870 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108bf873 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bf875 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108bf877 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108bf87a jmp 0x108bf885 */
  goto L_108bf885;
L_108bf87c:;
  /* 108bf87c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bf87f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf882 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_108bf885:;
  /* 108bf885 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108bf888 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bf88a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 108bf88d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf890 jg 0x108bf8a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_108bf8a1;
  /* 108bf892 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108bf895 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108bf898 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 108bf89f jmp 0x108bf87c */
  goto L_108bf87c;
L_108bf8a1:;
  /* 108bf8a1 jmp 0x108bf850 */
  goto L_108bf850;
L_108bf8a3:;
  /* 108bf8a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108bf8a6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf8a9 mov dword ptr [0x108ddc98], eax */
  w32((uint32_t)(0x108ddc98), (EAX));
  /* 108bf8ae mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108bf8b1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf8b4 mov dword ptr [0x108ddc9c], ecx */
  w32((uint32_t)(0x108ddc9c), (ECX));
  /* 108bf8ba cmp dword ptr [0x108df7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf8c1 je 0x108bf8d4 */
  if (C.zf) goto L_108bf8d4;
  /* 108bf8c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf8c5 mov edx, dword ptr [0x108df7b0] */
  EDX = (r32((uint32_t)(0x108df7b0)));
  /* 108bf8cb push edx */
  push32((uint32_t)(EDX));
  /* 108bf8cc call 0x108b47c0 */
  push32(0x108bf8d1u); f_108b47c0();
  /* 108bf8d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bf8d4:;
  /* 108bf8d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 108bf8d7 mov dword ptr [0x108df7b0], eax */
  w32((uint32_t)(0x108df7b0), (EAX));
  /* 108bf8dc cmp dword ptr [0x108df7b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bf8e3 je 0x108bf8f6 */
  if (C.zf) goto L_108bf8f6;
  /* 108bf8e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf8e7 mov ecx, dword ptr [0x108df7b4] */
  ECX = (r32((uint32_t)(0x108df7b4)));
  /* 108bf8ed push ecx */
  push32((uint32_t)(ECX));
  /* 108bf8ee call 0x108b47c0 */
  push32(0x108bf8f3u); f_108b47c0();
  /* 108bf8f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bf8f6:;
  /* 108bf8f6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108bf8f9 mov dword ptr [0x108df7b4], edx */
  w32((uint32_t)(0x108df7b4), (EDX));
  /* 108bf8ff push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf901 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108bf904 push eax */
  push32((uint32_t)(EAX));
  /* 108bf905 call 0x108b47c0 */
  push32(0x108bf90au); f_108b47c0();
  /* 108bf90a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf90d push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf90f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108bf912 push ecx */
  push32((uint32_t)(ECX));
  /* 108bf913 call 0x108b47c0 */
  push32(0x108bf918u); f_108b47c0();
  /* 108bf918 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf91b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bf91d jmp 0x108bf9ac */
  goto L_108bf9ac;
L_108bf922:;
  /* 108bf922 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf924 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 108bf927 push edx */
  push32((uint32_t)(EDX));
  /* 108bf928 call 0x108b47c0 */
  push32(0x108bf92du); f_108b47c0();
  /* 108bf92d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf930 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf932 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108bf935 push eax */
  push32((uint32_t)(EAX));
  /* 108bf936 call 0x108b47c0 */
  push32(0x108bf93bu); f_108b47c0();
  /* 108bf93b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf93e push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf940 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108bf943 push ecx */
  push32((uint32_t)(ECX));
  /* 108bf944 call 0x108b47c0 */
  push32(0x108bf949u); f_108b47c0();
  /* 108bf949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf94c push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf94e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108bf951 push edx */
  push32((uint32_t)(EDX));
  /* 108bf952 call 0x108b47c0 */
  push32(0x108bf957u); f_108b47c0();
  /* 108bf957 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf95a mov eax, 1 */
  EAX = (0x1u);
  /* 108bf95f jmp 0x108bf9ac */
  goto L_108bf9ac;
L_108bf961:;
  /* 108bf961 mov dword ptr [0x108ddc98], 0x108ddca2 */
  w32((uint32_t)(0x108ddc98), (0x108ddca2u));
  /* 108bf96b mov dword ptr [0x108ddc9c], 0x108ddca2 */
  w32((uint32_t)(0x108ddc9c), (0x108ddca2u));
  /* 108bf975 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf977 mov eax, dword ptr [0x108df7b0] */
  EAX = (r32((uint32_t)(0x108df7b0)));
  /* 108bf97c push eax */
  push32((uint32_t)(EAX));
  /* 108bf97d call 0x108b47c0 */
  push32(0x108bf982u); f_108b47c0();
  /* 108bf982 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf985 push 2 */
  push32((uint32_t)(0x2u));
  /* 108bf987 mov ecx, dword ptr [0x108df7b4] */
  ECX = (r32((uint32_t)(0x108df7b4)));
  /* 108bf98d push ecx */
  push32((uint32_t)(ECX));
  /* 108bf98e call 0x108b47c0 */
  push32(0x108bf993u); f_108b47c0();
  /* 108bf993 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf996 mov dword ptr [0x108df7b0], 0 */
  w32((uint32_t)(0x108df7b0), (0x0u));
  /* 108bf9a0 mov dword ptr [0x108df7b4], 0 */
  w32((uint32_t)(0x108df7b4), (0x0u));
  /* 108bf9aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108bf9ac:;
  /* 108bf9ac mov esp, ebp */
  ESP = (EBP);
  /* 108bf9ae pop ebp */
  EBP = (pop32());
  /* 108bf9af ret  */
  ESPCHK(0x108bf610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9b0 @ 0x108bf9b0 (7 bytes, 5 insns) */
void f_108bf9b0(void) {
  FTRACE(0x108bf9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bf9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bf9b1 mov ebp, esp */
  EBP = (ESP);
  /* 108bf9b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bf9b5 pop ebp */
  EBP = (pop32());
  /* 108bf9b6 ret  */
  ESPCHK(0x108bf9b0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x108bf9c0 (129 bytes, 56 insns) */
void f_108bf9c0(void) {
  FTRACE(0x108bf9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bf9c0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 108bf9c4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 108bf9c8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 108bf9ce jne 0x108bfa0c */
  if (!C.zf) goto L_108bfa0c;
L_108bf9d0:;
  /* 108bf9d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108bf9d2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108bf9d4 jne 0x108bfa04 */
  if (!C.zf) goto L_108bfa04;
  /* 108bf9d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 108bf9d8 je 0x108bfa00 */
  if (C.zf) goto L_108bfa00;
  /* 108bf9da cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108bf9dd jne 0x108bfa04 */
  if (!C.zf) goto L_108bfa04;
  /* 108bf9df or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 108bf9e1 je 0x108bfa00 */
  if (C.zf) goto L_108bfa00;
  /* 108bf9e3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 108bf9e6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108bf9e9 jne 0x108bfa04 */
  if (!C.zf) goto L_108bfa04;
  /* 108bf9eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 108bf9ed je 0x108bfa00 */
  if (C.zf) goto L_108bfa00;
  /* 108bf9ef cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108bf9f2 jne 0x108bfa04 */
  if (!C.zf) goto L_108bfa04;
  /* 108bf9f4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf9f7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bf9fa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 108bf9fc jne 0x108bf9d0 */
  if (!C.zf) goto L_108bf9d0;
  /* 108bf9fe mov edi, edi */
  EDI = (EDI);
L_108bfa00:;
  /* 108bfa00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bfa02 ret  */
  ESPCHK(0x108bf9c0u, _esp0);
  ESP += 4; return;
  /* 108bfa03 nop  */
  /* nop */
L_108bfa04:;
  /* 108bfa04 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bfa06 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108bfa08 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 108bfa09 ret  */
  ESPCHK(0x108bf9c0u, _esp0);
  ESP += 4; return;
  /* 108bfa0a mov edi, edi */
  EDI = (EDI);
L_108bfa0c:;
  /* 108bfa0c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 108bfa12 je 0x108bfa28 */
  if (C.zf) goto L_108bfa28;
  /* 108bfa14 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108bfa16 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 108bfa17 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108bfa19 jne 0x108bfa04 */
  if (!C.zf) goto L_108bfa04;
  /* 108bfa1b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 108bfa1c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 108bfa1e je 0x108bfa00 */
  if (C.zf) goto L_108bfa00;
  /* 108bfa20 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 108bfa26 je 0x108bf9d0 */
  if (C.zf) goto L_108bf9d0;
L_108bfa28:;
  /* 108bfa28 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 108bfa2b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfa2e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108bfa30 jne 0x108bfa04 */
  if (!C.zf) goto L_108bfa04;
  /* 108bfa32 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 108bfa34 je 0x108bfa00 */
  if (C.zf) goto L_108bfa00;
  /* 108bfa36 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108bfa39 jne 0x108bfa04 */
  if (!C.zf) goto L_108bfa04;
  /* 108bfa3b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 108bfa3d je 0x108bfa00 */
  if (C.zf) goto L_108bfa00;
  /* 108bfa3f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfa42 jmp 0x108bf9d0 */
  goto L_108bf9d0;
}

/* FUN_1000fa50 @ 0x108bfa50 (62 bytes, 35 insns) */
void f_108bfa50(void) {
  FTRACE(0x108bfa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bfa50 push ebp */
  push32((uint32_t)(EBP));
  /* 108bfa51 mov ebp, esp */
  EBP = (ESP);
  /* 108bfa53 push esi */
  push32((uint32_t)(ESI));
  /* 108bfa54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bfa56 push eax */
  push32((uint32_t)(EAX));
  /* 108bfa57 push eax */
  push32((uint32_t)(EAX));
  /* 108bfa58 push eax */
  push32((uint32_t)(EAX));
  /* 108bfa59 push eax */
  push32((uint32_t)(EAX));
  /* 108bfa5a push eax */
  push32((uint32_t)(EAX));
  /* 108bfa5b push eax */
  push32((uint32_t)(EAX));
  /* 108bfa5c push eax */
  push32((uint32_t)(EAX));
  /* 108bfa5d push eax */
  push32((uint32_t)(EAX));
  /* 108bfa5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bfa61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108bfa64:;
  /* 108bfa64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108bfa66 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 108bfa68 je 0x108bfa71 */
  if (C.zf) goto L_108bfa71;
  /* 108bfa6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 108bfa6b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x108bfa6b");
  /* 108bfa6f jmp 0x108bfa64 */
  goto L_108bfa64;
L_108bfa71:;
  /* 108bfa71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 108bfa74 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108bfa77 nop  */
  /* nop */
L_108bfa78:;
  /* 108bfa78 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 108bfa79 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108bfa7b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 108bfa7d je 0x108bfa86 */
  if (C.zf) goto L_108bfa86;
  /* 108bfa7f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 108bfa80 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x108bfa80");
  /* 108bfa84 jae 0x108bfa78 */
  if (!C.cf) goto L_108bfa78;
L_108bfa86:;
  /* 108bfa86 mov eax, ecx */
  EAX = (ECX);
  /* 108bfa88 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfa8b pop esi */
  ESI = (pop32());
  /* 108bfa8c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108bfa8d ret  */
  ESPCHK(0x108bfa50u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x108bfa90 (56 bytes, 31 insns) */
void f_108bfa90(void) {
  FTRACE(0x108bfa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bfa90 push ebp */
  push32((uint32_t)(EBP));
  /* 108bfa91 mov ebp, esp */
  EBP = (ESP);
  /* 108bfa93 push edi */
  push32((uint32_t)(EDI));
  /* 108bfa94 push esi */
  push32((uint32_t)(ESI));
  /* 108bfa95 push ebx */
  push32((uint32_t)(EBX));
  /* 108bfa96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bfa99 jecxz 0x108bfac1 */
  x86_unimpl("jecxz @ 0x108bfa99");
  /* 108bfa9b mov ebx, ecx */
  EBX = (ECX);
  /* 108bfa9d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 108bfaa0 mov esi, edi */
  ESI = (EDI);
  /* 108bfaa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bfaa4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 108bfaa6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108bfaa8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfaaa mov edi, esi */
  EDI = (ESI);
  /* 108bfaac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 108bfaaf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 108bfab1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 108bfab4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108bfab6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108bfab9 ja 0x108bfabf */
  if ((!C.cf&&!C.zf)) goto L_108bfabf;
  /* 108bfabb je 0x108bfac1 */
  if (C.zf) goto L_108bfac1;
  /* 108bfabd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 108bfabe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_108bfabf:;
  /* 108bfabf not ecx */
  ECX = (~(ECX));
L_108bfac1:;
  /* 108bfac1 mov eax, ecx */
  EAX = (ECX);
  /* 108bfac3 pop ebx */
  EBX = (pop32());
  /* 108bfac4 pop esi */
  ESI = (pop32());
  /* 108bfac5 pop edi */
  EDI = (pop32());
  /* 108bfac6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108bfac7 ret  */
  ESPCHK(0x108bfa90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fad0 @ 0x108bfad0 (58 bytes, 32 insns) */
void f_108bfad0(void) {
  FTRACE(0x108bfad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bfad0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bfad1 mov ebp, esp */
  EBP = (ESP);
  /* 108bfad3 push esi */
  push32((uint32_t)(ESI));
  /* 108bfad4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bfad6 push eax */
  push32((uint32_t)(EAX));
  /* 108bfad7 push eax */
  push32((uint32_t)(EAX));
  /* 108bfad8 push eax */
  push32((uint32_t)(EAX));
  /* 108bfad9 push eax */
  push32((uint32_t)(EAX));
  /* 108bfada push eax */
  push32((uint32_t)(EAX));
  /* 108bfadb push eax */
  push32((uint32_t)(EAX));
  /* 108bfadc push eax */
  push32((uint32_t)(EAX));
  /* 108bfadd push eax */
  push32((uint32_t)(EAX));
  /* 108bfade mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bfae1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108bfae4:;
  /* 108bfae4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108bfae6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 108bfae8 je 0x108bfaf1 */
  if (C.zf) goto L_108bfaf1;
  /* 108bfaea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 108bfaeb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x108bfaeb");
  /* 108bfaef jmp 0x108bfae4 */
  goto L_108bfae4;
L_108bfaf1:;
  /* 108bfaf1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_108bfaf4:;
  /* 108bfaf4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108bfaf6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 108bfaf8 je 0x108bfb04 */
  if (C.zf) goto L_108bfb04;
  /* 108bfafa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 108bfafb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x108bfafb");
  /* 108bfaff jae 0x108bfaf4 */
  if (!C.cf) goto L_108bfaf4;
  /* 108bfb01 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_108bfb04:;
  /* 108bfb04 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfb07 pop esi */
  ESI = (pop32());
  /* 108bfb08 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108bfb09 ret  */
  ESPCHK(0x108bfad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb10 @ 0x108bfb10 (512 bytes, 147 insns) */
void f_108bfb10(void) {
  FTRACE(0x108bfb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bfb10 push ebp */
  push32((uint32_t)(EBP));
  /* 108bfb11 mov ebp, esp */
  EBP = (ESP);
  /* 108bfb13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bfb16 cmp dword ptr [0x108df7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bfb1d jne 0x108bfb42 */
  if (!C.zf) goto L_108bfb42;
  /* 108bfb1f call 0x108c05e0 */
  push32(0x108bfb24u); f_108c05e0();
  /* 108bfb24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bfb26 je 0x108bfb32 */
  if (C.zf) goto L_108bfb32;
  /* 108bfb28 mov eax, dword ptr [0x108e22b0] */
  EAX = (r32((uint32_t)(0x108e22b0)));
  /* 108bfb2d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108bfb30 jmp 0x108bfb39 */
  goto L_108bfb39;
L_108bfb32:;
  /* 108bfb32 mov dword ptr [ebp - 8], 0x108c0630 */
  w32((uint32_t)(EBP + -0x8), (0x108c0630u));
L_108bfb39:;
  /* 108bfb39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108bfb3c mov dword ptr [0x108df7fc], ecx */
  w32((uint32_t)(0x108df7fc), (ECX));
L_108bfb42:;
  /* 108bfb42 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bfb46 jne 0x108bfb52 */
  if (!C.zf) goto L_108bfb52;
  /* 108bfb48 call 0x108c0430 */
  push32(0x108bfb4du); f_108c0430();
  /* 108bfb4d jmp 0x108bfc1e */
  goto L_108bfc1e;
L_108bfb52:;
  /* 108bfb52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bfb55 mov dword ptr [0x108df7ec], edx */
  w32((uint32_t)(0x108df7ec), (EDX));
  /* 108bfb5b cmp dword ptr [0x108df7ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bfb62 je 0x108bfb84 */
  if (C.zf) goto L_108bfb84;
  /* 108bfb64 mov eax, dword ptr [0x108df7ec] */
  EAX = (r32((uint32_t)(0x108df7ec)));
  /* 108bfb69 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108bfb6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bfb6e je 0x108bfb84 */
  if (C.zf) goto L_108bfb84;
  /* 108bfb70 push 0x108df7ec */
  push32((uint32_t)(0x108df7ecu));
  /* 108bfb75 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 108bfb77 push 0x108dea90 */
  push32((uint32_t)(0x108dea90u));
  /* 108bfb7c call 0x108bfd10 */
  push32(0x108bfb81u); f_108bfd10();
  /* 108bfb81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bfb84:;
  /* 108bfb84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bfb87 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfb8a mov dword ptr [0x108df7f0], edx */
  w32((uint32_t)(0x108df7f0), (EDX));
  /* 108bfb90 cmp dword ptr [0x108df7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bfb97 je 0x108bfbb9 */
  if (C.zf) goto L_108bfbb9;
  /* 108bfb99 mov eax, dword ptr [0x108df7f0] */
  EAX = (r32((uint32_t)(0x108df7f0)));
  /* 108bfb9e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108bfba1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bfba3 je 0x108bfbb9 */
  if (C.zf) goto L_108bfbb9;
  /* 108bfba5 push 0x108df7f0 */
  push32((uint32_t)(0x108df7f0u));
  /* 108bfbaa push 0x16 */
  push32((uint32_t)(0x16u));
  /* 108bfbac push 0x108de9d8 */
  push32((uint32_t)(0x108de9d8u));
  /* 108bfbb1 call 0x108bfd10 */
  push32(0x108bfbb6u); f_108bfd10();
  /* 108bfbb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bfbb9:;
  /* 108bfbb9 mov dword ptr [0x108df7f4], 0 */
  w32((uint32_t)(0x108df7f4), (0x0u));
  /* 108bfbc3 cmp dword ptr [0x108df7ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bfbca je 0x108bfbfd */
  if (C.zf) goto L_108bfbfd;
  /* 108bfbcc mov edx, dword ptr [0x108df7ec] */
  EDX = (r32((uint32_t)(0x108df7ec)));
  /* 108bfbd2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108bfbd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bfbd7 je 0x108bfbfd */
  if (C.zf) goto L_108bfbfd;
  /* 108bfbd9 cmp dword ptr [0x108df7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bfbe0 je 0x108bfbf6 */
  if (C.zf) goto L_108bfbf6;
  /* 108bfbe2 mov ecx, dword ptr [0x108df7f0] */
  ECX = (r32((uint32_t)(0x108df7f0)));
  /* 108bfbe8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108bfbeb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bfbed je 0x108bfbf6 */
  if (C.zf) goto L_108bfbf6;
  /* 108bfbef call 0x108bfda0 */
  push32(0x108bfbf4u); f_108bfda0();
  /* 108bfbf4 jmp 0x108bfbfb */
  goto L_108bfbfb;
L_108bfbf6:;
  /* 108bfbf6 call 0x108c0190 */
  push32(0x108bfbfbu); f_108c0190();
L_108bfbfb:;
  /* 108bfbfb jmp 0x108bfc1e */
  goto L_108bfc1e;
L_108bfbfd:;
  /* 108bfbfd cmp dword ptr [0x108df7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bfc04 je 0x108bfc19 */
  if (C.zf) goto L_108bfc19;
  /* 108bfc06 mov eax, dword ptr [0x108df7f0] */
  EAX = (r32((uint32_t)(0x108df7f0)));
  /* 108bfc0b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108bfc0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bfc10 je 0x108bfc19 */
  if (C.zf) goto L_108bfc19;
  /* 108bfc12 call 0x108c0330 */
  push32(0x108bfc17u); f_108c0330();
  /* 108bfc17 jmp 0x108bfc1e */
  goto L_108bfc1e;
L_108bfc19:;
  /* 108bfc19 call 0x108c0430 */
  push32(0x108bfc1eu); f_108c0430();
L_108bfc1e:;
  /* 108bfc1e cmp dword ptr [0x108df7f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bfc25 jne 0x108bfc2e */
  if (!C.zf) goto L_108bfc2e;
  /* 108bfc27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bfc29 jmp 0x108bfd0c */
  goto L_108bfd0c;
L_108bfc2e:;
  /* 108bfc2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bfc31 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfc37 push edx */
  push32((uint32_t)(EDX));
  /* 108bfc38 call 0x108c0460 */
  push32(0x108bfc3du); f_108c0460();
  /* 108bfc3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfc40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108bfc43 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bfc47 je 0x108bfc5c */
  if (C.zf) goto L_108bfc5c;
  /* 108bfc49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bfc4c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108bfc51 push eax */
  push32((uint32_t)(EAX));
  /* 108bfc52 call dword ptr [0x108e22b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22b4))), 0x108bfc58u);
  /* 108bfc58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bfc5a jne 0x108bfc63 */
  if (!C.zf) goto L_108bfc63;
L_108bfc5c:;
  /* 108bfc5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bfc5e jmp 0x108bfd0c */
  goto L_108bfd0c;
L_108bfc63:;
  /* 108bfc63 push 1 */
  push32((uint32_t)(0x1u));
  /* 108bfc65 mov ecx, dword ptr [0x108df7dc] */
  ECX = (r32((uint32_t)(0x108df7dc)));
  /* 108bfc6b push ecx */
  push32((uint32_t)(ECX));
  /* 108bfc6c call dword ptr [0x108e22c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22c4))), 0x108bfc72u);
  /* 108bfc72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bfc74 jne 0x108bfc7d */
  if (!C.zf) goto L_108bfc7d;
  /* 108bfc76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bfc78 jmp 0x108bfd0c */
  goto L_108bfd0c;
L_108bfc7d:;
  /* 108bfc7d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bfc81 je 0x108bfca8 */
  if (C.zf) goto L_108bfca8;
  /* 108bfc83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bfc86 mov ax, word ptr [0x108df7dc] */
  AX = (r16((uint32_t)(0x108df7dc)));
  /* 108bfc8c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 108bfc8f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bfc92 mov dx, word ptr [0x108df7f8] */
  DX = (r16((uint32_t)(0x108df7f8)));
  /* 108bfc99 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 108bfc9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108bfca0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 108bfca4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_108bfca8:;
  /* 108bfca8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bfcac je 0x108bfd07 */
  if (C.zf) goto L_108bfd07;
  /* 108bfcae push 0x40 */
  push32((uint32_t)(0x40u));
  /* 108bfcb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bfcb3 push edx */
  push32((uint32_t)(EDX));
  /* 108bfcb4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 108bfcb9 mov eax, dword ptr [0x108df7dc] */
  EAX = (r32((uint32_t)(0x108df7dc)));
  /* 108bfcbe push eax */
  push32((uint32_t)(EAX));
  /* 108bfcbf call dword ptr [0x108df7fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108df7fc))), 0x108bfcc5u);
  /* 108bfcc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bfcc7 jne 0x108bfccd */
  if (!C.zf) goto L_108bfccd;
  /* 108bfcc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bfccb jmp 0x108bfd0c */
  goto L_108bfd0c;
L_108bfccd:;
  /* 108bfccd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 108bfccf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bfcd2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfcd5 push ecx */
  push32((uint32_t)(ECX));
  /* 108bfcd6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 108bfcdb mov edx, dword ptr [0x108df7f8] */
  EDX = (r32((uint32_t)(0x108df7f8)));
  /* 108bfce1 push edx */
  push32((uint32_t)(EDX));
  /* 108bfce2 call dword ptr [0x108df7fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108df7fc))), 0x108bfce8u);
  /* 108bfce8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bfcea jne 0x108bfcf0 */
  if (!C.zf) goto L_108bfcf0;
  /* 108bfcec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108bfcee jmp 0x108bfd0c */
  goto L_108bfd0c;
L_108bfcf0:;
  /* 108bfcf0 push 0xa */
  push32((uint32_t)(0xau));
  /* 108bfcf2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bfcf5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfcfa push eax */
  push32((uint32_t)(EAX));
  /* 108bfcfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bfcfe push ecx */
  push32((uint32_t)(ECX));
  /* 108bfcff call 0x108b6870 */
  push32(0x108bfd04u); f_108b6870();
  /* 108bfd04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108bfd07:;
  /* 108bfd07 mov eax, 1 */
  EAX = (0x1u);
L_108bfd0c:;
  /* 108bfd0c mov esp, ebp */
  ESP = (EBP);
  /* 108bfd0e pop ebp */
  EBP = (pop32());
  /* 108bfd0f ret  */
  ESPCHK(0x108bfb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd10 @ 0x108bfd10 (130 bytes, 47 insns) */
void f_108bfd10(void) {
  FTRACE(0x108bfd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bfd10 push ebp */
  push32((uint32_t)(EBP));
  /* 108bfd11 mov ebp, esp */
  EBP = (ESP);
  /* 108bfd13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bfd16 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 108bfd1d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_108bfd24:;
  /* 108bfd24 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bfd27 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bfd2a jg 0x108bfd8e */
  if ((!C.zf&&C.sf==C.of)) goto L_108bfd8e;
  /* 108bfd2c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bfd30 je 0x108bfd8e */
  if (C.zf) goto L_108bfd8e;
  /* 108bfd32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108bfd35 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfd38 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108bfd39 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bfd3b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108bfd3d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108bfd40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bfd43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bfd46 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 108bfd49 push eax */
  push32((uint32_t)(EAX));
  /* 108bfd4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bfd4d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108bfd4f push edx */
  push32((uint32_t)(EDX));
  /* 108bfd50 call 0x108c2400 */
  push32(0x108bfd55u); f_108c2400();
  /* 108bfd55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfd58 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108bfd5b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bfd5f jne 0x108bfd72 */
  if (!C.zf) goto L_108bfd72;
  /* 108bfd61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bfd64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bfd67 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 108bfd6b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108bfd6e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108bfd70 jmp 0x108bfd8c */
  goto L_108bfd8c;
L_108bfd72:;
  /* 108bfd72 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bfd76 jge 0x108bfd83 */
  if ((C.sf==C.of)) goto L_108bfd83;
  /* 108bfd78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bfd7b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bfd7e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 108bfd81 jmp 0x108bfd8c */
  goto L_108bfd8c;
L_108bfd83:;
  /* 108bfd83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bfd86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfd89 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_108bfd8c:;
  /* 108bfd8c jmp 0x108bfd24 */
  goto L_108bfd24;
L_108bfd8e:;
  /* 108bfd8e mov esp, ebp */
  ESP = (EBP);
  /* 108bfd90 pop ebp */
  EBP = (pop32());
  /* 108bfd91 ret  */
  ESPCHK(0x108bfd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fda0 @ 0x108bfda0 (186 bytes, 50 insns) */
void f_108bfda0(void) {
  FTRACE(0x108bfda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bfda0 push ebp */
  push32((uint32_t)(EBP));
  /* 108bfda1 mov ebp, esp */
  EBP = (ESP);
  /* 108bfda3 push ecx */
  push32((uint32_t)(ECX));
  /* 108bfda4 mov eax, dword ptr [0x108df7ec] */
  EAX = (r32((uint32_t)(0x108df7ec)));
  /* 108bfda9 push eax */
  push32((uint32_t)(EAX));
  /* 108bfdaa call 0x108b6b60 */
  push32(0x108bfdafu); f_108b6b60();
  /* 108bfdaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfdb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108bfdb4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bfdb7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 108bfdba mov dword ptr [0x108df7e8], ecx */
  w32((uint32_t)(0x108df7e8), (ECX));
  /* 108bfdc0 mov edx, dword ptr [0x108df7f0] */
  EDX = (r32((uint32_t)(0x108df7f0)));
  /* 108bfdc6 push edx */
  push32((uint32_t)(EDX));
  /* 108bfdc7 call 0x108b6b60 */
  push32(0x108bfdccu); f_108b6b60();
  /* 108bfdcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfdcf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108bfdd1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bfdd4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 108bfdd7 mov dword ptr [0x108df7e0], ecx */
  w32((uint32_t)(0x108df7e0), (ECX));
  /* 108bfddd mov dword ptr [0x108df7dc], 0 */
  w32((uint32_t)(0x108df7dc), (0x0u));
  /* 108bfde7 cmp dword ptr [0x108df7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bfdee je 0x108bfdf9 */
  if (C.zf) goto L_108bfdf9;
  /* 108bfdf0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 108bfdf7 jmp 0x108bfe0b */
  goto L_108bfe0b;
L_108bfdf9:;
  /* 108bfdf9 mov edx, dword ptr [0x108df7ec] */
  EDX = (r32((uint32_t)(0x108df7ec)));
  /* 108bfdff push edx */
  push32((uint32_t)(EDX));
  /* 108bfe00 call 0x108c0840 */
  push32(0x108bfe05u); f_108c0840();
  /* 108bfe05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfe08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108bfe0b:;
  /* 108bfe0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108bfe0e mov dword ptr [0x108df7e4], eax */
  w32((uint32_t)(0x108df7e4), (EAX));
  /* 108bfe13 push 1 */
  push32((uint32_t)(0x1u));
  /* 108bfe15 push 0x108bfe60 */
  push32((uint32_t)(0x108bfe60u));
  /* 108bfe1a call dword ptr [0x108e22b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22b8))), 0x108bfe20u);
  /* 108bfe20 mov ecx, dword ptr [0x108df7f4] */
  ECX = (r32((uint32_t)(0x108df7f4)));
  /* 108bfe26 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 108bfe2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bfe2e je 0x108bfe4c */
  if (C.zf) goto L_108bfe4c;
  /* 108bfe30 mov edx, dword ptr [0x108df7f4] */
  EDX = (r32((uint32_t)(0x108df7f4)));
  /* 108bfe36 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 108bfe3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bfe3e je 0x108bfe4c */
  if (C.zf) goto L_108bfe4c;
  /* 108bfe40 mov eax, dword ptr [0x108df7f4] */
  EAX = (r32((uint32_t)(0x108df7f4)));
  /* 108bfe45 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 108bfe48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bfe4a jne 0x108bfe56 */
  if (!C.zf) goto L_108bfe56;
L_108bfe4c:;
  /* 108bfe4c mov dword ptr [0x108df7f4], 0 */
  w32((uint32_t)(0x108df7f4), (0x0u));
L_108bfe56:;
  /* 108bfe56 mov esp, ebp */
  ESP = (EBP);
  /* 108bfe58 pop ebp */
  EBP = (pop32());
  /* 108bfe59 ret  */
  ESPCHK(0x108bfda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe60 @ 0x108bfe60 (804 bytes, 220 insns) */
void f_108bfe60(void) {
  FTRACE(0x108bfe60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108bfe60 push ebp */
  push32((uint32_t)(EBP));
  /* 108bfe61 mov ebp, esp */
  EBP = (ESP);
  /* 108bfe63 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bfe66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108bfe69 push eax */
  push32((uint32_t)(EAX));
  /* 108bfe6a call 0x108c07c0 */
  push32(0x108bfe6fu); f_108c07c0();
  /* 108bfe6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfe72 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 108bfe75 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 108bfe77 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 108bfe7a push ecx */
  push32((uint32_t)(ECX));
  /* 108bfe7b mov edx, dword ptr [0x108df7e0] */
  EDX = (r32((uint32_t)(0x108df7e0)));
  /* 108bfe81 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 108bfe83 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bfe85 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 108bfe8b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfe91 push edx */
  push32((uint32_t)(EDX));
  /* 108bfe92 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108bfe95 push eax */
  push32((uint32_t)(EAX));
  /* 108bfe96 call dword ptr [0x108df7fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108df7fc))), 0x108bfe9cu);
  /* 108bfe9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bfe9e jne 0x108bfeb4 */
  if (!C.zf) goto L_108bfeb4;
  /* 108bfea0 mov dword ptr [0x108df7f4], 0 */
  w32((uint32_t)(0x108df7f4), (0x0u));
  /* 108bfeaa mov eax, 1 */
  EAX = (0x1u);
  /* 108bfeaf jmp 0x108c017e */
  goto L_108c017e;
L_108bfeb4:;
  /* 108bfeb4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 108bfeb7 push ecx */
  push32((uint32_t)(ECX));
  /* 108bfeb8 mov edx, dword ptr [0x108df7f0] */
  EDX = (r32((uint32_t)(0x108df7f0)));
  /* 108bfebe push edx */
  push32((uint32_t)(EDX));
  /* 108bfebf call 0x108c2400 */
  push32(0x108bfec4u); f_108c2400();
  /* 108bfec4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfec7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bfec9 jne 0x108bffef */
  if (!C.zf) goto L_108bffef;
  /* 108bfecf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 108bfed1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 108bfed4 push eax */
  push32((uint32_t)(EAX));
  /* 108bfed5 mov ecx, dword ptr [0x108df7e8] */
  ECX = (r32((uint32_t)(0x108df7e8)));
  /* 108bfedb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108bfedd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108bfedf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 108bfee5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108bfeeb push ecx */
  push32((uint32_t)(ECX));
  /* 108bfeec mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108bfeef push edx */
  push32((uint32_t)(EDX));
  /* 108bfef0 call dword ptr [0x108df7fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108df7fc))), 0x108bfef6u);
  /* 108bfef6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bfef8 jne 0x108bff0e */
  if (!C.zf) goto L_108bff0e;
  /* 108bfefa mov dword ptr [0x108df7f4], 0 */
  w32((uint32_t)(0x108df7f4), (0x0u));
  /* 108bff04 mov eax, 1 */
  EAX = (0x1u);
  /* 108bff09 jmp 0x108c017e */
  goto L_108c017e;
L_108bff0e:;
  /* 108bff0e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 108bff11 push eax */
  push32((uint32_t)(EAX));
  /* 108bff12 mov ecx, dword ptr [0x108df7ec] */
  ECX = (r32((uint32_t)(0x108df7ec)));
  /* 108bff18 push ecx */
  push32((uint32_t)(ECX));
  /* 108bff19 call 0x108c2400 */
  push32(0x108bff1eu); f_108c2400();
  /* 108bff1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bff21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bff23 jne 0x108bff50 */
  if (!C.zf) goto L_108bff50;
  /* 108bff25 mov edx, dword ptr [0x108df7f4] */
  EDX = (r32((uint32_t)(0x108df7f4)));
  /* 108bff2b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 108bff31 mov dword ptr [0x108df7f4], edx */
  w32((uint32_t)(0x108df7f4), (EDX));
  /* 108bff37 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108bff3a mov dword ptr [0x108df7f8], eax */
  w32((uint32_t)(0x108df7f8), (EAX));
  /* 108bff3f mov ecx, dword ptr [0x108df7f8] */
  ECX = (r32((uint32_t)(0x108df7f8)));
  /* 108bff45 mov dword ptr [0x108df7dc], ecx */
  w32((uint32_t)(0x108df7dc), (ECX));
  /* 108bff4b jmp 0x108bffef */
  goto L_108bffef;
L_108bff50:;
  /* 108bff50 mov edx, dword ptr [0x108df7f4] */
  EDX = (r32((uint32_t)(0x108df7f4)));
  /* 108bff56 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 108bff59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108bff5b jne 0x108bffef */
  if (!C.zf) goto L_108bffef;
  /* 108bff61 cmp dword ptr [0x108df7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bff68 je 0x108bffbd */
  if (C.zf) goto L_108bffbd;
  /* 108bff6a mov eax, dword ptr [0x108df7e4] */
  EAX = (r32((uint32_t)(0x108df7e4)));
  /* 108bff6f push eax */
  push32((uint32_t)(EAX));
  /* 108bff70 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 108bff73 push ecx */
  push32((uint32_t)(ECX));
  /* 108bff74 mov edx, dword ptr [0x108df7ec] */
  EDX = (r32((uint32_t)(0x108df7ec)));
  /* 108bff7a push edx */
  push32((uint32_t)(EDX));
  /* 108bff7b call 0x108c24d0 */
  push32(0x108bff80u); f_108c24d0();
  /* 108bff80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bff83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bff85 jne 0x108bffbd */
  if (!C.zf) goto L_108bffbd;
  /* 108bff87 mov eax, dword ptr [0x108df7f4] */
  EAX = (r32((uint32_t)(0x108df7f4)));
  /* 108bff8c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 108bff8e mov dword ptr [0x108df7f4], eax */
  w32((uint32_t)(0x108df7f4), (EAX));
  /* 108bff93 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108bff96 mov dword ptr [0x108df7f8], ecx */
  w32((uint32_t)(0x108df7f8), (ECX));
  /* 108bff9c mov edx, dword ptr [0x108df7ec] */
  EDX = (r32((uint32_t)(0x108df7ec)));
  /* 108bffa2 push edx */
  push32((uint32_t)(EDX));
  /* 108bffa3 call 0x108b6b60 */
  push32(0x108bffa8u); f_108b6b60();
  /* 108bffa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bffab cmp eax, dword ptr [0x108df7e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108df7e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108bffb1 jne 0x108bffbb */
  if (!C.zf) goto L_108bffbb;
  /* 108bffb3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108bffb6 mov dword ptr [0x108df7dc], eax */
  w32((uint32_t)(0x108df7dc), (EAX));
L_108bffbb:;
  /* 108bffbb jmp 0x108bffef */
  goto L_108bffef;
L_108bffbd:;
  /* 108bffbd mov ecx, dword ptr [0x108df7f4] */
  ECX = (r32((uint32_t)(0x108df7f4)));
  /* 108bffc3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108bffc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108bffc8 jne 0x108bffef */
  if (!C.zf) goto L_108bffef;
  /* 108bffca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108bffcd push edx */
  push32((uint32_t)(EDX));
  /* 108bffce call 0x108c0500 */
  push32(0x108bffd3u); f_108c0500();
  /* 108bffd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108bffd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108bffd8 je 0x108bffef */
  if (C.zf) goto L_108bffef;
  /* 108bffda mov eax, dword ptr [0x108df7f4] */
  EAX = (r32((uint32_t)(0x108df7f4)));
  /* 108bffdf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 108bffe1 mov dword ptr [0x108df7f4], eax */
  w32((uint32_t)(0x108df7f4), (EAX));
  /* 108bffe6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108bffe9 mov dword ptr [0x108df7f8], ecx */
  w32((uint32_t)(0x108df7f8), (ECX));
L_108bffef:;
  /* 108bffef mov edx, dword ptr [0x108df7f4] */
  EDX = (r32((uint32_t)(0x108df7f4)));
  /* 108bfff5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 108bfffb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0001 je 0x108c0171 */
  if (C.zf) goto L_108c0171;
  /* 108c0007 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 108c0009 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 108c000c push eax */
  push32((uint32_t)(EAX));
  /* 108c000d mov ecx, dword ptr [0x108df7e8] */
  ECX = (r32((uint32_t)(0x108df7e8)));
  /* 108c0013 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108c0015 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c0017 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 108c001d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0023 push ecx */
  push32((uint32_t)(ECX));
  /* 108c0024 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108c0027 push edx */
  push32((uint32_t)(EDX));
  /* 108c0028 call dword ptr [0x108df7fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108df7fc))), 0x108c002eu);
  /* 108c002e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c0030 jne 0x108c0046 */
  if (!C.zf) goto L_108c0046;
  /* 108c0032 mov dword ptr [0x108df7f4], 0 */
  w32((uint32_t)(0x108df7f4), (0x0u));
  /* 108c003c mov eax, 1 */
  EAX = (0x1u);
  /* 108c0041 jmp 0x108c017e */
  goto L_108c017e;
L_108c0046:;
  /* 108c0046 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 108c0049 push eax */
  push32((uint32_t)(EAX));
  /* 108c004a mov ecx, dword ptr [0x108df7ec] */
  ECX = (r32((uint32_t)(0x108df7ec)));
  /* 108c0050 push ecx */
  push32((uint32_t)(ECX));
  /* 108c0051 call 0x108c2400 */
  push32(0x108c0056u); f_108c2400();
  /* 108c0056 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0059 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c005b jne 0x108c0110 */
  if (!C.zf) goto L_108c0110;
  /* 108c0061 mov edx, dword ptr [0x108df7f4] */
  EDX = (r32((uint32_t)(0x108df7f4)));
  /* 108c0067 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 108c006a mov dword ptr [0x108df7f4], edx */
  w32((uint32_t)(0x108df7f4), (EDX));
  /* 108c0070 cmp dword ptr [0x108df7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0077 je 0x108c009a */
  if (C.zf) goto L_108c009a;
  /* 108c0079 mov eax, dword ptr [0x108df7f4] */
  EAX = (r32((uint32_t)(0x108df7f4)));
  /* 108c007e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 108c0081 mov dword ptr [0x108df7f4], eax */
  w32((uint32_t)(0x108df7f4), (EAX));
  /* 108c0086 cmp dword ptr [0x108df7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c008d jne 0x108c0098 */
  if (!C.zf) goto L_108c0098;
  /* 108c008f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108c0092 mov dword ptr [0x108df7dc], ecx */
  w32((uint32_t)(0x108df7dc), (ECX));
L_108c0098:;
  /* 108c0098 jmp 0x108c010e */
  goto L_108c010e;
L_108c009a:;
  /* 108c009a cmp dword ptr [0x108df7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c00a1 je 0x108c00ef */
  if (C.zf) goto L_108c00ef;
  /* 108c00a3 mov edx, dword ptr [0x108df7ec] */
  EDX = (r32((uint32_t)(0x108df7ec)));
  /* 108c00a9 push edx */
  push32((uint32_t)(EDX));
  /* 108c00aa call 0x108b6b60 */
  push32(0x108c00afu); f_108b6b60();
  /* 108c00af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c00b2 cmp eax, dword ptr [0x108df7e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108df7e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c00b8 jne 0x108c00ef */
  if (!C.zf) goto L_108c00ef;
  /* 108c00ba push 1 */
  push32((uint32_t)(0x1u));
  /* 108c00bc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108c00bf push eax */
  push32((uint32_t)(EAX));
  /* 108c00c0 call 0x108c0550 */
  push32(0x108c00c5u); f_108c0550();
  /* 108c00c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c00c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c00ca je 0x108c00ed */
  if (C.zf) goto L_108c00ed;
  /* 108c00cc mov ecx, dword ptr [0x108df7f4] */
  ECX = (r32((uint32_t)(0x108df7f4)));
  /* 108c00d2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 108c00d5 mov dword ptr [0x108df7f4], ecx */
  w32((uint32_t)(0x108df7f4), (ECX));
  /* 108c00db cmp dword ptr [0x108df7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c00e2 jne 0x108c00ed */
  if (!C.zf) goto L_108c00ed;
  /* 108c00e4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108c00e7 mov dword ptr [0x108df7dc], edx */
  w32((uint32_t)(0x108df7dc), (EDX));
L_108c00ed:;
  /* 108c00ed jmp 0x108c010e */
  goto L_108c010e;
L_108c00ef:;
  /* 108c00ef mov eax, dword ptr [0x108df7f4] */
  EAX = (r32((uint32_t)(0x108df7f4)));
  /* 108c00f4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 108c00f7 mov dword ptr [0x108df7f4], eax */
  w32((uint32_t)(0x108df7f4), (EAX));
  /* 108c00fc cmp dword ptr [0x108df7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0103 jne 0x108c010e */
  if (!C.zf) goto L_108c010e;
  /* 108c0105 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108c0108 mov dword ptr [0x108df7dc], ecx */
  w32((uint32_t)(0x108df7dc), (ECX));
L_108c010e:;
  /* 108c010e jmp 0x108c0171 */
  goto L_108c0171;
L_108c0110:;
  /* 108c0110 cmp dword ptr [0x108df7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0117 jne 0x108c0171 */
  if (!C.zf) goto L_108c0171;
  /* 108c0119 cmp dword ptr [0x108df7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0120 je 0x108c0171 */
  if (C.zf) goto L_108c0171;
  /* 108c0122 mov edx, dword ptr [0x108df7e4] */
  EDX = (r32((uint32_t)(0x108df7e4)));
  /* 108c0128 push edx */
  push32((uint32_t)(EDX));
  /* 108c0129 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 108c012c push eax */
  push32((uint32_t)(EAX));
  /* 108c012d mov ecx, dword ptr [0x108df7ec] */
  ECX = (r32((uint32_t)(0x108df7ec)));
  /* 108c0133 push ecx */
  push32((uint32_t)(ECX));
  /* 108c0134 call 0x108c24d0 */
  push32(0x108c0139u); f_108c24d0();
  /* 108c0139 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c013c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c013e jne 0x108c0171 */
  if (!C.zf) goto L_108c0171;
  /* 108c0140 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c0142 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108c0145 push edx */
  push32((uint32_t)(EDX));
  /* 108c0146 call 0x108c0550 */
  push32(0x108c014bu); f_108c0550();
  /* 108c014b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c014e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c0150 je 0x108c0171 */
  if (C.zf) goto L_108c0171;
  /* 108c0152 mov eax, dword ptr [0x108df7f4] */
  EAX = (r32((uint32_t)(0x108df7f4)));
  /* 108c0157 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 108c015a mov dword ptr [0x108df7f4], eax */
  w32((uint32_t)(0x108df7f4), (EAX));
  /* 108c015f cmp dword ptr [0x108df7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0166 jne 0x108c0171 */
  if (!C.zf) goto L_108c0171;
  /* 108c0168 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108c016b mov dword ptr [0x108df7dc], ecx */
  w32((uint32_t)(0x108df7dc), (ECX));
L_108c0171:;
  /* 108c0171 mov eax, dword ptr [0x108df7f4] */
  EAX = (r32((uint32_t)(0x108df7f4)));
  /* 108c0176 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108c0179 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108c017b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c017d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_108c017e:;
  /* 108c017e mov esp, ebp */
  ESP = (EBP);
  /* 108c0180 pop ebp */
  EBP = (pop32());
  /* 108c0181 ret 4 */
  ESPCHK(0x108bfe60u, _esp0);
  ESP += 8; return;
}

/* FUN_10010190 @ 0x108c0190 (116 bytes, 33 insns) */
void f_108c0190(void) {
  FTRACE(0x108c0190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c0190 push ebp */
  push32((uint32_t)(EBP));
  /* 108c0191 mov ebp, esp */
  EBP = (ESP);
  /* 108c0193 push ecx */
  push32((uint32_t)(ECX));
  /* 108c0194 mov eax, dword ptr [0x108df7ec] */
  EAX = (r32((uint32_t)(0x108df7ec)));
  /* 108c0199 push eax */
  push32((uint32_t)(EAX));
  /* 108c019a call 0x108b6b60 */
  push32(0x108c019fu); f_108b6b60();
  /* 108c019f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c01a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c01a4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c01a7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 108c01aa mov dword ptr [0x108df7e8], ecx */
  w32((uint32_t)(0x108df7e8), (ECX));
  /* 108c01b0 cmp dword ptr [0x108df7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c01b7 je 0x108c01c2 */
  if (C.zf) goto L_108c01c2;
  /* 108c01b9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 108c01c0 jmp 0x108c01d4 */
  goto L_108c01d4;
L_108c01c2:;
  /* 108c01c2 mov edx, dword ptr [0x108df7ec] */
  EDX = (r32((uint32_t)(0x108df7ec)));
  /* 108c01c8 push edx */
  push32((uint32_t)(EDX));
  /* 108c01c9 call 0x108c0840 */
  push32(0x108c01ceu); f_108c0840();
  /* 108c01ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c01d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108c01d4:;
  /* 108c01d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c01d7 mov dword ptr [0x108df7e4], eax */
  w32((uint32_t)(0x108df7e4), (EAX));
  /* 108c01dc push 1 */
  push32((uint32_t)(0x1u));
  /* 108c01de push 0x108c0210 */
  push32((uint32_t)(0x108c0210u));
  /* 108c01e3 call dword ptr [0x108e22b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22b8))), 0x108c01e9u);
  /* 108c01e9 mov ecx, dword ptr [0x108df7f4] */
  ECX = (r32((uint32_t)(0x108df7f4)));
  /* 108c01ef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 108c01f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108c01f4 jne 0x108c0200 */
  if (!C.zf) goto L_108c0200;
  /* 108c01f6 mov dword ptr [0x108df7f4], 0 */
  w32((uint32_t)(0x108df7f4), (0x0u));
L_108c0200:;
  /* 108c0200 mov esp, ebp */
  ESP = (EBP);
  /* 108c0202 pop ebp */
  EBP = (pop32());
  /* 108c0203 ret  */
  ESPCHK(0x108c0190u, _esp0);
  ESP += 4; return;
}

/* FUN_10010210 @ 0x108c0210 (287 bytes, 86 insns) */
void f_108c0210(void) {
  FTRACE(0x108c0210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c0210 push ebp */
  push32((uint32_t)(EBP));
  /* 108c0211 mov ebp, esp */
  EBP = (ESP);
  /* 108c0213 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c0216 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c0219 push eax */
  push32((uint32_t)(EAX));
  /* 108c021a call 0x108c07c0 */
  push32(0x108c021fu); f_108c07c0();
  /* 108c021f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0222 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 108c0225 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 108c0227 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 108c022a push ecx */
  push32((uint32_t)(ECX));
  /* 108c022b mov edx, dword ptr [0x108df7e8] */
  EDX = (r32((uint32_t)(0x108df7e8)));
  /* 108c0231 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 108c0233 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c0235 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 108c023b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0241 push edx */
  push32((uint32_t)(EDX));
  /* 108c0242 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108c0245 push eax */
  push32((uint32_t)(EAX));
  /* 108c0246 call dword ptr [0x108df7fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108df7fc))), 0x108c024cu);
  /* 108c024c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c024e jne 0x108c0264 */
  if (!C.zf) goto L_108c0264;
  /* 108c0250 mov dword ptr [0x108df7f4], 0 */
  w32((uint32_t)(0x108df7f4), (0x0u));
  /* 108c025a mov eax, 1 */
  EAX = (0x1u);
  /* 108c025f jmp 0x108c0329 */
  goto L_108c0329;
L_108c0264:;
  /* 108c0264 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 108c0267 push ecx */
  push32((uint32_t)(ECX));
  /* 108c0268 mov edx, dword ptr [0x108df7ec] */
  EDX = (r32((uint32_t)(0x108df7ec)));
  /* 108c026e push edx */
  push32((uint32_t)(EDX));
  /* 108c026f call 0x108c2400 */
  push32(0x108c0274u); f_108c2400();
  /* 108c0274 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0277 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c0279 jne 0x108c02b9 */
  if (!C.zf) goto L_108c02b9;
  /* 108c027b cmp dword ptr [0x108df7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0282 jne 0x108c0296 */
  if (!C.zf) goto L_108c0296;
  /* 108c0284 push 1 */
  push32((uint32_t)(0x1u));
  /* 108c0286 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108c0289 push eax */
  push32((uint32_t)(EAX));
  /* 108c028a call 0x108c0550 */
  push32(0x108c028fu); f_108c0550();
  /* 108c028f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0292 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c0294 je 0x108c02b7 */
  if (C.zf) goto L_108c02b7;
L_108c0296:;
  /* 108c0296 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108c0299 mov dword ptr [0x108df7f8], ecx */
  w32((uint32_t)(0x108df7f8), (ECX));
  /* 108c029f mov edx, dword ptr [0x108df7f8] */
  EDX = (r32((uint32_t)(0x108df7f8)));
  /* 108c02a5 mov dword ptr [0x108df7dc], edx */
  w32((uint32_t)(0x108df7dc), (EDX));
  /* 108c02ab mov eax, dword ptr [0x108df7f4] */
  EAX = (r32((uint32_t)(0x108df7f4)));
  /* 108c02b0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 108c02b2 mov dword ptr [0x108df7f4], eax */
  w32((uint32_t)(0x108df7f4), (EAX));
L_108c02b7:;
  /* 108c02b7 jmp 0x108c031c */
  goto L_108c031c;
L_108c02b9:;
  /* 108c02b9 cmp dword ptr [0x108df7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c02c0 jne 0x108c031c */
  if (!C.zf) goto L_108c031c;
  /* 108c02c2 cmp dword ptr [0x108df7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c02c9 je 0x108c031c */
  if (C.zf) goto L_108c031c;
  /* 108c02cb mov ecx, dword ptr [0x108df7e4] */
  ECX = (r32((uint32_t)(0x108df7e4)));
  /* 108c02d1 push ecx */
  push32((uint32_t)(ECX));
  /* 108c02d2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 108c02d5 push edx */
  push32((uint32_t)(EDX));
  /* 108c02d6 mov eax, dword ptr [0x108df7ec] */
  EAX = (r32((uint32_t)(0x108df7ec)));
  /* 108c02db push eax */
  push32((uint32_t)(EAX));
  /* 108c02dc call 0x108c24d0 */
  push32(0x108c02e1u); f_108c24d0();
  /* 108c02e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c02e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c02e6 jne 0x108c031c */
  if (!C.zf) goto L_108c031c;
  /* 108c02e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c02ea mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108c02ed push ecx */
  push32((uint32_t)(ECX));
  /* 108c02ee call 0x108c0550 */
  push32(0x108c02f3u); f_108c0550();
  /* 108c02f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c02f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c02f8 je 0x108c031c */
  if (C.zf) goto L_108c031c;
  /* 108c02fa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108c02fd mov dword ptr [0x108df7f8], edx */
  w32((uint32_t)(0x108df7f8), (EDX));
  /* 108c0303 mov eax, dword ptr [0x108df7f8] */
  EAX = (r32((uint32_t)(0x108df7f8)));
  /* 108c0308 mov dword ptr [0x108df7dc], eax */
  w32((uint32_t)(0x108df7dc), (EAX));
  /* 108c030d mov ecx, dword ptr [0x108df7f4] */
  ECX = (r32((uint32_t)(0x108df7f4)));
  /* 108c0313 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 108c0316 mov dword ptr [0x108df7f4], ecx */
  w32((uint32_t)(0x108df7f4), (ECX));
L_108c031c:;
  /* 108c031c mov eax, dword ptr [0x108df7f4] */
  EAX = (r32((uint32_t)(0x108df7f4)));
  /* 108c0321 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108c0324 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108c0326 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c0328 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_108c0329:;
  /* 108c0329 mov esp, ebp */
  ESP = (EBP);
  /* 108c032b pop ebp */
  EBP = (pop32());
  /* 108c032c ret 4 */
  ESPCHK(0x108c0210u, _esp0);
  ESP += 8; return;
}

/* FUN_10010330 @ 0x108c0330 (69 bytes, 20 insns) */
void f_108c0330(void) {
  FTRACE(0x108c0330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c0330 push ebp */
  push32((uint32_t)(EBP));
  /* 108c0331 mov ebp, esp */
  EBP = (ESP);
  /* 108c0333 mov eax, dword ptr [0x108df7f0] */
  EAX = (r32((uint32_t)(0x108df7f0)));
  /* 108c0338 push eax */
  push32((uint32_t)(EAX));
  /* 108c0339 call 0x108b6b60 */
  push32(0x108c033eu); f_108b6b60();
  /* 108c033e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0341 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c0343 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0346 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 108c0349 mov dword ptr [0x108df7e0], ecx */
  w32((uint32_t)(0x108df7e0), (ECX));
  /* 108c034f push 1 */
  push32((uint32_t)(0x1u));
  /* 108c0351 push 0x108c0380 */
  push32((uint32_t)(0x108c0380u));
  /* 108c0356 call dword ptr [0x108e22b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22b8))), 0x108c035cu);
  /* 108c035c mov edx, dword ptr [0x108df7f4] */
  EDX = (r32((uint32_t)(0x108df7f4)));
  /* 108c0362 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 108c0365 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c0367 jne 0x108c0373 */
  if (!C.zf) goto L_108c0373;
  /* 108c0369 mov dword ptr [0x108df7f4], 0 */
  w32((uint32_t)(0x108df7f4), (0x0u));
L_108c0373:;
  /* 108c0373 pop ebp */
  EBP = (pop32());
  /* 108c0374 ret  */
  ESPCHK(0x108c0330u, _esp0);
  ESP += 4; return;
}

/* FUN_10010380 @ 0x108c0380 (172 bytes, 54 insns) */
void f_108c0380(void) {
  FTRACE(0x108c0380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c0380 push ebp */
  push32((uint32_t)(EBP));
  /* 108c0381 mov ebp, esp */
  EBP = (ESP);
  /* 108c0383 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c0386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c0389 push eax */
  push32((uint32_t)(EAX));
  /* 108c038a call 0x108c07c0 */
  push32(0x108c038fu); f_108c07c0();
  /* 108c038f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0392 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 108c0395 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 108c0397 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 108c039a push ecx */
  push32((uint32_t)(ECX));
  /* 108c039b mov edx, dword ptr [0x108df7e0] */
  EDX = (r32((uint32_t)(0x108df7e0)));
  /* 108c03a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 108c03a3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c03a5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 108c03ab add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c03b1 push edx */
  push32((uint32_t)(EDX));
  /* 108c03b2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108c03b5 push eax */
  push32((uint32_t)(EAX));
  /* 108c03b6 call dword ptr [0x108df7fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108df7fc))), 0x108c03bcu);
  /* 108c03bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c03be jne 0x108c03d1 */
  if (!C.zf) goto L_108c03d1;
  /* 108c03c0 mov dword ptr [0x108df7f4], 0 */
  w32((uint32_t)(0x108df7f4), (0x0u));
  /* 108c03ca mov eax, 1 */
  EAX = (0x1u);
  /* 108c03cf jmp 0x108c0426 */
  goto L_108c0426;
L_108c03d1:;
  /* 108c03d1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 108c03d4 push ecx */
  push32((uint32_t)(ECX));
  /* 108c03d5 mov edx, dword ptr [0x108df7f0] */
  EDX = (r32((uint32_t)(0x108df7f0)));
  /* 108c03db push edx */
  push32((uint32_t)(EDX));
  /* 108c03dc call 0x108c2400 */
  push32(0x108c03e1u); f_108c2400();
  /* 108c03e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c03e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c03e6 jne 0x108c0419 */
  if (!C.zf) goto L_108c0419;
  /* 108c03e8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108c03eb push eax */
  push32((uint32_t)(EAX));
  /* 108c03ec call 0x108c0500 */
  push32(0x108c03f1u); f_108c0500();
  /* 108c03f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c03f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c03f6 je 0x108c0419 */
  if (C.zf) goto L_108c0419;
  /* 108c03f8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 108c03fb mov dword ptr [0x108df7f8], ecx */
  w32((uint32_t)(0x108df7f8), (ECX));
  /* 108c0401 mov edx, dword ptr [0x108df7f8] */
  EDX = (r32((uint32_t)(0x108df7f8)));
  /* 108c0407 mov dword ptr [0x108df7dc], edx */
  w32((uint32_t)(0x108df7dc), (EDX));
  /* 108c040d mov eax, dword ptr [0x108df7f4] */
  EAX = (r32((uint32_t)(0x108df7f4)));
  /* 108c0412 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 108c0414 mov dword ptr [0x108df7f4], eax */
  w32((uint32_t)(0x108df7f4), (EAX));
L_108c0419:;
  /* 108c0419 mov eax, dword ptr [0x108df7f4] */
  EAX = (r32((uint32_t)(0x108df7f4)));
  /* 108c041e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108c0421 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108c0423 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c0425 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_108c0426:;
  /* 108c0426 mov esp, ebp */
  ESP = (EBP);
  /* 108c0428 pop ebp */
  EBP = (pop32());
  /* 108c0429 ret 4 */
  ESPCHK(0x108c0380u, _esp0);
  ESP += 8; return;
}

/* FUN_10010430 @ 0x108c0430 (43 bytes, 11 insns) */
void f_108c0430(void) {
  FTRACE(0x108c0430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c0430 push ebp */
  push32((uint32_t)(EBP));
  /* 108c0431 mov ebp, esp */
  EBP = (ESP);
  /* 108c0433 mov eax, dword ptr [0x108df7f4] */
  EAX = (r32((uint32_t)(0x108df7f4)));
  /* 108c0438 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 108c043d mov dword ptr [0x108df7f4], eax */
  w32((uint32_t)(0x108df7f4), (EAX));
  /* 108c0442 call dword ptr [0x108e22a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22a8))), 0x108c0448u);
  /* 108c0448 mov dword ptr [0x108df7f8], eax */
  w32((uint32_t)(0x108df7f8), (EAX));
  /* 108c044d mov ecx, dword ptr [0x108df7f8] */
  ECX = (r32((uint32_t)(0x108df7f8)));
  /* 108c0453 mov dword ptr [0x108df7dc], ecx */
  w32((uint32_t)(0x108df7dc), (ECX));
  /* 108c0459 pop ebp */
  EBP = (pop32());
  /* 108c045a ret  */
  ESPCHK(0x108c0430u, _esp0);
  ESP += 4; return;
}

/* FUN_10010460 @ 0x108c0460 (155 bytes, 57 insns) */
void f_108c0460(void) {
  FTRACE(0x108c0460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c0460 push ebp */
  push32((uint32_t)(EBP));
  /* 108c0461 mov ebp, esp */
  EBP = (ESP);
  /* 108c0463 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c0466 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c046a je 0x108c048b */
  if (C.zf) goto L_108c048b;
  /* 108c046c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c046f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108c0472 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108c0474 je 0x108c048b */
  if (C.zf) goto L_108c048b;
  /* 108c0476 push 0x108db75c */
  push32((uint32_t)(0x108db75cu));
  /* 108c047b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c047e push edx */
  push32((uint32_t)(EDX));
  /* 108c047f call 0x108bf9c0 */
  push32(0x108c0484u); f_108bf9c0();
  /* 108c0484 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0487 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c0489 jne 0x108c04b3 */
  if (!C.zf) goto L_108c04b3;
L_108c048b:;
  /* 108c048b push 8 */
  push32((uint32_t)(0x8u));
  /* 108c048d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 108c0490 push eax */
  push32((uint32_t)(EAX));
  /* 108c0491 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 108c0496 mov ecx, dword ptr [0x108df7f8] */
  ECX = (r32((uint32_t)(0x108df7f8)));
  /* 108c049c push ecx */
  push32((uint32_t)(ECX));
  /* 108c049d call dword ptr [0x108df7fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108df7fc))), 0x108c04a3u);
  /* 108c04a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c04a5 jne 0x108c04ab */
  if (!C.zf) goto L_108c04ab;
  /* 108c04a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c04a9 jmp 0x108c04f7 */
  goto L_108c04f7;
L_108c04ab:;
  /* 108c04ab lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 108c04ae mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 108c04b1 jmp 0x108c04eb */
  goto L_108c04eb;
L_108c04b3:;
  /* 108c04b3 push 0x108db758 */
  push32((uint32_t)(0x108db758u));
  /* 108c04b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c04bb push eax */
  push32((uint32_t)(EAX));
  /* 108c04bc call 0x108bf9c0 */
  push32(0x108c04c1u); f_108bf9c0();
  /* 108c04c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c04c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c04c6 jne 0x108c04eb */
  if (!C.zf) goto L_108c04eb;
  /* 108c04c8 push 8 */
  push32((uint32_t)(0x8u));
  /* 108c04ca lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 108c04cd push ecx */
  push32((uint32_t)(ECX));
  /* 108c04ce push 0xb */
  push32((uint32_t)(0xbu));
  /* 108c04d0 mov edx, dword ptr [0x108df7f8] */
  EDX = (r32((uint32_t)(0x108df7f8)));
  /* 108c04d6 push edx */
  push32((uint32_t)(EDX));
  /* 108c04d7 call dword ptr [0x108df7fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108df7fc))), 0x108c04ddu);
  /* 108c04dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c04df jne 0x108c04e5 */
  if (!C.zf) goto L_108c04e5;
  /* 108c04e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c04e3 jmp 0x108c04f7 */
  goto L_108c04f7;
L_108c04e5:;
  /* 108c04e5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 108c04e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_108c04eb:;
  /* 108c04eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c04ee push ecx */
  push32((uint32_t)(ECX));
  /* 108c04ef call 0x108c25e0 */
  push32(0x108c04f4u); f_108c25e0();
  /* 108c04f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108c04f7:;
  /* 108c04f7 mov esp, ebp */
  ESP = (EBP);
  /* 108c04f9 pop ebp */
  EBP = (pop32());
  /* 108c04fa ret  */
  ESPCHK(0x108c0460u, _esp0);
  ESP += 4; return;
}

/* FUN_10010500 @ 0x108c0500 (79 bytes, 26 insns) */
void f_108c0500(void) {
  FTRACE(0x108c0500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c0500 push ebp */
  push32((uint32_t)(EBP));
  /* 108c0501 mov ebp, esp */
  EBP = (ESP);
  /* 108c0503 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c0506 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 108c050a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 108c050e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108c0515 jmp 0x108c0520 */
  goto L_108c0520;
L_108c0517:;
  /* 108c0517 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c051a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c051d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_108c0520:;
  /* 108c0520 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0524 jae 0x108c0546 */
  if (!C.cf) goto L_108c0546;
  /* 108c0526 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c0529 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108c052f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c0532 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c0534 mov cx, word ptr [eax*2 + 0x108de9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x108de9c4)));
  /* 108c053c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c053e jne 0x108c0544 */
  if (!C.zf) goto L_108c0544;
  /* 108c0540 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c0542 jmp 0x108c054b */
  goto L_108c054b;
L_108c0544:;
  /* 108c0544 jmp 0x108c0517 */
  goto L_108c0517;
L_108c0546:;
  /* 108c0546 mov eax, 1 */
  EAX = (0x1u);
L_108c054b:;
  /* 108c054b mov esp, ebp */
  ESP = (EBP);
  /* 108c054d pop ebp */
  EBP = (pop32());
  /* 108c054e ret  */
  ESPCHK(0x108c0500u, _esp0);
  ESP += 4; return;
}

/* FUN_10010550 @ 0x108c0550 (135 bytes, 48 insns) */
void f_108c0550(void) {
  FTRACE(0x108c0550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c0550 push ebp */
  push32((uint32_t)(EBP));
  /* 108c0551 mov ebp, esp */
  EBP = (ESP);
  /* 108c0553 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c0556 push esi */
  push32((uint32_t)(ESI));
  /* 108c0557 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c055a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c055f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c0564 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c0569 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 108c056c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c0571 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108c0574 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 108c0576 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 108c0579 push ecx */
  push32((uint32_t)(ECX));
  /* 108c057a push 1 */
  push32((uint32_t)(0x1u));
  /* 108c057c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c057f push edx */
  push32((uint32_t)(EDX));
  /* 108c0580 call dword ptr [0x108df7fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108df7fc))), 0x108c0586u);
  /* 108c0586 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c0588 jne 0x108c058e */
  if (!C.zf) goto L_108c058e;
  /* 108c058a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c058c jmp 0x108c05d2 */
  goto L_108c05d2;
L_108c058e:;
  /* 108c058e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 108c0591 push eax */
  push32((uint32_t)(EAX));
  /* 108c0592 call 0x108c07c0 */
  push32(0x108c0597u); f_108c07c0();
  /* 108c0597 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c059a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c059d je 0x108c05cd */
  if (C.zf) goto L_108c05cd;
  /* 108c059f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c05a3 je 0x108c05cd */
  if (C.zf) goto L_108c05cd;
  /* 108c05a5 mov ecx, dword ptr [0x108df7ec] */
  ECX = (r32((uint32_t)(0x108df7ec)));
  /* 108c05ab push ecx */
  push32((uint32_t)(ECX));
  /* 108c05ac call 0x108c0840 */
  push32(0x108c05b1u); f_108c0840();
  /* 108c05b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c05b4 mov esi, eax */
  ESI = (EAX);
  /* 108c05b6 mov edx, dword ptr [0x108df7ec] */
  EDX = (r32((uint32_t)(0x108df7ec)));
  /* 108c05bc push edx */
  push32((uint32_t)(EDX));
  /* 108c05bd call 0x108b6b60 */
  push32(0x108c05c2u); f_108b6b60();
  /* 108c05c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c05c5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c05c7 jne 0x108c05cd */
  if (!C.zf) goto L_108c05cd;
  /* 108c05c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c05cb jmp 0x108c05d2 */
  goto L_108c05d2;
L_108c05cd:;
  /* 108c05cd mov eax, 1 */
  EAX = (0x1u);
L_108c05d2:;
  /* 108c05d2 pop esi */
  ESI = (pop32());
  /* 108c05d3 mov esp, ebp */
  ESP = (EBP);
  /* 108c05d5 pop ebp */
  EBP = (pop32());
  /* 108c05d6 ret  */
  ESPCHK(0x108c0550u, _esp0);
  ESP += 4; return;
}

/* FUN_100105e0 @ 0x108c05e0 (77 bytes, 18 insns) */
void f_108c05e0(void) {
  FTRACE(0x108c05e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c05e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108c05e1 mov ebp, esp */
  EBP = (ESP);
  /* 108c05e3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c05e9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 108c05f3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 108c05f9 push eax */
  push32((uint32_t)(EAX));
  /* 108c05fa call dword ptr [0x108e22a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22a4))), 0x108c0600u);
  /* 108c0600 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c0602 je 0x108c0619 */
  if (C.zf) goto L_108c0619;
  /* 108c0604 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c060b jne 0x108c0619 */
  if (!C.zf) goto L_108c0619;
  /* 108c060d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 108c0617 jmp 0x108c0623 */
  goto L_108c0623;
L_108c0619:;
  /* 108c0619 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_108c0623:;
  /* 108c0623 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 108c0629 mov esp, ebp */
  ESP = (EBP);
  /* 108c062b pop ebp */
  EBP = (pop32());
  /* 108c062c ret  */
  ESPCHK(0x108c05e0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x108c0630 (388 bytes, 118 insns) */
void f_108c0630(void) {
  FTRACE(0x108c0630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c0630 push ebp */
  push32((uint32_t)(EBP));
  /* 108c0631 mov ebp, esp */
  EBP = (ESP);
  /* 108c0633 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c0636 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 108c063d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 108c0644 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_108c064b:;
  /* 108c064b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c064e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0651 jg 0x108c0798 */
  if ((!C.zf&&C.sf==C.of)) goto L_108c0798;
  /* 108c0657 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c065a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c065d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108c065e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c0660 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108c0662 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108c0665 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0668 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c066b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c066e cmp edx, dword ptr [ecx + 0x108de520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x108de520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0674 jne 0x108c076e */
  if (!C.zf) goto L_108c076e;
  /* 108c067a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c067d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108c0680 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0684 ja 0x108c06a7 */
  if ((!C.cf&&!C.zf)) goto L_108c06a7;
  /* 108c0686 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c068a je 0x108c0719 */
  if (C.zf) goto L_108c0719;
  /* 108c0690 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0694 je 0x108c06c4 */
  if (C.zf) goto L_108c06c4;
  /* 108c0696 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c069a je 0x108c06e6 */
  if (C.zf) goto L_108c06e6;
  /* 108c069c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c06a0 je 0x108c0708 */
  if (C.zf) goto L_108c0708;
  /* 108c06a2 jmp 0x108c0738 */
  goto L_108c0738;
L_108c06a7:;
  /* 108c06a7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c06ae je 0x108c06d5 */
  if (C.zf) goto L_108c06d5;
  /* 108c06b0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c06b7 je 0x108c06f7 */
  if (C.zf) goto L_108c06f7;
  /* 108c06b9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c06c0 je 0x108c072a */
  if (C.zf) goto L_108c072a;
  /* 108c06c2 jmp 0x108c0738 */
  goto L_108c0738;
L_108c06c4:;
  /* 108c06c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c06c7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c06ca add ecx, 0x108de524 */
  { uint32_t _a=(ECX),_b=(0x108de524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c06d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108c06d3 jmp 0x108c0738 */
  goto L_108c0738;
L_108c06d5:;
  /* 108c06d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c06d8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c06db mov eax, dword ptr [edx + 0x108de52c] */
  EAX = (r32((uint32_t)(EDX + 0x108de52c)));
  /* 108c06e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108c06e4 jmp 0x108c0738 */
  goto L_108c0738;
L_108c06e6:;
  /* 108c06e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c06e9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c06ec add ecx, 0x108de530 */
  { uint32_t _a=(ECX),_b=(0x108de530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c06f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108c06f5 jmp 0x108c0738 */
  goto L_108c0738;
L_108c06f7:;
  /* 108c06f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c06fa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c06fd mov eax, dword ptr [edx + 0x108de534] */
  EAX = (r32((uint32_t)(EDX + 0x108de534)));
  /* 108c0703 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108c0706 jmp 0x108c0738 */
  goto L_108c0738;
L_108c0708:;
  /* 108c0708 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c070b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c070e add ecx, 0x108de538 */
  { uint32_t _a=(ECX),_b=(0x108de538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0714 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108c0717 jmp 0x108c0738 */
  goto L_108c0738;
L_108c0719:;
  /* 108c0719 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c071c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c071f add edx, 0x108de53c */
  { uint32_t _a=(EDX),_b=(0x108de53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0725 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108c0728 jmp 0x108c0738 */
  goto L_108c0738;
L_108c072a:;
  /* 108c072a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c072d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c0730 add eax, 0x108de544 */
  { uint32_t _a=(EAX),_b=(0x108de544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0735 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108c0738:;
  /* 108c0738 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c073c je 0x108c0744 */
  if (C.zf) goto L_108c0744;
  /* 108c073e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0742 jge 0x108c0746 */
  if ((C.sf==C.of)) goto L_108c0746;
L_108c0744:;
  /* 108c0744 jmp 0x108c0798 */
  goto L_108c0798;
L_108c0746:;
  /* 108c0746 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c0749 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c074c push ecx */
  push32((uint32_t)(ECX));
  /* 108c074d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c0750 push edx */
  push32((uint32_t)(EDX));
  /* 108c0751 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c0754 push eax */
  push32((uint32_t)(EAX));
  /* 108c0755 call 0x108b7550 */
  push32(0x108c075au); f_108b7550();
  /* 108c075a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c075d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c0760 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0763 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 108c0767 mov eax, 1 */
  EAX = (0x1u);
  /* 108c076c jmp 0x108c07ae */
  goto L_108c07ae;
L_108c076e:;
  /* 108c076e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0771 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c0774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c0777 cmp eax, dword ptr [edx + 0x108de520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x108de520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c077d jae 0x108c078a */
  if (!C.cf) goto L_108c078a;
  /* 108c077f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0782 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c0785 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108c0788 jmp 0x108c0793 */
  goto L_108c0793;
L_108c078a:;
  /* 108c078a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c078d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0790 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_108c0793:;
  /* 108c0793 jmp 0x108c064b */
  goto L_108c064b;
L_108c0798:;
  /* 108c0798 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c079b push eax */
  push32((uint32_t)(EAX));
  /* 108c079c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c079f push ecx */
  push32((uint32_t)(ECX));
  /* 108c07a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c07a3 push edx */
  push32((uint32_t)(EDX));
  /* 108c07a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c07a7 push eax */
  push32((uint32_t)(EAX));
  /* 108c07a8 call dword ptr [0x108e22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22b0))), 0x108c07aeu);
L_108c07ae:;
  /* 108c07ae mov esp, ebp */
  ESP = (EBP);
  /* 108c07b0 pop ebp */
  EBP = (pop32());
  /* 108c07b1 ret 0x10 */
  ESPCHK(0x108c0630u, _esp0);
  ESP += 20; return;
}

/* FUN_100107c0 @ 0x108c07c0 (118 bytes, 42 insns) */
void f_108c07c0(void) {
  FTRACE(0x108c07c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c07c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108c07c1 mov ebp, esp */
  EBP = (ESP);
  /* 108c07c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c07c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108c07cd:;
  /* 108c07cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c07d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108c07d2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 108c07d5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108c07d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c07dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c07df mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108c07e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c07e4 je 0x108c082f */
  if (C.zf) goto L_108c082f;
  /* 108c07e6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108c07ea cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c07ed jl 0x108c0802 */
  if ((C.sf!=C.of)) goto L_108c0802;
  /* 108c07ef movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108c07f3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c07f6 jg 0x108c0802 */
  if ((!C.zf&&C.sf==C.of)) goto L_108c0802;
  /* 108c07f8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 108c07fb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108c07fd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 108c0800 jmp 0x108c081c */
  goto L_108c081c;
L_108c0802:;
  /* 108c0802 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108c0806 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0809 jl 0x108c081c */
  if ((C.sf!=C.of)) goto L_108c081c;
  /* 108c080b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108c080f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0812 jg 0x108c081c */
  if ((!C.zf&&C.sf==C.of)) goto L_108c081c;
  /* 108c0814 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 108c0817 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108c0819 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_108c081c:;
  /* 108c081c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c081f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 108c0822 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108c0826 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 108c082a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108c082d jmp 0x108c07cd */
  goto L_108c07cd;
L_108c082f:;
  /* 108c082f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c0832 mov esp, ebp */
  ESP = (EBP);
  /* 108c0834 pop ebp */
  EBP = (pop32());
  /* 108c0835 ret  */
  ESPCHK(0x108c07c0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x108c0840 (101 bytes, 36 insns) */
void f_108c0840(void) {
  FTRACE(0x108c0840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c0840 push ebp */
  push32((uint32_t)(EBP));
  /* 108c0841 mov ebp, esp */
  EBP = (ESP);
  /* 108c0843 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c0846 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108c084d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c0850 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108c0852 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 108c0855 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c0858 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c085b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_108c085e:;
  /* 108c085e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 108c0862 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0865 jl 0x108c0870 */
  if ((C.sf!=C.of)) goto L_108c0870;
  /* 108c0867 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 108c086b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c086e jle 0x108c0882 */
  if ((C.zf||C.sf!=C.of)) goto L_108c0882;
L_108c0870:;
  /* 108c0870 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 108c0874 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0877 jl 0x108c089e */
  if ((C.sf!=C.of)) goto L_108c089e;
  /* 108c0879 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 108c087d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0880 jg 0x108c089e */
  if ((!C.zf&&C.sf==C.of)) goto L_108c089e;
L_108c0882:;
  /* 108c0882 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c0885 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0888 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108c088b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c088e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108c0890 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 108c0893 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c0896 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0899 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 108c089c jmp 0x108c085e */
  goto L_108c085e;
L_108c089e:;
  /* 108c089e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c08a1 mov esp, ebp */
  ESP = (EBP);
  /* 108c08a3 pop ebp */
  EBP = (pop32());
  /* 108c08a4 ret  */
  ESPCHK(0x108c0840u, _esp0);
  ESP += 4; return;
}

/* FUN_100108b0 @ 0x108c08b0 (122 bytes, 39 insns) */
void f_108c08b0(void) {
  FTRACE(0x108c08b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c08b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108c08b1 mov ebp, esp */
  EBP = (ESP);
  /* 108c08b3 push ecx */
  push32((uint32_t)(ECX));
  /* 108c08b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c08b7 cmp eax, dword ptr [0x108e107c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108e107c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c08bd jae 0x108c08e1 */
  if (!C.cf) goto L_108c08e1;
  /* 108c08bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c08c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 108c08c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c08c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 108c08cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c08ce mov eax, dword ptr [ecx*4 + 0x108e0f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x108e0f40)));
  /* 108c08d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 108c08da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108c08dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108c08df jne 0x108c08fc */
  if (!C.zf) goto L_108c08fc;
L_108c08e1:;
  /* 108c08e1 call 0x108bbc00 */
  push32(0x108c08e6u); f_108bbc00();
  /* 108c08e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 108c08ec call 0x108bbc10 */
  push32(0x108c08f1u); f_108bbc10();
  /* 108c08f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108c08f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c08fa jmp 0x108c0926 */
  goto L_108c0926;
L_108c08fc:;
  /* 108c08fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c08ff push edx */
  push32((uint32_t)(EDX));
  /* 108c0900 call 0x108bd420 */
  push32(0x108c0905u); f_108bd420();
  /* 108c0905 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0908 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c090b push eax */
  push32((uint32_t)(EAX));
  /* 108c090c call 0x108c0930 */
  push32(0x108c0911u); f_108c0930();
  /* 108c0911 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0914 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108c0917 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c091a push ecx */
  push32((uint32_t)(ECX));
  /* 108c091b call 0x108bd4b0 */
  push32(0x108c0920u); f_108bd4b0();
  /* 108c0920 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0923 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108c0926:;
  /* 108c0926 mov esp, ebp */
  ESP = (EBP);
  /* 108c0928 pop ebp */
  EBP = (pop32());
  /* 108c0929 ret  */
  ESPCHK(0x108c08b0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x108c0930 (170 bytes, 59 insns) */
void f_108c0930(void) {
  FTRACE(0x108c0930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c0930 push ebp */
  push32((uint32_t)(EBP));
  /* 108c0931 mov ebp, esp */
  EBP = (ESP);
  /* 108c0933 push ecx */
  push32((uint32_t)(ECX));
  /* 108c0934 push esi */
  push32((uint32_t)(ESI));
  /* 108c0935 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c0938 push eax */
  push32((uint32_t)(EAX));
  /* 108c0939 call 0x108bd2a0 */
  push32(0x108c093eu); f_108bd2a0();
  /* 108c093e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0941 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0944 je 0x108c0983 */
  if (C.zf) goto L_108c0983;
  /* 108c0946 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c094a je 0x108c0952 */
  if (C.zf) goto L_108c0952;
  /* 108c094c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0950 jne 0x108c096c */
  if (!C.zf) goto L_108c096c;
L_108c0952:;
  /* 108c0952 push 1 */
  push32((uint32_t)(0x1u));
  /* 108c0954 call 0x108bd2a0 */
  push32(0x108c0959u); f_108bd2a0();
  /* 108c0959 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c095c mov esi, eax */
  ESI = (EAX);
  /* 108c095e push 2 */
  push32((uint32_t)(0x2u));
  /* 108c0960 call 0x108bd2a0 */
  push32(0x108c0965u); f_108bd2a0();
  /* 108c0965 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0968 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c096a je 0x108c0983 */
  if (C.zf) goto L_108c0983;
L_108c096c:;
  /* 108c096c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c096f push ecx */
  push32((uint32_t)(ECX));
  /* 108c0970 call 0x108bd2a0 */
  push32(0x108c0975u); f_108bd2a0();
  /* 108c0975 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0978 push eax */
  push32((uint32_t)(EAX));
  /* 108c0979 call dword ptr [0x108e22ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22ac))), 0x108c097fu);
  /* 108c097f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c0981 je 0x108c098c */
  if (C.zf) goto L_108c098c;
L_108c0983:;
  /* 108c0983 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108c098a jmp 0x108c0995 */
  goto L_108c0995;
L_108c098c:;
  /* 108c098c call dword ptr [0x108e228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e228c))), 0x108c0992u);
  /* 108c0992 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108c0995:;
  /* 108c0995 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c0998 push edx */
  push32((uint32_t)(EDX));
  /* 108c0999 call 0x108bd1c0 */
  push32(0x108c099eu); f_108bd1c0();
  /* 108c099e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c09a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c09a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108c09a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c09aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108c09ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c09b0 mov edx, dword ptr [eax*4 + 0x108e0f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108e0f40)));
  /* 108c09b7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 108c09bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c09c0 je 0x108c09d3 */
  if (C.zf) goto L_108c09d3;
  /* 108c09c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c09c5 push eax */
  push32((uint32_t)(EAX));
  /* 108c09c6 call 0x108bbb60 */
  push32(0x108c09cbu); f_108bbb60();
  /* 108c09cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c09ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c09d1 jmp 0x108c09d5 */
  goto L_108c09d5;
L_108c09d3:;
  /* 108c09d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108c09d5:;
  /* 108c09d5 pop esi */
  ESI = (pop32());
  /* 108c09d6 mov esp, ebp */
  ESP = (EBP);
  /* 108c09d8 pop ebp */
  EBP = (pop32());
  /* 108c09d9 ret  */
  ESPCHK(0x108c0930u, _esp0);
  ESP += 4; return;
}

/* FUN_100109e0 @ 0x108c09e0 (146 bytes, 52 insns) */
void f_108c09e0(void) {
  FTRACE(0x108c09e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c09e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108c09e1 mov ebp, esp */
  EBP = (ESP);
  /* 108c09e3 push ebx */
  push32((uint32_t)(EBX));
  /* 108c09e4 push esi */
  push32((uint32_t)(ESI));
  /* 108c09e5 push edi */
  push32((uint32_t)(EDI));
L_108c09e6:;
  /* 108c09e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c09ea jne 0x108c0a0a */
  if (!C.zf) goto L_108c0a0a;
  /* 108c09ec push 0x108db098 */
  push32((uint32_t)(0x108db098u));
  /* 108c09f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c09f3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 108c09f5 push 0x108db760 */
  push32((uint32_t)(0x108db760u));
  /* 108c09fa push 2 */
  push32((uint32_t)(0x2u));
  /* 108c09fc call 0x108b2df0 */
  push32(0x108c0a01u); f_108b2df0();
  /* 108c0a01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0a04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0a07 jne 0x108c0a0a */
  if (!C.zf) goto L_108c0a0a;
  /* 108c0a09 int3  */
  x86_unimpl("int3 @ 0x108c0a09");
L_108c0a0a:;
  /* 108c0a0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c0a0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c0a0e jne 0x108c09e6 */
  if (!C.zf) goto L_108c09e6;
  /* 108c0a10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c0a13 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108c0a16 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 108c0a1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c0a1e je 0x108c0a6d */
  if (C.zf) goto L_108c0a6d;
  /* 108c0a20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c0a23 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108c0a26 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 108c0a29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108c0a2b je 0x108c0a6d */
  if (C.zf) goto L_108c0a6d;
  /* 108c0a2d push 2 */
  push32((uint32_t)(0x2u));
  /* 108c0a2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c0a32 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108c0a35 push eax */
  push32((uint32_t)(EAX));
  /* 108c0a36 call 0x108b47c0 */
  push32(0x108c0a3bu); f_108b47c0();
  /* 108c0a3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0a3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c0a41 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108c0a44 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 108c0a4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c0a4d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 108c0a50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c0a53 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 108c0a59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c0a5c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 108c0a63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c0a66 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_108c0a6d:;
  /* 108c0a6d pop edi */
  EDI = (pop32());
  /* 108c0a6e pop esi */
  ESI = (pop32());
  /* 108c0a6f pop ebx */
  EBX = (pop32());
  /* 108c0a70 pop ebp */
  EBP = (pop32());
  /* 108c0a71 ret  */
  ESPCHK(0x108c09e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a80 @ 0x108c0a80 (289 bytes, 97 insns) */
void f_108c0a80(void) {
  FTRACE(0x108c0a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c0a80 push ebp */
  push32((uint32_t)(EBP));
  /* 108c0a81 mov ebp, esp */
  EBP = (ESP);
  /* 108c0a83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c0a86 push esi */
  push32((uint32_t)(ESI));
  /* 108c0a87 mov eax, dword ptr [0x108dec98] */
  EAX = (r32((uint32_t)(0x108dec98)));
  /* 108c0a8c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108c0a8f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108c0a96 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 108c0a9d jmp 0x108c0aa8 */
  goto L_108c0aa8;
L_108c0a9f:;
  /* 108c0a9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0aa2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0aa5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_108c0aa8:;
  /* 108c0aa8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0aac jae 0x108c0ae1 */
  if (!C.cf) goto L_108c0ae1;
  /* 108c0aae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0ab1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0ab4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 108c0ab7 push ecx */
  push32((uint32_t)(ECX));
  /* 108c0ab8 call 0x108b6b60 */
  push32(0x108c0abdu); f_108b6b60();
  /* 108c0abd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0ac0 mov esi, eax */
  ESI = (EAX);
  /* 108c0ac2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0ac5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0ac8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 108c0acc push ecx */
  push32((uint32_t)(ECX));
  /* 108c0acd call 0x108b6b60 */
  push32(0x108c0ad2u); f_108b6b60();
  /* 108c0ad2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0ad5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0ad8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 108c0adc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108c0adf jmp 0x108c0a9f */
  goto L_108c0a9f;
L_108c0ae1:;
  /* 108c0ae1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c0ae4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0ae7 push eax */
  push32((uint32_t)(EAX));
  /* 108c0ae8 call 0x108b3d10 */
  push32(0x108c0aedu); f_108b3d10();
  /* 108c0aed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0af0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108c0af3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0af7 je 0x108c0b99 */
  if (C.zf) goto L_108c0b99;
  /* 108c0afd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c0b00 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108c0b03 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 108c0b0a jmp 0x108c0b15 */
  goto L_108c0b15;
L_108c0b0c:;
  /* 108c0b0c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0b0f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0b12 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_108c0b15:;
  /* 108c0b15 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0b19 jae 0x108c0b8a */
  if (!C.cf) goto L_108c0b8a;
  /* 108c0b1b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0b1e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 108c0b21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0b24 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0b27 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108c0b2a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0b2d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0b30 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 108c0b33 push ecx */
  push32((uint32_t)(ECX));
  /* 108c0b34 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0b37 push edx */
  push32((uint32_t)(EDX));
  /* 108c0b38 call 0x108b6ce0 */
  push32(0x108c0b3du); f_108b6ce0();
  /* 108c0b3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0b40 push eax */
  push32((uint32_t)(EAX));
  /* 108c0b41 call 0x108b6b60 */
  push32(0x108c0b46u); f_108b6b60();
  /* 108c0b46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0b49 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0b4c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0b4e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108c0b51 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0b54 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 108c0b57 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0b5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0b5d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108c0b60 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0b63 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0b66 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 108c0b6a push eax */
  push32((uint32_t)(EAX));
  /* 108c0b6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0b6e push ecx */
  push32((uint32_t)(ECX));
  /* 108c0b6f call 0x108b6ce0 */
  push32(0x108c0b74u); f_108b6ce0();
  /* 108c0b74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0b77 push eax */
  push32((uint32_t)(EAX));
  /* 108c0b78 call 0x108b6b60 */
  push32(0x108c0b7du); f_108b6b60();
  /* 108c0b7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0b80 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0b83 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0b85 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108c0b88 jmp 0x108c0b0c */
  goto L_108c0b0c;
L_108c0b8a:;
  /* 108c0b8a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0b8d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 108c0b90 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0b93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0b96 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_108c0b99:;
  /* 108c0b99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c0b9c pop esi */
  ESI = (pop32());
  /* 108c0b9d mov esp, ebp */
  ESP = (EBP);
  /* 108c0b9f pop ebp */
  EBP = (pop32());
  /* 108c0ba0 ret  */
  ESPCHK(0x108c0a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bb0 @ 0x108c0bb0 (291 bytes, 97 insns) */
void f_108c0bb0(void) {
  FTRACE(0x108c0bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c0bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 108c0bb1 mov ebp, esp */
  EBP = (ESP);
  /* 108c0bb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c0bb6 push esi */
  push32((uint32_t)(ESI));
  /* 108c0bb7 mov eax, dword ptr [0x108dec98] */
  EAX = (r32((uint32_t)(0x108dec98)));
  /* 108c0bbc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108c0bbf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108c0bc6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 108c0bcd jmp 0x108c0bd8 */
  goto L_108c0bd8;
L_108c0bcf:;
  /* 108c0bcf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0bd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0bd5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_108c0bd8:;
  /* 108c0bd8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0bdc jae 0x108c0c12 */
  if (!C.cf) goto L_108c0c12;
  /* 108c0bde mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0be1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0be4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 108c0be8 push ecx */
  push32((uint32_t)(ECX));
  /* 108c0be9 call 0x108b6b60 */
  push32(0x108c0beeu); f_108b6b60();
  /* 108c0bee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0bf1 mov esi, eax */
  ESI = (EAX);
  /* 108c0bf3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0bf6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0bf9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 108c0bfd push ecx */
  push32((uint32_t)(ECX));
  /* 108c0bfe call 0x108b6b60 */
  push32(0x108c0c03u); f_108b6b60();
  /* 108c0c03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0c06 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0c09 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 108c0c0d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108c0c10 jmp 0x108c0bcf */
  goto L_108c0bcf;
L_108c0c12:;
  /* 108c0c12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c0c15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0c18 push eax */
  push32((uint32_t)(EAX));
  /* 108c0c19 call 0x108b3d10 */
  push32(0x108c0c1eu); f_108b3d10();
  /* 108c0c1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0c21 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108c0c24 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0c28 je 0x108c0ccb */
  if (C.zf) goto L_108c0ccb;
  /* 108c0c2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c0c31 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108c0c34 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 108c0c3b jmp 0x108c0c46 */
  goto L_108c0c46;
L_108c0c3d:;
  /* 108c0c3d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0c40 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0c43 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_108c0c46:;
  /* 108c0c46 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0c4a jae 0x108c0cbc */
  if (!C.cf) goto L_108c0cbc;
  /* 108c0c4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0c4f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 108c0c52 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0c55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0c58 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108c0c5b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0c5e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0c61 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 108c0c65 push ecx */
  push32((uint32_t)(ECX));
  /* 108c0c66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0c69 push edx */
  push32((uint32_t)(EDX));
  /* 108c0c6a call 0x108b6ce0 */
  push32(0x108c0c6fu); f_108b6ce0();
  /* 108c0c6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0c72 push eax */
  push32((uint32_t)(EAX));
  /* 108c0c73 call 0x108b6b60 */
  push32(0x108c0c78u); f_108b6b60();
  /* 108c0c78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0c7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0c7e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0c80 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108c0c83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0c86 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 108c0c89 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0c8c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0c8f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108c0c92 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0c95 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0c98 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 108c0c9c push eax */
  push32((uint32_t)(EAX));
  /* 108c0c9d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0ca0 push ecx */
  push32((uint32_t)(ECX));
  /* 108c0ca1 call 0x108b6ce0 */
  push32(0x108c0ca6u); f_108b6ce0();
  /* 108c0ca6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0ca9 push eax */
  push32((uint32_t)(EAX));
  /* 108c0caa call 0x108b6b60 */
  push32(0x108c0cafu); f_108b6b60();
  /* 108c0caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0cb2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0cb5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0cb7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108c0cba jmp 0x108c0c3d */
  goto L_108c0c3d;
L_108c0cbc:;
  /* 108c0cbc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0cbf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 108c0cc2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0cc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0cc8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_108c0ccb:;
  /* 108c0ccb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c0cce pop esi */
  ESI = (pop32());
  /* 108c0ccf mov esp, ebp */
  ESP = (EBP);
  /* 108c0cd1 pop ebp */
  EBP = (pop32());
  /* 108c0cd2 ret  */
  ESPCHK(0x108c0bb0u, _esp0);
  ESP += 4; return;
}

