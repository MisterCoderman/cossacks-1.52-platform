#include "recomp.h"

/* FUN_10007c70 @ 0x10dd7c70 (116 bytes, 34 insns) */
void f_10dd7c70(void) {
  FTRACE(0x10dd7c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7c71 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7c74 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10dd7c7b push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd7c7d call 0x10dd7490 */
  push32(0x10dd7c82u); f_10dd7490();
  /* 10dd7c82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7c85 call 0x10dd9380 */
  push32(0x10dd7c8au); f_10dd9380();
  /* 10dd7c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd7c8c jge 0x10dd7c95 */
  if ((C.sf==C.of)) goto L_10dd7c95;
  /* 10dd7c8e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10dd7c95:;
  /* 10dd7c95 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd7c97 call 0x10dd7530 */
  push32(0x10dd7c9cu); f_10dd7530();
  /* 10dd7c9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd7ca1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd7ca3 mov eax, dword ptr [0x10e00f4c] */
  EAX = (r32((uint32_t)(0x10e00f4c)));
  /* 10dd7ca8 push eax */
  push32((uint32_t)(EAX));
  /* 10dd7ca9 call dword ptr [0x10e02340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02340))), 0x10dd7cafu);
  /* 10dd7caf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd7cb1 jne 0x10dd7cdd */
  if (!C.zf) goto L_10dd7cdd;
  /* 10dd7cb3 call dword ptr [0x10e02320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02320))), 0x10dd7cb9u);
  /* 10dd7cb9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7cbc jne 0x10dd7cd6 */
  if (!C.zf) goto L_10dd7cd6;
  /* 10dd7cbe call 0x10ddb970 */
  push32(0x10dd7cc3u); f_10ddb970();
  /* 10dd7cc3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10dd7cc9 call 0x10ddb960 */
  push32(0x10dd7cceu); f_10ddb960();
  /* 10dd7cce mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10dd7cd4 jmp 0x10dd7cdd */
  goto L_10dd7cdd;
L_10dd7cd6:;
  /* 10dd7cd6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10dd7cdd:;
  /* 10dd7cdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7ce0 mov esp, ebp */
  ESP = (EBP);
  /* 10dd7ce2 pop ebp */
  EBP = (pop32());
  /* 10dd7ce3 ret  */
  ESPCHK(0x10dd7c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf0 @ 0x10dd7cf0 (10 bytes, 5 insns) */
void f_10dd7cf0(void) {
  FTRACE(0x10dd7cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7cf3 call 0x10dd7c70 */
  push32(0x10dd7cf8u); f_10dd7c70();
  /* 10dd7cf8 pop ebp */
  EBP = (pop32());
  /* 10dd7cf9 ret  */
  ESPCHK(0x10dd7cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d00 @ 0x10dd7d00 (10 bytes, 5 insns) */
void f_10dd7d00(void) {
  FTRACE(0x10dd7d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7d01 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7d03 mov eax, dword ptr [0x10dfdc94] */
  EAX = (r32((uint32_t)(0x10dfdc94)));
  /* 10dd7d08 pop ebp */
  EBP = (pop32());
  /* 10dd7d09 ret  */
  ESPCHK(0x10dd7d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d10 @ 0x10dd7d10 (31 bytes, 11 insns) */
void f_10dd7d10(void) {
  FTRACE(0x10dd7d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7d10 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7d11 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7d13 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7d1a jbe 0x10dd7d20 */
  if ((C.cf||C.zf)) goto L_10dd7d20;
  /* 10dd7d1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd7d1e jmp 0x10dd7d2d */
  goto L_10dd7d2d;
L_10dd7d20:;
  /* 10dd7d20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7d23 mov dword ptr [0x10dfdc94], eax */
  w32((uint32_t)(0x10dfdc94), (EAX));
  /* 10dd7d28 mov eax, 1 */
  EAX = (0x1u);
L_10dd7d2d:;
  /* 10dd7d2d pop ebp */
  EBP = (pop32());
  /* 10dd7d2e ret  */
  ESPCHK(0x10dd7d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d30 @ 0x10dd7d30 (89 bytes, 20 insns) */
void f_10dd7d30(void) {
  FTRACE(0x10dd7d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7d31 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7d33 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10dd7d38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd7d3a mov eax, dword ptr [0x10e00f4c] */
  EAX = (r32((uint32_t)(0x10e00f4c)));
  /* 10dd7d3f push eax */
  push32((uint32_t)(EAX));
  /* 10dd7d40 call dword ptr [0x10e0237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0237c))), 0x10dd7d46u);
  /* 10dd7d46 mov dword ptr [0x10e00f48], eax */
  w32((uint32_t)(0x10e00f48), (EAX));
  /* 10dd7d4b cmp dword ptr [0x10e00f48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e00f48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7d52 jne 0x10dd7d58 */
  if (!C.zf) goto L_10dd7d58;
  /* 10dd7d54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd7d56 jmp 0x10dd7d87 */
  goto L_10dd7d87;
L_10dd7d58:;
  /* 10dd7d58 mov ecx, dword ptr [0x10e00f48] */
  ECX = (r32((uint32_t)(0x10e00f48)));
  /* 10dd7d5e mov dword ptr [0x10e00f3c], ecx */
  w32((uint32_t)(0x10e00f3c), (ECX));
  /* 10dd7d64 mov dword ptr [0x10e00f40], 0 */
  w32((uint32_t)(0x10e00f40), (0x0u));
  /* 10dd7d6e mov dword ptr [0x10e00f44], 0 */
  w32((uint32_t)(0x10e00f44), (0x0u));
  /* 10dd7d78 mov dword ptr [0x10e00f28], 0x10 */
  w32((uint32_t)(0x10e00f28), (0x10u));
  /* 10dd7d82 mov eax, 1 */
  EAX = (0x1u);
L_10dd7d87:;
  /* 10dd7d87 pop ebp */
  EBP = (pop32());
  /* 10dd7d88 ret  */
  ESPCHK(0x10dd7d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d90 @ 0x10dd7d90 (85 bytes, 29 insns) */
void f_10dd7d90(void) {
  FTRACE(0x10dd7d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7d91 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7d93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd7d96 mov eax, dword ptr [0x10e00f44] */
  EAX = (r32((uint32_t)(0x10e00f44)));
  /* 10dd7d9b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd7d9e mov ecx, dword ptr [0x10e00f48] */
  ECX = (r32((uint32_t)(0x10e00f48)));
  /* 10dd7da4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7da6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dd7da9 mov edx, dword ptr [0x10e00f48] */
  EDX = (r32((uint32_t)(0x10e00f48)));
  /* 10dd7daf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10dd7db2:;
  /* 10dd7db2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7db5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7db8 jae 0x10dd7ddf */
  if (!C.cf) goto L_10dd7ddf;
  /* 10dd7dba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7dbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7dc0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd7dc3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd7dc6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7dcd jae 0x10dd7dd4 */
  if (!C.cf) goto L_10dd7dd4;
  /* 10dd7dcf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7dd2 jmp 0x10dd7de1 */
  goto L_10dd7de1;
L_10dd7dd4:;
  /* 10dd7dd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7dd7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7dda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd7ddd jmp 0x10dd7db2 */
  goto L_10dd7db2;
L_10dd7ddf:;
  /* 10dd7ddf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10dd7de1:;
  /* 10dd7de1 mov esp, ebp */
  ESP = (EBP);
  /* 10dd7de3 pop ebp */
  EBP = (pop32());
  /* 10dd7de4 ret  */
  ESPCHK(0x10dd7d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007df0 @ 0x10dd7df0 (95 bytes, 33 insns) */
void f_10dd7df0(void) {
  FTRACE(0x10dd7df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7df0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7df1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7df3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd7df6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7df9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd7dfc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd7dff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10dd7e02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7e05 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10dd7e08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd7e0b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd7e10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7e13 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd7e15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7e18 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10dd7e1b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd7e1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd7e1f jne 0x10dd7e41 */
  if (!C.zf) goto L_10dd7e41;
  /* 10dd7e21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7e24 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd7e27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd7e29 jne 0x10dd7e41 */
  if (!C.zf) goto L_10dd7e41;
  /* 10dd7e2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7e2e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd7e34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd7e36 je 0x10dd7e41 */
  if (C.zf) goto L_10dd7e41;
  /* 10dd7e38 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10dd7e3f jmp 0x10dd7e48 */
  goto L_10dd7e48;
L_10dd7e41:;
  /* 10dd7e41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10dd7e48:;
  /* 10dd7e48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd7e4b mov esp, ebp */
  ESP = (EBP);
  /* 10dd7e4d pop ebp */
  EBP = (pop32());
  /* 10dd7e4e ret  */
  ESPCHK(0x10dd7df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e50 @ 0x10dd7e50 (1485 bytes, 453 insns) */
void f_10dd7e50(void) {
  FTRACE(0x10dd7e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7e51 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7e53 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd7e56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7e59 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10dd7e5c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10dd7e5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7e62 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd7e65 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd7e68 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10dd7e6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd7e6e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10dd7e71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10dd7e74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7e77 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd7e7d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd7e80 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10dd7e87 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10dd7e8a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd7e8d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd7e90 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10dd7e93 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd7e96 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd7e98 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd7e9b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10dd7e9e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd7ea1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7ea4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10dd7ea7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd7eaa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd7eac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10dd7eaf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd7eb2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10dd7eb5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dd7eb8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd7ebb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10dd7ebe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd7ec0 jne 0x10dd7fe8 */
  if (!C.zf) goto L_10dd7fe8;
  /* 10dd7ec6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd7ec9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10dd7ecc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd7ecf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10dd7ed2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7ed6 jbe 0x10dd7edf */
  if ((C.cf||C.zf)) goto L_10dd7edf;
  /* 10dd7ed8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10dd7edf:;
  /* 10dd7edf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd7ee2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd7ee5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd7ee8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7eeb jne 0x10dd7fc1 */
  if (!C.zf) goto L_10dd7fc1;
  /* 10dd7ef1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7ef5 jae 0x10dd7f56 */
  if (!C.cf) goto L_10dd7f56;
  /* 10dd7ef7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd7efc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd7eff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd7f01 not eax */
  EAX = (~(EAX));
  /* 10dd7f03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7f06 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd7f09 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10dd7f0d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd7f0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7f12 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd7f15 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10dd7f19 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd7f1c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7f1f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10dd7f22 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10dd7f25 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd7f28 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7f2b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10dd7f2e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd7f31 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7f34 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10dd7f38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd7f3a jne 0x10dd7f54 */
  if (!C.zf) goto L_10dd7f54;
  /* 10dd7f3c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd7f41 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd7f44 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd7f46 not eax */
  EAX = (~(EAX));
  /* 10dd7f48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7f4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd7f4d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd7f4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7f52 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10dd7f54:;
  /* 10dd7f54 jmp 0x10dd7fc1 */
  goto L_10dd7fc1;
L_10dd7f56:;
  /* 10dd7f56 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd7f59 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd7f5c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd7f61 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd7f63 not edx */
  EDX = (~(EDX));
  /* 10dd7f65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7f68 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd7f6b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10dd7f72 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd7f74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7f77 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd7f7a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10dd7f81 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd7f84 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7f87 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10dd7f8a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10dd7f8d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd7f90 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7f93 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10dd7f96 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd7f99 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7f9c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10dd7fa0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd7fa2 jne 0x10dd7fc1 */
  if (!C.zf) goto L_10dd7fc1;
  /* 10dd7fa4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd7fa7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd7faa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd7faf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd7fb1 not edx */
  EDX = (~(EDX));
  /* 10dd7fb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7fb6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd7fb9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd7fbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7fbe mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10dd7fc1:;
  /* 10dd7fc1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd7fc4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10dd7fc7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd7fca mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10dd7fcd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10dd7fd0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd7fd3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd7fd6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd7fd9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10dd7fdc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10dd7fdf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd7fe2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7fe5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10dd7fe8:;
  /* 10dd7fe8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd7feb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10dd7fee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd7ff1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10dd7ff4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7ff8 jbe 0x10dd8001 */
  if ((C.cf||C.zf)) goto L_10dd8001;
  /* 10dd7ffa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10dd8001:;
  /* 10dd8001 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd8004 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10dd8007 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd8009 jne 0x10dd8165 */
  if (!C.zf) goto L_10dd8165;
  /* 10dd800f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd8012 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8015 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10dd8018 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd801b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10dd801e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8021 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10dd8024 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8028 jbe 0x10dd8031 */
  if ((C.cf||C.zf)) goto L_10dd8031;
  /* 10dd802a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10dd8031:;
  /* 10dd8031 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8034 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8037 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10dd803a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd803d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10dd8040 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8043 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10dd8046 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd804a jbe 0x10dd8053 */
  if ((C.cf||C.zf)) goto L_10dd8053;
  /* 10dd804c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10dd8053:;
  /* 10dd8053 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8056 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8059 je 0x10dd815f */
  if (C.zf) goto L_10dd815f;
  /* 10dd805f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10dd8062 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10dd8065 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd8068 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd806b jne 0x10dd8141 */
  if (!C.zf) goto L_10dd8141;
  /* 10dd8071 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8075 jae 0x10dd80d6 */
  if (!C.cf) goto L_10dd80d6;
  /* 10dd8077 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd807c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd807f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd8081 not edx */
  EDX = (~(EDX));
  /* 10dd8083 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8086 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd8089 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10dd808d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd808f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8092 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd8095 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10dd8099 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd809c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd809f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10dd80a2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10dd80a5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd80a8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd80ab mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10dd80ae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd80b1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd80b4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10dd80b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd80ba jne 0x10dd80d4 */
  if (!C.zf) goto L_10dd80d4;
  /* 10dd80bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd80c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd80c4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd80c6 not edx */
  EDX = (~(EDX));
  /* 10dd80c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd80cb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd80cd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd80cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd80d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10dd80d4:;
  /* 10dd80d4 jmp 0x10dd8141 */
  goto L_10dd8141;
L_10dd80d6:;
  /* 10dd80d6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd80d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd80dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd80e1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd80e3 not eax */
  EAX = (~(EAX));
  /* 10dd80e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd80e8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd80eb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10dd80f2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd80f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd80f7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd80fa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10dd8101 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd8104 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8107 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10dd810a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10dd810d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd8110 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8113 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10dd8116 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd8119 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd811c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10dd8120 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd8122 jne 0x10dd8141 */
  if (!C.zf) goto L_10dd8141;
  /* 10dd8124 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8127 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd812a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd812f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd8131 not eax */
  EAX = (~(EAX));
  /* 10dd8133 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8136 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd8139 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd813b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd813e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10dd8141:;
  /* 10dd8141 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10dd8144 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10dd8147 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10dd814a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd814d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10dd8150 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10dd8153 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10dd8156 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10dd8159 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10dd815c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10dd815f:;
  /* 10dd815f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10dd8162 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10dd8165:;
  /* 10dd8165 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd8168 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10dd816b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd816d jne 0x10dd817b */
  if (!C.zf) goto L_10dd817b;
  /* 10dd816f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8172 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8175 je 0x10dd828b */
  if (C.zf) goto L_10dd828b;
L_10dd817b:;
  /* 10dd817b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd817e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd8181 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10dd8184 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10dd8187 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd818a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd818d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd8190 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10dd8193 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd8196 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd8199 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10dd819c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd819f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd81a2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10dd81a5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd81a8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd81ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd81ae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10dd81b1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd81b4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd81b7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd81ba cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd81bd jne 0x10dd828b */
  if (!C.zf) goto L_10dd828b;
  /* 10dd81c3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd81c7 jae 0x10dd8224 */
  if (!C.cf) goto L_10dd8224;
  /* 10dd81c9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd81cc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd81cf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10dd81d3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd81d6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd81d9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10dd81dc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10dd81df mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd81e2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd81e5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10dd81e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd81ea jne 0x10dd8202 */
  if (!C.zf) goto L_10dd8202;
  /* 10dd81ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd81f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd81f4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd81f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd81f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd81fb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd81fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8200 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10dd8202:;
  /* 10dd8202 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd8207 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd820a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd820c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd820f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd8212 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10dd8216 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd8218 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd821b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd821e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10dd8222 jmp 0x10dd828b */
  goto L_10dd828b;
L_10dd8224:;
  /* 10dd8224 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd8227 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd822a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10dd822e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd8231 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8234 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10dd8237 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10dd823a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd823d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8240 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10dd8243 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd8245 jne 0x10dd8262 */
  if (!C.zf) goto L_10dd8262;
  /* 10dd8247 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd824a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd824d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd8252 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd8254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8257 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd825a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd825c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd825f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10dd8262:;
  /* 10dd8262 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd8265 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8268 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd826d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd826f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8272 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd8275 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10dd827c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd827e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8281 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10dd8284 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10dd828b:;
  /* 10dd828b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd828e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8291 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10dd8293 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd8296 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8299 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd829c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10dd829f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd82a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd82a4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd82a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd82aa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10dd82ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd82af cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd82b2 jne 0x10dd8419 */
  if (!C.zf) goto L_10dd8419;
  /* 10dd82b8 cmp dword ptr [0x10e00f40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e00f40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd82bf je 0x10dd8408 */
  if (C.zf) goto L_10dd8408;
  /* 10dd82c5 mov eax, dword ptr [0x10e00f38] */
  EAX = (r32((uint32_t)(0x10e00f38)));
  /* 10dd82ca shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10dd82cd mov ecx, dword ptr [0x10e00f40] */
  ECX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd82d3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10dd82d6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd82d8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10dd82db push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10dd82e0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10dd82e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd82e8 push eax */
  push32((uint32_t)(EAX));
  /* 10dd82e9 call dword ptr [0x10e02364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02364))), 0x10dd82efu);
  /* 10dd82ef mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd82f4 mov ecx, dword ptr [0x10e00f38] */
  ECX = (r32((uint32_t)(0x10e00f38)));
  /* 10dd82fa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd82fc mov eax, dword ptr [0x10e00f40] */
  EAX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd8301 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10dd8304 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd8306 mov edx, dword ptr [0x10e00f40] */
  EDX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd830c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10dd830f mov eax, dword ptr [0x10e00f40] */
  EAX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd8314 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10dd8317 mov edx, dword ptr [0x10e00f38] */
  EDX = (r32((uint32_t)(0x10e00f38)));
  /* 10dd831d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10dd8328 mov eax, dword ptr [0x10e00f40] */
  EAX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd832d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10dd8330 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10dd8333 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10dd8336 mov eax, dword ptr [0x10e00f40] */
  EAX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd833b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10dd833e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10dd8341 mov edx, dword ptr [0x10e00f40] */
  EDX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd8347 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10dd834a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10dd834e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd8350 jne 0x10dd8366 */
  if (!C.zf) goto L_10dd8366;
  /* 10dd8352 mov edx, dword ptr [0x10e00f40] */
  EDX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd8358 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10dd835b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10dd835d mov ecx, dword ptr [0x10e00f40] */
  ECX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd8363 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10dd8366:;
  /* 10dd8366 mov edx, dword ptr [0x10e00f40] */
  EDX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd836c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8370 jne 0x10dd8408 */
  if (!C.zf) goto L_10dd8408;
  /* 10dd8376 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10dd837b push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd837d mov eax, dword ptr [0x10e00f40] */
  EAX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd8382 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10dd8385 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd8386 call dword ptr [0x10e02364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02364))), 0x10dd838cu);
  /* 10dd838c mov edx, dword ptr [0x10e00f40] */
  EDX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd8392 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10dd8395 push eax */
  push32((uint32_t)(EAX));
  /* 10dd8396 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd8398 mov ecx, dword ptr [0x10e00f4c] */
  ECX = (r32((uint32_t)(0x10e00f4c)));
  /* 10dd839e push ecx */
  push32((uint32_t)(ECX));
  /* 10dd839f call dword ptr [0x10e02360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02360))), 0x10dd83a5u);
  /* 10dd83a5 mov edx, dword ptr [0x10e00f44] */
  EDX = (r32((uint32_t)(0x10e00f44)));
  /* 10dd83ab imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd83ae mov eax, dword ptr [0x10e00f48] */
  EAX = (r32((uint32_t)(0x10e00f48)));
  /* 10dd83b3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd83b5 mov ecx, dword ptr [0x10e00f40] */
  ECX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd83bb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd83be sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd83c0 push eax */
  push32((uint32_t)(EAX));
  /* 10dd83c1 mov edx, dword ptr [0x10e00f40] */
  EDX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd83c7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd83ca push edx */
  push32((uint32_t)(EDX));
  /* 10dd83cb mov eax, dword ptr [0x10e00f40] */
  EAX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd83d0 push eax */
  push32((uint32_t)(EAX));
  /* 10dd83d1 call 0x10ddb980 */
  push32(0x10dd83d6u); f_10ddb980();
  /* 10dd83d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd83d9 mov ecx, dword ptr [0x10e00f44] */
  ECX = (r32((uint32_t)(0x10e00f44)));
  /* 10dd83df sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd83e2 mov dword ptr [0x10e00f44], ecx */
  w32((uint32_t)(0x10e00f44), (ECX));
  /* 10dd83e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd83eb cmp edx, dword ptr [0x10e00f40] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e00f40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd83f1 jbe 0x10dd83fc */
  if ((C.cf||C.zf)) goto L_10dd83fc;
  /* 10dd83f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd83f6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd83f9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10dd83fc:;
  /* 10dd83fc mov ecx, dword ptr [0x10e00f48] */
  ECX = (r32((uint32_t)(0x10e00f48)));
  /* 10dd8402 mov dword ptr [0x10e00f3c], ecx */
  w32((uint32_t)(0x10e00f3c), (ECX));
L_10dd8408:;
  /* 10dd8408 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd840b mov dword ptr [0x10e00f40], edx */
  w32((uint32_t)(0x10e00f40), (EDX));
  /* 10dd8411 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8414 mov dword ptr [0x10e00f38], eax */
  w32((uint32_t)(0x10e00f38), (EAX));
L_10dd8419:;
  /* 10dd8419 mov esp, ebp */
  ESP = (EBP);
  /* 10dd841b pop ebp */
  EBP = (pop32());
  /* 10dd841c ret  */
  ESPCHK(0x10dd7e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008420 @ 0x10dd8420 (1334 bytes, 427 insns) */
void f_10dd8420(void) {
  FTRACE(0x10dd8420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd8420 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd8421 mov ebp, esp */
  EBP = (ESP);
  /* 10dd8423 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8426 push esi */
  push32((uint32_t)(ESI));
  /* 10dd8427 mov eax, dword ptr [0x10e00f44] */
  EAX = (r32((uint32_t)(0x10e00f44)));
  /* 10dd842c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd842f mov ecx, dword ptr [0x10e00f48] */
  ECX = (r32((uint32_t)(0x10e00f48)));
  /* 10dd8435 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8437 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10dd843a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd843d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8440 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10dd8443 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10dd8446 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd8449 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10dd844c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd844f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10dd8452 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8456 jge 0x10dd846c */
  if ((C.sf==C.of)) goto L_10dd846c;
  /* 10dd8458 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dd845b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd845e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd8460 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10dd8463 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10dd846a jmp 0x10dd8481 */
  goto L_10dd8481;
L_10dd846c:;
  /* 10dd846c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10dd8473 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd8476 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8479 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd847c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd847e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10dd8481:;
  /* 10dd8481 mov ecx, dword ptr [0x10e00f3c] */
  ECX = (r32((uint32_t)(0x10e00f3c)));
  /* 10dd8487 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10dd848a:;
  /* 10dd848a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd848d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8490 jae 0x10dd84b6 */
  if (!C.cf) goto L_10dd84b6;
  /* 10dd8492 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8495 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd8498 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10dd849a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd849d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10dd84a0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10dd84a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd84a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd84a7 je 0x10dd84ab */
  if (C.zf) goto L_10dd84ab;
  /* 10dd84a9 jmp 0x10dd84b6 */
  goto L_10dd84b6;
L_10dd84ab:;
  /* 10dd84ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd84ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd84b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10dd84b4 jmp 0x10dd848a */
  goto L_10dd848a;
L_10dd84b6:;
  /* 10dd84b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd84b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd84bc jne 0x10dd859d */
  if (!C.zf) goto L_10dd859d;
  /* 10dd84c2 mov eax, dword ptr [0x10e00f48] */
  EAX = (r32((uint32_t)(0x10e00f48)));
  /* 10dd84c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10dd84ca:;
  /* 10dd84ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd84cd cmp ecx, dword ptr [0x10e00f3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e00f3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd84d3 jae 0x10dd84f9 */
  if (!C.cf) goto L_10dd84f9;
  /* 10dd84d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd84d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd84db and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10dd84dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd84e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10dd84e3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10dd84e6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd84e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd84ea je 0x10dd84ee */
  if (C.zf) goto L_10dd84ee;
  /* 10dd84ec jmp 0x10dd84f9 */
  goto L_10dd84f9;
L_10dd84ee:;
  /* 10dd84ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd84f1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd84f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10dd84f7 jmp 0x10dd84ca */
  goto L_10dd84ca;
L_10dd84f9:;
  /* 10dd84f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd84fc cmp ecx, dword ptr [0x10e00f3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e00f3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8502 jne 0x10dd859d */
  if (!C.zf) goto L_10dd859d;
L_10dd8508:;
  /* 10dd8508 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd850b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd850e jae 0x10dd8526 */
  if (!C.cf) goto L_10dd8526;
  /* 10dd8510 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8513 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8517 je 0x10dd851b */
  if (C.zf) goto L_10dd851b;
  /* 10dd8519 jmp 0x10dd8526 */
  goto L_10dd8526;
L_10dd851b:;
  /* 10dd851b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd851e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8521 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10dd8524 jmp 0x10dd8508 */
  goto L_10dd8508;
L_10dd8526:;
  /* 10dd8526 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8529 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd852c jne 0x10dd8577 */
  if (!C.zf) goto L_10dd8577;
  /* 10dd852e mov eax, dword ptr [0x10e00f48] */
  EAX = (r32((uint32_t)(0x10e00f48)));
  /* 10dd8533 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10dd8536:;
  /* 10dd8536 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8539 cmp ecx, dword ptr [0x10e00f3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e00f3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd853f jae 0x10dd8557 */
  if (!C.cf) goto L_10dd8557;
  /* 10dd8541 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8544 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8548 je 0x10dd854c */
  if (C.zf) goto L_10dd854c;
  /* 10dd854a jmp 0x10dd8557 */
  goto L_10dd8557;
L_10dd854c:;
  /* 10dd854c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd854f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8552 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10dd8555 jmp 0x10dd8536 */
  goto L_10dd8536;
L_10dd8557:;
  /* 10dd8557 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd855a cmp ecx, dword ptr [0x10e00f3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e00f3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8560 jne 0x10dd8577 */
  if (!C.zf) goto L_10dd8577;
  /* 10dd8562 call 0x10dd8960 */
  push32(0x10dd8567u); f_10dd8960();
  /* 10dd8567 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10dd856a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd856e jne 0x10dd8577 */
  if (!C.zf) goto L_10dd8577;
  /* 10dd8570 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd8572 jmp 0x10dd8951 */
  goto L_10dd8951;
L_10dd8577:;
  /* 10dd8577 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd857a push edx */
  push32((uint32_t)(EDX));
  /* 10dd857b call 0x10dd8a70 */
  push32(0x10dd8580u); f_10dd8a70();
  /* 10dd8580 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8583 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8586 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10dd8589 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10dd858b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd858e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10dd8591 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8594 jne 0x10dd859d */
  if (!C.zf) goto L_10dd859d;
  /* 10dd8596 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd8598 jmp 0x10dd8951 */
  goto L_10dd8951;
L_10dd859d:;
  /* 10dd859d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd85a0 mov dword ptr [0x10e00f3c], edx */
  w32((uint32_t)(0x10e00f3c), (EDX));
  /* 10dd85a6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd85a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10dd85ac mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10dd85af mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd85b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd85b4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10dd85b7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd85bb je 0x10dd85e0 */
  if (C.zf) goto L_10dd85e0;
  /* 10dd85bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd85c0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd85c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd85c6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10dd85ca mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd85cd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd85d0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10dd85d3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10dd85da or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10dd85dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd85de jne 0x10dd8615 */
  if (!C.zf) goto L_10dd8615;
L_10dd85e0:;
  /* 10dd85e0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10dd85e7:;
  /* 10dd85e7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd85ea mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd85ed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd85f0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10dd85f4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd85f7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd85fa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10dd85fd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10dd8604 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10dd8606 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd8608 jne 0x10dd8615 */
  if (!C.zf) goto L_10dd8615;
  /* 10dd860a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd860d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8610 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10dd8613 jmp 0x10dd85e7 */
  goto L_10dd85e7;
L_10dd8615:;
  /* 10dd8615 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8618 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd861e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd8621 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10dd8628 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd862b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10dd8632 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8635 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd8638 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd863b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10dd863f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10dd8642 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8646 jne 0x10dd8662 */
  if (!C.zf) goto L_10dd8662;
  /* 10dd8648 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10dd864f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8652 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd8655 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10dd8658 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10dd865f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10dd8662:;
  /* 10dd8662 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8666 jl 0x10dd867b */
  if ((C.sf!=C.of)) goto L_10dd867b;
  /* 10dd8668 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd866b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10dd866d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10dd8670 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd8673 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8676 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10dd8679 jmp 0x10dd8662 */
  goto L_10dd8662;
L_10dd867b:;
  /* 10dd867b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd867e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8681 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10dd8685 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10dd8688 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd868b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd868d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8690 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd8693 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd8696 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10dd8699 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd869c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10dd869f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd86a3 jle 0x10dd86ac */
  if ((C.zf||C.sf!=C.of)) goto L_10dd86ac;
  /* 10dd86a5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10dd86ac:;
  /* 10dd86ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd86af cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd86b2 je 0x10dd88d0 */
  if (C.zf) goto L_10dd88d0;
  /* 10dd86b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd86bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd86be mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd86c1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd86c4 jne 0x10dd879a */
  if (!C.zf) goto L_10dd879a;
  /* 10dd86ca cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd86ce jge 0x10dd872f */
  if ((C.sf==C.of)) goto L_10dd872f;
  /* 10dd86d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd86d5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd86d8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd86da not eax */
  EAX = (~(EAX));
  /* 10dd86dc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd86df mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd86e2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10dd86e6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd86e8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd86eb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd86ee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10dd86f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd86f5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd86f8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10dd86fb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10dd86fe mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd8701 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8704 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10dd8707 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd870a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd870d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10dd8711 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd8713 jne 0x10dd872d */
  if (!C.zf) goto L_10dd872d;
  /* 10dd8715 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd871a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd871d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd871f not eax */
  EAX = (~(EAX));
  /* 10dd8721 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8724 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd8726 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd8728 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd872b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10dd872d:;
  /* 10dd872d jmp 0x10dd879a */
  goto L_10dd879a;
L_10dd872f:;
  /* 10dd872f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd8732 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8735 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd873a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd873c not edx */
  EDX = (~(EDX));
  /* 10dd873e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8741 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd8744 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10dd874b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd874d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8750 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd8753 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10dd875a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd875d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8760 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10dd8763 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10dd8766 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd8769 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd876c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10dd876f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd8772 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8775 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10dd8779 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd877b jne 0x10dd879a */
  if (!C.zf) goto L_10dd879a;
  /* 10dd877d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd8780 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8783 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd8788 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd878a not edx */
  EDX = (~(EDX));
  /* 10dd878c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd878f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd8792 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd8794 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8797 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10dd879a:;
  /* 10dd879a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd879d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10dd87a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd87a3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10dd87a6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10dd87a9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd87ac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd87af mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd87b2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10dd87b5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10dd87b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd87bc je 0x10dd88d0 */
  if (C.zf) goto L_10dd88d0;
  /* 10dd87c2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd87c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd87c8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10dd87cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dd87ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd87d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd87d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd87d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10dd87da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd87dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd87e0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10dd87e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd87e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd87e9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10dd87ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd87ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd87f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd87f5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10dd87f8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd87fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd87fe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd8801 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8804 jne 0x10dd88d0 */
  if (!C.zf) goto L_10dd88d0;
  /* 10dd880a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd880e jge 0x10dd886a */
  if ((C.sf==C.of)) goto L_10dd886a;
  /* 10dd8810 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd8813 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8816 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10dd881a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd881d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8820 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10dd8823 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10dd8825 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd8828 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd882b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10dd882e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd8830 jne 0x10dd8848 */
  if (!C.zf) goto L_10dd8848;
  /* 10dd8832 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd8837 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd883a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd883c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd883f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd8841 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd8843 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8846 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10dd8848:;
  /* 10dd8848 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd884d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd8850 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd8852 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8855 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd8858 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10dd885c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd885e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8861 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd8864 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10dd8868 jmp 0x10dd88d0 */
  goto L_10dd88d0;
L_10dd886a:;
  /* 10dd886a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd886d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8870 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10dd8874 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd8877 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd887a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10dd887d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10dd887f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd8882 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8885 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10dd8888 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd888a jne 0x10dd88a7 */
  if (!C.zf) goto L_10dd88a7;
  /* 10dd888c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd888f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8892 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd8897 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd8899 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd889c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd889f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd88a1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd88a4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10dd88a7:;
  /* 10dd88a7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd88aa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd88ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd88b2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd88b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd88b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd88ba mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10dd88c1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd88c3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd88c6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd88c9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10dd88d0:;
  /* 10dd88d0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd88d4 je 0x10dd88ea */
  if (C.zf) goto L_10dd88ea;
  /* 10dd88d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd88d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd88dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10dd88de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd88e1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd88e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd88e7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10dd88ea:;
  /* 10dd88ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd88ed add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd88f0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10dd88f3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd88f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd88f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd88fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10dd88fe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd8901 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8904 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd8907 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd890a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10dd890d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8910 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd8912 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8915 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd8917 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd891a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd891d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10dd891f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd8921 jne 0x10dd8943 */
  if (!C.zf) goto L_10dd8943;
  /* 10dd8923 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8926 cmp eax, dword ptr [0x10e00f40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e00f40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd892c jne 0x10dd8943 */
  if (!C.zf) goto L_10dd8943;
  /* 10dd892e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8931 cmp ecx, dword ptr [0x10e00f38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e00f38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8937 jne 0x10dd8943 */
  if (!C.zf) goto L_10dd8943;
  /* 10dd8939 mov dword ptr [0x10e00f40], 0 */
  w32((uint32_t)(0x10e00f40), (0x0u));
L_10dd8943:;
  /* 10dd8943 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10dd8946 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8949 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10dd894b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd894e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10dd8951:;
  /* 10dd8951 pop esi */
  ESI = (pop32());
  /* 10dd8952 mov esp, ebp */
  ESP = (EBP);
  /* 10dd8954 pop ebp */
  EBP = (pop32());
  /* 10dd8955 ret  */
  ESPCHK(0x10dd8420u, _esp0);
  ESP += 4; return;
}

/* FUN_10008960 @ 0x10dd8960 (271 bytes, 78 insns) */
void f_10dd8960(void) {
  FTRACE(0x10dd8960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd8960 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd8961 mov ebp, esp */
  EBP = (ESP);
  /* 10dd8963 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd8964 mov eax, dword ptr [0x10e00f44] */
  EAX = (r32((uint32_t)(0x10e00f44)));
  /* 10dd8969 cmp eax, dword ptr [0x10e00f28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e00f28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd896f jne 0x10dd89bb */
  if (!C.zf) goto L_10dd89bb;
  /* 10dd8971 mov ecx, dword ptr [0x10e00f28] */
  ECX = (r32((uint32_t)(0x10e00f28)));
  /* 10dd8977 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd897a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd897d push ecx */
  push32((uint32_t)(ECX));
  /* 10dd897e mov edx, dword ptr [0x10e00f48] */
  EDX = (r32((uint32_t)(0x10e00f48)));
  /* 10dd8984 push edx */
  push32((uint32_t)(EDX));
  /* 10dd8985 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd8987 mov eax, dword ptr [0x10e00f4c] */
  EAX = (r32((uint32_t)(0x10e00f4c)));
  /* 10dd898c push eax */
  push32((uint32_t)(EAX));
  /* 10dd898d call dword ptr [0x10e02380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02380))), 0x10dd8993u);
  /* 10dd8993 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd8996 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd899a jne 0x10dd89a3 */
  if (!C.zf) goto L_10dd89a3;
  /* 10dd899c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd899e jmp 0x10dd8a6b */
  goto L_10dd8a6b;
L_10dd89a3:;
  /* 10dd89a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd89a6 mov dword ptr [0x10e00f48], ecx */
  w32((uint32_t)(0x10e00f48), (ECX));
  /* 10dd89ac mov edx, dword ptr [0x10e00f28] */
  EDX = (r32((uint32_t)(0x10e00f28)));
  /* 10dd89b2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd89b5 mov dword ptr [0x10e00f28], edx */
  w32((uint32_t)(0x10e00f28), (EDX));
L_10dd89bb:;
  /* 10dd89bb mov eax, dword ptr [0x10e00f44] */
  EAX = (r32((uint32_t)(0x10e00f44)));
  /* 10dd89c0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd89c3 mov ecx, dword ptr [0x10e00f48] */
  ECX = (r32((uint32_t)(0x10e00f48)));
  /* 10dd89c9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd89cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10dd89ce push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10dd89d3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10dd89d5 mov edx, dword ptr [0x10e00f4c] */
  EDX = (r32((uint32_t)(0x10e00f4c)));
  /* 10dd89db push edx */
  push32((uint32_t)(EDX));
  /* 10dd89dc call dword ptr [0x10e0237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0237c))), 0x10dd89e2u);
  /* 10dd89e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd89e5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10dd89e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd89eb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd89ef jne 0x10dd89f5 */
  if (!C.zf) goto L_10dd89f5;
  /* 10dd89f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd89f3 jmp 0x10dd8a6b */
  goto L_10dd8a6b;
L_10dd89f5:;
  /* 10dd89f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10dd89f7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10dd89fc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10dd8a01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd8a03 call dword ptr [0x10e02384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02384))), 0x10dd8a09u);
  /* 10dd8a09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8a0c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10dd8a0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8a12 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8a16 jne 0x10dd8a32 */
  if (!C.zf) goto L_10dd8a32;
  /* 10dd8a18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8a1b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10dd8a1e push ecx */
  push32((uint32_t)(ECX));
  /* 10dd8a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd8a21 mov edx, dword ptr [0x10e00f4c] */
  EDX = (r32((uint32_t)(0x10e00f4c)));
  /* 10dd8a27 push edx */
  push32((uint32_t)(EDX));
  /* 10dd8a28 call dword ptr [0x10e02360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02360))), 0x10dd8a2eu);
  /* 10dd8a2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd8a30 jmp 0x10dd8a6b */
  goto L_10dd8a6b;
L_10dd8a32:;
  /* 10dd8a32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8a35 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10dd8a3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8a3e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10dd8a45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8a48 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10dd8a4f mov eax, dword ptr [0x10e00f44] */
  EAX = (r32((uint32_t)(0x10e00f44)));
  /* 10dd8a54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8a57 mov dword ptr [0x10e00f44], eax */
  w32((uint32_t)(0x10e00f44), (EAX));
  /* 10dd8a5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8a5f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10dd8a62 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10dd8a68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10dd8a6b:;
  /* 10dd8a6b mov esp, ebp */
  ESP = (EBP);
  /* 10dd8a6d pop ebp */
  EBP = (pop32());
  /* 10dd8a6e ret  */
  ESPCHK(0x10dd8960u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a70 @ 0x10dd8a70 (494 bytes, 149 insns) */
void f_10dd8a70(void) {
  FTRACE(0x10dd8a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd8a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd8a71 mov ebp, esp */
  EBP = (ESP);
  /* 10dd8a73 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8a79 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10dd8a7c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10dd8a7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8a82 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10dd8a85 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd8a88 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10dd8a8f:;
  /* 10dd8a8f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8a93 jl 0x10dd8aa8 */
  if ((C.sf!=C.of)) goto L_10dd8aa8;
  /* 10dd8a95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd8a98 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10dd8a9a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10dd8a9d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd8aa0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8aa3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10dd8aa6 jmp 0x10dd8a8f */
  goto L_10dd8a8f;
L_10dd8aa8:;
  /* 10dd8aa8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd8aab imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd8ab1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8ab4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10dd8abb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10dd8abe mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10dd8ac5 jmp 0x10dd8ad0 */
  goto L_10dd8ad0;
L_10dd8ac7:;
  /* 10dd8ac7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd8aca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8acd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10dd8ad0:;
  /* 10dd8ad0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8ad4 jge 0x10dd8af6 */
  if ((C.sf==C.of)) goto L_10dd8af6;
  /* 10dd8ad6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd8ad9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd8adc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10dd8adf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10dd8ae2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8ae5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8ae8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10dd8aeb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8aee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8af1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10dd8af4 jmp 0x10dd8ac7 */
  goto L_10dd8ac7;
L_10dd8af6:;
  /* 10dd8af6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd8af9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10dd8afc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8aff mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10dd8b02 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8b04 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10dd8b07 push 4 */
  push32((uint32_t)(0x4u));
  /* 10dd8b09 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10dd8b0e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10dd8b13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd8b16 push edx */
  push32((uint32_t)(EDX));
  /* 10dd8b17 call dword ptr [0x10e02384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02384))), 0x10dd8b1du);
  /* 10dd8b1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd8b1f jne 0x10dd8b29 */
  if (!C.zf) goto L_10dd8b29;
  /* 10dd8b21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd8b24 jmp 0x10dd8c5a */
  goto L_10dd8c5a;
L_10dd8b29:;
  /* 10dd8b29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd8b2c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8b31 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10dd8b34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd8b37 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10dd8b3a jmp 0x10dd8b48 */
  goto L_10dd8b48;
L_10dd8b3c:;
  /* 10dd8b3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8b3f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8b45 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10dd8b48:;
  /* 10dd8b48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8b4b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8b4e ja 0x10dd8bad */
  if ((!C.cf&&!C.zf)) goto L_10dd8bad;
  /* 10dd8b50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8b53 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10dd8b5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8b5d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10dd8b67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8b6a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8b6d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10dd8b70 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8b73 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10dd8b79 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8b7c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8b82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8b85 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10dd8b88 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8b8b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8b91 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8b94 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10dd8b97 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8b9a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8b9f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10dd8ba2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd8ba5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10dd8bab jmp 0x10dd8b3c */
  goto L_10dd8b3c;
L_10dd8bad:;
  /* 10dd8bad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd8bb0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8bb6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10dd8bb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd8bbc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8bbf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd8bc2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10dd8bc5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd8bc8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10dd8bcb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10dd8bce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8bd1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd8bd4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10dd8bd7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd8bda add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8bdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd8be0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10dd8be3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd8be6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10dd8be9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10dd8bec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8bef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd8bf2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10dd8bf5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd8bf8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8bfb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10dd8c03 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd8c06 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8c09 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10dd8c14 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8c17 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10dd8c1b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8c1e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10dd8c21 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10dd8c24 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8c27 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10dd8c2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd8c2c jne 0x10dd8c3d */
  if (!C.zf) goto L_10dd8c3d;
  /* 10dd8c2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8c31 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd8c34 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10dd8c37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8c3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10dd8c3d:;
  /* 10dd8c3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd8c42 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd8c45 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd8c47 not edx */
  EDX = (~(EDX));
  /* 10dd8c49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8c4c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10dd8c4f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd8c51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8c54 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10dd8c57 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10dd8c5a:;
  /* 10dd8c5a mov esp, ebp */
  ESP = (EBP);
  /* 10dd8c5c pop ebp */
  EBP = (pop32());
  /* 10dd8c5d ret  */
  ESPCHK(0x10dd8a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c60 @ 0x10dd8c60 (1515 bytes, 489 insns) */
void f_10dd8c60(void) {
  FTRACE(0x10dd8c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd8c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd8c61 mov ebp, esp */
  EBP = (ESP);
  /* 10dd8c63 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8c66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd8c69 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8c6c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10dd8c6e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10dd8c71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8c74 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10dd8c77 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10dd8c7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8c7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd8c80 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8c83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dd8c86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd8c89 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10dd8c8c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd8c8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8c92 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd8c98 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8c9b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10dd8ca2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10dd8ca5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd8ca8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8cab mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10dd8cae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd8cb1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd8cb3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8cb6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10dd8cb9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd8cbc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8cbf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10dd8cc2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8cc5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd8cc7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10dd8cca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd8ccd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8cd0 jle 0x10dd8f86 */
  if ((C.zf||C.sf!=C.of)) goto L_10dd8f86;
  /* 10dd8cd6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd8cd9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10dd8cdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd8cde jne 0x10dd8ceb */
  if (!C.zf) goto L_10dd8ceb;
  /* 10dd8ce0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd8ce3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8ce6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8ce9 jle 0x10dd8cf2 */
  if ((C.zf||C.sf!=C.of)) goto L_10dd8cf2;
L_10dd8ceb:;
  /* 10dd8ceb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd8ced jmp 0x10dd9247 */
  goto L_10dd9247;
L_10dd8cf2:;
  /* 10dd8cf2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd8cf5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10dd8cf8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8cfb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10dd8cfe cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8d02 jbe 0x10dd8d0b */
  if ((C.cf||C.zf)) goto L_10dd8d0b;
  /* 10dd8d04 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10dd8d0b:;
  /* 10dd8d0b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8d0e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8d11 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd8d14 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8d17 jne 0x10dd8ded */
  if (!C.zf) goto L_10dd8ded;
  /* 10dd8d1d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8d21 jae 0x10dd8d82 */
  if (!C.cf) goto L_10dd8d82;
  /* 10dd8d23 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd8d28 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd8d2b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd8d2d not edx */
  EDX = (~(EDX));
  /* 10dd8d2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8d32 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8d35 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10dd8d39 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd8d3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8d3e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8d41 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10dd8d45 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8d48 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8d4b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10dd8d4e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10dd8d51 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8d54 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8d57 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10dd8d5a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8d5d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8d60 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10dd8d64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd8d66 jne 0x10dd8d80 */
  if (!C.zf) goto L_10dd8d80;
  /* 10dd8d68 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd8d6d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd8d70 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd8d72 not edx */
  EDX = (~(EDX));
  /* 10dd8d74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8d77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd8d79 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd8d7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8d7e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10dd8d80:;
  /* 10dd8d80 jmp 0x10dd8ded */
  goto L_10dd8ded;
L_10dd8d82:;
  /* 10dd8d82 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd8d85 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8d88 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd8d8d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd8d8f not eax */
  EAX = (~(EAX));
  /* 10dd8d91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8d94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8d97 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10dd8d9e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd8da0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8da3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8da6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10dd8dad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8db0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8db3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10dd8db6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10dd8db9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8dbc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8dbf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10dd8dc2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8dc5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8dc8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10dd8dcc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd8dce jne 0x10dd8ded */
  if (!C.zf) goto L_10dd8ded;
  /* 10dd8dd0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd8dd3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8dd6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd8ddb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd8ddd not eax */
  EAX = (~(EAX));
  /* 10dd8ddf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8de2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd8de5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd8de7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8dea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10dd8ded:;
  /* 10dd8ded mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8df0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10dd8df3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8df6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd8df9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10dd8dfc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8dff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10dd8e02 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8e05 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10dd8e08 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10dd8e0b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd8e0e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8e11 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8e14 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10dd8e17 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8e1b jle 0x10dd8f67 */
  if ((C.zf||C.sf!=C.of)) goto L_10dd8f67;
  /* 10dd8e21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd8e24 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8e27 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10dd8e2a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd8e2d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10dd8e30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8e33 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10dd8e36 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8e3a jbe 0x10dd8e43 */
  if ((C.cf||C.zf)) goto L_10dd8e43;
  /* 10dd8e3c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10dd8e43:;
  /* 10dd8e43 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd8e46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd8e49 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10dd8e4c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10dd8e4f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8e52 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8e55 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd8e58 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10dd8e5b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8e5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8e61 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10dd8e64 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd8e67 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8e6a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10dd8e6d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8e70 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd8e73 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8e76 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10dd8e79 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8e7c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8e7f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd8e82 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8e85 jne 0x10dd8f53 */
  if (!C.zf) goto L_10dd8f53;
  /* 10dd8e8b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8e8f jae 0x10dd8eec */
  if (!C.cf) goto L_10dd8eec;
  /* 10dd8e91 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8e94 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8e97 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10dd8e9b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8e9e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8ea1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10dd8ea4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10dd8ea7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8eaa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8ead mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10dd8eb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd8eb2 jne 0x10dd8eca */
  if (!C.zf) goto L_10dd8eca;
  /* 10dd8eb4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd8eb9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd8ebc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd8ebe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8ec1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd8ec3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd8ec5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8ec8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10dd8eca:;
  /* 10dd8eca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd8ecf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd8ed2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd8ed4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8ed7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8eda mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10dd8ede or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd8ee0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8ee3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8ee6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10dd8eea jmp 0x10dd8f53 */
  goto L_10dd8f53;
L_10dd8eec:;
  /* 10dd8eec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8eef add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8ef2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10dd8ef6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8ef9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8efc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10dd8eff add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10dd8f02 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8f05 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8f08 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10dd8f0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd8f0d jne 0x10dd8f2a */
  if (!C.zf) goto L_10dd8f2a;
  /* 10dd8f0f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd8f12 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8f15 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd8f1a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd8f1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8f1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd8f22 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd8f24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd8f27 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10dd8f2a:;
  /* 10dd8f2a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd8f2d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8f30 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd8f35 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd8f37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8f3a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8f3d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10dd8f44 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd8f46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd8f49 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd8f4c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10dd8f53:;
  /* 10dd8f53 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8f56 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd8f59 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10dd8f5b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd8f5e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8f61 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd8f64 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10dd8f67:;
  /* 10dd8f67 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd8f6a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8f6d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd8f70 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10dd8f72 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd8f75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8f78 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd8f7b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8f7e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10dd8f81 jmp 0x10dd9242 */
  goto L_10dd9242;
L_10dd8f86:;
  /* 10dd8f86 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd8f89 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8f8c jge 0x10dd9242 */
  if ((C.sf==C.of)) goto L_10dd9242;
  /* 10dd8f92 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd8f95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8f98 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd8f9b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10dd8f9d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10dd8fa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8fa3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd8fa6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8fa9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10dd8fac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd8faf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd8fb2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10dd8fb5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd8fb8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8fbb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10dd8fbe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd8fc1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10dd8fc4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8fc7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10dd8fca cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8fce jbe 0x10dd8fd7 */
  if ((C.cf||C.zf)) goto L_10dd8fd7;
  /* 10dd8fd0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10dd8fd7:;
  /* 10dd8fd7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd8fda and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10dd8fdd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd8fdf jne 0x10dd9120 */
  if (!C.zf) goto L_10dd9120;
  /* 10dd8fe5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd8fe8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10dd8feb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd8fee mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10dd8ff1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd8ff5 jbe 0x10dd8ffe */
  if ((C.cf||C.zf)) goto L_10dd8ffe;
  /* 10dd8ff7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10dd8ffe:;
  /* 10dd8ffe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd9001 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd9004 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd9007 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd900a jne 0x10dd90e0 */
  if (!C.zf) goto L_10dd90e0;
  /* 10dd9010 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9014 jae 0x10dd9075 */
  if (!C.cf) goto L_10dd9075;
  /* 10dd9016 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd901b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd901e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd9020 not edx */
  EDX = (~(EDX));
  /* 10dd9022 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9025 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd9028 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10dd902c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd902e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9031 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd9034 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10dd9038 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd903b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd903e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10dd9041 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10dd9044 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd9047 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd904a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10dd904d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd9050 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9053 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10dd9057 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd9059 jne 0x10dd9073 */
  if (!C.zf) goto L_10dd9073;
  /* 10dd905b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd9060 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd9063 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd9065 not edx */
  EDX = (~(EDX));
  /* 10dd9067 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd906a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd906c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd906e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd9071 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10dd9073:;
  /* 10dd9073 jmp 0x10dd90e0 */
  goto L_10dd90e0;
L_10dd9075:;
  /* 10dd9075 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd9078 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd907b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd9080 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd9082 not eax */
  EAX = (~(EAX));
  /* 10dd9084 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9087 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd908a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10dd9091 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd9093 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9096 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd9099 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10dd90a0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd90a3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd90a6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10dd90a9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10dd90ac mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd90af add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd90b2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10dd90b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd90b8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd90bb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10dd90bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd90c1 jne 0x10dd90e0 */
  if (!C.zf) goto L_10dd90e0;
  /* 10dd90c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd90c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd90c9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd90ce shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd90d0 not eax */
  EAX = (~(EAX));
  /* 10dd90d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd90d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd90d8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd90da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd90dd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10dd90e0:;
  /* 10dd90e0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd90e3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10dd90e6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd90e9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd90ec mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10dd90ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd90f2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10dd90f5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd90f8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10dd90fb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10dd90fe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd9101 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9104 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10dd9107 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd910a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10dd910d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd9110 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10dd9113 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9117 jbe 0x10dd9120 */
  if ((C.cf||C.zf)) goto L_10dd9120;
  /* 10dd9119 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10dd9120:;
  /* 10dd9120 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9123 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd9126 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10dd9129 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10dd912c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd912f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd9132 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd9135 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10dd9138 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd913b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd913e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10dd9141 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd9144 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd9147 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10dd914a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd914d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd9150 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd9153 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10dd9156 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd9159 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd915c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd915f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9162 jne 0x10dd922e */
  if (!C.zf) goto L_10dd922e;
  /* 10dd9168 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd916c jae 0x10dd91c8 */
  if (!C.cf) goto L_10dd91c8;
  /* 10dd916e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd9171 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9174 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10dd9178 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd917b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd917e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10dd9181 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10dd9183 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd9186 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9189 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10dd918c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd918e jne 0x10dd91a6 */
  if (!C.zf) goto L_10dd91a6;
  /* 10dd9190 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd9195 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9198 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd919a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd919d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd919f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd91a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd91a4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10dd91a6:;
  /* 10dd91a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd91ab mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd91ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd91b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd91b3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd91b6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10dd91ba or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd91bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd91bf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd91c2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10dd91c6 jmp 0x10dd922e */
  goto L_10dd922e;
L_10dd91c8:;
  /* 10dd91c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd91cb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd91ce movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10dd91d2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd91d5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd91d8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10dd91db add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10dd91dd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd91e0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd91e3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10dd91e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd91e8 jne 0x10dd9205 */
  if (!C.zf) goto L_10dd9205;
  /* 10dd91ea mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd91ed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd91f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10dd91f5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10dd91f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd91fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd91fd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd91ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd9202 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10dd9205:;
  /* 10dd9205 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9208 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd920b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd9210 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd9212 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9215 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd9218 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10dd921f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd9221 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9224 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10dd9227 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10dd922e:;
  /* 10dd922e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd9231 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd9234 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10dd9236 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd9239 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd923c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd923f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10dd9242:;
  /* 10dd9242 mov eax, 1 */
  EAX = (0x1u);
L_10dd9247:;
  /* 10dd9247 mov esp, ebp */
  ESP = (EBP);
  /* 10dd9249 pop ebp */
  EBP = (pop32());
  /* 10dd924a ret  */
  ESPCHK(0x10dd8c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009250 @ 0x10dd9250 (304 bytes, 79 insns) */
void f_10dd9250(void) {
  FTRACE(0x10dd9250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd9250 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd9251 mov ebp, esp */
  EBP = (ESP);
  /* 10dd9253 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd9254 cmp dword ptr [0x10e00f40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e00f40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd925b je 0x10dd937c */
  if (C.zf) goto L_10dd937c;
  /* 10dd9261 mov eax, dword ptr [0x10e00f38] */
  EAX = (r32((uint32_t)(0x10e00f38)));
  /* 10dd9266 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10dd9269 mov ecx, dword ptr [0x10e00f40] */
  ECX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd926f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10dd9272 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9274 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd9277 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10dd927c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10dd9281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9284 push eax */
  push32((uint32_t)(EAX));
  /* 10dd9285 call dword ptr [0x10e02364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02364))), 0x10dd928bu);
  /* 10dd928b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd9290 mov ecx, dword ptr [0x10e00f38] */
  ECX = (r32((uint32_t)(0x10e00f38)));
  /* 10dd9296 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd9298 mov eax, dword ptr [0x10e00f40] */
  EAX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd929d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10dd92a0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd92a2 mov edx, dword ptr [0x10e00f40] */
  EDX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd92a8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10dd92ab mov eax, dword ptr [0x10e00f40] */
  EAX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd92b0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10dd92b3 mov edx, dword ptr [0x10e00f38] */
  EDX = (r32((uint32_t)(0x10e00f38)));
  /* 10dd92b9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10dd92c4 mov eax, dword ptr [0x10e00f40] */
  EAX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd92c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10dd92cc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10dd92cf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10dd92d2 mov eax, dword ptr [0x10e00f40] */
  EAX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd92d7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10dd92da mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10dd92dd mov edx, dword ptr [0x10e00f40] */
  EDX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd92e3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10dd92e6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10dd92ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd92ec jne 0x10dd9302 */
  if (!C.zf) goto L_10dd9302;
  /* 10dd92ee mov edx, dword ptr [0x10e00f40] */
  EDX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd92f4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10dd92f7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10dd92f9 mov ecx, dword ptr [0x10e00f40] */
  ECX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd92ff mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10dd9302:;
  /* 10dd9302 mov edx, dword ptr [0x10e00f40] */
  EDX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd9308 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd930c jne 0x10dd9372 */
  if (!C.zf) goto L_10dd9372;
  /* 10dd930e cmp dword ptr [0x10e00f44], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e00f44))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9315 jle 0x10dd9372 */
  if ((C.zf||C.sf!=C.of)) goto L_10dd9372;
  /* 10dd9317 mov eax, dword ptr [0x10e00f40] */
  EAX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd931c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10dd931f push ecx */
  push32((uint32_t)(ECX));
  /* 10dd9320 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd9322 mov edx, dword ptr [0x10e00f4c] */
  EDX = (r32((uint32_t)(0x10e00f4c)));
  /* 10dd9328 push edx */
  push32((uint32_t)(EDX));
  /* 10dd9329 call dword ptr [0x10e02360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02360))), 0x10dd932fu);
  /* 10dd932f mov eax, dword ptr [0x10e00f44] */
  EAX = (r32((uint32_t)(0x10e00f44)));
  /* 10dd9334 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd9337 mov ecx, dword ptr [0x10e00f48] */
  ECX = (r32((uint32_t)(0x10e00f48)));
  /* 10dd933d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd933f mov edx, dword ptr [0x10e00f40] */
  EDX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd9345 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9348 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd934a push ecx */
  push32((uint32_t)(ECX));
  /* 10dd934b mov eax, dword ptr [0x10e00f40] */
  EAX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd9350 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9353 push eax */
  push32((uint32_t)(EAX));
  /* 10dd9354 mov ecx, dword ptr [0x10e00f40] */
  ECX = (r32((uint32_t)(0x10e00f40)));
  /* 10dd935a push ecx */
  push32((uint32_t)(ECX));
  /* 10dd935b call 0x10ddb980 */
  push32(0x10dd9360u); f_10ddb980();
  /* 10dd9360 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9363 mov edx, dword ptr [0x10e00f44] */
  EDX = (r32((uint32_t)(0x10e00f44)));
  /* 10dd9369 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd936c mov dword ptr [0x10e00f44], edx */
  w32((uint32_t)(0x10e00f44), (EDX));
L_10dd9372:;
  /* 10dd9372 mov dword ptr [0x10e00f40], 0 */
  w32((uint32_t)(0x10e00f40), (0x0u));
L_10dd937c:;
  /* 10dd937c mov esp, ebp */
  ESP = (EBP);
  /* 10dd937e pop ebp */
  EBP = (pop32());
  /* 10dd937f ret  */
  ESPCHK(0x10dd9250u, _esp0);
  ESP += 4; return;
}

/* FUN_10009380 @ 0x10dd9380 (1565 bytes, 343 insns) */
void f_10dd9380(void) {
  FTRACE(0x10dd9380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd9380 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd9381 mov ebp, esp */
  EBP = (ESP);
  /* 10dd9383 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd9389 mov eax, dword ptr [0x10e00f44] */
  EAX = (r32((uint32_t)(0x10e00f44)));
  /* 10dd938e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd9391 push eax */
  push32((uint32_t)(EAX));
  /* 10dd9392 mov ecx, dword ptr [0x10e00f48] */
  ECX = (r32((uint32_t)(0x10e00f48)));
  /* 10dd9398 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd9399 call dword ptr [0x10e02338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02338))), 0x10dd939fu);
  /* 10dd939f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd93a1 je 0x10dd93ab */
  if (C.zf) goto L_10dd93ab;
  /* 10dd93a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd93a6 jmp 0x10dd9999 */
  goto L_10dd9999;
L_10dd93ab:;
  /* 10dd93ab mov edx, dword ptr [0x10e00f48] */
  EDX = (r32((uint32_t)(0x10e00f48)));
  /* 10dd93b1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10dd93b7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10dd93c1 jmp 0x10dd93d2 */
  goto L_10dd93d2;
L_10dd93c3:;
  /* 10dd93c3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10dd93c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd93cc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10dd93d2:;
  /* 10dd93d2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10dd93d8 cmp ecx, dword ptr [0x10e00f44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e00f44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd93de jge 0x10dd9997 */
  if ((C.sf==C.of)) goto L_10dd9997;
  /* 10dd93e4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10dd93ea mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10dd93ed mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10dd93f3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10dd93f8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10dd93fe push ecx */
  push32((uint32_t)(ECX));
  /* 10dd93ff call dword ptr [0x10e02338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02338))), 0x10dd9405u);
  /* 10dd9405 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd9407 je 0x10dd9413 */
  if (C.zf) goto L_10dd9413;
  /* 10dd9409 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10dd940e jmp 0x10dd9999 */
  goto L_10dd9999;
L_10dd9413:;
  /* 10dd9413 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10dd9419 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10dd941c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10dd9422 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10dd9428 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd942e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10dd9431 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10dd9437 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10dd943a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd943d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10dd9447 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10dd9451 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10dd9458 jmp 0x10dd9463 */
  goto L_10dd9463;
L_10dd945a:;
  /* 10dd945a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd945d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9460 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10dd9463:;
  /* 10dd9463 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9467 jge 0x10dd995b */
  if ((C.sf==C.of)) goto L_10dd995b;
  /* 10dd946d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10dd9477 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10dd9481 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10dd948b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10dd9495 jmp 0x10dd94a6 */
  goto L_10dd94a6;
L_10dd9497:;
  /* 10dd9497 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10dd949d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd94a0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10dd94a6:;
  /* 10dd94a6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd94ad jge 0x10dd94c2 */
  if ((C.sf==C.of)) goto L_10dd94c2;
  /* 10dd94af mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10dd94b5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10dd94c0 jmp 0x10dd9497 */
  goto L_10dd9497;
L_10dd94c2:;
  /* 10dd94c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd94c6 jl 0x10dd98fd */
  if ((C.sf!=C.of)) goto L_10dd98fd;
  /* 10dd94cc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10dd94d1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10dd94d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd94d8 call dword ptr [0x10e02338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02338))), 0x10dd94deu);
  /* 10dd94de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd94e0 je 0x10dd94ec */
  if (C.zf) goto L_10dd94ec;
  /* 10dd94e2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10dd94e7 jmp 0x10dd9999 */
  goto L_10dd9999;
L_10dd94ec:;
  /* 10dd94ec mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10dd94f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10dd94f5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10dd94ff jmp 0x10dd9510 */
  goto L_10dd9510;
L_10dd9501:;
  /* 10dd9501 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10dd9507 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd950a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10dd9510:;
  /* 10dd9510 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9517 jge 0x10dd9694 */
  if ((C.sf==C.of)) goto L_10dd9694;
  /* 10dd951d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd9520 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9523 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10dd9529 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10dd952f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9535 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10dd953b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10dd9541 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9545 jne 0x10dd9552 */
  if (!C.zf) goto L_10dd9552;
  /* 10dd9547 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10dd954d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9550 je 0x10dd955c */
  if (C.zf) goto L_10dd955c;
L_10dd9552:;
  /* 10dd9552 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10dd9557 jmp 0x10dd9999 */
  goto L_10dd9999;
L_10dd955c:;
  /* 10dd955c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10dd9562 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd9564 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10dd956a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10dd9570 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10dd9576 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10dd957c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10dd957f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd9581 je 0x10dd95b9 */
  if (C.zf) goto L_10dd95b9;
  /* 10dd9583 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10dd9589 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd958c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10dd9592 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd959c jle 0x10dd95a8 */
  if ((C.zf||C.sf!=C.of)) goto L_10dd95a8;
  /* 10dd959e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10dd95a3 jmp 0x10dd9999 */
  goto L_10dd9999;
L_10dd95a8:;
  /* 10dd95a8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10dd95ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd95b1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10dd95b7 jmp 0x10dd95fb */
  goto L_10dd95fb;
L_10dd95b9:;
  /* 10dd95b9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10dd95bf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10dd95c2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd95c5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10dd95cb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd95d2 jle 0x10dd95de */
  if ((C.zf||C.sf!=C.of)) goto L_10dd95de;
  /* 10dd95d4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10dd95de:;
  /* 10dd95de mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10dd95e4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10dd95eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd95ee mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10dd95f4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10dd95fb:;
  /* 10dd95fb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9602 jl 0x10dd961d */
  if ((C.sf!=C.of)) goto L_10dd961d;
  /* 10dd9604 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10dd960a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd960d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd960f jne 0x10dd961d */
  if (!C.zf) goto L_10dd961d;
  /* 10dd9611 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd961b jle 0x10dd9627 */
  if ((C.zf||C.sf!=C.of)) goto L_10dd9627;
L_10dd961d:;
  /* 10dd961d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10dd9622 jmp 0x10dd9999 */
  goto L_10dd9999;
L_10dd9627:;
  /* 10dd9627 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10dd962d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9633 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10dd9636 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd963c je 0x10dd9648 */
  if (C.zf) goto L_10dd9648;
  /* 10dd963e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10dd9643 jmp 0x10dd9999 */
  goto L_10dd9999;
L_10dd9648:;
  /* 10dd9648 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10dd964e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9654 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10dd965a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10dd9660 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9666 jb 0x10dd955c */
  if (C.cf) goto L_10dd955c;
  /* 10dd966c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10dd9672 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9678 je 0x10dd9684 */
  if (C.zf) goto L_10dd9684;
  /* 10dd967a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10dd967f jmp 0x10dd9999 */
  goto L_10dd9999;
L_10dd9684:;
  /* 10dd9684 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd9687 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd968c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd968f jmp 0x10dd9501 */
  goto L_10dd9501;
L_10dd9694:;
  /* 10dd9694 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd9697 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd9699 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd969f je 0x10dd96ab */
  if (C.zf) goto L_10dd96ab;
  /* 10dd96a1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10dd96a6 jmp 0x10dd9999 */
  goto L_10dd9999;
L_10dd96ab:;
  /* 10dd96ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd96ae mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10dd96b4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10dd96bb jmp 0x10dd96c6 */
  goto L_10dd96c6;
L_10dd96bd:;
  /* 10dd96bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd96c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd96c3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10dd96c6:;
  /* 10dd96c6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd96ca jge 0x10dd98fd */
  if ((C.sf==C.of)) goto L_10dd98fd;
  /* 10dd96d0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10dd96da mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10dd96e0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10dd96e6:;
  /* 10dd96e6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10dd96ec mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd96ef mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10dd96f5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10dd96fb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9701 je 0x10dd982a */
  if (C.zf) goto L_10dd982a;
  /* 10dd9707 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd970a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10dd9710 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9717 je 0x10dd982a */
  if (C.zf) goto L_10dd982a;
  /* 10dd971d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10dd9723 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9729 jb 0x10dd973e */
  if (C.cf) goto L_10dd973e;
  /* 10dd972b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10dd9731 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9736 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd973c jb 0x10dd9748 */
  if (C.cf) goto L_10dd9748;
L_10dd973e:;
  /* 10dd973e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10dd9743 jmp 0x10dd9999 */
  goto L_10dd9999;
L_10dd9748:;
  /* 10dd9748 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10dd974e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10dd9754 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10dd975a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10dd9760 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9763 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10dd9766 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd9769 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd976e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10dd9774:;
  /* 10dd9774 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd9777 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd977d je 0x10dd979e */
  if (C.zf) goto L_10dd979e;
  /* 10dd977f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd9782 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9788 jne 0x10dd978c */
  if (!C.zf) goto L_10dd978c;
  /* 10dd978a jmp 0x10dd979e */
  goto L_10dd979e;
L_10dd978c:;
  /* 10dd978c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd978f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd9791 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd9794 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd9797 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9799 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10dd979c jmp 0x10dd9774 */
  goto L_10dd9774;
L_10dd979e:;
  /* 10dd979e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd97a1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd97a7 jne 0x10dd97b3 */
  if (!C.zf) goto L_10dd97b3;
  /* 10dd97a9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10dd97ae jmp 0x10dd9999 */
  goto L_10dd9999;
L_10dd97b3:;
  /* 10dd97b3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10dd97b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd97bb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10dd97be sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd97c1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10dd97c7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd97ce jle 0x10dd97da */
  if ((C.zf||C.sf!=C.of)) goto L_10dd97da;
  /* 10dd97d0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10dd97da:;
  /* 10dd97da mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10dd97e0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd97e3 je 0x10dd97ef */
  if (C.zf) goto L_10dd97ef;
  /* 10dd97e5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10dd97ea jmp 0x10dd9999 */
  goto L_10dd9999;
L_10dd97ef:;
  /* 10dd97ef mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10dd97f5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10dd97f8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd97fe je 0x10dd980a */
  if (C.zf) goto L_10dd980a;
  /* 10dd9800 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10dd9805 jmp 0x10dd9999 */
  goto L_10dd9999;
L_10dd980a:;
  /* 10dd980a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10dd9810 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10dd9816 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10dd981c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd981f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10dd9825 jmp 0x10dd96e6 */
  goto L_10dd96e6;
L_10dd982a:;
  /* 10dd982a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9831 je 0x10dd98a1 */
  if (C.zf) goto L_10dd98a1;
  /* 10dd9833 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9837 jge 0x10dd986b */
  if ((C.sf==C.of)) goto L_10dd986b;
  /* 10dd9839 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd983e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd9841 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd9843 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10dd9849 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd984b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10dd9851 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd9856 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd9859 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd985b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10dd9861 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd9863 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10dd9869 jmp 0x10dd98a1 */
  goto L_10dd98a1;
L_10dd986b:;
  /* 10dd986b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd986e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd9871 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd9876 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd9878 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10dd987e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd9880 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10dd9886 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd9889 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd988c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10dd9891 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10dd9893 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10dd9899 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd989b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10dd98a1:;
  /* 10dd98a1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10dd98a7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd98aa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd98b0 jne 0x10dd98c4 */
  if (!C.zf) goto L_10dd98c4;
  /* 10dd98b2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd98b5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10dd98bb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd98c2 je 0x10dd98ce */
  if (C.zf) goto L_10dd98ce;
L_10dd98c4:;
  /* 10dd98c4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10dd98c9 jmp 0x10dd9999 */
  goto L_10dd9999;
L_10dd98ce:;
  /* 10dd98ce mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10dd98d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10dd98d7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd98dd je 0x10dd98e9 */
  if (C.zf) goto L_10dd98e9;
  /* 10dd98df mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10dd98e4 jmp 0x10dd9999 */
  goto L_10dd9999;
L_10dd98e9:;
  /* 10dd98e9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10dd98ef add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd98f2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10dd98f8 jmp 0x10dd96bd */
  goto L_10dd96bd;
L_10dd98fd:;
  /* 10dd98fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd9900 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10dd9906 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10dd990c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9910 jne 0x10dd992a */
  if (!C.zf) goto L_10dd992a;
  /* 10dd9912 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd9915 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10dd991b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10dd9921 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9928 je 0x10dd9931 */
  if (C.zf) goto L_10dd9931;
L_10dd992a:;
  /* 10dd992a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10dd992f jmp 0x10dd9999 */
  goto L_10dd9999;
L_10dd9931:;
  /* 10dd9931 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10dd9937 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd993d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10dd9943 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd9946 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd994b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10dd994e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9951 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10dd9953 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10dd9956 jmp 0x10dd945a */
  goto L_10dd945a;
L_10dd995b:;
  /* 10dd995b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10dd9961 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10dd9967 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9969 jne 0x10dd997c */
  if (!C.zf) goto L_10dd997c;
  /* 10dd996b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10dd9971 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10dd9977 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd997a je 0x10dd9983 */
  if (C.zf) goto L_10dd9983;
L_10dd997c:;
  /* 10dd997c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10dd9981 jmp 0x10dd9999 */
  goto L_10dd9999;
L_10dd9983:;
  /* 10dd9983 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10dd9989 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd998c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10dd9992 jmp 0x10dd93c3 */
  goto L_10dd93c3;
L_10dd9997:;
  /* 10dd9997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10dd9999:;
  /* 10dd9999 mov esp, ebp */
  ESP = (EBP);
  /* 10dd999b pop ebp */
  EBP = (pop32());
  /* 10dd999c ret  */
  ESPCHK(0x10dd9380u, _esp0);
  ESP += 4; return;
}

/* FUN_100099a0 @ 0x10dd99a0 (250 bytes, 92 insns) */
void f_10dd99a0(void) {
  FTRACE(0x10dd99a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd99a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd99a1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd99a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd99a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd99a7 push esi */
  push32((uint32_t)(ESI));
  /* 10dd99a8 push edi */
  push32((uint32_t)(EDI));
  /* 10dd99a9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10dd99ac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10dd99af lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10dd99b2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10dd99b5:;
  /* 10dd99b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd99b9 jne 0x10dd99d9 */
  if (!C.zf) goto L_10dd99d9;
  /* 10dd99bb push 0x10dfafd0 */
  push32((uint32_t)(0x10dfafd0u));
  /* 10dd99c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd99c2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10dd99c4 push 0x10dfafc4 */
  push32((uint32_t)(0x10dfafc4u));
  /* 10dd99c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd99cb call 0x10dd2b50 */
  push32(0x10dd99d0u); f_10dd2b50();
  /* 10dd99d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd99d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd99d6 jne 0x10dd99d9 */
  if (!C.zf) goto L_10dd99d9;
  /* 10dd99d8 int3  */
  x86_unimpl("int3 @ 0x10dd99d8");
L_10dd99d9:;
  /* 10dd99d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd99db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd99dd jne 0x10dd99b5 */
  if (!C.zf) goto L_10dd99b5;
L_10dd99df:;
  /* 10dd99df cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd99e3 jne 0x10dd9a03 */
  if (!C.zf) goto L_10dd9a03;
  /* 10dd99e5 push 0x10dfafb4 */
  push32((uint32_t)(0x10dfafb4u));
  /* 10dd99ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd99ec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10dd99ee push 0x10dfafc4 */
  push32((uint32_t)(0x10dfafc4u));
  /* 10dd99f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd99f5 call 0x10dd2b50 */
  push32(0x10dd99fau); f_10dd2b50();
  /* 10dd99fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd99fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9a00 jne 0x10dd9a03 */
  if (!C.zf) goto L_10dd9a03;
  /* 10dd9a02 int3  */
  x86_unimpl("int3 @ 0x10dd9a02");
L_10dd9a03:;
  /* 10dd9a03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd9a05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd9a07 jne 0x10dd99df */
  if (!C.zf) goto L_10dd99df;
  /* 10dd9a09 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9a0c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10dd9a13 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9a16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd9a19 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10dd9a1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9a1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd9a22 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10dd9a24 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9a27 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10dd9a2e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd9a31 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd9a32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd9a35 push edx */
  push32((uint32_t)(EDX));
  /* 10dd9a36 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9a39 push eax */
  push32((uint32_t)(EAX));
  /* 10dd9a3a call 0x10ddaa20 */
  push32(0x10dd9a3fu); f_10ddaa20();
  /* 10dd9a3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9a42 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10dd9a45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9a48 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd9a4b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd9a4e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9a51 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10dd9a54 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9a57 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9a5b jl 0x10dd9a7f */
  if ((C.sf!=C.of)) goto L_10dd9a7f;
  /* 10dd9a5d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9a60 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd9a62 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10dd9a65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd9a67 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd9a6d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10dd9a70 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9a73 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd9a75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9a78 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9a7b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10dd9a7d jmp 0x10dd9a90 */
  goto L_10dd9a90;
L_10dd9a7f:;
  /* 10dd9a7f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9a82 push edx */
  push32((uint32_t)(EDX));
  /* 10dd9a83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd9a85 call 0x10dda7a0 */
  push32(0x10dd9a8au); f_10dda7a0();
  /* 10dd9a8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9a8d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10dd9a90:;
  /* 10dd9a90 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd9a93 pop edi */
  EDI = (pop32());
  /* 10dd9a94 pop esi */
  ESI = (pop32());
  /* 10dd9a95 pop ebx */
  EBX = (pop32());
  /* 10dd9a96 mov esp, ebp */
  ESP = (EBP);
  /* 10dd9a98 pop ebp */
  EBP = (pop32());
  /* 10dd9a99 ret  */
  ESPCHK(0x10dd99a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009aa0 @ 0x10dd9aa0 (183 bytes, 58 insns) */
void f_10dd9aa0(void) {
  FTRACE(0x10dd9aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd9aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd9aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd9aa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd9aa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd9aa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9aac cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9ab1 ja 0x10dd9aca */
  if ((!C.cf&&!C.zf)) goto L_10dd9aca;
  /* 10dd9ab3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd9ab6 mov edx, dword ptr [0x10dfdc98] */
  EDX = (r32((uint32_t)(0x10dfdc98)));
  /* 10dd9abc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd9abe mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10dd9ac2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10dd9ac5 jmp 0x10dd9b53 */
  goto L_10dd9b53;
L_10dd9aca:;
  /* 10dd9aca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd9acd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10dd9ad0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd9ad6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd9adc mov edx, dword ptr [0x10dfdc98] */
  EDX = (r32((uint32_t)(0x10dfdc98)));
  /* 10dd9ae2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd9ae4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10dd9ae8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10dd9aed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd9aef je 0x10dd9b13 */
  if (C.zf) goto L_10dd9b13;
  /* 10dd9af1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd9af4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10dd9af7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd9afd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10dd9b00 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10dd9b03 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10dd9b06 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10dd9b0a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10dd9b11 jmp 0x10dd9b24 */
  goto L_10dd9b24;
L_10dd9b13:;
  /* 10dd9b13 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10dd9b16 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10dd9b19 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10dd9b1d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10dd9b24:;
  /* 10dd9b24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd9b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd9b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd9b2a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10dd9b2d push ecx */
  push32((uint32_t)(ECX));
  /* 10dd9b2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd9b31 push edx */
  push32((uint32_t)(EDX));
  /* 10dd9b32 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10dd9b35 push eax */
  push32((uint32_t)(EAX));
  /* 10dd9b36 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd9b38 call 0x10ddbcc0 */
  push32(0x10dd9b3du); f_10ddbcc0();
  /* 10dd9b3d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9b40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd9b42 jne 0x10dd9b48 */
  if (!C.zf) goto L_10dd9b48;
  /* 10dd9b44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd9b46 jmp 0x10dd9b53 */
  goto L_10dd9b53;
L_10dd9b48:;
  /* 10dd9b48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9b4b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd9b50 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10dd9b53:;
  /* 10dd9b53 mov esp, ebp */
  ESP = (EBP);
  /* 10dd9b55 pop ebp */
  EBP = (pop32());
  /* 10dd9b56 ret  */
  ESPCHK(0x10dd9aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b60 @ 0x10dd9b60 (836 bytes, 238 insns) */
void f_10dd9b60(void) {
  FTRACE(0x10dd9b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd9b60 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd9b61 mov ebp, esp */
  EBP = (ESP);
  /* 10dd9b63 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd9b66 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10dd9b68 call 0x10dd7490 */
  push32(0x10dd9b6du); f_10dd7490();
  /* 10dd9b6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9b70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd9b73 push eax */
  push32((uint32_t)(EAX));
  /* 10dd9b74 call 0x10dd9eb0 */
  push32(0x10dd9b79u); f_10dd9eb0();
  /* 10dd9b79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9b7c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10dd9b7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd9b82 cmp ecx, dword ptr [0x10e00c84] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e00c84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9b88 jne 0x10dd9b9b */
  if (!C.zf) goto L_10dd9b9b;
  /* 10dd9b8a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10dd9b8c call 0x10dd7530 */
  push32(0x10dd9b91u); f_10dd7530();
  /* 10dd9b91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9b94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd9b96 jmp 0x10dd9ea0 */
  goto L_10dd9ea0;
L_10dd9b9b:;
  /* 10dd9b9b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9b9f jne 0x10dd9bbc */
  if (!C.zf) goto L_10dd9bbc;
  /* 10dd9ba1 call 0x10dd9f90 */
  push32(0x10dd9ba6u); f_10dd9f90();
  /* 10dd9ba6 call 0x10dda010 */
  push32(0x10dd9babu); f_10dda010();
  /* 10dd9bab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10dd9bad call 0x10dd7530 */
  push32(0x10dd9bb2u); f_10dd7530();
  /* 10dd9bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9bb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd9bb7 jmp 0x10dd9ea0 */
  goto L_10dd9ea0;
L_10dd9bbc:;
  /* 10dd9bbc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10dd9bc3 jmp 0x10dd9bce */
  goto L_10dd9bce;
L_10dd9bc5:;
  /* 10dd9bc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9bc8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9bcb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10dd9bce:;
  /* 10dd9bce cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9bd2 jae 0x10dd9d1f */
  if (!C.cf) goto L_10dd9d1f;
  /* 10dd9bd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9bdb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd9bde mov ecx, dword ptr [eax + 0x10dfdeb8] */
  ECX = (r32((uint32_t)(EAX + 0x10dfdeb8)));
  /* 10dd9be4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9be7 jne 0x10dd9d1a */
  if (!C.zf) goto L_10dd9d1a;
  /* 10dd9bed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10dd9bf4 jmp 0x10dd9bff */
  goto L_10dd9bff;
L_10dd9bf6:;
  /* 10dd9bf6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9bf9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9bfc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10dd9bff:;
  /* 10dd9bff cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9c06 jae 0x10dd9c14 */
  if (!C.cf) goto L_10dd9c14;
  /* 10dd9c08 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9c0b mov byte ptr [eax + 0x10e00e20], 0 */
  w8((uint32_t)(EAX + 0x10e00e20), (0x0u));
  /* 10dd9c12 jmp 0x10dd9bf6 */
  goto L_10dd9bf6;
L_10dd9c14:;
  /* 10dd9c14 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10dd9c1b jmp 0x10dd9c26 */
  goto L_10dd9c26;
L_10dd9c1d:;
  /* 10dd9c1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd9c20 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9c23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10dd9c26:;
  /* 10dd9c26 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9c2a jae 0x10dd9ca7 */
  if (!C.cf) goto L_10dd9ca7;
  /* 10dd9c2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9c2f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd9c32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd9c35 lea ecx, [edx + eax*8 + 0x10dfdec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10dfdec8));
  /* 10dd9c3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10dd9c3f jmp 0x10dd9c4a */
  goto L_10dd9c4a;
L_10dd9c41:;
  /* 10dd9c41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd9c44 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9c47 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10dd9c4a:;
  /* 10dd9c4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd9c4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd9c4f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10dd9c51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd9c53 je 0x10dd9ca2 */
  if (C.zf) goto L_10dd9ca2;
  /* 10dd9c55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd9c58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd9c5a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10dd9c5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd9c5f je 0x10dd9ca2 */
  if (C.zf) goto L_10dd9ca2;
  /* 10dd9c61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd9c64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd9c66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10dd9c68 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10dd9c6b jmp 0x10dd9c76 */
  goto L_10dd9c76;
L_10dd9c6d:;
  /* 10dd9c6d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9c70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9c73 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10dd9c76:;
  /* 10dd9c76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd9c79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd9c7b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10dd9c7e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9c81 ja 0x10dd9ca0 */
  if ((!C.cf&&!C.zf)) goto L_10dd9ca0;
  /* 10dd9c83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9c86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd9c89 mov dl, byte ptr [eax + 0x10e00e21] */
  DL = (r8((uint32_t)(EAX + 0x10e00e21)));
  /* 10dd9c8f or dl, byte ptr [ecx + 0x10dfdeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10dfdeb0))); DL = (_r); fl_logic(_r,8); }
  /* 10dd9c95 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9c98 mov byte ptr [eax + 0x10e00e21], dl */
  w8((uint32_t)(EAX + 0x10e00e21), (DL));
  /* 10dd9c9e jmp 0x10dd9c6d */
  goto L_10dd9c6d;
L_10dd9ca0:;
  /* 10dd9ca0 jmp 0x10dd9c41 */
  goto L_10dd9c41;
L_10dd9ca2:;
  /* 10dd9ca2 jmp 0x10dd9c1d */
  goto L_10dd9c1d;
L_10dd9ca7:;
  /* 10dd9ca7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd9caa mov dword ptr [0x10e00c84], ecx */
  w32((uint32_t)(0x10e00c84), (ECX));
  /* 10dd9cb0 mov dword ptr [0x10e00d0c], 1 */
  w32((uint32_t)(0x10e00d0c), (0x1u));
  /* 10dd9cba mov edx, dword ptr [0x10e00c84] */
  EDX = (r32((uint32_t)(0x10e00c84)));
  /* 10dd9cc0 push edx */
  push32((uint32_t)(EDX));
  /* 10dd9cc1 call 0x10dd9f10 */
  push32(0x10dd9cc6u); f_10dd9f10();
  /* 10dd9cc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9cc9 mov dword ptr [0x10e00f24], eax */
  w32((uint32_t)(0x10e00f24), (EAX));
  /* 10dd9cce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10dd9cd5 jmp 0x10dd9ce0 */
  goto L_10dd9ce0;
L_10dd9cd7:;
  /* 10dd9cd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd9cda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9cdd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10dd9ce0:;
  /* 10dd9ce0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9ce4 jae 0x10dd9d04 */
  if (!C.cf) goto L_10dd9d04;
  /* 10dd9ce6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9ce9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd9cec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd9cef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd9cf2 mov cx, word ptr [ecx + eax*2 + 0x10dfdebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10dfdebc)));
  /* 10dd9cfa mov word ptr [edx*2 + 0x10e00d00], cx */
  w16((uint32_t)(EDX*2 + 0x10e00d00), (CX));
  /* 10dd9d02 jmp 0x10dd9cd7 */
  goto L_10dd9cd7;
L_10dd9d04:;
  /* 10dd9d04 call 0x10dda010 */
  push32(0x10dd9d09u); f_10dda010();
  /* 10dd9d09 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10dd9d0b call 0x10dd7530 */
  push32(0x10dd9d10u); f_10dd7530();
  /* 10dd9d10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9d13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd9d15 jmp 0x10dd9ea0 */
  goto L_10dd9ea0;
L_10dd9d1a:;
  /* 10dd9d1a jmp 0x10dd9bc5 */
  goto L_10dd9bc5;
L_10dd9d1f:;
  /* 10dd9d1f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10dd9d22 push edx */
  push32((uint32_t)(EDX));
  /* 10dd9d23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd9d26 push eax */
  push32((uint32_t)(EAX));
  /* 10dd9d27 call dword ptr [0x10e02328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02328))), 0x10dd9d2du);
  /* 10dd9d2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9d30 jne 0x10dd9e72 */
  if (!C.zf) goto L_10dd9e72;
  /* 10dd9d36 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10dd9d3d jmp 0x10dd9d48 */
  goto L_10dd9d48;
L_10dd9d3f:;
  /* 10dd9d3f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9d42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9d45 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10dd9d48:;
  /* 10dd9d48 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9d4f jae 0x10dd9d5d */
  if (!C.cf) goto L_10dd9d5d;
  /* 10dd9d51 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9d54 mov byte ptr [edx + 0x10e00e20], 0 */
  w8((uint32_t)(EDX + 0x10e00e20), (0x0u));
  /* 10dd9d5b jmp 0x10dd9d3f */
  goto L_10dd9d3f;
L_10dd9d5d:;
  /* 10dd9d5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd9d60 mov dword ptr [0x10e00c84], eax */
  w32((uint32_t)(0x10e00c84), (EAX));
  /* 10dd9d65 mov dword ptr [0x10e00f24], 0 */
  w32((uint32_t)(0x10e00f24), (0x0u));
  /* 10dd9d6f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9d73 jbe 0x10dd9e2e */
  if ((C.cf||C.zf)) goto L_10dd9e2e;
  /* 10dd9d79 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10dd9d7c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10dd9d7f jmp 0x10dd9d8a */
  goto L_10dd9d8a;
L_10dd9d81:;
  /* 10dd9d81 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd9d84 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9d87 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10dd9d8a:;
  /* 10dd9d8a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd9d8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd9d8f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10dd9d91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd9d93 je 0x10dd9ddc */
  if (C.zf) goto L_10dd9ddc;
  /* 10dd9d95 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd9d98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd9d9a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10dd9d9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd9d9f je 0x10dd9ddc */
  if (C.zf) goto L_10dd9ddc;
  /* 10dd9da1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd9da4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd9da6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10dd9da8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10dd9dab jmp 0x10dd9db6 */
  goto L_10dd9db6;
L_10dd9dad:;
  /* 10dd9dad mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9db0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9db3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10dd9db6:;
  /* 10dd9db6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd9db9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd9dbb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10dd9dbe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9dc1 ja 0x10dd9dda */
  if ((!C.cf&&!C.zf)) goto L_10dd9dda;
  /* 10dd9dc3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9dc6 mov cl, byte ptr [eax + 0x10e00e21] */
  CL = (r8((uint32_t)(EAX + 0x10e00e21)));
  /* 10dd9dcc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10dd9dcf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9dd2 mov byte ptr [edx + 0x10e00e21], cl */
  w8((uint32_t)(EDX + 0x10e00e21), (CL));
  /* 10dd9dd8 jmp 0x10dd9dad */
  goto L_10dd9dad;
L_10dd9dda:;
  /* 10dd9dda jmp 0x10dd9d81 */
  goto L_10dd9d81;
L_10dd9ddc:;
  /* 10dd9ddc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10dd9de3 jmp 0x10dd9dee */
  goto L_10dd9dee;
L_10dd9de5:;
  /* 10dd9de5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9de8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9deb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10dd9dee:;
  /* 10dd9dee cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9df5 jae 0x10dd9e0e */
  if (!C.cf) goto L_10dd9e0e;
  /* 10dd9df7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9dfa mov dl, byte ptr [ecx + 0x10e00e21] */
  DL = (r8((uint32_t)(ECX + 0x10e00e21)));
  /* 10dd9e00 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10dd9e03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd9e06 mov byte ptr [eax + 0x10e00e21], dl */
  w8((uint32_t)(EAX + 0x10e00e21), (DL));
  /* 10dd9e0c jmp 0x10dd9de5 */
  goto L_10dd9de5;
L_10dd9e0e:;
  /* 10dd9e0e mov ecx, dword ptr [0x10e00c84] */
  ECX = (r32((uint32_t)(0x10e00c84)));
  /* 10dd9e14 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd9e15 call 0x10dd9f10 */
  push32(0x10dd9e1au); f_10dd9f10();
  /* 10dd9e1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9e1d mov dword ptr [0x10e00f24], eax */
  w32((uint32_t)(0x10e00f24), (EAX));
  /* 10dd9e22 mov dword ptr [0x10e00d0c], 1 */
  w32((uint32_t)(0x10e00d0c), (0x1u));
  /* 10dd9e2c jmp 0x10dd9e38 */
  goto L_10dd9e38;
L_10dd9e2e:;
  /* 10dd9e2e mov dword ptr [0x10e00d0c], 0 */
  w32((uint32_t)(0x10e00d0c), (0x0u));
L_10dd9e38:;
  /* 10dd9e38 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10dd9e3f jmp 0x10dd9e4a */
  goto L_10dd9e4a;
L_10dd9e41:;
  /* 10dd9e41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd9e44 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9e47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10dd9e4a:;
  /* 10dd9e4a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9e4e jae 0x10dd9e5f */
  if (!C.cf) goto L_10dd9e5f;
  /* 10dd9e50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd9e53 mov word ptr [eax*2 + 0x10e00d00], 0 */
  w16((uint32_t)(EAX*2 + 0x10e00d00), (0x0u));
  /* 10dd9e5d jmp 0x10dd9e41 */
  goto L_10dd9e41;
L_10dd9e5f:;
  /* 10dd9e5f call 0x10dda010 */
  push32(0x10dd9e64u); f_10dda010();
  /* 10dd9e64 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10dd9e66 call 0x10dd7530 */
  push32(0x10dd9e6bu); f_10dd7530();
  /* 10dd9e6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9e6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd9e70 jmp 0x10dd9ea0 */
  goto L_10dd9ea0;
L_10dd9e72:;
  /* 10dd9e72 cmp dword ptr [0x10dff790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9e79 je 0x10dd9e93 */
  if (C.zf) goto L_10dd9e93;
  /* 10dd9e7b call 0x10dd9f90 */
  push32(0x10dd9e80u); f_10dd9f90();
  /* 10dd9e80 call 0x10dda010 */
  push32(0x10dd9e85u); f_10dda010();
  /* 10dd9e85 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10dd9e87 call 0x10dd7530 */
  push32(0x10dd9e8cu); f_10dd7530();
  /* 10dd9e8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9e8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd9e91 jmp 0x10dd9ea0 */
  goto L_10dd9ea0;
L_10dd9e93:;
  /* 10dd9e93 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10dd9e95 call 0x10dd7530 */
  push32(0x10dd9e9au); f_10dd7530();
  /* 10dd9e9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9e9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10dd9ea0:;
  /* 10dd9ea0 mov esp, ebp */
  ESP = (EBP);
  /* 10dd9ea2 pop ebp */
  EBP = (pop32());
  /* 10dd9ea3 ret  */
  ESPCHK(0x10dd9b60u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10dd9eb0 (89 bytes, 21 insns) */
void f_10dd9eb0(void) {
  FTRACE(0x10dd9eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd9eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd9eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd9eb3 mov dword ptr [0x10dff790], 0 */
  w32((uint32_t)(0x10dff790), (0x0u));
  /* 10dd9ebd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9ec1 jne 0x10dd9ed5 */
  if (!C.zf) goto L_10dd9ed5;
  /* 10dd9ec3 mov dword ptr [0x10dff790], 1 */
  w32((uint32_t)(0x10dff790), (0x1u));
  /* 10dd9ecd call dword ptr [0x10e022c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022c8))), 0x10dd9ed3u);
  /* 10dd9ed3 jmp 0x10dd9f07 */
  goto L_10dd9f07;
L_10dd9ed5:;
  /* 10dd9ed5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9ed9 jne 0x10dd9eed */
  if (!C.zf) goto L_10dd9eed;
  /* 10dd9edb mov dword ptr [0x10dff790], 1 */
  w32((uint32_t)(0x10dff790), (0x1u));
  /* 10dd9ee5 call dword ptr [0x10e022cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022cc))), 0x10dd9eebu);
  /* 10dd9eeb jmp 0x10dd9f07 */
  goto L_10dd9f07;
L_10dd9eed:;
  /* 10dd9eed cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9ef1 jne 0x10dd9f04 */
  if (!C.zf) goto L_10dd9f04;
  /* 10dd9ef3 mov dword ptr [0x10dff790], 1 */
  w32((uint32_t)(0x10dff790), (0x1u));
  /* 10dd9efd mov eax, dword ptr [0x10dff7b0] */
  EAX = (r32((uint32_t)(0x10dff7b0)));
  /* 10dd9f02 jmp 0x10dd9f07 */
  goto L_10dd9f07;
L_10dd9f04:;
  /* 10dd9f04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10dd9f07:;
  /* 10dd9f07 pop ebp */
  EBP = (pop32());
  /* 10dd9f08 ret  */
  ESPCHK(0x10dd9eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f10 @ 0x10dd9f10 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10dd9f10(void) {
  FTRACE(0x10dd9f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd9f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd9f11 mov ebp, esp */
  EBP = (ESP);
  /* 10dd9f13 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd9f14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd9f17 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd9f1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9f1d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd9f23 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10dd9f26 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9f2a ja 0x10dd9f5a */
  if ((!C.cf&&!C.zf)) goto L_10dd9f5a;
  /* 10dd9f2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9f2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd9f31 mov dl, byte ptr [eax + 0x10dd9f74] */
  DL = (r8((uint32_t)(EAX + 0x10dd9f74)));
  /* 10dd9f37 jmp dword ptr [edx*4 + 0x10dd9f60] */
  switch (EDX) {
    case 0: goto L_10dd9f3e;
    case 1: goto L_10dd9f45;
    case 2: goto L_10dd9f4c;
    case 3: goto L_10dd9f53;
    case 4: goto L_10dd9f5a;
    default: x86_unimpl("switch@0x10dd9f37 out of table"); return;
  }
L_10dd9f3e:;
  /* 10dd9f3e mov eax, 0x411 */
  EAX = (0x411u);
  /* 10dd9f43 jmp 0x10dd9f5c */
  goto L_10dd9f5c;
L_10dd9f45:;
  /* 10dd9f45 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10dd9f4a jmp 0x10dd9f5c */
  goto L_10dd9f5c;
L_10dd9f4c:;
  /* 10dd9f4c mov eax, 0x412 */
  EAX = (0x412u);
  /* 10dd9f51 jmp 0x10dd9f5c */
  goto L_10dd9f5c;
L_10dd9f53:;
  /* 10dd9f53 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10dd9f58 jmp 0x10dd9f5c */
  goto L_10dd9f5c;
L_10dd9f5a:;
  /* 10dd9f5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10dd9f5c:;
  /* 10dd9f5c mov esp, ebp */
  ESP = (EBP);
  /* 10dd9f5e pop ebp */
  EBP = (pop32());
  /* 10dd9f5f ret  */
  ESPCHK(0x10dd9f10u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10dd9f90 (116 bytes, 29 insns) */
void f_10dd9f90(void) {
  FTRACE(0x10dd9f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd9f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd9f91 mov ebp, esp */
  EBP = (ESP);
  /* 10dd9f93 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd9f94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10dd9f9b jmp 0x10dd9fa6 */
  goto L_10dd9fa6;
L_10dd9f9d:;
  /* 10dd9f9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9fa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9fa3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10dd9fa6:;
  /* 10dd9fa6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9fad jge 0x10dd9fbb */
  if ((C.sf==C.of)) goto L_10dd9fbb;
  /* 10dd9faf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9fb2 mov byte ptr [ecx + 0x10e00e20], 0 */
  w8((uint32_t)(ECX + 0x10e00e20), (0x0u));
  /* 10dd9fb9 jmp 0x10dd9f9d */
  goto L_10dd9f9d;
L_10dd9fbb:;
  /* 10dd9fbb mov dword ptr [0x10e00c84], 0 */
  w32((uint32_t)(0x10e00c84), (0x0u));
  /* 10dd9fc5 mov dword ptr [0x10e00d0c], 0 */
  w32((uint32_t)(0x10e00d0c), (0x0u));
  /* 10dd9fcf mov dword ptr [0x10e00f24], 0 */
  w32((uint32_t)(0x10e00f24), (0x0u));
  /* 10dd9fd9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10dd9fe0 jmp 0x10dd9feb */
  goto L_10dd9feb;
L_10dd9fe2:;
  /* 10dd9fe2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9fe5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd9fe8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10dd9feb:;
  /* 10dd9feb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd9fef jge 0x10dda000 */
  if ((C.sf==C.of)) goto L_10dda000;
  /* 10dd9ff1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd9ff4 mov word ptr [eax*2 + 0x10e00d00], 0 */
  w16((uint32_t)(EAX*2 + 0x10e00d00), (0x0u));
  /* 10dd9ffe jmp 0x10dd9fe2 */
  goto L_10dd9fe2;
L_10dda000:;
  /* 10dda000 mov esp, ebp */
  ESP = (EBP);
  /* 10dda002 pop ebp */
  EBP = (pop32());
  /* 10dda003 ret  */
  ESPCHK(0x10dd9f90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a010 @ 0x10dda010 (770 bytes, 175 insns) */
void f_10dda010(void) {
  FTRACE(0x10dda010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dda010 push ebp */
  push32((uint32_t)(EBP));
  /* 10dda011 mov ebp, esp */
  EBP = (ESP);
  /* 10dda013 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dda019 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10dda01f push eax */
  push32((uint32_t)(EAX));
  /* 10dda020 mov ecx, dword ptr [0x10e00c84] */
  ECX = (r32((uint32_t)(0x10e00c84)));
  /* 10dda026 push ecx */
  push32((uint32_t)(ECX));
  /* 10dda027 call dword ptr [0x10e02328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02328))), 0x10dda02du);
  /* 10dda02d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda030 jne 0x10dda249 */
  if (!C.zf) goto L_10dda249;
  /* 10dda036 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10dda040 jmp 0x10dda051 */
  goto L_10dda051;
L_10dda042:;
  /* 10dda042 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda048 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda04b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10dda051:;
  /* 10dda051 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda05b jae 0x10dda072 */
  if (!C.cf) goto L_10dda072;
  /* 10dda05d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda063 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10dda069 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10dda070 jmp 0x10dda042 */
  goto L_10dda042;
L_10dda072:;
  /* 10dda072 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10dda079 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10dda07f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dda082 jmp 0x10dda08d */
  goto L_10dda08d;
L_10dda084:;
  /* 10dda084 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dda087 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda08a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10dda08d:;
  /* 10dda08d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dda090 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dda092 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10dda094 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dda096 je 0x10dda0d8 */
  if (C.zf) goto L_10dda0d8;
  /* 10dda098 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dda09b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dda09d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10dda09f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10dda0a5 jmp 0x10dda0b6 */
  goto L_10dda0b6;
L_10dda0a7:;
  /* 10dda0a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda0ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda0b0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10dda0b6:;
  /* 10dda0b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dda0b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dda0bb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10dda0be cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda0c4 ja 0x10dda0d6 */
  if ((!C.cf&&!C.zf)) goto L_10dda0d6;
  /* 10dda0c6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda0cc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10dda0d4 jmp 0x10dda0a7 */
  goto L_10dda0a7;
L_10dda0d6:;
  /* 10dda0d6 jmp 0x10dda084 */
  goto L_10dda084;
L_10dda0d8:;
  /* 10dda0d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dda0da mov eax, dword ptr [0x10e00f24] */
  EAX = (r32((uint32_t)(0x10e00f24)));
  /* 10dda0df push eax */
  push32((uint32_t)(EAX));
  /* 10dda0e0 mov ecx, dword ptr [0x10e00c84] */
  ECX = (r32((uint32_t)(0x10e00c84)));
  /* 10dda0e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10dda0e7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10dda0ed push edx */
  push32((uint32_t)(EDX));
  /* 10dda0ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10dda0f3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10dda0f9 push eax */
  push32((uint32_t)(EAX));
  /* 10dda0fa push 1 */
  push32((uint32_t)(0x1u));
  /* 10dda0fc call 0x10ddbcc0 */
  push32(0x10dda101u); f_10ddbcc0();
  /* 10dda101 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda104 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dda106 mov ecx, dword ptr [0x10e00c84] */
  ECX = (r32((uint32_t)(0x10e00c84)));
  /* 10dda10c push ecx */
  push32((uint32_t)(ECX));
  /* 10dda10d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10dda112 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10dda118 push edx */
  push32((uint32_t)(EDX));
  /* 10dda119 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10dda11e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10dda124 push eax */
  push32((uint32_t)(EAX));
  /* 10dda125 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10dda12a mov ecx, dword ptr [0x10e00f24] */
  ECX = (r32((uint32_t)(0x10e00f24)));
  /* 10dda130 push ecx */
  push32((uint32_t)(ECX));
  /* 10dda131 call 0x10ddbe80 */
  push32(0x10dda136u); f_10ddbe80();
  /* 10dda136 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda139 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dda13b mov edx, dword ptr [0x10e00c84] */
  EDX = (r32((uint32_t)(0x10e00c84)));
  /* 10dda141 push edx */
  push32((uint32_t)(EDX));
  /* 10dda142 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10dda147 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10dda14d push eax */
  push32((uint32_t)(EAX));
  /* 10dda14e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10dda153 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10dda159 push ecx */
  push32((uint32_t)(ECX));
  /* 10dda15a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10dda15f mov edx, dword ptr [0x10e00f24] */
  EDX = (r32((uint32_t)(0x10e00f24)));
  /* 10dda165 push edx */
  push32((uint32_t)(EDX));
  /* 10dda166 call 0x10ddbe80 */
  push32(0x10dda16bu); f_10ddbe80();
  /* 10dda16b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda16e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10dda178 jmp 0x10dda189 */
  goto L_10dda189;
L_10dda17a:;
  /* 10dda17a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda180 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda183 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10dda189:;
  /* 10dda189 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda193 jae 0x10dda244 */
  if (!C.cf) goto L_10dda244;
  /* 10dda199 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda19f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dda1a1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10dda1a9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10dda1ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dda1ae je 0x10dda1e6 */
  if (C.zf) goto L_10dda1e6;
  /* 10dda1b0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda1b6 mov cl, byte ptr [eax + 0x10e00e21] */
  CL = (r8((uint32_t)(EAX + 0x10e00e21)));
  /* 10dda1bc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10dda1bf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda1c5 mov byte ptr [edx + 0x10e00e21], cl */
  w8((uint32_t)(EDX + 0x10e00e21), (CL));
  /* 10dda1cb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda1d1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda1d7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10dda1de mov byte ptr [eax + 0x10e00d20], dl */
  w8((uint32_t)(EAX + 0x10e00d20), (DL));
  /* 10dda1e4 jmp 0x10dda23f */
  goto L_10dda23f;
L_10dda1e6:;
  /* 10dda1e6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda1ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dda1ee mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10dda1f6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10dda1f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dda1fb je 0x10dda232 */
  if (C.zf) goto L_10dda232;
  /* 10dda1fd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda203 mov al, byte ptr [edx + 0x10e00e21] */
  AL = (r8((uint32_t)(EDX + 0x10e00e21)));
  /* 10dda209 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10dda20b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda211 mov byte ptr [ecx + 0x10e00e21], al */
  w8((uint32_t)(ECX + 0x10e00e21), (AL));
  /* 10dda217 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda21d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda223 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10dda22a mov byte ptr [edx + 0x10e00d20], cl */
  w8((uint32_t)(EDX + 0x10e00d20), (CL));
  /* 10dda230 jmp 0x10dda23f */
  goto L_10dda23f;
L_10dda232:;
  /* 10dda232 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda238 mov byte ptr [edx + 0x10e00d20], 0 */
  w8((uint32_t)(EDX + 0x10e00d20), (0x0u));
L_10dda23f:;
  /* 10dda23f jmp 0x10dda17a */
  goto L_10dda17a;
L_10dda244:;
  /* 10dda244 jmp 0x10dda30e */
  goto L_10dda30e;
L_10dda249:;
  /* 10dda249 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10dda253 jmp 0x10dda264 */
  goto L_10dda264;
L_10dda255:;
  /* 10dda255 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda25b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda25e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10dda264:;
  /* 10dda264 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda26e jae 0x10dda30e */
  if (!C.cf) goto L_10dda30e;
  /* 10dda274 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda27b jb 0x10dda2b8 */
  if (C.cf) goto L_10dda2b8;
  /* 10dda27d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda284 ja 0x10dda2b8 */
  if ((!C.cf&&!C.zf)) goto L_10dda2b8;
  /* 10dda286 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda28c mov dl, byte ptr [ecx + 0x10e00e21] */
  DL = (r8((uint32_t)(ECX + 0x10e00e21)));
  /* 10dda292 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10dda295 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda29b mov byte ptr [eax + 0x10e00e21], dl */
  w8((uint32_t)(EAX + 0x10e00e21), (DL));
  /* 10dda2a1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda2a7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda2aa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda2b0 mov byte ptr [edx + 0x10e00d20], cl */
  w8((uint32_t)(EDX + 0x10e00d20), (CL));
  /* 10dda2b6 jmp 0x10dda309 */
  goto L_10dda309;
L_10dda2b8:;
  /* 10dda2b8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda2bf jb 0x10dda2fc */
  if (C.cf) goto L_10dda2fc;
  /* 10dda2c1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda2c8 ja 0x10dda2fc */
  if ((!C.cf&&!C.zf)) goto L_10dda2fc;
  /* 10dda2ca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda2d0 mov cl, byte ptr [eax + 0x10e00e21] */
  CL = (r8((uint32_t)(EAX + 0x10e00e21)));
  /* 10dda2d6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10dda2d9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda2df mov byte ptr [edx + 0x10e00e21], cl */
  w8((uint32_t)(EDX + 0x10e00e21), (CL));
  /* 10dda2e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda2eb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dda2ee mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda2f4 mov byte ptr [ecx + 0x10e00d20], al */
  w8((uint32_t)(ECX + 0x10e00d20), (AL));
  /* 10dda2fa jmp 0x10dda309 */
  goto L_10dda309;
L_10dda2fc:;
  /* 10dda2fc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10dda302 mov byte ptr [edx + 0x10e00d20], 0 */
  w8((uint32_t)(EDX + 0x10e00d20), (0x0u));
L_10dda309:;
  /* 10dda309 jmp 0x10dda255 */
  goto L_10dda255;
L_10dda30e:;
  /* 10dda30e mov esp, ebp */
  ESP = (EBP);
  /* 10dda310 pop ebp */
  EBP = (pop32());
  /* 10dda311 ret  */
  ESPCHK(0x10dda010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a320 @ 0x10dda320 (23 bytes, 9 insns) */
void f_10dda320(void) {
  FTRACE(0x10dda320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dda320 push ebp */
  push32((uint32_t)(EBP));
  /* 10dda321 mov ebp, esp */
  EBP = (ESP);
  /* 10dda323 cmp dword ptr [0x10e00d0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e00d0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda32a je 0x10dda333 */
  if (C.zf) goto L_10dda333;
  /* 10dda32c mov eax, dword ptr [0x10e00c84] */
  EAX = (r32((uint32_t)(0x10e00c84)));
  /* 10dda331 jmp 0x10dda335 */
  goto L_10dda335;
L_10dda333:;
  /* 10dda333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10dda335:;
  /* 10dda335 pop ebp */
  EBP = (pop32());
  /* 10dda336 ret  */
  ESPCHK(0x10dda320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a340 @ 0x10dda340 (34 bytes, 10 insns) */
void f_10dda340(void) {
  FTRACE(0x10dda340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dda340 push ebp */
  push32((uint32_t)(EBP));
  /* 10dda341 mov ebp, esp */
  EBP = (ESP);
  /* 10dda343 cmp dword ptr [0x10e010d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e010d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda34a jne 0x10dda360 */
  if (!C.zf) goto L_10dda360;
  /* 10dda34c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10dda34e call 0x10dd9b60 */
  push32(0x10dda353u); f_10dd9b60();
  /* 10dda353 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda356 mov dword ptr [0x10e010d0], 1 */
  w32((uint32_t)(0x10e010d0), (0x1u));
L_10dda360:;
  /* 10dda360 pop ebp */
  EBP = (pop32());
  /* 10dda361 ret  */
  ESPCHK(0x10dda340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a370 @ 0x10dda370 (664 bytes, 265 insns) [15 switch table(s)] */
void f_10dda370(void) {
  FTRACE(0x10dda370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dda370 push ebp */
  push32((uint32_t)(EBP));
  /* 10dda371 mov ebp, esp */
  EBP = (ESP);
  /* 10dda373 push edi */
  push32((uint32_t)(EDI));
  /* 10dda374 push esi */
  push32((uint32_t)(ESI));
  /* 10dda375 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10dda378 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dda37b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10dda37e mov eax, ecx */
  EAX = (ECX);
  /* 10dda380 mov edx, ecx */
  EDX = (ECX);
  /* 10dda382 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda384 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda386 jbe 0x10dda390 */
  if ((C.cf||C.zf)) goto L_10dda390;
  /* 10dda388 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda38a jb 0x10dda508 */
  if (C.cf) goto L_10dda508;
L_10dda390:;
  /* 10dda390 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10dda396 jne 0x10dda3ac */
  if (!C.zf) goto L_10dda3ac;
  /* 10dda398 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10dda39b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10dda39e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda3a1 jb 0x10dda3cc */
  if (C.cf) goto L_10dda3cc;
  /* 10dda3a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10dda3a5 jmp dword ptr [edx*4 + 0x10dda4b8] */
  switch (EDX) {
    case 0: goto L_10dda4c8;
    case 1: goto L_10dda4d0;
    case 2: goto L_10dda4dc;
    case 3: goto L_10dda4f0;
    default: x86_unimpl("switch@0x10dda3a5 out of table"); return;
  }
L_10dda3ac:;
  /* 10dda3ac mov eax, edi */
  EAX = (EDI);
  /* 10dda3ae mov edx, 3 */
  EDX = (0x3u);
  /* 10dda3b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dda3b6 jb 0x10dda3c4 */
  if (C.cf) goto L_10dda3c4;
  /* 10dda3b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10dda3bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda3bd jmp dword ptr [eax*4 + 0x10dda3d0] */
  switch (EAX) {
    case 1: goto L_10dda3e0;
    case 2: goto L_10dda40c;
    case 3: goto L_10dda430;
    default: x86_unimpl("switch@0x10dda3bd out of table"); return;
  }
L_10dda3c4:;
  /* 10dda3c4 jmp dword ptr [ecx*4 + 0x10dda4c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10dda4c8)))); return;
  /* 10dda3cb nop  */
  /* nop */
L_10dda3cc:;
  /* 10dda3cc jmp dword ptr [ecx*4 + 0x10dda44c] */
  switch (ECX) {
    case 0: goto L_10dda4af;
    case 1: goto L_10dda49c;
    case 2: goto L_10dda494;
    case 3: goto L_10dda48c;
    case 4: goto L_10dda484;
    case 5: goto L_10dda47c;
    case 6: goto L_10dda474;
    case 7: goto L_10dda46c;
    default: x86_unimpl("switch@0x10dda3cc out of table"); return;
  }
  /* 10dda3d3 nop  */
  /* nop */
L_10dda3e0:;
  /* 10dda3e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10dda3e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10dda3e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10dda3e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10dda3e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10dda3ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10dda3ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10dda3f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10dda3f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda3f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda3fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda3fe jb 0x10dda3cc */
  if (C.cf) goto L_10dda3cc;
  /* 10dda400 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10dda402 jmp dword ptr [edx*4 + 0x10dda4b8] */
  switch (EDX) {
    case 0: goto L_10dda4c8;
    case 1: goto L_10dda4d0;
    case 2: goto L_10dda4dc;
    case 3: goto L_10dda4f0;
    default: x86_unimpl("switch@0x10dda402 out of table"); return;
  }
  /* 10dda409 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10dda40c:;
  /* 10dda40c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10dda40e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10dda410 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10dda412 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10dda415 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10dda418 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10dda41b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda41e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda421 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda424 jb 0x10dda3cc */
  if (C.cf) goto L_10dda3cc;
  /* 10dda426 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10dda428 jmp dword ptr [edx*4 + 0x10dda4b8] */
  switch (EDX) {
    case 0: goto L_10dda4c8;
    case 1: goto L_10dda4d0;
    case 2: goto L_10dda4dc;
    case 3: goto L_10dda4f0;
    default: x86_unimpl("switch@0x10dda428 out of table"); return;
  }
  /* 10dda42f nop  */
  /* nop */
L_10dda430:;
  /* 10dda430 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10dda432 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10dda434 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10dda436 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10dda437 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10dda43a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10dda43b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda43e jb 0x10dda3cc */
  if (C.cf) goto L_10dda3cc;
  /* 10dda440 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10dda442 jmp dword ptr [edx*4 + 0x10dda4b8] */
  switch (EDX) {
    case 0: goto L_10dda4c8;
    case 1: goto L_10dda4d0;
    case 2: goto L_10dda4dc;
    case 3: goto L_10dda4f0;
    default: x86_unimpl("switch@0x10dda442 out of table"); return;
  }
  /* 10dda449 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10dda46c:;
  /* 10dda46c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10dda470 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10dda474:;
  /* 10dda474 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10dda478 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10dda47c:;
  /* 10dda47c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10dda480 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10dda484:;
  /* 10dda484 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10dda488 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10dda48c:;
  /* 10dda48c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10dda490 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10dda494:;
  /* 10dda494 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10dda498 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10dda49c:;
  /* 10dda49c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10dda4a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10dda4a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10dda4ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda4ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10dda4af:;
  /* 10dda4af jmp dword ptr [edx*4 + 0x10dda4b8] */
  switch (EDX) {
    case 0: goto L_10dda4c8;
    case 1: goto L_10dda4d0;
    case 2: goto L_10dda4dc;
    case 3: goto L_10dda4f0;
    default: x86_unimpl("switch@0x10dda4af out of table"); return;
  }
  /* 10dda4b6 mov edi, edi */
  EDI = (EDI);
L_10dda4c8:;
  /* 10dda4c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dda4cb pop esi */
  ESI = (pop32());
  /* 10dda4cc pop edi */
  EDI = (pop32());
  /* 10dda4cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10dda4ce ret  */
  ESPCHK(0x10dda370u, _esp0);
  ESP += 4; return;
  /* 10dda4cf nop  */
  /* nop */
L_10dda4d0:;
  /* 10dda4d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10dda4d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10dda4d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dda4d7 pop esi */
  ESI = (pop32());
  /* 10dda4d8 pop edi */
  EDI = (pop32());
  /* 10dda4d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10dda4da ret  */
  ESPCHK(0x10dda370u, _esp0);
  ESP += 4; return;
  /* 10dda4db nop  */
  /* nop */
L_10dda4dc:;
  /* 10dda4dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10dda4de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10dda4e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10dda4e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10dda4e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dda4e9 pop esi */
  ESI = (pop32());
  /* 10dda4ea pop edi */
  EDI = (pop32());
  /* 10dda4eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10dda4ec ret  */
  ESPCHK(0x10dda370u, _esp0);
  ESP += 4; return;
  /* 10dda4ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10dda4f0:;
  /* 10dda4f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10dda4f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10dda4f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10dda4f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10dda4fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10dda4fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10dda500 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dda503 pop esi */
  ESI = (pop32());
  /* 10dda504 pop edi */
  EDI = (pop32());
  /* 10dda505 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10dda506 ret  */
  ESPCHK(0x10dda370u, _esp0);
  ESP += 4; return;
  /* 10dda507 nop  */
  /* nop */
L_10dda508:;
  /* 10dda508 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10dda50c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10dda510 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10dda516 jne 0x10dda53c */
  if (!C.zf) goto L_10dda53c;
  /* 10dda518 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10dda51b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10dda51e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda521 jb 0x10dda530 */
  if (C.cf) goto L_10dda530;
  /* 10dda523 std  */
  C.df=1;
  /* 10dda524 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10dda526 cld  */
  C.df=0;
  /* 10dda527 jmp dword ptr [edx*4 + 0x10dda650] */
  switch (EDX) {
    case 0: goto L_10dda660;
    case 1: goto L_10dda668;
    case 2: goto L_10dda678;
    case 3: goto L_10dda68c;
    default: x86_unimpl("switch@0x10dda527 out of table"); return;
  }
  /* 10dda52e mov edi, edi */
  EDI = (EDI);
L_10dda530:;
  /* 10dda530 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10dda532 jmp dword ptr [ecx*4 + 0x10dda600] */
  switch (ECX) {
    case 0: goto L_10dda647;
    default: x86_unimpl("switch@0x10dda532 out of table"); return;
  }
  /* 10dda539 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10dda53c:;
  /* 10dda53c mov eax, edi */
  EAX = (EDI);
  /* 10dda53e mov edx, 3 */
  EDX = (0x3u);
  /* 10dda543 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda546 jb 0x10dda554 */
  if (C.cf) goto L_10dda554;
  /* 10dda548 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10dda54b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dda54d jmp dword ptr [eax*4 + 0x10dda558] */
  switch (EAX) {
    case 1: goto L_10dda568;
    case 2: goto L_10dda588;
    case 3: goto L_10dda5b0;
    default: x86_unimpl("switch@0x10dda54d out of table"); return;
  }
L_10dda554:;
  /* 10dda554 jmp dword ptr [ecx*4 + 0x10dda650] */
  switch (ECX) {
    case 0: goto L_10dda660;
    case 1: goto L_10dda668;
    case 2: goto L_10dda678;
    case 3: goto L_10dda68c;
    default: x86_unimpl("switch@0x10dda554 out of table"); return;
  }
  /* 10dda55b nop  */
  /* nop */
L_10dda568:;
  /* 10dda568 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10dda56b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10dda56d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10dda570 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10dda571 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10dda574 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10dda575 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda578 jb 0x10dda530 */
  if (C.cf) goto L_10dda530;
  /* 10dda57a std  */
  C.df=1;
  /* 10dda57b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10dda57d cld  */
  C.df=0;
  /* 10dda57e jmp dword ptr [edx*4 + 0x10dda650] */
  switch (EDX) {
    case 0: goto L_10dda660;
    case 1: goto L_10dda668;
    case 2: goto L_10dda678;
    case 3: goto L_10dda68c;
    default: x86_unimpl("switch@0x10dda57e out of table"); return;
  }
  /* 10dda585 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10dda588:;
  /* 10dda588 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10dda58b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10dda58d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10dda590 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10dda593 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10dda596 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10dda599 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dda59c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dda59f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda5a2 jb 0x10dda530 */
  if (C.cf) goto L_10dda530;
  /* 10dda5a4 std  */
  C.df=1;
  /* 10dda5a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10dda5a7 cld  */
  C.df=0;
  /* 10dda5a8 jmp dword ptr [edx*4 + 0x10dda650] */
  switch (EDX) {
    case 0: goto L_10dda660;
    case 1: goto L_10dda668;
    case 2: goto L_10dda678;
    case 3: goto L_10dda68c;
    default: x86_unimpl("switch@0x10dda5a8 out of table"); return;
  }
  /* 10dda5af nop  */
  /* nop */
L_10dda5b0:;
  /* 10dda5b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10dda5b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10dda5b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10dda5b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10dda5bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10dda5be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10dda5c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10dda5c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10dda5c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dda5ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dda5cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda5d0 jb 0x10dda530 */
  if (C.cf) goto L_10dda530;
  /* 10dda5d6 std  */
  C.df=1;
  /* 10dda5d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10dda5d9 cld  */
  C.df=0;
  /* 10dda5da jmp dword ptr [edx*4 + 0x10dda650] */
  switch (EDX) {
    case 0: goto L_10dda660;
    case 1: goto L_10dda668;
    case 2: goto L_10dda678;
    case 3: goto L_10dda68c;
    default: x86_unimpl("switch@0x10dda5da out of table"); return;
  }
  /* 10dda5e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10dda5e4 add al, 0xa6 */
  { uint32_t _a=(AL),_b=(0xa6u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10dda5e6 fst qword ptr [eax] */
  wf64((uint32_t)(EAX), FPU_ST(0));
  /* 10dda5e8 or al, 0xa6 */
  { uint32_t _r=(AL)|(0xa6u); AL = (_r); fl_logic(_r,8); }
  /* 10dda5ea fst qword ptr [eax] */
  wf64((uint32_t)(EAX), FPU_ST(0));
  /* 10dda5ec adc al, 0xa6 */
  { uint32_t _a=(AL),_b=(0xa6u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10dda5ee fst qword ptr [eax] */
  wf64((uint32_t)(EAX), FPU_ST(0));
  /* 10dda5f0 sbb al, 0xa6 */
  { uint32_t _a=(AL),_b=(0xa6u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10dda5f2 fst qword ptr [eax] */
  wf64((uint32_t)(EAX), FPU_ST(0));
  /* 10dda5f4 and al, 0xa6 */
  { uint32_t _r=(AL)&(0xa6u); AL = (_r); fl_logic(_r,8); }
  /* 10dda5f6 fst qword ptr [eax] */
  wf64((uint32_t)(EAX), FPU_ST(0));
  /* 10dda5f8 sub al, 0xa6 */
  { uint32_t _a=(AL),_b=(0xa6u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10dda5fa fst qword ptr [eax] */
  wf64((uint32_t)(EAX), FPU_ST(0));
  /* 10dda5fc xor al, 0xa6 */
  { uint32_t _r=(AL)^(0xa6u); AL = (_r); fl_logic(_r,8); }
  /* 10dda5fe fst qword ptr [eax] */
  wf64((uint32_t)(EAX), FPU_ST(0));
  /* 10dda604 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10dda608 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10dda60c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10dda610 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10dda614 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10dda618 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10dda61c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10dda620 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10dda624 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10dda628 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10dda62c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10dda630 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10dda634 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10dda638 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10dda63c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10dda643 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda645 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10dda647:;
  /* 10dda647 jmp dword ptr [edx*4 + 0x10dda650] */
  switch (EDX) {
    case 0: goto L_10dda660;
    case 1: goto L_10dda668;
    case 2: goto L_10dda678;
    case 3: goto L_10dda68c;
    default: x86_unimpl("switch@0x10dda647 out of table"); return;
  }
  /* 10dda64e mov edi, edi */
  EDI = (EDI);
L_10dda660:;
  /* 10dda660 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dda663 pop esi */
  ESI = (pop32());
  /* 10dda664 pop edi */
  EDI = (pop32());
  /* 10dda665 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10dda666 ret  */
  ESPCHK(0x10dda370u, _esp0);
  ESP += 4; return;
  /* 10dda667 nop  */
  /* nop */
L_10dda668:;
  /* 10dda668 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10dda66b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10dda66e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dda671 pop esi */
  ESI = (pop32());
  /* 10dda672 pop edi */
  EDI = (pop32());
  /* 10dda673 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10dda674 ret  */
  ESPCHK(0x10dda370u, _esp0);
  ESP += 4; return;
  /* 10dda675 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10dda678:;
  /* 10dda678 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10dda67b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10dda67e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10dda681 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10dda684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dda687 pop esi */
  ESI = (pop32());
  /* 10dda688 pop edi */
  EDI = (pop32());
  /* 10dda689 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10dda68a ret  */
  ESPCHK(0x10dda370u, _esp0);
  ESP += 4; return;
  /* 10dda68b nop  */
  /* nop */
L_10dda68c:;
  /* 10dda68c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10dda68f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10dda692 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10dda695 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10dda698 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10dda69b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10dda69e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dda6a1 pop esi */
  ESI = (pop32());
  /* 10dda6a2 pop edi */
  EDI = (pop32());
  /* 10dda6a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10dda6a4 ret  */
  ESPCHK(0x10dda370u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10dda6b0 (104 bytes, 43 insns) */
void f_10dda6b0(void) {
  FTRACE(0x10dda6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dda6b0 push ebx */
  push32((uint32_t)(EBX));
  /* 10dda6b1 push esi */
  push32((uint32_t)(ESI));
  /* 10dda6b2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10dda6b6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dda6b8 jne 0x10dda6d2 */
  if (!C.zf) goto L_10dda6d2;
  /* 10dda6ba mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10dda6be mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10dda6c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dda6c4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10dda6c6 mov ebx, eax */
  EBX = (EAX);
  /* 10dda6c8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10dda6cc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10dda6ce mov edx, ebx */
  EDX = (EBX);
  /* 10dda6d0 jmp 0x10dda713 */
  goto L_10dda713;
L_10dda6d2:;
  /* 10dda6d2 mov ecx, eax */
  ECX = (EAX);
  /* 10dda6d4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10dda6d8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10dda6dc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10dda6e0:;
  /* 10dda6e0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10dda6e2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10dda6e4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10dda6e6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10dda6e8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dda6ea jne 0x10dda6e0 */
  if (!C.zf) goto L_10dda6e0;
  /* 10dda6ec div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10dda6ee mov esi, eax */
  ESI = (EAX);
  /* 10dda6f0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10dda6f4 mov ecx, eax */
  ECX = (EAX);
  /* 10dda6f6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10dda6fa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10dda6fc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda6fe jb 0x10dda70e */
  if (C.cf) goto L_10dda70e;
  /* 10dda700 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda704 ja 0x10dda70e */
  if ((!C.cf&&!C.zf)) goto L_10dda70e;
  /* 10dda706 jb 0x10dda70f */
  if (C.cf) goto L_10dda70f;
  /* 10dda708 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda70c jbe 0x10dda70f */
  if ((C.cf||C.zf)) goto L_10dda70f;
L_10dda70e:;
  /* 10dda70e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10dda70f:;
  /* 10dda70f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dda711 mov eax, esi */
  EAX = (ESI);
L_10dda713:;
  /* 10dda713 pop esi */
  ESI = (pop32());
  /* 10dda714 pop ebx */
  EBX = (pop32());
  /* 10dda715 ret 0x10 */
  ESPCHK(0x10dda6b0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10dda720 (117 bytes, 44 insns) */
void f_10dda720(void) {
  FTRACE(0x10dda720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dda720 push ebx */
  push32((uint32_t)(EBX));
  /* 10dda721 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10dda725 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dda727 jne 0x10dda741 */
  if (!C.zf) goto L_10dda741;
  /* 10dda729 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10dda72d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10dda731 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dda733 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10dda735 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10dda739 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10dda73b mov eax, edx */
  EAX = (EDX);
  /* 10dda73d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dda73f jmp 0x10dda791 */
  goto L_10dda791;
L_10dda741:;
  /* 10dda741 mov ecx, eax */
  ECX = (EAX);
  /* 10dda743 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10dda747 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10dda74b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10dda74f:;
  /* 10dda74f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10dda751 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10dda753 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10dda755 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10dda757 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dda759 jne 0x10dda74f */
  if (!C.zf) goto L_10dda74f;
  /* 10dda75b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10dda75d mov ecx, eax */
  ECX = (EAX);
  /* 10dda75f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10dda763 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10dda764 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10dda768 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda76a jb 0x10dda77a */
  if (C.cf) goto L_10dda77a;
  /* 10dda76c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda770 ja 0x10dda77a */
  if ((!C.cf&&!C.zf)) goto L_10dda77a;
  /* 10dda772 jb 0x10dda782 */
  if (C.cf) goto L_10dda782;
  /* 10dda774 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda778 jbe 0x10dda782 */
  if ((C.cf||C.zf)) goto L_10dda782;
L_10dda77a:;
  /* 10dda77a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dda77e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10dda782:;
  /* 10dda782 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dda786 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dda78a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10dda78c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10dda78e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10dda791:;
  /* 10dda791 pop ebx */
  EBX = (pop32());
  /* 10dda792 ret 0x10 */
  ESPCHK(0x10dda720u, _esp0);
  ESP += 20; return;
}

/* FUN_1000a7a0 @ 0x10dda7a0 (628 bytes, 214 insns) */
void f_10dda7a0(void) {
  FTRACE(0x10dda7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dda7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dda7a1 mov ebp, esp */
  EBP = (ESP);
  /* 10dda7a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dda7a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10dda7a7 push esi */
  push32((uint32_t)(ESI));
  /* 10dda7a8 push edi */
  push32((uint32_t)(EDI));
L_10dda7a9:;
  /* 10dda7a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda7ad jne 0x10dda7cd */
  if (!C.zf) goto L_10dda7cd;
  /* 10dda7af push 0x10dfb07c */
  push32((uint32_t)(0x10dfb07cu));
  /* 10dda7b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dda7b6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10dda7b8 push 0x10dfb070 */
  push32((uint32_t)(0x10dfb070u));
  /* 10dda7bd push 2 */
  push32((uint32_t)(0x2u));
  /* 10dda7bf call 0x10dd2b50 */
  push32(0x10dda7c4u); f_10dd2b50();
  /* 10dda7c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda7c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda7ca jne 0x10dda7cd */
  if (!C.zf) goto L_10dda7cd;
  /* 10dda7cc int3  */
  x86_unimpl("int3 @ 0x10dda7cc");
L_10dda7cd:;
  /* 10dda7cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dda7cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dda7d1 jne 0x10dda7a9 */
  if (!C.zf) goto L_10dda7a9;
  /* 10dda7d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dda7d6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10dda7d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda7dc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10dda7df mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10dda7e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda7e5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10dda7e8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10dda7ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dda7f0 je 0x10dda7ff */
  if (C.zf) goto L_10dda7ff;
  /* 10dda7f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda7f5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10dda7f8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10dda7fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dda7fd je 0x10dda815 */
  if (C.zf) goto L_10dda815;
L_10dda7ff:;
  /* 10dda7ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda802 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10dda805 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10dda807 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda80a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10dda80d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dda810 jmp 0x10ddaa0d */
  goto L_10ddaa0d;
L_10dda815:;
  /* 10dda815 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda818 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10dda81b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10dda81e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dda820 je 0x10dda86c */
  if (C.zf) goto L_10dda86c;
  /* 10dda822 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda825 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10dda82c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda82f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10dda832 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10dda835 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dda837 je 0x10dda855 */
  if (C.zf) goto L_10dda855;
  /* 10dda839 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda83c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda83f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10dda842 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10dda844 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda847 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10dda84a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10dda84d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda850 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10dda853 jmp 0x10dda86c */
  goto L_10dda86c;
L_10dda855:;
  /* 10dda855 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda858 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10dda85b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10dda85e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda861 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10dda864 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dda867 jmp 0x10ddaa0d */
  goto L_10ddaa0d;
L_10dda86c:;
  /* 10dda86c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda86f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10dda872 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10dda875 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda878 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10dda87b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda87e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10dda881 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10dda884 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda887 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10dda88a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda88d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10dda894 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10dda89b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dda89e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10dda8a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda8a4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10dda8a7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10dda8ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dda8af jne 0x10dda8df */
  if (!C.zf) goto L_10dda8df;
  /* 10dda8b1 cmp dword ptr [ebp - 8], 0x10dfe140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10dfe140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda8b8 je 0x10dda8c3 */
  if (C.zf) goto L_10dda8c3;
  /* 10dda8ba cmp dword ptr [ebp - 8], 0x10dfe160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10dfe160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda8c1 jne 0x10dda8d3 */
  if (!C.zf) goto L_10dda8d3;
L_10dda8c3:;
  /* 10dda8c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dda8c6 push edx */
  push32((uint32_t)(EDX));
  /* 10dda8c7 call 0x10ddc710 */
  push32(0x10dda8ccu); f_10ddc710();
  /* 10dda8cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda8cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dda8d1 jne 0x10dda8df */
  if (!C.zf) goto L_10dda8df;
L_10dda8d3:;
  /* 10dda8d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda8d6 push eax */
  push32((uint32_t)(EAX));
  /* 10dda8d7 call 0x10ddc640 */
  push32(0x10dda8dcu); f_10ddc640();
  /* 10dda8dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dda8df:;
  /* 10dda8df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda8e2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10dda8e5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10dda8eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dda8ed je 0x10dda9cb */
  if (C.zf) goto L_10dda9cb;
L_10dda8f3:;
  /* 10dda8f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda8f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda8f9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10dda8fb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dda8fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dda900 jge 0x10dda923 */
  if ((C.sf==C.of)) goto L_10dda923;
  /* 10dda902 push 0x10dfb030 */
  push32((uint32_t)(0x10dfb030u));
  /* 10dda907 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dda909 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10dda90e push 0x10dfb070 */
  push32((uint32_t)(0x10dfb070u));
  /* 10dda913 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dda915 call 0x10dd2b50 */
  push32(0x10dda91au); f_10dd2b50();
  /* 10dda91a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda91d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda920 jne 0x10dda923 */
  if (!C.zf) goto L_10dda923;
  /* 10dda922 int3  */
  x86_unimpl("int3 @ 0x10dda922");
L_10dda923:;
  /* 10dda923 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dda925 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dda927 jne 0x10dda8f3 */
  if (!C.zf) goto L_10dda8f3;
  /* 10dda929 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda92c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda92f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10dda931 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dda934 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dda937 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda93a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10dda93d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda940 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda943 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10dda945 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda948 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10dda94b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dda94e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda951 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10dda954 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda958 jle 0x10dda976 */
  if ((C.zf||C.sf!=C.of)) goto L_10dda976;
  /* 10dda95a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dda95d push ecx */
  push32((uint32_t)(ECX));
  /* 10dda95e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda961 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10dda964 push eax */
  push32((uint32_t)(EAX));
  /* 10dda965 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dda968 push ecx */
  push32((uint32_t)(ECX));
  /* 10dda969 call 0x10ddc330 */
  push32(0x10dda96eu); f_10ddc330();
  /* 10dda96e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda971 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dda974 jmp 0x10dda9be */
  goto L_10dda9be;
L_10dda976:;
  /* 10dda976 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda97a je 0x10dda999 */
  if (C.zf) goto L_10dda999;
  /* 10dda97c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dda97f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10dda982 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dda985 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10dda988 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dda98b mov ecx, dword ptr [edx*4 + 0x10e00f80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10e00f80)));
  /* 10dda992 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda994 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10dda997 jmp 0x10dda9a0 */
  goto L_10dda9a0;
L_10dda999:;
  /* 10dda999 mov dword ptr [ebp - 0x14], 0x10dfda60 */
  w32((uint32_t)(EBP + -0x14), (0x10dfda60u));
L_10dda9a0:;
  /* 10dda9a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dda9a3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10dda9a7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10dda9aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dda9ac je 0x10dda9be */
  if (C.zf) goto L_10dda9be;
  /* 10dda9ae push 2 */
  push32((uint32_t)(0x2u));
  /* 10dda9b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dda9b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dda9b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10dda9b6 call 0x10ddc1e0 */
  push32(0x10dda9bbu); f_10ddc1e0();
  /* 10dda9bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dda9be:;
  /* 10dda9be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda9c1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10dda9c4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10dda9c7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10dda9c9 jmp 0x10dda9e9 */
  goto L_10dda9e9;
L_10dda9cb:;
  /* 10dda9cb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10dda9d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dda9d5 push edx */
  push32((uint32_t)(EDX));
  /* 10dda9d6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10dda9d9 push eax */
  push32((uint32_t)(EAX));
  /* 10dda9da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dda9dd push ecx */
  push32((uint32_t)(ECX));
  /* 10dda9de call 0x10ddc330 */
  push32(0x10dda9e3u); f_10ddc330();
  /* 10dda9e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dda9e6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10dda9e9:;
  /* 10dda9e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dda9ec cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dda9ef je 0x10ddaa05 */
  if (C.zf) goto L_10ddaa05;
  /* 10dda9f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda9f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10dda9f7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10dda9fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dda9fd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10ddaa00 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddaa03 jmp 0x10ddaa0d */
  goto L_10ddaa0d;
L_10ddaa05:;
  /* 10ddaa05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddaa08 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10ddaa0d:;
  /* 10ddaa0d pop edi */
  EDI = (pop32());
  /* 10ddaa0e pop esi */
  ESI = (pop32());
  /* 10ddaa0f pop ebx */
  EBX = (pop32());
  /* 10ddaa10 mov esp, ebp */
  ESP = (EBP);
  /* 10ddaa12 pop ebp */
  EBP = (pop32());
  /* 10ddaa13 ret  */
  ESPCHK(0x10dda7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa20 @ 0x10ddaa20 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10ddaa20(void) {
  FTRACE(0x10ddaa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddaa20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddaa21 mov ebp, esp */
  EBP = (ESP);
  /* 10ddaa23 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddaa29 push ebx */
  push32((uint32_t)(EBX));
  /* 10ddaa2a push esi */
  push32((uint32_t)(ESI));
  /* 10ddaa2b push edi */
  push32((uint32_t)(EDI));
  /* 10ddaa2c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10ddaa33 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10ddaa3d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10ddaa44:;
  /* 10ddaa44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddaa47 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ddaa49 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10ddaa4c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ddaa50 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddaa53 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddaa56 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10ddaa59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddaa5b je 0x10ddb637 */
  if (C.zf) goto L_10ddb637;
  /* 10ddaa61 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddaa68 jl 0x10ddb637 */
  if ((C.sf!=C.of)) goto L_10ddb637;
  /* 10ddaa6e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ddaa72 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddaa75 jl 0x10ddaa96 */
  if ((C.sf!=C.of)) goto L_10ddaa96;
  /* 10ddaa77 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ddaa7b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddaa7e jg 0x10ddaa96 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ddaa96;
  /* 10ddaa80 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ddaa84 movsx ecx, byte ptr [eax + 0x10dfb068] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10dfb068))));
  /* 10ddaa8b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10ddaa8e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10ddaa94 jmp 0x10ddaaa0 */
  goto L_10ddaaa0;
L_10ddaa96:;
  /* 10ddaa96 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10ddaaa0:;
  /* 10ddaaa0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10ddaaa6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ddaaa9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddaaac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ddaaaf movsx edx, byte ptr [ecx + eax*8 + 0x10dfb088] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10dfb088))));
  /* 10ddaab7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10ddaaba mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ddaabd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ddaac0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10ddaac6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddaacd ja 0x10ddb632 */
  if ((!C.cf&&!C.zf)) goto L_10ddb632;
  /* 10ddaad3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10ddaad9 jmp dword ptr [ecx*4 + 0x10ddb644] */
  switch (ECX) {
    case 0: goto L_10ddaae0;
    case 1: goto L_10ddab7a;
    case 2: goto L_10ddabbc;
    case 3: goto L_10ddac2b;
    case 4: goto L_10ddac83;
    case 5: goto L_10ddac92;
    case 6: goto L_10ddacde;
    case 7: goto L_10ddad71;
    case 8: goto L_10ddac08;
    case 9: goto L_10ddac13;
    case 10: goto L_10ddabfe;
    case 11: goto L_10ddabf3;
    case 12: goto L_10ddac1e;
    case 13: goto L_10ddac26;
    default: x86_unimpl("switch@0x10ddaad9 out of table"); return;
  }
L_10ddaae0:;
  /* 10ddaae0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10ddaae7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ddaaea and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ddaaf0 mov eax, dword ptr [0x10dfdc98] */
  EAX = (r32((uint32_t)(0x10dfdc98)));
  /* 10ddaaf5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddaaf7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10ddaafb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddab01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddab03 je 0x10ddab5d */
  if (C.zf) goto L_10ddab5d;
  /* 10ddab05 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10ddab0b push edx */
  push32((uint32_t)(EDX));
  /* 10ddab0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddab0f push eax */
  push32((uint32_t)(EAX));
  /* 10ddab10 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ddab14 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddab15 call 0x10ddb750 */
  push32(0x10ddab1au); f_10ddb750();
  /* 10ddab1a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddab1d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddab20 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ddab22 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10ddab25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddab28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddab2b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10ddab2e:;
  /* 10ddab2e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ddab32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddab34 jne 0x10ddab57 */
  if (!C.zf) goto L_10ddab57;
  /* 10ddab36 push 0x10dfb108 */
  push32((uint32_t)(0x10dfb108u));
  /* 10ddab3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddab3d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10ddab42 push 0x10dfb0fc */
  push32((uint32_t)(0x10dfb0fcu));
  /* 10ddab47 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddab49 call 0x10dd2b50 */
  push32(0x10ddab4eu); f_10dd2b50();
  /* 10ddab4e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddab51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddab54 jne 0x10ddab57 */
  if (!C.zf) goto L_10ddab57;
  /* 10ddab56 int3  */
  x86_unimpl("int3 @ 0x10ddab56");
L_10ddab57:;
  /* 10ddab57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddab59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddab5b jne 0x10ddab2e */
  if (!C.zf) goto L_10ddab2e;
L_10ddab5d:;
  /* 10ddab5d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10ddab63 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddab64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddab67 push edx */
  push32((uint32_t)(EDX));
  /* 10ddab68 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ddab6c push eax */
  push32((uint32_t)(EAX));
  /* 10ddab6d call 0x10ddb750 */
  push32(0x10ddab72u); f_10ddb750();
  /* 10ddab72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddab75 jmp 0x10ddb632 */
  goto L_10ddb632;
L_10ddab7a:;
  /* 10ddab7a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ddab81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddab84 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10ddab8a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10ddab90 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10ddab96 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10ddab9c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ddab9f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ddaba6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10ddabb0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10ddabb7 jmp 0x10ddb632 */
  goto L_10ddb632;
L_10ddabbc:;
  /* 10ddabbc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ddabc0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10ddabc6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10ddabcc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddabcf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10ddabd5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddabdc ja 0x10ddac26 */
  if ((!C.cf&&!C.zf)) goto L_10ddac26;
  /* 10ddabde mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10ddabe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddabe6 mov al, byte ptr [ecx + 0x10ddb67c] */
  AL = (r8((uint32_t)(ECX + 0x10ddb67c)));
  /* 10ddabec jmp dword ptr [eax*4 + 0x10ddb664] */
  switch (EAX) {
    case 0: goto L_10ddac08;
    case 1: goto L_10ddac13;
    case 2: goto L_10ddabfe;
    case 3: goto L_10ddabf3;
    case 4: goto L_10ddac1e;
    case 5: goto L_10ddac26;
    default: x86_unimpl("switch@0x10ddabec out of table"); return;
  }
L_10ddabf3:;
  /* 10ddabf3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddabf6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddabf9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ddabfc jmp 0x10ddac26 */
  goto L_10ddac26;
L_10ddabfe:;
  /* 10ddabfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddac01 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10ddac03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddac06 jmp 0x10ddac26 */
  goto L_10ddac26;
L_10ddac08:;
  /* 10ddac08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddac0b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddac0e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ddac11 jmp 0x10ddac26 */
  goto L_10ddac26;
L_10ddac13:;
  /* 10ddac13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddac16 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10ddac19 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ddac1c jmp 0x10ddac26 */
  goto L_10ddac26;
L_10ddac1e:;
  /* 10ddac1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddac21 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10ddac23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ddac26:;
  /* 10ddac26 jmp 0x10ddb632 */
  goto L_10ddb632;
L_10ddac2b:;
  /* 10ddac2b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ddac2f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddac32 jne 0x10ddac67 */
  if (!C.zf) goto L_10ddac67;
  /* 10ddac34 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10ddac37 push edx */
  push32((uint32_t)(EDX));
  /* 10ddac38 call 0x10ddb860 */
  push32(0x10ddac3du); f_10ddb860();
  /* 10ddac3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddac40 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10ddac46 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddac4d jge 0x10ddac65 */
  if ((C.sf==C.of)) goto L_10ddac65;
  /* 10ddac4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddac52 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10ddac54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddac57 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10ddac5d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ddac5f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10ddac65:;
  /* 10ddac65 jmp 0x10ddac7e */
  goto L_10ddac7e;
L_10ddac67:;
  /* 10ddac67 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10ddac6d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddac70 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ddac74 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10ddac78 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10ddac7e:;
  /* 10ddac7e jmp 0x10ddb632 */
  goto L_10ddb632;
L_10ddac83:;
  /* 10ddac83 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10ddac8d jmp 0x10ddb632 */
  goto L_10ddb632;
L_10ddac92:;
  /* 10ddac92 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ddac96 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddac99 jne 0x10ddacc2 */
  if (!C.zf) goto L_10ddacc2;
  /* 10ddac9b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10ddac9e push eax */
  push32((uint32_t)(EAX));
  /* 10ddac9f call 0x10ddb860 */
  push32(0x10ddaca4u); f_10ddb860();
  /* 10ddaca4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddaca7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10ddacad cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddacb4 jge 0x10ddacc0 */
  if ((C.sf==C.of)) goto L_10ddacc0;
  /* 10ddacb6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10ddacc0:;
  /* 10ddacc0 jmp 0x10ddacd9 */
  goto L_10ddacd9;
L_10ddacc2:;
  /* 10ddacc2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10ddacc8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddaccb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ddaccf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10ddacd3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10ddacd9:;
  /* 10ddacd9 jmp 0x10ddb632 */
  goto L_10ddb632;
L_10ddacde:;
  /* 10ddacde movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ddace2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10ddace8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10ddacee sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddacf1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10ddacf7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddacfe ja 0x10ddad6c */
  if ((!C.cf&&!C.zf)) goto L_10ddad6c;
  /* 10ddad00 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10ddad06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddad08 mov al, byte ptr [ecx + 0x10ddb6a1] */
  AL = (r8((uint32_t)(ECX + 0x10ddb6a1)));
  /* 10ddad0e jmp dword ptr [eax*4 + 0x10ddb68d] */
  switch (EAX) {
    case 0: goto L_10ddad20;
    case 1: goto L_10ddad59;
    case 2: goto L_10ddad15;
    case 3: goto L_10ddad63;
    case 4: goto L_10ddad6c;
    default: x86_unimpl("switch@0x10ddad0e out of table"); return;
  }
L_10ddad15:;
  /* 10ddad15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddad18 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddad1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ddad1e jmp 0x10ddad6c */
  goto L_10ddad6c;
L_10ddad20:;
  /* 10ddad20 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddad23 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ddad26 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddad29 jne 0x10ddad4b */
  if (!C.zf) goto L_10ddad4b;
  /* 10ddad2b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddad2e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10ddad32 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddad35 jne 0x10ddad4b */
  if (!C.zf) goto L_10ddad4b;
  /* 10ddad37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddad3a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddad3d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10ddad40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddad43 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10ddad46 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ddad49 jmp 0x10ddad57 */
  goto L_10ddad57;
L_10ddad4b:;
  /* 10ddad4b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10ddad52 jmp 0x10ddaae0 */
  goto L_10ddaae0;
L_10ddad57:;
  /* 10ddad57 jmp 0x10ddad6c */
  goto L_10ddad6c;
L_10ddad59:;
  /* 10ddad59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddad5c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10ddad5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddad61 jmp 0x10ddad6c */
  goto L_10ddad6c;
L_10ddad63:;
  /* 10ddad63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddad66 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10ddad69 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ddad6c:;
  /* 10ddad6c jmp 0x10ddb632 */
  goto L_10ddb632;
L_10ddad71:;
  /* 10ddad71 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ddad75 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10ddad7b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10ddad81 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddad84 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10ddad8a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddad91 ja 0x10ddb457 */
  if ((!C.cf&&!C.zf)) goto L_10ddb457;
  /* 10ddad97 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10ddad9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddad9f mov cl, byte ptr [edx + 0x10ddb70c] */
  CL = (r8((uint32_t)(EDX + 0x10ddb70c)));
  /* 10ddada5 jmp dword ptr [ecx*4 + 0x10ddb6d0] */
  switch (ECX) {
    case 0: goto L_10ddadac;
    case 1: goto L_10ddb040;
    case 2: goto L_10ddaed0;
    case 3: goto L_10ddb179;
    case 4: goto L_10ddae3b;
    case 5: goto L_10ddadc1;
    case 6: goto L_10ddb14b;
    case 7: goto L_10ddb050;
    case 8: goto L_10ddaff5;
    case 9: goto L_10ddb1c5;
    case 10: goto L_10ddb16f;
    case 11: goto L_10ddaee6;
    case 12: goto L_10ddb163;
    case 13: goto L_10ddb185;
    case 14: goto L_10ddb457;
    default: x86_unimpl("switch@0x10ddada5 out of table"); return;
  }
L_10ddadac:;
  /* 10ddadac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddadaf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddadb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddadb6 jne 0x10ddadc1 */
  if (!C.zf) goto L_10ddadc1;
  /* 10ddadb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddadbb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10ddadbe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ddadc1:;
  /* 10ddadc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddadc4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddadca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddadcc je 0x10ddae07 */
  if (C.zf) goto L_10ddae07;
  /* 10ddadce lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10ddadd1 push eax */
  push32((uint32_t)(EAX));
  /* 10ddadd2 call 0x10ddb8a0 */
  push32(0x10ddadd7u); f_10ddb8a0();
  /* 10ddadd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddadda mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10ddadde mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10ddade2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddade3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10ddade9 push edx */
  push32((uint32_t)(EDX));
  /* 10ddadea call 0x10ddc980 */
  push32(0x10ddadefu); f_10ddc980();
  /* 10ddadef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddadf2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ddadf5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddadf9 jge 0x10ddae05 */
  if ((C.sf==C.of)) goto L_10ddae05;
  /* 10ddadfb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10ddae05:;
  /* 10ddae05 jmp 0x10ddae2d */
  goto L_10ddae2d;
L_10ddae07:;
  /* 10ddae07 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10ddae0a push eax */
  push32((uint32_t)(EAX));
  /* 10ddae0b call 0x10ddb860 */
  push32(0x10ddae10u); f_10ddb860();
  /* 10ddae10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddae13 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10ddae1a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10ddae20 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10ddae26 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10ddae2d:;
  /* 10ddae2d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10ddae33 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10ddae36 jmp 0x10ddb457 */
  goto L_10ddb457;
L_10ddae3b:;
  /* 10ddae3b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10ddae3e push eax */
  push32((uint32_t)(EAX));
  /* 10ddae3f call 0x10ddb860 */
  push32(0x10ddae44u); f_10ddb860();
  /* 10ddae44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddae47 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10ddae4d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddae54 je 0x10ddae62 */
  if (C.zf) goto L_10ddae62;
  /* 10ddae56 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10ddae5c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddae60 jne 0x10ddae7c */
  if (!C.zf) goto L_10ddae7c;
L_10ddae62:;
  /* 10ddae62 mov edx, dword ptr [0x10dfdfb0] */
  EDX = (r32((uint32_t)(0x10dfdfb0)));
  /* 10ddae68 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10ddae6b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddae6e push eax */
  push32((uint32_t)(EAX));
  /* 10ddae6f call 0x10dd68c0 */
  push32(0x10ddae74u); f_10dd68c0();
  /* 10ddae74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddae77 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ddae7a jmp 0x10ddaecb */
  goto L_10ddaecb;
L_10ddae7c:;
  /* 10ddae7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddae7f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddae85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddae87 je 0x10ddaeac */
  if (C.zf) goto L_10ddaeac;
  /* 10ddae89 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10ddae8f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ddae92 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ddae95 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10ddae9b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10ddae9e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10ddaea0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10ddaea3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10ddaeaa jmp 0x10ddaecb */
  goto L_10ddaecb;
L_10ddaeac:;
  /* 10ddaeac mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10ddaeb3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10ddaeb9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ddaebc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ddaebf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10ddaec5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10ddaec8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10ddaecb:;
  /* 10ddaecb jmp 0x10ddb457 */
  goto L_10ddb457;
L_10ddaed0:;
  /* 10ddaed0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddaed3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddaed9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddaedb jne 0x10ddaee6 */
  if (!C.zf) goto L_10ddaee6;
  /* 10ddaedd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddaee0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10ddaee3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ddaee6:;
  /* 10ddaee6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddaeed jne 0x10ddaefb */
  if (!C.zf) goto L_10ddaefb;
  /* 10ddaeef mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10ddaef9 jmp 0x10ddaf07 */
  goto L_10ddaf07;
L_10ddaefb:;
  /* 10ddaefb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10ddaf01 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10ddaf07:;
  /* 10ddaf07 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10ddaf0d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10ddaf13 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10ddaf16 push edx */
  push32((uint32_t)(EDX));
  /* 10ddaf17 call 0x10ddb860 */
  push32(0x10ddaf1cu); f_10ddb860();
  /* 10ddaf1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddaf1f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ddaf22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddaf25 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddaf2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddaf2c je 0x10ddaf96 */
  if (C.zf) goto L_10ddaf96;
  /* 10ddaf2e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddaf32 jne 0x10ddaf3d */
  if (!C.zf) goto L_10ddaf3d;
  /* 10ddaf34 mov ecx, dword ptr [0x10dfdfb4] */
  ECX = (r32((uint32_t)(0x10dfdfb4)));
  /* 10ddaf3a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10ddaf3d:;
  /* 10ddaf3d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10ddaf44 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddaf47 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10ddaf4d:;
  /* 10ddaf4d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10ddaf53 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10ddaf59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddaf5c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10ddaf62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddaf64 je 0x10ddaf86 */
  if (C.zf) goto L_10ddaf86;
  /* 10ddaf66 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10ddaf6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddaf6e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10ddaf71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddaf73 je 0x10ddaf86 */
  if (C.zf) goto L_10ddaf86;
  /* 10ddaf75 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10ddaf7b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddaf7e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10ddaf84 jmp 0x10ddaf4d */
  goto L_10ddaf4d;
L_10ddaf86:;
  /* 10ddaf86 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10ddaf8c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddaf8f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10ddaf91 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10ddaf94 jmp 0x10ddaff0 */
  goto L_10ddaff0;
L_10ddaf96:;
  /* 10ddaf96 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddaf9a jne 0x10ddafa4 */
  if (!C.zf) goto L_10ddafa4;
  /* 10ddaf9c mov eax, dword ptr [0x10dfdfb0] */
  EAX = (r32((uint32_t)(0x10dfdfb0)));
  /* 10ddafa1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10ddafa4:;
  /* 10ddafa4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddafa7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10ddafad:;
  /* 10ddafad mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10ddafb3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10ddafb9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddafbc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10ddafc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddafc4 je 0x10ddafe4 */
  if (C.zf) goto L_10ddafe4;
  /* 10ddafc6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10ddafcc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ddafcf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddafd1 je 0x10ddafe4 */
  if (C.zf) goto L_10ddafe4;
  /* 10ddafd3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10ddafd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddafdc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10ddafe2 jmp 0x10ddafad */
  goto L_10ddafad;
L_10ddafe4:;
  /* 10ddafe4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10ddafea sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddafed mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10ddaff0:;
  /* 10ddaff0 jmp 0x10ddb457 */
  goto L_10ddb457;
L_10ddaff5:;
  /* 10ddaff5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10ddaff8 push edx */
  push32((uint32_t)(EDX));
  /* 10ddaff9 call 0x10ddb860 */
  push32(0x10ddaffeu); f_10ddb860();
  /* 10ddaffe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb001 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10ddb007 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb00a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddb00d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddb00f je 0x10ddb023 */
  if (C.zf) goto L_10ddb023;
  /* 10ddb011 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10ddb017 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10ddb01e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10ddb021 jmp 0x10ddb031 */
  goto L_10ddb031;
L_10ddb023:;
  /* 10ddb023 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10ddb029 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10ddb02f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10ddb031:;
  /* 10ddb031 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10ddb03b jmp 0x10ddb457 */
  goto L_10ddb457;
L_10ddb040:;
  /* 10ddb040 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10ddb047 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10ddb04a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ddb04d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10ddb050:;
  /* 10ddb050 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb053 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10ddb055 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddb058 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10ddb05e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ddb061 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb068 jge 0x10ddb076 */
  if ((C.sf==C.of)) goto L_10ddb076;
  /* 10ddb06a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10ddb074 jmp 0x10ddb092 */
  goto L_10ddb092;
L_10ddb076:;
  /* 10ddb076 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb07d jne 0x10ddb092 */
  if (!C.zf) goto L_10ddb092;
  /* 10ddb07f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ddb083 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb086 jne 0x10ddb092 */
  if (!C.zf) goto L_10ddb092;
  /* 10ddb088 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10ddb092:;
  /* 10ddb092 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddb095 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb098 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10ddb09b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddb09e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddb0a1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ddb0a3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ddb0a6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10ddb0ac mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10ddb0b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddb0b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb0b6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10ddb0bc push edx */
  push32((uint32_t)(EDX));
  /* 10ddb0bd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ddb0c1 push eax */
  push32((uint32_t)(EAX));
  /* 10ddb0c2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddb0c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb0c6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10ddb0cc push edx */
  push32((uint32_t)(EDX));
  /* 10ddb0cd call dword ptr [0x10dfe3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dfe3a0))), 0x10ddb0d3u);
  /* 10ddb0d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb0d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb0d9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddb0de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddb0e0 je 0x10ddb0f8 */
  if (C.zf) goto L_10ddb0f8;
  /* 10ddb0e2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb0e9 jne 0x10ddb0f8 */
  if (!C.zf) goto L_10ddb0f8;
  /* 10ddb0eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddb0ee push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb0ef call dword ptr [0x10dfe3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dfe3ac))), 0x10ddb0f5u);
  /* 10ddb0f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddb0f8:;
  /* 10ddb0f8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ddb0fc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb0ff jne 0x10ddb11a */
  if (!C.zf) goto L_10ddb11a;
  /* 10ddb101 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb104 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddb109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddb10b jne 0x10ddb11a */
  if (!C.zf) goto L_10ddb11a;
  /* 10ddb10d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddb110 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb111 call dword ptr [0x10dfe3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dfe3a4))), 0x10ddb117u);
  /* 10ddb117 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddb11a:;
  /* 10ddb11a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddb11d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ddb120 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb123 jne 0x10ddb137 */
  if (!C.zf) goto L_10ddb137;
  /* 10ddb125 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb128 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10ddb12b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ddb12e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddb131 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb134 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10ddb137:;
  /* 10ddb137 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddb13a push eax */
  push32((uint32_t)(EAX));
  /* 10ddb13b call 0x10dd68c0 */
  push32(0x10ddb140u); f_10dd68c0();
  /* 10ddb140 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb143 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ddb146 jmp 0x10ddb457 */
  goto L_10ddb457;
L_10ddb14b:;
  /* 10ddb14b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb14e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddb151 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ddb154 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10ddb15e jmp 0x10ddb1e5 */
  goto L_10ddb1e5;
L_10ddb163:;
  /* 10ddb163 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10ddb16d jmp 0x10ddb1e5 */
  goto L_10ddb1e5;
L_10ddb16f:;
  /* 10ddb16f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10ddb179:;
  /* 10ddb179 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10ddb183 jmp 0x10ddb18f */
  goto L_10ddb18f;
L_10ddb185:;
  /* 10ddb185 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10ddb18f:;
  /* 10ddb18f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10ddb199 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb19c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddb1a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddb1a4 je 0x10ddb1c3 */
  if (C.zf) goto L_10ddb1c3;
  /* 10ddb1a6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10ddb1ad mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10ddb1b3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb1b6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10ddb1bc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10ddb1c3:;
  /* 10ddb1c3 jmp 0x10ddb1e5 */
  goto L_10ddb1e5;
L_10ddb1c5:;
  /* 10ddb1c5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10ddb1cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb1d2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddb1d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddb1da je 0x10ddb1e5 */
  if (C.zf) goto L_10ddb1e5;
  /* 10ddb1dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb1df or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10ddb1e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ddb1e5:;
  /* 10ddb1e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb1e8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddb1ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddb1ef je 0x10ddb20e */
  if (C.zf) goto L_10ddb20e;
  /* 10ddb1f1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10ddb1f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb1f5 call 0x10ddb880 */
  push32(0x10ddb1fau); f_10ddb880();
  /* 10ddb1fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb1fd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10ddb203 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10ddb209 jmp 0x10ddb29f */
  goto L_10ddb29f;
L_10ddb20e:;
  /* 10ddb20e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb211 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddb214 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddb216 je 0x10ddb260 */
  if (C.zf) goto L_10ddb260;
  /* 10ddb218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb21b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddb21e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddb220 je 0x10ddb240 */
  if (C.zf) goto L_10ddb240;
  /* 10ddb222 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10ddb225 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb226 call 0x10ddb860 */
  push32(0x10ddb22bu); f_10ddb860();
  /* 10ddb22b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb22e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10ddb231 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ddb232 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10ddb238 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10ddb23e jmp 0x10ddb25e */
  goto L_10ddb25e;
L_10ddb240:;
  /* 10ddb240 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10ddb243 push edx */
  push32((uint32_t)(EDX));
  /* 10ddb244 call 0x10ddb860 */
  push32(0x10ddb249u); f_10ddb860();
  /* 10ddb249 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb24c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddb251 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ddb252 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10ddb258 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10ddb25e:;
  /* 10ddb25e jmp 0x10ddb29f */
  goto L_10ddb29f;
L_10ddb260:;
  /* 10ddb260 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb263 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddb266 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddb268 je 0x10ddb285 */
  if (C.zf) goto L_10ddb285;
  /* 10ddb26a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10ddb26d push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb26e call 0x10ddb860 */
  push32(0x10ddb273u); f_10ddb860();
  /* 10ddb273 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb276 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ddb277 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10ddb27d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10ddb283 jmp 0x10ddb29f */
  goto L_10ddb29f;
L_10ddb285:;
  /* 10ddb285 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10ddb288 push edx */
  push32((uint32_t)(EDX));
  /* 10ddb289 call 0x10ddb860 */
  push32(0x10ddb28eu); f_10ddb860();
  /* 10ddb28e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb291 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddb293 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10ddb299 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10ddb29f:;
  /* 10ddb29f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb2a2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddb2a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddb2a7 je 0x10ddb2e7 */
  if (C.zf) goto L_10ddb2e7;
  /* 10ddb2a9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb2b0 jg 0x10ddb2e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ddb2e7;
  /* 10ddb2b2 jl 0x10ddb2bd */
  if ((C.sf!=C.of)) goto L_10ddb2bd;
  /* 10ddb2b4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb2bb jae 0x10ddb2e7 */
  if (!C.cf) goto L_10ddb2e7;
L_10ddb2bd:;
  /* 10ddb2bd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10ddb2c3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ddb2c5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10ddb2cb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb2ce neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ddb2d0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10ddb2d6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10ddb2dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb2df or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10ddb2e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ddb2e5 jmp 0x10ddb2ff */
  goto L_10ddb2ff;
L_10ddb2e7:;
  /* 10ddb2e7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10ddb2ed mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10ddb2f3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10ddb2f9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10ddb2ff:;
  /* 10ddb2ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb302 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddb308 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddb30a jne 0x10ddb327 */
  if (!C.zf) goto L_10ddb327;
  /* 10ddb30c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10ddb312 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10ddb318 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddb31b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10ddb321 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10ddb327:;
  /* 10ddb327 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb32e jge 0x10ddb33c */
  if ((C.sf==C.of)) goto L_10ddb33c;
  /* 10ddb330 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10ddb33a jmp 0x10ddb345 */
  goto L_10ddb345;
L_10ddb33c:;
  /* 10ddb33c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb33f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddb342 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ddb345:;
  /* 10ddb345 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10ddb34b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10ddb351 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddb353 jne 0x10ddb35c */
  if (!C.zf) goto L_10ddb35c;
  /* 10ddb355 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10ddb35c:;
  /* 10ddb35c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10ddb35f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10ddb362:;
  /* 10ddb362 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10ddb368 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10ddb36e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddb371 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10ddb377 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddb379 jg 0x10ddb38f */
  if ((!C.zf&&C.sf==C.of)) goto L_10ddb38f;
  /* 10ddb37b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10ddb381 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10ddb387 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddb389 je 0x10ddb410 */
  if (C.zf) goto L_10ddb410;
L_10ddb38f:;
  /* 10ddb38f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10ddb395 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ddb396 push edx */
  push32((uint32_t)(EDX));
  /* 10ddb397 push eax */
  push32((uint32_t)(EAX));
  /* 10ddb398 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10ddb39e push edx */
  push32((uint32_t)(EDX));
  /* 10ddb39f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10ddb3a5 push eax */
  push32((uint32_t)(EAX));
  /* 10ddb3a6 call 0x10dda720 */
  push32(0x10ddb3abu); f_10dda720();
  /* 10ddb3ab add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb3ae mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10ddb3b4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10ddb3ba cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ddb3bb push edx */
  push32((uint32_t)(EDX));
  /* 10ddb3bc push eax */
  push32((uint32_t)(EAX));
  /* 10ddb3bd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10ddb3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb3c4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10ddb3ca push edx */
  push32((uint32_t)(EDX));
  /* 10ddb3cb call 0x10dda6b0 */
  push32(0x10ddb3d0u); f_10dda6b0();
  /* 10ddb3d0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10ddb3d6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10ddb3dc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb3e3 jle 0x10ddb3f7 */
  if ((C.zf||C.sf!=C.of)) goto L_10ddb3f7;
  /* 10ddb3e5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10ddb3eb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb3f1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10ddb3f7:;
  /* 10ddb3f7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddb3fa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10ddb400 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10ddb402 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddb405 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddb408 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ddb40b jmp 0x10ddb362 */
  goto L_10ddb362;
L_10ddb410:;
  /* 10ddb410 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10ddb413 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddb416 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ddb419 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddb41c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb41f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10ddb422 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb425 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddb42a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddb42c je 0x10ddb457 */
  if (C.zf) goto L_10ddb457;
  /* 10ddb42e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddb431 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ddb434 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb437 jne 0x10ddb43f */
  if (!C.zf) goto L_10ddb43f;
  /* 10ddb439 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb43d jne 0x10ddb457 */
  if (!C.zf) goto L_10ddb457;
L_10ddb43f:;
  /* 10ddb43f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddb442 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddb445 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ddb448 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddb44b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10ddb44e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ddb451 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb454 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10ddb457:;
  /* 10ddb457 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb45e jne 0x10ddb632 */
  if (!C.zf) goto L_10ddb632;
  /* 10ddb464 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb467 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddb46a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddb46c je 0x10ddb4bd */
  if (C.zf) goto L_10ddb4bd;
  /* 10ddb46e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb471 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddb477 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddb479 je 0x10ddb48b */
  if (C.zf) goto L_10ddb48b;
  /* 10ddb47b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10ddb482 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10ddb489 jmp 0x10ddb4bd */
  goto L_10ddb4bd;
L_10ddb48b:;
  /* 10ddb48b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb48e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddb491 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddb493 je 0x10ddb4a5 */
  if (C.zf) goto L_10ddb4a5;
  /* 10ddb495 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10ddb49c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10ddb4a3 jmp 0x10ddb4bd */
  goto L_10ddb4bd;
L_10ddb4a5:;
  /* 10ddb4a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb4a8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddb4ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddb4ad je 0x10ddb4bd */
  if (C.zf) goto L_10ddb4bd;
  /* 10ddb4af mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10ddb4b6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10ddb4bd:;
  /* 10ddb4bd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10ddb4c3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddb4c6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddb4c9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10ddb4cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb4d2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10ddb4d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddb4d7 jne 0x10ddb4f5 */
  if (!C.zf) goto L_10ddb4f5;
  /* 10ddb4d9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10ddb4df push eax */
  push32((uint32_t)(EAX));
  /* 10ddb4e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb4e4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10ddb4ea push edx */
  push32((uint32_t)(EDX));
  /* 10ddb4eb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10ddb4ed call 0x10ddb7d0 */
  push32(0x10ddb4f2u); f_10ddb7d0();
  /* 10ddb4f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddb4f5:;
  /* 10ddb4f5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10ddb4fb push eax */
  push32((uint32_t)(EAX));
  /* 10ddb4fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb4ff push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb500 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ddb503 push edx */
  push32((uint32_t)(EDX));
  /* 10ddb504 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10ddb50a push eax */
  push32((uint32_t)(EAX));
  /* 10ddb50b call 0x10ddb810 */
  push32(0x10ddb510u); f_10ddb810();
  /* 10ddb510 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb513 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb516 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddb519 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddb51b je 0x10ddb543 */
  if (C.zf) goto L_10ddb543;
  /* 10ddb51d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb520 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddb523 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddb525 jne 0x10ddb543 */
  if (!C.zf) goto L_10ddb543;
  /* 10ddb527 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10ddb52d push eax */
  push32((uint32_t)(EAX));
  /* 10ddb52e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb531 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb532 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10ddb538 push edx */
  push32((uint32_t)(EDX));
  /* 10ddb539 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10ddb53b call 0x10ddb7d0 */
  push32(0x10ddb540u); f_10ddb7d0();
  /* 10ddb540 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddb543:;
  /* 10ddb543 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb547 je 0x10ddb5f1 */
  if (C.zf) goto L_10ddb5f1;
  /* 10ddb54d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb551 jle 0x10ddb5f1 */
  if ((C.zf||C.sf!=C.of)) goto L_10ddb5f1;
  /* 10ddb557 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddb55a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10ddb560 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ddb563 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10ddb569:;
  /* 10ddb569 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10ddb56f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10ddb575 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddb578 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10ddb57e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddb580 je 0x10ddb5ef */
  if (C.zf) goto L_10ddb5ef;
  /* 10ddb582 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10ddb588 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10ddb58b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10ddb592 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10ddb599 push eax */
  push32((uint32_t)(EAX));
  /* 10ddb59a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10ddb5a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb5a1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10ddb5a7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb5aa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10ddb5b0 call 0x10ddc980 */
  push32(0x10ddb5b5u); f_10ddc980();
  /* 10ddb5b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb5b8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10ddb5be cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb5c5 jg 0x10ddb5c9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ddb5c9;
  /* 10ddb5c7 jmp 0x10ddb5ef */
  goto L_10ddb5ef;
L_10ddb5c9:;
  /* 10ddb5c9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10ddb5cf push eax */
  push32((uint32_t)(EAX));
  /* 10ddb5d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb5d4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10ddb5da push edx */
  push32((uint32_t)(EDX));
  /* 10ddb5db lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10ddb5e1 push eax */
  push32((uint32_t)(EAX));
  /* 10ddb5e2 call 0x10ddb810 */
  push32(0x10ddb5e7u); f_10ddb810();
  /* 10ddb5e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb5ea jmp 0x10ddb569 */
  goto L_10ddb569;
L_10ddb5ef:;
  /* 10ddb5ef jmp 0x10ddb60c */
  goto L_10ddb60c;
L_10ddb5f1:;
  /* 10ddb5f1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10ddb5f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb5f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb5fb push edx */
  push32((uint32_t)(EDX));
  /* 10ddb5fc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ddb5ff push eax */
  push32((uint32_t)(EAX));
  /* 10ddb600 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddb603 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb604 call 0x10ddb810 */
  push32(0x10ddb609u); f_10ddb810();
  /* 10ddb609 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddb60c:;
  /* 10ddb60c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb60f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddb612 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddb614 je 0x10ddb632 */
  if (C.zf) goto L_10ddb632;
  /* 10ddb616 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10ddb61c push eax */
  push32((uint32_t)(EAX));
  /* 10ddb61d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb620 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb621 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10ddb627 push edx */
  push32((uint32_t)(EDX));
  /* 10ddb628 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10ddb62a call 0x10ddb7d0 */
  push32(0x10ddb62fu); f_10ddb7d0();
  /* 10ddb62f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddb632:;
  /* 10ddb632 jmp 0x10ddaa44 */
  goto L_10ddaa44;
L_10ddb637:;
  /* 10ddb637 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10ddb63d pop edi */
  EDI = (pop32());
  /* 10ddb63e pop esi */
  ESI = (pop32());
  /* 10ddb63f pop ebx */
  EBX = (pop32());
  /* 10ddb640 mov esp, ebp */
  ESP = (EBP);
  /* 10ddb642 pop ebp */
  EBP = (pop32());
  /* 10ddb643 ret  */
  ESPCHK(0x10ddaa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x10ddb750 (119 bytes, 44 insns) */
void f_10ddb750(void) {
  FTRACE(0x10ddb750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddb750 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddb751 mov ebp, esp */
  EBP = (ESP);
  /* 10ddb753 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb754 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddb757 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ddb75a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddb75d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddb760 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ddb763 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddb766 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb76a jl 0x10ddb792 */
  if ((C.sf!=C.of)) goto L_10ddb792;
  /* 10ddb76c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddb76f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ddb771 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10ddb774 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10ddb776 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10ddb77a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ddb780 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ddb783 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddb786 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ddb788 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb78b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddb78e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ddb790 jmp 0x10ddb7a5 */
  goto L_10ddb7a5;
L_10ddb792:;
  /* 10ddb792 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddb795 push edx */
  push32((uint32_t)(EDX));
  /* 10ddb796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb799 push eax */
  push32((uint32_t)(EAX));
  /* 10ddb79a call 0x10dda7a0 */
  push32(0x10ddb79fu); f_10dda7a0();
  /* 10ddb79f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb7a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ddb7a5:;
  /* 10ddb7a5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb7a9 jne 0x10ddb7b6 */
  if (!C.zf) goto L_10ddb7b6;
  /* 10ddb7ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddb7ae mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10ddb7b4 jmp 0x10ddb7c3 */
  goto L_10ddb7c3;
L_10ddb7b6:;
  /* 10ddb7b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddb7b9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ddb7bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb7be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddb7c1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10ddb7c3:;
  /* 10ddb7c3 mov esp, ebp */
  ESP = (EBP);
  /* 10ddb7c5 pop ebp */
  EBP = (pop32());
  /* 10ddb7c6 ret  */
  ESPCHK(0x10ddb750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7d0 @ 0x10ddb7d0 (53 bytes, 23 insns) */
void f_10ddb7d0(void) {
  FTRACE(0x10ddb7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddb7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddb7d1 mov ebp, esp */
  EBP = (ESP);
L_10ddb7d3:;
  /* 10ddb7d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddb7d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddb7d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddb7dc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10ddb7df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddb7e1 jle 0x10ddb803 */
  if ((C.zf||C.sf!=C.of)) goto L_10ddb803;
  /* 10ddb7e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ddb7e6 push edx */
  push32((uint32_t)(EDX));
  /* 10ddb7e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddb7ea push eax */
  push32((uint32_t)(EAX));
  /* 10ddb7eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb7ee push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb7ef call 0x10ddb750 */
  push32(0x10ddb7f4u); f_10ddb750();
  /* 10ddb7f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb7f7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ddb7fa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb7fd jne 0x10ddb801 */
  if (!C.zf) goto L_10ddb801;
  /* 10ddb7ff jmp 0x10ddb803 */
  goto L_10ddb803;
L_10ddb801:;
  /* 10ddb801 jmp 0x10ddb7d3 */
  goto L_10ddb7d3;
L_10ddb803:;
  /* 10ddb803 pop ebp */
  EBP = (pop32());
  /* 10ddb804 ret  */
  ESPCHK(0x10ddb7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b810 @ 0x10ddb810 (74 bytes, 31 insns) */
void f_10ddb810(void) {
  FTRACE(0x10ddb810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddb810 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddb811 mov ebp, esp */
  EBP = (ESP);
  /* 10ddb813 push ecx */
  push32((uint32_t)(ECX));
L_10ddb814:;
  /* 10ddb814 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddb817 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddb81a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddb81d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10ddb820 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddb822 jle 0x10ddb856 */
  if ((C.zf||C.sf!=C.of)) goto L_10ddb856;
  /* 10ddb824 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ddb827 push edx */
  push32((uint32_t)(EDX));
  /* 10ddb828 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddb82b push eax */
  push32((uint32_t)(EAX));
  /* 10ddb82c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb82f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ddb832 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ddb835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb838 push eax */
  push32((uint32_t)(EAX));
  /* 10ddb839 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb83c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb83f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ddb842 call 0x10ddb750 */
  push32(0x10ddb847u); f_10ddb750();
  /* 10ddb847 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb84a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ddb84d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb850 jne 0x10ddb854 */
  if (!C.zf) goto L_10ddb854;
  /* 10ddb852 jmp 0x10ddb856 */
  goto L_10ddb856;
L_10ddb854:;
  /* 10ddb854 jmp 0x10ddb814 */
  goto L_10ddb814;
L_10ddb856:;
  /* 10ddb856 mov esp, ebp */
  ESP = (EBP);
  /* 10ddb858 pop ebp */
  EBP = (pop32());
  /* 10ddb859 ret  */
  ESPCHK(0x10ddb810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b860 @ 0x10ddb860 (26 bytes, 12 insns) */
void f_10ddb860(void) {
  FTRACE(0x10ddb860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddb860 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddb861 mov ebp, esp */
  EBP = (ESP);
  /* 10ddb863 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb866 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ddb868 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb86b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb86e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ddb870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb873 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ddb875 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10ddb878 pop ebp */
  EBP = (pop32());
  /* 10ddb879 ret  */
  ESPCHK(0x10ddb860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b880 @ 0x10ddb880 (31 bytes, 14 insns) */
void f_10ddb880(void) {
  FTRACE(0x10ddb880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddb880 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddb881 mov ebp, esp */
  EBP = (ESP);
  /* 10ddb883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb886 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ddb888 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb88b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb88e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ddb890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb893 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ddb895 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddb898 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10ddb89a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ddb89d pop ebp */
  EBP = (pop32());
  /* 10ddb89e ret  */
  ESPCHK(0x10ddb880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8a0 @ 0x10ddb8a0 (27 bytes, 12 insns) */
void f_10ddb8a0(void) {
  FTRACE(0x10ddb8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddb8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddb8a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ddb8a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb8a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ddb8a8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb8ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb8ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ddb8b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb8b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ddb8b5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10ddb8b9 pop ebp */
  EBP = (pop32());
  /* 10ddb8ba ret  */
  ESPCHK(0x10ddb8a0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10ddb8c0 (145 bytes, 42 insns) */
void f_10ddb8c0(void) {
  FTRACE(0x10ddb8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddb8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddb8c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ddb8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddb8c4 call 0x10ddb970 */
  push32(0x10ddb8c9u); f_10ddb970();
  /* 10ddb8c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb8cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10ddb8ce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ddb8d5 jmp 0x10ddb8e0 */
  goto L_10ddb8e0;
L_10ddb8d7:;
  /* 10ddb8d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb8da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb8dd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ddb8e0:;
  /* 10ddb8e0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb8e4 jae 0x10ddb90a */
  if (!C.cf) goto L_10ddb90a;
  /* 10ddb8e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb8e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb8ec cmp ecx, dword ptr [eax*8 + 0x10dfdfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10dfdfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb8f3 jne 0x10ddb908 */
  if (!C.zf) goto L_10ddb908;
  /* 10ddb8f5 call 0x10ddb960 */
  push32(0x10ddb8fau); f_10ddb960();
  /* 10ddb8fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddb8fd mov ecx, dword ptr [edx*8 + 0x10dfdfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10dfdfbc)));
  /* 10ddb904 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10ddb906 jmp 0x10ddb94d */
  goto L_10ddb94d;
L_10ddb908:;
  /* 10ddb908 jmp 0x10ddb8d7 */
  goto L_10ddb8d7;
L_10ddb90a:;
  /* 10ddb90a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb90e jb 0x10ddb923 */
  if (C.cf) goto L_10ddb923;
  /* 10ddb910 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb914 ja 0x10ddb923 */
  if ((!C.cf&&!C.zf)) goto L_10ddb923;
  /* 10ddb916 call 0x10ddb960 */
  push32(0x10ddb91bu); f_10ddb960();
  /* 10ddb91b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10ddb921 jmp 0x10ddb94d */
  goto L_10ddb94d;
L_10ddb923:;
  /* 10ddb923 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb92a jb 0x10ddb942 */
  if (C.cf) goto L_10ddb942;
  /* 10ddb92c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb933 ja 0x10ddb942 */
  if ((!C.cf&&!C.zf)) goto L_10ddb942;
  /* 10ddb935 call 0x10ddb960 */
  push32(0x10ddb93au); f_10ddb960();
  /* 10ddb93a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10ddb940 jmp 0x10ddb94d */
  goto L_10ddb94d;
L_10ddb942:;
  /* 10ddb942 call 0x10ddb960 */
  push32(0x10ddb947u); f_10ddb960();
  /* 10ddb947 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10ddb94d:;
  /* 10ddb94d mov esp, ebp */
  ESP = (EBP);
  /* 10ddb94f pop ebp */
  EBP = (pop32());
  /* 10ddb950 ret  */
  ESPCHK(0x10ddb8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b960 @ 0x10ddb960 (13 bytes, 6 insns) */
void f_10ddb960(void) {
  FTRACE(0x10ddb960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddb960 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddb961 mov ebp, esp */
  EBP = (ESP);
  /* 10ddb963 call 0x10dd34d0 */
  push32(0x10ddb968u); f_10dd34d0();
  /* 10ddb968 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb96b pop ebp */
  EBP = (pop32());
  /* 10ddb96c ret  */
  ESPCHK(0x10ddb960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b970 @ 0x10ddb970 (13 bytes, 6 insns) */
void f_10ddb970(void) {
  FTRACE(0x10ddb970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddb970 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddb971 mov ebp, esp */
  EBP = (ESP);
  /* 10ddb973 call 0x10dd34d0 */
  push32(0x10ddb978u); f_10dd34d0();
  /* 10ddb978 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb97b pop ebp */
  EBP = (pop32());
  /* 10ddb97c ret  */
  ESPCHK(0x10ddb970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b980 @ 0x10ddb980 (664 bytes, 265 insns) [15 switch table(s)] */
void f_10ddb980(void) {
  FTRACE(0x10ddb980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddb980 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddb981 mov ebp, esp */
  EBP = (ESP);
  /* 10ddb983 push edi */
  push32((uint32_t)(EDI));
  /* 10ddb984 push esi */
  push32((uint32_t)(ESI));
  /* 10ddb985 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddb988 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddb98b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddb98e mov eax, ecx */
  EAX = (ECX);
  /* 10ddb990 mov edx, ecx */
  EDX = (ECX);
  /* 10ddb992 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb994 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb996 jbe 0x10ddb9a0 */
  if ((C.cf||C.zf)) goto L_10ddb9a0;
  /* 10ddb998 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb99a jb 0x10ddbb18 */
  if (C.cf) goto L_10ddbb18;
L_10ddb9a0:;
  /* 10ddb9a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10ddb9a6 jne 0x10ddb9bc */
  if (!C.zf) goto L_10ddb9bc;
  /* 10ddb9a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ddb9ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddb9ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddb9b1 jb 0x10ddb9dc */
  if (C.cf) goto L_10ddb9dc;
  /* 10ddb9b3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ddb9b5 jmp dword ptr [edx*4 + 0x10ddbac8] */
  switch (EDX) {
    case 0: goto L_10ddbad8;
    case 1: goto L_10ddbae0;
    case 2: goto L_10ddbaec;
    case 3: goto L_10ddbb00;
    default: x86_unimpl("switch@0x10ddb9b5 out of table"); return;
  }
L_10ddb9bc:;
  /* 10ddb9bc mov eax, edi */
  EAX = (EDI);
  /* 10ddb9be mov edx, 3 */
  EDX = (0x3u);
  /* 10ddb9c3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddb9c6 jb 0x10ddb9d4 */
  if (C.cf) goto L_10ddb9d4;
  /* 10ddb9c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddb9cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddb9cd jmp dword ptr [eax*4 + 0x10ddb9e0] */
  switch (EAX) {
    case 1: goto L_10ddb9f0;
    case 2: goto L_10ddba1c;
    case 3: goto L_10ddba40;
    default: x86_unimpl("switch@0x10ddb9cd out of table"); return;
  }
L_10ddb9d4:;
  /* 10ddb9d4 jmp dword ptr [ecx*4 + 0x10ddbad8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10ddbad8)))); return;
  /* 10ddb9db nop  */
  /* nop */
L_10ddb9dc:;
  /* 10ddb9dc jmp dword ptr [ecx*4 + 0x10ddba5c] */
  switch (ECX) {
    case 0: goto L_10ddbabf;
    case 1: goto L_10ddbaac;
    case 2: goto L_10ddbaa4;
    case 3: goto L_10ddba9c;
    case 4: goto L_10ddba94;
    case 5: goto L_10ddba8c;
    case 6: goto L_10ddba84;
    case 7: goto L_10ddba7c;
    default: x86_unimpl("switch@0x10ddb9dc out of table"); return;
  }
  /* 10ddb9e3 nop  */
  /* nop */
L_10ddb9f0:;
  /* 10ddb9f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ddb9f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ddb9f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ddb9f6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ddb9f9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ddb9fc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ddb9ff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ddba02 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ddba05 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddba08 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddba0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddba0e jb 0x10ddb9dc */
  if (C.cf) goto L_10ddb9dc;
  /* 10ddba10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ddba12 jmp dword ptr [edx*4 + 0x10ddbac8] */
  switch (EDX) {
    case 0: goto L_10ddbad8;
    case 1: goto L_10ddbae0;
    case 2: goto L_10ddbaec;
    case 3: goto L_10ddbb00;
    default: x86_unimpl("switch@0x10ddba12 out of table"); return;
  }
  /* 10ddba19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ddba1c:;
  /* 10ddba1c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ddba1e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ddba20 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ddba22 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ddba25 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ddba28 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ddba2b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddba2e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddba31 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddba34 jb 0x10ddb9dc */
  if (C.cf) goto L_10ddb9dc;
  /* 10ddba36 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ddba38 jmp dword ptr [edx*4 + 0x10ddbac8] */
  switch (EDX) {
    case 0: goto L_10ddbad8;
    case 1: goto L_10ddbae0;
    case 2: goto L_10ddbaec;
    case 3: goto L_10ddbb00;
    default: x86_unimpl("switch@0x10ddba38 out of table"); return;
  }
  /* 10ddba3f nop  */
  /* nop */
L_10ddba40:;
  /* 10ddba40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ddba42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ddba44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ddba46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ddba47 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ddba4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ddba4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddba4e jb 0x10ddb9dc */
  if (C.cf) goto L_10ddb9dc;
  /* 10ddba50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ddba52 jmp dword ptr [edx*4 + 0x10ddbac8] */
  switch (EDX) {
    case 0: goto L_10ddbad8;
    case 1: goto L_10ddbae0;
    case 2: goto L_10ddbaec;
    case 3: goto L_10ddbb00;
    default: x86_unimpl("switch@0x10ddba52 out of table"); return;
  }
  /* 10ddba59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ddba7c:;
  /* 10ddba7c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10ddba80 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10ddba84:;
  /* 10ddba84 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10ddba88 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10ddba8c:;
  /* 10ddba8c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10ddba90 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10ddba94:;
  /* 10ddba94 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10ddba98 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10ddba9c:;
  /* 10ddba9c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10ddbaa0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10ddbaa4:;
  /* 10ddbaa4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10ddbaa8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10ddbaac:;
  /* 10ddbaac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10ddbab0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10ddbab4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10ddbabb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddbabd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10ddbabf:;
  /* 10ddbabf jmp dword ptr [edx*4 + 0x10ddbac8] */
  switch (EDX) {
    case 0: goto L_10ddbad8;
    case 1: goto L_10ddbae0;
    case 2: goto L_10ddbaec;
    case 3: goto L_10ddbb00;
    default: x86_unimpl("switch@0x10ddbabf out of table"); return;
  }
  /* 10ddbac6 mov edi, edi */
  EDI = (EDI);
L_10ddbad8:;
  /* 10ddbad8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddbadb pop esi */
  ESI = (pop32());
  /* 10ddbadc pop edi */
  EDI = (pop32());
  /* 10ddbadd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ddbade ret  */
  ESPCHK(0x10ddb980u, _esp0);
  ESP += 4; return;
  /* 10ddbadf nop  */
  /* nop */
L_10ddbae0:;
  /* 10ddbae0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ddbae2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ddbae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddbae7 pop esi */
  ESI = (pop32());
  /* 10ddbae8 pop edi */
  EDI = (pop32());
  /* 10ddbae9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ddbaea ret  */
  ESPCHK(0x10ddb980u, _esp0);
  ESP += 4; return;
  /* 10ddbaeb nop  */
  /* nop */
L_10ddbaec:;
  /* 10ddbaec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ddbaee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ddbaf0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ddbaf3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ddbaf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddbaf9 pop esi */
  ESI = (pop32());
  /* 10ddbafa pop edi */
  EDI = (pop32());
  /* 10ddbafb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ddbafc ret  */
  ESPCHK(0x10ddb980u, _esp0);
  ESP += 4; return;
  /* 10ddbafd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ddbb00:;
  /* 10ddbb00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ddbb02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ddbb04 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ddbb07 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ddbb0a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ddbb0d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ddbb10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddbb13 pop esi */
  ESI = (pop32());
  /* 10ddbb14 pop edi */
  EDI = (pop32());
  /* 10ddbb15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ddbb16 ret  */
  ESPCHK(0x10ddb980u, _esp0);
  ESP += 4; return;
  /* 10ddbb17 nop  */
  /* nop */
L_10ddbb18:;
  /* 10ddbb18 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10ddbb1c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10ddbb20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10ddbb26 jne 0x10ddbb4c */
  if (!C.zf) goto L_10ddbb4c;
  /* 10ddbb28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ddbb2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddbb2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbb31 jb 0x10ddbb40 */
  if (C.cf) goto L_10ddbb40;
  /* 10ddbb33 std  */
  C.df=1;
  /* 10ddbb34 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ddbb36 cld  */
  C.df=0;
  /* 10ddbb37 jmp dword ptr [edx*4 + 0x10ddbc60] */
  switch (EDX) {
    case 0: goto L_10ddbc70;
    case 1: goto L_10ddbc78;
    case 2: goto L_10ddbc88;
    case 3: goto L_10ddbc9c;
    default: x86_unimpl("switch@0x10ddbb37 out of table"); return;
  }
  /* 10ddbb3e mov edi, edi */
  EDI = (EDI);
L_10ddbb40:;
  /* 10ddbb40 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ddbb42 jmp dword ptr [ecx*4 + 0x10ddbc10] */
  switch (ECX) {
    case 0: goto L_10ddbc57;
    default: x86_unimpl("switch@0x10ddbb42 out of table"); return;
  }
  /* 10ddbb49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ddbb4c:;
  /* 10ddbb4c mov eax, edi */
  EAX = (EDI);
  /* 10ddbb4e mov edx, 3 */
  EDX = (0x3u);
  /* 10ddbb53 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbb56 jb 0x10ddbb64 */
  if (C.cf) goto L_10ddbb64;
  /* 10ddbb58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddbb5b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddbb5d jmp dword ptr [eax*4 + 0x10ddbb68] */
  switch (EAX) {
    case 1: goto L_10ddbb78;
    case 2: goto L_10ddbb98;
    case 3: goto L_10ddbbc0;
    default: x86_unimpl("switch@0x10ddbb5d out of table"); return;
  }
L_10ddbb64:;
  /* 10ddbb64 jmp dword ptr [ecx*4 + 0x10ddbc60] */
  switch (ECX) {
    case 0: goto L_10ddbc70;
    case 1: goto L_10ddbc78;
    case 2: goto L_10ddbc88;
    case 3: goto L_10ddbc9c;
    default: x86_unimpl("switch@0x10ddbb64 out of table"); return;
  }
  /* 10ddbb6b nop  */
  /* nop */
L_10ddbb78:;
  /* 10ddbb78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ddbb7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ddbb7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ddbb80 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10ddbb81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ddbb84 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10ddbb85 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbb88 jb 0x10ddbb40 */
  if (C.cf) goto L_10ddbb40;
  /* 10ddbb8a std  */
  C.df=1;
  /* 10ddbb8b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ddbb8d cld  */
  C.df=0;
  /* 10ddbb8e jmp dword ptr [edx*4 + 0x10ddbc60] */
  switch (EDX) {
    case 0: goto L_10ddbc70;
    case 1: goto L_10ddbc78;
    case 2: goto L_10ddbc88;
    case 3: goto L_10ddbc9c;
    default: x86_unimpl("switch@0x10ddbb8e out of table"); return;
  }
  /* 10ddbb95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ddbb98:;
  /* 10ddbb98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ddbb9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ddbb9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ddbba0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ddbba3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ddbba6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ddbba9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddbbac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddbbaf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbbb2 jb 0x10ddbb40 */
  if (C.cf) goto L_10ddbb40;
  /* 10ddbbb4 std  */
  C.df=1;
  /* 10ddbbb5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ddbbb7 cld  */
  C.df=0;
  /* 10ddbbb8 jmp dword ptr [edx*4 + 0x10ddbc60] */
  switch (EDX) {
    case 0: goto L_10ddbc70;
    case 1: goto L_10ddbc78;
    case 2: goto L_10ddbc88;
    case 3: goto L_10ddbc9c;
    default: x86_unimpl("switch@0x10ddbbb8 out of table"); return;
  }
  /* 10ddbbbf nop  */
  /* nop */
L_10ddbbc0:;
  /* 10ddbbc0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ddbbc3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ddbbc5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ddbbc8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ddbbcb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ddbbce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ddbbd1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ddbbd4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ddbbd7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddbbda sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddbbdd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbbe0 jb 0x10ddbb40 */
  if (C.cf) goto L_10ddbb40;
  /* 10ddbbe6 std  */
  C.df=1;
  /* 10ddbbe7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ddbbe9 cld  */
  C.df=0;
  /* 10ddbbea jmp dword ptr [edx*4 + 0x10ddbc60] */
  switch (EDX) {
    case 0: goto L_10ddbc70;
    case 1: goto L_10ddbc78;
    case 2: goto L_10ddbc88;
    case 3: goto L_10ddbc9c;
    default: x86_unimpl("switch@0x10ddbbea out of table"); return;
  }
  /* 10ddbbf1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10ddbbf4 adc al, 0xbc */
  { uint32_t _a=(AL),_b=(0xbcu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ddbbf6 fst qword ptr [eax] */
  wf64((uint32_t)(EAX), FPU_ST(0));
  /* 10ddbbf8 sbb al, 0xbc */
  { uint32_t _a=(AL),_b=(0xbcu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ddbbfa fst qword ptr [eax] */
  wf64((uint32_t)(EAX), FPU_ST(0));
  /* 10ddbbfc and al, 0xbc */
  { uint32_t _r=(AL)&(0xbcu); AL = (_r); fl_logic(_r,8); }
  /* 10ddbbfe fst qword ptr [eax] */
  wf64((uint32_t)(EAX), FPU_ST(0));
  /* 10ddbc00 sub al, 0xbc */
  { uint32_t _a=(AL),_b=(0xbcu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ddbc02 fst qword ptr [eax] */
  wf64((uint32_t)(EAX), FPU_ST(0));
  /* 10ddbc04 xor al, 0xbc */
  { uint32_t _r=(AL)^(0xbcu); AL = (_r); fl_logic(_r,8); }
  /* 10ddbc06 fst qword ptr [eax] */
  wf64((uint32_t)(EAX), FPU_ST(0));
  /* 10ddbc08 cmp al, 0xbc */
  { uint32_t _a=(AL),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ddbc0a fst qword ptr [eax] */
  wf64((uint32_t)(EAX), FPU_ST(0));
  /* 10ddbc0c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 10ddbc0e fst qword ptr [eax] */
  wf64((uint32_t)(EAX), FPU_ST(0));
  /* 10ddbc14 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10ddbc18 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10ddbc1c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10ddbc20 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10ddbc24 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10ddbc28 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10ddbc2c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10ddbc30 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10ddbc34 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10ddbc38 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10ddbc3c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10ddbc40 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10ddbc44 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10ddbc48 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10ddbc4c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10ddbc53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddbc55 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10ddbc57:;
  /* 10ddbc57 jmp dword ptr [edx*4 + 0x10ddbc60] */
  switch (EDX) {
    case 0: goto L_10ddbc70;
    case 1: goto L_10ddbc78;
    case 2: goto L_10ddbc88;
    case 3: goto L_10ddbc9c;
    default: x86_unimpl("switch@0x10ddbc57 out of table"); return;
  }
  /* 10ddbc5e mov edi, edi */
  EDI = (EDI);
L_10ddbc70:;
  /* 10ddbc70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddbc73 pop esi */
  ESI = (pop32());
  /* 10ddbc74 pop edi */
  EDI = (pop32());
  /* 10ddbc75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ddbc76 ret  */
  ESPCHK(0x10ddb980u, _esp0);
  ESP += 4; return;
  /* 10ddbc77 nop  */
  /* nop */
L_10ddbc78:;
  /* 10ddbc78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ddbc7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ddbc7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddbc81 pop esi */
  ESI = (pop32());
  /* 10ddbc82 pop edi */
  EDI = (pop32());
  /* 10ddbc83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ddbc84 ret  */
  ESPCHK(0x10ddb980u, _esp0);
  ESP += 4; return;
  /* 10ddbc85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ddbc88:;
  /* 10ddbc88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ddbc8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ddbc8e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ddbc91 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ddbc94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddbc97 pop esi */
  ESI = (pop32());
  /* 10ddbc98 pop edi */
  EDI = (pop32());
  /* 10ddbc99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ddbc9a ret  */
  ESPCHK(0x10ddb980u, _esp0);
  ESP += 4; return;
  /* 10ddbc9b nop  */
  /* nop */
L_10ddbc9c:;
  /* 10ddbc9c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ddbc9f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ddbca2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ddbca5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ddbca8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ddbcab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ddbcae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddbcb1 pop esi */
  ESI = (pop32());
  /* 10ddbcb2 pop edi */
  EDI = (pop32());
  /* 10ddbcb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ddbcb4 ret  */
  ESPCHK(0x10ddb980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcc0 @ 0x10ddbcc0 (421 bytes, 148 insns) */
void f_10ddbcc0(void) {
  FTRACE(0x10ddbcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddbcc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddbcc1 mov ebp, esp */
  EBP = (ESP);
  /* 10ddbcc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ddbcc5 push 0x10dfb120 */
  push32((uint32_t)(0x10dfb120u));
  /* 10ddbcca push 0x10ddcb98 */
  push32((uint32_t)(0x10ddcb98u));
  /* 10ddbccf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ddbcd5 push eax */
  push32((uint32_t)(EAX));
  /* 10ddbcd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ddbcdd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddbce0 push ebx */
  push32((uint32_t)(EBX));
  /* 10ddbce1 push esi */
  push32((uint32_t)(ESI));
  /* 10ddbce2 push edi */
  push32((uint32_t)(EDI));
  /* 10ddbce3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ddbce6 cmp dword ptr [0x10dff794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbced jne 0x10ddbd3e */
  if (!C.zf) goto L_10ddbd3e;
  /* 10ddbcef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10ddbcf2 push eax */
  push32((uint32_t)(EAX));
  /* 10ddbcf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddbcf5 push 0x10dfb11c */
  push32((uint32_t)(0x10dfb11cu));
  /* 10ddbcfa push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddbcfc call dword ptr [0x10e022bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022bc))), 0x10ddbd02u);
  /* 10ddbd02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddbd04 je 0x10ddbd12 */
  if (C.zf) goto L_10ddbd12;
  /* 10ddbd06 mov dword ptr [0x10dff794], 1 */
  w32((uint32_t)(0x10dff794), (0x1u));
  /* 10ddbd10 jmp 0x10ddbd3e */
  goto L_10ddbd3e;
L_10ddbd12:;
  /* 10ddbd12 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10ddbd15 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddbd16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddbd18 push 0x10dfb118 */
  push32((uint32_t)(0x10dfb118u));
  /* 10ddbd1d push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddbd1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddbd21 call dword ptr [0x10e022c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022c0))), 0x10ddbd27u);
  /* 10ddbd27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddbd29 je 0x10ddbd37 */
  if (C.zf) goto L_10ddbd37;
  /* 10ddbd2b mov dword ptr [0x10dff794], 2 */
  w32((uint32_t)(0x10dff794), (0x2u));
  /* 10ddbd35 jmp 0x10ddbd3e */
  goto L_10ddbd3e;
L_10ddbd37:;
  /* 10ddbd37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddbd39 jmp 0x10ddbe68 */
  goto L_10ddbe68;
L_10ddbd3e:;
  /* 10ddbd3e cmp dword ptr [0x10dff794], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10dff794))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbd45 jne 0x10ddbd75 */
  if (!C.zf) goto L_10ddbd75;
  /* 10ddbd47 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbd4b jne 0x10ddbd56 */
  if (!C.zf) goto L_10ddbd56;
  /* 10ddbd4d mov edx, dword ptr [0x10dff7a0] */
  EDX = (r32((uint32_t)(0x10dff7a0)));
  /* 10ddbd53 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10ddbd56:;
  /* 10ddbd56 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ddbd59 push eax */
  push32((uint32_t)(EAX));
  /* 10ddbd5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddbd5d push ecx */
  push32((uint32_t)(ECX));
  /* 10ddbd5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddbd61 push edx */
  push32((uint32_t)(EDX));
  /* 10ddbd62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddbd65 push eax */
  push32((uint32_t)(EAX));
  /* 10ddbd66 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ddbd69 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddbd6a call dword ptr [0x10e022c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022c0))), 0x10ddbd70u);
  /* 10ddbd70 jmp 0x10ddbe68 */
  goto L_10ddbe68;
L_10ddbd75:;
  /* 10ddbd75 cmp dword ptr [0x10dff794], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dff794))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbd7c jne 0x10ddbe66 */
  if (!C.zf) goto L_10ddbe66;
  /* 10ddbd82 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbd86 jne 0x10ddbd91 */
  if (!C.zf) goto L_10ddbd91;
  /* 10ddbd88 mov edx, dword ptr [0x10dff7b0] */
  EDX = (r32((uint32_t)(0x10dff7b0)));
  /* 10ddbd8e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10ddbd91:;
  /* 10ddbd91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddbd93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddbd95 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddbd98 push eax */
  push32((uint32_t)(EAX));
  /* 10ddbd99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddbd9c push ecx */
  push32((uint32_t)(ECX));
  /* 10ddbd9d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ddbda0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ddbda2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddbda4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddbda7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddbdaa push edx */
  push32((uint32_t)(EDX));
  /* 10ddbdab mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ddbdae push eax */
  push32((uint32_t)(EAX));
  /* 10ddbdaf call dword ptr [0x10e022c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022c4))), 0x10ddbdb5u);
  /* 10ddbdb5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ddbdb8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbdbc jne 0x10ddbdc5 */
  if (!C.zf) goto L_10ddbdc5;
  /* 10ddbdbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddbdc0 jmp 0x10ddbe68 */
  goto L_10ddbe68;
L_10ddbdc5:;
  /* 10ddbdc5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ddbdcc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddbdcf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ddbdd1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddbdd4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ddbdd6 call 0x10dd6c30 */
  push32(0x10ddbddbu); f_10dd6c30();
  /* 10ddbddb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10ddbdde mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ddbde1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ddbde4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ddbde7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddbdea shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10ddbdec push edx */
  push32((uint32_t)(EDX));
  /* 10ddbded push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddbdef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ddbdf2 push eax */
  push32((uint32_t)(EAX));
  /* 10ddbdf3 call 0x10dd7800 */
  push32(0x10ddbdf8u); f_10dd7800();
  /* 10ddbdf8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddbdfb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ddbe02 jmp 0x10ddbe1b */
  goto L_10ddbe1b;
  /* 10ddbe04 mov eax, 1 */
  EAX = (0x1u);
  /* 10ddbe09 ret  */
  ESPCHK(0x10ddbcc0u, _esp0);
  ESP += 4; return;
  /* 10ddbe0a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ddbe0d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10ddbe14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ddbe1b:;
  /* 10ddbe1b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbe1f jne 0x10ddbe25 */
  if (!C.zf) goto L_10ddbe25;
  /* 10ddbe21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddbe23 jmp 0x10ddbe68 */
  goto L_10ddbe68;
L_10ddbe25:;
  /* 10ddbe25 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddbe28 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddbe29 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ddbe2c push edx */
  push32((uint32_t)(EDX));
  /* 10ddbe2d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddbe30 push eax */
  push32((uint32_t)(EAX));
  /* 10ddbe31 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddbe34 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddbe35 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddbe37 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ddbe3a push edx */
  push32((uint32_t)(EDX));
  /* 10ddbe3b call dword ptr [0x10e022c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022c4))), 0x10ddbe41u);
  /* 10ddbe41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ddbe44 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbe48 jne 0x10ddbe4e */
  if (!C.zf) goto L_10ddbe4e;
  /* 10ddbe4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddbe4c jmp 0x10ddbe68 */
  goto L_10ddbe68;
L_10ddbe4e:;
  /* 10ddbe4e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ddbe51 push eax */
  push32((uint32_t)(EAX));
  /* 10ddbe52 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ddbe55 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddbe56 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ddbe59 push edx */
  push32((uint32_t)(EDX));
  /* 10ddbe5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddbe5d push eax */
  push32((uint32_t)(EAX));
  /* 10ddbe5e call dword ptr [0x10e022bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022bc))), 0x10ddbe64u);
  /* 10ddbe64 jmp 0x10ddbe68 */
  goto L_10ddbe68;
L_10ddbe66:;
  /* 10ddbe66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ddbe68:;
  /* 10ddbe68 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10ddbe6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ddbe6e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ddbe75 pop edi */
  EDI = (pop32());
  /* 10ddbe76 pop esi */
  ESI = (pop32());
  /* 10ddbe77 pop ebx */
  EBX = (pop32());
  /* 10ddbe78 mov esp, ebp */
  ESP = (EBP);
  /* 10ddbe7a pop ebp */
  EBP = (pop32());
  /* 10ddbe7b ret  */
  ESPCHK(0x10ddbcc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be80 @ 0x10ddbe80 (727 bytes, 263 insns) */
void f_10ddbe80(void) {
  FTRACE(0x10ddbe80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddbe80 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddbe81 mov ebp, esp */
  EBP = (ESP);
  /* 10ddbe83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ddbe85 push 0x10dfb130 */
  push32((uint32_t)(0x10dfb130u));
  /* 10ddbe8a push 0x10ddcb98 */
  push32((uint32_t)(0x10ddcb98u));
  /* 10ddbe8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ddbe95 push eax */
  push32((uint32_t)(EAX));
  /* 10ddbe96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ddbe9d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddbea0 push ebx */
  push32((uint32_t)(EBX));
  /* 10ddbea1 push esi */
  push32((uint32_t)(ESI));
  /* 10ddbea2 push edi */
  push32((uint32_t)(EDI));
  /* 10ddbea3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ddbea6 cmp dword ptr [0x10dff7b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff7b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbead jne 0x10ddbf06 */
  if (!C.zf) goto L_10ddbf06;
  /* 10ddbeaf push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddbeb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddbeb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddbeb5 push 0x10dfb11c */
  push32((uint32_t)(0x10dfb11cu));
  /* 10ddbeba push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10ddbebf push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddbec1 call dword ptr [0x10e022b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022b4))), 0x10ddbec7u);
  /* 10ddbec7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddbec9 je 0x10ddbed7 */
  if (C.zf) goto L_10ddbed7;
  /* 10ddbecb mov dword ptr [0x10dff7b8], 1 */
  w32((uint32_t)(0x10dff7b8), (0x1u));
  /* 10ddbed5 jmp 0x10ddbf06 */
  goto L_10ddbf06;
L_10ddbed7:;
  /* 10ddbed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddbed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddbedb push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddbedd push 0x10dfb118 */
  push32((uint32_t)(0x10dfb118u));
  /* 10ddbee2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10ddbee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddbee9 call dword ptr [0x10e022b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022b8))), 0x10ddbeefu);
  /* 10ddbeef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddbef1 je 0x10ddbeff */
  if (C.zf) goto L_10ddbeff;
  /* 10ddbef3 mov dword ptr [0x10dff7b8], 2 */
  w32((uint32_t)(0x10dff7b8), (0x2u));
  /* 10ddbefd jmp 0x10ddbf06 */
  goto L_10ddbf06;
L_10ddbeff:;
  /* 10ddbeff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddbf01 jmp 0x10ddc171 */
  goto L_10ddc171;
L_10ddbf06:;
  /* 10ddbf06 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbf0a jle 0x10ddbf1f */
  if ((C.zf||C.sf!=C.of)) goto L_10ddbf1f;
  /* 10ddbf0c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ddbf0f push eax */
  push32((uint32_t)(EAX));
  /* 10ddbf10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddbf13 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddbf14 call 0x10ddc190 */
  push32(0x10ddbf19u); f_10ddc190();
  /* 10ddbf19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddbf1c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10ddbf1f:;
  /* 10ddbf1f cmp dword ptr [0x10dff7b8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10dff7b8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbf26 jne 0x10ddbf4b */
  if (!C.zf) goto L_10ddbf4b;
  /* 10ddbf28 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ddbf2b push edx */
  push32((uint32_t)(EDX));
  /* 10ddbf2c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ddbf2f push eax */
  push32((uint32_t)(EAX));
  /* 10ddbf30 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ddbf33 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddbf34 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddbf37 push edx */
  push32((uint32_t)(EDX));
  /* 10ddbf38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddbf3b push eax */
  push32((uint32_t)(EAX));
  /* 10ddbf3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddbf3f push ecx */
  push32((uint32_t)(ECX));
  /* 10ddbf40 call dword ptr [0x10e022b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022b8))), 0x10ddbf46u);
  /* 10ddbf46 jmp 0x10ddc171 */
  goto L_10ddc171;
L_10ddbf4b:;
  /* 10ddbf4b cmp dword ptr [0x10dff7b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dff7b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbf52 jne 0x10ddc16f */
  if (!C.zf) goto L_10ddc16f;
  /* 10ddbf58 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbf5c jne 0x10ddbf67 */
  if (!C.zf) goto L_10ddbf67;
  /* 10ddbf5e mov edx, dword ptr [0x10dff7b0] */
  EDX = (r32((uint32_t)(0x10dff7b0)));
  /* 10ddbf64 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10ddbf67:;
  /* 10ddbf67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddbf69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddbf6b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ddbf6e push eax */
  push32((uint32_t)(EAX));
  /* 10ddbf6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddbf72 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddbf73 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10ddbf76 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ddbf78 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddbf7a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddbf7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddbf80 push edx */
  push32((uint32_t)(EDX));
  /* 10ddbf81 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ddbf84 push eax */
  push32((uint32_t)(EAX));
  /* 10ddbf85 call dword ptr [0x10e022c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022c4))), 0x10ddbf8bu);
  /* 10ddbf8b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ddbf8e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbf92 jne 0x10ddbf9b */
  if (!C.zf) goto L_10ddbf9b;
  /* 10ddbf94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddbf96 jmp 0x10ddc171 */
  goto L_10ddc171;
L_10ddbf9b:;
  /* 10ddbf9b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ddbfa2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ddbfa5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ddbfa7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddbfaa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ddbfac call 0x10dd6c30 */
  push32(0x10ddbfb1u); f_10dd6c30();
  /* 10ddbfb1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10ddbfb4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ddbfb7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ddbfba mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ddbfbd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ddbfc4 jmp 0x10ddbfdd */
  goto L_10ddbfdd;
  /* 10ddbfc6 mov eax, 1 */
  EAX = (0x1u);
  /* 10ddbfcb ret  */
  ESPCHK(0x10ddbe80u, _esp0);
  ESP += 4; return;
  /* 10ddbfcc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ddbfcf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10ddbfd6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ddbfdd:;
  /* 10ddbfdd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddbfe1 jne 0x10ddbfea */
  if (!C.zf) goto L_10ddbfea;
  /* 10ddbfe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddbfe5 jmp 0x10ddc171 */
  goto L_10ddc171;
L_10ddbfea:;
  /* 10ddbfea mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ddbfed push edx */
  push32((uint32_t)(EDX));
  /* 10ddbfee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ddbff1 push eax */
  push32((uint32_t)(EAX));
  /* 10ddbff2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ddbff5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddbff6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddbff9 push edx */
  push32((uint32_t)(EDX));
  /* 10ddbffa push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddbffc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ddbfff push eax */
  push32((uint32_t)(EAX));
  /* 10ddc000 call dword ptr [0x10e022c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022c4))), 0x10ddc006u);
  /* 10ddc006 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddc008 jne 0x10ddc011 */
  if (!C.zf) goto L_10ddc011;
  /* 10ddc00a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc00c jmp 0x10ddc171 */
  goto L_10ddc171;
L_10ddc011:;
  /* 10ddc011 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddc013 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddc015 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ddc018 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc019 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ddc01c push edx */
  push32((uint32_t)(EDX));
  /* 10ddc01d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddc020 push eax */
  push32((uint32_t)(EAX));
  /* 10ddc021 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc024 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc025 call dword ptr [0x10e022b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022b4))), 0x10ddc02bu);
  /* 10ddc02b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ddc02e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc032 jne 0x10ddc03b */
  if (!C.zf) goto L_10ddc03b;
  /* 10ddc034 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc036 jmp 0x10ddc171 */
  goto L_10ddc171;
L_10ddc03b:;
  /* 10ddc03b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddc03e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddc044 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddc046 je 0x10ddc08b */
  if (C.zf) goto L_10ddc08b;
  /* 10ddc048 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc04c je 0x10ddc086 */
  if (C.zf) goto L_10ddc086;
  /* 10ddc04e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ddc051 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc054 jle 0x10ddc05d */
  if ((C.zf||C.sf!=C.of)) goto L_10ddc05d;
  /* 10ddc056 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc058 jmp 0x10ddc171 */
  goto L_10ddc171;
L_10ddc05d:;
  /* 10ddc05d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ddc060 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc061 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ddc064 push edx */
  push32((uint32_t)(EDX));
  /* 10ddc065 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ddc068 push eax */
  push32((uint32_t)(EAX));
  /* 10ddc069 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ddc06c push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc06d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddc070 push edx */
  push32((uint32_t)(EDX));
  /* 10ddc071 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc074 push eax */
  push32((uint32_t)(EAX));
  /* 10ddc075 call dword ptr [0x10e022b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022b4))), 0x10ddc07bu);
  /* 10ddc07b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddc07d jne 0x10ddc086 */
  if (!C.zf) goto L_10ddc086;
  /* 10ddc07f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc081 jmp 0x10ddc171 */
  goto L_10ddc171;
L_10ddc086:;
  /* 10ddc086 jmp 0x10ddc16a */
  goto L_10ddc16a;
L_10ddc08b:;
  /* 10ddc08b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ddc08e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10ddc091 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ddc098 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ddc09b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ddc09d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc0a0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ddc0a2 call 0x10dd6c30 */
  push32(0x10ddc0a7u); f_10dd6c30();
  /* 10ddc0a7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10ddc0aa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ddc0ad mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ddc0b0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10ddc0b3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ddc0ba jmp 0x10ddc0d3 */
  goto L_10ddc0d3;
  /* 10ddc0bc mov eax, 1 */
  EAX = (0x1u);
  /* 10ddc0c1 ret  */
  ESPCHK(0x10ddbe80u, _esp0);
  ESP += 4; return;
  /* 10ddc0c2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ddc0c5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10ddc0cc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ddc0d3:;
  /* 10ddc0d3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc0d7 jne 0x10ddc0e0 */
  if (!C.zf) goto L_10ddc0e0;
  /* 10ddc0d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc0db jmp 0x10ddc171 */
  goto L_10ddc171;
L_10ddc0e0:;
  /* 10ddc0e0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ddc0e3 push eax */
  push32((uint32_t)(EAX));
  /* 10ddc0e4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddc0e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc0e8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ddc0eb push edx */
  push32((uint32_t)(EDX));
  /* 10ddc0ec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ddc0ef push eax */
  push32((uint32_t)(EAX));
  /* 10ddc0f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddc0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc0f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc0f7 push edx */
  push32((uint32_t)(EDX));
  /* 10ddc0f8 call dword ptr [0x10e022b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022b4))), 0x10ddc0feu);
  /* 10ddc0fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddc100 jne 0x10ddc106 */
  if (!C.zf) goto L_10ddc106;
  /* 10ddc102 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc104 jmp 0x10ddc171 */
  goto L_10ddc171;
L_10ddc106:;
  /* 10ddc106 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc10a jne 0x10ddc13a */
  if (!C.zf) goto L_10ddc13a;
  /* 10ddc10c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddc10e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddc110 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddc112 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddc114 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ddc117 push eax */
  push32((uint32_t)(EAX));
  /* 10ddc118 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddc11b push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc11c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ddc121 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ddc124 push edx */
  push32((uint32_t)(EDX));
  /* 10ddc125 call dword ptr [0x10e0234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0234c))), 0x10ddc12bu);
  /* 10ddc12b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ddc12e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc132 jne 0x10ddc138 */
  if (!C.zf) goto L_10ddc138;
  /* 10ddc134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc136 jmp 0x10ddc171 */
  goto L_10ddc171;
L_10ddc138:;
  /* 10ddc138 jmp 0x10ddc16a */
  goto L_10ddc16a;
L_10ddc13a:;
  /* 10ddc13a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddc13c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddc13e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ddc141 push eax */
  push32((uint32_t)(EAX));
  /* 10ddc142 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ddc145 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc146 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ddc149 push edx */
  push32((uint32_t)(EDX));
  /* 10ddc14a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddc14d push eax */
  push32((uint32_t)(EAX));
  /* 10ddc14e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ddc153 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ddc156 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc157 call dword ptr [0x10e0234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0234c))), 0x10ddc15du);
  /* 10ddc15d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ddc160 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc164 jne 0x10ddc16a */
  if (!C.zf) goto L_10ddc16a;
  /* 10ddc166 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc168 jmp 0x10ddc171 */
  goto L_10ddc171;
L_10ddc16a:;
  /* 10ddc16a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ddc16d jmp 0x10ddc171 */
  goto L_10ddc171;
L_10ddc16f:;
  /* 10ddc16f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ddc171:;
  /* 10ddc171 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10ddc174 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ddc177 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ddc17e pop edi */
  EDI = (pop32());
  /* 10ddc17f pop esi */
  ESI = (pop32());
  /* 10ddc180 pop ebx */
  EBX = (pop32());
  /* 10ddc181 mov esp, ebp */
  ESP = (EBP);
  /* 10ddc183 pop ebp */
  EBP = (pop32());
  /* 10ddc184 ret  */
  ESPCHK(0x10ddbe80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c190 @ 0x10ddc190 (80 bytes, 32 insns) */
void f_10ddc190(void) {
  FTRACE(0x10ddc190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddc190 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddc191 mov ebp, esp */
  EBP = (ESP);
  /* 10ddc193 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddc196 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddc199 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ddc19c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc19f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ddc1a2:;
  /* 10ddc1a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddc1a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddc1a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddc1ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ddc1ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddc1b0 je 0x10ddc1c7 */
  if (C.zf) goto L_10ddc1c7;
  /* 10ddc1b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc1b5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ddc1b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddc1ba je 0x10ddc1c7 */
  if (C.zf) goto L_10ddc1c7;
  /* 10ddc1bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc1bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc1c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddc1c5 jmp 0x10ddc1a2 */
  goto L_10ddc1a2;
L_10ddc1c7:;
  /* 10ddc1c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc1ca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ddc1cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddc1cf jne 0x10ddc1d9 */
  if (!C.zf) goto L_10ddc1d9;
  /* 10ddc1d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc1d4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddc1d7 jmp 0x10ddc1dc */
  goto L_10ddc1dc;
L_10ddc1d9:;
  /* 10ddc1d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10ddc1dc:;
  /* 10ddc1dc mov esp, ebp */
  ESP = (EBP);
  /* 10ddc1de pop ebp */
  EBP = (pop32());
  /* 10ddc1df ret  */
  ESPCHK(0x10ddc190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1e0 @ 0x10ddc1e0 (130 bytes, 43 insns) */
void f_10ddc1e0(void) {
  FTRACE(0x10ddc1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddc1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddc1e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ddc1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc1e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc1e7 cmp eax, dword ptr [0x10e010bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e010bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc1ed jae 0x10ddc211 */
  if (!C.cf) goto L_10ddc211;
  /* 10ddc1ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc1f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10ddc1f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc1f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ddc1fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddc1fe mov eax, dword ptr [ecx*4 + 0x10e00f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e00f80)));
  /* 10ddc205 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10ddc20a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddc20d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddc20f jne 0x10ddc22c */
  if (!C.zf) goto L_10ddc22c;
L_10ddc211:;
  /* 10ddc211 call 0x10ddb960 */
  push32(0x10ddc216u); f_10ddb960();
  /* 10ddc216 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10ddc21c call 0x10ddb970 */
  push32(0x10ddc221u); f_10ddb970();
  /* 10ddc221 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ddc227 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc22a jmp 0x10ddc25e */
  goto L_10ddc25e;
L_10ddc22c:;
  /* 10ddc22c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc22f push edx */
  push32((uint32_t)(EDX));
  /* 10ddc230 call 0x10ddd180 */
  push32(0x10ddc235u); f_10ddd180();
  /* 10ddc235 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc238 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddc23b push eax */
  push32((uint32_t)(EAX));
  /* 10ddc23c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddc23f push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc240 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc243 push edx */
  push32((uint32_t)(EDX));
  /* 10ddc244 call 0x10ddc270 */
  push32(0x10ddc249u); f_10ddc270();
  /* 10ddc249 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc24c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddc24f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc252 push eax */
  push32((uint32_t)(EAX));
  /* 10ddc253 call 0x10ddd210 */
  push32(0x10ddc258u); f_10ddd210();
  /* 10ddc258 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc25b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ddc25e:;
  /* 10ddc25e mov esp, ebp */
  ESP = (EBP);
  /* 10ddc260 pop ebp */
  EBP = (pop32());
  /* 10ddc261 ret  */
  ESPCHK(0x10ddc1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c270 @ 0x10ddc270 (178 bytes, 56 insns) */
void f_10ddc270(void) {
  FTRACE(0x10ddc270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddc270 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddc271 mov ebp, esp */
  EBP = (ESP);
  /* 10ddc273 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddc276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc279 push eax */
  push32((uint32_t)(EAX));
  /* 10ddc27a call 0x10ddd000 */
  push32(0x10ddc27fu); f_10ddd000();
  /* 10ddc27f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc282 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ddc285 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc289 jne 0x10ddc29e */
  if (!C.zf) goto L_10ddc29e;
  /* 10ddc28b call 0x10ddb960 */
  push32(0x10ddc290u); f_10ddb960();
  /* 10ddc290 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10ddc296 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc299 jmp 0x10ddc31e */
  goto L_10ddc31e;
L_10ddc29e:;
  /* 10ddc29e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddc2a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc2a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddc2a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddc2a7 push edx */
  push32((uint32_t)(EDX));
  /* 10ddc2a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddc2ab push eax */
  push32((uint32_t)(EAX));
  /* 10ddc2ac call dword ptr [0x10e022b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022b0))), 0x10ddc2b2u);
  /* 10ddc2b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ddc2b5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc2b9 jne 0x10ddc2c6 */
  if (!C.zf) goto L_10ddc2c6;
  /* 10ddc2bb call dword ptr [0x10e02320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02320))), 0x10ddc2c1u);
  /* 10ddc2c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddc2c4 jmp 0x10ddc2cd */
  goto L_10ddc2cd;
L_10ddc2c6:;
  /* 10ddc2c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ddc2cd:;
  /* 10ddc2cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc2d1 je 0x10ddc2e4 */
  if (C.zf) goto L_10ddc2e4;
  /* 10ddc2d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc2d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc2d7 call 0x10ddb8c0 */
  push32(0x10ddc2dcu); f_10ddb8c0();
  /* 10ddc2dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc2df or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc2e2 jmp 0x10ddc31e */
  goto L_10ddc31e;
L_10ddc2e4:;
  /* 10ddc2e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc2e7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10ddc2ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc2ed and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc2f0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddc2f3 mov ecx, dword ptr [edx*4 + 0x10e00f80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10e00f80)));
  /* 10ddc2fa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10ddc2fe and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10ddc301 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc304 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ddc307 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc30a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10ddc30d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddc310 mov eax, dword ptr [eax*4 + 0x10e00f80] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10e00f80)));
  /* 10ddc317 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10ddc31b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10ddc31e:;
  /* 10ddc31e mov esp, ebp */
  ESP = (EBP);
  /* 10ddc320 pop ebp */
  EBP = (pop32());
  /* 10ddc321 ret  */
  ESPCHK(0x10ddc270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c330 @ 0x10ddc330 (130 bytes, 43 insns) */
void f_10ddc330(void) {
  FTRACE(0x10ddc330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddc330 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddc331 mov ebp, esp */
  EBP = (ESP);
  /* 10ddc333 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc337 cmp eax, dword ptr [0x10e010bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e010bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc33d jae 0x10ddc361 */
  if (!C.cf) goto L_10ddc361;
  /* 10ddc33f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc342 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10ddc345 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc348 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ddc34b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddc34e mov eax, dword ptr [ecx*4 + 0x10e00f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e00f80)));
  /* 10ddc355 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10ddc35a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddc35d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddc35f jne 0x10ddc37c */
  if (!C.zf) goto L_10ddc37c;
L_10ddc361:;
  /* 10ddc361 call 0x10ddb960 */
  push32(0x10ddc366u); f_10ddb960();
  /* 10ddc366 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10ddc36c call 0x10ddb970 */
  push32(0x10ddc371u); f_10ddb970();
  /* 10ddc371 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ddc377 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc37a jmp 0x10ddc3ae */
  goto L_10ddc3ae;
L_10ddc37c:;
  /* 10ddc37c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc37f push edx */
  push32((uint32_t)(EDX));
  /* 10ddc380 call 0x10ddd180 */
  push32(0x10ddc385u); f_10ddd180();
  /* 10ddc385 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc388 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddc38b push eax */
  push32((uint32_t)(EAX));
  /* 10ddc38c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddc38f push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc390 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc393 push edx */
  push32((uint32_t)(EDX));
  /* 10ddc394 call 0x10ddc3c0 */
  push32(0x10ddc399u); f_10ddc3c0();
  /* 10ddc399 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc39c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddc39f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc3a2 push eax */
  push32((uint32_t)(EAX));
  /* 10ddc3a3 call 0x10ddd210 */
  push32(0x10ddc3a8u); f_10ddd210();
  /* 10ddc3a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc3ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ddc3ae:;
  /* 10ddc3ae mov esp, ebp */
  ESP = (EBP);
  /* 10ddc3b0 pop ebp */
  EBP = (pop32());
  /* 10ddc3b1 ret  */
  ESPCHK(0x10ddc330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3c0 @ 0x10ddc3c0 (627 bytes, 182 insns) */
void f_10ddc3c0(void) {
  FTRACE(0x10ddc3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddc3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddc3c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ddc3c3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddc3c9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ddc3d0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ddc3d3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10ddc3d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc3dd jne 0x10ddc3e6 */
  if (!C.zf) goto L_10ddc3e6;
  /* 10ddc3df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc3e1 jmp 0x10ddc62f */
  goto L_10ddc62f;
L_10ddc3e6:;
  /* 10ddc3e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc3e9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10ddc3ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc3ef and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ddc3f2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddc3f5 mov eax, dword ptr [ecx*4 + 0x10e00f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e00f80)));
  /* 10ddc3fc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10ddc401 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddc404 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddc406 je 0x10ddc418 */
  if (C.zf) goto L_10ddc418;
  /* 10ddc408 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddc40a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddc40c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc40f push edx */
  push32((uint32_t)(EDX));
  /* 10ddc410 call 0x10ddc270 */
  push32(0x10ddc415u); f_10ddc270();
  /* 10ddc415 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddc418:;
  /* 10ddc418 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc41b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ddc41e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc421 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10ddc424 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddc427 mov edx, dword ptr [eax*4 + 0x10e00f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e00f80)));
  /* 10ddc42e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10ddc433 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc438 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddc43a je 0x10ddc54c */
  if (C.zf) goto L_10ddc54c;
  /* 10ddc440 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddc443 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ddc446 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10ddc44d:;
  /* 10ddc44d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc450 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddc453 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc456 jae 0x10ddc54a */
  if (!C.cf) goto L_10ddc54a;
  /* 10ddc45c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10ddc462 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ddc465:;
  /* 10ddc465 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddc468 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10ddc46e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddc470 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc476 jge 0x10ddc4d7 */
  if ((C.sf==C.of)) goto L_10ddc4d7;
  /* 10ddc478 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc47b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddc47e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc481 jae 0x10ddc4d7 */
  if (!C.cf) goto L_10ddc4d7;
  /* 10ddc483 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc486 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ddc488 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10ddc48e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc491 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc494 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddc497 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10ddc49e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc4a1 jne 0x10ddc4c1 */
  if (!C.zf) goto L_10ddc4c1;
  /* 10ddc4a3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10ddc4a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc4ac mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10ddc4b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddc4b5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10ddc4b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddc4bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc4be mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ddc4c1:;
  /* 10ddc4c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddc4c4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10ddc4ca mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10ddc4cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddc4cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc4d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddc4d5 jmp 0x10ddc465 */
  goto L_10ddc465;
L_10ddc4d7:;
  /* 10ddc4d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddc4d9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10ddc4df push edx */
  push32((uint32_t)(EDX));
  /* 10ddc4e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddc4e3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10ddc4e9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddc4eb push eax */
  push32((uint32_t)(EAX));
  /* 10ddc4ec lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10ddc4f2 push edx */
  push32((uint32_t)(EDX));
  /* 10ddc4f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc4f6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ddc4f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc4fc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10ddc4ff imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddc502 mov edx, dword ptr [eax*4 + 0x10e00f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e00f80)));
  /* 10ddc509 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10ddc50c push eax */
  push32((uint32_t)(EAX));
  /* 10ddc50d call dword ptr [0x10e022e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022e0))), 0x10ddc513u);
  /* 10ddc513 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddc515 je 0x10ddc53a */
  if (C.zf) goto L_10ddc53a;
  /* 10ddc517 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ddc51a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc520 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ddc523 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddc526 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10ddc52c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddc52e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc534 jge 0x10ddc538 */
  if ((C.sf==C.of)) goto L_10ddc538;
  /* 10ddc536 jmp 0x10ddc54a */
  goto L_10ddc54a;
L_10ddc538:;
  /* 10ddc538 jmp 0x10ddc545 */
  goto L_10ddc545;
L_10ddc53a:;
  /* 10ddc53a call dword ptr [0x10e02320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02320))), 0x10ddc540u);
  /* 10ddc540 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ddc543 jmp 0x10ddc54a */
  goto L_10ddc54a;
L_10ddc545:;
  /* 10ddc545 jmp 0x10ddc44d */
  goto L_10ddc44d;
L_10ddc54a:;
  /* 10ddc54a jmp 0x10ddc59c */
  goto L_10ddc59c;
L_10ddc54c:;
  /* 10ddc54c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddc54e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10ddc554 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc555 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddc558 push edx */
  push32((uint32_t)(EDX));
  /* 10ddc559 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddc55c push eax */
  push32((uint32_t)(EAX));
  /* 10ddc55d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc560 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10ddc563 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc566 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ddc569 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddc56c mov eax, dword ptr [ecx*4 + 0x10e00f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e00f80)));
  /* 10ddc573 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10ddc576 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc577 call dword ptr [0x10e022e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022e0))), 0x10ddc57du);
  /* 10ddc57d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddc57f je 0x10ddc593 */
  if (C.zf) goto L_10ddc593;
  /* 10ddc581 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ddc588 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10ddc58e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10ddc591 jmp 0x10ddc59c */
  goto L_10ddc59c;
L_10ddc593:;
  /* 10ddc593 call dword ptr [0x10e02320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02320))), 0x10ddc599u);
  /* 10ddc599 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10ddc59c:;
  /* 10ddc59c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc5a0 jne 0x10ddc626 */
  if (!C.zf) goto L_10ddc626;
  /* 10ddc5a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc5aa je 0x10ddc5da */
  if (C.zf) goto L_10ddc5da;
  /* 10ddc5ac cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc5b0 jne 0x10ddc5c9 */
  if (!C.zf) goto L_10ddc5c9;
  /* 10ddc5b2 call 0x10ddb960 */
  push32(0x10ddc5b7u); f_10ddb960();
  /* 10ddc5b7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10ddc5bd call 0x10ddb970 */
  push32(0x10ddc5c2u); f_10ddb970();
  /* 10ddc5c2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddc5c5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10ddc5c7 jmp 0x10ddc5d5 */
  goto L_10ddc5d5;
L_10ddc5c9:;
  /* 10ddc5c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddc5cc push edx */
  push32((uint32_t)(EDX));
  /* 10ddc5cd call 0x10ddb8c0 */
  push32(0x10ddc5d2u); f_10ddb8c0();
  /* 10ddc5d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddc5d5:;
  /* 10ddc5d5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc5d8 jmp 0x10ddc62f */
  goto L_10ddc62f;
L_10ddc5da:;
  /* 10ddc5da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc5dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ddc5e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc5e3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10ddc5e6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddc5e9 mov edx, dword ptr [eax*4 + 0x10e00f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e00f80)));
  /* 10ddc5f0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10ddc5f5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc5f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddc5fa je 0x10ddc60b */
  if (C.zf) goto L_10ddc60b;
  /* 10ddc5fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddc5ff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ddc602 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc605 jne 0x10ddc60b */
  if (!C.zf) goto L_10ddc60b;
  /* 10ddc607 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc609 jmp 0x10ddc62f */
  goto L_10ddc62f;
L_10ddc60b:;
  /* 10ddc60b call 0x10ddb960 */
  push32(0x10ddc610u); f_10ddb960();
  /* 10ddc610 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10ddc616 call 0x10ddb970 */
  push32(0x10ddc61bu); f_10ddb970();
  /* 10ddc61b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ddc621 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc624 jmp 0x10ddc62f */
  goto L_10ddc62f;
L_10ddc626:;
  /* 10ddc626 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ddc629 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10ddc62f:;
  /* 10ddc62f mov esp, ebp */
  ESP = (EBP);
  /* 10ddc631 pop ebp */
  EBP = (pop32());
  /* 10ddc632 ret  */
  ESPCHK(0x10ddc3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c640 @ 0x10ddc640 (199 bytes, 68 insns) */
void f_10ddc640(void) {
  FTRACE(0x10ddc640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddc640 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddc641 mov ebp, esp */
  EBP = (ESP);
  /* 10ddc643 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc644 push ebx */
  push32((uint32_t)(EBX));
  /* 10ddc645 push esi */
  push32((uint32_t)(ESI));
  /* 10ddc646 push edi */
  push32((uint32_t)(EDI));
L_10ddc647:;
  /* 10ddc647 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc64b jne 0x10ddc66b */
  if (!C.zf) goto L_10ddc66b;
  /* 10ddc64d push 0x10dfb07c */
  push32((uint32_t)(0x10dfb07cu));
  /* 10ddc652 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddc654 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10ddc656 push 0x10dfb148 */
  push32((uint32_t)(0x10dfb148u));
  /* 10ddc65b push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddc65d call 0x10dd2b50 */
  push32(0x10ddc662u); f_10dd2b50();
  /* 10ddc662 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc665 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc668 jne 0x10ddc66b */
  if (!C.zf) goto L_10ddc66b;
  /* 10ddc66a int3  */
  x86_unimpl("int3 @ 0x10ddc66a");
L_10ddc66b:;
  /* 10ddc66b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc66d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddc66f jne 0x10ddc647 */
  if (!C.zf) goto L_10ddc647;
  /* 10ddc671 mov ecx, dword ptr [0x10dff7bc] */
  ECX = (r32((uint32_t)(0x10dff7bc)));
  /* 10ddc677 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc67a mov dword ptr [0x10dff7bc], ecx */
  w32((uint32_t)(0x10dff7bc), (ECX));
  /* 10ddc680 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc683 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ddc686 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10ddc688 push 0x10dfb148 */
  push32((uint32_t)(0x10dfb148u));
  /* 10ddc68d push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddc68f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10ddc694 call 0x10dd3a90 */
  push32(0x10ddc699u); f_10dd3a90();
  /* 10ddc699 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc69c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc69f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10ddc6a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc6a5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc6a9 je 0x10ddc6c6 */
  if (C.zf) goto L_10ddc6c6;
  /* 10ddc6ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc6ae mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ddc6b1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddc6b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc6b7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10ddc6ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc6bd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10ddc6c4 jmp 0x10ddc6eb */
  goto L_10ddc6eb;
L_10ddc6c6:;
  /* 10ddc6c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc6c9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ddc6cc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddc6cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc6d2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10ddc6d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc6d8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc6db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc6de mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10ddc6e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc6e4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10ddc6eb:;
  /* 10ddc6eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc6ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc6f1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ddc6f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ddc6f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc6f9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10ddc700 pop edi */
  EDI = (pop32());
  /* 10ddc701 pop esi */
  ESI = (pop32());
  /* 10ddc702 pop ebx */
  EBX = (pop32());
  /* 10ddc703 mov esp, ebp */
  ESP = (EBP);
  /* 10ddc705 pop ebp */
  EBP = (pop32());
  /* 10ddc706 ret  */
  ESPCHK(0x10ddc640u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10ddc710 (50 bytes, 17 insns) */
void f_10ddc710(void) {
  FTRACE(0x10ddc710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddc710 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddc711 mov ebp, esp */
  EBP = (ESP);
  /* 10ddc713 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc716 cmp eax, dword ptr [0x10e010bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e010bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc71c jb 0x10ddc722 */
  if (C.cf) goto L_10ddc722;
  /* 10ddc71e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddc720 jmp 0x10ddc740 */
  goto L_10ddc740;
L_10ddc722:;
  /* 10ddc722 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc725 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10ddc728 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc72b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ddc72e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddc731 mov eax, dword ptr [ecx*4 + 0x10e00f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e00f80)));
  /* 10ddc738 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10ddc73d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10ddc740:;
  /* 10ddc740 pop ebp */
  EBP = (pop32());
  /* 10ddc741 ret  */
  ESPCHK(0x10ddc710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c750 @ 0x10ddc750 (300 bytes, 80 insns) */
void f_10ddc750(void) {
  FTRACE(0x10ddc750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddc750 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddc751 mov ebp, esp */
  EBP = (ESP);
  /* 10ddc753 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc754 cmp dword ptr [0x10e00c80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e00c80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc75b jne 0x10ddc769 */
  if (!C.zf) goto L_10ddc769;
  /* 10ddc75d mov dword ptr [0x10e00c80], 0x200 */
  w32((uint32_t)(0x10e00c80), (0x200u));
  /* 10ddc767 jmp 0x10ddc77c */
  goto L_10ddc77c;
L_10ddc769:;
  /* 10ddc769 cmp dword ptr [0x10e00c80], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10e00c80))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc770 jge 0x10ddc77c */
  if ((C.sf==C.of)) goto L_10ddc77c;
  /* 10ddc772 mov dword ptr [0x10e00c80], 0x14 */
  w32((uint32_t)(0x10e00c80), (0x14u));
L_10ddc77c:;
  /* 10ddc77c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10ddc781 push 0x10dfb154 */
  push32((uint32_t)(0x10dfb154u));
  /* 10ddc786 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddc788 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ddc78a mov eax, dword ptr [0x10e00c80] */
  EAX = (r32((uint32_t)(0x10e00c80)));
  /* 10ddc78f push eax */
  push32((uint32_t)(EAX));
  /* 10ddc790 call 0x10dd3ea0 */
  push32(0x10ddc795u); f_10dd3ea0();
  /* 10ddc795 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc798 mov dword ptr [0x10dff930], eax */
  w32((uint32_t)(0x10dff930), (EAX));
  /* 10ddc79d cmp dword ptr [0x10dff930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc7a4 jne 0x10ddc7e5 */
  if (!C.zf) goto L_10ddc7e5;
  /* 10ddc7a6 mov dword ptr [0x10e00c80], 0x14 */
  w32((uint32_t)(0x10e00c80), (0x14u));
  /* 10ddc7b0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10ddc7b5 push 0x10dfb154 */
  push32((uint32_t)(0x10dfb154u));
  /* 10ddc7ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddc7bc push 4 */
  push32((uint32_t)(0x4u));
  /* 10ddc7be mov ecx, dword ptr [0x10e00c80] */
  ECX = (r32((uint32_t)(0x10e00c80)));
  /* 10ddc7c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc7c5 call 0x10dd3ea0 */
  push32(0x10ddc7cau); f_10dd3ea0();
  /* 10ddc7ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc7cd mov dword ptr [0x10dff930], eax */
  w32((uint32_t)(0x10dff930), (EAX));
  /* 10ddc7d2 cmp dword ptr [0x10dff930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc7d9 jne 0x10ddc7e5 */
  if (!C.zf) goto L_10ddc7e5;
  /* 10ddc7db push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10ddc7dd call 0x10dd2a00 */
  push32(0x10ddc7e2u); f_10dd2a00();
  /* 10ddc7e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddc7e5:;
  /* 10ddc7e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ddc7ec jmp 0x10ddc7f7 */
  goto L_10ddc7f7;
L_10ddc7ee:;
  /* 10ddc7ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc7f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc7f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ddc7f7:;
  /* 10ddc7f7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc7fb jge 0x10ddc816 */
  if ((C.sf==C.of)) goto L_10ddc816;
  /* 10ddc7fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc800 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ddc803 add eax, 0x10dfe120 */
  { uint32_t _a=(EAX),_b=(0x10dfe120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc808 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc80b mov edx, dword ptr [0x10dff930] */
  EDX = (r32((uint32_t)(0x10dff930)));
  /* 10ddc811 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10ddc814 jmp 0x10ddc7ee */
  goto L_10ddc7ee;
L_10ddc816:;
  /* 10ddc816 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ddc81d jmp 0x10ddc828 */
  goto L_10ddc828;
L_10ddc81f:;
  /* 10ddc81f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc822 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc825 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ddc828:;
  /* 10ddc828 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc82c jge 0x10ddc878 */
  if ((C.sf==C.of)) goto L_10ddc878;
  /* 10ddc82e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc831 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10ddc834 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc837 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ddc83a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddc83d mov eax, dword ptr [ecx*4 + 0x10e00f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e00f80)));
  /* 10ddc844 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc848 je 0x10ddc866 */
  if (C.zf) goto L_10ddc866;
  /* 10ddc84a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc84d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10ddc850 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc853 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ddc856 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddc859 mov eax, dword ptr [ecx*4 + 0x10e00f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e00f80)));
  /* 10ddc860 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc864 jne 0x10ddc876 */
  if (!C.zf) goto L_10ddc876;
L_10ddc866:;
  /* 10ddc866 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddc869 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10ddc86c mov dword ptr [ecx + 0x10dfe130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10dfe130), (0xffffffffu));
L_10ddc876:;
  /* 10ddc876 jmp 0x10ddc81f */
  goto L_10ddc81f;
L_10ddc878:;
  /* 10ddc878 mov esp, ebp */
  ESP = (EBP);
  /* 10ddc87a pop ebp */
  EBP = (pop32());
  /* 10ddc87b ret  */
  ESPCHK(0x10ddc750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c880 @ 0x10ddc880 (26 bytes, 9 insns) */
void f_10ddc880(void) {
  FTRACE(0x10ddc880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddc880 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddc881 mov ebp, esp */
  EBP = (ESP);
  /* 10ddc883 call 0x10ddd480 */
  push32(0x10ddc888u); f_10ddd480();
  /* 10ddc888 movsx eax, byte ptr [0x10dff5d4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10dff5d4))));
  /* 10ddc88f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddc891 je 0x10ddc898 */
  if (C.zf) goto L_10ddc898;
  /* 10ddc893 call 0x10ddd240 */
  push32(0x10ddc898u); f_10ddd240();
L_10ddc898:;
  /* 10ddc898 pop ebp */
  EBP = (pop32());
  /* 10ddc899 ret  */
  ESPCHK(0x10ddc880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8a0 @ 0x10ddc8a0 (61 bytes, 20 insns) */
void f_10ddc8a0(void) {
  FTRACE(0x10ddc8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddc8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddc8a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ddc8a3 cmp dword ptr [ebp + 8], 0x10dfe120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10dfe120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc8aa jb 0x10ddc8ce */
  if (C.cf) goto L_10ddc8ce;
  /* 10ddc8ac cmp dword ptr [ebp + 8], 0x10dfe380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10dfe380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc8b3 ja 0x10ddc8ce */
  if ((!C.cf&&!C.zf)) goto L_10ddc8ce;
  /* 10ddc8b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc8b8 sub eax, 0x10dfe120 */
  { uint32_t _a=(EAX),_b=(0x10dfe120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddc8bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ddc8c0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc8c3 push eax */
  push32((uint32_t)(EAX));
  /* 10ddc8c4 call 0x10dd7490 */
  push32(0x10ddc8c9u); f_10dd7490();
  /* 10ddc8c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc8cc jmp 0x10ddc8db */
  goto L_10ddc8db;
L_10ddc8ce:;
  /* 10ddc8ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc8d1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc8d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc8d5 call dword ptr [0x10e02370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02370))), 0x10ddc8dbu);
L_10ddc8db:;
  /* 10ddc8db pop ebp */
  EBP = (pop32());
  /* 10ddc8dc ret  */
  ESPCHK(0x10ddc8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8e0 @ 0x10ddc8e0 (41 bytes, 16 insns) */
void f_10ddc8e0(void) {
  FTRACE(0x10ddc8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddc8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddc8e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ddc8e3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc8e7 jge 0x10ddc8fa */
  if ((C.sf==C.of)) goto L_10ddc8fa;
  /* 10ddc8e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc8ec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc8ef push eax */
  push32((uint32_t)(EAX));
  /* 10ddc8f0 call 0x10dd7490 */
  push32(0x10ddc8f5u); f_10dd7490();
  /* 10ddc8f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc8f8 jmp 0x10ddc907 */
  goto L_10ddc907;
L_10ddc8fa:;
  /* 10ddc8fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddc8fd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc900 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc901 call dword ptr [0x10e02370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02370))), 0x10ddc907u);
L_10ddc907:;
  /* 10ddc907 pop ebp */
  EBP = (pop32());
  /* 10ddc908 ret  */
  ESPCHK(0x10ddc8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c910 @ 0x10ddc910 (61 bytes, 20 insns) */
void f_10ddc910(void) {
  FTRACE(0x10ddc910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddc910 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddc911 mov ebp, esp */
  EBP = (ESP);
  /* 10ddc913 cmp dword ptr [ebp + 8], 0x10dfe120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10dfe120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc91a jb 0x10ddc93e */
  if (C.cf) goto L_10ddc93e;
  /* 10ddc91c cmp dword ptr [ebp + 8], 0x10dfe380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10dfe380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc923 ja 0x10ddc93e */
  if ((!C.cf&&!C.zf)) goto L_10ddc93e;
  /* 10ddc925 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc928 sub eax, 0x10dfe120 */
  { uint32_t _a=(EAX),_b=(0x10dfe120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddc92d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ddc930 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc933 push eax */
  push32((uint32_t)(EAX));
  /* 10ddc934 call 0x10dd7530 */
  push32(0x10ddc939u); f_10dd7530();
  /* 10ddc939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc93c jmp 0x10ddc94b */
  goto L_10ddc94b;
L_10ddc93e:;
  /* 10ddc93e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc941 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc944 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc945 call dword ptr [0x10e0235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0235c))), 0x10ddc94bu);
L_10ddc94b:;
  /* 10ddc94b pop ebp */
  EBP = (pop32());
  /* 10ddc94c ret  */
  ESPCHK(0x10ddc910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c950 @ 0x10ddc950 (41 bytes, 16 insns) */
void f_10ddc950(void) {
  FTRACE(0x10ddc950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddc950 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddc951 mov ebp, esp */
  EBP = (ESP);
  /* 10ddc953 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc957 jge 0x10ddc96a */
  if ((C.sf==C.of)) goto L_10ddc96a;
  /* 10ddc959 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc95c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc95f push eax */
  push32((uint32_t)(EAX));
  /* 10ddc960 call 0x10dd7530 */
  push32(0x10ddc965u); f_10dd7530();
  /* 10ddc965 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc968 jmp 0x10ddc977 */
  goto L_10ddc977;
L_10ddc96a:;
  /* 10ddc96a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddc96d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc970 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc971 call dword ptr [0x10e0235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0235c))), 0x10ddc977u);
L_10ddc977:;
  /* 10ddc977 pop ebp */
  EBP = (pop32());
  /* 10ddc978 ret  */
  ESPCHK(0x10ddc950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c980 @ 0x10ddc980 (119 bytes, 34 insns) */
void f_10ddc980(void) {
  FTRACE(0x10ddc980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddc980 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddc981 mov ebp, esp */
  EBP = (ESP);
  /* 10ddc983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddc986 push 0x10dff92c */
  push32((uint32_t)(0x10dff92cu));
  /* 10ddc98b call dword ptr [0x10e022f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022f4))), 0x10ddc991u);
  /* 10ddc991 cmp dword ptr [0x10dff91c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff91c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc998 je 0x10ddc9b8 */
  if (C.zf) goto L_10ddc9b8;
  /* 10ddc99a push 0x10dff92c */
  push32((uint32_t)(0x10dff92cu));
  /* 10ddc99f call dword ptr [0x10e022e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022e4))), 0x10ddc9a5u);
  /* 10ddc9a5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ddc9a7 call 0x10dd7490 */
  push32(0x10ddc9acu); f_10dd7490();
  /* 10ddc9ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc9af mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ddc9b6 jmp 0x10ddc9bf */
  goto L_10ddc9bf;
L_10ddc9b8:;
  /* 10ddc9b8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ddc9bf:;
  /* 10ddc9bf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10ddc9c3 push eax */
  push32((uint32_t)(EAX));
  /* 10ddc9c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddc9c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddc9c8 call 0x10ddca00 */
  push32(0x10ddc9cdu); f_10ddca00();
  /* 10ddc9cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc9d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ddc9d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddc9d7 je 0x10ddc9e5 */
  if (C.zf) goto L_10ddc9e5;
  /* 10ddc9d9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ddc9db call 0x10dd7530 */
  push32(0x10ddc9e0u); f_10dd7530();
  /* 10ddc9e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddc9e3 jmp 0x10ddc9f0 */
  goto L_10ddc9f0;
L_10ddc9e5:;
  /* 10ddc9e5 push 0x10dff92c */
  push32((uint32_t)(0x10dff92cu));
  /* 10ddc9ea call dword ptr [0x10e022e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022e4))), 0x10ddc9f0u);
L_10ddc9f0:;
  /* 10ddc9f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddc9f3 mov esp, ebp */
  ESP = (EBP);
  /* 10ddc9f5 pop ebp */
  EBP = (pop32());
  /* 10ddc9f6 ret  */
  ESPCHK(0x10ddc980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca00 @ 0x10ddca00 (160 bytes, 50 insns) */
void f_10ddca00(void) {
  FTRACE(0x10ddca00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddca00 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddca01 mov ebp, esp */
  EBP = (ESP);
  /* 10ddca03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddca06 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddca0a jne 0x10ddca13 */
  if (!C.zf) goto L_10ddca13;
  /* 10ddca0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddca0e jmp 0x10ddca9c */
  goto L_10ddca9c;
L_10ddca13:;
  /* 10ddca13 cmp dword ptr [0x10dff7a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff7a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddca1a jne 0x10ddca4a */
  if (!C.zf) goto L_10ddca4a;
  /* 10ddca1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddca1f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddca24 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddca29 jle 0x10ddca3b */
  if ((C.zf||C.sf!=C.of)) goto L_10ddca3b;
  /* 10ddca2b call 0x10ddb960 */
  push32(0x10ddca30u); f_10ddb960();
  /* 10ddca30 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10ddca36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddca39 jmp 0x10ddca9c */
  goto L_10ddca9c;
L_10ddca3b:;
  /* 10ddca3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddca3e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10ddca41 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10ddca43 mov eax, 1 */
  EAX = (0x1u);
  /* 10ddca48 jmp 0x10ddca9c */
  goto L_10ddca9c;
L_10ddca4a:;
  /* 10ddca4a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ddca51 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10ddca54 push eax */
  push32((uint32_t)(EAX));
  /* 10ddca55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddca57 mov ecx, dword ptr [0x10dfdea4] */
  ECX = (r32((uint32_t)(0x10dfdea4)));
  /* 10ddca5d push ecx */
  push32((uint32_t)(ECX));
  /* 10ddca5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddca61 push edx */
  push32((uint32_t)(EDX));
  /* 10ddca62 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddca64 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10ddca67 push eax */
  push32((uint32_t)(EAX));
  /* 10ddca68 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ddca6d mov ecx, dword ptr [0x10dff7b0] */
  ECX = (r32((uint32_t)(0x10dff7b0)));
  /* 10ddca73 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddca74 call dword ptr [0x10e0234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0234c))), 0x10ddca7au);
  /* 10ddca7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddca7d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddca81 je 0x10ddca89 */
  if (C.zf) goto L_10ddca89;
  /* 10ddca83 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddca87 je 0x10ddca99 */
  if (C.zf) goto L_10ddca99;
L_10ddca89:;
  /* 10ddca89 call 0x10ddb960 */
  push32(0x10ddca8eu); f_10ddb960();
  /* 10ddca8e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10ddca94 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddca97 jmp 0x10ddca9c */
  goto L_10ddca9c;
L_10ddca99:;
  /* 10ddca99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ddca9c:;
  /* 10ddca9c mov esp, ebp */
  ESP = (EBP);
  /* 10ddca9e pop ebp */
  EBP = (pop32());
  /* 10ddca9f ret  */
  ESPCHK(0x10ddca00u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10ddcaa0 (32 bytes, 18 insns) */
void f_10ddcaa0(void) {
  FTRACE(0x10ddcaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddcaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddcaa1 mov ebp, esp */
  EBP = (ESP);
  /* 10ddcaa3 push ebx */
  push32((uint32_t)(EBX));
  /* 10ddcaa4 push esi */
  push32((uint32_t)(ESI));
  /* 10ddcaa5 push edi */
  push32((uint32_t)(EDI));
  /* 10ddcaa6 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddcaa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddcaa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddcaab push 0x10ddcab8 */
  push32((uint32_t)(0x10ddcab8u));
  /* 10ddcab0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10ddcab3 call 0x10de41ec */
  push32(0x10ddcab8u); f_10de41ec();
  /* 10ddcab8 pop ebp */
  EBP = (pop32());
  /* 10ddcab9 pop edi */
  EDI = (pop32());
  /* 10ddcaba pop esi */
  ESI = (pop32());
  /* 10ddcabb pop ebx */
  EBX = (pop32());
  /* 10ddcabc mov esp, ebp */
  ESP = (EBP);
  /* 10ddcabe pop ebp */
  EBP = (pop32());
  /* 10ddcabf ret  */
  ESPCHK(0x10ddcaa0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10ddcae2 (104 bytes, 33 insns) */
void f_10ddcae2(void) {
  FTRACE(0x10ddcae2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddcae2 push ebx */
  push32((uint32_t)(EBX));
  /* 10ddcae3 push esi */
  push32((uint32_t)(ESI));
  /* 10ddcae4 push edi */
  push32((uint32_t)(EDI));
  /* 10ddcae5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10ddcae9 push eax */
  push32((uint32_t)(EAX));
  /* 10ddcaea push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10ddcaec push 0x10ddcac0 */
  push32((uint32_t)(0x10ddcac0u));
  /* 10ddcaf1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10ddcaf8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10ddcaff:;
  /* 10ddcaff mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10ddcb03 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ddcb06 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10ddcb09 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddcb0c je 0x10ddcb3c */
  if (C.zf) goto L_10ddcb3c;
  /* 10ddcb0e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddcb12 je 0x10ddcb3c */
  if (C.zf) goto L_10ddcb3c;
  /* 10ddcb14 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10ddcb17 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10ddcb1a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10ddcb1e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10ddcb21 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddcb26 jne 0x10ddcb3a */
  if (!C.zf) goto L_10ddcb3a;
  /* 10ddcb28 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10ddcb2d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10ddcb31 call 0x10ddcb76 */
  push32(0x10ddcb36u); f_10ddcb76();
  /* 10ddcb36 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10ddcb3au);
L_10ddcb3a:;
  /* 10ddcb3a jmp 0x10ddcaff */
  goto L_10ddcaff;
L_10ddcb3c:;
  /* 10ddcb3c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10ddcb43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddcb46 pop edi */
  EDI = (pop32());
  /* 10ddcb47 pop esi */
  ESI = (pop32());
  /* 10ddcb48 pop ebx */
  EBX = (pop32());
  /* 10ddcb49 ret  */
  ESPCHK(0x10ddcae2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb76 @ 0x10ddcb76 (24 bytes, 10 insns) */
void f_10ddcb76(void) {
  FTRACE(0x10ddcb76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddcb76 push ebx */
  push32((uint32_t)(EBX));
  /* 10ddcb77 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddcb78 mov ebx, 0x10dfe3b8 */
  EBX = (0x10dfe3b8u);
  /* 10ddcb7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddcb80 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10ddcb83 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10ddcb86 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10ddcb89 pop ecx */
  ECX = (pop32());
  /* 10ddcb8a pop ebx */
  EBX = (pop32());
  /* 10ddcb8b ret 4 */
  ESPCHK(0x10ddcb76u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cc55 @ 0x10ddcc55 (27 bytes, 11 insns) */
void f_10ddcc55(void) {
  FTRACE(0x10ddcc55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddcc55 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddcc56 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ddcc5a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10ddcc5c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ddcc5f push eax */
  push32((uint32_t)(EAX));
  /* 10ddcc60 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10ddcc63 push eax */
  push32((uint32_t)(EAX));
  /* 10ddcc64 call 0x10ddcae2 */
  push32(0x10ddcc69u); f_10ddcae2();
  /* 10ddcc69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddcc6c pop ebp */
  EBP = (pop32());
  /* 10ddcc6d ret 4 */
  ESPCHK(0x10ddcc55u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cc70 @ 0x10ddcc70 (482 bytes, 138 insns) */
void f_10ddcc70(void) {
  FTRACE(0x10ddcc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddcc70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddcc71 mov ebp, esp */
  EBP = (ESP);
  /* 10ddcc73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddcc76 push esi */
  push32((uint32_t)(ESI));
  /* 10ddcc77 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10ddcc7e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10ddcc80 call 0x10dd7490 */
  push32(0x10ddcc85u); f_10dd7490();
  /* 10ddcc85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddcc88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ddcc8f jmp 0x10ddcc9a */
  goto L_10ddcc9a;
L_10ddcc91:;
  /* 10ddcc91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddcc94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddcc97 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10ddcc9a:;
  /* 10ddcc9a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddcc9e jge 0x10ddce40 */
  if ((C.sf==C.of)) goto L_10ddce40;
  /* 10ddcca4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddcca7 cmp dword ptr [ecx*4 + 0x10e00f80], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10e00f80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddccaf je 0x10ddcda6 */
  if (C.zf) goto L_10ddcda6;
  /* 10ddccb5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddccb8 mov eax, dword ptr [edx*4 + 0x10e00f80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e00f80)));
  /* 10ddccbf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddccc2 jmp 0x10ddcccd */
  goto L_10ddcccd;
L_10ddccc4:;
  /* 10ddccc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddccc7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddccca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ddcccd:;
  /* 10ddcccd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddccd0 mov eax, dword ptr [edx*4 + 0x10e00f80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e00f80)));
  /* 10ddccd7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddccdc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddccdf jae 0x10ddcd96 */
  if (!C.cf) goto L_10ddcd96;
  /* 10ddcce5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddcce8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ddccec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddccef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddccf1 jne 0x10ddcd91 */
  if (!C.zf) goto L_10ddcd91;
  /* 10ddccf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddccfa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddccfe jne 0x10ddcd39 */
  if (!C.zf) goto L_10ddcd39;
  /* 10ddcd00 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10ddcd02 call 0x10dd7490 */
  push32(0x10ddcd07u); f_10dd7490();
  /* 10ddcd07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddcd0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddcd0d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddcd11 jne 0x10ddcd2f */
  if (!C.zf) goto L_10ddcd2f;
  /* 10ddcd13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddcd16 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddcd19 push edx */
  push32((uint32_t)(EDX));
  /* 10ddcd1a call dword ptr [0x10e0236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0236c))), 0x10ddcd20u);
  /* 10ddcd20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddcd23 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ddcd26 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddcd29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddcd2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10ddcd2f:;
  /* 10ddcd2f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10ddcd31 call 0x10dd7530 */
  push32(0x10ddcd36u); f_10dd7530();
  /* 10ddcd36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddcd39:;
  /* 10ddcd39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddcd3c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddcd3f push eax */
  push32((uint32_t)(EAX));
  /* 10ddcd40 call dword ptr [0x10e02370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02370))), 0x10ddcd46u);
  /* 10ddcd46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddcd49 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ddcd4d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddcd50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddcd52 je 0x10ddcd66 */
  if (C.zf) goto L_10ddcd66;
  /* 10ddcd54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddcd57 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddcd5a push eax */
  push32((uint32_t)(EAX));
  /* 10ddcd5b call dword ptr [0x10e0235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0235c))), 0x10ddcd61u);
  /* 10ddcd61 jmp 0x10ddccc4 */
  goto L_10ddccc4;
L_10ddcd66:;
  /* 10ddcd66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddcd69 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10ddcd6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddcd72 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10ddcd75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddcd78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddcd7b sub eax, dword ptr [edx*4 + 0x10e00f80] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10e00f80))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddcd82 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ddcd83 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10ddcd88 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ddcd8a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddcd8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddcd8f jmp 0x10ddcd96 */
  goto L_10ddcd96;
L_10ddcd91:;
  /* 10ddcd91 jmp 0x10ddccc4 */
  goto L_10ddccc4;
L_10ddcd96:;
  /* 10ddcd96 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddcd9a je 0x10ddcda1 */
  if (C.zf) goto L_10ddcda1;
  /* 10ddcd9c jmp 0x10ddce40 */
  goto L_10ddce40;
L_10ddcda1:;
  /* 10ddcda1 jmp 0x10ddce3b */
  goto L_10ddce3b;
L_10ddcda6:;
  /* 10ddcda6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10ddcda8 push 0x10dfb15c */
  push32((uint32_t)(0x10dfb15cu));
  /* 10ddcdad push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddcdaf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10ddcdb4 call 0x10dd3a90 */
  push32(0x10ddcdb9u); f_10dd3a90();
  /* 10ddcdb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddcdbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddcdbf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddcdc3 je 0x10ddce39 */
  if (C.zf) goto L_10ddce39;
  /* 10ddcdc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddcdc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddcdcb mov dword ptr [eax*4 + 0x10e00f80], ecx */
  w32((uint32_t)(EAX*4 + 0x10e00f80), (ECX));
  /* 10ddcdd2 mov edx, dword ptr [0x10e010bc] */
  EDX = (r32((uint32_t)(0x10e010bc)));
  /* 10ddcdd8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddcddb mov dword ptr [0x10e010bc], edx */
  w32((uint32_t)(0x10e010bc), (EDX));
  /* 10ddcde1 jmp 0x10ddcdec */
  goto L_10ddcdec;
L_10ddcde3:;
  /* 10ddcde3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddcde6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddcde9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ddcdec:;
  /* 10ddcdec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddcdef mov edx, dword ptr [ecx*4 + 0x10e00f80] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e00f80)));
  /* 10ddcdf6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddcdfc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddcdff jae 0x10ddce24 */
  if (!C.cf) goto L_10ddce24;
  /* 10ddce01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddce04 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10ddce08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddce0b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10ddce11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddce14 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10ddce18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddce1b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10ddce22 jmp 0x10ddcde3 */
  goto L_10ddcde3;
L_10ddce24:;
  /* 10ddce24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddce27 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10ddce2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddce2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddce30 push edx */
  push32((uint32_t)(EDX));
  /* 10ddce31 call 0x10ddd180 */
  push32(0x10ddce36u); f_10ddd180();
  /* 10ddce36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddce39:;
  /* 10ddce39 jmp 0x10ddce40 */
  goto L_10ddce40;
L_10ddce3b:;
  /* 10ddce3b jmp 0x10ddcc91 */
  goto L_10ddcc91;
L_10ddce40:;
  /* 10ddce40 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10ddce42 call 0x10dd7530 */
  push32(0x10ddce47u); f_10dd7530();
  /* 10ddce47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddce4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddce4d pop esi */
  ESI = (pop32());
  /* 10ddce4e mov esp, ebp */
  ESP = (EBP);
  /* 10ddce50 pop ebp */
  EBP = (pop32());
  /* 10ddce51 ret  */
  ESPCHK(0x10ddcc70u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10ddce60 (183 bytes, 57 insns) */
void f_10ddce60(void) {
  FTRACE(0x10ddce60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddce60 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddce61 mov ebp, esp */
  EBP = (ESP);
  /* 10ddce63 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddce64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddce67 cmp eax, dword ptr [0x10e010bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e010bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddce6d jae 0x10ddcefa */
  if (!C.cf) goto L_10ddcefa;
  /* 10ddce73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddce76 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10ddce79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddce7c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ddce7f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddce82 mov eax, dword ptr [ecx*4 + 0x10e00f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e00f80)));
  /* 10ddce89 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddce8d jne 0x10ddcefa */
  if (!C.zf) goto L_10ddcefa;
  /* 10ddce8f cmp dword ptr [0x10dff594], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dff594))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddce96 jne 0x10ddceda */
  if (!C.zf) goto L_10ddceda;
  /* 10ddce98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddce9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ddce9e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddcea2 je 0x10ddceb2 */
  if (C.zf) goto L_10ddceb2;
  /* 10ddcea4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddcea8 je 0x10ddcec0 */
  if (C.zf) goto L_10ddcec0;
  /* 10ddceaa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddceae je 0x10ddcece */
  if (C.zf) goto L_10ddcece;
  /* 10ddceb0 jmp 0x10ddceda */
  goto L_10ddceda;
L_10ddceb2:;
  /* 10ddceb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddceb5 push edx */
  push32((uint32_t)(EDX));
  /* 10ddceb6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10ddceb8 call dword ptr [0x10e022a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022a8))), 0x10ddcebeu);
  /* 10ddcebe jmp 0x10ddceda */
  goto L_10ddceda;
L_10ddcec0:;
  /* 10ddcec0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddcec3 push eax */
  push32((uint32_t)(EAX));
  /* 10ddcec4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10ddcec6 call dword ptr [0x10e022a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022a8))), 0x10ddceccu);
  /* 10ddcecc jmp 0x10ddceda */
  goto L_10ddceda;
L_10ddcece:;
  /* 10ddcece mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddced1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddced2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10ddced4 call dword ptr [0x10e022a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022a8))), 0x10ddcedau);
L_10ddceda:;
  /* 10ddceda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddcedd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10ddcee0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddcee3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddcee6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddcee9 mov ecx, dword ptr [edx*4 + 0x10e00f80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10e00f80)));
  /* 10ddcef0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddcef3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10ddcef6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddcef8 jmp 0x10ddcf13 */
  goto L_10ddcf13;
L_10ddcefa:;
  /* 10ddcefa call 0x10ddb960 */
  push32(0x10ddceffu); f_10ddb960();
  /* 10ddceff mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10ddcf05 call 0x10ddb970 */
  push32(0x10ddcf0au); f_10ddb970();
  /* 10ddcf0a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ddcf10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10ddcf13:;
  /* 10ddcf13 mov esp, ebp */
  ESP = (EBP);
  /* 10ddcf15 pop ebp */
  EBP = (pop32());
  /* 10ddcf16 ret  */
  ESPCHK(0x10ddce60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf20 @ 0x10ddcf20 (216 bytes, 63 insns) */
void f_10ddcf20(void) {
  FTRACE(0x10ddcf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddcf20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddcf21 mov ebp, esp */
  EBP = (ESP);
  /* 10ddcf23 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddcf24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddcf27 cmp eax, dword ptr [0x10e010bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e010bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddcf2d jae 0x10ddcfdb */
  if (!C.cf) goto L_10ddcfdb;
  /* 10ddcf33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddcf36 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10ddcf39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddcf3c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ddcf3f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddcf42 mov eax, dword ptr [ecx*4 + 0x10e00f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e00f80)));
  /* 10ddcf49 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10ddcf4e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddcf51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddcf53 je 0x10ddcfdb */
  if (C.zf) goto L_10ddcfdb;
  /* 10ddcf59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddcf5c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10ddcf5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddcf62 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddcf65 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddcf68 mov ecx, dword ptr [edx*4 + 0x10e00f80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10e00f80)));
  /* 10ddcf6f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddcf73 je 0x10ddcfdb */
  if (C.zf) goto L_10ddcfdb;
  /* 10ddcf75 cmp dword ptr [0x10dff594], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dff594))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddcf7c jne 0x10ddcfba */
  if (!C.zf) goto L_10ddcfba;
  /* 10ddcf7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddcf81 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ddcf84 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddcf88 je 0x10ddcf98 */
  if (C.zf) goto L_10ddcf98;
  /* 10ddcf8a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddcf8e je 0x10ddcfa4 */
  if (C.zf) goto L_10ddcfa4;
  /* 10ddcf90 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddcf94 je 0x10ddcfb0 */
  if (C.zf) goto L_10ddcfb0;
  /* 10ddcf96 jmp 0x10ddcfba */
  goto L_10ddcfba;
L_10ddcf98:;
  /* 10ddcf98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddcf9a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10ddcf9c call dword ptr [0x10e022a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022a8))), 0x10ddcfa2u);
  /* 10ddcfa2 jmp 0x10ddcfba */
  goto L_10ddcfba;
L_10ddcfa4:;
  /* 10ddcfa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddcfa6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10ddcfa8 call dword ptr [0x10e022a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022a8))), 0x10ddcfaeu);
  /* 10ddcfae jmp 0x10ddcfba */
  goto L_10ddcfba;
L_10ddcfb0:;
  /* 10ddcfb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddcfb2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10ddcfb4 call dword ptr [0x10e022a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022a8))), 0x10ddcfbau);
L_10ddcfba:;
  /* 10ddcfba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddcfbd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ddcfc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddcfc3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10ddcfc6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddcfc9 mov edx, dword ptr [eax*4 + 0x10e00f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e00f80)));
  /* 10ddcfd0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10ddcfd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddcfd9 jmp 0x10ddcff4 */
  goto L_10ddcff4;
L_10ddcfdb:;
  /* 10ddcfdb call 0x10ddb960 */
  push32(0x10ddcfe0u); f_10ddb960();
  /* 10ddcfe0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10ddcfe6 call 0x10ddb970 */
  push32(0x10ddcfebu); f_10ddb970();
  /* 10ddcfeb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ddcff1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10ddcff4:;
  /* 10ddcff4 mov esp, ebp */
  ESP = (EBP);
  /* 10ddcff6 pop ebp */
  EBP = (pop32());
  /* 10ddcff7 ret  */
  ESPCHK(0x10ddcf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d000 @ 0x10ddd000 (102 bytes, 30 insns) */
void f_10ddd000(void) {
  FTRACE(0x10ddd000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddd000 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddd001 mov ebp, esp */
  EBP = (ESP);
  /* 10ddd003 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd006 cmp eax, dword ptr [0x10e010bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e010bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd00c jae 0x10ddd04b */
  if (!C.cf) goto L_10ddd04b;
  /* 10ddd00e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd011 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10ddd014 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd017 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ddd01a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddd01d mov eax, dword ptr [ecx*4 + 0x10e00f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e00f80)));
  /* 10ddd024 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10ddd029 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddd02c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddd02e je 0x10ddd04b */
  if (C.zf) goto L_10ddd04b;
  /* 10ddd030 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd033 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10ddd036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd039 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddd03c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddd03f mov ecx, dword ptr [edx*4 + 0x10e00f80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10e00f80)));
  /* 10ddd046 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10ddd049 jmp 0x10ddd064 */
  goto L_10ddd064;
L_10ddd04b:;
  /* 10ddd04b call 0x10ddb960 */
  push32(0x10ddd050u); f_10ddb960();
  /* 10ddd050 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10ddd056 call 0x10ddb970 */
  push32(0x10ddd05bu); f_10ddb970();
  /* 10ddd05b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ddd061 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10ddd064:;
  /* 10ddd064 pop ebp */
  EBP = (pop32());
  /* 10ddd065 ret  */
  ESPCHK(0x10ddd000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d070 @ 0x10ddd070 (260 bytes, 83 insns) */
void f_10ddd070(void) {
  FTRACE(0x10ddd070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddd070 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddd071 mov ebp, esp */
  EBP = (ESP);
  /* 10ddd073 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddd076 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ddd07a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddd07d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddd080 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddd082 je 0x10ddd08d */
  if (C.zf) goto L_10ddd08d;
  /* 10ddd084 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10ddd087 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10ddd08a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10ddd08d:;
  /* 10ddd08d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddd090 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddd096 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddd098 je 0x10ddd0a2 */
  if (C.zf) goto L_10ddd0a2;
  /* 10ddd09a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10ddd09d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10ddd09f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10ddd0a2:;
  /* 10ddd0a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddd0a5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddd0ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddd0ad je 0x10ddd0b8 */
  if (C.zf) goto L_10ddd0b8;
  /* 10ddd0af mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10ddd0b2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10ddd0b5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10ddd0b8:;
  /* 10ddd0b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd0bb push eax */
  push32((uint32_t)(EAX));
  /* 10ddd0bc call dword ptr [0x10e02268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02268))), 0x10ddd0c2u);
  /* 10ddd0c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddd0c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd0c9 jne 0x10ddd0e2 */
  if (!C.zf) goto L_10ddd0e2;
  /* 10ddd0cb call dword ptr [0x10e02320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02320))), 0x10ddd0d1u);
  /* 10ddd0d1 push eax */
  push32((uint32_t)(EAX));
  /* 10ddd0d2 call 0x10ddb8c0 */
  push32(0x10ddd0d7u); f_10ddb8c0();
  /* 10ddd0d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd0da or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddd0dd jmp 0x10ddd170 */
  goto L_10ddd170;
L_10ddd0e2:;
  /* 10ddd0e2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd0e6 jne 0x10ddd0f3 */
  if (!C.zf) goto L_10ddd0f3;
  /* 10ddd0e8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10ddd0eb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10ddd0ee mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10ddd0f1 jmp 0x10ddd102 */
  goto L_10ddd102;
L_10ddd0f3:;
  /* 10ddd0f3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd0f7 jne 0x10ddd102 */
  if (!C.zf) goto L_10ddd102;
  /* 10ddd0f9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10ddd0fc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10ddd0ff mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10ddd102:;
  /* 10ddd102 call 0x10ddcc70 */
  push32(0x10ddd107u); f_10ddcc70();
  /* 10ddd107 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ddd10a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd10e jne 0x10ddd12b */
  if (!C.zf) goto L_10ddd12b;
  /* 10ddd110 call 0x10ddb960 */
  push32(0x10ddd115u); f_10ddb960();
  /* 10ddd115 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10ddd11b call 0x10ddb970 */
  push32(0x10ddd120u); f_10ddb970();
  /* 10ddd120 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ddd126 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddd129 jmp 0x10ddd170 */
  goto L_10ddd170;
L_10ddd12b:;
  /* 10ddd12b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd12e push eax */
  push32((uint32_t)(EAX));
  /* 10ddd12f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd132 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd133 call 0x10ddce60 */
  push32(0x10ddd138u); f_10ddce60();
  /* 10ddd138 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd13b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10ddd13e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10ddd141 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10ddd144 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd147 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ddd14a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd14d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10ddd150 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddd153 mov edx, dword ptr [eax*4 + 0x10e00f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e00f80)));
  /* 10ddd15a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10ddd15d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10ddd161 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd164 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd165 call 0x10ddd210 */
  push32(0x10ddd16au); f_10ddd210();
  /* 10ddd16a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd16d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10ddd170:;
  /* 10ddd170 mov esp, ebp */
  ESP = (EBP);
  /* 10ddd172 pop ebp */
  EBP = (pop32());
  /* 10ddd173 ret  */
  ESPCHK(0x10ddd070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d180 @ 0x10ddd180 (134 bytes, 44 insns) */
void f_10ddd180(void) {
  FTRACE(0x10ddd180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddd180 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddd181 mov ebp, esp */
  EBP = (ESP);
  /* 10ddd183 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd187 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ddd18a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd18d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10ddd190 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddd193 mov edx, dword ptr [eax*4 + 0x10e00f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e00f80)));
  /* 10ddd19a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd19c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ddd19f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddd1a2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd1a6 jne 0x10ddd1e1 */
  if (!C.zf) goto L_10ddd1e1;
  /* 10ddd1a8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10ddd1aa call 0x10dd7490 */
  push32(0x10ddd1afu); f_10dd7490();
  /* 10ddd1af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd1b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddd1b5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd1b9 jne 0x10ddd1d7 */
  if (!C.zf) goto L_10ddd1d7;
  /* 10ddd1bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddd1be add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd1c1 push edx */
  push32((uint32_t)(EDX));
  /* 10ddd1c2 call dword ptr [0x10e0236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0236c))), 0x10ddd1c8u);
  /* 10ddd1c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddd1cb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ddd1ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd1d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddd1d4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10ddd1d7:;
  /* 10ddd1d7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10ddd1d9 call 0x10dd7530 */
  push32(0x10ddd1deu); f_10dd7530();
  /* 10ddd1de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddd1e1:;
  /* 10ddd1e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd1e4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ddd1e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd1ea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10ddd1ed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddd1f0 mov edx, dword ptr [eax*4 + 0x10e00f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e00f80)));
  /* 10ddd1f7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10ddd1fb push eax */
  push32((uint32_t)(EAX));
  /* 10ddd1fc call dword ptr [0x10e02370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02370))), 0x10ddd202u);
  /* 10ddd202 mov esp, ebp */
  ESP = (EBP);
  /* 10ddd204 pop ebp */
  EBP = (pop32());
  /* 10ddd205 ret  */
  ESPCHK(0x10ddd180u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10ddd210 (38 bytes, 13 insns) */
void f_10ddd210(void) {
  FTRACE(0x10ddd210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddd210 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddd211 mov ebp, esp */
  EBP = (ESP);
  /* 10ddd213 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd216 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ddd219 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd21c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10ddd21f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddd222 mov edx, dword ptr [eax*4 + 0x10e00f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e00f80)));
  /* 10ddd229 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10ddd22d push eax */
  push32((uint32_t)(EAX));
  /* 10ddd22e call dword ptr [0x10e0235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0235c))), 0x10ddd234u);
  /* 10ddd234 pop ebp */
  EBP = (pop32());
  /* 10ddd235 ret  */
  ESPCHK(0x10ddd210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d240 @ 0x10ddd240 (218 bytes, 63 insns) */
void f_10ddd240(void) {
  FTRACE(0x10ddd240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddd240 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddd241 mov ebp, esp */
  EBP = (ESP);
  /* 10ddd243 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddd246 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ddd24d push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddd24f call 0x10dd7490 */
  push32(0x10ddd254u); f_10dd7490();
  /* 10ddd254 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd257 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10ddd25e jmp 0x10ddd269 */
  goto L_10ddd269;
L_10ddd260:;
  /* 10ddd260 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd263 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd266 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ddd269:;
  /* 10ddd269 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd26c cmp ecx, dword ptr [0x10e00c80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e00c80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd272 jge 0x10ddd309 */
  if ((C.sf==C.of)) goto L_10ddd309;
  /* 10ddd278 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd27b mov eax, dword ptr [0x10dff930] */
  EAX = (r32((uint32_t)(0x10dff930)));
  /* 10ddd280 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd284 je 0x10ddd304 */
  if (C.zf) goto L_10ddd304;
  /* 10ddd286 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd289 mov edx, dword ptr [0x10dff930] */
  EDX = (r32((uint32_t)(0x10dff930)));
  /* 10ddd28f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10ddd292 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ddd295 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddd29b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddd29d je 0x10ddd2c1 */
  if (C.zf) goto L_10ddd2c1;
  /* 10ddd29f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd2a2 mov eax, dword ptr [0x10dff930] */
  EAX = (r32((uint32_t)(0x10dff930)));
  /* 10ddd2a7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10ddd2aa push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd2ab call 0x10dde030 */
  push32(0x10ddd2b0u); f_10dde030();
  /* 10ddd2b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd2b3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd2b6 je 0x10ddd2c1 */
  if (C.zf) goto L_10ddd2c1;
  /* 10ddd2b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddd2bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd2be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ddd2c1:;
  /* 10ddd2c1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd2c5 jl 0x10ddd304 */
  if ((C.sf!=C.of)) goto L_10ddd304;
  /* 10ddd2c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd2ca mov ecx, dword ptr [0x10dff930] */
  ECX = (r32((uint32_t)(0x10dff930)));
  /* 10ddd2d0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10ddd2d3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd2d6 push edx */
  push32((uint32_t)(EDX));
  /* 10ddd2d7 call dword ptr [0x10e02334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02334))), 0x10ddd2ddu);
  /* 10ddd2dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddd2df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd2e2 mov ecx, dword ptr [0x10dff930] */
  ECX = (r32((uint32_t)(0x10dff930)));
  /* 10ddd2e8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10ddd2eb push edx */
  push32((uint32_t)(EDX));
  /* 10ddd2ec call 0x10dd4520 */
  push32(0x10ddd2f1u); f_10dd4520();
  /* 10ddd2f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd2f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd2f7 mov ecx, dword ptr [0x10dff930] */
  ECX = (r32((uint32_t)(0x10dff930)));
  /* 10ddd2fd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10ddd304:;
  /* 10ddd304 jmp 0x10ddd260 */
  goto L_10ddd260;
L_10ddd309:;
  /* 10ddd309 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddd30b call 0x10dd7530 */
  push32(0x10ddd310u); f_10dd7530();
  /* 10ddd310 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd313 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddd316 mov esp, ebp */
  ESP = (EBP);
  /* 10ddd318 pop ebp */
  EBP = (pop32());
  /* 10ddd319 ret  */
  ESPCHK(0x10ddd240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d320 @ 0x10ddd320 (68 bytes, 26 insns) */
void f_10ddd320(void) {
  FTRACE(0x10ddd320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddd320 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddd321 mov ebp, esp */
  EBP = (ESP);
  /* 10ddd323 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd324 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd328 jne 0x10ddd336 */
  if (!C.zf) goto L_10ddd336;
  /* 10ddd32a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddd32c call 0x10ddd490 */
  push32(0x10ddd331u); f_10ddd490();
  /* 10ddd331 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd334 jmp 0x10ddd360 */
  goto L_10ddd360;
L_10ddd336:;
  /* 10ddd336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd339 push eax */
  push32((uint32_t)(EAX));
  /* 10ddd33a call 0x10ddc8a0 */
  push32(0x10ddd33fu); f_10ddc8a0();
  /* 10ddd33f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd342 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd345 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd346 call 0x10ddd370 */
  push32(0x10ddd34bu); f_10ddd370();
  /* 10ddd34b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd34e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddd351 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd354 push edx */
  push32((uint32_t)(EDX));
  /* 10ddd355 call 0x10ddc910 */
  push32(0x10ddd35au); f_10ddc910();
  /* 10ddd35a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd35d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ddd360:;
  /* 10ddd360 mov esp, ebp */
  ESP = (EBP);
  /* 10ddd362 pop ebp */
  EBP = (pop32());
  /* 10ddd363 ret  */
  ESPCHK(0x10ddd320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d370 @ 0x10ddd370 (65 bytes, 26 insns) */
void f_10ddd370(void) {
  FTRACE(0x10ddd370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddd370 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddd371 mov ebp, esp */
  EBP = (ESP);
  /* 10ddd373 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd376 push eax */
  push32((uint32_t)(EAX));
  /* 10ddd377 call 0x10ddd3c0 */
  push32(0x10ddd37cu); f_10ddd3c0();
  /* 10ddd37c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd37f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddd381 je 0x10ddd388 */
  if (C.zf) goto L_10ddd388;
  /* 10ddd383 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddd386 jmp 0x10ddd3af */
  goto L_10ddd3af;
L_10ddd388:;
  /* 10ddd388 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd38b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ddd38e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddd394 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddd396 je 0x10ddd3ad */
  if (C.zf) goto L_10ddd3ad;
  /* 10ddd398 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd39b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ddd39e push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd39f call 0x10dde180 */
  push32(0x10ddd3a4u); f_10dde180();
  /* 10ddd3a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd3a7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ddd3a9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddd3ab jmp 0x10ddd3af */
  goto L_10ddd3af;
L_10ddd3ad:;
  /* 10ddd3ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ddd3af:;
  /* 10ddd3af pop ebp */
  EBP = (pop32());
  /* 10ddd3b0 ret  */
  ESPCHK(0x10ddd370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3c0 @ 0x10ddd3c0 (183 bytes, 62 insns) */
void f_10ddd3c0(void) {
  FTRACE(0x10ddd3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddd3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddd3c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ddd3c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddd3c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ddd3cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd3d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ddd3d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd3d6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ddd3d9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddd3dc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd3df jne 0x10ddd45b */
  if (!C.zf) goto L_10ddd45b;
  /* 10ddd3e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd3e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ddd3e7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddd3ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddd3ef je 0x10ddd45b */
  if (C.zf) goto L_10ddd45b;
  /* 10ddd3f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd3f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd3f7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10ddd3f9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddd3fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ddd3ff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd403 jle 0x10ddd45b */
  if ((C.zf||C.sf!=C.of)) goto L_10ddd45b;
  /* 10ddd405 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddd408 push edx */
  push32((uint32_t)(EDX));
  /* 10ddd409 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd40c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ddd40f push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd410 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd413 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ddd416 push eax */
  push32((uint32_t)(EAX));
  /* 10ddd417 call 0x10ddc330 */
  push32(0x10ddd41cu); f_10ddc330();
  /* 10ddd41c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd41f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd422 jne 0x10ddd445 */
  if (!C.zf) goto L_10ddd445;
  /* 10ddd424 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd427 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ddd42a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddd430 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddd432 je 0x10ddd443 */
  if (C.zf) goto L_10ddd443;
  /* 10ddd434 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd437 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ddd43a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10ddd43d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd440 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10ddd443:;
  /* 10ddd443 jmp 0x10ddd45b */
  goto L_10ddd45b;
L_10ddd445:;
  /* 10ddd445 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd448 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ddd44b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddd44e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd451 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10ddd454 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ddd45b:;
  /* 10ddd45b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd45e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd461 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ddd464 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ddd466 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddd469 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10ddd470 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddd473 mov esp, ebp */
  ESP = (EBP);
  /* 10ddd475 pop ebp */
  EBP = (pop32());
  /* 10ddd476 ret  */
  ESPCHK(0x10ddd3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d480 @ 0x10ddd480 (15 bytes, 7 insns) */
void f_10ddd480(void) {
  FTRACE(0x10ddd480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddd480 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddd481 mov ebp, esp */
  EBP = (ESP);
  /* 10ddd483 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddd485 call 0x10ddd490 */
  push32(0x10ddd48au); f_10ddd490();
  /* 10ddd48a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd48d pop ebp */
  EBP = (pop32());
  /* 10ddd48e ret  */
  ESPCHK(0x10ddd480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d490 @ 0x10ddd490 (319 bytes, 94 insns) */
void f_10ddd490(void) {
  FTRACE(0x10ddd490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddd490 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddd491 mov ebp, esp */
  EBP = (ESP);
  /* 10ddd493 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddd496 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ddd49d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ddd4a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddd4a6 call 0x10dd7490 */
  push32(0x10ddd4abu); f_10dd7490();
  /* 10ddd4ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd4ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ddd4b5 jmp 0x10ddd4c0 */
  goto L_10ddd4c0;
L_10ddd4b7:;
  /* 10ddd4b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddd4ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd4bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10ddd4c0:;
  /* 10ddd4c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddd4c3 cmp ecx, dword ptr [0x10e00c80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e00c80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd4c9 jge 0x10ddd5b3 */
  if ((C.sf==C.of)) goto L_10ddd5b3;
  /* 10ddd4cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddd4d2 mov eax, dword ptr [0x10dff930] */
  EAX = (r32((uint32_t)(0x10dff930)));
  /* 10ddd4d7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd4db je 0x10ddd5ae */
  if (C.zf) goto L_10ddd5ae;
  /* 10ddd4e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddd4e4 mov edx, dword ptr [0x10dff930] */
  EDX = (r32((uint32_t)(0x10dff930)));
  /* 10ddd4ea mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10ddd4ed mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ddd4f0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddd4f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddd4f8 je 0x10ddd5ae */
  if (C.zf) goto L_10ddd5ae;
  /* 10ddd4fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddd501 mov eax, dword ptr [0x10dff930] */
  EAX = (r32((uint32_t)(0x10dff930)));
  /* 10ddd506 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10ddd509 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd50a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddd50d push edx */
  push32((uint32_t)(EDX));
  /* 10ddd50e call 0x10ddc8e0 */
  push32(0x10ddd513u); f_10ddc8e0();
  /* 10ddd513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd516 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddd519 mov ecx, dword ptr [0x10dff930] */
  ECX = (r32((uint32_t)(0x10dff930)));
  /* 10ddd51f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10ddd522 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10ddd525 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddd52a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddd52c je 0x10ddd595 */
  if (C.zf) goto L_10ddd595;
  /* 10ddd52e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd532 jne 0x10ddd559 */
  if (!C.zf) goto L_10ddd559;
  /* 10ddd534 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddd537 mov edx, dword ptr [0x10dff930] */
  EDX = (r32((uint32_t)(0x10dff930)));
  /* 10ddd53d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10ddd540 push eax */
  push32((uint32_t)(EAX));
  /* 10ddd541 call 0x10ddd370 */
  push32(0x10ddd546u); f_10ddd370();
  /* 10ddd546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd549 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd54c je 0x10ddd557 */
  if (C.zf) goto L_10ddd557;
  /* 10ddd54e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddd551 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd554 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ddd557:;
  /* 10ddd557 jmp 0x10ddd595 */
  goto L_10ddd595;
L_10ddd559:;
  /* 10ddd559 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd55d jne 0x10ddd595 */
  if (!C.zf) goto L_10ddd595;
  /* 10ddd55f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddd562 mov eax, dword ptr [0x10dff930] */
  EAX = (r32((uint32_t)(0x10dff930)));
  /* 10ddd567 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10ddd56a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ddd56d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddd570 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddd572 je 0x10ddd595 */
  if (C.zf) goto L_10ddd595;
  /* 10ddd574 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddd577 mov ecx, dword ptr [0x10dff930] */
  ECX = (r32((uint32_t)(0x10dff930)));
  /* 10ddd57d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10ddd580 push edx */
  push32((uint32_t)(EDX));
  /* 10ddd581 call 0x10ddd370 */
  push32(0x10ddd586u); f_10ddd370();
  /* 10ddd586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd589 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd58c jne 0x10ddd595 */
  if (!C.zf) goto L_10ddd595;
  /* 10ddd58e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10ddd595:;
  /* 10ddd595 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddd598 mov ecx, dword ptr [0x10dff930] */
  ECX = (r32((uint32_t)(0x10dff930)));
  /* 10ddd59e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10ddd5a1 push edx */
  push32((uint32_t)(EDX));
  /* 10ddd5a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddd5a5 push eax */
  push32((uint32_t)(EAX));
  /* 10ddd5a6 call 0x10ddc950 */
  push32(0x10ddd5abu); f_10ddc950();
  /* 10ddd5ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddd5ae:;
  /* 10ddd5ae jmp 0x10ddd4b7 */
  goto L_10ddd4b7;
L_10ddd5b3:;
  /* 10ddd5b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddd5b5 call 0x10dd7530 */
  push32(0x10ddd5bau); f_10dd7530();
  /* 10ddd5ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd5bd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd5c1 jne 0x10ddd5c8 */
  if (!C.zf) goto L_10ddd5c8;
  /* 10ddd5c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddd5c6 jmp 0x10ddd5cb */
  goto L_10ddd5cb;
L_10ddd5c8:;
  /* 10ddd5c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10ddd5cb:;
  /* 10ddd5cb mov esp, ebp */
  ESP = (EBP);
  /* 10ddd5cd pop ebp */
  EBP = (pop32());
  /* 10ddd5ce ret  */
  ESPCHK(0x10ddd490u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10ddd5d0 (15 bytes, 7 insns) */
void f_10ddd5d0(void) {
  FTRACE(0x10ddd5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddd5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddd5d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ddd5d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddd5d5 call 0x10dd2a00 */
  push32(0x10ddd5dau); f_10dd2a00();
  /* 10ddd5da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd5dd pop ebp */
  EBP = (pop32());
  /* 10ddd5de ret  */
  ESPCHK(0x10ddd5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5e0 @ 0x10ddd5e0 (1007 bytes, 269 insns) */
void f_10ddd5e0(void) {
  FTRACE(0x10ddd5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddd5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddd5e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ddd5e3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddd5e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd5ed jl 0x10ddd5f5 */
  if ((C.sf!=C.of)) goto L_10ddd5f5;
  /* 10ddd5ef cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd5f3 jle 0x10ddd5fc */
  if ((C.zf||C.sf!=C.of)) goto L_10ddd5fc;
L_10ddd5f5:;
  /* 10ddd5f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddd5f7 jmp 0x10ddd9cb */
  goto L_10ddd9cb;
L_10ddd5fc:;
  /* 10ddd5fc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ddd5fe call 0x10dd7490 */
  push32(0x10ddd603u); f_10dd7490();
  /* 10ddd603 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd606 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ddd60d mov eax, dword ptr [0x10dff91c] */
  EAX = (r32((uint32_t)(0x10dff91c)));
  /* 10ddd612 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd615 mov dword ptr [0x10dff91c], eax */
  w32((uint32_t)(0x10dff91c), (EAX));
L_10ddd61a:;
  /* 10ddd61a cmp dword ptr [0x10dff92c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff92c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd621 je 0x10ddd62d */
  if (C.zf) goto L_10ddd62d;
  /* 10ddd623 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddd625 call dword ptr [0x10e022a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022a4))), 0x10ddd62bu);
  /* 10ddd62b jmp 0x10ddd61a */
  goto L_10ddd61a;
L_10ddd62d:;
  /* 10ddd62d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd631 je 0x10ddd671 */
  if (C.zf) goto L_10ddd671;
  /* 10ddd633 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd637 je 0x10ddd651 */
  if (C.zf) goto L_10ddd651;
  /* 10ddd639 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddd63c push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd63d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd640 push edx */
  push32((uint32_t)(EDX));
  /* 10ddd641 call 0x10ddd9d0 */
  push32(0x10ddd646u); f_10ddd9d0();
  /* 10ddd646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd649 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10ddd64f jmp 0x10ddd663 */
  goto L_10ddd663;
L_10ddd651:;
  /* 10ddd651 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd654 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddd657 mov ecx, dword ptr [eax + 0x10dfe4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10dfe4dc)));
  /* 10ddd65d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10ddd663:;
  /* 10ddd663 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10ddd669 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ddd66c jmp 0x10ddd9ab */
  goto L_10ddd9ab;
L_10ddd671:;
  /* 10ddd671 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10ddd678 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ddd67f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd683 je 0x10ddd9a3 */
  if (C.zf) goto L_10ddd9a3;
  /* 10ddd689 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddd68c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ddd68f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd692 jne 0x10ddd8b4 */
  if (!C.zf) goto L_10ddd8b4;
  /* 10ddd698 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddd69b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10ddd69f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd6a2 jne 0x10ddd8b4 */
  if (!C.zf) goto L_10ddd8b4;
  /* 10ddd6a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddd6ab movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10ddd6af cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd6b2 jne 0x10ddd8b4 */
  if (!C.zf) goto L_10ddd8b4;
  /* 10ddd6b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddd6bb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10ddd6c1:;
  /* 10ddd6c1 push 0x10dfb1ac */
  push32((uint32_t)(0x10dfb1acu));
  /* 10ddd6c6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ddd6cc push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd6cd call 0x10ddf830 */
  push32(0x10ddd6d2u); f_10ddf830();
  /* 10ddd6d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd6d5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10ddd6db cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd6e2 je 0x10ddd70d */
  if (C.zf) goto L_10ddd70d;
  /* 10ddd6e4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ddd6ea sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddd6f0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10ddd6f6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd6fd je 0x10ddd70d */
  if (C.zf) goto L_10ddd70d;
  /* 10ddd6ff mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ddd705 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ddd708 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd70b jne 0x10ddd733 */
  if (!C.zf) goto L_10ddd733;
L_10ddd70d:;
  /* 10ddd70d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd711 je 0x10ddd72c */
  if (C.zf) goto L_10ddd72c;
  /* 10ddd713 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ddd715 call 0x10dd7530 */
  push32(0x10ddd71au); f_10dd7530();
  /* 10ddd71a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd71d mov edx, dword ptr [0x10dff91c] */
  EDX = (r32((uint32_t)(0x10dff91c)));
  /* 10ddd723 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddd726 mov dword ptr [0x10dff91c], edx */
  w32((uint32_t)(0x10dff91c), (EDX));
L_10ddd72c:;
  /* 10ddd72c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddd72e jmp 0x10ddd9cb */
  goto L_10ddd9cb;
L_10ddd733:;
  /* 10ddd733 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10ddd73a jmp 0x10ddd745 */
  goto L_10ddd745;
L_10ddd73c:;
  /* 10ddd73c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ddd73f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd742 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10ddd745:;
  /* 10ddd745 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd749 jg 0x10ddd793 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ddd793;
  /* 10ddd74b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10ddd751 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd752 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ddd758 push edx */
  push32((uint32_t)(EDX));
  /* 10ddd759 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ddd75c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddd75f mov ecx, dword ptr [eax + 0x10dfe4d8] */
  ECX = (r32((uint32_t)(EAX + 0x10dfe4d8)));
  /* 10ddd765 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd766 call 0x10ddf7f0 */
  push32(0x10ddd76bu); f_10ddf7f0();
  /* 10ddd76b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd76e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddd770 jne 0x10ddd791 */
  if (!C.zf) goto L_10ddd791;
  /* 10ddd772 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ddd775 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddd778 mov eax, dword ptr [edx + 0x10dfe4d8] */
  EAX = (r32((uint32_t)(EDX + 0x10dfe4d8)));
  /* 10ddd77e push eax */
  push32((uint32_t)(EAX));
  /* 10ddd77f call 0x10dd68c0 */
  push32(0x10ddd784u); f_10dd68c0();
  /* 10ddd784 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd787 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd78d jne 0x10ddd791 */
  if (!C.zf) goto L_10ddd791;
  /* 10ddd78f jmp 0x10ddd793 */
  goto L_10ddd793;
L_10ddd791:;
  /* 10ddd791 jmp 0x10ddd73c */
  goto L_10ddd73c;
L_10ddd793:;
  /* 10ddd793 push 0x10dfb1a8 */
  push32((uint32_t)(0x10dfb1a8u));
  /* 10ddd798 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ddd79e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd7a1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10ddd7a7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ddd7ad push edx */
  push32((uint32_t)(EDX));
  /* 10ddd7ae call 0x10ddf7b0 */
  push32(0x10ddd7b3u); f_10ddf7b0();
  /* 10ddd7b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd7b6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10ddd7bc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd7c3 jne 0x10ddd7f9 */
  if (!C.zf) goto L_10ddd7f9;
  /* 10ddd7c5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ddd7cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ddd7ce cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd7d1 je 0x10ddd7f9 */
  if (C.zf) goto L_10ddd7f9;
  /* 10ddd7d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd7d7 je 0x10ddd7f2 */
  if (C.zf) goto L_10ddd7f2;
  /* 10ddd7d9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ddd7db call 0x10dd7530 */
  push32(0x10ddd7e0u); f_10dd7530();
  /* 10ddd7e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd7e3 mov edx, dword ptr [0x10dff91c] */
  EDX = (r32((uint32_t)(0x10dff91c)));
  /* 10ddd7e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddd7ec mov dword ptr [0x10dff91c], edx */
  w32((uint32_t)(0x10dff91c), (EDX));
L_10ddd7f2:;
  /* 10ddd7f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddd7f4 jmp 0x10ddd9cb */
  goto L_10ddd9cb;
L_10ddd7f9:;
  /* 10ddd7f9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd7fd jg 0x10ddd84a */
  if ((!C.zf&&C.sf==C.of)) goto L_10ddd84a;
  /* 10ddd7ff mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10ddd805 push eax */
  push32((uint32_t)(EAX));
  /* 10ddd806 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ddd80c push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd80d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10ddd813 push edx */
  push32((uint32_t)(EDX));
  /* 10ddd814 call 0x10dd72b0 */
  push32(0x10ddd819u); f_10dd72b0();
  /* 10ddd819 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd81c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10ddd822 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10ddd82a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10ddd830 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd831 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ddd834 push edx */
  push32((uint32_t)(EDX));
  /* 10ddd835 call 0x10ddd9d0 */
  push32(0x10ddd83au); f_10ddd9d0();
  /* 10ddd83a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd83d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddd83f je 0x10ddd84a */
  if (C.zf) goto L_10ddd84a;
  /* 10ddd841 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddd844 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd847 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10ddd84a:;
  /* 10ddd84a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ddd850 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd856 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10ddd85c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ddd862 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ddd865 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddd867 je 0x10ddd878 */
  if (C.zf) goto L_10ddd878;
  /* 10ddd869 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ddd86f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd872 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10ddd878:;
  /* 10ddd878 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ddd87e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ddd881 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddd883 jne 0x10ddd6c1 */
  if (!C.zf) goto L_10ddd6c1;
  /* 10ddd889 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd88d je 0x10ddd89c */
  if (C.zf) goto L_10ddd89c;
  /* 10ddd88f call 0x10dddb70 */
  push32(0x10ddd894u); f_10dddb70();
  /* 10ddd894 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10ddd89a jmp 0x10ddd8a6 */
  goto L_10ddd8a6;
L_10ddd89c:;
  /* 10ddd89c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10ddd8a6:;
  /* 10ddd8a6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10ddd8ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddd8af jmp 0x10ddd9a1 */
  goto L_10ddd9a1;
L_10ddd8b4:;
  /* 10ddd8b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd8b7 push edx */
  push32((uint32_t)(EDX));
  /* 10ddd8b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddd8ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddd8bc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10ddd8c2 push eax */
  push32((uint32_t)(EAX));
  /* 10ddd8c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddd8c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd8c7 call 0x10dddc70 */
  push32(0x10ddd8ccu); f_10dddc70();
  /* 10ddd8cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd8cf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ddd8d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd8d6 je 0x10ddd9a1 */
  if (C.zf) goto L_10ddd9a1;
  /* 10ddd8dc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ddd8e3 jmp 0x10ddd8ee */
  goto L_10ddd8ee;
L_10ddd8e5:;
  /* 10ddd8e5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ddd8e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd8eb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10ddd8ee:;
  /* 10ddd8ee cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd8f2 jg 0x10ddd950 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ddd950;
  /* 10ddd8f4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd8f8 je 0x10ddd94e */
  if (C.zf) goto L_10ddd94e;
  /* 10ddd8fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ddd8fd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddd900 mov ecx, dword ptr [eax + 0x10dfe4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10dfe4dc)));
  /* 10ddd906 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd907 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10ddd90d push edx */
  push32((uint32_t)(EDX));
  /* 10ddd90e call 0x10ddf720 */
  push32(0x10ddd913u); f_10ddf720();
  /* 10ddd913 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd916 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddd918 je 0x10ddd945 */
  if (C.zf) goto L_10ddd945;
  /* 10ddd91a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10ddd920 push eax */
  push32((uint32_t)(EAX));
  /* 10ddd921 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ddd924 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd925 call 0x10ddd9d0 */
  push32(0x10ddd92au); f_10ddd9d0();
  /* 10ddd92a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd92d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddd92f je 0x10ddd93c */
  if (C.zf) goto L_10ddd93c;
  /* 10ddd931 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddd934 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd937 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ddd93a jmp 0x10ddd943 */
  goto L_10ddd943;
L_10ddd93c:;
  /* 10ddd93c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10ddd943:;
  /* 10ddd943 jmp 0x10ddd94e */
  goto L_10ddd94e;
L_10ddd945:;
  /* 10ddd945 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddd948 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd94b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10ddd94e:;
  /* 10ddd94e jmp 0x10ddd8e5 */
  goto L_10ddd8e5;
L_10ddd950:;
  /* 10ddd950 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd954 je 0x10ddd97b */
  if (C.zf) goto L_10ddd97b;
  /* 10ddd956 call 0x10dddb70 */
  push32(0x10ddd95bu); f_10dddb70();
  /* 10ddd95b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ddd95e push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddd960 mov ecx, dword ptr [0x10dfe4dc] */
  ECX = (r32((uint32_t)(0x10dfe4dc)));
  /* 10ddd966 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd967 call 0x10dd4520 */
  push32(0x10ddd96cu); f_10dd4520();
  /* 10ddd96c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd96f mov dword ptr [0x10dfe4dc], 0 */
  w32((uint32_t)(0x10dfe4dc), (0x0u));
  /* 10ddd979 jmp 0x10ddd9a1 */
  goto L_10ddd9a1;
L_10ddd97b:;
  /* 10ddd97b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd97f je 0x10ddd98e */
  if (C.zf) goto L_10ddd98e;
  /* 10ddd981 call 0x10dddb70 */
  push32(0x10ddd986u); f_10dddb70();
  /* 10ddd986 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10ddd98c jmp 0x10ddd998 */
  goto L_10ddd998;
L_10ddd98e:;
  /* 10ddd98e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10ddd998:;
  /* 10ddd998 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10ddd99e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10ddd9a1:;
  /* 10ddd9a1 jmp 0x10ddd9ab */
  goto L_10ddd9ab;
L_10ddd9a3:;
  /* 10ddd9a3 call 0x10dddb70 */
  push32(0x10ddd9a8u); f_10dddb70();
  /* 10ddd9a8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ddd9ab:;
  /* 10ddd9ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddd9af je 0x10ddd9c8 */
  if (C.zf) goto L_10ddd9c8;
  /* 10ddd9b1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ddd9b3 call 0x10dd7530 */
  push32(0x10ddd9b8u); f_10dd7530();
  /* 10ddd9b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd9bb mov eax, dword ptr [0x10dff91c] */
  EAX = (r32((uint32_t)(0x10dff91c)));
  /* 10ddd9c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddd9c3 mov dword ptr [0x10dff91c], eax */
  w32((uint32_t)(0x10dff91c), (EAX));
L_10ddd9c8:;
  /* 10ddd9c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10ddd9cb:;
  /* 10ddd9cb mov esp, ebp */
  ESP = (EBP);
  /* 10ddd9cd pop ebp */
  EBP = (pop32());
  /* 10ddd9ce ret  */
  ESPCHK(0x10ddd5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9d0 @ 0x10ddd9d0 (403 bytes, 117 insns) */
void f_10ddd9d0(void) {
  FTRACE(0x10ddd9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddd9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddd9d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ddd9d3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddd9d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddd9dc push eax */
  push32((uint32_t)(EAX));
  /* 10ddd9dd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10ddd9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd9e4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10ddd9ea push edx */
  push32((uint32_t)(EDX));
  /* 10ddd9eb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10ddd9f1 push eax */
  push32((uint32_t)(EAX));
  /* 10ddd9f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddd9f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddd9f6 call 0x10dddc70 */
  push32(0x10ddd9fbu); f_10dddc70();
  /* 10ddd9fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddd9fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddda00 jne 0x10ddda09 */
  if (!C.zf) goto L_10ddda09;
  /* 10ddda02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddda04 jmp 0x10dddb5f */
  goto L_10dddb5f;
L_10ddda09:;
  /* 10ddda09 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10ddda0e push 0x10dfb1b0 */
  push32((uint32_t)(0x10dfb1b0u));
  /* 10ddda13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddda15 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10ddda1b push edx */
  push32((uint32_t)(EDX));
  /* 10ddda1c call 0x10dd68c0 */
  push32(0x10ddda21u); f_10dd68c0();
  /* 10ddda21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddda24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddda27 push eax */
  push32((uint32_t)(EAX));
  /* 10ddda28 call 0x10dd3a90 */
  push32(0x10ddda2du); f_10dd3a90();
  /* 10ddda2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddda30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ddda33 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddda37 jne 0x10ddda40 */
  if (!C.zf) goto L_10ddda40;
  /* 10ddda39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddda3b jmp 0x10dddb5f */
  goto L_10dddb5f;
L_10ddda40:;
  /* 10ddda40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddda43 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddda46 mov ecx, dword ptr [eax + 0x10dfe4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10dfe4dc)));
  /* 10ddda4c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ddda4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddda52 mov eax, dword ptr [edx*4 + 0x10dff798] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10dff798)));
  /* 10ddda59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddda5c push 6 */
  push32((uint32_t)(0x6u));
  /* 10ddda5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddda61 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddda64 add ecx, 0x10dff7e8 */
  { uint32_t _a=(ECX),_b=(0x10dff7e8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddda6a push ecx */
  push32((uint32_t)(ECX));
  /* 10ddda6b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10ddda6e push edx */
  push32((uint32_t)(EDX));
  /* 10ddda6f call 0x10dda370 */
  push32(0x10ddda74u); f_10dda370();
  /* 10ddda74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddda77 mov eax, dword ptr [0x10dff7b0] */
  EAX = (r32((uint32_t)(0x10dff7b0)));
  /* 10ddda7c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ddda7f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10ddda85 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddda86 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddda89 push edx */
  push32((uint32_t)(EDX));
  /* 10ddda8a call 0x10dd6a40 */
  push32(0x10ddda8fu); f_10dd6a40();
  /* 10ddda8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddda92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddda95 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ddda98 mov dword ptr [ecx + 0x10dfe4dc], eax */
  w32((uint32_t)(ECX + 0x10dfe4dc), (EAX));
  /* 10ddda9e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10dddaa4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dddaaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddaad mov dword ptr [eax*4 + 0x10dff798], edx */
  w32((uint32_t)(EAX*4 + 0x10dff798), (EDX));
  /* 10dddab4 push 6 */
  push32((uint32_t)(0x6u));
  /* 10dddab6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10dddabc push ecx */
  push32((uint32_t)(ECX));
  /* 10dddabd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddac0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dddac3 add edx, 0x10dff7e8 */
  { uint32_t _a=(EDX),_b=(0x10dff7e8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddac9 push edx */
  push32((uint32_t)(EDX));
  /* 10dddaca call 0x10dda370 */
  push32(0x10dddacfu); f_10dda370();
  /* 10dddacf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddad2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddad6 jne 0x10dddae3 */
  if (!C.zf) goto L_10dddae3;
  /* 10dddad8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10dddade mov dword ptr [0x10dff7b0], eax */
  w32((uint32_t)(0x10dff7b0), (EAX));
L_10dddae3:;
  /* 10dddae3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddae7 jne 0x10dddaf5 */
  if (!C.zf) goto L_10dddaf5;
  /* 10dddae9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10dddaef mov dword ptr [0x10dff7b4], ecx */
  w32((uint32_t)(0x10dff7b4), (ECX));
L_10dddaf5:;
  /* 10dddaf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddaf8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dddafb call dword ptr [edx + 0x10dfe4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10dfe4e0))), 0x10dddb01u);
  /* 10dddb01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dddb03 je 0x10dddb3c */
  if (C.zf) goto L_10dddb3c;
  /* 10dddb05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddb08 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dddb0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dddb0e mov dword ptr [eax + 0x10dfe4dc], ecx */
  w32((uint32_t)(EAX + 0x10dfe4dc), (ECX));
  /* 10dddb14 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dddb16 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dddb19 push edx */
  push32((uint32_t)(EDX));
  /* 10dddb1a call 0x10dd4520 */
  push32(0x10dddb1fu); f_10dd4520();
  /* 10dddb1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddb22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddb25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dddb28 mov dword ptr [eax*4 + 0x10dff798], ecx */
  w32((uint32_t)(EAX*4 + 0x10dff798), (ECX));
  /* 10dddb2f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dddb32 mov dword ptr [0x10dff7b0], edx */
  w32((uint32_t)(0x10dff7b0), (EDX));
  /* 10dddb38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dddb3a jmp 0x10dddb5f */
  goto L_10dddb5f;
L_10dddb3c:;
  /* 10dddb3c cmp dword ptr [ebp - 0xc], 0x10dfe3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10dfe3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddb43 je 0x10dddb53 */
  if (C.zf) goto L_10dddb53;
  /* 10dddb45 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dddb47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dddb4a push eax */
  push32((uint32_t)(EAX));
  /* 10dddb4b call 0x10dd4520 */
  push32(0x10dddb50u); f_10dd4520();
  /* 10dddb50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dddb53:;
  /* 10dddb53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddb56 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dddb59 mov eax, dword ptr [ecx + 0x10dfe4dc] */
  EAX = (r32((uint32_t)(ECX + 0x10dfe4dc)));
L_10dddb5f:;
  /* 10dddb5f mov esp, ebp */
  ESP = (EBP);
  /* 10dddb61 pop ebp */
  EBP = (pop32());
  /* 10dddb62 ret  */
  ESPCHK(0x10ddd9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db70 @ 0x10dddb70 (256 bytes, 72 insns) */
void f_10dddb70(void) {
  FTRACE(0x10dddb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dddb70 push ebp */
  push32((uint32_t)(EBP));
  /* 10dddb71 mov ebp, esp */
  EBP = (ESP);
  /* 10dddb73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dddb76 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10dddb7d cmp dword ptr [0x10dfe4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dfe4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddb84 jne 0x10dddba4 */
  if (!C.zf) goto L_10dddba4;
  /* 10dddb86 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10dddb8b push 0x10dfb1b0 */
  push32((uint32_t)(0x10dfb1b0u));
  /* 10dddb90 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dddb92 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10dddb97 call 0x10dd3a90 */
  push32(0x10dddb9cu); f_10dd3a90();
  /* 10dddb9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddb9f mov dword ptr [0x10dfe4dc], eax */
  w32((uint32_t)(0x10dfe4dc), (EAX));
L_10dddba4:;
  /* 10dddba4 mov eax, dword ptr [0x10dfe4dc] */
  EAX = (r32((uint32_t)(0x10dfe4dc)));
  /* 10dddba9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10dddbac mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10dddbb3 jmp 0x10dddbbe */
  goto L_10dddbbe;
L_10dddbb5:;
  /* 10dddbb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dddbb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddbbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10dddbbe:;
  /* 10dddbbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dddbc1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dddbc4 mov eax, dword ptr [edx + 0x10dfe4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10dfe4dc)));
  /* 10dddbca push eax */
  push32((uint32_t)(EAX));
  /* 10dddbcb push 0x10dfb1bc */
  push32((uint32_t)(0x10dfb1bcu));
  /* 10dddbd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dddbd3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dddbd6 mov edx, dword ptr [ecx + 0x10dfe4d8] */
  EDX = (r32((uint32_t)(ECX + 0x10dfe4d8)));
  /* 10dddbdc push edx */
  push32((uint32_t)(EDX));
  /* 10dddbdd push 3 */
  push32((uint32_t)(0x3u));
  /* 10dddbdf mov eax, dword ptr [0x10dfe4dc] */
  EAX = (r32((uint32_t)(0x10dfe4dc)));
  /* 10dddbe4 push eax */
  push32((uint32_t)(EAX));
  /* 10dddbe5 call 0x10ddde10 */
  push32(0x10dddbeau); f_10ddde10();
  /* 10dddbea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddbed cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddbf1 jge 0x10dddc39 */
  if ((C.sf==C.of)) goto L_10dddc39;
  /* 10dddbf3 push 0x10dfb1a8 */
  push32((uint32_t)(0x10dfb1a8u));
  /* 10dddbf8 mov ecx, dword ptr [0x10dfe4dc] */
  ECX = (r32((uint32_t)(0x10dfe4dc)));
  /* 10dddbfe push ecx */
  push32((uint32_t)(ECX));
  /* 10dddbff call 0x10dd6a50 */
  push32(0x10dddc04u); f_10dd6a50();
  /* 10dddc04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddc07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dddc0a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddc0d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dddc10 mov eax, dword ptr [edx + 0x10dfe4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10dfe4dc)));
  /* 10dddc16 push eax */
  push32((uint32_t)(EAX));
  /* 10dddc17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dddc1a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dddc1d mov edx, dword ptr [ecx + 0x10dfe4dc] */
  EDX = (r32((uint32_t)(ECX + 0x10dfe4dc)));
  /* 10dddc23 push edx */
  push32((uint32_t)(EDX));
  /* 10dddc24 call 0x10ddf720 */
  push32(0x10dddc29u); f_10ddf720();
  /* 10dddc29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddc2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dddc2e je 0x10dddc37 */
  if (C.zf) goto L_10dddc37;
  /* 10dddc30 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10dddc37:;
  /* 10dddc37 jmp 0x10dddc67 */
  goto L_10dddc67;
L_10dddc39:;
  /* 10dddc39 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddc3d jne 0x10dddc46 */
  if (!C.zf) goto L_10dddc46;
  /* 10dddc3f mov eax, dword ptr [0x10dfe4dc] */
  EAX = (r32((uint32_t)(0x10dfe4dc)));
  /* 10dddc44 jmp 0x10dddc6c */
  goto L_10dddc6c;
L_10dddc46:;
  /* 10dddc46 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dddc48 mov eax, dword ptr [0x10dfe4dc] */
  EAX = (r32((uint32_t)(0x10dfe4dc)));
  /* 10dddc4d push eax */
  push32((uint32_t)(EAX));
  /* 10dddc4e call 0x10dd4520 */
  push32(0x10dddc53u); f_10dd4520();
  /* 10dddc53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddc56 mov dword ptr [0x10dfe4dc], 0 */
  w32((uint32_t)(0x10dfe4dc), (0x0u));
  /* 10dddc60 mov eax, dword ptr [0x10dfe4f4] */
  EAX = (r32((uint32_t)(0x10dfe4f4)));
  /* 10dddc65 jmp 0x10dddc6c */
  goto L_10dddc6c;
L_10dddc67:;
  /* 10dddc67 jmp 0x10dddbb5 */
  goto L_10dddbb5;
L_10dddc6c:;
  /* 10dddc6c mov esp, ebp */
  ESP = (EBP);
  /* 10dddc6e pop ebp */
  EBP = (pop32());
  /* 10dddc6f ret  */
  ESPCHK(0x10dddb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc70 @ 0x10dddc70 (388 bytes, 115 insns) */
void f_10dddc70(void) {
  FTRACE(0x10dddc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dddc70 push ebp */
  push32((uint32_t)(EBP));
  /* 10dddc71 mov ebp, esp */
  EBP = (ESP);
  /* 10dddc73 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dddc79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddc7d jne 0x10dddc86 */
  if (!C.zf) goto L_10dddc86;
  /* 10dddc7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dddc81 jmp 0x10ddddf0 */
  goto L_10ddddf0;
L_10dddc86:;
  /* 10dddc86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddc89 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10dddc8c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddc8f jne 0x10dddce0 */
  if (!C.zf) goto L_10dddce0;
  /* 10dddc91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddc94 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10dddc98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dddc9a jne 0x10dddce0 */
  if (!C.zf) goto L_10dddce0;
  /* 10dddc9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dddc9f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10dddca2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dddca5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10dddca9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddcad je 0x10dddcc9 */
  if (C.zf) goto L_10dddcc9;
  /* 10dddcaf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dddcb2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10dddcb7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dddcba mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10dddcc0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dddcc3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10dddcc9:;
  /* 10dddcc9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddccd je 0x10dddcd8 */
  if (C.zf) goto L_10dddcd8;
  /* 10dddccf mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dddcd2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10dddcd8:;
  /* 10dddcd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dddcdb jmp 0x10ddddf0 */
  goto L_10ddddf0;
L_10dddce0:;
  /* 10dddce0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddce3 push ecx */
  push32((uint32_t)(ECX));
  /* 10dddce4 push 0x10dfe450 */
  push32((uint32_t)(0x10dfe450u));
  /* 10dddce9 call 0x10ddf720 */
  push32(0x10dddceeu); f_10ddf720();
  /* 10dddcee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddcf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dddcf3 je 0x10dddda8 */
  if (C.zf) goto L_10dddda8;
  /* 10dddcf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddcfc push edx */
  push32((uint32_t)(EDX));
  /* 10dddcfd push 0x10dfe3cc */
  push32((uint32_t)(0x10dfe3ccu));
  /* 10dddd02 call 0x10ddf720 */
  push32(0x10dddd07u); f_10ddf720();
  /* 10dddd07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddd0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dddd0c je 0x10dddda8 */
  if (C.zf) goto L_10dddda8;
  /* 10dddd12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddd15 push eax */
  push32((uint32_t)(EAX));
  /* 10dddd16 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10dddd1c push ecx */
  push32((uint32_t)(ECX));
  /* 10dddd1d call 0x10ddde60 */
  push32(0x10dddd22u); f_10ddde60();
  /* 10dddd22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddd25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dddd27 je 0x10dddd30 */
  if (C.zf) goto L_10dddd30;
  /* 10dddd29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dddd2b jmp 0x10ddddf0 */
  goto L_10ddddf0;
L_10dddd30:;
  /* 10dddd30 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10dddd36 push edx */
  push32((uint32_t)(EDX));
  /* 10dddd37 push 0x10dff7c0 */
  push32((uint32_t)(0x10dff7c0u));
  /* 10dddd3c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10dddd42 push eax */
  push32((uint32_t)(EAX));
  /* 10dddd43 call 0x10ddf870 */
  push32(0x10dddd48u); f_10ddf870();
  /* 10dddd48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddd4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dddd4d jne 0x10dddd56 */
  if (!C.zf) goto L_10dddd56;
  /* 10dddd4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dddd51 jmp 0x10ddddf0 */
  goto L_10ddddf0;
L_10dddd56:;
  /* 10dddd56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dddd58 mov cx, word ptr [0x10dff7c4] */
  CX = (r16((uint32_t)(0x10dff7c4)));
  /* 10dddd5f mov dword ptr [0x10dff7c8], ecx */
  w32((uint32_t)(0x10dff7c8), (ECX));
  /* 10dddd65 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10dddd6b push edx */
  push32((uint32_t)(EDX));
  /* 10dddd6c push 0x10dfe450 */
  push32((uint32_t)(0x10dfe450u));
  /* 10dddd71 call 0x10dddfc0 */
  push32(0x10dddd76u); f_10dddfc0();
  /* 10dddd76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddd79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddd7c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10dddd7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dddd81 je 0x10dddd96 */
  if (C.zf) goto L_10dddd96;
  /* 10dddd83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddd86 push edx */
  push32((uint32_t)(EDX));
  /* 10dddd87 push 0x10dfe3cc */
  push32((uint32_t)(0x10dfe3ccu));
  /* 10dddd8c call 0x10dd6a40 */
  push32(0x10dddd91u); f_10dd6a40();
  /* 10dddd91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddd94 jmp 0x10dddda8 */
  goto L_10dddda8;
L_10dddd96:;
  /* 10dddd96 push 0x10dfe450 */
  push32((uint32_t)(0x10dfe450u));
  /* 10dddd9b push 0x10dfe3cc */
  push32((uint32_t)(0x10dfe3ccu));
  /* 10dddda0 call 0x10dd6a40 */
  push32(0x10dddda5u); f_10dd6a40();
  /* 10dddda5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dddda8:;
  /* 10dddda8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddddac je 0x10ddddc1 */
  if (C.zf) goto L_10ddddc1;
  /* 10ddddae push 6 */
  push32((uint32_t)(0x6u));
  /* 10ddddb0 push 0x10dff7c0 */
  push32((uint32_t)(0x10dff7c0u));
  /* 10ddddb5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddddb8 push eax */
  push32((uint32_t)(EAX));
  /* 10ddddb9 call 0x10dda370 */
  push32(0x10ddddbeu); f_10dda370();
  /* 10ddddbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddddc1:;
  /* 10ddddc1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddddc5 je 0x10ddddda */
  if (C.zf) goto L_10ddddda;
  /* 10ddddc7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ddddc9 push 0x10dff7c8 */
  push32((uint32_t)(0x10dff7c8u));
  /* 10ddddce mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ddddd1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddddd2 call 0x10dda370 */
  push32(0x10ddddd7u); f_10dda370();
  /* 10ddddd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddddda:;
  /* 10ddddda push 0x10dfe450 */
  push32((uint32_t)(0x10dfe450u));
  /* 10dddddf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dddde2 push edx */
  push32((uint32_t)(EDX));
  /* 10dddde3 call 0x10dd6a40 */
  push32(0x10dddde8u); f_10dd6a40();
  /* 10dddde8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddddeb mov eax, 0x10dfe450 */
  EAX = (0x10dfe450u);
L_10ddddf0:;
  /* 10ddddf0 mov esp, ebp */
  ESP = (EBP);
  /* 10ddddf2 pop ebp */
  EBP = (pop32());
  /* 10ddddf3 ret  */
  ESPCHK(0x10dddc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de00 @ 0x10ddde00 (7 bytes, 5 insns) */
void f_10ddde00(void) {
  FTRACE(0x10ddde00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddde00 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddde01 mov ebp, esp */
  EBP = (ESP);
  /* 10ddde03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddde05 pop ebp */
  EBP = (pop32());
  /* 10ddde06 ret  */
  ESPCHK(0x10ddde00u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10ddde10 (79 bytes, 28 insns) */
void f_10ddde10(void) {
  FTRACE(0x10ddde10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddde10 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddde11 mov ebp, esp */
  EBP = (ESP);
  /* 10ddde13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddde16 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10ddde19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddde1c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ddde23 jmp 0x10ddde2e */
  goto L_10ddde2e;
L_10ddde25:;
  /* 10ddde25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddde28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddde2b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ddde2e:;
  /* 10ddde2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddde31 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddde34 jge 0x10ddde54 */
  if ((C.sf==C.of)) goto L_10ddde54;
  /* 10ddde36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddde39 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddde3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddde3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddde42 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10ddde45 push edx */
  push32((uint32_t)(EDX));
  /* 10ddde46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddde49 push eax */
  push32((uint32_t)(EAX));
  /* 10ddde4a call 0x10dd6a50 */
  push32(0x10ddde4fu); f_10dd6a50();
  /* 10ddde4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddde52 jmp 0x10ddde25 */
  goto L_10ddde25;
L_10ddde54:;
  /* 10ddde54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ddde5b mov esp, ebp */
  ESP = (EBP);
  /* 10ddde5d pop ebp */
  EBP = (pop32());
  /* 10ddde5e ret  */
  ESPCHK(0x10ddde10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de60 @ 0x10ddde60 (349 bytes, 122 insns) */
void f_10ddde60(void) {
  FTRACE(0x10ddde60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddde60 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddde61 mov ebp, esp */
  EBP = (ESP);
  /* 10ddde63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddde66 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10ddde6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddde6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddde70 push eax */
  push32((uint32_t)(EAX));
  /* 10ddde71 call 0x10dd7800 */
  push32(0x10ddde76u); f_10dd7800();
  /* 10ddde76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddde79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddde7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ddde7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddde81 jne 0x10ddde8a */
  if (!C.zf) goto L_10ddde8a;
  /* 10ddde83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddde85 jmp 0x10dddfb9 */
  goto L_10dddfb9;
L_10ddde8a:;
  /* 10ddde8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddde8d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ddde90 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddde93 jne 0x10dddec0 */
  if (!C.zf) goto L_10dddec0;
  /* 10ddde95 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddde98 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10ddde9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddde9e je 0x10dddec0 */
  if (C.zf) goto L_10dddec0;
  /* 10dddea0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dddea3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddea6 push ecx */
  push32((uint32_t)(ECX));
  /* 10dddea7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddeaa add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddeb0 push edx */
  push32((uint32_t)(EDX));
  /* 10dddeb1 call 0x10dd6a40 */
  push32(0x10dddeb6u); f_10dd6a40();
  /* 10dddeb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddeb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dddebb jmp 0x10dddfb9 */
  goto L_10dddfb9;
L_10dddec0:;
  /* 10dddec0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10dddec7 jmp 0x10ddded2 */
  goto L_10ddded2;
L_10dddec9:;
  /* 10dddec9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dddecc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddecf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ddded2:;
  /* 10ddded2 push 0x10dfb1c0 */
  push32((uint32_t)(0x10dfb1c0u));
  /* 10ddded7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dddeda push ecx */
  push32((uint32_t)(ECX));
  /* 10dddedb call 0x10ddf7b0 */
  push32(0x10dddee0u); f_10ddf7b0();
  /* 10dddee0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddee3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dddee6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddeea jne 0x10dddef4 */
  if (!C.zf) goto L_10dddef4;
  /* 10dddeec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dddeef jmp 0x10dddfb9 */
  goto L_10dddfb9;
L_10dddef4:;
  /* 10dddef4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dddef7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddefa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10dddefc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10dddeff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddf03 jne 0x10dddf2a */
  if (!C.zf) goto L_10dddf2a;
  /* 10dddf05 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddf09 jge 0x10dddf2a */
  if ((C.sf==C.of)) goto L_10dddf2a;
  /* 10dddf0b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10dddf0f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddf12 je 0x10dddf2a */
  if (C.zf) goto L_10dddf2a;
  /* 10dddf14 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dddf17 push edx */
  push32((uint32_t)(EDX));
  /* 10dddf18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dddf1b push eax */
  push32((uint32_t)(EAX));
  /* 10dddf1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddf1f push ecx */
  push32((uint32_t)(ECX));
  /* 10dddf20 call 0x10dd72b0 */
  push32(0x10dddf25u); f_10dd72b0();
  /* 10dddf25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddf28 jmp 0x10dddf90 */
  goto L_10dddf90;
L_10dddf2a:;
  /* 10dddf2a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddf2e jne 0x10dddf58 */
  if (!C.zf) goto L_10dddf58;
  /* 10dddf30 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddf34 jge 0x10dddf58 */
  if ((C.sf==C.of)) goto L_10dddf58;
  /* 10dddf36 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10dddf3a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddf3d je 0x10dddf58 */
  if (C.zf) goto L_10dddf58;
  /* 10dddf3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dddf42 push eax */
  push32((uint32_t)(EAX));
  /* 10dddf43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dddf46 push ecx */
  push32((uint32_t)(ECX));
  /* 10dddf47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddf4a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddf4d push edx */
  push32((uint32_t)(EDX));
  /* 10dddf4e call 0x10dd72b0 */
  push32(0x10dddf53u); f_10dd72b0();
  /* 10dddf53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddf56 jmp 0x10dddf90 */
  goto L_10dddf90;
L_10dddf58:;
  /* 10dddf58 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddf5c jne 0x10dddf8b */
  if (!C.zf) goto L_10dddf8b;
  /* 10dddf5e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10dddf62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dddf64 je 0x10dddf6f */
  if (C.zf) goto L_10dddf6f;
  /* 10dddf66 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10dddf6a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddf6d jne 0x10dddf8b */
  if (!C.zf) goto L_10dddf8b;
L_10dddf6f:;
  /* 10dddf6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dddf72 push edx */
  push32((uint32_t)(EDX));
  /* 10dddf73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dddf76 push eax */
  push32((uint32_t)(EAX));
  /* 10dddf77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddf7a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddf80 push ecx */
  push32((uint32_t)(ECX));
  /* 10dddf81 call 0x10dd72b0 */
  push32(0x10dddf86u); f_10dd72b0();
  /* 10dddf86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddf89 jmp 0x10dddf90 */
  goto L_10dddf90;
L_10dddf8b:;
  /* 10dddf8b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dddf8e jmp 0x10dddfb9 */
  goto L_10dddfb9;
L_10dddf90:;
  /* 10dddf90 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10dddf94 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dddf97 jne 0x10dddf9b */
  if (!C.zf) goto L_10dddf9b;
  /* 10dddf99 jmp 0x10dddfb7 */
  goto L_10dddfb7;
L_10dddf9b:;
  /* 10dddf9b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10dddf9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dddfa1 jne 0x10dddfa5 */
  if (!C.zf) goto L_10dddfa5;
  /* 10dddfa3 jmp 0x10dddfb7 */
  goto L_10dddfb7;
L_10dddfa5:;
  /* 10dddfa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dddfa8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dddfab lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10dddfaf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10dddfb2 jmp 0x10dddec9 */
  goto L_10dddec9;
L_10dddfb7:;
  /* 10dddfb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10dddfb9:;
  /* 10dddfb9 mov esp, ebp */
  ESP = (EBP);
  /* 10dddfbb pop ebp */
  EBP = (pop32());
  /* 10dddfbc ret  */
  ESPCHK(0x10ddde60u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10dddfc0 (101 bytes, 36 insns) */
void f_10dddfc0(void) {
  FTRACE(0x10dddfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dddfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dddfc1 mov ebp, esp */
  EBP = (ESP);
  /* 10dddfc3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dddfc6 push eax */
  push32((uint32_t)(EAX));
  /* 10dddfc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddfca push ecx */
  push32((uint32_t)(ECX));
  /* 10dddfcb call 0x10dd6a40 */
  push32(0x10dddfd0u); f_10dd6a40();
  /* 10dddfd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddfd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dddfd6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10dddfda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dddfdc je 0x10dddff8 */
  if (C.zf) goto L_10dddff8;
  /* 10dddfde mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dddfe1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dddfe4 push ecx */
  push32((uint32_t)(ECX));
  /* 10dddfe5 push 0x10dfb1c8 */
  push32((uint32_t)(0x10dfb1c8u));
  /* 10dddfea push 2 */
  push32((uint32_t)(0x2u));
  /* 10dddfec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dddfef push edx */
  push32((uint32_t)(EDX));
  /* 10dddff0 call 0x10ddde10 */
  push32(0x10dddff5u); f_10ddde10();
  /* 10dddff5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dddff8:;
  /* 10dddff8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dddffb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10dde002 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dde004 je 0x10dde023 */
  if (C.zf) goto L_10dde023;
  /* 10dde006 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dde009 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde00f push edx */
  push32((uint32_t)(EDX));
  /* 10dde010 push 0x10dfb1c4 */
  push32((uint32_t)(0x10dfb1c4u));
  /* 10dde015 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde017 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde01a push eax */
  push32((uint32_t)(EAX));
  /* 10dde01b call 0x10ddde10 */
  push32(0x10dde020u); f_10ddde10();
  /* 10dde020 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dde023:;
  /* 10dde023 pop ebp */
  EBP = (pop32());
  /* 10dde024 ret  */
  ESPCHK(0x10dddfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e030 @ 0x10dde030 (130 bytes, 50 insns) */
void f_10dde030(void) {
  FTRACE(0x10dde030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dde030 push ebp */
  push32((uint32_t)(EBP));
  /* 10dde031 mov ebp, esp */
  EBP = (ESP);
  /* 10dde033 push ecx */
  push32((uint32_t)(ECX));
  /* 10dde034 push ebx */
  push32((uint32_t)(EBX));
  /* 10dde035 push esi */
  push32((uint32_t)(ESI));
  /* 10dde036 push edi */
  push32((uint32_t)(EDI));
  /* 10dde037 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10dde03e:;
  /* 10dde03e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dde042 jne 0x10dde062 */
  if (!C.zf) goto L_10dde062;
  /* 10dde044 push 0x10dfb1d8 */
  push32((uint32_t)(0x10dfb1d8u));
  /* 10dde049 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dde04b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10dde04d push 0x10dfb1cc */
  push32((uint32_t)(0x10dfb1ccu));
  /* 10dde052 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde054 call 0x10dd2b50 */
  push32(0x10dde059u); f_10dd2b50();
  /* 10dde059 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde05c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dde05f jne 0x10dde062 */
  if (!C.zf) goto L_10dde062;
  /* 10dde061 int3  */
  x86_unimpl("int3 @ 0x10dde061");
L_10dde062:;
  /* 10dde062 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dde064 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dde066 jne 0x10dde03e */
  if (!C.zf) goto L_10dde03e;
  /* 10dde068 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde06b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10dde06e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10dde071 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dde073 je 0x10dde081 */
  if (C.zf) goto L_10dde081;
  /* 10dde075 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde078 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10dde07f jmp 0x10dde0a8 */
  goto L_10dde0a8;
L_10dde081:;
  /* 10dde081 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde084 push ecx */
  push32((uint32_t)(ECX));
  /* 10dde085 call 0x10ddc8a0 */
  push32(0x10dde08au); f_10ddc8a0();
  /* 10dde08a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde08d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde090 push edx */
  push32((uint32_t)(EDX));
  /* 10dde091 call 0x10dde0c0 */
  push32(0x10dde096u); f_10dde0c0();
  /* 10dde096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde099 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dde09c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde09f push eax */
  push32((uint32_t)(EAX));
  /* 10dde0a0 call 0x10ddc910 */
  push32(0x10dde0a5u); f_10ddc910();
  /* 10dde0a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dde0a8:;
  /* 10dde0a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde0ab pop edi */
  EDI = (pop32());
  /* 10dde0ac pop esi */
  ESI = (pop32());
  /* 10dde0ad pop ebx */
  EBX = (pop32());
  /* 10dde0ae mov esp, ebp */
  ESP = (EBP);
  /* 10dde0b0 pop ebp */
  EBP = (pop32());
  /* 10dde0b1 ret  */
  ESPCHK(0x10dde030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0c0 @ 0x10dde0c0 (190 bytes, 67 insns) */
void f_10dde0c0(void) {
  FTRACE(0x10dde0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dde0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dde0c1 mov ebp, esp */
  EBP = (ESP);
  /* 10dde0c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dde0c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10dde0c7 push esi */
  push32((uint32_t)(ESI));
  /* 10dde0c8 push edi */
  push32((uint32_t)(EDI));
  /* 10dde0c9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10dde0d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde0d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10dde0d6:;
  /* 10dde0d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dde0da jne 0x10dde0fa */
  if (!C.zf) goto L_10dde0fa;
  /* 10dde0dc push 0x10dfb07c */
  push32((uint32_t)(0x10dfb07cu));
  /* 10dde0e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dde0e3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10dde0e5 push 0x10dfb1cc */
  push32((uint32_t)(0x10dfb1ccu));
  /* 10dde0ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde0ec call 0x10dd2b50 */
  push32(0x10dde0f1u); f_10dd2b50();
  /* 10dde0f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde0f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dde0f7 jne 0x10dde0fa */
  if (!C.zf) goto L_10dde0fa;
  /* 10dde0f9 int3  */
  x86_unimpl("int3 @ 0x10dde0f9");
L_10dde0fa:;
  /* 10dde0fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde0fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dde0fe jne 0x10dde0d6 */
  if (!C.zf) goto L_10dde0d6;
  /* 10dde100 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dde103 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10dde106 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10dde10b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dde10d je 0x10dde16a */
  if (C.zf) goto L_10dde16a;
  /* 10dde10f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dde112 push ecx */
  push32((uint32_t)(ECX));
  /* 10dde113 call 0x10ddd3c0 */
  push32(0x10dde118u); f_10ddd3c0();
  /* 10dde118 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde11b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dde11e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dde121 push edx */
  push32((uint32_t)(EDX));
  /* 10dde122 call 0x10de0740 */
  push32(0x10dde127u); f_10de0740();
  /* 10dde127 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde12a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dde12d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10dde130 push ecx */
  push32((uint32_t)(ECX));
  /* 10dde131 call 0x10de0610 */
  push32(0x10dde136u); f_10de0610();
  /* 10dde136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dde13b jge 0x10dde146 */
  if ((C.sf==C.of)) goto L_10dde146;
  /* 10dde13d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10dde144 jmp 0x10dde16a */
  goto L_10dde16a;
L_10dde146:;
  /* 10dde146 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dde149 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dde14d je 0x10dde16a */
  if (C.zf) goto L_10dde16a;
  /* 10dde14f push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde151 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dde154 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10dde157 push ecx */
  push32((uint32_t)(ECX));
  /* 10dde158 call 0x10dd4520 */
  push32(0x10dde15du); f_10dd4520();
  /* 10dde15d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde160 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dde163 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10dde16a:;
  /* 10dde16a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dde16d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10dde174 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde177 pop edi */
  EDI = (pop32());
  /* 10dde178 pop esi */
  ESI = (pop32());
  /* 10dde179 pop ebx */
  EBX = (pop32());
  /* 10dde17a mov esp, ebp */
  ESP = (EBP);
  /* 10dde17c pop ebp */
  EBP = (pop32());
  /* 10dde17d ret  */
  ESPCHK(0x10dde0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e180 @ 0x10dde180 (210 bytes, 63 insns) */
void f_10dde180(void) {
  FTRACE(0x10dde180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dde180 push ebp */
  push32((uint32_t)(EBP));
  /* 10dde181 mov ebp, esp */
  EBP = (ESP);
  /* 10dde183 push ecx */
  push32((uint32_t)(ECX));
  /* 10dde184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde187 cmp eax, dword ptr [0x10e010bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e010bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dde18d jae 0x10dde1b1 */
  if (!C.cf) goto L_10dde1b1;
  /* 10dde18f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde192 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10dde195 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde198 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10dde19b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dde19e mov eax, dword ptr [ecx*4 + 0x10e00f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e00f80)));
  /* 10dde1a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10dde1aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10dde1ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dde1af jne 0x10dde1c4 */
  if (!C.zf) goto L_10dde1c4;
L_10dde1b1:;
  /* 10dde1b1 call 0x10ddb960 */
  push32(0x10dde1b6u); f_10ddb960();
  /* 10dde1b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10dde1bc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dde1bf jmp 0x10dde24e */
  goto L_10dde24e;
L_10dde1c4:;
  /* 10dde1c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde1c7 push edx */
  push32((uint32_t)(EDX));
  /* 10dde1c8 call 0x10ddd180 */
  push32(0x10dde1cdu); f_10ddd180();
  /* 10dde1cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde1d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde1d3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10dde1d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde1d9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10dde1dc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dde1df mov edx, dword ptr [eax*4 + 0x10e00f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e00f80)));
  /* 10dde1e6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10dde1eb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10dde1ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dde1f0 je 0x10dde22d */
  if (C.zf) goto L_10dde22d;
  /* 10dde1f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde1f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10dde1f6 call 0x10ddd000 */
  push32(0x10dde1fbu); f_10ddd000();
  /* 10dde1fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde1fe push eax */
  push32((uint32_t)(EAX));
  /* 10dde1ff call dword ptr [0x10e022a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022a0))), 0x10dde205u);
  /* 10dde205 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dde207 jne 0x10dde214 */
  if (!C.zf) goto L_10dde214;
  /* 10dde209 call dword ptr [0x10e02320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02320))), 0x10dde20fu);
  /* 10dde20f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dde212 jmp 0x10dde21b */
  goto L_10dde21b;
L_10dde214:;
  /* 10dde214 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10dde21b:;
  /* 10dde21b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dde21f jne 0x10dde223 */
  if (!C.zf) goto L_10dde223;
  /* 10dde221 jmp 0x10dde23f */
  goto L_10dde23f;
L_10dde223:;
  /* 10dde223 call 0x10ddb970 */
  push32(0x10dde228u); f_10ddb970();
  /* 10dde228 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde22b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10dde22d:;
  /* 10dde22d call 0x10ddb960 */
  push32(0x10dde232u); f_10ddb960();
  /* 10dde232 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10dde238 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10dde23f:;
  /* 10dde23f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde242 push eax */
  push32((uint32_t)(EAX));
  /* 10dde243 call 0x10ddd210 */
  push32(0x10dde248u); f_10ddd210();
  /* 10dde248 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde24b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10dde24e:;
  /* 10dde24e mov esp, ebp */
  ESP = (EBP);
  /* 10dde250 pop ebp */
  EBP = (pop32());
  /* 10dde251 ret  */
  ESPCHK(0x10dde180u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10dde260 (219 bytes, 64 insns) */
void f_10dde260(void) {
  FTRACE(0x10dde260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dde260 push ebp */
  push32((uint32_t)(EBP));
  /* 10dde261 mov ebp, esp */
  EBP = (ESP);
  /* 10dde263 push ecx */
  push32((uint32_t)(ECX));
  /* 10dde264 cmp dword ptr [0x10dff7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dde26b je 0x10dde301 */
  if (C.zf) goto L_10dde301;
  /* 10dde271 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10dde273 push 0x10dfb1e8 */
  push32((uint32_t)(0x10dfb1e8u));
  /* 10dde278 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde27a push 0xac */
  push32((uint32_t)(0xacu));
  /* 10dde27f push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde281 call 0x10dd3ea0 */
  push32(0x10dde286u); f_10dd3ea0();
  /* 10dde286 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde289 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dde28c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dde290 jne 0x10dde29c */
  if (!C.zf) goto L_10dde29c;
  /* 10dde292 mov eax, 1 */
  EAX = (0x1u);
  /* 10dde297 jmp 0x10dde337 */
  goto L_10dde337;
L_10dde29c:;
  /* 10dde29c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde29f push eax */
  push32((uint32_t)(EAX));
  /* 10dde2a0 call 0x10dde340 */
  push32(0x10dde2a5u); f_10dde340();
  /* 10dde2a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde2a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dde2aa je 0x10dde2cd */
  if (C.zf) goto L_10dde2cd;
  /* 10dde2ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde2af push ecx */
  push32((uint32_t)(ECX));
  /* 10dde2b0 call 0x10dde8d0 */
  push32(0x10dde2b5u); f_10dde8d0();
  /* 10dde2b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde2b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde2ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde2bd push edx */
  push32((uint32_t)(EDX));
  /* 10dde2be call 0x10dd4520 */
  push32(0x10dde2c3u); f_10dd4520();
  /* 10dde2c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde2c6 mov eax, 1 */
  EAX = (0x1u);
  /* 10dde2cb jmp 0x10dde337 */
  goto L_10dde337;
L_10dde2cd:;
  /* 10dde2cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde2d0 mov dword ptr [0x10dfec98], eax */
  w32((uint32_t)(0x10dfec98), (EAX));
  /* 10dde2d5 mov ecx, dword ptr [0x10dff7cc] */
  ECX = (r32((uint32_t)(0x10dff7cc)));
  /* 10dde2db push ecx */
  push32((uint32_t)(ECX));
  /* 10dde2dc call 0x10dde8d0 */
  push32(0x10dde2e1u); f_10dde8d0();
  /* 10dde2e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde2e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde2e6 mov edx, dword ptr [0x10dff7cc] */
  EDX = (r32((uint32_t)(0x10dff7cc)));
  /* 10dde2ec push edx */
  push32((uint32_t)(EDX));
  /* 10dde2ed call 0x10dd4520 */
  push32(0x10dde2f2u); f_10dd4520();
  /* 10dde2f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde2f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde2f8 mov dword ptr [0x10dff7cc], eax */
  w32((uint32_t)(0x10dff7cc), (EAX));
  /* 10dde2fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dde2ff jmp 0x10dde337 */
  goto L_10dde337;
L_10dde301:;
  /* 10dde301 mov dword ptr [0x10dfec98], 0x10dfeca0 */
  w32((uint32_t)(0x10dfec98), (0x10dfeca0u));
  /* 10dde30b mov ecx, dword ptr [0x10dff7cc] */
  ECX = (r32((uint32_t)(0x10dff7cc)));
  /* 10dde311 push ecx */
  push32((uint32_t)(ECX));
  /* 10dde312 call 0x10dde8d0 */
  push32(0x10dde317u); f_10dde8d0();
  /* 10dde317 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde31a push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde31c mov edx, dword ptr [0x10dff7cc] */
  EDX = (r32((uint32_t)(0x10dff7cc)));
  /* 10dde322 push edx */
  push32((uint32_t)(EDX));
  /* 10dde323 call 0x10dd4520 */
  push32(0x10dde328u); f_10dd4520();
  /* 10dde328 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde32b mov dword ptr [0x10dff7cc], 0 */
  w32((uint32_t)(0x10dff7cc), (0x0u));
  /* 10dde335 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10dde337:;
  /* 10dde337 mov esp, ebp */
  ESP = (EBP);
  /* 10dde339 pop ebp */
  EBP = (pop32());
  /* 10dde33a ret  */
  ESPCHK(0x10dde260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e340 @ 0x10dde340 (1423 bytes, 533 insns) */
void f_10dde340(void) {
  FTRACE(0x10dde340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dde340 push ebp */
  push32((uint32_t)(EBP));
  /* 10dde341 mov ebp, esp */
  EBP = (ESP);
  /* 10dde343 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dde346 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10dde34d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dde34f mov ax, word ptr [0x10dff806] */
  AX = (r16((uint32_t)(0x10dff806)));
  /* 10dde355 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dde358 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde35a mov cx, word ptr [0x10dff808] */
  CX = (r16((uint32_t)(0x10dff808)));
  /* 10dde361 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10dde364 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dde368 jne 0x10dde372 */
  if (!C.zf) goto L_10dde372;
  /* 10dde36a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dde36d jmp 0x10dde8cb */
  goto L_10dde8cb;
L_10dde372:;
  /* 10dde372 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde375 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde378 push edx */
  push32((uint32_t)(EDX));
  /* 10dde379 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10dde37b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde37e push eax */
  push32((uint32_t)(EAX));
  /* 10dde37f push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde381 call 0x10de1c50 */
  push32(0x10dde386u); f_10de1c50();
  /* 10dde386 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde389 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde38c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde38e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde391 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde394 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde397 push edx */
  push32((uint32_t)(EDX));
  /* 10dde398 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10dde39a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde39d push eax */
  push32((uint32_t)(EAX));
  /* 10dde39e push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde3a0 call 0x10de1c50 */
  push32(0x10dde3a5u); f_10de1c50();
  /* 10dde3a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde3a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde3ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde3ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde3b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde3b3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde3b6 push edx */
  push32((uint32_t)(EDX));
  /* 10dde3b7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10dde3b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde3bc push eax */
  push32((uint32_t)(EAX));
  /* 10dde3bd push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde3bf call 0x10de1c50 */
  push32(0x10dde3c4u); f_10de1c50();
  /* 10dde3c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde3c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde3ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde3cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde3cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde3d2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde3d5 push edx */
  push32((uint32_t)(EDX));
  /* 10dde3d6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10dde3d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde3db push eax */
  push32((uint32_t)(EAX));
  /* 10dde3dc push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde3de call 0x10de1c50 */
  push32(0x10dde3e3u); f_10de1c50();
  /* 10dde3e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde3e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde3e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde3eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde3ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde3f1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde3f4 push edx */
  push32((uint32_t)(EDX));
  /* 10dde3f5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10dde3f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde3fa push eax */
  push32((uint32_t)(EAX));
  /* 10dde3fb push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde3fd call 0x10de1c50 */
  push32(0x10dde402u); f_10de1c50();
  /* 10dde402 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde405 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde408 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde40a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde40d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde410 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde413 push edx */
  push32((uint32_t)(EDX));
  /* 10dde414 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10dde416 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde419 push eax */
  push32((uint32_t)(EAX));
  /* 10dde41a push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde41c call 0x10de1c50 */
  push32(0x10dde421u); f_10de1c50();
  /* 10dde421 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde424 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde427 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde429 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde42c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde42f push edx */
  push32((uint32_t)(EDX));
  /* 10dde430 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10dde432 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde435 push eax */
  push32((uint32_t)(EAX));
  /* 10dde436 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde438 call 0x10de1c50 */
  push32(0x10dde43du); f_10de1c50();
  /* 10dde43d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde440 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde443 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde445 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde448 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde44b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde44e push edx */
  push32((uint32_t)(EDX));
  /* 10dde44f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10dde451 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde454 push eax */
  push32((uint32_t)(EAX));
  /* 10dde455 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde457 call 0x10de1c50 */
  push32(0x10dde45cu); f_10de1c50();
  /* 10dde45c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde45f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde462 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde464 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde467 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde46a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde46d push edx */
  push32((uint32_t)(EDX));
  /* 10dde46e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10dde470 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde473 push eax */
  push32((uint32_t)(EAX));
  /* 10dde474 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde476 call 0x10de1c50 */
  push32(0x10dde47bu); f_10de1c50();
  /* 10dde47b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde47e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde481 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde483 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde486 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde489 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde48c push edx */
  push32((uint32_t)(EDX));
  /* 10dde48d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10dde48f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde492 push eax */
  push32((uint32_t)(EAX));
  /* 10dde493 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde495 call 0x10de1c50 */
  push32(0x10dde49au); f_10de1c50();
  /* 10dde49a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde49d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde4a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde4a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde4a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde4a8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde4ab push edx */
  push32((uint32_t)(EDX));
  /* 10dde4ac push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10dde4ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde4b1 push eax */
  push32((uint32_t)(EAX));
  /* 10dde4b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde4b4 call 0x10de1c50 */
  push32(0x10dde4b9u); f_10de1c50();
  /* 10dde4b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde4bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde4bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde4c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde4c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde4c7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde4ca push edx */
  push32((uint32_t)(EDX));
  /* 10dde4cb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10dde4cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde4d0 push eax */
  push32((uint32_t)(EAX));
  /* 10dde4d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde4d3 call 0x10de1c50 */
  push32(0x10dde4d8u); f_10de1c50();
  /* 10dde4d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde4db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde4de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde4e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde4e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde4e6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde4e9 push edx */
  push32((uint32_t)(EDX));
  /* 10dde4ea push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10dde4ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde4ef push eax */
  push32((uint32_t)(EAX));
  /* 10dde4f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde4f2 call 0x10de1c50 */
  push32(0x10dde4f7u); f_10de1c50();
  /* 10dde4f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde4fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde4fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde4ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde502 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde505 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde508 push edx */
  push32((uint32_t)(EDX));
  /* 10dde509 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10dde50b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde50e push eax */
  push32((uint32_t)(EAX));
  /* 10dde50f push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde511 call 0x10de1c50 */
  push32(0x10dde516u); f_10de1c50();
  /* 10dde516 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde519 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde51c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde51e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde521 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde524 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde527 push edx */
  push32((uint32_t)(EDX));
  /* 10dde528 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10dde52a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde52d push eax */
  push32((uint32_t)(EAX));
  /* 10dde52e push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde530 call 0x10de1c50 */
  push32(0x10dde535u); f_10de1c50();
  /* 10dde535 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde538 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde53b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde53d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde540 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde543 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde546 push edx */
  push32((uint32_t)(EDX));
  /* 10dde547 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10dde549 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde54c push eax */
  push32((uint32_t)(EAX));
  /* 10dde54d push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde54f call 0x10de1c50 */
  push32(0x10dde554u); f_10de1c50();
  /* 10dde554 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde557 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde55a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde55c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde55f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde562 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde565 push edx */
  push32((uint32_t)(EDX));
  /* 10dde566 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10dde568 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde56b push eax */
  push32((uint32_t)(EAX));
  /* 10dde56c push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde56e call 0x10de1c50 */
  push32(0x10dde573u); f_10de1c50();
  /* 10dde573 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde576 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde579 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde57b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde57e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde581 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde584 push edx */
  push32((uint32_t)(EDX));
  /* 10dde585 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10dde587 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde58a push eax */
  push32((uint32_t)(EAX));
  /* 10dde58b push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde58d call 0x10de1c50 */
  push32(0x10dde592u); f_10de1c50();
  /* 10dde592 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde595 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde598 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde59a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde59d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde5a0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde5a3 push edx */
  push32((uint32_t)(EDX));
  /* 10dde5a4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10dde5a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde5a9 push eax */
  push32((uint32_t)(EAX));
  /* 10dde5aa push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde5ac call 0x10de1c50 */
  push32(0x10dde5b1u); f_10de1c50();
  /* 10dde5b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde5b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde5b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde5b9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde5bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde5bf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde5c2 push edx */
  push32((uint32_t)(EDX));
  /* 10dde5c3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10dde5c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde5c8 push eax */
  push32((uint32_t)(EAX));
  /* 10dde5c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde5cb call 0x10de1c50 */
  push32(0x10dde5d0u); f_10de1c50();
  /* 10dde5d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde5d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde5d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde5d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde5db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde5de add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde5e1 push edx */
  push32((uint32_t)(EDX));
  /* 10dde5e2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10dde5e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde5e7 push eax */
  push32((uint32_t)(EAX));
  /* 10dde5e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde5ea call 0x10de1c50 */
  push32(0x10dde5efu); f_10de1c50();
  /* 10dde5ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde5f2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde5f5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde5f7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde5fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde5fd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde600 push edx */
  push32((uint32_t)(EDX));
  /* 10dde601 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10dde603 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde606 push eax */
  push32((uint32_t)(EAX));
  /* 10dde607 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde609 call 0x10de1c50 */
  push32(0x10dde60eu); f_10de1c50();
  /* 10dde60e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde611 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde614 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde616 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde619 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde61c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde61f push edx */
  push32((uint32_t)(EDX));
  /* 10dde620 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10dde622 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde625 push eax */
  push32((uint32_t)(EAX));
  /* 10dde626 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde628 call 0x10de1c50 */
  push32(0x10dde62du); f_10de1c50();
  /* 10dde62d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde630 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde633 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde635 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde638 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde63b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde63e push edx */
  push32((uint32_t)(EDX));
  /* 10dde63f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10dde641 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde644 push eax */
  push32((uint32_t)(EAX));
  /* 10dde645 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde647 call 0x10de1c50 */
  push32(0x10dde64cu); f_10de1c50();
  /* 10dde64c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde64f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde652 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde654 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde657 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde65a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde65d push edx */
  push32((uint32_t)(EDX));
  /* 10dde65e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10dde660 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde663 push eax */
  push32((uint32_t)(EAX));
  /* 10dde664 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde666 call 0x10de1c50 */
  push32(0x10dde66bu); f_10de1c50();
  /* 10dde66b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde66e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde671 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde673 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde676 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde679 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde67c push edx */
  push32((uint32_t)(EDX));
  /* 10dde67d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10dde67f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde682 push eax */
  push32((uint32_t)(EAX));
  /* 10dde683 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde685 call 0x10de1c50 */
  push32(0x10dde68au); f_10de1c50();
  /* 10dde68a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde68d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde690 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde692 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde695 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde698 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde69b push edx */
  push32((uint32_t)(EDX));
  /* 10dde69c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10dde69e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde6a1 push eax */
  push32((uint32_t)(EAX));
  /* 10dde6a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde6a4 call 0x10de1c50 */
  push32(0x10dde6a9u); f_10de1c50();
  /* 10dde6a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde6ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde6af or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde6b1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde6b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde6b7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde6ba push edx */
  push32((uint32_t)(EDX));
  /* 10dde6bb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10dde6bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde6c0 push eax */
  push32((uint32_t)(EAX));
  /* 10dde6c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde6c3 call 0x10de1c50 */
  push32(0x10dde6c8u); f_10de1c50();
  /* 10dde6c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde6cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde6ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde6d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde6d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde6d6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde6d9 push edx */
  push32((uint32_t)(EDX));
  /* 10dde6da push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10dde6dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde6df push eax */
  push32((uint32_t)(EAX));
  /* 10dde6e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde6e2 call 0x10de1c50 */
  push32(0x10dde6e7u); f_10de1c50();
  /* 10dde6e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde6ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde6ed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde6ef mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde6f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde6f5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde6f8 push edx */
  push32((uint32_t)(EDX));
  /* 10dde6f9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10dde6fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde6fe push eax */
  push32((uint32_t)(EAX));
  /* 10dde6ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde701 call 0x10de1c50 */
  push32(0x10dde706u); f_10de1c50();
  /* 10dde706 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde709 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde70c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde70e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde711 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde714 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde717 push edx */
  push32((uint32_t)(EDX));
  /* 10dde718 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10dde71a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde71d push eax */
  push32((uint32_t)(EAX));
  /* 10dde71e push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde720 call 0x10de1c50 */
  push32(0x10dde725u); f_10de1c50();
  /* 10dde725 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde728 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde72b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde72d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde730 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde733 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde736 push edx */
  push32((uint32_t)(EDX));
  /* 10dde737 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10dde739 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde73c push eax */
  push32((uint32_t)(EAX));
  /* 10dde73d push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde73f call 0x10de1c50 */
  push32(0x10dde744u); f_10de1c50();
  /* 10dde744 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde747 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde74a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde74c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde74f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde752 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde758 push edx */
  push32((uint32_t)(EDX));
  /* 10dde759 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10dde75b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde75e push eax */
  push32((uint32_t)(EAX));
  /* 10dde75f push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde761 call 0x10de1c50 */
  push32(0x10dde766u); f_10de1c50();
  /* 10dde766 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde769 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde76c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde76e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde771 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde774 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde77a push edx */
  push32((uint32_t)(EDX));
  /* 10dde77b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10dde77d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde780 push eax */
  push32((uint32_t)(EAX));
  /* 10dde781 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde783 call 0x10de1c50 */
  push32(0x10dde788u); f_10de1c50();
  /* 10dde788 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde78b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde78e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde790 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde793 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde796 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde79c push edx */
  push32((uint32_t)(EDX));
  /* 10dde79d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10dde79f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde7a2 push eax */
  push32((uint32_t)(EAX));
  /* 10dde7a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde7a5 call 0x10de1c50 */
  push32(0x10dde7aau); f_10de1c50();
  /* 10dde7aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde7ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde7b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde7b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde7b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde7b8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde7be push edx */
  push32((uint32_t)(EDX));
  /* 10dde7bf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10dde7c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde7c4 push eax */
  push32((uint32_t)(EAX));
  /* 10dde7c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde7c7 call 0x10de1c50 */
  push32(0x10dde7ccu); f_10de1c50();
  /* 10dde7cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde7cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde7d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde7d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde7d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde7da add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde7e0 push edx */
  push32((uint32_t)(EDX));
  /* 10dde7e1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10dde7e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde7e6 push eax */
  push32((uint32_t)(EAX));
  /* 10dde7e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde7e9 call 0x10de1c50 */
  push32(0x10dde7eeu); f_10de1c50();
  /* 10dde7ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde7f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde7f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde7f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde7f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde7fc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde802 push edx */
  push32((uint32_t)(EDX));
  /* 10dde803 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10dde805 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde808 push eax */
  push32((uint32_t)(EAX));
  /* 10dde809 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde80b call 0x10de1c50 */
  push32(0x10dde810u); f_10de1c50();
  /* 10dde810 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde813 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde816 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde818 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde81b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde81e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde824 push edx */
  push32((uint32_t)(EDX));
  /* 10dde825 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10dde827 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde82a push eax */
  push32((uint32_t)(EAX));
  /* 10dde82b push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde82d call 0x10de1c50 */
  push32(0x10dde832u); f_10de1c50();
  /* 10dde832 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde835 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde838 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde83a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde83d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde840 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde846 push edx */
  push32((uint32_t)(EDX));
  /* 10dde847 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10dde849 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dde84c push eax */
  push32((uint32_t)(EAX));
  /* 10dde84d push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde84f call 0x10de1c50 */
  push32(0x10dde854u); f_10de1c50();
  /* 10dde854 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde857 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde85a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde85c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde85f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde862 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde868 push edx */
  push32((uint32_t)(EDX));
  /* 10dde869 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10dde86b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dde86e push eax */
  push32((uint32_t)(EAX));
  /* 10dde86f push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde871 call 0x10de1c50 */
  push32(0x10dde876u); f_10de1c50();
  /* 10dde876 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde879 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde87c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde87e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde881 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde884 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde88a push edx */
  push32((uint32_t)(EDX));
  /* 10dde88b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10dde88d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dde890 push eax */
  push32((uint32_t)(EAX));
  /* 10dde891 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde893 call 0x10de1c50 */
  push32(0x10dde898u); f_10de1c50();
  /* 10dde898 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde89b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde89e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde8a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde8a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde8a6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde8ac push edx */
  push32((uint32_t)(EDX));
  /* 10dde8ad push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10dde8b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dde8b5 push eax */
  push32((uint32_t)(EAX));
  /* 10dde8b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dde8b8 call 0x10de1c50 */
  push32(0x10dde8bdu); f_10de1c50();
  /* 10dde8bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde8c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dde8c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10dde8c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dde8c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10dde8cb:;
  /* 10dde8cb mov esp, ebp */
  ESP = (EBP);
  /* 10dde8cd pop ebp */
  EBP = (pop32());
  /* 10dde8ce ret  */
  ESPCHK(0x10dde340u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10dde8d0 (779 bytes, 265 insns) */
void f_10dde8d0(void) {
  FTRACE(0x10dde8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dde8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dde8d1 mov ebp, esp */
  EBP = (ESP);
  /* 10dde8d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dde8d7 jne 0x10dde8de */
  if (!C.zf) goto L_10dde8de;
  /* 10dde8d9 jmp 0x10ddebd9 */
  goto L_10ddebd9;
L_10dde8de:;
  /* 10dde8de push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde8e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde8e3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dde8e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10dde8e7 call 0x10dd4520 */
  push32(0x10dde8ecu); f_10dd4520();
  /* 10dde8ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde8ef push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde8f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde8f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10dde8f7 push eax */
  push32((uint32_t)(EAX));
  /* 10dde8f8 call 0x10dd4520 */
  push32(0x10dde8fdu); f_10dd4520();
  /* 10dde8fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde900 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde902 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde905 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10dde908 push edx */
  push32((uint32_t)(EDX));
  /* 10dde909 call 0x10dd4520 */
  push32(0x10dde90eu); f_10dd4520();
  /* 10dde90e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde911 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde916 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10dde919 push ecx */
  push32((uint32_t)(ECX));
  /* 10dde91a call 0x10dd4520 */
  push32(0x10dde91fu); f_10dd4520();
  /* 10dde91f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde922 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde924 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde927 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10dde92a push eax */
  push32((uint32_t)(EAX));
  /* 10dde92b call 0x10dd4520 */
  push32(0x10dde930u); f_10dd4520();
  /* 10dde930 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde933 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde935 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde938 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10dde93b push edx */
  push32((uint32_t)(EDX));
  /* 10dde93c call 0x10dd4520 */
  push32(0x10dde941u); f_10dd4520();
  /* 10dde941 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde944 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde949 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dde94b push ecx */
  push32((uint32_t)(ECX));
  /* 10dde94c call 0x10dd4520 */
  push32(0x10dde951u); f_10dd4520();
  /* 10dde951 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde954 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde956 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde959 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10dde95c push eax */
  push32((uint32_t)(EAX));
  /* 10dde95d call 0x10dd4520 */
  push32(0x10dde962u); f_10dd4520();
  /* 10dde962 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde965 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde967 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde96a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10dde96d push edx */
  push32((uint32_t)(EDX));
  /* 10dde96e call 0x10dd4520 */
  push32(0x10dde973u); f_10dd4520();
  /* 10dde973 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde976 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde978 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde97b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10dde97e push ecx */
  push32((uint32_t)(ECX));
  /* 10dde97f call 0x10dd4520 */
  push32(0x10dde984u); f_10dd4520();
  /* 10dde984 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde987 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde989 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde98c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10dde98f push eax */
  push32((uint32_t)(EAX));
  /* 10dde990 call 0x10dd4520 */
  push32(0x10dde995u); f_10dd4520();
  /* 10dde995 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde998 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde99a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde99d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10dde9a0 push edx */
  push32((uint32_t)(EDX));
  /* 10dde9a1 call 0x10dd4520 */
  push32(0x10dde9a6u); f_10dd4520();
  /* 10dde9a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde9a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde9ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde9ae mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10dde9b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10dde9b2 call 0x10dd4520 */
  push32(0x10dde9b7u); f_10dd4520();
  /* 10dde9b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde9ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde9bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde9bf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10dde9c2 push eax */
  push32((uint32_t)(EAX));
  /* 10dde9c3 call 0x10dd4520 */
  push32(0x10dde9c8u); f_10dd4520();
  /* 10dde9c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde9cb push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde9cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde9d0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10dde9d3 push edx */
  push32((uint32_t)(EDX));
  /* 10dde9d4 call 0x10dd4520 */
  push32(0x10dde9d9u); f_10dd4520();
  /* 10dde9d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde9dc push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde9de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde9e1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10dde9e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10dde9e5 call 0x10dd4520 */
  push32(0x10dde9eau); f_10dd4520();
  /* 10dde9ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde9ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10dde9ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dde9f2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10dde9f5 push eax */
  push32((uint32_t)(EAX));
  /* 10dde9f6 call 0x10dd4520 */
  push32(0x10dde9fbu); f_10dd4520();
  /* 10dde9fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dde9fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddea00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddea03 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10ddea06 push edx */
  push32((uint32_t)(EDX));
  /* 10ddea07 call 0x10dd4520 */
  push32(0x10ddea0cu); f_10dd4520();
  /* 10ddea0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddea0f push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddea11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddea14 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10ddea17 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddea18 call 0x10dd4520 */
  push32(0x10ddea1du); f_10dd4520();
  /* 10ddea1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddea20 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddea22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddea25 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10ddea28 push eax */
  push32((uint32_t)(EAX));
  /* 10ddea29 call 0x10dd4520 */
  push32(0x10ddea2eu); f_10dd4520();
  /* 10ddea2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddea31 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddea33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddea36 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10ddea39 push edx */
  push32((uint32_t)(EDX));
  /* 10ddea3a call 0x10dd4520 */
  push32(0x10ddea3fu); f_10dd4520();
  /* 10ddea3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddea42 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddea44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddea47 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10ddea4a push ecx */
  push32((uint32_t)(ECX));
  /* 10ddea4b call 0x10dd4520 */
  push32(0x10ddea50u); f_10dd4520();
  /* 10ddea50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddea53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddea55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddea58 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10ddea5b push eax */
  push32((uint32_t)(EAX));
  /* 10ddea5c call 0x10dd4520 */
  push32(0x10ddea61u); f_10dd4520();
  /* 10ddea61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddea64 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddea66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddea69 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10ddea6c push edx */
  push32((uint32_t)(EDX));
  /* 10ddea6d call 0x10dd4520 */
  push32(0x10ddea72u); f_10dd4520();
  /* 10ddea72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddea75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddea77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddea7a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10ddea7d push ecx */
  push32((uint32_t)(ECX));
  /* 10ddea7e call 0x10dd4520 */
  push32(0x10ddea83u); f_10dd4520();
  /* 10ddea83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddea86 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddea88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddea8b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10ddea8e push eax */
  push32((uint32_t)(EAX));
  /* 10ddea8f call 0x10dd4520 */
  push32(0x10ddea94u); f_10dd4520();
  /* 10ddea94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddea97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddea99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddea9c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10ddea9f push edx */
  push32((uint32_t)(EDX));
  /* 10ddeaa0 call 0x10dd4520 */
  push32(0x10ddeaa5u); f_10dd4520();
  /* 10ddeaa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddeaa8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddeaaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeaad mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10ddeab0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddeab1 call 0x10dd4520 */
  push32(0x10ddeab6u); f_10dd4520();
  /* 10ddeab6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddeab9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddeabb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeabe mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10ddeac1 push eax */
  push32((uint32_t)(EAX));
  /* 10ddeac2 call 0x10dd4520 */
  push32(0x10ddeac7u); f_10dd4520();
  /* 10ddeac7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddeaca push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddeacc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeacf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10ddead2 push edx */
  push32((uint32_t)(EDX));
  /* 10ddead3 call 0x10dd4520 */
  push32(0x10ddead8u); f_10dd4520();
  /* 10ddead8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddeadb push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddeadd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeae0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10ddeae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddeae4 call 0x10dd4520 */
  push32(0x10ddeae9u); f_10dd4520();
  /* 10ddeae9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddeaec push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddeaee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeaf1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10ddeaf4 push eax */
  push32((uint32_t)(EAX));
  /* 10ddeaf5 call 0x10dd4520 */
  push32(0x10ddeafau); f_10dd4520();
  /* 10ddeafa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddeafd push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddeaff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeb02 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10ddeb08 push edx */
  push32((uint32_t)(EDX));
  /* 10ddeb09 call 0x10dd4520 */
  push32(0x10ddeb0eu); f_10dd4520();
  /* 10ddeb0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddeb11 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddeb13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeb16 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10ddeb1c push ecx */
  push32((uint32_t)(ECX));
  /* 10ddeb1d call 0x10dd4520 */
  push32(0x10ddeb22u); f_10dd4520();
  /* 10ddeb22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddeb25 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddeb27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeb2a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10ddeb30 push eax */
  push32((uint32_t)(EAX));
  /* 10ddeb31 call 0x10dd4520 */
  push32(0x10ddeb36u); f_10dd4520();
  /* 10ddeb36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddeb39 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddeb3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeb3e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10ddeb44 push edx */
  push32((uint32_t)(EDX));
  /* 10ddeb45 call 0x10dd4520 */
  push32(0x10ddeb4au); f_10dd4520();
  /* 10ddeb4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddeb4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddeb4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeb52 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10ddeb58 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddeb59 call 0x10dd4520 */
  push32(0x10ddeb5eu); f_10dd4520();
  /* 10ddeb5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddeb61 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddeb63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeb66 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10ddeb6c push eax */
  push32((uint32_t)(EAX));
  /* 10ddeb6d call 0x10dd4520 */
  push32(0x10ddeb72u); f_10dd4520();
  /* 10ddeb72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddeb75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddeb77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeb7a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10ddeb80 push edx */
  push32((uint32_t)(EDX));
  /* 10ddeb81 call 0x10dd4520 */
  push32(0x10ddeb86u); f_10dd4520();
  /* 10ddeb86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddeb89 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddeb8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeb8e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10ddeb94 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddeb95 call 0x10dd4520 */
  push32(0x10ddeb9au); f_10dd4520();
  /* 10ddeb9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddeb9d push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddeb9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeba2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10ddeba8 push eax */
  push32((uint32_t)(EAX));
  /* 10ddeba9 call 0x10dd4520 */
  push32(0x10ddebaeu); f_10dd4520();
  /* 10ddebae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddebb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddebb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddebb6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10ddebbc push edx */
  push32((uint32_t)(EDX));
  /* 10ddebbd call 0x10dd4520 */
  push32(0x10ddebc2u); f_10dd4520();
  /* 10ddebc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddebc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddebc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddebca mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10ddebd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddebd1 call 0x10dd4520 */
  push32(0x10ddebd6u); f_10dd4520();
  /* 10ddebd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddebd9:;
  /* 10ddebd9 pop ebp */
  EBP = (pop32());
  /* 10ddebda ret  */
  ESPCHK(0x10dde8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebe0 @ 0x10ddebe0 (678 bytes, 180 insns) */
void f_10ddebe0(void) {
  FTRACE(0x10ddebe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddebe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddebe1 mov ebp, esp */
  EBP = (ESP);
  /* 10ddebe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddebe6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ddebed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddebef mov ax, word ptr [0x10dff802] */
  AX = (r16((uint32_t)(0x10dff802)));
  /* 10ddebf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddebf8 cmp dword ptr [0x10dff7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddebff je 0x10dded5a */
  if (C.zf) goto L_10dded5a;
  /* 10ddec05 push 0x10dff7d0 */
  push32((uint32_t)(0x10dff7d0u));
  /* 10ddec0a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10ddec0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddec0f push ecx */
  push32((uint32_t)(ECX));
  /* 10ddec10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddec12 call 0x10de1c50 */
  push32(0x10ddec17u); f_10de1c50();
  /* 10ddec17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddec1a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddec1d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ddec1f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ddec22 push 0x10dff7d4 */
  push32((uint32_t)(0x10dff7d4u));
  /* 10ddec27 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10ddec29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddec2c push eax */
  push32((uint32_t)(EAX));
  /* 10ddec2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddec2f call 0x10de1c50 */
  push32(0x10ddec34u); f_10de1c50();
  /* 10ddec34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddec37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddec3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddec3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddec3f push 0x10dff7d8 */
  push32((uint32_t)(0x10dff7d8u));
  /* 10ddec44 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10ddec46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddec49 push edx */
  push32((uint32_t)(EDX));
  /* 10ddec4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddec4c call 0x10de1c50 */
  push32(0x10ddec51u); f_10de1c50();
  /* 10ddec51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddec54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddec57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddec59 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddec5c mov edx, dword ptr [0x10dff7d8] */
  EDX = (r32((uint32_t)(0x10dff7d8)));
  /* 10ddec62 push edx */
  push32((uint32_t)(EDX));
  /* 10ddec63 call 0x10ddee90 */
  push32(0x10ddec68u); f_10ddee90();
  /* 10ddec68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddec6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddec6f je 0x10ddecc9 */
  if (C.zf) goto L_10ddecc9;
  /* 10ddec71 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddec73 mov eax, dword ptr [0x10dff7d0] */
  EAX = (r32((uint32_t)(0x10dff7d0)));
  /* 10ddec78 push eax */
  push32((uint32_t)(EAX));
  /* 10ddec79 call 0x10dd4520 */
  push32(0x10ddec7eu); f_10dd4520();
  /* 10ddec7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddec81 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddec83 mov ecx, dword ptr [0x10dff7d4] */
  ECX = (r32((uint32_t)(0x10dff7d4)));
  /* 10ddec89 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddec8a call 0x10dd4520 */
  push32(0x10ddec8fu); f_10dd4520();
  /* 10ddec8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddec92 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddec94 mov edx, dword ptr [0x10dff7d8] */
  EDX = (r32((uint32_t)(0x10dff7d8)));
  /* 10ddec9a push edx */
  push32((uint32_t)(EDX));
  /* 10ddec9b call 0x10dd4520 */
  push32(0x10ddeca0u); f_10dd4520();
  /* 10ddeca0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddeca3 mov dword ptr [0x10dff7d0], 0 */
  w32((uint32_t)(0x10dff7d0), (0x0u));
  /* 10ddecad mov dword ptr [0x10dff7d4], 0 */
  w32((uint32_t)(0x10dff7d4), (0x0u));
  /* 10ddecb7 mov dword ptr [0x10dff7d8], 0 */
  w32((uint32_t)(0x10dff7d8), (0x0u));
  /* 10ddecc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddecc4 jmp 0x10ddee82 */
  goto L_10ddee82;
L_10ddecc9:;
  /* 10ddecc9 mov eax, dword ptr [0x10dfed88] */
  EAX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddecce cmp dword ptr [eax], 0x10dfed50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10dfed50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddecd4 je 0x10dded10 */
  if (C.zf) goto L_10dded10;
  /* 10ddecd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddecd8 mov ecx, dword ptr [0x10dfed88] */
  ECX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddecde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ddece0 push edx */
  push32((uint32_t)(EDX));
  /* 10ddece1 call 0x10dd4520 */
  push32(0x10ddece6u); f_10dd4520();
  /* 10ddece6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddece9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddeceb mov eax, dword ptr [0x10dfed88] */
  EAX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddecf0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ddecf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddecf4 call 0x10dd4520 */
  push32(0x10ddecf9u); f_10dd4520();
  /* 10ddecf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddecfc push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddecfe mov edx, dword ptr [0x10dfed88] */
  EDX = (r32((uint32_t)(0x10dfed88)));
  /* 10dded04 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10dded07 push eax */
  push32((uint32_t)(EAX));
  /* 10dded08 call 0x10dd4520 */
  push32(0x10dded0du); f_10dd4520();
  /* 10dded0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dded10:;
  /* 10dded10 mov ecx, dword ptr [0x10dfed88] */
  ECX = (r32((uint32_t)(0x10dfed88)));
  /* 10dded16 mov edx, dword ptr [0x10dff7d0] */
  EDX = (r32((uint32_t)(0x10dff7d0)));
  /* 10dded1c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10dded1e mov eax, dword ptr [0x10dfed88] */
  EAX = (r32((uint32_t)(0x10dfed88)));
  /* 10dded23 mov ecx, dword ptr [0x10dff7d4] */
  ECX = (r32((uint32_t)(0x10dff7d4)));
  /* 10dded29 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10dded2c mov edx, dword ptr [0x10dfed88] */
  EDX = (r32((uint32_t)(0x10dfed88)));
  /* 10dded32 mov eax, dword ptr [0x10dff7d8] */
  EAX = (r32((uint32_t)(0x10dff7d8)));
  /* 10dded37 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10dded3a mov ecx, dword ptr [0x10dfed88] */
  ECX = (r32((uint32_t)(0x10dfed88)));
  /* 10dded40 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dded42 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10dded44 mov byte ptr [0x10dfdea8], al */
  w8((uint32_t)(0x10dfdea8), (AL));
  /* 10dded49 mov dword ptr [0x10dfdeac], 1 */
  w32((uint32_t)(0x10dfdeac), (0x1u));
  /* 10dded53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dded55 jmp 0x10ddee82 */
  goto L_10ddee82;
L_10dded5a:;
  /* 10dded5a push 2 */
  push32((uint32_t)(0x2u));
  /* 10dded5c mov ecx, dword ptr [0x10dff7d0] */
  ECX = (r32((uint32_t)(0x10dff7d0)));
  /* 10dded62 push ecx */
  push32((uint32_t)(ECX));
  /* 10dded63 call 0x10dd4520 */
  push32(0x10dded68u); f_10dd4520();
  /* 10dded68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dded6b push 2 */
  push32((uint32_t)(0x2u));
  /* 10dded6d mov edx, dword ptr [0x10dff7d4] */
  EDX = (r32((uint32_t)(0x10dff7d4)));
  /* 10dded73 push edx */
  push32((uint32_t)(EDX));
  /* 10dded74 call 0x10dd4520 */
  push32(0x10dded79u); f_10dd4520();
  /* 10dded79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dded7c push 2 */
  push32((uint32_t)(0x2u));
  /* 10dded7e mov eax, dword ptr [0x10dff7d8] */
  EAX = (r32((uint32_t)(0x10dff7d8)));
  /* 10dded83 push eax */
  push32((uint32_t)(EAX));
  /* 10dded84 call 0x10dd4520 */
  push32(0x10dded89u); f_10dd4520();
  /* 10dded89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dded8c mov dword ptr [0x10dff7d0], 0 */
  w32((uint32_t)(0x10dff7d0), (0x0u));
  /* 10dded96 mov dword ptr [0x10dff7d4], 0 */
  w32((uint32_t)(0x10dff7d4), (0x0u));
  /* 10ddeda0 mov dword ptr [0x10dff7d8], 0 */
  w32((uint32_t)(0x10dff7d8), (0x0u));
  /* 10ddedaa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10ddedaf push 0x10dfb1f4 */
  push32((uint32_t)(0x10dfb1f4u));
  /* 10ddedb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddedb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddedb8 call 0x10dd3a90 */
  push32(0x10ddedbdu); f_10dd3a90();
  /* 10ddedbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddedc0 mov ecx, dword ptr [0x10dfed88] */
  ECX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddedc6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ddedc8 mov edx, dword ptr [0x10dfed88] */
  EDX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddedce cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddedd1 jne 0x10ddeddb */
  if (!C.zf) goto L_10ddeddb;
  /* 10ddedd3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddedd6 jmp 0x10ddee82 */
  goto L_10ddee82;
L_10ddeddb:;
  /* 10ddeddb push 0x10dfb1c4 */
  push32((uint32_t)(0x10dfb1c4u));
  /* 10ddede0 mov eax, dword ptr [0x10dfed88] */
  EAX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddede5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ddede7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddede8 call 0x10dd6a40 */
  push32(0x10ddededu); f_10dd6a40();
  /* 10ddeded add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddedf0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10ddedf5 push 0x10dfb1f4 */
  push32((uint32_t)(0x10dfb1f4u));
  /* 10ddedfa push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddedfc push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddedfe call 0x10dd3a90 */
  push32(0x10ddee03u); f_10dd3a90();
  /* 10ddee03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddee06 mov edx, dword ptr [0x10dfed88] */
  EDX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddee0c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10ddee0f mov eax, dword ptr [0x10dfed88] */
  EAX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddee14 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddee18 jne 0x10ddee1f */
  if (!C.zf) goto L_10ddee1f;
  /* 10ddee1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddee1d jmp 0x10ddee82 */
  goto L_10ddee82;
L_10ddee1f:;
  /* 10ddee1f mov ecx, dword ptr [0x10dfed88] */
  ECX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddee25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ddee28 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10ddee2b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10ddee30 push 0x10dfb1f4 */
  push32((uint32_t)(0x10dfb1f4u));
  /* 10ddee35 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddee37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddee39 call 0x10dd3a90 */
  push32(0x10ddee3eu); f_10dd3a90();
  /* 10ddee3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddee41 mov ecx, dword ptr [0x10dfed88] */
  ECX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddee47 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10ddee4a mov edx, dword ptr [0x10dfed88] */
  EDX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddee50 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddee54 jne 0x10ddee5b */
  if (!C.zf) goto L_10ddee5b;
  /* 10ddee56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddee59 jmp 0x10ddee82 */
  goto L_10ddee82;
L_10ddee5b:;
  /* 10ddee5b mov eax, dword ptr [0x10dfed88] */
  EAX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddee60 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ddee63 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10ddee66 mov edx, dword ptr [0x10dfed88] */
  EDX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddee6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ddee6e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ddee70 mov byte ptr [0x10dfdea8], cl */
  w8((uint32_t)(0x10dfdea8), (CL));
  /* 10ddee76 mov dword ptr [0x10dfdeac], 1 */
  w32((uint32_t)(0x10dfdeac), (0x1u));
  /* 10ddee80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ddee82:;
  /* 10ddee82 mov esp, ebp */
  ESP = (EBP);
  /* 10ddee84 pop ebp */
  EBP = (pop32());
  /* 10ddee85 ret  */
  ESPCHK(0x10ddebe0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10ddee90 (125 bytes, 49 insns) */
void f_10ddee90(void) {
  FTRACE(0x10ddee90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddee90 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddee91 mov ebp, esp */
  EBP = (ESP);
  /* 10ddee93 push ecx */
  push32((uint32_t)(ECX));
L_10ddee94:;
  /* 10ddee94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddee97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ddee9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddee9c je 0x10ddef09 */
  if (C.zf) goto L_10ddef09;
  /* 10ddee9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeea1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ddeea4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddeea7 jl 0x10ddeecd */
  if ((C.sf!=C.of)) goto L_10ddeecd;
  /* 10ddeea9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeeac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ddeeaf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddeeb2 jg 0x10ddeecd */
  if ((!C.zf&&C.sf==C.of)) goto L_10ddeecd;
  /* 10ddeeb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeeb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ddeeba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddeebd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeec0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10ddeec2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeec5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddeec8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ddeecb jmp 0x10ddef07 */
  goto L_10ddef07;
L_10ddeecd:;
  /* 10ddeecd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeed0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ddeed3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddeed6 jne 0x10ddeefe */
  if (!C.zf) goto L_10ddeefe;
  /* 10ddeed8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddeedb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ddeede:;
  /* 10ddeede mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddeee1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddeee4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10ddeee7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ddeee9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddeeec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddeeef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ddeef2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddeef5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ddeef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddeefa jne 0x10ddeede */
  if (!C.zf) goto L_10ddeede;
  /* 10ddeefc jmp 0x10ddef07 */
  goto L_10ddef07;
L_10ddeefe:;
  /* 10ddeefe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddef01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddef04 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10ddef07:;
  /* 10ddef07 jmp 0x10ddee94 */
  goto L_10ddee94;
L_10ddef09:;
  /* 10ddef09 mov esp, ebp */
  ESP = (EBP);
  /* 10ddef0b pop ebp */
  EBP = (pop32());
  /* 10ddef0c ret  */
  ESPCHK(0x10ddee90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef10 @ 0x10ddef10 (304 bytes, 85 insns) */
void f_10ddef10(void) {
  FTRACE(0x10ddef10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddef10 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddef11 mov ebp, esp */
  EBP = (ESP);
  /* 10ddef13 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddef14 cmp dword ptr [0x10dff7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddef1b je 0x10ddefdc */
  if (C.zf) goto L_10ddefdc;
  /* 10ddef21 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10ddef23 push 0x10dfb200 */
  push32((uint32_t)(0x10dfb200u));
  /* 10ddef28 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddef2a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10ddef2c push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddef2e call 0x10dd3ea0 */
  push32(0x10ddef33u); f_10dd3ea0();
  /* 10ddef33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddef36 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddef39 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddef3d jne 0x10ddef49 */
  if (!C.zf) goto L_10ddef49;
  /* 10ddef3f mov eax, 1 */
  EAX = (0x1u);
  /* 10ddef44 jmp 0x10ddf03c */
  goto L_10ddf03c;
L_10ddef49:;
  /* 10ddef49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddef4c push eax */
  push32((uint32_t)(EAX));
  /* 10ddef4d call 0x10ddf040 */
  push32(0x10ddef52u); f_10ddf040();
  /* 10ddef52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddef55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddef57 je 0x10ddef7d */
  if (C.zf) goto L_10ddef7d;
  /* 10ddef59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddef5c push ecx */
  push32((uint32_t)(ECX));
  /* 10ddef5d call 0x10ddf2d0 */
  push32(0x10ddef62u); f_10ddf2d0();
  /* 10ddef62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddef65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddef67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddef6a push edx */
  push32((uint32_t)(EDX));
  /* 10ddef6b call 0x10dd4520 */
  push32(0x10ddef70u); f_10dd4520();
  /* 10ddef70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddef73 mov eax, 1 */
  EAX = (0x1u);
  /* 10ddef78 jmp 0x10ddf03c */
  goto L_10ddf03c;
L_10ddef7d:;
  /* 10ddef7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddef80 mov ecx, dword ptr [0x10dfed88] */
  ECX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddef86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ddef88 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ddef8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddef8d mov ecx, dword ptr [0x10dfed88] */
  ECX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddef93 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ddef96 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10ddef99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddef9c mov ecx, dword ptr [0x10dfed88] */
  ECX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddefa2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ddefa5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10ddefa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddefab mov dword ptr [0x10dfed88], eax */
  w32((uint32_t)(0x10dfed88), (EAX));
  /* 10ddefb0 mov ecx, dword ptr [0x10dff7dc] */
  ECX = (r32((uint32_t)(0x10dff7dc)));
  /* 10ddefb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddefb7 call 0x10ddf2d0 */
  push32(0x10ddefbcu); f_10ddf2d0();
  /* 10ddefbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddefbf push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddefc1 mov edx, dword ptr [0x10dff7dc] */
  EDX = (r32((uint32_t)(0x10dff7dc)));
  /* 10ddefc7 push edx */
  push32((uint32_t)(EDX));
  /* 10ddefc8 call 0x10dd4520 */
  push32(0x10ddefcdu); f_10dd4520();
  /* 10ddefcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddefd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddefd3 mov dword ptr [0x10dff7dc], eax */
  w32((uint32_t)(0x10dff7dc), (EAX));
  /* 10ddefd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddefda jmp 0x10ddf03c */
  goto L_10ddf03c;
L_10ddefdc:;
  /* 10ddefdc mov ecx, dword ptr [0x10dfed88] */
  ECX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddefe2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ddefe4 mov dword ptr [0x10dfed58], edx */
  w32((uint32_t)(0x10dfed58), (EDX));
  /* 10ddefea mov eax, dword ptr [0x10dfed88] */
  EAX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddefef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ddeff2 mov dword ptr [0x10dfed5c], ecx */
  w32((uint32_t)(0x10dfed5c), (ECX));
  /* 10ddeff8 mov edx, dword ptr [0x10dfed88] */
  EDX = (r32((uint32_t)(0x10dfed88)));
  /* 10ddeffe mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ddf001 mov dword ptr [0x10dfed60], eax */
  w32((uint32_t)(0x10dfed60), (EAX));
  /* 10ddf006 mov dword ptr [0x10dfed88], 0x10dfed58 */
  w32((uint32_t)(0x10dfed88), (0x10dfed58u));
  /* 10ddf010 mov ecx, dword ptr [0x10dff7dc] */
  ECX = (r32((uint32_t)(0x10dff7dc)));
  /* 10ddf016 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddf017 call 0x10ddf2d0 */
  push32(0x10ddf01cu); f_10ddf2d0();
  /* 10ddf01c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf01f push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf021 mov edx, dword ptr [0x10dff7dc] */
  EDX = (r32((uint32_t)(0x10dff7dc)));
  /* 10ddf027 push edx */
  push32((uint32_t)(EDX));
  /* 10ddf028 call 0x10dd4520 */
  push32(0x10ddf02du); f_10dd4520();
  /* 10ddf02d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf030 mov dword ptr [0x10dff7dc], 0 */
  w32((uint32_t)(0x10dff7dc), (0x0u));
  /* 10ddf03a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ddf03c:;
  /* 10ddf03c mov esp, ebp */
  ESP = (EBP);
  /* 10ddf03e pop ebp */
  EBP = (pop32());
  /* 10ddf03f ret  */
  ESPCHK(0x10ddef10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f040 @ 0x10ddf040 (525 bytes, 200 insns) */
void f_10ddf040(void) {
  FTRACE(0x10ddf040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddf040 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddf041 mov ebp, esp */
  EBP = (ESP);
  /* 10ddf043 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddf046 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ddf04d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddf04f mov ax, word ptr [0x10dff7fc] */
  AX = (r16((uint32_t)(0x10dff7fc)));
  /* 10ddf055 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddf058 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf05c jne 0x10ddf066 */
  if (!C.zf) goto L_10ddf066;
  /* 10ddf05e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddf061 jmp 0x10ddf249 */
  goto L_10ddf249;
L_10ddf066:;
  /* 10ddf066 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf069 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf06c push ecx */
  push32((uint32_t)(ECX));
  /* 10ddf06d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10ddf06f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf072 push edx */
  push32((uint32_t)(EDX));
  /* 10ddf073 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddf075 call 0x10de1c50 */
  push32(0x10ddf07au); f_10de1c50();
  /* 10ddf07a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf07d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddf080 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf082 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddf085 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf088 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf08b push edx */
  push32((uint32_t)(EDX));
  /* 10ddf08c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10ddf08e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf091 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf092 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddf094 call 0x10de1c50 */
  push32(0x10ddf099u); f_10de1c50();
  /* 10ddf099 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf09c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddf09f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf0a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddf0a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf0a7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf0aa push edx */
  push32((uint32_t)(EDX));
  /* 10ddf0ab push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10ddf0ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf0b0 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf0b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddf0b3 call 0x10de1c50 */
  push32(0x10ddf0b8u); f_10de1c50();
  /* 10ddf0b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf0bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddf0be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf0c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddf0c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf0c6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf0c9 push edx */
  push32((uint32_t)(EDX));
  /* 10ddf0ca push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10ddf0cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf0cf push eax */
  push32((uint32_t)(EAX));
  /* 10ddf0d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddf0d2 call 0x10de1c50 */
  push32(0x10ddf0d7u); f_10de1c50();
  /* 10ddf0d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf0da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddf0dd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf0df mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddf0e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf0e5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf0e8 push edx */
  push32((uint32_t)(EDX));
  /* 10ddf0e9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10ddf0eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf0ee push eax */
  push32((uint32_t)(EAX));
  /* 10ddf0ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddf0f1 call 0x10de1c50 */
  push32(0x10ddf0f6u); f_10de1c50();
  /* 10ddf0f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf0f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddf0fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf0fe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddf101 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf104 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ddf107 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf108 call 0x10ddf250 */
  push32(0x10ddf10du); f_10ddf250();
  /* 10ddf10d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf110 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf113 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf116 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddf117 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10ddf119 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf11c push edx */
  push32((uint32_t)(EDX));
  /* 10ddf11d push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddf11f call 0x10de1c50 */
  push32(0x10ddf124u); f_10de1c50();
  /* 10ddf124 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf127 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddf12a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf12c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddf12f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf132 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf135 push edx */
  push32((uint32_t)(EDX));
  /* 10ddf136 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10ddf138 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf13b push eax */
  push32((uint32_t)(EAX));
  /* 10ddf13c push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddf13e call 0x10de1c50 */
  push32(0x10ddf143u); f_10de1c50();
  /* 10ddf143 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf146 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddf149 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf14b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddf14e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf151 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf154 push edx */
  push32((uint32_t)(EDX));
  /* 10ddf155 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10ddf157 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf15a push eax */
  push32((uint32_t)(EAX));
  /* 10ddf15b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddf15d call 0x10de1c50 */
  push32(0x10ddf162u); f_10de1c50();
  /* 10ddf162 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf165 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddf168 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf16a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddf16d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf170 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf173 push edx */
  push32((uint32_t)(EDX));
  /* 10ddf174 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ddf176 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf179 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf17a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddf17c call 0x10de1c50 */
  push32(0x10ddf181u); f_10de1c50();
  /* 10ddf181 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf184 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddf187 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf189 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddf18c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf18f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf192 push edx */
  push32((uint32_t)(EDX));
  /* 10ddf193 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10ddf195 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf198 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf199 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddf19b call 0x10de1c50 */
  push32(0x10ddf1a0u); f_10de1c50();
  /* 10ddf1a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf1a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddf1a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf1a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddf1ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf1ae add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf1b1 push edx */
  push32((uint32_t)(EDX));
  /* 10ddf1b2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10ddf1b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf1b7 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf1b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddf1ba call 0x10de1c50 */
  push32(0x10ddf1bfu); f_10de1c50();
  /* 10ddf1bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf1c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddf1c5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf1c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddf1ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf1cd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf1d0 push edx */
  push32((uint32_t)(EDX));
  /* 10ddf1d1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10ddf1d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf1d6 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf1d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddf1d9 call 0x10de1c50 */
  push32(0x10ddf1deu); f_10de1c50();
  /* 10ddf1de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf1e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddf1e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf1e6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddf1e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf1ec add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf1ef push edx */
  push32((uint32_t)(EDX));
  /* 10ddf1f0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10ddf1f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf1f5 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf1f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddf1f8 call 0x10de1c50 */
  push32(0x10ddf1fdu); f_10de1c50();
  /* 10ddf1fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf200 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddf203 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf205 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddf208 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf20b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf20e push edx */
  push32((uint32_t)(EDX));
  /* 10ddf20f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10ddf211 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf214 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf215 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddf217 call 0x10de1c50 */
  push32(0x10ddf21cu); f_10de1c50();
  /* 10ddf21c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf21f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddf222 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf224 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddf227 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf22a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf22d push edx */
  push32((uint32_t)(EDX));
  /* 10ddf22e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10ddf230 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf233 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf234 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddf236 call 0x10de1c50 */
  push32(0x10ddf23bu); f_10de1c50();
  /* 10ddf23b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf23e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddf241 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf243 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ddf246 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10ddf249:;
  /* 10ddf249 mov esp, ebp */
  ESP = (EBP);
  /* 10ddf24b pop ebp */
  EBP = (pop32());
  /* 10ddf24c ret  */
  ESPCHK(0x10ddf040u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10ddf250 (125 bytes, 49 insns) */
void f_10ddf250(void) {
  FTRACE(0x10ddf250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddf250 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddf251 mov ebp, esp */
  EBP = (ESP);
  /* 10ddf253 push ecx */
  push32((uint32_t)(ECX));
L_10ddf254:;
  /* 10ddf254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf257 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ddf25a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddf25c je 0x10ddf2c9 */
  if (C.zf) goto L_10ddf2c9;
  /* 10ddf25e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf261 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ddf264 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf267 jl 0x10ddf28d */
  if ((C.sf!=C.of)) goto L_10ddf28d;
  /* 10ddf269 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf26c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ddf26f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf272 jg 0x10ddf28d */
  if ((!C.zf&&C.sf==C.of)) goto L_10ddf28d;
  /* 10ddf274 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf277 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ddf27a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddf27d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf280 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10ddf282 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf285 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf288 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ddf28b jmp 0x10ddf2c7 */
  goto L_10ddf2c7;
L_10ddf28d:;
  /* 10ddf28d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf290 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ddf293 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf296 jne 0x10ddf2be */
  if (!C.zf) goto L_10ddf2be;
  /* 10ddf298 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf29b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ddf29e:;
  /* 10ddf29e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf2a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf2a4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10ddf2a7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ddf2a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf2ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf2af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ddf2b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf2b5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ddf2b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddf2ba jne 0x10ddf29e */
  if (!C.zf) goto L_10ddf29e;
  /* 10ddf2bc jmp 0x10ddf2c7 */
  goto L_10ddf2c7;
L_10ddf2be:;
  /* 10ddf2be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf2c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf2c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10ddf2c7:;
  /* 10ddf2c7 jmp 0x10ddf254 */
  goto L_10ddf254;
L_10ddf2c9:;
  /* 10ddf2c9 mov esp, ebp */
  ESP = (EBP);
  /* 10ddf2cb pop ebp */
  EBP = (pop32());
  /* 10ddf2cc ret  */
  ESPCHK(0x10ddf250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2d0 @ 0x10ddf2d0 (147 bytes, 52 insns) */
void f_10ddf2d0(void) {
  FTRACE(0x10ddf2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddf2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddf2d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ddf2d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf2d7 jne 0x10ddf2de */
  if (!C.zf) goto L_10ddf2de;
  /* 10ddf2d9 jmp 0x10ddf361 */
  goto L_10ddf361;
L_10ddf2de:;
  /* 10ddf2de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf2e1 cmp dword ptr [eax + 0xc], 0x10dff838 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10dff838u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf2e8 je 0x10ddf361 */
  if (C.zf) goto L_10ddf361;
  /* 10ddf2ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf2ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf2ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ddf2f2 push edx */
  push32((uint32_t)(EDX));
  /* 10ddf2f3 call 0x10dd4520 */
  push32(0x10ddf2f8u); f_10dd4520();
  /* 10ddf2f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf2fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf2fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf300 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ddf303 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddf304 call 0x10dd4520 */
  push32(0x10ddf309u); f_10dd4520();
  /* 10ddf309 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf30c push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf30e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf311 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ddf314 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf315 call 0x10dd4520 */
  push32(0x10ddf31au); f_10dd4520();
  /* 10ddf31a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf31d push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf31f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf322 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10ddf325 push edx */
  push32((uint32_t)(EDX));
  /* 10ddf326 call 0x10dd4520 */
  push32(0x10ddf32bu); f_10dd4520();
  /* 10ddf32b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf32e push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf330 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf333 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ddf336 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddf337 call 0x10dd4520 */
  push32(0x10ddf33cu); f_10dd4520();
  /* 10ddf33c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf33f push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf341 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf344 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10ddf347 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf348 call 0x10dd4520 */
  push32(0x10ddf34du); f_10dd4520();
  /* 10ddf34d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf350 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf352 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf355 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10ddf358 push edx */
  push32((uint32_t)(EDX));
  /* 10ddf359 call 0x10dd4520 */
  push32(0x10ddf35eu); f_10dd4520();
  /* 10ddf35e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddf361:;
  /* 10ddf361 pop ebp */
  EBP = (pop32());
  /* 10ddf362 ret  */
  ESPCHK(0x10ddf2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f370 @ 0x10ddf370 (928 bytes, 284 insns) */
void f_10ddf370(void) {
  FTRACE(0x10ddf370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddf370 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddf371 mov ebp, esp */
  EBP = (ESP);
  /* 10ddf373 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddf376 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10ddf37d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10ddf384 cmp dword ptr [0x10dff7a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff7a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf38b je 0x10ddf6c1 */
  if (C.zf) goto L_10ddf6c1;
  /* 10ddf391 cmp dword ptr [0x10dff7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf398 jne 0x10ddf3c0 */
  if (!C.zf) goto L_10ddf3c0;
  /* 10ddf39a push 0x10dff7b0 */
  push32((uint32_t)(0x10dff7b0u));
  /* 10ddf39f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10ddf3a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddf3a6 mov ax, word ptr [0x10dff7f4] */
  AX = (r16((uint32_t)(0x10dff7f4)));
  /* 10ddf3ac push eax */
  push32((uint32_t)(EAX));
  /* 10ddf3ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddf3af call 0x10de1c50 */
  push32(0x10ddf3b4u); f_10de1c50();
  /* 10ddf3b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf3b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddf3b9 je 0x10ddf3c0 */
  if (C.zf) goto L_10ddf3c0;
  /* 10ddf3bb jmp 0x10ddf682 */
  goto L_10ddf682;
L_10ddf3c0:;
  /* 10ddf3c0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10ddf3c2 push 0x10dfb20c */
  push32((uint32_t)(0x10dfb20cu));
  /* 10ddf3c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf3c9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10ddf3ce call 0x10dd3a90 */
  push32(0x10ddf3d3u); f_10dd3a90();
  /* 10ddf3d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf3d6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10ddf3d9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10ddf3db push 0x10dfb20c */
  push32((uint32_t)(0x10dfb20cu));
  /* 10ddf3e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf3e2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10ddf3e7 call 0x10dd3a90 */
  push32(0x10ddf3ecu); f_10dd3a90();
  /* 10ddf3ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf3ef mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ddf3f2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10ddf3f4 push 0x10dfb20c */
  push32((uint32_t)(0x10dfb20cu));
  /* 10ddf3f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf3fb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10ddf400 call 0x10dd3a90 */
  push32(0x10ddf405u); f_10dd3a90();
  /* 10ddf405 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf408 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10ddf40b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10ddf40d push 0x10dfb20c */
  push32((uint32_t)(0x10dfb20cu));
  /* 10ddf412 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf414 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10ddf419 call 0x10dd3a90 */
  push32(0x10ddf41eu); f_10dd3a90();
  /* 10ddf41e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf421 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ddf424 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf428 je 0x10ddf43c */
  if (C.zf) goto L_10ddf43c;
  /* 10ddf42a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf42e je 0x10ddf43c */
  if (C.zf) goto L_10ddf43c;
  /* 10ddf430 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf434 je 0x10ddf43c */
  if (C.zf) goto L_10ddf43c;
  /* 10ddf436 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf43a jne 0x10ddf441 */
  if (!C.zf) goto L_10ddf441;
L_10ddf43c:;
  /* 10ddf43c jmp 0x10ddf682 */
  goto L_10ddf682;
L_10ddf441:;
  /* 10ddf441 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ddf444 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10ddf447 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10ddf44e jmp 0x10ddf459 */
  goto L_10ddf459;
L_10ddf450:;
  /* 10ddf450 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddf453 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf456 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10ddf459:;
  /* 10ddf459 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf460 jge 0x10ddf475 */
  if ((C.sf==C.of)) goto L_10ddf475;
  /* 10ddf462 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ddf465 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10ddf468 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10ddf46a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ddf46d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf470 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ddf473 jmp 0x10ddf450 */
  goto L_10ddf450;
L_10ddf475:;
  /* 10ddf475 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10ddf478 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf479 mov ecx, dword ptr [0x10dff7b0] */
  ECX = (r32((uint32_t)(0x10dff7b0)));
  /* 10ddf47f push ecx */
  push32((uint32_t)(ECX));
  /* 10ddf480 call dword ptr [0x10e02328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02328))), 0x10ddf486u);
  /* 10ddf486 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddf488 jne 0x10ddf48f */
  if (!C.zf) goto L_10ddf48f;
  /* 10ddf48a jmp 0x10ddf682 */
  goto L_10ddf682;
L_10ddf48f:;
  /* 10ddf48f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf493 jbe 0x10ddf49a */
  if ((C.cf||C.zf)) goto L_10ddf49a;
  /* 10ddf495 jmp 0x10ddf682 */
  goto L_10ddf682;
L_10ddf49a:;
  /* 10ddf49a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ddf49d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ddf4a3 mov dword ptr [0x10dfdea4], edx */
  w32((uint32_t)(0x10dfdea4), (EDX));
  /* 10ddf4a9 cmp dword ptr [0x10dfdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dfdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf4b0 jle 0x10ddf509 */
  if ((C.zf||C.sf!=C.of)) goto L_10ddf509;
  /* 10ddf4b2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10ddf4b5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ddf4b8 jmp 0x10ddf4c3 */
  goto L_10ddf4c3;
L_10ddf4ba:;
  /* 10ddf4ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ddf4bd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf4c0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10ddf4c3:;
  /* 10ddf4c3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ddf4c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddf4c8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ddf4ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddf4cc je 0x10ddf509 */
  if (C.zf) goto L_10ddf509;
  /* 10ddf4ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ddf4d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ddf4d3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10ddf4d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddf4d8 je 0x10ddf509 */
  if (C.zf) goto L_10ddf509;
  /* 10ddf4da mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ddf4dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf4df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ddf4e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ddf4e4 jmp 0x10ddf4ef */
  goto L_10ddf4ef;
L_10ddf4e6:;
  /* 10ddf4e6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddf4e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf4ec mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10ddf4ef:;
  /* 10ddf4ef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ddf4f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf4f4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10ddf4f7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf4fa jg 0x10ddf507 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ddf507;
  /* 10ddf4fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ddf4ff add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf502 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10ddf505 jmp 0x10ddf4e6 */
  goto L_10ddf4e6;
L_10ddf507:;
  /* 10ddf507 jmp 0x10ddf4ba */
  goto L_10ddf4ba;
L_10ddf509:;
  /* 10ddf509 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddf50b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddf50d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddf50f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ddf512 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf515 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf516 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10ddf51b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ddf51e push ecx */
  push32((uint32_t)(ECX));
  /* 10ddf51f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddf521 call 0x10ddbcc0 */
  push32(0x10ddf526u); f_10ddbcc0();
  /* 10ddf526 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddf52b jne 0x10ddf532 */
  if (!C.zf) goto L_10ddf532;
  /* 10ddf52d jmp 0x10ddf682 */
  goto L_10ddf682;
L_10ddf532:;
  /* 10ddf532 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ddf535 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10ddf53a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ddf53d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ddf540 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10ddf547 jmp 0x10ddf552 */
  goto L_10ddf552;
L_10ddf549:;
  /* 10ddf549 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddf54c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf54f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10ddf552:;
  /* 10ddf552 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf559 jge 0x10ddf570 */
  if ((C.sf==C.of)) goto L_10ddf570;
  /* 10ddf55b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ddf55e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10ddf562 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10ddf565 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ddf568 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf56b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ddf56e jmp 0x10ddf549 */
  goto L_10ddf549;
L_10ddf570:;
  /* 10ddf570 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddf572 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddf574 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ddf577 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf57a push edx */
  push32((uint32_t)(EDX));
  /* 10ddf57b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10ddf580 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ddf583 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf584 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddf586 call 0x10de1ef0 */
  push32(0x10ddf58bu); f_10de1ef0();
  /* 10ddf58b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf58e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddf590 jne 0x10ddf597 */
  if (!C.zf) goto L_10ddf597;
  /* 10ddf592 jmp 0x10ddf682 */
  goto L_10ddf682;
L_10ddf597:;
  /* 10ddf597 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ddf59a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10ddf59f cmp dword ptr [0x10dfdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dfdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf5a6 jle 0x10ddf603 */
  if ((C.zf||C.sf!=C.of)) goto L_10ddf603;
  /* 10ddf5a8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10ddf5ab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ddf5ae jmp 0x10ddf5b9 */
  goto L_10ddf5b9;
L_10ddf5b0:;
  /* 10ddf5b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ddf5b3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf5b6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10ddf5b9:;
  /* 10ddf5b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ddf5bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ddf5be mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ddf5c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddf5c2 je 0x10ddf603 */
  if (C.zf) goto L_10ddf603;
  /* 10ddf5c4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ddf5c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf5c9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10ddf5cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddf5ce je 0x10ddf603 */
  if (C.zf) goto L_10ddf603;
  /* 10ddf5d0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ddf5d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddf5d5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ddf5d7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ddf5da jmp 0x10ddf5e5 */
  goto L_10ddf5e5;
L_10ddf5dc:;
  /* 10ddf5dc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddf5df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf5e2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10ddf5e5:;
  /* 10ddf5e5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ddf5e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddf5ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10ddf5ed cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf5f0 jg 0x10ddf601 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ddf601;
  /* 10ddf5f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ddf5f5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ddf5f8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10ddf5ff jmp 0x10ddf5dc */
  goto L_10ddf5dc;
L_10ddf601:;
  /* 10ddf601 jmp 0x10ddf5b0 */
  goto L_10ddf5b0;
L_10ddf603:;
  /* 10ddf603 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ddf606 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf609 mov dword ptr [0x10dfdc98], eax */
  w32((uint32_t)(0x10dfdc98), (EAX));
  /* 10ddf60e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ddf611 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf614 mov dword ptr [0x10dfdc9c], ecx */
  w32((uint32_t)(0x10dfdc9c), (ECX));
  /* 10ddf61a cmp dword ptr [0x10dff7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf621 je 0x10ddf634 */
  if (C.zf) goto L_10ddf634;
  /* 10ddf623 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf625 mov edx, dword ptr [0x10dff7e0] */
  EDX = (r32((uint32_t)(0x10dff7e0)));
  /* 10ddf62b push edx */
  push32((uint32_t)(EDX));
  /* 10ddf62c call 0x10dd4520 */
  push32(0x10ddf631u); f_10dd4520();
  /* 10ddf631 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddf634:;
  /* 10ddf634 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ddf637 mov dword ptr [0x10dff7e0], eax */
  w32((uint32_t)(0x10dff7e0), (EAX));
  /* 10ddf63c cmp dword ptr [0x10dff7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf643 je 0x10ddf656 */
  if (C.zf) goto L_10ddf656;
  /* 10ddf645 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf647 mov ecx, dword ptr [0x10dff7e4] */
  ECX = (r32((uint32_t)(0x10dff7e4)));
  /* 10ddf64d push ecx */
  push32((uint32_t)(ECX));
  /* 10ddf64e call 0x10dd4520 */
  push32(0x10ddf653u); f_10dd4520();
  /* 10ddf653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddf656:;
  /* 10ddf656 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ddf659 mov dword ptr [0x10dff7e4], edx */
  w32((uint32_t)(0x10dff7e4), (EDX));
  /* 10ddf65f push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf661 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ddf664 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf665 call 0x10dd4520 */
  push32(0x10ddf66au); f_10dd4520();
  /* 10ddf66a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf66d push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf66f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ddf672 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddf673 call 0x10dd4520 */
  push32(0x10ddf678u); f_10dd4520();
  /* 10ddf678 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf67b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddf67d jmp 0x10ddf70c */
  goto L_10ddf70c;
L_10ddf682:;
  /* 10ddf682 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf684 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ddf687 push edx */
  push32((uint32_t)(EDX));
  /* 10ddf688 call 0x10dd4520 */
  push32(0x10ddf68du); f_10dd4520();
  /* 10ddf68d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf690 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf692 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ddf695 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf696 call 0x10dd4520 */
  push32(0x10ddf69bu); f_10dd4520();
  /* 10ddf69b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf69e push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf6a0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ddf6a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddf6a4 call 0x10dd4520 */
  push32(0x10ddf6a9u); f_10dd4520();
  /* 10ddf6a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf6ac push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf6ae mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ddf6b1 push edx */
  push32((uint32_t)(EDX));
  /* 10ddf6b2 call 0x10dd4520 */
  push32(0x10ddf6b7u); f_10dd4520();
  /* 10ddf6b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf6ba mov eax, 1 */
  EAX = (0x1u);
  /* 10ddf6bf jmp 0x10ddf70c */
  goto L_10ddf70c;
L_10ddf6c1:;
  /* 10ddf6c1 mov dword ptr [0x10dfdc98], 0x10dfdca2 */
  w32((uint32_t)(0x10dfdc98), (0x10dfdca2u));
  /* 10ddf6cb mov dword ptr [0x10dfdc9c], 0x10dfdca2 */
  w32((uint32_t)(0x10dfdc9c), (0x10dfdca2u));
  /* 10ddf6d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf6d7 mov eax, dword ptr [0x10dff7e0] */
  EAX = (r32((uint32_t)(0x10dff7e0)));
  /* 10ddf6dc push eax */
  push32((uint32_t)(EAX));
  /* 10ddf6dd call 0x10dd4520 */
  push32(0x10ddf6e2u); f_10dd4520();
  /* 10ddf6e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf6e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ddf6e7 mov ecx, dword ptr [0x10dff7e4] */
  ECX = (r32((uint32_t)(0x10dff7e4)));
  /* 10ddf6ed push ecx */
  push32((uint32_t)(ECX));
  /* 10ddf6ee call 0x10dd4520 */
  push32(0x10ddf6f3u); f_10dd4520();
  /* 10ddf6f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf6f6 mov dword ptr [0x10dff7e0], 0 */
  w32((uint32_t)(0x10dff7e0), (0x0u));
  /* 10ddf700 mov dword ptr [0x10dff7e4], 0 */
  w32((uint32_t)(0x10dff7e4), (0x0u));
  /* 10ddf70a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ddf70c:;
  /* 10ddf70c mov esp, ebp */
  ESP = (EBP);
  /* 10ddf70e pop ebp */
  EBP = (pop32());
  /* 10ddf70f ret  */
  ESPCHK(0x10ddf370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f710 @ 0x10ddf710 (7 bytes, 5 insns) */
void f_10ddf710(void) {
  FTRACE(0x10ddf710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddf710 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddf711 mov ebp, esp */
  EBP = (ESP);
  /* 10ddf713 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddf715 pop ebp */
  EBP = (pop32());
  /* 10ddf716 ret  */
  ESPCHK(0x10ddf710u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10ddf720 (129 bytes, 56 insns) */
void f_10ddf720(void) {
  FTRACE(0x10ddf720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddf720 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ddf724 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ddf728 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10ddf72e jne 0x10ddf76c */
  if (!C.zf) goto L_10ddf76c;
L_10ddf730:;
  /* 10ddf730 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ddf732 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ddf734 jne 0x10ddf764 */
  if (!C.zf) goto L_10ddf764;
  /* 10ddf736 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ddf738 je 0x10ddf760 */
  if (C.zf) goto L_10ddf760;
  /* 10ddf73a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ddf73d jne 0x10ddf764 */
  if (!C.zf) goto L_10ddf764;
  /* 10ddf73f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10ddf741 je 0x10ddf760 */
  if (C.zf) goto L_10ddf760;
  /* 10ddf743 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10ddf746 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ddf749 jne 0x10ddf764 */
  if (!C.zf) goto L_10ddf764;
  /* 10ddf74b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ddf74d je 0x10ddf760 */
  if (C.zf) goto L_10ddf760;
  /* 10ddf74f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ddf752 jne 0x10ddf764 */
  if (!C.zf) goto L_10ddf764;
  /* 10ddf754 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf757 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf75a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10ddf75c jne 0x10ddf730 */
  if (!C.zf) goto L_10ddf730;
  /* 10ddf75e mov edi, edi */
  EDI = (EDI);
L_10ddf760:;
  /* 10ddf760 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddf762 ret  */
  ESPCHK(0x10ddf720u, _esp0);
  ESP += 4; return;
  /* 10ddf763 nop  */
  /* nop */
L_10ddf764:;
  /* 10ddf764 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddf766 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ddf768 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ddf769 ret  */
  ESPCHK(0x10ddf720u, _esp0);
  ESP += 4; return;
  /* 10ddf76a mov edi, edi */
  EDI = (EDI);
L_10ddf76c:;
  /* 10ddf76c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10ddf772 je 0x10ddf788 */
  if (C.zf) goto L_10ddf788;
  /* 10ddf774 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ddf776 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10ddf777 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ddf779 jne 0x10ddf764 */
  if (!C.zf) goto L_10ddf764;
  /* 10ddf77b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10ddf77c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ddf77e je 0x10ddf760 */
  if (C.zf) goto L_10ddf760;
  /* 10ddf780 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10ddf786 je 0x10ddf730 */
  if (C.zf) goto L_10ddf730;
L_10ddf788:;
  /* 10ddf788 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10ddf78b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf78e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ddf790 jne 0x10ddf764 */
  if (!C.zf) goto L_10ddf764;
  /* 10ddf792 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ddf794 je 0x10ddf760 */
  if (C.zf) goto L_10ddf760;
  /* 10ddf796 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ddf799 jne 0x10ddf764 */
  if (!C.zf) goto L_10ddf764;
  /* 10ddf79b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10ddf79d je 0x10ddf760 */
  if (C.zf) goto L_10ddf760;
  /* 10ddf79f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf7a2 jmp 0x10ddf730 */
  goto L_10ddf730;
}

/* FUN_1000f7b0 @ 0x10ddf7b0 (62 bytes, 35 insns) */
void f_10ddf7b0(void) {
  FTRACE(0x10ddf7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddf7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddf7b1 mov ebp, esp */
  EBP = (ESP);
  /* 10ddf7b3 push esi */
  push32((uint32_t)(ESI));
  /* 10ddf7b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddf7b6 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf7b7 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf7b8 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf7b9 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf7ba push eax */
  push32((uint32_t)(EAX));
  /* 10ddf7bb push eax */
  push32((uint32_t)(EAX));
  /* 10ddf7bc push eax */
  push32((uint32_t)(EAX));
  /* 10ddf7bd push eax */
  push32((uint32_t)(EAX));
  /* 10ddf7be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddf7c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ddf7c4:;
  /* 10ddf7c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ddf7c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ddf7c8 je 0x10ddf7d1 */
  if (C.zf) goto L_10ddf7d1;
  /* 10ddf7ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10ddf7cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10ddf7cb");
  /* 10ddf7cf jmp 0x10ddf7c4 */
  goto L_10ddf7c4;
L_10ddf7d1:;
  /* 10ddf7d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf7d4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf7d7 nop  */
  /* nop */
L_10ddf7d8:;
  /* 10ddf7d8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10ddf7d9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ddf7db or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ddf7dd je 0x10ddf7e6 */
  if (C.zf) goto L_10ddf7e6;
  /* 10ddf7df inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ddf7e0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10ddf7e0");
  /* 10ddf7e4 jae 0x10ddf7d8 */
  if (!C.cf) goto L_10ddf7d8;
L_10ddf7e6:;
  /* 10ddf7e6 mov eax, ecx */
  EAX = (ECX);
  /* 10ddf7e8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf7eb pop esi */
  ESI = (pop32());
  /* 10ddf7ec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ddf7ed ret  */
  ESPCHK(0x10ddf7b0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10ddf7f0 (56 bytes, 31 insns) */
void f_10ddf7f0(void) {
  FTRACE(0x10ddf7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddf7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddf7f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ddf7f3 push edi */
  push32((uint32_t)(EDI));
  /* 10ddf7f4 push esi */
  push32((uint32_t)(ESI));
  /* 10ddf7f5 push ebx */
  push32((uint32_t)(EBX));
  /* 10ddf7f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddf7f9 jecxz 0x10ddf821 */
  x86_unimpl("jecxz @ 0x10ddf7f9");
  /* 10ddf7fb mov ebx, ecx */
  EBX = (ECX);
  /* 10ddf7fd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf800 mov esi, edi */
  ESI = (EDI);
  /* 10ddf802 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddf804 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10ddf806 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ddf808 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf80a mov edi, esi */
  EDI = (ESI);
  /* 10ddf80c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddf80f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10ddf811 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10ddf814 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddf816 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ddf819 ja 0x10ddf81f */
  if ((!C.cf&&!C.zf)) goto L_10ddf81f;
  /* 10ddf81b je 0x10ddf821 */
  if (C.zf) goto L_10ddf821;
  /* 10ddf81d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ddf81e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10ddf81f:;
  /* 10ddf81f not ecx */
  ECX = (~(ECX));
L_10ddf821:;
  /* 10ddf821 mov eax, ecx */
  EAX = (ECX);
  /* 10ddf823 pop ebx */
  EBX = (pop32());
  /* 10ddf824 pop esi */
  ESI = (pop32());
  /* 10ddf825 pop edi */
  EDI = (pop32());
  /* 10ddf826 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ddf827 ret  */
  ESPCHK(0x10ddf7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f830 @ 0x10ddf830 (58 bytes, 32 insns) */
void f_10ddf830(void) {
  FTRACE(0x10ddf830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddf830 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddf831 mov ebp, esp */
  EBP = (ESP);
  /* 10ddf833 push esi */
  push32((uint32_t)(ESI));
  /* 10ddf834 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddf836 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf837 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf838 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf839 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf83a push eax */
  push32((uint32_t)(EAX));
  /* 10ddf83b push eax */
  push32((uint32_t)(EAX));
  /* 10ddf83c push eax */
  push32((uint32_t)(EAX));
  /* 10ddf83d push eax */
  push32((uint32_t)(EAX));
  /* 10ddf83e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddf841 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ddf844:;
  /* 10ddf844 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ddf846 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ddf848 je 0x10ddf851 */
  if (C.zf) goto L_10ddf851;
  /* 10ddf84a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10ddf84b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10ddf84b");
  /* 10ddf84f jmp 0x10ddf844 */
  goto L_10ddf844;
L_10ddf851:;
  /* 10ddf851 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10ddf854:;
  /* 10ddf854 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ddf856 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ddf858 je 0x10ddf864 */
  if (C.zf) goto L_10ddf864;
  /* 10ddf85a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ddf85b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10ddf85b");
  /* 10ddf85f jae 0x10ddf854 */
  if (!C.cf) goto L_10ddf854;
  /* 10ddf861 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10ddf864:;
  /* 10ddf864 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf867 pop esi */
  ESI = (pop32());
  /* 10ddf868 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ddf869 ret  */
  ESPCHK(0x10ddf830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f870 @ 0x10ddf870 (512 bytes, 147 insns) */
void f_10ddf870(void) {
  FTRACE(0x10ddf870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddf870 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddf871 mov ebp, esp */
  EBP = (ESP);
  /* 10ddf873 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddf876 cmp dword ptr [0x10dff82c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff82c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf87d jne 0x10ddf8a2 */
  if (!C.zf) goto L_10ddf8a2;
  /* 10ddf87f call 0x10de0340 */
  push32(0x10ddf884u); f_10de0340();
  /* 10ddf884 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddf886 je 0x10ddf892 */
  if (C.zf) goto L_10ddf892;
  /* 10ddf888 mov eax, dword ptr [0x10e02294] */
  EAX = (r32((uint32_t)(0x10e02294)));
  /* 10ddf88d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ddf890 jmp 0x10ddf899 */
  goto L_10ddf899;
L_10ddf892:;
  /* 10ddf892 mov dword ptr [ebp - 8], 0x10de0390 */
  w32((uint32_t)(EBP + -0x8), (0x10de0390u));
L_10ddf899:;
  /* 10ddf899 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ddf89c mov dword ptr [0x10dff82c], ecx */
  w32((uint32_t)(0x10dff82c), (ECX));
L_10ddf8a2:;
  /* 10ddf8a2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf8a6 jne 0x10ddf8b2 */
  if (!C.zf) goto L_10ddf8b2;
  /* 10ddf8a8 call 0x10de0190 */
  push32(0x10ddf8adu); f_10de0190();
  /* 10ddf8ad jmp 0x10ddf97e */
  goto L_10ddf97e;
L_10ddf8b2:;
  /* 10ddf8b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf8b5 mov dword ptr [0x10dff81c], edx */
  w32((uint32_t)(0x10dff81c), (EDX));
  /* 10ddf8bb cmp dword ptr [0x10dff81c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff81c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf8c2 je 0x10ddf8e4 */
  if (C.zf) goto L_10ddf8e4;
  /* 10ddf8c4 mov eax, dword ptr [0x10dff81c] */
  EAX = (r32((uint32_t)(0x10dff81c)));
  /* 10ddf8c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ddf8cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddf8ce je 0x10ddf8e4 */
  if (C.zf) goto L_10ddf8e4;
  /* 10ddf8d0 push 0x10dff81c */
  push32((uint32_t)(0x10dff81cu));
  /* 10ddf8d5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10ddf8d7 push 0x10dfea90 */
  push32((uint32_t)(0x10dfea90u));
  /* 10ddf8dc call 0x10ddfa70 */
  push32(0x10ddf8e1u); f_10ddfa70();
  /* 10ddf8e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddf8e4:;
  /* 10ddf8e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf8e7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf8ea mov dword ptr [0x10dff820], edx */
  w32((uint32_t)(0x10dff820), (EDX));
  /* 10ddf8f0 cmp dword ptr [0x10dff820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf8f7 je 0x10ddf919 */
  if (C.zf) goto L_10ddf919;
  /* 10ddf8f9 mov eax, dword ptr [0x10dff820] */
  EAX = (r32((uint32_t)(0x10dff820)));
  /* 10ddf8fe movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ddf901 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddf903 je 0x10ddf919 */
  if (C.zf) goto L_10ddf919;
  /* 10ddf905 push 0x10dff820 */
  push32((uint32_t)(0x10dff820u));
  /* 10ddf90a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10ddf90c push 0x10dfe9d8 */
  push32((uint32_t)(0x10dfe9d8u));
  /* 10ddf911 call 0x10ddfa70 */
  push32(0x10ddf916u); f_10ddfa70();
  /* 10ddf916 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddf919:;
  /* 10ddf919 mov dword ptr [0x10dff824], 0 */
  w32((uint32_t)(0x10dff824), (0x0u));
  /* 10ddf923 cmp dword ptr [0x10dff81c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff81c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf92a je 0x10ddf95d */
  if (C.zf) goto L_10ddf95d;
  /* 10ddf92c mov edx, dword ptr [0x10dff81c] */
  EDX = (r32((uint32_t)(0x10dff81c)));
  /* 10ddf932 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ddf935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddf937 je 0x10ddf95d */
  if (C.zf) goto L_10ddf95d;
  /* 10ddf939 cmp dword ptr [0x10dff820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf940 je 0x10ddf956 */
  if (C.zf) goto L_10ddf956;
  /* 10ddf942 mov ecx, dword ptr [0x10dff820] */
  ECX = (r32((uint32_t)(0x10dff820)));
  /* 10ddf948 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ddf94b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddf94d je 0x10ddf956 */
  if (C.zf) goto L_10ddf956;
  /* 10ddf94f call 0x10ddfb00 */
  push32(0x10ddf954u); f_10ddfb00();
  /* 10ddf954 jmp 0x10ddf95b */
  goto L_10ddf95b;
L_10ddf956:;
  /* 10ddf956 call 0x10ddfef0 */
  push32(0x10ddf95bu); f_10ddfef0();
L_10ddf95b:;
  /* 10ddf95b jmp 0x10ddf97e */
  goto L_10ddf97e;
L_10ddf95d:;
  /* 10ddf95d cmp dword ptr [0x10dff820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf964 je 0x10ddf979 */
  if (C.zf) goto L_10ddf979;
  /* 10ddf966 mov eax, dword ptr [0x10dff820] */
  EAX = (r32((uint32_t)(0x10dff820)));
  /* 10ddf96b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ddf96e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddf970 je 0x10ddf979 */
  if (C.zf) goto L_10ddf979;
  /* 10ddf972 call 0x10de0090 */
  push32(0x10ddf977u); f_10de0090();
  /* 10ddf977 jmp 0x10ddf97e */
  goto L_10ddf97e;
L_10ddf979:;
  /* 10ddf979 call 0x10de0190 */
  push32(0x10ddf97eu); f_10de0190();
L_10ddf97e:;
  /* 10ddf97e cmp dword ptr [0x10dff824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf985 jne 0x10ddf98e */
  if (!C.zf) goto L_10ddf98e;
  /* 10ddf987 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddf989 jmp 0x10ddfa6c */
  goto L_10ddfa6c;
L_10ddf98e:;
  /* 10ddf98e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddf991 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf997 push edx */
  push32((uint32_t)(EDX));
  /* 10ddf998 call 0x10de01c0 */
  push32(0x10ddf99du); f_10de01c0();
  /* 10ddf99d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddf9a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddf9a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf9a7 je 0x10ddf9bc */
  if (C.zf) goto L_10ddf9bc;
  /* 10ddf9a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddf9ac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ddf9b1 push eax */
  push32((uint32_t)(EAX));
  /* 10ddf9b2 call dword ptr [0x10e02298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02298))), 0x10ddf9b8u);
  /* 10ddf9b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddf9ba jne 0x10ddf9c3 */
  if (!C.zf) goto L_10ddf9c3;
L_10ddf9bc:;
  /* 10ddf9bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddf9be jmp 0x10ddfa6c */
  goto L_10ddfa6c;
L_10ddf9c3:;
  /* 10ddf9c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddf9c5 mov ecx, dword ptr [0x10dff80c] */
  ECX = (r32((uint32_t)(0x10dff80c)));
  /* 10ddf9cb push ecx */
  push32((uint32_t)(ECX));
  /* 10ddf9cc call dword ptr [0x10e0229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0229c))), 0x10ddf9d2u);
  /* 10ddf9d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddf9d4 jne 0x10ddf9dd */
  if (!C.zf) goto L_10ddf9dd;
  /* 10ddf9d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddf9d8 jmp 0x10ddfa6c */
  goto L_10ddfa6c;
L_10ddf9dd:;
  /* 10ddf9dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddf9e1 je 0x10ddfa08 */
  if (C.zf) goto L_10ddfa08;
  /* 10ddf9e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddf9e6 mov ax, word ptr [0x10dff80c] */
  AX = (r16((uint32_t)(0x10dff80c)));
  /* 10ddf9ec mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10ddf9ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddf9f2 mov dx, word ptr [0x10dff828] */
  DX = (r16((uint32_t)(0x10dff828)));
  /* 10ddf9f9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10ddf9fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ddfa00 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ddfa04 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10ddfa08:;
  /* 10ddfa08 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfa0c je 0x10ddfa67 */
  if (C.zf) goto L_10ddfa67;
  /* 10ddfa0e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10ddfa10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddfa13 push edx */
  push32((uint32_t)(EDX));
  /* 10ddfa14 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10ddfa19 mov eax, dword ptr [0x10dff80c] */
  EAX = (r32((uint32_t)(0x10dff80c)));
  /* 10ddfa1e push eax */
  push32((uint32_t)(EAX));
  /* 10ddfa1f call dword ptr [0x10dff82c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dff82c))), 0x10ddfa25u);
  /* 10ddfa25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddfa27 jne 0x10ddfa2d */
  if (!C.zf) goto L_10ddfa2d;
  /* 10ddfa29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddfa2b jmp 0x10ddfa6c */
  goto L_10ddfa6c;
L_10ddfa2d:;
  /* 10ddfa2d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10ddfa2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddfa32 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfa35 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddfa36 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10ddfa3b mov edx, dword ptr [0x10dff828] */
  EDX = (r32((uint32_t)(0x10dff828)));
  /* 10ddfa41 push edx */
  push32((uint32_t)(EDX));
  /* 10ddfa42 call dword ptr [0x10dff82c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dff82c))), 0x10ddfa48u);
  /* 10ddfa48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddfa4a jne 0x10ddfa50 */
  if (!C.zf) goto L_10ddfa50;
  /* 10ddfa4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ddfa4e jmp 0x10ddfa6c */
  goto L_10ddfa6c;
L_10ddfa50:;
  /* 10ddfa50 push 0xa */
  push32((uint32_t)(0xau));
  /* 10ddfa52 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddfa55 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfa5a push eax */
  push32((uint32_t)(EAX));
  /* 10ddfa5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddfa5e push ecx */
  push32((uint32_t)(ECX));
  /* 10ddfa5f call 0x10dd65d0 */
  push32(0x10ddfa64u); f_10dd65d0();
  /* 10ddfa64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ddfa67:;
  /* 10ddfa67 mov eax, 1 */
  EAX = (0x1u);
L_10ddfa6c:;
  /* 10ddfa6c mov esp, ebp */
  ESP = (EBP);
  /* 10ddfa6e pop ebp */
  EBP = (pop32());
  /* 10ddfa6f ret  */
  ESPCHK(0x10ddf870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa70 @ 0x10ddfa70 (130 bytes, 47 insns) */
void f_10ddfa70(void) {
  FTRACE(0x10ddfa70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddfa70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddfa71 mov ebp, esp */
  EBP = (ESP);
  /* 10ddfa73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddfa76 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10ddfa7d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10ddfa84:;
  /* 10ddfa84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddfa87 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfa8a jg 0x10ddfaee */
  if ((!C.zf&&C.sf==C.of)) goto L_10ddfaee;
  /* 10ddfa8c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfa90 je 0x10ddfaee */
  if (C.zf) goto L_10ddfaee;
  /* 10ddfa92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ddfa95 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfa98 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ddfa99 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddfa9b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ddfa9d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ddfaa0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddfaa3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddfaa6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10ddfaa9 push eax */
  push32((uint32_t)(EAX));
  /* 10ddfaaa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddfaad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ddfaaf push edx */
  push32((uint32_t)(EDX));
  /* 10ddfab0 call 0x10de2160 */
  push32(0x10ddfab5u); f_10de2160();
  /* 10ddfab5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfab8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ddfabb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfabf jne 0x10ddfad2 */
  if (!C.zf) goto L_10ddfad2;
  /* 10ddfac1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddfac4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddfac7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10ddfacb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ddface mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ddfad0 jmp 0x10ddfaec */
  goto L_10ddfaec;
L_10ddfad2:;
  /* 10ddfad2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfad6 jge 0x10ddfae3 */
  if ((C.sf==C.of)) goto L_10ddfae3;
  /* 10ddfad8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddfadb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddfade mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10ddfae1 jmp 0x10ddfaec */
  goto L_10ddfaec;
L_10ddfae3:;
  /* 10ddfae3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddfae6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfae9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ddfaec:;
  /* 10ddfaec jmp 0x10ddfa84 */
  goto L_10ddfa84;
L_10ddfaee:;
  /* 10ddfaee mov esp, ebp */
  ESP = (EBP);
  /* 10ddfaf0 pop ebp */
  EBP = (pop32());
  /* 10ddfaf1 ret  */
  ESPCHK(0x10ddfa70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb00 @ 0x10ddfb00 (186 bytes, 50 insns) */
void f_10ddfb00(void) {
  FTRACE(0x10ddfb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddfb00 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddfb01 mov ebp, esp */
  EBP = (ESP);
  /* 10ddfb03 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddfb04 mov eax, dword ptr [0x10dff81c] */
  EAX = (r32((uint32_t)(0x10dff81c)));
  /* 10ddfb09 push eax */
  push32((uint32_t)(EAX));
  /* 10ddfb0a call 0x10dd68c0 */
  push32(0x10ddfb0fu); f_10dd68c0();
  /* 10ddfb0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfb12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddfb14 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfb17 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10ddfb1a mov dword ptr [0x10dff818], ecx */
  w32((uint32_t)(0x10dff818), (ECX));
  /* 10ddfb20 mov edx, dword ptr [0x10dff820] */
  EDX = (r32((uint32_t)(0x10dff820)));
  /* 10ddfb26 push edx */
  push32((uint32_t)(EDX));
  /* 10ddfb27 call 0x10dd68c0 */
  push32(0x10ddfb2cu); f_10dd68c0();
  /* 10ddfb2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfb2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddfb31 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfb34 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10ddfb37 mov dword ptr [0x10dff810], ecx */
  w32((uint32_t)(0x10dff810), (ECX));
  /* 10ddfb3d mov dword ptr [0x10dff80c], 0 */
  w32((uint32_t)(0x10dff80c), (0x0u));
  /* 10ddfb47 cmp dword ptr [0x10dff818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfb4e je 0x10ddfb59 */
  if (C.zf) goto L_10ddfb59;
  /* 10ddfb50 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10ddfb57 jmp 0x10ddfb6b */
  goto L_10ddfb6b;
L_10ddfb59:;
  /* 10ddfb59 mov edx, dword ptr [0x10dff81c] */
  EDX = (r32((uint32_t)(0x10dff81c)));
  /* 10ddfb5f push edx */
  push32((uint32_t)(EDX));
  /* 10ddfb60 call 0x10de05a0 */
  push32(0x10ddfb65u); f_10de05a0();
  /* 10ddfb65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfb68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ddfb6b:;
  /* 10ddfb6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddfb6e mov dword ptr [0x10dff814], eax */
  w32((uint32_t)(0x10dff814), (EAX));
  /* 10ddfb73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddfb75 push 0x10ddfbc0 */
  push32((uint32_t)(0x10ddfbc0u));
  /* 10ddfb7a call dword ptr [0x10e02290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02290))), 0x10ddfb80u);
  /* 10ddfb80 mov ecx, dword ptr [0x10dff824] */
  ECX = (r32((uint32_t)(0x10dff824)));
  /* 10ddfb86 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddfb8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddfb8e je 0x10ddfbac */
  if (C.zf) goto L_10ddfbac;
  /* 10ddfb90 mov edx, dword ptr [0x10dff824] */
  EDX = (r32((uint32_t)(0x10dff824)));
  /* 10ddfb96 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddfb9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddfb9e je 0x10ddfbac */
  if (C.zf) goto L_10ddfbac;
  /* 10ddfba0 mov eax, dword ptr [0x10dff824] */
  EAX = (r32((uint32_t)(0x10dff824)));
  /* 10ddfba5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddfba8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddfbaa jne 0x10ddfbb6 */
  if (!C.zf) goto L_10ddfbb6;
L_10ddfbac:;
  /* 10ddfbac mov dword ptr [0x10dff824], 0 */
  w32((uint32_t)(0x10dff824), (0x0u));
L_10ddfbb6:;
  /* 10ddfbb6 mov esp, ebp */
  ESP = (EBP);
  /* 10ddfbb8 pop ebp */
  EBP = (pop32());
  /* 10ddfbb9 ret  */
  ESPCHK(0x10ddfb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbc0 @ 0x10ddfbc0 (804 bytes, 220 insns) */
void f_10ddfbc0(void) {
  FTRACE(0x10ddfbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddfbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddfbc1 mov ebp, esp */
  EBP = (ESP);
  /* 10ddfbc3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddfbc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddfbc9 push eax */
  push32((uint32_t)(EAX));
  /* 10ddfbca call 0x10de0520 */
  push32(0x10ddfbcfu); f_10de0520();
  /* 10ddfbcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfbd2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10ddfbd5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10ddfbd7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10ddfbda push ecx */
  push32((uint32_t)(ECX));
  /* 10ddfbdb mov edx, dword ptr [0x10dff810] */
  EDX = (r32((uint32_t)(0x10dff810)));
  /* 10ddfbe1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ddfbe3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddfbe5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddfbeb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfbf1 push edx */
  push32((uint32_t)(EDX));
  /* 10ddfbf2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ddfbf5 push eax */
  push32((uint32_t)(EAX));
  /* 10ddfbf6 call dword ptr [0x10dff82c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dff82c))), 0x10ddfbfcu);
  /* 10ddfbfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddfbfe jne 0x10ddfc14 */
  if (!C.zf) goto L_10ddfc14;
  /* 10ddfc00 mov dword ptr [0x10dff824], 0 */
  w32((uint32_t)(0x10dff824), (0x0u));
  /* 10ddfc0a mov eax, 1 */
  EAX = (0x1u);
  /* 10ddfc0f jmp 0x10ddfede */
  goto L_10ddfede;
L_10ddfc14:;
  /* 10ddfc14 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10ddfc17 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddfc18 mov edx, dword ptr [0x10dff820] */
  EDX = (r32((uint32_t)(0x10dff820)));
  /* 10ddfc1e push edx */
  push32((uint32_t)(EDX));
  /* 10ddfc1f call 0x10de2160 */
  push32(0x10ddfc24u); f_10de2160();
  /* 10ddfc24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfc27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddfc29 jne 0x10ddfd4f */
  if (!C.zf) goto L_10ddfd4f;
  /* 10ddfc2f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10ddfc31 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10ddfc34 push eax */
  push32((uint32_t)(EAX));
  /* 10ddfc35 mov ecx, dword ptr [0x10dff818] */
  ECX = (r32((uint32_t)(0x10dff818)));
  /* 10ddfc3b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ddfc3d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddfc3f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddfc45 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfc4b push ecx */
  push32((uint32_t)(ECX));
  /* 10ddfc4c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ddfc4f push edx */
  push32((uint32_t)(EDX));
  /* 10ddfc50 call dword ptr [0x10dff82c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dff82c))), 0x10ddfc56u);
  /* 10ddfc56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddfc58 jne 0x10ddfc6e */
  if (!C.zf) goto L_10ddfc6e;
  /* 10ddfc5a mov dword ptr [0x10dff824], 0 */
  w32((uint32_t)(0x10dff824), (0x0u));
  /* 10ddfc64 mov eax, 1 */
  EAX = (0x1u);
  /* 10ddfc69 jmp 0x10ddfede */
  goto L_10ddfede;
L_10ddfc6e:;
  /* 10ddfc6e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10ddfc71 push eax */
  push32((uint32_t)(EAX));
  /* 10ddfc72 mov ecx, dword ptr [0x10dff81c] */
  ECX = (r32((uint32_t)(0x10dff81c)));
  /* 10ddfc78 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddfc79 call 0x10de2160 */
  push32(0x10ddfc7eu); f_10de2160();
  /* 10ddfc7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfc81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddfc83 jne 0x10ddfcb0 */
  if (!C.zf) goto L_10ddfcb0;
  /* 10ddfc85 mov edx, dword ptr [0x10dff824] */
  EDX = (r32((uint32_t)(0x10dff824)));
  /* 10ddfc8b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddfc91 mov dword ptr [0x10dff824], edx */
  w32((uint32_t)(0x10dff824), (EDX));
  /* 10ddfc97 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ddfc9a mov dword ptr [0x10dff828], eax */
  w32((uint32_t)(0x10dff828), (EAX));
  /* 10ddfc9f mov ecx, dword ptr [0x10dff828] */
  ECX = (r32((uint32_t)(0x10dff828)));
  /* 10ddfca5 mov dword ptr [0x10dff80c], ecx */
  w32((uint32_t)(0x10dff80c), (ECX));
  /* 10ddfcab jmp 0x10ddfd4f */
  goto L_10ddfd4f;
L_10ddfcb0:;
  /* 10ddfcb0 mov edx, dword ptr [0x10dff824] */
  EDX = (r32((uint32_t)(0x10dff824)));
  /* 10ddfcb6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddfcb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ddfcbb jne 0x10ddfd4f */
  if (!C.zf) goto L_10ddfd4f;
  /* 10ddfcc1 cmp dword ptr [0x10dff814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfcc8 je 0x10ddfd1d */
  if (C.zf) goto L_10ddfd1d;
  /* 10ddfcca mov eax, dword ptr [0x10dff814] */
  EAX = (r32((uint32_t)(0x10dff814)));
  /* 10ddfccf push eax */
  push32((uint32_t)(EAX));
  /* 10ddfcd0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10ddfcd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddfcd4 mov edx, dword ptr [0x10dff81c] */
  EDX = (r32((uint32_t)(0x10dff81c)));
  /* 10ddfcda push edx */
  push32((uint32_t)(EDX));
  /* 10ddfcdb call 0x10de2230 */
  push32(0x10ddfce0u); f_10de2230();
  /* 10ddfce0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfce3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddfce5 jne 0x10ddfd1d */
  if (!C.zf) goto L_10ddfd1d;
  /* 10ddfce7 mov eax, dword ptr [0x10dff824] */
  EAX = (r32((uint32_t)(0x10dff824)));
  /* 10ddfcec or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10ddfcee mov dword ptr [0x10dff824], eax */
  w32((uint32_t)(0x10dff824), (EAX));
  /* 10ddfcf3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ddfcf6 mov dword ptr [0x10dff828], ecx */
  w32((uint32_t)(0x10dff828), (ECX));
  /* 10ddfcfc mov edx, dword ptr [0x10dff81c] */
  EDX = (r32((uint32_t)(0x10dff81c)));
  /* 10ddfd02 push edx */
  push32((uint32_t)(EDX));
  /* 10ddfd03 call 0x10dd68c0 */
  push32(0x10ddfd08u); f_10dd68c0();
  /* 10ddfd08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfd0b cmp eax, dword ptr [0x10dff814] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dff814))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfd11 jne 0x10ddfd1b */
  if (!C.zf) goto L_10ddfd1b;
  /* 10ddfd13 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ddfd16 mov dword ptr [0x10dff80c], eax */
  w32((uint32_t)(0x10dff80c), (EAX));
L_10ddfd1b:;
  /* 10ddfd1b jmp 0x10ddfd4f */
  goto L_10ddfd4f;
L_10ddfd1d:;
  /* 10ddfd1d mov ecx, dword ptr [0x10dff824] */
  ECX = (r32((uint32_t)(0x10dff824)));
  /* 10ddfd23 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddfd26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddfd28 jne 0x10ddfd4f */
  if (!C.zf) goto L_10ddfd4f;
  /* 10ddfd2a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ddfd2d push edx */
  push32((uint32_t)(EDX));
  /* 10ddfd2e call 0x10de0260 */
  push32(0x10ddfd33u); f_10de0260();
  /* 10ddfd33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfd36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddfd38 je 0x10ddfd4f */
  if (C.zf) goto L_10ddfd4f;
  /* 10ddfd3a mov eax, dword ptr [0x10dff824] */
  EAX = (r32((uint32_t)(0x10dff824)));
  /* 10ddfd3f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10ddfd41 mov dword ptr [0x10dff824], eax */
  w32((uint32_t)(0x10dff824), (EAX));
  /* 10ddfd46 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ddfd49 mov dword ptr [0x10dff828], ecx */
  w32((uint32_t)(0x10dff828), (ECX));
L_10ddfd4f:;
  /* 10ddfd4f mov edx, dword ptr [0x10dff824] */
  EDX = (r32((uint32_t)(0x10dff824)));
  /* 10ddfd55 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddfd5b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfd61 je 0x10ddfed1 */
  if (C.zf) goto L_10ddfed1;
  /* 10ddfd67 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10ddfd69 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10ddfd6c push eax */
  push32((uint32_t)(EAX));
  /* 10ddfd6d mov ecx, dword ptr [0x10dff818] */
  ECX = (r32((uint32_t)(0x10dff818)));
  /* 10ddfd73 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ddfd75 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddfd77 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddfd7d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfd83 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddfd84 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ddfd87 push edx */
  push32((uint32_t)(EDX));
  /* 10ddfd88 call dword ptr [0x10dff82c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dff82c))), 0x10ddfd8eu);
  /* 10ddfd8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddfd90 jne 0x10ddfda6 */
  if (!C.zf) goto L_10ddfda6;
  /* 10ddfd92 mov dword ptr [0x10dff824], 0 */
  w32((uint32_t)(0x10dff824), (0x0u));
  /* 10ddfd9c mov eax, 1 */
  EAX = (0x1u);
  /* 10ddfda1 jmp 0x10ddfede */
  goto L_10ddfede;
L_10ddfda6:;
  /* 10ddfda6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10ddfda9 push eax */
  push32((uint32_t)(EAX));
  /* 10ddfdaa mov ecx, dword ptr [0x10dff81c] */
  ECX = (r32((uint32_t)(0x10dff81c)));
  /* 10ddfdb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddfdb1 call 0x10de2160 */
  push32(0x10ddfdb6u); f_10de2160();
  /* 10ddfdb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfdb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddfdbb jne 0x10ddfe70 */
  if (!C.zf) goto L_10ddfe70;
  /* 10ddfdc1 mov edx, dword ptr [0x10dff824] */
  EDX = (r32((uint32_t)(0x10dff824)));
  /* 10ddfdc7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10ddfdca mov dword ptr [0x10dff824], edx */
  w32((uint32_t)(0x10dff824), (EDX));
  /* 10ddfdd0 cmp dword ptr [0x10dff818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfdd7 je 0x10ddfdfa */
  if (C.zf) goto L_10ddfdfa;
  /* 10ddfdd9 mov eax, dword ptr [0x10dff824] */
  EAX = (r32((uint32_t)(0x10dff824)));
  /* 10ddfdde or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10ddfde1 mov dword ptr [0x10dff824], eax */
  w32((uint32_t)(0x10dff824), (EAX));
  /* 10ddfde6 cmp dword ptr [0x10dff80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfded jne 0x10ddfdf8 */
  if (!C.zf) goto L_10ddfdf8;
  /* 10ddfdef mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ddfdf2 mov dword ptr [0x10dff80c], ecx */
  w32((uint32_t)(0x10dff80c), (ECX));
L_10ddfdf8:;
  /* 10ddfdf8 jmp 0x10ddfe6e */
  goto L_10ddfe6e;
L_10ddfdfa:;
  /* 10ddfdfa cmp dword ptr [0x10dff814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfe01 je 0x10ddfe4f */
  if (C.zf) goto L_10ddfe4f;
  /* 10ddfe03 mov edx, dword ptr [0x10dff81c] */
  EDX = (r32((uint32_t)(0x10dff81c)));
  /* 10ddfe09 push edx */
  push32((uint32_t)(EDX));
  /* 10ddfe0a call 0x10dd68c0 */
  push32(0x10ddfe0fu); f_10dd68c0();
  /* 10ddfe0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfe12 cmp eax, dword ptr [0x10dff814] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dff814))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfe18 jne 0x10ddfe4f */
  if (!C.zf) goto L_10ddfe4f;
  /* 10ddfe1a push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddfe1c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ddfe1f push eax */
  push32((uint32_t)(EAX));
  /* 10ddfe20 call 0x10de02b0 */
  push32(0x10ddfe25u); f_10de02b0();
  /* 10ddfe25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfe28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddfe2a je 0x10ddfe4d */
  if (C.zf) goto L_10ddfe4d;
  /* 10ddfe2c mov ecx, dword ptr [0x10dff824] */
  ECX = (r32((uint32_t)(0x10dff824)));
  /* 10ddfe32 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10ddfe35 mov dword ptr [0x10dff824], ecx */
  w32((uint32_t)(0x10dff824), (ECX));
  /* 10ddfe3b cmp dword ptr [0x10dff80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfe42 jne 0x10ddfe4d */
  if (!C.zf) goto L_10ddfe4d;
  /* 10ddfe44 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ddfe47 mov dword ptr [0x10dff80c], edx */
  w32((uint32_t)(0x10dff80c), (EDX));
L_10ddfe4d:;
  /* 10ddfe4d jmp 0x10ddfe6e */
  goto L_10ddfe6e;
L_10ddfe4f:;
  /* 10ddfe4f mov eax, dword ptr [0x10dff824] */
  EAX = (r32((uint32_t)(0x10dff824)));
  /* 10ddfe54 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10ddfe57 mov dword ptr [0x10dff824], eax */
  w32((uint32_t)(0x10dff824), (EAX));
  /* 10ddfe5c cmp dword ptr [0x10dff80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfe63 jne 0x10ddfe6e */
  if (!C.zf) goto L_10ddfe6e;
  /* 10ddfe65 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ddfe68 mov dword ptr [0x10dff80c], ecx */
  w32((uint32_t)(0x10dff80c), (ECX));
L_10ddfe6e:;
  /* 10ddfe6e jmp 0x10ddfed1 */
  goto L_10ddfed1;
L_10ddfe70:;
  /* 10ddfe70 cmp dword ptr [0x10dff818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfe77 jne 0x10ddfed1 */
  if (!C.zf) goto L_10ddfed1;
  /* 10ddfe79 cmp dword ptr [0x10dff814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfe80 je 0x10ddfed1 */
  if (C.zf) goto L_10ddfed1;
  /* 10ddfe82 mov edx, dword ptr [0x10dff814] */
  EDX = (r32((uint32_t)(0x10dff814)));
  /* 10ddfe88 push edx */
  push32((uint32_t)(EDX));
  /* 10ddfe89 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10ddfe8c push eax */
  push32((uint32_t)(EAX));
  /* 10ddfe8d mov ecx, dword ptr [0x10dff81c] */
  ECX = (r32((uint32_t)(0x10dff81c)));
  /* 10ddfe93 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddfe94 call 0x10de2230 */
  push32(0x10ddfe99u); f_10de2230();
  /* 10ddfe99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfe9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddfe9e jne 0x10ddfed1 */
  if (!C.zf) goto L_10ddfed1;
  /* 10ddfea0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ddfea2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ddfea5 push edx */
  push32((uint32_t)(EDX));
  /* 10ddfea6 call 0x10de02b0 */
  push32(0x10ddfeabu); f_10de02b0();
  /* 10ddfeab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfeae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddfeb0 je 0x10ddfed1 */
  if (C.zf) goto L_10ddfed1;
  /* 10ddfeb2 mov eax, dword ptr [0x10dff824] */
  EAX = (r32((uint32_t)(0x10dff824)));
  /* 10ddfeb7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10ddfeba mov dword ptr [0x10dff824], eax */
  w32((uint32_t)(0x10dff824), (EAX));
  /* 10ddfebf cmp dword ptr [0x10dff80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddfec6 jne 0x10ddfed1 */
  if (!C.zf) goto L_10ddfed1;
  /* 10ddfec8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ddfecb mov dword ptr [0x10dff80c], ecx */
  w32((uint32_t)(0x10dff80c), (ECX));
L_10ddfed1:;
  /* 10ddfed1 mov eax, dword ptr [0x10dff824] */
  EAX = (r32((uint32_t)(0x10dff824)));
  /* 10ddfed6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10ddfed9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ddfedb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddfedd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10ddfede:;
  /* 10ddfede mov esp, ebp */
  ESP = (EBP);
  /* 10ddfee0 pop ebp */
  EBP = (pop32());
  /* 10ddfee1 ret 4 */
  ESPCHK(0x10ddfbc0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fef0 @ 0x10ddfef0 (116 bytes, 33 insns) */
void f_10ddfef0(void) {
  FTRACE(0x10ddfef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddfef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddfef1 mov ebp, esp */
  EBP = (ESP);
  /* 10ddfef3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddfef4 mov eax, dword ptr [0x10dff81c] */
  EAX = (r32((uint32_t)(0x10dff81c)));
  /* 10ddfef9 push eax */
  push32((uint32_t)(EAX));
  /* 10ddfefa call 0x10dd68c0 */
  push32(0x10ddfeffu); f_10dd68c0();
  /* 10ddfeff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddff02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ddff04 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddff07 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10ddff0a mov dword ptr [0x10dff818], ecx */
  w32((uint32_t)(0x10dff818), (ECX));
  /* 10ddff10 cmp dword ptr [0x10dff818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddff17 je 0x10ddff22 */
  if (C.zf) goto L_10ddff22;
  /* 10ddff19 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10ddff20 jmp 0x10ddff34 */
  goto L_10ddff34;
L_10ddff22:;
  /* 10ddff22 mov edx, dword ptr [0x10dff81c] */
  EDX = (r32((uint32_t)(0x10dff81c)));
  /* 10ddff28 push edx */
  push32((uint32_t)(EDX));
  /* 10ddff29 call 0x10de05a0 */
  push32(0x10ddff2eu); f_10de05a0();
  /* 10ddff2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddff31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ddff34:;
  /* 10ddff34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ddff37 mov dword ptr [0x10dff814], eax */
  w32((uint32_t)(0x10dff814), (EAX));
  /* 10ddff3c push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddff3e push 0x10ddff70 */
  push32((uint32_t)(0x10ddff70u));
  /* 10ddff43 call dword ptr [0x10e02290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02290))), 0x10ddff49u);
  /* 10ddff49 mov ecx, dword ptr [0x10dff824] */
  ECX = (r32((uint32_t)(0x10dff824)));
  /* 10ddff4f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ddff52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ddff54 jne 0x10ddff60 */
  if (!C.zf) goto L_10ddff60;
  /* 10ddff56 mov dword ptr [0x10dff824], 0 */
  w32((uint32_t)(0x10dff824), (0x0u));
L_10ddff60:;
  /* 10ddff60 mov esp, ebp */
  ESP = (EBP);
  /* 10ddff62 pop ebp */
  EBP = (pop32());
  /* 10ddff63 ret  */
  ESPCHK(0x10ddfef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff70 @ 0x10ddff70 (287 bytes, 86 insns) */
void f_10ddff70(void) {
  FTRACE(0x10ddff70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ddff70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ddff71 mov ebp, esp */
  EBP = (ESP);
  /* 10ddff73 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddff76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ddff79 push eax */
  push32((uint32_t)(EAX));
  /* 10ddff7a call 0x10de0520 */
  push32(0x10ddff7fu); f_10de0520();
  /* 10ddff7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddff82 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10ddff85 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10ddff87 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10ddff8a push ecx */
  push32((uint32_t)(ECX));
  /* 10ddff8b mov edx, dword ptr [0x10dff818] */
  EDX = (r32((uint32_t)(0x10dff818)));
  /* 10ddff91 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ddff93 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ddff95 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10ddff9b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddffa1 push edx */
  push32((uint32_t)(EDX));
  /* 10ddffa2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ddffa5 push eax */
  push32((uint32_t)(EAX));
  /* 10ddffa6 call dword ptr [0x10dff82c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dff82c))), 0x10ddffacu);
  /* 10ddffac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddffae jne 0x10ddffc4 */
  if (!C.zf) goto L_10ddffc4;
  /* 10ddffb0 mov dword ptr [0x10dff824], 0 */
  w32((uint32_t)(0x10dff824), (0x0u));
  /* 10ddffba mov eax, 1 */
  EAX = (0x1u);
  /* 10ddffbf jmp 0x10de0089 */
  goto L_10de0089;
L_10ddffc4:;
  /* 10ddffc4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10ddffc7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ddffc8 mov edx, dword ptr [0x10dff81c] */
  EDX = (r32((uint32_t)(0x10dff81c)));
  /* 10ddffce push edx */
  push32((uint32_t)(EDX));
  /* 10ddffcf call 0x10de2160 */
  push32(0x10ddffd4u); f_10de2160();
  /* 10ddffd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddffd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddffd9 jne 0x10de0019 */
  if (!C.zf) goto L_10de0019;
  /* 10ddffdb cmp dword ptr [0x10dff818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ddffe2 jne 0x10ddfff6 */
  if (!C.zf) goto L_10ddfff6;
  /* 10ddffe4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ddffe6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ddffe9 push eax */
  push32((uint32_t)(EAX));
  /* 10ddffea call 0x10de02b0 */
  push32(0x10ddffefu); f_10de02b0();
  /* 10ddffef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ddfff2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ddfff4 je 0x10de0017 */
  if (C.zf) goto L_10de0017;
L_10ddfff6:;
  /* 10ddfff6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ddfff9 mov dword ptr [0x10dff828], ecx */
  w32((uint32_t)(0x10dff828), (ECX));
  /* 10ddffff mov edx, dword ptr [0x10dff828] */
  EDX = (r32((uint32_t)(0x10dff828)));
  /* 10de0005 mov dword ptr [0x10dff80c], edx */
  w32((uint32_t)(0x10dff80c), (EDX));
  /* 10de000b mov eax, dword ptr [0x10dff824] */
  EAX = (r32((uint32_t)(0x10dff824)));
  /* 10de0010 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10de0012 mov dword ptr [0x10dff824], eax */
  w32((uint32_t)(0x10dff824), (EAX));
L_10de0017:;
  /* 10de0017 jmp 0x10de007c */
  goto L_10de007c;
L_10de0019:;
  /* 10de0019 cmp dword ptr [0x10dff818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0020 jne 0x10de007c */
  if (!C.zf) goto L_10de007c;
  /* 10de0022 cmp dword ptr [0x10dff814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0029 je 0x10de007c */
  if (C.zf) goto L_10de007c;
  /* 10de002b mov ecx, dword ptr [0x10dff814] */
  ECX = (r32((uint32_t)(0x10dff814)));
  /* 10de0031 push ecx */
  push32((uint32_t)(ECX));
  /* 10de0032 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10de0035 push edx */
  push32((uint32_t)(EDX));
  /* 10de0036 mov eax, dword ptr [0x10dff81c] */
  EAX = (r32((uint32_t)(0x10dff81c)));
  /* 10de003b push eax */
  push32((uint32_t)(EAX));
  /* 10de003c call 0x10de2230 */
  push32(0x10de0041u); f_10de2230();
  /* 10de0041 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de0046 jne 0x10de007c */
  if (!C.zf) goto L_10de007c;
  /* 10de0048 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de004a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10de004d push ecx */
  push32((uint32_t)(ECX));
  /* 10de004e call 0x10de02b0 */
  push32(0x10de0053u); f_10de02b0();
  /* 10de0053 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0056 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de0058 je 0x10de007c */
  if (C.zf) goto L_10de007c;
  /* 10de005a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10de005d mov dword ptr [0x10dff828], edx */
  w32((uint32_t)(0x10dff828), (EDX));
  /* 10de0063 mov eax, dword ptr [0x10dff828] */
  EAX = (r32((uint32_t)(0x10dff828)));
  /* 10de0068 mov dword ptr [0x10dff80c], eax */
  w32((uint32_t)(0x10dff80c), (EAX));
  /* 10de006d mov ecx, dword ptr [0x10dff824] */
  ECX = (r32((uint32_t)(0x10dff824)));
  /* 10de0073 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10de0076 mov dword ptr [0x10dff824], ecx */
  w32((uint32_t)(0x10dff824), (ECX));
L_10de007c:;
  /* 10de007c mov eax, dword ptr [0x10dff824] */
  EAX = (r32((uint32_t)(0x10dff824)));
  /* 10de0081 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10de0084 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10de0086 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de0088 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10de0089:;
  /* 10de0089 mov esp, ebp */
  ESP = (EBP);
  /* 10de008b pop ebp */
  EBP = (pop32());
  /* 10de008c ret 4 */
  ESPCHK(0x10ddff70u, _esp0);
  ESP += 8; return;
}

/* FUN_10010090 @ 0x10de0090 (69 bytes, 20 insns) */
void f_10de0090(void) {
  FTRACE(0x10de0090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de0090 push ebp */
  push32((uint32_t)(EBP));
  /* 10de0091 mov ebp, esp */
  EBP = (ESP);
  /* 10de0093 mov eax, dword ptr [0x10dff820] */
  EAX = (r32((uint32_t)(0x10dff820)));
  /* 10de0098 push eax */
  push32((uint32_t)(EAX));
  /* 10de0099 call 0x10dd68c0 */
  push32(0x10de009eu); f_10dd68c0();
  /* 10de009e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de00a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de00a3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de00a6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10de00a9 mov dword ptr [0x10dff810], ecx */
  w32((uint32_t)(0x10dff810), (ECX));
  /* 10de00af push 1 */
  push32((uint32_t)(0x1u));
  /* 10de00b1 push 0x10de00e0 */
  push32((uint32_t)(0x10de00e0u));
  /* 10de00b6 call dword ptr [0x10e02290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02290))), 0x10de00bcu);
  /* 10de00bc mov edx, dword ptr [0x10dff824] */
  EDX = (r32((uint32_t)(0x10dff824)));
  /* 10de00c2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10de00c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de00c7 jne 0x10de00d3 */
  if (!C.zf) goto L_10de00d3;
  /* 10de00c9 mov dword ptr [0x10dff824], 0 */
  w32((uint32_t)(0x10dff824), (0x0u));
L_10de00d3:;
  /* 10de00d3 pop ebp */
  EBP = (pop32());
  /* 10de00d4 ret  */
  ESPCHK(0x10de0090u, _esp0);
  ESP += 4; return;
}

/* FUN_100100e0 @ 0x10de00e0 (172 bytes, 54 insns) */
void f_10de00e0(void) {
  FTRACE(0x10de00e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de00e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de00e1 mov ebp, esp */
  EBP = (ESP);
  /* 10de00e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de00e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de00e9 push eax */
  push32((uint32_t)(EAX));
  /* 10de00ea call 0x10de0520 */
  push32(0x10de00efu); f_10de0520();
  /* 10de00ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de00f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10de00f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10de00f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10de00fa push ecx */
  push32((uint32_t)(ECX));
  /* 10de00fb mov edx, dword ptr [0x10dff810] */
  EDX = (r32((uint32_t)(0x10dff810)));
  /* 10de0101 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10de0103 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de0105 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10de010b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0111 push edx */
  push32((uint32_t)(EDX));
  /* 10de0112 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10de0115 push eax */
  push32((uint32_t)(EAX));
  /* 10de0116 call dword ptr [0x10dff82c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dff82c))), 0x10de011cu);
  /* 10de011c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de011e jne 0x10de0131 */
  if (!C.zf) goto L_10de0131;
  /* 10de0120 mov dword ptr [0x10dff824], 0 */
  w32((uint32_t)(0x10dff824), (0x0u));
  /* 10de012a mov eax, 1 */
  EAX = (0x1u);
  /* 10de012f jmp 0x10de0186 */
  goto L_10de0186;
L_10de0131:;
  /* 10de0131 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10de0134 push ecx */
  push32((uint32_t)(ECX));
  /* 10de0135 mov edx, dword ptr [0x10dff820] */
  EDX = (r32((uint32_t)(0x10dff820)));
  /* 10de013b push edx */
  push32((uint32_t)(EDX));
  /* 10de013c call 0x10de2160 */
  push32(0x10de0141u); f_10de2160();
  /* 10de0141 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de0146 jne 0x10de0179 */
  if (!C.zf) goto L_10de0179;
  /* 10de0148 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10de014b push eax */
  push32((uint32_t)(EAX));
  /* 10de014c call 0x10de0260 */
  push32(0x10de0151u); f_10de0260();
  /* 10de0151 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0154 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de0156 je 0x10de0179 */
  if (C.zf) goto L_10de0179;
  /* 10de0158 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10de015b mov dword ptr [0x10dff828], ecx */
  w32((uint32_t)(0x10dff828), (ECX));
  /* 10de0161 mov edx, dword ptr [0x10dff828] */
  EDX = (r32((uint32_t)(0x10dff828)));
  /* 10de0167 mov dword ptr [0x10dff80c], edx */
  w32((uint32_t)(0x10dff80c), (EDX));
  /* 10de016d mov eax, dword ptr [0x10dff824] */
  EAX = (r32((uint32_t)(0x10dff824)));
  /* 10de0172 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10de0174 mov dword ptr [0x10dff824], eax */
  w32((uint32_t)(0x10dff824), (EAX));
L_10de0179:;
  /* 10de0179 mov eax, dword ptr [0x10dff824] */
  EAX = (r32((uint32_t)(0x10dff824)));
  /* 10de017e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10de0181 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10de0183 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de0185 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10de0186:;
  /* 10de0186 mov esp, ebp */
  ESP = (EBP);
  /* 10de0188 pop ebp */
  EBP = (pop32());
  /* 10de0189 ret 4 */
  ESPCHK(0x10de00e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010190 @ 0x10de0190 (43 bytes, 11 insns) */
void f_10de0190(void) {
  FTRACE(0x10de0190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de0190 push ebp */
  push32((uint32_t)(EBP));
  /* 10de0191 mov ebp, esp */
  EBP = (ESP);
  /* 10de0193 mov eax, dword ptr [0x10dff824] */
  EAX = (r32((uint32_t)(0x10dff824)));
  /* 10de0198 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10de019d mov dword ptr [0x10dff824], eax */
  w32((uint32_t)(0x10dff824), (EAX));
  /* 10de01a2 call dword ptr [0x10e0228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0228c))), 0x10de01a8u);
  /* 10de01a8 mov dword ptr [0x10dff828], eax */
  w32((uint32_t)(0x10dff828), (EAX));
  /* 10de01ad mov ecx, dword ptr [0x10dff828] */
  ECX = (r32((uint32_t)(0x10dff828)));
  /* 10de01b3 mov dword ptr [0x10dff80c], ecx */
  w32((uint32_t)(0x10dff80c), (ECX));
  /* 10de01b9 pop ebp */
  EBP = (pop32());
  /* 10de01ba ret  */
  ESPCHK(0x10de0190u, _esp0);
  ESP += 4; return;
}

/* FUN_100101c0 @ 0x10de01c0 (155 bytes, 57 insns) */
void f_10de01c0(void) {
  FTRACE(0x10de01c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de01c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de01c1 mov ebp, esp */
  EBP = (ESP);
  /* 10de01c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de01c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de01ca je 0x10de01eb */
  if (C.zf) goto L_10de01eb;
  /* 10de01cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de01cf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10de01d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10de01d4 je 0x10de01eb */
  if (C.zf) goto L_10de01eb;
  /* 10de01d6 push 0x10dfb89c */
  push32((uint32_t)(0x10dfb89cu));
  /* 10de01db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de01de push edx */
  push32((uint32_t)(EDX));
  /* 10de01df call 0x10ddf720 */
  push32(0x10de01e4u); f_10ddf720();
  /* 10de01e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de01e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de01e9 jne 0x10de0213 */
  if (!C.zf) goto L_10de0213;
L_10de01eb:;
  /* 10de01eb push 8 */
  push32((uint32_t)(0x8u));
  /* 10de01ed lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10de01f0 push eax */
  push32((uint32_t)(EAX));
  /* 10de01f1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10de01f6 mov ecx, dword ptr [0x10dff828] */
  ECX = (r32((uint32_t)(0x10dff828)));
  /* 10de01fc push ecx */
  push32((uint32_t)(ECX));
  /* 10de01fd call dword ptr [0x10dff82c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dff82c))), 0x10de0203u);
  /* 10de0203 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de0205 jne 0x10de020b */
  if (!C.zf) goto L_10de020b;
  /* 10de0207 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de0209 jmp 0x10de0257 */
  goto L_10de0257;
L_10de020b:;
  /* 10de020b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10de020e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10de0211 jmp 0x10de024b */
  goto L_10de024b;
L_10de0213:;
  /* 10de0213 push 0x10dfb898 */
  push32((uint32_t)(0x10dfb898u));
  /* 10de0218 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de021b push eax */
  push32((uint32_t)(EAX));
  /* 10de021c call 0x10ddf720 */
  push32(0x10de0221u); f_10ddf720();
  /* 10de0221 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de0226 jne 0x10de024b */
  if (!C.zf) goto L_10de024b;
  /* 10de0228 push 8 */
  push32((uint32_t)(0x8u));
  /* 10de022a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10de022d push ecx */
  push32((uint32_t)(ECX));
  /* 10de022e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10de0230 mov edx, dword ptr [0x10dff828] */
  EDX = (r32((uint32_t)(0x10dff828)));
  /* 10de0236 push edx */
  push32((uint32_t)(EDX));
  /* 10de0237 call dword ptr [0x10dff82c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dff82c))), 0x10de023du);
  /* 10de023d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de023f jne 0x10de0245 */
  if (!C.zf) goto L_10de0245;
  /* 10de0241 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de0243 jmp 0x10de0257 */
  goto L_10de0257;
L_10de0245:;
  /* 10de0245 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10de0248 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10de024b:;
  /* 10de024b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de024e push ecx */
  push32((uint32_t)(ECX));
  /* 10de024f call 0x10de2340 */
  push32(0x10de0254u); f_10de2340();
  /* 10de0254 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10de0257:;
  /* 10de0257 mov esp, ebp */
  ESP = (EBP);
  /* 10de0259 pop ebp */
  EBP = (pop32());
  /* 10de025a ret  */
  ESPCHK(0x10de01c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010260 @ 0x10de0260 (79 bytes, 26 insns) */
void f_10de0260(void) {
  FTRACE(0x10de0260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de0260 push ebp */
  push32((uint32_t)(EBP));
  /* 10de0261 mov ebp, esp */
  EBP = (ESP);
  /* 10de0263 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de0266 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10de026a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10de026e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10de0275 jmp 0x10de0280 */
  goto L_10de0280;
L_10de0277:;
  /* 10de0277 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de027a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de027d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10de0280:;
  /* 10de0280 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0284 jae 0x10de02a6 */
  if (!C.cf) goto L_10de02a6;
  /* 10de0286 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de0289 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10de028f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de0292 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de0294 mov cx, word ptr [eax*2 + 0x10dfe9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10dfe9c4)));
  /* 10de029c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de029e jne 0x10de02a4 */
  if (!C.zf) goto L_10de02a4;
  /* 10de02a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de02a2 jmp 0x10de02ab */
  goto L_10de02ab;
L_10de02a4:;
  /* 10de02a4 jmp 0x10de0277 */
  goto L_10de0277;
L_10de02a6:;
  /* 10de02a6 mov eax, 1 */
  EAX = (0x1u);
L_10de02ab:;
  /* 10de02ab mov esp, ebp */
  ESP = (EBP);
  /* 10de02ad pop ebp */
  EBP = (pop32());
  /* 10de02ae ret  */
  ESPCHK(0x10de0260u, _esp0);
  ESP += 4; return;
}

/* FUN_100102b0 @ 0x10de02b0 (135 bytes, 48 insns) */
void f_10de02b0(void) {
  FTRACE(0x10de02b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de02b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de02b1 mov ebp, esp */
  EBP = (ESP);
  /* 10de02b3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de02b6 push esi */
  push32((uint32_t)(ESI));
  /* 10de02b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de02ba and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de02bf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de02c4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de02c9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10de02cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de02d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10de02d4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10de02d6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10de02d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10de02da push 1 */
  push32((uint32_t)(0x1u));
  /* 10de02dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de02df push edx */
  push32((uint32_t)(EDX));
  /* 10de02e0 call dword ptr [0x10dff82c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dff82c))), 0x10de02e6u);
  /* 10de02e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de02e8 jne 0x10de02ee */
  if (!C.zf) goto L_10de02ee;
  /* 10de02ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de02ec jmp 0x10de0332 */
  goto L_10de0332;
L_10de02ee:;
  /* 10de02ee lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10de02f1 push eax */
  push32((uint32_t)(EAX));
  /* 10de02f2 call 0x10de0520 */
  push32(0x10de02f7u); f_10de0520();
  /* 10de02f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de02fa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de02fd je 0x10de032d */
  if (C.zf) goto L_10de032d;
  /* 10de02ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0303 je 0x10de032d */
  if (C.zf) goto L_10de032d;
  /* 10de0305 mov ecx, dword ptr [0x10dff81c] */
  ECX = (r32((uint32_t)(0x10dff81c)));
  /* 10de030b push ecx */
  push32((uint32_t)(ECX));
  /* 10de030c call 0x10de05a0 */
  push32(0x10de0311u); f_10de05a0();
  /* 10de0311 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0314 mov esi, eax */
  ESI = (EAX);
  /* 10de0316 mov edx, dword ptr [0x10dff81c] */
  EDX = (r32((uint32_t)(0x10dff81c)));
  /* 10de031c push edx */
  push32((uint32_t)(EDX));
  /* 10de031d call 0x10dd68c0 */
  push32(0x10de0322u); f_10dd68c0();
  /* 10de0322 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0325 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0327 jne 0x10de032d */
  if (!C.zf) goto L_10de032d;
  /* 10de0329 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de032b jmp 0x10de0332 */
  goto L_10de0332;
L_10de032d:;
  /* 10de032d mov eax, 1 */
  EAX = (0x1u);
L_10de0332:;
  /* 10de0332 pop esi */
  ESI = (pop32());
  /* 10de0333 mov esp, ebp */
  ESP = (EBP);
  /* 10de0335 pop ebp */
  EBP = (pop32());
  /* 10de0336 ret  */
  ESPCHK(0x10de02b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010340 @ 0x10de0340 (77 bytes, 18 insns) */
void f_10de0340(void) {
  FTRACE(0x10de0340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de0340 push ebp */
  push32((uint32_t)(EBP));
  /* 10de0341 mov ebp, esp */
  EBP = (ESP);
  /* 10de0343 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de0349 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10de0353 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10de0359 push eax */
  push32((uint32_t)(EAX));
  /* 10de035a call dword ptr [0x10e02288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02288))), 0x10de0360u);
  /* 10de0360 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de0362 je 0x10de0379 */
  if (C.zf) goto L_10de0379;
  /* 10de0364 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de036b jne 0x10de0379 */
  if (!C.zf) goto L_10de0379;
  /* 10de036d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10de0377 jmp 0x10de0383 */
  goto L_10de0383;
L_10de0379:;
  /* 10de0379 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10de0383:;
  /* 10de0383 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10de0389 mov esp, ebp */
  ESP = (EBP);
  /* 10de038b pop ebp */
  EBP = (pop32());
  /* 10de038c ret  */
  ESPCHK(0x10de0340u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10de0390 (388 bytes, 118 insns) */
void f_10de0390(void) {
  FTRACE(0x10de0390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de0390 push ebp */
  push32((uint32_t)(EBP));
  /* 10de0391 mov ebp, esp */
  EBP = (ESP);
  /* 10de0393 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de0396 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10de039d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10de03a4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10de03ab:;
  /* 10de03ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de03ae cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de03b1 jg 0x10de04f8 */
  if ((!C.zf&&C.sf==C.of)) goto L_10de04f8;
  /* 10de03b7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de03ba add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de03bd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10de03be sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de03c0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10de03c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10de03c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de03c8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de03cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de03ce cmp edx, dword ptr [ecx + 0x10dfe520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10dfe520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de03d4 jne 0x10de04ce */
  if (!C.zf) goto L_10de04ce;
  /* 10de03da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de03dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10de03e0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de03e4 ja 0x10de0407 */
  if ((!C.cf&&!C.zf)) goto L_10de0407;
  /* 10de03e6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de03ea je 0x10de0479 */
  if (C.zf) goto L_10de0479;
  /* 10de03f0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de03f4 je 0x10de0424 */
  if (C.zf) goto L_10de0424;
  /* 10de03f6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de03fa je 0x10de0446 */
  if (C.zf) goto L_10de0446;
  /* 10de03fc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0400 je 0x10de0468 */
  if (C.zf) goto L_10de0468;
  /* 10de0402 jmp 0x10de0498 */
  goto L_10de0498;
L_10de0407:;
  /* 10de0407 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de040e je 0x10de0435 */
  if (C.zf) goto L_10de0435;
  /* 10de0410 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0417 je 0x10de0457 */
  if (C.zf) goto L_10de0457;
  /* 10de0419 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0420 je 0x10de048a */
  if (C.zf) goto L_10de048a;
  /* 10de0422 jmp 0x10de0498 */
  goto L_10de0498;
L_10de0424:;
  /* 10de0424 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0427 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de042a add ecx, 0x10dfe524 */
  { uint32_t _a=(ECX),_b=(0x10dfe524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0430 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10de0433 jmp 0x10de0498 */
  goto L_10de0498;
L_10de0435:;
  /* 10de0435 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0438 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de043b mov eax, dword ptr [edx + 0x10dfe52c] */
  EAX = (r32((uint32_t)(EDX + 0x10dfe52c)));
  /* 10de0441 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10de0444 jmp 0x10de0498 */
  goto L_10de0498;
L_10de0446:;
  /* 10de0446 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0449 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de044c add ecx, 0x10dfe530 */
  { uint32_t _a=(ECX),_b=(0x10dfe530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0452 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10de0455 jmp 0x10de0498 */
  goto L_10de0498;
L_10de0457:;
  /* 10de0457 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de045a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de045d mov eax, dword ptr [edx + 0x10dfe534] */
  EAX = (r32((uint32_t)(EDX + 0x10dfe534)));
  /* 10de0463 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10de0466 jmp 0x10de0498 */
  goto L_10de0498;
L_10de0468:;
  /* 10de0468 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de046b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de046e add ecx, 0x10dfe538 */
  { uint32_t _a=(ECX),_b=(0x10dfe538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0474 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10de0477 jmp 0x10de0498 */
  goto L_10de0498;
L_10de0479:;
  /* 10de0479 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de047c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de047f add edx, 0x10dfe53c */
  { uint32_t _a=(EDX),_b=(0x10dfe53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0485 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10de0488 jmp 0x10de0498 */
  goto L_10de0498;
L_10de048a:;
  /* 10de048a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de048d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de0490 add eax, 0x10dfe544 */
  { uint32_t _a=(EAX),_b=(0x10dfe544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0495 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10de0498:;
  /* 10de0498 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de049c je 0x10de04a4 */
  if (C.zf) goto L_10de04a4;
  /* 10de049e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de04a2 jge 0x10de04a6 */
  if ((C.sf==C.of)) goto L_10de04a6;
L_10de04a4:;
  /* 10de04a4 jmp 0x10de04f8 */
  goto L_10de04f8;
L_10de04a6:;
  /* 10de04a6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de04a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de04ac push ecx */
  push32((uint32_t)(ECX));
  /* 10de04ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de04b0 push edx */
  push32((uint32_t)(EDX));
  /* 10de04b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de04b4 push eax */
  push32((uint32_t)(EAX));
  /* 10de04b5 call 0x10dd72b0 */
  push32(0x10de04bau); f_10dd72b0();
  /* 10de04ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de04bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de04c0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de04c3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10de04c7 mov eax, 1 */
  EAX = (0x1u);
  /* 10de04cc jmp 0x10de050e */
  goto L_10de050e;
L_10de04ce:;
  /* 10de04ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de04d1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de04d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de04d7 cmp eax, dword ptr [edx + 0x10dfe520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10dfe520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de04dd jae 0x10de04ea */
  if (!C.cf) goto L_10de04ea;
  /* 10de04df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de04e2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de04e5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10de04e8 jmp 0x10de04f3 */
  goto L_10de04f3;
L_10de04ea:;
  /* 10de04ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de04ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de04f0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10de04f3:;
  /* 10de04f3 jmp 0x10de03ab */
  goto L_10de03ab;
L_10de04f8:;
  /* 10de04f8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de04fb push eax */
  push32((uint32_t)(EAX));
  /* 10de04fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de04ff push ecx */
  push32((uint32_t)(ECX));
  /* 10de0500 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de0503 push edx */
  push32((uint32_t)(EDX));
  /* 10de0504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de0507 push eax */
  push32((uint32_t)(EAX));
  /* 10de0508 call dword ptr [0x10e02294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02294))), 0x10de050eu);
L_10de050e:;
  /* 10de050e mov esp, ebp */
  ESP = (EBP);
  /* 10de0510 pop ebp */
  EBP = (pop32());
  /* 10de0511 ret 0x10 */
  ESPCHK(0x10de0390u, _esp0);
  ESP += 20; return;
}

/* FUN_10010520 @ 0x10de0520 (118 bytes, 42 insns) */
void f_10de0520(void) {
  FTRACE(0x10de0520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de0520 push ebp */
  push32((uint32_t)(EBP));
  /* 10de0521 mov ebp, esp */
  EBP = (ESP);
  /* 10de0523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de0526 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10de052d:;
  /* 10de052d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de0530 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10de0532 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10de0535 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10de0539 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de053c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de053f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10de0542 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de0544 je 0x10de058f */
  if (C.zf) goto L_10de058f;
  /* 10de0546 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10de054a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de054d jl 0x10de0562 */
  if ((C.sf!=C.of)) goto L_10de0562;
  /* 10de054f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10de0553 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0556 jg 0x10de0562 */
  if ((!C.zf&&C.sf==C.of)) goto L_10de0562;
  /* 10de0558 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10de055b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10de055d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10de0560 jmp 0x10de057c */
  goto L_10de057c;
L_10de0562:;
  /* 10de0562 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10de0566 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0569 jl 0x10de057c */
  if ((C.sf!=C.of)) goto L_10de057c;
  /* 10de056b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10de056f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0572 jg 0x10de057c */
  if ((!C.zf&&C.sf==C.of)) goto L_10de057c;
  /* 10de0574 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10de0577 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10de0579 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10de057c:;
  /* 10de057c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de057f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10de0582 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10de0586 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10de058a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10de058d jmp 0x10de052d */
  goto L_10de052d;
L_10de058f:;
  /* 10de058f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de0592 mov esp, ebp */
  ESP = (EBP);
  /* 10de0594 pop ebp */
  EBP = (pop32());
  /* 10de0595 ret  */
  ESPCHK(0x10de0520u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10de05a0 (101 bytes, 36 insns) */
void f_10de05a0(void) {
  FTRACE(0x10de05a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de05a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de05a1 mov ebp, esp */
  EBP = (ESP);
  /* 10de05a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de05a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10de05ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de05b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10de05b2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10de05b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de05b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de05bb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10de05be:;
  /* 10de05be movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10de05c2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de05c5 jl 0x10de05d0 */
  if ((C.sf!=C.of)) goto L_10de05d0;
  /* 10de05c7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10de05cb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de05ce jle 0x10de05e2 */
  if ((C.zf||C.sf!=C.of)) goto L_10de05e2;
L_10de05d0:;
  /* 10de05d0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10de05d4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de05d7 jl 0x10de05fe */
  if ((C.sf!=C.of)) goto L_10de05fe;
  /* 10de05d9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10de05dd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de05e0 jg 0x10de05fe */
  if ((!C.zf&&C.sf==C.of)) goto L_10de05fe;
L_10de05e2:;
  /* 10de05e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de05e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de05e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10de05eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de05ee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10de05f0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10de05f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de05f6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de05f9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10de05fc jmp 0x10de05be */
  goto L_10de05be;
L_10de05fe:;
  /* 10de05fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de0601 mov esp, ebp */
  ESP = (EBP);
  /* 10de0603 pop ebp */
  EBP = (pop32());
  /* 10de0604 ret  */
  ESPCHK(0x10de05a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010610 @ 0x10de0610 (122 bytes, 39 insns) */
void f_10de0610(void) {
  FTRACE(0x10de0610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de0610 push ebp */
  push32((uint32_t)(EBP));
  /* 10de0611 mov ebp, esp */
  EBP = (ESP);
  /* 10de0613 push ecx */
  push32((uint32_t)(ECX));
  /* 10de0614 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de0617 cmp eax, dword ptr [0x10e010bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e010bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de061d jae 0x10de0641 */
  if (!C.cf) goto L_10de0641;
  /* 10de061f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de0622 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10de0625 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de0628 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10de062b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de062e mov eax, dword ptr [ecx*4 + 0x10e00f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e00f80)));
  /* 10de0635 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10de063a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10de063d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10de063f jne 0x10de065c */
  if (!C.zf) goto L_10de065c;
L_10de0641:;
  /* 10de0641 call 0x10ddb960 */
  push32(0x10de0646u); f_10ddb960();
  /* 10de0646 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10de064c call 0x10ddb970 */
  push32(0x10de0651u); f_10ddb970();
  /* 10de0651 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10de0657 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de065a jmp 0x10de0686 */
  goto L_10de0686;
L_10de065c:;
  /* 10de065c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de065f push edx */
  push32((uint32_t)(EDX));
  /* 10de0660 call 0x10ddd180 */
  push32(0x10de0665u); f_10ddd180();
  /* 10de0665 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0668 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de066b push eax */
  push32((uint32_t)(EAX));
  /* 10de066c call 0x10de0690 */
  push32(0x10de0671u); f_10de0690();
  /* 10de0671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0674 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10de0677 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de067a push ecx */
  push32((uint32_t)(ECX));
  /* 10de067b call 0x10ddd210 */
  push32(0x10de0680u); f_10ddd210();
  /* 10de0680 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0683 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10de0686:;
  /* 10de0686 mov esp, ebp */
  ESP = (EBP);
  /* 10de0688 pop ebp */
  EBP = (pop32());
  /* 10de0689 ret  */
  ESPCHK(0x10de0610u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10de0690 (170 bytes, 59 insns) */
void f_10de0690(void) {
  FTRACE(0x10de0690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de0690 push ebp */
  push32((uint32_t)(EBP));
  /* 10de0691 mov ebp, esp */
  EBP = (ESP);
  /* 10de0693 push ecx */
  push32((uint32_t)(ECX));
  /* 10de0694 push esi */
  push32((uint32_t)(ESI));
  /* 10de0695 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de0698 push eax */
  push32((uint32_t)(EAX));
  /* 10de0699 call 0x10ddd000 */
  push32(0x10de069eu); f_10ddd000();
  /* 10de069e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de06a1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de06a4 je 0x10de06e3 */
  if (C.zf) goto L_10de06e3;
  /* 10de06a6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de06aa je 0x10de06b2 */
  if (C.zf) goto L_10de06b2;
  /* 10de06ac cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de06b0 jne 0x10de06cc */
  if (!C.zf) goto L_10de06cc;
L_10de06b2:;
  /* 10de06b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10de06b4 call 0x10ddd000 */
  push32(0x10de06b9u); f_10ddd000();
  /* 10de06b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de06bc mov esi, eax */
  ESI = (EAX);
  /* 10de06be push 2 */
  push32((uint32_t)(0x2u));
  /* 10de06c0 call 0x10ddd000 */
  push32(0x10de06c5u); f_10ddd000();
  /* 10de06c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de06c8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de06ca je 0x10de06e3 */
  if (C.zf) goto L_10de06e3;
L_10de06cc:;
  /* 10de06cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de06cf push ecx */
  push32((uint32_t)(ECX));
  /* 10de06d0 call 0x10ddd000 */
  push32(0x10de06d5u); f_10ddd000();
  /* 10de06d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de06d8 push eax */
  push32((uint32_t)(EAX));
  /* 10de06d9 call dword ptr [0x10e02284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02284))), 0x10de06dfu);
  /* 10de06df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de06e1 je 0x10de06ec */
  if (C.zf) goto L_10de06ec;
L_10de06e3:;
  /* 10de06e3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10de06ea jmp 0x10de06f5 */
  goto L_10de06f5;
L_10de06ec:;
  /* 10de06ec call dword ptr [0x10e02320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02320))), 0x10de06f2u);
  /* 10de06f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10de06f5:;
  /* 10de06f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de06f8 push edx */
  push32((uint32_t)(EDX));
  /* 10de06f9 call 0x10ddcf20 */
  push32(0x10de06feu); f_10ddcf20();
  /* 10de06fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0701 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de0704 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10de0707 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de070a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10de070d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de0710 mov edx, dword ptr [eax*4 + 0x10e00f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e00f80)));
  /* 10de0717 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10de071c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0720 je 0x10de0733 */
  if (C.zf) goto L_10de0733;
  /* 10de0722 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de0725 push eax */
  push32((uint32_t)(EAX));
  /* 10de0726 call 0x10ddb8c0 */
  push32(0x10de072bu); f_10ddb8c0();
  /* 10de072b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de072e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de0731 jmp 0x10de0735 */
  goto L_10de0735;
L_10de0733:;
  /* 10de0733 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10de0735:;
  /* 10de0735 pop esi */
  ESI = (pop32());
  /* 10de0736 mov esp, ebp */
  ESP = (EBP);
  /* 10de0738 pop ebp */
  EBP = (pop32());
  /* 10de0739 ret  */
  ESPCHK(0x10de0690u, _esp0);
  ESP += 4; return;
}

/* FUN_10010740 @ 0x10de0740 (146 bytes, 52 insns) */
void f_10de0740(void) {
  FTRACE(0x10de0740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de0740 push ebp */
  push32((uint32_t)(EBP));
  /* 10de0741 mov ebp, esp */
  EBP = (ESP);
  /* 10de0743 push ebx */
  push32((uint32_t)(EBX));
  /* 10de0744 push esi */
  push32((uint32_t)(ESI));
  /* 10de0745 push edi */
  push32((uint32_t)(EDI));
L_10de0746:;
  /* 10de0746 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de074a jne 0x10de076a */
  if (!C.zf) goto L_10de076a;
  /* 10de074c push 0x10dfb1d8 */
  push32((uint32_t)(0x10dfb1d8u));
  /* 10de0751 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de0753 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10de0755 push 0x10dfb8a0 */
  push32((uint32_t)(0x10dfb8a0u));
  /* 10de075a push 2 */
  push32((uint32_t)(0x2u));
  /* 10de075c call 0x10dd2b50 */
  push32(0x10de0761u); f_10dd2b50();
  /* 10de0761 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0764 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0767 jne 0x10de076a */
  if (!C.zf) goto L_10de076a;
  /* 10de0769 int3  */
  x86_unimpl("int3 @ 0x10de0769");
L_10de076a:;
  /* 10de076a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de076c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de076e jne 0x10de0746 */
  if (!C.zf) goto L_10de0746;
  /* 10de0770 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de0773 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10de0776 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10de077c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de077e je 0x10de07cd */
  if (C.zf) goto L_10de07cd;
  /* 10de0780 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de0783 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10de0786 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10de0789 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10de078b je 0x10de07cd */
  if (C.zf) goto L_10de07cd;
  /* 10de078d push 2 */
  push32((uint32_t)(0x2u));
  /* 10de078f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de0792 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10de0795 push eax */
  push32((uint32_t)(EAX));
  /* 10de0796 call 0x10dd4520 */
  push32(0x10de079bu); f_10dd4520();
  /* 10de079b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de079e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de07a1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10de07a4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10de07aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de07ad mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10de07b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de07b3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10de07b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de07bc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10de07c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de07c6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10de07cd:;
  /* 10de07cd pop edi */
  EDI = (pop32());
  /* 10de07ce pop esi */
  ESI = (pop32());
  /* 10de07cf pop ebx */
  EBX = (pop32());
  /* 10de07d0 pop ebp */
  EBP = (pop32());
  /* 10de07d1 ret  */
  ESPCHK(0x10de0740u, _esp0);
  ESP += 4; return;
}

/* FUN_100107e0 @ 0x10de07e0 (289 bytes, 97 insns) */
void f_10de07e0(void) {
  FTRACE(0x10de07e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de07e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de07e1 mov ebp, esp */
  EBP = (ESP);
  /* 10de07e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de07e6 push esi */
  push32((uint32_t)(ESI));
  /* 10de07e7 mov eax, dword ptr [0x10dfec98] */
  EAX = (r32((uint32_t)(0x10dfec98)));
  /* 10de07ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10de07ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10de07f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10de07fd jmp 0x10de0808 */
  goto L_10de0808;
L_10de07ff:;
  /* 10de07ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0802 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0805 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10de0808:;
  /* 10de0808 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de080c jae 0x10de0841 */
  if (!C.cf) goto L_10de0841;
  /* 10de080e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0811 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0814 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10de0817 push ecx */
  push32((uint32_t)(ECX));
  /* 10de0818 call 0x10dd68c0 */
  push32(0x10de081du); f_10dd68c0();
  /* 10de081d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0820 mov esi, eax */
  ESI = (EAX);
  /* 10de0822 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0825 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0828 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10de082c push ecx */
  push32((uint32_t)(ECX));
  /* 10de082d call 0x10dd68c0 */
  push32(0x10de0832u); f_10dd68c0();
  /* 10de0832 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0835 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0838 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10de083c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10de083f jmp 0x10de07ff */
  goto L_10de07ff;
L_10de0841:;
  /* 10de0841 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de0844 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0847 push eax */
  push32((uint32_t)(EAX));
  /* 10de0848 call 0x10dd3a70 */
  push32(0x10de084du); f_10dd3a70();
  /* 10de084d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0850 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10de0853 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0857 je 0x10de08f9 */
  if (C.zf) goto L_10de08f9;
  /* 10de085d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de0860 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10de0863 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10de086a jmp 0x10de0875 */
  goto L_10de0875;
L_10de086c:;
  /* 10de086c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de086f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0872 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10de0875:;
  /* 10de0875 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0879 jae 0x10de08ea */
  if (!C.cf) goto L_10de08ea;
  /* 10de087b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de087e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10de0881 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0884 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0887 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10de088a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de088d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0890 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10de0893 push ecx */
  push32((uint32_t)(ECX));
  /* 10de0894 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0897 push edx */
  push32((uint32_t)(EDX));
  /* 10de0898 call 0x10dd6a40 */
  push32(0x10de089du); f_10dd6a40();
  /* 10de089d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de08a0 push eax */
  push32((uint32_t)(EAX));
  /* 10de08a1 call 0x10dd68c0 */
  push32(0x10de08a6u); f_10dd68c0();
  /* 10de08a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de08a9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de08ac add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de08ae mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10de08b1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de08b4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10de08b7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de08ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de08bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10de08c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de08c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de08c6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10de08ca push eax */
  push32((uint32_t)(EAX));
  /* 10de08cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de08ce push ecx */
  push32((uint32_t)(ECX));
  /* 10de08cf call 0x10dd6a40 */
  push32(0x10de08d4u); f_10dd6a40();
  /* 10de08d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de08d7 push eax */
  push32((uint32_t)(EAX));
  /* 10de08d8 call 0x10dd68c0 */
  push32(0x10de08ddu); f_10dd68c0();
  /* 10de08dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de08e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de08e3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de08e5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10de08e8 jmp 0x10de086c */
  goto L_10de086c;
L_10de08ea:;
  /* 10de08ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de08ed mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10de08f0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de08f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de08f6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10de08f9:;
  /* 10de08f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de08fc pop esi */
  ESI = (pop32());
  /* 10de08fd mov esp, ebp */
  ESP = (EBP);
  /* 10de08ff pop ebp */
  EBP = (pop32());
  /* 10de0900 ret  */
  ESPCHK(0x10de07e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010910 @ 0x10de0910 (291 bytes, 97 insns) */
void f_10de0910(void) {
  FTRACE(0x10de0910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de0910 push ebp */
  push32((uint32_t)(EBP));
  /* 10de0911 mov ebp, esp */
  EBP = (ESP);
  /* 10de0913 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de0916 push esi */
  push32((uint32_t)(ESI));
  /* 10de0917 mov eax, dword ptr [0x10dfec98] */
  EAX = (r32((uint32_t)(0x10dfec98)));
  /* 10de091c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10de091f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10de0926 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10de092d jmp 0x10de0938 */
  goto L_10de0938;
L_10de092f:;
  /* 10de092f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0932 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0935 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10de0938:;
  /* 10de0938 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de093c jae 0x10de0972 */
  if (!C.cf) goto L_10de0972;
  /* 10de093e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0941 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0944 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10de0948 push ecx */
  push32((uint32_t)(ECX));
  /* 10de0949 call 0x10dd68c0 */
  push32(0x10de094eu); f_10dd68c0();
  /* 10de094e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0951 mov esi, eax */
  ESI = (EAX);
  /* 10de0953 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0956 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0959 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10de095d push ecx */
  push32((uint32_t)(ECX));
  /* 10de095e call 0x10dd68c0 */
  push32(0x10de0963u); f_10dd68c0();
  /* 10de0963 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0966 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0969 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10de096d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10de0970 jmp 0x10de092f */
  goto L_10de092f;
L_10de0972:;
  /* 10de0972 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de0975 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0978 push eax */
  push32((uint32_t)(EAX));
  /* 10de0979 call 0x10dd3a70 */
  push32(0x10de097eu); f_10dd3a70();
  /* 10de097e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0981 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10de0984 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0988 je 0x10de0a2b */
  if (C.zf) goto L_10de0a2b;
  /* 10de098e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de0991 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10de0994 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10de099b jmp 0x10de09a6 */
  goto L_10de09a6;
L_10de099d:;
  /* 10de099d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de09a0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de09a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10de09a6:;
  /* 10de09a6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de09aa jae 0x10de0a1c */
  if (!C.cf) goto L_10de0a1c;
  /* 10de09ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de09af mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10de09b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de09b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de09b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10de09bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de09be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de09c1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10de09c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10de09c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de09c9 push edx */
  push32((uint32_t)(EDX));
  /* 10de09ca call 0x10dd6a40 */
  push32(0x10de09cfu); f_10dd6a40();
  /* 10de09cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de09d2 push eax */
  push32((uint32_t)(EAX));
  /* 10de09d3 call 0x10dd68c0 */
  push32(0x10de09d8u); f_10dd68c0();
  /* 10de09d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de09db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de09de add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de09e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10de09e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de09e6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10de09e9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de09ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de09ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10de09f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de09f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de09f8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10de09fc push eax */
  push32((uint32_t)(EAX));
  /* 10de09fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0a00 push ecx */
  push32((uint32_t)(ECX));
  /* 10de0a01 call 0x10dd6a40 */
  push32(0x10de0a06u); f_10dd6a40();
  /* 10de0a06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0a09 push eax */
  push32((uint32_t)(EAX));
  /* 10de0a0a call 0x10dd68c0 */
  push32(0x10de0a0fu); f_10dd68c0();
  /* 10de0a0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0a12 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0a15 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0a17 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10de0a1a jmp 0x10de099d */
  goto L_10de099d;
L_10de0a1c:;
  /* 10de0a1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0a1f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10de0a22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0a25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0a28 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10de0a2b:;
  /* 10de0a2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de0a2e pop esi */
  ESI = (pop32());
  /* 10de0a2f mov esp, ebp */
  ESP = (EBP);
  /* 10de0a31 pop ebp */
  EBP = (pop32());
  /* 10de0a32 ret  */
  ESPCHK(0x10de0910u, _esp0);
  ESP += 4; return;
}

