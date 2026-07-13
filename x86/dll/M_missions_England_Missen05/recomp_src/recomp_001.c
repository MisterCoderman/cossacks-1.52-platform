#include "recomp.h"

/* FUN_10006a70 @ 0x104a6a70 (116 bytes, 34 insns) */
void f_104a6a70(void) {
  FTRACE(0x104a6a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6a70 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6a71 mov ebp, esp */
  EBP = (ESP);
  /* 104a6a73 push ecx */
  push32((uint32_t)(ECX));
  /* 104a6a74 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 104a6a7b push 9 */
  push32((uint32_t)(0x9u));
  /* 104a6a7d call 0x104a6290 */
  push32(0x104a6a82u); f_104a6290();
  /* 104a6a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6a85 call 0x104a8180 */
  push32(0x104a6a8au); f_104a8180();
  /* 104a6a8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a6a8c jge 0x104a6a95 */
  if ((C.sf==C.of)) goto L_104a6a95;
  /* 104a6a8e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_104a6a95:;
  /* 104a6a95 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a6a97 call 0x104a6330 */
  push32(0x104a6a9cu); f_104a6330();
  /* 104a6a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6a9f push 0 */
  push32((uint32_t)(0x0u));
  /* 104a6aa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a6aa3 mov eax, dword ptr [0x104cfdcc] */
  EAX = (r32((uint32_t)(0x104cfdcc)));
  /* 104a6aa8 push eax */
  push32((uint32_t)(EAX));
  /* 104a6aa9 call dword ptr [0x104d02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02bc))), 0x104a6aafu);
  /* 104a6aaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a6ab1 jne 0x104a6add */
  if (!C.zf) goto L_104a6add;
  /* 104a6ab3 call dword ptr [0x104d029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d029c))), 0x104a6ab9u);
  /* 104a6ab9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6abc jne 0x104a6ad6 */
  if (!C.zf) goto L_104a6ad6;
  /* 104a6abe call 0x104aa770 */
  push32(0x104a6ac3u); f_104aa770();
  /* 104a6ac3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 104a6ac9 call 0x104aa760 */
  push32(0x104a6aceu); f_104aa760();
  /* 104a6ace mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 104a6ad4 jmp 0x104a6add */
  goto L_104a6add;
L_104a6ad6:;
  /* 104a6ad6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_104a6add:;
  /* 104a6add mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6ae0 mov esp, ebp */
  ESP = (EBP);
  /* 104a6ae2 pop ebp */
  EBP = (pop32());
  /* 104a6ae3 ret  */
  ESPCHK(0x104a6a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006af0 @ 0x104a6af0 (10 bytes, 5 insns) */
void f_104a6af0(void) {
  FTRACE(0x104a6af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6af0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6af1 mov ebp, esp */
  EBP = (ESP);
  /* 104a6af3 call 0x104a6a70 */
  push32(0x104a6af8u); f_104a6a70();
  /* 104a6af8 pop ebp */
  EBP = (pop32());
  /* 104a6af9 ret  */
  ESPCHK(0x104a6af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b00 @ 0x104a6b00 (10 bytes, 5 insns) */
void f_104a6b00(void) {
  FTRACE(0x104a6b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6b00 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6b01 mov ebp, esp */
  EBP = (ESP);
  /* 104a6b03 mov eax, dword ptr [0x104ccc94] */
  EAX = (r32((uint32_t)(0x104ccc94)));
  /* 104a6b08 pop ebp */
  EBP = (pop32());
  /* 104a6b09 ret  */
  ESPCHK(0x104a6b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b10 @ 0x104a6b10 (31 bytes, 11 insns) */
void f_104a6b10(void) {
  FTRACE(0x104a6b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6b10 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6b11 mov ebp, esp */
  EBP = (ESP);
  /* 104a6b13 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6b1a jbe 0x104a6b20 */
  if ((C.cf||C.zf)) goto L_104a6b20;
  /* 104a6b1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a6b1e jmp 0x104a6b2d */
  goto L_104a6b2d;
L_104a6b20:;
  /* 104a6b20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6b23 mov dword ptr [0x104ccc94], eax */
  w32((uint32_t)(0x104ccc94), (EAX));
  /* 104a6b28 mov eax, 1 */
  EAX = (0x1u);
L_104a6b2d:;
  /* 104a6b2d pop ebp */
  EBP = (pop32());
  /* 104a6b2e ret  */
  ESPCHK(0x104a6b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b30 @ 0x104a6b30 (89 bytes, 20 insns) */
void f_104a6b30(void) {
  FTRACE(0x104a6b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6b30 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6b31 mov ebp, esp */
  EBP = (ESP);
  /* 104a6b33 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 104a6b38 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a6b3a mov eax, dword ptr [0x104cfdcc] */
  EAX = (r32((uint32_t)(0x104cfdcc)));
  /* 104a6b3f push eax */
  push32((uint32_t)(EAX));
  /* 104a6b40 call dword ptr [0x104d02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02fc))), 0x104a6b46u);
  /* 104a6b46 mov dword ptr [0x104cfdc8], eax */
  w32((uint32_t)(0x104cfdc8), (EAX));
  /* 104a6b4b cmp dword ptr [0x104cfdc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cfdc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6b52 jne 0x104a6b58 */
  if (!C.zf) goto L_104a6b58;
  /* 104a6b54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a6b56 jmp 0x104a6b87 */
  goto L_104a6b87;
L_104a6b58:;
  /* 104a6b58 mov ecx, dword ptr [0x104cfdc8] */
  ECX = (r32((uint32_t)(0x104cfdc8)));
  /* 104a6b5e mov dword ptr [0x104cfdbc], ecx */
  w32((uint32_t)(0x104cfdbc), (ECX));
  /* 104a6b64 mov dword ptr [0x104cfdc0], 0 */
  w32((uint32_t)(0x104cfdc0), (0x0u));
  /* 104a6b6e mov dword ptr [0x104cfdc4], 0 */
  w32((uint32_t)(0x104cfdc4), (0x0u));
  /* 104a6b78 mov dword ptr [0x104cfda8], 0x10 */
  w32((uint32_t)(0x104cfda8), (0x10u));
  /* 104a6b82 mov eax, 1 */
  EAX = (0x1u);
L_104a6b87:;
  /* 104a6b87 pop ebp */
  EBP = (pop32());
  /* 104a6b88 ret  */
  ESPCHK(0x104a6b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b90 @ 0x104a6b90 (85 bytes, 29 insns) */
void f_104a6b90(void) {
  FTRACE(0x104a6b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6b90 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6b91 mov ebp, esp */
  EBP = (ESP);
  /* 104a6b93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6b96 mov eax, dword ptr [0x104cfdc4] */
  EAX = (r32((uint32_t)(0x104cfdc4)));
  /* 104a6b9b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a6b9e mov ecx, dword ptr [0x104cfdc8] */
  ECX = (r32((uint32_t)(0x104cfdc8)));
  /* 104a6ba4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6ba6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104a6ba9 mov edx, dword ptr [0x104cfdc8] */
  EDX = (r32((uint32_t)(0x104cfdc8)));
  /* 104a6baf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_104a6bb2:;
  /* 104a6bb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a6bb5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6bb8 jae 0x104a6bdf */
  if (!C.cf) goto L_104a6bdf;
  /* 104a6bba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a6bbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6bc0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6bc3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a6bc6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6bcd jae 0x104a6bd4 */
  if (!C.cf) goto L_104a6bd4;
  /* 104a6bcf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a6bd2 jmp 0x104a6be1 */
  goto L_104a6be1;
L_104a6bd4:;
  /* 104a6bd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a6bd7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6bda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a6bdd jmp 0x104a6bb2 */
  goto L_104a6bb2;
L_104a6bdf:;
  /* 104a6bdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104a6be1:;
  /* 104a6be1 mov esp, ebp */
  ESP = (EBP);
  /* 104a6be3 pop ebp */
  EBP = (pop32());
  /* 104a6be4 ret  */
  ESPCHK(0x104a6b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bf0 @ 0x104a6bf0 (95 bytes, 33 insns) */
void f_104a6bf0(void) {
  FTRACE(0x104a6bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6bf1 mov ebp, esp */
  EBP = (ESP);
  /* 104a6bf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6bf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6bf9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a6bfc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6bff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104a6c02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a6c05 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 104a6c08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a6c0b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a6c10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6c13 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a6c15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6c18 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104a6c1b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104a6c1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a6c1f jne 0x104a6c41 */
  if (!C.zf) goto L_104a6c41;
  /* 104a6c21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a6c24 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 104a6c27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a6c29 jne 0x104a6c41 */
  if (!C.zf) goto L_104a6c41;
  /* 104a6c2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a6c2e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a6c34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a6c36 je 0x104a6c41 */
  if (C.zf) goto L_104a6c41;
  /* 104a6c38 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 104a6c3f jmp 0x104a6c48 */
  goto L_104a6c48;
L_104a6c41:;
  /* 104a6c41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_104a6c48:;
  /* 104a6c48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a6c4b mov esp, ebp */
  ESP = (EBP);
  /* 104a6c4d pop ebp */
  EBP = (pop32());
  /* 104a6c4e ret  */
  ESPCHK(0x104a6bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c50 @ 0x104a6c50 (1485 bytes, 453 insns) */
void f_104a6c50(void) {
  FTRACE(0x104a6c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6c50 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6c51 mov ebp, esp */
  EBP = (ESP);
  /* 104a6c53 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6c56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6c59 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104a6c5c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 104a6c5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6c62 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a6c65 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6c68 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104a6c6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a6c6e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 104a6c71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104a6c74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6c77 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a6c7d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6c80 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 104a6c87 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104a6c8a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a6c8d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6c90 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 104a6c93 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a6c96 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a6c98 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6c9b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 104a6c9e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a6ca1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6ca4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 104a6ca7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a6caa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a6cac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104a6caf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a6cb2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 104a6cb5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104a6cb8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a6cbb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104a6cbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a6cc0 jne 0x104a6de8 */
  if (!C.zf) goto L_104a6de8;
  /* 104a6cc6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a6cc9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 104a6ccc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6ccf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 104a6cd2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6cd6 jbe 0x104a6cdf */
  if ((C.cf||C.zf)) goto L_104a6cdf;
  /* 104a6cd8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_104a6cdf:;
  /* 104a6cdf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a6ce2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a6ce5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a6ce8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6ceb jne 0x104a6dc1 */
  if (!C.zf) goto L_104a6dc1;
  /* 104a6cf1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6cf5 jae 0x104a6d56 */
  if (!C.cf) goto L_104a6d56;
  /* 104a6cf7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a6cfc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a6cff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a6d01 not eax */
  EAX = (~(EAX));
  /* 104a6d03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6d06 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6d09 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 104a6d0d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104a6d0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6d12 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6d15 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 104a6d19 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6d1c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6d1f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 104a6d22 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104a6d25 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6d28 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6d2b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 104a6d2e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6d31 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6d34 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104a6d38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a6d3a jne 0x104a6d54 */
  if (!C.zf) goto L_104a6d54;
  /* 104a6d3c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a6d41 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a6d44 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a6d46 not eax */
  EAX = (~(EAX));
  /* 104a6d48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6d4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a6d4d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104a6d4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6d52 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104a6d54:;
  /* 104a6d54 jmp 0x104a6dc1 */
  goto L_104a6dc1;
L_104a6d56:;
  /* 104a6d56 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a6d59 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6d5c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a6d61 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a6d63 not edx */
  EDX = (~(EDX));
  /* 104a6d65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6d68 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6d6b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 104a6d72 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104a6d74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6d77 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6d7a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 104a6d81 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6d84 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6d87 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104a6d8a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104a6d8d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6d90 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6d93 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 104a6d96 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6d99 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6d9c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104a6da0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a6da2 jne 0x104a6dc1 */
  if (!C.zf) goto L_104a6dc1;
  /* 104a6da4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a6da7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6daa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a6daf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a6db1 not edx */
  EDX = (~(EDX));
  /* 104a6db3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6db6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a6db9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104a6dbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6dbe mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_104a6dc1:;
  /* 104a6dc1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a6dc4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104a6dc7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a6dca mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104a6dcd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 104a6dd0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a6dd3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a6dd6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a6dd9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104a6ddc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 104a6ddf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a6de2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6de5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_104a6de8:;
  /* 104a6de8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a6deb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 104a6dee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6df1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104a6df4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6df8 jbe 0x104a6e01 */
  if ((C.cf||C.zf)) goto L_104a6e01;
  /* 104a6dfa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_104a6e01:;
  /* 104a6e01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a6e04 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104a6e07 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a6e09 jne 0x104a6f65 */
  if (!C.zf) goto L_104a6f65;
  /* 104a6e0f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a6e12 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6e15 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 104a6e18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a6e1b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 104a6e1e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6e21 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 104a6e24 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6e28 jbe 0x104a6e31 */
  if ((C.cf||C.zf)) goto L_104a6e31;
  /* 104a6e2a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_104a6e31:;
  /* 104a6e31 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a6e34 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6e37 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 104a6e3a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a6e3d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 104a6e40 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6e43 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 104a6e46 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6e4a jbe 0x104a6e53 */
  if ((C.cf||C.zf)) goto L_104a6e53;
  /* 104a6e4c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_104a6e53:;
  /* 104a6e53 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a6e56 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6e59 je 0x104a6f5f */
  if (C.zf) goto L_104a6f5f;
  /* 104a6e5f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 104a6e62 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 104a6e65 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a6e68 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6e6b jne 0x104a6f41 */
  if (!C.zf) goto L_104a6f41;
  /* 104a6e71 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6e75 jae 0x104a6ed6 */
  if (!C.cf) goto L_104a6ed6;
  /* 104a6e77 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a6e7c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a6e7f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a6e81 not edx */
  EDX = (~(EDX));
  /* 104a6e83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6e86 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6e89 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 104a6e8d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104a6e8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6e92 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6e95 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 104a6e99 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6e9c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6e9f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104a6ea2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104a6ea5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6ea8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6eab mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 104a6eae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6eb1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6eb4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104a6eb8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a6eba jne 0x104a6ed4 */
  if (!C.zf) goto L_104a6ed4;
  /* 104a6ebc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a6ec1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a6ec4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a6ec6 not edx */
  EDX = (~(EDX));
  /* 104a6ec8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6ecb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a6ecd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104a6ecf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6ed2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104a6ed4:;
  /* 104a6ed4 jmp 0x104a6f41 */
  goto L_104a6f41;
L_104a6ed6:;
  /* 104a6ed6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a6ed9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6edc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a6ee1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a6ee3 not eax */
  EAX = (~(EAX));
  /* 104a6ee5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6ee8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6eeb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 104a6ef2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104a6ef4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6ef7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6efa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 104a6f01 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6f04 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6f07 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 104a6f0a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104a6f0d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6f10 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6f13 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 104a6f16 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6f19 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6f1c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104a6f20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a6f22 jne 0x104a6f41 */
  if (!C.zf) goto L_104a6f41;
  /* 104a6f24 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a6f27 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6f2a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a6f2f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a6f31 not eax */
  EAX = (~(EAX));
  /* 104a6f33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6f36 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a6f39 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104a6f3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6f3e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_104a6f41:;
  /* 104a6f41 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 104a6f44 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104a6f47 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 104a6f4a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a6f4d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 104a6f50 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 104a6f53 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104a6f56 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 104a6f59 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104a6f5c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_104a6f5f:;
  /* 104a6f5f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 104a6f62 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_104a6f65:;
  /* 104a6f65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a6f68 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104a6f6b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a6f6d jne 0x104a6f7b */
  if (!C.zf) goto L_104a6f7b;
  /* 104a6f6f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a6f72 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6f75 je 0x104a708b */
  if (C.zf) goto L_104a708b;
L_104a6f7b:;
  /* 104a6f7b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a6f7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a6f81 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 104a6f84 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104a6f87 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a6f8a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a6f8d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a6f90 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104a6f93 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a6f96 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a6f99 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 104a6f9c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a6f9f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a6fa2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 104a6fa5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a6fa8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a6fab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a6fae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104a6fb1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a6fb4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a6fb7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a6fba cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6fbd jne 0x104a708b */
  if (!C.zf) goto L_104a708b;
  /* 104a6fc3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6fc7 jae 0x104a7024 */
  if (!C.cf) goto L_104a7024;
  /* 104a6fc9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6fcc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6fcf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104a6fd3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6fd6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6fd9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104a6fdc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 104a6fdf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a6fe2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6fe5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 104a6fe8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a6fea jne 0x104a7002 */
  if (!C.zf) goto L_104a7002;
  /* 104a6fec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a6ff1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a6ff4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a6ff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6ff9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a6ffb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104a6ffd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7000 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104a7002:;
  /* 104a7002 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a7007 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a700a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a700c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a700f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a7012 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 104a7016 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104a7018 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a701b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a701e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 104a7022 jmp 0x104a708b */
  goto L_104a708b;
L_104a7024:;
  /* 104a7024 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a7027 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a702a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104a702e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a7031 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7034 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104a7037 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 104a703a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a703d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7040 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 104a7043 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a7045 jne 0x104a7062 */
  if (!C.zf) goto L_104a7062;
  /* 104a7047 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a704a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a704d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a7052 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a7054 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7057 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a705a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104a705c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a705f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_104a7062:;
  /* 104a7062 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a7065 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7068 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a706d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a706f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7072 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a7075 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 104a707c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104a707e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7081 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104a7084 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_104a708b:;
  /* 104a708b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a708e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7091 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104a7093 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a7096 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7099 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a709c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 104a709f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a70a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a70a4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a70a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a70aa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104a70ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a70af cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a70b2 jne 0x104a7219 */
  if (!C.zf) goto L_104a7219;
  /* 104a70b8 cmp dword ptr [0x104cfdc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cfdc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a70bf je 0x104a7208 */
  if (C.zf) goto L_104a7208;
  /* 104a70c5 mov eax, dword ptr [0x104cfdb8] */
  EAX = (r32((uint32_t)(0x104cfdb8)));
  /* 104a70ca shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 104a70cd mov ecx, dword ptr [0x104cfdc0] */
  ECX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a70d3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104a70d6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a70d8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104a70db push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 104a70e0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 104a70e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a70e8 push eax */
  push32((uint32_t)(EAX));
  /* 104a70e9 call dword ptr [0x104d02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02e0))), 0x104a70efu);
  /* 104a70ef mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a70f4 mov ecx, dword ptr [0x104cfdb8] */
  ECX = (r32((uint32_t)(0x104cfdb8)));
  /* 104a70fa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a70fc mov eax, dword ptr [0x104cfdc0] */
  EAX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a7101 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104a7104 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104a7106 mov edx, dword ptr [0x104cfdc0] */
  EDX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a710c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 104a710f mov eax, dword ptr [0x104cfdc0] */
  EAX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a7114 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104a7117 mov edx, dword ptr [0x104cfdb8] */
  EDX = (r32((uint32_t)(0x104cfdb8)));
  /* 104a711d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 104a7128 mov eax, dword ptr [0x104cfdc0] */
  EAX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a712d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104a7130 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 104a7133 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104a7136 mov eax, dword ptr [0x104cfdc0] */
  EAX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a713b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104a713e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 104a7141 mov edx, dword ptr [0x104cfdc0] */
  EDX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a7147 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104a714a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 104a714e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a7150 jne 0x104a7166 */
  if (!C.zf) goto L_104a7166;
  /* 104a7152 mov edx, dword ptr [0x104cfdc0] */
  EDX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a7158 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104a715b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 104a715d mov ecx, dword ptr [0x104cfdc0] */
  ECX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a7163 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_104a7166:;
  /* 104a7166 mov edx, dword ptr [0x104cfdc0] */
  EDX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a716c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7170 jne 0x104a7208 */
  if (!C.zf) goto L_104a7208;
  /* 104a7176 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 104a717b push 0 */
  push32((uint32_t)(0x0u));
  /* 104a717d mov eax, dword ptr [0x104cfdc0] */
  EAX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a7182 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104a7185 push ecx */
  push32((uint32_t)(ECX));
  /* 104a7186 call dword ptr [0x104d02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02e0))), 0x104a718cu);
  /* 104a718c mov edx, dword ptr [0x104cfdc0] */
  EDX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a7192 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104a7195 push eax */
  push32((uint32_t)(EAX));
  /* 104a7196 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a7198 mov ecx, dword ptr [0x104cfdcc] */
  ECX = (r32((uint32_t)(0x104cfdcc)));
  /* 104a719e push ecx */
  push32((uint32_t)(ECX));
  /* 104a719f call dword ptr [0x104d02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02dc))), 0x104a71a5u);
  /* 104a71a5 mov edx, dword ptr [0x104cfdc4] */
  EDX = (r32((uint32_t)(0x104cfdc4)));
  /* 104a71ab imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a71ae mov eax, dword ptr [0x104cfdc8] */
  EAX = (r32((uint32_t)(0x104cfdc8)));
  /* 104a71b3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a71b5 mov ecx, dword ptr [0x104cfdc0] */
  ECX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a71bb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a71be sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a71c0 push eax */
  push32((uint32_t)(EAX));
  /* 104a71c1 mov edx, dword ptr [0x104cfdc0] */
  EDX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a71c7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a71ca push edx */
  push32((uint32_t)(EDX));
  /* 104a71cb mov eax, dword ptr [0x104cfdc0] */
  EAX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a71d0 push eax */
  push32((uint32_t)(EAX));
  /* 104a71d1 call 0x104aa780 */
  push32(0x104a71d6u); f_104aa780();
  /* 104a71d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a71d9 mov ecx, dword ptr [0x104cfdc4] */
  ECX = (r32((uint32_t)(0x104cfdc4)));
  /* 104a71df sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a71e2 mov dword ptr [0x104cfdc4], ecx */
  w32((uint32_t)(0x104cfdc4), (ECX));
  /* 104a71e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a71eb cmp edx, dword ptr [0x104cfdc0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x104cfdc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a71f1 jbe 0x104a71fc */
  if ((C.cf||C.zf)) goto L_104a71fc;
  /* 104a71f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a71f6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a71f9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_104a71fc:;
  /* 104a71fc mov ecx, dword ptr [0x104cfdc8] */
  ECX = (r32((uint32_t)(0x104cfdc8)));
  /* 104a7202 mov dword ptr [0x104cfdbc], ecx */
  w32((uint32_t)(0x104cfdbc), (ECX));
L_104a7208:;
  /* 104a7208 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a720b mov dword ptr [0x104cfdc0], edx */
  w32((uint32_t)(0x104cfdc0), (EDX));
  /* 104a7211 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7214 mov dword ptr [0x104cfdb8], eax */
  w32((uint32_t)(0x104cfdb8), (EAX));
L_104a7219:;
  /* 104a7219 mov esp, ebp */
  ESP = (EBP);
  /* 104a721b pop ebp */
  EBP = (pop32());
  /* 104a721c ret  */
  ESPCHK(0x104a6c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007220 @ 0x104a7220 (1334 bytes, 427 insns) */
void f_104a7220(void) {
  FTRACE(0x104a7220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a7220 push ebp */
  push32((uint32_t)(EBP));
  /* 104a7221 mov ebp, esp */
  EBP = (ESP);
  /* 104a7223 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7226 push esi */
  push32((uint32_t)(ESI));
  /* 104a7227 mov eax, dword ptr [0x104cfdc4] */
  EAX = (r32((uint32_t)(0x104cfdc4)));
  /* 104a722c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a722f mov ecx, dword ptr [0x104cfdc8] */
  ECX = (r32((uint32_t)(0x104cfdc8)));
  /* 104a7235 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7237 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 104a723a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a723d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7240 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 104a7243 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 104a7246 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a7249 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 104a724c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a724f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104a7252 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7256 jge 0x104a726c */
  if ((C.sf==C.of)) goto L_104a726c;
  /* 104a7258 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a725b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a725e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a7260 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 104a7263 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 104a726a jmp 0x104a7281 */
  goto L_104a7281;
L_104a726c:;
  /* 104a726c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104a7273 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a7276 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7279 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a727c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a727e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_104a7281:;
  /* 104a7281 mov ecx, dword ptr [0x104cfdbc] */
  ECX = (r32((uint32_t)(0x104cfdbc)));
  /* 104a7287 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_104a728a:;
  /* 104a728a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a728d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7290 jae 0x104a72b6 */
  if (!C.cf) goto L_104a72b6;
  /* 104a7292 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7295 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a7298 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 104a729a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a729d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 104a72a0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 104a72a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104a72a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a72a7 je 0x104a72ab */
  if (C.zf) goto L_104a72ab;
  /* 104a72a9 jmp 0x104a72b6 */
  goto L_104a72b6;
L_104a72ab:;
  /* 104a72ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a72ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a72b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104a72b4 jmp 0x104a728a */
  goto L_104a728a;
L_104a72b6:;
  /* 104a72b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a72b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a72bc jne 0x104a739d */
  if (!C.zf) goto L_104a739d;
  /* 104a72c2 mov eax, dword ptr [0x104cfdc8] */
  EAX = (r32((uint32_t)(0x104cfdc8)));
  /* 104a72c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_104a72ca:;
  /* 104a72ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a72cd cmp ecx, dword ptr [0x104cfdbc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104cfdbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a72d3 jae 0x104a72f9 */
  if (!C.cf) goto L_104a72f9;
  /* 104a72d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a72d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a72db and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 104a72dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a72e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 104a72e3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 104a72e6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104a72e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a72ea je 0x104a72ee */
  if (C.zf) goto L_104a72ee;
  /* 104a72ec jmp 0x104a72f9 */
  goto L_104a72f9;
L_104a72ee:;
  /* 104a72ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a72f1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a72f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104a72f7 jmp 0x104a72ca */
  goto L_104a72ca;
L_104a72f9:;
  /* 104a72f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a72fc cmp ecx, dword ptr [0x104cfdbc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104cfdbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7302 jne 0x104a739d */
  if (!C.zf) goto L_104a739d;
L_104a7308:;
  /* 104a7308 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a730b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a730e jae 0x104a7326 */
  if (!C.cf) goto L_104a7326;
  /* 104a7310 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7313 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7317 je 0x104a731b */
  if (C.zf) goto L_104a731b;
  /* 104a7319 jmp 0x104a7326 */
  goto L_104a7326;
L_104a731b:;
  /* 104a731b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a731e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7321 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104a7324 jmp 0x104a7308 */
  goto L_104a7308;
L_104a7326:;
  /* 104a7326 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7329 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a732c jne 0x104a7377 */
  if (!C.zf) goto L_104a7377;
  /* 104a732e mov eax, dword ptr [0x104cfdc8] */
  EAX = (r32((uint32_t)(0x104cfdc8)));
  /* 104a7333 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_104a7336:;
  /* 104a7336 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7339 cmp ecx, dword ptr [0x104cfdbc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104cfdbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a733f jae 0x104a7357 */
  if (!C.cf) goto L_104a7357;
  /* 104a7341 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7344 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7348 je 0x104a734c */
  if (C.zf) goto L_104a734c;
  /* 104a734a jmp 0x104a7357 */
  goto L_104a7357;
L_104a734c:;
  /* 104a734c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a734f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7352 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104a7355 jmp 0x104a7336 */
  goto L_104a7336;
L_104a7357:;
  /* 104a7357 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a735a cmp ecx, dword ptr [0x104cfdbc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104cfdbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7360 jne 0x104a7377 */
  if (!C.zf) goto L_104a7377;
  /* 104a7362 call 0x104a7760 */
  push32(0x104a7367u); f_104a7760();
  /* 104a7367 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104a736a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a736e jne 0x104a7377 */
  if (!C.zf) goto L_104a7377;
  /* 104a7370 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a7372 jmp 0x104a7751 */
  goto L_104a7751;
L_104a7377:;
  /* 104a7377 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a737a push edx */
  push32((uint32_t)(EDX));
  /* 104a737b call 0x104a7870 */
  push32(0x104a7380u); f_104a7870();
  /* 104a7380 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7383 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7386 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104a7389 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104a738b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a738e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104a7391 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7394 jne 0x104a739d */
  if (!C.zf) goto L_104a739d;
  /* 104a7396 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a7398 jmp 0x104a7751 */
  goto L_104a7751;
L_104a739d:;
  /* 104a739d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a73a0 mov dword ptr [0x104cfdbc], edx */
  w32((uint32_t)(0x104cfdbc), (EDX));
  /* 104a73a6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a73a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104a73ac mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 104a73af mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a73b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a73b4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 104a73b7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a73bb je 0x104a73e0 */
  if (C.zf) goto L_104a73e0;
  /* 104a73bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a73c0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a73c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a73c6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 104a73ca mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a73cd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a73d0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 104a73d3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 104a73da or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 104a73dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a73de jne 0x104a7415 */
  if (!C.zf) goto L_104a7415;
L_104a73e0:;
  /* 104a73e0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_104a73e7:;
  /* 104a73e7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a73ea mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a73ed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a73f0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 104a73f4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a73f7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a73fa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 104a73fd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 104a7404 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 104a7406 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a7408 jne 0x104a7415 */
  if (!C.zf) goto L_104a7415;
  /* 104a740a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a740d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7410 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 104a7413 jmp 0x104a73e7 */
  goto L_104a73e7;
L_104a7415:;
  /* 104a7415 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7418 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a741e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a7421 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 104a7428 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a742b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 104a7432 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7435 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a7438 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a743b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 104a743f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 104a7442 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7446 jne 0x104a7462 */
  if (!C.zf) goto L_104a7462;
  /* 104a7448 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 104a744f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7452 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a7455 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 104a7458 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 104a745f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_104a7462:;
  /* 104a7462 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7466 jl 0x104a747b */
  if ((C.sf!=C.of)) goto L_104a747b;
  /* 104a7468 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a746b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104a746d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104a7470 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a7473 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7476 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 104a7479 jmp 0x104a7462 */
  goto L_104a7462;
L_104a747b:;
  /* 104a747b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a747e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7481 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 104a7485 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104a7488 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a748b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a748d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7490 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a7493 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a7496 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 104a7499 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a749c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104a749f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a74a3 jle 0x104a74ac */
  if ((C.zf||C.sf!=C.of)) goto L_104a74ac;
  /* 104a74a5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_104a74ac:;
  /* 104a74ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a74af cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a74b2 je 0x104a76d0 */
  if (C.zf) goto L_104a76d0;
  /* 104a74b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a74bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a74be mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a74c1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a74c4 jne 0x104a759a */
  if (!C.zf) goto L_104a759a;
  /* 104a74ca cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a74ce jge 0x104a752f */
  if ((C.sf==C.of)) goto L_104a752f;
  /* 104a74d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a74d5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a74d8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a74da not eax */
  EAX = (~(EAX));
  /* 104a74dc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a74df mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a74e2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 104a74e6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104a74e8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a74eb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a74ee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 104a74f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a74f5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a74f8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 104a74fb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104a74fe mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a7501 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7504 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 104a7507 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a750a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a750d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104a7511 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a7513 jne 0x104a752d */
  if (!C.zf) goto L_104a752d;
  /* 104a7515 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a751a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a751d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a751f not eax */
  EAX = (~(EAX));
  /* 104a7521 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7524 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a7526 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104a7528 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a752b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104a752d:;
  /* 104a752d jmp 0x104a759a */
  goto L_104a759a;
L_104a752f:;
  /* 104a752f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a7532 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7535 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a753a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a753c not edx */
  EDX = (~(EDX));
  /* 104a753e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7541 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a7544 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 104a754b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104a754d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7550 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a7553 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 104a755a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a755d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7560 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104a7563 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104a7566 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a7569 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a756c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 104a756f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a7572 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7575 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104a7579 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a757b jne 0x104a759a */
  if (!C.zf) goto L_104a759a;
  /* 104a757d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a7580 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7583 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a7588 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a758a not edx */
  EDX = (~(EDX));
  /* 104a758c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a758f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a7592 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104a7594 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7597 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_104a759a:;
  /* 104a759a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a759d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104a75a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a75a3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104a75a6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 104a75a9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a75ac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a75af mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a75b2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104a75b5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 104a75b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a75bc je 0x104a76d0 */
  if (C.zf) goto L_104a76d0;
  /* 104a75c2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a75c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a75c8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 104a75cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104a75ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a75d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a75d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a75d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 104a75da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a75dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a75e0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104a75e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a75e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a75e9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 104a75ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a75ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a75f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a75f5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 104a75f8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a75fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a75fe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a7601 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7604 jne 0x104a76d0 */
  if (!C.zf) goto L_104a76d0;
  /* 104a760a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a760e jge 0x104a766a */
  if ((C.sf==C.of)) goto L_104a766a;
  /* 104a7610 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a7613 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7616 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104a761a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a761d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7620 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 104a7623 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104a7625 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a7628 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a762b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 104a762e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a7630 jne 0x104a7648 */
  if (!C.zf) goto L_104a7648;
  /* 104a7632 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a7637 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a763a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a763c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a763f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a7641 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104a7643 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7646 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104a7648:;
  /* 104a7648 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a764d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a7650 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a7652 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7655 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a7658 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 104a765c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104a765e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7661 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a7664 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 104a7668 jmp 0x104a76d0 */
  goto L_104a76d0;
L_104a766a:;
  /* 104a766a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a766d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7670 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104a7674 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a7677 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a767a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 104a767d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104a767f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a7682 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7685 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 104a7688 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a768a jne 0x104a76a7 */
  if (!C.zf) goto L_104a76a7;
  /* 104a768c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a768f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7692 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a7697 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a7699 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a769c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a769f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104a76a1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a76a4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_104a76a7:;
  /* 104a76a7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a76aa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a76ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a76b2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a76b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a76b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a76ba mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 104a76c1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104a76c3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a76c6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a76c9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_104a76d0:;
  /* 104a76d0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a76d4 je 0x104a76ea */
  if (C.zf) goto L_104a76ea;
  /* 104a76d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a76d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a76dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104a76de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a76e1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a76e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a76e7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_104a76ea:;
  /* 104a76ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a76ed add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a76f0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104a76f3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a76f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a76f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a76fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104a76fe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a7701 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7704 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a7707 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a770a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 104a770d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7710 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a7712 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7715 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a7717 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a771a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a771d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104a771f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a7721 jne 0x104a7743 */
  if (!C.zf) goto L_104a7743;
  /* 104a7723 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7726 cmp eax, dword ptr [0x104cfdc0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104cfdc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a772c jne 0x104a7743 */
  if (!C.zf) goto L_104a7743;
  /* 104a772e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7731 cmp ecx, dword ptr [0x104cfdb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104cfdb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7737 jne 0x104a7743 */
  if (!C.zf) goto L_104a7743;
  /* 104a7739 mov dword ptr [0x104cfdc0], 0 */
  w32((uint32_t)(0x104cfdc0), (0x0u));
L_104a7743:;
  /* 104a7743 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104a7746 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7749 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104a774b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a774e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_104a7751:;
  /* 104a7751 pop esi */
  ESI = (pop32());
  /* 104a7752 mov esp, ebp */
  ESP = (EBP);
  /* 104a7754 pop ebp */
  EBP = (pop32());
  /* 104a7755 ret  */
  ESPCHK(0x104a7220u, _esp0);
  ESP += 4; return;
}

/* FUN_10007760 @ 0x104a7760 (271 bytes, 78 insns) */
void f_104a7760(void) {
  FTRACE(0x104a7760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a7760 push ebp */
  push32((uint32_t)(EBP));
  /* 104a7761 mov ebp, esp */
  EBP = (ESP);
  /* 104a7763 push ecx */
  push32((uint32_t)(ECX));
  /* 104a7764 mov eax, dword ptr [0x104cfdc4] */
  EAX = (r32((uint32_t)(0x104cfdc4)));
  /* 104a7769 cmp eax, dword ptr [0x104cfda8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104cfda8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a776f jne 0x104a77bb */
  if (!C.zf) goto L_104a77bb;
  /* 104a7771 mov ecx, dword ptr [0x104cfda8] */
  ECX = (r32((uint32_t)(0x104cfda8)));
  /* 104a7777 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a777a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a777d push ecx */
  push32((uint32_t)(ECX));
  /* 104a777e mov edx, dword ptr [0x104cfdc8] */
  EDX = (r32((uint32_t)(0x104cfdc8)));
  /* 104a7784 push edx */
  push32((uint32_t)(EDX));
  /* 104a7785 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a7787 mov eax, dword ptr [0x104cfdcc] */
  EAX = (r32((uint32_t)(0x104cfdcc)));
  /* 104a778c push eax */
  push32((uint32_t)(EAX));
  /* 104a778d call dword ptr [0x104d0300] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0300))), 0x104a7793u);
  /* 104a7793 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a7796 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a779a jne 0x104a77a3 */
  if (!C.zf) goto L_104a77a3;
  /* 104a779c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a779e jmp 0x104a786b */
  goto L_104a786b;
L_104a77a3:;
  /* 104a77a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a77a6 mov dword ptr [0x104cfdc8], ecx */
  w32((uint32_t)(0x104cfdc8), (ECX));
  /* 104a77ac mov edx, dword ptr [0x104cfda8] */
  EDX = (r32((uint32_t)(0x104cfda8)));
  /* 104a77b2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a77b5 mov dword ptr [0x104cfda8], edx */
  w32((uint32_t)(0x104cfda8), (EDX));
L_104a77bb:;
  /* 104a77bb mov eax, dword ptr [0x104cfdc4] */
  EAX = (r32((uint32_t)(0x104cfdc4)));
  /* 104a77c0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a77c3 mov ecx, dword ptr [0x104cfdc8] */
  ECX = (r32((uint32_t)(0x104cfdc8)));
  /* 104a77c9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a77cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104a77ce push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 104a77d3 push 8 */
  push32((uint32_t)(0x8u));
  /* 104a77d5 mov edx, dword ptr [0x104cfdcc] */
  EDX = (r32((uint32_t)(0x104cfdcc)));
  /* 104a77db push edx */
  push32((uint32_t)(EDX));
  /* 104a77dc call dword ptr [0x104d02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02fc))), 0x104a77e2u);
  /* 104a77e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a77e5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 104a77e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a77eb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a77ef jne 0x104a77f5 */
  if (!C.zf) goto L_104a77f5;
  /* 104a77f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a77f3 jmp 0x104a786b */
  goto L_104a786b;
L_104a77f5:;
  /* 104a77f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 104a77f7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 104a77fc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 104a7801 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a7803 call dword ptr [0x104d0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0304))), 0x104a7809u);
  /* 104a7809 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a780c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 104a780f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7812 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7816 jne 0x104a7832 */
  if (!C.zf) goto L_104a7832;
  /* 104a7818 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a781b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104a781e push ecx */
  push32((uint32_t)(ECX));
  /* 104a781f push 0 */
  push32((uint32_t)(0x0u));
  /* 104a7821 mov edx, dword ptr [0x104cfdcc] */
  EDX = (r32((uint32_t)(0x104cfdcc)));
  /* 104a7827 push edx */
  push32((uint32_t)(EDX));
  /* 104a7828 call dword ptr [0x104d02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02dc))), 0x104a782eu);
  /* 104a782e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a7830 jmp 0x104a786b */
  goto L_104a786b;
L_104a7832:;
  /* 104a7832 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7835 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104a783b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a783e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 104a7845 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7848 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 104a784f mov eax, dword ptr [0x104cfdc4] */
  EAX = (r32((uint32_t)(0x104cfdc4)));
  /* 104a7854 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7857 mov dword ptr [0x104cfdc4], eax */
  w32((uint32_t)(0x104cfdc4), (EAX));
  /* 104a785c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a785f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104a7862 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 104a7868 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104a786b:;
  /* 104a786b mov esp, ebp */
  ESP = (EBP);
  /* 104a786d pop ebp */
  EBP = (pop32());
  /* 104a786e ret  */
  ESPCHK(0x104a7760u, _esp0);
  ESP += 4; return;
}

/* FUN_10007870 @ 0x104a7870 (494 bytes, 149 insns) */
void f_104a7870(void) {
  FTRACE(0x104a7870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a7870 push ebp */
  push32((uint32_t)(EBP));
  /* 104a7871 mov ebp, esp */
  EBP = (ESP);
  /* 104a7873 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7879 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104a787c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 104a787f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7882 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104a7885 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a7888 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_104a788f:;
  /* 104a788f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7893 jl 0x104a78a8 */
  if ((C.sf!=C.of)) goto L_104a78a8;
  /* 104a7895 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a7898 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 104a789a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104a789d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a78a0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a78a3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 104a78a6 jmp 0x104a788f */
  goto L_104a788f;
L_104a78a8:;
  /* 104a78a8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a78ab imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a78b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a78b4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 104a78bb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104a78be mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 104a78c5 jmp 0x104a78d0 */
  goto L_104a78d0;
L_104a78c7:;
  /* 104a78c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a78ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a78cd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_104a78d0:;
  /* 104a78d0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a78d4 jge 0x104a78f6 */
  if ((C.sf==C.of)) goto L_104a78f6;
  /* 104a78d6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a78d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a78dc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 104a78df mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104a78e2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a78e5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a78e8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 104a78eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a78ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a78f1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 104a78f4 jmp 0x104a78c7 */
  goto L_104a78c7;
L_104a78f6:;
  /* 104a78f6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a78f9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 104a78fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a78ff mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104a7902 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7904 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104a7907 push 4 */
  push32((uint32_t)(0x4u));
  /* 104a7909 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 104a790e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 104a7913 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a7916 push edx */
  push32((uint32_t)(EDX));
  /* 104a7917 call dword ptr [0x104d0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0304))), 0x104a791du);
  /* 104a791d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a791f jne 0x104a7929 */
  if (!C.zf) goto L_104a7929;
  /* 104a7921 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a7924 jmp 0x104a7a5a */
  goto L_104a7a5a;
L_104a7929:;
  /* 104a7929 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a792c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7931 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104a7934 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a7937 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104a793a jmp 0x104a7948 */
  goto L_104a7948;
L_104a793c:;
  /* 104a793c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a793f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7945 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104a7948:;
  /* 104a7948 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a794b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a794e ja 0x104a79ad */
  if ((!C.cf&&!C.zf)) goto L_104a79ad;
  /* 104a7950 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7953 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 104a795a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a795d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 104a7967 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a796a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a796d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104a7970 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7973 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 104a7979 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a797c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7982 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7985 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104a7988 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a798b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7991 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7994 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 104a7997 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a799a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a799f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104a79a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a79a5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 104a79ab jmp 0x104a793c */
  goto L_104a793c;
L_104a79ad:;
  /* 104a79ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a79b0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a79b6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104a79b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a79bc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a79bf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a79c2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 104a79c5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a79c8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104a79cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104a79ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a79d1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a79d4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 104a79d7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a79da add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a79dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a79e0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 104a79e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a79e6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104a79e9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104a79ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a79ef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a79f2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 104a79f5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a79f8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a79fb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 104a7a03 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a7a06 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7a09 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 104a7a14 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7a17 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 104a7a1b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7a1e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 104a7a21 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 104a7a24 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7a27 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 104a7a2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a7a2c jne 0x104a7a3d */
  if (!C.zf) goto L_104a7a3d;
  /* 104a7a2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7a31 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a7a34 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104a7a37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7a3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_104a7a3d:;
  /* 104a7a3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a7a42 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a7a45 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a7a47 not edx */
  EDX = (~(EDX));
  /* 104a7a49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7a4c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104a7a4f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104a7a51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7a54 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 104a7a57 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_104a7a5a:;
  /* 104a7a5a mov esp, ebp */
  ESP = (EBP);
  /* 104a7a5c pop ebp */
  EBP = (pop32());
  /* 104a7a5d ret  */
  ESPCHK(0x104a7870u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a60 @ 0x104a7a60 (1515 bytes, 489 insns) */
void f_104a7a60(void) {
  FTRACE(0x104a7a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a7a60 push ebp */
  push32((uint32_t)(EBP));
  /* 104a7a61 mov ebp, esp */
  EBP = (ESP);
  /* 104a7a63 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7a66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a7a69 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7a6c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 104a7a6e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104a7a71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7a74 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104a7a77 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 104a7a7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7a7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a7a80 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7a83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104a7a86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a7a89 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 104a7a8c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a7a8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7a92 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a7a98 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7a9b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 104a7aa2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104a7aa5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a7aa8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7aab mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104a7aae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a7ab1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a7ab3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7ab6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 104a7ab9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a7abc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7abf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 104a7ac2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7ac5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a7ac7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 104a7aca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a7acd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7ad0 jle 0x104a7d86 */
  if ((C.zf||C.sf!=C.of)) goto L_104a7d86;
  /* 104a7ad6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a7ad9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104a7adc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a7ade jne 0x104a7aeb */
  if (!C.zf) goto L_104a7aeb;
  /* 104a7ae0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a7ae3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7ae6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7ae9 jle 0x104a7af2 */
  if ((C.zf||C.sf!=C.of)) goto L_104a7af2;
L_104a7aeb:;
  /* 104a7aeb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a7aed jmp 0x104a8047 */
  goto L_104a8047;
L_104a7af2:;
  /* 104a7af2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a7af5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 104a7af8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7afb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104a7afe cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7b02 jbe 0x104a7b0b */
  if ((C.cf||C.zf)) goto L_104a7b0b;
  /* 104a7b04 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_104a7b0b:;
  /* 104a7b0b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7b0e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7b11 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a7b14 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7b17 jne 0x104a7bed */
  if (!C.zf) goto L_104a7bed;
  /* 104a7b1d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7b21 jae 0x104a7b82 */
  if (!C.cf) goto L_104a7b82;
  /* 104a7b23 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a7b28 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a7b2b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a7b2d not edx */
  EDX = (~(EDX));
  /* 104a7b2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7b32 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7b35 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 104a7b39 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104a7b3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7b3e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7b41 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 104a7b45 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7b48 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7b4b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104a7b4e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104a7b51 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7b54 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7b57 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 104a7b5a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7b5d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7b60 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104a7b64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a7b66 jne 0x104a7b80 */
  if (!C.zf) goto L_104a7b80;
  /* 104a7b68 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a7b6d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a7b70 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a7b72 not edx */
  EDX = (~(EDX));
  /* 104a7b74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7b77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a7b79 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104a7b7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7b7e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104a7b80:;
  /* 104a7b80 jmp 0x104a7bed */
  goto L_104a7bed;
L_104a7b82:;
  /* 104a7b82 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a7b85 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7b88 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a7b8d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a7b8f not eax */
  EAX = (~(EAX));
  /* 104a7b91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7b94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7b97 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 104a7b9e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104a7ba0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7ba3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7ba6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 104a7bad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7bb0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7bb3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 104a7bb6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104a7bb9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7bbc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7bbf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 104a7bc2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7bc5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7bc8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104a7bcc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a7bce jne 0x104a7bed */
  if (!C.zf) goto L_104a7bed;
  /* 104a7bd0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a7bd3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7bd6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a7bdb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a7bdd not eax */
  EAX = (~(EAX));
  /* 104a7bdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7be2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a7be5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104a7be7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7bea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_104a7bed:;
  /* 104a7bed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7bf0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104a7bf3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7bf6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a7bf9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 104a7bfc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7bff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104a7c02 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7c05 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104a7c08 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 104a7c0b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a7c0e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7c11 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7c14 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104a7c17 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7c1b jle 0x104a7d67 */
  if ((C.zf||C.sf!=C.of)) goto L_104a7d67;
  /* 104a7c21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a7c24 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7c27 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 104a7c2a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a7c2d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 104a7c30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7c33 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104a7c36 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7c3a jbe 0x104a7c43 */
  if ((C.cf||C.zf)) goto L_104a7c43;
  /* 104a7c3c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_104a7c43:;
  /* 104a7c43 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a7c46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a7c49 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 104a7c4c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104a7c4f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7c52 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7c55 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a7c58 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104a7c5b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7c5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7c61 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 104a7c64 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7c67 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7c6a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 104a7c6d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7c70 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a7c73 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7c76 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104a7c79 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7c7c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7c7f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a7c82 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7c85 jne 0x104a7d53 */
  if (!C.zf) goto L_104a7d53;
  /* 104a7c8b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7c8f jae 0x104a7cec */
  if (!C.cf) goto L_104a7cec;
  /* 104a7c91 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7c94 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7c97 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104a7c9b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7c9e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7ca1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104a7ca4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 104a7ca7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7caa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7cad mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 104a7cb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a7cb2 jne 0x104a7cca */
  if (!C.zf) goto L_104a7cca;
  /* 104a7cb4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a7cb9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a7cbc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a7cbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7cc1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a7cc3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104a7cc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7cc8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104a7cca:;
  /* 104a7cca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a7ccf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a7cd2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a7cd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7cd7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7cda mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 104a7cde or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104a7ce0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7ce3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7ce6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 104a7cea jmp 0x104a7d53 */
  goto L_104a7d53;
L_104a7cec:;
  /* 104a7cec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7cef add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7cf2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104a7cf6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7cf9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7cfc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104a7cff add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 104a7d02 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7d05 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7d08 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 104a7d0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a7d0d jne 0x104a7d2a */
  if (!C.zf) goto L_104a7d2a;
  /* 104a7d0f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a7d12 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7d15 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a7d1a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a7d1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7d1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a7d22 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104a7d24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7d27 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_104a7d2a:;
  /* 104a7d2a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a7d2d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7d30 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a7d35 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a7d37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7d3a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7d3d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 104a7d44 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104a7d46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7d49 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7d4c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_104a7d53:;
  /* 104a7d53 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7d56 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a7d59 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104a7d5b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7d5e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7d61 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a7d64 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_104a7d67:;
  /* 104a7d67 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a7d6a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7d6d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a7d70 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104a7d72 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a7d75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7d78 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a7d7b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7d7e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 104a7d81 jmp 0x104a8042 */
  goto L_104a8042;
L_104a7d86:;
  /* 104a7d86 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a7d89 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7d8c jge 0x104a8042 */
  if ((C.sf==C.of)) goto L_104a8042;
  /* 104a7d92 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a7d95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7d98 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a7d9b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104a7d9d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104a7da0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7da3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a7da6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7da9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 104a7dac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a7daf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7db2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104a7db5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a7db8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7dbb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104a7dbe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a7dc1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 104a7dc4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7dc7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 104a7dca cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7dce jbe 0x104a7dd7 */
  if ((C.cf||C.zf)) goto L_104a7dd7;
  /* 104a7dd0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_104a7dd7:;
  /* 104a7dd7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a7dda and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104a7ddd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a7ddf jne 0x104a7f20 */
  if (!C.zf) goto L_104a7f20;
  /* 104a7de5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a7de8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 104a7deb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7dee mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104a7df1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7df5 jbe 0x104a7dfe */
  if ((C.cf||C.zf)) goto L_104a7dfe;
  /* 104a7df7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_104a7dfe:;
  /* 104a7dfe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7e01 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7e04 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a7e07 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7e0a jne 0x104a7ee0 */
  if (!C.zf) goto L_104a7ee0;
  /* 104a7e10 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7e14 jae 0x104a7e75 */
  if (!C.cf) goto L_104a7e75;
  /* 104a7e16 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a7e1b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a7e1e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a7e20 not edx */
  EDX = (~(EDX));
  /* 104a7e22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7e25 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7e28 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 104a7e2c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104a7e2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7e31 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7e34 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 104a7e38 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7e3b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7e3e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104a7e41 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104a7e44 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7e47 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7e4a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 104a7e4d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7e50 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7e53 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104a7e57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a7e59 jne 0x104a7e73 */
  if (!C.zf) goto L_104a7e73;
  /* 104a7e5b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a7e60 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a7e63 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a7e65 not edx */
  EDX = (~(EDX));
  /* 104a7e67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7e6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a7e6c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104a7e6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7e71 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104a7e73:;
  /* 104a7e73 jmp 0x104a7ee0 */
  goto L_104a7ee0;
L_104a7e75:;
  /* 104a7e75 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a7e78 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7e7b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a7e80 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a7e82 not eax */
  EAX = (~(EAX));
  /* 104a7e84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7e87 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7e8a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 104a7e91 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104a7e93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7e96 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7e99 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 104a7ea0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7ea3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7ea6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 104a7ea9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104a7eac mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7eaf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7eb2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 104a7eb5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7eb8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7ebb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104a7ebf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a7ec1 jne 0x104a7ee0 */
  if (!C.zf) goto L_104a7ee0;
  /* 104a7ec3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a7ec6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7ec9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a7ece shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a7ed0 not eax */
  EAX = (~(EAX));
  /* 104a7ed2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7ed5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a7ed8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104a7eda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7edd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_104a7ee0:;
  /* 104a7ee0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7ee3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104a7ee6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7ee9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a7eec mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 104a7eef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7ef2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104a7ef5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a7ef8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104a7efb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 104a7efe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a7f01 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7f04 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104a7f07 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a7f0a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 104a7f0d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7f10 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 104a7f13 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7f17 jbe 0x104a7f20 */
  if ((C.cf||C.zf)) goto L_104a7f20;
  /* 104a7f19 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_104a7f20:;
  /* 104a7f20 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a7f23 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a7f26 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 104a7f29 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104a7f2c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a7f2f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7f32 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a7f35 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 104a7f38 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a7f3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7f3e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104a7f41 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a7f44 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a7f47 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 104a7f4a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a7f4d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a7f50 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a7f53 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 104a7f56 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a7f59 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a7f5c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a7f5f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7f62 jne 0x104a802e */
  if (!C.zf) goto L_104a802e;
  /* 104a7f68 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a7f6c jae 0x104a7fc8 */
  if (!C.cf) goto L_104a7fc8;
  /* 104a7f6e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7f71 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7f74 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104a7f78 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7f7b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7f7e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 104a7f81 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104a7f83 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7f86 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7f89 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 104a7f8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a7f8e jne 0x104a7fa6 */
  if (!C.zf) goto L_104a7fa6;
  /* 104a7f90 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a7f95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a7f98 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a7f9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7f9d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a7f9f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104a7fa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7fa4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104a7fa6:;
  /* 104a7fa6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a7fab mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a7fae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a7fb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7fb3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7fb6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 104a7fba or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104a7fbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a7fbf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7fc2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 104a7fc6 jmp 0x104a802e */
  goto L_104a802e;
L_104a7fc8:;
  /* 104a7fc8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7fcb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7fce movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104a7fd2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7fd5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7fd8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 104a7fdb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104a7fdd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a7fe0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a7fe3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 104a7fe6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a7fe8 jne 0x104a8005 */
  if (!C.zf) goto L_104a8005;
  /* 104a7fea mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a7fed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a7ff0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104a7ff5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104a7ff7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a7ffa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a7ffd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104a7fff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a8002 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_104a8005:;
  /* 104a8005 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8008 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a800b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a8010 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a8012 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a8015 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a8018 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 104a801f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104a8021 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a8024 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104a8027 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_104a802e:;
  /* 104a802e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a8031 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a8034 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104a8036 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a8039 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a803c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a803f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_104a8042:;
  /* 104a8042 mov eax, 1 */
  EAX = (0x1u);
L_104a8047:;
  /* 104a8047 mov esp, ebp */
  ESP = (EBP);
  /* 104a8049 pop ebp */
  EBP = (pop32());
  /* 104a804a ret  */
  ESPCHK(0x104a7a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008050 @ 0x104a8050 (304 bytes, 79 insns) */
void f_104a8050(void) {
  FTRACE(0x104a8050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a8050 push ebp */
  push32((uint32_t)(EBP));
  /* 104a8051 mov ebp, esp */
  EBP = (ESP);
  /* 104a8053 push ecx */
  push32((uint32_t)(ECX));
  /* 104a8054 cmp dword ptr [0x104cfdc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cfdc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a805b je 0x104a817c */
  if (C.zf) goto L_104a817c;
  /* 104a8061 mov eax, dword ptr [0x104cfdb8] */
  EAX = (r32((uint32_t)(0x104cfdb8)));
  /* 104a8066 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 104a8069 mov ecx, dword ptr [0x104cfdc0] */
  ECX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a806f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104a8072 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8074 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a8077 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 104a807c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 104a8081 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a8084 push eax */
  push32((uint32_t)(EAX));
  /* 104a8085 call dword ptr [0x104d02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02e0))), 0x104a808bu);
  /* 104a808b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a8090 mov ecx, dword ptr [0x104cfdb8] */
  ECX = (r32((uint32_t)(0x104cfdb8)));
  /* 104a8096 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a8098 mov eax, dword ptr [0x104cfdc0] */
  EAX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a809d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104a80a0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104a80a2 mov edx, dword ptr [0x104cfdc0] */
  EDX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a80a8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 104a80ab mov eax, dword ptr [0x104cfdc0] */
  EAX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a80b0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104a80b3 mov edx, dword ptr [0x104cfdb8] */
  EDX = (r32((uint32_t)(0x104cfdb8)));
  /* 104a80b9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 104a80c4 mov eax, dword ptr [0x104cfdc0] */
  EAX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a80c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104a80cc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 104a80cf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104a80d2 mov eax, dword ptr [0x104cfdc0] */
  EAX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a80d7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104a80da mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 104a80dd mov edx, dword ptr [0x104cfdc0] */
  EDX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a80e3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104a80e6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 104a80ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a80ec jne 0x104a8102 */
  if (!C.zf) goto L_104a8102;
  /* 104a80ee mov edx, dword ptr [0x104cfdc0] */
  EDX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a80f4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104a80f7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 104a80f9 mov ecx, dword ptr [0x104cfdc0] */
  ECX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a80ff mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_104a8102:;
  /* 104a8102 mov edx, dword ptr [0x104cfdc0] */
  EDX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a8108 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a810c jne 0x104a8172 */
  if (!C.zf) goto L_104a8172;
  /* 104a810e cmp dword ptr [0x104cfdc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104cfdc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8115 jle 0x104a8172 */
  if ((C.zf||C.sf!=C.of)) goto L_104a8172;
  /* 104a8117 mov eax, dword ptr [0x104cfdc0] */
  EAX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a811c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104a811f push ecx */
  push32((uint32_t)(ECX));
  /* 104a8120 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a8122 mov edx, dword ptr [0x104cfdcc] */
  EDX = (r32((uint32_t)(0x104cfdcc)));
  /* 104a8128 push edx */
  push32((uint32_t)(EDX));
  /* 104a8129 call dword ptr [0x104d02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02dc))), 0x104a812fu);
  /* 104a812f mov eax, dword ptr [0x104cfdc4] */
  EAX = (r32((uint32_t)(0x104cfdc4)));
  /* 104a8134 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a8137 mov ecx, dword ptr [0x104cfdc8] */
  ECX = (r32((uint32_t)(0x104cfdc8)));
  /* 104a813d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a813f mov edx, dword ptr [0x104cfdc0] */
  EDX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a8145 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8148 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a814a push ecx */
  push32((uint32_t)(ECX));
  /* 104a814b mov eax, dword ptr [0x104cfdc0] */
  EAX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a8150 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8153 push eax */
  push32((uint32_t)(EAX));
  /* 104a8154 mov ecx, dword ptr [0x104cfdc0] */
  ECX = (r32((uint32_t)(0x104cfdc0)));
  /* 104a815a push ecx */
  push32((uint32_t)(ECX));
  /* 104a815b call 0x104aa780 */
  push32(0x104a8160u); f_104aa780();
  /* 104a8160 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8163 mov edx, dword ptr [0x104cfdc4] */
  EDX = (r32((uint32_t)(0x104cfdc4)));
  /* 104a8169 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a816c mov dword ptr [0x104cfdc4], edx */
  w32((uint32_t)(0x104cfdc4), (EDX));
L_104a8172:;
  /* 104a8172 mov dword ptr [0x104cfdc0], 0 */
  w32((uint32_t)(0x104cfdc0), (0x0u));
L_104a817c:;
  /* 104a817c mov esp, ebp */
  ESP = (EBP);
  /* 104a817e pop ebp */
  EBP = (pop32());
  /* 104a817f ret  */
  ESPCHK(0x104a8050u, _esp0);
  ESP += 4; return;
}

/* FUN_10008180 @ 0x104a8180 (1565 bytes, 343 insns) */
void f_104a8180(void) {
  FTRACE(0x104a8180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a8180 push ebp */
  push32((uint32_t)(EBP));
  /* 104a8181 mov ebp, esp */
  EBP = (ESP);
  /* 104a8183 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a8189 mov eax, dword ptr [0x104cfdc4] */
  EAX = (r32((uint32_t)(0x104cfdc4)));
  /* 104a818e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a8191 push eax */
  push32((uint32_t)(EAX));
  /* 104a8192 mov ecx, dword ptr [0x104cfdc8] */
  ECX = (r32((uint32_t)(0x104cfdc8)));
  /* 104a8198 push ecx */
  push32((uint32_t)(ECX));
  /* 104a8199 call dword ptr [0x104d02b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02b4))), 0x104a819fu);
  /* 104a819f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a81a1 je 0x104a81ab */
  if (C.zf) goto L_104a81ab;
  /* 104a81a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a81a6 jmp 0x104a8799 */
  goto L_104a8799;
L_104a81ab:;
  /* 104a81ab mov edx, dword ptr [0x104cfdc8] */
  EDX = (r32((uint32_t)(0x104cfdc8)));
  /* 104a81b1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 104a81b7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 104a81c1 jmp 0x104a81d2 */
  goto L_104a81d2;
L_104a81c3:;
  /* 104a81c3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 104a81c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a81cc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_104a81d2:;
  /* 104a81d2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 104a81d8 cmp ecx, dword ptr [0x104cfdc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104cfdc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a81de jge 0x104a8797 */
  if ((C.sf==C.of)) goto L_104a8797;
  /* 104a81e4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 104a81ea mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104a81ed mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 104a81f3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 104a81f8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 104a81fe push ecx */
  push32((uint32_t)(ECX));
  /* 104a81ff call dword ptr [0x104d02b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02b4))), 0x104a8205u);
  /* 104a8205 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a8207 je 0x104a8213 */
  if (C.zf) goto L_104a8213;
  /* 104a8209 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 104a820e jmp 0x104a8799 */
  goto L_104a8799;
L_104a8213:;
  /* 104a8213 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 104a8219 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104a821c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 104a8222 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 104a8228 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a822e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104a8231 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 104a8237 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104a823a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a823d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 104a8247 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 104a8251 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104a8258 jmp 0x104a8263 */
  goto L_104a8263;
L_104a825a:;
  /* 104a825a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a825d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8260 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_104a8263:;
  /* 104a8263 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8267 jge 0x104a875b */
  if ((C.sf==C.of)) goto L_104a875b;
  /* 104a826d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 104a8277 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 104a8281 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 104a828b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 104a8295 jmp 0x104a82a6 */
  goto L_104a82a6;
L_104a8297:;
  /* 104a8297 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 104a829d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a82a0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_104a82a6:;
  /* 104a82a6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a82ad jge 0x104a82c2 */
  if ((C.sf==C.of)) goto L_104a82c2;
  /* 104a82af mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 104a82b5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 104a82c0 jmp 0x104a8297 */
  goto L_104a8297;
L_104a82c2:;
  /* 104a82c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a82c6 jl 0x104a86fd */
  if ((C.sf!=C.of)) goto L_104a86fd;
  /* 104a82cc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 104a82d1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 104a82d7 push ecx */
  push32((uint32_t)(ECX));
  /* 104a82d8 call dword ptr [0x104d02b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02b4))), 0x104a82deu);
  /* 104a82de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a82e0 je 0x104a82ec */
  if (C.zf) goto L_104a82ec;
  /* 104a82e2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 104a82e7 jmp 0x104a8799 */
  goto L_104a8799;
L_104a82ec:;
  /* 104a82ec mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 104a82f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104a82f5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 104a82ff jmp 0x104a8310 */
  goto L_104a8310;
L_104a8301:;
  /* 104a8301 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 104a8307 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a830a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_104a8310:;
  /* 104a8310 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8317 jge 0x104a8494 */
  if ((C.sf==C.of)) goto L_104a8494;
  /* 104a831d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a8320 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8323 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 104a8329 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 104a832f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8335 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 104a833b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 104a8341 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8345 jne 0x104a8352 */
  if (!C.zf) goto L_104a8352;
  /* 104a8347 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 104a834d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8350 je 0x104a835c */
  if (C.zf) goto L_104a835c;
L_104a8352:;
  /* 104a8352 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 104a8357 jmp 0x104a8799 */
  goto L_104a8799;
L_104a835c:;
  /* 104a835c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 104a8362 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a8364 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 104a836a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 104a8370 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 104a8376 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 104a837c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104a837f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a8381 je 0x104a83b9 */
  if (C.zf) goto L_104a83b9;
  /* 104a8383 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 104a8389 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a838c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 104a8392 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a839c jle 0x104a83a8 */
  if ((C.zf||C.sf!=C.of)) goto L_104a83a8;
  /* 104a839e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 104a83a3 jmp 0x104a8799 */
  goto L_104a8799;
L_104a83a8:;
  /* 104a83a8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 104a83ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a83b1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 104a83b7 jmp 0x104a83fb */
  goto L_104a83fb;
L_104a83b9:;
  /* 104a83b9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 104a83bf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 104a83c2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a83c5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 104a83cb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a83d2 jle 0x104a83de */
  if ((C.zf||C.sf!=C.of)) goto L_104a83de;
  /* 104a83d4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_104a83de:;
  /* 104a83de mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 104a83e4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 104a83eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a83ee mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 104a83f4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_104a83fb:;
  /* 104a83fb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8402 jl 0x104a841d */
  if ((C.sf!=C.of)) goto L_104a841d;
  /* 104a8404 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 104a840a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 104a840d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a840f jne 0x104a841d */
  if (!C.zf) goto L_104a841d;
  /* 104a8411 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a841b jle 0x104a8427 */
  if ((C.zf||C.sf!=C.of)) goto L_104a8427;
L_104a841d:;
  /* 104a841d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 104a8422 jmp 0x104a8799 */
  goto L_104a8799;
L_104a8427:;
  /* 104a8427 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 104a842d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8433 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 104a8436 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a843c je 0x104a8448 */
  if (C.zf) goto L_104a8448;
  /* 104a843e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 104a8443 jmp 0x104a8799 */
  goto L_104a8799;
L_104a8448:;
  /* 104a8448 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 104a844e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8454 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 104a845a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 104a8460 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8466 jb 0x104a835c */
  if (C.cf) goto L_104a835c;
  /* 104a846c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 104a8472 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8478 je 0x104a8484 */
  if (C.zf) goto L_104a8484;
  /* 104a847a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 104a847f jmp 0x104a8799 */
  goto L_104a8799;
L_104a8484:;
  /* 104a8484 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a8487 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a848c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a848f jmp 0x104a8301 */
  goto L_104a8301;
L_104a8494:;
  /* 104a8494 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a8497 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a8499 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a849f je 0x104a84ab */
  if (C.zf) goto L_104a84ab;
  /* 104a84a1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 104a84a6 jmp 0x104a8799 */
  goto L_104a8799;
L_104a84ab:;
  /* 104a84ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a84ae mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 104a84b4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 104a84bb jmp 0x104a84c6 */
  goto L_104a84c6;
L_104a84bd:;
  /* 104a84bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a84c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a84c3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_104a84c6:;
  /* 104a84c6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a84ca jge 0x104a86fd */
  if ((C.sf==C.of)) goto L_104a86fd;
  /* 104a84d0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 104a84da mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 104a84e0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_104a84e6:;
  /* 104a84e6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 104a84ec mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a84ef mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 104a84f5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 104a84fb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8501 je 0x104a862a */
  if (C.zf) goto L_104a862a;
  /* 104a8507 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a850a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 104a8510 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8517 je 0x104a862a */
  if (C.zf) goto L_104a862a;
  /* 104a851d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 104a8523 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8529 jb 0x104a853e */
  if (C.cf) goto L_104a853e;
  /* 104a852b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 104a8531 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8536 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a853c jb 0x104a8548 */
  if (C.cf) goto L_104a8548;
L_104a853e:;
  /* 104a853e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 104a8543 jmp 0x104a8799 */
  goto L_104a8799;
L_104a8548:;
  /* 104a8548 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 104a854e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 104a8554 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 104a855a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 104a8560 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8563 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 104a8566 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a8569 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a856e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_104a8574:;
  /* 104a8574 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a8577 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a857d je 0x104a859e */
  if (C.zf) goto L_104a859e;
  /* 104a857f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a8582 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8588 jne 0x104a858c */
  if (!C.zf) goto L_104a858c;
  /* 104a858a jmp 0x104a859e */
  goto L_104a859e;
L_104a858c:;
  /* 104a858c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a858f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a8591 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 104a8594 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a8597 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8599 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 104a859c jmp 0x104a8574 */
  goto L_104a8574;
L_104a859e:;
  /* 104a859e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a85a1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a85a7 jne 0x104a85b3 */
  if (!C.zf) goto L_104a85b3;
  /* 104a85a9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 104a85ae jmp 0x104a8799 */
  goto L_104a8799;
L_104a85b3:;
  /* 104a85b3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 104a85b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a85bb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 104a85be sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a85c1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 104a85c7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a85ce jle 0x104a85da */
  if ((C.zf||C.sf!=C.of)) goto L_104a85da;
  /* 104a85d0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_104a85da:;
  /* 104a85da mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 104a85e0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a85e3 je 0x104a85ef */
  if (C.zf) goto L_104a85ef;
  /* 104a85e5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 104a85ea jmp 0x104a8799 */
  goto L_104a8799;
L_104a85ef:;
  /* 104a85ef mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 104a85f5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104a85f8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a85fe je 0x104a860a */
  if (C.zf) goto L_104a860a;
  /* 104a8600 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 104a8605 jmp 0x104a8799 */
  goto L_104a8799;
L_104a860a:;
  /* 104a860a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 104a8610 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 104a8616 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 104a861c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a861f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 104a8625 jmp 0x104a84e6 */
  goto L_104a84e6;
L_104a862a:;
  /* 104a862a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8631 je 0x104a86a1 */
  if (C.zf) goto L_104a86a1;
  /* 104a8633 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8637 jge 0x104a866b */
  if ((C.sf==C.of)) goto L_104a866b;
  /* 104a8639 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a863e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a8641 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a8643 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 104a8649 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104a864b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 104a8651 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a8656 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a8659 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a865b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 104a8661 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104a8663 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 104a8669 jmp 0x104a86a1 */
  goto L_104a86a1;
L_104a866b:;
  /* 104a866b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a866e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a8671 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a8676 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a8678 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 104a867e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104a8680 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 104a8686 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a8689 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a868c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104a8691 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104a8693 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 104a8699 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104a869b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_104a86a1:;
  /* 104a86a1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 104a86a7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a86aa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a86b0 jne 0x104a86c4 */
  if (!C.zf) goto L_104a86c4;
  /* 104a86b2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a86b5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 104a86bb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a86c2 je 0x104a86ce */
  if (C.zf) goto L_104a86ce;
L_104a86c4:;
  /* 104a86c4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 104a86c9 jmp 0x104a8799 */
  goto L_104a8799;
L_104a86ce:;
  /* 104a86ce mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 104a86d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104a86d7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a86dd je 0x104a86e9 */
  if (C.zf) goto L_104a86e9;
  /* 104a86df mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 104a86e4 jmp 0x104a8799 */
  goto L_104a8799;
L_104a86e9:;
  /* 104a86e9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 104a86ef add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a86f2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 104a86f8 jmp 0x104a84bd */
  goto L_104a84bd;
L_104a86fd:;
  /* 104a86fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a8700 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 104a8706 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 104a870c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8710 jne 0x104a872a */
  if (!C.zf) goto L_104a872a;
  /* 104a8712 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a8715 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 104a871b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 104a8721 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8728 je 0x104a8731 */
  if (C.zf) goto L_104a8731;
L_104a872a:;
  /* 104a872a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 104a872f jmp 0x104a8799 */
  goto L_104a8799;
L_104a8731:;
  /* 104a8731 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 104a8737 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a873d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 104a8743 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a8746 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a874b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104a874e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a8751 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 104a8753 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104a8756 jmp 0x104a825a */
  goto L_104a825a;
L_104a875b:;
  /* 104a875b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 104a8761 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 104a8767 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8769 jne 0x104a877c */
  if (!C.zf) goto L_104a877c;
  /* 104a876b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 104a8771 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 104a8777 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a877a je 0x104a8783 */
  if (C.zf) goto L_104a8783;
L_104a877c:;
  /* 104a877c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 104a8781 jmp 0x104a8799 */
  goto L_104a8799;
L_104a8783:;
  /* 104a8783 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 104a8789 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a878c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 104a8792 jmp 0x104a81c3 */
  goto L_104a81c3;
L_104a8797:;
  /* 104a8797 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104a8799:;
  /* 104a8799 mov esp, ebp */
  ESP = (EBP);
  /* 104a879b pop ebp */
  EBP = (pop32());
  /* 104a879c ret  */
  ESPCHK(0x104a8180u, _esp0);
  ESP += 4; return;
}

/* FUN_100087a0 @ 0x104a87a0 (250 bytes, 92 insns) */
void f_104a87a0(void) {
  FTRACE(0x104a87a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a87a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a87a1 mov ebp, esp */
  EBP = (ESP);
  /* 104a87a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a87a6 push ebx */
  push32((uint32_t)(EBX));
  /* 104a87a7 push esi */
  push32((uint32_t)(ESI));
  /* 104a87a8 push edi */
  push32((uint32_t)(EDI));
  /* 104a87a9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 104a87ac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104a87af lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 104a87b2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_104a87b5:;
  /* 104a87b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a87b9 jne 0x104a87d9 */
  if (!C.zf) goto L_104a87d9;
  /* 104a87bb push 0x104c9de0 */
  push32((uint32_t)(0x104c9de0u));
  /* 104a87c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a87c2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 104a87c4 push 0x104c9dd4 */
  push32((uint32_t)(0x104c9dd4u));
  /* 104a87c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a87cb call 0x104a1950 */
  push32(0x104a87d0u); f_104a1950();
  /* 104a87d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a87d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a87d6 jne 0x104a87d9 */
  if (!C.zf) goto L_104a87d9;
  /* 104a87d8 int3  */
  x86_unimpl("int3 @ 0x104a87d8");
L_104a87d9:;
  /* 104a87d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a87db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a87dd jne 0x104a87b5 */
  if (!C.zf) goto L_104a87b5;
L_104a87df:;
  /* 104a87df cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a87e3 jne 0x104a8803 */
  if (!C.zf) goto L_104a8803;
  /* 104a87e5 push 0x104c9dc4 */
  push32((uint32_t)(0x104c9dc4u));
  /* 104a87ea push 0 */
  push32((uint32_t)(0x0u));
  /* 104a87ec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 104a87ee push 0x104c9dd4 */
  push32((uint32_t)(0x104c9dd4u));
  /* 104a87f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a87f5 call 0x104a1950 */
  push32(0x104a87fau); f_104a1950();
  /* 104a87fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a87fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8800 jne 0x104a8803 */
  if (!C.zf) goto L_104a8803;
  /* 104a8802 int3  */
  x86_unimpl("int3 @ 0x104a8802");
L_104a8803:;
  /* 104a8803 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a8805 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a8807 jne 0x104a87df */
  if (!C.zf) goto L_104a87df;
  /* 104a8809 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a880c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 104a8813 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a8819 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104a881c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a881f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a8822 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104a8824 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8827 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 104a882e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a8831 push ecx */
  push32((uint32_t)(ECX));
  /* 104a8832 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a8835 push edx */
  push32((uint32_t)(EDX));
  /* 104a8836 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8839 push eax */
  push32((uint32_t)(EAX));
  /* 104a883a call 0x104a9820 */
  push32(0x104a883fu); f_104a9820();
  /* 104a883f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8842 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104a8845 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8848 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a884b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a884e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8851 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104a8854 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8857 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a885b jl 0x104a887f */
  if ((C.sf!=C.of)) goto L_104a887f;
  /* 104a885d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8860 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a8862 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 104a8865 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a8867 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a886d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 104a8870 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8873 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a8875 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8878 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a887b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104a887d jmp 0x104a8890 */
  goto L_104a8890;
L_104a887f:;
  /* 104a887f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8882 push edx */
  push32((uint32_t)(EDX));
  /* 104a8883 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a8885 call 0x104a95a0 */
  push32(0x104a888au); f_104a95a0();
  /* 104a888a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a888d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_104a8890:;
  /* 104a8890 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a8893 pop edi */
  EDI = (pop32());
  /* 104a8894 pop esi */
  ESI = (pop32());
  /* 104a8895 pop ebx */
  EBX = (pop32());
  /* 104a8896 mov esp, ebp */
  ESP = (EBP);
  /* 104a8898 pop ebp */
  EBP = (pop32());
  /* 104a8899 ret  */
  ESPCHK(0x104a87a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100088a0 @ 0x104a88a0 (183 bytes, 58 insns) */
void f_104a88a0(void) {
  FTRACE(0x104a88a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a88a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a88a1 mov ebp, esp */
  EBP = (ESP);
  /* 104a88a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a88a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a88a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a88ac cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a88b1 ja 0x104a88ca */
  if ((!C.cf&&!C.zf)) goto L_104a88ca;
  /* 104a88b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a88b6 mov edx, dword ptr [0x104ccc98] */
  EDX = (r32((uint32_t)(0x104ccc98)));
  /* 104a88bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a88be mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 104a88c2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 104a88c5 jmp 0x104a8953 */
  goto L_104a8953;
L_104a88ca:;
  /* 104a88ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a88cd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 104a88d0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a88d6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a88dc mov edx, dword ptr [0x104ccc98] */
  EDX = (r32((uint32_t)(0x104ccc98)));
  /* 104a88e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a88e4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 104a88e8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 104a88ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a88ef je 0x104a8913 */
  if (C.zf) goto L_104a8913;
  /* 104a88f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a88f4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 104a88f7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a88fd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 104a8900 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 104a8903 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 104a8906 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 104a890a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 104a8911 jmp 0x104a8924 */
  goto L_104a8924;
L_104a8913:;
  /* 104a8913 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 104a8916 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 104a8919 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 104a891d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_104a8924:;
  /* 104a8924 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a8926 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a8928 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a892a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 104a892d push ecx */
  push32((uint32_t)(ECX));
  /* 104a892e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a8931 push edx */
  push32((uint32_t)(EDX));
  /* 104a8932 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 104a8935 push eax */
  push32((uint32_t)(EAX));
  /* 104a8936 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a8938 call 0x104aaac0 */
  push32(0x104a893du); f_104aaac0();
  /* 104a893d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8940 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a8942 jne 0x104a8948 */
  if (!C.zf) goto L_104a8948;
  /* 104a8944 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a8946 jmp 0x104a8953 */
  goto L_104a8953;
L_104a8948:;
  /* 104a8948 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a894b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a8950 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_104a8953:;
  /* 104a8953 mov esp, ebp */
  ESP = (EBP);
  /* 104a8955 pop ebp */
  EBP = (pop32());
  /* 104a8956 ret  */
  ESPCHK(0x104a88a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008960 @ 0x104a8960 (836 bytes, 238 insns) */
void f_104a8960(void) {
  FTRACE(0x104a8960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a8960 push ebp */
  push32((uint32_t)(EBP));
  /* 104a8961 mov ebp, esp */
  EBP = (ESP);
  /* 104a8963 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a8966 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104a8968 call 0x104a6290 */
  push32(0x104a896du); f_104a6290();
  /* 104a896d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a8973 push eax */
  push32((uint32_t)(EAX));
  /* 104a8974 call 0x104a8cb0 */
  push32(0x104a8979u); f_104a8cb0();
  /* 104a8979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a897c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104a897f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a8982 cmp ecx, dword ptr [0x104cfb04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104cfb04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8988 jne 0x104a899b */
  if (!C.zf) goto L_104a899b;
  /* 104a898a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104a898c call 0x104a6330 */
  push32(0x104a8991u); f_104a6330();
  /* 104a8991 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8994 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a8996 jmp 0x104a8ca0 */
  goto L_104a8ca0;
L_104a899b:;
  /* 104a899b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a899f jne 0x104a89bc */
  if (!C.zf) goto L_104a89bc;
  /* 104a89a1 call 0x104a8d90 */
  push32(0x104a89a6u); f_104a8d90();
  /* 104a89a6 call 0x104a8e10 */
  push32(0x104a89abu); f_104a8e10();
  /* 104a89ab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104a89ad call 0x104a6330 */
  push32(0x104a89b2u); f_104a6330();
  /* 104a89b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a89b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a89b7 jmp 0x104a8ca0 */
  goto L_104a8ca0;
L_104a89bc:;
  /* 104a89bc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104a89c3 jmp 0x104a89ce */
  goto L_104a89ce;
L_104a89c5:;
  /* 104a89c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a89c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a89cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104a89ce:;
  /* 104a89ce cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a89d2 jae 0x104a8b1f */
  if (!C.cf) goto L_104a8b1f;
  /* 104a89d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a89db imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a89de mov ecx, dword ptr [eax + 0x104cceb8] */
  ECX = (r32((uint32_t)(EAX + 0x104cceb8)));
  /* 104a89e4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a89e7 jne 0x104a8b1a */
  if (!C.zf) goto L_104a8b1a;
  /* 104a89ed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104a89f4 jmp 0x104a89ff */
  goto L_104a89ff;
L_104a89f6:;
  /* 104a89f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a89f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a89fc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_104a89ff:;
  /* 104a89ff cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8a06 jae 0x104a8a14 */
  if (!C.cf) goto L_104a8a14;
  /* 104a8a08 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8a0b mov byte ptr [eax + 0x104cfca0], 0 */
  w8((uint32_t)(EAX + 0x104cfca0), (0x0u));
  /* 104a8a12 jmp 0x104a89f6 */
  goto L_104a89f6;
L_104a8a14:;
  /* 104a8a14 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104a8a1b jmp 0x104a8a26 */
  goto L_104a8a26;
L_104a8a1d:;
  /* 104a8a1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a8a20 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8a23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_104a8a26:;
  /* 104a8a26 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8a2a jae 0x104a8aa7 */
  if (!C.cf) goto L_104a8aa7;
  /* 104a8a2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a8a2f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a8a32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a8a35 lea ecx, [edx + eax*8 + 0x104ccec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x104ccec8));
  /* 104a8a3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104a8a3f jmp 0x104a8a4a */
  goto L_104a8a4a;
L_104a8a41:;
  /* 104a8a41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a8a44 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8a47 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_104a8a4a:;
  /* 104a8a4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a8a4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a8a4f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104a8a51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a8a53 je 0x104a8aa2 */
  if (C.zf) goto L_104a8aa2;
  /* 104a8a55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a8a58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a8a5a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 104a8a5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a8a5f je 0x104a8aa2 */
  if (C.zf) goto L_104a8aa2;
  /* 104a8a61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a8a64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a8a66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104a8a68 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 104a8a6b jmp 0x104a8a76 */
  goto L_104a8a76;
L_104a8a6d:;
  /* 104a8a6d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8a70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8a73 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_104a8a76:;
  /* 104a8a76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a8a79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a8a7b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 104a8a7e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8a81 ja 0x104a8aa0 */
  if ((!C.cf&&!C.zf)) goto L_104a8aa0;
  /* 104a8a83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8a86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a8a89 mov dl, byte ptr [eax + 0x104cfca1] */
  DL = (r8((uint32_t)(EAX + 0x104cfca1)));
  /* 104a8a8f or dl, byte ptr [ecx + 0x104cceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x104cceb0))); DL = (_r); fl_logic(_r,8); }
  /* 104a8a95 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8a98 mov byte ptr [eax + 0x104cfca1], dl */
  w8((uint32_t)(EAX + 0x104cfca1), (DL));
  /* 104a8a9e jmp 0x104a8a6d */
  goto L_104a8a6d;
L_104a8aa0:;
  /* 104a8aa0 jmp 0x104a8a41 */
  goto L_104a8a41;
L_104a8aa2:;
  /* 104a8aa2 jmp 0x104a8a1d */
  goto L_104a8a1d;
L_104a8aa7:;
  /* 104a8aa7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a8aaa mov dword ptr [0x104cfb04], ecx */
  w32((uint32_t)(0x104cfb04), (ECX));
  /* 104a8ab0 mov dword ptr [0x104cfb8c], 1 */
  w32((uint32_t)(0x104cfb8c), (0x1u));
  /* 104a8aba mov edx, dword ptr [0x104cfb04] */
  EDX = (r32((uint32_t)(0x104cfb04)));
  /* 104a8ac0 push edx */
  push32((uint32_t)(EDX));
  /* 104a8ac1 call 0x104a8d10 */
  push32(0x104a8ac6u); f_104a8d10();
  /* 104a8ac6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8ac9 mov dword ptr [0x104cfda4], eax */
  w32((uint32_t)(0x104cfda4), (EAX));
  /* 104a8ace mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104a8ad5 jmp 0x104a8ae0 */
  goto L_104a8ae0;
L_104a8ad7:;
  /* 104a8ad7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a8ada add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8add mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_104a8ae0:;
  /* 104a8ae0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8ae4 jae 0x104a8b04 */
  if (!C.cf) goto L_104a8b04;
  /* 104a8ae6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a8ae9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a8aec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a8aef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a8af2 mov cx, word ptr [ecx + eax*2 + 0x104ccebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x104ccebc)));
  /* 104a8afa mov word ptr [edx*2 + 0x104cfb80], cx */
  w16((uint32_t)(EDX*2 + 0x104cfb80), (CX));
  /* 104a8b02 jmp 0x104a8ad7 */
  goto L_104a8ad7;
L_104a8b04:;
  /* 104a8b04 call 0x104a8e10 */
  push32(0x104a8b09u); f_104a8e10();
  /* 104a8b09 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104a8b0b call 0x104a6330 */
  push32(0x104a8b10u); f_104a6330();
  /* 104a8b10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8b13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a8b15 jmp 0x104a8ca0 */
  goto L_104a8ca0;
L_104a8b1a:;
  /* 104a8b1a jmp 0x104a89c5 */
  goto L_104a89c5;
L_104a8b1f:;
  /* 104a8b1f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 104a8b22 push edx */
  push32((uint32_t)(EDX));
  /* 104a8b23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a8b26 push eax */
  push32((uint32_t)(EAX));
  /* 104a8b27 call dword ptr [0x104d0308] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0308))), 0x104a8b2du);
  /* 104a8b2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8b30 jne 0x104a8c72 */
  if (!C.zf) goto L_104a8c72;
  /* 104a8b36 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104a8b3d jmp 0x104a8b48 */
  goto L_104a8b48;
L_104a8b3f:;
  /* 104a8b3f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8b42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8b45 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_104a8b48:;
  /* 104a8b48 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8b4f jae 0x104a8b5d */
  if (!C.cf) goto L_104a8b5d;
  /* 104a8b51 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8b54 mov byte ptr [edx + 0x104cfca0], 0 */
  w8((uint32_t)(EDX + 0x104cfca0), (0x0u));
  /* 104a8b5b jmp 0x104a8b3f */
  goto L_104a8b3f;
L_104a8b5d:;
  /* 104a8b5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a8b60 mov dword ptr [0x104cfb04], eax */
  w32((uint32_t)(0x104cfb04), (EAX));
  /* 104a8b65 mov dword ptr [0x104cfda4], 0 */
  w32((uint32_t)(0x104cfda4), (0x0u));
  /* 104a8b6f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8b73 jbe 0x104a8c2e */
  if ((C.cf||C.zf)) goto L_104a8c2e;
  /* 104a8b79 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 104a8b7c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 104a8b7f jmp 0x104a8b8a */
  goto L_104a8b8a;
L_104a8b81:;
  /* 104a8b81 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a8b84 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8b87 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_104a8b8a:;
  /* 104a8b8a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a8b8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a8b8f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104a8b91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a8b93 je 0x104a8bdc */
  if (C.zf) goto L_104a8bdc;
  /* 104a8b95 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a8b98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a8b9a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 104a8b9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a8b9f je 0x104a8bdc */
  if (C.zf) goto L_104a8bdc;
  /* 104a8ba1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a8ba4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a8ba6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104a8ba8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 104a8bab jmp 0x104a8bb6 */
  goto L_104a8bb6;
L_104a8bad:;
  /* 104a8bad mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8bb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8bb3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_104a8bb6:;
  /* 104a8bb6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a8bb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a8bbb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 104a8bbe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8bc1 ja 0x104a8bda */
  if ((!C.cf&&!C.zf)) goto L_104a8bda;
  /* 104a8bc3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8bc6 mov cl, byte ptr [eax + 0x104cfca1] */
  CL = (r8((uint32_t)(EAX + 0x104cfca1)));
  /* 104a8bcc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 104a8bcf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8bd2 mov byte ptr [edx + 0x104cfca1], cl */
  w8((uint32_t)(EDX + 0x104cfca1), (CL));
  /* 104a8bd8 jmp 0x104a8bad */
  goto L_104a8bad;
L_104a8bda:;
  /* 104a8bda jmp 0x104a8b81 */
  goto L_104a8b81;
L_104a8bdc:;
  /* 104a8bdc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 104a8be3 jmp 0x104a8bee */
  goto L_104a8bee;
L_104a8be5:;
  /* 104a8be5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8be8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8beb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_104a8bee:;
  /* 104a8bee cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8bf5 jae 0x104a8c0e */
  if (!C.cf) goto L_104a8c0e;
  /* 104a8bf7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8bfa mov dl, byte ptr [ecx + 0x104cfca1] */
  DL = (r8((uint32_t)(ECX + 0x104cfca1)));
  /* 104a8c00 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 104a8c03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a8c06 mov byte ptr [eax + 0x104cfca1], dl */
  w8((uint32_t)(EAX + 0x104cfca1), (DL));
  /* 104a8c0c jmp 0x104a8be5 */
  goto L_104a8be5;
L_104a8c0e:;
  /* 104a8c0e mov ecx, dword ptr [0x104cfb04] */
  ECX = (r32((uint32_t)(0x104cfb04)));
  /* 104a8c14 push ecx */
  push32((uint32_t)(ECX));
  /* 104a8c15 call 0x104a8d10 */
  push32(0x104a8c1au); f_104a8d10();
  /* 104a8c1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8c1d mov dword ptr [0x104cfda4], eax */
  w32((uint32_t)(0x104cfda4), (EAX));
  /* 104a8c22 mov dword ptr [0x104cfb8c], 1 */
  w32((uint32_t)(0x104cfb8c), (0x1u));
  /* 104a8c2c jmp 0x104a8c38 */
  goto L_104a8c38;
L_104a8c2e:;
  /* 104a8c2e mov dword ptr [0x104cfb8c], 0 */
  w32((uint32_t)(0x104cfb8c), (0x0u));
L_104a8c38:;
  /* 104a8c38 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104a8c3f jmp 0x104a8c4a */
  goto L_104a8c4a;
L_104a8c41:;
  /* 104a8c41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a8c44 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8c47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_104a8c4a:;
  /* 104a8c4a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8c4e jae 0x104a8c5f */
  if (!C.cf) goto L_104a8c5f;
  /* 104a8c50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a8c53 mov word ptr [eax*2 + 0x104cfb80], 0 */
  w16((uint32_t)(EAX*2 + 0x104cfb80), (0x0u));
  /* 104a8c5d jmp 0x104a8c41 */
  goto L_104a8c41;
L_104a8c5f:;
  /* 104a8c5f call 0x104a8e10 */
  push32(0x104a8c64u); f_104a8e10();
  /* 104a8c64 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104a8c66 call 0x104a6330 */
  push32(0x104a8c6bu); f_104a6330();
  /* 104a8c6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8c6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a8c70 jmp 0x104a8ca0 */
  goto L_104a8ca0;
L_104a8c72:;
  /* 104a8c72 cmp dword ptr [0x104ce610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8c79 je 0x104a8c93 */
  if (C.zf) goto L_104a8c93;
  /* 104a8c7b call 0x104a8d90 */
  push32(0x104a8c80u); f_104a8d90();
  /* 104a8c80 call 0x104a8e10 */
  push32(0x104a8c85u); f_104a8e10();
  /* 104a8c85 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104a8c87 call 0x104a6330 */
  push32(0x104a8c8cu); f_104a6330();
  /* 104a8c8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8c8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a8c91 jmp 0x104a8ca0 */
  goto L_104a8ca0;
L_104a8c93:;
  /* 104a8c93 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104a8c95 call 0x104a6330 */
  push32(0x104a8c9au); f_104a6330();
  /* 104a8c9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8c9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_104a8ca0:;
  /* 104a8ca0 mov esp, ebp */
  ESP = (EBP);
  /* 104a8ca2 pop ebp */
  EBP = (pop32());
  /* 104a8ca3 ret  */
  ESPCHK(0x104a8960u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x104a8cb0 (89 bytes, 21 insns) */
void f_104a8cb0(void) {
  FTRACE(0x104a8cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a8cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a8cb1 mov ebp, esp */
  EBP = (ESP);
  /* 104a8cb3 mov dword ptr [0x104ce610], 0 */
  w32((uint32_t)(0x104ce610), (0x0u));
  /* 104a8cbd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8cc1 jne 0x104a8cd5 */
  if (!C.zf) goto L_104a8cd5;
  /* 104a8cc3 mov dword ptr [0x104ce610], 1 */
  w32((uint32_t)(0x104ce610), (0x1u));
  /* 104a8ccd call dword ptr [0x104d0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0310))), 0x104a8cd3u);
  /* 104a8cd3 jmp 0x104a8d07 */
  goto L_104a8d07;
L_104a8cd5:;
  /* 104a8cd5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8cd9 jne 0x104a8ced */
  if (!C.zf) goto L_104a8ced;
  /* 104a8cdb mov dword ptr [0x104ce610], 1 */
  w32((uint32_t)(0x104ce610), (0x1u));
  /* 104a8ce5 call dword ptr [0x104d030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d030c))), 0x104a8cebu);
  /* 104a8ceb jmp 0x104a8d07 */
  goto L_104a8d07;
L_104a8ced:;
  /* 104a8ced cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8cf1 jne 0x104a8d04 */
  if (!C.zf) goto L_104a8d04;
  /* 104a8cf3 mov dword ptr [0x104ce610], 1 */
  w32((uint32_t)(0x104ce610), (0x1u));
  /* 104a8cfd mov eax, dword ptr [0x104ce630] */
  EAX = (r32((uint32_t)(0x104ce630)));
  /* 104a8d02 jmp 0x104a8d07 */
  goto L_104a8d07;
L_104a8d04:;
  /* 104a8d04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_104a8d07:;
  /* 104a8d07 pop ebp */
  EBP = (pop32());
  /* 104a8d08 ret  */
  ESPCHK(0x104a8cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d10 @ 0x104a8d10 (80 bytes, 26 insns) [1 switch table(s)] */
void f_104a8d10(void) {
  FTRACE(0x104a8d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a8d10 push ebp */
  push32((uint32_t)(EBP));
  /* 104a8d11 mov ebp, esp */
  EBP = (ESP);
  /* 104a8d13 push ecx */
  push32((uint32_t)(ECX));
  /* 104a8d14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a8d17 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a8d1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a8d1d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a8d23 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104a8d26 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8d2a ja 0x104a8d5a */
  if ((!C.cf&&!C.zf)) goto L_104a8d5a;
  /* 104a8d2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a8d2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a8d31 mov dl, byte ptr [eax + 0x104a8d74] */
  DL = (r8((uint32_t)(EAX + 0x104a8d74)));
  /* 104a8d37 jmp dword ptr [edx*4 + 0x104a8d60] */
  switch (EDX) {
    case 0: goto L_104a8d3e;
    case 1: goto L_104a8d45;
    case 2: goto L_104a8d4c;
    case 3: goto L_104a8d53;
    case 4: goto L_104a8d5a;
    default: x86_unimpl("switch@0x104a8d37 out of table"); return;
  }
L_104a8d3e:;
  /* 104a8d3e mov eax, 0x411 */
  EAX = (0x411u);
  /* 104a8d43 jmp 0x104a8d5c */
  goto L_104a8d5c;
L_104a8d45:;
  /* 104a8d45 mov eax, 0x804 */
  EAX = (0x804u);
  /* 104a8d4a jmp 0x104a8d5c */
  goto L_104a8d5c;
L_104a8d4c:;
  /* 104a8d4c mov eax, 0x412 */
  EAX = (0x412u);
  /* 104a8d51 jmp 0x104a8d5c */
  goto L_104a8d5c;
L_104a8d53:;
  /* 104a8d53 mov eax, 0x404 */
  EAX = (0x404u);
  /* 104a8d58 jmp 0x104a8d5c */
  goto L_104a8d5c;
L_104a8d5a:;
  /* 104a8d5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104a8d5c:;
  /* 104a8d5c mov esp, ebp */
  ESP = (EBP);
  /* 104a8d5e pop ebp */
  EBP = (pop32());
  /* 104a8d5f ret  */
  ESPCHK(0x104a8d10u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x104a8d90 (116 bytes, 29 insns) */
void f_104a8d90(void) {
  FTRACE(0x104a8d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a8d90 push ebp */
  push32((uint32_t)(EBP));
  /* 104a8d91 mov ebp, esp */
  EBP = (ESP);
  /* 104a8d93 push ecx */
  push32((uint32_t)(ECX));
  /* 104a8d94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104a8d9b jmp 0x104a8da6 */
  goto L_104a8da6;
L_104a8d9d:;
  /* 104a8d9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a8da0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8da3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a8da6:;
  /* 104a8da6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8dad jge 0x104a8dbb */
  if ((C.sf==C.of)) goto L_104a8dbb;
  /* 104a8daf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a8db2 mov byte ptr [ecx + 0x104cfca0], 0 */
  w8((uint32_t)(ECX + 0x104cfca0), (0x0u));
  /* 104a8db9 jmp 0x104a8d9d */
  goto L_104a8d9d;
L_104a8dbb:;
  /* 104a8dbb mov dword ptr [0x104cfb04], 0 */
  w32((uint32_t)(0x104cfb04), (0x0u));
  /* 104a8dc5 mov dword ptr [0x104cfb8c], 0 */
  w32((uint32_t)(0x104cfb8c), (0x0u));
  /* 104a8dcf mov dword ptr [0x104cfda4], 0 */
  w32((uint32_t)(0x104cfda4), (0x0u));
  /* 104a8dd9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104a8de0 jmp 0x104a8deb */
  goto L_104a8deb;
L_104a8de2:;
  /* 104a8de2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a8de5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8de8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104a8deb:;
  /* 104a8deb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8def jge 0x104a8e00 */
  if ((C.sf==C.of)) goto L_104a8e00;
  /* 104a8df1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a8df4 mov word ptr [eax*2 + 0x104cfb80], 0 */
  w16((uint32_t)(EAX*2 + 0x104cfb80), (0x0u));
  /* 104a8dfe jmp 0x104a8de2 */
  goto L_104a8de2;
L_104a8e00:;
  /* 104a8e00 mov esp, ebp */
  ESP = (EBP);
  /* 104a8e02 pop ebp */
  EBP = (pop32());
  /* 104a8e03 ret  */
  ESPCHK(0x104a8d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e10 @ 0x104a8e10 (770 bytes, 175 insns) */
void f_104a8e10(void) {
  FTRACE(0x104a8e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a8e10 push ebp */
  push32((uint32_t)(EBP));
  /* 104a8e11 mov ebp, esp */
  EBP = (ESP);
  /* 104a8e13 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a8e19 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 104a8e1f push eax */
  push32((uint32_t)(EAX));
  /* 104a8e20 mov ecx, dword ptr [0x104cfb04] */
  ECX = (r32((uint32_t)(0x104cfb04)));
  /* 104a8e26 push ecx */
  push32((uint32_t)(ECX));
  /* 104a8e27 call dword ptr [0x104d0308] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0308))), 0x104a8e2du);
  /* 104a8e2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8e30 jne 0x104a9049 */
  if (!C.zf) goto L_104a9049;
  /* 104a8e36 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 104a8e40 jmp 0x104a8e51 */
  goto L_104a8e51;
L_104a8e42:;
  /* 104a8e42 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a8e48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8e4b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_104a8e51:;
  /* 104a8e51 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8e5b jae 0x104a8e72 */
  if (!C.cf) goto L_104a8e72;
  /* 104a8e5d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a8e63 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 104a8e69 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 104a8e70 jmp 0x104a8e42 */
  goto L_104a8e42;
L_104a8e72:;
  /* 104a8e72 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 104a8e79 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 104a8e7f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a8e82 jmp 0x104a8e8d */
  goto L_104a8e8d;
L_104a8e84:;
  /* 104a8e84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a8e87 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8e8a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a8e8d:;
  /* 104a8e8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a8e90 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a8e92 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104a8e94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a8e96 je 0x104a8ed8 */
  if (C.zf) goto L_104a8ed8;
  /* 104a8e98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a8e9b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a8e9d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104a8e9f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 104a8ea5 jmp 0x104a8eb6 */
  goto L_104a8eb6;
L_104a8ea7:;
  /* 104a8ea7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a8ead add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8eb0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_104a8eb6:;
  /* 104a8eb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a8eb9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a8ebb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 104a8ebe cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8ec4 ja 0x104a8ed6 */
  if ((!C.cf&&!C.zf)) goto L_104a8ed6;
  /* 104a8ec6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a8ecc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 104a8ed4 jmp 0x104a8ea7 */
  goto L_104a8ea7;
L_104a8ed6:;
  /* 104a8ed6 jmp 0x104a8e84 */
  goto L_104a8e84;
L_104a8ed8:;
  /* 104a8ed8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a8eda mov eax, dword ptr [0x104cfda4] */
  EAX = (r32((uint32_t)(0x104cfda4)));
  /* 104a8edf push eax */
  push32((uint32_t)(EAX));
  /* 104a8ee0 mov ecx, dword ptr [0x104cfb04] */
  ECX = (r32((uint32_t)(0x104cfb04)));
  /* 104a8ee6 push ecx */
  push32((uint32_t)(ECX));
  /* 104a8ee7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 104a8eed push edx */
  push32((uint32_t)(EDX));
  /* 104a8eee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104a8ef3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 104a8ef9 push eax */
  push32((uint32_t)(EAX));
  /* 104a8efa push 1 */
  push32((uint32_t)(0x1u));
  /* 104a8efc call 0x104aaac0 */
  push32(0x104a8f01u); f_104aaac0();
  /* 104a8f01 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8f04 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a8f06 mov ecx, dword ptr [0x104cfb04] */
  ECX = (r32((uint32_t)(0x104cfb04)));
  /* 104a8f0c push ecx */
  push32((uint32_t)(ECX));
  /* 104a8f0d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104a8f12 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 104a8f18 push edx */
  push32((uint32_t)(EDX));
  /* 104a8f19 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104a8f1e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 104a8f24 push eax */
  push32((uint32_t)(EAX));
  /* 104a8f25 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104a8f2a mov ecx, dword ptr [0x104cfda4] */
  ECX = (r32((uint32_t)(0x104cfda4)));
  /* 104a8f30 push ecx */
  push32((uint32_t)(ECX));
  /* 104a8f31 call 0x104aac80 */
  push32(0x104a8f36u); f_104aac80();
  /* 104a8f36 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8f39 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a8f3b mov edx, dword ptr [0x104cfb04] */
  EDX = (r32((uint32_t)(0x104cfb04)));
  /* 104a8f41 push edx */
  push32((uint32_t)(EDX));
  /* 104a8f42 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104a8f47 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 104a8f4d push eax */
  push32((uint32_t)(EAX));
  /* 104a8f4e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104a8f53 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 104a8f59 push ecx */
  push32((uint32_t)(ECX));
  /* 104a8f5a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 104a8f5f mov edx, dword ptr [0x104cfda4] */
  EDX = (r32((uint32_t)(0x104cfda4)));
  /* 104a8f65 push edx */
  push32((uint32_t)(EDX));
  /* 104a8f66 call 0x104aac80 */
  push32(0x104a8f6bu); f_104aac80();
  /* 104a8f6b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8f6e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 104a8f78 jmp 0x104a8f89 */
  goto L_104a8f89;
L_104a8f7a:;
  /* 104a8f7a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a8f80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a8f83 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_104a8f89:;
  /* 104a8f89 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a8f93 jae 0x104a9044 */
  if (!C.cf) goto L_104a9044;
  /* 104a8f99 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a8f9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a8fa1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 104a8fa9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104a8fac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a8fae je 0x104a8fe6 */
  if (C.zf) goto L_104a8fe6;
  /* 104a8fb0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a8fb6 mov cl, byte ptr [eax + 0x104cfca1] */
  CL = (r8((uint32_t)(EAX + 0x104cfca1)));
  /* 104a8fbc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 104a8fbf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a8fc5 mov byte ptr [edx + 0x104cfca1], cl */
  w8((uint32_t)(EDX + 0x104cfca1), (CL));
  /* 104a8fcb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a8fd1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a8fd7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 104a8fde mov byte ptr [eax + 0x104cfba0], dl */
  w8((uint32_t)(EAX + 0x104cfba0), (DL));
  /* 104a8fe4 jmp 0x104a903f */
  goto L_104a903f;
L_104a8fe6:;
  /* 104a8fe6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a8fec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a8fee mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 104a8ff6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 104a8ff9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a8ffb je 0x104a9032 */
  if (C.zf) goto L_104a9032;
  /* 104a8ffd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a9003 mov al, byte ptr [edx + 0x104cfca1] */
  AL = (r8((uint32_t)(EDX + 0x104cfca1)));
  /* 104a9009 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 104a900b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a9011 mov byte ptr [ecx + 0x104cfca1], al */
  w8((uint32_t)(ECX + 0x104cfca1), (AL));
  /* 104a9017 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a901d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a9023 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 104a902a mov byte ptr [edx + 0x104cfba0], cl */
  w8((uint32_t)(EDX + 0x104cfba0), (CL));
  /* 104a9030 jmp 0x104a903f */
  goto L_104a903f;
L_104a9032:;
  /* 104a9032 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a9038 mov byte ptr [edx + 0x104cfba0], 0 */
  w8((uint32_t)(EDX + 0x104cfba0), (0x0u));
L_104a903f:;
  /* 104a903f jmp 0x104a8f7a */
  goto L_104a8f7a;
L_104a9044:;
  /* 104a9044 jmp 0x104a910e */
  goto L_104a910e;
L_104a9049:;
  /* 104a9049 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 104a9053 jmp 0x104a9064 */
  goto L_104a9064;
L_104a9055:;
  /* 104a9055 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a905b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a905e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_104a9064:;
  /* 104a9064 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a906e jae 0x104a910e */
  if (!C.cf) goto L_104a910e;
  /* 104a9074 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a907b jb 0x104a90b8 */
  if (C.cf) goto L_104a90b8;
  /* 104a907d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9084 ja 0x104a90b8 */
  if ((!C.cf&&!C.zf)) goto L_104a90b8;
  /* 104a9086 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a908c mov dl, byte ptr [ecx + 0x104cfca1] */
  DL = (r8((uint32_t)(ECX + 0x104cfca1)));
  /* 104a9092 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 104a9095 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a909b mov byte ptr [eax + 0x104cfca1], dl */
  w8((uint32_t)(EAX + 0x104cfca1), (DL));
  /* 104a90a1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a90a7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a90aa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a90b0 mov byte ptr [edx + 0x104cfba0], cl */
  w8((uint32_t)(EDX + 0x104cfba0), (CL));
  /* 104a90b6 jmp 0x104a9109 */
  goto L_104a9109;
L_104a90b8:;
  /* 104a90b8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a90bf jb 0x104a90fc */
  if (C.cf) goto L_104a90fc;
  /* 104a90c1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a90c8 ja 0x104a90fc */
  if ((!C.cf&&!C.zf)) goto L_104a90fc;
  /* 104a90ca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a90d0 mov cl, byte ptr [eax + 0x104cfca1] */
  CL = (r8((uint32_t)(EAX + 0x104cfca1)));
  /* 104a90d6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 104a90d9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a90df mov byte ptr [edx + 0x104cfca1], cl */
  w8((uint32_t)(EDX + 0x104cfca1), (CL));
  /* 104a90e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a90eb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a90ee mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a90f4 mov byte ptr [ecx + 0x104cfba0], al */
  w8((uint32_t)(ECX + 0x104cfba0), (AL));
  /* 104a90fa jmp 0x104a9109 */
  goto L_104a9109;
L_104a90fc:;
  /* 104a90fc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104a9102 mov byte ptr [edx + 0x104cfba0], 0 */
  w8((uint32_t)(EDX + 0x104cfba0), (0x0u));
L_104a9109:;
  /* 104a9109 jmp 0x104a9055 */
  goto L_104a9055;
L_104a910e:;
  /* 104a910e mov esp, ebp */
  ESP = (EBP);
  /* 104a9110 pop ebp */
  EBP = (pop32());
  /* 104a9111 ret  */
  ESPCHK(0x104a8e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009120 @ 0x104a9120 (23 bytes, 9 insns) */
void f_104a9120(void) {
  FTRACE(0x104a9120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a9120 push ebp */
  push32((uint32_t)(EBP));
  /* 104a9121 mov ebp, esp */
  EBP = (ESP);
  /* 104a9123 cmp dword ptr [0x104cfb8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cfb8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a912a je 0x104a9133 */
  if (C.zf) goto L_104a9133;
  /* 104a912c mov eax, dword ptr [0x104cfb04] */
  EAX = (r32((uint32_t)(0x104cfb04)));
  /* 104a9131 jmp 0x104a9135 */
  goto L_104a9135;
L_104a9133:;
  /* 104a9133 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104a9135:;
  /* 104a9135 pop ebp */
  EBP = (pop32());
  /* 104a9136 ret  */
  ESPCHK(0x104a9120u, _esp0);
  ESP += 4; return;
}

/* FUN_10009140 @ 0x104a9140 (34 bytes, 10 insns) */
void f_104a9140(void) {
  FTRACE(0x104a9140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a9140 push ebp */
  push32((uint32_t)(EBP));
  /* 104a9141 mov ebp, esp */
  EBP = (ESP);
  /* 104a9143 cmp dword ptr [0x104cff50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cff50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a914a jne 0x104a9160 */
  if (!C.zf) goto L_104a9160;
  /* 104a914c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 104a914e call 0x104a8960 */
  push32(0x104a9153u); f_104a8960();
  /* 104a9153 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9156 mov dword ptr [0x104cff50], 1 */
  w32((uint32_t)(0x104cff50), (0x1u));
L_104a9160:;
  /* 104a9160 pop ebp */
  EBP = (pop32());
  /* 104a9161 ret  */
  ESPCHK(0x104a9140u, _esp0);
  ESP += 4; return;
}

/* FUN_10009170 @ 0x104a9170 (664 bytes, 265 insns) [15 switch table(s)] */
void f_104a9170(void) {
  FTRACE(0x104a9170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a9170 push ebp */
  push32((uint32_t)(EBP));
  /* 104a9171 mov ebp, esp */
  EBP = (ESP);
  /* 104a9173 push edi */
  push32((uint32_t)(EDI));
  /* 104a9174 push esi */
  push32((uint32_t)(ESI));
  /* 104a9175 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 104a9178 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a917b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 104a917e mov eax, ecx */
  EAX = (ECX);
  /* 104a9180 mov edx, ecx */
  EDX = (ECX);
  /* 104a9182 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9184 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9186 jbe 0x104a9190 */
  if ((C.cf||C.zf)) goto L_104a9190;
  /* 104a9188 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a918a jb 0x104a9308 */
  if (C.cf) goto L_104a9308;
L_104a9190:;
  /* 104a9190 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 104a9196 jne 0x104a91ac */
  if (!C.zf) goto L_104a91ac;
  /* 104a9198 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104a919b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 104a919e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a91a1 jb 0x104a91cc */
  if (C.cf) goto L_104a91cc;
  /* 104a91a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104a91a5 jmp dword ptr [edx*4 + 0x104a92b8] */
  switch (EDX) {
    case 0: goto L_104a92c8;
    case 1: goto L_104a92d0;
    case 2: goto L_104a92dc;
    case 3: goto L_104a92f0;
    default: x86_unimpl("switch@0x104a91a5 out of table"); return;
  }
L_104a91ac:;
  /* 104a91ac mov eax, edi */
  EAX = (EDI);
  /* 104a91ae mov edx, 3 */
  EDX = (0x3u);
  /* 104a91b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a91b6 jb 0x104a91c4 */
  if (C.cf) goto L_104a91c4;
  /* 104a91b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 104a91bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a91bd jmp dword ptr [eax*4 + 0x104a91d0] */
  switch (EAX) {
    case 1: goto L_104a91e0;
    case 2: goto L_104a920c;
    case 3: goto L_104a9230;
    default: x86_unimpl("switch@0x104a91bd out of table"); return;
  }
L_104a91c4:;
  /* 104a91c4 jmp dword ptr [ecx*4 + 0x104a92c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x104a92c8)))); return;
  /* 104a91cb nop  */
  /* nop */
L_104a91cc:;
  /* 104a91cc jmp dword ptr [ecx*4 + 0x104a924c] */
  switch (ECX) {
    case 0: goto L_104a92af;
    case 1: goto L_104a929c;
    case 2: goto L_104a9294;
    case 3: goto L_104a928c;
    case 4: goto L_104a9284;
    case 5: goto L_104a927c;
    case 6: goto L_104a9274;
    case 7: goto L_104a926c;
    default: x86_unimpl("switch@0x104a91cc out of table"); return;
  }
  /* 104a91d3 nop  */
  /* nop */
L_104a91e0:;
  /* 104a91e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104a91e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104a91e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104a91e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104a91e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104a91ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104a91ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104a91f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104a91f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104a91f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104a91fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a91fe jb 0x104a91cc */
  if (C.cf) goto L_104a91cc;
  /* 104a9200 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104a9202 jmp dword ptr [edx*4 + 0x104a92b8] */
  switch (EDX) {
    case 0: goto L_104a92c8;
    case 1: goto L_104a92d0;
    case 2: goto L_104a92dc;
    case 3: goto L_104a92f0;
    default: x86_unimpl("switch@0x104a9202 out of table"); return;
  }
  /* 104a9209 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104a920c:;
  /* 104a920c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104a920e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104a9210 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104a9212 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104a9215 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104a9218 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104a921b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104a921e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9221 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9224 jb 0x104a91cc */
  if (C.cf) goto L_104a91cc;
  /* 104a9226 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104a9228 jmp dword ptr [edx*4 + 0x104a92b8] */
  switch (EDX) {
    case 0: goto L_104a92c8;
    case 1: goto L_104a92d0;
    case 2: goto L_104a92dc;
    case 3: goto L_104a92f0;
    default: x86_unimpl("switch@0x104a9228 out of table"); return;
  }
  /* 104a922f nop  */
  /* nop */
L_104a9230:;
  /* 104a9230 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104a9232 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104a9234 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104a9236 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104a9237 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104a923a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104a923b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a923e jb 0x104a91cc */
  if (C.cf) goto L_104a91cc;
  /* 104a9240 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104a9242 jmp dword ptr [edx*4 + 0x104a92b8] */
  switch (EDX) {
    case 0: goto L_104a92c8;
    case 1: goto L_104a92d0;
    case 2: goto L_104a92dc;
    case 3: goto L_104a92f0;
    default: x86_unimpl("switch@0x104a9242 out of table"); return;
  }
  /* 104a9249 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104a926c:;
  /* 104a926c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 104a9270 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_104a9274:;
  /* 104a9274 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 104a9278 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_104a927c:;
  /* 104a927c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 104a9280 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_104a9284:;
  /* 104a9284 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 104a9288 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_104a928c:;
  /* 104a928c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 104a9290 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_104a9294:;
  /* 104a9294 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 104a9298 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_104a929c:;
  /* 104a929c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 104a92a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 104a92a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 104a92ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104a92ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_104a92af:;
  /* 104a92af jmp dword ptr [edx*4 + 0x104a92b8] */
  switch (EDX) {
    case 0: goto L_104a92c8;
    case 1: goto L_104a92d0;
    case 2: goto L_104a92dc;
    case 3: goto L_104a92f0;
    default: x86_unimpl("switch@0x104a92af out of table"); return;
  }
  /* 104a92b6 mov edi, edi */
  EDI = (EDI);
L_104a92c8:;
  /* 104a92c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a92cb pop esi */
  ESI = (pop32());
  /* 104a92cc pop edi */
  EDI = (pop32());
  /* 104a92cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104a92ce ret  */
  ESPCHK(0x104a9170u, _esp0);
  ESP += 4; return;
  /* 104a92cf nop  */
  /* nop */
L_104a92d0:;
  /* 104a92d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104a92d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104a92d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a92d7 pop esi */
  ESI = (pop32());
  /* 104a92d8 pop edi */
  EDI = (pop32());
  /* 104a92d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104a92da ret  */
  ESPCHK(0x104a9170u, _esp0);
  ESP += 4; return;
  /* 104a92db nop  */
  /* nop */
L_104a92dc:;
  /* 104a92dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104a92de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104a92e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104a92e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104a92e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a92e9 pop esi */
  ESI = (pop32());
  /* 104a92ea pop edi */
  EDI = (pop32());
  /* 104a92eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104a92ec ret  */
  ESPCHK(0x104a9170u, _esp0);
  ESP += 4; return;
  /* 104a92ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104a92f0:;
  /* 104a92f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104a92f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104a92f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104a92f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104a92fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104a92fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104a9300 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a9303 pop esi */
  ESI = (pop32());
  /* 104a9304 pop edi */
  EDI = (pop32());
  /* 104a9305 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104a9306 ret  */
  ESPCHK(0x104a9170u, _esp0);
  ESP += 4; return;
  /* 104a9307 nop  */
  /* nop */
L_104a9308:;
  /* 104a9308 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 104a930c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 104a9310 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 104a9316 jne 0x104a933c */
  if (!C.zf) goto L_104a933c;
  /* 104a9318 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104a931b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 104a931e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9321 jb 0x104a9330 */
  if (C.cf) goto L_104a9330;
  /* 104a9323 std  */
  C.df=1;
  /* 104a9324 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104a9326 cld  */
  C.df=0;
  /* 104a9327 jmp dword ptr [edx*4 + 0x104a9450] */
  switch (EDX) {
    case 0: goto L_104a9460;
    case 1: goto L_104a9468;
    case 2: goto L_104a9478;
    case 3: goto L_104a948c;
    default: x86_unimpl("switch@0x104a9327 out of table"); return;
  }
  /* 104a932e mov edi, edi */
  EDI = (EDI);
L_104a9330:;
  /* 104a9330 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104a9332 jmp dword ptr [ecx*4 + 0x104a9400] */
  switch (ECX) {
    case 0: goto L_104a9447;
    default: x86_unimpl("switch@0x104a9332 out of table"); return;
  }
  /* 104a9339 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104a933c:;
  /* 104a933c mov eax, edi */
  EAX = (EDI);
  /* 104a933e mov edx, 3 */
  EDX = (0x3u);
  /* 104a9343 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9346 jb 0x104a9354 */
  if (C.cf) goto L_104a9354;
  /* 104a9348 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 104a934b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a934d jmp dword ptr [eax*4 + 0x104a9358] */
  switch (EAX) {
    case 1: goto L_104a9368;
    case 2: goto L_104a9388;
    case 3: goto L_104a93b0;
    default: x86_unimpl("switch@0x104a934d out of table"); return;
  }
L_104a9354:;
  /* 104a9354 jmp dword ptr [ecx*4 + 0x104a9450] */
  switch (ECX) {
    case 0: goto L_104a9460;
    case 1: goto L_104a9468;
    case 2: goto L_104a9478;
    case 3: goto L_104a948c;
    default: x86_unimpl("switch@0x104a9354 out of table"); return;
  }
  /* 104a935b nop  */
  /* nop */
L_104a9368:;
  /* 104a9368 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104a936b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104a936d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104a9370 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 104a9371 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104a9374 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 104a9375 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9378 jb 0x104a9330 */
  if (C.cf) goto L_104a9330;
  /* 104a937a std  */
  C.df=1;
  /* 104a937b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104a937d cld  */
  C.df=0;
  /* 104a937e jmp dword ptr [edx*4 + 0x104a9450] */
  switch (EDX) {
    case 0: goto L_104a9460;
    case 1: goto L_104a9468;
    case 2: goto L_104a9478;
    case 3: goto L_104a948c;
    default: x86_unimpl("switch@0x104a937e out of table"); return;
  }
  /* 104a9385 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104a9388:;
  /* 104a9388 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104a938b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104a938d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104a9390 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104a9393 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104a9396 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104a9399 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a939c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a939f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a93a2 jb 0x104a9330 */
  if (C.cf) goto L_104a9330;
  /* 104a93a4 std  */
  C.df=1;
  /* 104a93a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104a93a7 cld  */
  C.df=0;
  /* 104a93a8 jmp dword ptr [edx*4 + 0x104a9450] */
  switch (EDX) {
    case 0: goto L_104a9460;
    case 1: goto L_104a9468;
    case 2: goto L_104a9478;
    case 3: goto L_104a948c;
    default: x86_unimpl("switch@0x104a93a8 out of table"); return;
  }
  /* 104a93af nop  */
  /* nop */
L_104a93b0:;
  /* 104a93b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104a93b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104a93b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104a93b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104a93bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104a93be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104a93c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104a93c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104a93c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a93ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a93cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a93d0 jb 0x104a9330 */
  if (C.cf) goto L_104a9330;
  /* 104a93d6 std  */
  C.df=1;
  /* 104a93d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104a93d9 cld  */
  C.df=0;
  /* 104a93da jmp dword ptr [edx*4 + 0x104a9450] */
  switch (EDX) {
    case 0: goto L_104a9460;
    case 1: goto L_104a9468;
    case 2: goto L_104a9478;
    case 3: goto L_104a948c;
    default: x86_unimpl("switch@0x104a93da out of table"); return;
  }
  /* 104a93e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 104a93e4 add al, 0x94 */
  { uint32_t _a=(AL),_b=(0x94u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104a93e6 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 104a93e7 adc byte ptr [esp + edx*4], cl */
  { uint32_t _a=(r8((uint32_t)(ESP + EDX*4))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EDX*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 104a93ea dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 104a93eb adc byte ptr [esp + edx*4], dl */
  { uint32_t _a=(r8((uint32_t)(ESP + EDX*4))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EDX*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 104a93ee dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 104a93ef adc byte ptr [esp + edx*4], bl */
  { uint32_t _a=(r8((uint32_t)(ESP + EDX*4))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EDX*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 104a93f2 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 104a93f3 adc byte ptr [esp + edx*4], ah */
  { uint32_t _a=(r8((uint32_t)(ESP + EDX*4))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EDX*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 104a93f6 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 104a93f7 adc byte ptr [esp + edx*4], ch */
  { uint32_t _a=(r8((uint32_t)(ESP + EDX*4))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EDX*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 104a93fa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 104a93fb adc byte ptr [esp + edx*4], dh */
  { uint32_t _a=(r8((uint32_t)(ESP + EDX*4))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EDX*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 104a93fe dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 104a9404 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 104a9408 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 104a940c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 104a9410 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 104a9414 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 104a9418 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 104a941c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 104a9420 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 104a9424 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 104a9428 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 104a942c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 104a9430 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 104a9434 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 104a9438 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 104a943c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 104a9443 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9445 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_104a9447:;
  /* 104a9447 jmp dword ptr [edx*4 + 0x104a9450] */
  switch (EDX) {
    case 0: goto L_104a9460;
    case 1: goto L_104a9468;
    case 2: goto L_104a9478;
    case 3: goto L_104a948c;
    default: x86_unimpl("switch@0x104a9447 out of table"); return;
  }
  /* 104a944e mov edi, edi */
  EDI = (EDI);
L_104a9460:;
  /* 104a9460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a9463 pop esi */
  ESI = (pop32());
  /* 104a9464 pop edi */
  EDI = (pop32());
  /* 104a9465 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104a9466 ret  */
  ESPCHK(0x104a9170u, _esp0);
  ESP += 4; return;
  /* 104a9467 nop  */
  /* nop */
L_104a9468:;
  /* 104a9468 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104a946b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104a946e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a9471 pop esi */
  ESI = (pop32());
  /* 104a9472 pop edi */
  EDI = (pop32());
  /* 104a9473 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104a9474 ret  */
  ESPCHK(0x104a9170u, _esp0);
  ESP += 4; return;
  /* 104a9475 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104a9478:;
  /* 104a9478 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104a947b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104a947e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104a9481 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104a9484 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a9487 pop esi */
  ESI = (pop32());
  /* 104a9488 pop edi */
  EDI = (pop32());
  /* 104a9489 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104a948a ret  */
  ESPCHK(0x104a9170u, _esp0);
  ESP += 4; return;
  /* 104a948b nop  */
  /* nop */
L_104a948c:;
  /* 104a948c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104a948f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104a9492 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104a9495 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104a9498 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104a949b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104a949e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a94a1 pop esi */
  ESI = (pop32());
  /* 104a94a2 pop edi */
  EDI = (pop32());
  /* 104a94a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104a94a4 ret  */
  ESPCHK(0x104a9170u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x104a94b0 (104 bytes, 43 insns) */
void f_104a94b0(void) {
  FTRACE(0x104a94b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a94b0 push ebx */
  push32((uint32_t)(EBX));
  /* 104a94b1 push esi */
  push32((uint32_t)(ESI));
  /* 104a94b2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 104a94b6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a94b8 jne 0x104a94d2 */
  if (!C.zf) goto L_104a94d2;
  /* 104a94ba mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 104a94be mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 104a94c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a94c4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104a94c6 mov ebx, eax */
  EBX = (EAX);
  /* 104a94c8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 104a94cc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104a94ce mov edx, ebx */
  EDX = (EBX);
  /* 104a94d0 jmp 0x104a9513 */
  goto L_104a9513;
L_104a94d2:;
  /* 104a94d2 mov ecx, eax */
  ECX = (EAX);
  /* 104a94d4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 104a94d8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 104a94dc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_104a94e0:;
  /* 104a94e0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 104a94e2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 104a94e4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 104a94e6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 104a94e8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a94ea jne 0x104a94e0 */
  if (!C.zf) goto L_104a94e0;
  /* 104a94ec div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104a94ee mov esi, eax */
  ESI = (EAX);
  /* 104a94f0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 104a94f4 mov ecx, eax */
  ECX = (EAX);
  /* 104a94f6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 104a94fa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 104a94fc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a94fe jb 0x104a950e */
  if (C.cf) goto L_104a950e;
  /* 104a9500 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9504 ja 0x104a950e */
  if ((!C.cf&&!C.zf)) goto L_104a950e;
  /* 104a9506 jb 0x104a950f */
  if (C.cf) goto L_104a950f;
  /* 104a9508 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a950c jbe 0x104a950f */
  if ((C.cf||C.zf)) goto L_104a950f;
L_104a950e:;
  /* 104a950e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_104a950f:;
  /* 104a950f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a9511 mov eax, esi */
  EAX = (ESI);
L_104a9513:;
  /* 104a9513 pop esi */
  ESI = (pop32());
  /* 104a9514 pop ebx */
  EBX = (pop32());
  /* 104a9515 ret 0x10 */
  ESPCHK(0x104a94b0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x104a9520 (117 bytes, 44 insns) */
void f_104a9520(void) {
  FTRACE(0x104a9520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a9520 push ebx */
  push32((uint32_t)(EBX));
  /* 104a9521 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 104a9525 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a9527 jne 0x104a9541 */
  if (!C.zf) goto L_104a9541;
  /* 104a9529 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 104a952d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 104a9531 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a9533 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104a9535 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104a9539 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104a953b mov eax, edx */
  EAX = (EDX);
  /* 104a953d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a953f jmp 0x104a9591 */
  goto L_104a9591;
L_104a9541:;
  /* 104a9541 mov ecx, eax */
  ECX = (EAX);
  /* 104a9543 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 104a9547 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 104a954b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_104a954f:;
  /* 104a954f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 104a9551 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 104a9553 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 104a9555 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 104a9557 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a9559 jne 0x104a954f */
  if (!C.zf) goto L_104a954f;
  /* 104a955b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104a955d mov ecx, eax */
  ECX = (EAX);
  /* 104a955f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 104a9563 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 104a9564 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 104a9568 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a956a jb 0x104a957a */
  if (C.cf) goto L_104a957a;
  /* 104a956c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9570 ja 0x104a957a */
  if ((!C.cf&&!C.zf)) goto L_104a957a;
  /* 104a9572 jb 0x104a9582 */
  if (C.cf) goto L_104a9582;
  /* 104a9574 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9578 jbe 0x104a9582 */
  if ((C.cf||C.zf)) goto L_104a9582;
L_104a957a:;
  /* 104a957a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a957e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_104a9582:;
  /* 104a9582 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a9586 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a958a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104a958c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104a958e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_104a9591:;
  /* 104a9591 pop ebx */
  EBX = (pop32());
  /* 104a9592 ret 0x10 */
  ESPCHK(0x104a9520u, _esp0);
  ESP += 20; return;
}

/* FUN_100095a0 @ 0x104a95a0 (628 bytes, 214 insns) */
void f_104a95a0(void) {
  FTRACE(0x104a95a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a95a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a95a1 mov ebp, esp */
  EBP = (ESP);
  /* 104a95a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a95a6 push ebx */
  push32((uint32_t)(EBX));
  /* 104a95a7 push esi */
  push32((uint32_t)(ESI));
  /* 104a95a8 push edi */
  push32((uint32_t)(EDI));
L_104a95a9:;
  /* 104a95a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a95ad jne 0x104a95cd */
  if (!C.zf) goto L_104a95cd;
  /* 104a95af push 0x104c9e8c */
  push32((uint32_t)(0x104c9e8cu));
  /* 104a95b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a95b6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 104a95b8 push 0x104c9e80 */
  push32((uint32_t)(0x104c9e80u));
  /* 104a95bd push 2 */
  push32((uint32_t)(0x2u));
  /* 104a95bf call 0x104a1950 */
  push32(0x104a95c4u); f_104a1950();
  /* 104a95c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a95c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a95ca jne 0x104a95cd */
  if (!C.zf) goto L_104a95cd;
  /* 104a95cc int3  */
  x86_unimpl("int3 @ 0x104a95cc");
L_104a95cd:;
  /* 104a95cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a95cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a95d1 jne 0x104a95a9 */
  if (!C.zf) goto L_104a95a9;
  /* 104a95d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a95d6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104a95d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a95dc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104a95df mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104a95e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a95e5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104a95e8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 104a95ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a95f0 je 0x104a95ff */
  if (C.zf) goto L_104a95ff;
  /* 104a95f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a95f5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104a95f8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 104a95fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a95fd je 0x104a9615 */
  if (C.zf) goto L_104a9615;
L_104a95ff:;
  /* 104a95ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a9602 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104a9605 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 104a9607 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a960a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 104a960d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a9610 jmp 0x104a980d */
  goto L_104a980d;
L_104a9615:;
  /* 104a9615 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a9618 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104a961b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 104a961e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a9620 je 0x104a966c */
  if (C.zf) goto L_104a966c;
  /* 104a9622 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a9625 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 104a962c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a962f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104a9632 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 104a9635 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a9637 je 0x104a9655 */
  if (C.zf) goto L_104a9655;
  /* 104a9639 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a963c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a963f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104a9642 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104a9644 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a9647 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104a964a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 104a964d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a9650 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 104a9653 jmp 0x104a966c */
  goto L_104a966c;
L_104a9655:;
  /* 104a9655 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a9658 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104a965b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 104a965e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a9661 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 104a9664 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a9667 jmp 0x104a980d */
  goto L_104a980d;
L_104a966c:;
  /* 104a966c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a966f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104a9672 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 104a9675 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a9678 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 104a967b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a967e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104a9681 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 104a9684 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a9687 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 104a968a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a968d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 104a9694 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104a969b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a969e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104a96a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a96a4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104a96a7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 104a96ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a96af jne 0x104a96df */
  if (!C.zf) goto L_104a96df;
  /* 104a96b1 cmp dword ptr [ebp - 8], 0x104cd140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x104cd140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a96b8 je 0x104a96c3 */
  if (C.zf) goto L_104a96c3;
  /* 104a96ba cmp dword ptr [ebp - 8], 0x104cd160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x104cd160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a96c1 jne 0x104a96d3 */
  if (!C.zf) goto L_104a96d3;
L_104a96c3:;
  /* 104a96c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a96c6 push edx */
  push32((uint32_t)(EDX));
  /* 104a96c7 call 0x104ab510 */
  push32(0x104a96ccu); f_104ab510();
  /* 104a96cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a96cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a96d1 jne 0x104a96df */
  if (!C.zf) goto L_104a96df;
L_104a96d3:;
  /* 104a96d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a96d6 push eax */
  push32((uint32_t)(EAX));
  /* 104a96d7 call 0x104ab440 */
  push32(0x104a96dcu); f_104ab440();
  /* 104a96dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a96df:;
  /* 104a96df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a96e2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104a96e5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 104a96eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a96ed je 0x104a97cb */
  if (C.zf) goto L_104a97cb;
L_104a96f3:;
  /* 104a96f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a96f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a96f9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 104a96fb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a96fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a9700 jge 0x104a9723 */
  if ((C.sf==C.of)) goto L_104a9723;
  /* 104a9702 push 0x104c9e40 */
  push32((uint32_t)(0x104c9e40u));
  /* 104a9707 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a9709 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 104a970e push 0x104c9e80 */
  push32((uint32_t)(0x104c9e80u));
  /* 104a9713 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a9715 call 0x104a1950 */
  push32(0x104a971au); f_104a1950();
  /* 104a971a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a971d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9720 jne 0x104a9723 */
  if (!C.zf) goto L_104a9723;
  /* 104a9722 int3  */
  x86_unimpl("int3 @ 0x104a9722");
L_104a9723:;
  /* 104a9723 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a9725 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a9727 jne 0x104a96f3 */
  if (!C.zf) goto L_104a96f3;
  /* 104a9729 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a972c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a972f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 104a9731 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a9734 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a9737 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a973a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104a973d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9740 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a9743 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104a9745 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a9748 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 104a974b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a974e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a9751 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104a9754 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9758 jle 0x104a9776 */
  if ((C.zf||C.sf!=C.of)) goto L_104a9776;
  /* 104a975a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a975d push ecx */
  push32((uint32_t)(ECX));
  /* 104a975e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a9761 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104a9764 push eax */
  push32((uint32_t)(EAX));
  /* 104a9765 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a9768 push ecx */
  push32((uint32_t)(ECX));
  /* 104a9769 call 0x104ab130 */
  push32(0x104a976eu); f_104ab130();
  /* 104a976e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9771 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104a9774 jmp 0x104a97be */
  goto L_104a97be;
L_104a9776:;
  /* 104a9776 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a977a je 0x104a9799 */
  if (C.zf) goto L_104a9799;
  /* 104a977c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a977f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 104a9782 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a9785 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 104a9788 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a978b mov ecx, dword ptr [edx*4 + 0x104cfe00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x104cfe00)));
  /* 104a9792 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9794 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104a9797 jmp 0x104a97a0 */
  goto L_104a97a0;
L_104a9799:;
  /* 104a9799 mov dword ptr [ebp - 0x14], 0x104cca60 */
  w32((uint32_t)(EBP + -0x14), (0x104cca60u));
L_104a97a0:;
  /* 104a97a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a97a3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 104a97a7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 104a97aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a97ac je 0x104a97be */
  if (C.zf) goto L_104a97be;
  /* 104a97ae push 2 */
  push32((uint32_t)(0x2u));
  /* 104a97b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a97b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a97b5 push ecx */
  push32((uint32_t)(ECX));
  /* 104a97b6 call 0x104aafe0 */
  push32(0x104a97bbu); f_104aafe0();
  /* 104a97bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a97be:;
  /* 104a97be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a97c1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104a97c4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 104a97c7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 104a97c9 jmp 0x104a97e9 */
  goto L_104a97e9;
L_104a97cb:;
  /* 104a97cb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104a97d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a97d5 push edx */
  push32((uint32_t)(EDX));
  /* 104a97d6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 104a97d9 push eax */
  push32((uint32_t)(EAX));
  /* 104a97da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a97dd push ecx */
  push32((uint32_t)(ECX));
  /* 104a97de call 0x104ab130 */
  push32(0x104a97e3u); f_104ab130();
  /* 104a97e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a97e6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_104a97e9:;
  /* 104a97e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a97ec cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a97ef je 0x104a9805 */
  if (C.zf) goto L_104a9805;
  /* 104a97f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a97f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104a97f7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 104a97fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a97fd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 104a9800 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a9803 jmp 0x104a980d */
  goto L_104a980d;
L_104a9805:;
  /* 104a9805 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a9808 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_104a980d:;
  /* 104a980d pop edi */
  EDI = (pop32());
  /* 104a980e pop esi */
  ESI = (pop32());
  /* 104a980f pop ebx */
  EBX = (pop32());
  /* 104a9810 mov esp, ebp */
  ESP = (EBP);
  /* 104a9812 pop ebp */
  EBP = (pop32());
  /* 104a9813 ret  */
  ESPCHK(0x104a95a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009820 @ 0x104a9820 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_104a9820(void) {
  FTRACE(0x104a9820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a9820 push ebp */
  push32((uint32_t)(EBP));
  /* 104a9821 mov ebp, esp */
  EBP = (ESP);
  /* 104a9823 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a9829 push ebx */
  push32((uint32_t)(EBX));
  /* 104a982a push esi */
  push32((uint32_t)(ESI));
  /* 104a982b push edi */
  push32((uint32_t)(EDI));
  /* 104a982c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104a9833 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 104a983d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_104a9844:;
  /* 104a9844 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a9847 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104a9849 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 104a984c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104a9850 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a9853 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9856 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 104a9859 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a985b je 0x104aa437 */
  if (C.zf) goto L_104aa437;
  /* 104a9861 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9868 jl 0x104aa437 */
  if ((C.sf!=C.of)) goto L_104aa437;
  /* 104a986e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104a9872 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9875 jl 0x104a9896 */
  if ((C.sf!=C.of)) goto L_104a9896;
  /* 104a9877 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104a987b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a987e jg 0x104a9896 */
  if ((!C.zf&&C.sf==C.of)) goto L_104a9896;
  /* 104a9880 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104a9884 movsx ecx, byte ptr [eax + 0x104c9e78] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x104c9e78))));
  /* 104a988b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 104a988e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 104a9894 jmp 0x104a98a0 */
  goto L_104a98a0;
L_104a9896:;
  /* 104a9896 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_104a98a0:;
  /* 104a98a0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 104a98a6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104a98a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a98ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a98af movsx edx, byte ptr [ecx + eax*8 + 0x104c9e98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x104c9e98))));
  /* 104a98b7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 104a98ba mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104a98bd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a98c0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 104a98c6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a98cd ja 0x104aa432 */
  if ((!C.cf&&!C.zf)) goto L_104aa432;
  /* 104a98d3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 104a98d9 jmp dword ptr [ecx*4 + 0x104aa444] */
  switch (ECX) {
    case 0: goto L_104a98e0;
    case 1: goto L_104a997a;
    case 2: goto L_104a99bc;
    case 3: goto L_104a9a2b;
    case 4: goto L_104a9a83;
    case 5: goto L_104a9a92;
    case 6: goto L_104a9ade;
    case 7: goto L_104a9b71;
    case 8: goto L_104a9a08;
    case 9: goto L_104a9a13;
    case 10: goto L_104a99fe;
    case 11: goto L_104a99f3;
    case 12: goto L_104a9a1e;
    case 13: goto L_104a9a26;
    default: x86_unimpl("switch@0x104a98d9 out of table"); return;
  }
L_104a98e0:;
  /* 104a98e0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 104a98e7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a98ea and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a98f0 mov eax, dword ptr [0x104ccc98] */
  EAX = (r32((uint32_t)(0x104ccc98)));
  /* 104a98f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a98f7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 104a98fb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 104a9901 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a9903 je 0x104a995d */
  if (C.zf) goto L_104a995d;
  /* 104a9905 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 104a990b push edx */
  push32((uint32_t)(EDX));
  /* 104a990c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a990f push eax */
  push32((uint32_t)(EAX));
  /* 104a9910 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104a9914 push ecx */
  push32((uint32_t)(ECX));
  /* 104a9915 call 0x104aa550 */
  push32(0x104a991au); f_104aa550();
  /* 104a991a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a991d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a9920 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104a9922 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 104a9925 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a9928 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a992b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_104a992e:;
  /* 104a992e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104a9932 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a9934 jne 0x104a9957 */
  if (!C.zf) goto L_104a9957;
  /* 104a9936 push 0x104c9f18 */
  push32((uint32_t)(0x104c9f18u));
  /* 104a993b push 0 */
  push32((uint32_t)(0x0u));
  /* 104a993d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 104a9942 push 0x104c9f0c */
  push32((uint32_t)(0x104c9f0cu));
  /* 104a9947 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a9949 call 0x104a1950 */
  push32(0x104a994eu); f_104a1950();
  /* 104a994e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9951 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9954 jne 0x104a9957 */
  if (!C.zf) goto L_104a9957;
  /* 104a9956 int3  */
  x86_unimpl("int3 @ 0x104a9956");
L_104a9957:;
  /* 104a9957 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a9959 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a995b jne 0x104a992e */
  if (!C.zf) goto L_104a992e;
L_104a995d:;
  /* 104a995d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 104a9963 push ecx */
  push32((uint32_t)(ECX));
  /* 104a9964 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a9967 push edx */
  push32((uint32_t)(EDX));
  /* 104a9968 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104a996c push eax */
  push32((uint32_t)(EAX));
  /* 104a996d call 0x104aa550 */
  push32(0x104a9972u); f_104aa550();
  /* 104a9972 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9975 jmp 0x104aa432 */
  goto L_104aa432;
L_104a997a:;
  /* 104a997a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104a9981 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a9984 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 104a998a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 104a9990 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 104a9996 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 104a999c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104a999f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104a99a6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 104a99b0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 104a99b7 jmp 0x104aa432 */
  goto L_104aa432;
L_104a99bc:;
  /* 104a99bc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104a99c0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 104a99c6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 104a99cc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a99cf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 104a99d5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a99dc ja 0x104a9a26 */
  if ((!C.cf&&!C.zf)) goto L_104a9a26;
  /* 104a99de mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 104a99e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a99e6 mov al, byte ptr [ecx + 0x104aa47c] */
  AL = (r8((uint32_t)(ECX + 0x104aa47c)));
  /* 104a99ec jmp dword ptr [eax*4 + 0x104aa464] */
  switch (EAX) {
    case 0: goto L_104a9a08;
    case 1: goto L_104a9a13;
    case 2: goto L_104a99fe;
    case 3: goto L_104a99f3;
    case 4: goto L_104a9a1e;
    case 5: goto L_104a9a26;
    default: x86_unimpl("switch@0x104a99ec out of table"); return;
  }
L_104a99f3:;
  /* 104a99f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a99f6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104a99f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a99fc jmp 0x104a9a26 */
  goto L_104a9a26;
L_104a99fe:;
  /* 104a99fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9a01 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 104a9a03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a9a06 jmp 0x104a9a26 */
  goto L_104a9a26;
L_104a9a08:;
  /* 104a9a08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9a0b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 104a9a0e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104a9a11 jmp 0x104a9a26 */
  goto L_104a9a26;
L_104a9a13:;
  /* 104a9a13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9a16 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 104a9a19 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a9a1c jmp 0x104a9a26 */
  goto L_104a9a26;
L_104a9a1e:;
  /* 104a9a1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9a21 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 104a9a23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a9a26:;
  /* 104a9a26 jmp 0x104aa432 */
  goto L_104aa432;
L_104a9a2b:;
  /* 104a9a2b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104a9a2f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9a32 jne 0x104a9a67 */
  if (!C.zf) goto L_104a9a67;
  /* 104a9a34 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 104a9a37 push edx */
  push32((uint32_t)(EDX));
  /* 104a9a38 call 0x104aa660 */
  push32(0x104a9a3du); f_104aa660();
  /* 104a9a3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9a40 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 104a9a46 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9a4d jge 0x104a9a65 */
  if ((C.sf==C.of)) goto L_104a9a65;
  /* 104a9a4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9a52 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 104a9a54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a9a57 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 104a9a5d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104a9a5f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_104a9a65:;
  /* 104a9a65 jmp 0x104a9a7e */
  goto L_104a9a7e;
L_104a9a67:;
  /* 104a9a67 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 104a9a6d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a9a70 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104a9a74 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 104a9a78 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_104a9a7e:;
  /* 104a9a7e jmp 0x104aa432 */
  goto L_104aa432;
L_104a9a83:;
  /* 104a9a83 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 104a9a8d jmp 0x104aa432 */
  goto L_104aa432;
L_104a9a92:;
  /* 104a9a92 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104a9a96 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9a99 jne 0x104a9ac2 */
  if (!C.zf) goto L_104a9ac2;
  /* 104a9a9b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 104a9a9e push eax */
  push32((uint32_t)(EAX));
  /* 104a9a9f call 0x104aa660 */
  push32(0x104a9aa4u); f_104aa660();
  /* 104a9aa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9aa7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 104a9aad cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9ab4 jge 0x104a9ac0 */
  if ((C.sf==C.of)) goto L_104a9ac0;
  /* 104a9ab6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_104a9ac0:;
  /* 104a9ac0 jmp 0x104a9ad9 */
  goto L_104a9ad9;
L_104a9ac2:;
  /* 104a9ac2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 104a9ac8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a9acb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104a9acf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 104a9ad3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_104a9ad9:;
  /* 104a9ad9 jmp 0x104aa432 */
  goto L_104aa432;
L_104a9ade:;
  /* 104a9ade movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104a9ae2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 104a9ae8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 104a9aee sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a9af1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 104a9af7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9afe ja 0x104a9b6c */
  if ((!C.cf&&!C.zf)) goto L_104a9b6c;
  /* 104a9b00 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 104a9b06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a9b08 mov al, byte ptr [ecx + 0x104aa4a1] */
  AL = (r8((uint32_t)(ECX + 0x104aa4a1)));
  /* 104a9b0e jmp dword ptr [eax*4 + 0x104aa48d] */
  switch (EAX) {
    case 0: goto L_104a9b20;
    case 1: goto L_104a9b59;
    case 2: goto L_104a9b15;
    case 3: goto L_104a9b63;
    case 4: goto L_104a9b6c;
    default: x86_unimpl("switch@0x104a9b0e out of table"); return;
  }
L_104a9b15:;
  /* 104a9b15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9b18 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 104a9b1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a9b1e jmp 0x104a9b6c */
  goto L_104a9b6c;
L_104a9b20:;
  /* 104a9b20 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a9b23 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104a9b26 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9b29 jne 0x104a9b4b */
  if (!C.zf) goto L_104a9b4b;
  /* 104a9b2b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a9b2e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 104a9b32 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9b35 jne 0x104a9b4b */
  if (!C.zf) goto L_104a9b4b;
  /* 104a9b37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a9b3a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9b3d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 104a9b40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9b43 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 104a9b46 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a9b49 jmp 0x104a9b57 */
  goto L_104a9b57;
L_104a9b4b:;
  /* 104a9b4b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 104a9b52 jmp 0x104a98e0 */
  goto L_104a98e0;
L_104a9b57:;
  /* 104a9b57 jmp 0x104a9b6c */
  goto L_104a9b6c;
L_104a9b59:;
  /* 104a9b59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9b5c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 104a9b5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a9b61 jmp 0x104a9b6c */
  goto L_104a9b6c;
L_104a9b63:;
  /* 104a9b63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9b66 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 104a9b69 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104a9b6c:;
  /* 104a9b6c jmp 0x104aa432 */
  goto L_104aa432;
L_104a9b71:;
  /* 104a9b71 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104a9b75 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 104a9b7b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 104a9b81 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a9b84 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 104a9b8a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9b91 ja 0x104aa257 */
  if ((!C.cf&&!C.zf)) goto L_104aa257;
  /* 104a9b97 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 104a9b9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a9b9f mov cl, byte ptr [edx + 0x104aa50c] */
  CL = (r8((uint32_t)(EDX + 0x104aa50c)));
  /* 104a9ba5 jmp dword ptr [ecx*4 + 0x104aa4d0] */
  switch (ECX) {
    case 0: goto L_104a9bac;
    case 1: goto L_104a9e40;
    case 2: goto L_104a9cd0;
    case 3: goto L_104a9f79;
    case 4: goto L_104a9c3b;
    case 5: goto L_104a9bc1;
    case 6: goto L_104a9f4b;
    case 7: goto L_104a9e50;
    case 8: goto L_104a9df5;
    case 9: goto L_104a9fc5;
    case 10: goto L_104a9f6f;
    case 11: goto L_104a9ce6;
    case 12: goto L_104a9f63;
    case 13: goto L_104a9f85;
    case 14: goto L_104aa257;
    default: x86_unimpl("switch@0x104a9ba5 out of table"); return;
  }
L_104a9bac:;
  /* 104a9bac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9baf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 104a9bb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a9bb6 jne 0x104a9bc1 */
  if (!C.zf) goto L_104a9bc1;
  /* 104a9bb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9bbb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 104a9bbe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104a9bc1:;
  /* 104a9bc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9bc4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 104a9bca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a9bcc je 0x104a9c07 */
  if (C.zf) goto L_104a9c07;
  /* 104a9bce lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 104a9bd1 push eax */
  push32((uint32_t)(EAX));
  /* 104a9bd2 call 0x104aa6a0 */
  push32(0x104a9bd7u); f_104aa6a0();
  /* 104a9bd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9bda mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 104a9bde mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 104a9be2 push ecx */
  push32((uint32_t)(ECX));
  /* 104a9be3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 104a9be9 push edx */
  push32((uint32_t)(EDX));
  /* 104a9bea call 0x104ab780 */
  push32(0x104a9befu); f_104ab780();
  /* 104a9bef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9bf2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104a9bf5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9bf9 jge 0x104a9c05 */
  if ((C.sf==C.of)) goto L_104a9c05;
  /* 104a9bfb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_104a9c05:;
  /* 104a9c05 jmp 0x104a9c2d */
  goto L_104a9c2d;
L_104a9c07:;
  /* 104a9c07 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 104a9c0a push eax */
  push32((uint32_t)(EAX));
  /* 104a9c0b call 0x104aa660 */
  push32(0x104a9c10u); f_104aa660();
  /* 104a9c10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9c13 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 104a9c1a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 104a9c20 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 104a9c26 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_104a9c2d:;
  /* 104a9c2d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 104a9c33 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104a9c36 jmp 0x104aa257 */
  goto L_104aa257;
L_104a9c3b:;
  /* 104a9c3b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 104a9c3e push eax */
  push32((uint32_t)(EAX));
  /* 104a9c3f call 0x104aa660 */
  push32(0x104a9c44u); f_104aa660();
  /* 104a9c44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9c47 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 104a9c4d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9c54 je 0x104a9c62 */
  if (C.zf) goto L_104a9c62;
  /* 104a9c56 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 104a9c5c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9c60 jne 0x104a9c7c */
  if (!C.zf) goto L_104a9c7c;
L_104a9c62:;
  /* 104a9c62 mov edx, dword ptr [0x104ccfb0] */
  EDX = (r32((uint32_t)(0x104ccfb0)));
  /* 104a9c68 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104a9c6b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a9c6e push eax */
  push32((uint32_t)(EAX));
  /* 104a9c6f call 0x104a56c0 */
  push32(0x104a9c74u); f_104a56c0();
  /* 104a9c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9c77 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104a9c7a jmp 0x104a9ccb */
  goto L_104a9ccb;
L_104a9c7c:;
  /* 104a9c7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9c7f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 104a9c85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a9c87 je 0x104a9cac */
  if (C.zf) goto L_104a9cac;
  /* 104a9c89 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 104a9c8f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104a9c92 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104a9c95 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 104a9c9b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 104a9c9e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 104a9ca0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 104a9ca3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 104a9caa jmp 0x104a9ccb */
  goto L_104a9ccb;
L_104a9cac:;
  /* 104a9cac mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 104a9cb3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 104a9cb9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a9cbc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 104a9cbf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 104a9cc5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 104a9cc8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_104a9ccb:;
  /* 104a9ccb jmp 0x104aa257 */
  goto L_104aa257;
L_104a9cd0:;
  /* 104a9cd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9cd3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 104a9cd9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a9cdb jne 0x104a9ce6 */
  if (!C.zf) goto L_104a9ce6;
  /* 104a9cdd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9ce0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 104a9ce3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104a9ce6:;
  /* 104a9ce6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9ced jne 0x104a9cfb */
  if (!C.zf) goto L_104a9cfb;
  /* 104a9cef mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 104a9cf9 jmp 0x104a9d07 */
  goto L_104a9d07;
L_104a9cfb:;
  /* 104a9cfb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 104a9d01 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_104a9d07:;
  /* 104a9d07 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 104a9d0d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 104a9d13 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 104a9d16 push edx */
  push32((uint32_t)(EDX));
  /* 104a9d17 call 0x104aa660 */
  push32(0x104a9d1cu); f_104aa660();
  /* 104a9d1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9d1f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104a9d22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9d25 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 104a9d2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a9d2c je 0x104a9d96 */
  if (C.zf) goto L_104a9d96;
  /* 104a9d2e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9d32 jne 0x104a9d3d */
  if (!C.zf) goto L_104a9d3d;
  /* 104a9d34 mov ecx, dword ptr [0x104ccfb4] */
  ECX = (r32((uint32_t)(0x104ccfb4)));
  /* 104a9d3a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_104a9d3d:;
  /* 104a9d3d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 104a9d44 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a9d47 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_104a9d4d:;
  /* 104a9d4d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 104a9d53 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 104a9d59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a9d5c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 104a9d62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a9d64 je 0x104a9d86 */
  if (C.zf) goto L_104a9d86;
  /* 104a9d66 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 104a9d6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a9d6e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 104a9d71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a9d73 je 0x104a9d86 */
  if (C.zf) goto L_104a9d86;
  /* 104a9d75 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 104a9d7b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9d7e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 104a9d84 jmp 0x104a9d4d */
  goto L_104a9d4d;
L_104a9d86:;
  /* 104a9d86 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 104a9d8c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a9d8f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 104a9d91 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 104a9d94 jmp 0x104a9df0 */
  goto L_104a9df0;
L_104a9d96:;
  /* 104a9d96 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9d9a jne 0x104a9da4 */
  if (!C.zf) goto L_104a9da4;
  /* 104a9d9c mov eax, dword ptr [0x104ccfb0] */
  EAX = (r32((uint32_t)(0x104ccfb0)));
  /* 104a9da1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_104a9da4:;
  /* 104a9da4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a9da7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_104a9dad:;
  /* 104a9dad mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 104a9db3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 104a9db9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a9dbc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 104a9dc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a9dc4 je 0x104a9de4 */
  if (C.zf) goto L_104a9de4;
  /* 104a9dc6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 104a9dcc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104a9dcf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a9dd1 je 0x104a9de4 */
  if (C.zf) goto L_104a9de4;
  /* 104a9dd3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 104a9dd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9ddc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 104a9de2 jmp 0x104a9dad */
  goto L_104a9dad;
L_104a9de4:;
  /* 104a9de4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 104a9dea sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a9ded mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_104a9df0:;
  /* 104a9df0 jmp 0x104aa257 */
  goto L_104aa257;
L_104a9df5:;
  /* 104a9df5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 104a9df8 push edx */
  push32((uint32_t)(EDX));
  /* 104a9df9 call 0x104aa660 */
  push32(0x104a9dfeu); f_104aa660();
  /* 104a9dfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9e01 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 104a9e07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9e0a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 104a9e0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a9e0f je 0x104a9e23 */
  if (C.zf) goto L_104a9e23;
  /* 104a9e11 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 104a9e17 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 104a9e1e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 104a9e21 jmp 0x104a9e31 */
  goto L_104a9e31;
L_104a9e23:;
  /* 104a9e23 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 104a9e29 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 104a9e2f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_104a9e31:;
  /* 104a9e31 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 104a9e3b jmp 0x104aa257 */
  goto L_104aa257;
L_104a9e40:;
  /* 104a9e40 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 104a9e47 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 104a9e4a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 104a9e4d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_104a9e50:;
  /* 104a9e50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9e53 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 104a9e55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a9e58 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 104a9e5e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 104a9e61 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9e68 jge 0x104a9e76 */
  if ((C.sf==C.of)) goto L_104a9e76;
  /* 104a9e6a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 104a9e74 jmp 0x104a9e92 */
  goto L_104a9e92;
L_104a9e76:;
  /* 104a9e76 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9e7d jne 0x104a9e92 */
  if (!C.zf) goto L_104a9e92;
  /* 104a9e7f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104a9e83 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9e86 jne 0x104a9e92 */
  if (!C.zf) goto L_104a9e92;
  /* 104a9e88 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_104a9e92:;
  /* 104a9e92 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a9e95 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9e98 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 104a9e9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a9e9e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a9ea1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a9ea3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a9ea6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 104a9eac mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 104a9eb2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a9eb5 push ecx */
  push32((uint32_t)(ECX));
  /* 104a9eb6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 104a9ebc push edx */
  push32((uint32_t)(EDX));
  /* 104a9ebd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104a9ec1 push eax */
  push32((uint32_t)(EAX));
  /* 104a9ec2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a9ec5 push ecx */
  push32((uint32_t)(ECX));
  /* 104a9ec6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 104a9ecc push edx */
  push32((uint32_t)(EDX));
  /* 104a9ecd call dword ptr [0x104cd3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104cd3a0))), 0x104a9ed3u);
  /* 104a9ed3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9ed6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9ed9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 104a9ede test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a9ee0 je 0x104a9ef8 */
  if (C.zf) goto L_104a9ef8;
  /* 104a9ee2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9ee9 jne 0x104a9ef8 */
  if (!C.zf) goto L_104a9ef8;
  /* 104a9eeb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a9eee push ecx */
  push32((uint32_t)(ECX));
  /* 104a9eef call dword ptr [0x104cd3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104cd3ac))), 0x104a9ef5u);
  /* 104a9ef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a9ef8:;
  /* 104a9ef8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104a9efc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9eff jne 0x104a9f1a */
  if (!C.zf) goto L_104a9f1a;
  /* 104a9f01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9f04 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 104a9f09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a9f0b jne 0x104a9f1a */
  if (!C.zf) goto L_104a9f1a;
  /* 104a9f0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a9f10 push ecx */
  push32((uint32_t)(ECX));
  /* 104a9f11 call dword ptr [0x104cd3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104cd3a4))), 0x104a9f17u);
  /* 104a9f17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a9f1a:;
  /* 104a9f1a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a9f1d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104a9f20 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a9f23 jne 0x104a9f37 */
  if (!C.zf) goto L_104a9f37;
  /* 104a9f25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9f28 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 104a9f2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104a9f2e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a9f31 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9f34 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_104a9f37:;
  /* 104a9f37 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a9f3a push eax */
  push32((uint32_t)(EAX));
  /* 104a9f3b call 0x104a56c0 */
  push32(0x104a9f40u); f_104a56c0();
  /* 104a9f40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9f43 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104a9f46 jmp 0x104aa257 */
  goto L_104aa257;
L_104a9f4b:;
  /* 104a9f4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9f4e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 104a9f51 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104a9f54 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 104a9f5e jmp 0x104a9fe5 */
  goto L_104a9fe5;
L_104a9f63:;
  /* 104a9f63 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 104a9f6d jmp 0x104a9fe5 */
  goto L_104a9fe5;
L_104a9f6f:;
  /* 104a9f6f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_104a9f79:;
  /* 104a9f79 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 104a9f83 jmp 0x104a9f8f */
  goto L_104a9f8f;
L_104a9f85:;
  /* 104a9f85 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_104a9f8f:;
  /* 104a9f8f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 104a9f99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9f9c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 104a9fa2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a9fa4 je 0x104a9fc3 */
  if (C.zf) goto L_104a9fc3;
  /* 104a9fa6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 104a9fad mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 104a9fb3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9fb6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 104a9fbc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_104a9fc3:;
  /* 104a9fc3 jmp 0x104a9fe5 */
  goto L_104a9fe5;
L_104a9fc5:;
  /* 104a9fc5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 104a9fcf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9fd2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 104a9fd8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a9fda je 0x104a9fe5 */
  if (C.zf) goto L_104a9fe5;
  /* 104a9fdc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9fdf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 104a9fe2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104a9fe5:;
  /* 104a9fe5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a9fe8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 104a9fed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a9fef je 0x104aa00e */
  if (C.zf) goto L_104aa00e;
  /* 104a9ff1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 104a9ff4 push ecx */
  push32((uint32_t)(ECX));
  /* 104a9ff5 call 0x104aa680 */
  push32(0x104a9ffau); f_104aa680();
  /* 104a9ffa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a9ffd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 104aa003 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 104aa009 jmp 0x104aa09f */
  goto L_104aa09f;
L_104aa00e:;
  /* 104aa00e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa011 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 104aa014 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104aa016 je 0x104aa060 */
  if (C.zf) goto L_104aa060;
  /* 104aa018 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa01b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 104aa01e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aa020 je 0x104aa040 */
  if (C.zf) goto L_104aa040;
  /* 104aa022 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 104aa025 push ecx */
  push32((uint32_t)(ECX));
  /* 104aa026 call 0x104aa660 */
  push32(0x104aa02bu); f_104aa660();
  /* 104aa02b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa02e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 104aa031 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104aa032 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 104aa038 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 104aa03e jmp 0x104aa05e */
  goto L_104aa05e;
L_104aa040:;
  /* 104aa040 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 104aa043 push edx */
  push32((uint32_t)(EDX));
  /* 104aa044 call 0x104aa660 */
  push32(0x104aa049u); f_104aa660();
  /* 104aa049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa04c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104aa051 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104aa052 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 104aa058 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_104aa05e:;
  /* 104aa05e jmp 0x104aa09f */
  goto L_104aa09f;
L_104aa060:;
  /* 104aa060 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa063 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 104aa066 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aa068 je 0x104aa085 */
  if (C.zf) goto L_104aa085;
  /* 104aa06a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 104aa06d push ecx */
  push32((uint32_t)(ECX));
  /* 104aa06e call 0x104aa660 */
  push32(0x104aa073u); f_104aa660();
  /* 104aa073 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa076 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104aa077 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 104aa07d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 104aa083 jmp 0x104aa09f */
  goto L_104aa09f;
L_104aa085:;
  /* 104aa085 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 104aa088 push edx */
  push32((uint32_t)(EDX));
  /* 104aa089 call 0x104aa660 */
  push32(0x104aa08eu); f_104aa660();
  /* 104aa08e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa091 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104aa093 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 104aa099 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_104aa09f:;
  /* 104aa09f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa0a2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 104aa0a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104aa0a7 je 0x104aa0e7 */
  if (C.zf) goto L_104aa0e7;
  /* 104aa0a9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa0b0 jg 0x104aa0e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_104aa0e7;
  /* 104aa0b2 jl 0x104aa0bd */
  if ((C.sf!=C.of)) goto L_104aa0bd;
  /* 104aa0b4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa0bb jae 0x104aa0e7 */
  if (!C.cf) goto L_104aa0e7;
L_104aa0bd:;
  /* 104aa0bd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 104aa0c3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104aa0c5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 104aa0cb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa0ce neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104aa0d0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 104aa0d6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 104aa0dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa0df or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 104aa0e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104aa0e5 jmp 0x104aa0ff */
  goto L_104aa0ff;
L_104aa0e7:;
  /* 104aa0e7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 104aa0ed mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 104aa0f3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 104aa0f9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_104aa0ff:;
  /* 104aa0ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa102 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 104aa108 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104aa10a jne 0x104aa127 */
  if (!C.zf) goto L_104aa127;
  /* 104aa10c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 104aa112 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 104aa118 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 104aa11b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 104aa121 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_104aa127:;
  /* 104aa127 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa12e jge 0x104aa13c */
  if ((C.sf==C.of)) goto L_104aa13c;
  /* 104aa130 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 104aa13a jmp 0x104aa145 */
  goto L_104aa145;
L_104aa13c:;
  /* 104aa13c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa13f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 104aa142 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104aa145:;
  /* 104aa145 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 104aa14b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 104aa151 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aa153 jne 0x104aa15c */
  if (!C.zf) goto L_104aa15c;
  /* 104aa155 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_104aa15c:;
  /* 104aa15c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 104aa15f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_104aa162:;
  /* 104aa162 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 104aa168 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 104aa16e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aa171 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 104aa177 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104aa179 jg 0x104aa18f */
  if ((!C.zf&&C.sf==C.of)) goto L_104aa18f;
  /* 104aa17b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 104aa181 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 104aa187 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104aa189 je 0x104aa210 */
  if (C.zf) goto L_104aa210;
L_104aa18f:;
  /* 104aa18f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 104aa195 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104aa196 push edx */
  push32((uint32_t)(EDX));
  /* 104aa197 push eax */
  push32((uint32_t)(EAX));
  /* 104aa198 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 104aa19e push edx */
  push32((uint32_t)(EDX));
  /* 104aa19f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 104aa1a5 push eax */
  push32((uint32_t)(EAX));
  /* 104aa1a6 call 0x104a9520 */
  push32(0x104aa1abu); f_104a9520();
  /* 104aa1ab add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa1ae mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 104aa1b4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 104aa1ba cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104aa1bb push edx */
  push32((uint32_t)(EDX));
  /* 104aa1bc push eax */
  push32((uint32_t)(EAX));
  /* 104aa1bd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 104aa1c3 push ecx */
  push32((uint32_t)(ECX));
  /* 104aa1c4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 104aa1ca push edx */
  push32((uint32_t)(EDX));
  /* 104aa1cb call 0x104a94b0 */
  push32(0x104aa1d0u); f_104a94b0();
  /* 104aa1d0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 104aa1d6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 104aa1dc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa1e3 jle 0x104aa1f7 */
  if ((C.zf||C.sf!=C.of)) goto L_104aa1f7;
  /* 104aa1e5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 104aa1eb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa1f1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_104aa1f7:;
  /* 104aa1f7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104aa1fa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 104aa200 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 104aa202 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104aa205 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aa208 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104aa20b jmp 0x104aa162 */
  goto L_104aa162;
L_104aa210:;
  /* 104aa210 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 104aa213 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aa216 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 104aa219 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104aa21c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa21f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104aa222 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa225 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 104aa22a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aa22c je 0x104aa257 */
  if (C.zf) goto L_104aa257;
  /* 104aa22e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104aa231 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104aa234 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa237 jne 0x104aa23f */
  if (!C.zf) goto L_104aa23f;
  /* 104aa239 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa23d jne 0x104aa257 */
  if (!C.zf) goto L_104aa257;
L_104aa23f:;
  /* 104aa23f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104aa242 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aa245 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104aa248 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104aa24b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 104aa24e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104aa251 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa254 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_104aa257:;
  /* 104aa257 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa25e jne 0x104aa432 */
  if (!C.zf) goto L_104aa432;
  /* 104aa264 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa267 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 104aa26a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aa26c je 0x104aa2bd */
  if (C.zf) goto L_104aa2bd;
  /* 104aa26e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa271 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 104aa277 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104aa279 je 0x104aa28b */
  if (C.zf) goto L_104aa28b;
  /* 104aa27b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 104aa282 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 104aa289 jmp 0x104aa2bd */
  goto L_104aa2bd;
L_104aa28b:;
  /* 104aa28b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa28e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104aa291 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104aa293 je 0x104aa2a5 */
  if (C.zf) goto L_104aa2a5;
  /* 104aa295 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 104aa29c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 104aa2a3 jmp 0x104aa2bd */
  goto L_104aa2bd;
L_104aa2a5:;
  /* 104aa2a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa2a8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 104aa2ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aa2ad je 0x104aa2bd */
  if (C.zf) goto L_104aa2bd;
  /* 104aa2af mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 104aa2b6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_104aa2bd:;
  /* 104aa2bd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 104aa2c3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aa2c6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aa2c9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 104aa2cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa2d2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 104aa2d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104aa2d7 jne 0x104aa2f5 */
  if (!C.zf) goto L_104aa2f5;
  /* 104aa2d9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 104aa2df push eax */
  push32((uint32_t)(EAX));
  /* 104aa2e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 104aa2e4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 104aa2ea push edx */
  push32((uint32_t)(EDX));
  /* 104aa2eb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 104aa2ed call 0x104aa5d0 */
  push32(0x104aa2f2u); f_104aa5d0();
  /* 104aa2f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104aa2f5:;
  /* 104aa2f5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 104aa2fb push eax */
  push32((uint32_t)(EAX));
  /* 104aa2fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa2ff push ecx */
  push32((uint32_t)(ECX));
  /* 104aa300 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104aa303 push edx */
  push32((uint32_t)(EDX));
  /* 104aa304 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 104aa30a push eax */
  push32((uint32_t)(EAX));
  /* 104aa30b call 0x104aa610 */
  push32(0x104aa310u); f_104aa610();
  /* 104aa310 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa313 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa316 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 104aa319 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104aa31b je 0x104aa343 */
  if (C.zf) goto L_104aa343;
  /* 104aa31d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa320 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104aa323 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104aa325 jne 0x104aa343 */
  if (!C.zf) goto L_104aa343;
  /* 104aa327 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 104aa32d push eax */
  push32((uint32_t)(EAX));
  /* 104aa32e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa331 push ecx */
  push32((uint32_t)(ECX));
  /* 104aa332 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 104aa338 push edx */
  push32((uint32_t)(EDX));
  /* 104aa339 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 104aa33b call 0x104aa5d0 */
  push32(0x104aa340u); f_104aa5d0();
  /* 104aa340 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104aa343:;
  /* 104aa343 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa347 je 0x104aa3f1 */
  if (C.zf) goto L_104aa3f1;
  /* 104aa34d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa351 jle 0x104aa3f1 */
  if ((C.zf||C.sf!=C.of)) goto L_104aa3f1;
  /* 104aa357 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104aa35a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 104aa360 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104aa363 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_104aa369:;
  /* 104aa369 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 104aa36f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 104aa375 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aa378 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 104aa37e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104aa380 je 0x104aa3ef */
  if (C.zf) goto L_104aa3ef;
  /* 104aa382 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 104aa388 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 104aa38b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 104aa392 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 104aa399 push eax */
  push32((uint32_t)(EAX));
  /* 104aa39a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 104aa3a0 push ecx */
  push32((uint32_t)(ECX));
  /* 104aa3a1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 104aa3a7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa3aa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 104aa3b0 call 0x104ab780 */
  push32(0x104aa3b5u); f_104ab780();
  /* 104aa3b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa3b8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 104aa3be cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa3c5 jg 0x104aa3c9 */
  if ((!C.zf&&C.sf==C.of)) goto L_104aa3c9;
  /* 104aa3c7 jmp 0x104aa3ef */
  goto L_104aa3ef;
L_104aa3c9:;
  /* 104aa3c9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 104aa3cf push eax */
  push32((uint32_t)(EAX));
  /* 104aa3d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa3d3 push ecx */
  push32((uint32_t)(ECX));
  /* 104aa3d4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 104aa3da push edx */
  push32((uint32_t)(EDX));
  /* 104aa3db lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 104aa3e1 push eax */
  push32((uint32_t)(EAX));
  /* 104aa3e2 call 0x104aa610 */
  push32(0x104aa3e7u); f_104aa610();
  /* 104aa3e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa3ea jmp 0x104aa369 */
  goto L_104aa369;
L_104aa3ef:;
  /* 104aa3ef jmp 0x104aa40c */
  goto L_104aa40c;
L_104aa3f1:;
  /* 104aa3f1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 104aa3f7 push ecx */
  push32((uint32_t)(ECX));
  /* 104aa3f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa3fb push edx */
  push32((uint32_t)(EDX));
  /* 104aa3fc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104aa3ff push eax */
  push32((uint32_t)(EAX));
  /* 104aa400 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104aa403 push ecx */
  push32((uint32_t)(ECX));
  /* 104aa404 call 0x104aa610 */
  push32(0x104aa409u); f_104aa610();
  /* 104aa409 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104aa40c:;
  /* 104aa40c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa40f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104aa412 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104aa414 je 0x104aa432 */
  if (C.zf) goto L_104aa432;
  /* 104aa416 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 104aa41c push eax */
  push32((uint32_t)(EAX));
  /* 104aa41d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa420 push ecx */
  push32((uint32_t)(ECX));
  /* 104aa421 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 104aa427 push edx */
  push32((uint32_t)(EDX));
  /* 104aa428 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 104aa42a call 0x104aa5d0 */
  push32(0x104aa42fu); f_104aa5d0();
  /* 104aa42f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104aa432:;
  /* 104aa432 jmp 0x104a9844 */
  goto L_104a9844;
L_104aa437:;
  /* 104aa437 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 104aa43d pop edi */
  EDI = (pop32());
  /* 104aa43e pop esi */
  ESI = (pop32());
  /* 104aa43f pop ebx */
  EBX = (pop32());
  /* 104aa440 mov esp, ebp */
  ESP = (EBP);
  /* 104aa442 pop ebp */
  EBP = (pop32());
  /* 104aa443 ret  */
  ESPCHK(0x104a9820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a550 @ 0x104aa550 (119 bytes, 44 insns) */
void f_104aa550(void) {
  FTRACE(0x104aa550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aa550 push ebp */
  push32((uint32_t)(EBP));
  /* 104aa551 mov ebp, esp */
  EBP = (ESP);
  /* 104aa553 push ecx */
  push32((uint32_t)(ECX));
  /* 104aa554 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aa557 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104aa55a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aa55d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aa560 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 104aa563 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aa566 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa56a jl 0x104aa592 */
  if ((C.sf!=C.of)) goto L_104aa592;
  /* 104aa56c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aa56f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104aa571 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 104aa574 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 104aa576 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 104aa57a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104aa580 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104aa583 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aa586 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104aa588 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa58b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aa58e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104aa590 jmp 0x104aa5a5 */
  goto L_104aa5a5;
L_104aa592:;
  /* 104aa592 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aa595 push edx */
  push32((uint32_t)(EDX));
  /* 104aa596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa599 push eax */
  push32((uint32_t)(EAX));
  /* 104aa59a call 0x104a95a0 */
  push32(0x104aa59fu); f_104a95a0();
  /* 104aa59f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa5a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104aa5a5:;
  /* 104aa5a5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa5a9 jne 0x104aa5b6 */
  if (!C.zf) goto L_104aa5b6;
  /* 104aa5ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104aa5ae mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 104aa5b4 jmp 0x104aa5c3 */
  goto L_104aa5c3;
L_104aa5b6:;
  /* 104aa5b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104aa5b9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104aa5bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa5be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104aa5c1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_104aa5c3:;
  /* 104aa5c3 mov esp, ebp */
  ESP = (EBP);
  /* 104aa5c5 pop ebp */
  EBP = (pop32());
  /* 104aa5c6 ret  */
  ESPCHK(0x104aa550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5d0 @ 0x104aa5d0 (53 bytes, 23 insns) */
void f_104aa5d0(void) {
  FTRACE(0x104aa5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aa5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104aa5d1 mov ebp, esp */
  EBP = (ESP);
L_104aa5d3:;
  /* 104aa5d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aa5d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aa5d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aa5dc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 104aa5df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aa5e1 jle 0x104aa603 */
  if ((C.zf||C.sf!=C.of)) goto L_104aa603;
  /* 104aa5e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104aa5e6 push edx */
  push32((uint32_t)(EDX));
  /* 104aa5e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104aa5ea push eax */
  push32((uint32_t)(EAX));
  /* 104aa5eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa5ee push ecx */
  push32((uint32_t)(ECX));
  /* 104aa5ef call 0x104aa550 */
  push32(0x104aa5f4u); f_104aa550();
  /* 104aa5f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa5f7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104aa5fa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa5fd jne 0x104aa601 */
  if (!C.zf) goto L_104aa601;
  /* 104aa5ff jmp 0x104aa603 */
  goto L_104aa603;
L_104aa601:;
  /* 104aa601 jmp 0x104aa5d3 */
  goto L_104aa5d3;
L_104aa603:;
  /* 104aa603 pop ebp */
  EBP = (pop32());
  /* 104aa604 ret  */
  ESPCHK(0x104aa5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a610 @ 0x104aa610 (74 bytes, 31 insns) */
void f_104aa610(void) {
  FTRACE(0x104aa610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aa610 push ebp */
  push32((uint32_t)(EBP));
  /* 104aa611 mov ebp, esp */
  EBP = (ESP);
  /* 104aa613 push ecx */
  push32((uint32_t)(ECX));
L_104aa614:;
  /* 104aa614 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aa617 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aa61a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aa61d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 104aa620 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aa622 jle 0x104aa656 */
  if ((C.zf||C.sf!=C.of)) goto L_104aa656;
  /* 104aa624 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104aa627 push edx */
  push32((uint32_t)(EDX));
  /* 104aa628 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104aa62b push eax */
  push32((uint32_t)(EAX));
  /* 104aa62c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa62f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104aa632 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104aa635 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa638 push eax */
  push32((uint32_t)(EAX));
  /* 104aa639 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa63c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa63f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 104aa642 call 0x104aa550 */
  push32(0x104aa647u); f_104aa550();
  /* 104aa647 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa64a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104aa64d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa650 jne 0x104aa654 */
  if (!C.zf) goto L_104aa654;
  /* 104aa652 jmp 0x104aa656 */
  goto L_104aa656;
L_104aa654:;
  /* 104aa654 jmp 0x104aa614 */
  goto L_104aa614;
L_104aa656:;
  /* 104aa656 mov esp, ebp */
  ESP = (EBP);
  /* 104aa658 pop ebp */
  EBP = (pop32());
  /* 104aa659 ret  */
  ESPCHK(0x104aa610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a660 @ 0x104aa660 (26 bytes, 12 insns) */
void f_104aa660(void) {
  FTRACE(0x104aa660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aa660 push ebp */
  push32((uint32_t)(EBP));
  /* 104aa661 mov ebp, esp */
  EBP = (ESP);
  /* 104aa663 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa666 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104aa668 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa66b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa66e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104aa670 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa673 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104aa675 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 104aa678 pop ebp */
  EBP = (pop32());
  /* 104aa679 ret  */
  ESPCHK(0x104aa660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a680 @ 0x104aa680 (31 bytes, 14 insns) */
void f_104aa680(void) {
  FTRACE(0x104aa680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aa680 push ebp */
  push32((uint32_t)(EBP));
  /* 104aa681 mov ebp, esp */
  EBP = (ESP);
  /* 104aa683 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa686 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104aa688 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa68b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa68e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104aa690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa693 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104aa695 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aa698 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 104aa69a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104aa69d pop ebp */
  EBP = (pop32());
  /* 104aa69e ret  */
  ESPCHK(0x104aa680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6a0 @ 0x104aa6a0 (27 bytes, 12 insns) */
void f_104aa6a0(void) {
  FTRACE(0x104aa6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aa6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104aa6a1 mov ebp, esp */
  EBP = (ESP);
  /* 104aa6a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa6a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104aa6a8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa6ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa6ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104aa6b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa6b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104aa6b5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 104aa6b9 pop ebp */
  EBP = (pop32());
  /* 104aa6ba ret  */
  ESPCHK(0x104aa6a0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x104aa6c0 (145 bytes, 42 insns) */
void f_104aa6c0(void) {
  FTRACE(0x104aa6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aa6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104aa6c1 mov ebp, esp */
  EBP = (ESP);
  /* 104aa6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 104aa6c4 call 0x104aa770 */
  push32(0x104aa6c9u); f_104aa770();
  /* 104aa6c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa6cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104aa6ce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104aa6d5 jmp 0x104aa6e0 */
  goto L_104aa6e0;
L_104aa6d7:;
  /* 104aa6d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa6da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa6dd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104aa6e0:;
  /* 104aa6e0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa6e4 jae 0x104aa70a */
  if (!C.cf) goto L_104aa70a;
  /* 104aa6e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa6e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa6ec cmp ecx, dword ptr [eax*8 + 0x104ccfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x104ccfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa6f3 jne 0x104aa708 */
  if (!C.zf) goto L_104aa708;
  /* 104aa6f5 call 0x104aa760 */
  push32(0x104aa6fau); f_104aa760();
  /* 104aa6fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aa6fd mov ecx, dword ptr [edx*8 + 0x104ccfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x104ccfbc)));
  /* 104aa704 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104aa706 jmp 0x104aa74d */
  goto L_104aa74d;
L_104aa708:;
  /* 104aa708 jmp 0x104aa6d7 */
  goto L_104aa6d7;
L_104aa70a:;
  /* 104aa70a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa70e jb 0x104aa723 */
  if (C.cf) goto L_104aa723;
  /* 104aa710 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa714 ja 0x104aa723 */
  if ((!C.cf&&!C.zf)) goto L_104aa723;
  /* 104aa716 call 0x104aa760 */
  push32(0x104aa71bu); f_104aa760();
  /* 104aa71b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 104aa721 jmp 0x104aa74d */
  goto L_104aa74d;
L_104aa723:;
  /* 104aa723 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa72a jb 0x104aa742 */
  if (C.cf) goto L_104aa742;
  /* 104aa72c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa733 ja 0x104aa742 */
  if ((!C.cf&&!C.zf)) goto L_104aa742;
  /* 104aa735 call 0x104aa760 */
  push32(0x104aa73au); f_104aa760();
  /* 104aa73a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 104aa740 jmp 0x104aa74d */
  goto L_104aa74d;
L_104aa742:;
  /* 104aa742 call 0x104aa760 */
  push32(0x104aa747u); f_104aa760();
  /* 104aa747 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_104aa74d:;
  /* 104aa74d mov esp, ebp */
  ESP = (EBP);
  /* 104aa74f pop ebp */
  EBP = (pop32());
  /* 104aa750 ret  */
  ESPCHK(0x104aa6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a760 @ 0x104aa760 (13 bytes, 6 insns) */
void f_104aa760(void) {
  FTRACE(0x104aa760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aa760 push ebp */
  push32((uint32_t)(EBP));
  /* 104aa761 mov ebp, esp */
  EBP = (ESP);
  /* 104aa763 call 0x104a22d0 */
  push32(0x104aa768u); f_104a22d0();
  /* 104aa768 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa76b pop ebp */
  EBP = (pop32());
  /* 104aa76c ret  */
  ESPCHK(0x104aa760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a770 @ 0x104aa770 (13 bytes, 6 insns) */
void f_104aa770(void) {
  FTRACE(0x104aa770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aa770 push ebp */
  push32((uint32_t)(EBP));
  /* 104aa771 mov ebp, esp */
  EBP = (ESP);
  /* 104aa773 call 0x104a22d0 */
  push32(0x104aa778u); f_104a22d0();
  /* 104aa778 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa77b pop ebp */
  EBP = (pop32());
  /* 104aa77c ret  */
  ESPCHK(0x104aa770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a780 @ 0x104aa780 (664 bytes, 264 insns) [15 switch table(s)] */
void f_104aa780(void) {
  FTRACE(0x104aa780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aa780 push ebp */
  push32((uint32_t)(EBP));
  /* 104aa781 mov ebp, esp */
  EBP = (ESP);
  /* 104aa783 push edi */
  push32((uint32_t)(EDI));
  /* 104aa784 push esi */
  push32((uint32_t)(ESI));
  /* 104aa785 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 104aa788 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104aa78b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa78e mov eax, ecx */
  EAX = (ECX);
  /* 104aa790 mov edx, ecx */
  EDX = (ECX);
  /* 104aa792 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa794 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa796 jbe 0x104aa7a0 */
  if ((C.cf||C.zf)) goto L_104aa7a0;
  /* 104aa798 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa79a jb 0x104aa918 */
  if (C.cf) goto L_104aa918;
L_104aa7a0:;
  /* 104aa7a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 104aa7a6 jne 0x104aa7bc */
  if (!C.zf) goto L_104aa7bc;
  /* 104aa7a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104aa7ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 104aa7ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa7b1 jb 0x104aa7dc */
  if (C.cf) goto L_104aa7dc;
  /* 104aa7b3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104aa7b5 jmp dword ptr [edx*4 + 0x104aa8c8] */
  switch (EDX) {
    case 0: goto L_104aa8d8;
    case 1: goto L_104aa8e0;
    case 2: goto L_104aa8ec;
    case 3: goto L_104aa900;
    default: x86_unimpl("switch@0x104aa7b5 out of table"); return;
  }
L_104aa7bc:;
  /* 104aa7bc mov eax, edi */
  EAX = (EDI);
  /* 104aa7be mov edx, 3 */
  EDX = (0x3u);
  /* 104aa7c3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aa7c6 jb 0x104aa7d4 */
  if (C.cf) goto L_104aa7d4;
  /* 104aa7c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 104aa7cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa7cd jmp dword ptr [eax*4 + 0x104aa7e0] */
  switch (EAX) {
    case 1: goto L_104aa7f0;
    case 2: goto L_104aa81c;
    case 3: goto L_104aa840;
    default: x86_unimpl("switch@0x104aa7cd out of table"); return;
  }
L_104aa7d4:;
  /* 104aa7d4 jmp dword ptr [ecx*4 + 0x104aa8d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x104aa8d8)))); return;
  /* 104aa7db nop  */
  /* nop */
L_104aa7dc:;
  /* 104aa7dc jmp dword ptr [ecx*4 + 0x104aa85c] */
  switch (ECX) {
    case 0: goto L_104aa8bf;
    case 1: goto L_104aa8ac;
    case 2: goto L_104aa8a4;
    case 3: goto L_104aa89c;
    case 4: goto L_104aa894;
    case 5: goto L_104aa88c;
    case 6: goto L_104aa884;
    case 7: goto L_104aa87c;
    default: x86_unimpl("switch@0x104aa7dc out of table"); return;
  }
  /* 104aa7e3 nop  */
  /* nop */
L_104aa7f0:;
  /* 104aa7f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104aa7f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104aa7f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104aa7f6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104aa7f9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104aa7fc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104aa7ff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104aa802 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104aa805 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa808 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa80b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa80e jb 0x104aa7dc */
  if (C.cf) goto L_104aa7dc;
  /* 104aa810 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104aa812 jmp dword ptr [edx*4 + 0x104aa8c8] */
  switch (EDX) {
    case 0: goto L_104aa8d8;
    case 1: goto L_104aa8e0;
    case 2: goto L_104aa8ec;
    case 3: goto L_104aa900;
    default: x86_unimpl("switch@0x104aa812 out of table"); return;
  }
  /* 104aa819 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104aa81c:;
  /* 104aa81c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104aa81e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104aa820 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104aa822 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104aa825 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104aa828 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104aa82b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa82e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa831 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa834 jb 0x104aa7dc */
  if (C.cf) goto L_104aa7dc;
  /* 104aa836 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104aa838 jmp dword ptr [edx*4 + 0x104aa8c8] */
  switch (EDX) {
    case 0: goto L_104aa8d8;
    case 1: goto L_104aa8e0;
    case 2: goto L_104aa8ec;
    case 3: goto L_104aa900;
    default: x86_unimpl("switch@0x104aa838 out of table"); return;
  }
  /* 104aa83f nop  */
  /* nop */
L_104aa840:;
  /* 104aa840 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104aa842 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104aa844 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104aa846 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104aa847 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104aa84a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104aa84b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa84e jb 0x104aa7dc */
  if (C.cf) goto L_104aa7dc;
  /* 104aa850 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104aa852 jmp dword ptr [edx*4 + 0x104aa8c8] */
  switch (EDX) {
    case 0: goto L_104aa8d8;
    case 1: goto L_104aa8e0;
    case 2: goto L_104aa8ec;
    case 3: goto L_104aa900;
    default: x86_unimpl("switch@0x104aa852 out of table"); return;
  }
  /* 104aa859 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104aa87c:;
  /* 104aa87c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 104aa880 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_104aa884:;
  /* 104aa884 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 104aa888 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_104aa88c:;
  /* 104aa88c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 104aa890 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_104aa894:;
  /* 104aa894 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 104aa898 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_104aa89c:;
  /* 104aa89c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 104aa8a0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_104aa8a4:;
  /* 104aa8a4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 104aa8a8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_104aa8ac:;
  /* 104aa8ac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 104aa8b0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 104aa8b4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 104aa8bb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104aa8bd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_104aa8bf:;
  /* 104aa8bf jmp dword ptr [edx*4 + 0x104aa8c8] */
  switch (EDX) {
    case 0: goto L_104aa8d8;
    case 1: goto L_104aa8e0;
    case 2: goto L_104aa8ec;
    case 3: goto L_104aa900;
    default: x86_unimpl("switch@0x104aa8bf out of table"); return;
  }
  /* 104aa8c6 mov edi, edi */
  EDI = (EDI);
L_104aa8d8:;
  /* 104aa8d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa8db pop esi */
  ESI = (pop32());
  /* 104aa8dc pop edi */
  EDI = (pop32());
  /* 104aa8dd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104aa8de ret  */
  ESPCHK(0x104aa780u, _esp0);
  ESP += 4; return;
  /* 104aa8df nop  */
  /* nop */
L_104aa8e0:;
  /* 104aa8e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104aa8e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104aa8e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa8e7 pop esi */
  ESI = (pop32());
  /* 104aa8e8 pop edi */
  EDI = (pop32());
  /* 104aa8e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104aa8ea ret  */
  ESPCHK(0x104aa780u, _esp0);
  ESP += 4; return;
  /* 104aa8eb nop  */
  /* nop */
L_104aa8ec:;
  /* 104aa8ec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104aa8ee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104aa8f0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104aa8f3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104aa8f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa8f9 pop esi */
  ESI = (pop32());
  /* 104aa8fa pop edi */
  EDI = (pop32());
  /* 104aa8fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104aa8fc ret  */
  ESPCHK(0x104aa780u, _esp0);
  ESP += 4; return;
  /* 104aa8fd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104aa900:;
  /* 104aa900 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104aa902 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104aa904 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104aa907 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104aa90a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104aa90d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104aa910 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aa913 pop esi */
  ESI = (pop32());
  /* 104aa914 pop edi */
  EDI = (pop32());
  /* 104aa915 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104aa916 ret  */
  ESPCHK(0x104aa780u, _esp0);
  ESP += 4; return;
  /* 104aa917 nop  */
  /* nop */
L_104aa918:;
  /* 104aa918 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 104aa91c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 104aa920 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 104aa926 jne 0x104aa94c */
  if (!C.zf) goto L_104aa94c;
  /* 104aa928 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104aa92b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 104aa92e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa931 jb 0x104aa940 */
  if (C.cf) goto L_104aa940;
  /* 104aa933 std  */
  C.df=1;
  /* 104aa934 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104aa936 cld  */
  C.df=0;
  /* 104aa937 jmp dword ptr [edx*4 + 0x104aaa60] */
  switch (EDX) {
    case 0: goto L_104aaa70;
    case 1: goto L_104aaa78;
    case 2: goto L_104aaa88;
    case 3: goto L_104aaa9c;
    default: x86_unimpl("switch@0x104aa937 out of table"); return;
  }
  /* 104aa93e mov edi, edi */
  EDI = (EDI);
L_104aa940:;
  /* 104aa940 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104aa942 jmp dword ptr [ecx*4 + 0x104aaa10] */
  switch (ECX) {
    case 0: goto L_104aaa57;
    default: x86_unimpl("switch@0x104aa942 out of table"); return;
  }
  /* 104aa949 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104aa94c:;
  /* 104aa94c mov eax, edi */
  EAX = (EDI);
  /* 104aa94e mov edx, 3 */
  EDX = (0x3u);
  /* 104aa953 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa956 jb 0x104aa964 */
  if (C.cf) goto L_104aa964;
  /* 104aa958 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 104aa95b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aa95d jmp dword ptr [eax*4 + 0x104aa968] */
  switch (EAX) {
    case 1: goto L_104aa978;
    case 2: goto L_104aa998;
    case 3: goto L_104aa9c0;
    default: x86_unimpl("switch@0x104aa95d out of table"); return;
  }
L_104aa964:;
  /* 104aa964 jmp dword ptr [ecx*4 + 0x104aaa60] */
  switch (ECX) {
    case 0: goto L_104aaa70;
    case 1: goto L_104aaa78;
    case 2: goto L_104aaa88;
    case 3: goto L_104aaa9c;
    default: x86_unimpl("switch@0x104aa964 out of table"); return;
  }
  /* 104aa96b nop  */
  /* nop */
L_104aa978:;
  /* 104aa978 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104aa97b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104aa97d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104aa980 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 104aa981 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104aa984 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 104aa985 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa988 jb 0x104aa940 */
  if (C.cf) goto L_104aa940;
  /* 104aa98a std  */
  C.df=1;
  /* 104aa98b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104aa98d cld  */
  C.df=0;
  /* 104aa98e jmp dword ptr [edx*4 + 0x104aaa60] */
  switch (EDX) {
    case 0: goto L_104aaa70;
    case 1: goto L_104aaa78;
    case 2: goto L_104aaa88;
    case 3: goto L_104aaa9c;
    default: x86_unimpl("switch@0x104aa98e out of table"); return;
  }
  /* 104aa995 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104aa998:;
  /* 104aa998 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104aa99b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104aa99d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104aa9a0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104aa9a3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104aa9a6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104aa9a9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aa9ac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aa9af cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa9b2 jb 0x104aa940 */
  if (C.cf) goto L_104aa940;
  /* 104aa9b4 std  */
  C.df=1;
  /* 104aa9b5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104aa9b7 cld  */
  C.df=0;
  /* 104aa9b8 jmp dword ptr [edx*4 + 0x104aaa60] */
  switch (EDX) {
    case 0: goto L_104aaa70;
    case 1: goto L_104aaa78;
    case 2: goto L_104aaa88;
    case 3: goto L_104aaa9c;
    default: x86_unimpl("switch@0x104aa9b8 out of table"); return;
  }
  /* 104aa9bf nop  */
  /* nop */
L_104aa9c0:;
  /* 104aa9c0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104aa9c3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104aa9c5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104aa9c8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104aa9cb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104aa9ce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104aa9d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104aa9d4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104aa9d7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aa9da sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aa9dd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aa9e0 jb 0x104aa940 */
  if (C.cf) goto L_104aa940;
  /* 104aa9e6 std  */
  C.df=1;
  /* 104aa9e7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104aa9e9 cld  */
  C.df=0;
  /* 104aa9ea jmp dword ptr [edx*4 + 0x104aaa60] */
  switch (EDX) {
    case 0: goto L_104aaa70;
    case 1: goto L_104aaa78;
    case 2: goto L_104aaa88;
    case 3: goto L_104aaa9c;
    default: x86_unimpl("switch@0x104aa9ea out of table"); return;
  }
  /* 104aa9f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 104aa9f4 adc al, 0xaa */
  { uint32_t _a=(AL),_b=(0xaau),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104aa9f6 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 104aa9f7 adc byte ptr [edx + ebp*4], bl */
  { uint32_t _a=(r8((uint32_t)(EDX + EBP*4))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBP*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 104aa9fa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 104aa9fb adc byte ptr [edx + ebp*4], ah */
  { uint32_t _a=(r8((uint32_t)(EDX + EBP*4))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBP*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 104aa9fe dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 104aa9ff adc byte ptr [edx + ebp*4], ch */
  { uint32_t _a=(r8((uint32_t)(EDX + EBP*4))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBP*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 104aaa02 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 104aaa03 adc byte ptr [edx + ebp*4], dh */
  { uint32_t _a=(r8((uint32_t)(EDX + EBP*4))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBP*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 104aaa06 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 104aaa07 adc byte ptr [edx + ebp*4], bh */
  { uint32_t _a=(r8((uint32_t)(EDX + EBP*4))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBP*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 104aaa0a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 104aaa0b adc byte ptr [edx + ebp*4 + 0x4a], al */
  { uint32_t _a=(r8((uint32_t)(EDX + EBP*4 + 0x4a))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBP*4 + 0x4a), (_r)); fl_add(_a,_b,_r,8); }
  /* 104aaa14 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 104aaa18 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 104aaa1c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 104aaa20 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 104aaa24 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 104aaa28 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 104aaa2c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 104aaa30 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 104aaa34 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 104aaa38 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 104aaa3c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 104aaa40 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 104aaa44 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 104aaa48 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 104aaa4c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 104aaa53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104aaa55 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_104aaa57:;
  /* 104aaa57 jmp dword ptr [edx*4 + 0x104aaa60] */
  switch (EDX) {
    case 0: goto L_104aaa70;
    case 1: goto L_104aaa78;
    case 2: goto L_104aaa88;
    case 3: goto L_104aaa9c;
    default: x86_unimpl("switch@0x104aaa57 out of table"); return;
  }
  /* 104aaa5e mov edi, edi */
  EDI = (EDI);
L_104aaa70:;
  /* 104aaa70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aaa73 pop esi */
  ESI = (pop32());
  /* 104aaa74 pop edi */
  EDI = (pop32());
  /* 104aaa75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104aaa76 ret  */
  ESPCHK(0x104aa780u, _esp0);
  ESP += 4; return;
  /* 104aaa77 nop  */
  /* nop */
L_104aaa78:;
  /* 104aaa78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104aaa7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104aaa7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aaa81 pop esi */
  ESI = (pop32());
  /* 104aaa82 pop edi */
  EDI = (pop32());
  /* 104aaa83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104aaa84 ret  */
  ESPCHK(0x104aa780u, _esp0);
  ESP += 4; return;
  /* 104aaa85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104aaa88:;
  /* 104aaa88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104aaa8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104aaa8e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104aaa91 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104aaa94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aaa97 pop esi */
  ESI = (pop32());
  /* 104aaa98 pop edi */
  EDI = (pop32());
  /* 104aaa99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104aaa9a ret  */
  ESPCHK(0x104aa780u, _esp0);
  ESP += 4; return;
  /* 104aaa9b nop  */
  /* nop */
L_104aaa9c:;
  /* 104aaa9c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104aaa9f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104aaaa2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104aaaa5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104aaaa8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104aaaab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104aaaae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aaab1 pop esi */
  ESI = (pop32());
  /* 104aaab2 pop edi */
  EDI = (pop32());
  /* 104aaab3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104aaab4 ret  */
  ESPCHK(0x104aa780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aac0 @ 0x104aaac0 (421 bytes, 148 insns) */
void f_104aaac0(void) {
  FTRACE(0x104aaac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aaac0 push ebp */
  push32((uint32_t)(EBP));
  /* 104aaac1 mov ebp, esp */
  EBP = (ESP);
  /* 104aaac3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104aaac5 push 0x104c9f30 */
  push32((uint32_t)(0x104c9f30u));
  /* 104aaaca push 0x104ab998 */
  push32((uint32_t)(0x104ab998u));
  /* 104aaacf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 104aaad5 push eax */
  push32((uint32_t)(EAX));
  /* 104aaad6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 104aaadd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aaae0 push ebx */
  push32((uint32_t)(EBX));
  /* 104aaae1 push esi */
  push32((uint32_t)(ESI));
  /* 104aaae2 push edi */
  push32((uint32_t)(EDI));
  /* 104aaae3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104aaae6 cmp dword ptr [0x104ce614], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce614))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aaaed jne 0x104aab3e */
  if (!C.zf) goto L_104aab3e;
  /* 104aaaef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 104aaaf2 push eax */
  push32((uint32_t)(EAX));
  /* 104aaaf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104aaaf5 push 0x104c9f2c */
  push32((uint32_t)(0x104c9f2cu));
  /* 104aaafa push 1 */
  push32((uint32_t)(0x1u));
  /* 104aaafc call dword ptr [0x104d031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d031c))), 0x104aab02u);
  /* 104aab02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aab04 je 0x104aab12 */
  if (C.zf) goto L_104aab12;
  /* 104aab06 mov dword ptr [0x104ce614], 1 */
  w32((uint32_t)(0x104ce614), (0x1u));
  /* 104aab10 jmp 0x104aab3e */
  goto L_104aab3e;
L_104aab12:;
  /* 104aab12 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 104aab15 push ecx */
  push32((uint32_t)(ECX));
  /* 104aab16 push 1 */
  push32((uint32_t)(0x1u));
  /* 104aab18 push 0x104c9f28 */
  push32((uint32_t)(0x104c9f28u));
  /* 104aab1d push 1 */
  push32((uint32_t)(0x1u));
  /* 104aab1f push 0 */
  push32((uint32_t)(0x0u));
  /* 104aab21 call dword ptr [0x104d0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0318))), 0x104aab27u);
  /* 104aab27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aab29 je 0x104aab37 */
  if (C.zf) goto L_104aab37;
  /* 104aab2b mov dword ptr [0x104ce614], 2 */
  w32((uint32_t)(0x104ce614), (0x2u));
  /* 104aab35 jmp 0x104aab3e */
  goto L_104aab3e;
L_104aab37:;
  /* 104aab37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104aab39 jmp 0x104aac68 */
  goto L_104aac68;
L_104aab3e:;
  /* 104aab3e cmp dword ptr [0x104ce614], 2 */
  { uint32_t _a=(r32((uint32_t)(0x104ce614))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aab45 jne 0x104aab75 */
  if (!C.zf) goto L_104aab75;
  /* 104aab47 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aab4b jne 0x104aab56 */
  if (!C.zf) goto L_104aab56;
  /* 104aab4d mov edx, dword ptr [0x104ce620] */
  EDX = (r32((uint32_t)(0x104ce620)));
  /* 104aab53 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_104aab56:;
  /* 104aab56 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104aab59 push eax */
  push32((uint32_t)(EAX));
  /* 104aab5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104aab5d push ecx */
  push32((uint32_t)(ECX));
  /* 104aab5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aab61 push edx */
  push32((uint32_t)(EDX));
  /* 104aab62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aab65 push eax */
  push32((uint32_t)(EAX));
  /* 104aab66 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104aab69 push ecx */
  push32((uint32_t)(ECX));
  /* 104aab6a call dword ptr [0x104d0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0318))), 0x104aab70u);
  /* 104aab70 jmp 0x104aac68 */
  goto L_104aac68;
L_104aab75:;
  /* 104aab75 cmp dword ptr [0x104ce614], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ce614))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aab7c jne 0x104aac66 */
  if (!C.zf) goto L_104aac66;
  /* 104aab82 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aab86 jne 0x104aab91 */
  if (!C.zf) goto L_104aab91;
  /* 104aab88 mov edx, dword ptr [0x104ce630] */
  EDX = (r32((uint32_t)(0x104ce630)));
  /* 104aab8e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_104aab91:;
  /* 104aab91 push 0 */
  push32((uint32_t)(0x0u));
  /* 104aab93 push 0 */
  push32((uint32_t)(0x0u));
  /* 104aab95 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104aab98 push eax */
  push32((uint32_t)(EAX));
  /* 104aab99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aab9c push ecx */
  push32((uint32_t)(ECX));
  /* 104aab9d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 104aaba0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104aaba2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aaba4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 104aaba7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aabaa push edx */
  push32((uint32_t)(EDX));
  /* 104aabab mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104aabae push eax */
  push32((uint32_t)(EAX));
  /* 104aabaf call dword ptr [0x104d0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0314))), 0x104aabb5u);
  /* 104aabb5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104aabb8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aabbc jne 0x104aabc5 */
  if (!C.zf) goto L_104aabc5;
  /* 104aabbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104aabc0 jmp 0x104aac68 */
  goto L_104aac68;
L_104aabc5:;
  /* 104aabc5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104aabcc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104aabcf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104aabd1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aabd4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104aabd6 call 0x104a5a30 */
  push32(0x104aabdbu); f_104a5a30();
  /* 104aabdb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 104aabde mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104aabe1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104aabe4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 104aabe7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104aabea shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 104aabec push edx */
  push32((uint32_t)(EDX));
  /* 104aabed push 0 */
  push32((uint32_t)(0x0u));
  /* 104aabef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104aabf2 push eax */
  push32((uint32_t)(EAX));
  /* 104aabf3 call 0x104a6600 */
  push32(0x104aabf8u); f_104a6600();
  /* 104aabf8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aabfb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104aac02 jmp 0x104aac1b */
  goto L_104aac1b;
  /* 104aac04 mov eax, 1 */
  EAX = (0x1u);
  /* 104aac09 ret  */
  ESPCHK(0x104aaac0u, _esp0);
  ESP += 4; return;
  /* 104aac0a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104aac0d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104aac14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104aac1b:;
  /* 104aac1b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aac1f jne 0x104aac25 */
  if (!C.zf) goto L_104aac25;
  /* 104aac21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104aac23 jmp 0x104aac68 */
  goto L_104aac68;
L_104aac25:;
  /* 104aac25 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104aac28 push ecx */
  push32((uint32_t)(ECX));
  /* 104aac29 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104aac2c push edx */
  push32((uint32_t)(EDX));
  /* 104aac2d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104aac30 push eax */
  push32((uint32_t)(EAX));
  /* 104aac31 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aac34 push ecx */
  push32((uint32_t)(ECX));
  /* 104aac35 push 1 */
  push32((uint32_t)(0x1u));
  /* 104aac37 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104aac3a push edx */
  push32((uint32_t)(EDX));
  /* 104aac3b call dword ptr [0x104d0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0314))), 0x104aac41u);
  /* 104aac41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104aac44 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aac48 jne 0x104aac4e */
  if (!C.zf) goto L_104aac4e;
  /* 104aac4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104aac4c jmp 0x104aac68 */
  goto L_104aac68;
L_104aac4e:;
  /* 104aac4e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104aac51 push eax */
  push32((uint32_t)(EAX));
  /* 104aac52 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104aac55 push ecx */
  push32((uint32_t)(ECX));
  /* 104aac56 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104aac59 push edx */
  push32((uint32_t)(EDX));
  /* 104aac5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aac5d push eax */
  push32((uint32_t)(EAX));
  /* 104aac5e call dword ptr [0x104d031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d031c))), 0x104aac64u);
  /* 104aac64 jmp 0x104aac68 */
  goto L_104aac68;
L_104aac66:;
  /* 104aac66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104aac68:;
  /* 104aac68 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 104aac6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104aac6e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 104aac75 pop edi */
  EDI = (pop32());
  /* 104aac76 pop esi */
  ESI = (pop32());
  /* 104aac77 pop ebx */
  EBX = (pop32());
  /* 104aac78 mov esp, ebp */
  ESP = (EBP);
  /* 104aac7a pop ebp */
  EBP = (pop32());
  /* 104aac7b ret  */
  ESPCHK(0x104aaac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac80 @ 0x104aac80 (727 bytes, 263 insns) */
void f_104aac80(void) {
  FTRACE(0x104aac80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aac80 push ebp */
  push32((uint32_t)(EBP));
  /* 104aac81 mov ebp, esp */
  EBP = (ESP);
  /* 104aac83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104aac85 push 0x104c9f40 */
  push32((uint32_t)(0x104c9f40u));
  /* 104aac8a push 0x104ab998 */
  push32((uint32_t)(0x104ab998u));
  /* 104aac8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 104aac95 push eax */
  push32((uint32_t)(EAX));
  /* 104aac96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 104aac9d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aaca0 push ebx */
  push32((uint32_t)(EBX));
  /* 104aaca1 push esi */
  push32((uint32_t)(ESI));
  /* 104aaca2 push edi */
  push32((uint32_t)(EDI));
  /* 104aaca3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104aaca6 cmp dword ptr [0x104ce638], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce638))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aacad jne 0x104aad06 */
  if (!C.zf) goto L_104aad06;
  /* 104aacaf push 0 */
  push32((uint32_t)(0x0u));
  /* 104aacb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104aacb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104aacb5 push 0x104c9f2c */
  push32((uint32_t)(0x104c9f2cu));
  /* 104aacba push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104aacbf push 0 */
  push32((uint32_t)(0x0u));
  /* 104aacc1 call dword ptr [0x104d0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0324))), 0x104aacc7u);
  /* 104aacc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aacc9 je 0x104aacd7 */
  if (C.zf) goto L_104aacd7;
  /* 104aaccb mov dword ptr [0x104ce638], 1 */
  w32((uint32_t)(0x104ce638), (0x1u));
  /* 104aacd5 jmp 0x104aad06 */
  goto L_104aad06;
L_104aacd7:;
  /* 104aacd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104aacd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104aacdb push 1 */
  push32((uint32_t)(0x1u));
  /* 104aacdd push 0x104c9f28 */
  push32((uint32_t)(0x104c9f28u));
  /* 104aace2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104aace7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104aace9 call dword ptr [0x104d0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0320))), 0x104aacefu);
  /* 104aacef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aacf1 je 0x104aacff */
  if (C.zf) goto L_104aacff;
  /* 104aacf3 mov dword ptr [0x104ce638], 2 */
  w32((uint32_t)(0x104ce638), (0x2u));
  /* 104aacfd jmp 0x104aad06 */
  goto L_104aad06;
L_104aacff:;
  /* 104aacff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104aad01 jmp 0x104aaf71 */
  goto L_104aaf71;
L_104aad06:;
  /* 104aad06 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aad0a jle 0x104aad1f */
  if ((C.zf||C.sf!=C.of)) goto L_104aad1f;
  /* 104aad0c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104aad0f push eax */
  push32((uint32_t)(EAX));
  /* 104aad10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104aad13 push ecx */
  push32((uint32_t)(ECX));
  /* 104aad14 call 0x104aaf90 */
  push32(0x104aad19u); f_104aaf90();
  /* 104aad19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aad1c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_104aad1f:;
  /* 104aad1f cmp dword ptr [0x104ce638], 2 */
  { uint32_t _a=(r32((uint32_t)(0x104ce638))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aad26 jne 0x104aad4b */
  if (!C.zf) goto L_104aad4b;
  /* 104aad28 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104aad2b push edx */
  push32((uint32_t)(EDX));
  /* 104aad2c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104aad2f push eax */
  push32((uint32_t)(EAX));
  /* 104aad30 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104aad33 push ecx */
  push32((uint32_t)(ECX));
  /* 104aad34 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104aad37 push edx */
  push32((uint32_t)(EDX));
  /* 104aad38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aad3b push eax */
  push32((uint32_t)(EAX));
  /* 104aad3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aad3f push ecx */
  push32((uint32_t)(ECX));
  /* 104aad40 call dword ptr [0x104d0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0320))), 0x104aad46u);
  /* 104aad46 jmp 0x104aaf71 */
  goto L_104aaf71;
L_104aad4b:;
  /* 104aad4b cmp dword ptr [0x104ce638], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ce638))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aad52 jne 0x104aaf6f */
  if (!C.zf) goto L_104aaf6f;
  /* 104aad58 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aad5c jne 0x104aad67 */
  if (!C.zf) goto L_104aad67;
  /* 104aad5e mov edx, dword ptr [0x104ce630] */
  EDX = (r32((uint32_t)(0x104ce630)));
  /* 104aad64 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_104aad67:;
  /* 104aad67 push 0 */
  push32((uint32_t)(0x0u));
  /* 104aad69 push 0 */
  push32((uint32_t)(0x0u));
  /* 104aad6b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104aad6e push eax */
  push32((uint32_t)(EAX));
  /* 104aad6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104aad72 push ecx */
  push32((uint32_t)(ECX));
  /* 104aad73 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 104aad76 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104aad78 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aad7a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 104aad7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aad80 push edx */
  push32((uint32_t)(EDX));
  /* 104aad81 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 104aad84 push eax */
  push32((uint32_t)(EAX));
  /* 104aad85 call dword ptr [0x104d0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0314))), 0x104aad8bu);
  /* 104aad8b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104aad8e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aad92 jne 0x104aad9b */
  if (!C.zf) goto L_104aad9b;
  /* 104aad94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104aad96 jmp 0x104aaf71 */
  goto L_104aaf71;
L_104aad9b:;
  /* 104aad9b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104aada2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104aada5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104aada7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aadaa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104aadac call 0x104a5a30 */
  push32(0x104aadb1u); f_104a5a30();
  /* 104aadb1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 104aadb4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104aadb7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104aadba mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 104aadbd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104aadc4 jmp 0x104aaddd */
  goto L_104aaddd;
  /* 104aadc6 mov eax, 1 */
  EAX = (0x1u);
  /* 104aadcb ret  */
  ESPCHK(0x104aac80u, _esp0);
  ESP += 4; return;
  /* 104aadcc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104aadcf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104aadd6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104aaddd:;
  /* 104aaddd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aade1 jne 0x104aadea */
  if (!C.zf) goto L_104aadea;
  /* 104aade3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104aade5 jmp 0x104aaf71 */
  goto L_104aaf71;
L_104aadea:;
  /* 104aadea mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104aaded push edx */
  push32((uint32_t)(EDX));
  /* 104aadee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104aadf1 push eax */
  push32((uint32_t)(EAX));
  /* 104aadf2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104aadf5 push ecx */
  push32((uint32_t)(ECX));
  /* 104aadf6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104aadf9 push edx */
  push32((uint32_t)(EDX));
  /* 104aadfa push 1 */
  push32((uint32_t)(0x1u));
  /* 104aadfc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 104aadff push eax */
  push32((uint32_t)(EAX));
  /* 104aae00 call dword ptr [0x104d0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0314))), 0x104aae06u);
  /* 104aae06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aae08 jne 0x104aae11 */
  if (!C.zf) goto L_104aae11;
  /* 104aae0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104aae0c jmp 0x104aaf71 */
  goto L_104aaf71;
L_104aae11:;
  /* 104aae11 push 0 */
  push32((uint32_t)(0x0u));
  /* 104aae13 push 0 */
  push32((uint32_t)(0x0u));
  /* 104aae15 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104aae18 push ecx */
  push32((uint32_t)(ECX));
  /* 104aae19 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104aae1c push edx */
  push32((uint32_t)(EDX));
  /* 104aae1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aae20 push eax */
  push32((uint32_t)(EAX));
  /* 104aae21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aae24 push ecx */
  push32((uint32_t)(ECX));
  /* 104aae25 call dword ptr [0x104d0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0324))), 0x104aae2bu);
  /* 104aae2b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104aae2e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aae32 jne 0x104aae3b */
  if (!C.zf) goto L_104aae3b;
  /* 104aae34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104aae36 jmp 0x104aaf71 */
  goto L_104aaf71;
L_104aae3b:;
  /* 104aae3b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aae3e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 104aae44 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104aae46 je 0x104aae8b */
  if (C.zf) goto L_104aae8b;
  /* 104aae48 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aae4c je 0x104aae86 */
  if (C.zf) goto L_104aae86;
  /* 104aae4e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104aae51 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aae54 jle 0x104aae5d */
  if ((C.zf||C.sf!=C.of)) goto L_104aae5d;
  /* 104aae56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104aae58 jmp 0x104aaf71 */
  goto L_104aaf71;
L_104aae5d:;
  /* 104aae5d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104aae60 push ecx */
  push32((uint32_t)(ECX));
  /* 104aae61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104aae64 push edx */
  push32((uint32_t)(EDX));
  /* 104aae65 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104aae68 push eax */
  push32((uint32_t)(EAX));
  /* 104aae69 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104aae6c push ecx */
  push32((uint32_t)(ECX));
  /* 104aae6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aae70 push edx */
  push32((uint32_t)(EDX));
  /* 104aae71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aae74 push eax */
  push32((uint32_t)(EAX));
  /* 104aae75 call dword ptr [0x104d0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0324))), 0x104aae7bu);
  /* 104aae7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aae7d jne 0x104aae86 */
  if (!C.zf) goto L_104aae86;
  /* 104aae7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104aae81 jmp 0x104aaf71 */
  goto L_104aaf71;
L_104aae86:;
  /* 104aae86 jmp 0x104aaf6a */
  goto L_104aaf6a;
L_104aae8b:;
  /* 104aae8b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104aae8e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 104aae91 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104aae98 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104aae9b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104aae9d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aaea0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104aaea2 call 0x104a5a30 */
  push32(0x104aaea7u); f_104a5a30();
  /* 104aaea7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 104aaeaa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104aaead mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 104aaeb0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104aaeb3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104aaeba jmp 0x104aaed3 */
  goto L_104aaed3;
  /* 104aaebc mov eax, 1 */
  EAX = (0x1u);
  /* 104aaec1 ret  */
  ESPCHK(0x104aac80u, _esp0);
  ESP += 4; return;
  /* 104aaec2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104aaec5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 104aaecc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104aaed3:;
  /* 104aaed3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aaed7 jne 0x104aaee0 */
  if (!C.zf) goto L_104aaee0;
  /* 104aaed9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104aaedb jmp 0x104aaf71 */
  goto L_104aaf71;
L_104aaee0:;
  /* 104aaee0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104aaee3 push eax */
  push32((uint32_t)(EAX));
  /* 104aaee4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104aaee7 push ecx */
  push32((uint32_t)(ECX));
  /* 104aaee8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104aaeeb push edx */
  push32((uint32_t)(EDX));
  /* 104aaeec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104aaeef push eax */
  push32((uint32_t)(EAX));
  /* 104aaef0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aaef3 push ecx */
  push32((uint32_t)(ECX));
  /* 104aaef4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aaef7 push edx */
  push32((uint32_t)(EDX));
  /* 104aaef8 call dword ptr [0x104d0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0324))), 0x104aaefeu);
  /* 104aaefe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aaf00 jne 0x104aaf06 */
  if (!C.zf) goto L_104aaf06;
  /* 104aaf02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104aaf04 jmp 0x104aaf71 */
  goto L_104aaf71;
L_104aaf06:;
  /* 104aaf06 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aaf0a jne 0x104aaf3a */
  if (!C.zf) goto L_104aaf3a;
  /* 104aaf0c push 0 */
  push32((uint32_t)(0x0u));
  /* 104aaf0e push 0 */
  push32((uint32_t)(0x0u));
  /* 104aaf10 push 0 */
  push32((uint32_t)(0x0u));
  /* 104aaf12 push 0 */
  push32((uint32_t)(0x0u));
  /* 104aaf14 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104aaf17 push eax */
  push32((uint32_t)(EAX));
  /* 104aaf18 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104aaf1b push ecx */
  push32((uint32_t)(ECX));
  /* 104aaf1c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104aaf21 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 104aaf24 push edx */
  push32((uint32_t)(EDX));
  /* 104aaf25 call dword ptr [0x104d0224] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0224))), 0x104aaf2bu);
  /* 104aaf2b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104aaf2e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aaf32 jne 0x104aaf38 */
  if (!C.zf) goto L_104aaf38;
  /* 104aaf34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104aaf36 jmp 0x104aaf71 */
  goto L_104aaf71;
L_104aaf38:;
  /* 104aaf38 jmp 0x104aaf6a */
  goto L_104aaf6a;
L_104aaf3a:;
  /* 104aaf3a push 0 */
  push32((uint32_t)(0x0u));
  /* 104aaf3c push 0 */
  push32((uint32_t)(0x0u));
  /* 104aaf3e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104aaf41 push eax */
  push32((uint32_t)(EAX));
  /* 104aaf42 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104aaf45 push ecx */
  push32((uint32_t)(ECX));
  /* 104aaf46 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104aaf49 push edx */
  push32((uint32_t)(EDX));
  /* 104aaf4a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104aaf4d push eax */
  push32((uint32_t)(EAX));
  /* 104aaf4e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104aaf53 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 104aaf56 push ecx */
  push32((uint32_t)(ECX));
  /* 104aaf57 call dword ptr [0x104d0224] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0224))), 0x104aaf5du);
  /* 104aaf5d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104aaf60 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aaf64 jne 0x104aaf6a */
  if (!C.zf) goto L_104aaf6a;
  /* 104aaf66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104aaf68 jmp 0x104aaf71 */
  goto L_104aaf71;
L_104aaf6a:;
  /* 104aaf6a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104aaf6d jmp 0x104aaf71 */
  goto L_104aaf71;
L_104aaf6f:;
  /* 104aaf6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104aaf71:;
  /* 104aaf71 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 104aaf74 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104aaf77 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 104aaf7e pop edi */
  EDI = (pop32());
  /* 104aaf7f pop esi */
  ESI = (pop32());
  /* 104aaf80 pop ebx */
  EBX = (pop32());
  /* 104aaf81 mov esp, ebp */
  ESP = (EBP);
  /* 104aaf83 pop ebp */
  EBP = (pop32());
  /* 104aaf84 ret  */
  ESPCHK(0x104aac80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af90 @ 0x104aaf90 (80 bytes, 32 insns) */
void f_104aaf90(void) {
  FTRACE(0x104aaf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aaf90 push ebp */
  push32((uint32_t)(EBP));
  /* 104aaf91 mov ebp, esp */
  EBP = (ESP);
  /* 104aaf93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aaf96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aaf99 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104aaf9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aaf9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104aafa2:;
  /* 104aafa2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104aafa5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104aafa8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aafab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104aafae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104aafb0 je 0x104aafc7 */
  if (C.zf) goto L_104aafc7;
  /* 104aafb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aafb5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104aafb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104aafba je 0x104aafc7 */
  if (C.zf) goto L_104aafc7;
  /* 104aafbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aafbf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aafc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104aafc5 jmp 0x104aafa2 */
  goto L_104aafa2;
L_104aafc7:;
  /* 104aafc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aafca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104aafcd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104aafcf jne 0x104aafd9 */
  if (!C.zf) goto L_104aafd9;
  /* 104aafd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aafd4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aafd7 jmp 0x104aafdc */
  goto L_104aafdc;
L_104aafd9:;
  /* 104aafd9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_104aafdc:;
  /* 104aafdc mov esp, ebp */
  ESP = (EBP);
  /* 104aafde pop ebp */
  EBP = (pop32());
  /* 104aafdf ret  */
  ESPCHK(0x104aaf90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afe0 @ 0x104aafe0 (130 bytes, 43 insns) */
void f_104aafe0(void) {
  FTRACE(0x104aafe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aafe0 push ebp */
  push32((uint32_t)(EBP));
  /* 104aafe1 mov ebp, esp */
  EBP = (ESP);
  /* 104aafe3 push ecx */
  push32((uint32_t)(ECX));
  /* 104aafe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aafe7 cmp eax, dword ptr [0x104cff3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104cff3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aafed jae 0x104ab011 */
  if (!C.cf) goto L_104ab011;
  /* 104aafef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aaff2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104aaff5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aaff8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104aaffb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104aaffe mov eax, dword ptr [ecx*4 + 0x104cfe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x104cfe00)));
  /* 104ab005 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104ab00a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104ab00d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ab00f jne 0x104ab02c */
  if (!C.zf) goto L_104ab02c;
L_104ab011:;
  /* 104ab011 call 0x104aa760 */
  push32(0x104ab016u); f_104aa760();
  /* 104ab016 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104ab01c call 0x104aa770 */
  push32(0x104ab021u); f_104aa770();
  /* 104ab021 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104ab027 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ab02a jmp 0x104ab05e */
  goto L_104ab05e;
L_104ab02c:;
  /* 104ab02c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab02f push edx */
  push32((uint32_t)(EDX));
  /* 104ab030 call 0x104abf80 */
  push32(0x104ab035u); f_104abf80();
  /* 104ab035 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab038 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ab03b push eax */
  push32((uint32_t)(EAX));
  /* 104ab03c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ab03f push ecx */
  push32((uint32_t)(ECX));
  /* 104ab040 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab043 push edx */
  push32((uint32_t)(EDX));
  /* 104ab044 call 0x104ab070 */
  push32(0x104ab049u); f_104ab070();
  /* 104ab049 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab04c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ab04f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab052 push eax */
  push32((uint32_t)(EAX));
  /* 104ab053 call 0x104ac010 */
  push32(0x104ab058u); f_104ac010();
  /* 104ab058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab05b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104ab05e:;
  /* 104ab05e mov esp, ebp */
  ESP = (EBP);
  /* 104ab060 pop ebp */
  EBP = (pop32());
  /* 104ab061 ret  */
  ESPCHK(0x104aafe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b070 @ 0x104ab070 (178 bytes, 56 insns) */
void f_104ab070(void) {
  FTRACE(0x104ab070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ab070 push ebp */
  push32((uint32_t)(EBP));
  /* 104ab071 mov ebp, esp */
  EBP = (ESP);
  /* 104ab073 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ab076 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab079 push eax */
  push32((uint32_t)(EAX));
  /* 104ab07a call 0x104abe00 */
  push32(0x104ab07fu); f_104abe00();
  /* 104ab07f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab082 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104ab085 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab089 jne 0x104ab09e */
  if (!C.zf) goto L_104ab09e;
  /* 104ab08b call 0x104aa760 */
  push32(0x104ab090u); f_104aa760();
  /* 104ab090 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104ab096 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ab099 jmp 0x104ab11e */
  goto L_104ab11e;
L_104ab09e:;
  /* 104ab09e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ab0a1 push ecx */
  push32((uint32_t)(ECX));
  /* 104ab0a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ab0a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ab0a7 push edx */
  push32((uint32_t)(EDX));
  /* 104ab0a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ab0ab push eax */
  push32((uint32_t)(EAX));
  /* 104ab0ac call dword ptr [0x104d0328] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0328))), 0x104ab0b2u);
  /* 104ab0b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104ab0b5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab0b9 jne 0x104ab0c6 */
  if (!C.zf) goto L_104ab0c6;
  /* 104ab0bb call dword ptr [0x104d029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d029c))), 0x104ab0c1u);
  /* 104ab0c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ab0c4 jmp 0x104ab0cd */
  goto L_104ab0cd;
L_104ab0c6:;
  /* 104ab0c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104ab0cd:;
  /* 104ab0cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab0d1 je 0x104ab0e4 */
  if (C.zf) goto L_104ab0e4;
  /* 104ab0d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab0d6 push ecx */
  push32((uint32_t)(ECX));
  /* 104ab0d7 call 0x104aa6c0 */
  push32(0x104ab0dcu); f_104aa6c0();
  /* 104ab0dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab0df or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ab0e2 jmp 0x104ab11e */
  goto L_104ab11e;
L_104ab0e4:;
  /* 104ab0e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab0e7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 104ab0ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab0ed and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 104ab0f0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ab0f3 mov ecx, dword ptr [edx*4 + 0x104cfe00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x104cfe00)));
  /* 104ab0fa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 104ab0fe and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 104ab101 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab104 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ab107 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab10a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104ab10d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ab110 mov eax, dword ptr [eax*4 + 0x104cfe00] */
  EAX = (r32((uint32_t)(EAX*4 + 0x104cfe00)));
  /* 104ab117 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 104ab11b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_104ab11e:;
  /* 104ab11e mov esp, ebp */
  ESP = (EBP);
  /* 104ab120 pop ebp */
  EBP = (pop32());
  /* 104ab121 ret  */
  ESPCHK(0x104ab070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b130 @ 0x104ab130 (130 bytes, 43 insns) */
void f_104ab130(void) {
  FTRACE(0x104ab130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ab130 push ebp */
  push32((uint32_t)(EBP));
  /* 104ab131 mov ebp, esp */
  EBP = (ESP);
  /* 104ab133 push ecx */
  push32((uint32_t)(ECX));
  /* 104ab134 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab137 cmp eax, dword ptr [0x104cff3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104cff3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab13d jae 0x104ab161 */
  if (!C.cf) goto L_104ab161;
  /* 104ab13f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab142 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ab145 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab148 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104ab14b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ab14e mov eax, dword ptr [ecx*4 + 0x104cfe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x104cfe00)));
  /* 104ab155 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104ab15a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104ab15d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ab15f jne 0x104ab17c */
  if (!C.zf) goto L_104ab17c;
L_104ab161:;
  /* 104ab161 call 0x104aa760 */
  push32(0x104ab166u); f_104aa760();
  /* 104ab166 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104ab16c call 0x104aa770 */
  push32(0x104ab171u); f_104aa770();
  /* 104ab171 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104ab177 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ab17a jmp 0x104ab1ae */
  goto L_104ab1ae;
L_104ab17c:;
  /* 104ab17c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab17f push edx */
  push32((uint32_t)(EDX));
  /* 104ab180 call 0x104abf80 */
  push32(0x104ab185u); f_104abf80();
  /* 104ab185 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab188 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ab18b push eax */
  push32((uint32_t)(EAX));
  /* 104ab18c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ab18f push ecx */
  push32((uint32_t)(ECX));
  /* 104ab190 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab193 push edx */
  push32((uint32_t)(EDX));
  /* 104ab194 call 0x104ab1c0 */
  push32(0x104ab199u); f_104ab1c0();
  /* 104ab199 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab19c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ab19f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab1a2 push eax */
  push32((uint32_t)(EAX));
  /* 104ab1a3 call 0x104ac010 */
  push32(0x104ab1a8u); f_104ac010();
  /* 104ab1a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab1ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104ab1ae:;
  /* 104ab1ae mov esp, ebp */
  ESP = (EBP);
  /* 104ab1b0 pop ebp */
  EBP = (pop32());
  /* 104ab1b1 ret  */
  ESPCHK(0x104ab130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1c0 @ 0x104ab1c0 (627 bytes, 182 insns) */
void f_104ab1c0(void) {
  FTRACE(0x104ab1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ab1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ab1c1 mov ebp, esp */
  EBP = (ESP);
  /* 104ab1c3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ab1c9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104ab1d0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ab1d3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 104ab1d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab1dd jne 0x104ab1e6 */
  if (!C.zf) goto L_104ab1e6;
  /* 104ab1df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ab1e1 jmp 0x104ab42f */
  goto L_104ab42f;
L_104ab1e6:;
  /* 104ab1e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab1e9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ab1ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab1ef and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104ab1f2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ab1f5 mov eax, dword ptr [ecx*4 + 0x104cfe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x104cfe00)));
  /* 104ab1fc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104ab201 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 104ab204 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ab206 je 0x104ab218 */
  if (C.zf) goto L_104ab218;
  /* 104ab208 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ab20a push 0 */
  push32((uint32_t)(0x0u));
  /* 104ab20c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab20f push edx */
  push32((uint32_t)(EDX));
  /* 104ab210 call 0x104ab070 */
  push32(0x104ab215u); f_104ab070();
  /* 104ab215 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ab218:;
  /* 104ab218 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab21b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ab21e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab221 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104ab224 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ab227 mov edx, dword ptr [eax*4 + 0x104cfe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x104cfe00)));
  /* 104ab22e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 104ab233 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 104ab238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ab23a je 0x104ab34c */
  if (C.zf) goto L_104ab34c;
  /* 104ab240 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ab243 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104ab246 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_104ab24d:;
  /* 104ab24d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab250 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ab253 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab256 jae 0x104ab34a */
  if (!C.cf) goto L_104ab34a;
  /* 104ab25c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 104ab262 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104ab265:;
  /* 104ab265 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ab268 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 104ab26e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ab270 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab276 jge 0x104ab2d7 */
  if ((C.sf==C.of)) goto L_104ab2d7;
  /* 104ab278 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab27b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ab27e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab281 jae 0x104ab2d7 */
  if (!C.cf) goto L_104ab2d7;
  /* 104ab283 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab286 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104ab288 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 104ab28e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab291 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab294 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ab297 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 104ab29e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab2a1 jne 0x104ab2c1 */
  if (!C.zf) goto L_104ab2c1;
  /* 104ab2a3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 104ab2a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab2ac mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 104ab2b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ab2b5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 104ab2b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ab2bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab2be mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_104ab2c1:;
  /* 104ab2c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ab2c4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 104ab2ca mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 104ab2cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ab2cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab2d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ab2d5 jmp 0x104ab265 */
  goto L_104ab265;
L_104ab2d7:;
  /* 104ab2d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ab2d9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 104ab2df push edx */
  push32((uint32_t)(EDX));
  /* 104ab2e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ab2e3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 104ab2e9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ab2eb push eax */
  push32((uint32_t)(EAX));
  /* 104ab2ec lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 104ab2f2 push edx */
  push32((uint32_t)(EDX));
  /* 104ab2f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab2f6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ab2f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab2fc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104ab2ff imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ab302 mov edx, dword ptr [eax*4 + 0x104cfe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x104cfe00)));
  /* 104ab309 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 104ab30c push eax */
  push32((uint32_t)(EAX));
  /* 104ab30d call dword ptr [0x104d025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d025c))), 0x104ab313u);
  /* 104ab313 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ab315 je 0x104ab33a */
  if (C.zf) goto L_104ab33a;
  /* 104ab317 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ab31a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab320 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104ab323 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ab326 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 104ab32c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ab32e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab334 jge 0x104ab338 */
  if ((C.sf==C.of)) goto L_104ab338;
  /* 104ab336 jmp 0x104ab34a */
  goto L_104ab34a;
L_104ab338:;
  /* 104ab338 jmp 0x104ab345 */
  goto L_104ab345;
L_104ab33a:;
  /* 104ab33a call dword ptr [0x104d029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d029c))), 0x104ab340u);
  /* 104ab340 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104ab343 jmp 0x104ab34a */
  goto L_104ab34a;
L_104ab345:;
  /* 104ab345 jmp 0x104ab24d */
  goto L_104ab24d;
L_104ab34a:;
  /* 104ab34a jmp 0x104ab39c */
  goto L_104ab39c;
L_104ab34c:;
  /* 104ab34c push 0 */
  push32((uint32_t)(0x0u));
  /* 104ab34e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 104ab354 push ecx */
  push32((uint32_t)(ECX));
  /* 104ab355 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ab358 push edx */
  push32((uint32_t)(EDX));
  /* 104ab359 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ab35c push eax */
  push32((uint32_t)(EAX));
  /* 104ab35d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab360 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ab363 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab366 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104ab369 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ab36c mov eax, dword ptr [ecx*4 + 0x104cfe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x104cfe00)));
  /* 104ab373 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 104ab376 push ecx */
  push32((uint32_t)(ECX));
  /* 104ab377 call dword ptr [0x104d025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d025c))), 0x104ab37du);
  /* 104ab37d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ab37f je 0x104ab393 */
  if (C.zf) goto L_104ab393;
  /* 104ab381 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104ab388 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 104ab38e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 104ab391 jmp 0x104ab39c */
  goto L_104ab39c;
L_104ab393:;
  /* 104ab393 call dword ptr [0x104d029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d029c))), 0x104ab399u);
  /* 104ab399 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_104ab39c:;
  /* 104ab39c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab3a0 jne 0x104ab426 */
  if (!C.zf) goto L_104ab426;
  /* 104ab3a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab3aa je 0x104ab3da */
  if (C.zf) goto L_104ab3da;
  /* 104ab3ac cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab3b0 jne 0x104ab3c9 */
  if (!C.zf) goto L_104ab3c9;
  /* 104ab3b2 call 0x104aa760 */
  push32(0x104ab3b7u); f_104aa760();
  /* 104ab3b7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104ab3bd call 0x104aa770 */
  push32(0x104ab3c2u); f_104aa770();
  /* 104ab3c2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ab3c5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104ab3c7 jmp 0x104ab3d5 */
  goto L_104ab3d5;
L_104ab3c9:;
  /* 104ab3c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ab3cc push edx */
  push32((uint32_t)(EDX));
  /* 104ab3cd call 0x104aa6c0 */
  push32(0x104ab3d2u); f_104aa6c0();
  /* 104ab3d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ab3d5:;
  /* 104ab3d5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ab3d8 jmp 0x104ab42f */
  goto L_104ab42f;
L_104ab3da:;
  /* 104ab3da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab3dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ab3e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab3e3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104ab3e6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ab3e9 mov edx, dword ptr [eax*4 + 0x104cfe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x104cfe00)));
  /* 104ab3f0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 104ab3f5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 104ab3f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ab3fa je 0x104ab40b */
  if (C.zf) goto L_104ab40b;
  /* 104ab3fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ab3ff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104ab402 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab405 jne 0x104ab40b */
  if (!C.zf) goto L_104ab40b;
  /* 104ab407 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ab409 jmp 0x104ab42f */
  goto L_104ab42f;
L_104ab40b:;
  /* 104ab40b call 0x104aa760 */
  push32(0x104ab410u); f_104aa760();
  /* 104ab410 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 104ab416 call 0x104aa770 */
  push32(0x104ab41bu); f_104aa770();
  /* 104ab41b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104ab421 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ab424 jmp 0x104ab42f */
  goto L_104ab42f;
L_104ab426:;
  /* 104ab426 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ab429 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_104ab42f:;
  /* 104ab42f mov esp, ebp */
  ESP = (EBP);
  /* 104ab431 pop ebp */
  EBP = (pop32());
  /* 104ab432 ret  */
  ESPCHK(0x104ab1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b440 @ 0x104ab440 (199 bytes, 68 insns) */
void f_104ab440(void) {
  FTRACE(0x104ab440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ab440 push ebp */
  push32((uint32_t)(EBP));
  /* 104ab441 mov ebp, esp */
  EBP = (ESP);
  /* 104ab443 push ecx */
  push32((uint32_t)(ECX));
  /* 104ab444 push ebx */
  push32((uint32_t)(EBX));
  /* 104ab445 push esi */
  push32((uint32_t)(ESI));
  /* 104ab446 push edi */
  push32((uint32_t)(EDI));
L_104ab447:;
  /* 104ab447 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab44b jne 0x104ab46b */
  if (!C.zf) goto L_104ab46b;
  /* 104ab44d push 0x104c9e8c */
  push32((uint32_t)(0x104c9e8cu));
  /* 104ab452 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ab454 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 104ab456 push 0x104c9f58 */
  push32((uint32_t)(0x104c9f58u));
  /* 104ab45b push 2 */
  push32((uint32_t)(0x2u));
  /* 104ab45d call 0x104a1950 */
  push32(0x104ab462u); f_104a1950();
  /* 104ab462 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab465 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab468 jne 0x104ab46b */
  if (!C.zf) goto L_104ab46b;
  /* 104ab46a int3  */
  x86_unimpl("int3 @ 0x104ab46a");
L_104ab46b:;
  /* 104ab46b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ab46d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ab46f jne 0x104ab447 */
  if (!C.zf) goto L_104ab447;
  /* 104ab471 mov ecx, dword ptr [0x104ce63c] */
  ECX = (r32((uint32_t)(0x104ce63c)));
  /* 104ab477 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab47a mov dword ptr [0x104ce63c], ecx */
  w32((uint32_t)(0x104ce63c), (ECX));
  /* 104ab480 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab483 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104ab486 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 104ab488 push 0x104c9f58 */
  push32((uint32_t)(0x104c9f58u));
  /* 104ab48d push 2 */
  push32((uint32_t)(0x2u));
  /* 104ab48f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 104ab494 call 0x104a2890 */
  push32(0x104ab499u); f_104a2890();
  /* 104ab499 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab49c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab49f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 104ab4a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab4a5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab4a9 je 0x104ab4c6 */
  if (C.zf) goto L_104ab4c6;
  /* 104ab4ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab4ae mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104ab4b1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 104ab4b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab4b7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 104ab4ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab4bd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 104ab4c4 jmp 0x104ab4eb */
  goto L_104ab4eb;
L_104ab4c6:;
  /* 104ab4c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab4c9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104ab4cc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104ab4cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab4d2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 104ab4d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab4d8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab4db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab4de mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 104ab4e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab4e4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_104ab4eb:;
  /* 104ab4eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab4ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab4f1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104ab4f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104ab4f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab4f9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 104ab500 pop edi */
  EDI = (pop32());
  /* 104ab501 pop esi */
  ESI = (pop32());
  /* 104ab502 pop ebx */
  EBX = (pop32());
  /* 104ab503 mov esp, ebp */
  ESP = (EBP);
  /* 104ab505 pop ebp */
  EBP = (pop32());
  /* 104ab506 ret  */
  ESPCHK(0x104ab440u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x104ab510 (50 bytes, 17 insns) */
void f_104ab510(void) {
  FTRACE(0x104ab510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ab510 push ebp */
  push32((uint32_t)(EBP));
  /* 104ab511 mov ebp, esp */
  EBP = (ESP);
  /* 104ab513 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab516 cmp eax, dword ptr [0x104cff3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104cff3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab51c jb 0x104ab522 */
  if (C.cf) goto L_104ab522;
  /* 104ab51e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ab520 jmp 0x104ab540 */
  goto L_104ab540;
L_104ab522:;
  /* 104ab522 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab525 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ab528 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab52b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104ab52e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ab531 mov eax, dword ptr [ecx*4 + 0x104cfe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x104cfe00)));
  /* 104ab538 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104ab53d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_104ab540:;
  /* 104ab540 pop ebp */
  EBP = (pop32());
  /* 104ab541 ret  */
  ESPCHK(0x104ab510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b550 @ 0x104ab550 (300 bytes, 80 insns) */
void f_104ab550(void) {
  FTRACE(0x104ab550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ab550 push ebp */
  push32((uint32_t)(EBP));
  /* 104ab551 mov ebp, esp */
  EBP = (ESP);
  /* 104ab553 push ecx */
  push32((uint32_t)(ECX));
  /* 104ab554 cmp dword ptr [0x104cfb00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cfb00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab55b jne 0x104ab569 */
  if (!C.zf) goto L_104ab569;
  /* 104ab55d mov dword ptr [0x104cfb00], 0x200 */
  w32((uint32_t)(0x104cfb00), (0x200u));
  /* 104ab567 jmp 0x104ab57c */
  goto L_104ab57c;
L_104ab569:;
  /* 104ab569 cmp dword ptr [0x104cfb00], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x104cfb00))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab570 jge 0x104ab57c */
  if ((C.sf==C.of)) goto L_104ab57c;
  /* 104ab572 mov dword ptr [0x104cfb00], 0x14 */
  w32((uint32_t)(0x104cfb00), (0x14u));
L_104ab57c:;
  /* 104ab57c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 104ab581 push 0x104c9f64 */
  push32((uint32_t)(0x104c9f64u));
  /* 104ab586 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ab588 push 4 */
  push32((uint32_t)(0x4u));
  /* 104ab58a mov eax, dword ptr [0x104cfb00] */
  EAX = (r32((uint32_t)(0x104cfb00)));
  /* 104ab58f push eax */
  push32((uint32_t)(EAX));
  /* 104ab590 call 0x104a2ca0 */
  push32(0x104ab595u); f_104a2ca0();
  /* 104ab595 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab598 mov dword ptr [0x104ce7b0], eax */
  w32((uint32_t)(0x104ce7b0), (EAX));
  /* 104ab59d cmp dword ptr [0x104ce7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab5a4 jne 0x104ab5e5 */
  if (!C.zf) goto L_104ab5e5;
  /* 104ab5a6 mov dword ptr [0x104cfb00], 0x14 */
  w32((uint32_t)(0x104cfb00), (0x14u));
  /* 104ab5b0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 104ab5b5 push 0x104c9f64 */
  push32((uint32_t)(0x104c9f64u));
  /* 104ab5ba push 2 */
  push32((uint32_t)(0x2u));
  /* 104ab5bc push 4 */
  push32((uint32_t)(0x4u));
  /* 104ab5be mov ecx, dword ptr [0x104cfb00] */
  ECX = (r32((uint32_t)(0x104cfb00)));
  /* 104ab5c4 push ecx */
  push32((uint32_t)(ECX));
  /* 104ab5c5 call 0x104a2ca0 */
  push32(0x104ab5cau); f_104a2ca0();
  /* 104ab5ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab5cd mov dword ptr [0x104ce7b0], eax */
  w32((uint32_t)(0x104ce7b0), (EAX));
  /* 104ab5d2 cmp dword ptr [0x104ce7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab5d9 jne 0x104ab5e5 */
  if (!C.zf) goto L_104ab5e5;
  /* 104ab5db push 0x1a */
  push32((uint32_t)(0x1au));
  /* 104ab5dd call 0x104a1800 */
  push32(0x104ab5e2u); f_104a1800();
  /* 104ab5e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ab5e5:;
  /* 104ab5e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104ab5ec jmp 0x104ab5f7 */
  goto L_104ab5f7;
L_104ab5ee:;
  /* 104ab5ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab5f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab5f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104ab5f7:;
  /* 104ab5f7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab5fb jge 0x104ab616 */
  if ((C.sf==C.of)) goto L_104ab616;
  /* 104ab5fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab600 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ab603 add eax, 0x104cd120 */
  { uint32_t _a=(EAX),_b=(0x104cd120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab608 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab60b mov edx, dword ptr [0x104ce7b0] */
  EDX = (r32((uint32_t)(0x104ce7b0)));
  /* 104ab611 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 104ab614 jmp 0x104ab5ee */
  goto L_104ab5ee;
L_104ab616:;
  /* 104ab616 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104ab61d jmp 0x104ab628 */
  goto L_104ab628;
L_104ab61f:;
  /* 104ab61f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab622 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab625 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104ab628:;
  /* 104ab628 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab62c jge 0x104ab678 */
  if ((C.sf==C.of)) goto L_104ab678;
  /* 104ab62e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab631 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ab634 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab637 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104ab63a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ab63d mov eax, dword ptr [ecx*4 + 0x104cfe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x104cfe00)));
  /* 104ab644 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab648 je 0x104ab666 */
  if (C.zf) goto L_104ab666;
  /* 104ab64a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab64d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ab650 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab653 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104ab656 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ab659 mov eax, dword ptr [ecx*4 + 0x104cfe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x104cfe00)));
  /* 104ab660 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab664 jne 0x104ab676 */
  if (!C.zf) goto L_104ab676;
L_104ab666:;
  /* 104ab666 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ab669 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ab66c mov dword ptr [ecx + 0x104cd130], 0xffffffff */
  w32((uint32_t)(ECX + 0x104cd130), (0xffffffffu));
L_104ab676:;
  /* 104ab676 jmp 0x104ab61f */
  goto L_104ab61f;
L_104ab678:;
  /* 104ab678 mov esp, ebp */
  ESP = (EBP);
  /* 104ab67a pop ebp */
  EBP = (pop32());
  /* 104ab67b ret  */
  ESPCHK(0x104ab550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b680 @ 0x104ab680 (26 bytes, 9 insns) */
void f_104ab680(void) {
  FTRACE(0x104ab680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ab680 push ebp */
  push32((uint32_t)(EBP));
  /* 104ab681 mov ebp, esp */
  EBP = (ESP);
  /* 104ab683 call 0x104ac280 */
  push32(0x104ab688u); f_104ac280();
  /* 104ab688 movsx eax, byte ptr [0x104ce454] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x104ce454))));
  /* 104ab68f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ab691 je 0x104ab698 */
  if (C.zf) goto L_104ab698;
  /* 104ab693 call 0x104ac040 */
  push32(0x104ab698u); f_104ac040();
L_104ab698:;
  /* 104ab698 pop ebp */
  EBP = (pop32());
  /* 104ab699 ret  */
  ESPCHK(0x104ab680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6a0 @ 0x104ab6a0 (61 bytes, 20 insns) */
void f_104ab6a0(void) {
  FTRACE(0x104ab6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ab6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ab6a1 mov ebp, esp */
  EBP = (ESP);
  /* 104ab6a3 cmp dword ptr [ebp + 8], 0x104cd120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x104cd120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab6aa jb 0x104ab6ce */
  if (C.cf) goto L_104ab6ce;
  /* 104ab6ac cmp dword ptr [ebp + 8], 0x104cd380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x104cd380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab6b3 ja 0x104ab6ce */
  if ((!C.cf&&!C.zf)) goto L_104ab6ce;
  /* 104ab6b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab6b8 sub eax, 0x104cd120 */
  { uint32_t _a=(EAX),_b=(0x104cd120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ab6bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ab6c0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab6c3 push eax */
  push32((uint32_t)(EAX));
  /* 104ab6c4 call 0x104a6290 */
  push32(0x104ab6c9u); f_104a6290();
  /* 104ab6c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab6cc jmp 0x104ab6db */
  goto L_104ab6db;
L_104ab6ce:;
  /* 104ab6ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab6d1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab6d4 push ecx */
  push32((uint32_t)(ECX));
  /* 104ab6d5 call dword ptr [0x104d02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02ec))), 0x104ab6dbu);
L_104ab6db:;
  /* 104ab6db pop ebp */
  EBP = (pop32());
  /* 104ab6dc ret  */
  ESPCHK(0x104ab6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6e0 @ 0x104ab6e0 (41 bytes, 16 insns) */
void f_104ab6e0(void) {
  FTRACE(0x104ab6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ab6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ab6e1 mov ebp, esp */
  EBP = (ESP);
  /* 104ab6e3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab6e7 jge 0x104ab6fa */
  if ((C.sf==C.of)) goto L_104ab6fa;
  /* 104ab6e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab6ec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab6ef push eax */
  push32((uint32_t)(EAX));
  /* 104ab6f0 call 0x104a6290 */
  push32(0x104ab6f5u); f_104a6290();
  /* 104ab6f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab6f8 jmp 0x104ab707 */
  goto L_104ab707;
L_104ab6fa:;
  /* 104ab6fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ab6fd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab700 push ecx */
  push32((uint32_t)(ECX));
  /* 104ab701 call dword ptr [0x104d02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02ec))), 0x104ab707u);
L_104ab707:;
  /* 104ab707 pop ebp */
  EBP = (pop32());
  /* 104ab708 ret  */
  ESPCHK(0x104ab6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b710 @ 0x104ab710 (61 bytes, 20 insns) */
void f_104ab710(void) {
  FTRACE(0x104ab710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ab710 push ebp */
  push32((uint32_t)(EBP));
  /* 104ab711 mov ebp, esp */
  EBP = (ESP);
  /* 104ab713 cmp dword ptr [ebp + 8], 0x104cd120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x104cd120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab71a jb 0x104ab73e */
  if (C.cf) goto L_104ab73e;
  /* 104ab71c cmp dword ptr [ebp + 8], 0x104cd380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x104cd380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab723 ja 0x104ab73e */
  if ((!C.cf&&!C.zf)) goto L_104ab73e;
  /* 104ab725 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab728 sub eax, 0x104cd120 */
  { uint32_t _a=(EAX),_b=(0x104cd120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ab72d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ab730 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab733 push eax */
  push32((uint32_t)(EAX));
  /* 104ab734 call 0x104a6330 */
  push32(0x104ab739u); f_104a6330();
  /* 104ab739 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab73c jmp 0x104ab74b */
  goto L_104ab74b;
L_104ab73e:;
  /* 104ab73e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab741 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab744 push ecx */
  push32((uint32_t)(ECX));
  /* 104ab745 call dword ptr [0x104d02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02f0))), 0x104ab74bu);
L_104ab74b:;
  /* 104ab74b pop ebp */
  EBP = (pop32());
  /* 104ab74c ret  */
  ESPCHK(0x104ab710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x104ab750 (41 bytes, 16 insns) */
void f_104ab750(void) {
  FTRACE(0x104ab750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ab750 push ebp */
  push32((uint32_t)(EBP));
  /* 104ab751 mov ebp, esp */
  EBP = (ESP);
  /* 104ab753 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab757 jge 0x104ab76a */
  if ((C.sf==C.of)) goto L_104ab76a;
  /* 104ab759 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab75c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab75f push eax */
  push32((uint32_t)(EAX));
  /* 104ab760 call 0x104a6330 */
  push32(0x104ab765u); f_104a6330();
  /* 104ab765 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab768 jmp 0x104ab777 */
  goto L_104ab777;
L_104ab76a:;
  /* 104ab76a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ab76d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab770 push ecx */
  push32((uint32_t)(ECX));
  /* 104ab771 call dword ptr [0x104d02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02f0))), 0x104ab777u);
L_104ab777:;
  /* 104ab777 pop ebp */
  EBP = (pop32());
  /* 104ab778 ret  */
  ESPCHK(0x104ab750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b780 @ 0x104ab780 (119 bytes, 34 insns) */
void f_104ab780(void) {
  FTRACE(0x104ab780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ab780 push ebp */
  push32((uint32_t)(EBP));
  /* 104ab781 mov ebp, esp */
  EBP = (ESP);
  /* 104ab783 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ab786 push 0x104ce7ac */
  push32((uint32_t)(0x104ce7acu));
  /* 104ab78b call dword ptr [0x104d0270] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0270))), 0x104ab791u);
  /* 104ab791 cmp dword ptr [0x104ce79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab798 je 0x104ab7b8 */
  if (C.zf) goto L_104ab7b8;
  /* 104ab79a push 0x104ce7ac */
  push32((uint32_t)(0x104ce7acu));
  /* 104ab79f call dword ptr [0x104d0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0260))), 0x104ab7a5u);
  /* 104ab7a5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104ab7a7 call 0x104a6290 */
  push32(0x104ab7acu); f_104a6290();
  /* 104ab7ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab7af mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104ab7b6 jmp 0x104ab7bf */
  goto L_104ab7bf;
L_104ab7b8:;
  /* 104ab7b8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104ab7bf:;
  /* 104ab7bf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 104ab7c3 push eax */
  push32((uint32_t)(EAX));
  /* 104ab7c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab7c7 push ecx */
  push32((uint32_t)(ECX));
  /* 104ab7c8 call 0x104ab800 */
  push32(0x104ab7cdu); f_104ab800();
  /* 104ab7cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab7d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104ab7d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab7d7 je 0x104ab7e5 */
  if (C.zf) goto L_104ab7e5;
  /* 104ab7d9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104ab7db call 0x104a6330 */
  push32(0x104ab7e0u); f_104a6330();
  /* 104ab7e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab7e3 jmp 0x104ab7f0 */
  goto L_104ab7f0;
L_104ab7e5:;
  /* 104ab7e5 push 0x104ce7ac */
  push32((uint32_t)(0x104ce7acu));
  /* 104ab7ea call dword ptr [0x104d0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0260))), 0x104ab7f0u);
L_104ab7f0:;
  /* 104ab7f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ab7f3 mov esp, ebp */
  ESP = (EBP);
  /* 104ab7f5 pop ebp */
  EBP = (pop32());
  /* 104ab7f6 ret  */
  ESPCHK(0x104ab780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b800 @ 0x104ab800 (160 bytes, 50 insns) */
void f_104ab800(void) {
  FTRACE(0x104ab800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ab800 push ebp */
  push32((uint32_t)(EBP));
  /* 104ab801 mov ebp, esp */
  EBP = (ESP);
  /* 104ab803 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ab806 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab80a jne 0x104ab813 */
  if (!C.zf) goto L_104ab813;
  /* 104ab80c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ab80e jmp 0x104ab89c */
  goto L_104ab89c;
L_104ab813:;
  /* 104ab813 cmp dword ptr [0x104ce620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab81a jne 0x104ab84a */
  if (!C.zf) goto L_104ab84a;
  /* 104ab81c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ab81f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ab824 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab829 jle 0x104ab83b */
  if ((C.zf||C.sf!=C.of)) goto L_104ab83b;
  /* 104ab82b call 0x104aa760 */
  push32(0x104ab830u); f_104aa760();
  /* 104ab830 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 104ab836 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ab839 jmp 0x104ab89c */
  goto L_104ab89c;
L_104ab83b:;
  /* 104ab83b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab83e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 104ab841 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 104ab843 mov eax, 1 */
  EAX = (0x1u);
  /* 104ab848 jmp 0x104ab89c */
  goto L_104ab89c;
L_104ab84a:;
  /* 104ab84a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104ab851 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 104ab854 push eax */
  push32((uint32_t)(EAX));
  /* 104ab855 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ab857 mov ecx, dword ptr [0x104ccea4] */
  ECX = (r32((uint32_t)(0x104ccea4)));
  /* 104ab85d push ecx */
  push32((uint32_t)(ECX));
  /* 104ab85e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab861 push edx */
  push32((uint32_t)(EDX));
  /* 104ab862 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ab864 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 104ab867 push eax */
  push32((uint32_t)(EAX));
  /* 104ab868 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104ab86d mov ecx, dword ptr [0x104ce630] */
  ECX = (r32((uint32_t)(0x104ce630)));
  /* 104ab873 push ecx */
  push32((uint32_t)(ECX));
  /* 104ab874 call dword ptr [0x104d0224] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0224))), 0x104ab87au);
  /* 104ab87a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ab87d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab881 je 0x104ab889 */
  if (C.zf) goto L_104ab889;
  /* 104ab883 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab887 je 0x104ab899 */
  if (C.zf) goto L_104ab899;
L_104ab889:;
  /* 104ab889 call 0x104aa760 */
  push32(0x104ab88eu); f_104aa760();
  /* 104ab88e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 104ab894 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ab897 jmp 0x104ab89c */
  goto L_104ab89c;
L_104ab899:;
  /* 104ab899 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104ab89c:;
  /* 104ab89c mov esp, ebp */
  ESP = (EBP);
  /* 104ab89e pop ebp */
  EBP = (pop32());
  /* 104ab89f ret  */
  ESPCHK(0x104ab800u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x104ab8a0 (32 bytes, 18 insns) */
void f_104ab8a0(void) {
  FTRACE(0x104ab8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ab8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ab8a1 mov ebp, esp */
  EBP = (ESP);
  /* 104ab8a3 push ebx */
  push32((uint32_t)(EBX));
  /* 104ab8a4 push esi */
  push32((uint32_t)(ESI));
  /* 104ab8a5 push edi */
  push32((uint32_t)(EDI));
  /* 104ab8a6 push ebp */
  push32((uint32_t)(EBP));
  /* 104ab8a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ab8a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ab8ab push 0x104ab8b8 */
  push32((uint32_t)(0x104ab8b8u));
  /* 104ab8b0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 104ab8b3 call 0x104b2fec */
  push32(0x104ab8b8u); f_104b2fec();
  /* 104ab8b8 pop ebp */
  EBP = (pop32());
  /* 104ab8b9 pop edi */
  EDI = (pop32());
  /* 104ab8ba pop esi */
  ESI = (pop32());
  /* 104ab8bb pop ebx */
  EBX = (pop32());
  /* 104ab8bc mov esp, ebp */
  ESP = (EBP);
  /* 104ab8be pop ebp */
  EBP = (pop32());
  /* 104ab8bf ret  */
  ESPCHK(0x104ab8a0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x104ab8e2 (104 bytes, 33 insns) */
void f_104ab8e2(void) {
  FTRACE(0x104ab8e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ab8e2 push ebx */
  push32((uint32_t)(EBX));
  /* 104ab8e3 push esi */
  push32((uint32_t)(ESI));
  /* 104ab8e4 push edi */
  push32((uint32_t)(EDI));
  /* 104ab8e5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 104ab8e9 push eax */
  push32((uint32_t)(EAX));
  /* 104ab8ea push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 104ab8ec push 0x104ab8c0 */
  push32((uint32_t)(0x104ab8c0u));
  /* 104ab8f1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 104ab8f8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_104ab8ff:;
  /* 104ab8ff mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 104ab903 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 104ab906 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 104ab909 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab90c je 0x104ab93c */
  if (C.zf) goto L_104ab93c;
  /* 104ab90e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab912 je 0x104ab93c */
  if (C.zf) goto L_104ab93c;
  /* 104ab914 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 104ab917 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 104ab91a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 104ab91e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 104ab921 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ab926 jne 0x104ab93a */
  if (!C.zf) goto L_104ab93a;
  /* 104ab928 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 104ab92d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 104ab931 call 0x104ab976 */
  push32(0x104ab936u); f_104ab976();
  /* 104ab936 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x104ab93au);
L_104ab93a:;
  /* 104ab93a jmp 0x104ab8ff */
  goto L_104ab8ff;
L_104ab93c:;
  /* 104ab93c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 104ab943 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ab946 pop edi */
  EDI = (pop32());
  /* 104ab947 pop esi */
  ESI = (pop32());
  /* 104ab948 pop ebx */
  EBX = (pop32());
  /* 104ab949 ret  */
  ESPCHK(0x104ab8e2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b976 @ 0x104ab976 (24 bytes, 10 insns) */
void f_104ab976(void) {
  FTRACE(0x104ab976u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ab976 push ebx */
  push32((uint32_t)(EBX));
  /* 104ab977 push ecx */
  push32((uint32_t)(ECX));
  /* 104ab978 mov ebx, 0x104cd3b8 */
  EBX = (0x104cd3b8u);
  /* 104ab97d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ab980 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 104ab983 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 104ab986 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 104ab989 pop ecx */
  ECX = (pop32());
  /* 104ab98a pop ebx */
  EBX = (pop32());
  /* 104ab98b ret 4 */
  ESPCHK(0x104ab976u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ba55 @ 0x104aba55 (27 bytes, 11 insns) */
void f_104aba55(void) {
  FTRACE(0x104aba55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aba55 push ebp */
  push32((uint32_t)(EBP));
  /* 104aba56 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 104aba5a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 104aba5c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 104aba5f push eax */
  push32((uint32_t)(EAX));
  /* 104aba60 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 104aba63 push eax */
  push32((uint32_t)(EAX));
  /* 104aba64 call 0x104ab8e2 */
  push32(0x104aba69u); f_104ab8e2();
  /* 104aba69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aba6c pop ebp */
  EBP = (pop32());
  /* 104aba6d ret 4 */
  ESPCHK(0x104aba55u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ba70 @ 0x104aba70 (482 bytes, 138 insns) */
void f_104aba70(void) {
  FTRACE(0x104aba70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aba70 push ebp */
  push32((uint32_t)(EBP));
  /* 104aba71 mov ebp, esp */
  EBP = (ESP);
  /* 104aba73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aba76 push esi */
  push32((uint32_t)(ESI));
  /* 104aba77 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 104aba7e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 104aba80 call 0x104a6290 */
  push32(0x104aba85u); f_104a6290();
  /* 104aba85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aba88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104aba8f jmp 0x104aba9a */
  goto L_104aba9a;
L_104aba91:;
  /* 104aba91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104aba94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aba97 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_104aba9a:;
  /* 104aba9a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aba9e jge 0x104abc40 */
  if ((C.sf==C.of)) goto L_104abc40;
  /* 104abaa4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104abaa7 cmp dword ptr [ecx*4 + 0x104cfe00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x104cfe00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abaaf je 0x104abba6 */
  if (C.zf) goto L_104abba6;
  /* 104abab5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104abab8 mov eax, dword ptr [edx*4 + 0x104cfe00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x104cfe00)));
  /* 104ababf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104abac2 jmp 0x104abacd */
  goto L_104abacd;
L_104abac4:;
  /* 104abac4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abac7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104abaca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104abacd:;
  /* 104abacd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104abad0 mov eax, dword ptr [edx*4 + 0x104cfe00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x104cfe00)));
  /* 104abad7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104abadc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abadf jae 0x104abb96 */
  if (!C.cf) goto L_104abb96;
  /* 104abae5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abae8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104abaec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104abaef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104abaf1 jne 0x104abb91 */
  if (!C.zf) goto L_104abb91;
  /* 104abaf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abafa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abafe jne 0x104abb39 */
  if (!C.zf) goto L_104abb39;
  /* 104abb00 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 104abb02 call 0x104a6290 */
  push32(0x104abb07u); f_104a6290();
  /* 104abb07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104abb0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abb0d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abb11 jne 0x104abb2f */
  if (!C.zf) goto L_104abb2f;
  /* 104abb13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abb16 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104abb19 push edx */
  push32((uint32_t)(EDX));
  /* 104abb1a call dword ptr [0x104d02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02e8))), 0x104abb20u);
  /* 104abb20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abb23 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104abb26 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104abb29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abb2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_104abb2f:;
  /* 104abb2f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 104abb31 call 0x104a6330 */
  push32(0x104abb36u); f_104a6330();
  /* 104abb36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104abb39:;
  /* 104abb39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abb3c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104abb3f push eax */
  push32((uint32_t)(EAX));
  /* 104abb40 call dword ptr [0x104d02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02ec))), 0x104abb46u);
  /* 104abb46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abb49 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104abb4d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104abb50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104abb52 je 0x104abb66 */
  if (C.zf) goto L_104abb66;
  /* 104abb54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abb57 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104abb5a push eax */
  push32((uint32_t)(EAX));
  /* 104abb5b call dword ptr [0x104d02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02f0))), 0x104abb61u);
  /* 104abb61 jmp 0x104abac4 */
  goto L_104abac4;
L_104abb66:;
  /* 104abb66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abb69 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 104abb6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104abb72 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104abb75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104abb78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abb7b sub eax, dword ptr [edx*4 + 0x104cfe00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x104cfe00))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104abb82 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104abb83 mov esi, 0x24 */
  ESI = (0x24u);
  /* 104abb88 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104abb8a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104abb8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104abb8f jmp 0x104abb96 */
  goto L_104abb96;
L_104abb91:;
  /* 104abb91 jmp 0x104abac4 */
  goto L_104abac4;
L_104abb96:;
  /* 104abb96 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abb9a je 0x104abba1 */
  if (C.zf) goto L_104abba1;
  /* 104abb9c jmp 0x104abc40 */
  goto L_104abc40;
L_104abba1:;
  /* 104abba1 jmp 0x104abc3b */
  goto L_104abc3b;
L_104abba6:;
  /* 104abba6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 104abba8 push 0x104c9f6c */
  push32((uint32_t)(0x104c9f6cu));
  /* 104abbad push 2 */
  push32((uint32_t)(0x2u));
  /* 104abbaf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 104abbb4 call 0x104a2890 */
  push32(0x104abbb9u); f_104a2890();
  /* 104abbb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104abbbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104abbbf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abbc3 je 0x104abc39 */
  if (C.zf) goto L_104abc39;
  /* 104abbc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104abbc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abbcb mov dword ptr [eax*4 + 0x104cfe00], ecx */
  w32((uint32_t)(EAX*4 + 0x104cfe00), (ECX));
  /* 104abbd2 mov edx, dword ptr [0x104cff3c] */
  EDX = (r32((uint32_t)(0x104cff3c)));
  /* 104abbd8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104abbdb mov dword ptr [0x104cff3c], edx */
  w32((uint32_t)(0x104cff3c), (EDX));
  /* 104abbe1 jmp 0x104abbec */
  goto L_104abbec;
L_104abbe3:;
  /* 104abbe3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abbe6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104abbe9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104abbec:;
  /* 104abbec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104abbef mov edx, dword ptr [ecx*4 + 0x104cfe00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x104cfe00)));
  /* 104abbf6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104abbfc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abbff jae 0x104abc24 */
  if (!C.cf) goto L_104abc24;
  /* 104abc01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abc04 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 104abc08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abc0b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 104abc11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abc14 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 104abc18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abc1b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 104abc22 jmp 0x104abbe3 */
  goto L_104abbe3;
L_104abc24:;
  /* 104abc24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104abc27 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104abc2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104abc2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104abc30 push edx */
  push32((uint32_t)(EDX));
  /* 104abc31 call 0x104abf80 */
  push32(0x104abc36u); f_104abf80();
  /* 104abc36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104abc39:;
  /* 104abc39 jmp 0x104abc40 */
  goto L_104abc40;
L_104abc3b:;
  /* 104abc3b jmp 0x104aba91 */
  goto L_104aba91;
L_104abc40:;
  /* 104abc40 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 104abc42 call 0x104a6330 */
  push32(0x104abc47u); f_104a6330();
  /* 104abc47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104abc4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104abc4d pop esi */
  ESI = (pop32());
  /* 104abc4e mov esp, ebp */
  ESP = (EBP);
  /* 104abc50 pop ebp */
  EBP = (pop32());
  /* 104abc51 ret  */
  ESPCHK(0x104aba70u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x104abc60 (183 bytes, 57 insns) */
void f_104abc60(void) {
  FTRACE(0x104abc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104abc60 push ebp */
  push32((uint32_t)(EBP));
  /* 104abc61 mov ebp, esp */
  EBP = (ESP);
  /* 104abc63 push ecx */
  push32((uint32_t)(ECX));
  /* 104abc64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abc67 cmp eax, dword ptr [0x104cff3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104cff3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abc6d jae 0x104abcfa */
  if (!C.cf) goto L_104abcfa;
  /* 104abc73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abc76 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104abc79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abc7c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104abc7f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104abc82 mov eax, dword ptr [ecx*4 + 0x104cfe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x104cfe00)));
  /* 104abc89 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abc8d jne 0x104abcfa */
  if (!C.zf) goto L_104abcfa;
  /* 104abc8f cmp dword ptr [0x104ce414], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ce414))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abc96 jne 0x104abcda */
  if (!C.zf) goto L_104abcda;
  /* 104abc98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abc9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104abc9e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abca2 je 0x104abcb2 */
  if (C.zf) goto L_104abcb2;
  /* 104abca4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abca8 je 0x104abcc0 */
  if (C.zf) goto L_104abcc0;
  /* 104abcaa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abcae je 0x104abcce */
  if (C.zf) goto L_104abcce;
  /* 104abcb0 jmp 0x104abcda */
  goto L_104abcda;
L_104abcb2:;
  /* 104abcb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104abcb5 push edx */
  push32((uint32_t)(EDX));
  /* 104abcb6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 104abcb8 call dword ptr [0x104d0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0330))), 0x104abcbeu);
  /* 104abcbe jmp 0x104abcda */
  goto L_104abcda;
L_104abcc0:;
  /* 104abcc0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104abcc3 push eax */
  push32((uint32_t)(EAX));
  /* 104abcc4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 104abcc6 call dword ptr [0x104d0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0330))), 0x104abcccu);
  /* 104abccc jmp 0x104abcda */
  goto L_104abcda;
L_104abcce:;
  /* 104abcce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104abcd1 push ecx */
  push32((uint32_t)(ECX));
  /* 104abcd2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 104abcd4 call dword ptr [0x104d0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0330))), 0x104abcdau);
L_104abcda:;
  /* 104abcda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abcdd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 104abce0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abce3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 104abce6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104abce9 mov ecx, dword ptr [edx*4 + 0x104cfe00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x104cfe00)));
  /* 104abcf0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104abcf3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 104abcf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104abcf8 jmp 0x104abd13 */
  goto L_104abd13;
L_104abcfa:;
  /* 104abcfa call 0x104aa760 */
  push32(0x104abcffu); f_104aa760();
  /* 104abcff mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104abd05 call 0x104aa770 */
  push32(0x104abd0au); f_104aa770();
  /* 104abd0a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104abd10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_104abd13:;
  /* 104abd13 mov esp, ebp */
  ESP = (EBP);
  /* 104abd15 pop ebp */
  EBP = (pop32());
  /* 104abd16 ret  */
  ESPCHK(0x104abc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd20 @ 0x104abd20 (216 bytes, 63 insns) */
void f_104abd20(void) {
  FTRACE(0x104abd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104abd20 push ebp */
  push32((uint32_t)(EBP));
  /* 104abd21 mov ebp, esp */
  EBP = (ESP);
  /* 104abd23 push ecx */
  push32((uint32_t)(ECX));
  /* 104abd24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abd27 cmp eax, dword ptr [0x104cff3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104cff3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abd2d jae 0x104abddb */
  if (!C.cf) goto L_104abddb;
  /* 104abd33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abd36 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104abd39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abd3c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104abd3f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104abd42 mov eax, dword ptr [ecx*4 + 0x104cfe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x104cfe00)));
  /* 104abd49 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104abd4e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104abd51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104abd53 je 0x104abddb */
  if (C.zf) goto L_104abddb;
  /* 104abd59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abd5c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 104abd5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abd62 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 104abd65 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104abd68 mov ecx, dword ptr [edx*4 + 0x104cfe00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x104cfe00)));
  /* 104abd6f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abd73 je 0x104abddb */
  if (C.zf) goto L_104abddb;
  /* 104abd75 cmp dword ptr [0x104ce414], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ce414))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abd7c jne 0x104abdba */
  if (!C.zf) goto L_104abdba;
  /* 104abd7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abd81 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104abd84 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abd88 je 0x104abd98 */
  if (C.zf) goto L_104abd98;
  /* 104abd8a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abd8e je 0x104abda4 */
  if (C.zf) goto L_104abda4;
  /* 104abd90 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abd94 je 0x104abdb0 */
  if (C.zf) goto L_104abdb0;
  /* 104abd96 jmp 0x104abdba */
  goto L_104abdba;
L_104abd98:;
  /* 104abd98 push 0 */
  push32((uint32_t)(0x0u));
  /* 104abd9a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 104abd9c call dword ptr [0x104d0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0330))), 0x104abda2u);
  /* 104abda2 jmp 0x104abdba */
  goto L_104abdba;
L_104abda4:;
  /* 104abda4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104abda6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 104abda8 call dword ptr [0x104d0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0330))), 0x104abdaeu);
  /* 104abdae jmp 0x104abdba */
  goto L_104abdba;
L_104abdb0:;
  /* 104abdb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104abdb2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 104abdb4 call dword ptr [0x104d0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0330))), 0x104abdbau);
L_104abdba:;
  /* 104abdba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abdbd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104abdc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abdc3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104abdc6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104abdc9 mov edx, dword ptr [eax*4 + 0x104cfe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x104cfe00)));
  /* 104abdd0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 104abdd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104abdd9 jmp 0x104abdf4 */
  goto L_104abdf4;
L_104abddb:;
  /* 104abddb call 0x104aa760 */
  push32(0x104abde0u); f_104aa760();
  /* 104abde0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104abde6 call 0x104aa770 */
  push32(0x104abdebu); f_104aa770();
  /* 104abdeb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104abdf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_104abdf4:;
  /* 104abdf4 mov esp, ebp */
  ESP = (EBP);
  /* 104abdf6 pop ebp */
  EBP = (pop32());
  /* 104abdf7 ret  */
  ESPCHK(0x104abd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be00 @ 0x104abe00 (102 bytes, 30 insns) */
void f_104abe00(void) {
  FTRACE(0x104abe00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104abe00 push ebp */
  push32((uint32_t)(EBP));
  /* 104abe01 mov ebp, esp */
  EBP = (ESP);
  /* 104abe03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abe06 cmp eax, dword ptr [0x104cff3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104cff3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abe0c jae 0x104abe4b */
  if (!C.cf) goto L_104abe4b;
  /* 104abe0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abe11 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104abe14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abe17 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104abe1a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104abe1d mov eax, dword ptr [ecx*4 + 0x104cfe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x104cfe00)));
  /* 104abe24 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104abe29 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104abe2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104abe2e je 0x104abe4b */
  if (C.zf) goto L_104abe4b;
  /* 104abe30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abe33 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 104abe36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abe39 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 104abe3c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104abe3f mov ecx, dword ptr [edx*4 + 0x104cfe00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x104cfe00)));
  /* 104abe46 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 104abe49 jmp 0x104abe64 */
  goto L_104abe64;
L_104abe4b:;
  /* 104abe4b call 0x104aa760 */
  push32(0x104abe50u); f_104aa760();
  /* 104abe50 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104abe56 call 0x104aa770 */
  push32(0x104abe5bu); f_104aa770();
  /* 104abe5b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104abe61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_104abe64:;
  /* 104abe64 pop ebp */
  EBP = (pop32());
  /* 104abe65 ret  */
  ESPCHK(0x104abe00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be70 @ 0x104abe70 (260 bytes, 83 insns) */
void f_104abe70(void) {
  FTRACE(0x104abe70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104abe70 push ebp */
  push32((uint32_t)(EBP));
  /* 104abe71 mov ebp, esp */
  EBP = (ESP);
  /* 104abe73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104abe76 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 104abe7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104abe7d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 104abe80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104abe82 je 0x104abe8d */
  if (C.zf) goto L_104abe8d;
  /* 104abe84 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 104abe87 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 104abe8a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_104abe8d:;
  /* 104abe8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104abe90 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 104abe96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104abe98 je 0x104abea2 */
  if (C.zf) goto L_104abea2;
  /* 104abe9a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 104abe9d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 104abe9f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_104abea2:;
  /* 104abea2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104abea5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 104abeab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104abead je 0x104abeb8 */
  if (C.zf) goto L_104abeb8;
  /* 104abeaf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 104abeb2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 104abeb5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_104abeb8:;
  /* 104abeb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abebb push eax */
  push32((uint32_t)(EAX));
  /* 104abebc call dword ptr [0x104d02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02a8))), 0x104abec2u);
  /* 104abec2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104abec5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abec9 jne 0x104abee2 */
  if (!C.zf) goto L_104abee2;
  /* 104abecb call dword ptr [0x104d029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d029c))), 0x104abed1u);
  /* 104abed1 push eax */
  push32((uint32_t)(EAX));
  /* 104abed2 call 0x104aa6c0 */
  push32(0x104abed7u); f_104aa6c0();
  /* 104abed7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104abeda or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104abedd jmp 0x104abf70 */
  goto L_104abf70;
L_104abee2:;
  /* 104abee2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abee6 jne 0x104abef3 */
  if (!C.zf) goto L_104abef3;
  /* 104abee8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 104abeeb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 104abeee mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 104abef1 jmp 0x104abf02 */
  goto L_104abf02;
L_104abef3:;
  /* 104abef3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abef7 jne 0x104abf02 */
  if (!C.zf) goto L_104abf02;
  /* 104abef9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 104abefc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 104abeff mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_104abf02:;
  /* 104abf02 call 0x104aba70 */
  push32(0x104abf07u); f_104aba70();
  /* 104abf07 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104abf0a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abf0e jne 0x104abf2b */
  if (!C.zf) goto L_104abf2b;
  /* 104abf10 call 0x104aa760 */
  push32(0x104abf15u); f_104aa760();
  /* 104abf15 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 104abf1b call 0x104aa770 */
  push32(0x104abf20u); f_104aa770();
  /* 104abf20 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104abf26 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104abf29 jmp 0x104abf70 */
  goto L_104abf70;
L_104abf2b:;
  /* 104abf2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abf2e push eax */
  push32((uint32_t)(EAX));
  /* 104abf2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104abf32 push ecx */
  push32((uint32_t)(ECX));
  /* 104abf33 call 0x104abc60 */
  push32(0x104abf38u); f_104abc60();
  /* 104abf38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104abf3b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 104abf3e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 104abf41 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 104abf44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104abf47 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104abf4a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104abf4d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104abf50 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104abf53 mov edx, dword ptr [eax*4 + 0x104cfe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x104cfe00)));
  /* 104abf5a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 104abf5d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 104abf61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104abf64 push ecx */
  push32((uint32_t)(ECX));
  /* 104abf65 call 0x104ac010 */
  push32(0x104abf6au); f_104ac010();
  /* 104abf6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104abf6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_104abf70:;
  /* 104abf70 mov esp, ebp */
  ESP = (EBP);
  /* 104abf72 pop ebp */
  EBP = (pop32());
  /* 104abf73 ret  */
  ESPCHK(0x104abe70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf80 @ 0x104abf80 (134 bytes, 44 insns) */
void f_104abf80(void) {
  FTRACE(0x104abf80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104abf80 push ebp */
  push32((uint32_t)(EBP));
  /* 104abf81 mov ebp, esp */
  EBP = (ESP);
  /* 104abf83 push ecx */
  push32((uint32_t)(ECX));
  /* 104abf84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abf87 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104abf8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abf8d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104abf90 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104abf93 mov edx, dword ptr [eax*4 + 0x104cfe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x104cfe00)));
  /* 104abf9a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104abf9c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104abf9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abfa2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abfa6 jne 0x104abfe1 */
  if (!C.zf) goto L_104abfe1;
  /* 104abfa8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 104abfaa call 0x104a6290 */
  push32(0x104abfafu); f_104a6290();
  /* 104abfaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104abfb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abfb5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104abfb9 jne 0x104abfd7 */
  if (!C.zf) goto L_104abfd7;
  /* 104abfbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abfbe add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104abfc1 push edx */
  push32((uint32_t)(EDX));
  /* 104abfc2 call dword ptr [0x104d02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02e8))), 0x104abfc8u);
  /* 104abfc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abfcb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104abfce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104abfd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104abfd4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_104abfd7:;
  /* 104abfd7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 104abfd9 call 0x104a6330 */
  push32(0x104abfdeu); f_104a6330();
  /* 104abfde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104abfe1:;
  /* 104abfe1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abfe4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104abfe7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104abfea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104abfed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104abff0 mov edx, dword ptr [eax*4 + 0x104cfe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x104cfe00)));
  /* 104abff7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 104abffb push eax */
  push32((uint32_t)(EAX));
  /* 104abffc call dword ptr [0x104d02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02ec))), 0x104ac002u);
  /* 104ac002 mov esp, ebp */
  ESP = (EBP);
  /* 104ac004 pop ebp */
  EBP = (pop32());
  /* 104ac005 ret  */
  ESPCHK(0x104abf80u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x104ac010 (38 bytes, 13 insns) */
void f_104ac010(void) {
  FTRACE(0x104ac010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ac010 push ebp */
  push32((uint32_t)(EBP));
  /* 104ac011 mov ebp, esp */
  EBP = (ESP);
  /* 104ac013 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac016 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ac019 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac01c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104ac01f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ac022 mov edx, dword ptr [eax*4 + 0x104cfe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x104cfe00)));
  /* 104ac029 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 104ac02d push eax */
  push32((uint32_t)(EAX));
  /* 104ac02e call dword ptr [0x104d02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02f0))), 0x104ac034u);
  /* 104ac034 pop ebp */
  EBP = (pop32());
  /* 104ac035 ret  */
  ESPCHK(0x104ac010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c040 @ 0x104ac040 (218 bytes, 63 insns) */
void f_104ac040(void) {
  FTRACE(0x104ac040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ac040 push ebp */
  push32((uint32_t)(EBP));
  /* 104ac041 mov ebp, esp */
  EBP = (ESP);
  /* 104ac043 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ac046 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104ac04d push 2 */
  push32((uint32_t)(0x2u));
  /* 104ac04f call 0x104a6290 */
  push32(0x104ac054u); f_104a6290();
  /* 104ac054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac057 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 104ac05e jmp 0x104ac069 */
  goto L_104ac069;
L_104ac060:;
  /* 104ac060 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac063 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac066 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104ac069:;
  /* 104ac069 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac06c cmp ecx, dword ptr [0x104cfb00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104cfb00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac072 jge 0x104ac109 */
  if ((C.sf==C.of)) goto L_104ac109;
  /* 104ac078 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac07b mov eax, dword ptr [0x104ce7b0] */
  EAX = (r32((uint32_t)(0x104ce7b0)));
  /* 104ac080 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac084 je 0x104ac104 */
  if (C.zf) goto L_104ac104;
  /* 104ac086 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac089 mov edx, dword ptr [0x104ce7b0] */
  EDX = (r32((uint32_t)(0x104ce7b0)));
  /* 104ac08f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 104ac092 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104ac095 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 104ac09b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ac09d je 0x104ac0c1 */
  if (C.zf) goto L_104ac0c1;
  /* 104ac09f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac0a2 mov eax, dword ptr [0x104ce7b0] */
  EAX = (r32((uint32_t)(0x104ce7b0)));
  /* 104ac0a7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 104ac0aa push ecx */
  push32((uint32_t)(ECX));
  /* 104ac0ab call 0x104ace30 */
  push32(0x104ac0b0u); f_104ace30();
  /* 104ac0b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac0b3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac0b6 je 0x104ac0c1 */
  if (C.zf) goto L_104ac0c1;
  /* 104ac0b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ac0bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac0be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104ac0c1:;
  /* 104ac0c1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac0c5 jl 0x104ac104 */
  if ((C.sf!=C.of)) goto L_104ac104;
  /* 104ac0c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac0ca mov ecx, dword ptr [0x104ce7b0] */
  ECX = (r32((uint32_t)(0x104ce7b0)));
  /* 104ac0d0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 104ac0d3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac0d6 push edx */
  push32((uint32_t)(EDX));
  /* 104ac0d7 call dword ptr [0x104d02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02b0))), 0x104ac0ddu);
  /* 104ac0dd push 2 */
  push32((uint32_t)(0x2u));
  /* 104ac0df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac0e2 mov ecx, dword ptr [0x104ce7b0] */
  ECX = (r32((uint32_t)(0x104ce7b0)));
  /* 104ac0e8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 104ac0eb push edx */
  push32((uint32_t)(EDX));
  /* 104ac0ec call 0x104a3320 */
  push32(0x104ac0f1u); f_104a3320();
  /* 104ac0f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac0f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac0f7 mov ecx, dword ptr [0x104ce7b0] */
  ECX = (r32((uint32_t)(0x104ce7b0)));
  /* 104ac0fd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_104ac104:;
  /* 104ac104 jmp 0x104ac060 */
  goto L_104ac060;
L_104ac109:;
  /* 104ac109 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ac10b call 0x104a6330 */
  push32(0x104ac110u); f_104a6330();
  /* 104ac110 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac113 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ac116 mov esp, ebp */
  ESP = (EBP);
  /* 104ac118 pop ebp */
  EBP = (pop32());
  /* 104ac119 ret  */
  ESPCHK(0x104ac040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c120 @ 0x104ac120 (68 bytes, 26 insns) */
void f_104ac120(void) {
  FTRACE(0x104ac120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ac120 push ebp */
  push32((uint32_t)(EBP));
  /* 104ac121 mov ebp, esp */
  EBP = (ESP);
  /* 104ac123 push ecx */
  push32((uint32_t)(ECX));
  /* 104ac124 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac128 jne 0x104ac136 */
  if (!C.zf) goto L_104ac136;
  /* 104ac12a push 0 */
  push32((uint32_t)(0x0u));
  /* 104ac12c call 0x104ac290 */
  push32(0x104ac131u); f_104ac290();
  /* 104ac131 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac134 jmp 0x104ac160 */
  goto L_104ac160;
L_104ac136:;
  /* 104ac136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac139 push eax */
  push32((uint32_t)(EAX));
  /* 104ac13a call 0x104ab6a0 */
  push32(0x104ac13fu); f_104ab6a0();
  /* 104ac13f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac142 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac145 push ecx */
  push32((uint32_t)(ECX));
  /* 104ac146 call 0x104ac170 */
  push32(0x104ac14bu); f_104ac170();
  /* 104ac14b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac14e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ac151 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac154 push edx */
  push32((uint32_t)(EDX));
  /* 104ac155 call 0x104ab710 */
  push32(0x104ac15au); f_104ab710();
  /* 104ac15a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac15d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104ac160:;
  /* 104ac160 mov esp, ebp */
  ESP = (EBP);
  /* 104ac162 pop ebp */
  EBP = (pop32());
  /* 104ac163 ret  */
  ESPCHK(0x104ac120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c170 @ 0x104ac170 (65 bytes, 26 insns) */
void f_104ac170(void) {
  FTRACE(0x104ac170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ac170 push ebp */
  push32((uint32_t)(EBP));
  /* 104ac171 mov ebp, esp */
  EBP = (ESP);
  /* 104ac173 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac176 push eax */
  push32((uint32_t)(EAX));
  /* 104ac177 call 0x104ac1c0 */
  push32(0x104ac17cu); f_104ac1c0();
  /* 104ac17c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac17f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ac181 je 0x104ac188 */
  if (C.zf) goto L_104ac188;
  /* 104ac183 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ac186 jmp 0x104ac1af */
  goto L_104ac1af;
L_104ac188:;
  /* 104ac188 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac18b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104ac18e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 104ac194 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ac196 je 0x104ac1ad */
  if (C.zf) goto L_104ac1ad;
  /* 104ac198 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac19b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104ac19e push ecx */
  push32((uint32_t)(ECX));
  /* 104ac19f call 0x104acf80 */
  push32(0x104ac1a4u); f_104acf80();
  /* 104ac1a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac1a7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104ac1a9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ac1ab jmp 0x104ac1af */
  goto L_104ac1af;
L_104ac1ad:;
  /* 104ac1ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104ac1af:;
  /* 104ac1af pop ebp */
  EBP = (pop32());
  /* 104ac1b0 ret  */
  ESPCHK(0x104ac170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1c0 @ 0x104ac1c0 (183 bytes, 62 insns) */
void f_104ac1c0(void) {
  FTRACE(0x104ac1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ac1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ac1c1 mov ebp, esp */
  EBP = (ESP);
  /* 104ac1c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ac1c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104ac1cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac1d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104ac1d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac1d6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104ac1d9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 104ac1dc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac1df jne 0x104ac25b */
  if (!C.zf) goto L_104ac25b;
  /* 104ac1e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac1e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104ac1e7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 104ac1ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ac1ef je 0x104ac25b */
  if (C.zf) goto L_104ac25b;
  /* 104ac1f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac1f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac1f7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 104ac1f9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ac1fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ac1ff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac203 jle 0x104ac25b */
  if ((C.zf||C.sf!=C.of)) goto L_104ac25b;
  /* 104ac205 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ac208 push edx */
  push32((uint32_t)(EDX));
  /* 104ac209 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac20c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104ac20f push ecx */
  push32((uint32_t)(ECX));
  /* 104ac210 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac213 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104ac216 push eax */
  push32((uint32_t)(EAX));
  /* 104ac217 call 0x104ab130 */
  push32(0x104ac21cu); f_104ab130();
  /* 104ac21c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac21f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac222 jne 0x104ac245 */
  if (!C.zf) goto L_104ac245;
  /* 104ac224 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac227 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104ac22a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 104ac230 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ac232 je 0x104ac243 */
  if (C.zf) goto L_104ac243;
  /* 104ac234 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac237 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104ac23a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 104ac23d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac240 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_104ac243:;
  /* 104ac243 jmp 0x104ac25b */
  goto L_104ac25b;
L_104ac245:;
  /* 104ac245 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac248 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104ac24b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 104ac24e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac251 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 104ac254 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104ac25b:;
  /* 104ac25b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac25e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac261 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104ac264 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104ac266 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac269 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 104ac270 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ac273 mov esp, ebp */
  ESP = (EBP);
  /* 104ac275 pop ebp */
  EBP = (pop32());
  /* 104ac276 ret  */
  ESPCHK(0x104ac1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c280 @ 0x104ac280 (15 bytes, 7 insns) */
void f_104ac280(void) {
  FTRACE(0x104ac280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ac280 push ebp */
  push32((uint32_t)(EBP));
  /* 104ac281 mov ebp, esp */
  EBP = (ESP);
  /* 104ac283 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ac285 call 0x104ac290 */
  push32(0x104ac28au); f_104ac290();
  /* 104ac28a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac28d pop ebp */
  EBP = (pop32());
  /* 104ac28e ret  */
  ESPCHK(0x104ac280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c290 @ 0x104ac290 (319 bytes, 94 insns) */
void f_104ac290(void) {
  FTRACE(0x104ac290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ac290 push ebp */
  push32((uint32_t)(EBP));
  /* 104ac291 mov ebp, esp */
  EBP = (ESP);
  /* 104ac293 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ac296 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104ac29d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104ac2a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ac2a6 call 0x104a6290 */
  push32(0x104ac2abu); f_104a6290();
  /* 104ac2ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac2ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104ac2b5 jmp 0x104ac2c0 */
  goto L_104ac2c0;
L_104ac2b7:;
  /* 104ac2b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ac2ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac2bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_104ac2c0:;
  /* 104ac2c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ac2c3 cmp ecx, dword ptr [0x104cfb00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104cfb00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac2c9 jge 0x104ac3b3 */
  if ((C.sf==C.of)) goto L_104ac3b3;
  /* 104ac2cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ac2d2 mov eax, dword ptr [0x104ce7b0] */
  EAX = (r32((uint32_t)(0x104ce7b0)));
  /* 104ac2d7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac2db je 0x104ac3ae */
  if (C.zf) goto L_104ac3ae;
  /* 104ac2e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ac2e4 mov edx, dword ptr [0x104ce7b0] */
  EDX = (r32((uint32_t)(0x104ce7b0)));
  /* 104ac2ea mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 104ac2ed mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104ac2f0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 104ac2f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ac2f8 je 0x104ac3ae */
  if (C.zf) goto L_104ac3ae;
  /* 104ac2fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ac301 mov eax, dword ptr [0x104ce7b0] */
  EAX = (r32((uint32_t)(0x104ce7b0)));
  /* 104ac306 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 104ac309 push ecx */
  push32((uint32_t)(ECX));
  /* 104ac30a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ac30d push edx */
  push32((uint32_t)(EDX));
  /* 104ac30e call 0x104ab6e0 */
  push32(0x104ac313u); f_104ab6e0();
  /* 104ac313 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac316 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ac319 mov ecx, dword ptr [0x104ce7b0] */
  ECX = (r32((uint32_t)(0x104ce7b0)));
  /* 104ac31f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 104ac322 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104ac325 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 104ac32a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ac32c je 0x104ac395 */
  if (C.zf) goto L_104ac395;
  /* 104ac32e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac332 jne 0x104ac359 */
  if (!C.zf) goto L_104ac359;
  /* 104ac334 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ac337 mov edx, dword ptr [0x104ce7b0] */
  EDX = (r32((uint32_t)(0x104ce7b0)));
  /* 104ac33d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 104ac340 push eax */
  push32((uint32_t)(EAX));
  /* 104ac341 call 0x104ac170 */
  push32(0x104ac346u); f_104ac170();
  /* 104ac346 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac349 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac34c je 0x104ac357 */
  if (C.zf) goto L_104ac357;
  /* 104ac34e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ac351 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac354 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104ac357:;
  /* 104ac357 jmp 0x104ac395 */
  goto L_104ac395;
L_104ac359:;
  /* 104ac359 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac35d jne 0x104ac395 */
  if (!C.zf) goto L_104ac395;
  /* 104ac35f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ac362 mov eax, dword ptr [0x104ce7b0] */
  EAX = (r32((uint32_t)(0x104ce7b0)));
  /* 104ac367 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 104ac36a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104ac36d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 104ac370 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ac372 je 0x104ac395 */
  if (C.zf) goto L_104ac395;
  /* 104ac374 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ac377 mov ecx, dword ptr [0x104ce7b0] */
  ECX = (r32((uint32_t)(0x104ce7b0)));
  /* 104ac37d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 104ac380 push edx */
  push32((uint32_t)(EDX));
  /* 104ac381 call 0x104ac170 */
  push32(0x104ac386u); f_104ac170();
  /* 104ac386 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac389 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac38c jne 0x104ac395 */
  if (!C.zf) goto L_104ac395;
  /* 104ac38e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_104ac395:;
  /* 104ac395 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ac398 mov ecx, dword ptr [0x104ce7b0] */
  ECX = (r32((uint32_t)(0x104ce7b0)));
  /* 104ac39e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 104ac3a1 push edx */
  push32((uint32_t)(EDX));
  /* 104ac3a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ac3a5 push eax */
  push32((uint32_t)(EAX));
  /* 104ac3a6 call 0x104ab750 */
  push32(0x104ac3abu); f_104ab750();
  /* 104ac3ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ac3ae:;
  /* 104ac3ae jmp 0x104ac2b7 */
  goto L_104ac2b7;
L_104ac3b3:;
  /* 104ac3b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ac3b5 call 0x104a6330 */
  push32(0x104ac3bau); f_104a6330();
  /* 104ac3ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac3bd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac3c1 jne 0x104ac3c8 */
  if (!C.zf) goto L_104ac3c8;
  /* 104ac3c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ac3c6 jmp 0x104ac3cb */
  goto L_104ac3cb;
L_104ac3c8:;
  /* 104ac3c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_104ac3cb:;
  /* 104ac3cb mov esp, ebp */
  ESP = (EBP);
  /* 104ac3cd pop ebp */
  EBP = (pop32());
  /* 104ac3ce ret  */
  ESPCHK(0x104ac290u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x104ac3d0 (15 bytes, 7 insns) */
void f_104ac3d0(void) {
  FTRACE(0x104ac3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ac3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ac3d1 mov ebp, esp */
  EBP = (ESP);
  /* 104ac3d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ac3d5 call 0x104a1800 */
  push32(0x104ac3dau); f_104a1800();
  /* 104ac3da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac3dd pop ebp */
  EBP = (pop32());
  /* 104ac3de ret  */
  ESPCHK(0x104ac3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3e0 @ 0x104ac3e0 (1007 bytes, 269 insns) */
void f_104ac3e0(void) {
  FTRACE(0x104ac3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ac3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ac3e1 mov ebp, esp */
  EBP = (ESP);
  /* 104ac3e3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ac3e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac3ed jl 0x104ac3f5 */
  if ((C.sf!=C.of)) goto L_104ac3f5;
  /* 104ac3ef cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac3f3 jle 0x104ac3fc */
  if ((C.zf||C.sf!=C.of)) goto L_104ac3fc;
L_104ac3f5:;
  /* 104ac3f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ac3f7 jmp 0x104ac7cb */
  goto L_104ac7cb;
L_104ac3fc:;
  /* 104ac3fc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104ac3fe call 0x104a6290 */
  push32(0x104ac403u); f_104a6290();
  /* 104ac403 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac406 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104ac40d mov eax, dword ptr [0x104ce79c] */
  EAX = (r32((uint32_t)(0x104ce79c)));
  /* 104ac412 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac415 mov dword ptr [0x104ce79c], eax */
  w32((uint32_t)(0x104ce79c), (EAX));
L_104ac41a:;
  /* 104ac41a cmp dword ptr [0x104ce7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac421 je 0x104ac42d */
  if (C.zf) goto L_104ac42d;
  /* 104ac423 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ac425 call dword ptr [0x104d0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0334))), 0x104ac42bu);
  /* 104ac42b jmp 0x104ac41a */
  goto L_104ac41a;
L_104ac42d:;
  /* 104ac42d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac431 je 0x104ac471 */
  if (C.zf) goto L_104ac471;
  /* 104ac433 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac437 je 0x104ac451 */
  if (C.zf) goto L_104ac451;
  /* 104ac439 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ac43c push ecx */
  push32((uint32_t)(ECX));
  /* 104ac43d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac440 push edx */
  push32((uint32_t)(EDX));
  /* 104ac441 call 0x104ac7d0 */
  push32(0x104ac446u); f_104ac7d0();
  /* 104ac446 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac449 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 104ac44f jmp 0x104ac463 */
  goto L_104ac463;
L_104ac451:;
  /* 104ac451 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac454 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ac457 mov ecx, dword ptr [eax + 0x104cd4dc] */
  ECX = (r32((uint32_t)(EAX + 0x104cd4dc)));
  /* 104ac45d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_104ac463:;
  /* 104ac463 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 104ac469 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104ac46c jmp 0x104ac7ab */
  goto L_104ac7ab;
L_104ac471:;
  /* 104ac471 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 104ac478 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104ac47f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac483 je 0x104ac7a3 */
  if (C.zf) goto L_104ac7a3;
  /* 104ac489 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ac48c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ac48f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac492 jne 0x104ac6b4 */
  if (!C.zf) goto L_104ac6b4;
  /* 104ac498 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ac49b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 104ac49f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac4a2 jne 0x104ac6b4 */
  if (!C.zf) goto L_104ac6b4;
  /* 104ac4a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ac4ab movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 104ac4af cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac4b2 jne 0x104ac6b4 */
  if (!C.zf) goto L_104ac6b4;
  /* 104ac4b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ac4bb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_104ac4c1:;
  /* 104ac4c1 push 0x104c9fbc */
  push32((uint32_t)(0x104c9fbcu));
  /* 104ac4c6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 104ac4cc push ecx */
  push32((uint32_t)(ECX));
  /* 104ac4cd call 0x104ae630 */
  push32(0x104ac4d2u); f_104ae630();
  /* 104ac4d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac4d5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 104ac4db cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac4e2 je 0x104ac50d */
  if (C.zf) goto L_104ac50d;
  /* 104ac4e4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104ac4ea sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ac4f0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 104ac4f6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac4fd je 0x104ac50d */
  if (C.zf) goto L_104ac50d;
  /* 104ac4ff mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104ac505 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ac508 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac50b jne 0x104ac533 */
  if (!C.zf) goto L_104ac533;
L_104ac50d:;
  /* 104ac50d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac511 je 0x104ac52c */
  if (C.zf) goto L_104ac52c;
  /* 104ac513 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104ac515 call 0x104a6330 */
  push32(0x104ac51au); f_104a6330();
  /* 104ac51a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac51d mov edx, dword ptr [0x104ce79c] */
  EDX = (r32((uint32_t)(0x104ce79c)));
  /* 104ac523 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ac526 mov dword ptr [0x104ce79c], edx */
  w32((uint32_t)(0x104ce79c), (EDX));
L_104ac52c:;
  /* 104ac52c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ac52e jmp 0x104ac7cb */
  goto L_104ac7cb;
L_104ac533:;
  /* 104ac533 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 104ac53a jmp 0x104ac545 */
  goto L_104ac545;
L_104ac53c:;
  /* 104ac53c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ac53f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac542 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_104ac545:;
  /* 104ac545 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac549 jg 0x104ac593 */
  if ((!C.zf&&C.sf==C.of)) goto L_104ac593;
  /* 104ac54b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 104ac551 push ecx */
  push32((uint32_t)(ECX));
  /* 104ac552 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 104ac558 push edx */
  push32((uint32_t)(EDX));
  /* 104ac559 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ac55c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ac55f mov ecx, dword ptr [eax + 0x104cd4d8] */
  ECX = (r32((uint32_t)(EAX + 0x104cd4d8)));
  /* 104ac565 push ecx */
  push32((uint32_t)(ECX));
  /* 104ac566 call 0x104ae5f0 */
  push32(0x104ac56bu); f_104ae5f0();
  /* 104ac56b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac56e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ac570 jne 0x104ac591 */
  if (!C.zf) goto L_104ac591;
  /* 104ac572 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ac575 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ac578 mov eax, dword ptr [edx + 0x104cd4d8] */
  EAX = (r32((uint32_t)(EDX + 0x104cd4d8)));
  /* 104ac57e push eax */
  push32((uint32_t)(EAX));
  /* 104ac57f call 0x104a56c0 */
  push32(0x104ac584u); f_104a56c0();
  /* 104ac584 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac587 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac58d jne 0x104ac591 */
  if (!C.zf) goto L_104ac591;
  /* 104ac58f jmp 0x104ac593 */
  goto L_104ac593;
L_104ac591:;
  /* 104ac591 jmp 0x104ac53c */
  goto L_104ac53c;
L_104ac593:;
  /* 104ac593 push 0x104c9fb8 */
  push32((uint32_t)(0x104c9fb8u));
  /* 104ac598 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104ac59e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac5a1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 104ac5a7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104ac5ad push edx */
  push32((uint32_t)(EDX));
  /* 104ac5ae call 0x104ae5b0 */
  push32(0x104ac5b3u); f_104ae5b0();
  /* 104ac5b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac5b6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 104ac5bc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac5c3 jne 0x104ac5f9 */
  if (!C.zf) goto L_104ac5f9;
  /* 104ac5c5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104ac5cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ac5ce cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac5d1 je 0x104ac5f9 */
  if (C.zf) goto L_104ac5f9;
  /* 104ac5d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac5d7 je 0x104ac5f2 */
  if (C.zf) goto L_104ac5f2;
  /* 104ac5d9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104ac5db call 0x104a6330 */
  push32(0x104ac5e0u); f_104a6330();
  /* 104ac5e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac5e3 mov edx, dword ptr [0x104ce79c] */
  EDX = (r32((uint32_t)(0x104ce79c)));
  /* 104ac5e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ac5ec mov dword ptr [0x104ce79c], edx */
  w32((uint32_t)(0x104ce79c), (EDX));
L_104ac5f2:;
  /* 104ac5f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ac5f4 jmp 0x104ac7cb */
  goto L_104ac7cb;
L_104ac5f9:;
  /* 104ac5f9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac5fd jg 0x104ac64a */
  if ((!C.zf&&C.sf==C.of)) goto L_104ac64a;
  /* 104ac5ff mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 104ac605 push eax */
  push32((uint32_t)(EAX));
  /* 104ac606 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104ac60c push ecx */
  push32((uint32_t)(ECX));
  /* 104ac60d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 104ac613 push edx */
  push32((uint32_t)(EDX));
  /* 104ac614 call 0x104a60b0 */
  push32(0x104ac619u); f_104a60b0();
  /* 104ac619 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac61c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 104ac622 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 104ac62a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 104ac630 push ecx */
  push32((uint32_t)(ECX));
  /* 104ac631 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ac634 push edx */
  push32((uint32_t)(EDX));
  /* 104ac635 call 0x104ac7d0 */
  push32(0x104ac63au); f_104ac7d0();
  /* 104ac63a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac63d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ac63f je 0x104ac64a */
  if (C.zf) goto L_104ac64a;
  /* 104ac641 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ac644 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac647 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_104ac64a:;
  /* 104ac64a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104ac650 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac656 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 104ac65c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 104ac662 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104ac665 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ac667 je 0x104ac678 */
  if (C.zf) goto L_104ac678;
  /* 104ac669 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 104ac66f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac672 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_104ac678:;
  /* 104ac678 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 104ac67e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104ac681 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ac683 jne 0x104ac4c1 */
  if (!C.zf) goto L_104ac4c1;
  /* 104ac689 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac68d je 0x104ac69c */
  if (C.zf) goto L_104ac69c;
  /* 104ac68f call 0x104ac970 */
  push32(0x104ac694u); f_104ac970();
  /* 104ac694 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 104ac69a jmp 0x104ac6a6 */
  goto L_104ac6a6;
L_104ac69c:;
  /* 104ac69c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_104ac6a6:;
  /* 104ac6a6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 104ac6ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ac6af jmp 0x104ac7a1 */
  goto L_104ac7a1;
L_104ac6b4:;
  /* 104ac6b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac6b7 push edx */
  push32((uint32_t)(EDX));
  /* 104ac6b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ac6ba push 0 */
  push32((uint32_t)(0x0u));
  /* 104ac6bc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 104ac6c2 push eax */
  push32((uint32_t)(EAX));
  /* 104ac6c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ac6c6 push ecx */
  push32((uint32_t)(ECX));
  /* 104ac6c7 call 0x104aca70 */
  push32(0x104ac6ccu); f_104aca70();
  /* 104ac6cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac6cf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104ac6d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac6d6 je 0x104ac7a1 */
  if (C.zf) goto L_104ac7a1;
  /* 104ac6dc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104ac6e3 jmp 0x104ac6ee */
  goto L_104ac6ee;
L_104ac6e5:;
  /* 104ac6e5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ac6e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac6eb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_104ac6ee:;
  /* 104ac6ee cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac6f2 jg 0x104ac750 */
  if ((!C.zf&&C.sf==C.of)) goto L_104ac750;
  /* 104ac6f4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac6f8 je 0x104ac74e */
  if (C.zf) goto L_104ac74e;
  /* 104ac6fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ac6fd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ac700 mov ecx, dword ptr [eax + 0x104cd4dc] */
  ECX = (r32((uint32_t)(EAX + 0x104cd4dc)));
  /* 104ac706 push ecx */
  push32((uint32_t)(ECX));
  /* 104ac707 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 104ac70d push edx */
  push32((uint32_t)(EDX));
  /* 104ac70e call 0x104ae520 */
  push32(0x104ac713u); f_104ae520();
  /* 104ac713 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac716 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ac718 je 0x104ac745 */
  if (C.zf) goto L_104ac745;
  /* 104ac71a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 104ac720 push eax */
  push32((uint32_t)(EAX));
  /* 104ac721 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ac724 push ecx */
  push32((uint32_t)(ECX));
  /* 104ac725 call 0x104ac7d0 */
  push32(0x104ac72au); f_104ac7d0();
  /* 104ac72a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac72d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ac72f je 0x104ac73c */
  if (C.zf) goto L_104ac73c;
  /* 104ac731 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ac734 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac737 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104ac73a jmp 0x104ac743 */
  goto L_104ac743;
L_104ac73c:;
  /* 104ac73c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_104ac743:;
  /* 104ac743 jmp 0x104ac74e */
  goto L_104ac74e;
L_104ac745:;
  /* 104ac745 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ac748 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac74b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_104ac74e:;
  /* 104ac74e jmp 0x104ac6e5 */
  goto L_104ac6e5;
L_104ac750:;
  /* 104ac750 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac754 je 0x104ac77b */
  if (C.zf) goto L_104ac77b;
  /* 104ac756 call 0x104ac970 */
  push32(0x104ac75bu); f_104ac970();
  /* 104ac75b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104ac75e push 2 */
  push32((uint32_t)(0x2u));
  /* 104ac760 mov ecx, dword ptr [0x104cd4dc] */
  ECX = (r32((uint32_t)(0x104cd4dc)));
  /* 104ac766 push ecx */
  push32((uint32_t)(ECX));
  /* 104ac767 call 0x104a3320 */
  push32(0x104ac76cu); f_104a3320();
  /* 104ac76c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac76f mov dword ptr [0x104cd4dc], 0 */
  w32((uint32_t)(0x104cd4dc), (0x0u));
  /* 104ac779 jmp 0x104ac7a1 */
  goto L_104ac7a1;
L_104ac77b:;
  /* 104ac77b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac77f je 0x104ac78e */
  if (C.zf) goto L_104ac78e;
  /* 104ac781 call 0x104ac970 */
  push32(0x104ac786u); f_104ac970();
  /* 104ac786 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 104ac78c jmp 0x104ac798 */
  goto L_104ac798;
L_104ac78e:;
  /* 104ac78e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_104ac798:;
  /* 104ac798 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 104ac79e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_104ac7a1:;
  /* 104ac7a1 jmp 0x104ac7ab */
  goto L_104ac7ab;
L_104ac7a3:;
  /* 104ac7a3 call 0x104ac970 */
  push32(0x104ac7a8u); f_104ac970();
  /* 104ac7a8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104ac7ab:;
  /* 104ac7ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac7af je 0x104ac7c8 */
  if (C.zf) goto L_104ac7c8;
  /* 104ac7b1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104ac7b3 call 0x104a6330 */
  push32(0x104ac7b8u); f_104a6330();
  /* 104ac7b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac7bb mov eax, dword ptr [0x104ce79c] */
  EAX = (r32((uint32_t)(0x104ce79c)));
  /* 104ac7c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ac7c3 mov dword ptr [0x104ce79c], eax */
  w32((uint32_t)(0x104ce79c), (EAX));
L_104ac7c8:;
  /* 104ac7c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_104ac7cb:;
  /* 104ac7cb mov esp, ebp */
  ESP = (EBP);
  /* 104ac7cd pop ebp */
  EBP = (pop32());
  /* 104ac7ce ret  */
  ESPCHK(0x104ac3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7d0 @ 0x104ac7d0 (403 bytes, 117 insns) */
void f_104ac7d0(void) {
  FTRACE(0x104ac7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ac7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ac7d1 mov ebp, esp */
  EBP = (ESP);
  /* 104ac7d3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ac7d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac7dc push eax */
  push32((uint32_t)(EAX));
  /* 104ac7dd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 104ac7e3 push ecx */
  push32((uint32_t)(ECX));
  /* 104ac7e4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 104ac7ea push edx */
  push32((uint32_t)(EDX));
  /* 104ac7eb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 104ac7f1 push eax */
  push32((uint32_t)(EAX));
  /* 104ac7f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ac7f5 push ecx */
  push32((uint32_t)(ECX));
  /* 104ac7f6 call 0x104aca70 */
  push32(0x104ac7fbu); f_104aca70();
  /* 104ac7fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac7fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ac800 jne 0x104ac809 */
  if (!C.zf) goto L_104ac809;
  /* 104ac802 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ac804 jmp 0x104ac95f */
  goto L_104ac95f;
L_104ac809:;
  /* 104ac809 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 104ac80e push 0x104c9fc0 */
  push32((uint32_t)(0x104c9fc0u));
  /* 104ac813 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ac815 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 104ac81b push edx */
  push32((uint32_t)(EDX));
  /* 104ac81c call 0x104a56c0 */
  push32(0x104ac821u); f_104a56c0();
  /* 104ac821 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac824 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac827 push eax */
  push32((uint32_t)(EAX));
  /* 104ac828 call 0x104a2890 */
  push32(0x104ac82du); f_104a2890();
  /* 104ac82d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac830 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104ac833 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac837 jne 0x104ac840 */
  if (!C.zf) goto L_104ac840;
  /* 104ac839 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ac83b jmp 0x104ac95f */
  goto L_104ac95f;
L_104ac840:;
  /* 104ac840 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac843 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ac846 mov ecx, dword ptr [eax + 0x104cd4dc] */
  ECX = (r32((uint32_t)(EAX + 0x104cd4dc)));
  /* 104ac84c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ac84f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac852 mov eax, dword ptr [edx*4 + 0x104ce618] */
  EAX = (r32((uint32_t)(EDX*4 + 0x104ce618)));
  /* 104ac859 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ac85c push 6 */
  push32((uint32_t)(0x6u));
  /* 104ac85e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac861 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ac864 add ecx, 0x104ce668 */
  { uint32_t _a=(ECX),_b=(0x104ce668u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac86a push ecx */
  push32((uint32_t)(ECX));
  /* 104ac86b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 104ac86e push edx */
  push32((uint32_t)(EDX));
  /* 104ac86f call 0x104a9170 */
  push32(0x104ac874u); f_104a9170();
  /* 104ac874 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac877 mov eax, dword ptr [0x104ce630] */
  EAX = (r32((uint32_t)(0x104ce630)));
  /* 104ac87c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104ac87f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 104ac885 push ecx */
  push32((uint32_t)(ECX));
  /* 104ac886 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac889 push edx */
  push32((uint32_t)(EDX));
  /* 104ac88a call 0x104a5840 */
  push32(0x104ac88fu); f_104a5840();
  /* 104ac88f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac892 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac895 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ac898 mov dword ptr [ecx + 0x104cd4dc], eax */
  w32((uint32_t)(ECX + 0x104cd4dc), (EAX));
  /* 104ac89e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 104ac8a4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104ac8aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac8ad mov dword ptr [eax*4 + 0x104ce618], edx */
  w32((uint32_t)(EAX*4 + 0x104ce618), (EDX));
  /* 104ac8b4 push 6 */
  push32((uint32_t)(0x6u));
  /* 104ac8b6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 104ac8bc push ecx */
  push32((uint32_t)(ECX));
  /* 104ac8bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac8c0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ac8c3 add edx, 0x104ce668 */
  { uint32_t _a=(EDX),_b=(0x104ce668u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac8c9 push edx */
  push32((uint32_t)(EDX));
  /* 104ac8ca call 0x104a9170 */
  push32(0x104ac8cfu); f_104a9170();
  /* 104ac8cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac8d2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac8d6 jne 0x104ac8e3 */
  if (!C.zf) goto L_104ac8e3;
  /* 104ac8d8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104ac8de mov dword ptr [0x104ce630], eax */
  w32((uint32_t)(0x104ce630), (EAX));
L_104ac8e3:;
  /* 104ac8e3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac8e7 jne 0x104ac8f5 */
  if (!C.zf) goto L_104ac8f5;
  /* 104ac8e9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104ac8ef mov dword ptr [0x104ce634], ecx */
  w32((uint32_t)(0x104ce634), (ECX));
L_104ac8f5:;
  /* 104ac8f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac8f8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ac8fb call dword ptr [edx + 0x104cd4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x104cd4e0))), 0x104ac901u);
  /* 104ac901 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ac903 je 0x104ac93c */
  if (C.zf) goto L_104ac93c;
  /* 104ac905 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac908 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ac90b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ac90e mov dword ptr [eax + 0x104cd4dc], ecx */
  w32((uint32_t)(EAX + 0x104cd4dc), (ECX));
  /* 104ac914 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ac916 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ac919 push edx */
  push32((uint32_t)(EDX));
  /* 104ac91a call 0x104a3320 */
  push32(0x104ac91fu); f_104a3320();
  /* 104ac91f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac922 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac925 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ac928 mov dword ptr [eax*4 + 0x104ce618], ecx */
  w32((uint32_t)(EAX*4 + 0x104ce618), (ECX));
  /* 104ac92f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104ac932 mov dword ptr [0x104ce630], edx */
  w32((uint32_t)(0x104ce630), (EDX));
  /* 104ac938 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ac93a jmp 0x104ac95f */
  goto L_104ac95f;
L_104ac93c:;
  /* 104ac93c cmp dword ptr [ebp - 0xc], 0x104cd3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x104cd3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac943 je 0x104ac953 */
  if (C.zf) goto L_104ac953;
  /* 104ac945 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ac947 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ac94a push eax */
  push32((uint32_t)(EAX));
  /* 104ac94b call 0x104a3320 */
  push32(0x104ac950u); f_104a3320();
  /* 104ac950 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ac953:;
  /* 104ac953 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ac956 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ac959 mov eax, dword ptr [ecx + 0x104cd4dc] */
  EAX = (r32((uint32_t)(ECX + 0x104cd4dc)));
L_104ac95f:;
  /* 104ac95f mov esp, ebp */
  ESP = (EBP);
  /* 104ac961 pop ebp */
  EBP = (pop32());
  /* 104ac962 ret  */
  ESPCHK(0x104ac7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c970 @ 0x104ac970 (256 bytes, 72 insns) */
void f_104ac970(void) {
  FTRACE(0x104ac970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ac970 push ebp */
  push32((uint32_t)(EBP));
  /* 104ac971 mov ebp, esp */
  EBP = (ESP);
  /* 104ac973 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ac976 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 104ac97d cmp dword ptr [0x104cd4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cd4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac984 jne 0x104ac9a4 */
  if (!C.zf) goto L_104ac9a4;
  /* 104ac986 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 104ac98b push 0x104c9fc0 */
  push32((uint32_t)(0x104c9fc0u));
  /* 104ac990 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ac992 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 104ac997 call 0x104a2890 */
  push32(0x104ac99cu); f_104a2890();
  /* 104ac99c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac99f mov dword ptr [0x104cd4dc], eax */
  w32((uint32_t)(0x104cd4dc), (EAX));
L_104ac9a4:;
  /* 104ac9a4 mov eax, dword ptr [0x104cd4dc] */
  EAX = (r32((uint32_t)(0x104cd4dc)));
  /* 104ac9a9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 104ac9ac mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104ac9b3 jmp 0x104ac9be */
  goto L_104ac9be;
L_104ac9b5:;
  /* 104ac9b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ac9b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac9bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104ac9be:;
  /* 104ac9be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ac9c1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ac9c4 mov eax, dword ptr [edx + 0x104cd4dc] */
  EAX = (r32((uint32_t)(EDX + 0x104cd4dc)));
  /* 104ac9ca push eax */
  push32((uint32_t)(EAX));
  /* 104ac9cb push 0x104c9fcc */
  push32((uint32_t)(0x104c9fccu));
  /* 104ac9d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ac9d3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ac9d6 mov edx, dword ptr [ecx + 0x104cd4d8] */
  EDX = (r32((uint32_t)(ECX + 0x104cd4d8)));
  /* 104ac9dc push edx */
  push32((uint32_t)(EDX));
  /* 104ac9dd push 3 */
  push32((uint32_t)(0x3u));
  /* 104ac9df mov eax, dword ptr [0x104cd4dc] */
  EAX = (r32((uint32_t)(0x104cd4dc)));
  /* 104ac9e4 push eax */
  push32((uint32_t)(EAX));
  /* 104ac9e5 call 0x104acc10 */
  push32(0x104ac9eau); f_104acc10();
  /* 104ac9ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ac9ed cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ac9f1 jge 0x104aca39 */
  if ((C.sf==C.of)) goto L_104aca39;
  /* 104ac9f3 push 0x104c9fb8 */
  push32((uint32_t)(0x104c9fb8u));
  /* 104ac9f8 mov ecx, dword ptr [0x104cd4dc] */
  ECX = (r32((uint32_t)(0x104cd4dc)));
  /* 104ac9fe push ecx */
  push32((uint32_t)(ECX));
  /* 104ac9ff call 0x104a5850 */
  push32(0x104aca04u); f_104a5850();
  /* 104aca04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aca07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aca0a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aca0d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104aca10 mov eax, dword ptr [edx + 0x104cd4dc] */
  EAX = (r32((uint32_t)(EDX + 0x104cd4dc)));
  /* 104aca16 push eax */
  push32((uint32_t)(EAX));
  /* 104aca17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aca1a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104aca1d mov edx, dword ptr [ecx + 0x104cd4dc] */
  EDX = (r32((uint32_t)(ECX + 0x104cd4dc)));
  /* 104aca23 push edx */
  push32((uint32_t)(EDX));
  /* 104aca24 call 0x104ae520 */
  push32(0x104aca29u); f_104ae520();
  /* 104aca29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aca2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aca2e je 0x104aca37 */
  if (C.zf) goto L_104aca37;
  /* 104aca30 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_104aca37:;
  /* 104aca37 jmp 0x104aca67 */
  goto L_104aca67;
L_104aca39:;
  /* 104aca39 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aca3d jne 0x104aca46 */
  if (!C.zf) goto L_104aca46;
  /* 104aca3f mov eax, dword ptr [0x104cd4dc] */
  EAX = (r32((uint32_t)(0x104cd4dc)));
  /* 104aca44 jmp 0x104aca6c */
  goto L_104aca6c;
L_104aca46:;
  /* 104aca46 push 2 */
  push32((uint32_t)(0x2u));
  /* 104aca48 mov eax, dword ptr [0x104cd4dc] */
  EAX = (r32((uint32_t)(0x104cd4dc)));
  /* 104aca4d push eax */
  push32((uint32_t)(EAX));
  /* 104aca4e call 0x104a3320 */
  push32(0x104aca53u); f_104a3320();
  /* 104aca53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aca56 mov dword ptr [0x104cd4dc], 0 */
  w32((uint32_t)(0x104cd4dc), (0x0u));
  /* 104aca60 mov eax, dword ptr [0x104cd4f4] */
  EAX = (r32((uint32_t)(0x104cd4f4)));
  /* 104aca65 jmp 0x104aca6c */
  goto L_104aca6c;
L_104aca67:;
  /* 104aca67 jmp 0x104ac9b5 */
  goto L_104ac9b5;
L_104aca6c:;
  /* 104aca6c mov esp, ebp */
  ESP = (EBP);
  /* 104aca6e pop ebp */
  EBP = (pop32());
  /* 104aca6f ret  */
  ESPCHK(0x104ac970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca70 @ 0x104aca70 (388 bytes, 115 insns) */
void f_104aca70(void) {
  FTRACE(0x104aca70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aca70 push ebp */
  push32((uint32_t)(EBP));
  /* 104aca71 mov ebp, esp */
  EBP = (ESP);
  /* 104aca73 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aca79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aca7d jne 0x104aca86 */
  if (!C.zf) goto L_104aca86;
  /* 104aca7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104aca81 jmp 0x104acbf0 */
  goto L_104acbf0;
L_104aca86:;
  /* 104aca86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aca89 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104aca8c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aca8f jne 0x104acae0 */
  if (!C.zf) goto L_104acae0;
  /* 104aca91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aca94 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 104aca98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aca9a jne 0x104acae0 */
  if (!C.zf) goto L_104acae0;
  /* 104aca9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104aca9f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 104acaa2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104acaa5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 104acaa9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104acaad je 0x104acac9 */
  if (C.zf) goto L_104acac9;
  /* 104acaaf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104acab2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 104acab7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104acaba mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 104acac0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104acac3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_104acac9:;
  /* 104acac9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104acacd je 0x104acad8 */
  if (C.zf) goto L_104acad8;
  /* 104acacf mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104acad2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_104acad8:;
  /* 104acad8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104acadb jmp 0x104acbf0 */
  goto L_104acbf0;
L_104acae0:;
  /* 104acae0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acae3 push ecx */
  push32((uint32_t)(ECX));
  /* 104acae4 push 0x104cd450 */
  push32((uint32_t)(0x104cd450u));
  /* 104acae9 call 0x104ae520 */
  push32(0x104acaeeu); f_104ae520();
  /* 104acaee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acaf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104acaf3 je 0x104acba8 */
  if (C.zf) goto L_104acba8;
  /* 104acaf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acafc push edx */
  push32((uint32_t)(EDX));
  /* 104acafd push 0x104cd3cc */
  push32((uint32_t)(0x104cd3ccu));
  /* 104acb02 call 0x104ae520 */
  push32(0x104acb07u); f_104ae520();
  /* 104acb07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acb0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104acb0c je 0x104acba8 */
  if (C.zf) goto L_104acba8;
  /* 104acb12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acb15 push eax */
  push32((uint32_t)(EAX));
  /* 104acb16 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 104acb1c push ecx */
  push32((uint32_t)(ECX));
  /* 104acb1d call 0x104acc60 */
  push32(0x104acb22u); f_104acc60();
  /* 104acb22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acb25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104acb27 je 0x104acb30 */
  if (C.zf) goto L_104acb30;
  /* 104acb29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104acb2b jmp 0x104acbf0 */
  goto L_104acbf0;
L_104acb30:;
  /* 104acb30 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 104acb36 push edx */
  push32((uint32_t)(EDX));
  /* 104acb37 push 0x104ce640 */
  push32((uint32_t)(0x104ce640u));
  /* 104acb3c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 104acb42 push eax */
  push32((uint32_t)(EAX));
  /* 104acb43 call 0x104ae670 */
  push32(0x104acb48u); f_104ae670();
  /* 104acb48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acb4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104acb4d jne 0x104acb56 */
  if (!C.zf) goto L_104acb56;
  /* 104acb4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104acb51 jmp 0x104acbf0 */
  goto L_104acbf0;
L_104acb56:;
  /* 104acb56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104acb58 mov cx, word ptr [0x104ce644] */
  CX = (r16((uint32_t)(0x104ce644)));
  /* 104acb5f mov dword ptr [0x104ce648], ecx */
  w32((uint32_t)(0x104ce648), (ECX));
  /* 104acb65 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 104acb6b push edx */
  push32((uint32_t)(EDX));
  /* 104acb6c push 0x104cd450 */
  push32((uint32_t)(0x104cd450u));
  /* 104acb71 call 0x104acdc0 */
  push32(0x104acb76u); f_104acdc0();
  /* 104acb76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acb79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acb7c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104acb7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104acb81 je 0x104acb96 */
  if (C.zf) goto L_104acb96;
  /* 104acb83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acb86 push edx */
  push32((uint32_t)(EDX));
  /* 104acb87 push 0x104cd3cc */
  push32((uint32_t)(0x104cd3ccu));
  /* 104acb8c call 0x104a5840 */
  push32(0x104acb91u); f_104a5840();
  /* 104acb91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acb94 jmp 0x104acba8 */
  goto L_104acba8;
L_104acb96:;
  /* 104acb96 push 0x104cd450 */
  push32((uint32_t)(0x104cd450u));
  /* 104acb9b push 0x104cd3cc */
  push32((uint32_t)(0x104cd3ccu));
  /* 104acba0 call 0x104a5840 */
  push32(0x104acba5u); f_104a5840();
  /* 104acba5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104acba8:;
  /* 104acba8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104acbac je 0x104acbc1 */
  if (C.zf) goto L_104acbc1;
  /* 104acbae push 6 */
  push32((uint32_t)(0x6u));
  /* 104acbb0 push 0x104ce640 */
  push32((uint32_t)(0x104ce640u));
  /* 104acbb5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104acbb8 push eax */
  push32((uint32_t)(EAX));
  /* 104acbb9 call 0x104a9170 */
  push32(0x104acbbeu); f_104a9170();
  /* 104acbbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104acbc1:;
  /* 104acbc1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104acbc5 je 0x104acbda */
  if (C.zf) goto L_104acbda;
  /* 104acbc7 push 4 */
  push32((uint32_t)(0x4u));
  /* 104acbc9 push 0x104ce648 */
  push32((uint32_t)(0x104ce648u));
  /* 104acbce mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104acbd1 push ecx */
  push32((uint32_t)(ECX));
  /* 104acbd2 call 0x104a9170 */
  push32(0x104acbd7u); f_104a9170();
  /* 104acbd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104acbda:;
  /* 104acbda push 0x104cd450 */
  push32((uint32_t)(0x104cd450u));
  /* 104acbdf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104acbe2 push edx */
  push32((uint32_t)(EDX));
  /* 104acbe3 call 0x104a5840 */
  push32(0x104acbe8u); f_104a5840();
  /* 104acbe8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acbeb mov eax, 0x104cd450 */
  EAX = (0x104cd450u);
L_104acbf0:;
  /* 104acbf0 mov esp, ebp */
  ESP = (EBP);
  /* 104acbf2 pop ebp */
  EBP = (pop32());
  /* 104acbf3 ret  */
  ESPCHK(0x104aca70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc00 @ 0x104acc00 (7 bytes, 5 insns) */
void f_104acc00(void) {
  FTRACE(0x104acc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104acc00 push ebp */
  push32((uint32_t)(EBP));
  /* 104acc01 mov ebp, esp */
  EBP = (ESP);
  /* 104acc03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104acc05 pop ebp */
  EBP = (pop32());
  /* 104acc06 ret  */
  ESPCHK(0x104acc00u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x104acc10 (79 bytes, 28 insns) */
void f_104acc10(void) {
  FTRACE(0x104acc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104acc10 push ebp */
  push32((uint32_t)(EBP));
  /* 104acc11 mov ebp, esp */
  EBP = (ESP);
  /* 104acc13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104acc16 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 104acc19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104acc1c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104acc23 jmp 0x104acc2e */
  goto L_104acc2e;
L_104acc25:;
  /* 104acc25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104acc28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104acc2b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_104acc2e:;
  /* 104acc2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104acc31 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104acc34 jge 0x104acc54 */
  if ((C.sf==C.of)) goto L_104acc54;
  /* 104acc36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104acc39 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104acc3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104acc3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104acc42 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 104acc45 push edx */
  push32((uint32_t)(EDX));
  /* 104acc46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acc49 push eax */
  push32((uint32_t)(EAX));
  /* 104acc4a call 0x104a5850 */
  push32(0x104acc4fu); f_104a5850();
  /* 104acc4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acc52 jmp 0x104acc25 */
  goto L_104acc25;
L_104acc54:;
  /* 104acc54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104acc5b mov esp, ebp */
  ESP = (EBP);
  /* 104acc5d pop ebp */
  EBP = (pop32());
  /* 104acc5e ret  */
  ESPCHK(0x104acc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc60 @ 0x104acc60 (349 bytes, 122 insns) */
void f_104acc60(void) {
  FTRACE(0x104acc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104acc60 push ebp */
  push32((uint32_t)(EBP));
  /* 104acc61 mov ebp, esp */
  EBP = (ESP);
  /* 104acc63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104acc66 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 104acc6b push 0 */
  push32((uint32_t)(0x0u));
  /* 104acc6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acc70 push eax */
  push32((uint32_t)(EAX));
  /* 104acc71 call 0x104a6600 */
  push32(0x104acc76u); f_104a6600();
  /* 104acc76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acc79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104acc7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104acc7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104acc81 jne 0x104acc8a */
  if (!C.zf) goto L_104acc8a;
  /* 104acc83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104acc85 jmp 0x104acdb9 */
  goto L_104acdb9;
L_104acc8a:;
  /* 104acc8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104acc8d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104acc90 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104acc93 jne 0x104accc0 */
  if (!C.zf) goto L_104accc0;
  /* 104acc95 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104acc98 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 104acc9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104acc9e je 0x104accc0 */
  if (C.zf) goto L_104accc0;
  /* 104acca0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104acca3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104acca6 push ecx */
  push32((uint32_t)(ECX));
  /* 104acca7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104accaa add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104accb0 push edx */
  push32((uint32_t)(EDX));
  /* 104accb1 call 0x104a5840 */
  push32(0x104accb6u); f_104a5840();
  /* 104accb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104accb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104accbb jmp 0x104acdb9 */
  goto L_104acdb9;
L_104accc0:;
  /* 104accc0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104accc7 jmp 0x104accd2 */
  goto L_104accd2;
L_104accc9:;
  /* 104accc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104acccc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104acccf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104accd2:;
  /* 104accd2 push 0x104c9fd0 */
  push32((uint32_t)(0x104c9fd0u));
  /* 104accd7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104accda push ecx */
  push32((uint32_t)(ECX));
  /* 104accdb call 0x104ae5b0 */
  push32(0x104acce0u); f_104ae5b0();
  /* 104acce0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acce3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104acce6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104accea jne 0x104accf4 */
  if (!C.zf) goto L_104accf4;
  /* 104accec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104accef jmp 0x104acdb9 */
  goto L_104acdb9;
L_104accf4:;
  /* 104accf4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104accf7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104accfa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104accfc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 104accff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104acd03 jne 0x104acd2a */
  if (!C.zf) goto L_104acd2a;
  /* 104acd05 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104acd09 jge 0x104acd2a */
  if ((C.sf==C.of)) goto L_104acd2a;
  /* 104acd0b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104acd0f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104acd12 je 0x104acd2a */
  if (C.zf) goto L_104acd2a;
  /* 104acd14 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104acd17 push edx */
  push32((uint32_t)(EDX));
  /* 104acd18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104acd1b push eax */
  push32((uint32_t)(EAX));
  /* 104acd1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acd1f push ecx */
  push32((uint32_t)(ECX));
  /* 104acd20 call 0x104a60b0 */
  push32(0x104acd25u); f_104a60b0();
  /* 104acd25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acd28 jmp 0x104acd90 */
  goto L_104acd90;
L_104acd2a:;
  /* 104acd2a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104acd2e jne 0x104acd58 */
  if (!C.zf) goto L_104acd58;
  /* 104acd30 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104acd34 jge 0x104acd58 */
  if ((C.sf==C.of)) goto L_104acd58;
  /* 104acd36 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104acd3a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104acd3d je 0x104acd58 */
  if (C.zf) goto L_104acd58;
  /* 104acd3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104acd42 push eax */
  push32((uint32_t)(EAX));
  /* 104acd43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104acd46 push ecx */
  push32((uint32_t)(ECX));
  /* 104acd47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acd4a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104acd4d push edx */
  push32((uint32_t)(EDX));
  /* 104acd4e call 0x104a60b0 */
  push32(0x104acd53u); f_104a60b0();
  /* 104acd53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acd56 jmp 0x104acd90 */
  goto L_104acd90;
L_104acd58:;
  /* 104acd58 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104acd5c jne 0x104acd8b */
  if (!C.zf) goto L_104acd8b;
  /* 104acd5e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104acd62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104acd64 je 0x104acd6f */
  if (C.zf) goto L_104acd6f;
  /* 104acd66 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104acd6a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104acd6d jne 0x104acd8b */
  if (!C.zf) goto L_104acd8b;
L_104acd6f:;
  /* 104acd6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104acd72 push edx */
  push32((uint32_t)(EDX));
  /* 104acd73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104acd76 push eax */
  push32((uint32_t)(EAX));
  /* 104acd77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acd7a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104acd80 push ecx */
  push32((uint32_t)(ECX));
  /* 104acd81 call 0x104a60b0 */
  push32(0x104acd86u); f_104a60b0();
  /* 104acd86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acd89 jmp 0x104acd90 */
  goto L_104acd90;
L_104acd8b:;
  /* 104acd8b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104acd8e jmp 0x104acdb9 */
  goto L_104acdb9;
L_104acd90:;
  /* 104acd90 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104acd94 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104acd97 jne 0x104acd9b */
  if (!C.zf) goto L_104acd9b;
  /* 104acd99 jmp 0x104acdb7 */
  goto L_104acdb7;
L_104acd9b:;
  /* 104acd9b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104acd9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104acda1 jne 0x104acda5 */
  if (!C.zf) goto L_104acda5;
  /* 104acda3 jmp 0x104acdb7 */
  goto L_104acdb7;
L_104acda5:;
  /* 104acda5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104acda8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104acdab lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 104acdaf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 104acdb2 jmp 0x104accc9 */
  goto L_104accc9;
L_104acdb7:;
  /* 104acdb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104acdb9:;
  /* 104acdb9 mov esp, ebp */
  ESP = (EBP);
  /* 104acdbb pop ebp */
  EBP = (pop32());
  /* 104acdbc ret  */
  ESPCHK(0x104acc60u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x104acdc0 (101 bytes, 36 insns) */
void f_104acdc0(void) {
  FTRACE(0x104acdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104acdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 104acdc1 mov ebp, esp */
  EBP = (ESP);
  /* 104acdc3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104acdc6 push eax */
  push32((uint32_t)(EAX));
  /* 104acdc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acdca push ecx */
  push32((uint32_t)(ECX));
  /* 104acdcb call 0x104a5840 */
  push32(0x104acdd0u); f_104a5840();
  /* 104acdd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acdd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104acdd6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 104acdda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104acddc je 0x104acdf8 */
  if (C.zf) goto L_104acdf8;
  /* 104acdde mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104acde1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104acde4 push ecx */
  push32((uint32_t)(ECX));
  /* 104acde5 push 0x104c9fd8 */
  push32((uint32_t)(0x104c9fd8u));
  /* 104acdea push 2 */
  push32((uint32_t)(0x2u));
  /* 104acdec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acdef push edx */
  push32((uint32_t)(EDX));
  /* 104acdf0 call 0x104acc10 */
  push32(0x104acdf5u); f_104acc10();
  /* 104acdf5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104acdf8:;
  /* 104acdf8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104acdfb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 104ace02 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ace04 je 0x104ace23 */
  if (C.zf) goto L_104ace23;
  /* 104ace06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ace09 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ace0f push edx */
  push32((uint32_t)(EDX));
  /* 104ace10 push 0x104c9fd4 */
  push32((uint32_t)(0x104c9fd4u));
  /* 104ace15 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ace17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ace1a push eax */
  push32((uint32_t)(EAX));
  /* 104ace1b call 0x104acc10 */
  push32(0x104ace20u); f_104acc10();
  /* 104ace20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ace23:;
  /* 104ace23 pop ebp */
  EBP = (pop32());
  /* 104ace24 ret  */
  ESPCHK(0x104acdc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce30 @ 0x104ace30 (130 bytes, 50 insns) */
void f_104ace30(void) {
  FTRACE(0x104ace30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ace30 push ebp */
  push32((uint32_t)(EBP));
  /* 104ace31 mov ebp, esp */
  EBP = (ESP);
  /* 104ace33 push ecx */
  push32((uint32_t)(ECX));
  /* 104ace34 push ebx */
  push32((uint32_t)(EBX));
  /* 104ace35 push esi */
  push32((uint32_t)(ESI));
  /* 104ace36 push edi */
  push32((uint32_t)(EDI));
  /* 104ace37 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104ace3e:;
  /* 104ace3e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ace42 jne 0x104ace62 */
  if (!C.zf) goto L_104ace62;
  /* 104ace44 push 0x104c9fe8 */
  push32((uint32_t)(0x104c9fe8u));
  /* 104ace49 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ace4b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 104ace4d push 0x104c9fdc */
  push32((uint32_t)(0x104c9fdcu));
  /* 104ace52 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ace54 call 0x104a1950 */
  push32(0x104ace59u); f_104a1950();
  /* 104ace59 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ace5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ace5f jne 0x104ace62 */
  if (!C.zf) goto L_104ace62;
  /* 104ace61 int3  */
  x86_unimpl("int3 @ 0x104ace61");
L_104ace62:;
  /* 104ace62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ace64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ace66 jne 0x104ace3e */
  if (!C.zf) goto L_104ace3e;
  /* 104ace68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ace6b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104ace6e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 104ace71 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ace73 je 0x104ace81 */
  if (C.zf) goto L_104ace81;
  /* 104ace75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ace78 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 104ace7f jmp 0x104acea8 */
  goto L_104acea8;
L_104ace81:;
  /* 104ace81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ace84 push ecx */
  push32((uint32_t)(ECX));
  /* 104ace85 call 0x104ab6a0 */
  push32(0x104ace8au); f_104ab6a0();
  /* 104ace8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ace8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ace90 push edx */
  push32((uint32_t)(EDX));
  /* 104ace91 call 0x104acec0 */
  push32(0x104ace96u); f_104acec0();
  /* 104ace96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ace99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ace9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ace9f push eax */
  push32((uint32_t)(EAX));
  /* 104acea0 call 0x104ab710 */
  push32(0x104acea5u); f_104ab710();
  /* 104acea5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104acea8:;
  /* 104acea8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aceab pop edi */
  EDI = (pop32());
  /* 104aceac pop esi */
  ESI = (pop32());
  /* 104acead pop ebx */
  EBX = (pop32());
  /* 104aceae mov esp, ebp */
  ESP = (EBP);
  /* 104aceb0 pop ebp */
  EBP = (pop32());
  /* 104aceb1 ret  */
  ESPCHK(0x104ace30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cec0 @ 0x104acec0 (190 bytes, 67 insns) */
void f_104acec0(void) {
  FTRACE(0x104acec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104acec0 push ebp */
  push32((uint32_t)(EBP));
  /* 104acec1 mov ebp, esp */
  EBP = (ESP);
  /* 104acec3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104acec6 push ebx */
  push32((uint32_t)(EBX));
  /* 104acec7 push esi */
  push32((uint32_t)(ESI));
  /* 104acec8 push edi */
  push32((uint32_t)(EDI));
  /* 104acec9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104aced0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aced3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104aced6:;
  /* 104aced6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aceda jne 0x104acefa */
  if (!C.zf) goto L_104acefa;
  /* 104acedc push 0x104c9e8c */
  push32((uint32_t)(0x104c9e8cu));
  /* 104acee1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104acee3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 104acee5 push 0x104c9fdc */
  push32((uint32_t)(0x104c9fdcu));
  /* 104aceea push 2 */
  push32((uint32_t)(0x2u));
  /* 104aceec call 0x104a1950 */
  push32(0x104acef1u); f_104a1950();
  /* 104acef1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acef4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104acef7 jne 0x104acefa */
  if (!C.zf) goto L_104acefa;
  /* 104acef9 int3  */
  x86_unimpl("int3 @ 0x104acef9");
L_104acefa:;
  /* 104acefa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104acefc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104acefe jne 0x104aced6 */
  if (!C.zf) goto L_104aced6;
  /* 104acf00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104acf03 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104acf06 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 104acf0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104acf0d je 0x104acf6a */
  if (C.zf) goto L_104acf6a;
  /* 104acf0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104acf12 push ecx */
  push32((uint32_t)(ECX));
  /* 104acf13 call 0x104ac1c0 */
  push32(0x104acf18u); f_104ac1c0();
  /* 104acf18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acf1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104acf1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104acf21 push edx */
  push32((uint32_t)(EDX));
  /* 104acf22 call 0x104af540 */
  push32(0x104acf27u); f_104af540();
  /* 104acf27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acf2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104acf2d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104acf30 push ecx */
  push32((uint32_t)(ECX));
  /* 104acf31 call 0x104af410 */
  push32(0x104acf36u); f_104af410();
  /* 104acf36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acf39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104acf3b jge 0x104acf46 */
  if ((C.sf==C.of)) goto L_104acf46;
  /* 104acf3d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104acf44 jmp 0x104acf6a */
  goto L_104acf6a;
L_104acf46:;
  /* 104acf46 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104acf49 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104acf4d je 0x104acf6a */
  if (C.zf) goto L_104acf6a;
  /* 104acf4f push 2 */
  push32((uint32_t)(0x2u));
  /* 104acf51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104acf54 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 104acf57 push ecx */
  push32((uint32_t)(ECX));
  /* 104acf58 call 0x104a3320 */
  push32(0x104acf5du); f_104a3320();
  /* 104acf5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acf60 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104acf63 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_104acf6a:;
  /* 104acf6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104acf6d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 104acf74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104acf77 pop edi */
  EDI = (pop32());
  /* 104acf78 pop esi */
  ESI = (pop32());
  /* 104acf79 pop ebx */
  EBX = (pop32());
  /* 104acf7a mov esp, ebp */
  ESP = (EBP);
  /* 104acf7c pop ebp */
  EBP = (pop32());
  /* 104acf7d ret  */
  ESPCHK(0x104acec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf80 @ 0x104acf80 (210 bytes, 63 insns) */
void f_104acf80(void) {
  FTRACE(0x104acf80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104acf80 push ebp */
  push32((uint32_t)(EBP));
  /* 104acf81 mov ebp, esp */
  EBP = (ESP);
  /* 104acf83 push ecx */
  push32((uint32_t)(ECX));
  /* 104acf84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acf87 cmp eax, dword ptr [0x104cff3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104cff3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104acf8d jae 0x104acfb1 */
  if (!C.cf) goto L_104acfb1;
  /* 104acf8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acf92 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104acf95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acf98 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104acf9b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104acf9e mov eax, dword ptr [ecx*4 + 0x104cfe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x104cfe00)));
  /* 104acfa5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104acfaa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104acfad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104acfaf jne 0x104acfc4 */
  if (!C.zf) goto L_104acfc4;
L_104acfb1:;
  /* 104acfb1 call 0x104aa760 */
  push32(0x104acfb6u); f_104aa760();
  /* 104acfb6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104acfbc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104acfbf jmp 0x104ad04e */
  goto L_104ad04e;
L_104acfc4:;
  /* 104acfc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acfc7 push edx */
  push32((uint32_t)(EDX));
  /* 104acfc8 call 0x104abf80 */
  push32(0x104acfcdu); f_104abf80();
  /* 104acfcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acfd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acfd3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104acfd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acfd9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104acfdc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104acfdf mov edx, dword ptr [eax*4 + 0x104cfe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x104cfe00)));
  /* 104acfe6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 104acfeb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 104acfee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104acff0 je 0x104ad02d */
  if (C.zf) goto L_104ad02d;
  /* 104acff2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104acff5 push ecx */
  push32((uint32_t)(ECX));
  /* 104acff6 call 0x104abe00 */
  push32(0x104acffbu); f_104abe00();
  /* 104acffb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104acffe push eax */
  push32((uint32_t)(EAX));
  /* 104acfff call dword ptr [0x104d0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0338))), 0x104ad005u);
  /* 104ad005 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ad007 jne 0x104ad014 */
  if (!C.zf) goto L_104ad014;
  /* 104ad009 call dword ptr [0x104d029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d029c))), 0x104ad00fu);
  /* 104ad00f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ad012 jmp 0x104ad01b */
  goto L_104ad01b;
L_104ad014:;
  /* 104ad014 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104ad01b:;
  /* 104ad01b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ad01f jne 0x104ad023 */
  if (!C.zf) goto L_104ad023;
  /* 104ad021 jmp 0x104ad03f */
  goto L_104ad03f;
L_104ad023:;
  /* 104ad023 call 0x104aa770 */
  push32(0x104ad028u); f_104aa770();
  /* 104ad028 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad02b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104ad02d:;
  /* 104ad02d call 0x104aa760 */
  push32(0x104ad032u); f_104aa760();
  /* 104ad032 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104ad038 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104ad03f:;
  /* 104ad03f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad042 push eax */
  push32((uint32_t)(EAX));
  /* 104ad043 call 0x104ac010 */
  push32(0x104ad048u); f_104ac010();
  /* 104ad048 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad04b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104ad04e:;
  /* 104ad04e mov esp, ebp */
  ESP = (EBP);
  /* 104ad050 pop ebp */
  EBP = (pop32());
  /* 104ad051 ret  */
  ESPCHK(0x104acf80u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x104ad060 (219 bytes, 64 insns) */
void f_104ad060(void) {
  FTRACE(0x104ad060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ad060 push ebp */
  push32((uint32_t)(EBP));
  /* 104ad061 mov ebp, esp */
  EBP = (ESP);
  /* 104ad063 push ecx */
  push32((uint32_t)(ECX));
  /* 104ad064 cmp dword ptr [0x104ce62c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce62c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ad06b je 0x104ad101 */
  if (C.zf) goto L_104ad101;
  /* 104ad071 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 104ad073 push 0x104c9ff8 */
  push32((uint32_t)(0x104c9ff8u));
  /* 104ad078 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad07a push 0xac */
  push32((uint32_t)(0xacu));
  /* 104ad07f push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad081 call 0x104a2ca0 */
  push32(0x104ad086u); f_104a2ca0();
  /* 104ad086 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad089 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ad08c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ad090 jne 0x104ad09c */
  if (!C.zf) goto L_104ad09c;
  /* 104ad092 mov eax, 1 */
  EAX = (0x1u);
  /* 104ad097 jmp 0x104ad137 */
  goto L_104ad137;
L_104ad09c:;
  /* 104ad09c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad09f push eax */
  push32((uint32_t)(EAX));
  /* 104ad0a0 call 0x104ad140 */
  push32(0x104ad0a5u); f_104ad140();
  /* 104ad0a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad0a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ad0aa je 0x104ad0cd */
  if (C.zf) goto L_104ad0cd;
  /* 104ad0ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad0af push ecx */
  push32((uint32_t)(ECX));
  /* 104ad0b0 call 0x104ad6d0 */
  push32(0x104ad0b5u); f_104ad6d0();
  /* 104ad0b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad0b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad0ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad0bd push edx */
  push32((uint32_t)(EDX));
  /* 104ad0be call 0x104a3320 */
  push32(0x104ad0c3u); f_104a3320();
  /* 104ad0c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad0c6 mov eax, 1 */
  EAX = (0x1u);
  /* 104ad0cb jmp 0x104ad137 */
  goto L_104ad137;
L_104ad0cd:;
  /* 104ad0cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad0d0 mov dword ptr [0x104cdc98], eax */
  w32((uint32_t)(0x104cdc98), (EAX));
  /* 104ad0d5 mov ecx, dword ptr [0x104ce64c] */
  ECX = (r32((uint32_t)(0x104ce64c)));
  /* 104ad0db push ecx */
  push32((uint32_t)(ECX));
  /* 104ad0dc call 0x104ad6d0 */
  push32(0x104ad0e1u); f_104ad6d0();
  /* 104ad0e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad0e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad0e6 mov edx, dword ptr [0x104ce64c] */
  EDX = (r32((uint32_t)(0x104ce64c)));
  /* 104ad0ec push edx */
  push32((uint32_t)(EDX));
  /* 104ad0ed call 0x104a3320 */
  push32(0x104ad0f2u); f_104a3320();
  /* 104ad0f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad0f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad0f8 mov dword ptr [0x104ce64c], eax */
  w32((uint32_t)(0x104ce64c), (EAX));
  /* 104ad0fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ad0ff jmp 0x104ad137 */
  goto L_104ad137;
L_104ad101:;
  /* 104ad101 mov dword ptr [0x104cdc98], 0x104cdca0 */
  w32((uint32_t)(0x104cdc98), (0x104cdca0u));
  /* 104ad10b mov ecx, dword ptr [0x104ce64c] */
  ECX = (r32((uint32_t)(0x104ce64c)));
  /* 104ad111 push ecx */
  push32((uint32_t)(ECX));
  /* 104ad112 call 0x104ad6d0 */
  push32(0x104ad117u); f_104ad6d0();
  /* 104ad117 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad11a push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad11c mov edx, dword ptr [0x104ce64c] */
  EDX = (r32((uint32_t)(0x104ce64c)));
  /* 104ad122 push edx */
  push32((uint32_t)(EDX));
  /* 104ad123 call 0x104a3320 */
  push32(0x104ad128u); f_104a3320();
  /* 104ad128 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad12b mov dword ptr [0x104ce64c], 0 */
  w32((uint32_t)(0x104ce64c), (0x0u));
  /* 104ad135 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104ad137:;
  /* 104ad137 mov esp, ebp */
  ESP = (EBP);
  /* 104ad139 pop ebp */
  EBP = (pop32());
  /* 104ad13a ret  */
  ESPCHK(0x104ad060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d140 @ 0x104ad140 (1423 bytes, 533 insns) */
void f_104ad140(void) {
  FTRACE(0x104ad140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ad140 push ebp */
  push32((uint32_t)(EBP));
  /* 104ad141 mov ebp, esp */
  EBP = (ESP);
  /* 104ad143 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ad146 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104ad14d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ad14f mov ax, word ptr [0x104ce686] */
  AX = (r16((uint32_t)(0x104ce686)));
  /* 104ad155 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ad158 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad15a mov cx, word ptr [0x104ce688] */
  CX = (r16((uint32_t)(0x104ce688)));
  /* 104ad161 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ad164 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ad168 jne 0x104ad172 */
  if (!C.zf) goto L_104ad172;
  /* 104ad16a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ad16d jmp 0x104ad6cb */
  goto L_104ad6cb;
L_104ad172:;
  /* 104ad172 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad175 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad178 push edx */
  push32((uint32_t)(EDX));
  /* 104ad179 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 104ad17b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad17e push eax */
  push32((uint32_t)(EAX));
  /* 104ad17f push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad181 call 0x104b0a50 */
  push32(0x104ad186u); f_104b0a50();
  /* 104ad186 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad189 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad18c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad18e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad191 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad194 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad197 push edx */
  push32((uint32_t)(EDX));
  /* 104ad198 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 104ad19a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad19d push eax */
  push32((uint32_t)(EAX));
  /* 104ad19e push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad1a0 call 0x104b0a50 */
  push32(0x104ad1a5u); f_104b0a50();
  /* 104ad1a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad1a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad1ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad1ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad1b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad1b3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad1b6 push edx */
  push32((uint32_t)(EDX));
  /* 104ad1b7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 104ad1b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad1bc push eax */
  push32((uint32_t)(EAX));
  /* 104ad1bd push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad1bf call 0x104b0a50 */
  push32(0x104ad1c4u); f_104b0a50();
  /* 104ad1c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad1c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad1ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad1cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad1cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad1d2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad1d5 push edx */
  push32((uint32_t)(EDX));
  /* 104ad1d6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 104ad1d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad1db push eax */
  push32((uint32_t)(EAX));
  /* 104ad1dc push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad1de call 0x104b0a50 */
  push32(0x104ad1e3u); f_104b0a50();
  /* 104ad1e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad1e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad1e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad1eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad1ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad1f1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad1f4 push edx */
  push32((uint32_t)(EDX));
  /* 104ad1f5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 104ad1f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad1fa push eax */
  push32((uint32_t)(EAX));
  /* 104ad1fb push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad1fd call 0x104b0a50 */
  push32(0x104ad202u); f_104b0a50();
  /* 104ad202 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad205 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad208 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad20a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad20d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad210 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad213 push edx */
  push32((uint32_t)(EDX));
  /* 104ad214 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 104ad216 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad219 push eax */
  push32((uint32_t)(EAX));
  /* 104ad21a push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad21c call 0x104b0a50 */
  push32(0x104ad221u); f_104b0a50();
  /* 104ad221 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad224 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad227 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad229 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad22c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad22f push edx */
  push32((uint32_t)(EDX));
  /* 104ad230 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 104ad232 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad235 push eax */
  push32((uint32_t)(EAX));
  /* 104ad236 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad238 call 0x104b0a50 */
  push32(0x104ad23du); f_104b0a50();
  /* 104ad23d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad240 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad243 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad245 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad248 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad24b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad24e push edx */
  push32((uint32_t)(EDX));
  /* 104ad24f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 104ad251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad254 push eax */
  push32((uint32_t)(EAX));
  /* 104ad255 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad257 call 0x104b0a50 */
  push32(0x104ad25cu); f_104b0a50();
  /* 104ad25c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad25f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad262 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad264 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad267 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad26a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad26d push edx */
  push32((uint32_t)(EDX));
  /* 104ad26e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 104ad270 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad273 push eax */
  push32((uint32_t)(EAX));
  /* 104ad274 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad276 call 0x104b0a50 */
  push32(0x104ad27bu); f_104b0a50();
  /* 104ad27b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad27e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad281 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad283 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad286 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad289 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad28c push edx */
  push32((uint32_t)(EDX));
  /* 104ad28d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 104ad28f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad292 push eax */
  push32((uint32_t)(EAX));
  /* 104ad293 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad295 call 0x104b0a50 */
  push32(0x104ad29au); f_104b0a50();
  /* 104ad29a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad29d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad2a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad2a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad2a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad2a8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad2ab push edx */
  push32((uint32_t)(EDX));
  /* 104ad2ac push 0x2d */
  push32((uint32_t)(0x2du));
  /* 104ad2ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad2b1 push eax */
  push32((uint32_t)(EAX));
  /* 104ad2b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad2b4 call 0x104b0a50 */
  push32(0x104ad2b9u); f_104b0a50();
  /* 104ad2b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad2bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad2bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad2c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad2c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad2c7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad2ca push edx */
  push32((uint32_t)(EDX));
  /* 104ad2cb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 104ad2cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad2d0 push eax */
  push32((uint32_t)(EAX));
  /* 104ad2d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad2d3 call 0x104b0a50 */
  push32(0x104ad2d8u); f_104b0a50();
  /* 104ad2d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad2db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad2de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad2e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad2e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad2e6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad2e9 push edx */
  push32((uint32_t)(EDX));
  /* 104ad2ea push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 104ad2ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad2ef push eax */
  push32((uint32_t)(EAX));
  /* 104ad2f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad2f2 call 0x104b0a50 */
  push32(0x104ad2f7u); f_104b0a50();
  /* 104ad2f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad2fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad2fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad2ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad302 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad305 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad308 push edx */
  push32((uint32_t)(EDX));
  /* 104ad309 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 104ad30b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad30e push eax */
  push32((uint32_t)(EAX));
  /* 104ad30f push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad311 call 0x104b0a50 */
  push32(0x104ad316u); f_104b0a50();
  /* 104ad316 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad319 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad31c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad31e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad321 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad324 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad327 push edx */
  push32((uint32_t)(EDX));
  /* 104ad328 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 104ad32a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad32d push eax */
  push32((uint32_t)(EAX));
  /* 104ad32e push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad330 call 0x104b0a50 */
  push32(0x104ad335u); f_104b0a50();
  /* 104ad335 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad338 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad33b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad33d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad340 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad343 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad346 push edx */
  push32((uint32_t)(EDX));
  /* 104ad347 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 104ad349 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad34c push eax */
  push32((uint32_t)(EAX));
  /* 104ad34d push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad34f call 0x104b0a50 */
  push32(0x104ad354u); f_104b0a50();
  /* 104ad354 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad357 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad35a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad35c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad35f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad362 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad365 push edx */
  push32((uint32_t)(EDX));
  /* 104ad366 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 104ad368 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad36b push eax */
  push32((uint32_t)(EAX));
  /* 104ad36c push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad36e call 0x104b0a50 */
  push32(0x104ad373u); f_104b0a50();
  /* 104ad373 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad376 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad379 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad37b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad37e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad381 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad384 push edx */
  push32((uint32_t)(EDX));
  /* 104ad385 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 104ad387 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad38a push eax */
  push32((uint32_t)(EAX));
  /* 104ad38b push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad38d call 0x104b0a50 */
  push32(0x104ad392u); f_104b0a50();
  /* 104ad392 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad395 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad398 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad39a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad39d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad3a0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad3a3 push edx */
  push32((uint32_t)(EDX));
  /* 104ad3a4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 104ad3a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad3a9 push eax */
  push32((uint32_t)(EAX));
  /* 104ad3aa push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad3ac call 0x104b0a50 */
  push32(0x104ad3b1u); f_104b0a50();
  /* 104ad3b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad3b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad3b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad3b9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad3bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad3bf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad3c2 push edx */
  push32((uint32_t)(EDX));
  /* 104ad3c3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 104ad3c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad3c8 push eax */
  push32((uint32_t)(EAX));
  /* 104ad3c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad3cb call 0x104b0a50 */
  push32(0x104ad3d0u); f_104b0a50();
  /* 104ad3d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad3d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad3d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad3d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad3db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad3de add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad3e1 push edx */
  push32((uint32_t)(EDX));
  /* 104ad3e2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 104ad3e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad3e7 push eax */
  push32((uint32_t)(EAX));
  /* 104ad3e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad3ea call 0x104b0a50 */
  push32(0x104ad3efu); f_104b0a50();
  /* 104ad3ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad3f2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad3f5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad3f7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad3fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad3fd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad400 push edx */
  push32((uint32_t)(EDX));
  /* 104ad401 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 104ad403 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad406 push eax */
  push32((uint32_t)(EAX));
  /* 104ad407 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad409 call 0x104b0a50 */
  push32(0x104ad40eu); f_104b0a50();
  /* 104ad40e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad411 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad414 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad416 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad419 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad41c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad41f push edx */
  push32((uint32_t)(EDX));
  /* 104ad420 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 104ad422 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad425 push eax */
  push32((uint32_t)(EAX));
  /* 104ad426 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad428 call 0x104b0a50 */
  push32(0x104ad42du); f_104b0a50();
  /* 104ad42d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad430 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad433 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad435 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad438 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad43b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad43e push edx */
  push32((uint32_t)(EDX));
  /* 104ad43f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 104ad441 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad444 push eax */
  push32((uint32_t)(EAX));
  /* 104ad445 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad447 call 0x104b0a50 */
  push32(0x104ad44cu); f_104b0a50();
  /* 104ad44c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad44f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad452 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad454 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad457 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad45a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad45d push edx */
  push32((uint32_t)(EDX));
  /* 104ad45e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 104ad460 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad463 push eax */
  push32((uint32_t)(EAX));
  /* 104ad464 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad466 call 0x104b0a50 */
  push32(0x104ad46bu); f_104b0a50();
  /* 104ad46b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad46e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad471 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad473 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad476 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad479 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad47c push edx */
  push32((uint32_t)(EDX));
  /* 104ad47d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 104ad47f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad482 push eax */
  push32((uint32_t)(EAX));
  /* 104ad483 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad485 call 0x104b0a50 */
  push32(0x104ad48au); f_104b0a50();
  /* 104ad48a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad48d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad490 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad492 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad495 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad498 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad49b push edx */
  push32((uint32_t)(EDX));
  /* 104ad49c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 104ad49e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad4a1 push eax */
  push32((uint32_t)(EAX));
  /* 104ad4a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad4a4 call 0x104b0a50 */
  push32(0x104ad4a9u); f_104b0a50();
  /* 104ad4a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad4ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad4af or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad4b1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad4b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad4b7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad4ba push edx */
  push32((uint32_t)(EDX));
  /* 104ad4bb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 104ad4bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad4c0 push eax */
  push32((uint32_t)(EAX));
  /* 104ad4c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad4c3 call 0x104b0a50 */
  push32(0x104ad4c8u); f_104b0a50();
  /* 104ad4c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad4cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad4ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad4d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad4d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad4d6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad4d9 push edx */
  push32((uint32_t)(EDX));
  /* 104ad4da push 0x3a */
  push32((uint32_t)(0x3au));
  /* 104ad4dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad4df push eax */
  push32((uint32_t)(EAX));
  /* 104ad4e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad4e2 call 0x104b0a50 */
  push32(0x104ad4e7u); f_104b0a50();
  /* 104ad4e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad4ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad4ed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad4ef mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad4f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad4f5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad4f8 push edx */
  push32((uint32_t)(EDX));
  /* 104ad4f9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 104ad4fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad4fe push eax */
  push32((uint32_t)(EAX));
  /* 104ad4ff push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad501 call 0x104b0a50 */
  push32(0x104ad506u); f_104b0a50();
  /* 104ad506 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad509 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad50c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad50e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad511 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad514 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad517 push edx */
  push32((uint32_t)(EDX));
  /* 104ad518 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 104ad51a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad51d push eax */
  push32((uint32_t)(EAX));
  /* 104ad51e push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad520 call 0x104b0a50 */
  push32(0x104ad525u); f_104b0a50();
  /* 104ad525 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad528 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad52b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad52d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad530 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad533 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad536 push edx */
  push32((uint32_t)(EDX));
  /* 104ad537 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 104ad539 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad53c push eax */
  push32((uint32_t)(EAX));
  /* 104ad53d push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad53f call 0x104b0a50 */
  push32(0x104ad544u); f_104b0a50();
  /* 104ad544 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad547 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad54a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad54c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad54f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad552 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad558 push edx */
  push32((uint32_t)(EDX));
  /* 104ad559 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 104ad55b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad55e push eax */
  push32((uint32_t)(EAX));
  /* 104ad55f push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad561 call 0x104b0a50 */
  push32(0x104ad566u); f_104b0a50();
  /* 104ad566 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad569 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad56c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad56e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad571 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad574 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad57a push edx */
  push32((uint32_t)(EDX));
  /* 104ad57b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 104ad57d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad580 push eax */
  push32((uint32_t)(EAX));
  /* 104ad581 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad583 call 0x104b0a50 */
  push32(0x104ad588u); f_104b0a50();
  /* 104ad588 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad58b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad58e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad590 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad593 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad596 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad59c push edx */
  push32((uint32_t)(EDX));
  /* 104ad59d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 104ad59f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad5a2 push eax */
  push32((uint32_t)(EAX));
  /* 104ad5a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad5a5 call 0x104b0a50 */
  push32(0x104ad5aau); f_104b0a50();
  /* 104ad5aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad5ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad5b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad5b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad5b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad5b8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad5be push edx */
  push32((uint32_t)(EDX));
  /* 104ad5bf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 104ad5c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad5c4 push eax */
  push32((uint32_t)(EAX));
  /* 104ad5c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad5c7 call 0x104b0a50 */
  push32(0x104ad5ccu); f_104b0a50();
  /* 104ad5cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad5cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad5d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad5d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad5d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad5da add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad5e0 push edx */
  push32((uint32_t)(EDX));
  /* 104ad5e1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 104ad5e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad5e6 push eax */
  push32((uint32_t)(EAX));
  /* 104ad5e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad5e9 call 0x104b0a50 */
  push32(0x104ad5eeu); f_104b0a50();
  /* 104ad5ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad5f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad5f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad5f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad5f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad5fc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad602 push edx */
  push32((uint32_t)(EDX));
  /* 104ad603 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 104ad605 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad608 push eax */
  push32((uint32_t)(EAX));
  /* 104ad609 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad60b call 0x104b0a50 */
  push32(0x104ad610u); f_104b0a50();
  /* 104ad610 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad613 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad616 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad618 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad61b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad61e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad624 push edx */
  push32((uint32_t)(EDX));
  /* 104ad625 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 104ad627 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad62a push eax */
  push32((uint32_t)(EAX));
  /* 104ad62b push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad62d call 0x104b0a50 */
  push32(0x104ad632u); f_104b0a50();
  /* 104ad632 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad635 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad638 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad63a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad63d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad640 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad646 push edx */
  push32((uint32_t)(EDX));
  /* 104ad647 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 104ad649 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ad64c push eax */
  push32((uint32_t)(EAX));
  /* 104ad64d push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad64f call 0x104b0a50 */
  push32(0x104ad654u); f_104b0a50();
  /* 104ad654 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad657 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad65a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad65c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad65f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad662 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad668 push edx */
  push32((uint32_t)(EDX));
  /* 104ad669 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 104ad66b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ad66e push eax */
  push32((uint32_t)(EAX));
  /* 104ad66f push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad671 call 0x104b0a50 */
  push32(0x104ad676u); f_104b0a50();
  /* 104ad676 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad679 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad67c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad67e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad681 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad684 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad68a push edx */
  push32((uint32_t)(EDX));
  /* 104ad68b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 104ad68d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ad690 push eax */
  push32((uint32_t)(EAX));
  /* 104ad691 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad693 call 0x104b0a50 */
  push32(0x104ad698u); f_104b0a50();
  /* 104ad698 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad69b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad69e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad6a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad6a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad6a6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad6ac push edx */
  push32((uint32_t)(EDX));
  /* 104ad6ad push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 104ad6b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ad6b5 push eax */
  push32((uint32_t)(EAX));
  /* 104ad6b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ad6b8 call 0x104b0a50 */
  push32(0x104ad6bdu); f_104b0a50();
  /* 104ad6bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad6c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ad6c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ad6c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ad6c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_104ad6cb:;
  /* 104ad6cb mov esp, ebp */
  ESP = (EBP);
  /* 104ad6cd pop ebp */
  EBP = (pop32());
  /* 104ad6ce ret  */
  ESPCHK(0x104ad140u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x104ad6d0 (779 bytes, 265 insns) */
void f_104ad6d0(void) {
  FTRACE(0x104ad6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ad6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ad6d1 mov ebp, esp */
  EBP = (ESP);
  /* 104ad6d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ad6d7 jne 0x104ad6de */
  if (!C.zf) goto L_104ad6de;
  /* 104ad6d9 jmp 0x104ad9d9 */
  goto L_104ad9d9;
L_104ad6de:;
  /* 104ad6de push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad6e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad6e3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104ad6e6 push ecx */
  push32((uint32_t)(ECX));
  /* 104ad6e7 call 0x104a3320 */
  push32(0x104ad6ecu); f_104a3320();
  /* 104ad6ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad6ef push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad6f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad6f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104ad6f7 push eax */
  push32((uint32_t)(EAX));
  /* 104ad6f8 call 0x104a3320 */
  push32(0x104ad6fdu); f_104a3320();
  /* 104ad6fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad700 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad702 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad705 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104ad708 push edx */
  push32((uint32_t)(EDX));
  /* 104ad709 call 0x104a3320 */
  push32(0x104ad70eu); f_104a3320();
  /* 104ad70e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad711 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad713 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad716 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104ad719 push ecx */
  push32((uint32_t)(ECX));
  /* 104ad71a call 0x104a3320 */
  push32(0x104ad71fu); f_104a3320();
  /* 104ad71f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad722 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad724 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad727 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104ad72a push eax */
  push32((uint32_t)(EAX));
  /* 104ad72b call 0x104a3320 */
  push32(0x104ad730u); f_104a3320();
  /* 104ad730 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad733 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad735 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad738 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 104ad73b push edx */
  push32((uint32_t)(EDX));
  /* 104ad73c call 0x104a3320 */
  push32(0x104ad741u); f_104a3320();
  /* 104ad741 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad744 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad749 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104ad74b push ecx */
  push32((uint32_t)(ECX));
  /* 104ad74c call 0x104a3320 */
  push32(0x104ad751u); f_104a3320();
  /* 104ad751 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad754 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad756 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad759 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 104ad75c push eax */
  push32((uint32_t)(EAX));
  /* 104ad75d call 0x104a3320 */
  push32(0x104ad762u); f_104a3320();
  /* 104ad762 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad765 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad767 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad76a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 104ad76d push edx */
  push32((uint32_t)(EDX));
  /* 104ad76e call 0x104a3320 */
  push32(0x104ad773u); f_104a3320();
  /* 104ad773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad776 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad778 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad77b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 104ad77e push ecx */
  push32((uint32_t)(ECX));
  /* 104ad77f call 0x104a3320 */
  push32(0x104ad784u); f_104a3320();
  /* 104ad784 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad787 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad789 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad78c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 104ad78f push eax */
  push32((uint32_t)(EAX));
  /* 104ad790 call 0x104a3320 */
  push32(0x104ad795u); f_104a3320();
  /* 104ad795 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad798 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad79a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad79d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 104ad7a0 push edx */
  push32((uint32_t)(EDX));
  /* 104ad7a1 call 0x104a3320 */
  push32(0x104ad7a6u); f_104a3320();
  /* 104ad7a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad7a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad7ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad7ae mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 104ad7b1 push ecx */
  push32((uint32_t)(ECX));
  /* 104ad7b2 call 0x104a3320 */
  push32(0x104ad7b7u); f_104a3320();
  /* 104ad7b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad7ba push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad7bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad7bf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 104ad7c2 push eax */
  push32((uint32_t)(EAX));
  /* 104ad7c3 call 0x104a3320 */
  push32(0x104ad7c8u); f_104a3320();
  /* 104ad7c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad7cb push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad7cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad7d0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 104ad7d3 push edx */
  push32((uint32_t)(EDX));
  /* 104ad7d4 call 0x104a3320 */
  push32(0x104ad7d9u); f_104a3320();
  /* 104ad7d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad7dc push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad7de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad7e1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 104ad7e4 push ecx */
  push32((uint32_t)(ECX));
  /* 104ad7e5 call 0x104a3320 */
  push32(0x104ad7eau); f_104a3320();
  /* 104ad7ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad7ed push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad7ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad7f2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 104ad7f5 push eax */
  push32((uint32_t)(EAX));
  /* 104ad7f6 call 0x104a3320 */
  push32(0x104ad7fbu); f_104a3320();
  /* 104ad7fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad7fe push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad800 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad803 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 104ad806 push edx */
  push32((uint32_t)(EDX));
  /* 104ad807 call 0x104a3320 */
  push32(0x104ad80cu); f_104a3320();
  /* 104ad80c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad80f push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad811 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad814 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 104ad817 push ecx */
  push32((uint32_t)(ECX));
  /* 104ad818 call 0x104a3320 */
  push32(0x104ad81du); f_104a3320();
  /* 104ad81d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad820 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad822 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad825 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 104ad828 push eax */
  push32((uint32_t)(EAX));
  /* 104ad829 call 0x104a3320 */
  push32(0x104ad82eu); f_104a3320();
  /* 104ad82e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad831 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad833 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad836 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 104ad839 push edx */
  push32((uint32_t)(EDX));
  /* 104ad83a call 0x104a3320 */
  push32(0x104ad83fu); f_104a3320();
  /* 104ad83f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad842 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad844 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad847 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 104ad84a push ecx */
  push32((uint32_t)(ECX));
  /* 104ad84b call 0x104a3320 */
  push32(0x104ad850u); f_104a3320();
  /* 104ad850 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad853 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad855 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad858 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 104ad85b push eax */
  push32((uint32_t)(EAX));
  /* 104ad85c call 0x104a3320 */
  push32(0x104ad861u); f_104a3320();
  /* 104ad861 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad864 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad866 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad869 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 104ad86c push edx */
  push32((uint32_t)(EDX));
  /* 104ad86d call 0x104a3320 */
  push32(0x104ad872u); f_104a3320();
  /* 104ad872 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad875 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad877 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad87a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 104ad87d push ecx */
  push32((uint32_t)(ECX));
  /* 104ad87e call 0x104a3320 */
  push32(0x104ad883u); f_104a3320();
  /* 104ad883 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad886 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad888 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad88b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 104ad88e push eax */
  push32((uint32_t)(EAX));
  /* 104ad88f call 0x104a3320 */
  push32(0x104ad894u); f_104a3320();
  /* 104ad894 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad897 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad899 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad89c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 104ad89f push edx */
  push32((uint32_t)(EDX));
  /* 104ad8a0 call 0x104a3320 */
  push32(0x104ad8a5u); f_104a3320();
  /* 104ad8a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad8a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad8aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad8ad mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 104ad8b0 push ecx */
  push32((uint32_t)(ECX));
  /* 104ad8b1 call 0x104a3320 */
  push32(0x104ad8b6u); f_104a3320();
  /* 104ad8b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad8b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad8bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad8be mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 104ad8c1 push eax */
  push32((uint32_t)(EAX));
  /* 104ad8c2 call 0x104a3320 */
  push32(0x104ad8c7u); f_104a3320();
  /* 104ad8c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad8ca push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad8cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad8cf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 104ad8d2 push edx */
  push32((uint32_t)(EDX));
  /* 104ad8d3 call 0x104a3320 */
  push32(0x104ad8d8u); f_104a3320();
  /* 104ad8d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad8db push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad8dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad8e0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 104ad8e3 push ecx */
  push32((uint32_t)(ECX));
  /* 104ad8e4 call 0x104a3320 */
  push32(0x104ad8e9u); f_104a3320();
  /* 104ad8e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad8ec push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad8ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad8f1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 104ad8f4 push eax */
  push32((uint32_t)(EAX));
  /* 104ad8f5 call 0x104a3320 */
  push32(0x104ad8fau); f_104a3320();
  /* 104ad8fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad8fd push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad8ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad902 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 104ad908 push edx */
  push32((uint32_t)(EDX));
  /* 104ad909 call 0x104a3320 */
  push32(0x104ad90eu); f_104a3320();
  /* 104ad90e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad911 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad916 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 104ad91c push ecx */
  push32((uint32_t)(ECX));
  /* 104ad91d call 0x104a3320 */
  push32(0x104ad922u); f_104a3320();
  /* 104ad922 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad925 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad927 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad92a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 104ad930 push eax */
  push32((uint32_t)(EAX));
  /* 104ad931 call 0x104a3320 */
  push32(0x104ad936u); f_104a3320();
  /* 104ad936 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad939 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad93b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad93e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 104ad944 push edx */
  push32((uint32_t)(EDX));
  /* 104ad945 call 0x104a3320 */
  push32(0x104ad94au); f_104a3320();
  /* 104ad94a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad94d push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad94f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad952 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 104ad958 push ecx */
  push32((uint32_t)(ECX));
  /* 104ad959 call 0x104a3320 */
  push32(0x104ad95eu); f_104a3320();
  /* 104ad95e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad961 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad963 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad966 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 104ad96c push eax */
  push32((uint32_t)(EAX));
  /* 104ad96d call 0x104a3320 */
  push32(0x104ad972u); f_104a3320();
  /* 104ad972 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad975 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad977 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad97a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 104ad980 push edx */
  push32((uint32_t)(EDX));
  /* 104ad981 call 0x104a3320 */
  push32(0x104ad986u); f_104a3320();
  /* 104ad986 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad989 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad98b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad98e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 104ad994 push ecx */
  push32((uint32_t)(ECX));
  /* 104ad995 call 0x104a3320 */
  push32(0x104ad99au); f_104a3320();
  /* 104ad99a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad99d push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad99f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad9a2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 104ad9a8 push eax */
  push32((uint32_t)(EAX));
  /* 104ad9a9 call 0x104a3320 */
  push32(0x104ad9aeu); f_104a3320();
  /* 104ad9ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad9b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad9b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad9b6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 104ad9bc push edx */
  push32((uint32_t)(EDX));
  /* 104ad9bd call 0x104a3320 */
  push32(0x104ad9c2u); f_104a3320();
  /* 104ad9c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ad9c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ad9c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ad9ca mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 104ad9d0 push ecx */
  push32((uint32_t)(ECX));
  /* 104ad9d1 call 0x104a3320 */
  push32(0x104ad9d6u); f_104a3320();
  /* 104ad9d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ad9d9:;
  /* 104ad9d9 pop ebp */
  EBP = (pop32());
  /* 104ad9da ret  */
  ESPCHK(0x104ad6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9e0 @ 0x104ad9e0 (678 bytes, 180 insns) */
void f_104ad9e0(void) {
  FTRACE(0x104ad9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ad9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ad9e1 mov ebp, esp */
  EBP = (ESP);
  /* 104ad9e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ad9e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104ad9ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ad9ef mov ax, word ptr [0x104ce682] */
  AX = (r16((uint32_t)(0x104ce682)));
  /* 104ad9f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ad9f8 cmp dword ptr [0x104ce628], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce628))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ad9ff je 0x104adb5a */
  if (C.zf) goto L_104adb5a;
  /* 104ada05 push 0x104ce650 */
  push32((uint32_t)(0x104ce650u));
  /* 104ada0a push 0xe */
  push32((uint32_t)(0xeu));
  /* 104ada0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ada0f push ecx */
  push32((uint32_t)(ECX));
  /* 104ada10 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ada12 call 0x104b0a50 */
  push32(0x104ada17u); f_104b0a50();
  /* 104ada17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ada1a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ada1d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104ada1f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104ada22 push 0x104ce654 */
  push32((uint32_t)(0x104ce654u));
  /* 104ada27 push 0xf */
  push32((uint32_t)(0xfu));
  /* 104ada29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ada2c push eax */
  push32((uint32_t)(EAX));
  /* 104ada2d push 1 */
  push32((uint32_t)(0x1u));
  /* 104ada2f call 0x104b0a50 */
  push32(0x104ada34u); f_104b0a50();
  /* 104ada34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ada37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ada3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ada3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ada3f push 0x104ce658 */
  push32((uint32_t)(0x104ce658u));
  /* 104ada44 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 104ada46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ada49 push edx */
  push32((uint32_t)(EDX));
  /* 104ada4a push 1 */
  push32((uint32_t)(0x1u));
  /* 104ada4c call 0x104b0a50 */
  push32(0x104ada51u); f_104b0a50();
  /* 104ada51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ada54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ada57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ada59 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ada5c mov edx, dword ptr [0x104ce658] */
  EDX = (r32((uint32_t)(0x104ce658)));
  /* 104ada62 push edx */
  push32((uint32_t)(EDX));
  /* 104ada63 call 0x104adc90 */
  push32(0x104ada68u); f_104adc90();
  /* 104ada68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ada6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ada6f je 0x104adac9 */
  if (C.zf) goto L_104adac9;
  /* 104ada71 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ada73 mov eax, dword ptr [0x104ce650] */
  EAX = (r32((uint32_t)(0x104ce650)));
  /* 104ada78 push eax */
  push32((uint32_t)(EAX));
  /* 104ada79 call 0x104a3320 */
  push32(0x104ada7eu); f_104a3320();
  /* 104ada7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ada81 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ada83 mov ecx, dword ptr [0x104ce654] */
  ECX = (r32((uint32_t)(0x104ce654)));
  /* 104ada89 push ecx */
  push32((uint32_t)(ECX));
  /* 104ada8a call 0x104a3320 */
  push32(0x104ada8fu); f_104a3320();
  /* 104ada8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ada92 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ada94 mov edx, dword ptr [0x104ce658] */
  EDX = (r32((uint32_t)(0x104ce658)));
  /* 104ada9a push edx */
  push32((uint32_t)(EDX));
  /* 104ada9b call 0x104a3320 */
  push32(0x104adaa0u); f_104a3320();
  /* 104adaa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adaa3 mov dword ptr [0x104ce650], 0 */
  w32((uint32_t)(0x104ce650), (0x0u));
  /* 104adaad mov dword ptr [0x104ce654], 0 */
  w32((uint32_t)(0x104ce654), (0x0u));
  /* 104adab7 mov dword ptr [0x104ce658], 0 */
  w32((uint32_t)(0x104ce658), (0x0u));
  /* 104adac1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104adac4 jmp 0x104adc82 */
  goto L_104adc82;
L_104adac9:;
  /* 104adac9 mov eax, dword ptr [0x104cdd88] */
  EAX = (r32((uint32_t)(0x104cdd88)));
  /* 104adace cmp dword ptr [eax], 0x104cdd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x104cdd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104adad4 je 0x104adb10 */
  if (C.zf) goto L_104adb10;
  /* 104adad6 push 2 */
  push32((uint32_t)(0x2u));
  /* 104adad8 mov ecx, dword ptr [0x104cdd88] */
  ECX = (r32((uint32_t)(0x104cdd88)));
  /* 104adade mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104adae0 push edx */
  push32((uint32_t)(EDX));
  /* 104adae1 call 0x104a3320 */
  push32(0x104adae6u); f_104a3320();
  /* 104adae6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adae9 push 2 */
  push32((uint32_t)(0x2u));
  /* 104adaeb mov eax, dword ptr [0x104cdd88] */
  EAX = (r32((uint32_t)(0x104cdd88)));
  /* 104adaf0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104adaf3 push ecx */
  push32((uint32_t)(ECX));
  /* 104adaf4 call 0x104a3320 */
  push32(0x104adaf9u); f_104a3320();
  /* 104adaf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adafc push 2 */
  push32((uint32_t)(0x2u));
  /* 104adafe mov edx, dword ptr [0x104cdd88] */
  EDX = (r32((uint32_t)(0x104cdd88)));
  /* 104adb04 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104adb07 push eax */
  push32((uint32_t)(EAX));
  /* 104adb08 call 0x104a3320 */
  push32(0x104adb0du); f_104a3320();
  /* 104adb0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104adb10:;
  /* 104adb10 mov ecx, dword ptr [0x104cdd88] */
  ECX = (r32((uint32_t)(0x104cdd88)));
  /* 104adb16 mov edx, dword ptr [0x104ce650] */
  EDX = (r32((uint32_t)(0x104ce650)));
  /* 104adb1c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104adb1e mov eax, dword ptr [0x104cdd88] */
  EAX = (r32((uint32_t)(0x104cdd88)));
  /* 104adb23 mov ecx, dword ptr [0x104ce654] */
  ECX = (r32((uint32_t)(0x104ce654)));
  /* 104adb29 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 104adb2c mov edx, dword ptr [0x104cdd88] */
  EDX = (r32((uint32_t)(0x104cdd88)));
  /* 104adb32 mov eax, dword ptr [0x104ce658] */
  EAX = (r32((uint32_t)(0x104ce658)));
  /* 104adb37 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104adb3a mov ecx, dword ptr [0x104cdd88] */
  ECX = (r32((uint32_t)(0x104cdd88)));
  /* 104adb40 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104adb42 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104adb44 mov byte ptr [0x104ccea8], al */
  w8((uint32_t)(0x104ccea8), (AL));
  /* 104adb49 mov dword ptr [0x104cceac], 1 */
  w32((uint32_t)(0x104cceac), (0x1u));
  /* 104adb53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104adb55 jmp 0x104adc82 */
  goto L_104adc82;
L_104adb5a:;
  /* 104adb5a push 2 */
  push32((uint32_t)(0x2u));
  /* 104adb5c mov ecx, dword ptr [0x104ce650] */
  ECX = (r32((uint32_t)(0x104ce650)));
  /* 104adb62 push ecx */
  push32((uint32_t)(ECX));
  /* 104adb63 call 0x104a3320 */
  push32(0x104adb68u); f_104a3320();
  /* 104adb68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adb6b push 2 */
  push32((uint32_t)(0x2u));
  /* 104adb6d mov edx, dword ptr [0x104ce654] */
  EDX = (r32((uint32_t)(0x104ce654)));
  /* 104adb73 push edx */
  push32((uint32_t)(EDX));
  /* 104adb74 call 0x104a3320 */
  push32(0x104adb79u); f_104a3320();
  /* 104adb79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adb7c push 2 */
  push32((uint32_t)(0x2u));
  /* 104adb7e mov eax, dword ptr [0x104ce658] */
  EAX = (r32((uint32_t)(0x104ce658)));
  /* 104adb83 push eax */
  push32((uint32_t)(EAX));
  /* 104adb84 call 0x104a3320 */
  push32(0x104adb89u); f_104a3320();
  /* 104adb89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adb8c mov dword ptr [0x104ce650], 0 */
  w32((uint32_t)(0x104ce650), (0x0u));
  /* 104adb96 mov dword ptr [0x104ce654], 0 */
  w32((uint32_t)(0x104ce654), (0x0u));
  /* 104adba0 mov dword ptr [0x104ce658], 0 */
  w32((uint32_t)(0x104ce658), (0x0u));
  /* 104adbaa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 104adbaf push 0x104ca004 */
  push32((uint32_t)(0x104ca004u));
  /* 104adbb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 104adbb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 104adbb8 call 0x104a2890 */
  push32(0x104adbbdu); f_104a2890();
  /* 104adbbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adbc0 mov ecx, dword ptr [0x104cdd88] */
  ECX = (r32((uint32_t)(0x104cdd88)));
  /* 104adbc6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104adbc8 mov edx, dword ptr [0x104cdd88] */
  EDX = (r32((uint32_t)(0x104cdd88)));
  /* 104adbce cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104adbd1 jne 0x104adbdb */
  if (!C.zf) goto L_104adbdb;
  /* 104adbd3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104adbd6 jmp 0x104adc82 */
  goto L_104adc82;
L_104adbdb:;
  /* 104adbdb push 0x104c9fd4 */
  push32((uint32_t)(0x104c9fd4u));
  /* 104adbe0 mov eax, dword ptr [0x104cdd88] */
  EAX = (r32((uint32_t)(0x104cdd88)));
  /* 104adbe5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104adbe7 push ecx */
  push32((uint32_t)(ECX));
  /* 104adbe8 call 0x104a5840 */
  push32(0x104adbedu); f_104a5840();
  /* 104adbed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adbf0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 104adbf5 push 0x104ca004 */
  push32((uint32_t)(0x104ca004u));
  /* 104adbfa push 2 */
  push32((uint32_t)(0x2u));
  /* 104adbfc push 2 */
  push32((uint32_t)(0x2u));
  /* 104adbfe call 0x104a2890 */
  push32(0x104adc03u); f_104a2890();
  /* 104adc03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adc06 mov edx, dword ptr [0x104cdd88] */
  EDX = (r32((uint32_t)(0x104cdd88)));
  /* 104adc0c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 104adc0f mov eax, dword ptr [0x104cdd88] */
  EAX = (r32((uint32_t)(0x104cdd88)));
  /* 104adc14 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104adc18 jne 0x104adc1f */
  if (!C.zf) goto L_104adc1f;
  /* 104adc1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104adc1d jmp 0x104adc82 */
  goto L_104adc82;
L_104adc1f:;
  /* 104adc1f mov ecx, dword ptr [0x104cdd88] */
  ECX = (r32((uint32_t)(0x104cdd88)));
  /* 104adc25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104adc28 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 104adc2b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 104adc30 push 0x104ca004 */
  push32((uint32_t)(0x104ca004u));
  /* 104adc35 push 2 */
  push32((uint32_t)(0x2u));
  /* 104adc37 push 2 */
  push32((uint32_t)(0x2u));
  /* 104adc39 call 0x104a2890 */
  push32(0x104adc3eu); f_104a2890();
  /* 104adc3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adc41 mov ecx, dword ptr [0x104cdd88] */
  ECX = (r32((uint32_t)(0x104cdd88)));
  /* 104adc47 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 104adc4a mov edx, dword ptr [0x104cdd88] */
  EDX = (r32((uint32_t)(0x104cdd88)));
  /* 104adc50 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104adc54 jne 0x104adc5b */
  if (!C.zf) goto L_104adc5b;
  /* 104adc56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104adc59 jmp 0x104adc82 */
  goto L_104adc82;
L_104adc5b:;
  /* 104adc5b mov eax, dword ptr [0x104cdd88] */
  EAX = (r32((uint32_t)(0x104cdd88)));
  /* 104adc60 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104adc63 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 104adc66 mov edx, dword ptr [0x104cdd88] */
  EDX = (r32((uint32_t)(0x104cdd88)));
  /* 104adc6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104adc6e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104adc70 mov byte ptr [0x104ccea8], cl */
  w8((uint32_t)(0x104ccea8), (CL));
  /* 104adc76 mov dword ptr [0x104cceac], 1 */
  w32((uint32_t)(0x104cceac), (0x1u));
  /* 104adc80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104adc82:;
  /* 104adc82 mov esp, ebp */
  ESP = (EBP);
  /* 104adc84 pop ebp */
  EBP = (pop32());
  /* 104adc85 ret  */
  ESPCHK(0x104ad9e0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x104adc90 (125 bytes, 49 insns) */
void f_104adc90(void) {
  FTRACE(0x104adc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104adc90 push ebp */
  push32((uint32_t)(EBP));
  /* 104adc91 mov ebp, esp */
  EBP = (ESP);
  /* 104adc93 push ecx */
  push32((uint32_t)(ECX));
L_104adc94:;
  /* 104adc94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adc97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104adc9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104adc9c je 0x104add09 */
  if (C.zf) goto L_104add09;
  /* 104adc9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adca1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104adca4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104adca7 jl 0x104adccd */
  if ((C.sf!=C.of)) goto L_104adccd;
  /* 104adca9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adcac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104adcaf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104adcb2 jg 0x104adccd */
  if ((!C.zf&&C.sf==C.of)) goto L_104adccd;
  /* 104adcb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adcb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104adcba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104adcbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adcc0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 104adcc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adcc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104adcc8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104adccb jmp 0x104add07 */
  goto L_104add07;
L_104adccd:;
  /* 104adccd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adcd0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104adcd3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104adcd6 jne 0x104adcfe */
  if (!C.zf) goto L_104adcfe;
  /* 104adcd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adcdb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104adcde:;
  /* 104adcde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104adce1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104adce4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 104adce7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104adce9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104adcec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104adcef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104adcf2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104adcf5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104adcf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104adcfa jne 0x104adcde */
  if (!C.zf) goto L_104adcde;
  /* 104adcfc jmp 0x104add07 */
  goto L_104add07;
L_104adcfe:;
  /* 104adcfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104add01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104add04 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_104add07:;
  /* 104add07 jmp 0x104adc94 */
  goto L_104adc94;
L_104add09:;
  /* 104add09 mov esp, ebp */
  ESP = (EBP);
  /* 104add0b pop ebp */
  EBP = (pop32());
  /* 104add0c ret  */
  ESPCHK(0x104adc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd10 @ 0x104add10 (304 bytes, 85 insns) */
void f_104add10(void) {
  FTRACE(0x104add10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104add10 push ebp */
  push32((uint32_t)(EBP));
  /* 104add11 mov ebp, esp */
  EBP = (ESP);
  /* 104add13 push ecx */
  push32((uint32_t)(ECX));
  /* 104add14 cmp dword ptr [0x104ce624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104add1b je 0x104adddc */
  if (C.zf) goto L_104adddc;
  /* 104add21 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 104add23 push 0x104ca010 */
  push32((uint32_t)(0x104ca010u));
  /* 104add28 push 2 */
  push32((uint32_t)(0x2u));
  /* 104add2a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 104add2c push 1 */
  push32((uint32_t)(0x1u));
  /* 104add2e call 0x104a2ca0 */
  push32(0x104add33u); f_104a2ca0();
  /* 104add33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104add36 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104add39 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104add3d jne 0x104add49 */
  if (!C.zf) goto L_104add49;
  /* 104add3f mov eax, 1 */
  EAX = (0x1u);
  /* 104add44 jmp 0x104ade3c */
  goto L_104ade3c;
L_104add49:;
  /* 104add49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104add4c push eax */
  push32((uint32_t)(EAX));
  /* 104add4d call 0x104ade40 */
  push32(0x104add52u); f_104ade40();
  /* 104add52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104add55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104add57 je 0x104add7d */
  if (C.zf) goto L_104add7d;
  /* 104add59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104add5c push ecx */
  push32((uint32_t)(ECX));
  /* 104add5d call 0x104ae0d0 */
  push32(0x104add62u); f_104ae0d0();
  /* 104add62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104add65 push 2 */
  push32((uint32_t)(0x2u));
  /* 104add67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104add6a push edx */
  push32((uint32_t)(EDX));
  /* 104add6b call 0x104a3320 */
  push32(0x104add70u); f_104a3320();
  /* 104add70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104add73 mov eax, 1 */
  EAX = (0x1u);
  /* 104add78 jmp 0x104ade3c */
  goto L_104ade3c;
L_104add7d:;
  /* 104add7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104add80 mov ecx, dword ptr [0x104cdd88] */
  ECX = (r32((uint32_t)(0x104cdd88)));
  /* 104add86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104add88 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104add8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104add8d mov ecx, dword ptr [0x104cdd88] */
  ECX = (r32((uint32_t)(0x104cdd88)));
  /* 104add93 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104add96 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104add99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104add9c mov ecx, dword ptr [0x104cdd88] */
  ECX = (r32((uint32_t)(0x104cdd88)));
  /* 104adda2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104adda5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 104adda8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104addab mov dword ptr [0x104cdd88], eax */
  w32((uint32_t)(0x104cdd88), (EAX));
  /* 104addb0 mov ecx, dword ptr [0x104ce65c] */
  ECX = (r32((uint32_t)(0x104ce65c)));
  /* 104addb6 push ecx */
  push32((uint32_t)(ECX));
  /* 104addb7 call 0x104ae0d0 */
  push32(0x104addbcu); f_104ae0d0();
  /* 104addbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104addbf push 2 */
  push32((uint32_t)(0x2u));
  /* 104addc1 mov edx, dword ptr [0x104ce65c] */
  EDX = (r32((uint32_t)(0x104ce65c)));
  /* 104addc7 push edx */
  push32((uint32_t)(EDX));
  /* 104addc8 call 0x104a3320 */
  push32(0x104addcdu); f_104a3320();
  /* 104addcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104addd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104addd3 mov dword ptr [0x104ce65c], eax */
  w32((uint32_t)(0x104ce65c), (EAX));
  /* 104addd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104addda jmp 0x104ade3c */
  goto L_104ade3c;
L_104adddc:;
  /* 104adddc mov ecx, dword ptr [0x104cdd88] */
  ECX = (r32((uint32_t)(0x104cdd88)));
  /* 104adde2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104adde4 mov dword ptr [0x104cdd58], edx */
  w32((uint32_t)(0x104cdd58), (EDX));
  /* 104addea mov eax, dword ptr [0x104cdd88] */
  EAX = (r32((uint32_t)(0x104cdd88)));
  /* 104addef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104addf2 mov dword ptr [0x104cdd5c], ecx */
  w32((uint32_t)(0x104cdd5c), (ECX));
  /* 104addf8 mov edx, dword ptr [0x104cdd88] */
  EDX = (r32((uint32_t)(0x104cdd88)));
  /* 104addfe mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104ade01 mov dword ptr [0x104cdd60], eax */
  w32((uint32_t)(0x104cdd60), (EAX));
  /* 104ade06 mov dword ptr [0x104cdd88], 0x104cdd58 */
  w32((uint32_t)(0x104cdd88), (0x104cdd58u));
  /* 104ade10 mov ecx, dword ptr [0x104ce65c] */
  ECX = (r32((uint32_t)(0x104ce65c)));
  /* 104ade16 push ecx */
  push32((uint32_t)(ECX));
  /* 104ade17 call 0x104ae0d0 */
  push32(0x104ade1cu); f_104ae0d0();
  /* 104ade1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ade1f push 2 */
  push32((uint32_t)(0x2u));
  /* 104ade21 mov edx, dword ptr [0x104ce65c] */
  EDX = (r32((uint32_t)(0x104ce65c)));
  /* 104ade27 push edx */
  push32((uint32_t)(EDX));
  /* 104ade28 call 0x104a3320 */
  push32(0x104ade2du); f_104a3320();
  /* 104ade2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ade30 mov dword ptr [0x104ce65c], 0 */
  w32((uint32_t)(0x104ce65c), (0x0u));
  /* 104ade3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104ade3c:;
  /* 104ade3c mov esp, ebp */
  ESP = (EBP);
  /* 104ade3e pop ebp */
  EBP = (pop32());
  /* 104ade3f ret  */
  ESPCHK(0x104add10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de40 @ 0x104ade40 (525 bytes, 200 insns) */
void f_104ade40(void) {
  FTRACE(0x104ade40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ade40 push ebp */
  push32((uint32_t)(EBP));
  /* 104ade41 mov ebp, esp */
  EBP = (ESP);
  /* 104ade43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ade46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104ade4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ade4f mov ax, word ptr [0x104ce67c] */
  AX = (r16((uint32_t)(0x104ce67c)));
  /* 104ade55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ade58 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ade5c jne 0x104ade66 */
  if (!C.zf) goto L_104ade66;
  /* 104ade5e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ade61 jmp 0x104ae049 */
  goto L_104ae049;
L_104ade66:;
  /* 104ade66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ade69 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ade6c push ecx */
  push32((uint32_t)(ECX));
  /* 104ade6d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 104ade6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ade72 push edx */
  push32((uint32_t)(EDX));
  /* 104ade73 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ade75 call 0x104b0a50 */
  push32(0x104ade7au); f_104b0a50();
  /* 104ade7a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ade7d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ade80 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ade82 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ade85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ade88 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ade8b push edx */
  push32((uint32_t)(EDX));
  /* 104ade8c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 104ade8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ade91 push eax */
  push32((uint32_t)(EAX));
  /* 104ade92 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ade94 call 0x104b0a50 */
  push32(0x104ade99u); f_104b0a50();
  /* 104ade99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ade9c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ade9f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104adea1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104adea4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adea7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104adeaa push edx */
  push32((uint32_t)(EDX));
  /* 104adeab push 0x16 */
  push32((uint32_t)(0x16u));
  /* 104adead mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104adeb0 push eax */
  push32((uint32_t)(EAX));
  /* 104adeb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 104adeb3 call 0x104b0a50 */
  push32(0x104adeb8u); f_104b0a50();
  /* 104adeb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adebb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104adebe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104adec0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104adec3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adec6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104adec9 push edx */
  push32((uint32_t)(EDX));
  /* 104adeca push 0x17 */
  push32((uint32_t)(0x17u));
  /* 104adecc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104adecf push eax */
  push32((uint32_t)(EAX));
  /* 104aded0 push 1 */
  push32((uint32_t)(0x1u));
  /* 104aded2 call 0x104b0a50 */
  push32(0x104aded7u); f_104b0a50();
  /* 104aded7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adeda mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104adedd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104adedf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104adee2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adee5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104adee8 push edx */
  push32((uint32_t)(EDX));
  /* 104adee9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 104adeeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104adeee push eax */
  push32((uint32_t)(EAX));
  /* 104adeef push 1 */
  push32((uint32_t)(0x1u));
  /* 104adef1 call 0x104b0a50 */
  push32(0x104adef6u); f_104b0a50();
  /* 104adef6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adef9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104adefc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104adefe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104adf01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adf04 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 104adf07 push eax */
  push32((uint32_t)(EAX));
  /* 104adf08 call 0x104ae050 */
  push32(0x104adf0du); f_104ae050();
  /* 104adf0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adf10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adf13 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104adf16 push ecx */
  push32((uint32_t)(ECX));
  /* 104adf17 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 104adf19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104adf1c push edx */
  push32((uint32_t)(EDX));
  /* 104adf1d push 1 */
  push32((uint32_t)(0x1u));
  /* 104adf1f call 0x104b0a50 */
  push32(0x104adf24u); f_104b0a50();
  /* 104adf24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adf27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104adf2a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104adf2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104adf2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adf32 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104adf35 push edx */
  push32((uint32_t)(EDX));
  /* 104adf36 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 104adf38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104adf3b push eax */
  push32((uint32_t)(EAX));
  /* 104adf3c push 1 */
  push32((uint32_t)(0x1u));
  /* 104adf3e call 0x104b0a50 */
  push32(0x104adf43u); f_104b0a50();
  /* 104adf43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adf46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104adf49 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104adf4b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104adf4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adf51 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104adf54 push edx */
  push32((uint32_t)(EDX));
  /* 104adf55 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 104adf57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104adf5a push eax */
  push32((uint32_t)(EAX));
  /* 104adf5b push 0 */
  push32((uint32_t)(0x0u));
  /* 104adf5d call 0x104b0a50 */
  push32(0x104adf62u); f_104b0a50();
  /* 104adf62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adf65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104adf68 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104adf6a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104adf6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adf70 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104adf73 push edx */
  push32((uint32_t)(EDX));
  /* 104adf74 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104adf76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104adf79 push eax */
  push32((uint32_t)(EAX));
  /* 104adf7a push 0 */
  push32((uint32_t)(0x0u));
  /* 104adf7c call 0x104b0a50 */
  push32(0x104adf81u); f_104b0a50();
  /* 104adf81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adf84 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104adf87 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104adf89 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104adf8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adf8f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104adf92 push edx */
  push32((uint32_t)(EDX));
  /* 104adf93 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 104adf95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104adf98 push eax */
  push32((uint32_t)(EAX));
  /* 104adf99 push 0 */
  push32((uint32_t)(0x0u));
  /* 104adf9b call 0x104b0a50 */
  push32(0x104adfa0u); f_104b0a50();
  /* 104adfa0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adfa3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104adfa6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104adfa8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104adfab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adfae add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104adfb1 push edx */
  push32((uint32_t)(EDX));
  /* 104adfb2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 104adfb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104adfb7 push eax */
  push32((uint32_t)(EAX));
  /* 104adfb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104adfba call 0x104b0a50 */
  push32(0x104adfbfu); f_104b0a50();
  /* 104adfbf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adfc2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104adfc5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104adfc7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104adfca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adfcd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104adfd0 push edx */
  push32((uint32_t)(EDX));
  /* 104adfd1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 104adfd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104adfd6 push eax */
  push32((uint32_t)(EAX));
  /* 104adfd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104adfd9 call 0x104b0a50 */
  push32(0x104adfdeu); f_104b0a50();
  /* 104adfde add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104adfe1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104adfe4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104adfe6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104adfe9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104adfec add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104adfef push edx */
  push32((uint32_t)(EDX));
  /* 104adff0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 104adff2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104adff5 push eax */
  push32((uint32_t)(EAX));
  /* 104adff6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104adff8 call 0x104b0a50 */
  push32(0x104adffdu); f_104b0a50();
  /* 104adffd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae000 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ae003 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ae005 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ae008 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae00b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae00e push edx */
  push32((uint32_t)(EDX));
  /* 104ae00f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 104ae011 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ae014 push eax */
  push32((uint32_t)(EAX));
  /* 104ae015 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ae017 call 0x104b0a50 */
  push32(0x104ae01cu); f_104b0a50();
  /* 104ae01c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae01f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ae022 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ae024 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ae027 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae02a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae02d push edx */
  push32((uint32_t)(EDX));
  /* 104ae02e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 104ae030 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ae033 push eax */
  push32((uint32_t)(EAX));
  /* 104ae034 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ae036 call 0x104b0a50 */
  push32(0x104ae03bu); f_104b0a50();
  /* 104ae03b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae03e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ae041 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ae043 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ae046 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_104ae049:;
  /* 104ae049 mov esp, ebp */
  ESP = (EBP);
  /* 104ae04b pop ebp */
  EBP = (pop32());
  /* 104ae04c ret  */
  ESPCHK(0x104ade40u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x104ae050 (125 bytes, 49 insns) */
void f_104ae050(void) {
  FTRACE(0x104ae050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ae050 push ebp */
  push32((uint32_t)(EBP));
  /* 104ae051 mov ebp, esp */
  EBP = (ESP);
  /* 104ae053 push ecx */
  push32((uint32_t)(ECX));
L_104ae054:;
  /* 104ae054 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae057 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ae05a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ae05c je 0x104ae0c9 */
  if (C.zf) goto L_104ae0c9;
  /* 104ae05e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae061 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104ae064 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae067 jl 0x104ae08d */
  if ((C.sf!=C.of)) goto L_104ae08d;
  /* 104ae069 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae06c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104ae06f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae072 jg 0x104ae08d */
  if ((!C.zf&&C.sf==C.of)) goto L_104ae08d;
  /* 104ae074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae077 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ae07a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ae07d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae080 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 104ae082 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae085 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae088 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104ae08b jmp 0x104ae0c7 */
  goto L_104ae0c7;
L_104ae08d:;
  /* 104ae08d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae090 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104ae093 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae096 jne 0x104ae0be */
  if (!C.zf) goto L_104ae0be;
  /* 104ae098 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae09b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104ae09e:;
  /* 104ae09e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ae0a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ae0a4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 104ae0a7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104ae0a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ae0ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae0af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104ae0b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ae0b5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104ae0b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ae0ba jne 0x104ae09e */
  if (!C.zf) goto L_104ae09e;
  /* 104ae0bc jmp 0x104ae0c7 */
  goto L_104ae0c7;
L_104ae0be:;
  /* 104ae0be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae0c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae0c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_104ae0c7:;
  /* 104ae0c7 jmp 0x104ae054 */
  goto L_104ae054;
L_104ae0c9:;
  /* 104ae0c9 mov esp, ebp */
  ESP = (EBP);
  /* 104ae0cb pop ebp */
  EBP = (pop32());
  /* 104ae0cc ret  */
  ESPCHK(0x104ae050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0d0 @ 0x104ae0d0 (147 bytes, 52 insns) */
void f_104ae0d0(void) {
  FTRACE(0x104ae0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ae0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ae0d1 mov ebp, esp */
  EBP = (ESP);
  /* 104ae0d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae0d7 jne 0x104ae0de */
  if (!C.zf) goto L_104ae0de;
  /* 104ae0d9 jmp 0x104ae161 */
  goto L_104ae161;
L_104ae0de:;
  /* 104ae0de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae0e1 cmp dword ptr [eax + 0xc], 0x104ce6b8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x104ce6b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae0e8 je 0x104ae161 */
  if (C.zf) goto L_104ae161;
  /* 104ae0ea push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae0ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae0ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104ae0f2 push edx */
  push32((uint32_t)(EDX));
  /* 104ae0f3 call 0x104a3320 */
  push32(0x104ae0f8u); f_104a3320();
  /* 104ae0f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae0fb push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae0fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae100 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104ae103 push ecx */
  push32((uint32_t)(ECX));
  /* 104ae104 call 0x104a3320 */
  push32(0x104ae109u); f_104a3320();
  /* 104ae109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae10c push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae10e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae111 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104ae114 push eax */
  push32((uint32_t)(EAX));
  /* 104ae115 call 0x104a3320 */
  push32(0x104ae11au); f_104a3320();
  /* 104ae11a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae11d push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae11f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae122 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 104ae125 push edx */
  push32((uint32_t)(EDX));
  /* 104ae126 call 0x104a3320 */
  push32(0x104ae12bu); f_104a3320();
  /* 104ae12b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae12e push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae130 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae133 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 104ae136 push ecx */
  push32((uint32_t)(ECX));
  /* 104ae137 call 0x104a3320 */
  push32(0x104ae13cu); f_104a3320();
  /* 104ae13c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae13f push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae141 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae144 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 104ae147 push eax */
  push32((uint32_t)(EAX));
  /* 104ae148 call 0x104a3320 */
  push32(0x104ae14du); f_104a3320();
  /* 104ae14d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae150 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae152 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae155 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 104ae158 push edx */
  push32((uint32_t)(EDX));
  /* 104ae159 call 0x104a3320 */
  push32(0x104ae15eu); f_104a3320();
  /* 104ae15e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ae161:;
  /* 104ae161 pop ebp */
  EBP = (pop32());
  /* 104ae162 ret  */
  ESPCHK(0x104ae0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e170 @ 0x104ae170 (928 bytes, 284 insns) */
void f_104ae170(void) {
  FTRACE(0x104ae170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ae170 push ebp */
  push32((uint32_t)(EBP));
  /* 104ae171 mov ebp, esp */
  EBP = (ESP);
  /* 104ae173 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ae176 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 104ae17d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 104ae184 cmp dword ptr [0x104ce620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae18b je 0x104ae4c1 */
  if (C.zf) goto L_104ae4c1;
  /* 104ae191 cmp dword ptr [0x104ce630], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce630))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae198 jne 0x104ae1c0 */
  if (!C.zf) goto L_104ae1c0;
  /* 104ae19a push 0x104ce630 */
  push32((uint32_t)(0x104ce630u));
  /* 104ae19f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 104ae1a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ae1a6 mov ax, word ptr [0x104ce674] */
  AX = (r16((uint32_t)(0x104ce674)));
  /* 104ae1ac push eax */
  push32((uint32_t)(EAX));
  /* 104ae1ad push 0 */
  push32((uint32_t)(0x0u));
  /* 104ae1af call 0x104b0a50 */
  push32(0x104ae1b4u); f_104b0a50();
  /* 104ae1b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae1b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ae1b9 je 0x104ae1c0 */
  if (C.zf) goto L_104ae1c0;
  /* 104ae1bb jmp 0x104ae482 */
  goto L_104ae482;
L_104ae1c0:;
  /* 104ae1c0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 104ae1c2 push 0x104ca01c */
  push32((uint32_t)(0x104ca01cu));
  /* 104ae1c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae1c9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 104ae1ce call 0x104a2890 */
  push32(0x104ae1d3u); f_104a2890();
  /* 104ae1d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae1d6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 104ae1d9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 104ae1db push 0x104ca01c */
  push32((uint32_t)(0x104ca01cu));
  /* 104ae1e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae1e2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 104ae1e7 call 0x104a2890 */
  push32(0x104ae1ecu); f_104a2890();
  /* 104ae1ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae1ef mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104ae1f2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 104ae1f4 push 0x104ca01c */
  push32((uint32_t)(0x104ca01cu));
  /* 104ae1f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae1fb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 104ae200 call 0x104a2890 */
  push32(0x104ae205u); f_104a2890();
  /* 104ae205 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae208 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 104ae20b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 104ae20d push 0x104ca01c */
  push32((uint32_t)(0x104ca01cu));
  /* 104ae212 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae214 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 104ae219 call 0x104a2890 */
  push32(0x104ae21eu); f_104a2890();
  /* 104ae21e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae221 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104ae224 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae228 je 0x104ae23c */
  if (C.zf) goto L_104ae23c;
  /* 104ae22a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae22e je 0x104ae23c */
  if (C.zf) goto L_104ae23c;
  /* 104ae230 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae234 je 0x104ae23c */
  if (C.zf) goto L_104ae23c;
  /* 104ae236 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae23a jne 0x104ae241 */
  if (!C.zf) goto L_104ae241;
L_104ae23c:;
  /* 104ae23c jmp 0x104ae482 */
  goto L_104ae482;
L_104ae241:;
  /* 104ae241 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104ae244 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104ae247 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 104ae24e jmp 0x104ae259 */
  goto L_104ae259;
L_104ae250:;
  /* 104ae250 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104ae253 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae256 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_104ae259:;
  /* 104ae259 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae260 jge 0x104ae275 */
  if ((C.sf==C.of)) goto L_104ae275;
  /* 104ae262 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104ae265 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 104ae268 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 104ae26a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104ae26d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae270 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104ae273 jmp 0x104ae250 */
  goto L_104ae250;
L_104ae275:;
  /* 104ae275 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 104ae278 push eax */
  push32((uint32_t)(EAX));
  /* 104ae279 mov ecx, dword ptr [0x104ce630] */
  ECX = (r32((uint32_t)(0x104ce630)));
  /* 104ae27f push ecx */
  push32((uint32_t)(ECX));
  /* 104ae280 call dword ptr [0x104d0308] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0308))), 0x104ae286u);
  /* 104ae286 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ae288 jne 0x104ae28f */
  if (!C.zf) goto L_104ae28f;
  /* 104ae28a jmp 0x104ae482 */
  goto L_104ae482;
L_104ae28f:;
  /* 104ae28f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae293 jbe 0x104ae29a */
  if ((C.cf||C.zf)) goto L_104ae29a;
  /* 104ae295 jmp 0x104ae482 */
  goto L_104ae482;
L_104ae29a:;
  /* 104ae29a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104ae29d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104ae2a3 mov dword ptr [0x104ccea4], edx */
  w32((uint32_t)(0x104ccea4), (EDX));
  /* 104ae2a9 cmp dword ptr [0x104ccea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ccea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae2b0 jle 0x104ae309 */
  if ((C.zf||C.sf!=C.of)) goto L_104ae309;
  /* 104ae2b2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 104ae2b5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104ae2b8 jmp 0x104ae2c3 */
  goto L_104ae2c3;
L_104ae2ba:;
  /* 104ae2ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104ae2bd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae2c0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_104ae2c3:;
  /* 104ae2c3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104ae2c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ae2c8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104ae2ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ae2cc je 0x104ae309 */
  if (C.zf) goto L_104ae309;
  /* 104ae2ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104ae2d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104ae2d3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 104ae2d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ae2d8 je 0x104ae309 */
  if (C.zf) goto L_104ae309;
  /* 104ae2da mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104ae2dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104ae2df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104ae2e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 104ae2e4 jmp 0x104ae2ef */
  goto L_104ae2ef;
L_104ae2e6:;
  /* 104ae2e6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104ae2e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae2ec mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_104ae2ef:;
  /* 104ae2ef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104ae2f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104ae2f4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 104ae2f7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae2fa jg 0x104ae307 */
  if ((!C.zf&&C.sf==C.of)) goto L_104ae307;
  /* 104ae2fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104ae2ff add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae302 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 104ae305 jmp 0x104ae2e6 */
  goto L_104ae2e6;
L_104ae307:;
  /* 104ae307 jmp 0x104ae2ba */
  goto L_104ae2ba;
L_104ae309:;
  /* 104ae309 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ae30b push 0 */
  push32((uint32_t)(0x0u));
  /* 104ae30d push 0 */
  push32((uint32_t)(0x0u));
  /* 104ae30f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104ae312 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae315 push eax */
  push32((uint32_t)(EAX));
  /* 104ae316 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104ae31b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104ae31e push ecx */
  push32((uint32_t)(ECX));
  /* 104ae31f push 1 */
  push32((uint32_t)(0x1u));
  /* 104ae321 call 0x104aaac0 */
  push32(0x104ae326u); f_104aaac0();
  /* 104ae326 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae329 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ae32b jne 0x104ae332 */
  if (!C.zf) goto L_104ae332;
  /* 104ae32d jmp 0x104ae482 */
  goto L_104ae482;
L_104ae332:;
  /* 104ae332 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104ae335 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 104ae33a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104ae33d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104ae340 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 104ae347 jmp 0x104ae352 */
  goto L_104ae352;
L_104ae349:;
  /* 104ae349 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104ae34c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae34f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_104ae352:;
  /* 104ae352 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae359 jge 0x104ae370 */
  if ((C.sf==C.of)) goto L_104ae370;
  /* 104ae35b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104ae35e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 104ae362 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 104ae365 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104ae368 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae36b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 104ae36e jmp 0x104ae349 */
  goto L_104ae349;
L_104ae370:;
  /* 104ae370 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ae372 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ae374 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104ae377 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae37a push edx */
  push32((uint32_t)(EDX));
  /* 104ae37b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104ae380 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104ae383 push eax */
  push32((uint32_t)(EAX));
  /* 104ae384 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ae386 call 0x104b0cf0 */
  push32(0x104ae38bu); f_104b0cf0();
  /* 104ae38b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae38e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ae390 jne 0x104ae397 */
  if (!C.zf) goto L_104ae397;
  /* 104ae392 jmp 0x104ae482 */
  goto L_104ae482;
L_104ae397:;
  /* 104ae397 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104ae39a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 104ae39f cmp dword ptr [0x104ccea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ccea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae3a6 jle 0x104ae403 */
  if ((C.zf||C.sf!=C.of)) goto L_104ae403;
  /* 104ae3a8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 104ae3ab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104ae3ae jmp 0x104ae3b9 */
  goto L_104ae3b9;
L_104ae3b0:;
  /* 104ae3b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104ae3b3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae3b6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_104ae3b9:;
  /* 104ae3b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104ae3bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104ae3be mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104ae3c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ae3c2 je 0x104ae403 */
  if (C.zf) goto L_104ae403;
  /* 104ae3c4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104ae3c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104ae3c9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 104ae3cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ae3ce je 0x104ae403 */
  if (C.zf) goto L_104ae403;
  /* 104ae3d0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104ae3d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ae3d5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104ae3d7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104ae3da jmp 0x104ae3e5 */
  goto L_104ae3e5;
L_104ae3dc:;
  /* 104ae3dc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104ae3df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae3e2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_104ae3e5:;
  /* 104ae3e5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104ae3e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ae3ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 104ae3ed cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae3f0 jg 0x104ae401 */
  if ((!C.zf&&C.sf==C.of)) goto L_104ae401;
  /* 104ae3f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104ae3f5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104ae3f8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 104ae3ff jmp 0x104ae3dc */
  goto L_104ae3dc;
L_104ae401:;
  /* 104ae401 jmp 0x104ae3b0 */
  goto L_104ae3b0;
L_104ae403:;
  /* 104ae403 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104ae406 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae409 mov dword ptr [0x104ccc98], eax */
  w32((uint32_t)(0x104ccc98), (EAX));
  /* 104ae40e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104ae411 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae414 mov dword ptr [0x104ccc9c], ecx */
  w32((uint32_t)(0x104ccc9c), (ECX));
  /* 104ae41a cmp dword ptr [0x104ce660], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce660))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae421 je 0x104ae434 */
  if (C.zf) goto L_104ae434;
  /* 104ae423 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae425 mov edx, dword ptr [0x104ce660] */
  EDX = (r32((uint32_t)(0x104ce660)));
  /* 104ae42b push edx */
  push32((uint32_t)(EDX));
  /* 104ae42c call 0x104a3320 */
  push32(0x104ae431u); f_104a3320();
  /* 104ae431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ae434:;
  /* 104ae434 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104ae437 mov dword ptr [0x104ce660], eax */
  w32((uint32_t)(0x104ce660), (EAX));
  /* 104ae43c cmp dword ptr [0x104ce664], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce664))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae443 je 0x104ae456 */
  if (C.zf) goto L_104ae456;
  /* 104ae445 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae447 mov ecx, dword ptr [0x104ce664] */
  ECX = (r32((uint32_t)(0x104ce664)));
  /* 104ae44d push ecx */
  push32((uint32_t)(ECX));
  /* 104ae44e call 0x104a3320 */
  push32(0x104ae453u); f_104a3320();
  /* 104ae453 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ae456:;
  /* 104ae456 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104ae459 mov dword ptr [0x104ce664], edx */
  w32((uint32_t)(0x104ce664), (EDX));
  /* 104ae45f push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae461 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104ae464 push eax */
  push32((uint32_t)(EAX));
  /* 104ae465 call 0x104a3320 */
  push32(0x104ae46au); f_104a3320();
  /* 104ae46a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae46d push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae46f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104ae472 push ecx */
  push32((uint32_t)(ECX));
  /* 104ae473 call 0x104a3320 */
  push32(0x104ae478u); f_104a3320();
  /* 104ae478 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae47b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ae47d jmp 0x104ae50c */
  goto L_104ae50c;
L_104ae482:;
  /* 104ae482 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae484 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104ae487 push edx */
  push32((uint32_t)(EDX));
  /* 104ae488 call 0x104a3320 */
  push32(0x104ae48du); f_104a3320();
  /* 104ae48d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae490 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae492 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104ae495 push eax */
  push32((uint32_t)(EAX));
  /* 104ae496 call 0x104a3320 */
  push32(0x104ae49bu); f_104a3320();
  /* 104ae49b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae49e push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae4a0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104ae4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 104ae4a4 call 0x104a3320 */
  push32(0x104ae4a9u); f_104a3320();
  /* 104ae4a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae4ac push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae4ae mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104ae4b1 push edx */
  push32((uint32_t)(EDX));
  /* 104ae4b2 call 0x104a3320 */
  push32(0x104ae4b7u); f_104a3320();
  /* 104ae4b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae4ba mov eax, 1 */
  EAX = (0x1u);
  /* 104ae4bf jmp 0x104ae50c */
  goto L_104ae50c;
L_104ae4c1:;
  /* 104ae4c1 mov dword ptr [0x104ccc98], 0x104ccca2 */
  w32((uint32_t)(0x104ccc98), (0x104ccca2u));
  /* 104ae4cb mov dword ptr [0x104ccc9c], 0x104ccca2 */
  w32((uint32_t)(0x104ccc9c), (0x104ccca2u));
  /* 104ae4d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae4d7 mov eax, dword ptr [0x104ce660] */
  EAX = (r32((uint32_t)(0x104ce660)));
  /* 104ae4dc push eax */
  push32((uint32_t)(EAX));
  /* 104ae4dd call 0x104a3320 */
  push32(0x104ae4e2u); f_104a3320();
  /* 104ae4e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae4e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ae4e7 mov ecx, dword ptr [0x104ce664] */
  ECX = (r32((uint32_t)(0x104ce664)));
  /* 104ae4ed push ecx */
  push32((uint32_t)(ECX));
  /* 104ae4ee call 0x104a3320 */
  push32(0x104ae4f3u); f_104a3320();
  /* 104ae4f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae4f6 mov dword ptr [0x104ce660], 0 */
  w32((uint32_t)(0x104ce660), (0x0u));
  /* 104ae500 mov dword ptr [0x104ce664], 0 */
  w32((uint32_t)(0x104ce664), (0x0u));
  /* 104ae50a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104ae50c:;
  /* 104ae50c mov esp, ebp */
  ESP = (EBP);
  /* 104ae50e pop ebp */
  EBP = (pop32());
  /* 104ae50f ret  */
  ESPCHK(0x104ae170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e510 @ 0x104ae510 (7 bytes, 5 insns) */
void f_104ae510(void) {
  FTRACE(0x104ae510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ae510 push ebp */
  push32((uint32_t)(EBP));
  /* 104ae511 mov ebp, esp */
  EBP = (ESP);
  /* 104ae513 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ae515 pop ebp */
  EBP = (pop32());
  /* 104ae516 ret  */
  ESPCHK(0x104ae510u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x104ae520 (129 bytes, 56 insns) */
void f_104ae520(void) {
  FTRACE(0x104ae520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ae520 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 104ae524 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 104ae528 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 104ae52e jne 0x104ae56c */
  if (!C.zf) goto L_104ae56c;
L_104ae530:;
  /* 104ae530 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104ae532 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104ae534 jne 0x104ae564 */
  if (!C.zf) goto L_104ae564;
  /* 104ae536 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104ae538 je 0x104ae560 */
  if (C.zf) goto L_104ae560;
  /* 104ae53a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104ae53d jne 0x104ae564 */
  if (!C.zf) goto L_104ae564;
  /* 104ae53f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 104ae541 je 0x104ae560 */
  if (C.zf) goto L_104ae560;
  /* 104ae543 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 104ae546 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104ae549 jne 0x104ae564 */
  if (!C.zf) goto L_104ae564;
  /* 104ae54b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104ae54d je 0x104ae560 */
  if (C.zf) goto L_104ae560;
  /* 104ae54f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104ae552 jne 0x104ae564 */
  if (!C.zf) goto L_104ae564;
  /* 104ae554 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae557 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae55a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 104ae55c jne 0x104ae530 */
  if (!C.zf) goto L_104ae530;
  /* 104ae55e mov edi, edi */
  EDI = (EDI);
L_104ae560:;
  /* 104ae560 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ae562 ret  */
  ESPCHK(0x104ae520u, _esp0);
  ESP += 4; return;
  /* 104ae563 nop  */
  /* nop */
L_104ae564:;
  /* 104ae564 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ae566 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104ae568 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 104ae569 ret  */
  ESPCHK(0x104ae520u, _esp0);
  ESP += 4; return;
  /* 104ae56a mov edi, edi */
  EDI = (EDI);
L_104ae56c:;
  /* 104ae56c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 104ae572 je 0x104ae588 */
  if (C.zf) goto L_104ae588;
  /* 104ae574 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104ae576 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 104ae577 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104ae579 jne 0x104ae564 */
  if (!C.zf) goto L_104ae564;
  /* 104ae57b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 104ae57c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104ae57e je 0x104ae560 */
  if (C.zf) goto L_104ae560;
  /* 104ae580 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 104ae586 je 0x104ae530 */
  if (C.zf) goto L_104ae530;
L_104ae588:;
  /* 104ae588 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 104ae58b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae58e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104ae590 jne 0x104ae564 */
  if (!C.zf) goto L_104ae564;
  /* 104ae592 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104ae594 je 0x104ae560 */
  if (C.zf) goto L_104ae560;
  /* 104ae596 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104ae599 jne 0x104ae564 */
  if (!C.zf) goto L_104ae564;
  /* 104ae59b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 104ae59d je 0x104ae560 */
  if (C.zf) goto L_104ae560;
  /* 104ae59f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae5a2 jmp 0x104ae530 */
  goto L_104ae530;
}

/* FUN_1000e5b0 @ 0x104ae5b0 (62 bytes, 35 insns) */
void f_104ae5b0(void) {
  FTRACE(0x104ae5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ae5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ae5b1 mov ebp, esp */
  EBP = (ESP);
  /* 104ae5b3 push esi */
  push32((uint32_t)(ESI));
  /* 104ae5b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ae5b6 push eax */
  push32((uint32_t)(EAX));
  /* 104ae5b7 push eax */
  push32((uint32_t)(EAX));
  /* 104ae5b8 push eax */
  push32((uint32_t)(EAX));
  /* 104ae5b9 push eax */
  push32((uint32_t)(EAX));
  /* 104ae5ba push eax */
  push32((uint32_t)(EAX));
  /* 104ae5bb push eax */
  push32((uint32_t)(EAX));
  /* 104ae5bc push eax */
  push32((uint32_t)(EAX));
  /* 104ae5bd push eax */
  push32((uint32_t)(EAX));
  /* 104ae5be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ae5c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104ae5c4:;
  /* 104ae5c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104ae5c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104ae5c8 je 0x104ae5d1 */
  if (C.zf) goto L_104ae5d1;
  /* 104ae5ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 104ae5cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x104ae5cb");
  /* 104ae5cf jmp 0x104ae5c4 */
  goto L_104ae5c4;
L_104ae5d1:;
  /* 104ae5d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae5d4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104ae5d7 nop  */
  /* nop */
L_104ae5d8:;
  /* 104ae5d8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 104ae5d9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104ae5db or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104ae5dd je 0x104ae5e6 */
  if (C.zf) goto L_104ae5e6;
  /* 104ae5df inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104ae5e0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x104ae5e0");
  /* 104ae5e4 jae 0x104ae5d8 */
  if (!C.cf) goto L_104ae5d8;
L_104ae5e6:;
  /* 104ae5e6 mov eax, ecx */
  EAX = (ECX);
  /* 104ae5e8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae5eb pop esi */
  ESI = (pop32());
  /* 104ae5ec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104ae5ed ret  */
  ESPCHK(0x104ae5b0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x104ae5f0 (56 bytes, 31 insns) */
void f_104ae5f0(void) {
  FTRACE(0x104ae5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ae5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ae5f1 mov ebp, esp */
  EBP = (ESP);
  /* 104ae5f3 push edi */
  push32((uint32_t)(EDI));
  /* 104ae5f4 push esi */
  push32((uint32_t)(ESI));
  /* 104ae5f5 push ebx */
  push32((uint32_t)(EBX));
  /* 104ae5f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ae5f9 jecxz 0x104ae621 */
  x86_unimpl("jecxz @ 0x104ae5f9");
  /* 104ae5fb mov ebx, ecx */
  EBX = (ECX);
  /* 104ae5fd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae600 mov esi, edi */
  ESI = (EDI);
  /* 104ae602 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ae604 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 104ae606 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104ae608 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae60a mov edi, esi */
  EDI = (ESI);
  /* 104ae60c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 104ae60f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 104ae611 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 104ae614 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104ae616 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104ae619 ja 0x104ae61f */
  if ((!C.cf&&!C.zf)) goto L_104ae61f;
  /* 104ae61b je 0x104ae621 */
  if (C.zf) goto L_104ae621;
  /* 104ae61d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104ae61e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_104ae61f:;
  /* 104ae61f not ecx */
  ECX = (~(ECX));
L_104ae621:;
  /* 104ae621 mov eax, ecx */
  EAX = (ECX);
  /* 104ae623 pop ebx */
  EBX = (pop32());
  /* 104ae624 pop esi */
  ESI = (pop32());
  /* 104ae625 pop edi */
  EDI = (pop32());
  /* 104ae626 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104ae627 ret  */
  ESPCHK(0x104ae5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e630 @ 0x104ae630 (58 bytes, 32 insns) */
void f_104ae630(void) {
  FTRACE(0x104ae630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ae630 push ebp */
  push32((uint32_t)(EBP));
  /* 104ae631 mov ebp, esp */
  EBP = (ESP);
  /* 104ae633 push esi */
  push32((uint32_t)(ESI));
  /* 104ae634 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ae636 push eax */
  push32((uint32_t)(EAX));
  /* 104ae637 push eax */
  push32((uint32_t)(EAX));
  /* 104ae638 push eax */
  push32((uint32_t)(EAX));
  /* 104ae639 push eax */
  push32((uint32_t)(EAX));
  /* 104ae63a push eax */
  push32((uint32_t)(EAX));
  /* 104ae63b push eax */
  push32((uint32_t)(EAX));
  /* 104ae63c push eax */
  push32((uint32_t)(EAX));
  /* 104ae63d push eax */
  push32((uint32_t)(EAX));
  /* 104ae63e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ae641 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104ae644:;
  /* 104ae644 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104ae646 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104ae648 je 0x104ae651 */
  if (C.zf) goto L_104ae651;
  /* 104ae64a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 104ae64b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x104ae64b");
  /* 104ae64f jmp 0x104ae644 */
  goto L_104ae644;
L_104ae651:;
  /* 104ae651 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_104ae654:;
  /* 104ae654 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104ae656 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104ae658 je 0x104ae664 */
  if (C.zf) goto L_104ae664;
  /* 104ae65a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104ae65b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x104ae65b");
  /* 104ae65f jae 0x104ae654 */
  if (!C.cf) goto L_104ae654;
  /* 104ae661 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_104ae664:;
  /* 104ae664 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae667 pop esi */
  ESI = (pop32());
  /* 104ae668 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104ae669 ret  */
  ESPCHK(0x104ae630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e670 @ 0x104ae670 (512 bytes, 147 insns) */
void f_104ae670(void) {
  FTRACE(0x104ae670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ae670 push ebp */
  push32((uint32_t)(EBP));
  /* 104ae671 mov ebp, esp */
  EBP = (ESP);
  /* 104ae673 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ae676 cmp dword ptr [0x104ce6ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce6ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae67d jne 0x104ae6a2 */
  if (!C.zf) goto L_104ae6a2;
  /* 104ae67f call 0x104af140 */
  push32(0x104ae684u); f_104af140();
  /* 104ae684 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ae686 je 0x104ae692 */
  if (C.zf) goto L_104ae692;
  /* 104ae688 mov eax, dword ptr [0x104d0248] */
  EAX = (r32((uint32_t)(0x104d0248)));
  /* 104ae68d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104ae690 jmp 0x104ae699 */
  goto L_104ae699;
L_104ae692:;
  /* 104ae692 mov dword ptr [ebp - 8], 0x104af190 */
  w32((uint32_t)(EBP + -0x8), (0x104af190u));
L_104ae699:;
  /* 104ae699 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ae69c mov dword ptr [0x104ce6ac], ecx */
  w32((uint32_t)(0x104ce6ac), (ECX));
L_104ae6a2:;
  /* 104ae6a2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae6a6 jne 0x104ae6b2 */
  if (!C.zf) goto L_104ae6b2;
  /* 104ae6a8 call 0x104aef90 */
  push32(0x104ae6adu); f_104aef90();
  /* 104ae6ad jmp 0x104ae77e */
  goto L_104ae77e;
L_104ae6b2:;
  /* 104ae6b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae6b5 mov dword ptr [0x104ce69c], edx */
  w32((uint32_t)(0x104ce69c), (EDX));
  /* 104ae6bb cmp dword ptr [0x104ce69c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce69c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae6c2 je 0x104ae6e4 */
  if (C.zf) goto L_104ae6e4;
  /* 104ae6c4 mov eax, dword ptr [0x104ce69c] */
  EAX = (r32((uint32_t)(0x104ce69c)));
  /* 104ae6c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ae6cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ae6ce je 0x104ae6e4 */
  if (C.zf) goto L_104ae6e4;
  /* 104ae6d0 push 0x104ce69c */
  push32((uint32_t)(0x104ce69cu));
  /* 104ae6d5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 104ae6d7 push 0x104cda90 */
  push32((uint32_t)(0x104cda90u));
  /* 104ae6dc call 0x104ae870 */
  push32(0x104ae6e1u); f_104ae870();
  /* 104ae6e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ae6e4:;
  /* 104ae6e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae6e7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae6ea mov dword ptr [0x104ce6a0], edx */
  w32((uint32_t)(0x104ce6a0), (EDX));
  /* 104ae6f0 cmp dword ptr [0x104ce6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae6f7 je 0x104ae719 */
  if (C.zf) goto L_104ae719;
  /* 104ae6f9 mov eax, dword ptr [0x104ce6a0] */
  EAX = (r32((uint32_t)(0x104ce6a0)));
  /* 104ae6fe movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ae701 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ae703 je 0x104ae719 */
  if (C.zf) goto L_104ae719;
  /* 104ae705 push 0x104ce6a0 */
  push32((uint32_t)(0x104ce6a0u));
  /* 104ae70a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 104ae70c push 0x104cd9d8 */
  push32((uint32_t)(0x104cd9d8u));
  /* 104ae711 call 0x104ae870 */
  push32(0x104ae716u); f_104ae870();
  /* 104ae716 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ae719:;
  /* 104ae719 mov dword ptr [0x104ce6a4], 0 */
  w32((uint32_t)(0x104ce6a4), (0x0u));
  /* 104ae723 cmp dword ptr [0x104ce69c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce69c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae72a je 0x104ae75d */
  if (C.zf) goto L_104ae75d;
  /* 104ae72c mov edx, dword ptr [0x104ce69c] */
  EDX = (r32((uint32_t)(0x104ce69c)));
  /* 104ae732 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104ae735 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ae737 je 0x104ae75d */
  if (C.zf) goto L_104ae75d;
  /* 104ae739 cmp dword ptr [0x104ce6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae740 je 0x104ae756 */
  if (C.zf) goto L_104ae756;
  /* 104ae742 mov ecx, dword ptr [0x104ce6a0] */
  ECX = (r32((uint32_t)(0x104ce6a0)));
  /* 104ae748 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104ae74b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ae74d je 0x104ae756 */
  if (C.zf) goto L_104ae756;
  /* 104ae74f call 0x104ae900 */
  push32(0x104ae754u); f_104ae900();
  /* 104ae754 jmp 0x104ae75b */
  goto L_104ae75b;
L_104ae756:;
  /* 104ae756 call 0x104aecf0 */
  push32(0x104ae75bu); f_104aecf0();
L_104ae75b:;
  /* 104ae75b jmp 0x104ae77e */
  goto L_104ae77e;
L_104ae75d:;
  /* 104ae75d cmp dword ptr [0x104ce6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae764 je 0x104ae779 */
  if (C.zf) goto L_104ae779;
  /* 104ae766 mov eax, dword ptr [0x104ce6a0] */
  EAX = (r32((uint32_t)(0x104ce6a0)));
  /* 104ae76b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ae76e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ae770 je 0x104ae779 */
  if (C.zf) goto L_104ae779;
  /* 104ae772 call 0x104aee90 */
  push32(0x104ae777u); f_104aee90();
  /* 104ae777 jmp 0x104ae77e */
  goto L_104ae77e;
L_104ae779:;
  /* 104ae779 call 0x104aef90 */
  push32(0x104ae77eu); f_104aef90();
L_104ae77e:;
  /* 104ae77e cmp dword ptr [0x104ce6a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce6a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae785 jne 0x104ae78e */
  if (!C.zf) goto L_104ae78e;
  /* 104ae787 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ae789 jmp 0x104ae86c */
  goto L_104ae86c;
L_104ae78e:;
  /* 104ae78e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae791 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae797 push edx */
  push32((uint32_t)(EDX));
  /* 104ae798 call 0x104aefc0 */
  push32(0x104ae79du); f_104aefc0();
  /* 104ae79d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae7a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ae7a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae7a7 je 0x104ae7bc */
  if (C.zf) goto L_104ae7bc;
  /* 104ae7a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ae7ac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ae7b1 push eax */
  push32((uint32_t)(EAX));
  /* 104ae7b2 call dword ptr [0x104d02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02c4))), 0x104ae7b8u);
  /* 104ae7b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ae7ba jne 0x104ae7c3 */
  if (!C.zf) goto L_104ae7c3;
L_104ae7bc:;
  /* 104ae7bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ae7be jmp 0x104ae86c */
  goto L_104ae86c;
L_104ae7c3:;
  /* 104ae7c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ae7c5 mov ecx, dword ptr [0x104ce68c] */
  ECX = (r32((uint32_t)(0x104ce68c)));
  /* 104ae7cb push ecx */
  push32((uint32_t)(ECX));
  /* 104ae7cc call dword ptr [0x104d033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d033c))), 0x104ae7d2u);
  /* 104ae7d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ae7d4 jne 0x104ae7dd */
  if (!C.zf) goto L_104ae7dd;
  /* 104ae7d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ae7d8 jmp 0x104ae86c */
  goto L_104ae86c;
L_104ae7dd:;
  /* 104ae7dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae7e1 je 0x104ae808 */
  if (C.zf) goto L_104ae808;
  /* 104ae7e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ae7e6 mov ax, word ptr [0x104ce68c] */
  AX = (r16((uint32_t)(0x104ce68c)));
  /* 104ae7ec mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 104ae7ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ae7f2 mov dx, word ptr [0x104ce6a8] */
  DX = (r16((uint32_t)(0x104ce6a8)));
  /* 104ae7f9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 104ae7fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ae800 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 104ae804 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_104ae808:;
  /* 104ae808 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae80c je 0x104ae867 */
  if (C.zf) goto L_104ae867;
  /* 104ae80e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 104ae810 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ae813 push edx */
  push32((uint32_t)(EDX));
  /* 104ae814 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 104ae819 mov eax, dword ptr [0x104ce68c] */
  EAX = (r32((uint32_t)(0x104ce68c)));
  /* 104ae81e push eax */
  push32((uint32_t)(EAX));
  /* 104ae81f call dword ptr [0x104ce6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104ce6ac))), 0x104ae825u);
  /* 104ae825 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ae827 jne 0x104ae82d */
  if (!C.zf) goto L_104ae82d;
  /* 104ae829 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ae82b jmp 0x104ae86c */
  goto L_104ae86c;
L_104ae82d:;
  /* 104ae82d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 104ae82f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ae832 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae835 push ecx */
  push32((uint32_t)(ECX));
  /* 104ae836 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 104ae83b mov edx, dword ptr [0x104ce6a8] */
  EDX = (r32((uint32_t)(0x104ce6a8)));
  /* 104ae841 push edx */
  push32((uint32_t)(EDX));
  /* 104ae842 call dword ptr [0x104ce6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104ce6ac))), 0x104ae848u);
  /* 104ae848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ae84a jne 0x104ae850 */
  if (!C.zf) goto L_104ae850;
  /* 104ae84c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ae84e jmp 0x104ae86c */
  goto L_104ae86c;
L_104ae850:;
  /* 104ae850 push 0xa */
  push32((uint32_t)(0xau));
  /* 104ae852 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ae855 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae85a push eax */
  push32((uint32_t)(EAX));
  /* 104ae85b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ae85e push ecx */
  push32((uint32_t)(ECX));
  /* 104ae85f call 0x104a53d0 */
  push32(0x104ae864u); f_104a53d0();
  /* 104ae864 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ae867:;
  /* 104ae867 mov eax, 1 */
  EAX = (0x1u);
L_104ae86c:;
  /* 104ae86c mov esp, ebp */
  ESP = (EBP);
  /* 104ae86e pop ebp */
  EBP = (pop32());
  /* 104ae86f ret  */
  ESPCHK(0x104ae670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e870 @ 0x104ae870 (130 bytes, 47 insns) */
void f_104ae870(void) {
  FTRACE(0x104ae870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ae870 push ebp */
  push32((uint32_t)(EBP));
  /* 104ae871 mov ebp, esp */
  EBP = (ESP);
  /* 104ae873 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ae876 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 104ae87d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_104ae884:;
  /* 104ae884 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ae887 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae88a jg 0x104ae8ee */
  if ((!C.zf&&C.sf==C.of)) goto L_104ae8ee;
  /* 104ae88c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae890 je 0x104ae8ee */
  if (C.zf) goto L_104ae8ee;
  /* 104ae892 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ae895 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae898 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104ae899 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ae89b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104ae89d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ae8a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ae8a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae8a6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 104ae8a9 push eax */
  push32((uint32_t)(EAX));
  /* 104ae8aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ae8ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104ae8af push edx */
  push32((uint32_t)(EDX));
  /* 104ae8b0 call 0x104b0f60 */
  push32(0x104ae8b5u); f_104b0f60();
  /* 104ae8b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae8b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104ae8bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae8bf jne 0x104ae8d2 */
  if (!C.zf) goto L_104ae8d2;
  /* 104ae8c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ae8c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae8c7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 104ae8cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ae8ce mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104ae8d0 jmp 0x104ae8ec */
  goto L_104ae8ec;
L_104ae8d2:;
  /* 104ae8d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae8d6 jge 0x104ae8e3 */
  if ((C.sf==C.of)) goto L_104ae8e3;
  /* 104ae8d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ae8db sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ae8de mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 104ae8e1 jmp 0x104ae8ec */
  goto L_104ae8ec;
L_104ae8e3:;
  /* 104ae8e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ae8e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae8e9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_104ae8ec:;
  /* 104ae8ec jmp 0x104ae884 */
  goto L_104ae884;
L_104ae8ee:;
  /* 104ae8ee mov esp, ebp */
  ESP = (EBP);
  /* 104ae8f0 pop ebp */
  EBP = (pop32());
  /* 104ae8f1 ret  */
  ESPCHK(0x104ae870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e900 @ 0x104ae900 (186 bytes, 50 insns) */
void f_104ae900(void) {
  FTRACE(0x104ae900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ae900 push ebp */
  push32((uint32_t)(EBP));
  /* 104ae901 mov ebp, esp */
  EBP = (ESP);
  /* 104ae903 push ecx */
  push32((uint32_t)(ECX));
  /* 104ae904 mov eax, dword ptr [0x104ce69c] */
  EAX = (r32((uint32_t)(0x104ce69c)));
  /* 104ae909 push eax */
  push32((uint32_t)(EAX));
  /* 104ae90a call 0x104a56c0 */
  push32(0x104ae90fu); f_104a56c0();
  /* 104ae90f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae912 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104ae914 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae917 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 104ae91a mov dword ptr [0x104ce698], ecx */
  w32((uint32_t)(0x104ce698), (ECX));
  /* 104ae920 mov edx, dword ptr [0x104ce6a0] */
  EDX = (r32((uint32_t)(0x104ce6a0)));
  /* 104ae926 push edx */
  push32((uint32_t)(EDX));
  /* 104ae927 call 0x104a56c0 */
  push32(0x104ae92cu); f_104a56c0();
  /* 104ae92c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae92f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104ae931 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae934 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 104ae937 mov dword ptr [0x104ce690], ecx */
  w32((uint32_t)(0x104ce690), (ECX));
  /* 104ae93d mov dword ptr [0x104ce68c], 0 */
  w32((uint32_t)(0x104ce68c), (0x0u));
  /* 104ae947 cmp dword ptr [0x104ce698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ae94e je 0x104ae959 */
  if (C.zf) goto L_104ae959;
  /* 104ae950 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 104ae957 jmp 0x104ae96b */
  goto L_104ae96b;
L_104ae959:;
  /* 104ae959 mov edx, dword ptr [0x104ce69c] */
  EDX = (r32((uint32_t)(0x104ce69c)));
  /* 104ae95f push edx */
  push32((uint32_t)(EDX));
  /* 104ae960 call 0x104af3a0 */
  push32(0x104ae965u); f_104af3a0();
  /* 104ae965 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae968 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104ae96b:;
  /* 104ae96b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ae96e mov dword ptr [0x104ce694], eax */
  w32((uint32_t)(0x104ce694), (EAX));
  /* 104ae973 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ae975 push 0x104ae9c0 */
  push32((uint32_t)(0x104ae9c0u));
  /* 104ae97a call dword ptr [0x104d02c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02c8))), 0x104ae980u);
  /* 104ae980 mov ecx, dword ptr [0x104ce6a4] */
  ECX = (r32((uint32_t)(0x104ce6a4)));
  /* 104ae986 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 104ae98c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ae98e je 0x104ae9ac */
  if (C.zf) goto L_104ae9ac;
  /* 104ae990 mov edx, dword ptr [0x104ce6a4] */
  EDX = (r32((uint32_t)(0x104ce6a4)));
  /* 104ae996 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 104ae99c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ae99e je 0x104ae9ac */
  if (C.zf) goto L_104ae9ac;
  /* 104ae9a0 mov eax, dword ptr [0x104ce6a4] */
  EAX = (r32((uint32_t)(0x104ce6a4)));
  /* 104ae9a5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 104ae9a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ae9aa jne 0x104ae9b6 */
  if (!C.zf) goto L_104ae9b6;
L_104ae9ac:;
  /* 104ae9ac mov dword ptr [0x104ce6a4], 0 */
  w32((uint32_t)(0x104ce6a4), (0x0u));
L_104ae9b6:;
  /* 104ae9b6 mov esp, ebp */
  ESP = (EBP);
  /* 104ae9b8 pop ebp */
  EBP = (pop32());
  /* 104ae9b9 ret  */
  ESPCHK(0x104ae900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9c0 @ 0x104ae9c0 (804 bytes, 220 insns) */
void f_104ae9c0(void) {
  FTRACE(0x104ae9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ae9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ae9c1 mov ebp, esp */
  EBP = (ESP);
  /* 104ae9c3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ae9c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ae9c9 push eax */
  push32((uint32_t)(EAX));
  /* 104ae9ca call 0x104af320 */
  push32(0x104ae9cfu); f_104af320();
  /* 104ae9cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae9d2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 104ae9d5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 104ae9d7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 104ae9da push ecx */
  push32((uint32_t)(ECX));
  /* 104ae9db mov edx, dword ptr [0x104ce690] */
  EDX = (r32((uint32_t)(0x104ce690)));
  /* 104ae9e1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104ae9e3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ae9e5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 104ae9eb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ae9f1 push edx */
  push32((uint32_t)(EDX));
  /* 104ae9f2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ae9f5 push eax */
  push32((uint32_t)(EAX));
  /* 104ae9f6 call dword ptr [0x104ce6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104ce6ac))), 0x104ae9fcu);
  /* 104ae9fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ae9fe jne 0x104aea14 */
  if (!C.zf) goto L_104aea14;
  /* 104aea00 mov dword ptr [0x104ce6a4], 0 */
  w32((uint32_t)(0x104ce6a4), (0x0u));
  /* 104aea0a mov eax, 1 */
  EAX = (0x1u);
  /* 104aea0f jmp 0x104aecde */
  goto L_104aecde;
L_104aea14:;
  /* 104aea14 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 104aea17 push ecx */
  push32((uint32_t)(ECX));
  /* 104aea18 mov edx, dword ptr [0x104ce6a0] */
  EDX = (r32((uint32_t)(0x104ce6a0)));
  /* 104aea1e push edx */
  push32((uint32_t)(EDX));
  /* 104aea1f call 0x104b0f60 */
  push32(0x104aea24u); f_104b0f60();
  /* 104aea24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aea27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aea29 jne 0x104aeb4f */
  if (!C.zf) goto L_104aeb4f;
  /* 104aea2f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 104aea31 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 104aea34 push eax */
  push32((uint32_t)(EAX));
  /* 104aea35 mov ecx, dword ptr [0x104ce698] */
  ECX = (r32((uint32_t)(0x104ce698)));
  /* 104aea3b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104aea3d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aea3f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 104aea45 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aea4b push ecx */
  push32((uint32_t)(ECX));
  /* 104aea4c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aea4f push edx */
  push32((uint32_t)(EDX));
  /* 104aea50 call dword ptr [0x104ce6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104ce6ac))), 0x104aea56u);
  /* 104aea56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aea58 jne 0x104aea6e */
  if (!C.zf) goto L_104aea6e;
  /* 104aea5a mov dword ptr [0x104ce6a4], 0 */
  w32((uint32_t)(0x104ce6a4), (0x0u));
  /* 104aea64 mov eax, 1 */
  EAX = (0x1u);
  /* 104aea69 jmp 0x104aecde */
  goto L_104aecde;
L_104aea6e:;
  /* 104aea6e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 104aea71 push eax */
  push32((uint32_t)(EAX));
  /* 104aea72 mov ecx, dword ptr [0x104ce69c] */
  ECX = (r32((uint32_t)(0x104ce69c)));
  /* 104aea78 push ecx */
  push32((uint32_t)(ECX));
  /* 104aea79 call 0x104b0f60 */
  push32(0x104aea7eu); f_104b0f60();
  /* 104aea7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aea81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aea83 jne 0x104aeab0 */
  if (!C.zf) goto L_104aeab0;
  /* 104aea85 mov edx, dword ptr [0x104ce6a4] */
  EDX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aea8b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 104aea91 mov dword ptr [0x104ce6a4], edx */
  w32((uint32_t)(0x104ce6a4), (EDX));
  /* 104aea97 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aea9a mov dword ptr [0x104ce6a8], eax */
  w32((uint32_t)(0x104ce6a8), (EAX));
  /* 104aea9f mov ecx, dword ptr [0x104ce6a8] */
  ECX = (r32((uint32_t)(0x104ce6a8)));
  /* 104aeaa5 mov dword ptr [0x104ce68c], ecx */
  w32((uint32_t)(0x104ce68c), (ECX));
  /* 104aeaab jmp 0x104aeb4f */
  goto L_104aeb4f;
L_104aeab0:;
  /* 104aeab0 mov edx, dword ptr [0x104ce6a4] */
  EDX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aeab6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 104aeab9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104aeabb jne 0x104aeb4f */
  if (!C.zf) goto L_104aeb4f;
  /* 104aeac1 cmp dword ptr [0x104ce694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aeac8 je 0x104aeb1d */
  if (C.zf) goto L_104aeb1d;
  /* 104aeaca mov eax, dword ptr [0x104ce694] */
  EAX = (r32((uint32_t)(0x104ce694)));
  /* 104aeacf push eax */
  push32((uint32_t)(EAX));
  /* 104aead0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 104aead3 push ecx */
  push32((uint32_t)(ECX));
  /* 104aead4 mov edx, dword ptr [0x104ce69c] */
  EDX = (r32((uint32_t)(0x104ce69c)));
  /* 104aeada push edx */
  push32((uint32_t)(EDX));
  /* 104aeadb call 0x104b1030 */
  push32(0x104aeae0u); f_104b1030();
  /* 104aeae0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aeae3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aeae5 jne 0x104aeb1d */
  if (!C.zf) goto L_104aeb1d;
  /* 104aeae7 mov eax, dword ptr [0x104ce6a4] */
  EAX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aeaec or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 104aeaee mov dword ptr [0x104ce6a4], eax */
  w32((uint32_t)(0x104ce6a4), (EAX));
  /* 104aeaf3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aeaf6 mov dword ptr [0x104ce6a8], ecx */
  w32((uint32_t)(0x104ce6a8), (ECX));
  /* 104aeafc mov edx, dword ptr [0x104ce69c] */
  EDX = (r32((uint32_t)(0x104ce69c)));
  /* 104aeb02 push edx */
  push32((uint32_t)(EDX));
  /* 104aeb03 call 0x104a56c0 */
  push32(0x104aeb08u); f_104a56c0();
  /* 104aeb08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aeb0b cmp eax, dword ptr [0x104ce694] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104ce694))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aeb11 jne 0x104aeb1b */
  if (!C.zf) goto L_104aeb1b;
  /* 104aeb13 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aeb16 mov dword ptr [0x104ce68c], eax */
  w32((uint32_t)(0x104ce68c), (EAX));
L_104aeb1b:;
  /* 104aeb1b jmp 0x104aeb4f */
  goto L_104aeb4f;
L_104aeb1d:;
  /* 104aeb1d mov ecx, dword ptr [0x104ce6a4] */
  ECX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aeb23 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104aeb26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104aeb28 jne 0x104aeb4f */
  if (!C.zf) goto L_104aeb4f;
  /* 104aeb2a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aeb2d push edx */
  push32((uint32_t)(EDX));
  /* 104aeb2e call 0x104af060 */
  push32(0x104aeb33u); f_104af060();
  /* 104aeb33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aeb36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aeb38 je 0x104aeb4f */
  if (C.zf) goto L_104aeb4f;
  /* 104aeb3a mov eax, dword ptr [0x104ce6a4] */
  EAX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aeb3f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 104aeb41 mov dword ptr [0x104ce6a4], eax */
  w32((uint32_t)(0x104ce6a4), (EAX));
  /* 104aeb46 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aeb49 mov dword ptr [0x104ce6a8], ecx */
  w32((uint32_t)(0x104ce6a8), (ECX));
L_104aeb4f:;
  /* 104aeb4f mov edx, dword ptr [0x104ce6a4] */
  EDX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aeb55 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 104aeb5b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aeb61 je 0x104aecd1 */
  if (C.zf) goto L_104aecd1;
  /* 104aeb67 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 104aeb69 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 104aeb6c push eax */
  push32((uint32_t)(EAX));
  /* 104aeb6d mov ecx, dword ptr [0x104ce698] */
  ECX = (r32((uint32_t)(0x104ce698)));
  /* 104aeb73 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104aeb75 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aeb77 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 104aeb7d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aeb83 push ecx */
  push32((uint32_t)(ECX));
  /* 104aeb84 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aeb87 push edx */
  push32((uint32_t)(EDX));
  /* 104aeb88 call dword ptr [0x104ce6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104ce6ac))), 0x104aeb8eu);
  /* 104aeb8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aeb90 jne 0x104aeba6 */
  if (!C.zf) goto L_104aeba6;
  /* 104aeb92 mov dword ptr [0x104ce6a4], 0 */
  w32((uint32_t)(0x104ce6a4), (0x0u));
  /* 104aeb9c mov eax, 1 */
  EAX = (0x1u);
  /* 104aeba1 jmp 0x104aecde */
  goto L_104aecde;
L_104aeba6:;
  /* 104aeba6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 104aeba9 push eax */
  push32((uint32_t)(EAX));
  /* 104aebaa mov ecx, dword ptr [0x104ce69c] */
  ECX = (r32((uint32_t)(0x104ce69c)));
  /* 104aebb0 push ecx */
  push32((uint32_t)(ECX));
  /* 104aebb1 call 0x104b0f60 */
  push32(0x104aebb6u); f_104b0f60();
  /* 104aebb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aebb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aebbb jne 0x104aec70 */
  if (!C.zf) goto L_104aec70;
  /* 104aebc1 mov edx, dword ptr [0x104ce6a4] */
  EDX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aebc7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 104aebca mov dword ptr [0x104ce6a4], edx */
  w32((uint32_t)(0x104ce6a4), (EDX));
  /* 104aebd0 cmp dword ptr [0x104ce698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aebd7 je 0x104aebfa */
  if (C.zf) goto L_104aebfa;
  /* 104aebd9 mov eax, dword ptr [0x104ce6a4] */
  EAX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aebde or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 104aebe1 mov dword ptr [0x104ce6a4], eax */
  w32((uint32_t)(0x104ce6a4), (EAX));
  /* 104aebe6 cmp dword ptr [0x104ce68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aebed jne 0x104aebf8 */
  if (!C.zf) goto L_104aebf8;
  /* 104aebef mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aebf2 mov dword ptr [0x104ce68c], ecx */
  w32((uint32_t)(0x104ce68c), (ECX));
L_104aebf8:;
  /* 104aebf8 jmp 0x104aec6e */
  goto L_104aec6e;
L_104aebfa:;
  /* 104aebfa cmp dword ptr [0x104ce694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aec01 je 0x104aec4f */
  if (C.zf) goto L_104aec4f;
  /* 104aec03 mov edx, dword ptr [0x104ce69c] */
  EDX = (r32((uint32_t)(0x104ce69c)));
  /* 104aec09 push edx */
  push32((uint32_t)(EDX));
  /* 104aec0a call 0x104a56c0 */
  push32(0x104aec0fu); f_104a56c0();
  /* 104aec0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aec12 cmp eax, dword ptr [0x104ce694] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104ce694))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aec18 jne 0x104aec4f */
  if (!C.zf) goto L_104aec4f;
  /* 104aec1a push 1 */
  push32((uint32_t)(0x1u));
  /* 104aec1c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aec1f push eax */
  push32((uint32_t)(EAX));
  /* 104aec20 call 0x104af0b0 */
  push32(0x104aec25u); f_104af0b0();
  /* 104aec25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aec28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aec2a je 0x104aec4d */
  if (C.zf) goto L_104aec4d;
  /* 104aec2c mov ecx, dword ptr [0x104ce6a4] */
  ECX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aec32 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 104aec35 mov dword ptr [0x104ce6a4], ecx */
  w32((uint32_t)(0x104ce6a4), (ECX));
  /* 104aec3b cmp dword ptr [0x104ce68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aec42 jne 0x104aec4d */
  if (!C.zf) goto L_104aec4d;
  /* 104aec44 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aec47 mov dword ptr [0x104ce68c], edx */
  w32((uint32_t)(0x104ce68c), (EDX));
L_104aec4d:;
  /* 104aec4d jmp 0x104aec6e */
  goto L_104aec6e;
L_104aec4f:;
  /* 104aec4f mov eax, dword ptr [0x104ce6a4] */
  EAX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aec54 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 104aec57 mov dword ptr [0x104ce6a4], eax */
  w32((uint32_t)(0x104ce6a4), (EAX));
  /* 104aec5c cmp dword ptr [0x104ce68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aec63 jne 0x104aec6e */
  if (!C.zf) goto L_104aec6e;
  /* 104aec65 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aec68 mov dword ptr [0x104ce68c], ecx */
  w32((uint32_t)(0x104ce68c), (ECX));
L_104aec6e:;
  /* 104aec6e jmp 0x104aecd1 */
  goto L_104aecd1;
L_104aec70:;
  /* 104aec70 cmp dword ptr [0x104ce698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aec77 jne 0x104aecd1 */
  if (!C.zf) goto L_104aecd1;
  /* 104aec79 cmp dword ptr [0x104ce694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aec80 je 0x104aecd1 */
  if (C.zf) goto L_104aecd1;
  /* 104aec82 mov edx, dword ptr [0x104ce694] */
  EDX = (r32((uint32_t)(0x104ce694)));
  /* 104aec88 push edx */
  push32((uint32_t)(EDX));
  /* 104aec89 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 104aec8c push eax */
  push32((uint32_t)(EAX));
  /* 104aec8d mov ecx, dword ptr [0x104ce69c] */
  ECX = (r32((uint32_t)(0x104ce69c)));
  /* 104aec93 push ecx */
  push32((uint32_t)(ECX));
  /* 104aec94 call 0x104b1030 */
  push32(0x104aec99u); f_104b1030();
  /* 104aec99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aec9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aec9e jne 0x104aecd1 */
  if (!C.zf) goto L_104aecd1;
  /* 104aeca0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104aeca2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aeca5 push edx */
  push32((uint32_t)(EDX));
  /* 104aeca6 call 0x104af0b0 */
  push32(0x104aecabu); f_104af0b0();
  /* 104aecab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aecae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aecb0 je 0x104aecd1 */
  if (C.zf) goto L_104aecd1;
  /* 104aecb2 mov eax, dword ptr [0x104ce6a4] */
  EAX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aecb7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 104aecba mov dword ptr [0x104ce6a4], eax */
  w32((uint32_t)(0x104ce6a4), (EAX));
  /* 104aecbf cmp dword ptr [0x104ce68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aecc6 jne 0x104aecd1 */
  if (!C.zf) goto L_104aecd1;
  /* 104aecc8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aeccb mov dword ptr [0x104ce68c], ecx */
  w32((uint32_t)(0x104ce68c), (ECX));
L_104aecd1:;
  /* 104aecd1 mov eax, dword ptr [0x104ce6a4] */
  EAX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aecd6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104aecd9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104aecdb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aecdd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_104aecde:;
  /* 104aecde mov esp, ebp */
  ESP = (EBP);
  /* 104aece0 pop ebp */
  EBP = (pop32());
  /* 104aece1 ret 4 */
  ESPCHK(0x104ae9c0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ecf0 @ 0x104aecf0 (116 bytes, 33 insns) */
void f_104aecf0(void) {
  FTRACE(0x104aecf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aecf0 push ebp */
  push32((uint32_t)(EBP));
  /* 104aecf1 mov ebp, esp */
  EBP = (ESP);
  /* 104aecf3 push ecx */
  push32((uint32_t)(ECX));
  /* 104aecf4 mov eax, dword ptr [0x104ce69c] */
  EAX = (r32((uint32_t)(0x104ce69c)));
  /* 104aecf9 push eax */
  push32((uint32_t)(EAX));
  /* 104aecfa call 0x104a56c0 */
  push32(0x104aecffu); f_104a56c0();
  /* 104aecff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aed02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104aed04 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aed07 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 104aed0a mov dword ptr [0x104ce698], ecx */
  w32((uint32_t)(0x104ce698), (ECX));
  /* 104aed10 cmp dword ptr [0x104ce698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aed17 je 0x104aed22 */
  if (C.zf) goto L_104aed22;
  /* 104aed19 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 104aed20 jmp 0x104aed34 */
  goto L_104aed34;
L_104aed22:;
  /* 104aed22 mov edx, dword ptr [0x104ce69c] */
  EDX = (r32((uint32_t)(0x104ce69c)));
  /* 104aed28 push edx */
  push32((uint32_t)(EDX));
  /* 104aed29 call 0x104af3a0 */
  push32(0x104aed2eu); f_104af3a0();
  /* 104aed2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aed31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104aed34:;
  /* 104aed34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104aed37 mov dword ptr [0x104ce694], eax */
  w32((uint32_t)(0x104ce694), (EAX));
  /* 104aed3c push 1 */
  push32((uint32_t)(0x1u));
  /* 104aed3e push 0x104aed70 */
  push32((uint32_t)(0x104aed70u));
  /* 104aed43 call dword ptr [0x104d02c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02c8))), 0x104aed49u);
  /* 104aed49 mov ecx, dword ptr [0x104ce6a4] */
  ECX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aed4f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 104aed52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104aed54 jne 0x104aed60 */
  if (!C.zf) goto L_104aed60;
  /* 104aed56 mov dword ptr [0x104ce6a4], 0 */
  w32((uint32_t)(0x104ce6a4), (0x0u));
L_104aed60:;
  /* 104aed60 mov esp, ebp */
  ESP = (EBP);
  /* 104aed62 pop ebp */
  EBP = (pop32());
  /* 104aed63 ret  */
  ESPCHK(0x104aecf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed70 @ 0x104aed70 (287 bytes, 86 insns) */
void f_104aed70(void) {
  FTRACE(0x104aed70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aed70 push ebp */
  push32((uint32_t)(EBP));
  /* 104aed71 mov ebp, esp */
  EBP = (ESP);
  /* 104aed73 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aed76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aed79 push eax */
  push32((uint32_t)(EAX));
  /* 104aed7a call 0x104af320 */
  push32(0x104aed7fu); f_104af320();
  /* 104aed7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aed82 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 104aed85 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 104aed87 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 104aed8a push ecx */
  push32((uint32_t)(ECX));
  /* 104aed8b mov edx, dword ptr [0x104ce698] */
  EDX = (r32((uint32_t)(0x104ce698)));
  /* 104aed91 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104aed93 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aed95 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 104aed9b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aeda1 push edx */
  push32((uint32_t)(EDX));
  /* 104aeda2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aeda5 push eax */
  push32((uint32_t)(EAX));
  /* 104aeda6 call dword ptr [0x104ce6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104ce6ac))), 0x104aedacu);
  /* 104aedac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aedae jne 0x104aedc4 */
  if (!C.zf) goto L_104aedc4;
  /* 104aedb0 mov dword ptr [0x104ce6a4], 0 */
  w32((uint32_t)(0x104ce6a4), (0x0u));
  /* 104aedba mov eax, 1 */
  EAX = (0x1u);
  /* 104aedbf jmp 0x104aee89 */
  goto L_104aee89;
L_104aedc4:;
  /* 104aedc4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 104aedc7 push ecx */
  push32((uint32_t)(ECX));
  /* 104aedc8 mov edx, dword ptr [0x104ce69c] */
  EDX = (r32((uint32_t)(0x104ce69c)));
  /* 104aedce push edx */
  push32((uint32_t)(EDX));
  /* 104aedcf call 0x104b0f60 */
  push32(0x104aedd4u); f_104b0f60();
  /* 104aedd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aedd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aedd9 jne 0x104aee19 */
  if (!C.zf) goto L_104aee19;
  /* 104aeddb cmp dword ptr [0x104ce698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aede2 jne 0x104aedf6 */
  if (!C.zf) goto L_104aedf6;
  /* 104aede4 push 1 */
  push32((uint32_t)(0x1u));
  /* 104aede6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aede9 push eax */
  push32((uint32_t)(EAX));
  /* 104aedea call 0x104af0b0 */
  push32(0x104aedefu); f_104af0b0();
  /* 104aedef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aedf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aedf4 je 0x104aee17 */
  if (C.zf) goto L_104aee17;
L_104aedf6:;
  /* 104aedf6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aedf9 mov dword ptr [0x104ce6a8], ecx */
  w32((uint32_t)(0x104ce6a8), (ECX));
  /* 104aedff mov edx, dword ptr [0x104ce6a8] */
  EDX = (r32((uint32_t)(0x104ce6a8)));
  /* 104aee05 mov dword ptr [0x104ce68c], edx */
  w32((uint32_t)(0x104ce68c), (EDX));
  /* 104aee0b mov eax, dword ptr [0x104ce6a4] */
  EAX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aee10 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 104aee12 mov dword ptr [0x104ce6a4], eax */
  w32((uint32_t)(0x104ce6a4), (EAX));
L_104aee17:;
  /* 104aee17 jmp 0x104aee7c */
  goto L_104aee7c;
L_104aee19:;
  /* 104aee19 cmp dword ptr [0x104ce698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aee20 jne 0x104aee7c */
  if (!C.zf) goto L_104aee7c;
  /* 104aee22 cmp dword ptr [0x104ce694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aee29 je 0x104aee7c */
  if (C.zf) goto L_104aee7c;
  /* 104aee2b mov ecx, dword ptr [0x104ce694] */
  ECX = (r32((uint32_t)(0x104ce694)));
  /* 104aee31 push ecx */
  push32((uint32_t)(ECX));
  /* 104aee32 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 104aee35 push edx */
  push32((uint32_t)(EDX));
  /* 104aee36 mov eax, dword ptr [0x104ce69c] */
  EAX = (r32((uint32_t)(0x104ce69c)));
  /* 104aee3b push eax */
  push32((uint32_t)(EAX));
  /* 104aee3c call 0x104b1030 */
  push32(0x104aee41u); f_104b1030();
  /* 104aee41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aee44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aee46 jne 0x104aee7c */
  if (!C.zf) goto L_104aee7c;
  /* 104aee48 push 0 */
  push32((uint32_t)(0x0u));
  /* 104aee4a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aee4d push ecx */
  push32((uint32_t)(ECX));
  /* 104aee4e call 0x104af0b0 */
  push32(0x104aee53u); f_104af0b0();
  /* 104aee53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aee56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aee58 je 0x104aee7c */
  if (C.zf) goto L_104aee7c;
  /* 104aee5a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aee5d mov dword ptr [0x104ce6a8], edx */
  w32((uint32_t)(0x104ce6a8), (EDX));
  /* 104aee63 mov eax, dword ptr [0x104ce6a8] */
  EAX = (r32((uint32_t)(0x104ce6a8)));
  /* 104aee68 mov dword ptr [0x104ce68c], eax */
  w32((uint32_t)(0x104ce68c), (EAX));
  /* 104aee6d mov ecx, dword ptr [0x104ce6a4] */
  ECX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aee73 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 104aee76 mov dword ptr [0x104ce6a4], ecx */
  w32((uint32_t)(0x104ce6a4), (ECX));
L_104aee7c:;
  /* 104aee7c mov eax, dword ptr [0x104ce6a4] */
  EAX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aee81 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104aee84 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104aee86 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aee88 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_104aee89:;
  /* 104aee89 mov esp, ebp */
  ESP = (EBP);
  /* 104aee8b pop ebp */
  EBP = (pop32());
  /* 104aee8c ret 4 */
  ESPCHK(0x104aed70u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ee90 @ 0x104aee90 (69 bytes, 20 insns) */
void f_104aee90(void) {
  FTRACE(0x104aee90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aee90 push ebp */
  push32((uint32_t)(EBP));
  /* 104aee91 mov ebp, esp */
  EBP = (ESP);
  /* 104aee93 mov eax, dword ptr [0x104ce6a0] */
  EAX = (r32((uint32_t)(0x104ce6a0)));
  /* 104aee98 push eax */
  push32((uint32_t)(EAX));
  /* 104aee99 call 0x104a56c0 */
  push32(0x104aee9eu); f_104a56c0();
  /* 104aee9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aeea1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104aeea3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aeea6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 104aeea9 mov dword ptr [0x104ce690], ecx */
  w32((uint32_t)(0x104ce690), (ECX));
  /* 104aeeaf push 1 */
  push32((uint32_t)(0x1u));
  /* 104aeeb1 push 0x104aeee0 */
  push32((uint32_t)(0x104aeee0u));
  /* 104aeeb6 call dword ptr [0x104d02c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02c8))), 0x104aeebcu);
  /* 104aeebc mov edx, dword ptr [0x104ce6a4] */
  EDX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aeec2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104aeec5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104aeec7 jne 0x104aeed3 */
  if (!C.zf) goto L_104aeed3;
  /* 104aeec9 mov dword ptr [0x104ce6a4], 0 */
  w32((uint32_t)(0x104ce6a4), (0x0u));
L_104aeed3:;
  /* 104aeed3 pop ebp */
  EBP = (pop32());
  /* 104aeed4 ret  */
  ESPCHK(0x104aee90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eee0 @ 0x104aeee0 (172 bytes, 54 insns) */
void f_104aeee0(void) {
  FTRACE(0x104aeee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aeee0 push ebp */
  push32((uint32_t)(EBP));
  /* 104aeee1 mov ebp, esp */
  EBP = (ESP);
  /* 104aeee3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aeee6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aeee9 push eax */
  push32((uint32_t)(EAX));
  /* 104aeeea call 0x104af320 */
  push32(0x104aeeefu); f_104af320();
  /* 104aeeef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aeef2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 104aeef5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 104aeef7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 104aeefa push ecx */
  push32((uint32_t)(ECX));
  /* 104aeefb mov edx, dword ptr [0x104ce690] */
  EDX = (r32((uint32_t)(0x104ce690)));
  /* 104aef01 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104aef03 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aef05 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 104aef0b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104aef11 push edx */
  push32((uint32_t)(EDX));
  /* 104aef12 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aef15 push eax */
  push32((uint32_t)(EAX));
  /* 104aef16 call dword ptr [0x104ce6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104ce6ac))), 0x104aef1cu);
  /* 104aef1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aef1e jne 0x104aef31 */
  if (!C.zf) goto L_104aef31;
  /* 104aef20 mov dword ptr [0x104ce6a4], 0 */
  w32((uint32_t)(0x104ce6a4), (0x0u));
  /* 104aef2a mov eax, 1 */
  EAX = (0x1u);
  /* 104aef2f jmp 0x104aef86 */
  goto L_104aef86;
L_104aef31:;
  /* 104aef31 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 104aef34 push ecx */
  push32((uint32_t)(ECX));
  /* 104aef35 mov edx, dword ptr [0x104ce6a0] */
  EDX = (r32((uint32_t)(0x104ce6a0)));
  /* 104aef3b push edx */
  push32((uint32_t)(EDX));
  /* 104aef3c call 0x104b0f60 */
  push32(0x104aef41u); f_104b0f60();
  /* 104aef41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aef44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aef46 jne 0x104aef79 */
  if (!C.zf) goto L_104aef79;
  /* 104aef48 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aef4b push eax */
  push32((uint32_t)(EAX));
  /* 104aef4c call 0x104af060 */
  push32(0x104aef51u); f_104af060();
  /* 104aef51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aef54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aef56 je 0x104aef79 */
  if (C.zf) goto L_104aef79;
  /* 104aef58 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104aef5b mov dword ptr [0x104ce6a8], ecx */
  w32((uint32_t)(0x104ce6a8), (ECX));
  /* 104aef61 mov edx, dword ptr [0x104ce6a8] */
  EDX = (r32((uint32_t)(0x104ce6a8)));
  /* 104aef67 mov dword ptr [0x104ce68c], edx */
  w32((uint32_t)(0x104ce68c), (EDX));
  /* 104aef6d mov eax, dword ptr [0x104ce6a4] */
  EAX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aef72 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 104aef74 mov dword ptr [0x104ce6a4], eax */
  w32((uint32_t)(0x104ce6a4), (EAX));
L_104aef79:;
  /* 104aef79 mov eax, dword ptr [0x104ce6a4] */
  EAX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aef7e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104aef81 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104aef83 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aef85 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_104aef86:;
  /* 104aef86 mov esp, ebp */
  ESP = (EBP);
  /* 104aef88 pop ebp */
  EBP = (pop32());
  /* 104aef89 ret 4 */
  ESPCHK(0x104aeee0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ef90 @ 0x104aef90 (43 bytes, 11 insns) */
void f_104aef90(void) {
  FTRACE(0x104aef90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aef90 push ebp */
  push32((uint32_t)(EBP));
  /* 104aef91 mov ebp, esp */
  EBP = (ESP);
  /* 104aef93 mov eax, dword ptr [0x104ce6a4] */
  EAX = (r32((uint32_t)(0x104ce6a4)));
  /* 104aef98 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 104aef9d mov dword ptr [0x104ce6a4], eax */
  w32((uint32_t)(0x104ce6a4), (EAX));
  /* 104aefa2 call dword ptr [0x104d0240] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0240))), 0x104aefa8u);
  /* 104aefa8 mov dword ptr [0x104ce6a8], eax */
  w32((uint32_t)(0x104ce6a8), (EAX));
  /* 104aefad mov ecx, dword ptr [0x104ce6a8] */
  ECX = (r32((uint32_t)(0x104ce6a8)));
  /* 104aefb3 mov dword ptr [0x104ce68c], ecx */
  w32((uint32_t)(0x104ce68c), (ECX));
  /* 104aefb9 pop ebp */
  EBP = (pop32());
  /* 104aefba ret  */
  ESPCHK(0x104aef90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efc0 @ 0x104aefc0 (155 bytes, 57 insns) */
void f_104aefc0(void) {
  FTRACE(0x104aefc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104aefc0 push ebp */
  push32((uint32_t)(EBP));
  /* 104aefc1 mov ebp, esp */
  EBP = (ESP);
  /* 104aefc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104aefc6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104aefca je 0x104aefeb */
  if (C.zf) goto L_104aefeb;
  /* 104aefcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aefcf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104aefd2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104aefd4 je 0x104aefeb */
  if (C.zf) goto L_104aefeb;
  /* 104aefd6 push 0x104ca6ac */
  push32((uint32_t)(0x104ca6acu));
  /* 104aefdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104aefde push edx */
  push32((uint32_t)(EDX));
  /* 104aefdf call 0x104ae520 */
  push32(0x104aefe4u); f_104ae520();
  /* 104aefe4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104aefe7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104aefe9 jne 0x104af013 */
  if (!C.zf) goto L_104af013;
L_104aefeb:;
  /* 104aefeb push 8 */
  push32((uint32_t)(0x8u));
  /* 104aefed lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 104aeff0 push eax */
  push32((uint32_t)(EAX));
  /* 104aeff1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 104aeff6 mov ecx, dword ptr [0x104ce6a8] */
  ECX = (r32((uint32_t)(0x104ce6a8)));
  /* 104aeffc push ecx */
  push32((uint32_t)(ECX));
  /* 104aeffd call dword ptr [0x104ce6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104ce6ac))), 0x104af003u);
  /* 104af003 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104af005 jne 0x104af00b */
  if (!C.zf) goto L_104af00b;
  /* 104af007 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104af009 jmp 0x104af057 */
  goto L_104af057;
L_104af00b:;
  /* 104af00b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 104af00e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 104af011 jmp 0x104af04b */
  goto L_104af04b;
L_104af013:;
  /* 104af013 push 0x104ca6a8 */
  push32((uint32_t)(0x104ca6a8u));
  /* 104af018 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af01b push eax */
  push32((uint32_t)(EAX));
  /* 104af01c call 0x104ae520 */
  push32(0x104af021u); f_104ae520();
  /* 104af021 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af024 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104af026 jne 0x104af04b */
  if (!C.zf) goto L_104af04b;
  /* 104af028 push 8 */
  push32((uint32_t)(0x8u));
  /* 104af02a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 104af02d push ecx */
  push32((uint32_t)(ECX));
  /* 104af02e push 0xb */
  push32((uint32_t)(0xbu));
  /* 104af030 mov edx, dword ptr [0x104ce6a8] */
  EDX = (r32((uint32_t)(0x104ce6a8)));
  /* 104af036 push edx */
  push32((uint32_t)(EDX));
  /* 104af037 call dword ptr [0x104ce6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104ce6ac))), 0x104af03du);
  /* 104af03d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104af03f jne 0x104af045 */
  if (!C.zf) goto L_104af045;
  /* 104af041 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104af043 jmp 0x104af057 */
  goto L_104af057;
L_104af045:;
  /* 104af045 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 104af048 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_104af04b:;
  /* 104af04b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af04e push ecx */
  push32((uint32_t)(ECX));
  /* 104af04f call 0x104b1140 */
  push32(0x104af054u); f_104b1140();
  /* 104af054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104af057:;
  /* 104af057 mov esp, ebp */
  ESP = (EBP);
  /* 104af059 pop ebp */
  EBP = (pop32());
  /* 104af05a ret  */
  ESPCHK(0x104aefc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f060 @ 0x104af060 (79 bytes, 26 insns) */
void f_104af060(void) {
  FTRACE(0x104af060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104af060 push ebp */
  push32((uint32_t)(EBP));
  /* 104af061 mov ebp, esp */
  EBP = (ESP);
  /* 104af063 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104af066 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 104af06a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 104af06e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104af075 jmp 0x104af080 */
  goto L_104af080;
L_104af077:;
  /* 104af077 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104af07a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af07d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_104af080:;
  /* 104af080 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af084 jae 0x104af0a6 */
  if (!C.cf) goto L_104af0a6;
  /* 104af086 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104af089 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104af08f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104af092 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104af094 mov cx, word ptr [eax*2 + 0x104cd9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x104cd9c4)));
  /* 104af09c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af09e jne 0x104af0a4 */
  if (!C.zf) goto L_104af0a4;
  /* 104af0a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104af0a2 jmp 0x104af0ab */
  goto L_104af0ab;
L_104af0a4:;
  /* 104af0a4 jmp 0x104af077 */
  goto L_104af077;
L_104af0a6:;
  /* 104af0a6 mov eax, 1 */
  EAX = (0x1u);
L_104af0ab:;
  /* 104af0ab mov esp, ebp */
  ESP = (EBP);
  /* 104af0ad pop ebp */
  EBP = (pop32());
  /* 104af0ae ret  */
  ESPCHK(0x104af060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0b0 @ 0x104af0b0 (135 bytes, 48 insns) */
void f_104af0b0(void) {
  FTRACE(0x104af0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104af0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104af0b1 mov ebp, esp */
  EBP = (ESP);
  /* 104af0b3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104af0b6 push esi */
  push32((uint32_t)(ESI));
  /* 104af0b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af0ba and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104af0bf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 104af0c4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104af0c9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 104af0cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104af0d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104af0d4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 104af0d6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 104af0d9 push ecx */
  push32((uint32_t)(ECX));
  /* 104af0da push 1 */
  push32((uint32_t)(0x1u));
  /* 104af0dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104af0df push edx */
  push32((uint32_t)(EDX));
  /* 104af0e0 call dword ptr [0x104ce6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104ce6ac))), 0x104af0e6u);
  /* 104af0e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104af0e8 jne 0x104af0ee */
  if (!C.zf) goto L_104af0ee;
  /* 104af0ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104af0ec jmp 0x104af132 */
  goto L_104af132;
L_104af0ee:;
  /* 104af0ee lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 104af0f1 push eax */
  push32((uint32_t)(EAX));
  /* 104af0f2 call 0x104af320 */
  push32(0x104af0f7u); f_104af320();
  /* 104af0f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af0fa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af0fd je 0x104af12d */
  if (C.zf) goto L_104af12d;
  /* 104af0ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af103 je 0x104af12d */
  if (C.zf) goto L_104af12d;
  /* 104af105 mov ecx, dword ptr [0x104ce69c] */
  ECX = (r32((uint32_t)(0x104ce69c)));
  /* 104af10b push ecx */
  push32((uint32_t)(ECX));
  /* 104af10c call 0x104af3a0 */
  push32(0x104af111u); f_104af3a0();
  /* 104af111 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af114 mov esi, eax */
  ESI = (EAX);
  /* 104af116 mov edx, dword ptr [0x104ce69c] */
  EDX = (r32((uint32_t)(0x104ce69c)));
  /* 104af11c push edx */
  push32((uint32_t)(EDX));
  /* 104af11d call 0x104a56c0 */
  push32(0x104af122u); f_104a56c0();
  /* 104af122 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af125 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af127 jne 0x104af12d */
  if (!C.zf) goto L_104af12d;
  /* 104af129 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104af12b jmp 0x104af132 */
  goto L_104af132;
L_104af12d:;
  /* 104af12d mov eax, 1 */
  EAX = (0x1u);
L_104af132:;
  /* 104af132 pop esi */
  ESI = (pop32());
  /* 104af133 mov esp, ebp */
  ESP = (EBP);
  /* 104af135 pop ebp */
  EBP = (pop32());
  /* 104af136 ret  */
  ESPCHK(0x104af0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f140 @ 0x104af140 (77 bytes, 18 insns) */
void f_104af140(void) {
  FTRACE(0x104af140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104af140 push ebp */
  push32((uint32_t)(EBP));
  /* 104af141 mov ebp, esp */
  EBP = (ESP);
  /* 104af143 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104af149 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 104af153 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 104af159 push eax */
  push32((uint32_t)(EAX));
  /* 104af15a call dword ptr [0x104d023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d023c))), 0x104af160u);
  /* 104af160 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104af162 je 0x104af179 */
  if (C.zf) goto L_104af179;
  /* 104af164 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af16b jne 0x104af179 */
  if (!C.zf) goto L_104af179;
  /* 104af16d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 104af177 jmp 0x104af183 */
  goto L_104af183;
L_104af179:;
  /* 104af179 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_104af183:;
  /* 104af183 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 104af189 mov esp, ebp */
  ESP = (EBP);
  /* 104af18b pop ebp */
  EBP = (pop32());
  /* 104af18c ret  */
  ESPCHK(0x104af140u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x104af190 (388 bytes, 118 insns) */
void f_104af190(void) {
  FTRACE(0x104af190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104af190 push ebp */
  push32((uint32_t)(EBP));
  /* 104af191 mov ebp, esp */
  EBP = (ESP);
  /* 104af193 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104af196 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104af19d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 104af1a4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_104af1ab:;
  /* 104af1ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af1ae cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af1b1 jg 0x104af2f8 */
  if ((!C.zf&&C.sf==C.of)) goto L_104af2f8;
  /* 104af1b7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af1ba add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af1bd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104af1be sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104af1c0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104af1c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104af1c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af1c8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104af1cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af1ce cmp edx, dword ptr [ecx + 0x104cd520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x104cd520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af1d4 jne 0x104af2ce */
  if (!C.zf) goto L_104af2ce;
  /* 104af1da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104af1dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104af1e0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af1e4 ja 0x104af207 */
  if ((!C.cf&&!C.zf)) goto L_104af207;
  /* 104af1e6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af1ea je 0x104af279 */
  if (C.zf) goto L_104af279;
  /* 104af1f0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af1f4 je 0x104af224 */
  if (C.zf) goto L_104af224;
  /* 104af1f6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af1fa je 0x104af246 */
  if (C.zf) goto L_104af246;
  /* 104af1fc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af200 je 0x104af268 */
  if (C.zf) goto L_104af268;
  /* 104af202 jmp 0x104af298 */
  goto L_104af298;
L_104af207:;
  /* 104af207 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af20e je 0x104af235 */
  if (C.zf) goto L_104af235;
  /* 104af210 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af217 je 0x104af257 */
  if (C.zf) goto L_104af257;
  /* 104af219 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af220 je 0x104af28a */
  if (C.zf) goto L_104af28a;
  /* 104af222 jmp 0x104af298 */
  goto L_104af298;
L_104af224:;
  /* 104af224 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af227 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104af22a add ecx, 0x104cd524 */
  { uint32_t _a=(ECX),_b=(0x104cd524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af230 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104af233 jmp 0x104af298 */
  goto L_104af298;
L_104af235:;
  /* 104af235 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af238 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104af23b mov eax, dword ptr [edx + 0x104cd52c] */
  EAX = (r32((uint32_t)(EDX + 0x104cd52c)));
  /* 104af241 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104af244 jmp 0x104af298 */
  goto L_104af298;
L_104af246:;
  /* 104af246 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af249 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104af24c add ecx, 0x104cd530 */
  { uint32_t _a=(ECX),_b=(0x104cd530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af252 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104af255 jmp 0x104af298 */
  goto L_104af298;
L_104af257:;
  /* 104af257 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af25a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104af25d mov eax, dword ptr [edx + 0x104cd534] */
  EAX = (r32((uint32_t)(EDX + 0x104cd534)));
  /* 104af263 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104af266 jmp 0x104af298 */
  goto L_104af298;
L_104af268:;
  /* 104af268 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af26b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104af26e add ecx, 0x104cd538 */
  { uint32_t _a=(ECX),_b=(0x104cd538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af274 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104af277 jmp 0x104af298 */
  goto L_104af298;
L_104af279:;
  /* 104af279 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af27c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104af27f add edx, 0x104cd53c */
  { uint32_t _a=(EDX),_b=(0x104cd53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af285 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104af288 jmp 0x104af298 */
  goto L_104af298;
L_104af28a:;
  /* 104af28a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af28d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104af290 add eax, 0x104cd544 */
  { uint32_t _a=(EAX),_b=(0x104cd544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af295 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104af298:;
  /* 104af298 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af29c je 0x104af2a4 */
  if (C.zf) goto L_104af2a4;
  /* 104af29e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af2a2 jge 0x104af2a6 */
  if ((C.sf==C.of)) goto L_104af2a6;
L_104af2a4:;
  /* 104af2a4 jmp 0x104af2f8 */
  goto L_104af2f8;
L_104af2a6:;
  /* 104af2a6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104af2a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104af2ac push ecx */
  push32((uint32_t)(ECX));
  /* 104af2ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104af2b0 push edx */
  push32((uint32_t)(EDX));
  /* 104af2b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104af2b4 push eax */
  push32((uint32_t)(EAX));
  /* 104af2b5 call 0x104a60b0 */
  push32(0x104af2bau); f_104a60b0();
  /* 104af2ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af2bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104af2c0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af2c3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 104af2c7 mov eax, 1 */
  EAX = (0x1u);
  /* 104af2cc jmp 0x104af30e */
  goto L_104af30e;
L_104af2ce:;
  /* 104af2ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af2d1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104af2d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af2d7 cmp eax, dword ptr [edx + 0x104cd520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x104cd520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af2dd jae 0x104af2ea */
  if (!C.cf) goto L_104af2ea;
  /* 104af2df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af2e2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104af2e5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104af2e8 jmp 0x104af2f3 */
  goto L_104af2f3;
L_104af2ea:;
  /* 104af2ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af2ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af2f0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_104af2f3:;
  /* 104af2f3 jmp 0x104af1ab */
  goto L_104af1ab;
L_104af2f8:;
  /* 104af2f8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104af2fb push eax */
  push32((uint32_t)(EAX));
  /* 104af2fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104af2ff push ecx */
  push32((uint32_t)(ECX));
  /* 104af300 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104af303 push edx */
  push32((uint32_t)(EDX));
  /* 104af304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af307 push eax */
  push32((uint32_t)(EAX));
  /* 104af308 call dword ptr [0x104d0248] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0248))), 0x104af30eu);
L_104af30e:;
  /* 104af30e mov esp, ebp */
  ESP = (EBP);
  /* 104af310 pop ebp */
  EBP = (pop32());
  /* 104af311 ret 0x10 */
  ESPCHK(0x104af190u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f320 @ 0x104af320 (118 bytes, 42 insns) */
void f_104af320(void) {
  FTRACE(0x104af320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104af320 push ebp */
  push32((uint32_t)(EBP));
  /* 104af321 mov ebp, esp */
  EBP = (ESP);
  /* 104af323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104af326 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104af32d:;
  /* 104af32d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af330 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104af332 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 104af335 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104af339 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af33c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af33f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104af342 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104af344 je 0x104af38f */
  if (C.zf) goto L_104af38f;
  /* 104af346 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104af34a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af34d jl 0x104af362 */
  if ((C.sf!=C.of)) goto L_104af362;
  /* 104af34f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104af353 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af356 jg 0x104af362 */
  if ((!C.zf&&C.sf==C.of)) goto L_104af362;
  /* 104af358 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 104af35b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104af35d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 104af360 jmp 0x104af37c */
  goto L_104af37c;
L_104af362:;
  /* 104af362 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104af366 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af369 jl 0x104af37c */
  if ((C.sf!=C.of)) goto L_104af37c;
  /* 104af36b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104af36f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af372 jg 0x104af37c */
  if ((!C.zf&&C.sf==C.of)) goto L_104af37c;
  /* 104af374 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 104af377 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104af379 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_104af37c:;
  /* 104af37c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104af37f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 104af382 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104af386 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 104af38a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104af38d jmp 0x104af32d */
  goto L_104af32d;
L_104af38f:;
  /* 104af38f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104af392 mov esp, ebp */
  ESP = (EBP);
  /* 104af394 pop ebp */
  EBP = (pop32());
  /* 104af395 ret  */
  ESPCHK(0x104af320u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x104af3a0 (101 bytes, 36 insns) */
void f_104af3a0(void) {
  FTRACE(0x104af3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104af3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104af3a1 mov ebp, esp */
  EBP = (ESP);
  /* 104af3a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104af3a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104af3ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af3b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104af3b2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 104af3b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af3b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af3bb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_104af3be:;
  /* 104af3be movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 104af3c2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af3c5 jl 0x104af3d0 */
  if ((C.sf!=C.of)) goto L_104af3d0;
  /* 104af3c7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 104af3cb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af3ce jle 0x104af3e2 */
  if ((C.zf||C.sf!=C.of)) goto L_104af3e2;
L_104af3d0:;
  /* 104af3d0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 104af3d4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af3d7 jl 0x104af3fe */
  if ((C.sf!=C.of)) goto L_104af3fe;
  /* 104af3d9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 104af3dd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af3e0 jg 0x104af3fe */
  if ((!C.zf&&C.sf==C.of)) goto L_104af3fe;
L_104af3e2:;
  /* 104af3e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104af3e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af3e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104af3eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af3ee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104af3f0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 104af3f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af3f6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af3f9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 104af3fc jmp 0x104af3be */
  goto L_104af3be;
L_104af3fe:;
  /* 104af3fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104af401 mov esp, ebp */
  ESP = (EBP);
  /* 104af403 pop ebp */
  EBP = (pop32());
  /* 104af404 ret  */
  ESPCHK(0x104af3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f410 @ 0x104af410 (122 bytes, 39 insns) */
void f_104af410(void) {
  FTRACE(0x104af410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104af410 push ebp */
  push32((uint32_t)(EBP));
  /* 104af411 mov ebp, esp */
  EBP = (ESP);
  /* 104af413 push ecx */
  push32((uint32_t)(ECX));
  /* 104af414 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af417 cmp eax, dword ptr [0x104cff3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104cff3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af41d jae 0x104af441 */
  if (!C.cf) goto L_104af441;
  /* 104af41f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af422 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104af425 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af428 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104af42b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104af42e mov eax, dword ptr [ecx*4 + 0x104cfe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x104cfe00)));
  /* 104af435 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104af43a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104af43d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104af43f jne 0x104af45c */
  if (!C.zf) goto L_104af45c;
L_104af441:;
  /* 104af441 call 0x104aa760 */
  push32(0x104af446u); f_104aa760();
  /* 104af446 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104af44c call 0x104aa770 */
  push32(0x104af451u); f_104aa770();
  /* 104af451 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104af457 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104af45a jmp 0x104af486 */
  goto L_104af486;
L_104af45c:;
  /* 104af45c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af45f push edx */
  push32((uint32_t)(EDX));
  /* 104af460 call 0x104abf80 */
  push32(0x104af465u); f_104abf80();
  /* 104af465 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af468 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af46b push eax */
  push32((uint32_t)(EAX));
  /* 104af46c call 0x104af490 */
  push32(0x104af471u); f_104af490();
  /* 104af471 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af474 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104af477 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af47a push ecx */
  push32((uint32_t)(ECX));
  /* 104af47b call 0x104ac010 */
  push32(0x104af480u); f_104ac010();
  /* 104af480 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af483 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104af486:;
  /* 104af486 mov esp, ebp */
  ESP = (EBP);
  /* 104af488 pop ebp */
  EBP = (pop32());
  /* 104af489 ret  */
  ESPCHK(0x104af410u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x104af490 (170 bytes, 59 insns) */
void f_104af490(void) {
  FTRACE(0x104af490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104af490 push ebp */
  push32((uint32_t)(EBP));
  /* 104af491 mov ebp, esp */
  EBP = (ESP);
  /* 104af493 push ecx */
  push32((uint32_t)(ECX));
  /* 104af494 push esi */
  push32((uint32_t)(ESI));
  /* 104af495 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af498 push eax */
  push32((uint32_t)(EAX));
  /* 104af499 call 0x104abe00 */
  push32(0x104af49eu); f_104abe00();
  /* 104af49e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af4a1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af4a4 je 0x104af4e3 */
  if (C.zf) goto L_104af4e3;
  /* 104af4a6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af4aa je 0x104af4b2 */
  if (C.zf) goto L_104af4b2;
  /* 104af4ac cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af4b0 jne 0x104af4cc */
  if (!C.zf) goto L_104af4cc;
L_104af4b2:;
  /* 104af4b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 104af4b4 call 0x104abe00 */
  push32(0x104af4b9u); f_104abe00();
  /* 104af4b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af4bc mov esi, eax */
  ESI = (EAX);
  /* 104af4be push 2 */
  push32((uint32_t)(0x2u));
  /* 104af4c0 call 0x104abe00 */
  push32(0x104af4c5u); f_104abe00();
  /* 104af4c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af4c8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af4ca je 0x104af4e3 */
  if (C.zf) goto L_104af4e3;
L_104af4cc:;
  /* 104af4cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af4cf push ecx */
  push32((uint32_t)(ECX));
  /* 104af4d0 call 0x104abe00 */
  push32(0x104af4d5u); f_104abe00();
  /* 104af4d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af4d8 push eax */
  push32((uint32_t)(EAX));
  /* 104af4d9 call dword ptr [0x104d0244] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0244))), 0x104af4dfu);
  /* 104af4df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104af4e1 je 0x104af4ec */
  if (C.zf) goto L_104af4ec;
L_104af4e3:;
  /* 104af4e3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104af4ea jmp 0x104af4f5 */
  goto L_104af4f5;
L_104af4ec:;
  /* 104af4ec call dword ptr [0x104d029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d029c))), 0x104af4f2u);
  /* 104af4f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104af4f5:;
  /* 104af4f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af4f8 push edx */
  push32((uint32_t)(EDX));
  /* 104af4f9 call 0x104abd20 */
  push32(0x104af4feu); f_104abd20();
  /* 104af4fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af501 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af504 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104af507 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af50a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104af50d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104af510 mov edx, dword ptr [eax*4 + 0x104cfe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x104cfe00)));
  /* 104af517 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 104af51c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af520 je 0x104af533 */
  if (C.zf) goto L_104af533;
  /* 104af522 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104af525 push eax */
  push32((uint32_t)(EAX));
  /* 104af526 call 0x104aa6c0 */
  push32(0x104af52bu); f_104aa6c0();
  /* 104af52b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af52e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104af531 jmp 0x104af535 */
  goto L_104af535;
L_104af533:;
  /* 104af533 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104af535:;
  /* 104af535 pop esi */
  ESI = (pop32());
  /* 104af536 mov esp, ebp */
  ESP = (EBP);
  /* 104af538 pop ebp */
  EBP = (pop32());
  /* 104af539 ret  */
  ESPCHK(0x104af490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f540 @ 0x104af540 (146 bytes, 52 insns) */
void f_104af540(void) {
  FTRACE(0x104af540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104af540 push ebp */
  push32((uint32_t)(EBP));
  /* 104af541 mov ebp, esp */
  EBP = (ESP);
  /* 104af543 push ebx */
  push32((uint32_t)(EBX));
  /* 104af544 push esi */
  push32((uint32_t)(ESI));
  /* 104af545 push edi */
  push32((uint32_t)(EDI));
L_104af546:;
  /* 104af546 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af54a jne 0x104af56a */
  if (!C.zf) goto L_104af56a;
  /* 104af54c push 0x104c9fe8 */
  push32((uint32_t)(0x104c9fe8u));
  /* 104af551 push 0 */
  push32((uint32_t)(0x0u));
  /* 104af553 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 104af555 push 0x104ca6b0 */
  push32((uint32_t)(0x104ca6b0u));
  /* 104af55a push 2 */
  push32((uint32_t)(0x2u));
  /* 104af55c call 0x104a1950 */
  push32(0x104af561u); f_104a1950();
  /* 104af561 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af564 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af567 jne 0x104af56a */
  if (!C.zf) goto L_104af56a;
  /* 104af569 int3  */
  x86_unimpl("int3 @ 0x104af569");
L_104af56a:;
  /* 104af56a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104af56c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104af56e jne 0x104af546 */
  if (!C.zf) goto L_104af546;
  /* 104af570 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af573 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104af576 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 104af57c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104af57e je 0x104af5cd */
  if (C.zf) goto L_104af5cd;
  /* 104af580 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af583 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104af586 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 104af589 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104af58b je 0x104af5cd */
  if (C.zf) goto L_104af5cd;
  /* 104af58d push 2 */
  push32((uint32_t)(0x2u));
  /* 104af58f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af592 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104af595 push eax */
  push32((uint32_t)(EAX));
  /* 104af596 call 0x104a3320 */
  push32(0x104af59bu); f_104a3320();
  /* 104af59b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af59e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af5a1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104af5a4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 104af5aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af5ad mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 104af5b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af5b3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 104af5b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af5bc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 104af5c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104af5c6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_104af5cd:;
  /* 104af5cd pop edi */
  EDI = (pop32());
  /* 104af5ce pop esi */
  ESI = (pop32());
  /* 104af5cf pop ebx */
  EBX = (pop32());
  /* 104af5d0 pop ebp */
  EBP = (pop32());
  /* 104af5d1 ret  */
  ESPCHK(0x104af540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5e0 @ 0x104af5e0 (289 bytes, 97 insns) */
void f_104af5e0(void) {
  FTRACE(0x104af5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104af5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104af5e1 mov ebp, esp */
  EBP = (ESP);
  /* 104af5e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104af5e6 push esi */
  push32((uint32_t)(ESI));
  /* 104af5e7 mov eax, dword ptr [0x104cdc98] */
  EAX = (r32((uint32_t)(0x104cdc98)));
  /* 104af5ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104af5ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104af5f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104af5fd jmp 0x104af608 */
  goto L_104af608;
L_104af5ff:;
  /* 104af5ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af602 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af605 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_104af608:;
  /* 104af608 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af60c jae 0x104af641 */
  if (!C.cf) goto L_104af641;
  /* 104af60e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af611 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af614 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 104af617 push ecx */
  push32((uint32_t)(ECX));
  /* 104af618 call 0x104a56c0 */
  push32(0x104af61du); f_104a56c0();
  /* 104af61d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af620 mov esi, eax */
  ESI = (EAX);
  /* 104af622 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af625 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af628 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 104af62c push ecx */
  push32((uint32_t)(ECX));
  /* 104af62d call 0x104a56c0 */
  push32(0x104af632u); f_104a56c0();
  /* 104af632 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af635 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af638 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 104af63c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104af63f jmp 0x104af5ff */
  goto L_104af5ff;
L_104af641:;
  /* 104af641 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104af644 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af647 push eax */
  push32((uint32_t)(EAX));
  /* 104af648 call 0x104a2870 */
  push32(0x104af64du); f_104a2870();
  /* 104af64d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af650 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104af653 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af657 je 0x104af6f9 */
  if (C.zf) goto L_104af6f9;
  /* 104af65d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104af660 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104af663 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104af66a jmp 0x104af675 */
  goto L_104af675;
L_104af66c:;
  /* 104af66c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af66f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af672 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_104af675:;
  /* 104af675 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af679 jae 0x104af6ea */
  if (!C.cf) goto L_104af6ea;
  /* 104af67b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af67e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 104af681 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af684 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af687 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104af68a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af68d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af690 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 104af693 push ecx */
  push32((uint32_t)(ECX));
  /* 104af694 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af697 push edx */
  push32((uint32_t)(EDX));
  /* 104af698 call 0x104a5840 */
  push32(0x104af69du); f_104a5840();
  /* 104af69d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af6a0 push eax */
  push32((uint32_t)(EAX));
  /* 104af6a1 call 0x104a56c0 */
  push32(0x104af6a6u); f_104a56c0();
  /* 104af6a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af6a9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af6ac add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af6ae mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104af6b1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af6b4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 104af6b7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af6ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af6bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104af6c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af6c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af6c6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 104af6ca push eax */
  push32((uint32_t)(EAX));
  /* 104af6cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af6ce push ecx */
  push32((uint32_t)(ECX));
  /* 104af6cf call 0x104a5840 */
  push32(0x104af6d4u); f_104a5840();
  /* 104af6d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af6d7 push eax */
  push32((uint32_t)(EAX));
  /* 104af6d8 call 0x104a56c0 */
  push32(0x104af6ddu); f_104a56c0();
  /* 104af6dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af6e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af6e3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af6e5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104af6e8 jmp 0x104af66c */
  goto L_104af66c;
L_104af6ea:;
  /* 104af6ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af6ed mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 104af6f0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af6f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af6f6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_104af6f9:;
  /* 104af6f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104af6fc pop esi */
  ESI = (pop32());
  /* 104af6fd mov esp, ebp */
  ESP = (EBP);
  /* 104af6ff pop ebp */
  EBP = (pop32());
  /* 104af700 ret  */
  ESPCHK(0x104af5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f710 @ 0x104af710 (291 bytes, 97 insns) */
void f_104af710(void) {
  FTRACE(0x104af710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104af710 push ebp */
  push32((uint32_t)(EBP));
  /* 104af711 mov ebp, esp */
  EBP = (ESP);
  /* 104af713 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104af716 push esi */
  push32((uint32_t)(ESI));
  /* 104af717 mov eax, dword ptr [0x104cdc98] */
  EAX = (r32((uint32_t)(0x104cdc98)));
  /* 104af71c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104af71f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104af726 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104af72d jmp 0x104af738 */
  goto L_104af738;
L_104af72f:;
  /* 104af72f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af732 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af735 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_104af738:;
  /* 104af738 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af73c jae 0x104af772 */
  if (!C.cf) goto L_104af772;
  /* 104af73e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af741 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af744 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 104af748 push ecx */
  push32((uint32_t)(ECX));
  /* 104af749 call 0x104a56c0 */
  push32(0x104af74eu); f_104a56c0();
  /* 104af74e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af751 mov esi, eax */
  ESI = (EAX);
  /* 104af753 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af756 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af759 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 104af75d push ecx */
  push32((uint32_t)(ECX));
  /* 104af75e call 0x104a56c0 */
  push32(0x104af763u); f_104a56c0();
  /* 104af763 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af766 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af769 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 104af76d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104af770 jmp 0x104af72f */
  goto L_104af72f;
L_104af772:;
  /* 104af772 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104af775 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af778 push eax */
  push32((uint32_t)(EAX));
  /* 104af779 call 0x104a2870 */
  push32(0x104af77eu); f_104a2870();
  /* 104af77e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af781 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104af784 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af788 je 0x104af82b */
  if (C.zf) goto L_104af82b;
  /* 104af78e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104af791 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104af794 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104af79b jmp 0x104af7a6 */
  goto L_104af7a6;
L_104af79d:;
  /* 104af79d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af7a0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af7a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_104af7a6:;
  /* 104af7a6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104af7aa jae 0x104af81c */
  if (!C.cf) goto L_104af81c;
  /* 104af7ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af7af mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 104af7b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af7b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af7b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104af7bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af7be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af7c1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 104af7c5 push ecx */
  push32((uint32_t)(ECX));
  /* 104af7c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af7c9 push edx */
  push32((uint32_t)(EDX));
  /* 104af7ca call 0x104a5840 */
  push32(0x104af7cfu); f_104a5840();
  /* 104af7cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af7d2 push eax */
  push32((uint32_t)(EAX));
  /* 104af7d3 call 0x104a56c0 */
  push32(0x104af7d8u); f_104a56c0();
  /* 104af7d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af7db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af7de add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af7e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104af7e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af7e6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 104af7e9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af7ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af7ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104af7f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104af7f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104af7f8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 104af7fc push eax */
  push32((uint32_t)(EAX));
  /* 104af7fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af800 push ecx */
  push32((uint32_t)(ECX));
  /* 104af801 call 0x104a5840 */
  push32(0x104af806u); f_104a5840();
  /* 104af806 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af809 push eax */
  push32((uint32_t)(EAX));
  /* 104af80a call 0x104a56c0 */
  push32(0x104af80fu); f_104a56c0();
  /* 104af80f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104af812 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af815 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af817 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104af81a jmp 0x104af79d */
  goto L_104af79d;
L_104af81c:;
  /* 104af81c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af81f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 104af822 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104af825 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104af828 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_104af82b:;
  /* 104af82b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104af82e pop esi */
  ESI = (pop32());
  /* 104af82f mov esp, ebp */
  ESP = (EBP);
  /* 104af831 pop ebp */
  EBP = (pop32());
  /* 104af832 ret  */
  ESPCHK(0x104af710u, _esp0);
  ESP += 4; return;
}

