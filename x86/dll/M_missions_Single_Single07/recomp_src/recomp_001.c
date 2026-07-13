#include "recomp.h"

/* FUN_10008c40 @ 0x10d58c40 (116 bytes, 34 insns) */
void f_10d58c40(void) {
  FTRACE(0x10d58c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58c41 mov ebp, esp */
  EBP = (ESP);
  /* 10d58c43 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58c44 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10d58c4b push 9 */
  push32((uint32_t)(0x9u));
  /* 10d58c4d call 0x10d58460 */
  push32(0x10d58c52u); f_10d58460();
  /* 10d58c52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58c55 call 0x10d5a350 */
  push32(0x10d58c5au); f_10d5a350();
  /* 10d58c5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d58c5c jge 0x10d58c65 */
  if ((C.sf==C.of)) goto L_10d58c65;
  /* 10d58c5e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10d58c65:;
  /* 10d58c65 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d58c67 call 0x10d58500 */
  push32(0x10d58c6cu); f_10d58500();
  /* 10d58c6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d58c71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d58c73 mov eax, dword ptr [0x10d81eac] */
  EAX = (r32((uint32_t)(0x10d81eac)));
  /* 10d58c78 push eax */
  push32((uint32_t)(EAX));
  /* 10d58c79 call dword ptr [0x10d83358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83358))), 0x10d58c7fu);
  /* 10d58c7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d58c81 jne 0x10d58cad */
  if (!C.zf) goto L_10d58cad;
  /* 10d58c83 call dword ptr [0x10d83338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83338))), 0x10d58c89u);
  /* 10d58c89 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58c8c jne 0x10d58ca6 */
  if (!C.zf) goto L_10d58ca6;
  /* 10d58c8e call 0x10d5c940 */
  push32(0x10d58c93u); f_10d5c940();
  /* 10d58c93 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10d58c99 call 0x10d5c930 */
  push32(0x10d58c9eu); f_10d5c930();
  /* 10d58c9e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10d58ca4 jmp 0x10d58cad */
  goto L_10d58cad;
L_10d58ca6:;
  /* 10d58ca6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10d58cad:;
  /* 10d58cad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58cb0 mov esp, ebp */
  ESP = (EBP);
  /* 10d58cb2 pop ebp */
  EBP = (pop32());
  /* 10d58cb3 ret  */
  ESPCHK(0x10d58c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cc0 @ 0x10d58cc0 (10 bytes, 5 insns) */
void f_10d58cc0(void) {
  FTRACE(0x10d58cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10d58cc3 call 0x10d58c40 */
  push32(0x10d58cc8u); f_10d58c40();
  /* 10d58cc8 pop ebp */
  EBP = (pop32());
  /* 10d58cc9 ret  */
  ESPCHK(0x10d58cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cd0 @ 0x10d58cd0 (10 bytes, 5 insns) */
void f_10d58cd0(void) {
  FTRACE(0x10d58cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10d58cd3 mov eax, dword ptr [0x10d7ec94] */
  EAX = (r32((uint32_t)(0x10d7ec94)));
  /* 10d58cd8 pop ebp */
  EBP = (pop32());
  /* 10d58cd9 ret  */
  ESPCHK(0x10d58cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ce0 @ 0x10d58ce0 (31 bytes, 11 insns) */
void f_10d58ce0(void) {
  FTRACE(0x10d58ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10d58ce3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58cea jbe 0x10d58cf0 */
  if ((C.cf||C.zf)) goto L_10d58cf0;
  /* 10d58cec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d58cee jmp 0x10d58cfd */
  goto L_10d58cfd;
L_10d58cf0:;
  /* 10d58cf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58cf3 mov dword ptr [0x10d7ec94], eax */
  w32((uint32_t)(0x10d7ec94), (EAX));
  /* 10d58cf8 mov eax, 1 */
  EAX = (0x1u);
L_10d58cfd:;
  /* 10d58cfd pop ebp */
  EBP = (pop32());
  /* 10d58cfe ret  */
  ESPCHK(0x10d58ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d00 @ 0x10d58d00 (89 bytes, 20 insns) */
void f_10d58d00(void) {
  FTRACE(0x10d58d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58d01 mov ebp, esp */
  EBP = (ESP);
  /* 10d58d03 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10d58d08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d58d0a mov eax, dword ptr [0x10d81eac] */
  EAX = (r32((uint32_t)(0x10d81eac)));
  /* 10d58d0f push eax */
  push32((uint32_t)(EAX));
  /* 10d58d10 call dword ptr [0x10d832e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832e4))), 0x10d58d16u);
  /* 10d58d16 mov dword ptr [0x10d81ea8], eax */
  w32((uint32_t)(0x10d81ea8), (EAX));
  /* 10d58d1b cmp dword ptr [0x10d81ea8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d81ea8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58d22 jne 0x10d58d28 */
  if (!C.zf) goto L_10d58d28;
  /* 10d58d24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d58d26 jmp 0x10d58d57 */
  goto L_10d58d57;
L_10d58d28:;
  /* 10d58d28 mov ecx, dword ptr [0x10d81ea8] */
  ECX = (r32((uint32_t)(0x10d81ea8)));
  /* 10d58d2e mov dword ptr [0x10d81e9c], ecx */
  w32((uint32_t)(0x10d81e9c), (ECX));
  /* 10d58d34 mov dword ptr [0x10d81ea0], 0 */
  w32((uint32_t)(0x10d81ea0), (0x0u));
  /* 10d58d3e mov dword ptr [0x10d81ea4], 0 */
  w32((uint32_t)(0x10d81ea4), (0x0u));
  /* 10d58d48 mov dword ptr [0x10d81e88], 0x10 */
  w32((uint32_t)(0x10d81e88), (0x10u));
  /* 10d58d52 mov eax, 1 */
  EAX = (0x1u);
L_10d58d57:;
  /* 10d58d57 pop ebp */
  EBP = (pop32());
  /* 10d58d58 ret  */
  ESPCHK(0x10d58d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d60 @ 0x10d58d60 (85 bytes, 29 insns) */
void f_10d58d60(void) {
  FTRACE(0x10d58d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58d61 mov ebp, esp */
  EBP = (ESP);
  /* 10d58d63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d58d66 mov eax, dword ptr [0x10d81ea4] */
  EAX = (r32((uint32_t)(0x10d81ea4)));
  /* 10d58d6b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d58d6e mov ecx, dword ptr [0x10d81ea8] */
  ECX = (r32((uint32_t)(0x10d81ea8)));
  /* 10d58d74 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58d76 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d58d79 mov edx, dword ptr [0x10d81ea8] */
  EDX = (r32((uint32_t)(0x10d81ea8)));
  /* 10d58d7f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d58d82:;
  /* 10d58d82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58d85 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58d88 jae 0x10d58daf */
  if (!C.cf) goto L_10d58daf;
  /* 10d58d8a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58d8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58d90 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d58d93 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d58d96 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58d9d jae 0x10d58da4 */
  if (!C.cf) goto L_10d58da4;
  /* 10d58d9f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58da2 jmp 0x10d58db1 */
  goto L_10d58db1;
L_10d58da4:;
  /* 10d58da4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58da7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58daa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d58dad jmp 0x10d58d82 */
  goto L_10d58d82;
L_10d58daf:;
  /* 10d58daf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d58db1:;
  /* 10d58db1 mov esp, ebp */
  ESP = (EBP);
  /* 10d58db3 pop ebp */
  EBP = (pop32());
  /* 10d58db4 ret  */
  ESPCHK(0x10d58d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008dc0 @ 0x10d58dc0 (95 bytes, 33 insns) */
void f_10d58dc0(void) {
  FTRACE(0x10d58dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10d58dc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d58dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58dc9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58dcc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d58dcf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d58dd2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58dd5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10d58dd8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d58ddb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d58de0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58de3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d58de5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58de8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d58deb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d58ded test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d58def jne 0x10d58e11 */
  if (!C.zf) goto L_10d58e11;
  /* 10d58df1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58df4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10d58df7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d58df9 jne 0x10d58e11 */
  if (!C.zf) goto L_10d58e11;
  /* 10d58dfb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58dfe and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d58e04 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d58e06 je 0x10d58e11 */
  if (C.zf) goto L_10d58e11;
  /* 10d58e08 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10d58e0f jmp 0x10d58e18 */
  goto L_10d58e18;
L_10d58e11:;
  /* 10d58e11 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10d58e18:;
  /* 10d58e18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d58e1b mov esp, ebp */
  ESP = (EBP);
  /* 10d58e1d pop ebp */
  EBP = (pop32());
  /* 10d58e1e ret  */
  ESPCHK(0x10d58dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e20 @ 0x10d58e20 (1485 bytes, 453 insns) */
void f_10d58e20(void) {
  FTRACE(0x10d58e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58e21 mov ebp, esp */
  EBP = (ESP);
  /* 10d58e23 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d58e26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58e29 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d58e2c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10d58e2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58e32 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58e35 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d58e38 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d58e3b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d58e3e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10d58e41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d58e44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58e47 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d58e4d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d58e50 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10d58e57 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d58e5a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58e5d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d58e60 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d58e63 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d58e66 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d58e68 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d58e6b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10d58e6e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d58e71 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58e74 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10d58e77 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d58e7a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d58e7c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d58e7f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d58e82 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10d58e85 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d58e88 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d58e8b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d58e8e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d58e90 jne 0x10d58fb8 */
  if (!C.zf) goto L_10d58fb8;
  /* 10d58e96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d58e99 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10d58e9c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d58e9f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10d58ea2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58ea6 jbe 0x10d58eaf */
  if ((C.cf||C.zf)) goto L_10d58eaf;
  /* 10d58ea8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10d58eaf:;
  /* 10d58eaf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d58eb2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d58eb5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d58eb8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58ebb jne 0x10d58f91 */
  if (!C.zf) goto L_10d58f91;
  /* 10d58ec1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58ec5 jae 0x10d58f26 */
  if (!C.cf) goto L_10d58f26;
  /* 10d58ec7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d58ecc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d58ecf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d58ed1 not eax */
  EAX = (~(EAX));
  /* 10d58ed3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58ed6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d58ed9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10d58edd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d58edf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58ee2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d58ee5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10d58ee9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d58eec add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58eef mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10d58ef2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d58ef5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d58ef8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58efb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10d58efe mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d58f01 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58f04 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d58f08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d58f0a jne 0x10d58f24 */
  if (!C.zf) goto L_10d58f24;
  /* 10d58f0c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d58f11 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d58f14 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d58f16 not eax */
  EAX = (~(EAX));
  /* 10d58f18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58f1b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d58f1d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d58f1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58f22 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d58f24:;
  /* 10d58f24 jmp 0x10d58f91 */
  goto L_10d58f91;
L_10d58f26:;
  /* 10d58f26 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d58f29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d58f2c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d58f31 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d58f33 not edx */
  EDX = (~(EDX));
  /* 10d58f35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58f38 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d58f3b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10d58f42 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d58f44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58f47 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d58f4a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10d58f51 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d58f54 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58f57 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d58f5a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d58f5d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d58f60 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58f63 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10d58f66 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d58f69 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58f6c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d58f70 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d58f72 jne 0x10d58f91 */
  if (!C.zf) goto L_10d58f91;
  /* 10d58f74 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d58f77 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d58f7a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d58f7f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d58f81 not edx */
  EDX = (~(EDX));
  /* 10d58f83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58f86 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d58f89 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d58f8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58f8e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10d58f91:;
  /* 10d58f91 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d58f94 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d58f97 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d58f9a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d58f9d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10d58fa0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d58fa3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d58fa6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d58fa9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d58fac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d58faf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d58fb2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58fb5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10d58fb8:;
  /* 10d58fb8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d58fbb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10d58fbe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d58fc1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d58fc4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58fc8 jbe 0x10d58fd1 */
  if ((C.cf||C.zf)) goto L_10d58fd1;
  /* 10d58fca mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10d58fd1:;
  /* 10d58fd1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d58fd4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d58fd7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d58fd9 jne 0x10d59135 */
  if (!C.zf) goto L_10d59135;
  /* 10d58fdf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d58fe2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d58fe5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10d58fe8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d58feb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10d58fee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d58ff1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10d58ff4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58ff8 jbe 0x10d59001 */
  if ((C.cf||C.zf)) goto L_10d59001;
  /* 10d58ffa mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10d59001:;
  /* 10d59001 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59004 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59007 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10d5900a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5900d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10d59010 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59013 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10d59016 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5901a jbe 0x10d59023 */
  if ((C.cf||C.zf)) goto L_10d59023;
  /* 10d5901c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10d59023:;
  /* 10d59023 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59026 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59029 je 0x10d5912f */
  if (C.zf) goto L_10d5912f;
  /* 10d5902f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d59032 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d59035 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d59038 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5903b jne 0x10d59111 */
  if (!C.zf) goto L_10d59111;
  /* 10d59041 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59045 jae 0x10d590a6 */
  if (!C.cf) goto L_10d590a6;
  /* 10d59047 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d5904c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d5904f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d59051 not edx */
  EDX = (~(EDX));
  /* 10d59053 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59056 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d59059 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10d5905d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5905f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59062 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d59065 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10d59069 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d5906c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5906f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d59072 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d59075 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d59078 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5907b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10d5907e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d59081 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59084 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d59088 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5908a jne 0x10d590a4 */
  if (!C.zf) goto L_10d590a4;
  /* 10d5908c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d59091 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59094 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d59096 not edx */
  EDX = (~(EDX));
  /* 10d59098 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5909b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d5909d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5909f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d590a2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d590a4:;
  /* 10d590a4 jmp 0x10d59111 */
  goto L_10d59111;
L_10d590a6:;
  /* 10d590a6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d590a9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d590ac mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d590b1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d590b3 not eax */
  EAX = (~(EAX));
  /* 10d590b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d590b8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d590bb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10d590c2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d590c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d590c7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d590ca mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10d590d1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d590d4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d590d7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10d590da sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d590dd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d590e0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d590e3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10d590e6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d590e9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d590ec movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d590f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d590f2 jne 0x10d59111 */
  if (!C.zf) goto L_10d59111;
  /* 10d590f4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d590f7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d590fa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d590ff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d59101 not eax */
  EAX = (~(EAX));
  /* 10d59103 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59106 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d59109 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5910b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5910e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10d59111:;
  /* 10d59111 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d59114 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d59117 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d5911a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d5911d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10d59120 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d59123 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d59126 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d59129 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d5912c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10d5912f:;
  /* 10d5912f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d59132 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10d59135:;
  /* 10d59135 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d59138 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5913b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5913d jne 0x10d5914b */
  if (!C.zf) goto L_10d5914b;
  /* 10d5913f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59142 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59145 je 0x10d5925b */
  if (C.zf) goto L_10d5925b;
L_10d5914b:;
  /* 10d5914b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d5914e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d59151 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10d59154 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d59157 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d5915a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5915d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d59160 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d59163 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d59166 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d59169 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10d5916c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5916f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d59172 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10d59175 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d59178 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d5917b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d5917e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d59181 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d59184 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d59187 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d5918a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5918d jne 0x10d5925b */
  if (!C.zf) goto L_10d5925b;
  /* 10d59193 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59197 jae 0x10d591f4 */
  if (!C.cf) goto L_10d591f4;
  /* 10d59199 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d5919c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5919f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d591a3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d591a6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d591a9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d591ac add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d591af mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d591b2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d591b5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10d591b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d591ba jne 0x10d591d2 */
  if (!C.zf) goto L_10d591d2;
  /* 10d591bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d591c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d591c4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d591c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d591c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d591cb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d591cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d591d0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d591d2:;
  /* 10d591d2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d591d7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d591da shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d591dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d591df mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d591e2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10d591e6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d591e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d591eb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d591ee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10d591f2 jmp 0x10d5925b */
  goto L_10d5925b;
L_10d591f4:;
  /* 10d591f4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d591f7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d591fa movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d591fe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d59201 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59204 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d59207 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d5920a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d5920d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59210 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10d59213 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d59215 jne 0x10d59232 */
  if (!C.zf) goto L_10d59232;
  /* 10d59217 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d5921a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5921d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d59222 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d59224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59227 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d5922a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5922c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5922f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10d59232:;
  /* 10d59232 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d59235 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59238 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d5923d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d5923f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59242 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d59245 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10d5924c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5924e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59251 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d59254 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10d5925b:;
  /* 10d5925b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d5925e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59261 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d59263 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d59266 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59269 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5926c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10d5926f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d59272 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d59274 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59277 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5927a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d5927c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5927f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59282 jne 0x10d593e9 */
  if (!C.zf) goto L_10d593e9;
  /* 10d59288 cmp dword ptr [0x10d81ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d81ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5928f je 0x10d593d8 */
  if (C.zf) goto L_10d593d8;
  /* 10d59295 mov eax, dword ptr [0x10d81e98] */
  EAX = (r32((uint32_t)(0x10d81e98)));
  /* 10d5929a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10d5929d mov ecx, dword ptr [0x10d81ea0] */
  ECX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d592a3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d592a6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d592a8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d592ab push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10d592b0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10d592b5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d592b8 push eax */
  push32((uint32_t)(EAX));
  /* 10d592b9 call dword ptr [0x10d8337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8337c))), 0x10d592bfu);
  /* 10d592bf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d592c4 mov ecx, dword ptr [0x10d81e98] */
  ECX = (r32((uint32_t)(0x10d81e98)));
  /* 10d592ca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d592cc mov eax, dword ptr [0x10d81ea0] */
  EAX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d592d1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d592d4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d592d6 mov edx, dword ptr [0x10d81ea0] */
  EDX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d592dc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d592df mov eax, dword ptr [0x10d81ea0] */
  EAX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d592e4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d592e7 mov edx, dword ptr [0x10d81e98] */
  EDX = (r32((uint32_t)(0x10d81e98)));
  /* 10d592ed mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10d592f8 mov eax, dword ptr [0x10d81ea0] */
  EAX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d592fd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d59300 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10d59303 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d59306 mov eax, dword ptr [0x10d81ea0] */
  EAX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d5930b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d5930e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10d59311 mov edx, dword ptr [0x10d81ea0] */
  EDX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d59317 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d5931a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10d5931e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d59320 jne 0x10d59336 */
  if (!C.zf) goto L_10d59336;
  /* 10d59322 mov edx, dword ptr [0x10d81ea0] */
  EDX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d59328 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d5932b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10d5932d mov ecx, dword ptr [0x10d81ea0] */
  ECX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d59333 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10d59336:;
  /* 10d59336 mov edx, dword ptr [0x10d81ea0] */
  EDX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d5933c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59340 jne 0x10d593d8 */
  if (!C.zf) goto L_10d593d8;
  /* 10d59346 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10d5934b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5934d mov eax, dword ptr [0x10d81ea0] */
  EAX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d59352 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d59355 push ecx */
  push32((uint32_t)(ECX));
  /* 10d59356 call dword ptr [0x10d8337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8337c))), 0x10d5935cu);
  /* 10d5935c mov edx, dword ptr [0x10d81ea0] */
  EDX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d59362 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d59365 push eax */
  push32((uint32_t)(EAX));
  /* 10d59366 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d59368 mov ecx, dword ptr [0x10d81eac] */
  ECX = (r32((uint32_t)(0x10d81eac)));
  /* 10d5936e push ecx */
  push32((uint32_t)(ECX));
  /* 10d5936f call dword ptr [0x10d83378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83378))), 0x10d59375u);
  /* 10d59375 mov edx, dword ptr [0x10d81ea4] */
  EDX = (r32((uint32_t)(0x10d81ea4)));
  /* 10d5937b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5937e mov eax, dword ptr [0x10d81ea8] */
  EAX = (r32((uint32_t)(0x10d81ea8)));
  /* 10d59383 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59385 mov ecx, dword ptr [0x10d81ea0] */
  ECX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d5938b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5938e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59390 push eax */
  push32((uint32_t)(EAX));
  /* 10d59391 mov edx, dword ptr [0x10d81ea0] */
  EDX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d59397 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5939a push edx */
  push32((uint32_t)(EDX));
  /* 10d5939b mov eax, dword ptr [0x10d81ea0] */
  EAX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d593a0 push eax */
  push32((uint32_t)(EAX));
  /* 10d593a1 call 0x10d5c950 */
  push32(0x10d593a6u); f_10d5c950();
  /* 10d593a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d593a9 mov ecx, dword ptr [0x10d81ea4] */
  ECX = (r32((uint32_t)(0x10d81ea4)));
  /* 10d593af sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d593b2 mov dword ptr [0x10d81ea4], ecx */
  w32((uint32_t)(0x10d81ea4), (ECX));
  /* 10d593b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d593bb cmp edx, dword ptr [0x10d81ea0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d81ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d593c1 jbe 0x10d593cc */
  if ((C.cf||C.zf)) goto L_10d593cc;
  /* 10d593c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d593c6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d593c9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10d593cc:;
  /* 10d593cc mov ecx, dword ptr [0x10d81ea8] */
  ECX = (r32((uint32_t)(0x10d81ea8)));
  /* 10d593d2 mov dword ptr [0x10d81e9c], ecx */
  w32((uint32_t)(0x10d81e9c), (ECX));
L_10d593d8:;
  /* 10d593d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d593db mov dword ptr [0x10d81ea0], edx */
  w32((uint32_t)(0x10d81ea0), (EDX));
  /* 10d593e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d593e4 mov dword ptr [0x10d81e98], eax */
  w32((uint32_t)(0x10d81e98), (EAX));
L_10d593e9:;
  /* 10d593e9 mov esp, ebp */
  ESP = (EBP);
  /* 10d593eb pop ebp */
  EBP = (pop32());
  /* 10d593ec ret  */
  ESPCHK(0x10d58e20u, _esp0);
  ESP += 4; return;
}

/* FUN_100093f0 @ 0x10d593f0 (1334 bytes, 427 insns) */
void f_10d593f0(void) {
  FTRACE(0x10d593f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d593f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d593f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d593f3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d593f6 push esi */
  push32((uint32_t)(ESI));
  /* 10d593f7 mov eax, dword ptr [0x10d81ea4] */
  EAX = (r32((uint32_t)(0x10d81ea4)));
  /* 10d593fc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d593ff mov ecx, dword ptr [0x10d81ea8] */
  ECX = (r32((uint32_t)(0x10d81ea8)));
  /* 10d59405 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59407 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10d5940a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5940d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59410 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10d59413 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10d59416 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d59419 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10d5941c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5941f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d59422 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59426 jge 0x10d5943c */
  if ((C.sf==C.of)) goto L_10d5943c;
  /* 10d59428 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5942b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5942e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d59430 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10d59433 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10d5943a jmp 0x10d59451 */
  goto L_10d59451;
L_10d5943c:;
  /* 10d5943c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d59443 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d59446 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59449 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5944c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d5944e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10d59451:;
  /* 10d59451 mov ecx, dword ptr [0x10d81e9c] */
  ECX = (r32((uint32_t)(0x10d81e9c)));
  /* 10d59457 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10d5945a:;
  /* 10d5945a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5945d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59460 jae 0x10d59486 */
  if (!C.cf) goto L_10d59486;
  /* 10d59462 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59465 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d59468 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10d5946a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5946d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d59470 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10d59473 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d59475 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d59477 je 0x10d5947b */
  if (C.zf) goto L_10d5947b;
  /* 10d59479 jmp 0x10d59486 */
  goto L_10d59486;
L_10d5947b:;
  /* 10d5947b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5947e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59481 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d59484 jmp 0x10d5945a */
  goto L_10d5945a;
L_10d59486:;
  /* 10d59486 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59489 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5948c jne 0x10d5956d */
  if (!C.zf) goto L_10d5956d;
  /* 10d59492 mov eax, dword ptr [0x10d81ea8] */
  EAX = (r32((uint32_t)(0x10d81ea8)));
  /* 10d59497 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10d5949a:;
  /* 10d5949a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5949d cmp ecx, dword ptr [0x10d81e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d81e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d594a3 jae 0x10d594c9 */
  if (!C.cf) goto L_10d594c9;
  /* 10d594a5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d594a8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d594ab and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10d594ad mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d594b0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d594b3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10d594b6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d594b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d594ba je 0x10d594be */
  if (C.zf) goto L_10d594be;
  /* 10d594bc jmp 0x10d594c9 */
  goto L_10d594c9;
L_10d594be:;
  /* 10d594be mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d594c1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d594c4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d594c7 jmp 0x10d5949a */
  goto L_10d5949a;
L_10d594c9:;
  /* 10d594c9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d594cc cmp ecx, dword ptr [0x10d81e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d81e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d594d2 jne 0x10d5956d */
  if (!C.zf) goto L_10d5956d;
L_10d594d8:;
  /* 10d594d8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d594db cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d594de jae 0x10d594f6 */
  if (!C.cf) goto L_10d594f6;
  /* 10d594e0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d594e3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d594e7 je 0x10d594eb */
  if (C.zf) goto L_10d594eb;
  /* 10d594e9 jmp 0x10d594f6 */
  goto L_10d594f6;
L_10d594eb:;
  /* 10d594eb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d594ee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d594f1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d594f4 jmp 0x10d594d8 */
  goto L_10d594d8;
L_10d594f6:;
  /* 10d594f6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d594f9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d594fc jne 0x10d59547 */
  if (!C.zf) goto L_10d59547;
  /* 10d594fe mov eax, dword ptr [0x10d81ea8] */
  EAX = (r32((uint32_t)(0x10d81ea8)));
  /* 10d59503 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10d59506:;
  /* 10d59506 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59509 cmp ecx, dword ptr [0x10d81e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d81e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5950f jae 0x10d59527 */
  if (!C.cf) goto L_10d59527;
  /* 10d59511 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59514 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59518 je 0x10d5951c */
  if (C.zf) goto L_10d5951c;
  /* 10d5951a jmp 0x10d59527 */
  goto L_10d59527;
L_10d5951c:;
  /* 10d5951c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5951f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59522 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d59525 jmp 0x10d59506 */
  goto L_10d59506;
L_10d59527:;
  /* 10d59527 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5952a cmp ecx, dword ptr [0x10d81e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d81e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59530 jne 0x10d59547 */
  if (!C.zf) goto L_10d59547;
  /* 10d59532 call 0x10d59930 */
  push32(0x10d59537u); f_10d59930();
  /* 10d59537 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d5953a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5953e jne 0x10d59547 */
  if (!C.zf) goto L_10d59547;
  /* 10d59540 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d59542 jmp 0x10d59921 */
  goto L_10d59921;
L_10d59547:;
  /* 10d59547 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5954a push edx */
  push32((uint32_t)(EDX));
  /* 10d5954b call 0x10d59a40 */
  push32(0x10d59550u); f_10d59a40();
  /* 10d59550 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59553 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59556 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d59559 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d5955b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5955e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d59561 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59564 jne 0x10d5956d */
  if (!C.zf) goto L_10d5956d;
  /* 10d59566 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d59568 jmp 0x10d59921 */
  goto L_10d59921;
L_10d5956d:;
  /* 10d5956d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59570 mov dword ptr [0x10d81e9c], edx */
  w32((uint32_t)(0x10d81e9c), (EDX));
  /* 10d59576 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59579 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d5957c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10d5957f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d59582 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d59584 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10d59587 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5958b je 0x10d595b0 */
  if (C.zf) goto L_10d595b0;
  /* 10d5958d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59590 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d59593 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d59596 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10d5959a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5959d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d595a0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10d595a3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10d595aa or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10d595ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d595ae jne 0x10d595e5 */
  if (!C.zf) goto L_10d595e5;
L_10d595b0:;
  /* 10d595b0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10d595b7:;
  /* 10d595b7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d595ba mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d595bd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d595c0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10d595c4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d595c7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d595ca mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10d595cd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10d595d4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10d595d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d595d8 jne 0x10d595e5 */
  if (!C.zf) goto L_10d595e5;
  /* 10d595da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d595dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d595e0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10d595e3 jmp 0x10d595b7 */
  goto L_10d595b7;
L_10d595e5:;
  /* 10d595e5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d595e8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d595ee mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d595f1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10d595f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d595fb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d59602 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59605 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d59608 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5960b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10d5960f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d59612 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59616 jne 0x10d59632 */
  if (!C.zf) goto L_10d59632;
  /* 10d59618 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10d5961f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59622 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d59625 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d59628 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10d5962f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10d59632:;
  /* 10d59632 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59636 jl 0x10d5964b */
  if ((C.sf!=C.of)) goto L_10d5964b;
  /* 10d59638 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d5963b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d5963d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d59640 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d59643 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59646 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d59649 jmp 0x10d59632 */
  goto L_10d59632;
L_10d5964b:;
  /* 10d5964b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5964e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59651 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10d59655 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d59658 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5965b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d5965d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59660 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d59663 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d59666 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10d59669 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5966c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d5966f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59673 jle 0x10d5967c */
  if ((C.zf||C.sf!=C.of)) goto L_10d5967c;
  /* 10d59675 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10d5967c:;
  /* 10d5967c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5967f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59682 je 0x10d598a0 */
  if (C.zf) goto L_10d598a0;
  /* 10d59688 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5968b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5968e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d59691 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59694 jne 0x10d5976a */
  if (!C.zf) goto L_10d5976a;
  /* 10d5969a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5969e jge 0x10d596ff */
  if ((C.sf==C.of)) goto L_10d596ff;
  /* 10d596a0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d596a5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d596a8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d596aa not eax */
  EAX = (~(EAX));
  /* 10d596ac mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d596af mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d596b2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10d596b6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d596b8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d596bb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d596be mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10d596c2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d596c5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d596c8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10d596cb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d596ce mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d596d1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d596d4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10d596d7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d596da add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d596dd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d596e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d596e3 jne 0x10d596fd */
  if (!C.zf) goto L_10d596fd;
  /* 10d596e5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d596ea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d596ed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d596ef not eax */
  EAX = (~(EAX));
  /* 10d596f1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d596f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d596f6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d596f8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d596fb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d596fd:;
  /* 10d596fd jmp 0x10d5976a */
  goto L_10d5976a;
L_10d596ff:;
  /* 10d596ff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d59702 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59705 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d5970a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d5970c not edx */
  EDX = (~(EDX));
  /* 10d5970e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59711 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d59714 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10d5971b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5971d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59720 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d59723 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10d5972a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d5972d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59730 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d59733 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d59736 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d59739 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5973c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10d5973f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d59742 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59745 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d59749 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5974b jne 0x10d5976a */
  if (!C.zf) goto L_10d5976a;
  /* 10d5974d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d59750 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59753 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d59758 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d5975a not edx */
  EDX = (~(EDX));
  /* 10d5975c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5975f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d59762 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d59764 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59767 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10d5976a:;
  /* 10d5976a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5976d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d59770 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d59773 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d59776 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10d59779 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5977c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d5977f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d59782 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d59785 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d59788 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5978c je 0x10d598a0 */
  if (C.zf) goto L_10d598a0;
  /* 10d59792 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d59795 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59798 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10d5979b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5979e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d597a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d597a4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d597a7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10d597aa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d597ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d597b0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d597b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d597b6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d597b9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10d597bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d597bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d597c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d597c5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10d597c8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d597cb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d597ce mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d597d1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d597d4 jne 0x10d598a0 */
  if (!C.zf) goto L_10d598a0;
  /* 10d597da cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d597de jge 0x10d5983a */
  if ((C.sf==C.of)) goto L_10d5983a;
  /* 10d597e0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d597e3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d597e6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d597ea mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d597ed add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d597f0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10d597f3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d597f5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d597f8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d597fb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10d597fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d59800 jne 0x10d59818 */
  if (!C.zf) goto L_10d59818;
  /* 10d59802 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d59807 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5980a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d5980c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5980f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d59811 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d59813 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59816 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d59818:;
  /* 10d59818 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d5981d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d59820 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d59822 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59825 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d59828 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10d5982c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5982e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59831 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d59834 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10d59838 jmp 0x10d598a0 */
  goto L_10d598a0;
L_10d5983a:;
  /* 10d5983a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d5983d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59840 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d59844 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d59847 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5984a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10d5984d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d5984f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d59852 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59855 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10d59858 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5985a jne 0x10d59877 */
  if (!C.zf) goto L_10d59877;
  /* 10d5985c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5985f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59862 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d59867 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d59869 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5986c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d5986f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d59871 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59874 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10d59877:;
  /* 10d59877 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5987a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5987d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d59882 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d59884 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59887 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d5988a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10d59891 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d59893 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59896 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d59899 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10d598a0:;
  /* 10d598a0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d598a4 je 0x10d598ba */
  if (C.zf) goto L_10d598ba;
  /* 10d598a6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d598a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d598ac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d598ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d598b1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d598b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d598b7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10d598ba:;
  /* 10d598ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d598bd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d598c0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d598c3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d598c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d598c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d598cc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d598ce mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d598d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d598d4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d598d7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d598da mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10d598dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d598e0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d598e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d598e5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d598e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d598ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d598ed mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d598ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d598f1 jne 0x10d59913 */
  if (!C.zf) goto L_10d59913;
  /* 10d598f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d598f6 cmp eax, dword ptr [0x10d81ea0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d81ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d598fc jne 0x10d59913 */
  if (!C.zf) goto L_10d59913;
  /* 10d598fe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59901 cmp ecx, dword ptr [0x10d81e98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d81e98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59907 jne 0x10d59913 */
  if (!C.zf) goto L_10d59913;
  /* 10d59909 mov dword ptr [0x10d81ea0], 0 */
  w32((uint32_t)(0x10d81ea0), (0x0u));
L_10d59913:;
  /* 10d59913 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d59916 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59919 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d5991b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5991e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10d59921:;
  /* 10d59921 pop esi */
  ESI = (pop32());
  /* 10d59922 mov esp, ebp */
  ESP = (EBP);
  /* 10d59924 pop ebp */
  EBP = (pop32());
  /* 10d59925 ret  */
  ESPCHK(0x10d593f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009930 @ 0x10d59930 (271 bytes, 78 insns) */
void f_10d59930(void) {
  FTRACE(0x10d59930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d59930 push ebp */
  push32((uint32_t)(EBP));
  /* 10d59931 mov ebp, esp */
  EBP = (ESP);
  /* 10d59933 push ecx */
  push32((uint32_t)(ECX));
  /* 10d59934 mov eax, dword ptr [0x10d81ea4] */
  EAX = (r32((uint32_t)(0x10d81ea4)));
  /* 10d59939 cmp eax, dword ptr [0x10d81e88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d81e88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5993f jne 0x10d5998b */
  if (!C.zf) goto L_10d5998b;
  /* 10d59941 mov ecx, dword ptr [0x10d81e88] */
  ECX = (r32((uint32_t)(0x10d81e88)));
  /* 10d59947 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5994a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5994d push ecx */
  push32((uint32_t)(ECX));
  /* 10d5994e mov edx, dword ptr [0x10d81ea8] */
  EDX = (r32((uint32_t)(0x10d81ea8)));
  /* 10d59954 push edx */
  push32((uint32_t)(EDX));
  /* 10d59955 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d59957 mov eax, dword ptr [0x10d81eac] */
  EAX = (r32((uint32_t)(0x10d81eac)));
  /* 10d5995c push eax */
  push32((uint32_t)(EAX));
  /* 10d5995d call dword ptr [0x10d83340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83340))), 0x10d59963u);
  /* 10d59963 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d59966 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5996a jne 0x10d59973 */
  if (!C.zf) goto L_10d59973;
  /* 10d5996c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5996e jmp 0x10d59a3b */
  goto L_10d59a3b;
L_10d59973:;
  /* 10d59973 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59976 mov dword ptr [0x10d81ea8], ecx */
  w32((uint32_t)(0x10d81ea8), (ECX));
  /* 10d5997c mov edx, dword ptr [0x10d81e88] */
  EDX = (r32((uint32_t)(0x10d81e88)));
  /* 10d59982 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59985 mov dword ptr [0x10d81e88], edx */
  w32((uint32_t)(0x10d81e88), (EDX));
L_10d5998b:;
  /* 10d5998b mov eax, dword ptr [0x10d81ea4] */
  EAX = (r32((uint32_t)(0x10d81ea4)));
  /* 10d59990 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d59993 mov ecx, dword ptr [0x10d81ea8] */
  ECX = (r32((uint32_t)(0x10d81ea8)));
  /* 10d59999 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5999b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d5999e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10d599a3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d599a5 mov edx, dword ptr [0x10d81eac] */
  EDX = (r32((uint32_t)(0x10d81eac)));
  /* 10d599ab push edx */
  push32((uint32_t)(EDX));
  /* 10d599ac call dword ptr [0x10d832e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832e4))), 0x10d599b2u);
  /* 10d599b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d599b5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10d599b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d599bb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d599bf jne 0x10d599c5 */
  if (!C.zf) goto L_10d599c5;
  /* 10d599c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d599c3 jmp 0x10d59a3b */
  goto L_10d59a3b;
L_10d599c5:;
  /* 10d599c5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d599c7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10d599cc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10d599d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d599d3 call dword ptr [0x10d832dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832dc))), 0x10d599d9u);
  /* 10d599d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d599dc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10d599df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d599e2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d599e6 jne 0x10d59a02 */
  if (!C.zf) goto L_10d59a02;
  /* 10d599e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d599eb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d599ee push ecx */
  push32((uint32_t)(ECX));
  /* 10d599ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10d599f1 mov edx, dword ptr [0x10d81eac] */
  EDX = (r32((uint32_t)(0x10d81eac)));
  /* 10d599f7 push edx */
  push32((uint32_t)(EDX));
  /* 10d599f8 call dword ptr [0x10d83378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83378))), 0x10d599feu);
  /* 10d599fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d59a00 jmp 0x10d59a3b */
  goto L_10d59a3b;
L_10d59a02:;
  /* 10d59a02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59a05 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d59a0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59a0e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10d59a15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59a18 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10d59a1f mov eax, dword ptr [0x10d81ea4] */
  EAX = (r32((uint32_t)(0x10d81ea4)));
  /* 10d59a24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59a27 mov dword ptr [0x10d81ea4], eax */
  w32((uint32_t)(0x10d81ea4), (EAX));
  /* 10d59a2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59a2f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d59a32 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10d59a38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d59a3b:;
  /* 10d59a3b mov esp, ebp */
  ESP = (EBP);
  /* 10d59a3d pop ebp */
  EBP = (pop32());
  /* 10d59a3e ret  */
  ESPCHK(0x10d59930u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a40 @ 0x10d59a40 (494 bytes, 149 insns) */
void f_10d59a40(void) {
  FTRACE(0x10d59a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d59a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10d59a41 mov ebp, esp */
  EBP = (ESP);
  /* 10d59a43 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59a46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59a49 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d59a4c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10d59a4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59a52 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d59a55 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d59a58 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10d59a5f:;
  /* 10d59a5f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59a63 jl 0x10d59a78 */
  if ((C.sf!=C.of)) goto L_10d59a78;
  /* 10d59a65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d59a68 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10d59a6a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d59a6d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d59a70 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59a73 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10d59a76 jmp 0x10d59a5f */
  goto L_10d59a5f;
L_10d59a78:;
  /* 10d59a78 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d59a7b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d59a81 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59a84 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10d59a8b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d59a8e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d59a95 jmp 0x10d59aa0 */
  goto L_10d59aa0;
L_10d59a97:;
  /* 10d59a97 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d59a9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59a9d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10d59aa0:;
  /* 10d59aa0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59aa4 jge 0x10d59ac6 */
  if ((C.sf==C.of)) goto L_10d59ac6;
  /* 10d59aa6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d59aa9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d59aac lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10d59aaf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d59ab2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59ab5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59ab8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10d59abb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59abe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59ac1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10d59ac4 jmp 0x10d59a97 */
  goto L_10d59a97;
L_10d59ac6:;
  /* 10d59ac6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d59ac9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10d59acc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59acf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d59ad2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59ad4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d59ad7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d59ad9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10d59ade push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10d59ae3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d59ae6 push edx */
  push32((uint32_t)(EDX));
  /* 10d59ae7 call dword ptr [0x10d832dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832dc))), 0x10d59aedu);
  /* 10d59aed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d59aef jne 0x10d59af9 */
  if (!C.zf) goto L_10d59af9;
  /* 10d59af1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d59af4 jmp 0x10d59c2a */
  goto L_10d59c2a;
L_10d59af9:;
  /* 10d59af9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d59afc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59b01 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d59b04 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d59b07 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d59b0a jmp 0x10d59b18 */
  goto L_10d59b18;
L_10d59b0c:;
  /* 10d59b0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59b0f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59b15 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d59b18:;
  /* 10d59b18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59b1b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59b1e ja 0x10d59b7d */
  if ((!C.cf&&!C.zf)) goto L_10d59b7d;
  /* 10d59b20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59b23 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10d59b2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59b2d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10d59b37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59b3a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59b3d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d59b40 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59b43 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10d59b49 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59b4c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59b52 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59b55 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d59b58 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59b5b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59b61 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59b64 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d59b67 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59b6a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59b6f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d59b72 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d59b75 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10d59b7b jmp 0x10d59b0c */
  goto L_10d59b0c;
L_10d59b7d:;
  /* 10d59b7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d59b80 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59b86 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d59b89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d59b8c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59b8f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d59b92 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10d59b95 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d59b98 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d59b9b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d59b9e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59ba1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d59ba4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10d59ba7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d59baa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59bad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d59bb0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10d59bb3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d59bb6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d59bb9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d59bbc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59bbf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d59bc2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10d59bc5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d59bc8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59bcb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10d59bd3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d59bd6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59bd9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10d59be4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59be7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10d59beb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59bee mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10d59bf1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d59bf4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59bf7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10d59bfa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d59bfc jne 0x10d59c0d */
  if (!C.zf) goto L_10d59c0d;
  /* 10d59bfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59c01 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d59c04 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d59c07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59c0a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10d59c0d:;
  /* 10d59c0d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d59c12 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d59c15 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d59c17 not edx */
  EDX = (~(EDX));
  /* 10d59c19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59c1c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d59c1f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d59c21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59c24 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d59c27 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10d59c2a:;
  /* 10d59c2a mov esp, ebp */
  ESP = (EBP);
  /* 10d59c2c pop ebp */
  EBP = (pop32());
  /* 10d59c2d ret  */
  ESPCHK(0x10d59a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c30 @ 0x10d59c30 (1515 bytes, 489 insns) */
void f_10d59c30(void) {
  FTRACE(0x10d59c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d59c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d59c31 mov ebp, esp */
  EBP = (ESP);
  /* 10d59c33 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59c36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d59c39 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59c3c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10d59c3e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d59c41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59c44 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d59c47 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10d59c4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59c4d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d59c50 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59c53 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d59c56 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d59c59 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10d59c5c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d59c5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59c62 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d59c68 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59c6b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10d59c72 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d59c75 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d59c78 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59c7b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d59c7e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d59c81 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d59c83 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59c86 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10d59c89 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d59c8c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59c8f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10d59c92 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59c95 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d59c97 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d59c9a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d59c9d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59ca0 jle 0x10d59f56 */
  if ((C.zf||C.sf!=C.of)) goto L_10d59f56;
  /* 10d59ca6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d59ca9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d59cac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d59cae jne 0x10d59cbb */
  if (!C.zf) goto L_10d59cbb;
  /* 10d59cb0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d59cb3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59cb6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59cb9 jle 0x10d59cc2 */
  if ((C.zf||C.sf!=C.of)) goto L_10d59cc2;
L_10d59cbb:;
  /* 10d59cbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d59cbd jmp 0x10d5a217 */
  goto L_10d5a217;
L_10d59cc2:;
  /* 10d59cc2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d59cc5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10d59cc8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59ccb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d59cce cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59cd2 jbe 0x10d59cdb */
  if ((C.cf||C.zf)) goto L_10d59cdb;
  /* 10d59cd4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10d59cdb:;
  /* 10d59cdb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59cde mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59ce1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d59ce4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59ce7 jne 0x10d59dbd */
  if (!C.zf) goto L_10d59dbd;
  /* 10d59ced cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59cf1 jae 0x10d59d52 */
  if (!C.cf) goto L_10d59d52;
  /* 10d59cf3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d59cf8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d59cfb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d59cfd not edx */
  EDX = (~(EDX));
  /* 10d59cff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59d02 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59d05 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10d59d09 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d59d0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59d0e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59d11 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10d59d15 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59d18 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59d1b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d59d1e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d59d21 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59d24 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59d27 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10d59d2a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59d2d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59d30 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d59d34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d59d36 jne 0x10d59d50 */
  if (!C.zf) goto L_10d59d50;
  /* 10d59d38 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d59d3d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d59d40 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d59d42 not edx */
  EDX = (~(EDX));
  /* 10d59d44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59d47 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d59d49 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d59d4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59d4e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d59d50:;
  /* 10d59d50 jmp 0x10d59dbd */
  goto L_10d59dbd;
L_10d59d52:;
  /* 10d59d52 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d59d55 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59d58 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d59d5d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d59d5f not eax */
  EAX = (~(EAX));
  /* 10d59d61 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59d64 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59d67 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10d59d6e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d59d70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59d73 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59d76 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10d59d7d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59d80 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59d83 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10d59d86 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d59d89 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59d8c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59d8f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10d59d92 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59d95 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59d98 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d59d9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d59d9e jne 0x10d59dbd */
  if (!C.zf) goto L_10d59dbd;
  /* 10d59da0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d59da3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59da6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d59dab shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d59dad not eax */
  EAX = (~(EAX));
  /* 10d59daf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59db2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d59db5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d59db7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59dba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10d59dbd:;
  /* 10d59dbd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59dc0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d59dc3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59dc6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d59dc9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10d59dcc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59dcf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d59dd2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59dd5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d59dd8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10d59ddb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d59dde add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59de1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59de4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d59de7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59deb jle 0x10d59f37 */
  if ((C.zf||C.sf!=C.of)) goto L_10d59f37;
  /* 10d59df1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d59df4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59df7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10d59dfa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d59dfd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10d59e00 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59e03 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d59e06 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59e0a jbe 0x10d59e13 */
  if ((C.cf||C.zf)) goto L_10d59e13;
  /* 10d59e0c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10d59e13:;
  /* 10d59e13 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d59e16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d59e19 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10d59e1c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d59e1f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59e22 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59e25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d59e28 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d59e2b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59e2e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59e31 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10d59e34 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d59e37 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59e3a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10d59e3d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59e40 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d59e43 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59e46 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d59e49 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59e4c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59e4f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d59e52 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59e55 jne 0x10d59f23 */
  if (!C.zf) goto L_10d59f23;
  /* 10d59e5b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59e5f jae 0x10d59ebc */
  if (!C.cf) goto L_10d59ebc;
  /* 10d59e61 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59e64 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59e67 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d59e6b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59e6e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59e71 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d59e74 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d59e77 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59e7a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59e7d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10d59e80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d59e82 jne 0x10d59e9a */
  if (!C.zf) goto L_10d59e9a;
  /* 10d59e84 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d59e89 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d59e8c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d59e8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59e91 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d59e93 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d59e95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59e98 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d59e9a:;
  /* 10d59e9a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d59e9f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d59ea2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d59ea4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59ea7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59eaa mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10d59eae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d59eb0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59eb3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59eb6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10d59eba jmp 0x10d59f23 */
  goto L_10d59f23;
L_10d59ebc:;
  /* 10d59ebc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59ebf add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59ec2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d59ec6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59ec9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59ecc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d59ecf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d59ed2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59ed5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59ed8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10d59edb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d59edd jne 0x10d59efa */
  if (!C.zf) goto L_10d59efa;
  /* 10d59edf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d59ee2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59ee5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d59eea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d59eec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59eef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d59ef2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d59ef4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d59ef7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10d59efa:;
  /* 10d59efa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d59efd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59f00 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d59f05 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d59f07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59f0a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59f0d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10d59f14 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d59f16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59f19 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59f1c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10d59f23:;
  /* 10d59f23 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59f26 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d59f29 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d59f2b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59f2e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59f31 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d59f34 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10d59f37:;
  /* 10d59f37 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d59f3a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59f3d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d59f40 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d59f42 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d59f45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59f48 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d59f4b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59f4e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10d59f51 jmp 0x10d5a212 */
  goto L_10d5a212;
L_10d59f56:;
  /* 10d59f56 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d59f59 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59f5c jge 0x10d5a212 */
  if ((C.sf==C.of)) goto L_10d5a212;
  /* 10d59f62 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d59f65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59f68 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d59f6b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d59f6d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d59f70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59f73 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d59f76 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59f79 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10d59f7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d59f7f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d59f82 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d59f85 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d59f88 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59f8b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d59f8e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d59f91 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10d59f94 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59f97 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d59f9a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59f9e jbe 0x10d59fa7 */
  if ((C.cf||C.zf)) goto L_10d59fa7;
  /* 10d59fa0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10d59fa7:;
  /* 10d59fa7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d59faa and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d59fad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d59faf jne 0x10d5a0f0 */
  if (!C.zf) goto L_10d5a0f0;
  /* 10d59fb5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d59fb8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10d59fbb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d59fbe mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d59fc1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59fc5 jbe 0x10d59fce */
  if ((C.cf||C.zf)) goto L_10d59fce;
  /* 10d59fc7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10d59fce:;
  /* 10d59fce mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59fd1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d59fd4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d59fd7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59fda jne 0x10d5a0b0 */
  if (!C.zf) goto L_10d5a0b0;
  /* 10d59fe0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d59fe4 jae 0x10d5a045 */
  if (!C.cf) goto L_10d5a045;
  /* 10d59fe6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d59feb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d59fee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d59ff0 not edx */
  EDX = (~(EDX));
  /* 10d59ff2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d59ff5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d59ff8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10d59ffc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d59ffe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5a001 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a004 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10d5a008 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a00b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a00e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d5a011 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d5a014 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a017 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a01a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10d5a01d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a020 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a023 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d5a027 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5a029 jne 0x10d5a043 */
  if (!C.zf) goto L_10d5a043;
  /* 10d5a02b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d5a030 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5a033 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d5a035 not edx */
  EDX = (~(EDX));
  /* 10d5a037 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5a03a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d5a03c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5a03e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5a041 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d5a043:;
  /* 10d5a043 jmp 0x10d5a0b0 */
  goto L_10d5a0b0;
L_10d5a045:;
  /* 10d5a045 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5a048 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5a04b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d5a050 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d5a052 not eax */
  EAX = (~(EAX));
  /* 10d5a054 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5a057 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a05a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10d5a061 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5a063 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5a066 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a069 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10d5a070 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a073 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a076 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10d5a079 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d5a07c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a07f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a082 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10d5a085 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a088 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a08b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d5a08f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5a091 jne 0x10d5a0b0 */
  if (!C.zf) goto L_10d5a0b0;
  /* 10d5a093 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5a096 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5a099 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d5a09e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d5a0a0 not eax */
  EAX = (~(EAX));
  /* 10d5a0a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5a0a5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d5a0a8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5a0aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5a0ad mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10d5a0b0:;
  /* 10d5a0b0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d5a0b3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d5a0b6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d5a0b9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d5a0bc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10d5a0bf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d5a0c2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d5a0c5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d5a0c8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d5a0cb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10d5a0ce mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d5a0d1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a0d4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d5a0d7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d5a0da sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10d5a0dd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5a0e0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d5a0e3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a0e7 jbe 0x10d5a0f0 */
  if ((C.cf||C.zf)) goto L_10d5a0f0;
  /* 10d5a0e9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10d5a0f0:;
  /* 10d5a0f0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5a0f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5a0f6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10d5a0f9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d5a0fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5a0ff mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5a102 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d5a105 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10d5a108 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5a10b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5a10e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d5a111 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5a114 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5a117 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10d5a11a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5a11d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d5a120 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5a123 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10d5a126 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5a129 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5a12c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d5a12f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a132 jne 0x10d5a1fe */
  if (!C.zf) goto L_10d5a1fe;
  /* 10d5a138 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a13c jae 0x10d5a198 */
  if (!C.cf) goto L_10d5a198;
  /* 10d5a13e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a141 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a144 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d5a148 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a14b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a14e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10d5a151 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d5a153 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a156 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a159 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10d5a15c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5a15e jne 0x10d5a176 */
  if (!C.zf) goto L_10d5a176;
  /* 10d5a160 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d5a165 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5a168 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d5a16a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5a16d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d5a16f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5a171 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5a174 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d5a176:;
  /* 10d5a176 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d5a17b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5a17e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d5a180 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5a183 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a186 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10d5a18a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5a18c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5a18f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a192 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10d5a196 jmp 0x10d5a1fe */
  goto L_10d5a1fe;
L_10d5a198:;
  /* 10d5a198 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a19b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a19e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d5a1a2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a1a5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a1a8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10d5a1ab add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d5a1ad mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a1b0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a1b3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10d5a1b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5a1b8 jne 0x10d5a1d5 */
  if (!C.zf) goto L_10d5a1d5;
  /* 10d5a1ba mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5a1bd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5a1c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d5a1c5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d5a1c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5a1ca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d5a1cd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5a1cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5a1d2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10d5a1d5:;
  /* 10d5a1d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5a1d8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5a1db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d5a1e0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d5a1e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5a1e5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a1e8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10d5a1ef or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5a1f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5a1f4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5a1f7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10d5a1fe:;
  /* 10d5a1fe mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5a201 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d5a204 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d5a206 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5a209 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a20c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d5a20f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10d5a212:;
  /* 10d5a212 mov eax, 1 */
  EAX = (0x1u);
L_10d5a217:;
  /* 10d5a217 mov esp, ebp */
  ESP = (EBP);
  /* 10d5a219 pop ebp */
  EBP = (pop32());
  /* 10d5a21a ret  */
  ESPCHK(0x10d59c30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a220 @ 0x10d5a220 (304 bytes, 79 insns) */
void f_10d5a220(void) {
  FTRACE(0x10d5a220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5a220 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5a221 mov ebp, esp */
  EBP = (ESP);
  /* 10d5a223 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5a224 cmp dword ptr [0x10d81ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d81ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a22b je 0x10d5a34c */
  if (C.zf) goto L_10d5a34c;
  /* 10d5a231 mov eax, dword ptr [0x10d81e98] */
  EAX = (r32((uint32_t)(0x10d81e98)));
  /* 10d5a236 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10d5a239 mov ecx, dword ptr [0x10d81ea0] */
  ECX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d5a23f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d5a242 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a244 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d5a247 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10d5a24c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10d5a251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5a254 push eax */
  push32((uint32_t)(EAX));
  /* 10d5a255 call dword ptr [0x10d8337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8337c))), 0x10d5a25bu);
  /* 10d5a25b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d5a260 mov ecx, dword ptr [0x10d81e98] */
  ECX = (r32((uint32_t)(0x10d81e98)));
  /* 10d5a266 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d5a268 mov eax, dword ptr [0x10d81ea0] */
  EAX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d5a26d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d5a270 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5a272 mov edx, dword ptr [0x10d81ea0] */
  EDX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d5a278 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d5a27b mov eax, dword ptr [0x10d81ea0] */
  EAX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d5a280 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d5a283 mov edx, dword ptr [0x10d81e98] */
  EDX = (r32((uint32_t)(0x10d81e98)));
  /* 10d5a289 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10d5a294 mov eax, dword ptr [0x10d81ea0] */
  EAX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d5a299 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d5a29c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10d5a29f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d5a2a2 mov eax, dword ptr [0x10d81ea0] */
  EAX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d5a2a7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d5a2aa mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10d5a2ad mov edx, dword ptr [0x10d81ea0] */
  EDX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d5a2b3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d5a2b6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10d5a2ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5a2bc jne 0x10d5a2d2 */
  if (!C.zf) goto L_10d5a2d2;
  /* 10d5a2be mov edx, dword ptr [0x10d81ea0] */
  EDX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d5a2c4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d5a2c7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10d5a2c9 mov ecx, dword ptr [0x10d81ea0] */
  ECX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d5a2cf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10d5a2d2:;
  /* 10d5a2d2 mov edx, dword ptr [0x10d81ea0] */
  EDX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d5a2d8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a2dc jne 0x10d5a342 */
  if (!C.zf) goto L_10d5a342;
  /* 10d5a2de cmp dword ptr [0x10d81ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d81ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a2e5 jle 0x10d5a342 */
  if ((C.zf||C.sf!=C.of)) goto L_10d5a342;
  /* 10d5a2e7 mov eax, dword ptr [0x10d81ea0] */
  EAX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d5a2ec mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d5a2ef push ecx */
  push32((uint32_t)(ECX));
  /* 10d5a2f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5a2f2 mov edx, dword ptr [0x10d81eac] */
  EDX = (r32((uint32_t)(0x10d81eac)));
  /* 10d5a2f8 push edx */
  push32((uint32_t)(EDX));
  /* 10d5a2f9 call dword ptr [0x10d83378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83378))), 0x10d5a2ffu);
  /* 10d5a2ff mov eax, dword ptr [0x10d81ea4] */
  EAX = (r32((uint32_t)(0x10d81ea4)));
  /* 10d5a304 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5a307 mov ecx, dword ptr [0x10d81ea8] */
  ECX = (r32((uint32_t)(0x10d81ea8)));
  /* 10d5a30d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a30f mov edx, dword ptr [0x10d81ea0] */
  EDX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d5a315 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a318 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5a31a push ecx */
  push32((uint32_t)(ECX));
  /* 10d5a31b mov eax, dword ptr [0x10d81ea0] */
  EAX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d5a320 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a323 push eax */
  push32((uint32_t)(EAX));
  /* 10d5a324 mov ecx, dword ptr [0x10d81ea0] */
  ECX = (r32((uint32_t)(0x10d81ea0)));
  /* 10d5a32a push ecx */
  push32((uint32_t)(ECX));
  /* 10d5a32b call 0x10d5c950 */
  push32(0x10d5a330u); f_10d5c950();
  /* 10d5a330 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a333 mov edx, dword ptr [0x10d81ea4] */
  EDX = (r32((uint32_t)(0x10d81ea4)));
  /* 10d5a339 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5a33c mov dword ptr [0x10d81ea4], edx */
  w32((uint32_t)(0x10d81ea4), (EDX));
L_10d5a342:;
  /* 10d5a342 mov dword ptr [0x10d81ea0], 0 */
  w32((uint32_t)(0x10d81ea0), (0x0u));
L_10d5a34c:;
  /* 10d5a34c mov esp, ebp */
  ESP = (EBP);
  /* 10d5a34e pop ebp */
  EBP = (pop32());
  /* 10d5a34f ret  */
  ESPCHK(0x10d5a220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a350 @ 0x10d5a350 (1565 bytes, 343 insns) */
void f_10d5a350(void) {
  FTRACE(0x10d5a350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5a350 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5a351 mov ebp, esp */
  EBP = (ESP);
  /* 10d5a353 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5a359 mov eax, dword ptr [0x10d81ea4] */
  EAX = (r32((uint32_t)(0x10d81ea4)));
  /* 10d5a35e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5a361 push eax */
  push32((uint32_t)(EAX));
  /* 10d5a362 mov ecx, dword ptr [0x10d81ea8] */
  ECX = (r32((uint32_t)(0x10d81ea8)));
  /* 10d5a368 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5a369 call dword ptr [0x10d83350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83350))), 0x10d5a36fu);
  /* 10d5a36f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5a371 je 0x10d5a37b */
  if (C.zf) goto L_10d5a37b;
  /* 10d5a373 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5a376 jmp 0x10d5a969 */
  goto L_10d5a969;
L_10d5a37b:;
  /* 10d5a37b mov edx, dword ptr [0x10d81ea8] */
  EDX = (r32((uint32_t)(0x10d81ea8)));
  /* 10d5a381 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10d5a387 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10d5a391 jmp 0x10d5a3a2 */
  goto L_10d5a3a2;
L_10d5a393:;
  /* 10d5a393 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10d5a399 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a39c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10d5a3a2:;
  /* 10d5a3a2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10d5a3a8 cmp ecx, dword ptr [0x10d81ea4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d81ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a3ae jge 0x10d5a967 */
  if ((C.sf==C.of)) goto L_10d5a967;
  /* 10d5a3b4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10d5a3ba mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d5a3bd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10d5a3c3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10d5a3c8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10d5a3ce push ecx */
  push32((uint32_t)(ECX));
  /* 10d5a3cf call dword ptr [0x10d83350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83350))), 0x10d5a3d5u);
  /* 10d5a3d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5a3d7 je 0x10d5a3e3 */
  if (C.zf) goto L_10d5a3e3;
  /* 10d5a3d9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10d5a3de jmp 0x10d5a969 */
  goto L_10d5a969;
L_10d5a3e3:;
  /* 10d5a3e3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10d5a3e9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d5a3ec mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10d5a3f2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10d5a3f8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a3fe mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d5a401 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10d5a407 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d5a40a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5a40d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10d5a417 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10d5a421 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d5a428 jmp 0x10d5a433 */
  goto L_10d5a433;
L_10d5a42a:;
  /* 10d5a42a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5a42d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a430 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10d5a433:;
  /* 10d5a433 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a437 jge 0x10d5a92b */
  if ((C.sf==C.of)) goto L_10d5a92b;
  /* 10d5a43d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10d5a447 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10d5a451 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10d5a45b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10d5a465 jmp 0x10d5a476 */
  goto L_10d5a476;
L_10d5a467:;
  /* 10d5a467 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10d5a46d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a470 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10d5a476:;
  /* 10d5a476 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a47d jge 0x10d5a492 */
  if ((C.sf==C.of)) goto L_10d5a492;
  /* 10d5a47f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10d5a485 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10d5a490 jmp 0x10d5a467 */
  goto L_10d5a467;
L_10d5a492:;
  /* 10d5a492 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a496 jl 0x10d5a8cd */
  if ((C.sf!=C.of)) goto L_10d5a8cd;
  /* 10d5a49c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10d5a4a1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10d5a4a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5a4a8 call dword ptr [0x10d83350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83350))), 0x10d5a4aeu);
  /* 10d5a4ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5a4b0 je 0x10d5a4bc */
  if (C.zf) goto L_10d5a4bc;
  /* 10d5a4b2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10d5a4b7 jmp 0x10d5a969 */
  goto L_10d5a969;
L_10d5a4bc:;
  /* 10d5a4bc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10d5a4c2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d5a4c5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10d5a4cf jmp 0x10d5a4e0 */
  goto L_10d5a4e0;
L_10d5a4d1:;
  /* 10d5a4d1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10d5a4d7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a4da mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10d5a4e0:;
  /* 10d5a4e0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a4e7 jge 0x10d5a664 */
  if ((C.sf==C.of)) goto L_10d5a664;
  /* 10d5a4ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5a4f0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a4f3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10d5a4f9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d5a4ff add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a505 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10d5a50b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d5a511 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a515 jne 0x10d5a522 */
  if (!C.zf) goto L_10d5a522;
  /* 10d5a517 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10d5a51d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a520 je 0x10d5a52c */
  if (C.zf) goto L_10d5a52c;
L_10d5a522:;
  /* 10d5a522 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10d5a527 jmp 0x10d5a969 */
  goto L_10d5a969;
L_10d5a52c:;
  /* 10d5a52c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d5a532 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d5a534 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10d5a53a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10d5a540 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10d5a546 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10d5a54c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5a54f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5a551 je 0x10d5a589 */
  if (C.zf) goto L_10d5a589;
  /* 10d5a553 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10d5a559 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5a55c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10d5a562 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a56c jle 0x10d5a578 */
  if ((C.zf||C.sf!=C.of)) goto L_10d5a578;
  /* 10d5a56e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10d5a573 jmp 0x10d5a969 */
  goto L_10d5a969;
L_10d5a578:;
  /* 10d5a578 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10d5a57e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a581 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10d5a587 jmp 0x10d5a5cb */
  goto L_10d5a5cb;
L_10d5a589:;
  /* 10d5a589 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10d5a58f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10d5a592 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5a595 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10d5a59b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a5a2 jle 0x10d5a5ae */
  if ((C.zf||C.sf!=C.of)) goto L_10d5a5ae;
  /* 10d5a5a4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10d5a5ae:;
  /* 10d5a5ae mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10d5a5b4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10d5a5bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a5be mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10d5a5c4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10d5a5cb:;
  /* 10d5a5cb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a5d2 jl 0x10d5a5ed */
  if ((C.sf!=C.of)) goto L_10d5a5ed;
  /* 10d5a5d4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10d5a5da and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5a5dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5a5df jne 0x10d5a5ed */
  if (!C.zf) goto L_10d5a5ed;
  /* 10d5a5e1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a5eb jle 0x10d5a5f7 */
  if ((C.zf||C.sf!=C.of)) goto L_10d5a5f7;
L_10d5a5ed:;
  /* 10d5a5ed mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10d5a5f2 jmp 0x10d5a969 */
  goto L_10d5a969;
L_10d5a5f7:;
  /* 10d5a5f7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d5a5fd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a603 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10d5a606 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a60c je 0x10d5a618 */
  if (C.zf) goto L_10d5a618;
  /* 10d5a60e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10d5a613 jmp 0x10d5a969 */
  goto L_10d5a969;
L_10d5a618:;
  /* 10d5a618 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d5a61e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a624 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10d5a62a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d5a630 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a636 jb 0x10d5a52c */
  if (C.cf) goto L_10d5a52c;
  /* 10d5a63c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d5a642 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a648 je 0x10d5a654 */
  if (C.zf) goto L_10d5a654;
  /* 10d5a64a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10d5a64f jmp 0x10d5a969 */
  goto L_10d5a969;
L_10d5a654:;
  /* 10d5a654 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5a657 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a65c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d5a65f jmp 0x10d5a4d1 */
  goto L_10d5a4d1;
L_10d5a664:;
  /* 10d5a664 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5a667 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d5a669 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a66f je 0x10d5a67b */
  if (C.zf) goto L_10d5a67b;
  /* 10d5a671 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10d5a676 jmp 0x10d5a969 */
  goto L_10d5a969;
L_10d5a67b:;
  /* 10d5a67b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5a67e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10d5a684 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10d5a68b jmp 0x10d5a696 */
  goto L_10d5a696;
L_10d5a68d:;
  /* 10d5a68d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5a690 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a693 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10d5a696:;
  /* 10d5a696 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a69a jge 0x10d5a8cd */
  if ((C.sf==C.of)) goto L_10d5a8cd;
  /* 10d5a6a0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10d5a6aa mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10d5a6b0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10d5a6b6:;
  /* 10d5a6b6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d5a6bc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d5a6bf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10d5a6c5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10d5a6cb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a6d1 je 0x10d5a7fa */
  if (C.zf) goto L_10d5a7fa;
  /* 10d5a6d7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5a6da mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10d5a6e0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a6e7 je 0x10d5a7fa */
  if (C.zf) goto L_10d5a7fa;
  /* 10d5a6ed mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10d5a6f3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a6f9 jb 0x10d5a70e */
  if (C.cf) goto L_10d5a70e;
  /* 10d5a6fb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10d5a701 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a706 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a70c jb 0x10d5a718 */
  if (C.cf) goto L_10d5a718;
L_10d5a70e:;
  /* 10d5a70e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10d5a713 jmp 0x10d5a969 */
  goto L_10d5a969;
L_10d5a718:;
  /* 10d5a718 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10d5a71e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5a724 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10d5a72a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10d5a730 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a733 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d5a736 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5a739 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a73e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10d5a744:;
  /* 10d5a744 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5a747 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a74d je 0x10d5a76e */
  if (C.zf) goto L_10d5a76e;
  /* 10d5a74f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5a752 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a758 jne 0x10d5a75c */
  if (!C.zf) goto L_10d5a75c;
  /* 10d5a75a jmp 0x10d5a76e */
  goto L_10d5a76e;
L_10d5a75c:;
  /* 10d5a75c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5a75f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d5a761 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5a764 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5a767 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a769 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d5a76c jmp 0x10d5a744 */
  goto L_10d5a744;
L_10d5a76e:;
  /* 10d5a76e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5a771 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a777 jne 0x10d5a783 */
  if (!C.zf) goto L_10d5a783;
  /* 10d5a779 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10d5a77e jmp 0x10d5a969 */
  goto L_10d5a969;
L_10d5a783:;
  /* 10d5a783 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10d5a789 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d5a78b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10d5a78e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5a791 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10d5a797 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a79e jle 0x10d5a7aa */
  if ((C.zf||C.sf!=C.of)) goto L_10d5a7aa;
  /* 10d5a7a0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10d5a7aa:;
  /* 10d5a7aa mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10d5a7b0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a7b3 je 0x10d5a7bf */
  if (C.zf) goto L_10d5a7bf;
  /* 10d5a7b5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10d5a7ba jmp 0x10d5a969 */
  goto L_10d5a969;
L_10d5a7bf:;
  /* 10d5a7bf mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10d5a7c5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d5a7c8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a7ce je 0x10d5a7da */
  if (C.zf) goto L_10d5a7da;
  /* 10d5a7d0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10d5a7d5 jmp 0x10d5a969 */
  goto L_10d5a969;
L_10d5a7da:;
  /* 10d5a7da mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10d5a7e0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10d5a7e6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10d5a7ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a7ef mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10d5a7f5 jmp 0x10d5a6b6 */
  goto L_10d5a6b6;
L_10d5a7fa:;
  /* 10d5a7fa cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a801 je 0x10d5a871 */
  if (C.zf) goto L_10d5a871;
  /* 10d5a803 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a807 jge 0x10d5a83b */
  if ((C.sf==C.of)) goto L_10d5a83b;
  /* 10d5a809 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d5a80e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5a811 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d5a813 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10d5a819 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5a81b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10d5a821 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d5a826 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5a829 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d5a82b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10d5a831 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5a833 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10d5a839 jmp 0x10d5a871 */
  goto L_10d5a871;
L_10d5a83b:;
  /* 10d5a83b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5a83e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5a841 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d5a846 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d5a848 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10d5a84e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5a850 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10d5a856 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5a859 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5a85c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d5a861 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d5a863 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10d5a869 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5a86b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10d5a871:;
  /* 10d5a871 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d5a877 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d5a87a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a880 jne 0x10d5a894 */
  if (!C.zf) goto L_10d5a894;
  /* 10d5a882 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5a885 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10d5a88b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a892 je 0x10d5a89e */
  if (C.zf) goto L_10d5a89e;
L_10d5a894:;
  /* 10d5a894 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10d5a899 jmp 0x10d5a969 */
  goto L_10d5a969;
L_10d5a89e:;
  /* 10d5a89e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10d5a8a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d5a8a7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a8ad je 0x10d5a8b9 */
  if (C.zf) goto L_10d5a8b9;
  /* 10d5a8af mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10d5a8b4 jmp 0x10d5a969 */
  goto L_10d5a969;
L_10d5a8b9:;
  /* 10d5a8b9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10d5a8bf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a8c2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10d5a8c8 jmp 0x10d5a68d */
  goto L_10d5a68d;
L_10d5a8cd:;
  /* 10d5a8cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5a8d0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10d5a8d6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10d5a8dc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a8e0 jne 0x10d5a8fa */
  if (!C.zf) goto L_10d5a8fa;
  /* 10d5a8e2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5a8e5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10d5a8eb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10d5a8f1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a8f8 je 0x10d5a901 */
  if (C.zf) goto L_10d5a901;
L_10d5a8fa:;
  /* 10d5a8fa mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10d5a8ff jmp 0x10d5a969 */
  goto L_10d5a969;
L_10d5a901:;
  /* 10d5a901 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10d5a907 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a90d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10d5a913 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5a916 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a91b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d5a91e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5a921 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10d5a923 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d5a926 jmp 0x10d5a42a */
  goto L_10d5a42a;
L_10d5a92b:;
  /* 10d5a92b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10d5a931 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10d5a937 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a939 jne 0x10d5a94c */
  if (!C.zf) goto L_10d5a94c;
  /* 10d5a93b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10d5a941 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10d5a947 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a94a je 0x10d5a953 */
  if (C.zf) goto L_10d5a953;
L_10d5a94c:;
  /* 10d5a94c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10d5a951 jmp 0x10d5a969 */
  goto L_10d5a969;
L_10d5a953:;
  /* 10d5a953 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10d5a959 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a95c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10d5a962 jmp 0x10d5a393 */
  goto L_10d5a393;
L_10d5a967:;
  /* 10d5a967 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d5a969:;
  /* 10d5a969 mov esp, ebp */
  ESP = (EBP);
  /* 10d5a96b pop ebp */
  EBP = (pop32());
  /* 10d5a96c ret  */
  ESPCHK(0x10d5a350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a970 @ 0x10d5a970 (250 bytes, 92 insns) */
void f_10d5a970(void) {
  FTRACE(0x10d5a970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5a970 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5a971 mov ebp, esp */
  EBP = (ESP);
  /* 10d5a973 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5a976 push ebx */
  push32((uint32_t)(EBX));
  /* 10d5a977 push esi */
  push32((uint32_t)(ESI));
  /* 10d5a978 push edi */
  push32((uint32_t)(EDI));
  /* 10d5a979 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10d5a97c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d5a97f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10d5a982 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10d5a985:;
  /* 10d5a985 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a989 jne 0x10d5a9a9 */
  if (!C.zf) goto L_10d5a9a9;
  /* 10d5a98b push 0x10d7bf38 */
  push32((uint32_t)(0x10d7bf38u));
  /* 10d5a990 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5a992 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10d5a994 push 0x10d7bf2c */
  push32((uint32_t)(0x10d7bf2cu));
  /* 10d5a999 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5a99b call 0x10d53b20 */
  push32(0x10d5a9a0u); f_10d53b20();
  /* 10d5a9a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a9a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a9a6 jne 0x10d5a9a9 */
  if (!C.zf) goto L_10d5a9a9;
  /* 10d5a9a8 int3  */
  x86_unimpl("int3 @ 0x10d5a9a8");
L_10d5a9a9:;
  /* 10d5a9a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5a9ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5a9ad jne 0x10d5a985 */
  if (!C.zf) goto L_10d5a985;
L_10d5a9af:;
  /* 10d5a9af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a9b3 jne 0x10d5a9d3 */
  if (!C.zf) goto L_10d5a9d3;
  /* 10d5a9b5 push 0x10d7bf1c */
  push32((uint32_t)(0x10d7bf1cu));
  /* 10d5a9ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5a9bc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10d5a9be push 0x10d7bf2c */
  push32((uint32_t)(0x10d7bf2cu));
  /* 10d5a9c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5a9c5 call 0x10d53b20 */
  push32(0x10d5a9cau); f_10d53b20();
  /* 10d5a9ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5a9cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5a9d0 jne 0x10d5a9d3 */
  if (!C.zf) goto L_10d5a9d3;
  /* 10d5a9d2 int3  */
  x86_unimpl("int3 @ 0x10d5a9d2");
L_10d5a9d3:;
  /* 10d5a9d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5a9d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5a9d7 jne 0x10d5a9af */
  if (!C.zf) goto L_10d5a9af;
  /* 10d5a9d9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5a9dc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10d5a9e3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5a9e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5a9e9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d5a9ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5a9ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5a9f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d5a9f4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5a9f7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10d5a9fe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d5aa01 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5aa02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5aa05 push edx */
  push32((uint32_t)(EDX));
  /* 10d5aa06 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5aa09 push eax */
  push32((uint32_t)(EAX));
  /* 10d5aa0a call 0x10d5b9f0 */
  push32(0x10d5aa0fu); f_10d5b9f0();
  /* 10d5aa0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5aa12 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d5aa15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5aa18 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d5aa1b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5aa1e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5aa21 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d5aa24 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5aa27 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5aa2b jl 0x10d5aa4f */
  if ((C.sf!=C.of)) goto L_10d5aa4f;
  /* 10d5aa2d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5aa30 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d5aa32 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d5aa35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5aa37 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5aa3d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10d5aa40 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5aa43 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d5aa45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5aa48 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5aa4b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d5aa4d jmp 0x10d5aa60 */
  goto L_10d5aa60;
L_10d5aa4f:;
  /* 10d5aa4f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5aa52 push edx */
  push32((uint32_t)(EDX));
  /* 10d5aa53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5aa55 call 0x10d5b770 */
  push32(0x10d5aa5au); f_10d5b770();
  /* 10d5aa5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5aa5d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10d5aa60:;
  /* 10d5aa60 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d5aa63 pop edi */
  EDI = (pop32());
  /* 10d5aa64 pop esi */
  ESI = (pop32());
  /* 10d5aa65 pop ebx */
  EBX = (pop32());
  /* 10d5aa66 mov esp, ebp */
  ESP = (EBP);
  /* 10d5aa68 pop ebp */
  EBP = (pop32());
  /* 10d5aa69 ret  */
  ESPCHK(0x10d5a970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa70 @ 0x10d5aa70 (183 bytes, 58 insns) */
void f_10d5aa70(void) {
  FTRACE(0x10d5aa70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5aa70 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5aa71 mov ebp, esp */
  EBP = (ESP);
  /* 10d5aa73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5aa76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5aa79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5aa7c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5aa81 ja 0x10d5aa9a */
  if ((!C.cf&&!C.zf)) goto L_10d5aa9a;
  /* 10d5aa83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5aa86 mov edx, dword ptr [0x10d7ec98] */
  EDX = (r32((uint32_t)(0x10d7ec98)));
  /* 10d5aa8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5aa8e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10d5aa92 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10d5aa95 jmp 0x10d5ab23 */
  goto L_10d5ab23;
L_10d5aa9a:;
  /* 10d5aa9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5aa9d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10d5aaa0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5aaa6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5aaac mov edx, dword ptr [0x10d7ec98] */
  EDX = (r32((uint32_t)(0x10d7ec98)));
  /* 10d5aab2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5aab4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10d5aab8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5aabd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5aabf je 0x10d5aae3 */
  if (C.zf) goto L_10d5aae3;
  /* 10d5aac1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5aac4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10d5aac7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5aacd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10d5aad0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10d5aad3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10d5aad6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10d5aada mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10d5aae1 jmp 0x10d5aaf4 */
  goto L_10d5aaf4;
L_10d5aae3:;
  /* 10d5aae3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10d5aae6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10d5aae9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10d5aaed mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10d5aaf4:;
  /* 10d5aaf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5aaf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5aaf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5aafa lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10d5aafd push ecx */
  push32((uint32_t)(ECX));
  /* 10d5aafe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5ab01 push edx */
  push32((uint32_t)(EDX));
  /* 10d5ab02 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10d5ab05 push eax */
  push32((uint32_t)(EAX));
  /* 10d5ab06 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5ab08 call 0x10d5cc90 */
  push32(0x10d5ab0du); f_10d5cc90();
  /* 10d5ab0d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ab10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5ab12 jne 0x10d5ab18 */
  if (!C.zf) goto L_10d5ab18;
  /* 10d5ab14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ab16 jmp 0x10d5ab23 */
  goto L_10d5ab23;
L_10d5ab18:;
  /* 10d5ab18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5ab1b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ab20 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10d5ab23:;
  /* 10d5ab23 mov esp, ebp */
  ESP = (EBP);
  /* 10d5ab25 pop ebp */
  EBP = (pop32());
  /* 10d5ab26 ret  */
  ESPCHK(0x10d5aa70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab30 @ 0x10d5ab30 (836 bytes, 238 insns) */
void f_10d5ab30(void) {
  FTRACE(0x10d5ab30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5ab30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5ab31 mov ebp, esp */
  EBP = (ESP);
  /* 10d5ab33 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5ab36 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d5ab38 call 0x10d58460 */
  push32(0x10d5ab3du); f_10d58460();
  /* 10d5ab3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ab40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ab43 push eax */
  push32((uint32_t)(EAX));
  /* 10d5ab44 call 0x10d5ae80 */
  push32(0x10d5ab49u); f_10d5ae80();
  /* 10d5ab49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ab4c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d5ab4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ab52 cmp ecx, dword ptr [0x10d81be4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d81be4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ab58 jne 0x10d5ab6b */
  if (!C.zf) goto L_10d5ab6b;
  /* 10d5ab5a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d5ab5c call 0x10d58500 */
  push32(0x10d5ab61u); f_10d58500();
  /* 10d5ab61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ab64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ab66 jmp 0x10d5ae70 */
  goto L_10d5ae70;
L_10d5ab6b:;
  /* 10d5ab6b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ab6f jne 0x10d5ab8c */
  if (!C.zf) goto L_10d5ab8c;
  /* 10d5ab71 call 0x10d5af60 */
  push32(0x10d5ab76u); f_10d5af60();
  /* 10d5ab76 call 0x10d5afe0 */
  push32(0x10d5ab7bu); f_10d5afe0();
  /* 10d5ab7b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d5ab7d call 0x10d58500 */
  push32(0x10d5ab82u); f_10d58500();
  /* 10d5ab82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ab85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ab87 jmp 0x10d5ae70 */
  goto L_10d5ae70;
L_10d5ab8c:;
  /* 10d5ab8c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d5ab93 jmp 0x10d5ab9e */
  goto L_10d5ab9e;
L_10d5ab95:;
  /* 10d5ab95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5ab98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ab9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d5ab9e:;
  /* 10d5ab9e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5aba2 jae 0x10d5acef */
  if (!C.cf) goto L_10d5acef;
  /* 10d5aba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5abab imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5abae mov ecx, dword ptr [eax + 0x10d7eeb8] */
  ECX = (r32((uint32_t)(EAX + 0x10d7eeb8)));
  /* 10d5abb4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5abb7 jne 0x10d5acea */
  if (!C.zf) goto L_10d5acea;
  /* 10d5abbd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d5abc4 jmp 0x10d5abcf */
  goto L_10d5abcf;
L_10d5abc6:;
  /* 10d5abc6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5abc9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5abcc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10d5abcf:;
  /* 10d5abcf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5abd6 jae 0x10d5abe4 */
  if (!C.cf) goto L_10d5abe4;
  /* 10d5abd8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5abdb mov byte ptr [eax + 0x10d81d80], 0 */
  w8((uint32_t)(EAX + 0x10d81d80), (0x0u));
  /* 10d5abe2 jmp 0x10d5abc6 */
  goto L_10d5abc6;
L_10d5abe4:;
  /* 10d5abe4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d5abeb jmp 0x10d5abf6 */
  goto L_10d5abf6;
L_10d5abed:;
  /* 10d5abed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5abf0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5abf3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10d5abf6:;
  /* 10d5abf6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5abfa jae 0x10d5ac77 */
  if (!C.cf) goto L_10d5ac77;
  /* 10d5abfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5abff imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5ac02 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5ac05 lea ecx, [edx + eax*8 + 0x10d7eec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10d7eec8));
  /* 10d5ac0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d5ac0f jmp 0x10d5ac1a */
  goto L_10d5ac1a;
L_10d5ac11:;
  /* 10d5ac11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5ac14 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ac17 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d5ac1a:;
  /* 10d5ac1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5ac1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5ac1f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d5ac21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5ac23 je 0x10d5ac72 */
  if (C.zf) goto L_10d5ac72;
  /* 10d5ac25 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5ac28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ac2a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10d5ac2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5ac2f je 0x10d5ac72 */
  if (C.zf) goto L_10d5ac72;
  /* 10d5ac31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5ac34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5ac36 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d5ac38 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10d5ac3b jmp 0x10d5ac46 */
  goto L_10d5ac46;
L_10d5ac3d:;
  /* 10d5ac3d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5ac40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ac43 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d5ac46:;
  /* 10d5ac46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5ac49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5ac4b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10d5ac4e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ac51 ja 0x10d5ac70 */
  if ((!C.cf&&!C.zf)) goto L_10d5ac70;
  /* 10d5ac53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5ac56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5ac59 mov dl, byte ptr [eax + 0x10d81d81] */
  DL = (r8((uint32_t)(EAX + 0x10d81d81)));
  /* 10d5ac5f or dl, byte ptr [ecx + 0x10d7eeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10d7eeb0))); DL = (_r); fl_logic(_r,8); }
  /* 10d5ac65 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5ac68 mov byte ptr [eax + 0x10d81d81], dl */
  w8((uint32_t)(EAX + 0x10d81d81), (DL));
  /* 10d5ac6e jmp 0x10d5ac3d */
  goto L_10d5ac3d;
L_10d5ac70:;
  /* 10d5ac70 jmp 0x10d5ac11 */
  goto L_10d5ac11;
L_10d5ac72:;
  /* 10d5ac72 jmp 0x10d5abed */
  goto L_10d5abed;
L_10d5ac77:;
  /* 10d5ac77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ac7a mov dword ptr [0x10d81be4], ecx */
  w32((uint32_t)(0x10d81be4), (ECX));
  /* 10d5ac80 mov dword ptr [0x10d81c6c], 1 */
  w32((uint32_t)(0x10d81c6c), (0x1u));
  /* 10d5ac8a mov edx, dword ptr [0x10d81be4] */
  EDX = (r32((uint32_t)(0x10d81be4)));
  /* 10d5ac90 push edx */
  push32((uint32_t)(EDX));
  /* 10d5ac91 call 0x10d5aee0 */
  push32(0x10d5ac96u); f_10d5aee0();
  /* 10d5ac96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ac99 mov dword ptr [0x10d81e84], eax */
  w32((uint32_t)(0x10d81e84), (EAX));
  /* 10d5ac9e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d5aca5 jmp 0x10d5acb0 */
  goto L_10d5acb0;
L_10d5aca7:;
  /* 10d5aca7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5acaa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5acad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d5acb0:;
  /* 10d5acb0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5acb4 jae 0x10d5acd4 */
  if (!C.cf) goto L_10d5acd4;
  /* 10d5acb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5acb9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5acbc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5acbf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5acc2 mov cx, word ptr [ecx + eax*2 + 0x10d7eebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10d7eebc)));
  /* 10d5acca mov word ptr [edx*2 + 0x10d81c60], cx */
  w16((uint32_t)(EDX*2 + 0x10d81c60), (CX));
  /* 10d5acd2 jmp 0x10d5aca7 */
  goto L_10d5aca7;
L_10d5acd4:;
  /* 10d5acd4 call 0x10d5afe0 */
  push32(0x10d5acd9u); f_10d5afe0();
  /* 10d5acd9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d5acdb call 0x10d58500 */
  push32(0x10d5ace0u); f_10d58500();
  /* 10d5ace0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ace3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ace5 jmp 0x10d5ae70 */
  goto L_10d5ae70;
L_10d5acea:;
  /* 10d5acea jmp 0x10d5ab95 */
  goto L_10d5ab95;
L_10d5acef:;
  /* 10d5acef lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10d5acf2 push edx */
  push32((uint32_t)(EDX));
  /* 10d5acf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5acf6 push eax */
  push32((uint32_t)(EAX));
  /* 10d5acf7 call dword ptr [0x10d832d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832d8))), 0x10d5acfdu);
  /* 10d5acfd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ad00 jne 0x10d5ae42 */
  if (!C.zf) goto L_10d5ae42;
  /* 10d5ad06 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d5ad0d jmp 0x10d5ad18 */
  goto L_10d5ad18;
L_10d5ad0f:;
  /* 10d5ad0f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5ad12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ad15 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10d5ad18:;
  /* 10d5ad18 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ad1f jae 0x10d5ad2d */
  if (!C.cf) goto L_10d5ad2d;
  /* 10d5ad21 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5ad24 mov byte ptr [edx + 0x10d81d80], 0 */
  w8((uint32_t)(EDX + 0x10d81d80), (0x0u));
  /* 10d5ad2b jmp 0x10d5ad0f */
  goto L_10d5ad0f;
L_10d5ad2d:;
  /* 10d5ad2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ad30 mov dword ptr [0x10d81be4], eax */
  w32((uint32_t)(0x10d81be4), (EAX));
  /* 10d5ad35 mov dword ptr [0x10d81e84], 0 */
  w32((uint32_t)(0x10d81e84), (0x0u));
  /* 10d5ad3f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ad43 jbe 0x10d5adfe */
  if ((C.cf||C.zf)) goto L_10d5adfe;
  /* 10d5ad49 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10d5ad4c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10d5ad4f jmp 0x10d5ad5a */
  goto L_10d5ad5a;
L_10d5ad51:;
  /* 10d5ad51 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d5ad54 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ad57 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10d5ad5a:;
  /* 10d5ad5a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d5ad5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5ad5f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d5ad61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5ad63 je 0x10d5adac */
  if (C.zf) goto L_10d5adac;
  /* 10d5ad65 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d5ad68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ad6a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10d5ad6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5ad6f je 0x10d5adac */
  if (C.zf) goto L_10d5adac;
  /* 10d5ad71 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d5ad74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5ad76 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d5ad78 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10d5ad7b jmp 0x10d5ad86 */
  goto L_10d5ad86;
L_10d5ad7d:;
  /* 10d5ad7d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5ad80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ad83 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d5ad86:;
  /* 10d5ad86 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d5ad89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5ad8b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10d5ad8e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ad91 ja 0x10d5adaa */
  if ((!C.cf&&!C.zf)) goto L_10d5adaa;
  /* 10d5ad93 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5ad96 mov cl, byte ptr [eax + 0x10d81d81] */
  CL = (r8((uint32_t)(EAX + 0x10d81d81)));
  /* 10d5ad9c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10d5ad9f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5ada2 mov byte ptr [edx + 0x10d81d81], cl */
  w8((uint32_t)(EDX + 0x10d81d81), (CL));
  /* 10d5ada8 jmp 0x10d5ad7d */
  goto L_10d5ad7d;
L_10d5adaa:;
  /* 10d5adaa jmp 0x10d5ad51 */
  goto L_10d5ad51;
L_10d5adac:;
  /* 10d5adac mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10d5adb3 jmp 0x10d5adbe */
  goto L_10d5adbe;
L_10d5adb5:;
  /* 10d5adb5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5adb8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5adbb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d5adbe:;
  /* 10d5adbe cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5adc5 jae 0x10d5adde */
  if (!C.cf) goto L_10d5adde;
  /* 10d5adc7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5adca mov dl, byte ptr [ecx + 0x10d81d81] */
  DL = (r8((uint32_t)(ECX + 0x10d81d81)));
  /* 10d5add0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10d5add3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5add6 mov byte ptr [eax + 0x10d81d81], dl */
  w8((uint32_t)(EAX + 0x10d81d81), (DL));
  /* 10d5addc jmp 0x10d5adb5 */
  goto L_10d5adb5;
L_10d5adde:;
  /* 10d5adde mov ecx, dword ptr [0x10d81be4] */
  ECX = (r32((uint32_t)(0x10d81be4)));
  /* 10d5ade4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5ade5 call 0x10d5aee0 */
  push32(0x10d5adeau); f_10d5aee0();
  /* 10d5adea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5aded mov dword ptr [0x10d81e84], eax */
  w32((uint32_t)(0x10d81e84), (EAX));
  /* 10d5adf2 mov dword ptr [0x10d81c6c], 1 */
  w32((uint32_t)(0x10d81c6c), (0x1u));
  /* 10d5adfc jmp 0x10d5ae08 */
  goto L_10d5ae08;
L_10d5adfe:;
  /* 10d5adfe mov dword ptr [0x10d81c6c], 0 */
  w32((uint32_t)(0x10d81c6c), (0x0u));
L_10d5ae08:;
  /* 10d5ae08 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d5ae0f jmp 0x10d5ae1a */
  goto L_10d5ae1a;
L_10d5ae11:;
  /* 10d5ae11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5ae14 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ae17 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10d5ae1a:;
  /* 10d5ae1a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ae1e jae 0x10d5ae2f */
  if (!C.cf) goto L_10d5ae2f;
  /* 10d5ae20 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5ae23 mov word ptr [eax*2 + 0x10d81c60], 0 */
  w16((uint32_t)(EAX*2 + 0x10d81c60), (0x0u));
  /* 10d5ae2d jmp 0x10d5ae11 */
  goto L_10d5ae11;
L_10d5ae2f:;
  /* 10d5ae2f call 0x10d5afe0 */
  push32(0x10d5ae34u); f_10d5afe0();
  /* 10d5ae34 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d5ae36 call 0x10d58500 */
  push32(0x10d5ae3bu); f_10d58500();
  /* 10d5ae3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ae3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ae40 jmp 0x10d5ae70 */
  goto L_10d5ae70;
L_10d5ae42:;
  /* 10d5ae42 cmp dword ptr [0x10d806f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d806f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ae49 je 0x10d5ae63 */
  if (C.zf) goto L_10d5ae63;
  /* 10d5ae4b call 0x10d5af60 */
  push32(0x10d5ae50u); f_10d5af60();
  /* 10d5ae50 call 0x10d5afe0 */
  push32(0x10d5ae55u); f_10d5afe0();
  /* 10d5ae55 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d5ae57 call 0x10d58500 */
  push32(0x10d5ae5cu); f_10d58500();
  /* 10d5ae5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ae5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ae61 jmp 0x10d5ae70 */
  goto L_10d5ae70;
L_10d5ae63:;
  /* 10d5ae63 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d5ae65 call 0x10d58500 */
  push32(0x10d5ae6au); f_10d58500();
  /* 10d5ae6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ae6d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d5ae70:;
  /* 10d5ae70 mov esp, ebp */
  ESP = (EBP);
  /* 10d5ae72 pop ebp */
  EBP = (pop32());
  /* 10d5ae73 ret  */
  ESPCHK(0x10d5ab30u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10d5ae80 (89 bytes, 21 insns) */
void f_10d5ae80(void) {
  FTRACE(0x10d5ae80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5ae80 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5ae81 mov ebp, esp */
  EBP = (ESP);
  /* 10d5ae83 mov dword ptr [0x10d806f0], 0 */
  w32((uint32_t)(0x10d806f0), (0x0u));
  /* 10d5ae8d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ae91 jne 0x10d5aea5 */
  if (!C.zf) goto L_10d5aea5;
  /* 10d5ae93 mov dword ptr [0x10d806f0], 1 */
  w32((uint32_t)(0x10d806f0), (0x1u));
  /* 10d5ae9d call dword ptr [0x10d832d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832d0))), 0x10d5aea3u);
  /* 10d5aea3 jmp 0x10d5aed7 */
  goto L_10d5aed7;
L_10d5aea5:;
  /* 10d5aea5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5aea9 jne 0x10d5aebd */
  if (!C.zf) goto L_10d5aebd;
  /* 10d5aeab mov dword ptr [0x10d806f0], 1 */
  w32((uint32_t)(0x10d806f0), (0x1u));
  /* 10d5aeb5 call dword ptr [0x10d832e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832e0))), 0x10d5aebbu);
  /* 10d5aebb jmp 0x10d5aed7 */
  goto L_10d5aed7;
L_10d5aebd:;
  /* 10d5aebd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5aec1 jne 0x10d5aed4 */
  if (!C.zf) goto L_10d5aed4;
  /* 10d5aec3 mov dword ptr [0x10d806f0], 1 */
  w32((uint32_t)(0x10d806f0), (0x1u));
  /* 10d5aecd mov eax, dword ptr [0x10d80710] */
  EAX = (r32((uint32_t)(0x10d80710)));
  /* 10d5aed2 jmp 0x10d5aed7 */
  goto L_10d5aed7;
L_10d5aed4:;
  /* 10d5aed4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10d5aed7:;
  /* 10d5aed7 pop ebp */
  EBP = (pop32());
  /* 10d5aed8 ret  */
  ESPCHK(0x10d5ae80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aee0 @ 0x10d5aee0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10d5aee0(void) {
  FTRACE(0x10d5aee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5aee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5aee1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5aee3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5aee4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5aee7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5aeea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5aeed sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5aef3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d5aef6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5aefa ja 0x10d5af2a */
  if ((!C.cf&&!C.zf)) goto L_10d5af2a;
  /* 10d5aefc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5aeff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5af01 mov dl, byte ptr [eax + 0x10d5af44] */
  DL = (r8((uint32_t)(EAX + 0x10d5af44)));
  /* 10d5af07 jmp dword ptr [edx*4 + 0x10d5af30] */
  switch (EDX) {
    case 0: goto L_10d5af0e;
    case 1: goto L_10d5af15;
    case 2: goto L_10d5af1c;
    case 3: goto L_10d5af23;
    case 4: goto L_10d5af2a;
    default: x86_unimpl("switch@0x10d5af07 out of table"); return;
  }
L_10d5af0e:;
  /* 10d5af0e mov eax, 0x411 */
  EAX = (0x411u);
  /* 10d5af13 jmp 0x10d5af2c */
  goto L_10d5af2c;
L_10d5af15:;
  /* 10d5af15 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10d5af1a jmp 0x10d5af2c */
  goto L_10d5af2c;
L_10d5af1c:;
  /* 10d5af1c mov eax, 0x412 */
  EAX = (0x412u);
  /* 10d5af21 jmp 0x10d5af2c */
  goto L_10d5af2c;
L_10d5af23:;
  /* 10d5af23 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10d5af28 jmp 0x10d5af2c */
  goto L_10d5af2c;
L_10d5af2a:;
  /* 10d5af2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d5af2c:;
  /* 10d5af2c mov esp, ebp */
  ESP = (EBP);
  /* 10d5af2e pop ebp */
  EBP = (pop32());
  /* 10d5af2f ret  */
  ESPCHK(0x10d5aee0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10d5af60 (116 bytes, 29 insns) */
void f_10d5af60(void) {
  FTRACE(0x10d5af60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5af60 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5af61 mov ebp, esp */
  EBP = (ESP);
  /* 10d5af63 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5af64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d5af6b jmp 0x10d5af76 */
  goto L_10d5af76;
L_10d5af6d:;
  /* 10d5af6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5af70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5af73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d5af76:;
  /* 10d5af76 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5af7d jge 0x10d5af8b */
  if ((C.sf==C.of)) goto L_10d5af8b;
  /* 10d5af7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5af82 mov byte ptr [ecx + 0x10d81d80], 0 */
  w8((uint32_t)(ECX + 0x10d81d80), (0x0u));
  /* 10d5af89 jmp 0x10d5af6d */
  goto L_10d5af6d;
L_10d5af8b:;
  /* 10d5af8b mov dword ptr [0x10d81be4], 0 */
  w32((uint32_t)(0x10d81be4), (0x0u));
  /* 10d5af95 mov dword ptr [0x10d81c6c], 0 */
  w32((uint32_t)(0x10d81c6c), (0x0u));
  /* 10d5af9f mov dword ptr [0x10d81e84], 0 */
  w32((uint32_t)(0x10d81e84), (0x0u));
  /* 10d5afa9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d5afb0 jmp 0x10d5afbb */
  goto L_10d5afbb;
L_10d5afb2:;
  /* 10d5afb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5afb5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5afb8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d5afbb:;
  /* 10d5afbb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5afbf jge 0x10d5afd0 */
  if ((C.sf==C.of)) goto L_10d5afd0;
  /* 10d5afc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5afc4 mov word ptr [eax*2 + 0x10d81c60], 0 */
  w16((uint32_t)(EAX*2 + 0x10d81c60), (0x0u));
  /* 10d5afce jmp 0x10d5afb2 */
  goto L_10d5afb2;
L_10d5afd0:;
  /* 10d5afd0 mov esp, ebp */
  ESP = (EBP);
  /* 10d5afd2 pop ebp */
  EBP = (pop32());
  /* 10d5afd3 ret  */
  ESPCHK(0x10d5af60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afe0 @ 0x10d5afe0 (770 bytes, 175 insns) */
void f_10d5afe0(void) {
  FTRACE(0x10d5afe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5afe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5afe1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5afe3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5afe9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10d5afef push eax */
  push32((uint32_t)(EAX));
  /* 10d5aff0 mov ecx, dword ptr [0x10d81be4] */
  ECX = (r32((uint32_t)(0x10d81be4)));
  /* 10d5aff6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5aff7 call dword ptr [0x10d832d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832d8))), 0x10d5affdu);
  /* 10d5affd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b000 jne 0x10d5b219 */
  if (!C.zf) goto L_10d5b219;
  /* 10d5b006 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10d5b010 jmp 0x10d5b021 */
  goto L_10d5b021;
L_10d5b012:;
  /* 10d5b012 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b018 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b01b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10d5b021:;
  /* 10d5b021 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b02b jae 0x10d5b042 */
  if (!C.cf) goto L_10d5b042;
  /* 10d5b02d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b033 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10d5b039 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10d5b040 jmp 0x10d5b012 */
  goto L_10d5b012;
L_10d5b042:;
  /* 10d5b042 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10d5b049 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10d5b04f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d5b052 jmp 0x10d5b05d */
  goto L_10d5b05d;
L_10d5b054:;
  /* 10d5b054 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5b057 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b05a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d5b05d:;
  /* 10d5b05d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5b060 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b062 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d5b064 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5b066 je 0x10d5b0a8 */
  if (C.zf) goto L_10d5b0a8;
  /* 10d5b068 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5b06b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5b06d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d5b06f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10d5b075 jmp 0x10d5b086 */
  goto L_10d5b086;
L_10d5b077:;
  /* 10d5b077 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b07d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b080 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10d5b086:;
  /* 10d5b086 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5b089 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5b08b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10d5b08e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b094 ja 0x10d5b0a6 */
  if ((!C.cf&&!C.zf)) goto L_10d5b0a6;
  /* 10d5b096 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b09c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10d5b0a4 jmp 0x10d5b077 */
  goto L_10d5b077;
L_10d5b0a6:;
  /* 10d5b0a6 jmp 0x10d5b054 */
  goto L_10d5b054;
L_10d5b0a8:;
  /* 10d5b0a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5b0aa mov eax, dword ptr [0x10d81e84] */
  EAX = (r32((uint32_t)(0x10d81e84)));
  /* 10d5b0af push eax */
  push32((uint32_t)(EAX));
  /* 10d5b0b0 mov ecx, dword ptr [0x10d81be4] */
  ECX = (r32((uint32_t)(0x10d81be4)));
  /* 10d5b0b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5b0b7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10d5b0bd push edx */
  push32((uint32_t)(EDX));
  /* 10d5b0be push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d5b0c3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10d5b0c9 push eax */
  push32((uint32_t)(EAX));
  /* 10d5b0ca push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5b0cc call 0x10d5cc90 */
  push32(0x10d5b0d1u); f_10d5cc90();
  /* 10d5b0d1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b0d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5b0d6 mov ecx, dword ptr [0x10d81be4] */
  ECX = (r32((uint32_t)(0x10d81be4)));
  /* 10d5b0dc push ecx */
  push32((uint32_t)(ECX));
  /* 10d5b0dd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d5b0e2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10d5b0e8 push edx */
  push32((uint32_t)(EDX));
  /* 10d5b0e9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d5b0ee lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10d5b0f4 push eax */
  push32((uint32_t)(EAX));
  /* 10d5b0f5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d5b0fa mov ecx, dword ptr [0x10d81e84] */
  ECX = (r32((uint32_t)(0x10d81e84)));
  /* 10d5b100 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5b101 call 0x10d5ce50 */
  push32(0x10d5b106u); f_10d5ce50();
  /* 10d5b106 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b109 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5b10b mov edx, dword ptr [0x10d81be4] */
  EDX = (r32((uint32_t)(0x10d81be4)));
  /* 10d5b111 push edx */
  push32((uint32_t)(EDX));
  /* 10d5b112 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d5b117 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10d5b11d push eax */
  push32((uint32_t)(EAX));
  /* 10d5b11e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d5b123 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10d5b129 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5b12a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10d5b12f mov edx, dword ptr [0x10d81e84] */
  EDX = (r32((uint32_t)(0x10d81e84)));
  /* 10d5b135 push edx */
  push32((uint32_t)(EDX));
  /* 10d5b136 call 0x10d5ce50 */
  push32(0x10d5b13bu); f_10d5ce50();
  /* 10d5b13b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b13e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10d5b148 jmp 0x10d5b159 */
  goto L_10d5b159;
L_10d5b14a:;
  /* 10d5b14a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b150 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b153 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10d5b159:;
  /* 10d5b159 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b163 jae 0x10d5b214 */
  if (!C.cf) goto L_10d5b214;
  /* 10d5b169 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b16f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b171 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10d5b179 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b17c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5b17e je 0x10d5b1b6 */
  if (C.zf) goto L_10d5b1b6;
  /* 10d5b180 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b186 mov cl, byte ptr [eax + 0x10d81d81] */
  CL = (r8((uint32_t)(EAX + 0x10d81d81)));
  /* 10d5b18c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10d5b18f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b195 mov byte ptr [edx + 0x10d81d81], cl */
  w8((uint32_t)(EDX + 0x10d81d81), (CL));
  /* 10d5b19b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b1a1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b1a7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10d5b1ae mov byte ptr [eax + 0x10d81c80], dl */
  w8((uint32_t)(EAX + 0x10d81c80), (DL));
  /* 10d5b1b4 jmp 0x10d5b20f */
  goto L_10d5b20f;
L_10d5b1b6:;
  /* 10d5b1b6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b1bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5b1be mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10d5b1c6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5b1c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5b1cb je 0x10d5b202 */
  if (C.zf) goto L_10d5b202;
  /* 10d5b1cd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b1d3 mov al, byte ptr [edx + 0x10d81d81] */
  AL = (r8((uint32_t)(EDX + 0x10d81d81)));
  /* 10d5b1d9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10d5b1db mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b1e1 mov byte ptr [ecx + 0x10d81d81], al */
  w8((uint32_t)(ECX + 0x10d81d81), (AL));
  /* 10d5b1e7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b1ed mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b1f3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10d5b1fa mov byte ptr [edx + 0x10d81c80], cl */
  w8((uint32_t)(EDX + 0x10d81c80), (CL));
  /* 10d5b200 jmp 0x10d5b20f */
  goto L_10d5b20f;
L_10d5b202:;
  /* 10d5b202 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b208 mov byte ptr [edx + 0x10d81c80], 0 */
  w8((uint32_t)(EDX + 0x10d81c80), (0x0u));
L_10d5b20f:;
  /* 10d5b20f jmp 0x10d5b14a */
  goto L_10d5b14a;
L_10d5b214:;
  /* 10d5b214 jmp 0x10d5b2de */
  goto L_10d5b2de;
L_10d5b219:;
  /* 10d5b219 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10d5b223 jmp 0x10d5b234 */
  goto L_10d5b234;
L_10d5b225:;
  /* 10d5b225 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b22b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b22e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10d5b234:;
  /* 10d5b234 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b23e jae 0x10d5b2de */
  if (!C.cf) goto L_10d5b2de;
  /* 10d5b244 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b24b jb 0x10d5b288 */
  if (C.cf) goto L_10d5b288;
  /* 10d5b24d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b254 ja 0x10d5b288 */
  if ((!C.cf&&!C.zf)) goto L_10d5b288;
  /* 10d5b256 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b25c mov dl, byte ptr [ecx + 0x10d81d81] */
  DL = (r8((uint32_t)(ECX + 0x10d81d81)));
  /* 10d5b262 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10d5b265 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b26b mov byte ptr [eax + 0x10d81d81], dl */
  w8((uint32_t)(EAX + 0x10d81d81), (DL));
  /* 10d5b271 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b277 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b27a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b280 mov byte ptr [edx + 0x10d81c80], cl */
  w8((uint32_t)(EDX + 0x10d81c80), (CL));
  /* 10d5b286 jmp 0x10d5b2d9 */
  goto L_10d5b2d9;
L_10d5b288:;
  /* 10d5b288 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b28f jb 0x10d5b2cc */
  if (C.cf) goto L_10d5b2cc;
  /* 10d5b291 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b298 ja 0x10d5b2cc */
  if ((!C.cf&&!C.zf)) goto L_10d5b2cc;
  /* 10d5b29a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b2a0 mov cl, byte ptr [eax + 0x10d81d81] */
  CL = (r8((uint32_t)(EAX + 0x10d81d81)));
  /* 10d5b2a6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10d5b2a9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b2af mov byte ptr [edx + 0x10d81d81], cl */
  w8((uint32_t)(EDX + 0x10d81d81), (CL));
  /* 10d5b2b5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b2bb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5b2be mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b2c4 mov byte ptr [ecx + 0x10d81c80], al */
  w8((uint32_t)(ECX + 0x10d81c80), (AL));
  /* 10d5b2ca jmp 0x10d5b2d9 */
  goto L_10d5b2d9;
L_10d5b2cc:;
  /* 10d5b2cc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d5b2d2 mov byte ptr [edx + 0x10d81c80], 0 */
  w8((uint32_t)(EDX + 0x10d81c80), (0x0u));
L_10d5b2d9:;
  /* 10d5b2d9 jmp 0x10d5b225 */
  goto L_10d5b225;
L_10d5b2de:;
  /* 10d5b2de mov esp, ebp */
  ESP = (EBP);
  /* 10d5b2e0 pop ebp */
  EBP = (pop32());
  /* 10d5b2e1 ret  */
  ESPCHK(0x10d5afe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2f0 @ 0x10d5b2f0 (23 bytes, 9 insns) */
void f_10d5b2f0(void) {
  FTRACE(0x10d5b2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5b2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5b2f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5b2f3 cmp dword ptr [0x10d81c6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d81c6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b2fa je 0x10d5b303 */
  if (C.zf) goto L_10d5b303;
  /* 10d5b2fc mov eax, dword ptr [0x10d81be4] */
  EAX = (r32((uint32_t)(0x10d81be4)));
  /* 10d5b301 jmp 0x10d5b305 */
  goto L_10d5b305;
L_10d5b303:;
  /* 10d5b303 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d5b305:;
  /* 10d5b305 pop ebp */
  EBP = (pop32());
  /* 10d5b306 ret  */
  ESPCHK(0x10d5b2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b310 @ 0x10d5b310 (34 bytes, 10 insns) */
void f_10d5b310(void) {
  FTRACE(0x10d5b310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5b310 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5b311 mov ebp, esp */
  EBP = (ESP);
  /* 10d5b313 cmp dword ptr [0x10d82030], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d82030))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b31a jne 0x10d5b330 */
  if (!C.zf) goto L_10d5b330;
  /* 10d5b31c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10d5b31e call 0x10d5ab30 */
  push32(0x10d5b323u); f_10d5ab30();
  /* 10d5b323 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b326 mov dword ptr [0x10d82030], 1 */
  w32((uint32_t)(0x10d82030), (0x1u));
L_10d5b330:;
  /* 10d5b330 pop ebp */
  EBP = (pop32());
  /* 10d5b331 ret  */
  ESPCHK(0x10d5b310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b340 @ 0x10d5b340 (664 bytes, 263 insns) [15 switch table(s)] */
void f_10d5b340(void) {
  FTRACE(0x10d5b340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5b340 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5b341 mov ebp, esp */
  EBP = (ESP);
  /* 10d5b343 push edi */
  push32((uint32_t)(EDI));
  /* 10d5b344 push esi */
  push32((uint32_t)(ESI));
  /* 10d5b345 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5b348 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5b34b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5b34e mov eax, ecx */
  EAX = (ECX);
  /* 10d5b350 mov edx, ecx */
  EDX = (ECX);
  /* 10d5b352 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b354 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b356 jbe 0x10d5b360 */
  if ((C.cf||C.zf)) goto L_10d5b360;
  /* 10d5b358 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b35a jb 0x10d5b4d8 */
  if (C.cf) goto L_10d5b4d8;
L_10d5b360:;
  /* 10d5b360 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10d5b366 jne 0x10d5b37c */
  if (!C.zf) goto L_10d5b37c;
  /* 10d5b368 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d5b36b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b36e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b371 jb 0x10d5b39c */
  if (C.cf) goto L_10d5b39c;
  /* 10d5b373 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d5b375 jmp dword ptr [edx*4 + 0x10d5b488] */
  switch (EDX) {
    case 0: goto L_10d5b498;
    case 1: goto L_10d5b4a0;
    case 2: goto L_10d5b4ac;
    case 3: goto L_10d5b4c0;
    default: x86_unimpl("switch@0x10d5b375 out of table"); return;
  }
L_10d5b37c:;
  /* 10d5b37c mov eax, edi */
  EAX = (EDI);
  /* 10d5b37e mov edx, 3 */
  EDX = (0x3u);
  /* 10d5b383 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5b386 jb 0x10d5b394 */
  if (C.cf) goto L_10d5b394;
  /* 10d5b388 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5b38b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b38d jmp dword ptr [eax*4 + 0x10d5b3a0] */
  switch (EAX) {
    case 1: goto L_10d5b3b0;
    case 2: goto L_10d5b3dc;
    case 3: goto L_10d5b400;
    default: x86_unimpl("switch@0x10d5b38d out of table"); return;
  }
L_10d5b394:;
  /* 10d5b394 jmp dword ptr [ecx*4 + 0x10d5b498] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10d5b498)))); return;
  /* 10d5b39b nop  */
  /* nop */
L_10d5b39c:;
  /* 10d5b39c jmp dword ptr [ecx*4 + 0x10d5b41c] */
  switch (ECX) {
    case 0: goto L_10d5b47f;
    case 1: goto L_10d5b46c;
    case 2: goto L_10d5b464;
    case 3: goto L_10d5b45c;
    case 4: goto L_10d5b454;
    case 5: goto L_10d5b44c;
    case 6: goto L_10d5b444;
    case 7: goto L_10d5b43c;
    default: x86_unimpl("switch@0x10d5b39c out of table"); return;
  }
  /* 10d5b3a3 nop  */
  /* nop */
L_10d5b3b0:;
  /* 10d5b3b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b3b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d5b3b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d5b3b6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d5b3b9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d5b3bc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d5b3bf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d5b3c2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d5b3c5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b3c8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b3cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b3ce jb 0x10d5b39c */
  if (C.cf) goto L_10d5b39c;
  /* 10d5b3d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d5b3d2 jmp dword ptr [edx*4 + 0x10d5b488] */
  switch (EDX) {
    case 0: goto L_10d5b498;
    case 1: goto L_10d5b4a0;
    case 2: goto L_10d5b4ac;
    case 3: goto L_10d5b4c0;
    default: x86_unimpl("switch@0x10d5b3d2 out of table"); return;
  }
  /* 10d5b3d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d5b3dc:;
  /* 10d5b3dc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b3de mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d5b3e0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d5b3e2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d5b3e5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d5b3e8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d5b3eb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b3ee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b3f1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b3f4 jb 0x10d5b39c */
  if (C.cf) goto L_10d5b39c;
  /* 10d5b3f6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d5b3f8 jmp dword ptr [edx*4 + 0x10d5b488] */
  switch (EDX) {
    case 0: goto L_10d5b498;
    case 1: goto L_10d5b4a0;
    case 2: goto L_10d5b4ac;
    case 3: goto L_10d5b4c0;
    default: x86_unimpl("switch@0x10d5b3f8 out of table"); return;
  }
  /* 10d5b3ff nop  */
  /* nop */
L_10d5b400:;
  /* 10d5b400 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b402 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d5b404 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d5b406 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d5b407 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d5b40a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d5b40b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b40e jb 0x10d5b39c */
  if (C.cf) goto L_10d5b39c;
  /* 10d5b410 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d5b412 jmp dword ptr [edx*4 + 0x10d5b488] */
  switch (EDX) {
    case 0: goto L_10d5b498;
    case 1: goto L_10d5b4a0;
    case 2: goto L_10d5b4ac;
    case 3: goto L_10d5b4c0;
    default: x86_unimpl("switch@0x10d5b412 out of table"); return;
  }
  /* 10d5b419 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d5b43c:;
  /* 10d5b43c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10d5b440 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10d5b444:;
  /* 10d5b444 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10d5b448 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10d5b44c:;
  /* 10d5b44c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10d5b450 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10d5b454:;
  /* 10d5b454 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10d5b458 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10d5b45c:;
  /* 10d5b45c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10d5b460 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10d5b464:;
  /* 10d5b464 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10d5b468 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10d5b46c:;
  /* 10d5b46c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10d5b470 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10d5b474 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10d5b47b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b47d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10d5b47f:;
  /* 10d5b47f jmp dword ptr [edx*4 + 0x10d5b488] */
  switch (EDX) {
    case 0: goto L_10d5b498;
    case 1: goto L_10d5b4a0;
    case 2: goto L_10d5b4ac;
    case 3: goto L_10d5b4c0;
    default: x86_unimpl("switch@0x10d5b47f out of table"); return;
  }
  /* 10d5b486 mov edi, edi */
  EDI = (EDI);
L_10d5b498:;
  /* 10d5b498 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5b49b pop esi */
  ESI = (pop32());
  /* 10d5b49c pop edi */
  EDI = (pop32());
  /* 10d5b49d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d5b49e ret  */
  ESPCHK(0x10d5b340u, _esp0);
  ESP += 4; return;
  /* 10d5b49f nop  */
  /* nop */
L_10d5b4a0:;
  /* 10d5b4a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d5b4a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d5b4a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5b4a7 pop esi */
  ESI = (pop32());
  /* 10d5b4a8 pop edi */
  EDI = (pop32());
  /* 10d5b4a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d5b4aa ret  */
  ESPCHK(0x10d5b340u, _esp0);
  ESP += 4; return;
  /* 10d5b4ab nop  */
  /* nop */
L_10d5b4ac:;
  /* 10d5b4ac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d5b4ae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d5b4b0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d5b4b3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d5b4b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5b4b9 pop esi */
  ESI = (pop32());
  /* 10d5b4ba pop edi */
  EDI = (pop32());
  /* 10d5b4bb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d5b4bc ret  */
  ESPCHK(0x10d5b340u, _esp0);
  ESP += 4; return;
  /* 10d5b4bd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d5b4c0:;
  /* 10d5b4c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d5b4c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d5b4c4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d5b4c7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d5b4ca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d5b4cd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d5b4d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5b4d3 pop esi */
  ESI = (pop32());
  /* 10d5b4d4 pop edi */
  EDI = (pop32());
  /* 10d5b4d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d5b4d6 ret  */
  ESPCHK(0x10d5b340u, _esp0);
  ESP += 4; return;
  /* 10d5b4d7 nop  */
  /* nop */
L_10d5b4d8:;
  /* 10d5b4d8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10d5b4dc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10d5b4e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10d5b4e6 jne 0x10d5b50c */
  if (!C.zf) goto L_10d5b50c;
  /* 10d5b4e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d5b4eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b4ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b4f1 jb 0x10d5b500 */
  if (C.cf) goto L_10d5b500;
  /* 10d5b4f3 std  */
  C.df=1;
  /* 10d5b4f4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d5b4f6 cld  */
  C.df=0;
  /* 10d5b4f7 jmp dword ptr [edx*4 + 0x10d5b620] */
  switch (EDX) {
    case 0: goto L_10d5b630;
    case 1: goto L_10d5b638;
    case 2: goto L_10d5b648;
    case 3: goto L_10d5b65c;
    default: x86_unimpl("switch@0x10d5b4f7 out of table"); return;
  }
  /* 10d5b4fe mov edi, edi */
  EDI = (EDI);
L_10d5b500:;
  /* 10d5b500 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d5b502 jmp dword ptr [ecx*4 + 0x10d5b5d0] */
  switch (ECX) {
    case 0: goto L_10d5b617;
    default: x86_unimpl("switch@0x10d5b502 out of table"); return;
  }
  /* 10d5b509 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d5b50c:;
  /* 10d5b50c mov eax, edi */
  EAX = (EDI);
  /* 10d5b50e mov edx, 3 */
  EDX = (0x3u);
  /* 10d5b513 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b516 jb 0x10d5b524 */
  if (C.cf) goto L_10d5b524;
  /* 10d5b518 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5b51b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5b51d jmp dword ptr [eax*4 + 0x10d5b528] */
  switch (EAX) {
    case 1: goto L_10d5b538;
    case 2: goto L_10d5b558;
    case 3: goto L_10d5b580;
    default: x86_unimpl("switch@0x10d5b51d out of table"); return;
  }
L_10d5b524:;
  /* 10d5b524 jmp dword ptr [ecx*4 + 0x10d5b620] */
  switch (ECX) {
    case 0: goto L_10d5b630;
    case 1: goto L_10d5b638;
    case 2: goto L_10d5b648;
    case 3: goto L_10d5b65c;
    default: x86_unimpl("switch@0x10d5b524 out of table"); return;
  }
  /* 10d5b52b nop  */
  /* nop */
L_10d5b538:;
  /* 10d5b538 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d5b53b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b53d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d5b540 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10d5b541 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d5b544 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10d5b545 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b548 jb 0x10d5b500 */
  if (C.cf) goto L_10d5b500;
  /* 10d5b54a std  */
  C.df=1;
  /* 10d5b54b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d5b54d cld  */
  C.df=0;
  /* 10d5b54e jmp dword ptr [edx*4 + 0x10d5b620] */
  switch (EDX) {
    case 0: goto L_10d5b630;
    case 1: goto L_10d5b638;
    case 2: goto L_10d5b648;
    case 3: goto L_10d5b65c;
    default: x86_unimpl("switch@0x10d5b54e out of table"); return;
  }
  /* 10d5b555 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d5b558:;
  /* 10d5b558 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d5b55b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b55d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d5b560 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d5b563 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d5b566 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d5b569 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5b56c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5b56f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b572 jb 0x10d5b500 */
  if (C.cf) goto L_10d5b500;
  /* 10d5b574 std  */
  C.df=1;
  /* 10d5b575 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d5b577 cld  */
  C.df=0;
  /* 10d5b578 jmp dword ptr [edx*4 + 0x10d5b620] */
  switch (EDX) {
    case 0: goto L_10d5b630;
    case 1: goto L_10d5b638;
    case 2: goto L_10d5b648;
    case 3: goto L_10d5b65c;
    default: x86_unimpl("switch@0x10d5b578 out of table"); return;
  }
  /* 10d5b57f nop  */
  /* nop */
L_10d5b580:;
  /* 10d5b580 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d5b583 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b585 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d5b588 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d5b58b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d5b58e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d5b591 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d5b594 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d5b597 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5b59a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5b59d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b5a0 jb 0x10d5b500 */
  if (C.cf) goto L_10d5b500;
  /* 10d5b5a6 std  */
  C.df=1;
  /* 10d5b5a7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d5b5a9 cld  */
  C.df=0;
  /* 10d5b5aa jmp dword ptr [edx*4 + 0x10d5b620] */
  switch (EDX) {
    case 0: goto L_10d5b630;
    case 1: goto L_10d5b638;
    case 2: goto L_10d5b648;
    case 3: goto L_10d5b65c;
    default: x86_unimpl("switch@0x10d5b5aa out of table"); return;
  }
  /* 10d5b5b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10d5b5b4 aam 0xb5 */
  x86_unimpl("aam @ 0x10d5b5b4");
  /* 10d5b5b6 aad 0x10 */
  x86_unimpl("aad @ 0x10d5b5b6");
  /* 10d5b5b8 fdiv qword ptr [ebp - 0x4a1bef2b] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x4a1bef2b)));
  /* 10d5b5be aad 0x10 */
  x86_unimpl("aad @ 0x10d5b5be");
  /* 10d5b5c0 in al, dx */
  x86_unimpl("in @ 0x10d5b5c0");
  /* 10d5b5c1 mov ch, 0xd5 */
  C.c.b.h = (0xd5u);
  /* 10d5b5c3 adc ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10d5b5c5 mov ch, 0xd5 */
  C.c.b.h = (0xd5u);
  /* 10d5b5c7 adc ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10d5b5c9 mov ch, 0xd5 */
  C.c.b.h = (0xd5u);
  /* 10d5b5cb adc byte ptr [esi + esi*4], al */
  { uint32_t _a=(r8((uint32_t)(ESI + ESI*4))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(ESI + ESI*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 10d5b5ce aad 0x10 */
  x86_unimpl("aad @ 0x10d5b5ce");
  /* 10d5b5d4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10d5b5d8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10d5b5dc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10d5b5e0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10d5b5e4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10d5b5e8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10d5b5ec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10d5b5f0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10d5b5f4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10d5b5f8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10d5b5fc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10d5b600 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10d5b604 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10d5b608 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10d5b60c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10d5b613 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b615 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10d5b617:;
  /* 10d5b617 jmp dword ptr [edx*4 + 0x10d5b620] */
  switch (EDX) {
    case 0: goto L_10d5b630;
    case 1: goto L_10d5b638;
    case 2: goto L_10d5b648;
    case 3: goto L_10d5b65c;
    default: x86_unimpl("switch@0x10d5b617 out of table"); return;
  }
  /* 10d5b61e mov edi, edi */
  EDI = (EDI);
L_10d5b630:;
  /* 10d5b630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5b633 pop esi */
  ESI = (pop32());
  /* 10d5b634 pop edi */
  EDI = (pop32());
  /* 10d5b635 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d5b636 ret  */
  ESPCHK(0x10d5b340u, _esp0);
  ESP += 4; return;
  /* 10d5b637 nop  */
  /* nop */
L_10d5b638:;
  /* 10d5b638 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d5b63b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d5b63e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5b641 pop esi */
  ESI = (pop32());
  /* 10d5b642 pop edi */
  EDI = (pop32());
  /* 10d5b643 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d5b644 ret  */
  ESPCHK(0x10d5b340u, _esp0);
  ESP += 4; return;
  /* 10d5b645 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d5b648:;
  /* 10d5b648 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d5b64b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d5b64e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d5b651 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d5b654 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5b657 pop esi */
  ESI = (pop32());
  /* 10d5b658 pop edi */
  EDI = (pop32());
  /* 10d5b659 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d5b65a ret  */
  ESPCHK(0x10d5b340u, _esp0);
  ESP += 4; return;
  /* 10d5b65b nop  */
  /* nop */
L_10d5b65c:;
  /* 10d5b65c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d5b65f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d5b662 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d5b665 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d5b668 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d5b66b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d5b66e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5b671 pop esi */
  ESI = (pop32());
  /* 10d5b672 pop edi */
  EDI = (pop32());
  /* 10d5b673 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d5b674 ret  */
  ESPCHK(0x10d5b340u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10d5b680 (104 bytes, 43 insns) */
void f_10d5b680(void) {
  FTRACE(0x10d5b680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5b680 push ebx */
  push32((uint32_t)(EBX));
  /* 10d5b681 push esi */
  push32((uint32_t)(ESI));
  /* 10d5b682 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10d5b686 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5b688 jne 0x10d5b6a2 */
  if (!C.zf) goto L_10d5b6a2;
  /* 10d5b68a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10d5b68e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d5b692 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b694 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d5b696 mov ebx, eax */
  EBX = (EAX);
  /* 10d5b698 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d5b69c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d5b69e mov edx, ebx */
  EDX = (EBX);
  /* 10d5b6a0 jmp 0x10d5b6e3 */
  goto L_10d5b6e3;
L_10d5b6a2:;
  /* 10d5b6a2 mov ecx, eax */
  ECX = (EAX);
  /* 10d5b6a4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10d5b6a8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d5b6ac mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10d5b6b0:;
  /* 10d5b6b0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10d5b6b2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10d5b6b4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10d5b6b6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10d5b6b8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5b6ba jne 0x10d5b6b0 */
  if (!C.zf) goto L_10d5b6b0;
  /* 10d5b6bc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d5b6be mov esi, eax */
  ESI = (EAX);
  /* 10d5b6c0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d5b6c4 mov ecx, eax */
  ECX = (EAX);
  /* 10d5b6c6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10d5b6ca mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d5b6cc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b6ce jb 0x10d5b6de */
  if (C.cf) goto L_10d5b6de;
  /* 10d5b6d0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b6d4 ja 0x10d5b6de */
  if ((!C.cf&&!C.zf)) goto L_10d5b6de;
  /* 10d5b6d6 jb 0x10d5b6df */
  if (C.cf) goto L_10d5b6df;
  /* 10d5b6d8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b6dc jbe 0x10d5b6df */
  if ((C.cf||C.zf)) goto L_10d5b6df;
L_10d5b6de:;
  /* 10d5b6de dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10d5b6df:;
  /* 10d5b6df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b6e1 mov eax, esi */
  EAX = (ESI);
L_10d5b6e3:;
  /* 10d5b6e3 pop esi */
  ESI = (pop32());
  /* 10d5b6e4 pop ebx */
  EBX = (pop32());
  /* 10d5b6e5 ret 0x10 */
  ESPCHK(0x10d5b680u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10d5b6f0 (117 bytes, 44 insns) */
void f_10d5b6f0(void) {
  FTRACE(0x10d5b6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5b6f0 push ebx */
  push32((uint32_t)(EBX));
  /* 10d5b6f1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10d5b6f5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5b6f7 jne 0x10d5b711 */
  if (!C.zf) goto L_10d5b711;
  /* 10d5b6f9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d5b6fd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d5b701 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b703 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d5b705 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d5b709 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d5b70b mov eax, edx */
  EAX = (EDX);
  /* 10d5b70d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b70f jmp 0x10d5b761 */
  goto L_10d5b761;
L_10d5b711:;
  /* 10d5b711 mov ecx, eax */
  ECX = (EAX);
  /* 10d5b713 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d5b717 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d5b71b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10d5b71f:;
  /* 10d5b71f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10d5b721 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10d5b723 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10d5b725 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10d5b727 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5b729 jne 0x10d5b71f */
  if (!C.zf) goto L_10d5b71f;
  /* 10d5b72b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d5b72d mov ecx, eax */
  ECX = (EAX);
  /* 10d5b72f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d5b733 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10d5b734 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d5b738 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b73a jb 0x10d5b74a */
  if (C.cf) goto L_10d5b74a;
  /* 10d5b73c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b740 ja 0x10d5b74a */
  if ((!C.cf&&!C.zf)) goto L_10d5b74a;
  /* 10d5b742 jb 0x10d5b752 */
  if (C.cf) goto L_10d5b752;
  /* 10d5b744 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b748 jbe 0x10d5b752 */
  if ((C.cf||C.zf)) goto L_10d5b752;
L_10d5b74a:;
  /* 10d5b74a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5b74e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10d5b752:;
  /* 10d5b752 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5b756 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5b75a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d5b75c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d5b75e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10d5b761:;
  /* 10d5b761 pop ebx */
  EBX = (pop32());
  /* 10d5b762 ret 0x10 */
  ESPCHK(0x10d5b6f0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000b770 @ 0x10d5b770 (628 bytes, 214 insns) */
void f_10d5b770(void) {
  FTRACE(0x10d5b770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5b770 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5b771 mov ebp, esp */
  EBP = (ESP);
  /* 10d5b773 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5b776 push ebx */
  push32((uint32_t)(EBX));
  /* 10d5b777 push esi */
  push32((uint32_t)(ESI));
  /* 10d5b778 push edi */
  push32((uint32_t)(EDI));
L_10d5b779:;
  /* 10d5b779 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b77d jne 0x10d5b79d */
  if (!C.zf) goto L_10d5b79d;
  /* 10d5b77f push 0x10d7bfe4 */
  push32((uint32_t)(0x10d7bfe4u));
  /* 10d5b784 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5b786 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10d5b788 push 0x10d7bfd8 */
  push32((uint32_t)(0x10d7bfd8u));
  /* 10d5b78d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5b78f call 0x10d53b20 */
  push32(0x10d5b794u); f_10d53b20();
  /* 10d5b794 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b797 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b79a jne 0x10d5b79d */
  if (!C.zf) goto L_10d5b79d;
  /* 10d5b79c int3  */
  x86_unimpl("int3 @ 0x10d5b79c");
L_10d5b79d:;
  /* 10d5b79d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5b79f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5b7a1 jne 0x10d5b779 */
  if (!C.zf) goto L_10d5b779;
  /* 10d5b7a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5b7a6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d5b7a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b7ac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d5b7af mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d5b7b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b7b5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d5b7b8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b7be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5b7c0 je 0x10d5b7cf */
  if (C.zf) goto L_10d5b7cf;
  /* 10d5b7c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b7c5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d5b7c8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5b7cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5b7cd je 0x10d5b7e5 */
  if (C.zf) goto L_10d5b7e5;
L_10d5b7cf:;
  /* 10d5b7cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b7d2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d5b7d5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10d5b7d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b7da mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10d5b7dd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5b7e0 jmp 0x10d5b9dd */
  goto L_10d5b9dd;
L_10d5b7e5:;
  /* 10d5b7e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b7e8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d5b7eb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5b7ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5b7f0 je 0x10d5b83c */
  if (C.zf) goto L_10d5b83c;
  /* 10d5b7f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b7f5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10d5b7fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b7ff mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d5b802 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5b805 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5b807 je 0x10d5b825 */
  if (C.zf) goto L_10d5b825;
  /* 10d5b809 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b80c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b80f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d5b812 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d5b814 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b817 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d5b81a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b81d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b820 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10d5b823 jmp 0x10d5b83c */
  goto L_10d5b83c;
L_10d5b825:;
  /* 10d5b825 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b828 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d5b82b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b82e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b831 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10d5b834 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5b837 jmp 0x10d5b9dd */
  goto L_10d5b9dd;
L_10d5b83c:;
  /* 10d5b83c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b83f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d5b842 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b845 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b848 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10d5b84b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b84e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d5b851 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b854 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b857 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10d5b85a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b85d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10d5b864 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d5b86b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5b86e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d5b871 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b874 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d5b877 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5b87d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5b87f jne 0x10d5b8af */
  if (!C.zf) goto L_10d5b8af;
  /* 10d5b881 cmp dword ptr [ebp - 8], 0x10d7f140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10d7f140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b888 je 0x10d5b893 */
  if (C.zf) goto L_10d5b893;
  /* 10d5b88a cmp dword ptr [ebp - 8], 0x10d7f160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10d7f160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b891 jne 0x10d5b8a3 */
  if (!C.zf) goto L_10d5b8a3;
L_10d5b893:;
  /* 10d5b893 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5b896 push edx */
  push32((uint32_t)(EDX));
  /* 10d5b897 call 0x10d5d6e0 */
  push32(0x10d5b89cu); f_10d5d6e0();
  /* 10d5b89c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b89f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5b8a1 jne 0x10d5b8af */
  if (!C.zf) goto L_10d5b8af;
L_10d5b8a3:;
  /* 10d5b8a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b8a6 push eax */
  push32((uint32_t)(EAX));
  /* 10d5b8a7 call 0x10d5d610 */
  push32(0x10d5b8acu); f_10d5d610();
  /* 10d5b8ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5b8af:;
  /* 10d5b8af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b8b2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d5b8b5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5b8bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5b8bd je 0x10d5b99b */
  if (C.zf) goto L_10d5b99b;
L_10d5b8c3:;
  /* 10d5b8c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b8c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b8c9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10d5b8cb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5b8ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5b8d0 jge 0x10d5b8f3 */
  if ((C.sf==C.of)) goto L_10d5b8f3;
  /* 10d5b8d2 push 0x10d7bf98 */
  push32((uint32_t)(0x10d7bf98u));
  /* 10d5b8d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5b8d9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10d5b8de push 0x10d7bfd8 */
  push32((uint32_t)(0x10d7bfd8u));
  /* 10d5b8e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5b8e5 call 0x10d53b20 */
  push32(0x10d5b8eau); f_10d53b20();
  /* 10d5b8ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b8ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b8f0 jne 0x10d5b8f3 */
  if (!C.zf) goto L_10d5b8f3;
  /* 10d5b8f2 int3  */
  x86_unimpl("int3 @ 0x10d5b8f2");
L_10d5b8f3:;
  /* 10d5b8f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5b8f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5b8f7 jne 0x10d5b8c3 */
  if (!C.zf) goto L_10d5b8c3;
  /* 10d5b8f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b8fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b8ff mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10d5b901 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5b904 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5b907 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b90a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d5b90d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b910 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b913 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d5b915 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b918 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d5b91b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5b91e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b921 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d5b924 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b928 jle 0x10d5b946 */
  if ((C.zf||C.sf!=C.of)) goto L_10d5b946;
  /* 10d5b92a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5b92d push ecx */
  push32((uint32_t)(ECX));
  /* 10d5b92e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b931 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d5b934 push eax */
  push32((uint32_t)(EAX));
  /* 10d5b935 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5b938 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5b939 call 0x10d5d300 */
  push32(0x10d5b93eu); f_10d5d300();
  /* 10d5b93e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b941 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d5b944 jmp 0x10d5b98e */
  goto L_10d5b98e;
L_10d5b946:;
  /* 10d5b946 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b94a je 0x10d5b969 */
  if (C.zf) goto L_10d5b969;
  /* 10d5b94c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5b94f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10d5b952 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5b955 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5b958 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5b95b mov ecx, dword ptr [edx*4 + 0x10d81ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10d81ee0)));
  /* 10d5b962 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b964 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d5b967 jmp 0x10d5b970 */
  goto L_10d5b970;
L_10d5b969:;
  /* 10d5b969 mov dword ptr [ebp - 0x14], 0x10d7ea60 */
  w32((uint32_t)(EBP + -0x14), (0x10d7ea60u));
L_10d5b970:;
  /* 10d5b970 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5b973 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10d5b977 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5b97a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5b97c je 0x10d5b98e */
  if (C.zf) goto L_10d5b98e;
  /* 10d5b97e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5b980 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5b982 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5b985 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5b986 call 0x10d5d1b0 */
  push32(0x10d5b98bu); f_10d5d1b0();
  /* 10d5b98b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5b98e:;
  /* 10d5b98e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b991 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d5b994 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10d5b997 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10d5b999 jmp 0x10d5b9b9 */
  goto L_10d5b9b9;
L_10d5b99b:;
  /* 10d5b99b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d5b9a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5b9a5 push edx */
  push32((uint32_t)(EDX));
  /* 10d5b9a6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10d5b9a9 push eax */
  push32((uint32_t)(EAX));
  /* 10d5b9aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5b9ad push ecx */
  push32((uint32_t)(ECX));
  /* 10d5b9ae call 0x10d5d300 */
  push32(0x10d5b9b3u); f_10d5d300();
  /* 10d5b9b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5b9b6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d5b9b9:;
  /* 10d5b9b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5b9bc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5b9bf je 0x10d5b9d5 */
  if (C.zf) goto L_10d5b9d5;
  /* 10d5b9c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b9c4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d5b9c7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5b9ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5b9cd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10d5b9d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5b9d3 jmp 0x10d5b9dd */
  goto L_10d5b9dd;
L_10d5b9d5:;
  /* 10d5b9d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5b9d8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10d5b9dd:;
  /* 10d5b9dd pop edi */
  EDI = (pop32());
  /* 10d5b9de pop esi */
  ESI = (pop32());
  /* 10d5b9df pop ebx */
  EBX = (pop32());
  /* 10d5b9e0 mov esp, ebp */
  ESP = (EBP);
  /* 10d5b9e2 pop ebp */
  EBP = (pop32());
  /* 10d5b9e3 ret  */
  ESPCHK(0x10d5b770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9f0 @ 0x10d5b9f0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10d5b9f0(void) {
  FTRACE(0x10d5b9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5b9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5b9f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5b9f3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5b9f9 push ebx */
  push32((uint32_t)(EBX));
  /* 10d5b9fa push esi */
  push32((uint32_t)(ESI));
  /* 10d5b9fb push edi */
  push32((uint32_t)(EDI));
  /* 10d5b9fc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d5ba03 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10d5ba0d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10d5ba14:;
  /* 10d5ba14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5ba17 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d5ba19 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10d5ba1c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d5ba20 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5ba23 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ba26 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10d5ba29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5ba2b je 0x10d5c607 */
  if (C.zf) goto L_10d5c607;
  /* 10d5ba31 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ba38 jl 0x10d5c607 */
  if ((C.sf!=C.of)) goto L_10d5c607;
  /* 10d5ba3e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d5ba42 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ba45 jl 0x10d5ba66 */
  if ((C.sf!=C.of)) goto L_10d5ba66;
  /* 10d5ba47 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d5ba4b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ba4e jg 0x10d5ba66 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d5ba66;
  /* 10d5ba50 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d5ba54 movsx ecx, byte ptr [eax + 0x10d7bfd0] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10d7bfd0))));
  /* 10d5ba5b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5ba5e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10d5ba64 jmp 0x10d5ba70 */
  goto L_10d5ba70;
L_10d5ba66:;
  /* 10d5ba66 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10d5ba70:;
  /* 10d5ba70 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10d5ba76 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d5ba79 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5ba7c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5ba7f movsx edx, byte ptr [ecx + eax*8 + 0x10d7bff0] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10d7bff0))));
  /* 10d5ba87 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10d5ba8a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d5ba8d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5ba90 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10d5ba96 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ba9d ja 0x10d5c602 */
  if ((!C.cf&&!C.zf)) goto L_10d5c602;
  /* 10d5baa3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10d5baa9 jmp dword ptr [ecx*4 + 0x10d5c614] */
  switch (ECX) {
    case 0: goto L_10d5bab0;
    case 1: goto L_10d5bb4a;
    case 2: goto L_10d5bb8c;
    case 3: goto L_10d5bbfb;
    case 4: goto L_10d5bc53;
    case 5: goto L_10d5bc62;
    case 6: goto L_10d5bcae;
    case 7: goto L_10d5bd41;
    case 8: goto L_10d5bbd8;
    case 9: goto L_10d5bbe3;
    case 10: goto L_10d5bbce;
    case 11: goto L_10d5bbc3;
    case 12: goto L_10d5bbee;
    case 13: goto L_10d5bbf6;
    default: x86_unimpl("switch@0x10d5baa9 out of table"); return;
  }
L_10d5bab0:;
  /* 10d5bab0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10d5bab7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d5baba and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5bac0 mov eax, dword ptr [0x10d7ec98] */
  EAX = (r32((uint32_t)(0x10d7ec98)));
  /* 10d5bac5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5bac7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10d5bacb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5bad1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5bad3 je 0x10d5bb2d */
  if (C.zf) goto L_10d5bb2d;
  /* 10d5bad5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10d5badb push edx */
  push32((uint32_t)(EDX));
  /* 10d5badc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5badf push eax */
  push32((uint32_t)(EAX));
  /* 10d5bae0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d5bae4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5bae5 call 0x10d5c720 */
  push32(0x10d5baeau); f_10d5c720();
  /* 10d5baea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5baed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5baf0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d5baf2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10d5baf5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5baf8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5bafb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10d5bafe:;
  /* 10d5bafe movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d5bb02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5bb04 jne 0x10d5bb27 */
  if (!C.zf) goto L_10d5bb27;
  /* 10d5bb06 push 0x10d7c070 */
  push32((uint32_t)(0x10d7c070u));
  /* 10d5bb0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5bb0d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10d5bb12 push 0x10d7c064 */
  push32((uint32_t)(0x10d7c064u));
  /* 10d5bb17 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5bb19 call 0x10d53b20 */
  push32(0x10d5bb1eu); f_10d53b20();
  /* 10d5bb1e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5bb21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5bb24 jne 0x10d5bb27 */
  if (!C.zf) goto L_10d5bb27;
  /* 10d5bb26 int3  */
  x86_unimpl("int3 @ 0x10d5bb26");
L_10d5bb27:;
  /* 10d5bb27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5bb29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5bb2b jne 0x10d5bafe */
  if (!C.zf) goto L_10d5bafe;
L_10d5bb2d:;
  /* 10d5bb2d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10d5bb33 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5bb34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5bb37 push edx */
  push32((uint32_t)(EDX));
  /* 10d5bb38 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d5bb3c push eax */
  push32((uint32_t)(EAX));
  /* 10d5bb3d call 0x10d5c720 */
  push32(0x10d5bb42u); f_10d5c720();
  /* 10d5bb42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5bb45 jmp 0x10d5c602 */
  goto L_10d5c602;
L_10d5bb4a:;
  /* 10d5bb4a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d5bb51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5bb54 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10d5bb5a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10d5bb60 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10d5bb66 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10d5bb6c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d5bb6f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d5bb76 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10d5bb80 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10d5bb87 jmp 0x10d5c602 */
  goto L_10d5c602;
L_10d5bb8c:;
  /* 10d5bb8c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d5bb90 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10d5bb96 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10d5bb9c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5bb9f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10d5bba5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5bbac ja 0x10d5bbf6 */
  if ((!C.cf&&!C.zf)) goto L_10d5bbf6;
  /* 10d5bbae mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10d5bbb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5bbb6 mov al, byte ptr [ecx + 0x10d5c64c] */
  AL = (r8((uint32_t)(ECX + 0x10d5c64c)));
  /* 10d5bbbc jmp dword ptr [eax*4 + 0x10d5c634] */
  switch (EAX) {
    case 0: goto L_10d5bbd8;
    case 1: goto L_10d5bbe3;
    case 2: goto L_10d5bbce;
    case 3: goto L_10d5bbc3;
    case 4: goto L_10d5bbee;
    case 5: goto L_10d5bbf6;
    default: x86_unimpl("switch@0x10d5bbbc out of table"); return;
  }
L_10d5bbc3:;
  /* 10d5bbc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5bbc6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5bbc9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d5bbcc jmp 0x10d5bbf6 */
  goto L_10d5bbf6;
L_10d5bbce:;
  /* 10d5bbce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5bbd1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10d5bbd3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5bbd6 jmp 0x10d5bbf6 */
  goto L_10d5bbf6;
L_10d5bbd8:;
  /* 10d5bbd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5bbdb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5bbde mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d5bbe1 jmp 0x10d5bbf6 */
  goto L_10d5bbf6;
L_10d5bbe3:;
  /* 10d5bbe3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5bbe6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10d5bbe9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d5bbec jmp 0x10d5bbf6 */
  goto L_10d5bbf6;
L_10d5bbee:;
  /* 10d5bbee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5bbf1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10d5bbf3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d5bbf6:;
  /* 10d5bbf6 jmp 0x10d5c602 */
  goto L_10d5c602;
L_10d5bbfb:;
  /* 10d5bbfb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d5bbff cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5bc02 jne 0x10d5bc37 */
  if (!C.zf) goto L_10d5bc37;
  /* 10d5bc04 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10d5bc07 push edx */
  push32((uint32_t)(EDX));
  /* 10d5bc08 call 0x10d5c830 */
  push32(0x10d5bc0du); f_10d5c830();
  /* 10d5bc0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5bc10 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10d5bc16 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5bc1d jge 0x10d5bc35 */
  if ((C.sf==C.of)) goto L_10d5bc35;
  /* 10d5bc1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5bc22 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10d5bc24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5bc27 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10d5bc2d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d5bc2f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10d5bc35:;
  /* 10d5bc35 jmp 0x10d5bc4e */
  goto L_10d5bc4e;
L_10d5bc37:;
  /* 10d5bc37 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10d5bc3d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5bc40 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d5bc44 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10d5bc48 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10d5bc4e:;
  /* 10d5bc4e jmp 0x10d5c602 */
  goto L_10d5c602;
L_10d5bc53:;
  /* 10d5bc53 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10d5bc5d jmp 0x10d5c602 */
  goto L_10d5c602;
L_10d5bc62:;
  /* 10d5bc62 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d5bc66 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5bc69 jne 0x10d5bc92 */
  if (!C.zf) goto L_10d5bc92;
  /* 10d5bc6b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10d5bc6e push eax */
  push32((uint32_t)(EAX));
  /* 10d5bc6f call 0x10d5c830 */
  push32(0x10d5bc74u); f_10d5c830();
  /* 10d5bc74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5bc77 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10d5bc7d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5bc84 jge 0x10d5bc90 */
  if ((C.sf==C.of)) goto L_10d5bc90;
  /* 10d5bc86 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10d5bc90:;
  /* 10d5bc90 jmp 0x10d5bca9 */
  goto L_10d5bca9;
L_10d5bc92:;
  /* 10d5bc92 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10d5bc98 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5bc9b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d5bc9f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10d5bca3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10d5bca9:;
  /* 10d5bca9 jmp 0x10d5c602 */
  goto L_10d5c602;
L_10d5bcae:;
  /* 10d5bcae movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d5bcb2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10d5bcb8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10d5bcbe sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5bcc1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10d5bcc7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5bcce ja 0x10d5bd3c */
  if ((!C.cf&&!C.zf)) goto L_10d5bd3c;
  /* 10d5bcd0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10d5bcd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5bcd8 mov al, byte ptr [ecx + 0x10d5c671] */
  AL = (r8((uint32_t)(ECX + 0x10d5c671)));
  /* 10d5bcde jmp dword ptr [eax*4 + 0x10d5c65d] */
  switch (EAX) {
    case 0: goto L_10d5bcf0;
    case 1: goto L_10d5bd29;
    case 2: goto L_10d5bce5;
    case 3: goto L_10d5bd33;
    case 4: goto L_10d5bd3c;
    default: x86_unimpl("switch@0x10d5bcde out of table"); return;
  }
L_10d5bce5:;
  /* 10d5bce5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5bce8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5bceb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d5bcee jmp 0x10d5bd3c */
  goto L_10d5bd3c;
L_10d5bcf0:;
  /* 10d5bcf0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5bcf3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d5bcf6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5bcf9 jne 0x10d5bd1b */
  if (!C.zf) goto L_10d5bd1b;
  /* 10d5bcfb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5bcfe movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10d5bd02 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5bd05 jne 0x10d5bd1b */
  if (!C.zf) goto L_10d5bd1b;
  /* 10d5bd07 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5bd0a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5bd0d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10d5bd10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5bd13 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10d5bd16 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d5bd19 jmp 0x10d5bd27 */
  goto L_10d5bd27;
L_10d5bd1b:;
  /* 10d5bd1b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10d5bd22 jmp 0x10d5bab0 */
  goto L_10d5bab0;
L_10d5bd27:;
  /* 10d5bd27 jmp 0x10d5bd3c */
  goto L_10d5bd3c;
L_10d5bd29:;
  /* 10d5bd29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5bd2c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10d5bd2e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5bd31 jmp 0x10d5bd3c */
  goto L_10d5bd3c;
L_10d5bd33:;
  /* 10d5bd33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5bd36 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10d5bd39 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d5bd3c:;
  /* 10d5bd3c jmp 0x10d5c602 */
  goto L_10d5c602;
L_10d5bd41:;
  /* 10d5bd41 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d5bd45 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10d5bd4b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10d5bd51 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5bd54 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10d5bd5a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5bd61 ja 0x10d5c427 */
  if ((!C.cf&&!C.zf)) goto L_10d5c427;
  /* 10d5bd67 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10d5bd6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5bd6f mov cl, byte ptr [edx + 0x10d5c6dc] */
  CL = (r8((uint32_t)(EDX + 0x10d5c6dc)));
  /* 10d5bd75 jmp dword ptr [ecx*4 + 0x10d5c6a0] */
  switch (ECX) {
    case 0: goto L_10d5bd7c;
    case 1: goto L_10d5c010;
    case 2: goto L_10d5bea0;
    case 3: goto L_10d5c149;
    case 4: goto L_10d5be0b;
    case 5: goto L_10d5bd91;
    case 6: goto L_10d5c11b;
    case 7: goto L_10d5c020;
    case 8: goto L_10d5bfc5;
    case 9: goto L_10d5c195;
    case 10: goto L_10d5c13f;
    case 11: goto L_10d5beb6;
    case 12: goto L_10d5c133;
    case 13: goto L_10d5c155;
    case 14: goto L_10d5c427;
    default: x86_unimpl("switch@0x10d5bd75 out of table"); return;
  }
L_10d5bd7c:;
  /* 10d5bd7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5bd7f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5bd84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5bd86 jne 0x10d5bd91 */
  if (!C.zf) goto L_10d5bd91;
  /* 10d5bd88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5bd8b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10d5bd8e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d5bd91:;
  /* 10d5bd91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5bd94 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5bd9a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5bd9c je 0x10d5bdd7 */
  if (C.zf) goto L_10d5bdd7;
  /* 10d5bd9e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10d5bda1 push eax */
  push32((uint32_t)(EAX));
  /* 10d5bda2 call 0x10d5c870 */
  push32(0x10d5bda7u); f_10d5c870();
  /* 10d5bda7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5bdaa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10d5bdae mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10d5bdb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5bdb3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10d5bdb9 push edx */
  push32((uint32_t)(EDX));
  /* 10d5bdba call 0x10d5d950 */
  push32(0x10d5bdbfu); f_10d5d950();
  /* 10d5bdbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5bdc2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d5bdc5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5bdc9 jge 0x10d5bdd5 */
  if ((C.sf==C.of)) goto L_10d5bdd5;
  /* 10d5bdcb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10d5bdd5:;
  /* 10d5bdd5 jmp 0x10d5bdfd */
  goto L_10d5bdfd;
L_10d5bdd7:;
  /* 10d5bdd7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10d5bdda push eax */
  push32((uint32_t)(EAX));
  /* 10d5bddb call 0x10d5c830 */
  push32(0x10d5bde0u); f_10d5c830();
  /* 10d5bde0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5bde3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10d5bdea mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10d5bdf0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10d5bdf6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10d5bdfd:;
  /* 10d5bdfd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10d5be03 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d5be06 jmp 0x10d5c427 */
  goto L_10d5c427;
L_10d5be0b:;
  /* 10d5be0b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10d5be0e push eax */
  push32((uint32_t)(EAX));
  /* 10d5be0f call 0x10d5c830 */
  push32(0x10d5be14u); f_10d5c830();
  /* 10d5be14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5be17 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10d5be1d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5be24 je 0x10d5be32 */
  if (C.zf) goto L_10d5be32;
  /* 10d5be26 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10d5be2c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5be30 jne 0x10d5be4c */
  if (!C.zf) goto L_10d5be4c;
L_10d5be32:;
  /* 10d5be32 mov edx, dword ptr [0x10d7efb0] */
  EDX = (r32((uint32_t)(0x10d7efb0)));
  /* 10d5be38 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d5be3b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5be3e push eax */
  push32((uint32_t)(EAX));
  /* 10d5be3f call 0x10d57890 */
  push32(0x10d5be44u); f_10d57890();
  /* 10d5be44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5be47 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d5be4a jmp 0x10d5be9b */
  goto L_10d5be9b;
L_10d5be4c:;
  /* 10d5be4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5be4f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5be55 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5be57 je 0x10d5be7c */
  if (C.zf) goto L_10d5be7c;
  /* 10d5be59 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10d5be5f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d5be62 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d5be65 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10d5be6b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10d5be6e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10d5be70 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10d5be73 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10d5be7a jmp 0x10d5be9b */
  goto L_10d5be9b;
L_10d5be7c:;
  /* 10d5be7c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10d5be83 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10d5be89 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d5be8c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d5be8f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10d5be95 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10d5be98 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d5be9b:;
  /* 10d5be9b jmp 0x10d5c427 */
  goto L_10d5c427;
L_10d5bea0:;
  /* 10d5bea0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5bea3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5bea9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5beab jne 0x10d5beb6 */
  if (!C.zf) goto L_10d5beb6;
  /* 10d5bead mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5beb0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10d5beb3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d5beb6:;
  /* 10d5beb6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5bebd jne 0x10d5becb */
  if (!C.zf) goto L_10d5becb;
  /* 10d5bebf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10d5bec9 jmp 0x10d5bed7 */
  goto L_10d5bed7;
L_10d5becb:;
  /* 10d5becb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10d5bed1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10d5bed7:;
  /* 10d5bed7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10d5bedd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10d5bee3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10d5bee6 push edx */
  push32((uint32_t)(EDX));
  /* 10d5bee7 call 0x10d5c830 */
  push32(0x10d5beecu); f_10d5c830();
  /* 10d5beec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5beef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d5bef2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5bef5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5befa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5befc je 0x10d5bf66 */
  if (C.zf) goto L_10d5bf66;
  /* 10d5befe cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5bf02 jne 0x10d5bf0d */
  if (!C.zf) goto L_10d5bf0d;
  /* 10d5bf04 mov ecx, dword ptr [0x10d7efb4] */
  ECX = (r32((uint32_t)(0x10d7efb4)));
  /* 10d5bf0a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10d5bf0d:;
  /* 10d5bf0d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10d5bf14 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5bf17 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10d5bf1d:;
  /* 10d5bf1d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10d5bf23 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10d5bf29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5bf2c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10d5bf32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5bf34 je 0x10d5bf56 */
  if (C.zf) goto L_10d5bf56;
  /* 10d5bf36 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10d5bf3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5bf3e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10d5bf41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5bf43 je 0x10d5bf56 */
  if (C.zf) goto L_10d5bf56;
  /* 10d5bf45 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10d5bf4b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5bf4e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10d5bf54 jmp 0x10d5bf1d */
  goto L_10d5bf1d;
L_10d5bf56:;
  /* 10d5bf56 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10d5bf5c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5bf5f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10d5bf61 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10d5bf64 jmp 0x10d5bfc0 */
  goto L_10d5bfc0;
L_10d5bf66:;
  /* 10d5bf66 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5bf6a jne 0x10d5bf74 */
  if (!C.zf) goto L_10d5bf74;
  /* 10d5bf6c mov eax, dword ptr [0x10d7efb0] */
  EAX = (r32((uint32_t)(0x10d7efb0)));
  /* 10d5bf71 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10d5bf74:;
  /* 10d5bf74 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5bf77 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10d5bf7d:;
  /* 10d5bf7d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10d5bf83 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10d5bf89 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5bf8c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10d5bf92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5bf94 je 0x10d5bfb4 */
  if (C.zf) goto L_10d5bfb4;
  /* 10d5bf96 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10d5bf9c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d5bf9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5bfa1 je 0x10d5bfb4 */
  if (C.zf) goto L_10d5bfb4;
  /* 10d5bfa3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10d5bfa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5bfac mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10d5bfb2 jmp 0x10d5bf7d */
  goto L_10d5bf7d;
L_10d5bfb4:;
  /* 10d5bfb4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10d5bfba sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5bfbd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10d5bfc0:;
  /* 10d5bfc0 jmp 0x10d5c427 */
  goto L_10d5c427;
L_10d5bfc5:;
  /* 10d5bfc5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10d5bfc8 push edx */
  push32((uint32_t)(EDX));
  /* 10d5bfc9 call 0x10d5c830 */
  push32(0x10d5bfceu); f_10d5c830();
  /* 10d5bfce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5bfd1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10d5bfd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5bfda and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5bfdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5bfdf je 0x10d5bff3 */
  if (C.zf) goto L_10d5bff3;
  /* 10d5bfe1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10d5bfe7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10d5bfee mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10d5bff1 jmp 0x10d5c001 */
  goto L_10d5c001;
L_10d5bff3:;
  /* 10d5bff3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10d5bff9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10d5bfff mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10d5c001:;
  /* 10d5c001 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10d5c00b jmp 0x10d5c427 */
  goto L_10d5c427;
L_10d5c010:;
  /* 10d5c010 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10d5c017 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10d5c01a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d5c01d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10d5c020:;
  /* 10d5c020 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c023 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10d5c025 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5c028 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10d5c02e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d5c031 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c038 jge 0x10d5c046 */
  if ((C.sf==C.of)) goto L_10d5c046;
  /* 10d5c03a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10d5c044 jmp 0x10d5c062 */
  goto L_10d5c062;
L_10d5c046:;
  /* 10d5c046 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c04d jne 0x10d5c062 */
  if (!C.zf) goto L_10d5c062;
  /* 10d5c04f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d5c053 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c056 jne 0x10d5c062 */
  if (!C.zf) goto L_10d5c062;
  /* 10d5c058 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10d5c062:;
  /* 10d5c062 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5c065 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c068 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10d5c06b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5c06e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5c071 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d5c073 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d5c076 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10d5c07c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10d5c082 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5c085 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c086 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10d5c08c push edx */
  push32((uint32_t)(EDX));
  /* 10d5c08d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d5c091 push eax */
  push32((uint32_t)(EAX));
  /* 10d5c092 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5c095 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c096 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10d5c09c push edx */
  push32((uint32_t)(EDX));
  /* 10d5c09d call dword ptr [0x10d7f3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d7f3a0))), 0x10d5c0a3u);
  /* 10d5c0a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c0a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c0a9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5c0ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5c0b0 je 0x10d5c0c8 */
  if (C.zf) goto L_10d5c0c8;
  /* 10d5c0b2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c0b9 jne 0x10d5c0c8 */
  if (!C.zf) goto L_10d5c0c8;
  /* 10d5c0bb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5c0be push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c0bf call dword ptr [0x10d7f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d7f3ac))), 0x10d5c0c5u);
  /* 10d5c0c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5c0c8:;
  /* 10d5c0c8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d5c0cc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c0cf jne 0x10d5c0ea */
  if (!C.zf) goto L_10d5c0ea;
  /* 10d5c0d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c0d4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5c0d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5c0db jne 0x10d5c0ea */
  if (!C.zf) goto L_10d5c0ea;
  /* 10d5c0dd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5c0e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c0e1 call dword ptr [0x10d7f3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d7f3a4))), 0x10d5c0e7u);
  /* 10d5c0e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5c0ea:;
  /* 10d5c0ea mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5c0ed movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d5c0f0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c0f3 jne 0x10d5c107 */
  if (!C.zf) goto L_10d5c107;
  /* 10d5c0f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c0f8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10d5c0fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d5c0fe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5c101 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c104 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10d5c107:;
  /* 10d5c107 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5c10a push eax */
  push32((uint32_t)(EAX));
  /* 10d5c10b call 0x10d57890 */
  push32(0x10d5c110u); f_10d57890();
  /* 10d5c110 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c113 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d5c116 jmp 0x10d5c427 */
  goto L_10d5c427;
L_10d5c11b:;
  /* 10d5c11b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c11e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5c121 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d5c124 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10d5c12e jmp 0x10d5c1b5 */
  goto L_10d5c1b5;
L_10d5c133:;
  /* 10d5c133 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10d5c13d jmp 0x10d5c1b5 */
  goto L_10d5c1b5;
L_10d5c13f:;
  /* 10d5c13f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10d5c149:;
  /* 10d5c149 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10d5c153 jmp 0x10d5c15f */
  goto L_10d5c15f;
L_10d5c155:;
  /* 10d5c155 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10d5c15f:;
  /* 10d5c15f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10d5c169 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c16c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5c172 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5c174 je 0x10d5c193 */
  if (C.zf) goto L_10d5c193;
  /* 10d5c176 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10d5c17d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10d5c183 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c186 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10d5c18c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10d5c193:;
  /* 10d5c193 jmp 0x10d5c1b5 */
  goto L_10d5c1b5;
L_10d5c195:;
  /* 10d5c195 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10d5c19f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c1a2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5c1a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5c1aa je 0x10d5c1b5 */
  if (C.zf) goto L_10d5c1b5;
  /* 10d5c1ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c1af or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10d5c1b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d5c1b5:;
  /* 10d5c1b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c1b8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5c1bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5c1bf je 0x10d5c1de */
  if (C.zf) goto L_10d5c1de;
  /* 10d5c1c1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10d5c1c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c1c5 call 0x10d5c850 */
  push32(0x10d5c1cau); f_10d5c850();
  /* 10d5c1ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c1cd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10d5c1d3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10d5c1d9 jmp 0x10d5c26f */
  goto L_10d5c26f;
L_10d5c1de:;
  /* 10d5c1de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c1e1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5c1e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5c1e6 je 0x10d5c230 */
  if (C.zf) goto L_10d5c230;
  /* 10d5c1e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c1eb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5c1ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5c1f0 je 0x10d5c210 */
  if (C.zf) goto L_10d5c210;
  /* 10d5c1f2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10d5c1f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c1f6 call 0x10d5c830 */
  push32(0x10d5c1fbu); f_10d5c830();
  /* 10d5c1fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c1fe movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10d5c201 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d5c202 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10d5c208 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10d5c20e jmp 0x10d5c22e */
  goto L_10d5c22e;
L_10d5c210:;
  /* 10d5c210 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10d5c213 push edx */
  push32((uint32_t)(EDX));
  /* 10d5c214 call 0x10d5c830 */
  push32(0x10d5c219u); f_10d5c830();
  /* 10d5c219 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c21c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5c221 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d5c222 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10d5c228 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10d5c22e:;
  /* 10d5c22e jmp 0x10d5c26f */
  goto L_10d5c26f;
L_10d5c230:;
  /* 10d5c230 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c233 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5c236 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5c238 je 0x10d5c255 */
  if (C.zf) goto L_10d5c255;
  /* 10d5c23a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10d5c23d push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c23e call 0x10d5c830 */
  push32(0x10d5c243u); f_10d5c830();
  /* 10d5c243 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c246 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d5c247 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10d5c24d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10d5c253 jmp 0x10d5c26f */
  goto L_10d5c26f;
L_10d5c255:;
  /* 10d5c255 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10d5c258 push edx */
  push32((uint32_t)(EDX));
  /* 10d5c259 call 0x10d5c830 */
  push32(0x10d5c25eu); f_10d5c830();
  /* 10d5c25e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c261 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5c263 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10d5c269 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10d5c26f:;
  /* 10d5c26f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c272 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5c275 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5c277 je 0x10d5c2b7 */
  if (C.zf) goto L_10d5c2b7;
  /* 10d5c279 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c280 jg 0x10d5c2b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d5c2b7;
  /* 10d5c282 jl 0x10d5c28d */
  if ((C.sf!=C.of)) goto L_10d5c28d;
  /* 10d5c284 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c28b jae 0x10d5c2b7 */
  if (!C.cf) goto L_10d5c2b7;
L_10d5c28d:;
  /* 10d5c28d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10d5c293 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d5c295 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10d5c29b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c29e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d5c2a0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10d5c2a6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10d5c2ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c2af or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10d5c2b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d5c2b5 jmp 0x10d5c2cf */
  goto L_10d5c2cf;
L_10d5c2b7:;
  /* 10d5c2b7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10d5c2bd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10d5c2c3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10d5c2c9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10d5c2cf:;
  /* 10d5c2cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c2d2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5c2d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5c2da jne 0x10d5c2f7 */
  if (!C.zf) goto L_10d5c2f7;
  /* 10d5c2dc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10d5c2e2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10d5c2e8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5c2eb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10d5c2f1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10d5c2f7:;
  /* 10d5c2f7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c2fe jge 0x10d5c30c */
  if ((C.sf==C.of)) goto L_10d5c30c;
  /* 10d5c300 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10d5c30a jmp 0x10d5c315 */
  goto L_10d5c315;
L_10d5c30c:;
  /* 10d5c30c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c30f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5c312 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d5c315:;
  /* 10d5c315 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10d5c31b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10d5c321 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5c323 jne 0x10d5c32c */
  if (!C.zf) goto L_10d5c32c;
  /* 10d5c325 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10d5c32c:;
  /* 10d5c32c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10d5c32f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10d5c332:;
  /* 10d5c332 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10d5c338 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10d5c33e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5c341 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10d5c347 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5c349 jg 0x10d5c35f */
  if ((!C.zf&&C.sf==C.of)) goto L_10d5c35f;
  /* 10d5c34b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10d5c351 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10d5c357 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5c359 je 0x10d5c3e0 */
  if (C.zf) goto L_10d5c3e0;
L_10d5c35f:;
  /* 10d5c35f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10d5c365 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d5c366 push edx */
  push32((uint32_t)(EDX));
  /* 10d5c367 push eax */
  push32((uint32_t)(EAX));
  /* 10d5c368 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10d5c36e push edx */
  push32((uint32_t)(EDX));
  /* 10d5c36f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10d5c375 push eax */
  push32((uint32_t)(EAX));
  /* 10d5c376 call 0x10d5b6f0 */
  push32(0x10d5c37bu); f_10d5b6f0();
  /* 10d5c37b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c37e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10d5c384 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10d5c38a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d5c38b push edx */
  push32((uint32_t)(EDX));
  /* 10d5c38c push eax */
  push32((uint32_t)(EAX));
  /* 10d5c38d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10d5c393 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c394 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10d5c39a push edx */
  push32((uint32_t)(EDX));
  /* 10d5c39b call 0x10d5b680 */
  push32(0x10d5c3a0u); f_10d5b680();
  /* 10d5c3a0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10d5c3a6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10d5c3ac cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c3b3 jle 0x10d5c3c7 */
  if ((C.zf||C.sf!=C.of)) goto L_10d5c3c7;
  /* 10d5c3b5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10d5c3bb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c3c1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10d5c3c7:;
  /* 10d5c3c7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5c3ca mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10d5c3d0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10d5c3d2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5c3d5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5c3d8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d5c3db jmp 0x10d5c332 */
  goto L_10d5c332;
L_10d5c3e0:;
  /* 10d5c3e0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10d5c3e3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5c3e6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d5c3e9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5c3ec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c3ef mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d5c3f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c3f5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5c3fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5c3fc je 0x10d5c427 */
  if (C.zf) goto L_10d5c427;
  /* 10d5c3fe mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5c401 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d5c404 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c407 jne 0x10d5c40f */
  if (!C.zf) goto L_10d5c40f;
  /* 10d5c409 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c40d jne 0x10d5c427 */
  if (!C.zf) goto L_10d5c427;
L_10d5c40f:;
  /* 10d5c40f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5c412 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5c415 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d5c418 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5c41b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10d5c41e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5c421 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c424 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10d5c427:;
  /* 10d5c427 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c42e jne 0x10d5c602 */
  if (!C.zf) goto L_10d5c602;
  /* 10d5c434 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c437 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5c43a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5c43c je 0x10d5c48d */
  if (C.zf) goto L_10d5c48d;
  /* 10d5c43e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c441 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5c447 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5c449 je 0x10d5c45b */
  if (C.zf) goto L_10d5c45b;
  /* 10d5c44b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10d5c452 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10d5c459 jmp 0x10d5c48d */
  goto L_10d5c48d;
L_10d5c45b:;
  /* 10d5c45b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c45e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5c461 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5c463 je 0x10d5c475 */
  if (C.zf) goto L_10d5c475;
  /* 10d5c465 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10d5c46c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10d5c473 jmp 0x10d5c48d */
  goto L_10d5c48d;
L_10d5c475:;
  /* 10d5c475 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c478 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5c47b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5c47d je 0x10d5c48d */
  if (C.zf) goto L_10d5c48d;
  /* 10d5c47f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10d5c486 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10d5c48d:;
  /* 10d5c48d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10d5c493 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5c496 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5c499 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10d5c49f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c4a2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5c4a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5c4a7 jne 0x10d5c4c5 */
  if (!C.zf) goto L_10d5c4c5;
  /* 10d5c4a9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10d5c4af push eax */
  push32((uint32_t)(EAX));
  /* 10d5c4b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c4b4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10d5c4ba push edx */
  push32((uint32_t)(EDX));
  /* 10d5c4bb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10d5c4bd call 0x10d5c7a0 */
  push32(0x10d5c4c2u); f_10d5c7a0();
  /* 10d5c4c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5c4c5:;
  /* 10d5c4c5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10d5c4cb push eax */
  push32((uint32_t)(EAX));
  /* 10d5c4cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c4cf push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c4d0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5c4d3 push edx */
  push32((uint32_t)(EDX));
  /* 10d5c4d4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10d5c4da push eax */
  push32((uint32_t)(EAX));
  /* 10d5c4db call 0x10d5c7e0 */
  push32(0x10d5c4e0u); f_10d5c7e0();
  /* 10d5c4e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c4e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c4e6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5c4e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5c4eb je 0x10d5c513 */
  if (C.zf) goto L_10d5c513;
  /* 10d5c4ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c4f0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5c4f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5c4f5 jne 0x10d5c513 */
  if (!C.zf) goto L_10d5c513;
  /* 10d5c4f7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10d5c4fd push eax */
  push32((uint32_t)(EAX));
  /* 10d5c4fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c501 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c502 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10d5c508 push edx */
  push32((uint32_t)(EDX));
  /* 10d5c509 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10d5c50b call 0x10d5c7a0 */
  push32(0x10d5c510u); f_10d5c7a0();
  /* 10d5c510 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5c513:;
  /* 10d5c513 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c517 je 0x10d5c5c1 */
  if (C.zf) goto L_10d5c5c1;
  /* 10d5c51d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c521 jle 0x10d5c5c1 */
  if ((C.zf||C.sf!=C.of)) goto L_10d5c5c1;
  /* 10d5c527 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5c52a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10d5c530 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5c533 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10d5c539:;
  /* 10d5c539 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10d5c53f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10d5c545 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5c548 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10d5c54e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5c550 je 0x10d5c5bf */
  if (C.zf) goto L_10d5c5bf;
  /* 10d5c552 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10d5c558 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10d5c55b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10d5c562 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10d5c569 push eax */
  push32((uint32_t)(EAX));
  /* 10d5c56a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10d5c570 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c571 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10d5c577 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c57a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10d5c580 call 0x10d5d950 */
  push32(0x10d5c585u); f_10d5d950();
  /* 10d5c585 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c588 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10d5c58e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c595 jg 0x10d5c599 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d5c599;
  /* 10d5c597 jmp 0x10d5c5bf */
  goto L_10d5c5bf;
L_10d5c599:;
  /* 10d5c599 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10d5c59f push eax */
  push32((uint32_t)(EAX));
  /* 10d5c5a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c5a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c5a4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10d5c5aa push edx */
  push32((uint32_t)(EDX));
  /* 10d5c5ab lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10d5c5b1 push eax */
  push32((uint32_t)(EAX));
  /* 10d5c5b2 call 0x10d5c7e0 */
  push32(0x10d5c5b7u); f_10d5c7e0();
  /* 10d5c5b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c5ba jmp 0x10d5c539 */
  goto L_10d5c539;
L_10d5c5bf:;
  /* 10d5c5bf jmp 0x10d5c5dc */
  goto L_10d5c5dc;
L_10d5c5c1:;
  /* 10d5c5c1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10d5c5c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c5c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c5cb push edx */
  push32((uint32_t)(EDX));
  /* 10d5c5cc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5c5cf push eax */
  push32((uint32_t)(EAX));
  /* 10d5c5d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5c5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c5d4 call 0x10d5c7e0 */
  push32(0x10d5c5d9u); f_10d5c7e0();
  /* 10d5c5d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5c5dc:;
  /* 10d5c5dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c5df and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5c5e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5c5e4 je 0x10d5c602 */
  if (C.zf) goto L_10d5c602;
  /* 10d5c5e6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10d5c5ec push eax */
  push32((uint32_t)(EAX));
  /* 10d5c5ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c5f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c5f1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10d5c5f7 push edx */
  push32((uint32_t)(EDX));
  /* 10d5c5f8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10d5c5fa call 0x10d5c7a0 */
  push32(0x10d5c5ffu); f_10d5c7a0();
  /* 10d5c5ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5c602:;
  /* 10d5c602 jmp 0x10d5ba14 */
  goto L_10d5ba14;
L_10d5c607:;
  /* 10d5c607 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10d5c60d pop edi */
  EDI = (pop32());
  /* 10d5c60e pop esi */
  ESI = (pop32());
  /* 10d5c60f pop ebx */
  EBX = (pop32());
  /* 10d5c610 mov esp, ebp */
  ESP = (EBP);
  /* 10d5c612 pop ebp */
  EBP = (pop32());
  /* 10d5c613 ret  */
  ESPCHK(0x10d5b9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c720 @ 0x10d5c720 (119 bytes, 44 insns) */
void f_10d5c720(void) {
  FTRACE(0x10d5c720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5c720 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5c721 mov ebp, esp */
  EBP = (ESP);
  /* 10d5c723 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c724 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5c727 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d5c72a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5c72d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5c730 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10d5c733 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5c736 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c73a jl 0x10d5c762 */
  if ((C.sf!=C.of)) goto L_10d5c762;
  /* 10d5c73c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5c73f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d5c741 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10d5c744 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10d5c746 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10d5c74a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5c750 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d5c753 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5c756 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d5c758 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c75b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5c75e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d5c760 jmp 0x10d5c775 */
  goto L_10d5c775;
L_10d5c762:;
  /* 10d5c762 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5c765 push edx */
  push32((uint32_t)(EDX));
  /* 10d5c766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c769 push eax */
  push32((uint32_t)(EAX));
  /* 10d5c76a call 0x10d5b770 */
  push32(0x10d5c76fu); f_10d5b770();
  /* 10d5c76f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c772 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d5c775:;
  /* 10d5c775 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c779 jne 0x10d5c786 */
  if (!C.zf) goto L_10d5c786;
  /* 10d5c77b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5c77e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10d5c784 jmp 0x10d5c793 */
  goto L_10d5c793;
L_10d5c786:;
  /* 10d5c786 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5c789 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d5c78b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c78e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5c791 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10d5c793:;
  /* 10d5c793 mov esp, ebp */
  ESP = (EBP);
  /* 10d5c795 pop ebp */
  EBP = (pop32());
  /* 10d5c796 ret  */
  ESPCHK(0x10d5c720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7a0 @ 0x10d5c7a0 (53 bytes, 23 insns) */
void f_10d5c7a0(void) {
  FTRACE(0x10d5c7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5c7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5c7a1 mov ebp, esp */
  EBP = (ESP);
L_10d5c7a3:;
  /* 10d5c7a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5c7a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5c7a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5c7ac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10d5c7af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5c7b1 jle 0x10d5c7d3 */
  if ((C.zf||C.sf!=C.of)) goto L_10d5c7d3;
  /* 10d5c7b3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d5c7b6 push edx */
  push32((uint32_t)(EDX));
  /* 10d5c7b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5c7ba push eax */
  push32((uint32_t)(EAX));
  /* 10d5c7bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c7be push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c7bf call 0x10d5c720 */
  push32(0x10d5c7c4u); f_10d5c720();
  /* 10d5c7c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c7c7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d5c7ca cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c7cd jne 0x10d5c7d1 */
  if (!C.zf) goto L_10d5c7d1;
  /* 10d5c7cf jmp 0x10d5c7d3 */
  goto L_10d5c7d3;
L_10d5c7d1:;
  /* 10d5c7d1 jmp 0x10d5c7a3 */
  goto L_10d5c7a3;
L_10d5c7d3:;
  /* 10d5c7d3 pop ebp */
  EBP = (pop32());
  /* 10d5c7d4 ret  */
  ESPCHK(0x10d5c7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7e0 @ 0x10d5c7e0 (74 bytes, 31 insns) */
void f_10d5c7e0(void) {
  FTRACE(0x10d5c7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5c7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5c7e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5c7e3 push ecx */
  push32((uint32_t)(ECX));
L_10d5c7e4:;
  /* 10d5c7e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5c7e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5c7ea sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5c7ed mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10d5c7f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5c7f2 jle 0x10d5c826 */
  if ((C.zf||C.sf!=C.of)) goto L_10d5c826;
  /* 10d5c7f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d5c7f7 push edx */
  push32((uint32_t)(EDX));
  /* 10d5c7f8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5c7fb push eax */
  push32((uint32_t)(EAX));
  /* 10d5c7fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c7ff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d5c802 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d5c805 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c808 push eax */
  push32((uint32_t)(EAX));
  /* 10d5c809 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c80c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c80f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10d5c812 call 0x10d5c720 */
  push32(0x10d5c817u); f_10d5c720();
  /* 10d5c817 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c81a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d5c81d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c820 jne 0x10d5c824 */
  if (!C.zf) goto L_10d5c824;
  /* 10d5c822 jmp 0x10d5c826 */
  goto L_10d5c826;
L_10d5c824:;
  /* 10d5c824 jmp 0x10d5c7e4 */
  goto L_10d5c7e4;
L_10d5c826:;
  /* 10d5c826 mov esp, ebp */
  ESP = (EBP);
  /* 10d5c828 pop ebp */
  EBP = (pop32());
  /* 10d5c829 ret  */
  ESPCHK(0x10d5c7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c830 @ 0x10d5c830 (26 bytes, 12 insns) */
void f_10d5c830(void) {
  FTRACE(0x10d5c830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5c830 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5c831 mov ebp, esp */
  EBP = (ESP);
  /* 10d5c833 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c836 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d5c838 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c83b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c83e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d5c840 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c843 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d5c845 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10d5c848 pop ebp */
  EBP = (pop32());
  /* 10d5c849 ret  */
  ESPCHK(0x10d5c830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c850 @ 0x10d5c850 (31 bytes, 14 insns) */
void f_10d5c850(void) {
  FTRACE(0x10d5c850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5c850 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5c851 mov ebp, esp */
  EBP = (ESP);
  /* 10d5c853 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c856 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d5c858 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c85b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c85e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d5c860 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c863 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d5c865 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5c868 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10d5c86a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d5c86d pop ebp */
  EBP = (pop32());
  /* 10d5c86e ret  */
  ESPCHK(0x10d5c850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c870 @ 0x10d5c870 (27 bytes, 12 insns) */
void f_10d5c870(void) {
  FTRACE(0x10d5c870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5c870 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5c871 mov ebp, esp */
  EBP = (ESP);
  /* 10d5c873 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c876 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d5c878 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c87b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c87e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d5c880 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c883 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d5c885 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10d5c889 pop ebp */
  EBP = (pop32());
  /* 10d5c88a ret  */
  ESPCHK(0x10d5c870u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10d5c890 (145 bytes, 42 insns) */
void f_10d5c890(void) {
  FTRACE(0x10d5c890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5c890 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5c891 mov ebp, esp */
  EBP = (ESP);
  /* 10d5c893 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5c894 call 0x10d5c940 */
  push32(0x10d5c899u); f_10d5c940();
  /* 10d5c899 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c89c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d5c89e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d5c8a5 jmp 0x10d5c8b0 */
  goto L_10d5c8b0;
L_10d5c8a7:;
  /* 10d5c8a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c8aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c8ad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d5c8b0:;
  /* 10d5c8b0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c8b4 jae 0x10d5c8da */
  if (!C.cf) goto L_10d5c8da;
  /* 10d5c8b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c8b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c8bc cmp ecx, dword ptr [eax*8 + 0x10d7efb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10d7efb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c8c3 jne 0x10d5c8d8 */
  if (!C.zf) goto L_10d5c8d8;
  /* 10d5c8c5 call 0x10d5c930 */
  push32(0x10d5c8cau); f_10d5c930();
  /* 10d5c8ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5c8cd mov ecx, dword ptr [edx*8 + 0x10d7efbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10d7efbc)));
  /* 10d5c8d4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d5c8d6 jmp 0x10d5c91d */
  goto L_10d5c91d;
L_10d5c8d8:;
  /* 10d5c8d8 jmp 0x10d5c8a7 */
  goto L_10d5c8a7;
L_10d5c8da:;
  /* 10d5c8da cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c8de jb 0x10d5c8f3 */
  if (C.cf) goto L_10d5c8f3;
  /* 10d5c8e0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c8e4 ja 0x10d5c8f3 */
  if ((!C.cf&&!C.zf)) goto L_10d5c8f3;
  /* 10d5c8e6 call 0x10d5c930 */
  push32(0x10d5c8ebu); f_10d5c930();
  /* 10d5c8eb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10d5c8f1 jmp 0x10d5c91d */
  goto L_10d5c91d;
L_10d5c8f3:;
  /* 10d5c8f3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c8fa jb 0x10d5c912 */
  if (C.cf) goto L_10d5c912;
  /* 10d5c8fc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c903 ja 0x10d5c912 */
  if ((!C.cf&&!C.zf)) goto L_10d5c912;
  /* 10d5c905 call 0x10d5c930 */
  push32(0x10d5c90au); f_10d5c930();
  /* 10d5c90a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10d5c910 jmp 0x10d5c91d */
  goto L_10d5c91d;
L_10d5c912:;
  /* 10d5c912 call 0x10d5c930 */
  push32(0x10d5c917u); f_10d5c930();
  /* 10d5c917 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10d5c91d:;
  /* 10d5c91d mov esp, ebp */
  ESP = (EBP);
  /* 10d5c91f pop ebp */
  EBP = (pop32());
  /* 10d5c920 ret  */
  ESPCHK(0x10d5c890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c930 @ 0x10d5c930 (13 bytes, 6 insns) */
void f_10d5c930(void) {
  FTRACE(0x10d5c930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5c930 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5c931 mov ebp, esp */
  EBP = (ESP);
  /* 10d5c933 call 0x10d544a0 */
  push32(0x10d5c938u); f_10d544a0();
  /* 10d5c938 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c93b pop ebp */
  EBP = (pop32());
  /* 10d5c93c ret  */
  ESPCHK(0x10d5c930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c940 @ 0x10d5c940 (13 bytes, 6 insns) */
void f_10d5c940(void) {
  FTRACE(0x10d5c940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5c940 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5c941 mov ebp, esp */
  EBP = (ESP);
  /* 10d5c943 call 0x10d544a0 */
  push32(0x10d5c948u); f_10d544a0();
  /* 10d5c948 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c94b pop ebp */
  EBP = (pop32());
  /* 10d5c94c ret  */
  ESPCHK(0x10d5c940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c950 @ 0x10d5c950 (664 bytes, 268 insns) [15 switch table(s)] */
void f_10d5c950(void) {
  FTRACE(0x10d5c950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5c950 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5c951 mov ebp, esp */
  EBP = (ESP);
  /* 10d5c953 push edi */
  push32((uint32_t)(EDI));
  /* 10d5c954 push esi */
  push32((uint32_t)(ESI));
  /* 10d5c955 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5c958 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5c95b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5c95e mov eax, ecx */
  EAX = (ECX);
  /* 10d5c960 mov edx, ecx */
  EDX = (ECX);
  /* 10d5c962 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c964 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c966 jbe 0x10d5c970 */
  if ((C.cf||C.zf)) goto L_10d5c970;
  /* 10d5c968 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c96a jb 0x10d5cae8 */
  if (C.cf) goto L_10d5cae8;
L_10d5c970:;
  /* 10d5c970 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10d5c976 jne 0x10d5c98c */
  if (!C.zf) goto L_10d5c98c;
  /* 10d5c978 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d5c97b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5c97e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c981 jb 0x10d5c9ac */
  if (C.cf) goto L_10d5c9ac;
  /* 10d5c983 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d5c985 jmp dword ptr [edx*4 + 0x10d5ca98] */
  switch (EDX) {
    case 0: goto L_10d5caa8;
    case 1: goto L_10d5cab0;
    case 2: goto L_10d5cabc;
    case 3: goto L_10d5cad0;
    default: x86_unimpl("switch@0x10d5c985 out of table"); return;
  }
L_10d5c98c:;
  /* 10d5c98c mov eax, edi */
  EAX = (EDI);
  /* 10d5c98e mov edx, 3 */
  EDX = (0x3u);
  /* 10d5c993 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5c996 jb 0x10d5c9a4 */
  if (C.cf) goto L_10d5c9a4;
  /* 10d5c998 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5c99b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c99d jmp dword ptr [eax*4 + 0x10d5c9b0] */
  switch (EAX) {
    case 1: goto L_10d5c9c0;
    case 2: goto L_10d5c9ec;
    case 3: goto L_10d5ca10;
    default: x86_unimpl("switch@0x10d5c99d out of table"); return;
  }
L_10d5c9a4:;
  /* 10d5c9a4 jmp dword ptr [ecx*4 + 0x10d5caa8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10d5caa8)))); return;
  /* 10d5c9ab nop  */
  /* nop */
L_10d5c9ac:;
  /* 10d5c9ac jmp dword ptr [ecx*4 + 0x10d5ca2c] */
  switch (ECX) {
    case 0: goto L_10d5ca8f;
    case 1: goto L_10d5ca7c;
    case 2: goto L_10d5ca74;
    case 3: goto L_10d5ca6c;
    case 4: goto L_10d5ca64;
    case 5: goto L_10d5ca5c;
    case 6: goto L_10d5ca54;
    case 7: goto L_10d5ca4c;
    default: x86_unimpl("switch@0x10d5c9ac out of table"); return;
  }
  /* 10d5c9b3 nop  */
  /* nop */
L_10d5c9c0:;
  /* 10d5c9c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5c9c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d5c9c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d5c9c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d5c9c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d5c9cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d5c9cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d5c9d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d5c9d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c9d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c9db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5c9de jb 0x10d5c9ac */
  if (C.cf) goto L_10d5c9ac;
  /* 10d5c9e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d5c9e2 jmp dword ptr [edx*4 + 0x10d5ca98] */
  switch (EDX) {
    case 0: goto L_10d5caa8;
    case 1: goto L_10d5cab0;
    case 2: goto L_10d5cabc;
    case 3: goto L_10d5cad0;
    default: x86_unimpl("switch@0x10d5c9e2 out of table"); return;
  }
  /* 10d5c9e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d5c9ec:;
  /* 10d5c9ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5c9ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d5c9f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d5c9f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d5c9f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d5c9f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d5c9fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5c9fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ca01 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ca04 jb 0x10d5c9ac */
  if (C.cf) goto L_10d5c9ac;
  /* 10d5ca06 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d5ca08 jmp dword ptr [edx*4 + 0x10d5ca98] */
  switch (EDX) {
    case 0: goto L_10d5caa8;
    case 1: goto L_10d5cab0;
    case 2: goto L_10d5cabc;
    case 3: goto L_10d5cad0;
    default: x86_unimpl("switch@0x10d5ca08 out of table"); return;
  }
  /* 10d5ca0f nop  */
  /* nop */
L_10d5ca10:;
  /* 10d5ca10 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5ca12 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d5ca14 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d5ca16 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d5ca17 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d5ca1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d5ca1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ca1e jb 0x10d5c9ac */
  if (C.cf) goto L_10d5c9ac;
  /* 10d5ca20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d5ca22 jmp dword ptr [edx*4 + 0x10d5ca98] */
  switch (EDX) {
    case 0: goto L_10d5caa8;
    case 1: goto L_10d5cab0;
    case 2: goto L_10d5cabc;
    case 3: goto L_10d5cad0;
    default: x86_unimpl("switch@0x10d5ca22 out of table"); return;
  }
  /* 10d5ca29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d5ca4c:;
  /* 10d5ca4c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10d5ca50 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10d5ca54:;
  /* 10d5ca54 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10d5ca58 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10d5ca5c:;
  /* 10d5ca5c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10d5ca60 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10d5ca64:;
  /* 10d5ca64 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10d5ca68 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10d5ca6c:;
  /* 10d5ca6c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10d5ca70 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10d5ca74:;
  /* 10d5ca74 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10d5ca78 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10d5ca7c:;
  /* 10d5ca7c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10d5ca80 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10d5ca84 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10d5ca8b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ca8d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10d5ca8f:;
  /* 10d5ca8f jmp dword ptr [edx*4 + 0x10d5ca98] */
  switch (EDX) {
    case 0: goto L_10d5caa8;
    case 1: goto L_10d5cab0;
    case 2: goto L_10d5cabc;
    case 3: goto L_10d5cad0;
    default: x86_unimpl("switch@0x10d5ca8f out of table"); return;
  }
  /* 10d5ca96 mov edi, edi */
  EDI = (EDI);
L_10d5caa8:;
  /* 10d5caa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5caab pop esi */
  ESI = (pop32());
  /* 10d5caac pop edi */
  EDI = (pop32());
  /* 10d5caad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d5caae ret  */
  ESPCHK(0x10d5c950u, _esp0);
  ESP += 4; return;
  /* 10d5caaf nop  */
  /* nop */
L_10d5cab0:;
  /* 10d5cab0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d5cab2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d5cab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5cab7 pop esi */
  ESI = (pop32());
  /* 10d5cab8 pop edi */
  EDI = (pop32());
  /* 10d5cab9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d5caba ret  */
  ESPCHK(0x10d5c950u, _esp0);
  ESP += 4; return;
  /* 10d5cabb nop  */
  /* nop */
L_10d5cabc:;
  /* 10d5cabc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d5cabe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d5cac0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d5cac3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d5cac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5cac9 pop esi */
  ESI = (pop32());
  /* 10d5caca pop edi */
  EDI = (pop32());
  /* 10d5cacb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d5cacc ret  */
  ESPCHK(0x10d5c950u, _esp0);
  ESP += 4; return;
  /* 10d5cacd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d5cad0:;
  /* 10d5cad0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d5cad2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d5cad4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d5cad7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d5cada mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d5cadd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d5cae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5cae3 pop esi */
  ESI = (pop32());
  /* 10d5cae4 pop edi */
  EDI = (pop32());
  /* 10d5cae5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d5cae6 ret  */
  ESPCHK(0x10d5c950u, _esp0);
  ESP += 4; return;
  /* 10d5cae7 nop  */
  /* nop */
L_10d5cae8:;
  /* 10d5cae8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10d5caec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10d5caf0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10d5caf6 jne 0x10d5cb1c */
  if (!C.zf) goto L_10d5cb1c;
  /* 10d5caf8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d5cafb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5cafe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5cb01 jb 0x10d5cb10 */
  if (C.cf) goto L_10d5cb10;
  /* 10d5cb03 std  */
  C.df=1;
  /* 10d5cb04 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d5cb06 cld  */
  C.df=0;
  /* 10d5cb07 jmp dword ptr [edx*4 + 0x10d5cc30] */
  switch (EDX) {
    case 0: goto L_10d5cc40;
    case 1: goto L_10d5cc48;
    case 2: goto L_10d5cc58;
    case 3: goto L_10d5cc6c;
    default: x86_unimpl("switch@0x10d5cb07 out of table"); return;
  }
  /* 10d5cb0e mov edi, edi */
  EDI = (EDI);
L_10d5cb10:;
  /* 10d5cb10 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d5cb12 jmp dword ptr [ecx*4 + 0x10d5cbe0] */
  switch (ECX) {
    case 0: goto L_10d5cc27;
    default: x86_unimpl("switch@0x10d5cb12 out of table"); return;
  }
  /* 10d5cb19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d5cb1c:;
  /* 10d5cb1c mov eax, edi */
  EAX = (EDI);
  /* 10d5cb1e mov edx, 3 */
  EDX = (0x3u);
  /* 10d5cb23 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5cb26 jb 0x10d5cb34 */
  if (C.cf) goto L_10d5cb34;
  /* 10d5cb28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5cb2b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5cb2d jmp dword ptr [eax*4 + 0x10d5cb38] */
  switch (EAX) {
    case 1: goto L_10d5cb48;
    case 2: goto L_10d5cb68;
    case 3: goto L_10d5cb90;
    default: x86_unimpl("switch@0x10d5cb2d out of table"); return;
  }
L_10d5cb34:;
  /* 10d5cb34 jmp dword ptr [ecx*4 + 0x10d5cc30] */
  switch (ECX) {
    case 0: goto L_10d5cc40;
    case 1: goto L_10d5cc48;
    case 2: goto L_10d5cc58;
    case 3: goto L_10d5cc6c;
    default: x86_unimpl("switch@0x10d5cb34 out of table"); return;
  }
  /* 10d5cb3b nop  */
  /* nop */
L_10d5cb48:;
  /* 10d5cb48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d5cb4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5cb4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d5cb50 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10d5cb51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d5cb54 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10d5cb55 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5cb58 jb 0x10d5cb10 */
  if (C.cf) goto L_10d5cb10;
  /* 10d5cb5a std  */
  C.df=1;
  /* 10d5cb5b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d5cb5d cld  */
  C.df=0;
  /* 10d5cb5e jmp dword ptr [edx*4 + 0x10d5cc30] */
  switch (EDX) {
    case 0: goto L_10d5cc40;
    case 1: goto L_10d5cc48;
    case 2: goto L_10d5cc58;
    case 3: goto L_10d5cc6c;
    default: x86_unimpl("switch@0x10d5cb5e out of table"); return;
  }
  /* 10d5cb65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d5cb68:;
  /* 10d5cb68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d5cb6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5cb6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d5cb70 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d5cb73 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d5cb76 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d5cb79 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5cb7c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5cb7f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5cb82 jb 0x10d5cb10 */
  if (C.cf) goto L_10d5cb10;
  /* 10d5cb84 std  */
  C.df=1;
  /* 10d5cb85 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d5cb87 cld  */
  C.df=0;
  /* 10d5cb88 jmp dword ptr [edx*4 + 0x10d5cc30] */
  switch (EDX) {
    case 0: goto L_10d5cc40;
    case 1: goto L_10d5cc48;
    case 2: goto L_10d5cc58;
    case 3: goto L_10d5cc6c;
    default: x86_unimpl("switch@0x10d5cb88 out of table"); return;
  }
  /* 10d5cb8f nop  */
  /* nop */
L_10d5cb90:;
  /* 10d5cb90 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d5cb93 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5cb95 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d5cb98 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d5cb9b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d5cb9e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d5cba1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d5cba4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d5cba7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5cbaa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5cbad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5cbb0 jb 0x10d5cb10 */
  if (C.cf) goto L_10d5cb10;
  /* 10d5cbb6 std  */
  C.df=1;
  /* 10d5cbb7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d5cbb9 cld  */
  C.df=0;
  /* 10d5cbba jmp dword ptr [edx*4 + 0x10d5cc30] */
  switch (EDX) {
    case 0: goto L_10d5cc40;
    case 1: goto L_10d5cc48;
    case 2: goto L_10d5cc58;
    case 3: goto L_10d5cc6c;
    default: x86_unimpl("switch@0x10d5cbba out of table"); return;
  }
  /* 10d5cbc1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10d5cbc4 in al, 0xcb */
  x86_unimpl("in @ 0x10d5cbc4");
  /* 10d5cbc6 aad 0x10 */
  x86_unimpl("aad @ 0x10d5cbc6");
  /* 10d5cbc8 in al, dx */
  x86_unimpl("in @ 0x10d5cbc8");
  /* 10d5cbc9 retf  */
  x86_unimpl("retf @ 0x10d5cbc9");
  /* 10d5cbca aad 0x10 */
  x86_unimpl("aad @ 0x10d5cbca");
  /* 10d5cbcc hlt  */
  x86_unimpl("hlt @ 0x10d5cbcc");
  /* 10d5cbcd retf  */
  x86_unimpl("retf @ 0x10d5cbcd");
  /* 10d5cbce aad 0x10 */
  x86_unimpl("aad @ 0x10d5cbce");
  /* 10d5cbd0 cld  */
  C.df=0;
  /* 10d5cbd1 retf  */
  x86_unimpl("retf @ 0x10d5cbd1");
  /* 10d5cbd2 aad 0x10 */
  x86_unimpl("aad @ 0x10d5cbd2");
  /* 10d5cbd4 add al, 0xcc */
  { uint32_t _a=(AL),_b=(0xccu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d5cbd6 aad 0x10 */
  x86_unimpl("aad @ 0x10d5cbd6");
  /* 10d5cbd8 or al, 0xcc */
  { uint32_t _r=(AL)|(0xccu); AL = (_r); fl_logic(_r,8); }
  /* 10d5cbda aad 0x10 */
  x86_unimpl("aad @ 0x10d5cbda");
  /* 10d5cbdc adc al, 0xcc */
  { uint32_t _a=(AL),_b=(0xccu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d5cbde aad 0x10 */
  x86_unimpl("aad @ 0x10d5cbde");
  /* 10d5cbe4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10d5cbe8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10d5cbec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10d5cbf0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10d5cbf4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10d5cbf8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10d5cbfc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10d5cc00 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10d5cc04 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10d5cc08 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10d5cc0c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10d5cc10 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10d5cc14 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10d5cc18 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10d5cc1c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10d5cc23 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5cc25 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10d5cc27:;
  /* 10d5cc27 jmp dword ptr [edx*4 + 0x10d5cc30] */
  switch (EDX) {
    case 0: goto L_10d5cc40;
    case 1: goto L_10d5cc48;
    case 2: goto L_10d5cc58;
    case 3: goto L_10d5cc6c;
    default: x86_unimpl("switch@0x10d5cc27 out of table"); return;
  }
  /* 10d5cc2e mov edi, edi */
  EDI = (EDI);
L_10d5cc40:;
  /* 10d5cc40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5cc43 pop esi */
  ESI = (pop32());
  /* 10d5cc44 pop edi */
  EDI = (pop32());
  /* 10d5cc45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d5cc46 ret  */
  ESPCHK(0x10d5c950u, _esp0);
  ESP += 4; return;
  /* 10d5cc47 nop  */
  /* nop */
L_10d5cc48:;
  /* 10d5cc48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d5cc4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d5cc4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5cc51 pop esi */
  ESI = (pop32());
  /* 10d5cc52 pop edi */
  EDI = (pop32());
  /* 10d5cc53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d5cc54 ret  */
  ESPCHK(0x10d5c950u, _esp0);
  ESP += 4; return;
  /* 10d5cc55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d5cc58:;
  /* 10d5cc58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d5cc5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d5cc5e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d5cc61 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d5cc64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5cc67 pop esi */
  ESI = (pop32());
  /* 10d5cc68 pop edi */
  EDI = (pop32());
  /* 10d5cc69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d5cc6a ret  */
  ESPCHK(0x10d5c950u, _esp0);
  ESP += 4; return;
  /* 10d5cc6b nop  */
  /* nop */
L_10d5cc6c:;
  /* 10d5cc6c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d5cc6f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d5cc72 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d5cc75 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d5cc78 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d5cc7b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d5cc7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5cc81 pop esi */
  ESI = (pop32());
  /* 10d5cc82 pop edi */
  EDI = (pop32());
  /* 10d5cc83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d5cc84 ret  */
  ESPCHK(0x10d5c950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc90 @ 0x10d5cc90 (421 bytes, 148 insns) */
void f_10d5cc90(void) {
  FTRACE(0x10d5cc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5cc90 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5cc91 mov ebp, esp */
  EBP = (ESP);
  /* 10d5cc93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d5cc95 push 0x10d7c088 */
  push32((uint32_t)(0x10d7c088u));
  /* 10d5cc9a push 0x10d5db68 */
  push32((uint32_t)(0x10d5db68u));
  /* 10d5cc9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10d5cca5 push eax */
  push32((uint32_t)(EAX));
  /* 10d5cca6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10d5ccad add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ccb0 push ebx */
  push32((uint32_t)(EBX));
  /* 10d5ccb1 push esi */
  push32((uint32_t)(ESI));
  /* 10d5ccb2 push edi */
  push32((uint32_t)(EDI));
  /* 10d5ccb3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d5ccb6 cmp dword ptr [0x10d806f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d806f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ccbd jne 0x10d5cd0e */
  if (!C.zf) goto L_10d5cd0e;
  /* 10d5ccbf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10d5ccc2 push eax */
  push32((uint32_t)(EAX));
  /* 10d5ccc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5ccc5 push 0x10d7c084 */
  push32((uint32_t)(0x10d7c084u));
  /* 10d5ccca push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5cccc call dword ptr [0x10d832c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832c4))), 0x10d5ccd2u);
  /* 10d5ccd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5ccd4 je 0x10d5cce2 */
  if (C.zf) goto L_10d5cce2;
  /* 10d5ccd6 mov dword ptr [0x10d806f4], 1 */
  w32((uint32_t)(0x10d806f4), (0x1u));
  /* 10d5cce0 jmp 0x10d5cd0e */
  goto L_10d5cd0e;
L_10d5cce2:;
  /* 10d5cce2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10d5cce5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5cce6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5cce8 push 0x10d7c080 */
  push32((uint32_t)(0x10d7c080u));
  /* 10d5cced push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5ccef push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5ccf1 call dword ptr [0x10d832d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832d4))), 0x10d5ccf7u);
  /* 10d5ccf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5ccf9 je 0x10d5cd07 */
  if (C.zf) goto L_10d5cd07;
  /* 10d5ccfb mov dword ptr [0x10d806f4], 2 */
  w32((uint32_t)(0x10d806f4), (0x2u));
  /* 10d5cd05 jmp 0x10d5cd0e */
  goto L_10d5cd0e;
L_10d5cd07:;
  /* 10d5cd07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5cd09 jmp 0x10d5ce38 */
  goto L_10d5ce38;
L_10d5cd0e:;
  /* 10d5cd0e cmp dword ptr [0x10d806f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10d806f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5cd15 jne 0x10d5cd45 */
  if (!C.zf) goto L_10d5cd45;
  /* 10d5cd17 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5cd1b jne 0x10d5cd26 */
  if (!C.zf) goto L_10d5cd26;
  /* 10d5cd1d mov edx, dword ptr [0x10d80700] */
  EDX = (r32((uint32_t)(0x10d80700)));
  /* 10d5cd23 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10d5cd26:;
  /* 10d5cd26 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d5cd29 push eax */
  push32((uint32_t)(EAX));
  /* 10d5cd2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5cd2d push ecx */
  push32((uint32_t)(ECX));
  /* 10d5cd2e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5cd31 push edx */
  push32((uint32_t)(EDX));
  /* 10d5cd32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5cd35 push eax */
  push32((uint32_t)(EAX));
  /* 10d5cd36 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d5cd39 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5cd3a call dword ptr [0x10d832d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832d4))), 0x10d5cd40u);
  /* 10d5cd40 jmp 0x10d5ce38 */
  goto L_10d5ce38;
L_10d5cd45:;
  /* 10d5cd45 cmp dword ptr [0x10d806f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d806f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5cd4c jne 0x10d5ce36 */
  if (!C.zf) goto L_10d5ce36;
  /* 10d5cd52 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5cd56 jne 0x10d5cd61 */
  if (!C.zf) goto L_10d5cd61;
  /* 10d5cd58 mov edx, dword ptr [0x10d80710] */
  EDX = (r32((uint32_t)(0x10d80710)));
  /* 10d5cd5e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10d5cd61:;
  /* 10d5cd61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5cd63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5cd65 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5cd68 push eax */
  push32((uint32_t)(EAX));
  /* 10d5cd69 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5cd6c push ecx */
  push32((uint32_t)(ECX));
  /* 10d5cd6d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d5cd70 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d5cd72 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5cd74 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5cd77 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5cd7a push edx */
  push32((uint32_t)(EDX));
  /* 10d5cd7b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d5cd7e push eax */
  push32((uint32_t)(EAX));
  /* 10d5cd7f call dword ptr [0x10d832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832cc))), 0x10d5cd85u);
  /* 10d5cd85 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d5cd88 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5cd8c jne 0x10d5cd95 */
  if (!C.zf) goto L_10d5cd95;
  /* 10d5cd8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5cd90 jmp 0x10d5ce38 */
  goto L_10d5ce38;
L_10d5cd95:;
  /* 10d5cd95 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d5cd9c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5cd9f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d5cda1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5cda4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d5cda6 call 0x10d57c00 */
  push32(0x10d5cdabu); f_10d57c00();
  /* 10d5cdab mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10d5cdae mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d5cdb1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d5cdb4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d5cdb7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5cdba shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10d5cdbc push edx */
  push32((uint32_t)(EDX));
  /* 10d5cdbd push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5cdbf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5cdc2 push eax */
  push32((uint32_t)(EAX));
  /* 10d5cdc3 call 0x10d587d0 */
  push32(0x10d5cdc8u); f_10d587d0();
  /* 10d5cdc8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5cdcb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d5cdd2 jmp 0x10d5cdeb */
  goto L_10d5cdeb;
  /* 10d5cdd4 mov eax, 1 */
  EAX = (0x1u);
  /* 10d5cdd9 ret  */
  ESPCHK(0x10d5cc90u, _esp0);
  ESP += 4; return;
  /* 10d5cdda mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5cddd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d5cde4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d5cdeb:;
  /* 10d5cdeb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5cdef jne 0x10d5cdf5 */
  if (!C.zf) goto L_10d5cdf5;
  /* 10d5cdf1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5cdf3 jmp 0x10d5ce38 */
  goto L_10d5ce38;
L_10d5cdf5:;
  /* 10d5cdf5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5cdf8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5cdf9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5cdfc push edx */
  push32((uint32_t)(EDX));
  /* 10d5cdfd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5ce00 push eax */
  push32((uint32_t)(EAX));
  /* 10d5ce01 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5ce04 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5ce05 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5ce07 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d5ce0a push edx */
  push32((uint32_t)(EDX));
  /* 10d5ce0b call dword ptr [0x10d832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832cc))), 0x10d5ce11u);
  /* 10d5ce11 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d5ce14 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ce18 jne 0x10d5ce1e */
  if (!C.zf) goto L_10d5ce1e;
  /* 10d5ce1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ce1c jmp 0x10d5ce38 */
  goto L_10d5ce38;
L_10d5ce1e:;
  /* 10d5ce1e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d5ce21 push eax */
  push32((uint32_t)(EAX));
  /* 10d5ce22 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d5ce25 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5ce26 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5ce29 push edx */
  push32((uint32_t)(EDX));
  /* 10d5ce2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ce2d push eax */
  push32((uint32_t)(EAX));
  /* 10d5ce2e call dword ptr [0x10d832c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832c4))), 0x10d5ce34u);
  /* 10d5ce34 jmp 0x10d5ce38 */
  goto L_10d5ce38;
L_10d5ce36:;
  /* 10d5ce36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d5ce38:;
  /* 10d5ce38 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10d5ce3b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5ce3e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10d5ce45 pop edi */
  EDI = (pop32());
  /* 10d5ce46 pop esi */
  ESI = (pop32());
  /* 10d5ce47 pop ebx */
  EBX = (pop32());
  /* 10d5ce48 mov esp, ebp */
  ESP = (EBP);
  /* 10d5ce4a pop ebp */
  EBP = (pop32());
  /* 10d5ce4b ret  */
  ESPCHK(0x10d5cc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce50 @ 0x10d5ce50 (727 bytes, 263 insns) */
void f_10d5ce50(void) {
  FTRACE(0x10d5ce50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5ce50 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5ce51 mov ebp, esp */
  EBP = (ESP);
  /* 10d5ce53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d5ce55 push 0x10d7c098 */
  push32((uint32_t)(0x10d7c098u));
  /* 10d5ce5a push 0x10d5db68 */
  push32((uint32_t)(0x10d5db68u));
  /* 10d5ce5f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10d5ce65 push eax */
  push32((uint32_t)(EAX));
  /* 10d5ce66 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10d5ce6d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ce70 push ebx */
  push32((uint32_t)(EBX));
  /* 10d5ce71 push esi */
  push32((uint32_t)(ESI));
  /* 10d5ce72 push edi */
  push32((uint32_t)(EDI));
  /* 10d5ce73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d5ce76 cmp dword ptr [0x10d80718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ce7d jne 0x10d5ced6 */
  if (!C.zf) goto L_10d5ced6;
  /* 10d5ce7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5ce81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5ce83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5ce85 push 0x10d7c084 */
  push32((uint32_t)(0x10d7c084u));
  /* 10d5ce8a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d5ce8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5ce91 call dword ptr [0x10d832c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832c8))), 0x10d5ce97u);
  /* 10d5ce97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5ce99 je 0x10d5cea7 */
  if (C.zf) goto L_10d5cea7;
  /* 10d5ce9b mov dword ptr [0x10d80718], 1 */
  w32((uint32_t)(0x10d80718), (0x1u));
  /* 10d5cea5 jmp 0x10d5ced6 */
  goto L_10d5ced6;
L_10d5cea7:;
  /* 10d5cea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5cea9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5ceab push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5cead push 0x10d7c080 */
  push32((uint32_t)(0x10d7c080u));
  /* 10d5ceb2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d5ceb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5ceb9 call dword ptr [0x10d832c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832c0))), 0x10d5cebfu);
  /* 10d5cebf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5cec1 je 0x10d5cecf */
  if (C.zf) goto L_10d5cecf;
  /* 10d5cec3 mov dword ptr [0x10d80718], 2 */
  w32((uint32_t)(0x10d80718), (0x2u));
  /* 10d5cecd jmp 0x10d5ced6 */
  goto L_10d5ced6;
L_10d5cecf:;
  /* 10d5cecf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ced1 jmp 0x10d5d141 */
  goto L_10d5d141;
L_10d5ced6:;
  /* 10d5ced6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ceda jle 0x10d5ceef */
  if ((C.zf||C.sf!=C.of)) goto L_10d5ceef;
  /* 10d5cedc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d5cedf push eax */
  push32((uint32_t)(EAX));
  /* 10d5cee0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5cee3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5cee4 call 0x10d5d160 */
  push32(0x10d5cee9u); f_10d5d160();
  /* 10d5cee9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ceec mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10d5ceef:;
  /* 10d5ceef cmp dword ptr [0x10d80718], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10d80718))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5cef6 jne 0x10d5cf1b */
  if (!C.zf) goto L_10d5cf1b;
  /* 10d5cef8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d5cefb push edx */
  push32((uint32_t)(EDX));
  /* 10d5cefc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d5ceff push eax */
  push32((uint32_t)(EAX));
  /* 10d5cf00 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d5cf03 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5cf04 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5cf07 push edx */
  push32((uint32_t)(EDX));
  /* 10d5cf08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5cf0b push eax */
  push32((uint32_t)(EAX));
  /* 10d5cf0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5cf0f push ecx */
  push32((uint32_t)(ECX));
  /* 10d5cf10 call dword ptr [0x10d832c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832c0))), 0x10d5cf16u);
  /* 10d5cf16 jmp 0x10d5d141 */
  goto L_10d5d141;
L_10d5cf1b:;
  /* 10d5cf1b cmp dword ptr [0x10d80718], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d80718))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5cf22 jne 0x10d5d13f */
  if (!C.zf) goto L_10d5d13f;
  /* 10d5cf28 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5cf2c jne 0x10d5cf37 */
  if (!C.zf) goto L_10d5cf37;
  /* 10d5cf2e mov edx, dword ptr [0x10d80710] */
  EDX = (r32((uint32_t)(0x10d80710)));
  /* 10d5cf34 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10d5cf37:;
  /* 10d5cf37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5cf39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5cf3b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d5cf3e push eax */
  push32((uint32_t)(EAX));
  /* 10d5cf3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5cf42 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5cf43 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10d5cf46 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d5cf48 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5cf4a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5cf4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5cf50 push edx */
  push32((uint32_t)(EDX));
  /* 10d5cf51 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d5cf54 push eax */
  push32((uint32_t)(EAX));
  /* 10d5cf55 call dword ptr [0x10d832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832cc))), 0x10d5cf5bu);
  /* 10d5cf5b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d5cf5e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5cf62 jne 0x10d5cf6b */
  if (!C.zf) goto L_10d5cf6b;
  /* 10d5cf64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5cf66 jmp 0x10d5d141 */
  goto L_10d5d141;
L_10d5cf6b:;
  /* 10d5cf6b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d5cf72 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d5cf75 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d5cf77 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5cf7a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d5cf7c call 0x10d57c00 */
  push32(0x10d5cf81u); f_10d57c00();
  /* 10d5cf81 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10d5cf84 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d5cf87 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d5cf8a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d5cf8d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d5cf94 jmp 0x10d5cfad */
  goto L_10d5cfad;
  /* 10d5cf96 mov eax, 1 */
  EAX = (0x1u);
  /* 10d5cf9b ret  */
  ESPCHK(0x10d5ce50u, _esp0);
  ESP += 4; return;
  /* 10d5cf9c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5cf9f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d5cfa6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d5cfad:;
  /* 10d5cfad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5cfb1 jne 0x10d5cfba */
  if (!C.zf) goto L_10d5cfba;
  /* 10d5cfb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5cfb5 jmp 0x10d5d141 */
  goto L_10d5d141;
L_10d5cfba:;
  /* 10d5cfba mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d5cfbd push edx */
  push32((uint32_t)(EDX));
  /* 10d5cfbe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5cfc1 push eax */
  push32((uint32_t)(EAX));
  /* 10d5cfc2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d5cfc5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5cfc6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5cfc9 push edx */
  push32((uint32_t)(EDX));
  /* 10d5cfca push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5cfcc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d5cfcf push eax */
  push32((uint32_t)(EAX));
  /* 10d5cfd0 call dword ptr [0x10d832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832cc))), 0x10d5cfd6u);
  /* 10d5cfd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5cfd8 jne 0x10d5cfe1 */
  if (!C.zf) goto L_10d5cfe1;
  /* 10d5cfda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5cfdc jmp 0x10d5d141 */
  goto L_10d5d141;
L_10d5cfe1:;
  /* 10d5cfe1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5cfe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5cfe5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d5cfe8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5cfe9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5cfec push edx */
  push32((uint32_t)(EDX));
  /* 10d5cfed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5cff0 push eax */
  push32((uint32_t)(EAX));
  /* 10d5cff1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5cff4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5cff5 call dword ptr [0x10d832c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832c8))), 0x10d5cffbu);
  /* 10d5cffb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d5cffe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d002 jne 0x10d5d00b */
  if (!C.zf) goto L_10d5d00b;
  /* 10d5d004 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d006 jmp 0x10d5d141 */
  goto L_10d5d141;
L_10d5d00b:;
  /* 10d5d00b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5d00e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5d014 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5d016 je 0x10d5d05b */
  if (C.zf) goto L_10d5d05b;
  /* 10d5d018 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d01c je 0x10d5d056 */
  if (C.zf) goto L_10d5d056;
  /* 10d5d01e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d5d021 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d024 jle 0x10d5d02d */
  if ((C.zf||C.sf!=C.of)) goto L_10d5d02d;
  /* 10d5d026 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d028 jmp 0x10d5d141 */
  goto L_10d5d141;
L_10d5d02d:;
  /* 10d5d02d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d5d030 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d031 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d5d034 push edx */
  push32((uint32_t)(EDX));
  /* 10d5d035 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d5d038 push eax */
  push32((uint32_t)(EAX));
  /* 10d5d039 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5d03c push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d03d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5d040 push edx */
  push32((uint32_t)(EDX));
  /* 10d5d041 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d044 push eax */
  push32((uint32_t)(EAX));
  /* 10d5d045 call dword ptr [0x10d832c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832c8))), 0x10d5d04bu);
  /* 10d5d04b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5d04d jne 0x10d5d056 */
  if (!C.zf) goto L_10d5d056;
  /* 10d5d04f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d051 jmp 0x10d5d141 */
  goto L_10d5d141;
L_10d5d056:;
  /* 10d5d056 jmp 0x10d5d13a */
  goto L_10d5d13a;
L_10d5d05b:;
  /* 10d5d05b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d5d05e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10d5d061 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d5d068 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d5d06b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d5d06d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d070 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d5d072 call 0x10d57c00 */
  push32(0x10d5d077u); f_10d57c00();
  /* 10d5d077 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10d5d07a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d5d07d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d5d080 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d5d083 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d5d08a jmp 0x10d5d0a3 */
  goto L_10d5d0a3;
  /* 10d5d08c mov eax, 1 */
  EAX = (0x1u);
  /* 10d5d091 ret  */
  ESPCHK(0x10d5ce50u, _esp0);
  ESP += 4; return;
  /* 10d5d092 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5d095 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d5d09c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d5d0a3:;
  /* 10d5d0a3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d0a7 jne 0x10d5d0b0 */
  if (!C.zf) goto L_10d5d0b0;
  /* 10d5d0a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d0ab jmp 0x10d5d141 */
  goto L_10d5d141;
L_10d5d0b0:;
  /* 10d5d0b0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d5d0b3 push eax */
  push32((uint32_t)(EAX));
  /* 10d5d0b4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5d0b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d0b8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d5d0bb push edx */
  push32((uint32_t)(EDX));
  /* 10d5d0bc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5d0bf push eax */
  push32((uint32_t)(EAX));
  /* 10d5d0c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5d0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d0c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d0c7 push edx */
  push32((uint32_t)(EDX));
  /* 10d5d0c8 call dword ptr [0x10d832c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832c8))), 0x10d5d0ceu);
  /* 10d5d0ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5d0d0 jne 0x10d5d0d6 */
  if (!C.zf) goto L_10d5d0d6;
  /* 10d5d0d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d0d4 jmp 0x10d5d141 */
  goto L_10d5d141;
L_10d5d0d6:;
  /* 10d5d0d6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d0da jne 0x10d5d10a */
  if (!C.zf) goto L_10d5d10a;
  /* 10d5d0dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5d0de push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5d0e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5d0e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5d0e4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d5d0e7 push eax */
  push32((uint32_t)(EAX));
  /* 10d5d0e8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5d0eb push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d0ec push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d5d0f1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d5d0f4 push edx */
  push32((uint32_t)(EDX));
  /* 10d5d0f5 call dword ptr [0x10d83364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83364))), 0x10d5d0fbu);
  /* 10d5d0fb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d5d0fe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d102 jne 0x10d5d108 */
  if (!C.zf) goto L_10d5d108;
  /* 10d5d104 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d106 jmp 0x10d5d141 */
  goto L_10d5d141;
L_10d5d108:;
  /* 10d5d108 jmp 0x10d5d13a */
  goto L_10d5d13a;
L_10d5d10a:;
  /* 10d5d10a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5d10c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5d10e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d5d111 push eax */
  push32((uint32_t)(EAX));
  /* 10d5d112 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d5d115 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d116 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d5d119 push edx */
  push32((uint32_t)(EDX));
  /* 10d5d11a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d5d11d push eax */
  push32((uint32_t)(EAX));
  /* 10d5d11e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d5d123 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d5d126 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d127 call dword ptr [0x10d83364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83364))), 0x10d5d12du);
  /* 10d5d12d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d5d130 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d134 jne 0x10d5d13a */
  if (!C.zf) goto L_10d5d13a;
  /* 10d5d136 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d138 jmp 0x10d5d141 */
  goto L_10d5d141;
L_10d5d13a:;
  /* 10d5d13a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d5d13d jmp 0x10d5d141 */
  goto L_10d5d141;
L_10d5d13f:;
  /* 10d5d13f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d5d141:;
  /* 10d5d141 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10d5d144 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5d147 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10d5d14e pop edi */
  EDI = (pop32());
  /* 10d5d14f pop esi */
  ESI = (pop32());
  /* 10d5d150 pop ebx */
  EBX = (pop32());
  /* 10d5d151 mov esp, ebp */
  ESP = (EBP);
  /* 10d5d153 pop ebp */
  EBP = (pop32());
  /* 10d5d154 ret  */
  ESPCHK(0x10d5ce50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d160 @ 0x10d5d160 (80 bytes, 32 insns) */
void f_10d5d160(void) {
  FTRACE(0x10d5d160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5d160 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5d161 mov ebp, esp */
  EBP = (ESP);
  /* 10d5d163 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5d166 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5d169 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d5d16c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d16f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d5d172:;
  /* 10d5d172 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5d175 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5d178 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5d17b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d5d17e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5d180 je 0x10d5d197 */
  if (C.zf) goto L_10d5d197;
  /* 10d5d182 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d185 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d5d188 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5d18a je 0x10d5d197 */
  if (C.zf) goto L_10d5d197;
  /* 10d5d18c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d18f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d192 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5d195 jmp 0x10d5d172 */
  goto L_10d5d172;
L_10d5d197:;
  /* 10d5d197 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d19a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d5d19d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5d19f jne 0x10d5d1a9 */
  if (!C.zf) goto L_10d5d1a9;
  /* 10d5d1a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d1a4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5d1a7 jmp 0x10d5d1ac */
  goto L_10d5d1ac;
L_10d5d1a9:;
  /* 10d5d1a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10d5d1ac:;
  /* 10d5d1ac mov esp, ebp */
  ESP = (EBP);
  /* 10d5d1ae pop ebp */
  EBP = (pop32());
  /* 10d5d1af ret  */
  ESPCHK(0x10d5d160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1b0 @ 0x10d5d1b0 (130 bytes, 43 insns) */
void f_10d5d1b0(void) {
  FTRACE(0x10d5d1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5d1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5d1b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5d1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d1b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d1b7 cmp eax, dword ptr [0x10d8201c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d8201c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d1bd jae 0x10d5d1e1 */
  if (!C.cf) goto L_10d5d1e1;
  /* 10d5d1bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d1c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d5d1c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d1c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5d1cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5d1ce mov eax, dword ptr [ecx*4 + 0x10d81ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d81ee0)));
  /* 10d5d1d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d5d1da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5d1dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5d1df jne 0x10d5d1fc */
  if (!C.zf) goto L_10d5d1fc;
L_10d5d1e1:;
  /* 10d5d1e1 call 0x10d5c930 */
  push32(0x10d5d1e6u); f_10d5c930();
  /* 10d5d1e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d5d1ec call 0x10d5c940 */
  push32(0x10d5d1f1u); f_10d5c940();
  /* 10d5d1f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d5d1f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d1fa jmp 0x10d5d22e */
  goto L_10d5d22e;
L_10d5d1fc:;
  /* 10d5d1fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d1ff push edx */
  push32((uint32_t)(EDX));
  /* 10d5d200 call 0x10d5e150 */
  push32(0x10d5d205u); f_10d5e150();
  /* 10d5d205 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d208 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5d20b push eax */
  push32((uint32_t)(EAX));
  /* 10d5d20c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5d20f push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d210 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d213 push edx */
  push32((uint32_t)(EDX));
  /* 10d5d214 call 0x10d5d240 */
  push32(0x10d5d219u); f_10d5d240();
  /* 10d5d219 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d21c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5d21f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d222 push eax */
  push32((uint32_t)(EAX));
  /* 10d5d223 call 0x10d5e1e0 */
  push32(0x10d5d228u); f_10d5e1e0();
  /* 10d5d228 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d22b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d5d22e:;
  /* 10d5d22e mov esp, ebp */
  ESP = (EBP);
  /* 10d5d230 pop ebp */
  EBP = (pop32());
  /* 10d5d231 ret  */
  ESPCHK(0x10d5d1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d240 @ 0x10d5d240 (178 bytes, 56 insns) */
void f_10d5d240(void) {
  FTRACE(0x10d5d240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5d240 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5d241 mov ebp, esp */
  EBP = (ESP);
  /* 10d5d243 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5d246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d249 push eax */
  push32((uint32_t)(EAX));
  /* 10d5d24a call 0x10d5dfd0 */
  push32(0x10d5d24fu); f_10d5dfd0();
  /* 10d5d24f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d252 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d5d255 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d259 jne 0x10d5d26e */
  if (!C.zf) goto L_10d5d26e;
  /* 10d5d25b call 0x10d5c930 */
  push32(0x10d5d260u); f_10d5c930();
  /* 10d5d260 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d5d266 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d269 jmp 0x10d5d2ee */
  goto L_10d5d2ee;
L_10d5d26e:;
  /* 10d5d26e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5d271 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d272 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5d274 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5d277 push edx */
  push32((uint32_t)(EDX));
  /* 10d5d278 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5d27b push eax */
  push32((uint32_t)(EAX));
  /* 10d5d27c call dword ptr [0x10d832b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832b8))), 0x10d5d282u);
  /* 10d5d282 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d5d285 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d289 jne 0x10d5d296 */
  if (!C.zf) goto L_10d5d296;
  /* 10d5d28b call dword ptr [0x10d83338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83338))), 0x10d5d291u);
  /* 10d5d291 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5d294 jmp 0x10d5d29d */
  goto L_10d5d29d;
L_10d5d296:;
  /* 10d5d296 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d5d29d:;
  /* 10d5d29d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d2a1 je 0x10d5d2b4 */
  if (C.zf) goto L_10d5d2b4;
  /* 10d5d2a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d2a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d2a7 call 0x10d5c890 */
  push32(0x10d5d2acu); f_10d5c890();
  /* 10d5d2ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d2af or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d2b2 jmp 0x10d5d2ee */
  goto L_10d5d2ee;
L_10d5d2b4:;
  /* 10d5d2b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d2b7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10d5d2ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d2bd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d2c0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5d2c3 mov ecx, dword ptr [edx*4 + 0x10d81ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10d81ee0)));
  /* 10d5d2ca mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10d5d2ce and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10d5d2d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d2d4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d5d2d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d2da and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5d2dd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5d2e0 mov eax, dword ptr [eax*4 + 0x10d81ee0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10d81ee0)));
  /* 10d5d2e7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10d5d2eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d5d2ee:;
  /* 10d5d2ee mov esp, ebp */
  ESP = (EBP);
  /* 10d5d2f0 pop ebp */
  EBP = (pop32());
  /* 10d5d2f1 ret  */
  ESPCHK(0x10d5d240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d300 @ 0x10d5d300 (130 bytes, 43 insns) */
void f_10d5d300(void) {
  FTRACE(0x10d5d300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5d300 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5d301 mov ebp, esp */
  EBP = (ESP);
  /* 10d5d303 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d307 cmp eax, dword ptr [0x10d8201c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d8201c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d30d jae 0x10d5d331 */
  if (!C.cf) goto L_10d5d331;
  /* 10d5d30f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d312 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d5d315 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d318 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5d31b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5d31e mov eax, dword ptr [ecx*4 + 0x10d81ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d81ee0)));
  /* 10d5d325 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d5d32a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5d32d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5d32f jne 0x10d5d34c */
  if (!C.zf) goto L_10d5d34c;
L_10d5d331:;
  /* 10d5d331 call 0x10d5c930 */
  push32(0x10d5d336u); f_10d5c930();
  /* 10d5d336 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d5d33c call 0x10d5c940 */
  push32(0x10d5d341u); f_10d5c940();
  /* 10d5d341 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d5d347 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d34a jmp 0x10d5d37e */
  goto L_10d5d37e;
L_10d5d34c:;
  /* 10d5d34c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d34f push edx */
  push32((uint32_t)(EDX));
  /* 10d5d350 call 0x10d5e150 */
  push32(0x10d5d355u); f_10d5e150();
  /* 10d5d355 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d358 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5d35b push eax */
  push32((uint32_t)(EAX));
  /* 10d5d35c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5d35f push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d360 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d363 push edx */
  push32((uint32_t)(EDX));
  /* 10d5d364 call 0x10d5d390 */
  push32(0x10d5d369u); f_10d5d390();
  /* 10d5d369 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d36c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5d36f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d372 push eax */
  push32((uint32_t)(EAX));
  /* 10d5d373 call 0x10d5e1e0 */
  push32(0x10d5d378u); f_10d5e1e0();
  /* 10d5d378 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d37b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d5d37e:;
  /* 10d5d37e mov esp, ebp */
  ESP = (EBP);
  /* 10d5d380 pop ebp */
  EBP = (pop32());
  /* 10d5d381 ret  */
  ESPCHK(0x10d5d300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d390 @ 0x10d5d390 (627 bytes, 182 insns) */
void f_10d5d390(void) {
  FTRACE(0x10d5d390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5d390 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5d391 mov ebp, esp */
  EBP = (ESP);
  /* 10d5d393 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5d399 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d5d3a0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5d3a3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10d5d3a9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d3ad jne 0x10d5d3b6 */
  if (!C.zf) goto L_10d5d3b6;
  /* 10d5d3af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d3b1 jmp 0x10d5d5ff */
  goto L_10d5d5ff;
L_10d5d3b6:;
  /* 10d5d3b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d3b9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d5d3bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d3bf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5d3c2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5d3c5 mov eax, dword ptr [ecx*4 + 0x10d81ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d81ee0)));
  /* 10d5d3cc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d5d3d1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5d3d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5d3d6 je 0x10d5d3e8 */
  if (C.zf) goto L_10d5d3e8;
  /* 10d5d3d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5d3da push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5d3dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d3df push edx */
  push32((uint32_t)(EDX));
  /* 10d5d3e0 call 0x10d5d240 */
  push32(0x10d5d3e5u); f_10d5d240();
  /* 10d5d3e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5d3e8:;
  /* 10d5d3e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d3eb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d5d3ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d3f1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5d3f4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5d3f7 mov edx, dword ptr [eax*4 + 0x10d81ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d81ee0)));
  /* 10d5d3fe movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10d5d403 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d408 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5d40a je 0x10d5d51c */
  if (C.zf) goto L_10d5d51c;
  /* 10d5d410 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5d413 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d5d416 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10d5d41d:;
  /* 10d5d41d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d420 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5d423 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d426 jae 0x10d5d51a */
  if (!C.cf) goto L_10d5d51a;
  /* 10d5d42c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10d5d432 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d5d435:;
  /* 10d5d435 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5d438 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10d5d43e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5d440 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d446 jge 0x10d5d4a7 */
  if ((C.sf==C.of)) goto L_10d5d4a7;
  /* 10d5d448 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d44b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5d44e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d451 jae 0x10d5d4a7 */
  if (!C.cf) goto L_10d5d4a7;
  /* 10d5d453 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d456 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d5d458 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10d5d45e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d461 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d464 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5d467 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10d5d46e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d471 jne 0x10d5d491 */
  if (!C.zf) goto L_10d5d491;
  /* 10d5d473 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10d5d479 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d47c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10d5d482 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5d485 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10d5d488 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5d48b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d48e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d5d491:;
  /* 10d5d491 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5d494 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10d5d49a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10d5d49c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5d49f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d4a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d5d4a5 jmp 0x10d5d435 */
  goto L_10d5d435;
L_10d5d4a7:;
  /* 10d5d4a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5d4a9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10d5d4af push edx */
  push32((uint32_t)(EDX));
  /* 10d5d4b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5d4b3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10d5d4b9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5d4bb push eax */
  push32((uint32_t)(EAX));
  /* 10d5d4bc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10d5d4c2 push edx */
  push32((uint32_t)(EDX));
  /* 10d5d4c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d4c6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d5d4c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d4cc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5d4cf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5d4d2 mov edx, dword ptr [eax*4 + 0x10d81ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d81ee0)));
  /* 10d5d4d9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10d5d4dc push eax */
  push32((uint32_t)(EAX));
  /* 10d5d4dd call dword ptr [0x10d832f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832f8))), 0x10d5d4e3u);
  /* 10d5d4e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5d4e5 je 0x10d5d50a */
  if (C.zf) goto L_10d5d50a;
  /* 10d5d4e7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5d4ea add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d4f0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d5d4f3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5d4f6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10d5d4fc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5d4fe cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d504 jge 0x10d5d508 */
  if ((C.sf==C.of)) goto L_10d5d508;
  /* 10d5d506 jmp 0x10d5d51a */
  goto L_10d5d51a;
L_10d5d508:;
  /* 10d5d508 jmp 0x10d5d515 */
  goto L_10d5d515;
L_10d5d50a:;
  /* 10d5d50a call dword ptr [0x10d83338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83338))), 0x10d5d510u);
  /* 10d5d510 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d5d513 jmp 0x10d5d51a */
  goto L_10d5d51a;
L_10d5d515:;
  /* 10d5d515 jmp 0x10d5d41d */
  goto L_10d5d41d;
L_10d5d51a:;
  /* 10d5d51a jmp 0x10d5d56c */
  goto L_10d5d56c;
L_10d5d51c:;
  /* 10d5d51c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5d51e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10d5d524 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d525 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5d528 push edx */
  push32((uint32_t)(EDX));
  /* 10d5d529 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5d52c push eax */
  push32((uint32_t)(EAX));
  /* 10d5d52d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d530 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d5d533 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d536 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5d539 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5d53c mov eax, dword ptr [ecx*4 + 0x10d81ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d81ee0)));
  /* 10d5d543 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10d5d546 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d547 call dword ptr [0x10d832f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832f8))), 0x10d5d54du);
  /* 10d5d54d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5d54f je 0x10d5d563 */
  if (C.zf) goto L_10d5d563;
  /* 10d5d551 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d5d558 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10d5d55e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d5d561 jmp 0x10d5d56c */
  goto L_10d5d56c;
L_10d5d563:;
  /* 10d5d563 call dword ptr [0x10d83338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83338))), 0x10d5d569u);
  /* 10d5d569 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d5d56c:;
  /* 10d5d56c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d570 jne 0x10d5d5f6 */
  if (!C.zf) goto L_10d5d5f6;
  /* 10d5d576 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d57a je 0x10d5d5aa */
  if (C.zf) goto L_10d5d5aa;
  /* 10d5d57c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d580 jne 0x10d5d599 */
  if (!C.zf) goto L_10d5d599;
  /* 10d5d582 call 0x10d5c930 */
  push32(0x10d5d587u); f_10d5c930();
  /* 10d5d587 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d5d58d call 0x10d5c940 */
  push32(0x10d5d592u); f_10d5c940();
  /* 10d5d592 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5d595 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d5d597 jmp 0x10d5d5a5 */
  goto L_10d5d5a5;
L_10d5d599:;
  /* 10d5d599 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5d59c push edx */
  push32((uint32_t)(EDX));
  /* 10d5d59d call 0x10d5c890 */
  push32(0x10d5d5a2u); f_10d5c890();
  /* 10d5d5a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5d5a5:;
  /* 10d5d5a5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d5a8 jmp 0x10d5d5ff */
  goto L_10d5d5ff;
L_10d5d5aa:;
  /* 10d5d5aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d5ad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d5d5b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d5b3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5d5b6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5d5b9 mov edx, dword ptr [eax*4 + 0x10d81ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d81ee0)));
  /* 10d5d5c0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10d5d5c5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d5c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5d5ca je 0x10d5d5db */
  if (C.zf) goto L_10d5d5db;
  /* 10d5d5cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5d5cf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d5d5d2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d5d5 jne 0x10d5d5db */
  if (!C.zf) goto L_10d5d5db;
  /* 10d5d5d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d5d9 jmp 0x10d5d5ff */
  goto L_10d5d5ff;
L_10d5d5db:;
  /* 10d5d5db call 0x10d5c930 */
  push32(0x10d5d5e0u); f_10d5c930();
  /* 10d5d5e0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10d5d5e6 call 0x10d5c940 */
  push32(0x10d5d5ebu); f_10d5c940();
  /* 10d5d5eb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d5d5f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d5f4 jmp 0x10d5d5ff */
  goto L_10d5d5ff;
L_10d5d5f6:;
  /* 10d5d5f6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5d5f9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10d5d5ff:;
  /* 10d5d5ff mov esp, ebp */
  ESP = (EBP);
  /* 10d5d601 pop ebp */
  EBP = (pop32());
  /* 10d5d602 ret  */
  ESPCHK(0x10d5d390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d610 @ 0x10d5d610 (199 bytes, 68 insns) */
void f_10d5d610(void) {
  FTRACE(0x10d5d610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5d610 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5d611 mov ebp, esp */
  EBP = (ESP);
  /* 10d5d613 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d614 push ebx */
  push32((uint32_t)(EBX));
  /* 10d5d615 push esi */
  push32((uint32_t)(ESI));
  /* 10d5d616 push edi */
  push32((uint32_t)(EDI));
L_10d5d617:;
  /* 10d5d617 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d61b jne 0x10d5d63b */
  if (!C.zf) goto L_10d5d63b;
  /* 10d5d61d push 0x10d7bfe4 */
  push32((uint32_t)(0x10d7bfe4u));
  /* 10d5d622 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5d624 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10d5d626 push 0x10d7c0b0 */
  push32((uint32_t)(0x10d7c0b0u));
  /* 10d5d62b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5d62d call 0x10d53b20 */
  push32(0x10d5d632u); f_10d53b20();
  /* 10d5d632 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d635 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d638 jne 0x10d5d63b */
  if (!C.zf) goto L_10d5d63b;
  /* 10d5d63a int3  */
  x86_unimpl("int3 @ 0x10d5d63a");
L_10d5d63b:;
  /* 10d5d63b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d63d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5d63f jne 0x10d5d617 */
  if (!C.zf) goto L_10d5d617;
  /* 10d5d641 mov ecx, dword ptr [0x10d8071c] */
  ECX = (r32((uint32_t)(0x10d8071c)));
  /* 10d5d647 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d64a mov dword ptr [0x10d8071c], ecx */
  w32((uint32_t)(0x10d8071c), (ECX));
  /* 10d5d650 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d653 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d5d656 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10d5d658 push 0x10d7c0b0 */
  push32((uint32_t)(0x10d7c0b0u));
  /* 10d5d65d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5d65f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10d5d664 call 0x10d54a60 */
  push32(0x10d5d669u); f_10d54a60();
  /* 10d5d669 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d66c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d66f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10d5d672 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d675 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d679 je 0x10d5d696 */
  if (C.zf) goto L_10d5d696;
  /* 10d5d67b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d67e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d5d681 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5d684 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d687 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10d5d68a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d68d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10d5d694 jmp 0x10d5d6bb */
  goto L_10d5d6bb;
L_10d5d696:;
  /* 10d5d696 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d699 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d5d69c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5d69f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d6a2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10d5d6a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d6a8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d6ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d6ae mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d5d6b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d6b4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10d5d6bb:;
  /* 10d5d6bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d6be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d6c1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d5d6c4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d5d6c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d6c9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10d5d6d0 pop edi */
  EDI = (pop32());
  /* 10d5d6d1 pop esi */
  ESI = (pop32());
  /* 10d5d6d2 pop ebx */
  EBX = (pop32());
  /* 10d5d6d3 mov esp, ebp */
  ESP = (EBP);
  /* 10d5d6d5 pop ebp */
  EBP = (pop32());
  /* 10d5d6d6 ret  */
  ESPCHK(0x10d5d610u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10d5d6e0 (50 bytes, 17 insns) */
void f_10d5d6e0(void) {
  FTRACE(0x10d5d6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5d6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5d6e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5d6e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d6e6 cmp eax, dword ptr [0x10d8201c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d8201c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d6ec jb 0x10d5d6f2 */
  if (C.cf) goto L_10d5d6f2;
  /* 10d5d6ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d6f0 jmp 0x10d5d710 */
  goto L_10d5d710;
L_10d5d6f2:;
  /* 10d5d6f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d6f5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d5d6f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d6fb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5d6fe imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5d701 mov eax, dword ptr [ecx*4 + 0x10d81ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d81ee0)));
  /* 10d5d708 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d5d70d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10d5d710:;
  /* 10d5d710 pop ebp */
  EBP = (pop32());
  /* 10d5d711 ret  */
  ESPCHK(0x10d5d6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d720 @ 0x10d5d720 (300 bytes, 80 insns) */
void f_10d5d720(void) {
  FTRACE(0x10d5d720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5d720 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5d721 mov ebp, esp */
  EBP = (ESP);
  /* 10d5d723 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d724 cmp dword ptr [0x10d81be0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d81be0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d72b jne 0x10d5d739 */
  if (!C.zf) goto L_10d5d739;
  /* 10d5d72d mov dword ptr [0x10d81be0], 0x200 */
  w32((uint32_t)(0x10d81be0), (0x200u));
  /* 10d5d737 jmp 0x10d5d74c */
  goto L_10d5d74c;
L_10d5d739:;
  /* 10d5d739 cmp dword ptr [0x10d81be0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10d81be0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d740 jge 0x10d5d74c */
  if ((C.sf==C.of)) goto L_10d5d74c;
  /* 10d5d742 mov dword ptr [0x10d81be0], 0x14 */
  w32((uint32_t)(0x10d81be0), (0x14u));
L_10d5d74c:;
  /* 10d5d74c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10d5d751 push 0x10d7c0bc */
  push32((uint32_t)(0x10d7c0bcu));
  /* 10d5d756 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5d758 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d5d75a mov eax, dword ptr [0x10d81be0] */
  EAX = (r32((uint32_t)(0x10d81be0)));
  /* 10d5d75f push eax */
  push32((uint32_t)(EAX));
  /* 10d5d760 call 0x10d54e70 */
  push32(0x10d5d765u); f_10d54e70();
  /* 10d5d765 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d768 mov dword ptr [0x10d80890], eax */
  w32((uint32_t)(0x10d80890), (EAX));
  /* 10d5d76d cmp dword ptr [0x10d80890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d774 jne 0x10d5d7b5 */
  if (!C.zf) goto L_10d5d7b5;
  /* 10d5d776 mov dword ptr [0x10d81be0], 0x14 */
  w32((uint32_t)(0x10d81be0), (0x14u));
  /* 10d5d780 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10d5d785 push 0x10d7c0bc */
  push32((uint32_t)(0x10d7c0bcu));
  /* 10d5d78a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5d78c push 4 */
  push32((uint32_t)(0x4u));
  /* 10d5d78e mov ecx, dword ptr [0x10d81be0] */
  ECX = (r32((uint32_t)(0x10d81be0)));
  /* 10d5d794 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d795 call 0x10d54e70 */
  push32(0x10d5d79au); f_10d54e70();
  /* 10d5d79a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d79d mov dword ptr [0x10d80890], eax */
  w32((uint32_t)(0x10d80890), (EAX));
  /* 10d5d7a2 cmp dword ptr [0x10d80890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d7a9 jne 0x10d5d7b5 */
  if (!C.zf) goto L_10d5d7b5;
  /* 10d5d7ab push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10d5d7ad call 0x10d539d0 */
  push32(0x10d5d7b2u); f_10d539d0();
  /* 10d5d7b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5d7b5:;
  /* 10d5d7b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d5d7bc jmp 0x10d5d7c7 */
  goto L_10d5d7c7;
L_10d5d7be:;
  /* 10d5d7be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d7c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d7c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d5d7c7:;
  /* 10d5d7c7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d7cb jge 0x10d5d7e6 */
  if ((C.sf==C.of)) goto L_10d5d7e6;
  /* 10d5d7cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d7d0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d5d7d3 add eax, 0x10d7f120 */
  { uint32_t _a=(EAX),_b=(0x10d7f120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d7d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d7db mov edx, dword ptr [0x10d80890] */
  EDX = (r32((uint32_t)(0x10d80890)));
  /* 10d5d7e1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10d5d7e4 jmp 0x10d5d7be */
  goto L_10d5d7be;
L_10d5d7e6:;
  /* 10d5d7e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d5d7ed jmp 0x10d5d7f8 */
  goto L_10d5d7f8;
L_10d5d7ef:;
  /* 10d5d7ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d7f2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d7f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d5d7f8:;
  /* 10d5d7f8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d7fc jge 0x10d5d848 */
  if ((C.sf==C.of)) goto L_10d5d848;
  /* 10d5d7fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d801 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d5d804 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d807 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5d80a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5d80d mov eax, dword ptr [ecx*4 + 0x10d81ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d81ee0)));
  /* 10d5d814 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d818 je 0x10d5d836 */
  if (C.zf) goto L_10d5d836;
  /* 10d5d81a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d81d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d5d820 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d823 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5d826 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5d829 mov eax, dword ptr [ecx*4 + 0x10d81ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d81ee0)));
  /* 10d5d830 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d834 jne 0x10d5d846 */
  if (!C.zf) goto L_10d5d846;
L_10d5d836:;
  /* 10d5d836 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5d839 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d5d83c mov dword ptr [ecx + 0x10d7f130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10d7f130), (0xffffffffu));
L_10d5d846:;
  /* 10d5d846 jmp 0x10d5d7ef */
  goto L_10d5d7ef;
L_10d5d848:;
  /* 10d5d848 mov esp, ebp */
  ESP = (EBP);
  /* 10d5d84a pop ebp */
  EBP = (pop32());
  /* 10d5d84b ret  */
  ESPCHK(0x10d5d720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d850 @ 0x10d5d850 (26 bytes, 9 insns) */
void f_10d5d850(void) {
  FTRACE(0x10d5d850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5d850 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5d851 mov ebp, esp */
  EBP = (ESP);
  /* 10d5d853 call 0x10d5e450 */
  push32(0x10d5d858u); f_10d5e450();
  /* 10d5d858 movsx eax, byte ptr [0x10d80538] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10d80538))));
  /* 10d5d85f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5d861 je 0x10d5d868 */
  if (C.zf) goto L_10d5d868;
  /* 10d5d863 call 0x10d5e210 */
  push32(0x10d5d868u); f_10d5e210();
L_10d5d868:;
  /* 10d5d868 pop ebp */
  EBP = (pop32());
  /* 10d5d869 ret  */
  ESPCHK(0x10d5d850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d870 @ 0x10d5d870 (61 bytes, 20 insns) */
void f_10d5d870(void) {
  FTRACE(0x10d5d870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5d870 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5d871 mov ebp, esp */
  EBP = (ESP);
  /* 10d5d873 cmp dword ptr [ebp + 8], 0x10d7f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10d7f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d87a jb 0x10d5d89e */
  if (C.cf) goto L_10d5d89e;
  /* 10d5d87c cmp dword ptr [ebp + 8], 0x10d7f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10d7f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d883 ja 0x10d5d89e */
  if ((!C.cf&&!C.zf)) goto L_10d5d89e;
  /* 10d5d885 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d888 sub eax, 0x10d7f120 */
  { uint32_t _a=(EAX),_b=(0x10d7f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5d88d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d5d890 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d893 push eax */
  push32((uint32_t)(EAX));
  /* 10d5d894 call 0x10d58460 */
  push32(0x10d5d899u); f_10d58460();
  /* 10d5d899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d89c jmp 0x10d5d8ab */
  goto L_10d5d8ab;
L_10d5d89e:;
  /* 10d5d89e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d8a1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d8a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d8a5 call dword ptr [0x10d83388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83388))), 0x10d5d8abu);
L_10d5d8ab:;
  /* 10d5d8ab pop ebp */
  EBP = (pop32());
  /* 10d5d8ac ret  */
  ESPCHK(0x10d5d870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8b0 @ 0x10d5d8b0 (41 bytes, 16 insns) */
void f_10d5d8b0(void) {
  FTRACE(0x10d5d8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5d8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5d8b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5d8b3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d8b7 jge 0x10d5d8ca */
  if ((C.sf==C.of)) goto L_10d5d8ca;
  /* 10d5d8b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d8bc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d8bf push eax */
  push32((uint32_t)(EAX));
  /* 10d5d8c0 call 0x10d58460 */
  push32(0x10d5d8c5u); f_10d58460();
  /* 10d5d8c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d8c8 jmp 0x10d5d8d7 */
  goto L_10d5d8d7;
L_10d5d8ca:;
  /* 10d5d8ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5d8cd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d8d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d8d1 call dword ptr [0x10d83388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83388))), 0x10d5d8d7u);
L_10d5d8d7:;
  /* 10d5d8d7 pop ebp */
  EBP = (pop32());
  /* 10d5d8d8 ret  */
  ESPCHK(0x10d5d8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8e0 @ 0x10d5d8e0 (61 bytes, 20 insns) */
void f_10d5d8e0(void) {
  FTRACE(0x10d5d8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5d8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5d8e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5d8e3 cmp dword ptr [ebp + 8], 0x10d7f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10d7f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d8ea jb 0x10d5d90e */
  if (C.cf) goto L_10d5d90e;
  /* 10d5d8ec cmp dword ptr [ebp + 8], 0x10d7f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10d7f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d8f3 ja 0x10d5d90e */
  if ((!C.cf&&!C.zf)) goto L_10d5d90e;
  /* 10d5d8f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d8f8 sub eax, 0x10d7f120 */
  { uint32_t _a=(EAX),_b=(0x10d7f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5d8fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d5d900 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d903 push eax */
  push32((uint32_t)(EAX));
  /* 10d5d904 call 0x10d58500 */
  push32(0x10d5d909u); f_10d58500();
  /* 10d5d909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d90c jmp 0x10d5d91b */
  goto L_10d5d91b;
L_10d5d90e:;
  /* 10d5d90e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d911 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d914 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d915 call dword ptr [0x10d8338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8338c))), 0x10d5d91bu);
L_10d5d91b:;
  /* 10d5d91b pop ebp */
  EBP = (pop32());
  /* 10d5d91c ret  */
  ESPCHK(0x10d5d8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d920 @ 0x10d5d920 (41 bytes, 16 insns) */
void f_10d5d920(void) {
  FTRACE(0x10d5d920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5d920 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5d921 mov ebp, esp */
  EBP = (ESP);
  /* 10d5d923 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d927 jge 0x10d5d93a */
  if ((C.sf==C.of)) goto L_10d5d93a;
  /* 10d5d929 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d92c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d92f push eax */
  push32((uint32_t)(EAX));
  /* 10d5d930 call 0x10d58500 */
  push32(0x10d5d935u); f_10d58500();
  /* 10d5d935 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d938 jmp 0x10d5d947 */
  goto L_10d5d947;
L_10d5d93a:;
  /* 10d5d93a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5d93d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d940 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d941 call dword ptr [0x10d8338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8338c))), 0x10d5d947u);
L_10d5d947:;
  /* 10d5d947 pop ebp */
  EBP = (pop32());
  /* 10d5d948 ret  */
  ESPCHK(0x10d5d920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d950 @ 0x10d5d950 (119 bytes, 34 insns) */
void f_10d5d950(void) {
  FTRACE(0x10d5d950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5d950 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5d951 mov ebp, esp */
  EBP = (ESP);
  /* 10d5d953 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5d956 push 0x10d8088c */
  push32((uint32_t)(0x10d8088cu));
  /* 10d5d95b call dword ptr [0x10d8330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8330c))), 0x10d5d961u);
  /* 10d5d961 cmp dword ptr [0x10d8087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d968 je 0x10d5d988 */
  if (C.zf) goto L_10d5d988;
  /* 10d5d96a push 0x10d8088c */
  push32((uint32_t)(0x10d8088cu));
  /* 10d5d96f call dword ptr [0x10d832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832fc))), 0x10d5d975u);
  /* 10d5d975 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d5d977 call 0x10d58460 */
  push32(0x10d5d97cu); f_10d58460();
  /* 10d5d97c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d97f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d5d986 jmp 0x10d5d98f */
  goto L_10d5d98f;
L_10d5d988:;
  /* 10d5d988 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d5d98f:;
  /* 10d5d98f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10d5d993 push eax */
  push32((uint32_t)(EAX));
  /* 10d5d994 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5d997 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5d998 call 0x10d5d9d0 */
  push32(0x10d5d99du); f_10d5d9d0();
  /* 10d5d99d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d9a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d5d9a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d9a7 je 0x10d5d9b5 */
  if (C.zf) goto L_10d5d9b5;
  /* 10d5d9a9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d5d9ab call 0x10d58500 */
  push32(0x10d5d9b0u); f_10d58500();
  /* 10d5d9b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5d9b3 jmp 0x10d5d9c0 */
  goto L_10d5d9c0;
L_10d5d9b5:;
  /* 10d5d9b5 push 0x10d8088c */
  push32((uint32_t)(0x10d8088cu));
  /* 10d5d9ba call dword ptr [0x10d832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832fc))), 0x10d5d9c0u);
L_10d5d9c0:;
  /* 10d5d9c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5d9c3 mov esp, ebp */
  ESP = (EBP);
  /* 10d5d9c5 pop ebp */
  EBP = (pop32());
  /* 10d5d9c6 ret  */
  ESPCHK(0x10d5d950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9d0 @ 0x10d5d9d0 (160 bytes, 50 insns) */
void f_10d5d9d0(void) {
  FTRACE(0x10d5d9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5d9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5d9d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5d9d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5d9d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d9da jne 0x10d5d9e3 */
  if (!C.zf) goto L_10d5d9e3;
  /* 10d5d9dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d9de jmp 0x10d5da6c */
  goto L_10d5da6c;
L_10d5d9e3:;
  /* 10d5d9e3 cmp dword ptr [0x10d80700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d9ea jne 0x10d5da1a */
  if (!C.zf) goto L_10d5da1a;
  /* 10d5d9ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5d9ef and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5d9f4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5d9f9 jle 0x10d5da0b */
  if ((C.zf||C.sf!=C.of)) goto L_10d5da0b;
  /* 10d5d9fb call 0x10d5c930 */
  push32(0x10d5da00u); f_10d5c930();
  /* 10d5da00 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10d5da06 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5da09 jmp 0x10d5da6c */
  goto L_10d5da6c;
L_10d5da0b:;
  /* 10d5da0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5da0e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10d5da11 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10d5da13 mov eax, 1 */
  EAX = (0x1u);
  /* 10d5da18 jmp 0x10d5da6c */
  goto L_10d5da6c;
L_10d5da1a:;
  /* 10d5da1a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d5da21 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10d5da24 push eax */
  push32((uint32_t)(EAX));
  /* 10d5da25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5da27 mov ecx, dword ptr [0x10d7eea4] */
  ECX = (r32((uint32_t)(0x10d7eea4)));
  /* 10d5da2d push ecx */
  push32((uint32_t)(ECX));
  /* 10d5da2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5da31 push edx */
  push32((uint32_t)(EDX));
  /* 10d5da32 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5da34 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10d5da37 push eax */
  push32((uint32_t)(EAX));
  /* 10d5da38 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d5da3d mov ecx, dword ptr [0x10d80710] */
  ECX = (r32((uint32_t)(0x10d80710)));
  /* 10d5da43 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5da44 call dword ptr [0x10d83364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83364))), 0x10d5da4au);
  /* 10d5da4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5da4d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5da51 je 0x10d5da59 */
  if (C.zf) goto L_10d5da59;
  /* 10d5da53 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5da57 je 0x10d5da69 */
  if (C.zf) goto L_10d5da69;
L_10d5da59:;
  /* 10d5da59 call 0x10d5c930 */
  push32(0x10d5da5eu); f_10d5c930();
  /* 10d5da5e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10d5da64 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5da67 jmp 0x10d5da6c */
  goto L_10d5da6c;
L_10d5da69:;
  /* 10d5da69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d5da6c:;
  /* 10d5da6c mov esp, ebp */
  ESP = (EBP);
  /* 10d5da6e pop ebp */
  EBP = (pop32());
  /* 10d5da6f ret  */
  ESPCHK(0x10d5d9d0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10d5da70 (32 bytes, 18 insns) */
void f_10d5da70(void) {
  FTRACE(0x10d5da70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5da70 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5da71 mov ebp, esp */
  EBP = (ESP);
  /* 10d5da73 push ebx */
  push32((uint32_t)(EBX));
  /* 10d5da74 push esi */
  push32((uint32_t)(ESI));
  /* 10d5da75 push edi */
  push32((uint32_t)(EDI));
  /* 10d5da76 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5da77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5da79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5da7b push 0x10d5da88 */
  push32((uint32_t)(0x10d5da88u));
  /* 10d5da80 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10d5da83 call 0x10d651bc */
  push32(0x10d5da88u); f_10d651bc();
  /* 10d5da88 pop ebp */
  EBP = (pop32());
  /* 10d5da89 pop edi */
  EDI = (pop32());
  /* 10d5da8a pop esi */
  ESI = (pop32());
  /* 10d5da8b pop ebx */
  EBX = (pop32());
  /* 10d5da8c mov esp, ebp */
  ESP = (EBP);
  /* 10d5da8e pop ebp */
  EBP = (pop32());
  /* 10d5da8f ret  */
  ESPCHK(0x10d5da70u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10d5dab2 (104 bytes, 33 insns) */
void f_10d5dab2(void) {
  FTRACE(0x10d5dab2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5dab2 push ebx */
  push32((uint32_t)(EBX));
  /* 10d5dab3 push esi */
  push32((uint32_t)(ESI));
  /* 10d5dab4 push edi */
  push32((uint32_t)(EDI));
  /* 10d5dab5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d5dab9 push eax */
  push32((uint32_t)(EAX));
  /* 10d5daba push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10d5dabc push 0x10d5da90 */
  push32((uint32_t)(0x10d5da90u));
  /* 10d5dac1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10d5dac8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10d5dacf:;
  /* 10d5dacf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10d5dad3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d5dad6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10d5dad9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5dadc je 0x10d5db0c */
  if (C.zf) goto L_10d5db0c;
  /* 10d5dade cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5dae2 je 0x10d5db0c */
  if (C.zf) goto L_10d5db0c;
  /* 10d5dae4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10d5dae7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10d5daea mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10d5daee mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10d5daf1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5daf6 jne 0x10d5db0a */
  if (!C.zf) goto L_10d5db0a;
  /* 10d5daf8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10d5dafd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10d5db01 call 0x10d5db46 */
  push32(0x10d5db06u); f_10d5db46();
  /* 10d5db06 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10d5db0au);
L_10d5db0a:;
  /* 10d5db0a jmp 0x10d5dacf */
  goto L_10d5dacf;
L_10d5db0c:;
  /* 10d5db0c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10d5db13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5db16 pop edi */
  EDI = (pop32());
  /* 10d5db17 pop esi */
  ESI = (pop32());
  /* 10d5db18 pop ebx */
  EBX = (pop32());
  /* 10d5db19 ret  */
  ESPCHK(0x10d5dab2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db46 @ 0x10d5db46 (24 bytes, 10 insns) */
void f_10d5db46(void) {
  FTRACE(0x10d5db46u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5db46 push ebx */
  push32((uint32_t)(EBX));
  /* 10d5db47 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5db48 mov ebx, 0x10d7f3b8 */
  EBX = (0x10d7f3b8u);
  /* 10d5db4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5db50 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10d5db53 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10d5db56 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10d5db59 pop ecx */
  ECX = (pop32());
  /* 10d5db5a pop ebx */
  EBX = (pop32());
  /* 10d5db5b ret 4 */
  ESPCHK(0x10d5db46u, _esp0);
  ESP += 8; return;
}

/* FUN_1000dc25 @ 0x10d5dc25 (27 bytes, 11 insns) */
void f_10d5dc25(void) {
  FTRACE(0x10d5dc25u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5dc25 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5dc26 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d5dc2a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10d5dc2c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10d5dc2f push eax */
  push32((uint32_t)(EAX));
  /* 10d5dc30 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d5dc33 push eax */
  push32((uint32_t)(EAX));
  /* 10d5dc34 call 0x10d5dab2 */
  push32(0x10d5dc39u); f_10d5dab2();
  /* 10d5dc39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5dc3c pop ebp */
  EBP = (pop32());
  /* 10d5dc3d ret 4 */
  ESPCHK(0x10d5dc25u, _esp0);
  ESP += 8; return;
}

/* FUN_1000dc40 @ 0x10d5dc40 (482 bytes, 138 insns) */
void f_10d5dc40(void) {
  FTRACE(0x10d5dc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5dc40 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5dc41 mov ebp, esp */
  EBP = (ESP);
  /* 10d5dc43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5dc46 push esi */
  push32((uint32_t)(ESI));
  /* 10d5dc47 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10d5dc4e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10d5dc50 call 0x10d58460 */
  push32(0x10d5dc55u); f_10d58460();
  /* 10d5dc55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5dc58 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d5dc5f jmp 0x10d5dc6a */
  goto L_10d5dc6a;
L_10d5dc61:;
  /* 10d5dc61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5dc64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5dc67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d5dc6a:;
  /* 10d5dc6a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5dc6e jge 0x10d5de10 */
  if ((C.sf==C.of)) goto L_10d5de10;
  /* 10d5dc74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5dc77 cmp dword ptr [ecx*4 + 0x10d81ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10d81ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5dc7f je 0x10d5dd76 */
  if (C.zf) goto L_10d5dd76;
  /* 10d5dc85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5dc88 mov eax, dword ptr [edx*4 + 0x10d81ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d81ee0)));
  /* 10d5dc8f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5dc92 jmp 0x10d5dc9d */
  goto L_10d5dc9d;
L_10d5dc94:;
  /* 10d5dc94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5dc97 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5dc9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d5dc9d:;
  /* 10d5dc9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5dca0 mov eax, dword ptr [edx*4 + 0x10d81ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d81ee0)));
  /* 10d5dca7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5dcac cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5dcaf jae 0x10d5dd66 */
  if (!C.cf) goto L_10d5dd66;
  /* 10d5dcb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5dcb8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d5dcbc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5dcbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5dcc1 jne 0x10d5dd61 */
  if (!C.zf) goto L_10d5dd61;
  /* 10d5dcc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5dcca cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5dcce jne 0x10d5dd09 */
  if (!C.zf) goto L_10d5dd09;
  /* 10d5dcd0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d5dcd2 call 0x10d58460 */
  push32(0x10d5dcd7u); f_10d58460();
  /* 10d5dcd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5dcda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5dcdd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5dce1 jne 0x10d5dcff */
  if (!C.zf) goto L_10d5dcff;
  /* 10d5dce3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5dce6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5dce9 push edx */
  push32((uint32_t)(EDX));
  /* 10d5dcea call dword ptr [0x10d83384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83384))), 0x10d5dcf0u);
  /* 10d5dcf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5dcf3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d5dcf6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5dcf9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5dcfc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10d5dcff:;
  /* 10d5dcff push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d5dd01 call 0x10d58500 */
  push32(0x10d5dd06u); f_10d58500();
  /* 10d5dd06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5dd09:;
  /* 10d5dd09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5dd0c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5dd0f push eax */
  push32((uint32_t)(EAX));
  /* 10d5dd10 call dword ptr [0x10d83388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83388))), 0x10d5dd16u);
  /* 10d5dd16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5dd19 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d5dd1d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5dd20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5dd22 je 0x10d5dd36 */
  if (C.zf) goto L_10d5dd36;
  /* 10d5dd24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5dd27 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5dd2a push eax */
  push32((uint32_t)(EAX));
  /* 10d5dd2b call dword ptr [0x10d8338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8338c))), 0x10d5dd31u);
  /* 10d5dd31 jmp 0x10d5dc94 */
  goto L_10d5dc94;
L_10d5dd36:;
  /* 10d5dd36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5dd39 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10d5dd3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5dd42 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d5dd45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5dd48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5dd4b sub eax, dword ptr [edx*4 + 0x10d81ee0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10d81ee0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5dd52 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d5dd53 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10d5dd58 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d5dd5a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5dd5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d5dd5f jmp 0x10d5dd66 */
  goto L_10d5dd66;
L_10d5dd61:;
  /* 10d5dd61 jmp 0x10d5dc94 */
  goto L_10d5dc94;
L_10d5dd66:;
  /* 10d5dd66 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5dd6a je 0x10d5dd71 */
  if (C.zf) goto L_10d5dd71;
  /* 10d5dd6c jmp 0x10d5de10 */
  goto L_10d5de10;
L_10d5dd71:;
  /* 10d5dd71 jmp 0x10d5de0b */
  goto L_10d5de0b;
L_10d5dd76:;
  /* 10d5dd76 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10d5dd78 push 0x10d7c0c4 */
  push32((uint32_t)(0x10d7c0c4u));
  /* 10d5dd7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5dd7f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10d5dd84 call 0x10d54a60 */
  push32(0x10d5dd89u); f_10d54a60();
  /* 10d5dd89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5dd8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5dd8f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5dd93 je 0x10d5de09 */
  if (C.zf) goto L_10d5de09;
  /* 10d5dd95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5dd98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5dd9b mov dword ptr [eax*4 + 0x10d81ee0], ecx */
  w32((uint32_t)(EAX*4 + 0x10d81ee0), (ECX));
  /* 10d5dda2 mov edx, dword ptr [0x10d8201c] */
  EDX = (r32((uint32_t)(0x10d8201c)));
  /* 10d5dda8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ddab mov dword ptr [0x10d8201c], edx */
  w32((uint32_t)(0x10d8201c), (EDX));
  /* 10d5ddb1 jmp 0x10d5ddbc */
  goto L_10d5ddbc;
L_10d5ddb3:;
  /* 10d5ddb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5ddb6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ddb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d5ddbc:;
  /* 10d5ddbc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5ddbf mov edx, dword ptr [ecx*4 + 0x10d81ee0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d81ee0)));
  /* 10d5ddc6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ddcc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ddcf jae 0x10d5ddf4 */
  if (!C.cf) goto L_10d5ddf4;
  /* 10d5ddd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5ddd4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10d5ddd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5dddb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10d5dde1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5dde4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10d5dde8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5ddeb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10d5ddf2 jmp 0x10d5ddb3 */
  goto L_10d5ddb3;
L_10d5ddf4:;
  /* 10d5ddf4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5ddf7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d5ddfa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d5ddfd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5de00 push edx */
  push32((uint32_t)(EDX));
  /* 10d5de01 call 0x10d5e150 */
  push32(0x10d5de06u); f_10d5e150();
  /* 10d5de06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5de09:;
  /* 10d5de09 jmp 0x10d5de10 */
  goto L_10d5de10;
L_10d5de0b:;
  /* 10d5de0b jmp 0x10d5dc61 */
  goto L_10d5dc61;
L_10d5de10:;
  /* 10d5de10 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10d5de12 call 0x10d58500 */
  push32(0x10d5de17u); f_10d58500();
  /* 10d5de17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5de1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5de1d pop esi */
  ESI = (pop32());
  /* 10d5de1e mov esp, ebp */
  ESP = (EBP);
  /* 10d5de20 pop ebp */
  EBP = (pop32());
  /* 10d5de21 ret  */
  ESPCHK(0x10d5dc40u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10d5de30 (183 bytes, 57 insns) */
void f_10d5de30(void) {
  FTRACE(0x10d5de30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5de30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5de31 mov ebp, esp */
  EBP = (ESP);
  /* 10d5de33 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5de34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5de37 cmp eax, dword ptr [0x10d8201c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d8201c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5de3d jae 0x10d5deca */
  if (!C.cf) goto L_10d5deca;
  /* 10d5de43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5de46 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d5de49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5de4c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5de4f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5de52 mov eax, dword ptr [ecx*4 + 0x10d81ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d81ee0)));
  /* 10d5de59 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5de5d jne 0x10d5deca */
  if (!C.zf) goto L_10d5deca;
  /* 10d5de5f cmp dword ptr [0x10d804f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d804f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5de66 jne 0x10d5deaa */
  if (!C.zf) goto L_10d5deaa;
  /* 10d5de68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5de6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d5de6e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5de72 je 0x10d5de82 */
  if (C.zf) goto L_10d5de82;
  /* 10d5de74 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5de78 je 0x10d5de90 */
  if (C.zf) goto L_10d5de90;
  /* 10d5de7a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5de7e je 0x10d5de9e */
  if (C.zf) goto L_10d5de9e;
  /* 10d5de80 jmp 0x10d5deaa */
  goto L_10d5deaa;
L_10d5de82:;
  /* 10d5de82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5de85 push edx */
  push32((uint32_t)(EDX));
  /* 10d5de86 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10d5de88 call dword ptr [0x10d832bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832bc))), 0x10d5de8eu);
  /* 10d5de8e jmp 0x10d5deaa */
  goto L_10d5deaa;
L_10d5de90:;
  /* 10d5de90 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5de93 push eax */
  push32((uint32_t)(EAX));
  /* 10d5de94 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10d5de96 call dword ptr [0x10d832bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832bc))), 0x10d5de9cu);
  /* 10d5de9c jmp 0x10d5deaa */
  goto L_10d5deaa;
L_10d5de9e:;
  /* 10d5de9e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5dea1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5dea2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10d5dea4 call dword ptr [0x10d832bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832bc))), 0x10d5deaau);
L_10d5deaa:;
  /* 10d5deaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5dead sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10d5deb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5deb3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5deb6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5deb9 mov ecx, dword ptr [edx*4 + 0x10d81ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10d81ee0)));
  /* 10d5dec0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5dec3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10d5dec6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5dec8 jmp 0x10d5dee3 */
  goto L_10d5dee3;
L_10d5deca:;
  /* 10d5deca call 0x10d5c930 */
  push32(0x10d5decfu); f_10d5c930();
  /* 10d5decf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d5ded5 call 0x10d5c940 */
  push32(0x10d5dedau); f_10d5c940();
  /* 10d5deda mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d5dee0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d5dee3:;
  /* 10d5dee3 mov esp, ebp */
  ESP = (EBP);
  /* 10d5dee5 pop ebp */
  EBP = (pop32());
  /* 10d5dee6 ret  */
  ESPCHK(0x10d5de30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000def0 @ 0x10d5def0 (216 bytes, 63 insns) */
void f_10d5def0(void) {
  FTRACE(0x10d5def0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5def0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5def1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5def3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5def4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5def7 cmp eax, dword ptr [0x10d8201c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d8201c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5defd jae 0x10d5dfab */
  if (!C.cf) goto L_10d5dfab;
  /* 10d5df03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5df06 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d5df09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5df0c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5df0f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5df12 mov eax, dword ptr [ecx*4 + 0x10d81ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d81ee0)));
  /* 10d5df19 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d5df1e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5df21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5df23 je 0x10d5dfab */
  if (C.zf) goto L_10d5dfab;
  /* 10d5df29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5df2c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10d5df2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5df32 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5df35 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5df38 mov ecx, dword ptr [edx*4 + 0x10d81ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10d81ee0)));
  /* 10d5df3f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5df43 je 0x10d5dfab */
  if (C.zf) goto L_10d5dfab;
  /* 10d5df45 cmp dword ptr [0x10d804f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d804f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5df4c jne 0x10d5df8a */
  if (!C.zf) goto L_10d5df8a;
  /* 10d5df4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5df51 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d5df54 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5df58 je 0x10d5df68 */
  if (C.zf) goto L_10d5df68;
  /* 10d5df5a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5df5e je 0x10d5df74 */
  if (C.zf) goto L_10d5df74;
  /* 10d5df60 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5df64 je 0x10d5df80 */
  if (C.zf) goto L_10d5df80;
  /* 10d5df66 jmp 0x10d5df8a */
  goto L_10d5df8a;
L_10d5df68:;
  /* 10d5df68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5df6a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10d5df6c call dword ptr [0x10d832bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832bc))), 0x10d5df72u);
  /* 10d5df72 jmp 0x10d5df8a */
  goto L_10d5df8a;
L_10d5df74:;
  /* 10d5df74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5df76 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10d5df78 call dword ptr [0x10d832bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832bc))), 0x10d5df7eu);
  /* 10d5df7e jmp 0x10d5df8a */
  goto L_10d5df8a;
L_10d5df80:;
  /* 10d5df80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5df82 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10d5df84 call dword ptr [0x10d832bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832bc))), 0x10d5df8au);
L_10d5df8a:;
  /* 10d5df8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5df8d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d5df90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5df93 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5df96 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5df99 mov edx, dword ptr [eax*4 + 0x10d81ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d81ee0)));
  /* 10d5dfa0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10d5dfa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5dfa9 jmp 0x10d5dfc4 */
  goto L_10d5dfc4;
L_10d5dfab:;
  /* 10d5dfab call 0x10d5c930 */
  push32(0x10d5dfb0u); f_10d5c930();
  /* 10d5dfb0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d5dfb6 call 0x10d5c940 */
  push32(0x10d5dfbbu); f_10d5c940();
  /* 10d5dfbb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d5dfc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d5dfc4:;
  /* 10d5dfc4 mov esp, ebp */
  ESP = (EBP);
  /* 10d5dfc6 pop ebp */
  EBP = (pop32());
  /* 10d5dfc7 ret  */
  ESPCHK(0x10d5def0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfd0 @ 0x10d5dfd0 (102 bytes, 30 insns) */
void f_10d5dfd0(void) {
  FTRACE(0x10d5dfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5dfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5dfd1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5dfd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5dfd6 cmp eax, dword ptr [0x10d8201c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d8201c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5dfdc jae 0x10d5e01b */
  if (!C.cf) goto L_10d5e01b;
  /* 10d5dfde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5dfe1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d5dfe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5dfe7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5dfea imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5dfed mov eax, dword ptr [ecx*4 + 0x10d81ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d81ee0)));
  /* 10d5dff4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d5dff9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5dffc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5dffe je 0x10d5e01b */
  if (C.zf) goto L_10d5e01b;
  /* 10d5e000 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e003 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10d5e006 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e009 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5e00c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5e00f mov ecx, dword ptr [edx*4 + 0x10d81ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10d81ee0)));
  /* 10d5e016 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10d5e019 jmp 0x10d5e034 */
  goto L_10d5e034;
L_10d5e01b:;
  /* 10d5e01b call 0x10d5c930 */
  push32(0x10d5e020u); f_10d5c930();
  /* 10d5e020 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d5e026 call 0x10d5c940 */
  push32(0x10d5e02bu); f_10d5c940();
  /* 10d5e02b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d5e031 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d5e034:;
  /* 10d5e034 pop ebp */
  EBP = (pop32());
  /* 10d5e035 ret  */
  ESPCHK(0x10d5dfd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e040 @ 0x10d5e040 (260 bytes, 83 insns) */
void f_10d5e040(void) {
  FTRACE(0x10d5e040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5e040 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5e041 mov ebp, esp */
  EBP = (ESP);
  /* 10d5e043 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5e046 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d5e04a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5e04d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5e050 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5e052 je 0x10d5e05d */
  if (C.zf) goto L_10d5e05d;
  /* 10d5e054 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d5e057 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10d5e05a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10d5e05d:;
  /* 10d5e05d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5e060 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5e066 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5e068 je 0x10d5e072 */
  if (C.zf) goto L_10d5e072;
  /* 10d5e06a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d5e06d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10d5e06f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10d5e072:;
  /* 10d5e072 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5e075 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5e07b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5e07d je 0x10d5e088 */
  if (C.zf) goto L_10d5e088;
  /* 10d5e07f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d5e082 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10d5e085 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10d5e088:;
  /* 10d5e088 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e08b push eax */
  push32((uint32_t)(EAX));
  /* 10d5e08c call dword ptr [0x10d83344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83344))), 0x10d5e092u);
  /* 10d5e092 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5e095 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e099 jne 0x10d5e0b2 */
  if (!C.zf) goto L_10d5e0b2;
  /* 10d5e09b call dword ptr [0x10d83338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83338))), 0x10d5e0a1u);
  /* 10d5e0a1 push eax */
  push32((uint32_t)(EAX));
  /* 10d5e0a2 call 0x10d5c890 */
  push32(0x10d5e0a7u); f_10d5c890();
  /* 10d5e0a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e0aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5e0ad jmp 0x10d5e140 */
  goto L_10d5e140;
L_10d5e0b2:;
  /* 10d5e0b2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e0b6 jne 0x10d5e0c3 */
  if (!C.zf) goto L_10d5e0c3;
  /* 10d5e0b8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d5e0bb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10d5e0be mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10d5e0c1 jmp 0x10d5e0d2 */
  goto L_10d5e0d2;
L_10d5e0c3:;
  /* 10d5e0c3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e0c7 jne 0x10d5e0d2 */
  if (!C.zf) goto L_10d5e0d2;
  /* 10d5e0c9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d5e0cc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10d5e0cf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10d5e0d2:;
  /* 10d5e0d2 call 0x10d5dc40 */
  push32(0x10d5e0d7u); f_10d5dc40();
  /* 10d5e0d7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d5e0da cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e0de jne 0x10d5e0fb */
  if (!C.zf) goto L_10d5e0fb;
  /* 10d5e0e0 call 0x10d5c930 */
  push32(0x10d5e0e5u); f_10d5c930();
  /* 10d5e0e5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10d5e0eb call 0x10d5c940 */
  push32(0x10d5e0f0u); f_10d5c940();
  /* 10d5e0f0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d5e0f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5e0f9 jmp 0x10d5e140 */
  goto L_10d5e140;
L_10d5e0fb:;
  /* 10d5e0fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e0fe push eax */
  push32((uint32_t)(EAX));
  /* 10d5e0ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e102 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e103 call 0x10d5de30 */
  push32(0x10d5e108u); f_10d5de30();
  /* 10d5e108 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e10b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d5e10e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10d5e111 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10d5e114 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e117 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d5e11a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e11d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5e120 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5e123 mov edx, dword ptr [eax*4 + 0x10d81ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d81ee0)));
  /* 10d5e12a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d5e12d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10d5e131 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e134 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e135 call 0x10d5e1e0 */
  push32(0x10d5e13au); f_10d5e1e0();
  /* 10d5e13a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e13d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d5e140:;
  /* 10d5e140 mov esp, ebp */
  ESP = (EBP);
  /* 10d5e142 pop ebp */
  EBP = (pop32());
  /* 10d5e143 ret  */
  ESPCHK(0x10d5e040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e150 @ 0x10d5e150 (134 bytes, 44 insns) */
void f_10d5e150(void) {
  FTRACE(0x10d5e150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5e150 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5e151 mov ebp, esp */
  EBP = (ESP);
  /* 10d5e153 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e157 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d5e15a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e15d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5e160 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5e163 mov edx, dword ptr [eax*4 + 0x10d81ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d81ee0)));
  /* 10d5e16a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e16c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d5e16f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5e172 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e176 jne 0x10d5e1b1 */
  if (!C.zf) goto L_10d5e1b1;
  /* 10d5e178 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d5e17a call 0x10d58460 */
  push32(0x10d5e17fu); f_10d58460();
  /* 10d5e17f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e182 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5e185 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e189 jne 0x10d5e1a7 */
  if (!C.zf) goto L_10d5e1a7;
  /* 10d5e18b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5e18e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e191 push edx */
  push32((uint32_t)(EDX));
  /* 10d5e192 call dword ptr [0x10d83384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83384))), 0x10d5e198u);
  /* 10d5e198 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5e19b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d5e19e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e1a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5e1a4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10d5e1a7:;
  /* 10d5e1a7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d5e1a9 call 0x10d58500 */
  push32(0x10d5e1aeu); f_10d58500();
  /* 10d5e1ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5e1b1:;
  /* 10d5e1b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e1b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d5e1b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e1ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5e1bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5e1c0 mov edx, dword ptr [eax*4 + 0x10d81ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d81ee0)));
  /* 10d5e1c7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10d5e1cb push eax */
  push32((uint32_t)(EAX));
  /* 10d5e1cc call dword ptr [0x10d83388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83388))), 0x10d5e1d2u);
  /* 10d5e1d2 mov esp, ebp */
  ESP = (EBP);
  /* 10d5e1d4 pop ebp */
  EBP = (pop32());
  /* 10d5e1d5 ret  */
  ESPCHK(0x10d5e150u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10d5e1e0 (38 bytes, 13 insns) */
void f_10d5e1e0(void) {
  FTRACE(0x10d5e1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5e1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5e1e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5e1e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e1e6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d5e1e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e1ec and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5e1ef imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5e1f2 mov edx, dword ptr [eax*4 + 0x10d81ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d81ee0)));
  /* 10d5e1f9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10d5e1fd push eax */
  push32((uint32_t)(EAX));
  /* 10d5e1fe call dword ptr [0x10d8338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8338c))), 0x10d5e204u);
  /* 10d5e204 pop ebp */
  EBP = (pop32());
  /* 10d5e205 ret  */
  ESPCHK(0x10d5e1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e210 @ 0x10d5e210 (218 bytes, 63 insns) */
void f_10d5e210(void) {
  FTRACE(0x10d5e210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5e210 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5e211 mov ebp, esp */
  EBP = (ESP);
  /* 10d5e213 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5e216 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d5e21d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5e21f call 0x10d58460 */
  push32(0x10d5e224u); f_10d58460();
  /* 10d5e224 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e227 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10d5e22e jmp 0x10d5e239 */
  goto L_10d5e239;
L_10d5e230:;
  /* 10d5e230 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e233 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e236 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d5e239:;
  /* 10d5e239 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e23c cmp ecx, dword ptr [0x10d81be0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d81be0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e242 jge 0x10d5e2d9 */
  if ((C.sf==C.of)) goto L_10d5e2d9;
  /* 10d5e248 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e24b mov eax, dword ptr [0x10d80890] */
  EAX = (r32((uint32_t)(0x10d80890)));
  /* 10d5e250 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e254 je 0x10d5e2d4 */
  if (C.zf) goto L_10d5e2d4;
  /* 10d5e256 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e259 mov edx, dword ptr [0x10d80890] */
  EDX = (r32((uint32_t)(0x10d80890)));
  /* 10d5e25f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10d5e262 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d5e265 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5e26b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5e26d je 0x10d5e291 */
  if (C.zf) goto L_10d5e291;
  /* 10d5e26f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e272 mov eax, dword ptr [0x10d80890] */
  EAX = (r32((uint32_t)(0x10d80890)));
  /* 10d5e277 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10d5e27a push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e27b call 0x10d5f000 */
  push32(0x10d5e280u); f_10d5f000();
  /* 10d5e280 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e283 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e286 je 0x10d5e291 */
  if (C.zf) goto L_10d5e291;
  /* 10d5e288 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5e28b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e28e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d5e291:;
  /* 10d5e291 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e295 jl 0x10d5e2d4 */
  if ((C.sf!=C.of)) goto L_10d5e2d4;
  /* 10d5e297 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e29a mov ecx, dword ptr [0x10d80890] */
  ECX = (r32((uint32_t)(0x10d80890)));
  /* 10d5e2a0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d5e2a3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e2a6 push edx */
  push32((uint32_t)(EDX));
  /* 10d5e2a7 call dword ptr [0x10d8334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8334c))), 0x10d5e2adu);
  /* 10d5e2ad push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5e2af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e2b2 mov ecx, dword ptr [0x10d80890] */
  ECX = (r32((uint32_t)(0x10d80890)));
  /* 10d5e2b8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d5e2bb push edx */
  push32((uint32_t)(EDX));
  /* 10d5e2bc call 0x10d554f0 */
  push32(0x10d5e2c1u); f_10d554f0();
  /* 10d5e2c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e2c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e2c7 mov ecx, dword ptr [0x10d80890] */
  ECX = (r32((uint32_t)(0x10d80890)));
  /* 10d5e2cd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10d5e2d4:;
  /* 10d5e2d4 jmp 0x10d5e230 */
  goto L_10d5e230;
L_10d5e2d9:;
  /* 10d5e2d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5e2db call 0x10d58500 */
  push32(0x10d5e2e0u); f_10d58500();
  /* 10d5e2e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e2e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5e2e6 mov esp, ebp */
  ESP = (EBP);
  /* 10d5e2e8 pop ebp */
  EBP = (pop32());
  /* 10d5e2e9 ret  */
  ESPCHK(0x10d5e210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2f0 @ 0x10d5e2f0 (68 bytes, 26 insns) */
void f_10d5e2f0(void) {
  FTRACE(0x10d5e2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5e2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5e2f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5e2f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e2f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e2f8 jne 0x10d5e306 */
  if (!C.zf) goto L_10d5e306;
  /* 10d5e2fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5e2fc call 0x10d5e460 */
  push32(0x10d5e301u); f_10d5e460();
  /* 10d5e301 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e304 jmp 0x10d5e330 */
  goto L_10d5e330;
L_10d5e306:;
  /* 10d5e306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e309 push eax */
  push32((uint32_t)(EAX));
  /* 10d5e30a call 0x10d5d870 */
  push32(0x10d5e30fu); f_10d5d870();
  /* 10d5e30f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e312 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e315 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e316 call 0x10d5e340 */
  push32(0x10d5e31bu); f_10d5e340();
  /* 10d5e31b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e31e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5e321 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e324 push edx */
  push32((uint32_t)(EDX));
  /* 10d5e325 call 0x10d5d8e0 */
  push32(0x10d5e32au); f_10d5d8e0();
  /* 10d5e32a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e32d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d5e330:;
  /* 10d5e330 mov esp, ebp */
  ESP = (EBP);
  /* 10d5e332 pop ebp */
  EBP = (pop32());
  /* 10d5e333 ret  */
  ESPCHK(0x10d5e2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e340 @ 0x10d5e340 (65 bytes, 26 insns) */
void f_10d5e340(void) {
  FTRACE(0x10d5e340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5e340 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5e341 mov ebp, esp */
  EBP = (ESP);
  /* 10d5e343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e346 push eax */
  push32((uint32_t)(EAX));
  /* 10d5e347 call 0x10d5e390 */
  push32(0x10d5e34cu); f_10d5e390();
  /* 10d5e34c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e34f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5e351 je 0x10d5e358 */
  if (C.zf) goto L_10d5e358;
  /* 10d5e353 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5e356 jmp 0x10d5e37f */
  goto L_10d5e37f;
L_10d5e358:;
  /* 10d5e358 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e35b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d5e35e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5e364 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5e366 je 0x10d5e37d */
  if (C.zf) goto L_10d5e37d;
  /* 10d5e368 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e36b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d5e36e push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e36f call 0x10d5f150 */
  push32(0x10d5e374u); f_10d5f150();
  /* 10d5e374 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e377 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d5e379 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5e37b jmp 0x10d5e37f */
  goto L_10d5e37f;
L_10d5e37d:;
  /* 10d5e37d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d5e37f:;
  /* 10d5e37f pop ebp */
  EBP = (pop32());
  /* 10d5e380 ret  */
  ESPCHK(0x10d5e340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e390 @ 0x10d5e390 (183 bytes, 62 insns) */
void f_10d5e390(void) {
  FTRACE(0x10d5e390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5e390 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5e391 mov ebp, esp */
  EBP = (ESP);
  /* 10d5e393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5e396 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d5e39d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e3a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d5e3a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e3a6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d5e3a9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5e3ac cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e3af jne 0x10d5e42b */
  if (!C.zf) goto L_10d5e42b;
  /* 10d5e3b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e3b4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d5e3b7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5e3bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5e3bf je 0x10d5e42b */
  if (C.zf) goto L_10d5e42b;
  /* 10d5e3c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e3c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e3c7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10d5e3c9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5e3cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5e3cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e3d3 jle 0x10d5e42b */
  if ((C.zf||C.sf!=C.of)) goto L_10d5e42b;
  /* 10d5e3d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5e3d8 push edx */
  push32((uint32_t)(EDX));
  /* 10d5e3d9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e3dc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d5e3df push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e3e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e3e3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d5e3e6 push eax */
  push32((uint32_t)(EAX));
  /* 10d5e3e7 call 0x10d5d300 */
  push32(0x10d5e3ecu); f_10d5d300();
  /* 10d5e3ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e3ef cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e3f2 jne 0x10d5e415 */
  if (!C.zf) goto L_10d5e415;
  /* 10d5e3f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e3f7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d5e3fa and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5e400 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5e402 je 0x10d5e413 */
  if (C.zf) goto L_10d5e413;
  /* 10d5e404 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e407 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d5e40a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5e40d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e410 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10d5e413:;
  /* 10d5e413 jmp 0x10d5e42b */
  goto L_10d5e42b;
L_10d5e415:;
  /* 10d5e415 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e418 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d5e41b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5e41e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e421 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10d5e424 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d5e42b:;
  /* 10d5e42b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e42e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e431 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d5e434 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d5e436 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5e439 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10d5e440 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5e443 mov esp, ebp */
  ESP = (EBP);
  /* 10d5e445 pop ebp */
  EBP = (pop32());
  /* 10d5e446 ret  */
  ESPCHK(0x10d5e390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e450 @ 0x10d5e450 (15 bytes, 7 insns) */
void f_10d5e450(void) {
  FTRACE(0x10d5e450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5e450 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5e451 mov ebp, esp */
  EBP = (ESP);
  /* 10d5e453 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5e455 call 0x10d5e460 */
  push32(0x10d5e45au); f_10d5e460();
  /* 10d5e45a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e45d pop ebp */
  EBP = (pop32());
  /* 10d5e45e ret  */
  ESPCHK(0x10d5e450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e460 @ 0x10d5e460 (319 bytes, 94 insns) */
void f_10d5e460(void) {
  FTRACE(0x10d5e460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5e460 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5e461 mov ebp, esp */
  EBP = (ESP);
  /* 10d5e463 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5e466 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d5e46d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d5e474 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5e476 call 0x10d58460 */
  push32(0x10d5e47bu); f_10d58460();
  /* 10d5e47b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e47e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d5e485 jmp 0x10d5e490 */
  goto L_10d5e490;
L_10d5e487:;
  /* 10d5e487 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5e48a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e48d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d5e490:;
  /* 10d5e490 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5e493 cmp ecx, dword ptr [0x10d81be0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d81be0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e499 jge 0x10d5e583 */
  if ((C.sf==C.of)) goto L_10d5e583;
  /* 10d5e49f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5e4a2 mov eax, dword ptr [0x10d80890] */
  EAX = (r32((uint32_t)(0x10d80890)));
  /* 10d5e4a7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e4ab je 0x10d5e57e */
  if (C.zf) goto L_10d5e57e;
  /* 10d5e4b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5e4b4 mov edx, dword ptr [0x10d80890] */
  EDX = (r32((uint32_t)(0x10d80890)));
  /* 10d5e4ba mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10d5e4bd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d5e4c0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5e4c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5e4c8 je 0x10d5e57e */
  if (C.zf) goto L_10d5e57e;
  /* 10d5e4ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5e4d1 mov eax, dword ptr [0x10d80890] */
  EAX = (r32((uint32_t)(0x10d80890)));
  /* 10d5e4d6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10d5e4d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e4da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5e4dd push edx */
  push32((uint32_t)(EDX));
  /* 10d5e4de call 0x10d5d8b0 */
  push32(0x10d5e4e3u); f_10d5d8b0();
  /* 10d5e4e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e4e6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5e4e9 mov ecx, dword ptr [0x10d80890] */
  ECX = (r32((uint32_t)(0x10d80890)));
  /* 10d5e4ef mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d5e4f2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d5e4f5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5e4fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5e4fc je 0x10d5e565 */
  if (C.zf) goto L_10d5e565;
  /* 10d5e4fe cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e502 jne 0x10d5e529 */
  if (!C.zf) goto L_10d5e529;
  /* 10d5e504 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5e507 mov edx, dword ptr [0x10d80890] */
  EDX = (r32((uint32_t)(0x10d80890)));
  /* 10d5e50d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10d5e510 push eax */
  push32((uint32_t)(EAX));
  /* 10d5e511 call 0x10d5e340 */
  push32(0x10d5e516u); f_10d5e340();
  /* 10d5e516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e519 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e51c je 0x10d5e527 */
  if (C.zf) goto L_10d5e527;
  /* 10d5e51e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5e521 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e524 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d5e527:;
  /* 10d5e527 jmp 0x10d5e565 */
  goto L_10d5e565;
L_10d5e529:;
  /* 10d5e529 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e52d jne 0x10d5e565 */
  if (!C.zf) goto L_10d5e565;
  /* 10d5e52f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5e532 mov eax, dword ptr [0x10d80890] */
  EAX = (r32((uint32_t)(0x10d80890)));
  /* 10d5e537 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10d5e53a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d5e53d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5e540 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5e542 je 0x10d5e565 */
  if (C.zf) goto L_10d5e565;
  /* 10d5e544 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5e547 mov ecx, dword ptr [0x10d80890] */
  ECX = (r32((uint32_t)(0x10d80890)));
  /* 10d5e54d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d5e550 push edx */
  push32((uint32_t)(EDX));
  /* 10d5e551 call 0x10d5e340 */
  push32(0x10d5e556u); f_10d5e340();
  /* 10d5e556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e559 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e55c jne 0x10d5e565 */
  if (!C.zf) goto L_10d5e565;
  /* 10d5e55e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10d5e565:;
  /* 10d5e565 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5e568 mov ecx, dword ptr [0x10d80890] */
  ECX = (r32((uint32_t)(0x10d80890)));
  /* 10d5e56e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d5e571 push edx */
  push32((uint32_t)(EDX));
  /* 10d5e572 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5e575 push eax */
  push32((uint32_t)(EAX));
  /* 10d5e576 call 0x10d5d920 */
  push32(0x10d5e57bu); f_10d5d920();
  /* 10d5e57b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5e57e:;
  /* 10d5e57e jmp 0x10d5e487 */
  goto L_10d5e487;
L_10d5e583:;
  /* 10d5e583 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5e585 call 0x10d58500 */
  push32(0x10d5e58au); f_10d58500();
  /* 10d5e58a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e58d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e591 jne 0x10d5e598 */
  if (!C.zf) goto L_10d5e598;
  /* 10d5e593 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5e596 jmp 0x10d5e59b */
  goto L_10d5e59b;
L_10d5e598:;
  /* 10d5e598 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d5e59b:;
  /* 10d5e59b mov esp, ebp */
  ESP = (EBP);
  /* 10d5e59d pop ebp */
  EBP = (pop32());
  /* 10d5e59e ret  */
  ESPCHK(0x10d5e460u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10d5e5a0 (15 bytes, 7 insns) */
void f_10d5e5a0(void) {
  FTRACE(0x10d5e5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5e5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5e5a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5e5a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5e5a5 call 0x10d539d0 */
  push32(0x10d5e5aau); f_10d539d0();
  /* 10d5e5aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e5ad pop ebp */
  EBP = (pop32());
  /* 10d5e5ae ret  */
  ESPCHK(0x10d5e5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5b0 @ 0x10d5e5b0 (1007 bytes, 269 insns) */
void f_10d5e5b0(void) {
  FTRACE(0x10d5e5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5e5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5e5b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5e5b3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5e5b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e5bd jl 0x10d5e5c5 */
  if ((C.sf!=C.of)) goto L_10d5e5c5;
  /* 10d5e5bf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e5c3 jle 0x10d5e5cc */
  if ((C.zf||C.sf!=C.of)) goto L_10d5e5cc;
L_10d5e5c5:;
  /* 10d5e5c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5e5c7 jmp 0x10d5e99b */
  goto L_10d5e99b;
L_10d5e5cc:;
  /* 10d5e5cc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d5e5ce call 0x10d58460 */
  push32(0x10d5e5d3u); f_10d58460();
  /* 10d5e5d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e5d6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d5e5dd mov eax, dword ptr [0x10d8087c] */
  EAX = (r32((uint32_t)(0x10d8087c)));
  /* 10d5e5e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e5e5 mov dword ptr [0x10d8087c], eax */
  w32((uint32_t)(0x10d8087c), (EAX));
L_10d5e5ea:;
  /* 10d5e5ea cmp dword ptr [0x10d8088c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8088c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e5f1 je 0x10d5e5fd */
  if (C.zf) goto L_10d5e5fd;
  /* 10d5e5f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5e5f5 call dword ptr [0x10d832ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832ac))), 0x10d5e5fbu);
  /* 10d5e5fb jmp 0x10d5e5ea */
  goto L_10d5e5ea;
L_10d5e5fd:;
  /* 10d5e5fd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e601 je 0x10d5e641 */
  if (C.zf) goto L_10d5e641;
  /* 10d5e603 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e607 je 0x10d5e621 */
  if (C.zf) goto L_10d5e621;
  /* 10d5e609 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5e60c push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e60d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e610 push edx */
  push32((uint32_t)(EDX));
  /* 10d5e611 call 0x10d5e9a0 */
  push32(0x10d5e616u); f_10d5e9a0();
  /* 10d5e616 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e619 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10d5e61f jmp 0x10d5e633 */
  goto L_10d5e633;
L_10d5e621:;
  /* 10d5e621 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e624 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5e627 mov ecx, dword ptr [eax + 0x10d7f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10d7f4dc)));
  /* 10d5e62d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10d5e633:;
  /* 10d5e633 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10d5e639 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d5e63c jmp 0x10d5e97b */
  goto L_10d5e97b;
L_10d5e641:;
  /* 10d5e641 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10d5e648 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d5e64f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e653 je 0x10d5e973 */
  if (C.zf) goto L_10d5e973;
  /* 10d5e659 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5e65c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d5e65f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e662 jne 0x10d5e884 */
  if (!C.zf) goto L_10d5e884;
  /* 10d5e668 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5e66b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10d5e66f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e672 jne 0x10d5e884 */
  if (!C.zf) goto L_10d5e884;
  /* 10d5e678 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5e67b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10d5e67f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e682 jne 0x10d5e884 */
  if (!C.zf) goto L_10d5e884;
  /* 10d5e688 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5e68b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10d5e691:;
  /* 10d5e691 push 0x10d7c114 */
  push32((uint32_t)(0x10d7c114u));
  /* 10d5e696 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d5e69c push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e69d call 0x10d60800 */
  push32(0x10d5e6a2u); f_10d60800();
  /* 10d5e6a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e6a5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10d5e6ab cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e6b2 je 0x10d5e6dd */
  if (C.zf) goto L_10d5e6dd;
  /* 10d5e6b4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d5e6ba sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5e6c0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10d5e6c6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e6cd je 0x10d5e6dd */
  if (C.zf) goto L_10d5e6dd;
  /* 10d5e6cf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d5e6d5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d5e6d8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e6db jne 0x10d5e703 */
  if (!C.zf) goto L_10d5e703;
L_10d5e6dd:;
  /* 10d5e6dd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e6e1 je 0x10d5e6fc */
  if (C.zf) goto L_10d5e6fc;
  /* 10d5e6e3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d5e6e5 call 0x10d58500 */
  push32(0x10d5e6eau); f_10d58500();
  /* 10d5e6ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e6ed mov edx, dword ptr [0x10d8087c] */
  EDX = (r32((uint32_t)(0x10d8087c)));
  /* 10d5e6f3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5e6f6 mov dword ptr [0x10d8087c], edx */
  w32((uint32_t)(0x10d8087c), (EDX));
L_10d5e6fc:;
  /* 10d5e6fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5e6fe jmp 0x10d5e99b */
  goto L_10d5e99b;
L_10d5e703:;
  /* 10d5e703 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10d5e70a jmp 0x10d5e715 */
  goto L_10d5e715;
L_10d5e70c:;
  /* 10d5e70c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5e70f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e712 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10d5e715:;
  /* 10d5e715 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e719 jg 0x10d5e763 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d5e763;
  /* 10d5e71b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10d5e721 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e722 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d5e728 push edx */
  push32((uint32_t)(EDX));
  /* 10d5e729 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5e72c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5e72f mov ecx, dword ptr [eax + 0x10d7f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x10d7f4d8)));
  /* 10d5e735 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e736 call 0x10d607c0 */
  push32(0x10d5e73bu); f_10d607c0();
  /* 10d5e73b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e73e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5e740 jne 0x10d5e761 */
  if (!C.zf) goto L_10d5e761;
  /* 10d5e742 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5e745 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5e748 mov eax, dword ptr [edx + 0x10d7f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x10d7f4d8)));
  /* 10d5e74e push eax */
  push32((uint32_t)(EAX));
  /* 10d5e74f call 0x10d57890 */
  push32(0x10d5e754u); f_10d57890();
  /* 10d5e754 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e757 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e75d jne 0x10d5e761 */
  if (!C.zf) goto L_10d5e761;
  /* 10d5e75f jmp 0x10d5e763 */
  goto L_10d5e763;
L_10d5e761:;
  /* 10d5e761 jmp 0x10d5e70c */
  goto L_10d5e70c;
L_10d5e763:;
  /* 10d5e763 push 0x10d7c110 */
  push32((uint32_t)(0x10d7c110u));
  /* 10d5e768 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d5e76e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e771 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10d5e777 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d5e77d push edx */
  push32((uint32_t)(EDX));
  /* 10d5e77e call 0x10d60780 */
  push32(0x10d5e783u); f_10d60780();
  /* 10d5e783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e786 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10d5e78c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e793 jne 0x10d5e7c9 */
  if (!C.zf) goto L_10d5e7c9;
  /* 10d5e795 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d5e79b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d5e79e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e7a1 je 0x10d5e7c9 */
  if (C.zf) goto L_10d5e7c9;
  /* 10d5e7a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e7a7 je 0x10d5e7c2 */
  if (C.zf) goto L_10d5e7c2;
  /* 10d5e7a9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d5e7ab call 0x10d58500 */
  push32(0x10d5e7b0u); f_10d58500();
  /* 10d5e7b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e7b3 mov edx, dword ptr [0x10d8087c] */
  EDX = (r32((uint32_t)(0x10d8087c)));
  /* 10d5e7b9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5e7bc mov dword ptr [0x10d8087c], edx */
  w32((uint32_t)(0x10d8087c), (EDX));
L_10d5e7c2:;
  /* 10d5e7c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5e7c4 jmp 0x10d5e99b */
  goto L_10d5e99b;
L_10d5e7c9:;
  /* 10d5e7c9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e7cd jg 0x10d5e81a */
  if ((!C.zf&&C.sf==C.of)) goto L_10d5e81a;
  /* 10d5e7cf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10d5e7d5 push eax */
  push32((uint32_t)(EAX));
  /* 10d5e7d6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d5e7dc push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e7dd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10d5e7e3 push edx */
  push32((uint32_t)(EDX));
  /* 10d5e7e4 call 0x10d58280 */
  push32(0x10d5e7e9u); f_10d58280();
  /* 10d5e7e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e7ec mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10d5e7f2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10d5e7fa lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10d5e800 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e801 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5e804 push edx */
  push32((uint32_t)(EDX));
  /* 10d5e805 call 0x10d5e9a0 */
  push32(0x10d5e80au); f_10d5e9a0();
  /* 10d5e80a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e80d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5e80f je 0x10d5e81a */
  if (C.zf) goto L_10d5e81a;
  /* 10d5e811 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5e814 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e817 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d5e81a:;
  /* 10d5e81a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d5e820 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e826 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10d5e82c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d5e832 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d5e835 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5e837 je 0x10d5e848 */
  if (C.zf) goto L_10d5e848;
  /* 10d5e839 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d5e83f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e842 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10d5e848:;
  /* 10d5e848 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d5e84e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d5e851 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5e853 jne 0x10d5e691 */
  if (!C.zf) goto L_10d5e691;
  /* 10d5e859 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e85d je 0x10d5e86c */
  if (C.zf) goto L_10d5e86c;
  /* 10d5e85f call 0x10d5eb40 */
  push32(0x10d5e864u); f_10d5eb40();
  /* 10d5e864 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10d5e86a jmp 0x10d5e876 */
  goto L_10d5e876;
L_10d5e86c:;
  /* 10d5e86c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10d5e876:;
  /* 10d5e876 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10d5e87c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d5e87f jmp 0x10d5e971 */
  goto L_10d5e971;
L_10d5e884:;
  /* 10d5e884 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e887 push edx */
  push32((uint32_t)(EDX));
  /* 10d5e888 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5e88a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5e88c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10d5e892 push eax */
  push32((uint32_t)(EAX));
  /* 10d5e893 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5e896 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e897 call 0x10d5ec40 */
  push32(0x10d5e89cu); f_10d5ec40();
  /* 10d5e89c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e89f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d5e8a2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e8a6 je 0x10d5e971 */
  if (C.zf) goto L_10d5e971;
  /* 10d5e8ac mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d5e8b3 jmp 0x10d5e8be */
  goto L_10d5e8be;
L_10d5e8b5:;
  /* 10d5e8b5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5e8b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e8bb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d5e8be:;
  /* 10d5e8be cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e8c2 jg 0x10d5e920 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d5e920;
  /* 10d5e8c4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e8c8 je 0x10d5e91e */
  if (C.zf) goto L_10d5e91e;
  /* 10d5e8ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5e8cd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5e8d0 mov ecx, dword ptr [eax + 0x10d7f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10d7f4dc)));
  /* 10d5e8d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e8d7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10d5e8dd push edx */
  push32((uint32_t)(EDX));
  /* 10d5e8de call 0x10d606f0 */
  push32(0x10d5e8e3u); f_10d606f0();
  /* 10d5e8e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e8e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5e8e8 je 0x10d5e915 */
  if (C.zf) goto L_10d5e915;
  /* 10d5e8ea lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10d5e8f0 push eax */
  push32((uint32_t)(EAX));
  /* 10d5e8f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5e8f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e8f5 call 0x10d5e9a0 */
  push32(0x10d5e8fau); f_10d5e9a0();
  /* 10d5e8fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e8fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5e8ff je 0x10d5e90c */
  if (C.zf) goto L_10d5e90c;
  /* 10d5e901 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5e904 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e907 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d5e90a jmp 0x10d5e913 */
  goto L_10d5e913;
L_10d5e90c:;
  /* 10d5e90c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10d5e913:;
  /* 10d5e913 jmp 0x10d5e91e */
  goto L_10d5e91e;
L_10d5e915:;
  /* 10d5e915 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5e918 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e91b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d5e91e:;
  /* 10d5e91e jmp 0x10d5e8b5 */
  goto L_10d5e8b5;
L_10d5e920:;
  /* 10d5e920 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e924 je 0x10d5e94b */
  if (C.zf) goto L_10d5e94b;
  /* 10d5e926 call 0x10d5eb40 */
  push32(0x10d5e92bu); f_10d5eb40();
  /* 10d5e92b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d5e92e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5e930 mov ecx, dword ptr [0x10d7f4dc] */
  ECX = (r32((uint32_t)(0x10d7f4dc)));
  /* 10d5e936 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e937 call 0x10d554f0 */
  push32(0x10d5e93cu); f_10d554f0();
  /* 10d5e93c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e93f mov dword ptr [0x10d7f4dc], 0 */
  w32((uint32_t)(0x10d7f4dc), (0x0u));
  /* 10d5e949 jmp 0x10d5e971 */
  goto L_10d5e971;
L_10d5e94b:;
  /* 10d5e94b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e94f je 0x10d5e95e */
  if (C.zf) goto L_10d5e95e;
  /* 10d5e951 call 0x10d5eb40 */
  push32(0x10d5e956u); f_10d5eb40();
  /* 10d5e956 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10d5e95c jmp 0x10d5e968 */
  goto L_10d5e968;
L_10d5e95e:;
  /* 10d5e95e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10d5e968:;
  /* 10d5e968 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10d5e96e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d5e971:;
  /* 10d5e971 jmp 0x10d5e97b */
  goto L_10d5e97b;
L_10d5e973:;
  /* 10d5e973 call 0x10d5eb40 */
  push32(0x10d5e978u); f_10d5eb40();
  /* 10d5e978 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d5e97b:;
  /* 10d5e97b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5e97f je 0x10d5e998 */
  if (C.zf) goto L_10d5e998;
  /* 10d5e981 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d5e983 call 0x10d58500 */
  push32(0x10d5e988u); f_10d58500();
  /* 10d5e988 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e98b mov eax, dword ptr [0x10d8087c] */
  EAX = (r32((uint32_t)(0x10d8087c)));
  /* 10d5e990 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5e993 mov dword ptr [0x10d8087c], eax */
  w32((uint32_t)(0x10d8087c), (EAX));
L_10d5e998:;
  /* 10d5e998 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d5e99b:;
  /* 10d5e99b mov esp, ebp */
  ESP = (EBP);
  /* 10d5e99d pop ebp */
  EBP = (pop32());
  /* 10d5e99e ret  */
  ESPCHK(0x10d5e5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9a0 @ 0x10d5e9a0 (403 bytes, 117 insns) */
void f_10d5e9a0(void) {
  FTRACE(0x10d5e9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5e9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5e9a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5e9a3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5e9a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5e9ac push eax */
  push32((uint32_t)(EAX));
  /* 10d5e9ad lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10d5e9b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e9b4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10d5e9ba push edx */
  push32((uint32_t)(EDX));
  /* 10d5e9bb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10d5e9c1 push eax */
  push32((uint32_t)(EAX));
  /* 10d5e9c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5e9c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5e9c6 call 0x10d5ec40 */
  push32(0x10d5e9cbu); f_10d5ec40();
  /* 10d5e9cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e9ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5e9d0 jne 0x10d5e9d9 */
  if (!C.zf) goto L_10d5e9d9;
  /* 10d5e9d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5e9d4 jmp 0x10d5eb2f */
  goto L_10d5eb2f;
L_10d5e9d9:;
  /* 10d5e9d9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10d5e9de push 0x10d7c118 */
  push32((uint32_t)(0x10d7c118u));
  /* 10d5e9e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5e9e5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10d5e9eb push edx */
  push32((uint32_t)(EDX));
  /* 10d5e9ec call 0x10d57890 */
  push32(0x10d5e9f1u); f_10d57890();
  /* 10d5e9f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e9f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5e9f7 push eax */
  push32((uint32_t)(EAX));
  /* 10d5e9f8 call 0x10d54a60 */
  push32(0x10d5e9fdu); f_10d54a60();
  /* 10d5e9fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ea00 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d5ea03 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ea07 jne 0x10d5ea10 */
  if (!C.zf) goto L_10d5ea10;
  /* 10d5ea09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ea0b jmp 0x10d5eb2f */
  goto L_10d5eb2f;
L_10d5ea10:;
  /* 10d5ea10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ea13 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5ea16 mov ecx, dword ptr [eax + 0x10d7f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10d7f4dc)));
  /* 10d5ea1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5ea1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ea22 mov eax, dword ptr [edx*4 + 0x10d806f8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d806f8)));
  /* 10d5ea29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5ea2c push 6 */
  push32((uint32_t)(0x6u));
  /* 10d5ea2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ea31 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5ea34 add ecx, 0x10d80748 */
  { uint32_t _a=(ECX),_b=(0x10d80748u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ea3a push ecx */
  push32((uint32_t)(ECX));
  /* 10d5ea3b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10d5ea3e push edx */
  push32((uint32_t)(EDX));
  /* 10d5ea3f call 0x10d5b340 */
  push32(0x10d5ea44u); f_10d5b340();
  /* 10d5ea44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ea47 mov eax, dword ptr [0x10d80710] */
  EAX = (r32((uint32_t)(0x10d80710)));
  /* 10d5ea4c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d5ea4f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10d5ea55 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5ea56 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5ea59 push edx */
  push32((uint32_t)(EDX));
  /* 10d5ea5a call 0x10d57a10 */
  push32(0x10d5ea5fu); f_10d57a10();
  /* 10d5ea5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ea62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ea65 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5ea68 mov dword ptr [ecx + 0x10d7f4dc], eax */
  w32((uint32_t)(ECX + 0x10d7f4dc), (EAX));
  /* 10d5ea6e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10d5ea74 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5ea7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ea7d mov dword ptr [eax*4 + 0x10d806f8], edx */
  w32((uint32_t)(EAX*4 + 0x10d806f8), (EDX));
  /* 10d5ea84 push 6 */
  push32((uint32_t)(0x6u));
  /* 10d5ea86 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10d5ea8c push ecx */
  push32((uint32_t)(ECX));
  /* 10d5ea8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ea90 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5ea93 add edx, 0x10d80748 */
  { uint32_t _a=(EDX),_b=(0x10d80748u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ea99 push edx */
  push32((uint32_t)(EDX));
  /* 10d5ea9a call 0x10d5b340 */
  push32(0x10d5ea9fu); f_10d5b340();
  /* 10d5ea9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5eaa2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5eaa6 jne 0x10d5eab3 */
  if (!C.zf) goto L_10d5eab3;
  /* 10d5eaa8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d5eaae mov dword ptr [0x10d80710], eax */
  w32((uint32_t)(0x10d80710), (EAX));
L_10d5eab3:;
  /* 10d5eab3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5eab7 jne 0x10d5eac5 */
  if (!C.zf) goto L_10d5eac5;
  /* 10d5eab9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d5eabf mov dword ptr [0x10d80714], ecx */
  w32((uint32_t)(0x10d80714), (ECX));
L_10d5eac5:;
  /* 10d5eac5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5eac8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5eacb call dword ptr [edx + 0x10d7f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10d7f4e0))), 0x10d5ead1u);
  /* 10d5ead1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5ead3 je 0x10d5eb0c */
  if (C.zf) goto L_10d5eb0c;
  /* 10d5ead5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ead8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5eadb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5eade mov dword ptr [eax + 0x10d7f4dc], ecx */
  w32((uint32_t)(EAX + 0x10d7f4dc), (ECX));
  /* 10d5eae4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5eae6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5eae9 push edx */
  push32((uint32_t)(EDX));
  /* 10d5eaea call 0x10d554f0 */
  push32(0x10d5eaefu); f_10d554f0();
  /* 10d5eaef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5eaf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5eaf5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5eaf8 mov dword ptr [eax*4 + 0x10d806f8], ecx */
  w32((uint32_t)(EAX*4 + 0x10d806f8), (ECX));
  /* 10d5eaff mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5eb02 mov dword ptr [0x10d80710], edx */
  w32((uint32_t)(0x10d80710), (EDX));
  /* 10d5eb08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5eb0a jmp 0x10d5eb2f */
  goto L_10d5eb2f;
L_10d5eb0c:;
  /* 10d5eb0c cmp dword ptr [ebp - 0xc], 0x10d7f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10d7f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5eb13 je 0x10d5eb23 */
  if (C.zf) goto L_10d5eb23;
  /* 10d5eb15 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5eb17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5eb1a push eax */
  push32((uint32_t)(EAX));
  /* 10d5eb1b call 0x10d554f0 */
  push32(0x10d5eb20u); f_10d554f0();
  /* 10d5eb20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5eb23:;
  /* 10d5eb23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5eb26 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5eb29 mov eax, dword ptr [ecx + 0x10d7f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x10d7f4dc)));
L_10d5eb2f:;
  /* 10d5eb2f mov esp, ebp */
  ESP = (EBP);
  /* 10d5eb31 pop ebp */
  EBP = (pop32());
  /* 10d5eb32 ret  */
  ESPCHK(0x10d5e9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb40 @ 0x10d5eb40 (256 bytes, 72 insns) */
void f_10d5eb40(void) {
  FTRACE(0x10d5eb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5eb40 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5eb41 mov ebp, esp */
  EBP = (ESP);
  /* 10d5eb43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5eb46 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10d5eb4d cmp dword ptr [0x10d7f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d7f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5eb54 jne 0x10d5eb74 */
  if (!C.zf) goto L_10d5eb74;
  /* 10d5eb56 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10d5eb5b push 0x10d7c118 */
  push32((uint32_t)(0x10d7c118u));
  /* 10d5eb60 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5eb62 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10d5eb67 call 0x10d54a60 */
  push32(0x10d5eb6cu); f_10d54a60();
  /* 10d5eb6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5eb6f mov dword ptr [0x10d7f4dc], eax */
  w32((uint32_t)(0x10d7f4dc), (EAX));
L_10d5eb74:;
  /* 10d5eb74 mov eax, dword ptr [0x10d7f4dc] */
  EAX = (r32((uint32_t)(0x10d7f4dc)));
  /* 10d5eb79 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d5eb7c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d5eb83 jmp 0x10d5eb8e */
  goto L_10d5eb8e;
L_10d5eb85:;
  /* 10d5eb85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5eb88 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5eb8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d5eb8e:;
  /* 10d5eb8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5eb91 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5eb94 mov eax, dword ptr [edx + 0x10d7f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10d7f4dc)));
  /* 10d5eb9a push eax */
  push32((uint32_t)(EAX));
  /* 10d5eb9b push 0x10d7c124 */
  push32((uint32_t)(0x10d7c124u));
  /* 10d5eba0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5eba3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5eba6 mov edx, dword ptr [ecx + 0x10d7f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x10d7f4d8)));
  /* 10d5ebac push edx */
  push32((uint32_t)(EDX));
  /* 10d5ebad push 3 */
  push32((uint32_t)(0x3u));
  /* 10d5ebaf mov eax, dword ptr [0x10d7f4dc] */
  EAX = (r32((uint32_t)(0x10d7f4dc)));
  /* 10d5ebb4 push eax */
  push32((uint32_t)(EAX));
  /* 10d5ebb5 call 0x10d5ede0 */
  push32(0x10d5ebbau); f_10d5ede0();
  /* 10d5ebba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ebbd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ebc1 jge 0x10d5ec09 */
  if ((C.sf==C.of)) goto L_10d5ec09;
  /* 10d5ebc3 push 0x10d7c110 */
  push32((uint32_t)(0x10d7c110u));
  /* 10d5ebc8 mov ecx, dword ptr [0x10d7f4dc] */
  ECX = (r32((uint32_t)(0x10d7f4dc)));
  /* 10d5ebce push ecx */
  push32((uint32_t)(ECX));
  /* 10d5ebcf call 0x10d57a20 */
  push32(0x10d5ebd4u); f_10d57a20();
  /* 10d5ebd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ebd7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5ebda add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ebdd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5ebe0 mov eax, dword ptr [edx + 0x10d7f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10d7f4dc)));
  /* 10d5ebe6 push eax */
  push32((uint32_t)(EAX));
  /* 10d5ebe7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5ebea imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5ebed mov edx, dword ptr [ecx + 0x10d7f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x10d7f4dc)));
  /* 10d5ebf3 push edx */
  push32((uint32_t)(EDX));
  /* 10d5ebf4 call 0x10d606f0 */
  push32(0x10d5ebf9u); f_10d606f0();
  /* 10d5ebf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ebfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5ebfe je 0x10d5ec07 */
  if (C.zf) goto L_10d5ec07;
  /* 10d5ec00 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10d5ec07:;
  /* 10d5ec07 jmp 0x10d5ec37 */
  goto L_10d5ec37;
L_10d5ec09:;
  /* 10d5ec09 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ec0d jne 0x10d5ec16 */
  if (!C.zf) goto L_10d5ec16;
  /* 10d5ec0f mov eax, dword ptr [0x10d7f4dc] */
  EAX = (r32((uint32_t)(0x10d7f4dc)));
  /* 10d5ec14 jmp 0x10d5ec3c */
  goto L_10d5ec3c;
L_10d5ec16:;
  /* 10d5ec16 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5ec18 mov eax, dword ptr [0x10d7f4dc] */
  EAX = (r32((uint32_t)(0x10d7f4dc)));
  /* 10d5ec1d push eax */
  push32((uint32_t)(EAX));
  /* 10d5ec1e call 0x10d554f0 */
  push32(0x10d5ec23u); f_10d554f0();
  /* 10d5ec23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ec26 mov dword ptr [0x10d7f4dc], 0 */
  w32((uint32_t)(0x10d7f4dc), (0x0u));
  /* 10d5ec30 mov eax, dword ptr [0x10d7f4f4] */
  EAX = (r32((uint32_t)(0x10d7f4f4)));
  /* 10d5ec35 jmp 0x10d5ec3c */
  goto L_10d5ec3c;
L_10d5ec37:;
  /* 10d5ec37 jmp 0x10d5eb85 */
  goto L_10d5eb85;
L_10d5ec3c:;
  /* 10d5ec3c mov esp, ebp */
  ESP = (EBP);
  /* 10d5ec3e pop ebp */
  EBP = (pop32());
  /* 10d5ec3f ret  */
  ESPCHK(0x10d5eb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec40 @ 0x10d5ec40 (388 bytes, 115 insns) */
void f_10d5ec40(void) {
  FTRACE(0x10d5ec40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5ec40 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5ec41 mov ebp, esp */
  EBP = (ESP);
  /* 10d5ec43 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5ec49 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ec4d jne 0x10d5ec56 */
  if (!C.zf) goto L_10d5ec56;
  /* 10d5ec4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ec51 jmp 0x10d5edc0 */
  goto L_10d5edc0;
L_10d5ec56:;
  /* 10d5ec56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ec59 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d5ec5c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ec5f jne 0x10d5ecb0 */
  if (!C.zf) goto L_10d5ecb0;
  /* 10d5ec61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ec64 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10d5ec68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5ec6a jne 0x10d5ecb0 */
  if (!C.zf) goto L_10d5ecb0;
  /* 10d5ec6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5ec6f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10d5ec72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5ec75 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10d5ec79 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ec7d je 0x10d5ec99 */
  if (C.zf) goto L_10d5ec99;
  /* 10d5ec7f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5ec82 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10d5ec87 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5ec8a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10d5ec90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5ec93 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10d5ec99:;
  /* 10d5ec99 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ec9d je 0x10d5eca8 */
  if (C.zf) goto L_10d5eca8;
  /* 10d5ec9f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d5eca2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10d5eca8:;
  /* 10d5eca8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5ecab jmp 0x10d5edc0 */
  goto L_10d5edc0;
L_10d5ecb0:;
  /* 10d5ecb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ecb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5ecb4 push 0x10d7f450 */
  push32((uint32_t)(0x10d7f450u));
  /* 10d5ecb9 call 0x10d606f0 */
  push32(0x10d5ecbeu); f_10d606f0();
  /* 10d5ecbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ecc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5ecc3 je 0x10d5ed78 */
  if (C.zf) goto L_10d5ed78;
  /* 10d5ecc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5eccc push edx */
  push32((uint32_t)(EDX));
  /* 10d5eccd push 0x10d7f3cc */
  push32((uint32_t)(0x10d7f3ccu));
  /* 10d5ecd2 call 0x10d606f0 */
  push32(0x10d5ecd7u); f_10d606f0();
  /* 10d5ecd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ecda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5ecdc je 0x10d5ed78 */
  if (C.zf) goto L_10d5ed78;
  /* 10d5ece2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ece5 push eax */
  push32((uint32_t)(EAX));
  /* 10d5ece6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10d5ecec push ecx */
  push32((uint32_t)(ECX));
  /* 10d5eced call 0x10d5ee30 */
  push32(0x10d5ecf2u); f_10d5ee30();
  /* 10d5ecf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ecf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5ecf7 je 0x10d5ed00 */
  if (C.zf) goto L_10d5ed00;
  /* 10d5ecf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ecfb jmp 0x10d5edc0 */
  goto L_10d5edc0;
L_10d5ed00:;
  /* 10d5ed00 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10d5ed06 push edx */
  push32((uint32_t)(EDX));
  /* 10d5ed07 push 0x10d80720 */
  push32((uint32_t)(0x10d80720u));
  /* 10d5ed0c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10d5ed12 push eax */
  push32((uint32_t)(EAX));
  /* 10d5ed13 call 0x10d60840 */
  push32(0x10d5ed18u); f_10d60840();
  /* 10d5ed18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ed1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5ed1d jne 0x10d5ed26 */
  if (!C.zf) goto L_10d5ed26;
  /* 10d5ed1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ed21 jmp 0x10d5edc0 */
  goto L_10d5edc0;
L_10d5ed26:;
  /* 10d5ed26 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5ed28 mov cx, word ptr [0x10d80724] */
  CX = (r16((uint32_t)(0x10d80724)));
  /* 10d5ed2f mov dword ptr [0x10d80728], ecx */
  w32((uint32_t)(0x10d80728), (ECX));
  /* 10d5ed35 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10d5ed3b push edx */
  push32((uint32_t)(EDX));
  /* 10d5ed3c push 0x10d7f450 */
  push32((uint32_t)(0x10d7f450u));
  /* 10d5ed41 call 0x10d5ef90 */
  push32(0x10d5ed46u); f_10d5ef90();
  /* 10d5ed46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ed49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ed4c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d5ed4f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5ed51 je 0x10d5ed66 */
  if (C.zf) goto L_10d5ed66;
  /* 10d5ed53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ed56 push edx */
  push32((uint32_t)(EDX));
  /* 10d5ed57 push 0x10d7f3cc */
  push32((uint32_t)(0x10d7f3ccu));
  /* 10d5ed5c call 0x10d57a10 */
  push32(0x10d5ed61u); f_10d57a10();
  /* 10d5ed61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ed64 jmp 0x10d5ed78 */
  goto L_10d5ed78;
L_10d5ed66:;
  /* 10d5ed66 push 0x10d7f450 */
  push32((uint32_t)(0x10d7f450u));
  /* 10d5ed6b push 0x10d7f3cc */
  push32((uint32_t)(0x10d7f3ccu));
  /* 10d5ed70 call 0x10d57a10 */
  push32(0x10d5ed75u); f_10d57a10();
  /* 10d5ed75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5ed78:;
  /* 10d5ed78 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ed7c je 0x10d5ed91 */
  if (C.zf) goto L_10d5ed91;
  /* 10d5ed7e push 6 */
  push32((uint32_t)(0x6u));
  /* 10d5ed80 push 0x10d80720 */
  push32((uint32_t)(0x10d80720u));
  /* 10d5ed85 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5ed88 push eax */
  push32((uint32_t)(EAX));
  /* 10d5ed89 call 0x10d5b340 */
  push32(0x10d5ed8eu); f_10d5b340();
  /* 10d5ed8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5ed91:;
  /* 10d5ed91 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ed95 je 0x10d5edaa */
  if (C.zf) goto L_10d5edaa;
  /* 10d5ed97 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d5ed99 push 0x10d80728 */
  push32((uint32_t)(0x10d80728u));
  /* 10d5ed9e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d5eda1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5eda2 call 0x10d5b340 */
  push32(0x10d5eda7u); f_10d5b340();
  /* 10d5eda7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5edaa:;
  /* 10d5edaa push 0x10d7f450 */
  push32((uint32_t)(0x10d7f450u));
  /* 10d5edaf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5edb2 push edx */
  push32((uint32_t)(EDX));
  /* 10d5edb3 call 0x10d57a10 */
  push32(0x10d5edb8u); f_10d57a10();
  /* 10d5edb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5edbb mov eax, 0x10d7f450 */
  EAX = (0x10d7f450u);
L_10d5edc0:;
  /* 10d5edc0 mov esp, ebp */
  ESP = (EBP);
  /* 10d5edc2 pop ebp */
  EBP = (pop32());
  /* 10d5edc3 ret  */
  ESPCHK(0x10d5ec40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000edd0 @ 0x10d5edd0 (7 bytes, 5 insns) */
void f_10d5edd0(void) {
  FTRACE(0x10d5edd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5edd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5edd1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5edd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5edd5 pop ebp */
  EBP = (pop32());
  /* 10d5edd6 ret  */
  ESPCHK(0x10d5edd0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10d5ede0 (79 bytes, 28 insns) */
void f_10d5ede0(void) {
  FTRACE(0x10d5ede0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5ede0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5ede1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5ede3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5ede6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10d5ede9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5edec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d5edf3 jmp 0x10d5edfe */
  goto L_10d5edfe;
L_10d5edf5:;
  /* 10d5edf5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5edf8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5edfb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d5edfe:;
  /* 10d5edfe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5ee01 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ee04 jge 0x10d5ee24 */
  if ((C.sf==C.of)) goto L_10d5ee24;
  /* 10d5ee06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5ee09 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ee0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5ee0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5ee12 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10d5ee15 push edx */
  push32((uint32_t)(EDX));
  /* 10d5ee16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ee19 push eax */
  push32((uint32_t)(EAX));
  /* 10d5ee1a call 0x10d57a20 */
  push32(0x10d5ee1fu); f_10d57a20();
  /* 10d5ee1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ee22 jmp 0x10d5edf5 */
  goto L_10d5edf5;
L_10d5ee24:;
  /* 10d5ee24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d5ee2b mov esp, ebp */
  ESP = (EBP);
  /* 10d5ee2d pop ebp */
  EBP = (pop32());
  /* 10d5ee2e ret  */
  ESPCHK(0x10d5ede0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee30 @ 0x10d5ee30 (349 bytes, 122 insns) */
void f_10d5ee30(void) {
  FTRACE(0x10d5ee30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5ee30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5ee31 mov ebp, esp */
  EBP = (ESP);
  /* 10d5ee33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5ee36 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10d5ee3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5ee3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ee40 push eax */
  push32((uint32_t)(EAX));
  /* 10d5ee41 call 0x10d587d0 */
  push32(0x10d5ee46u); f_10d587d0();
  /* 10d5ee46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ee49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5ee4c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d5ee4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5ee51 jne 0x10d5ee5a */
  if (!C.zf) goto L_10d5ee5a;
  /* 10d5ee53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ee55 jmp 0x10d5ef89 */
  goto L_10d5ef89;
L_10d5ee5a:;
  /* 10d5ee5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5ee5d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d5ee60 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ee63 jne 0x10d5ee90 */
  if (!C.zf) goto L_10d5ee90;
  /* 10d5ee65 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5ee68 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10d5ee6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5ee6e je 0x10d5ee90 */
  if (C.zf) goto L_10d5ee90;
  /* 10d5ee70 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5ee73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ee76 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5ee77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ee7a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ee80 push edx */
  push32((uint32_t)(EDX));
  /* 10d5ee81 call 0x10d57a10 */
  push32(0x10d5ee86u); f_10d57a10();
  /* 10d5ee86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ee89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ee8b jmp 0x10d5ef89 */
  goto L_10d5ef89;
L_10d5ee90:;
  /* 10d5ee90 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d5ee97 jmp 0x10d5eea2 */
  goto L_10d5eea2;
L_10d5ee99:;
  /* 10d5ee99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5ee9c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ee9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d5eea2:;
  /* 10d5eea2 push 0x10d7c128 */
  push32((uint32_t)(0x10d7c128u));
  /* 10d5eea7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5eeaa push ecx */
  push32((uint32_t)(ECX));
  /* 10d5eeab call 0x10d60780 */
  push32(0x10d5eeb0u); f_10d60780();
  /* 10d5eeb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5eeb3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d5eeb6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5eeba jne 0x10d5eec4 */
  if (!C.zf) goto L_10d5eec4;
  /* 10d5eebc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5eebf jmp 0x10d5ef89 */
  goto L_10d5ef89;
L_10d5eec4:;
  /* 10d5eec4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5eec7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5eeca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d5eecc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10d5eecf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5eed3 jne 0x10d5eefa */
  if (!C.zf) goto L_10d5eefa;
  /* 10d5eed5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5eed9 jge 0x10d5eefa */
  if ((C.sf==C.of)) goto L_10d5eefa;
  /* 10d5eedb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d5eedf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5eee2 je 0x10d5eefa */
  if (C.zf) goto L_10d5eefa;
  /* 10d5eee4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5eee7 push edx */
  push32((uint32_t)(EDX));
  /* 10d5eee8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5eeeb push eax */
  push32((uint32_t)(EAX));
  /* 10d5eeec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5eeef push ecx */
  push32((uint32_t)(ECX));
  /* 10d5eef0 call 0x10d58280 */
  push32(0x10d5eef5u); f_10d58280();
  /* 10d5eef5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5eef8 jmp 0x10d5ef60 */
  goto L_10d5ef60;
L_10d5eefa:;
  /* 10d5eefa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5eefe jne 0x10d5ef28 */
  if (!C.zf) goto L_10d5ef28;
  /* 10d5ef00 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ef04 jge 0x10d5ef28 */
  if ((C.sf==C.of)) goto L_10d5ef28;
  /* 10d5ef06 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d5ef0a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ef0d je 0x10d5ef28 */
  if (C.zf) goto L_10d5ef28;
  /* 10d5ef0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5ef12 push eax */
  push32((uint32_t)(EAX));
  /* 10d5ef13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5ef16 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5ef17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ef1a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ef1d push edx */
  push32((uint32_t)(EDX));
  /* 10d5ef1e call 0x10d58280 */
  push32(0x10d5ef23u); f_10d58280();
  /* 10d5ef23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ef26 jmp 0x10d5ef60 */
  goto L_10d5ef60;
L_10d5ef28:;
  /* 10d5ef28 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ef2c jne 0x10d5ef5b */
  if (!C.zf) goto L_10d5ef5b;
  /* 10d5ef2e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d5ef32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5ef34 je 0x10d5ef3f */
  if (C.zf) goto L_10d5ef3f;
  /* 10d5ef36 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d5ef3a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ef3d jne 0x10d5ef5b */
  if (!C.zf) goto L_10d5ef5b;
L_10d5ef3f:;
  /* 10d5ef3f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5ef42 push edx */
  push32((uint32_t)(EDX));
  /* 10d5ef43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5ef46 push eax */
  push32((uint32_t)(EAX));
  /* 10d5ef47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ef4a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ef50 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5ef51 call 0x10d58280 */
  push32(0x10d5ef56u); f_10d58280();
  /* 10d5ef56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ef59 jmp 0x10d5ef60 */
  goto L_10d5ef60;
L_10d5ef5b:;
  /* 10d5ef5b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ef5e jmp 0x10d5ef89 */
  goto L_10d5ef89;
L_10d5ef60:;
  /* 10d5ef60 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d5ef64 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ef67 jne 0x10d5ef6b */
  if (!C.zf) goto L_10d5ef6b;
  /* 10d5ef69 jmp 0x10d5ef87 */
  goto L_10d5ef87;
L_10d5ef6b:;
  /* 10d5ef6b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d5ef6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5ef71 jne 0x10d5ef75 */
  if (!C.zf) goto L_10d5ef75;
  /* 10d5ef73 jmp 0x10d5ef87 */
  goto L_10d5ef87;
L_10d5ef75:;
  /* 10d5ef75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5ef78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5ef7b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10d5ef7f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10d5ef82 jmp 0x10d5ee99 */
  goto L_10d5ee99;
L_10d5ef87:;
  /* 10d5ef87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d5ef89:;
  /* 10d5ef89 mov esp, ebp */
  ESP = (EBP);
  /* 10d5ef8b pop ebp */
  EBP = (pop32());
  /* 10d5ef8c ret  */
  ESPCHK(0x10d5ee30u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10d5ef90 (101 bytes, 36 insns) */
void f_10d5ef90(void) {
  FTRACE(0x10d5ef90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5ef90 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5ef91 mov ebp, esp */
  EBP = (ESP);
  /* 10d5ef93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5ef96 push eax */
  push32((uint32_t)(EAX));
  /* 10d5ef97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5ef9a push ecx */
  push32((uint32_t)(ECX));
  /* 10d5ef9b call 0x10d57a10 */
  push32(0x10d5efa0u); f_10d57a10();
  /* 10d5efa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5efa3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5efa6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10d5efaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5efac je 0x10d5efc8 */
  if (C.zf) goto L_10d5efc8;
  /* 10d5efae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5efb1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5efb4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5efb5 push 0x10d7c130 */
  push32((uint32_t)(0x10d7c130u));
  /* 10d5efba push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5efbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5efbf push edx */
  push32((uint32_t)(EDX));
  /* 10d5efc0 call 0x10d5ede0 */
  push32(0x10d5efc5u); f_10d5ede0();
  /* 10d5efc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5efc8:;
  /* 10d5efc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5efcb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10d5efd2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5efd4 je 0x10d5eff3 */
  if (C.zf) goto L_10d5eff3;
  /* 10d5efd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5efd9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5efdf push edx */
  push32((uint32_t)(EDX));
  /* 10d5efe0 push 0x10d7c12c */
  push32((uint32_t)(0x10d7c12cu));
  /* 10d5efe5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5efe7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5efea push eax */
  push32((uint32_t)(EAX));
  /* 10d5efeb call 0x10d5ede0 */
  push32(0x10d5eff0u); f_10d5ede0();
  /* 10d5eff0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5eff3:;
  /* 10d5eff3 pop ebp */
  EBP = (pop32());
  /* 10d5eff4 ret  */
  ESPCHK(0x10d5ef90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f000 @ 0x10d5f000 (130 bytes, 50 insns) */
void f_10d5f000(void) {
  FTRACE(0x10d5f000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5f000 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5f001 mov ebp, esp */
  EBP = (ESP);
  /* 10d5f003 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5f004 push ebx */
  push32((uint32_t)(EBX));
  /* 10d5f005 push esi */
  push32((uint32_t)(ESI));
  /* 10d5f006 push edi */
  push32((uint32_t)(EDI));
  /* 10d5f007 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d5f00e:;
  /* 10d5f00e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5f012 jne 0x10d5f032 */
  if (!C.zf) goto L_10d5f032;
  /* 10d5f014 push 0x10d7c140 */
  push32((uint32_t)(0x10d7c140u));
  /* 10d5f019 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5f01b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10d5f01d push 0x10d7c134 */
  push32((uint32_t)(0x10d7c134u));
  /* 10d5f022 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f024 call 0x10d53b20 */
  push32(0x10d5f029u); f_10d53b20();
  /* 10d5f029 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f02c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5f02f jne 0x10d5f032 */
  if (!C.zf) goto L_10d5f032;
  /* 10d5f031 int3  */
  x86_unimpl("int3 @ 0x10d5f031");
L_10d5f032:;
  /* 10d5f032 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5f034 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5f036 jne 0x10d5f00e */
  if (!C.zf) goto L_10d5f00e;
  /* 10d5f038 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f03b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d5f03e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5f041 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5f043 je 0x10d5f051 */
  if (C.zf) goto L_10d5f051;
  /* 10d5f045 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f048 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10d5f04f jmp 0x10d5f078 */
  goto L_10d5f078;
L_10d5f051:;
  /* 10d5f051 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f054 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5f055 call 0x10d5d870 */
  push32(0x10d5f05au); f_10d5d870();
  /* 10d5f05a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f05d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f060 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f061 call 0x10d5f090 */
  push32(0x10d5f066u); f_10d5f090();
  /* 10d5f066 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f069 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5f06c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f06f push eax */
  push32((uint32_t)(EAX));
  /* 10d5f070 call 0x10d5d8e0 */
  push32(0x10d5f075u); f_10d5d8e0();
  /* 10d5f075 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5f078:;
  /* 10d5f078 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f07b pop edi */
  EDI = (pop32());
  /* 10d5f07c pop esi */
  ESI = (pop32());
  /* 10d5f07d pop ebx */
  EBX = (pop32());
  /* 10d5f07e mov esp, ebp */
  ESP = (EBP);
  /* 10d5f080 pop ebp */
  EBP = (pop32());
  /* 10d5f081 ret  */
  ESPCHK(0x10d5f000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f090 @ 0x10d5f090 (190 bytes, 67 insns) */
void f_10d5f090(void) {
  FTRACE(0x10d5f090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5f090 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5f091 mov ebp, esp */
  EBP = (ESP);
  /* 10d5f093 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5f096 push ebx */
  push32((uint32_t)(EBX));
  /* 10d5f097 push esi */
  push32((uint32_t)(ESI));
  /* 10d5f098 push edi */
  push32((uint32_t)(EDI));
  /* 10d5f099 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d5f0a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f0a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d5f0a6:;
  /* 10d5f0a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5f0aa jne 0x10d5f0ca */
  if (!C.zf) goto L_10d5f0ca;
  /* 10d5f0ac push 0x10d7bfe4 */
  push32((uint32_t)(0x10d7bfe4u));
  /* 10d5f0b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5f0b3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10d5f0b5 push 0x10d7c134 */
  push32((uint32_t)(0x10d7c134u));
  /* 10d5f0ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f0bc call 0x10d53b20 */
  push32(0x10d5f0c1u); f_10d53b20();
  /* 10d5f0c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f0c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5f0c7 jne 0x10d5f0ca */
  if (!C.zf) goto L_10d5f0ca;
  /* 10d5f0c9 int3  */
  x86_unimpl("int3 @ 0x10d5f0c9");
L_10d5f0ca:;
  /* 10d5f0ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f0cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5f0ce jne 0x10d5f0a6 */
  if (!C.zf) goto L_10d5f0a6;
  /* 10d5f0d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5f0d3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d5f0d6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5f0db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5f0dd je 0x10d5f13a */
  if (C.zf) goto L_10d5f13a;
  /* 10d5f0df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5f0e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5f0e3 call 0x10d5e390 */
  push32(0x10d5f0e8u); f_10d5e390();
  /* 10d5f0e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f0eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5f0ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5f0f1 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f0f2 call 0x10d61710 */
  push32(0x10d5f0f7u); f_10d61710();
  /* 10d5f0f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f0fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5f0fd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d5f100 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5f101 call 0x10d615e0 */
  push32(0x10d5f106u); f_10d615e0();
  /* 10d5f106 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5f10b jge 0x10d5f116 */
  if ((C.sf==C.of)) goto L_10d5f116;
  /* 10d5f10d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d5f114 jmp 0x10d5f13a */
  goto L_10d5f13a;
L_10d5f116:;
  /* 10d5f116 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5f119 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5f11d je 0x10d5f13a */
  if (C.zf) goto L_10d5f13a;
  /* 10d5f11f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f121 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5f124 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10d5f127 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5f128 call 0x10d554f0 */
  push32(0x10d5f12du); f_10d554f0();
  /* 10d5f12d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f130 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5f133 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10d5f13a:;
  /* 10d5f13a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5f13d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10d5f144 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f147 pop edi */
  EDI = (pop32());
  /* 10d5f148 pop esi */
  ESI = (pop32());
  /* 10d5f149 pop ebx */
  EBX = (pop32());
  /* 10d5f14a mov esp, ebp */
  ESP = (EBP);
  /* 10d5f14c pop ebp */
  EBP = (pop32());
  /* 10d5f14d ret  */
  ESPCHK(0x10d5f090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f150 @ 0x10d5f150 (210 bytes, 63 insns) */
void f_10d5f150(void) {
  FTRACE(0x10d5f150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5f150 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5f151 mov ebp, esp */
  EBP = (ESP);
  /* 10d5f153 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5f154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f157 cmp eax, dword ptr [0x10d8201c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d8201c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5f15d jae 0x10d5f181 */
  if (!C.cf) goto L_10d5f181;
  /* 10d5f15f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f162 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d5f165 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f168 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5f16b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5f16e mov eax, dword ptr [ecx*4 + 0x10d81ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d81ee0)));
  /* 10d5f175 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d5f17a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f17d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5f17f jne 0x10d5f194 */
  if (!C.zf) goto L_10d5f194;
L_10d5f181:;
  /* 10d5f181 call 0x10d5c930 */
  push32(0x10d5f186u); f_10d5c930();
  /* 10d5f186 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d5f18c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5f18f jmp 0x10d5f21e */
  goto L_10d5f21e;
L_10d5f194:;
  /* 10d5f194 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f197 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f198 call 0x10d5e150 */
  push32(0x10d5f19du); f_10d5e150();
  /* 10d5f19d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f1a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f1a3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d5f1a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f1a9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f1ac imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5f1af mov edx, dword ptr [eax*4 + 0x10d81ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d81ee0)));
  /* 10d5f1b6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10d5f1bb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5f1be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5f1c0 je 0x10d5f1fd */
  if (C.zf) goto L_10d5f1fd;
  /* 10d5f1c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f1c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5f1c6 call 0x10d5dfd0 */
  push32(0x10d5f1cbu); f_10d5dfd0();
  /* 10d5f1cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f1ce push eax */
  push32((uint32_t)(EAX));
  /* 10d5f1cf call dword ptr [0x10d832a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832a8))), 0x10d5f1d5u);
  /* 10d5f1d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5f1d7 jne 0x10d5f1e4 */
  if (!C.zf) goto L_10d5f1e4;
  /* 10d5f1d9 call dword ptr [0x10d83338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83338))), 0x10d5f1dfu);
  /* 10d5f1df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5f1e2 jmp 0x10d5f1eb */
  goto L_10d5f1eb;
L_10d5f1e4:;
  /* 10d5f1e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d5f1eb:;
  /* 10d5f1eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5f1ef jne 0x10d5f1f3 */
  if (!C.zf) goto L_10d5f1f3;
  /* 10d5f1f1 jmp 0x10d5f20f */
  goto L_10d5f20f;
L_10d5f1f3:;
  /* 10d5f1f3 call 0x10d5c940 */
  push32(0x10d5f1f8u); f_10d5c940();
  /* 10d5f1f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f1fb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d5f1fd:;
  /* 10d5f1fd call 0x10d5c930 */
  push32(0x10d5f202u); f_10d5c930();
  /* 10d5f202 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d5f208 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d5f20f:;
  /* 10d5f20f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f212 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f213 call 0x10d5e1e0 */
  push32(0x10d5f218u); f_10d5e1e0();
  /* 10d5f218 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f21b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d5f21e:;
  /* 10d5f21e mov esp, ebp */
  ESP = (EBP);
  /* 10d5f220 pop ebp */
  EBP = (pop32());
  /* 10d5f221 ret  */
  ESPCHK(0x10d5f150u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10d5f230 (219 bytes, 64 insns) */
void f_10d5f230(void) {
  FTRACE(0x10d5f230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5f230 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5f231 mov ebp, esp */
  EBP = (ESP);
  /* 10d5f233 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5f234 cmp dword ptr [0x10d8070c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8070c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5f23b je 0x10d5f2d1 */
  if (C.zf) goto L_10d5f2d1;
  /* 10d5f241 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10d5f243 push 0x10d7c150 */
  push32((uint32_t)(0x10d7c150u));
  /* 10d5f248 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f24a push 0xac */
  push32((uint32_t)(0xacu));
  /* 10d5f24f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f251 call 0x10d54e70 */
  push32(0x10d5f256u); f_10d54e70();
  /* 10d5f256 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f259 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5f25c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5f260 jne 0x10d5f26c */
  if (!C.zf) goto L_10d5f26c;
  /* 10d5f262 mov eax, 1 */
  EAX = (0x1u);
  /* 10d5f267 jmp 0x10d5f307 */
  goto L_10d5f307;
L_10d5f26c:;
  /* 10d5f26c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f26f push eax */
  push32((uint32_t)(EAX));
  /* 10d5f270 call 0x10d5f310 */
  push32(0x10d5f275u); f_10d5f310();
  /* 10d5f275 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f278 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5f27a je 0x10d5f29d */
  if (C.zf) goto L_10d5f29d;
  /* 10d5f27c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f27f push ecx */
  push32((uint32_t)(ECX));
  /* 10d5f280 call 0x10d5f8a0 */
  push32(0x10d5f285u); f_10d5f8a0();
  /* 10d5f285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f288 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f28a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f28d push edx */
  push32((uint32_t)(EDX));
  /* 10d5f28e call 0x10d554f0 */
  push32(0x10d5f293u); f_10d554f0();
  /* 10d5f293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f296 mov eax, 1 */
  EAX = (0x1u);
  /* 10d5f29b jmp 0x10d5f307 */
  goto L_10d5f307;
L_10d5f29d:;
  /* 10d5f29d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f2a0 mov dword ptr [0x10d7fc98], eax */
  w32((uint32_t)(0x10d7fc98), (EAX));
  /* 10d5f2a5 mov ecx, dword ptr [0x10d8072c] */
  ECX = (r32((uint32_t)(0x10d8072c)));
  /* 10d5f2ab push ecx */
  push32((uint32_t)(ECX));
  /* 10d5f2ac call 0x10d5f8a0 */
  push32(0x10d5f2b1u); f_10d5f8a0();
  /* 10d5f2b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f2b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f2b6 mov edx, dword ptr [0x10d8072c] */
  EDX = (r32((uint32_t)(0x10d8072c)));
  /* 10d5f2bc push edx */
  push32((uint32_t)(EDX));
  /* 10d5f2bd call 0x10d554f0 */
  push32(0x10d5f2c2u); f_10d554f0();
  /* 10d5f2c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f2c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f2c8 mov dword ptr [0x10d8072c], eax */
  w32((uint32_t)(0x10d8072c), (EAX));
  /* 10d5f2cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5f2cf jmp 0x10d5f307 */
  goto L_10d5f307;
L_10d5f2d1:;
  /* 10d5f2d1 mov dword ptr [0x10d7fc98], 0x10d7fca0 */
  w32((uint32_t)(0x10d7fc98), (0x10d7fca0u));
  /* 10d5f2db mov ecx, dword ptr [0x10d8072c] */
  ECX = (r32((uint32_t)(0x10d8072c)));
  /* 10d5f2e1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5f2e2 call 0x10d5f8a0 */
  push32(0x10d5f2e7u); f_10d5f8a0();
  /* 10d5f2e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f2ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f2ec mov edx, dword ptr [0x10d8072c] */
  EDX = (r32((uint32_t)(0x10d8072c)));
  /* 10d5f2f2 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f2f3 call 0x10d554f0 */
  push32(0x10d5f2f8u); f_10d554f0();
  /* 10d5f2f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f2fb mov dword ptr [0x10d8072c], 0 */
  w32((uint32_t)(0x10d8072c), (0x0u));
  /* 10d5f305 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d5f307:;
  /* 10d5f307 mov esp, ebp */
  ESP = (EBP);
  /* 10d5f309 pop ebp */
  EBP = (pop32());
  /* 10d5f30a ret  */
  ESPCHK(0x10d5f230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f310 @ 0x10d5f310 (1423 bytes, 533 insns) */
void f_10d5f310(void) {
  FTRACE(0x10d5f310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5f310 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5f311 mov ebp, esp */
  EBP = (ESP);
  /* 10d5f313 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5f316 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d5f31d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5f31f mov ax, word ptr [0x10d80766] */
  AX = (r16((uint32_t)(0x10d80766)));
  /* 10d5f325 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5f328 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f32a mov cx, word ptr [0x10d80768] */
  CX = (r16((uint32_t)(0x10d80768)));
  /* 10d5f331 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d5f334 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5f338 jne 0x10d5f342 */
  if (!C.zf) goto L_10d5f342;
  /* 10d5f33a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5f33d jmp 0x10d5f89b */
  goto L_10d5f89b;
L_10d5f342:;
  /* 10d5f342 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f345 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f348 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f349 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10d5f34b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f34e push eax */
  push32((uint32_t)(EAX));
  /* 10d5f34f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f351 call 0x10d62c20 */
  push32(0x10d5f356u); f_10d62c20();
  /* 10d5f356 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f359 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f35c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f35e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f361 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f364 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f367 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f368 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10d5f36a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f36d push eax */
  push32((uint32_t)(EAX));
  /* 10d5f36e push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f370 call 0x10d62c20 */
  push32(0x10d5f375u); f_10d62c20();
  /* 10d5f375 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f378 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f37b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f37d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f380 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f383 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f386 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f387 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10d5f389 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f38c push eax */
  push32((uint32_t)(EAX));
  /* 10d5f38d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f38f call 0x10d62c20 */
  push32(0x10d5f394u); f_10d62c20();
  /* 10d5f394 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f397 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f39a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f39c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f39f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f3a2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f3a5 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f3a6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10d5f3a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f3ab push eax */
  push32((uint32_t)(EAX));
  /* 10d5f3ac push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f3ae call 0x10d62c20 */
  push32(0x10d5f3b3u); f_10d62c20();
  /* 10d5f3b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f3b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f3b9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f3bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f3be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f3c1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f3c4 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f3c5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10d5f3c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f3ca push eax */
  push32((uint32_t)(EAX));
  /* 10d5f3cb push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f3cd call 0x10d62c20 */
  push32(0x10d5f3d2u); f_10d62c20();
  /* 10d5f3d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f3d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f3d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f3da mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f3dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f3e0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f3e3 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f3e4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10d5f3e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f3e9 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f3ea push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f3ec call 0x10d62c20 */
  push32(0x10d5f3f1u); f_10d62c20();
  /* 10d5f3f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f3f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f3f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f3f9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f3fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f3ff push edx */
  push32((uint32_t)(EDX));
  /* 10d5f400 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10d5f402 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f405 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f406 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f408 call 0x10d62c20 */
  push32(0x10d5f40du); f_10d62c20();
  /* 10d5f40d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f410 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f413 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f415 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f418 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f41b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f41e push edx */
  push32((uint32_t)(EDX));
  /* 10d5f41f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10d5f421 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f424 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f425 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f427 call 0x10d62c20 */
  push32(0x10d5f42cu); f_10d62c20();
  /* 10d5f42c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f42f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f432 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f434 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f437 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f43a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f43d push edx */
  push32((uint32_t)(EDX));
  /* 10d5f43e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10d5f440 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f443 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f444 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f446 call 0x10d62c20 */
  push32(0x10d5f44bu); f_10d62c20();
  /* 10d5f44b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f44e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f451 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f453 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f456 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f459 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f45c push edx */
  push32((uint32_t)(EDX));
  /* 10d5f45d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10d5f45f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f462 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f463 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f465 call 0x10d62c20 */
  push32(0x10d5f46au); f_10d62c20();
  /* 10d5f46a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f46d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f470 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f472 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f475 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f478 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f47b push edx */
  push32((uint32_t)(EDX));
  /* 10d5f47c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10d5f47e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f481 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f482 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f484 call 0x10d62c20 */
  push32(0x10d5f489u); f_10d62c20();
  /* 10d5f489 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f48c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f48f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f491 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f494 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f497 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f49a push edx */
  push32((uint32_t)(EDX));
  /* 10d5f49b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10d5f49d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f4a0 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f4a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f4a3 call 0x10d62c20 */
  push32(0x10d5f4a8u); f_10d62c20();
  /* 10d5f4a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f4ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f4ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f4b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f4b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f4b6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f4b9 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f4ba push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10d5f4bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f4bf push eax */
  push32((uint32_t)(EAX));
  /* 10d5f4c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f4c2 call 0x10d62c20 */
  push32(0x10d5f4c7u); f_10d62c20();
  /* 10d5f4c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f4ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f4cd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f4cf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f4d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f4d5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f4d8 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f4d9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10d5f4db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f4de push eax */
  push32((uint32_t)(EAX));
  /* 10d5f4df push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f4e1 call 0x10d62c20 */
  push32(0x10d5f4e6u); f_10d62c20();
  /* 10d5f4e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f4e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f4ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f4ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f4f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f4f4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f4f7 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f4f8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10d5f4fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f4fd push eax */
  push32((uint32_t)(EAX));
  /* 10d5f4fe push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f500 call 0x10d62c20 */
  push32(0x10d5f505u); f_10d62c20();
  /* 10d5f505 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f508 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f50b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f50d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f510 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f513 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f516 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f517 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10d5f519 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f51c push eax */
  push32((uint32_t)(EAX));
  /* 10d5f51d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f51f call 0x10d62c20 */
  push32(0x10d5f524u); f_10d62c20();
  /* 10d5f524 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f527 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f52a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f52c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f52f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f532 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f535 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f536 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10d5f538 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f53b push eax */
  push32((uint32_t)(EAX));
  /* 10d5f53c push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f53e call 0x10d62c20 */
  push32(0x10d5f543u); f_10d62c20();
  /* 10d5f543 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f546 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f549 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f54b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f54e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f551 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f554 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f555 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10d5f557 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f55a push eax */
  push32((uint32_t)(EAX));
  /* 10d5f55b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f55d call 0x10d62c20 */
  push32(0x10d5f562u); f_10d62c20();
  /* 10d5f562 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f565 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f568 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f56a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f56d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f570 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f573 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f574 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10d5f576 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f579 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f57a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f57c call 0x10d62c20 */
  push32(0x10d5f581u); f_10d62c20();
  /* 10d5f581 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f584 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f587 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f589 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f58c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f58f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f592 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f593 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10d5f595 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f598 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f599 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f59b call 0x10d62c20 */
  push32(0x10d5f5a0u); f_10d62c20();
  /* 10d5f5a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f5a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f5a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f5a8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f5ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f5ae add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f5b1 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f5b2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10d5f5b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f5b7 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f5b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f5ba call 0x10d62c20 */
  push32(0x10d5f5bfu); f_10d62c20();
  /* 10d5f5bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f5c2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f5c5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f5c7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f5ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f5cd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f5d0 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f5d1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10d5f5d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f5d6 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f5d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f5d9 call 0x10d62c20 */
  push32(0x10d5f5deu); f_10d62c20();
  /* 10d5f5de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f5e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f5e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f5e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f5e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f5ec add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f5ef push edx */
  push32((uint32_t)(EDX));
  /* 10d5f5f0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10d5f5f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f5f5 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f5f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f5f8 call 0x10d62c20 */
  push32(0x10d5f5fdu); f_10d62c20();
  /* 10d5f5fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f600 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f603 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f605 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f608 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f60b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f60e push edx */
  push32((uint32_t)(EDX));
  /* 10d5f60f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10d5f611 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f614 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f615 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f617 call 0x10d62c20 */
  push32(0x10d5f61cu); f_10d62c20();
  /* 10d5f61c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f61f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f622 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f624 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f627 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f62a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f62d push edx */
  push32((uint32_t)(EDX));
  /* 10d5f62e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10d5f630 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f633 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f634 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f636 call 0x10d62c20 */
  push32(0x10d5f63bu); f_10d62c20();
  /* 10d5f63b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f63e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f641 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f643 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f646 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f649 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f64c push edx */
  push32((uint32_t)(EDX));
  /* 10d5f64d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10d5f64f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f652 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f653 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f655 call 0x10d62c20 */
  push32(0x10d5f65au); f_10d62c20();
  /* 10d5f65a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f65d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f660 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f662 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f665 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f668 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f66b push edx */
  push32((uint32_t)(EDX));
  /* 10d5f66c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10d5f66e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f671 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f672 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f674 call 0x10d62c20 */
  push32(0x10d5f679u); f_10d62c20();
  /* 10d5f679 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f67c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f67f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f681 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f684 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f687 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f68a push edx */
  push32((uint32_t)(EDX));
  /* 10d5f68b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10d5f68d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f690 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f691 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f693 call 0x10d62c20 */
  push32(0x10d5f698u); f_10d62c20();
  /* 10d5f698 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f69b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f69e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f6a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f6a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f6a6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f6a9 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f6aa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10d5f6ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f6af push eax */
  push32((uint32_t)(EAX));
  /* 10d5f6b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f6b2 call 0x10d62c20 */
  push32(0x10d5f6b7u); f_10d62c20();
  /* 10d5f6b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f6ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f6bd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f6bf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f6c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f6c5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f6c8 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f6c9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10d5f6cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f6ce push eax */
  push32((uint32_t)(EAX));
  /* 10d5f6cf push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f6d1 call 0x10d62c20 */
  push32(0x10d5f6d6u); f_10d62c20();
  /* 10d5f6d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f6d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f6dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f6de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f6e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f6e4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f6e7 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f6e8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10d5f6ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f6ed push eax */
  push32((uint32_t)(EAX));
  /* 10d5f6ee push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f6f0 call 0x10d62c20 */
  push32(0x10d5f6f5u); f_10d62c20();
  /* 10d5f6f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f6f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f6fb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f6fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f700 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f703 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f706 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f707 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10d5f709 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f70c push eax */
  push32((uint32_t)(EAX));
  /* 10d5f70d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f70f call 0x10d62c20 */
  push32(0x10d5f714u); f_10d62c20();
  /* 10d5f714 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f717 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f71a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f71c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f71f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f722 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f728 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f729 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10d5f72b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f72e push eax */
  push32((uint32_t)(EAX));
  /* 10d5f72f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f731 call 0x10d62c20 */
  push32(0x10d5f736u); f_10d62c20();
  /* 10d5f736 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f739 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f73c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f73e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f741 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f744 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f74a push edx */
  push32((uint32_t)(EDX));
  /* 10d5f74b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10d5f74d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f750 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f751 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f753 call 0x10d62c20 */
  push32(0x10d5f758u); f_10d62c20();
  /* 10d5f758 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f75b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f75e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f760 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f763 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f766 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f76c push edx */
  push32((uint32_t)(EDX));
  /* 10d5f76d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10d5f76f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f772 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f773 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f775 call 0x10d62c20 */
  push32(0x10d5f77au); f_10d62c20();
  /* 10d5f77a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f77d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f780 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f782 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f785 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f788 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f78e push edx */
  push32((uint32_t)(EDX));
  /* 10d5f78f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10d5f791 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f794 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f795 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f797 call 0x10d62c20 */
  push32(0x10d5f79cu); f_10d62c20();
  /* 10d5f79c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f79f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f7a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f7a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f7a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f7aa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f7b0 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f7b1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10d5f7b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f7b6 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f7b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f7b9 call 0x10d62c20 */
  push32(0x10d5f7beu); f_10d62c20();
  /* 10d5f7be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f7c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f7c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f7c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f7c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f7cc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f7d2 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f7d3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10d5f7d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f7d8 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f7d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f7db call 0x10d62c20 */
  push32(0x10d5f7e0u); f_10d62c20();
  /* 10d5f7e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f7e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f7e6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f7e8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f7eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f7ee add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f7f4 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f7f5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10d5f7f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f7fa push eax */
  push32((uint32_t)(EAX));
  /* 10d5f7fb push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f7fd call 0x10d62c20 */
  push32(0x10d5f802u); f_10d62c20();
  /* 10d5f802 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f805 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f808 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f80a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f80d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f810 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f816 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f817 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10d5f819 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5f81c push eax */
  push32((uint32_t)(EAX));
  /* 10d5f81d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f81f call 0x10d62c20 */
  push32(0x10d5f824u); f_10d62c20();
  /* 10d5f824 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f827 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f82a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f82c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f82f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f832 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f838 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f839 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10d5f83b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5f83e push eax */
  push32((uint32_t)(EAX));
  /* 10d5f83f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f841 call 0x10d62c20 */
  push32(0x10d5f846u); f_10d62c20();
  /* 10d5f846 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f849 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f84c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f84e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f851 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f854 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f85a push edx */
  push32((uint32_t)(EDX));
  /* 10d5f85b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10d5f85d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5f860 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f861 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f863 call 0x10d62c20 */
  push32(0x10d5f868u); f_10d62c20();
  /* 10d5f868 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f86b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f86e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f870 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f873 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f876 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f87c push edx */
  push32((uint32_t)(EDX));
  /* 10d5f87d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10d5f882 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5f885 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f886 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5f888 call 0x10d62c20 */
  push32(0x10d5f88du); f_10d62c20();
  /* 10d5f88d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f890 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5f893 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5f895 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5f898 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10d5f89b:;
  /* 10d5f89b mov esp, ebp */
  ESP = (EBP);
  /* 10d5f89d pop ebp */
  EBP = (pop32());
  /* 10d5f89e ret  */
  ESPCHK(0x10d5f310u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10d5f8a0 (779 bytes, 265 insns) */
void f_10d5f8a0(void) {
  FTRACE(0x10d5f8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5f8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5f8a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5f8a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5f8a7 jne 0x10d5f8ae */
  if (!C.zf) goto L_10d5f8ae;
  /* 10d5f8a9 jmp 0x10d5fba9 */
  goto L_10d5fba9;
L_10d5f8ae:;
  /* 10d5f8ae push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f8b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f8b3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d5f8b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5f8b7 call 0x10d554f0 */
  push32(0x10d5f8bcu); f_10d554f0();
  /* 10d5f8bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f8bf push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f8c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f8c4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d5f8c7 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f8c8 call 0x10d554f0 */
  push32(0x10d5f8cdu); f_10d554f0();
  /* 10d5f8cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f8d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f8d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f8d5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d5f8d8 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f8d9 call 0x10d554f0 */
  push32(0x10d5f8deu); f_10d554f0();
  /* 10d5f8de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f8e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f8e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f8e6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d5f8e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5f8ea call 0x10d554f0 */
  push32(0x10d5f8efu); f_10d554f0();
  /* 10d5f8ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f8f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f8f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f8f7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d5f8fa push eax */
  push32((uint32_t)(EAX));
  /* 10d5f8fb call 0x10d554f0 */
  push32(0x10d5f900u); f_10d554f0();
  /* 10d5f900 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f903 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f905 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f908 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d5f90b push edx */
  push32((uint32_t)(EDX));
  /* 10d5f90c call 0x10d554f0 */
  push32(0x10d5f911u); f_10d554f0();
  /* 10d5f911 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f914 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f919 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d5f91b push ecx */
  push32((uint32_t)(ECX));
  /* 10d5f91c call 0x10d554f0 */
  push32(0x10d5f921u); f_10d554f0();
  /* 10d5f921 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f924 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f926 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f929 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10d5f92c push eax */
  push32((uint32_t)(EAX));
  /* 10d5f92d call 0x10d554f0 */
  push32(0x10d5f932u); f_10d554f0();
  /* 10d5f932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f935 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f937 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f93a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10d5f93d push edx */
  push32((uint32_t)(EDX));
  /* 10d5f93e call 0x10d554f0 */
  push32(0x10d5f943u); f_10d554f0();
  /* 10d5f943 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f946 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f948 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f94b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10d5f94e push ecx */
  push32((uint32_t)(ECX));
  /* 10d5f94f call 0x10d554f0 */
  push32(0x10d5f954u); f_10d554f0();
  /* 10d5f954 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f957 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f959 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f95c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10d5f95f push eax */
  push32((uint32_t)(EAX));
  /* 10d5f960 call 0x10d554f0 */
  push32(0x10d5f965u); f_10d554f0();
  /* 10d5f965 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f968 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f96a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f96d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10d5f970 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f971 call 0x10d554f0 */
  push32(0x10d5f976u); f_10d554f0();
  /* 10d5f976 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f979 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f97b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f97e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10d5f981 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5f982 call 0x10d554f0 */
  push32(0x10d5f987u); f_10d554f0();
  /* 10d5f987 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f98a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f98c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f98f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10d5f992 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f993 call 0x10d554f0 */
  push32(0x10d5f998u); f_10d554f0();
  /* 10d5f998 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f99b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f99d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f9a0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10d5f9a3 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f9a4 call 0x10d554f0 */
  push32(0x10d5f9a9u); f_10d554f0();
  /* 10d5f9a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f9ac push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f9ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f9b1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10d5f9b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5f9b5 call 0x10d554f0 */
  push32(0x10d5f9bau); f_10d554f0();
  /* 10d5f9ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f9bd push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f9bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f9c2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10d5f9c5 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f9c6 call 0x10d554f0 */
  push32(0x10d5f9cbu); f_10d554f0();
  /* 10d5f9cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f9ce push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f9d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f9d3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10d5f9d6 push edx */
  push32((uint32_t)(EDX));
  /* 10d5f9d7 call 0x10d554f0 */
  push32(0x10d5f9dcu); f_10d554f0();
  /* 10d5f9dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f9df push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f9e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f9e4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10d5f9e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5f9e8 call 0x10d554f0 */
  push32(0x10d5f9edu); f_10d554f0();
  /* 10d5f9ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5f9f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5f9f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5f9f5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10d5f9f8 push eax */
  push32((uint32_t)(EAX));
  /* 10d5f9f9 call 0x10d554f0 */
  push32(0x10d5f9feu); f_10d554f0();
  /* 10d5f9fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fa01 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fa03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fa06 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10d5fa09 push edx */
  push32((uint32_t)(EDX));
  /* 10d5fa0a call 0x10d554f0 */
  push32(0x10d5fa0fu); f_10d554f0();
  /* 10d5fa0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fa12 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fa14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fa17 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10d5fa1a push ecx */
  push32((uint32_t)(ECX));
  /* 10d5fa1b call 0x10d554f0 */
  push32(0x10d5fa20u); f_10d554f0();
  /* 10d5fa20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fa23 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fa25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fa28 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10d5fa2b push eax */
  push32((uint32_t)(EAX));
  /* 10d5fa2c call 0x10d554f0 */
  push32(0x10d5fa31u); f_10d554f0();
  /* 10d5fa31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fa34 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fa36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fa39 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10d5fa3c push edx */
  push32((uint32_t)(EDX));
  /* 10d5fa3d call 0x10d554f0 */
  push32(0x10d5fa42u); f_10d554f0();
  /* 10d5fa42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fa45 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fa47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fa4a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10d5fa4d push ecx */
  push32((uint32_t)(ECX));
  /* 10d5fa4e call 0x10d554f0 */
  push32(0x10d5fa53u); f_10d554f0();
  /* 10d5fa53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fa56 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fa58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fa5b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10d5fa5e push eax */
  push32((uint32_t)(EAX));
  /* 10d5fa5f call 0x10d554f0 */
  push32(0x10d5fa64u); f_10d554f0();
  /* 10d5fa64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fa67 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fa69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fa6c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10d5fa6f push edx */
  push32((uint32_t)(EDX));
  /* 10d5fa70 call 0x10d554f0 */
  push32(0x10d5fa75u); f_10d554f0();
  /* 10d5fa75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fa78 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fa7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fa7d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10d5fa80 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5fa81 call 0x10d554f0 */
  push32(0x10d5fa86u); f_10d554f0();
  /* 10d5fa86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fa89 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fa8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fa8e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10d5fa91 push eax */
  push32((uint32_t)(EAX));
  /* 10d5fa92 call 0x10d554f0 */
  push32(0x10d5fa97u); f_10d554f0();
  /* 10d5fa97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fa9a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fa9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fa9f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10d5faa2 push edx */
  push32((uint32_t)(EDX));
  /* 10d5faa3 call 0x10d554f0 */
  push32(0x10d5faa8u); f_10d554f0();
  /* 10d5faa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5faab push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5faad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fab0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10d5fab3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5fab4 call 0x10d554f0 */
  push32(0x10d5fab9u); f_10d554f0();
  /* 10d5fab9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fabc push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fabe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fac1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10d5fac4 push eax */
  push32((uint32_t)(EAX));
  /* 10d5fac5 call 0x10d554f0 */
  push32(0x10d5facau); f_10d554f0();
  /* 10d5faca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5facd push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5facf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fad2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10d5fad8 push edx */
  push32((uint32_t)(EDX));
  /* 10d5fad9 call 0x10d554f0 */
  push32(0x10d5fadeu); f_10d554f0();
  /* 10d5fade add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fae1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fae3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fae6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10d5faec push ecx */
  push32((uint32_t)(ECX));
  /* 10d5faed call 0x10d554f0 */
  push32(0x10d5faf2u); f_10d554f0();
  /* 10d5faf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5faf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5faf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fafa mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10d5fb00 push eax */
  push32((uint32_t)(EAX));
  /* 10d5fb01 call 0x10d554f0 */
  push32(0x10d5fb06u); f_10d554f0();
  /* 10d5fb06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fb09 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fb0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fb0e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10d5fb14 push edx */
  push32((uint32_t)(EDX));
  /* 10d5fb15 call 0x10d554f0 */
  push32(0x10d5fb1au); f_10d554f0();
  /* 10d5fb1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fb1d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fb1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fb22 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10d5fb28 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5fb29 call 0x10d554f0 */
  push32(0x10d5fb2eu); f_10d554f0();
  /* 10d5fb2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fb31 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fb33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fb36 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10d5fb3c push eax */
  push32((uint32_t)(EAX));
  /* 10d5fb3d call 0x10d554f0 */
  push32(0x10d5fb42u); f_10d554f0();
  /* 10d5fb42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fb45 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fb47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fb4a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10d5fb50 push edx */
  push32((uint32_t)(EDX));
  /* 10d5fb51 call 0x10d554f0 */
  push32(0x10d5fb56u); f_10d554f0();
  /* 10d5fb56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fb59 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fb5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fb5e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10d5fb64 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5fb65 call 0x10d554f0 */
  push32(0x10d5fb6au); f_10d554f0();
  /* 10d5fb6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fb6d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fb6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fb72 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10d5fb78 push eax */
  push32((uint32_t)(EAX));
  /* 10d5fb79 call 0x10d554f0 */
  push32(0x10d5fb7eu); f_10d554f0();
  /* 10d5fb7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fb81 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fb83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fb86 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10d5fb8c push edx */
  push32((uint32_t)(EDX));
  /* 10d5fb8d call 0x10d554f0 */
  push32(0x10d5fb92u); f_10d554f0();
  /* 10d5fb92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fb95 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fb97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fb9a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10d5fba0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5fba1 call 0x10d554f0 */
  push32(0x10d5fba6u); f_10d554f0();
  /* 10d5fba6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5fba9:;
  /* 10d5fba9 pop ebp */
  EBP = (pop32());
  /* 10d5fbaa ret  */
  ESPCHK(0x10d5f8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbb0 @ 0x10d5fbb0 (678 bytes, 180 insns) */
void f_10d5fbb0(void) {
  FTRACE(0x10d5fbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5fbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5fbb1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5fbb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5fbb6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d5fbbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5fbbf mov ax, word ptr [0x10d80762] */
  AX = (r16((uint32_t)(0x10d80762)));
  /* 10d5fbc5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5fbc8 cmp dword ptr [0x10d80708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5fbcf je 0x10d5fd2a */
  if (C.zf) goto L_10d5fd2a;
  /* 10d5fbd5 push 0x10d80730 */
  push32((uint32_t)(0x10d80730u));
  /* 10d5fbda push 0xe */
  push32((uint32_t)(0xeu));
  /* 10d5fbdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5fbdf push ecx */
  push32((uint32_t)(ECX));
  /* 10d5fbe0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5fbe2 call 0x10d62c20 */
  push32(0x10d5fbe7u); f_10d62c20();
  /* 10d5fbe7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fbea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5fbed or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5fbef mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d5fbf2 push 0x10d80734 */
  push32((uint32_t)(0x10d80734u));
  /* 10d5fbf7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10d5fbf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5fbfc push eax */
  push32((uint32_t)(EAX));
  /* 10d5fbfd push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5fbff call 0x10d62c20 */
  push32(0x10d5fc04u); f_10d62c20();
  /* 10d5fc04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fc07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5fc0a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5fc0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d5fc0f push 0x10d80738 */
  push32((uint32_t)(0x10d80738u));
  /* 10d5fc14 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10d5fc16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5fc19 push edx */
  push32((uint32_t)(EDX));
  /* 10d5fc1a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5fc1c call 0x10d62c20 */
  push32(0x10d5fc21u); f_10d62c20();
  /* 10d5fc21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fc24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5fc27 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5fc29 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d5fc2c mov edx, dword ptr [0x10d80738] */
  EDX = (r32((uint32_t)(0x10d80738)));
  /* 10d5fc32 push edx */
  push32((uint32_t)(EDX));
  /* 10d5fc33 call 0x10d5fe60 */
  push32(0x10d5fc38u); f_10d5fe60();
  /* 10d5fc38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fc3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5fc3f je 0x10d5fc99 */
  if (C.zf) goto L_10d5fc99;
  /* 10d5fc41 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fc43 mov eax, dword ptr [0x10d80730] */
  EAX = (r32((uint32_t)(0x10d80730)));
  /* 10d5fc48 push eax */
  push32((uint32_t)(EAX));
  /* 10d5fc49 call 0x10d554f0 */
  push32(0x10d5fc4eu); f_10d554f0();
  /* 10d5fc4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fc51 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fc53 mov ecx, dword ptr [0x10d80734] */
  ECX = (r32((uint32_t)(0x10d80734)));
  /* 10d5fc59 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5fc5a call 0x10d554f0 */
  push32(0x10d5fc5fu); f_10d554f0();
  /* 10d5fc5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fc62 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fc64 mov edx, dword ptr [0x10d80738] */
  EDX = (r32((uint32_t)(0x10d80738)));
  /* 10d5fc6a push edx */
  push32((uint32_t)(EDX));
  /* 10d5fc6b call 0x10d554f0 */
  push32(0x10d5fc70u); f_10d554f0();
  /* 10d5fc70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fc73 mov dword ptr [0x10d80730], 0 */
  w32((uint32_t)(0x10d80730), (0x0u));
  /* 10d5fc7d mov dword ptr [0x10d80734], 0 */
  w32((uint32_t)(0x10d80734), (0x0u));
  /* 10d5fc87 mov dword ptr [0x10d80738], 0 */
  w32((uint32_t)(0x10d80738), (0x0u));
  /* 10d5fc91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5fc94 jmp 0x10d5fe52 */
  goto L_10d5fe52;
L_10d5fc99:;
  /* 10d5fc99 mov eax, dword ptr [0x10d7fd88] */
  EAX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5fc9e cmp dword ptr [eax], 0x10d7fd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10d7fd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5fca4 je 0x10d5fce0 */
  if (C.zf) goto L_10d5fce0;
  /* 10d5fca6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fca8 mov ecx, dword ptr [0x10d7fd88] */
  ECX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5fcae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d5fcb0 push edx */
  push32((uint32_t)(EDX));
  /* 10d5fcb1 call 0x10d554f0 */
  push32(0x10d5fcb6u); f_10d554f0();
  /* 10d5fcb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fcb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fcbb mov eax, dword ptr [0x10d7fd88] */
  EAX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5fcc0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d5fcc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5fcc4 call 0x10d554f0 */
  push32(0x10d5fcc9u); f_10d554f0();
  /* 10d5fcc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fccc push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fcce mov edx, dword ptr [0x10d7fd88] */
  EDX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5fcd4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d5fcd7 push eax */
  push32((uint32_t)(EAX));
  /* 10d5fcd8 call 0x10d554f0 */
  push32(0x10d5fcddu); f_10d554f0();
  /* 10d5fcdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5fce0:;
  /* 10d5fce0 mov ecx, dword ptr [0x10d7fd88] */
  ECX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5fce6 mov edx, dword ptr [0x10d80730] */
  EDX = (r32((uint32_t)(0x10d80730)));
  /* 10d5fcec mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d5fcee mov eax, dword ptr [0x10d7fd88] */
  EAX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5fcf3 mov ecx, dword ptr [0x10d80734] */
  ECX = (r32((uint32_t)(0x10d80734)));
  /* 10d5fcf9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10d5fcfc mov edx, dword ptr [0x10d7fd88] */
  EDX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5fd02 mov eax, dword ptr [0x10d80738] */
  EAX = (r32((uint32_t)(0x10d80738)));
  /* 10d5fd07 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d5fd0a mov ecx, dword ptr [0x10d7fd88] */
  ECX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5fd10 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d5fd12 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d5fd14 mov byte ptr [0x10d7eea8], al */
  w8((uint32_t)(0x10d7eea8), (AL));
  /* 10d5fd19 mov dword ptr [0x10d7eeac], 1 */
  w32((uint32_t)(0x10d7eeac), (0x1u));
  /* 10d5fd23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5fd25 jmp 0x10d5fe52 */
  goto L_10d5fe52;
L_10d5fd2a:;
  /* 10d5fd2a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fd2c mov ecx, dword ptr [0x10d80730] */
  ECX = (r32((uint32_t)(0x10d80730)));
  /* 10d5fd32 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5fd33 call 0x10d554f0 */
  push32(0x10d5fd38u); f_10d554f0();
  /* 10d5fd38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fd3b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fd3d mov edx, dword ptr [0x10d80734] */
  EDX = (r32((uint32_t)(0x10d80734)));
  /* 10d5fd43 push edx */
  push32((uint32_t)(EDX));
  /* 10d5fd44 call 0x10d554f0 */
  push32(0x10d5fd49u); f_10d554f0();
  /* 10d5fd49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fd4c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fd4e mov eax, dword ptr [0x10d80738] */
  EAX = (r32((uint32_t)(0x10d80738)));
  /* 10d5fd53 push eax */
  push32((uint32_t)(EAX));
  /* 10d5fd54 call 0x10d554f0 */
  push32(0x10d5fd59u); f_10d554f0();
  /* 10d5fd59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fd5c mov dword ptr [0x10d80730], 0 */
  w32((uint32_t)(0x10d80730), (0x0u));
  /* 10d5fd66 mov dword ptr [0x10d80734], 0 */
  w32((uint32_t)(0x10d80734), (0x0u));
  /* 10d5fd70 mov dword ptr [0x10d80738], 0 */
  w32((uint32_t)(0x10d80738), (0x0u));
  /* 10d5fd7a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10d5fd7f push 0x10d7c15c */
  push32((uint32_t)(0x10d7c15cu));
  /* 10d5fd84 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fd86 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fd88 call 0x10d54a60 */
  push32(0x10d5fd8du); f_10d54a60();
  /* 10d5fd8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fd90 mov ecx, dword ptr [0x10d7fd88] */
  ECX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5fd96 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d5fd98 mov edx, dword ptr [0x10d7fd88] */
  EDX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5fd9e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5fda1 jne 0x10d5fdab */
  if (!C.zf) goto L_10d5fdab;
  /* 10d5fda3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5fda6 jmp 0x10d5fe52 */
  goto L_10d5fe52;
L_10d5fdab:;
  /* 10d5fdab push 0x10d7c12c */
  push32((uint32_t)(0x10d7c12cu));
  /* 10d5fdb0 mov eax, dword ptr [0x10d7fd88] */
  EAX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5fdb5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d5fdb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5fdb8 call 0x10d57a10 */
  push32(0x10d5fdbdu); f_10d57a10();
  /* 10d5fdbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fdc0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10d5fdc5 push 0x10d7c15c */
  push32((uint32_t)(0x10d7c15cu));
  /* 10d5fdca push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fdcc push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fdce call 0x10d54a60 */
  push32(0x10d5fdd3u); f_10d54a60();
  /* 10d5fdd3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fdd6 mov edx, dword ptr [0x10d7fd88] */
  EDX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5fddc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10d5fddf mov eax, dword ptr [0x10d7fd88] */
  EAX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5fde4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5fde8 jne 0x10d5fdef */
  if (!C.zf) goto L_10d5fdef;
  /* 10d5fdea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5fded jmp 0x10d5fe52 */
  goto L_10d5fe52;
L_10d5fdef:;
  /* 10d5fdef mov ecx, dword ptr [0x10d7fd88] */
  ECX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5fdf5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d5fdf8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10d5fdfb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10d5fe00 push 0x10d7c15c */
  push32((uint32_t)(0x10d7c15cu));
  /* 10d5fe05 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fe07 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fe09 call 0x10d54a60 */
  push32(0x10d5fe0eu); f_10d54a60();
  /* 10d5fe0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fe11 mov ecx, dword ptr [0x10d7fd88] */
  ECX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5fe17 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10d5fe1a mov edx, dword ptr [0x10d7fd88] */
  EDX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5fe20 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5fe24 jne 0x10d5fe2b */
  if (!C.zf) goto L_10d5fe2b;
  /* 10d5fe26 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5fe29 jmp 0x10d5fe52 */
  goto L_10d5fe52;
L_10d5fe2b:;
  /* 10d5fe2b mov eax, dword ptr [0x10d7fd88] */
  EAX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5fe30 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d5fe33 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10d5fe36 mov edx, dword ptr [0x10d7fd88] */
  EDX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5fe3c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d5fe3e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d5fe40 mov byte ptr [0x10d7eea8], cl */
  w8((uint32_t)(0x10d7eea8), (CL));
  /* 10d5fe46 mov dword ptr [0x10d7eeac], 1 */
  w32((uint32_t)(0x10d7eeac), (0x1u));
  /* 10d5fe50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d5fe52:;
  /* 10d5fe52 mov esp, ebp */
  ESP = (EBP);
  /* 10d5fe54 pop ebp */
  EBP = (pop32());
  /* 10d5fe55 ret  */
  ESPCHK(0x10d5fbb0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10d5fe60 (125 bytes, 49 insns) */
void f_10d5fe60(void) {
  FTRACE(0x10d5fe60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5fe60 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5fe61 mov ebp, esp */
  EBP = (ESP);
  /* 10d5fe63 push ecx */
  push32((uint32_t)(ECX));
L_10d5fe64:;
  /* 10d5fe64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fe67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d5fe6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5fe6c je 0x10d5fed9 */
  if (C.zf) goto L_10d5fed9;
  /* 10d5fe6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fe71 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d5fe74 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5fe77 jl 0x10d5fe9d */
  if ((C.sf!=C.of)) goto L_10d5fe9d;
  /* 10d5fe79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fe7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d5fe7f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5fe82 jg 0x10d5fe9d */
  if ((!C.zf&&C.sf==C.of)) goto L_10d5fe9d;
  /* 10d5fe84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fe87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d5fe8a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5fe8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fe90 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10d5fe92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fe95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fe98 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d5fe9b jmp 0x10d5fed7 */
  goto L_10d5fed7;
L_10d5fe9d:;
  /* 10d5fe9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fea0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d5fea3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5fea6 jne 0x10d5fece */
  if (!C.zf) goto L_10d5fece;
  /* 10d5fea8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5feab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d5feae:;
  /* 10d5feae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5feb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5feb4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10d5feb7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d5feb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5febc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5febf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d5fec2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5fec5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d5fec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5feca jne 0x10d5feae */
  if (!C.zf) goto L_10d5feae;
  /* 10d5fecc jmp 0x10d5fed7 */
  goto L_10d5fed7;
L_10d5fece:;
  /* 10d5fece mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5fed1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5fed4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10d5fed7:;
  /* 10d5fed7 jmp 0x10d5fe64 */
  goto L_10d5fe64;
L_10d5fed9:;
  /* 10d5fed9 mov esp, ebp */
  ESP = (EBP);
  /* 10d5fedb pop ebp */
  EBP = (pop32());
  /* 10d5fedc ret  */
  ESPCHK(0x10d5fe60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fee0 @ 0x10d5fee0 (304 bytes, 85 insns) */
void f_10d5fee0(void) {
  FTRACE(0x10d5fee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5fee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d5fee1 mov ebp, esp */
  EBP = (ESP);
  /* 10d5fee3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5fee4 cmp dword ptr [0x10d80704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5feeb je 0x10d5ffac */
  if (C.zf) goto L_10d5ffac;
  /* 10d5fef1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10d5fef3 push 0x10d7c168 */
  push32((uint32_t)(0x10d7c168u));
  /* 10d5fef8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fefa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10d5fefc push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5fefe call 0x10d54e70 */
  push32(0x10d5ff03u); f_10d54e70();
  /* 10d5ff03 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ff06 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5ff09 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5ff0d jne 0x10d5ff19 */
  if (!C.zf) goto L_10d5ff19;
  /* 10d5ff0f mov eax, 1 */
  EAX = (0x1u);
  /* 10d5ff14 jmp 0x10d6000c */
  goto L_10d6000c;
L_10d5ff19:;
  /* 10d5ff19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5ff1c push eax */
  push32((uint32_t)(EAX));
  /* 10d5ff1d call 0x10d60010 */
  push32(0x10d5ff22u); f_10d60010();
  /* 10d5ff22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ff25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5ff27 je 0x10d5ff4d */
  if (C.zf) goto L_10d5ff4d;
  /* 10d5ff29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5ff2c push ecx */
  push32((uint32_t)(ECX));
  /* 10d5ff2d call 0x10d602a0 */
  push32(0x10d5ff32u); f_10d602a0();
  /* 10d5ff32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ff35 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5ff37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5ff3a push edx */
  push32((uint32_t)(EDX));
  /* 10d5ff3b call 0x10d554f0 */
  push32(0x10d5ff40u); f_10d554f0();
  /* 10d5ff40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ff43 mov eax, 1 */
  EAX = (0x1u);
  /* 10d5ff48 jmp 0x10d6000c */
  goto L_10d6000c;
L_10d5ff4d:;
  /* 10d5ff4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5ff50 mov ecx, dword ptr [0x10d7fd88] */
  ECX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5ff56 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d5ff58 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d5ff5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5ff5d mov ecx, dword ptr [0x10d7fd88] */
  ECX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5ff63 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d5ff66 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d5ff69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5ff6c mov ecx, dword ptr [0x10d7fd88] */
  ECX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5ff72 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d5ff75 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10d5ff78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5ff7b mov dword ptr [0x10d7fd88], eax */
  w32((uint32_t)(0x10d7fd88), (EAX));
  /* 10d5ff80 mov ecx, dword ptr [0x10d8073c] */
  ECX = (r32((uint32_t)(0x10d8073c)));
  /* 10d5ff86 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5ff87 call 0x10d602a0 */
  push32(0x10d5ff8cu); f_10d602a0();
  /* 10d5ff8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ff8f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5ff91 mov edx, dword ptr [0x10d8073c] */
  EDX = (r32((uint32_t)(0x10d8073c)));
  /* 10d5ff97 push edx */
  push32((uint32_t)(EDX));
  /* 10d5ff98 call 0x10d554f0 */
  push32(0x10d5ff9du); f_10d554f0();
  /* 10d5ff9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ffa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5ffa3 mov dword ptr [0x10d8073c], eax */
  w32((uint32_t)(0x10d8073c), (EAX));
  /* 10d5ffa8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5ffaa jmp 0x10d6000c */
  goto L_10d6000c;
L_10d5ffac:;
  /* 10d5ffac mov ecx, dword ptr [0x10d7fd88] */
  ECX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5ffb2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d5ffb4 mov dword ptr [0x10d7fd58], edx */
  w32((uint32_t)(0x10d7fd58), (EDX));
  /* 10d5ffba mov eax, dword ptr [0x10d7fd88] */
  EAX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5ffbf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d5ffc2 mov dword ptr [0x10d7fd5c], ecx */
  w32((uint32_t)(0x10d7fd5c), (ECX));
  /* 10d5ffc8 mov edx, dword ptr [0x10d7fd88] */
  EDX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d5ffce mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d5ffd1 mov dword ptr [0x10d7fd60], eax */
  w32((uint32_t)(0x10d7fd60), (EAX));
  /* 10d5ffd6 mov dword ptr [0x10d7fd88], 0x10d7fd58 */
  w32((uint32_t)(0x10d7fd88), (0x10d7fd58u));
  /* 10d5ffe0 mov ecx, dword ptr [0x10d8073c] */
  ECX = (r32((uint32_t)(0x10d8073c)));
  /* 10d5ffe6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5ffe7 call 0x10d602a0 */
  push32(0x10d5ffecu); f_10d602a0();
  /* 10d5ffec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5ffef push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5fff1 mov edx, dword ptr [0x10d8073c] */
  EDX = (r32((uint32_t)(0x10d8073c)));
  /* 10d5fff7 push edx */
  push32((uint32_t)(EDX));
  /* 10d5fff8 call 0x10d554f0 */
  push32(0x10d5fffdu); f_10d554f0();
  /* 10d5fffd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60000 mov dword ptr [0x10d8073c], 0 */
  w32((uint32_t)(0x10d8073c), (0x0u));
  /* 10d6000a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d6000c:;
  /* 10d6000c mov esp, ebp */
  ESP = (EBP);
  /* 10d6000e pop ebp */
  EBP = (pop32());
  /* 10d6000f ret  */
  ESPCHK(0x10d5fee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010010 @ 0x10d60010 (525 bytes, 200 insns) */
void f_10d60010(void) {
  FTRACE(0x10d60010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d60010 push ebp */
  push32((uint32_t)(EBP));
  /* 10d60011 mov ebp, esp */
  EBP = (ESP);
  /* 10d60013 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d60016 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d6001d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d6001f mov ax, word ptr [0x10d8075c] */
  AX = (r16((uint32_t)(0x10d8075c)));
  /* 10d60025 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d60028 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6002c jne 0x10d60036 */
  if (!C.zf) goto L_10d60036;
  /* 10d6002e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d60031 jmp 0x10d60219 */
  goto L_10d60219;
L_10d60036:;
  /* 10d60036 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60039 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6003c push ecx */
  push32((uint32_t)(ECX));
  /* 10d6003d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10d6003f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d60042 push edx */
  push32((uint32_t)(EDX));
  /* 10d60043 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d60045 call 0x10d62c20 */
  push32(0x10d6004au); f_10d62c20();
  /* 10d6004a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6004d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d60050 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d60052 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d60055 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60058 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6005b push edx */
  push32((uint32_t)(EDX));
  /* 10d6005c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10d6005e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d60061 push eax */
  push32((uint32_t)(EAX));
  /* 10d60062 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d60064 call 0x10d62c20 */
  push32(0x10d60069u); f_10d62c20();
  /* 10d60069 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6006c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d6006f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d60071 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d60074 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60077 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6007a push edx */
  push32((uint32_t)(EDX));
  /* 10d6007b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10d6007d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d60080 push eax */
  push32((uint32_t)(EAX));
  /* 10d60081 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d60083 call 0x10d62c20 */
  push32(0x10d60088u); f_10d62c20();
  /* 10d60088 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6008b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d6008e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d60090 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d60093 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60096 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60099 push edx */
  push32((uint32_t)(EDX));
  /* 10d6009a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10d6009c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d6009f push eax */
  push32((uint32_t)(EAX));
  /* 10d600a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d600a2 call 0x10d62c20 */
  push32(0x10d600a7u); f_10d62c20();
  /* 10d600a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d600aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d600ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d600af mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d600b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d600b5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d600b8 push edx */
  push32((uint32_t)(EDX));
  /* 10d600b9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10d600bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d600be push eax */
  push32((uint32_t)(EAX));
  /* 10d600bf push 1 */
  push32((uint32_t)(0x1u));
  /* 10d600c1 call 0x10d62c20 */
  push32(0x10d600c6u); f_10d62c20();
  /* 10d600c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d600c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d600cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d600ce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d600d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d600d4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10d600d7 push eax */
  push32((uint32_t)(EAX));
  /* 10d600d8 call 0x10d60220 */
  push32(0x10d600ddu); f_10d60220();
  /* 10d600dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d600e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d600e3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d600e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d600e7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10d600e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d600ec push edx */
  push32((uint32_t)(EDX));
  /* 10d600ed push 1 */
  push32((uint32_t)(0x1u));
  /* 10d600ef call 0x10d62c20 */
  push32(0x10d600f4u); f_10d62c20();
  /* 10d600f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d600f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d600fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d600fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d600ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60102 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60105 push edx */
  push32((uint32_t)(EDX));
  /* 10d60106 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10d60108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d6010b push eax */
  push32((uint32_t)(EAX));
  /* 10d6010c push 1 */
  push32((uint32_t)(0x1u));
  /* 10d6010e call 0x10d62c20 */
  push32(0x10d60113u); f_10d62c20();
  /* 10d60113 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60116 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d60119 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d6011b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d6011e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60121 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60124 push edx */
  push32((uint32_t)(EDX));
  /* 10d60125 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10d60127 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d6012a push eax */
  push32((uint32_t)(EAX));
  /* 10d6012b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6012d call 0x10d62c20 */
  push32(0x10d60132u); f_10d62c20();
  /* 10d60132 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60135 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d60138 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d6013a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d6013d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60140 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60143 push edx */
  push32((uint32_t)(EDX));
  /* 10d60144 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d60146 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d60149 push eax */
  push32((uint32_t)(EAX));
  /* 10d6014a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6014c call 0x10d62c20 */
  push32(0x10d60151u); f_10d62c20();
  /* 10d60151 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60154 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d60157 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d60159 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d6015c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6015f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60162 push edx */
  push32((uint32_t)(EDX));
  /* 10d60163 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10d60165 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d60168 push eax */
  push32((uint32_t)(EAX));
  /* 10d60169 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6016b call 0x10d62c20 */
  push32(0x10d60170u); f_10d62c20();
  /* 10d60170 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60173 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d60176 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d60178 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d6017b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6017e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60181 push edx */
  push32((uint32_t)(EDX));
  /* 10d60182 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10d60184 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d60187 push eax */
  push32((uint32_t)(EAX));
  /* 10d60188 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6018a call 0x10d62c20 */
  push32(0x10d6018fu); f_10d62c20();
  /* 10d6018f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60192 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d60195 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d60197 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d6019a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6019d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d601a0 push edx */
  push32((uint32_t)(EDX));
  /* 10d601a1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10d601a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d601a6 push eax */
  push32((uint32_t)(EAX));
  /* 10d601a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d601a9 call 0x10d62c20 */
  push32(0x10d601aeu); f_10d62c20();
  /* 10d601ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d601b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d601b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d601b6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d601b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d601bc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d601bf push edx */
  push32((uint32_t)(EDX));
  /* 10d601c0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10d601c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d601c5 push eax */
  push32((uint32_t)(EAX));
  /* 10d601c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d601c8 call 0x10d62c20 */
  push32(0x10d601cdu); f_10d62c20();
  /* 10d601cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d601d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d601d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d601d5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d601d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d601db add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d601de push edx */
  push32((uint32_t)(EDX));
  /* 10d601df push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10d601e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d601e4 push eax */
  push32((uint32_t)(EAX));
  /* 10d601e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d601e7 call 0x10d62c20 */
  push32(0x10d601ecu); f_10d62c20();
  /* 10d601ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d601ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d601f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d601f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d601f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d601fa add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d601fd push edx */
  push32((uint32_t)(EDX));
  /* 10d601fe push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10d60200 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d60203 push eax */
  push32((uint32_t)(EAX));
  /* 10d60204 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d60206 call 0x10d62c20 */
  push32(0x10d6020bu); f_10d62c20();
  /* 10d6020b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6020e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d60211 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d60213 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d60216 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d60219:;
  /* 10d60219 mov esp, ebp */
  ESP = (EBP);
  /* 10d6021b pop ebp */
  EBP = (pop32());
  /* 10d6021c ret  */
  ESPCHK(0x10d60010u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10d60220 (125 bytes, 49 insns) */
void f_10d60220(void) {
  FTRACE(0x10d60220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d60220 push ebp */
  push32((uint32_t)(EBP));
  /* 10d60221 mov ebp, esp */
  EBP = (ESP);
  /* 10d60223 push ecx */
  push32((uint32_t)(ECX));
L_10d60224:;
  /* 10d60224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60227 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d6022a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d6022c je 0x10d60299 */
  if (C.zf) goto L_10d60299;
  /* 10d6022e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60231 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d60234 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60237 jl 0x10d6025d */
  if ((C.sf!=C.of)) goto L_10d6025d;
  /* 10d60239 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6023c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d6023f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60242 jg 0x10d6025d */
  if ((!C.zf&&C.sf==C.of)) goto L_10d6025d;
  /* 10d60244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60247 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d6024a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d6024d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60250 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10d60252 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60255 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60258 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d6025b jmp 0x10d60297 */
  goto L_10d60297;
L_10d6025d:;
  /* 10d6025d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60260 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d60263 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60266 jne 0x10d6028e */
  if (!C.zf) goto L_10d6028e;
  /* 10d60268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6026b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d6026e:;
  /* 10d6026e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d60271 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d60274 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10d60277 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d60279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d6027c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6027f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d60282 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d60285 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d60288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d6028a jne 0x10d6026e */
  if (!C.zf) goto L_10d6026e;
  /* 10d6028c jmp 0x10d60297 */
  goto L_10d60297;
L_10d6028e:;
  /* 10d6028e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60291 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60294 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10d60297:;
  /* 10d60297 jmp 0x10d60224 */
  goto L_10d60224;
L_10d60299:;
  /* 10d60299 mov esp, ebp */
  ESP = (EBP);
  /* 10d6029b pop ebp */
  EBP = (pop32());
  /* 10d6029c ret  */
  ESPCHK(0x10d60220u, _esp0);
  ESP += 4; return;
}

/* FUN_100102a0 @ 0x10d602a0 (147 bytes, 52 insns) */
void f_10d602a0(void) {
  FTRACE(0x10d602a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d602a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d602a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d602a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d602a7 jne 0x10d602ae */
  if (!C.zf) goto L_10d602ae;
  /* 10d602a9 jmp 0x10d60331 */
  goto L_10d60331;
L_10d602ae:;
  /* 10d602ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d602b1 cmp dword ptr [eax + 0xc], 0x10d80798 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10d80798u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d602b8 je 0x10d60331 */
  if (C.zf) goto L_10d60331;
  /* 10d602ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10d602bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d602bf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d602c2 push edx */
  push32((uint32_t)(EDX));
  /* 10d602c3 call 0x10d554f0 */
  push32(0x10d602c8u); f_10d554f0();
  /* 10d602c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d602cb push 2 */
  push32((uint32_t)(0x2u));
  /* 10d602cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d602d0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d602d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d602d4 call 0x10d554f0 */
  push32(0x10d602d9u); f_10d554f0();
  /* 10d602d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d602dc push 2 */
  push32((uint32_t)(0x2u));
  /* 10d602de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d602e1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d602e4 push eax */
  push32((uint32_t)(EAX));
  /* 10d602e5 call 0x10d554f0 */
  push32(0x10d602eau); f_10d554f0();
  /* 10d602ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d602ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10d602ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d602f2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d602f5 push edx */
  push32((uint32_t)(EDX));
  /* 10d602f6 call 0x10d554f0 */
  push32(0x10d602fbu); f_10d554f0();
  /* 10d602fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d602fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10d60300 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60303 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10d60306 push ecx */
  push32((uint32_t)(ECX));
  /* 10d60307 call 0x10d554f0 */
  push32(0x10d6030cu); f_10d554f0();
  /* 10d6030c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6030f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d60311 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60314 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10d60317 push eax */
  push32((uint32_t)(EAX));
  /* 10d60318 call 0x10d554f0 */
  push32(0x10d6031du); f_10d554f0();
  /* 10d6031d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60320 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d60322 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60325 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10d60328 push edx */
  push32((uint32_t)(EDX));
  /* 10d60329 call 0x10d554f0 */
  push32(0x10d6032eu); f_10d554f0();
  /* 10d6032e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d60331:;
  /* 10d60331 pop ebp */
  EBP = (pop32());
  /* 10d60332 ret  */
  ESPCHK(0x10d602a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010340 @ 0x10d60340 (928 bytes, 284 insns) */
void f_10d60340(void) {
  FTRACE(0x10d60340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d60340 push ebp */
  push32((uint32_t)(EBP));
  /* 10d60341 mov ebp, esp */
  EBP = (ESP);
  /* 10d60343 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d60346 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10d6034d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10d60354 cmp dword ptr [0x10d80700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6035b je 0x10d60691 */
  if (C.zf) goto L_10d60691;
  /* 10d60361 cmp dword ptr [0x10d80710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60368 jne 0x10d60390 */
  if (!C.zf) goto L_10d60390;
  /* 10d6036a push 0x10d80710 */
  push32((uint32_t)(0x10d80710u));
  /* 10d6036f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10d60374 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d60376 mov ax, word ptr [0x10d80754] */
  AX = (r16((uint32_t)(0x10d80754)));
  /* 10d6037c push eax */
  push32((uint32_t)(EAX));
  /* 10d6037d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6037f call 0x10d62c20 */
  push32(0x10d60384u); f_10d62c20();
  /* 10d60384 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60387 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60389 je 0x10d60390 */
  if (C.zf) goto L_10d60390;
  /* 10d6038b jmp 0x10d60652 */
  goto L_10d60652;
L_10d60390:;
  /* 10d60390 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10d60392 push 0x10d7c174 */
  push32((uint32_t)(0x10d7c174u));
  /* 10d60397 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d60399 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10d6039e call 0x10d54a60 */
  push32(0x10d603a3u); f_10d54a60();
  /* 10d603a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d603a6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10d603a9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10d603ab push 0x10d7c174 */
  push32((uint32_t)(0x10d7c174u));
  /* 10d603b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d603b2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10d603b7 call 0x10d54a60 */
  push32(0x10d603bcu); f_10d54a60();
  /* 10d603bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d603bf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d603c2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10d603c4 push 0x10d7c174 */
  push32((uint32_t)(0x10d7c174u));
  /* 10d603c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d603cb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10d603d0 call 0x10d54a60 */
  push32(0x10d603d5u); f_10d54a60();
  /* 10d603d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d603d8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10d603db push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10d603dd push 0x10d7c174 */
  push32((uint32_t)(0x10d7c174u));
  /* 10d603e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d603e4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10d603e9 call 0x10d54a60 */
  push32(0x10d603eeu); f_10d54a60();
  /* 10d603ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d603f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d603f4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d603f8 je 0x10d6040c */
  if (C.zf) goto L_10d6040c;
  /* 10d603fa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d603fe je 0x10d6040c */
  if (C.zf) goto L_10d6040c;
  /* 10d60400 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60404 je 0x10d6040c */
  if (C.zf) goto L_10d6040c;
  /* 10d60406 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6040a jne 0x10d60411 */
  if (!C.zf) goto L_10d60411;
L_10d6040c:;
  /* 10d6040c jmp 0x10d60652 */
  goto L_10d60652;
L_10d60411:;
  /* 10d60411 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d60414 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d60417 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d6041e jmp 0x10d60429 */
  goto L_10d60429;
L_10d60420:;
  /* 10d60420 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d60423 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60426 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10d60429:;
  /* 10d60429 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60430 jge 0x10d60445 */
  if ((C.sf==C.of)) goto L_10d60445;
  /* 10d60432 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d60435 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10d60438 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10d6043a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d6043d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60440 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d60443 jmp 0x10d60420 */
  goto L_10d60420;
L_10d60445:;
  /* 10d60445 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10d60448 push eax */
  push32((uint32_t)(EAX));
  /* 10d60449 mov ecx, dword ptr [0x10d80710] */
  ECX = (r32((uint32_t)(0x10d80710)));
  /* 10d6044f push ecx */
  push32((uint32_t)(ECX));
  /* 10d60450 call dword ptr [0x10d832d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832d8))), 0x10d60456u);
  /* 10d60456 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60458 jne 0x10d6045f */
  if (!C.zf) goto L_10d6045f;
  /* 10d6045a jmp 0x10d60652 */
  goto L_10d60652;
L_10d6045f:;
  /* 10d6045f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60463 jbe 0x10d6046a */
  if ((C.cf||C.zf)) goto L_10d6046a;
  /* 10d60465 jmp 0x10d60652 */
  goto L_10d60652;
L_10d6046a:;
  /* 10d6046a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d6046d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d60473 mov dword ptr [0x10d7eea4], edx */
  w32((uint32_t)(0x10d7eea4), (EDX));
  /* 10d60479 cmp dword ptr [0x10d7eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d7eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60480 jle 0x10d604d9 */
  if ((C.zf||C.sf!=C.of)) goto L_10d604d9;
  /* 10d60482 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10d60485 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d60488 jmp 0x10d60493 */
  goto L_10d60493;
L_10d6048a:;
  /* 10d6048a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d6048d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60490 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10d60493:;
  /* 10d60493 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d60496 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d60498 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d6049a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d6049c je 0x10d604d9 */
  if (C.zf) goto L_10d604d9;
  /* 10d6049e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d604a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d604a3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10d604a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d604a8 je 0x10d604d9 */
  if (C.zf) goto L_10d604d9;
  /* 10d604aa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d604ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d604af mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d604b1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d604b4 jmp 0x10d604bf */
  goto L_10d604bf;
L_10d604b6:;
  /* 10d604b6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d604b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d604bc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10d604bf:;
  /* 10d604bf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d604c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d604c4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10d604c7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d604ca jg 0x10d604d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d604d7;
  /* 10d604cc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d604cf add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d604d2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10d604d5 jmp 0x10d604b6 */
  goto L_10d604b6;
L_10d604d7:;
  /* 10d604d7 jmp 0x10d6048a */
  goto L_10d6048a;
L_10d604d9:;
  /* 10d604d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d604db push 0 */
  push32((uint32_t)(0x0u));
  /* 10d604dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10d604df mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d604e2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d604e5 push eax */
  push32((uint32_t)(EAX));
  /* 10d604e6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d604eb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d604ee push ecx */
  push32((uint32_t)(ECX));
  /* 10d604ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10d604f1 call 0x10d5cc90 */
  push32(0x10d604f6u); f_10d5cc90();
  /* 10d604f6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d604f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d604fb jne 0x10d60502 */
  if (!C.zf) goto L_10d60502;
  /* 10d604fd jmp 0x10d60652 */
  goto L_10d60652;
L_10d60502:;
  /* 10d60502 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d60505 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10d6050a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d6050d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d60510 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d60517 jmp 0x10d60522 */
  goto L_10d60522;
L_10d60519:;
  /* 10d60519 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d6051c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6051f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10d60522:;
  /* 10d60522 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60529 jge 0x10d60540 */
  if ((C.sf==C.of)) goto L_10d60540;
  /* 10d6052b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d6052e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10d60532 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10d60535 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d60538 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6053b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d6053e jmp 0x10d60519 */
  goto L_10d60519;
L_10d60540:;
  /* 10d60540 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d60542 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d60544 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d60547 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6054a push edx */
  push32((uint32_t)(EDX));
  /* 10d6054b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d60550 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d60553 push eax */
  push32((uint32_t)(EAX));
  /* 10d60554 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d60556 call 0x10d62ec0 */
  push32(0x10d6055bu); f_10d62ec0();
  /* 10d6055b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6055e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60560 jne 0x10d60567 */
  if (!C.zf) goto L_10d60567;
  /* 10d60562 jmp 0x10d60652 */
  goto L_10d60652;
L_10d60567:;
  /* 10d60567 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d6056a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10d6056f cmp dword ptr [0x10d7eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d7eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60576 jle 0x10d605d3 */
  if ((C.zf||C.sf!=C.of)) goto L_10d605d3;
  /* 10d60578 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10d6057b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d6057e jmp 0x10d60589 */
  goto L_10d60589;
L_10d60580:;
  /* 10d60580 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d60583 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60586 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10d60589:;
  /* 10d60589 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d6058c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d6058e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d60590 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d60592 je 0x10d605d3 */
  if (C.zf) goto L_10d605d3;
  /* 10d60594 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d60597 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d60599 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10d6059c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d6059e je 0x10d605d3 */
  if (C.zf) goto L_10d605d3;
  /* 10d605a0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d605a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d605a5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d605a7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d605aa jmp 0x10d605b5 */
  goto L_10d605b5;
L_10d605ac:;
  /* 10d605ac mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d605af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d605b2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10d605b5:;
  /* 10d605b5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d605b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d605ba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10d605bd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d605c0 jg 0x10d605d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d605d1;
  /* 10d605c2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d605c5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d605c8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10d605cf jmp 0x10d605ac */
  goto L_10d605ac;
L_10d605d1:;
  /* 10d605d1 jmp 0x10d60580 */
  goto L_10d60580;
L_10d605d3:;
  /* 10d605d3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d605d6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d605d9 mov dword ptr [0x10d7ec98], eax */
  w32((uint32_t)(0x10d7ec98), (EAX));
  /* 10d605de mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d605e1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d605e4 mov dword ptr [0x10d7ec9c], ecx */
  w32((uint32_t)(0x10d7ec9c), (ECX));
  /* 10d605ea cmp dword ptr [0x10d80740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d605f1 je 0x10d60604 */
  if (C.zf) goto L_10d60604;
  /* 10d605f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d605f5 mov edx, dword ptr [0x10d80740] */
  EDX = (r32((uint32_t)(0x10d80740)));
  /* 10d605fb push edx */
  push32((uint32_t)(EDX));
  /* 10d605fc call 0x10d554f0 */
  push32(0x10d60601u); f_10d554f0();
  /* 10d60601 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d60604:;
  /* 10d60604 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d60607 mov dword ptr [0x10d80740], eax */
  w32((uint32_t)(0x10d80740), (EAX));
  /* 10d6060c cmp dword ptr [0x10d80744], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80744))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60613 je 0x10d60626 */
  if (C.zf) goto L_10d60626;
  /* 10d60615 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d60617 mov ecx, dword ptr [0x10d80744] */
  ECX = (r32((uint32_t)(0x10d80744)));
  /* 10d6061d push ecx */
  push32((uint32_t)(ECX));
  /* 10d6061e call 0x10d554f0 */
  push32(0x10d60623u); f_10d554f0();
  /* 10d60623 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d60626:;
  /* 10d60626 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d60629 mov dword ptr [0x10d80744], edx */
  w32((uint32_t)(0x10d80744), (EDX));
  /* 10d6062f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d60631 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d60634 push eax */
  push32((uint32_t)(EAX));
  /* 10d60635 call 0x10d554f0 */
  push32(0x10d6063au); f_10d554f0();
  /* 10d6063a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6063d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d6063f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d60642 push ecx */
  push32((uint32_t)(ECX));
  /* 10d60643 call 0x10d554f0 */
  push32(0x10d60648u); f_10d554f0();
  /* 10d60648 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6064b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d6064d jmp 0x10d606dc */
  goto L_10d606dc;
L_10d60652:;
  /* 10d60652 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d60654 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d60657 push edx */
  push32((uint32_t)(EDX));
  /* 10d60658 call 0x10d554f0 */
  push32(0x10d6065du); f_10d554f0();
  /* 10d6065d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60660 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d60662 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d60665 push eax */
  push32((uint32_t)(EAX));
  /* 10d60666 call 0x10d554f0 */
  push32(0x10d6066bu); f_10d554f0();
  /* 10d6066b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6066e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d60670 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d60673 push ecx */
  push32((uint32_t)(ECX));
  /* 10d60674 call 0x10d554f0 */
  push32(0x10d60679u); f_10d554f0();
  /* 10d60679 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6067c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d6067e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d60681 push edx */
  push32((uint32_t)(EDX));
  /* 10d60682 call 0x10d554f0 */
  push32(0x10d60687u); f_10d554f0();
  /* 10d60687 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6068a mov eax, 1 */
  EAX = (0x1u);
  /* 10d6068f jmp 0x10d606dc */
  goto L_10d606dc;
L_10d60691:;
  /* 10d60691 mov dword ptr [0x10d7ec98], 0x10d7eca2 */
  w32((uint32_t)(0x10d7ec98), (0x10d7eca2u));
  /* 10d6069b mov dword ptr [0x10d7ec9c], 0x10d7eca2 */
  w32((uint32_t)(0x10d7ec9c), (0x10d7eca2u));
  /* 10d606a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d606a7 mov eax, dword ptr [0x10d80740] */
  EAX = (r32((uint32_t)(0x10d80740)));
  /* 10d606ac push eax */
  push32((uint32_t)(EAX));
  /* 10d606ad call 0x10d554f0 */
  push32(0x10d606b2u); f_10d554f0();
  /* 10d606b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d606b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d606b7 mov ecx, dword ptr [0x10d80744] */
  ECX = (r32((uint32_t)(0x10d80744)));
  /* 10d606bd push ecx */
  push32((uint32_t)(ECX));
  /* 10d606be call 0x10d554f0 */
  push32(0x10d606c3u); f_10d554f0();
  /* 10d606c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d606c6 mov dword ptr [0x10d80740], 0 */
  w32((uint32_t)(0x10d80740), (0x0u));
  /* 10d606d0 mov dword ptr [0x10d80744], 0 */
  w32((uint32_t)(0x10d80744), (0x0u));
  /* 10d606da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d606dc:;
  /* 10d606dc mov esp, ebp */
  ESP = (EBP);
  /* 10d606de pop ebp */
  EBP = (pop32());
  /* 10d606df ret  */
  ESPCHK(0x10d60340u, _esp0);
  ESP += 4; return;
}

/* FUN_100106e0 @ 0x10d606e0 (7 bytes, 5 insns) */
void f_10d606e0(void) {
  FTRACE(0x10d606e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d606e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d606e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d606e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d606e5 pop ebp */
  EBP = (pop32());
  /* 10d606e6 ret  */
  ESPCHK(0x10d606e0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10d606f0 (129 bytes, 56 insns) */
void f_10d606f0(void) {
  FTRACE(0x10d606f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d606f0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d606f4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d606f8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10d606fe jne 0x10d6073c */
  if (!C.zf) goto L_10d6073c;
L_10d60700:;
  /* 10d60700 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d60702 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d60704 jne 0x10d60734 */
  if (!C.zf) goto L_10d60734;
  /* 10d60706 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d60708 je 0x10d60730 */
  if (C.zf) goto L_10d60730;
  /* 10d6070a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d6070d jne 0x10d60734 */
  if (!C.zf) goto L_10d60734;
  /* 10d6070f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10d60711 je 0x10d60730 */
  if (C.zf) goto L_10d60730;
  /* 10d60713 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10d60716 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d60719 jne 0x10d60734 */
  if (!C.zf) goto L_10d60734;
  /* 10d6071b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d6071d je 0x10d60730 */
  if (C.zf) goto L_10d60730;
  /* 10d6071f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d60722 jne 0x10d60734 */
  if (!C.zf) goto L_10d60734;
  /* 10d60724 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60727 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6072a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10d6072c jne 0x10d60700 */
  if (!C.zf) goto L_10d60700;
  /* 10d6072e mov edi, edi */
  EDI = (EDI);
L_10d60730:;
  /* 10d60730 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d60732 ret  */
  ESPCHK(0x10d606f0u, _esp0);
  ESP += 4; return;
  /* 10d60733 nop  */
  /* nop */
L_10d60734:;
  /* 10d60734 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d60736 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d60738 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10d60739 ret  */
  ESPCHK(0x10d606f0u, _esp0);
  ESP += 4; return;
  /* 10d6073a mov edi, edi */
  EDI = (EDI);
L_10d6073c:;
  /* 10d6073c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10d60742 je 0x10d60758 */
  if (C.zf) goto L_10d60758;
  /* 10d60744 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d60746 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10d60747 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d60749 jne 0x10d60734 */
  if (!C.zf) goto L_10d60734;
  /* 10d6074b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10d6074c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d6074e je 0x10d60730 */
  if (C.zf) goto L_10d60730;
  /* 10d60750 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10d60756 je 0x10d60700 */
  if (C.zf) goto L_10d60700;
L_10d60758:;
  /* 10d60758 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10d6075b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6075e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d60760 jne 0x10d60734 */
  if (!C.zf) goto L_10d60734;
  /* 10d60762 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d60764 je 0x10d60730 */
  if (C.zf) goto L_10d60730;
  /* 10d60766 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d60769 jne 0x10d60734 */
  if (!C.zf) goto L_10d60734;
  /* 10d6076b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10d6076d je 0x10d60730 */
  if (C.zf) goto L_10d60730;
  /* 10d6076f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60772 jmp 0x10d60700 */
  goto L_10d60700;
}

/* FUN_10010780 @ 0x10d60780 (62 bytes, 35 insns) */
void f_10d60780(void) {
  FTRACE(0x10d60780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d60780 push ebp */
  push32((uint32_t)(EBP));
  /* 10d60781 mov ebp, esp */
  EBP = (ESP);
  /* 10d60783 push esi */
  push32((uint32_t)(ESI));
  /* 10d60784 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d60786 push eax */
  push32((uint32_t)(EAX));
  /* 10d60787 push eax */
  push32((uint32_t)(EAX));
  /* 10d60788 push eax */
  push32((uint32_t)(EAX));
  /* 10d60789 push eax */
  push32((uint32_t)(EAX));
  /* 10d6078a push eax */
  push32((uint32_t)(EAX));
  /* 10d6078b push eax */
  push32((uint32_t)(EAX));
  /* 10d6078c push eax */
  push32((uint32_t)(EAX));
  /* 10d6078d push eax */
  push32((uint32_t)(EAX));
  /* 10d6078e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d60791 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d60794:;
  /* 10d60794 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d60796 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d60798 je 0x10d607a1 */
  if (C.zf) goto L_10d607a1;
  /* 10d6079a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10d6079b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10d6079b");
  /* 10d6079f jmp 0x10d60794 */
  goto L_10d60794;
L_10d607a1:;
  /* 10d607a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10d607a4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d607a7 nop  */
  /* nop */
L_10d607a8:;
  /* 10d607a8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10d607a9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d607ab or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d607ad je 0x10d607b6 */
  if (C.zf) goto L_10d607b6;
  /* 10d607af inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d607b0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10d607b0");
  /* 10d607b4 jae 0x10d607a8 */
  if (!C.cf) goto L_10d607a8;
L_10d607b6:;
  /* 10d607b6 mov eax, ecx */
  EAX = (ECX);
  /* 10d607b8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d607bb pop esi */
  ESI = (pop32());
  /* 10d607bc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d607bd ret  */
  ESPCHK(0x10d60780u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10d607c0 (56 bytes, 31 insns) */
void f_10d607c0(void) {
  FTRACE(0x10d607c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d607c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d607c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d607c3 push edi */
  push32((uint32_t)(EDI));
  /* 10d607c4 push esi */
  push32((uint32_t)(ESI));
  /* 10d607c5 push ebx */
  push32((uint32_t)(EBX));
  /* 10d607c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d607c9 jecxz 0x10d607f1 */
  x86_unimpl("jecxz @ 0x10d607c9");
  /* 10d607cb mov ebx, ecx */
  EBX = (ECX);
  /* 10d607cd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10d607d0 mov esi, edi */
  ESI = (EDI);
  /* 10d607d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d607d4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10d607d6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d607d8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d607da mov edi, esi */
  EDI = (ESI);
  /* 10d607dc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d607df repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10d607e1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10d607e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d607e6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d607e9 ja 0x10d607ef */
  if ((!C.cf&&!C.zf)) goto L_10d607ef;
  /* 10d607eb je 0x10d607f1 */
  if (C.zf) goto L_10d607f1;
  /* 10d607ed dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d607ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10d607ef:;
  /* 10d607ef not ecx */
  ECX = (~(ECX));
L_10d607f1:;
  /* 10d607f1 mov eax, ecx */
  EAX = (ECX);
  /* 10d607f3 pop ebx */
  EBX = (pop32());
  /* 10d607f4 pop esi */
  ESI = (pop32());
  /* 10d607f5 pop edi */
  EDI = (pop32());
  /* 10d607f6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d607f7 ret  */
  ESPCHK(0x10d607c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010800 @ 0x10d60800 (58 bytes, 32 insns) */
void f_10d60800(void) {
  FTRACE(0x10d60800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d60800 push ebp */
  push32((uint32_t)(EBP));
  /* 10d60801 mov ebp, esp */
  EBP = (ESP);
  /* 10d60803 push esi */
  push32((uint32_t)(ESI));
  /* 10d60804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d60806 push eax */
  push32((uint32_t)(EAX));
  /* 10d60807 push eax */
  push32((uint32_t)(EAX));
  /* 10d60808 push eax */
  push32((uint32_t)(EAX));
  /* 10d60809 push eax */
  push32((uint32_t)(EAX));
  /* 10d6080a push eax */
  push32((uint32_t)(EAX));
  /* 10d6080b push eax */
  push32((uint32_t)(EAX));
  /* 10d6080c push eax */
  push32((uint32_t)(EAX));
  /* 10d6080d push eax */
  push32((uint32_t)(EAX));
  /* 10d6080e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d60811 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d60814:;
  /* 10d60814 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d60816 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d60818 je 0x10d60821 */
  if (C.zf) goto L_10d60821;
  /* 10d6081a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10d6081b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10d6081b");
  /* 10d6081f jmp 0x10d60814 */
  goto L_10d60814;
L_10d60821:;
  /* 10d60821 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10d60824:;
  /* 10d60824 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d60826 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d60828 je 0x10d60834 */
  if (C.zf) goto L_10d60834;
  /* 10d6082a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d6082b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10d6082b");
  /* 10d6082f jae 0x10d60824 */
  if (!C.cf) goto L_10d60824;
  /* 10d60831 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10d60834:;
  /* 10d60834 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60837 pop esi */
  ESI = (pop32());
  /* 10d60838 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d60839 ret  */
  ESPCHK(0x10d60800u, _esp0);
  ESP += 4; return;
}

/* FUN_10010840 @ 0x10d60840 (512 bytes, 147 insns) */
void f_10d60840(void) {
  FTRACE(0x10d60840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d60840 push ebp */
  push32((uint32_t)(EBP));
  /* 10d60841 mov ebp, esp */
  EBP = (ESP);
  /* 10d60843 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d60846 cmp dword ptr [0x10d8078c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8078c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6084d jne 0x10d60872 */
  if (!C.zf) goto L_10d60872;
  /* 10d6084f call 0x10d61310 */
  push32(0x10d60854u); f_10d61310();
  /* 10d60854 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60856 je 0x10d60862 */
  if (C.zf) goto L_10d60862;
  /* 10d60858 mov eax, dword ptr [0x10d8329c] */
  EAX = (r32((uint32_t)(0x10d8329c)));
  /* 10d6085d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d60860 jmp 0x10d60869 */
  goto L_10d60869;
L_10d60862:;
  /* 10d60862 mov dword ptr [ebp - 8], 0x10d61360 */
  w32((uint32_t)(EBP + -0x8), (0x10d61360u));
L_10d60869:;
  /* 10d60869 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d6086c mov dword ptr [0x10d8078c], ecx */
  w32((uint32_t)(0x10d8078c), (ECX));
L_10d60872:;
  /* 10d60872 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60876 jne 0x10d60882 */
  if (!C.zf) goto L_10d60882;
  /* 10d60878 call 0x10d61160 */
  push32(0x10d6087du); f_10d61160();
  /* 10d6087d jmp 0x10d6094e */
  goto L_10d6094e;
L_10d60882:;
  /* 10d60882 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60885 mov dword ptr [0x10d8077c], edx */
  w32((uint32_t)(0x10d8077c), (EDX));
  /* 10d6088b cmp dword ptr [0x10d8077c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8077c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60892 je 0x10d608b4 */
  if (C.zf) goto L_10d608b4;
  /* 10d60894 mov eax, dword ptr [0x10d8077c] */
  EAX = (r32((uint32_t)(0x10d8077c)));
  /* 10d60899 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d6089c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d6089e je 0x10d608b4 */
  if (C.zf) goto L_10d608b4;
  /* 10d608a0 push 0x10d8077c */
  push32((uint32_t)(0x10d8077cu));
  /* 10d608a5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10d608a7 push 0x10d7fa90 */
  push32((uint32_t)(0x10d7fa90u));
  /* 10d608ac call 0x10d60a40 */
  push32(0x10d608b1u); f_10d60a40();
  /* 10d608b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d608b4:;
  /* 10d608b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d608b7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d608ba mov dword ptr [0x10d80780], edx */
  w32((uint32_t)(0x10d80780), (EDX));
  /* 10d608c0 cmp dword ptr [0x10d80780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d608c7 je 0x10d608e9 */
  if (C.zf) goto L_10d608e9;
  /* 10d608c9 mov eax, dword ptr [0x10d80780] */
  EAX = (r32((uint32_t)(0x10d80780)));
  /* 10d608ce movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d608d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d608d3 je 0x10d608e9 */
  if (C.zf) goto L_10d608e9;
  /* 10d608d5 push 0x10d80780 */
  push32((uint32_t)(0x10d80780u));
  /* 10d608da push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10d608dc push 0x10d7f9d8 */
  push32((uint32_t)(0x10d7f9d8u));
  /* 10d608e1 call 0x10d60a40 */
  push32(0x10d608e6u); f_10d60a40();
  /* 10d608e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d608e9:;
  /* 10d608e9 mov dword ptr [0x10d80784], 0 */
  w32((uint32_t)(0x10d80784), (0x0u));
  /* 10d608f3 cmp dword ptr [0x10d8077c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8077c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d608fa je 0x10d6092d */
  if (C.zf) goto L_10d6092d;
  /* 10d608fc mov edx, dword ptr [0x10d8077c] */
  EDX = (r32((uint32_t)(0x10d8077c)));
  /* 10d60902 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d60905 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60907 je 0x10d6092d */
  if (C.zf) goto L_10d6092d;
  /* 10d60909 cmp dword ptr [0x10d80780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60910 je 0x10d60926 */
  if (C.zf) goto L_10d60926;
  /* 10d60912 mov ecx, dword ptr [0x10d80780] */
  ECX = (r32((uint32_t)(0x10d80780)));
  /* 10d60918 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d6091b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d6091d je 0x10d60926 */
  if (C.zf) goto L_10d60926;
  /* 10d6091f call 0x10d60ad0 */
  push32(0x10d60924u); f_10d60ad0();
  /* 10d60924 jmp 0x10d6092b */
  goto L_10d6092b;
L_10d60926:;
  /* 10d60926 call 0x10d60ec0 */
  push32(0x10d6092bu); f_10d60ec0();
L_10d6092b:;
  /* 10d6092b jmp 0x10d6094e */
  goto L_10d6094e;
L_10d6092d:;
  /* 10d6092d cmp dword ptr [0x10d80780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60934 je 0x10d60949 */
  if (C.zf) goto L_10d60949;
  /* 10d60936 mov eax, dword ptr [0x10d80780] */
  EAX = (r32((uint32_t)(0x10d80780)));
  /* 10d6093b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d6093e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d60940 je 0x10d60949 */
  if (C.zf) goto L_10d60949;
  /* 10d60942 call 0x10d61060 */
  push32(0x10d60947u); f_10d61060();
  /* 10d60947 jmp 0x10d6094e */
  goto L_10d6094e;
L_10d60949:;
  /* 10d60949 call 0x10d61160 */
  push32(0x10d6094eu); f_10d61160();
L_10d6094e:;
  /* 10d6094e cmp dword ptr [0x10d80784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60955 jne 0x10d6095e */
  if (!C.zf) goto L_10d6095e;
  /* 10d60957 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d60959 jmp 0x10d60a3c */
  goto L_10d60a3c;
L_10d6095e:;
  /* 10d6095e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60961 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60967 push edx */
  push32((uint32_t)(EDX));
  /* 10d60968 call 0x10d61190 */
  push32(0x10d6096du); f_10d61190();
  /* 10d6096d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60970 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d60973 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60977 je 0x10d6098c */
  if (C.zf) goto L_10d6098c;
  /* 10d60979 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d6097c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d60981 push eax */
  push32((uint32_t)(EAX));
  /* 10d60982 call dword ptr [0x10d832a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832a0))), 0x10d60988u);
  /* 10d60988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d6098a jne 0x10d60993 */
  if (!C.zf) goto L_10d60993;
L_10d6098c:;
  /* 10d6098c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d6098e jmp 0x10d60a3c */
  goto L_10d60a3c;
L_10d60993:;
  /* 10d60993 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d60995 mov ecx, dword ptr [0x10d8076c] */
  ECX = (r32((uint32_t)(0x10d8076c)));
  /* 10d6099b push ecx */
  push32((uint32_t)(ECX));
  /* 10d6099c call dword ptr [0x10d832b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832b0))), 0x10d609a2u);
  /* 10d609a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d609a4 jne 0x10d609ad */
  if (!C.zf) goto L_10d609ad;
  /* 10d609a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d609a8 jmp 0x10d60a3c */
  goto L_10d60a3c;
L_10d609ad:;
  /* 10d609ad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d609b1 je 0x10d609d8 */
  if (C.zf) goto L_10d609d8;
  /* 10d609b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d609b6 mov ax, word ptr [0x10d8076c] */
  AX = (r16((uint32_t)(0x10d8076c)));
  /* 10d609bc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10d609bf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d609c2 mov dx, word ptr [0x10d80788] */
  DX = (r16((uint32_t)(0x10d80788)));
  /* 10d609c9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10d609cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d609d0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10d609d4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10d609d8:;
  /* 10d609d8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d609dc je 0x10d60a37 */
  if (C.zf) goto L_10d60a37;
  /* 10d609de push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10d609e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d609e3 push edx */
  push32((uint32_t)(EDX));
  /* 10d609e4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10d609e9 mov eax, dword ptr [0x10d8076c] */
  EAX = (r32((uint32_t)(0x10d8076c)));
  /* 10d609ee push eax */
  push32((uint32_t)(EAX));
  /* 10d609ef call dword ptr [0x10d8078c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8078c))), 0x10d609f5u);
  /* 10d609f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d609f7 jne 0x10d609fd */
  if (!C.zf) goto L_10d609fd;
  /* 10d609f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d609fb jmp 0x10d60a3c */
  goto L_10d60a3c;
L_10d609fd:;
  /* 10d609fd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10d609ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d60a02 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60a05 push ecx */
  push32((uint32_t)(ECX));
  /* 10d60a06 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10d60a0b mov edx, dword ptr [0x10d80788] */
  EDX = (r32((uint32_t)(0x10d80788)));
  /* 10d60a11 push edx */
  push32((uint32_t)(EDX));
  /* 10d60a12 call dword ptr [0x10d8078c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8078c))), 0x10d60a18u);
  /* 10d60a18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60a1a jne 0x10d60a20 */
  if (!C.zf) goto L_10d60a20;
  /* 10d60a1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d60a1e jmp 0x10d60a3c */
  goto L_10d60a3c;
L_10d60a20:;
  /* 10d60a20 push 0xa */
  push32((uint32_t)(0xau));
  /* 10d60a22 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d60a25 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60a2a push eax */
  push32((uint32_t)(EAX));
  /* 10d60a2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d60a2e push ecx */
  push32((uint32_t)(ECX));
  /* 10d60a2f call 0x10d575a0 */
  push32(0x10d60a34u); f_10d575a0();
  /* 10d60a34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d60a37:;
  /* 10d60a37 mov eax, 1 */
  EAX = (0x1u);
L_10d60a3c:;
  /* 10d60a3c mov esp, ebp */
  ESP = (EBP);
  /* 10d60a3e pop ebp */
  EBP = (pop32());
  /* 10d60a3f ret  */
  ESPCHK(0x10d60840u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a40 @ 0x10d60a40 (130 bytes, 47 insns) */
void f_10d60a40(void) {
  FTRACE(0x10d60a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d60a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10d60a41 mov ebp, esp */
  EBP = (ESP);
  /* 10d60a43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d60a46 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10d60a4d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10d60a54:;
  /* 10d60a54 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d60a57 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60a5a jg 0x10d60abe */
  if ((!C.zf&&C.sf==C.of)) goto L_10d60abe;
  /* 10d60a5c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60a60 je 0x10d60abe */
  if (C.zf) goto L_10d60abe;
  /* 10d60a62 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d60a65 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60a68 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d60a69 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d60a6b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d60a6d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d60a70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d60a73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60a76 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10d60a79 push eax */
  push32((uint32_t)(EAX));
  /* 10d60a7a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d60a7d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d60a7f push edx */
  push32((uint32_t)(EDX));
  /* 10d60a80 call 0x10d63130 */
  push32(0x10d60a85u); f_10d63130();
  /* 10d60a85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60a88 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d60a8b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60a8f jne 0x10d60aa2 */
  if (!C.zf) goto L_10d60aa2;
  /* 10d60a91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d60a94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60a97 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10d60a9b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d60a9e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d60aa0 jmp 0x10d60abc */
  goto L_10d60abc;
L_10d60aa2:;
  /* 10d60aa2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60aa6 jge 0x10d60ab3 */
  if ((C.sf==C.of)) goto L_10d60ab3;
  /* 10d60aa8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d60aab sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d60aae mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10d60ab1 jmp 0x10d60abc */
  goto L_10d60abc;
L_10d60ab3:;
  /* 10d60ab3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d60ab6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60ab9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10d60abc:;
  /* 10d60abc jmp 0x10d60a54 */
  goto L_10d60a54;
L_10d60abe:;
  /* 10d60abe mov esp, ebp */
  ESP = (EBP);
  /* 10d60ac0 pop ebp */
  EBP = (pop32());
  /* 10d60ac1 ret  */
  ESPCHK(0x10d60a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ad0 @ 0x10d60ad0 (186 bytes, 50 insns) */
void f_10d60ad0(void) {
  FTRACE(0x10d60ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d60ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d60ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10d60ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d60ad4 mov eax, dword ptr [0x10d8077c] */
  EAX = (r32((uint32_t)(0x10d8077c)));
  /* 10d60ad9 push eax */
  push32((uint32_t)(EAX));
  /* 10d60ada call 0x10d57890 */
  push32(0x10d60adfu); f_10d57890();
  /* 10d60adf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60ae2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d60ae4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60ae7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10d60aea mov dword ptr [0x10d80778], ecx */
  w32((uint32_t)(0x10d80778), (ECX));
  /* 10d60af0 mov edx, dword ptr [0x10d80780] */
  EDX = (r32((uint32_t)(0x10d80780)));
  /* 10d60af6 push edx */
  push32((uint32_t)(EDX));
  /* 10d60af7 call 0x10d57890 */
  push32(0x10d60afcu); f_10d57890();
  /* 10d60afc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60aff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d60b01 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60b04 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10d60b07 mov dword ptr [0x10d80770], ecx */
  w32((uint32_t)(0x10d80770), (ECX));
  /* 10d60b0d mov dword ptr [0x10d8076c], 0 */
  w32((uint32_t)(0x10d8076c), (0x0u));
  /* 10d60b17 cmp dword ptr [0x10d80778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60b1e je 0x10d60b29 */
  if (C.zf) goto L_10d60b29;
  /* 10d60b20 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10d60b27 jmp 0x10d60b3b */
  goto L_10d60b3b;
L_10d60b29:;
  /* 10d60b29 mov edx, dword ptr [0x10d8077c] */
  EDX = (r32((uint32_t)(0x10d8077c)));
  /* 10d60b2f push edx */
  push32((uint32_t)(EDX));
  /* 10d60b30 call 0x10d61570 */
  push32(0x10d60b35u); f_10d61570();
  /* 10d60b35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60b38 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d60b3b:;
  /* 10d60b3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d60b3e mov dword ptr [0x10d80774], eax */
  w32((uint32_t)(0x10d80774), (EAX));
  /* 10d60b43 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d60b45 push 0x10d60b90 */
  push32((uint32_t)(0x10d60b90u));
  /* 10d60b4a call dword ptr [0x10d832a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832a4))), 0x10d60b50u);
  /* 10d60b50 mov ecx, dword ptr [0x10d80784] */
  ECX = (r32((uint32_t)(0x10d80784)));
  /* 10d60b56 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10d60b5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d60b5e je 0x10d60b7c */
  if (C.zf) goto L_10d60b7c;
  /* 10d60b60 mov edx, dword ptr [0x10d80784] */
  EDX = (r32((uint32_t)(0x10d80784)));
  /* 10d60b66 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10d60b6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d60b6e je 0x10d60b7c */
  if (C.zf) goto L_10d60b7c;
  /* 10d60b70 mov eax, dword ptr [0x10d80784] */
  EAX = (r32((uint32_t)(0x10d80784)));
  /* 10d60b75 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10d60b78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60b7a jne 0x10d60b86 */
  if (!C.zf) goto L_10d60b86;
L_10d60b7c:;
  /* 10d60b7c mov dword ptr [0x10d80784], 0 */
  w32((uint32_t)(0x10d80784), (0x0u));
L_10d60b86:;
  /* 10d60b86 mov esp, ebp */
  ESP = (EBP);
  /* 10d60b88 pop ebp */
  EBP = (pop32());
  /* 10d60b89 ret  */
  ESPCHK(0x10d60ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b90 @ 0x10d60b90 (804 bytes, 220 insns) */
void f_10d60b90(void) {
  FTRACE(0x10d60b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d60b90 push ebp */
  push32((uint32_t)(EBP));
  /* 10d60b91 mov ebp, esp */
  EBP = (ESP);
  /* 10d60b93 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d60b96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60b99 push eax */
  push32((uint32_t)(EAX));
  /* 10d60b9a call 0x10d614f0 */
  push32(0x10d60b9fu); f_10d614f0();
  /* 10d60b9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60ba2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10d60ba5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10d60ba7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d60baa push ecx */
  push32((uint32_t)(ECX));
  /* 10d60bab mov edx, dword ptr [0x10d80770] */
  EDX = (r32((uint32_t)(0x10d80770)));
  /* 10d60bb1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d60bb3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d60bb5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10d60bbb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60bc1 push edx */
  push32((uint32_t)(EDX));
  /* 10d60bc2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d60bc5 push eax */
  push32((uint32_t)(EAX));
  /* 10d60bc6 call dword ptr [0x10d8078c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8078c))), 0x10d60bccu);
  /* 10d60bcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60bce jne 0x10d60be4 */
  if (!C.zf) goto L_10d60be4;
  /* 10d60bd0 mov dword ptr [0x10d80784], 0 */
  w32((uint32_t)(0x10d80784), (0x0u));
  /* 10d60bda mov eax, 1 */
  EAX = (0x1u);
  /* 10d60bdf jmp 0x10d60eae */
  goto L_10d60eae;
L_10d60be4:;
  /* 10d60be4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d60be7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d60be8 mov edx, dword ptr [0x10d80780] */
  EDX = (r32((uint32_t)(0x10d80780)));
  /* 10d60bee push edx */
  push32((uint32_t)(EDX));
  /* 10d60bef call 0x10d63130 */
  push32(0x10d60bf4u); f_10d63130();
  /* 10d60bf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60bf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60bf9 jne 0x10d60d1f */
  if (!C.zf) goto L_10d60d1f;
  /* 10d60bff push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10d60c01 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10d60c04 push eax */
  push32((uint32_t)(EAX));
  /* 10d60c05 mov ecx, dword ptr [0x10d80778] */
  ECX = (r32((uint32_t)(0x10d80778)));
  /* 10d60c0b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d60c0d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d60c0f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10d60c15 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60c1b push ecx */
  push32((uint32_t)(ECX));
  /* 10d60c1c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d60c1f push edx */
  push32((uint32_t)(EDX));
  /* 10d60c20 call dword ptr [0x10d8078c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8078c))), 0x10d60c26u);
  /* 10d60c26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60c28 jne 0x10d60c3e */
  if (!C.zf) goto L_10d60c3e;
  /* 10d60c2a mov dword ptr [0x10d80784], 0 */
  w32((uint32_t)(0x10d80784), (0x0u));
  /* 10d60c34 mov eax, 1 */
  EAX = (0x1u);
  /* 10d60c39 jmp 0x10d60eae */
  goto L_10d60eae;
L_10d60c3e:;
  /* 10d60c3e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10d60c41 push eax */
  push32((uint32_t)(EAX));
  /* 10d60c42 mov ecx, dword ptr [0x10d8077c] */
  ECX = (r32((uint32_t)(0x10d8077c)));
  /* 10d60c48 push ecx */
  push32((uint32_t)(ECX));
  /* 10d60c49 call 0x10d63130 */
  push32(0x10d60c4eu); f_10d63130();
  /* 10d60c4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60c51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60c53 jne 0x10d60c80 */
  if (!C.zf) goto L_10d60c80;
  /* 10d60c55 mov edx, dword ptr [0x10d80784] */
  EDX = (r32((uint32_t)(0x10d80784)));
  /* 10d60c5b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10d60c61 mov dword ptr [0x10d80784], edx */
  w32((uint32_t)(0x10d80784), (EDX));
  /* 10d60c67 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d60c6a mov dword ptr [0x10d80788], eax */
  w32((uint32_t)(0x10d80788), (EAX));
  /* 10d60c6f mov ecx, dword ptr [0x10d80788] */
  ECX = (r32((uint32_t)(0x10d80788)));
  /* 10d60c75 mov dword ptr [0x10d8076c], ecx */
  w32((uint32_t)(0x10d8076c), (ECX));
  /* 10d60c7b jmp 0x10d60d1f */
  goto L_10d60d1f;
L_10d60c80:;
  /* 10d60c80 mov edx, dword ptr [0x10d80784] */
  EDX = (r32((uint32_t)(0x10d80784)));
  /* 10d60c86 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10d60c89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d60c8b jne 0x10d60d1f */
  if (!C.zf) goto L_10d60d1f;
  /* 10d60c91 cmp dword ptr [0x10d80774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60c98 je 0x10d60ced */
  if (C.zf) goto L_10d60ced;
  /* 10d60c9a mov eax, dword ptr [0x10d80774] */
  EAX = (r32((uint32_t)(0x10d80774)));
  /* 10d60c9f push eax */
  push32((uint32_t)(EAX));
  /* 10d60ca0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d60ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d60ca4 mov edx, dword ptr [0x10d8077c] */
  EDX = (r32((uint32_t)(0x10d8077c)));
  /* 10d60caa push edx */
  push32((uint32_t)(EDX));
  /* 10d60cab call 0x10d63200 */
  push32(0x10d60cb0u); f_10d63200();
  /* 10d60cb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60cb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60cb5 jne 0x10d60ced */
  if (!C.zf) goto L_10d60ced;
  /* 10d60cb7 mov eax, dword ptr [0x10d80784] */
  EAX = (r32((uint32_t)(0x10d80784)));
  /* 10d60cbc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10d60cbe mov dword ptr [0x10d80784], eax */
  w32((uint32_t)(0x10d80784), (EAX));
  /* 10d60cc3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d60cc6 mov dword ptr [0x10d80788], ecx */
  w32((uint32_t)(0x10d80788), (ECX));
  /* 10d60ccc mov edx, dword ptr [0x10d8077c] */
  EDX = (r32((uint32_t)(0x10d8077c)));
  /* 10d60cd2 push edx */
  push32((uint32_t)(EDX));
  /* 10d60cd3 call 0x10d57890 */
  push32(0x10d60cd8u); f_10d57890();
  /* 10d60cd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60cdb cmp eax, dword ptr [0x10d80774] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d80774))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60ce1 jne 0x10d60ceb */
  if (!C.zf) goto L_10d60ceb;
  /* 10d60ce3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d60ce6 mov dword ptr [0x10d8076c], eax */
  w32((uint32_t)(0x10d8076c), (EAX));
L_10d60ceb:;
  /* 10d60ceb jmp 0x10d60d1f */
  goto L_10d60d1f;
L_10d60ced:;
  /* 10d60ced mov ecx, dword ptr [0x10d80784] */
  ECX = (r32((uint32_t)(0x10d80784)));
  /* 10d60cf3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d60cf6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d60cf8 jne 0x10d60d1f */
  if (!C.zf) goto L_10d60d1f;
  /* 10d60cfa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d60cfd push edx */
  push32((uint32_t)(EDX));
  /* 10d60cfe call 0x10d61230 */
  push32(0x10d60d03u); f_10d61230();
  /* 10d60d03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60d06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60d08 je 0x10d60d1f */
  if (C.zf) goto L_10d60d1f;
  /* 10d60d0a mov eax, dword ptr [0x10d80784] */
  EAX = (r32((uint32_t)(0x10d80784)));
  /* 10d60d0f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10d60d11 mov dword ptr [0x10d80784], eax */
  w32((uint32_t)(0x10d80784), (EAX));
  /* 10d60d16 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d60d19 mov dword ptr [0x10d80788], ecx */
  w32((uint32_t)(0x10d80788), (ECX));
L_10d60d1f:;
  /* 10d60d1f mov edx, dword ptr [0x10d80784] */
  EDX = (r32((uint32_t)(0x10d80784)));
  /* 10d60d25 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10d60d2b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60d31 je 0x10d60ea1 */
  if (C.zf) goto L_10d60ea1;
  /* 10d60d37 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10d60d39 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10d60d3c push eax */
  push32((uint32_t)(EAX));
  /* 10d60d3d mov ecx, dword ptr [0x10d80778] */
  ECX = (r32((uint32_t)(0x10d80778)));
  /* 10d60d43 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d60d45 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d60d47 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10d60d4d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60d53 push ecx */
  push32((uint32_t)(ECX));
  /* 10d60d54 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d60d57 push edx */
  push32((uint32_t)(EDX));
  /* 10d60d58 call dword ptr [0x10d8078c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8078c))), 0x10d60d5eu);
  /* 10d60d5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60d60 jne 0x10d60d76 */
  if (!C.zf) goto L_10d60d76;
  /* 10d60d62 mov dword ptr [0x10d80784], 0 */
  w32((uint32_t)(0x10d80784), (0x0u));
  /* 10d60d6c mov eax, 1 */
  EAX = (0x1u);
  /* 10d60d71 jmp 0x10d60eae */
  goto L_10d60eae;
L_10d60d76:;
  /* 10d60d76 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10d60d79 push eax */
  push32((uint32_t)(EAX));
  /* 10d60d7a mov ecx, dword ptr [0x10d8077c] */
  ECX = (r32((uint32_t)(0x10d8077c)));
  /* 10d60d80 push ecx */
  push32((uint32_t)(ECX));
  /* 10d60d81 call 0x10d63130 */
  push32(0x10d60d86u); f_10d63130();
  /* 10d60d86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60d89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60d8b jne 0x10d60e40 */
  if (!C.zf) goto L_10d60e40;
  /* 10d60d91 mov edx, dword ptr [0x10d80784] */
  EDX = (r32((uint32_t)(0x10d80784)));
  /* 10d60d97 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10d60d9a mov dword ptr [0x10d80784], edx */
  w32((uint32_t)(0x10d80784), (EDX));
  /* 10d60da0 cmp dword ptr [0x10d80778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60da7 je 0x10d60dca */
  if (C.zf) goto L_10d60dca;
  /* 10d60da9 mov eax, dword ptr [0x10d80784] */
  EAX = (r32((uint32_t)(0x10d80784)));
  /* 10d60dae or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10d60db1 mov dword ptr [0x10d80784], eax */
  w32((uint32_t)(0x10d80784), (EAX));
  /* 10d60db6 cmp dword ptr [0x10d8076c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8076c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60dbd jne 0x10d60dc8 */
  if (!C.zf) goto L_10d60dc8;
  /* 10d60dbf mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d60dc2 mov dword ptr [0x10d8076c], ecx */
  w32((uint32_t)(0x10d8076c), (ECX));
L_10d60dc8:;
  /* 10d60dc8 jmp 0x10d60e3e */
  goto L_10d60e3e;
L_10d60dca:;
  /* 10d60dca cmp dword ptr [0x10d80774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60dd1 je 0x10d60e1f */
  if (C.zf) goto L_10d60e1f;
  /* 10d60dd3 mov edx, dword ptr [0x10d8077c] */
  EDX = (r32((uint32_t)(0x10d8077c)));
  /* 10d60dd9 push edx */
  push32((uint32_t)(EDX));
  /* 10d60dda call 0x10d57890 */
  push32(0x10d60ddfu); f_10d57890();
  /* 10d60ddf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60de2 cmp eax, dword ptr [0x10d80774] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d80774))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60de8 jne 0x10d60e1f */
  if (!C.zf) goto L_10d60e1f;
  /* 10d60dea push 1 */
  push32((uint32_t)(0x1u));
  /* 10d60dec mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d60def push eax */
  push32((uint32_t)(EAX));
  /* 10d60df0 call 0x10d61280 */
  push32(0x10d60df5u); f_10d61280();
  /* 10d60df5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60df8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60dfa je 0x10d60e1d */
  if (C.zf) goto L_10d60e1d;
  /* 10d60dfc mov ecx, dword ptr [0x10d80784] */
  ECX = (r32((uint32_t)(0x10d80784)));
  /* 10d60e02 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10d60e05 mov dword ptr [0x10d80784], ecx */
  w32((uint32_t)(0x10d80784), (ECX));
  /* 10d60e0b cmp dword ptr [0x10d8076c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8076c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60e12 jne 0x10d60e1d */
  if (!C.zf) goto L_10d60e1d;
  /* 10d60e14 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d60e17 mov dword ptr [0x10d8076c], edx */
  w32((uint32_t)(0x10d8076c), (EDX));
L_10d60e1d:;
  /* 10d60e1d jmp 0x10d60e3e */
  goto L_10d60e3e;
L_10d60e1f:;
  /* 10d60e1f mov eax, dword ptr [0x10d80784] */
  EAX = (r32((uint32_t)(0x10d80784)));
  /* 10d60e24 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10d60e27 mov dword ptr [0x10d80784], eax */
  w32((uint32_t)(0x10d80784), (EAX));
  /* 10d60e2c cmp dword ptr [0x10d8076c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8076c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60e33 jne 0x10d60e3e */
  if (!C.zf) goto L_10d60e3e;
  /* 10d60e35 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d60e38 mov dword ptr [0x10d8076c], ecx */
  w32((uint32_t)(0x10d8076c), (ECX));
L_10d60e3e:;
  /* 10d60e3e jmp 0x10d60ea1 */
  goto L_10d60ea1;
L_10d60e40:;
  /* 10d60e40 cmp dword ptr [0x10d80778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60e47 jne 0x10d60ea1 */
  if (!C.zf) goto L_10d60ea1;
  /* 10d60e49 cmp dword ptr [0x10d80774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60e50 je 0x10d60ea1 */
  if (C.zf) goto L_10d60ea1;
  /* 10d60e52 mov edx, dword ptr [0x10d80774] */
  EDX = (r32((uint32_t)(0x10d80774)));
  /* 10d60e58 push edx */
  push32((uint32_t)(EDX));
  /* 10d60e59 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10d60e5c push eax */
  push32((uint32_t)(EAX));
  /* 10d60e5d mov ecx, dword ptr [0x10d8077c] */
  ECX = (r32((uint32_t)(0x10d8077c)));
  /* 10d60e63 push ecx */
  push32((uint32_t)(ECX));
  /* 10d60e64 call 0x10d63200 */
  push32(0x10d60e69u); f_10d63200();
  /* 10d60e69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60e6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60e6e jne 0x10d60ea1 */
  if (!C.zf) goto L_10d60ea1;
  /* 10d60e70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d60e72 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d60e75 push edx */
  push32((uint32_t)(EDX));
  /* 10d60e76 call 0x10d61280 */
  push32(0x10d60e7bu); f_10d61280();
  /* 10d60e7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60e7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60e80 je 0x10d60ea1 */
  if (C.zf) goto L_10d60ea1;
  /* 10d60e82 mov eax, dword ptr [0x10d80784] */
  EAX = (r32((uint32_t)(0x10d80784)));
  /* 10d60e87 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10d60e8a mov dword ptr [0x10d80784], eax */
  w32((uint32_t)(0x10d80784), (EAX));
  /* 10d60e8f cmp dword ptr [0x10d8076c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8076c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60e96 jne 0x10d60ea1 */
  if (!C.zf) goto L_10d60ea1;
  /* 10d60e98 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d60e9b mov dword ptr [0x10d8076c], ecx */
  w32((uint32_t)(0x10d8076c), (ECX));
L_10d60ea1:;
  /* 10d60ea1 mov eax, dword ptr [0x10d80784] */
  EAX = (r32((uint32_t)(0x10d80784)));
  /* 10d60ea6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d60ea9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d60eab sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d60ead inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10d60eae:;
  /* 10d60eae mov esp, ebp */
  ESP = (EBP);
  /* 10d60eb0 pop ebp */
  EBP = (pop32());
  /* 10d60eb1 ret 4 */
  ESPCHK(0x10d60b90u, _esp0);
  ESP += 8; return;
}

/* FUN_10010ec0 @ 0x10d60ec0 (116 bytes, 33 insns) */
void f_10d60ec0(void) {
  FTRACE(0x10d60ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d60ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d60ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10d60ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d60ec4 mov eax, dword ptr [0x10d8077c] */
  EAX = (r32((uint32_t)(0x10d8077c)));
  /* 10d60ec9 push eax */
  push32((uint32_t)(EAX));
  /* 10d60eca call 0x10d57890 */
  push32(0x10d60ecfu); f_10d57890();
  /* 10d60ecf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60ed2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d60ed4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60ed7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10d60eda mov dword ptr [0x10d80778], ecx */
  w32((uint32_t)(0x10d80778), (ECX));
  /* 10d60ee0 cmp dword ptr [0x10d80778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60ee7 je 0x10d60ef2 */
  if (C.zf) goto L_10d60ef2;
  /* 10d60ee9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10d60ef0 jmp 0x10d60f04 */
  goto L_10d60f04;
L_10d60ef2:;
  /* 10d60ef2 mov edx, dword ptr [0x10d8077c] */
  EDX = (r32((uint32_t)(0x10d8077c)));
  /* 10d60ef8 push edx */
  push32((uint32_t)(EDX));
  /* 10d60ef9 call 0x10d61570 */
  push32(0x10d60efeu); f_10d61570();
  /* 10d60efe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60f01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d60f04:;
  /* 10d60f04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d60f07 mov dword ptr [0x10d80774], eax */
  w32((uint32_t)(0x10d80774), (EAX));
  /* 10d60f0c push 1 */
  push32((uint32_t)(0x1u));
  /* 10d60f0e push 0x10d60f40 */
  push32((uint32_t)(0x10d60f40u));
  /* 10d60f13 call dword ptr [0x10d832a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832a4))), 0x10d60f19u);
  /* 10d60f19 mov ecx, dword ptr [0x10d80784] */
  ECX = (r32((uint32_t)(0x10d80784)));
  /* 10d60f1f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10d60f22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d60f24 jne 0x10d60f30 */
  if (!C.zf) goto L_10d60f30;
  /* 10d60f26 mov dword ptr [0x10d80784], 0 */
  w32((uint32_t)(0x10d80784), (0x0u));
L_10d60f30:;
  /* 10d60f30 mov esp, ebp */
  ESP = (EBP);
  /* 10d60f32 pop ebp */
  EBP = (pop32());
  /* 10d60f33 ret  */
  ESPCHK(0x10d60ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f40 @ 0x10d60f40 (287 bytes, 86 insns) */
void f_10d60f40(void) {
  FTRACE(0x10d60f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d60f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10d60f41 mov ebp, esp */
  EBP = (ESP);
  /* 10d60f43 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d60f46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d60f49 push eax */
  push32((uint32_t)(EAX));
  /* 10d60f4a call 0x10d614f0 */
  push32(0x10d60f4fu); f_10d614f0();
  /* 10d60f4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60f52 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10d60f55 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10d60f57 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d60f5a push ecx */
  push32((uint32_t)(ECX));
  /* 10d60f5b mov edx, dword ptr [0x10d80778] */
  EDX = (r32((uint32_t)(0x10d80778)));
  /* 10d60f61 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d60f63 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d60f65 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10d60f6b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60f71 push edx */
  push32((uint32_t)(EDX));
  /* 10d60f72 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d60f75 push eax */
  push32((uint32_t)(EAX));
  /* 10d60f76 call dword ptr [0x10d8078c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8078c))), 0x10d60f7cu);
  /* 10d60f7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60f7e jne 0x10d60f94 */
  if (!C.zf) goto L_10d60f94;
  /* 10d60f80 mov dword ptr [0x10d80784], 0 */
  w32((uint32_t)(0x10d80784), (0x0u));
  /* 10d60f8a mov eax, 1 */
  EAX = (0x1u);
  /* 10d60f8f jmp 0x10d61059 */
  goto L_10d61059;
L_10d60f94:;
  /* 10d60f94 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d60f97 push ecx */
  push32((uint32_t)(ECX));
  /* 10d60f98 mov edx, dword ptr [0x10d8077c] */
  EDX = (r32((uint32_t)(0x10d8077c)));
  /* 10d60f9e push edx */
  push32((uint32_t)(EDX));
  /* 10d60f9f call 0x10d63130 */
  push32(0x10d60fa4u); f_10d63130();
  /* 10d60fa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60fa7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60fa9 jne 0x10d60fe9 */
  if (!C.zf) goto L_10d60fe9;
  /* 10d60fab cmp dword ptr [0x10d80778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60fb2 jne 0x10d60fc6 */
  if (!C.zf) goto L_10d60fc6;
  /* 10d60fb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d60fb6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d60fb9 push eax */
  push32((uint32_t)(EAX));
  /* 10d60fba call 0x10d61280 */
  push32(0x10d60fbfu); f_10d61280();
  /* 10d60fbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d60fc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d60fc4 je 0x10d60fe7 */
  if (C.zf) goto L_10d60fe7;
L_10d60fc6:;
  /* 10d60fc6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d60fc9 mov dword ptr [0x10d80788], ecx */
  w32((uint32_t)(0x10d80788), (ECX));
  /* 10d60fcf mov edx, dword ptr [0x10d80788] */
  EDX = (r32((uint32_t)(0x10d80788)));
  /* 10d60fd5 mov dword ptr [0x10d8076c], edx */
  w32((uint32_t)(0x10d8076c), (EDX));
  /* 10d60fdb mov eax, dword ptr [0x10d80784] */
  EAX = (r32((uint32_t)(0x10d80784)));
  /* 10d60fe0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10d60fe2 mov dword ptr [0x10d80784], eax */
  w32((uint32_t)(0x10d80784), (EAX));
L_10d60fe7:;
  /* 10d60fe7 jmp 0x10d6104c */
  goto L_10d6104c;
L_10d60fe9:;
  /* 10d60fe9 cmp dword ptr [0x10d80778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60ff0 jne 0x10d6104c */
  if (!C.zf) goto L_10d6104c;
  /* 10d60ff2 cmp dword ptr [0x10d80774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d60ff9 je 0x10d6104c */
  if (C.zf) goto L_10d6104c;
  /* 10d60ffb mov ecx, dword ptr [0x10d80774] */
  ECX = (r32((uint32_t)(0x10d80774)));
  /* 10d61001 push ecx */
  push32((uint32_t)(ECX));
  /* 10d61002 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10d61005 push edx */
  push32((uint32_t)(EDX));
  /* 10d61006 mov eax, dword ptr [0x10d8077c] */
  EAX = (r32((uint32_t)(0x10d8077c)));
  /* 10d6100b push eax */
  push32((uint32_t)(EAX));
  /* 10d6100c call 0x10d63200 */
  push32(0x10d61011u); f_10d63200();
  /* 10d61011 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61014 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d61016 jne 0x10d6104c */
  if (!C.zf) goto L_10d6104c;
  /* 10d61018 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6101a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d6101d push ecx */
  push32((uint32_t)(ECX));
  /* 10d6101e call 0x10d61280 */
  push32(0x10d61023u); f_10d61280();
  /* 10d61023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61026 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d61028 je 0x10d6104c */
  if (C.zf) goto L_10d6104c;
  /* 10d6102a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d6102d mov dword ptr [0x10d80788], edx */
  w32((uint32_t)(0x10d80788), (EDX));
  /* 10d61033 mov eax, dword ptr [0x10d80788] */
  EAX = (r32((uint32_t)(0x10d80788)));
  /* 10d61038 mov dword ptr [0x10d8076c], eax */
  w32((uint32_t)(0x10d8076c), (EAX));
  /* 10d6103d mov ecx, dword ptr [0x10d80784] */
  ECX = (r32((uint32_t)(0x10d80784)));
  /* 10d61043 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10d61046 mov dword ptr [0x10d80784], ecx */
  w32((uint32_t)(0x10d80784), (ECX));
L_10d6104c:;
  /* 10d6104c mov eax, dword ptr [0x10d80784] */
  EAX = (r32((uint32_t)(0x10d80784)));
  /* 10d61051 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d61054 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d61056 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d61058 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10d61059:;
  /* 10d61059 mov esp, ebp */
  ESP = (EBP);
  /* 10d6105b pop ebp */
  EBP = (pop32());
  /* 10d6105c ret 4 */
  ESPCHK(0x10d60f40u, _esp0);
  ESP += 8; return;
}

/* FUN_10011060 @ 0x10d61060 (69 bytes, 20 insns) */
void f_10d61060(void) {
  FTRACE(0x10d61060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d61060 push ebp */
  push32((uint32_t)(EBP));
  /* 10d61061 mov ebp, esp */
  EBP = (ESP);
  /* 10d61063 mov eax, dword ptr [0x10d80780] */
  EAX = (r32((uint32_t)(0x10d80780)));
  /* 10d61068 push eax */
  push32((uint32_t)(EAX));
  /* 10d61069 call 0x10d57890 */
  push32(0x10d6106eu); f_10d57890();
  /* 10d6106e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61071 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d61073 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61076 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10d61079 mov dword ptr [0x10d80770], ecx */
  w32((uint32_t)(0x10d80770), (ECX));
  /* 10d6107f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d61081 push 0x10d610b0 */
  push32((uint32_t)(0x10d610b0u));
  /* 10d61086 call dword ptr [0x10d832a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832a4))), 0x10d6108cu);
  /* 10d6108c mov edx, dword ptr [0x10d80784] */
  EDX = (r32((uint32_t)(0x10d80784)));
  /* 10d61092 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d61095 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d61097 jne 0x10d610a3 */
  if (!C.zf) goto L_10d610a3;
  /* 10d61099 mov dword ptr [0x10d80784], 0 */
  w32((uint32_t)(0x10d80784), (0x0u));
L_10d610a3:;
  /* 10d610a3 pop ebp */
  EBP = (pop32());
  /* 10d610a4 ret  */
  ESPCHK(0x10d61060u, _esp0);
  ESP += 4; return;
}

/* FUN_100110b0 @ 0x10d610b0 (172 bytes, 54 insns) */
void f_10d610b0(void) {
  FTRACE(0x10d610b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d610b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d610b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d610b3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d610b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d610b9 push eax */
  push32((uint32_t)(EAX));
  /* 10d610ba call 0x10d614f0 */
  push32(0x10d610bfu); f_10d614f0();
  /* 10d610bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d610c2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10d610c5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10d610c7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d610ca push ecx */
  push32((uint32_t)(ECX));
  /* 10d610cb mov edx, dword ptr [0x10d80770] */
  EDX = (r32((uint32_t)(0x10d80770)));
  /* 10d610d1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d610d3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d610d5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10d610db add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d610e1 push edx */
  push32((uint32_t)(EDX));
  /* 10d610e2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d610e5 push eax */
  push32((uint32_t)(EAX));
  /* 10d610e6 call dword ptr [0x10d8078c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8078c))), 0x10d610ecu);
  /* 10d610ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d610ee jne 0x10d61101 */
  if (!C.zf) goto L_10d61101;
  /* 10d610f0 mov dword ptr [0x10d80784], 0 */
  w32((uint32_t)(0x10d80784), (0x0u));
  /* 10d610fa mov eax, 1 */
  EAX = (0x1u);
  /* 10d610ff jmp 0x10d61156 */
  goto L_10d61156;
L_10d61101:;
  /* 10d61101 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d61104 push ecx */
  push32((uint32_t)(ECX));
  /* 10d61105 mov edx, dword ptr [0x10d80780] */
  EDX = (r32((uint32_t)(0x10d80780)));
  /* 10d6110b push edx */
  push32((uint32_t)(EDX));
  /* 10d6110c call 0x10d63130 */
  push32(0x10d61111u); f_10d63130();
  /* 10d61111 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61114 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d61116 jne 0x10d61149 */
  if (!C.zf) goto L_10d61149;
  /* 10d61118 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d6111b push eax */
  push32((uint32_t)(EAX));
  /* 10d6111c call 0x10d61230 */
  push32(0x10d61121u); f_10d61230();
  /* 10d61121 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d61126 je 0x10d61149 */
  if (C.zf) goto L_10d61149;
  /* 10d61128 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d6112b mov dword ptr [0x10d80788], ecx */
  w32((uint32_t)(0x10d80788), (ECX));
  /* 10d61131 mov edx, dword ptr [0x10d80788] */
  EDX = (r32((uint32_t)(0x10d80788)));
  /* 10d61137 mov dword ptr [0x10d8076c], edx */
  w32((uint32_t)(0x10d8076c), (EDX));
  /* 10d6113d mov eax, dword ptr [0x10d80784] */
  EAX = (r32((uint32_t)(0x10d80784)));
  /* 10d61142 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10d61144 mov dword ptr [0x10d80784], eax */
  w32((uint32_t)(0x10d80784), (EAX));
L_10d61149:;
  /* 10d61149 mov eax, dword ptr [0x10d80784] */
  EAX = (r32((uint32_t)(0x10d80784)));
  /* 10d6114e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d61151 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d61153 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d61155 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10d61156:;
  /* 10d61156 mov esp, ebp */
  ESP = (EBP);
  /* 10d61158 pop ebp */
  EBP = (pop32());
  /* 10d61159 ret 4 */
  ESPCHK(0x10d610b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10011160 @ 0x10d61160 (43 bytes, 11 insns) */
void f_10d61160(void) {
  FTRACE(0x10d61160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d61160 push ebp */
  push32((uint32_t)(EBP));
  /* 10d61161 mov ebp, esp */
  EBP = (ESP);
  /* 10d61163 mov eax, dword ptr [0x10d80784] */
  EAX = (r32((uint32_t)(0x10d80784)));
  /* 10d61168 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10d6116d mov dword ptr [0x10d80784], eax */
  w32((uint32_t)(0x10d80784), (EAX));
  /* 10d61172 call dword ptr [0x10d83294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83294))), 0x10d61178u);
  /* 10d61178 mov dword ptr [0x10d80788], eax */
  w32((uint32_t)(0x10d80788), (EAX));
  /* 10d6117d mov ecx, dword ptr [0x10d80788] */
  ECX = (r32((uint32_t)(0x10d80788)));
  /* 10d61183 mov dword ptr [0x10d8076c], ecx */
  w32((uint32_t)(0x10d8076c), (ECX));
  /* 10d61189 pop ebp */
  EBP = (pop32());
  /* 10d6118a ret  */
  ESPCHK(0x10d61160u, _esp0);
  ESP += 4; return;
}

/* FUN_10011190 @ 0x10d61190 (155 bytes, 57 insns) */
void f_10d61190(void) {
  FTRACE(0x10d61190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d61190 push ebp */
  push32((uint32_t)(EBP));
  /* 10d61191 mov ebp, esp */
  EBP = (ESP);
  /* 10d61193 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d61196 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6119a je 0x10d611bb */
  if (C.zf) goto L_10d611bb;
  /* 10d6119c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6119f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d611a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d611a4 je 0x10d611bb */
  if (C.zf) goto L_10d611bb;
  /* 10d611a6 push 0x10d7c804 */
  push32((uint32_t)(0x10d7c804u));
  /* 10d611ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d611ae push edx */
  push32((uint32_t)(EDX));
  /* 10d611af call 0x10d606f0 */
  push32(0x10d611b4u); f_10d606f0();
  /* 10d611b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d611b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d611b9 jne 0x10d611e3 */
  if (!C.zf) goto L_10d611e3;
L_10d611bb:;
  /* 10d611bb push 8 */
  push32((uint32_t)(0x8u));
  /* 10d611bd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10d611c0 push eax */
  push32((uint32_t)(EAX));
  /* 10d611c1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10d611c6 mov ecx, dword ptr [0x10d80788] */
  ECX = (r32((uint32_t)(0x10d80788)));
  /* 10d611cc push ecx */
  push32((uint32_t)(ECX));
  /* 10d611cd call dword ptr [0x10d8078c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8078c))), 0x10d611d3u);
  /* 10d611d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d611d5 jne 0x10d611db */
  if (!C.zf) goto L_10d611db;
  /* 10d611d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d611d9 jmp 0x10d61227 */
  goto L_10d61227;
L_10d611db:;
  /* 10d611db lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10d611de mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10d611e1 jmp 0x10d6121b */
  goto L_10d6121b;
L_10d611e3:;
  /* 10d611e3 push 0x10d7c800 */
  push32((uint32_t)(0x10d7c800u));
  /* 10d611e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d611eb push eax */
  push32((uint32_t)(EAX));
  /* 10d611ec call 0x10d606f0 */
  push32(0x10d611f1u); f_10d606f0();
  /* 10d611f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d611f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d611f6 jne 0x10d6121b */
  if (!C.zf) goto L_10d6121b;
  /* 10d611f8 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d611fa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10d611fd push ecx */
  push32((uint32_t)(ECX));
  /* 10d611fe push 0xb */
  push32((uint32_t)(0xbu));
  /* 10d61200 mov edx, dword ptr [0x10d80788] */
  EDX = (r32((uint32_t)(0x10d80788)));
  /* 10d61206 push edx */
  push32((uint32_t)(EDX));
  /* 10d61207 call dword ptr [0x10d8078c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8078c))), 0x10d6120du);
  /* 10d6120d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d6120f jne 0x10d61215 */
  if (!C.zf) goto L_10d61215;
  /* 10d61211 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d61213 jmp 0x10d61227 */
  goto L_10d61227;
L_10d61215:;
  /* 10d61215 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10d61218 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10d6121b:;
  /* 10d6121b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6121e push ecx */
  push32((uint32_t)(ECX));
  /* 10d6121f call 0x10d63310 */
  push32(0x10d61224u); f_10d63310();
  /* 10d61224 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d61227:;
  /* 10d61227 mov esp, ebp */
  ESP = (EBP);
  /* 10d61229 pop ebp */
  EBP = (pop32());
  /* 10d6122a ret  */
  ESPCHK(0x10d61190u, _esp0);
  ESP += 4; return;
}

/* FUN_10011230 @ 0x10d61230 (79 bytes, 26 insns) */
void f_10d61230(void) {
  FTRACE(0x10d61230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d61230 push ebp */
  push32((uint32_t)(EBP));
  /* 10d61231 mov ebp, esp */
  EBP = (ESP);
  /* 10d61233 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d61236 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10d6123a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10d6123e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d61245 jmp 0x10d61250 */
  goto L_10d61250;
L_10d61247:;
  /* 10d61247 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d6124a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6124d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d61250:;
  /* 10d61250 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61254 jae 0x10d61276 */
  if (!C.cf) goto L_10d61276;
  /* 10d61256 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d61259 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d6125f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d61262 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d61264 mov cx, word ptr [eax*2 + 0x10d7f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10d7f9c4)));
  /* 10d6126c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6126e jne 0x10d61274 */
  if (!C.zf) goto L_10d61274;
  /* 10d61270 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d61272 jmp 0x10d6127b */
  goto L_10d6127b;
L_10d61274:;
  /* 10d61274 jmp 0x10d61247 */
  goto L_10d61247;
L_10d61276:;
  /* 10d61276 mov eax, 1 */
  EAX = (0x1u);
L_10d6127b:;
  /* 10d6127b mov esp, ebp */
  ESP = (EBP);
  /* 10d6127d pop ebp */
  EBP = (pop32());
  /* 10d6127e ret  */
  ESPCHK(0x10d61230u, _esp0);
  ESP += 4; return;
}

/* FUN_10011280 @ 0x10d61280 (135 bytes, 48 insns) */
void f_10d61280(void) {
  FTRACE(0x10d61280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d61280 push ebp */
  push32((uint32_t)(EBP));
  /* 10d61281 mov ebp, esp */
  EBP = (ESP);
  /* 10d61283 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d61286 push esi */
  push32((uint32_t)(ESI));
  /* 10d61287 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6128a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d6128f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d61294 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d61299 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10d6129c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d612a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d612a4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10d612a6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10d612a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d612aa push 1 */
  push32((uint32_t)(0x1u));
  /* 10d612ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d612af push edx */
  push32((uint32_t)(EDX));
  /* 10d612b0 call dword ptr [0x10d8078c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8078c))), 0x10d612b6u);
  /* 10d612b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d612b8 jne 0x10d612be */
  if (!C.zf) goto L_10d612be;
  /* 10d612ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d612bc jmp 0x10d61302 */
  goto L_10d61302;
L_10d612be:;
  /* 10d612be lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10d612c1 push eax */
  push32((uint32_t)(EAX));
  /* 10d612c2 call 0x10d614f0 */
  push32(0x10d612c7u); f_10d614f0();
  /* 10d612c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d612ca cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d612cd je 0x10d612fd */
  if (C.zf) goto L_10d612fd;
  /* 10d612cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d612d3 je 0x10d612fd */
  if (C.zf) goto L_10d612fd;
  /* 10d612d5 mov ecx, dword ptr [0x10d8077c] */
  ECX = (r32((uint32_t)(0x10d8077c)));
  /* 10d612db push ecx */
  push32((uint32_t)(ECX));
  /* 10d612dc call 0x10d61570 */
  push32(0x10d612e1u); f_10d61570();
  /* 10d612e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d612e4 mov esi, eax */
  ESI = (EAX);
  /* 10d612e6 mov edx, dword ptr [0x10d8077c] */
  EDX = (r32((uint32_t)(0x10d8077c)));
  /* 10d612ec push edx */
  push32((uint32_t)(EDX));
  /* 10d612ed call 0x10d57890 */
  push32(0x10d612f2u); f_10d57890();
  /* 10d612f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d612f5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d612f7 jne 0x10d612fd */
  if (!C.zf) goto L_10d612fd;
  /* 10d612f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d612fb jmp 0x10d61302 */
  goto L_10d61302;
L_10d612fd:;
  /* 10d612fd mov eax, 1 */
  EAX = (0x1u);
L_10d61302:;
  /* 10d61302 pop esi */
  ESI = (pop32());
  /* 10d61303 mov esp, ebp */
  ESP = (EBP);
  /* 10d61305 pop ebp */
  EBP = (pop32());
  /* 10d61306 ret  */
  ESPCHK(0x10d61280u, _esp0);
  ESP += 4; return;
}

/* FUN_10011310 @ 0x10d61310 (77 bytes, 18 insns) */
void f_10d61310(void) {
  FTRACE(0x10d61310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d61310 push ebp */
  push32((uint32_t)(EBP));
  /* 10d61311 mov ebp, esp */
  EBP = (ESP);
  /* 10d61313 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d61319 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10d61323 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10d61329 push eax */
  push32((uint32_t)(EAX));
  /* 10d6132a call dword ptr [0x10d83290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83290))), 0x10d61330u);
  /* 10d61330 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d61332 je 0x10d61349 */
  if (C.zf) goto L_10d61349;
  /* 10d61334 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6133b jne 0x10d61349 */
  if (!C.zf) goto L_10d61349;
  /* 10d6133d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10d61347 jmp 0x10d61353 */
  goto L_10d61353;
L_10d61349:;
  /* 10d61349 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10d61353:;
  /* 10d61353 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10d61359 mov esp, ebp */
  ESP = (EBP);
  /* 10d6135b pop ebp */
  EBP = (pop32());
  /* 10d6135c ret  */
  ESPCHK(0x10d61310u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10d61360 (388 bytes, 118 insns) */
void f_10d61360(void) {
  FTRACE(0x10d61360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d61360 push ebp */
  push32((uint32_t)(EBP));
  /* 10d61361 mov ebp, esp */
  EBP = (ESP);
  /* 10d61363 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d61366 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d6136d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10d61374 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10d6137b:;
  /* 10d6137b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d6137e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61381 jg 0x10d614c8 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d614c8;
  /* 10d61387 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d6138a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6138d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d6138e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d61390 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d61392 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d61395 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61398 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d6139b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6139e cmp edx, dword ptr [ecx + 0x10d7f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10d7f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d613a4 jne 0x10d6149e */
  if (!C.zf) goto L_10d6149e;
  /* 10d613aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d613ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d613b0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d613b4 ja 0x10d613d7 */
  if ((!C.cf&&!C.zf)) goto L_10d613d7;
  /* 10d613b6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d613ba je 0x10d61449 */
  if (C.zf) goto L_10d61449;
  /* 10d613c0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d613c4 je 0x10d613f4 */
  if (C.zf) goto L_10d613f4;
  /* 10d613c6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d613ca je 0x10d61416 */
  if (C.zf) goto L_10d61416;
  /* 10d613cc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d613d0 je 0x10d61438 */
  if (C.zf) goto L_10d61438;
  /* 10d613d2 jmp 0x10d61468 */
  goto L_10d61468;
L_10d613d7:;
  /* 10d613d7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d613de je 0x10d61405 */
  if (C.zf) goto L_10d61405;
  /* 10d613e0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d613e7 je 0x10d61427 */
  if (C.zf) goto L_10d61427;
  /* 10d613e9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d613f0 je 0x10d6145a */
  if (C.zf) goto L_10d6145a;
  /* 10d613f2 jmp 0x10d61468 */
  goto L_10d61468;
L_10d613f4:;
  /* 10d613f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d613f7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d613fa add ecx, 0x10d7f524 */
  { uint32_t _a=(ECX),_b=(0x10d7f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61400 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d61403 jmp 0x10d61468 */
  goto L_10d61468;
L_10d61405:;
  /* 10d61405 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61408 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d6140b mov eax, dword ptr [edx + 0x10d7f52c] */
  EAX = (r32((uint32_t)(EDX + 0x10d7f52c)));
  /* 10d61411 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d61414 jmp 0x10d61468 */
  goto L_10d61468;
L_10d61416:;
  /* 10d61416 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61419 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d6141c add ecx, 0x10d7f530 */
  { uint32_t _a=(ECX),_b=(0x10d7f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61422 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d61425 jmp 0x10d61468 */
  goto L_10d61468;
L_10d61427:;
  /* 10d61427 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d6142a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d6142d mov eax, dword ptr [edx + 0x10d7f534] */
  EAX = (r32((uint32_t)(EDX + 0x10d7f534)));
  /* 10d61433 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d61436 jmp 0x10d61468 */
  goto L_10d61468;
L_10d61438:;
  /* 10d61438 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d6143b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d6143e add ecx, 0x10d7f538 */
  { uint32_t _a=(ECX),_b=(0x10d7f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61444 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d61447 jmp 0x10d61468 */
  goto L_10d61468;
L_10d61449:;
  /* 10d61449 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d6144c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d6144f add edx, 0x10d7f53c */
  { uint32_t _a=(EDX),_b=(0x10d7f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61455 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d61458 jmp 0x10d61468 */
  goto L_10d61468;
L_10d6145a:;
  /* 10d6145a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d6145d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d61460 add eax, 0x10d7f544 */
  { uint32_t _a=(EAX),_b=(0x10d7f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61465 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d61468:;
  /* 10d61468 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6146c je 0x10d61474 */
  if (C.zf) goto L_10d61474;
  /* 10d6146e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61472 jge 0x10d61476 */
  if ((C.sf==C.of)) goto L_10d61476;
L_10d61474:;
  /* 10d61474 jmp 0x10d614c8 */
  goto L_10d614c8;
L_10d61476:;
  /* 10d61476 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d61479 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d6147c push ecx */
  push32((uint32_t)(ECX));
  /* 10d6147d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d61480 push edx */
  push32((uint32_t)(EDX));
  /* 10d61481 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d61484 push eax */
  push32((uint32_t)(EAX));
  /* 10d61485 call 0x10d58280 */
  push32(0x10d6148au); f_10d58280();
  /* 10d6148a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6148d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d61490 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61493 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10d61497 mov eax, 1 */
  EAX = (0x1u);
  /* 10d6149c jmp 0x10d614de */
  goto L_10d614de;
L_10d6149e:;
  /* 10d6149e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d614a1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d614a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d614a7 cmp eax, dword ptr [edx + 0x10d7f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10d7f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d614ad jae 0x10d614ba */
  if (!C.cf) goto L_10d614ba;
  /* 10d614af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d614b2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d614b5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d614b8 jmp 0x10d614c3 */
  goto L_10d614c3;
L_10d614ba:;
  /* 10d614ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d614bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d614c0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d614c3:;
  /* 10d614c3 jmp 0x10d6137b */
  goto L_10d6137b;
L_10d614c8:;
  /* 10d614c8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d614cb push eax */
  push32((uint32_t)(EAX));
  /* 10d614cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d614cf push ecx */
  push32((uint32_t)(ECX));
  /* 10d614d0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d614d3 push edx */
  push32((uint32_t)(EDX));
  /* 10d614d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d614d7 push eax */
  push32((uint32_t)(EAX));
  /* 10d614d8 call dword ptr [0x10d8329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8329c))), 0x10d614deu);
L_10d614de:;
  /* 10d614de mov esp, ebp */
  ESP = (EBP);
  /* 10d614e0 pop ebp */
  EBP = (pop32());
  /* 10d614e1 ret 0x10 */
  ESPCHK(0x10d61360u, _esp0);
  ESP += 20; return;
}

/* FUN_100114f0 @ 0x10d614f0 (118 bytes, 42 insns) */
void f_10d614f0(void) {
  FTRACE(0x10d614f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d614f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d614f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d614f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d614f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d614fd:;
  /* 10d614fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d61500 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d61502 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10d61505 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d61509 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6150c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6150f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d61512 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d61514 je 0x10d6155f */
  if (C.zf) goto L_10d6155f;
  /* 10d61516 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d6151a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6151d jl 0x10d61532 */
  if ((C.sf!=C.of)) goto L_10d61532;
  /* 10d6151f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d61523 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61526 jg 0x10d61532 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d61532;
  /* 10d61528 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10d6152b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d6152d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10d61530 jmp 0x10d6154c */
  goto L_10d6154c;
L_10d61532:;
  /* 10d61532 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d61536 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61539 jl 0x10d6154c */
  if ((C.sf!=C.of)) goto L_10d6154c;
  /* 10d6153b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d6153f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61542 jg 0x10d6154c */
  if ((!C.zf&&C.sf==C.of)) goto L_10d6154c;
  /* 10d61544 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10d61547 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d61549 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10d6154c:;
  /* 10d6154c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d6154f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10d61552 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d61556 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10d6155a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d6155d jmp 0x10d614fd */
  goto L_10d614fd;
L_10d6155f:;
  /* 10d6155f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d61562 mov esp, ebp */
  ESP = (EBP);
  /* 10d61564 pop ebp */
  EBP = (pop32());
  /* 10d61565 ret  */
  ESPCHK(0x10d614f0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10d61570 (101 bytes, 36 insns) */
void f_10d61570(void) {
  FTRACE(0x10d61570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d61570 push ebp */
  push32((uint32_t)(EBP));
  /* 10d61571 mov ebp, esp */
  EBP = (ESP);
  /* 10d61573 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d61576 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d6157d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d61580 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d61582 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10d61585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d61588 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6158b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10d6158e:;
  /* 10d6158e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10d61592 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61595 jl 0x10d615a0 */
  if ((C.sf!=C.of)) goto L_10d615a0;
  /* 10d61597 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10d6159b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6159e jle 0x10d615b2 */
  if ((C.zf||C.sf!=C.of)) goto L_10d615b2;
L_10d615a0:;
  /* 10d615a0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10d615a4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d615a7 jl 0x10d615ce */
  if ((C.sf!=C.of)) goto L_10d615ce;
  /* 10d615a9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10d615ad cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d615b0 jg 0x10d615ce */
  if ((!C.zf&&C.sf==C.of)) goto L_10d615ce;
L_10d615b2:;
  /* 10d615b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d615b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d615b8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d615bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d615be mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d615c0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10d615c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d615c6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d615c9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10d615cc jmp 0x10d6158e */
  goto L_10d6158e;
L_10d615ce:;
  /* 10d615ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d615d1 mov esp, ebp */
  ESP = (EBP);
  /* 10d615d3 pop ebp */
  EBP = (pop32());
  /* 10d615d4 ret  */
  ESPCHK(0x10d61570u, _esp0);
  ESP += 4; return;
}

/* FUN_100115e0 @ 0x10d615e0 (122 bytes, 39 insns) */
void f_10d615e0(void) {
  FTRACE(0x10d615e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d615e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d615e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d615e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d615e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d615e7 cmp eax, dword ptr [0x10d8201c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d8201c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d615ed jae 0x10d61611 */
  if (!C.cf) goto L_10d61611;
  /* 10d615ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d615f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d615f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d615f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d615fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d615fe mov eax, dword ptr [ecx*4 + 0x10d81ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d81ee0)));
  /* 10d61605 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d6160a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d6160d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d6160f jne 0x10d6162c */
  if (!C.zf) goto L_10d6162c;
L_10d61611:;
  /* 10d61611 call 0x10d5c930 */
  push32(0x10d61616u); f_10d5c930();
  /* 10d61616 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d6161c call 0x10d5c940 */
  push32(0x10d61621u); f_10d5c940();
  /* 10d61621 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d61627 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d6162a jmp 0x10d61656 */
  goto L_10d61656;
L_10d6162c:;
  /* 10d6162c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6162f push edx */
  push32((uint32_t)(EDX));
  /* 10d61630 call 0x10d5e150 */
  push32(0x10d61635u); f_10d5e150();
  /* 10d61635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61638 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6163b push eax */
  push32((uint32_t)(EAX));
  /* 10d6163c call 0x10d61660 */
  push32(0x10d61641u); f_10d61660();
  /* 10d61641 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61644 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d61647 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6164a push ecx */
  push32((uint32_t)(ECX));
  /* 10d6164b call 0x10d5e1e0 */
  push32(0x10d61650u); f_10d5e1e0();
  /* 10d61650 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61653 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d61656:;
  /* 10d61656 mov esp, ebp */
  ESP = (EBP);
  /* 10d61658 pop ebp */
  EBP = (pop32());
  /* 10d61659 ret  */
  ESPCHK(0x10d615e0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10d61660 (170 bytes, 59 insns) */
void f_10d61660(void) {
  FTRACE(0x10d61660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d61660 push ebp */
  push32((uint32_t)(EBP));
  /* 10d61661 mov ebp, esp */
  EBP = (ESP);
  /* 10d61663 push ecx */
  push32((uint32_t)(ECX));
  /* 10d61664 push esi */
  push32((uint32_t)(ESI));
  /* 10d61665 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d61668 push eax */
  push32((uint32_t)(EAX));
  /* 10d61669 call 0x10d5dfd0 */
  push32(0x10d6166eu); f_10d5dfd0();
  /* 10d6166e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61671 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61674 je 0x10d616b3 */
  if (C.zf) goto L_10d616b3;
  /* 10d61676 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6167a je 0x10d61682 */
  if (C.zf) goto L_10d61682;
  /* 10d6167c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61680 jne 0x10d6169c */
  if (!C.zf) goto L_10d6169c;
L_10d61682:;
  /* 10d61682 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d61684 call 0x10d5dfd0 */
  push32(0x10d61689u); f_10d5dfd0();
  /* 10d61689 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6168c mov esi, eax */
  ESI = (EAX);
  /* 10d6168e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d61690 call 0x10d5dfd0 */
  push32(0x10d61695u); f_10d5dfd0();
  /* 10d61695 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61698 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6169a je 0x10d616b3 */
  if (C.zf) goto L_10d616b3;
L_10d6169c:;
  /* 10d6169c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6169f push ecx */
  push32((uint32_t)(ECX));
  /* 10d616a0 call 0x10d5dfd0 */
  push32(0x10d616a5u); f_10d5dfd0();
  /* 10d616a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d616a8 push eax */
  push32((uint32_t)(EAX));
  /* 10d616a9 call dword ptr [0x10d83298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83298))), 0x10d616afu);
  /* 10d616af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d616b1 je 0x10d616bc */
  if (C.zf) goto L_10d616bc;
L_10d616b3:;
  /* 10d616b3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d616ba jmp 0x10d616c5 */
  goto L_10d616c5;
L_10d616bc:;
  /* 10d616bc call dword ptr [0x10d83338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83338))), 0x10d616c2u);
  /* 10d616c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d616c5:;
  /* 10d616c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d616c8 push edx */
  push32((uint32_t)(EDX));
  /* 10d616c9 call 0x10d5def0 */
  push32(0x10d616ceu); f_10d5def0();
  /* 10d616ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d616d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d616d4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d616d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d616da and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d616dd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d616e0 mov edx, dword ptr [eax*4 + 0x10d81ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d81ee0)));
  /* 10d616e7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10d616ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d616f0 je 0x10d61703 */
  if (C.zf) goto L_10d61703;
  /* 10d616f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d616f5 push eax */
  push32((uint32_t)(EAX));
  /* 10d616f6 call 0x10d5c890 */
  push32(0x10d616fbu); f_10d5c890();
  /* 10d616fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d616fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d61701 jmp 0x10d61705 */
  goto L_10d61705;
L_10d61703:;
  /* 10d61703 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d61705:;
  /* 10d61705 pop esi */
  ESI = (pop32());
  /* 10d61706 mov esp, ebp */
  ESP = (EBP);
  /* 10d61708 pop ebp */
  EBP = (pop32());
  /* 10d61709 ret  */
  ESPCHK(0x10d61660u, _esp0);
  ESP += 4; return;
}

/* FUN_10011710 @ 0x10d61710 (146 bytes, 52 insns) */
void f_10d61710(void) {
  FTRACE(0x10d61710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d61710 push ebp */
  push32((uint32_t)(EBP));
  /* 10d61711 mov ebp, esp */
  EBP = (ESP);
  /* 10d61713 push ebx */
  push32((uint32_t)(EBX));
  /* 10d61714 push esi */
  push32((uint32_t)(ESI));
  /* 10d61715 push edi */
  push32((uint32_t)(EDI));
L_10d61716:;
  /* 10d61716 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6171a jne 0x10d6173a */
  if (!C.zf) goto L_10d6173a;
  /* 10d6171c push 0x10d7c140 */
  push32((uint32_t)(0x10d7c140u));
  /* 10d61721 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d61723 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10d61725 push 0x10d7c808 */
  push32((uint32_t)(0x10d7c808u));
  /* 10d6172a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d6172c call 0x10d53b20 */
  push32(0x10d61731u); f_10d53b20();
  /* 10d61731 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61734 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61737 jne 0x10d6173a */
  if (!C.zf) goto L_10d6173a;
  /* 10d61739 int3  */
  x86_unimpl("int3 @ 0x10d61739");
L_10d6173a:;
  /* 10d6173a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d6173c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d6173e jne 0x10d61716 */
  if (!C.zf) goto L_10d61716;
  /* 10d61740 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d61743 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d61746 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10d6174c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d6174e je 0x10d6179d */
  if (C.zf) goto L_10d6179d;
  /* 10d61750 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d61753 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d61756 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10d61759 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d6175b je 0x10d6179d */
  if (C.zf) goto L_10d6179d;
  /* 10d6175d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d6175f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d61762 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d61765 push eax */
  push32((uint32_t)(EAX));
  /* 10d61766 call 0x10d554f0 */
  push32(0x10d6176bu); f_10d554f0();
  /* 10d6176b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6176e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d61771 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d61774 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10d6177a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6177d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10d61780 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d61783 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10d61789 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6178c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10d61793 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d61796 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10d6179d:;
  /* 10d6179d pop edi */
  EDI = (pop32());
  /* 10d6179e pop esi */
  ESI = (pop32());
  /* 10d6179f pop ebx */
  EBX = (pop32());
  /* 10d617a0 pop ebp */
  EBP = (pop32());
  /* 10d617a1 ret  */
  ESPCHK(0x10d61710u, _esp0);
  ESP += 4; return;
}

/* FUN_100117b0 @ 0x10d617b0 (289 bytes, 97 insns) */
void f_10d617b0(void) {
  FTRACE(0x10d617b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d617b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d617b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d617b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d617b6 push esi */
  push32((uint32_t)(ESI));
  /* 10d617b7 mov eax, dword ptr [0x10d7fc98] */
  EAX = (r32((uint32_t)(0x10d7fc98)));
  /* 10d617bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d617bf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d617c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d617cd jmp 0x10d617d8 */
  goto L_10d617d8;
L_10d617cf:;
  /* 10d617cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d617d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d617d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10d617d8:;
  /* 10d617d8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d617dc jae 0x10d61811 */
  if (!C.cf) goto L_10d61811;
  /* 10d617de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d617e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d617e4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10d617e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d617e8 call 0x10d57890 */
  push32(0x10d617edu); f_10d57890();
  /* 10d617ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d617f0 mov esi, eax */
  ESI = (EAX);
  /* 10d617f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d617f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d617f8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10d617fc push ecx */
  push32((uint32_t)(ECX));
  /* 10d617fd call 0x10d57890 */
  push32(0x10d61802u); f_10d57890();
  /* 10d61802 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61805 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61808 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10d6180c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d6180f jmp 0x10d617cf */
  goto L_10d617cf;
L_10d61811:;
  /* 10d61811 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d61814 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61817 push eax */
  push32((uint32_t)(EAX));
  /* 10d61818 call 0x10d54a40 */
  push32(0x10d6181du); f_10d54a40();
  /* 10d6181d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61820 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d61823 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61827 je 0x10d618c9 */
  if (C.zf) goto L_10d618c9;
  /* 10d6182d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d61830 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d61833 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d6183a jmp 0x10d61845 */
  goto L_10d61845;
L_10d6183c:;
  /* 10d6183c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d6183f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61842 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d61845:;
  /* 10d61845 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61849 jae 0x10d618ba */
  if (!C.cf) goto L_10d618ba;
  /* 10d6184b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d6184e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10d61851 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61854 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61857 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d6185a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d6185d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61860 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10d61863 push ecx */
  push32((uint32_t)(ECX));
  /* 10d61864 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61867 push edx */
  push32((uint32_t)(EDX));
  /* 10d61868 call 0x10d57a10 */
  push32(0x10d6186du); f_10d57a10();
  /* 10d6186d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61870 push eax */
  push32((uint32_t)(EAX));
  /* 10d61871 call 0x10d57890 */
  push32(0x10d61876u); f_10d57890();
  /* 10d61876 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61879 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d6187c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6187e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d61881 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61884 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10d61887 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d6188a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6188d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d61890 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61893 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61896 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10d6189a push eax */
  push32((uint32_t)(EAX));
  /* 10d6189b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d6189e push ecx */
  push32((uint32_t)(ECX));
  /* 10d6189f call 0x10d57a10 */
  push32(0x10d618a4u); f_10d57a10();
  /* 10d618a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d618a7 push eax */
  push32((uint32_t)(EAX));
  /* 10d618a8 call 0x10d57890 */
  push32(0x10d618adu); f_10d57890();
  /* 10d618ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d618b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d618b3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d618b5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d618b8 jmp 0x10d6183c */
  goto L_10d6183c;
L_10d618ba:;
  /* 10d618ba mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d618bd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d618c0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d618c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d618c6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10d618c9:;
  /* 10d618c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d618cc pop esi */
  ESI = (pop32());
  /* 10d618cd mov esp, ebp */
  ESP = (EBP);
  /* 10d618cf pop ebp */
  EBP = (pop32());
  /* 10d618d0 ret  */
  ESPCHK(0x10d617b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100118e0 @ 0x10d618e0 (291 bytes, 97 insns) */
void f_10d618e0(void) {
  FTRACE(0x10d618e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d618e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d618e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d618e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d618e6 push esi */
  push32((uint32_t)(ESI));
  /* 10d618e7 mov eax, dword ptr [0x10d7fc98] */
  EAX = (r32((uint32_t)(0x10d7fc98)));
  /* 10d618ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d618ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d618f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d618fd jmp 0x10d61908 */
  goto L_10d61908;
L_10d618ff:;
  /* 10d618ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61902 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61905 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10d61908:;
  /* 10d61908 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6190c jae 0x10d61942 */
  if (!C.cf) goto L_10d61942;
  /* 10d6190e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61911 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61914 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10d61918 push ecx */
  push32((uint32_t)(ECX));
  /* 10d61919 call 0x10d57890 */
  push32(0x10d6191eu); f_10d57890();
  /* 10d6191e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61921 mov esi, eax */
  ESI = (EAX);
  /* 10d61923 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61926 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61929 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10d6192d push ecx */
  push32((uint32_t)(ECX));
  /* 10d6192e call 0x10d57890 */
  push32(0x10d61933u); f_10d57890();
  /* 10d61933 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61936 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61939 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10d6193d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d61940 jmp 0x10d618ff */
  goto L_10d618ff;
L_10d61942:;
  /* 10d61942 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d61945 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61948 push eax */
  push32((uint32_t)(EAX));
  /* 10d61949 call 0x10d54a40 */
  push32(0x10d6194eu); f_10d54a40();
  /* 10d6194e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61951 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d61954 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61958 je 0x10d619fb */
  if (C.zf) goto L_10d619fb;
  /* 10d6195e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d61961 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d61964 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d6196b jmp 0x10d61976 */
  goto L_10d61976;
L_10d6196d:;
  /* 10d6196d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61970 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61973 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d61976:;
  /* 10d61976 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6197a jae 0x10d619ec */
  if (!C.cf) goto L_10d619ec;
  /* 10d6197c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d6197f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10d61982 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61985 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61988 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d6198b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d6198e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61991 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10d61995 push ecx */
  push32((uint32_t)(ECX));
  /* 10d61996 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61999 push edx */
  push32((uint32_t)(EDX));
  /* 10d6199a call 0x10d57a10 */
  push32(0x10d6199fu); f_10d57a10();
  /* 10d6199f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d619a2 push eax */
  push32((uint32_t)(EAX));
  /* 10d619a3 call 0x10d57890 */
  push32(0x10d619a8u); f_10d57890();
  /* 10d619a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d619ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d619ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d619b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d619b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d619b6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10d619b9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d619bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d619bf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d619c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d619c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d619c8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10d619cc push eax */
  push32((uint32_t)(EAX));
  /* 10d619cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d619d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d619d1 call 0x10d57a10 */
  push32(0x10d619d6u); f_10d57a10();
  /* 10d619d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d619d9 push eax */
  push32((uint32_t)(EAX));
  /* 10d619da call 0x10d57890 */
  push32(0x10d619dfu); f_10d57890();
  /* 10d619df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d619e2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d619e5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d619e7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d619ea jmp 0x10d6196d */
  goto L_10d6196d;
L_10d619ec:;
  /* 10d619ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d619ef mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d619f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d619f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d619f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10d619fb:;
  /* 10d619fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d619fe pop esi */
  ESI = (pop32());
  /* 10d619ff mov esp, ebp */
  ESP = (EBP);
  /* 10d61a01 pop ebp */
  EBP = (pop32());
  /* 10d61a02 ret  */
  ESPCHK(0x10d618e0u, _esp0);
  ESP += 4; return;
}

