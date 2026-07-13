#include "recomp.h"

/* __abnormal_termination @ 0x11cc9a7a (35 bytes, 10 insns) */
void f_11cc9a7a(void) {
  FTRACE(0x11cc9a7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9a7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cc9a7c mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 11cc9a83 cmp dword ptr [ecx + 4], 0x11cc99f0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x11cc99f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9a8a jne 0x11cc9a9c */
  if (!C.zf) goto L_11cc9a9c;
  /* 11cc9a8c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cc9a8f mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 11cc9a92 cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9a95 jne 0x11cc9a9c */
  if (!C.zf) goto L_11cc9a9c;
  /* 11cc9a97 mov eax, 1 */
  EAX = (0x1u);
L_11cc9a9c:;
  /* 11cc9a9c ret  */
  ESPCHK(0x11cc9a7au, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x11cc9a9d (9 bytes, 4 insns) */
void f_11cc9a9d(void) {
  FTRACE(0x11cc9a9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9a9d push ebx */
  push32((uint32_t)(EBX));
  /* 11cc9a9e push ecx */
  push32((uint32_t)(ECX));
  /* 11cc9a9f mov ebx, 0x11cfcdbc */
  EBX = (0x11cfcdbcu);
  /* 11cc9aa4 jmp 0x11cc9ab0 */
  jmp_ind(0x11cc9ab0u); return;
}

/* FUN_10009aa6 @ 0x11cc9aa6 (24 bytes, 10 insns) */
void f_11cc9aa6(void) {
  FTRACE(0x11cc9aa6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9aa6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc9aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc9aa8 mov ebx, 0x11cfcdbc */
  EBX = (0x11cfcdbcu);
  /* 11cc9aad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9ab0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11cc9ab3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11cc9ab6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11cc9ab9 pop ecx */
  ECX = (pop32());
  /* 11cc9aba pop ebx */
  EBX = (pop32());
  /* 11cc9abb ret 4 */
  ESPCHK(0x11cc9aa6u, _esp0);
  ESP += 8; return;
}

/* FUN_10009ac0 @ 0x11cc9ac0 (179 bytes, 53 insns) */
void f_11cc9ac0(void) {
  FTRACE(0x11cc9ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc9ac4 call 0x11cce680 */
  push32(0x11cc9ac9u); f_11cce680();
  /* 11cc9ac9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cc9acb mov eax, dword ptr [0x11d00f78] */
  EAX = (r32((uint32_t)(0x11d00f78)));
  /* 11cc9ad0 push eax */
  push32((uint32_t)(EAX));
  /* 11cc9ad1 call 0x11ccc390 */
  push32(0x11cc9ad6u); f_11ccc390();
  /* 11cc9ad6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9ad9 mov ecx, dword ptr [0x11d00f74] */
  ECX = (r32((uint32_t)(0x11d00f74)));
  /* 11cc9adf sub ecx, dword ptr [0x11d00f78] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d00f78))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc9ae5 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9ae8 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9aea jae 0x11cc9b4d */
  if (!C.cf) goto L_11cc9b4d;
  /* 11cc9aec push 0x68 */
  push32((uint32_t)(0x68u));
  /* 11cc9aee push 0x11cf949c */
  push32((uint32_t)(0x11cf949cu));
  /* 11cc9af3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cc9af5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cc9af7 mov edx, dword ptr [0x11d00f78] */
  EDX = (r32((uint32_t)(0x11d00f78)));
  /* 11cc9afd push edx */
  push32((uint32_t)(EDX));
  /* 11cc9afe call 0x11ccc390 */
  push32(0x11cc9b03u); f_11ccc390();
  /* 11cc9b03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9b06 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9b09 push eax */
  push32((uint32_t)(EAX));
  /* 11cc9b0a mov eax, dword ptr [0x11d00f78] */
  EAX = (r32((uint32_t)(0x11d00f78)));
  /* 11cc9b0f push eax */
  push32((uint32_t)(EAX));
  /* 11cc9b10 call 0x11ccb950 */
  push32(0x11cc9b15u); f_11ccb950();
  /* 11cc9b15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9b18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cc9b1b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9b1f jne 0x11cc9b2a */
  if (!C.zf) goto L_11cc9b2a;
  /* 11cc9b21 call 0x11cce690 */
  push32(0x11cc9b26u); f_11cce690();
  /* 11cc9b26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cc9b28 jmp 0x11cc9b6f */
  goto L_11cc9b6f;
L_11cc9b2a:;
  /* 11cc9b2a mov ecx, dword ptr [0x11d00f74] */
  ECX = (r32((uint32_t)(0x11d00f74)));
  /* 11cc9b30 sub ecx, dword ptr [0x11d00f78] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d00f78))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc9b36 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cc9b39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc9b3c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11cc9b3f mov dword ptr [0x11d00f74], eax */
  w32((uint32_t)(0x11d00f74), (EAX));
  /* 11cc9b44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc9b47 mov dword ptr [0x11d00f78], ecx */
  w32((uint32_t)(0x11d00f78), (ECX));
L_11cc9b4d:;
  /* 11cc9b4d mov edx, dword ptr [0x11d00f74] */
  EDX = (r32((uint32_t)(0x11d00f74)));
  /* 11cc9b53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9b56 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11cc9b58 mov ecx, dword ptr [0x11d00f74] */
  ECX = (r32((uint32_t)(0x11d00f74)));
  /* 11cc9b5e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9b61 mov dword ptr [0x11d00f74], ecx */
  w32((uint32_t)(0x11d00f74), (ECX));
  /* 11cc9b67 call 0x11cce690 */
  push32(0x11cc9b6cu); f_11cce690();
  /* 11cc9b6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11cc9b6f:;
  /* 11cc9b6f mov esp, ebp */
  ESP = (EBP);
  /* 11cc9b71 pop ebp */
  EBP = (pop32());
  /* 11cc9b72 ret  */
  ESPCHK(0x11cc9ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b80 @ 0x11cc9b80 (24 bytes, 12 insns) */
void f_11cc9b80(void) {
  FTRACE(0x11cc9b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9b81 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9b83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9b86 push eax */
  push32((uint32_t)(EAX));
  /* 11cc9b87 call 0x11cc9ac0 */
  push32(0x11cc9b8cu); f_11cc9ac0();
  /* 11cc9b8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9b8f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cc9b91 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc9b93 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cc9b95 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11cc9b96 pop ebp */
  EBP = (pop32());
  /* 11cc9b97 ret  */
  ESPCHK(0x11cc9b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ba0 @ 0x11cc9ba0 (77 bytes, 20 insns) */
void f_11cc9ba0(void) {
  FTRACE(0x11cc9ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9ba3 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11cc9ba8 push 0x11cf949c */
  push32((uint32_t)(0x11cf949cu));
  /* 11cc9bad push 2 */
  push32((uint32_t)(0x2u));
  /* 11cc9baf push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11cc9bb4 call 0x11ccb4c0 */
  push32(0x11cc9bb9u); f_11ccb4c0();
  /* 11cc9bb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9bbc mov dword ptr [0x11d00f78], eax */
  w32((uint32_t)(0x11d00f78), (EAX));
  /* 11cc9bc1 cmp dword ptr [0x11d00f78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d00f78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9bc8 jne 0x11cc9bd4 */
  if (!C.zf) goto L_11cc9bd4;
  /* 11cc9bca push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11cc9bcc call 0x11cc9f30 */
  push32(0x11cc9bd1u); f_11cc9f30();
  /* 11cc9bd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cc9bd4:;
  /* 11cc9bd4 mov eax, dword ptr [0x11d00f78] */
  EAX = (r32((uint32_t)(0x11d00f78)));
  /* 11cc9bd9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11cc9bdf mov ecx, dword ptr [0x11d00f78] */
  ECX = (r32((uint32_t)(0x11d00f78)));
  /* 11cc9be5 mov dword ptr [0x11d00f74], ecx */
  w32((uint32_t)(0x11d00f74), (ECX));
  /* 11cc9beb pop ebp */
  EBP = (pop32());
  /* 11cc9bec ret  */
  ESPCHK(0x11cc9ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bf0 @ 0x11cc9bf0 (250 bytes, 92 insns) */
void f_11cc9bf0(void) {
  FTRACE(0x11cc9bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9bf3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc9bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc9bf7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc9bf8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc9bf9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11cc9bfc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11cc9bff lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11cc9c02 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11cc9c05:;
  /* 11cc9c05 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9c09 jne 0x11cc9c29 */
  if (!C.zf) goto L_11cc9c29;
  /* 11cc9c0b push 0x11cf94c4 */
  push32((uint32_t)(0x11cf94c4u));
  /* 11cc9c10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc9c12 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11cc9c14 push 0x11cf94b8 */
  push32((uint32_t)(0x11cf94b8u));
  /* 11cc9c19 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cc9c1b call 0x11cca080 */
  push32(0x11cc9c20u); f_11cca080();
  /* 11cc9c20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9c23 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9c26 jne 0x11cc9c29 */
  if (!C.zf) goto L_11cc9c29;
  /* 11cc9c28 int3  */
  x86_unimpl("int3 @ 0x11cc9c28");
L_11cc9c29:;
  /* 11cc9c29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cc9c2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cc9c2d jne 0x11cc9c05 */
  if (!C.zf) goto L_11cc9c05;
L_11cc9c2f:;
  /* 11cc9c2f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9c33 jne 0x11cc9c53 */
  if (!C.zf) goto L_11cc9c53;
  /* 11cc9c35 push 0x11cf94a8 */
  push32((uint32_t)(0x11cf94a8u));
  /* 11cc9c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc9c3c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11cc9c3e push 0x11cf94b8 */
  push32((uint32_t)(0x11cf94b8u));
  /* 11cc9c43 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cc9c45 call 0x11cca080 */
  push32(0x11cc9c4au); f_11cca080();
  /* 11cc9c4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9c4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9c50 jne 0x11cc9c53 */
  if (!C.zf) goto L_11cc9c53;
  /* 11cc9c52 int3  */
  x86_unimpl("int3 @ 0x11cc9c52");
L_11cc9c53:;
  /* 11cc9c53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cc9c55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc9c57 jne 0x11cc9c2f */
  if (!C.zf) goto L_11cc9c2f;
  /* 11cc9c59 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cc9c5c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11cc9c63 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cc9c66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9c69 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11cc9c6c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cc9c6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9c72 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11cc9c74 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cc9c77 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 11cc9c7e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cc9c81 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc9c82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc9c85 push edx */
  push32((uint32_t)(EDX));
  /* 11cc9c86 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cc9c89 push eax */
  push32((uint32_t)(EAX));
  /* 11cc9c8a call 0x11cce950 */
  push32(0x11cc9c8fu); f_11cce950();
  /* 11cc9c8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9c92 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11cc9c95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cc9c98 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cc9c9b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc9c9e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cc9ca1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11cc9ca4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cc9ca7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9cab jl 0x11cc9ccf */
  if ((C.sf!=C.of)) goto L_11cc9ccf;
  /* 11cc9cad mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cc9cb0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cc9cb2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11cc9cb5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cc9cb7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cc9cbd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11cc9cc0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cc9cc3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cc9cc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9cc8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cc9ccb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cc9ccd jmp 0x11cc9ce0 */
  goto L_11cc9ce0;
L_11cc9ccf:;
  /* 11cc9ccf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cc9cd2 push edx */
  push32((uint32_t)(EDX));
  /* 11cc9cd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc9cd5 call 0x11cce6d0 */
  push32(0x11cc9cdau); f_11cce6d0();
  /* 11cc9cda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9cdd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11cc9ce0:;
  /* 11cc9ce0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cc9ce3 pop edi */
  EDI = (pop32());
  /* 11cc9ce4 pop esi */
  ESI = (pop32());
  /* 11cc9ce5 pop ebx */
  EBX = (pop32());
  /* 11cc9ce6 mov esp, ebp */
  ESP = (EBP);
  /* 11cc9ce8 pop ebp */
  EBP = (pop32());
  /* 11cc9ce9 ret  */
  ESPCHK(0x11cc9bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009cf0 @ 0x11cc9cf0 (313 bytes, 78 insns) */
void f_11cc9cf0(void) {
  FTRACE(0x11cc9cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9cf3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9cf7 jne 0x11cc9db7 */
  if (!C.zf) goto L_11cc9db7;
  /* 11cc9cfd call dword ptr [0x11d013c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013c8))), 0x11cc9d03u);
  /* 11cc9d03 mov dword ptr [0x11cff4c8], eax */
  w32((uint32_t)(0x11cff4c8), (EAX));
  /* 11cc9d08 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cc9d0a call 0x11cd0440 */
  push32(0x11cc9d0fu); f_11cd0440();
  /* 11cc9d0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9d12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc9d14 jne 0x11cc9d1d */
  if (!C.zf) goto L_11cc9d1d;
  /* 11cc9d16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cc9d18 jmp 0x11cc9e25 */
  goto L_11cc9e25;
L_11cc9d1d:;
  /* 11cc9d1d mov eax, dword ptr [0x11cff4c8] */
  EAX = (r32((uint32_t)(0x11cff4c8)));
  /* 11cc9d22 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11cc9d25 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc9d2a mov dword ptr [0x11cff4d4], eax */
  w32((uint32_t)(0x11cff4d4), (EAX));
  /* 11cc9d2f mov ecx, dword ptr [0x11cff4c8] */
  ECX = (r32((uint32_t)(0x11cff4c8)));
  /* 11cc9d35 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cc9d3b mov dword ptr [0x11cff4d0], ecx */
  w32((uint32_t)(0x11cff4d0), (ECX));
  /* 11cc9d41 mov edx, dword ptr [0x11cff4d0] */
  EDX = (r32((uint32_t)(0x11cff4d0)));
  /* 11cc9d47 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11cc9d4a add edx, dword ptr [0x11cff4d4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11cff4d4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9d50 mov dword ptr [0x11cff4cc], edx */
  w32((uint32_t)(0x11cff4cc), (EDX));
  /* 11cc9d56 mov eax, dword ptr [0x11cff4c8] */
  EAX = (r32((uint32_t)(0x11cff4c8)));
  /* 11cc9d5b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11cc9d5e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc9d63 mov dword ptr [0x11cff4c8], eax */
  w32((uint32_t)(0x11cff4c8), (EAX));
  /* 11cc9d68 call 0x11cce0e0 */
  push32(0x11cc9d6du); f_11cce0e0();
  /* 11cc9d6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc9d6f jne 0x11cc9d7d */
  if (!C.zf) goto L_11cc9d7d;
  /* 11cc9d71 call 0x11cd0490 */
  push32(0x11cc9d76u); f_11cd0490();
  /* 11cc9d76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cc9d78 jmp 0x11cc9e25 */
  goto L_11cc9e25;
L_11cc9d7d:;
  /* 11cc9d7d call dword ptr [0x11d013c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013c4))), 0x11cc9d83u);
  /* 11cc9d83 mov dword ptr [0x11d00f94], eax */
  w32((uint32_t)(0x11d00f94), (EAX));
  /* 11cc9d88 call 0x11cd0220 */
  push32(0x11cc9d8du); f_11cd0220();
  /* 11cc9d8d mov dword ptr [0x11cff438], eax */
  w32((uint32_t)(0x11cff438), (EAX));
  /* 11cc9d92 call 0x11ccf7f0 */
  push32(0x11cc9d97u); f_11ccf7f0();
  /* 11cc9d97 call 0x11ccfd10 */
  push32(0x11cc9d9cu); f_11ccfd10();
  /* 11cc9d9c call 0x11ccfbc0 */
  push32(0x11cc9da1u); f_11ccfbc0();
  /* 11cc9da1 call 0x11cce4d0 */
  push32(0x11cc9da6u); f_11cce4d0();
  /* 11cc9da6 mov ecx, dword ptr [0x11cff434] */
  ECX = (r32((uint32_t)(0x11cff434)));
  /* 11cc9dac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9daf mov dword ptr [0x11cff434], ecx */
  w32((uint32_t)(0x11cff434), (ECX));
  /* 11cc9db5 jmp 0x11cc9e20 */
  goto L_11cc9e20;
L_11cc9db7:;
  /* 11cc9db7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9dbb jne 0x11cc9e10 */
  if (!C.zf) goto L_11cc9e10;
  /* 11cc9dbd cmp dword ptr [0x11cff434], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff434))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9dc4 jle 0x11cc9e0a */
  if ((C.zf||C.sf!=C.of)) goto L_11cc9e0a;
  /* 11cc9dc6 mov edx, dword ptr [0x11cff434] */
  EDX = (r32((uint32_t)(0x11cff434)));
  /* 11cc9dcc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc9dcf mov dword ptr [0x11cff434], edx */
  w32((uint32_t)(0x11cff434), (EDX));
  /* 11cc9dd5 cmp dword ptr [0x11cff500], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff500))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9ddc jne 0x11cc9de3 */
  if (!C.zf) goto L_11cc9de3;
  /* 11cc9dde call 0x11cce550 */
  push32(0x11cc9de3u); f_11cce550();
L_11cc9de3:;
  /* 11cc9de3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cc9de5 call 0x11ccc9d0 */
  push32(0x11cc9deau); f_11ccc9d0();
  /* 11cc9dea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9ded and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11cc9df0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc9df2 je 0x11cc9df9 */
  if (C.zf) goto L_11cc9df9;
  /* 11cc9df4 call 0x11ccd2e0 */
  push32(0x11cc9df9u); f_11ccd2e0();
L_11cc9df9:;
  /* 11cc9df9 call 0x11ccfb20 */
  push32(0x11cc9dfeu); f_11ccfb20();
  /* 11cc9dfe call 0x11cce170 */
  push32(0x11cc9e03u); f_11cce170();
  /* 11cc9e03 call 0x11cd0490 */
  push32(0x11cc9e08u); f_11cd0490();
  /* 11cc9e08 jmp 0x11cc9e0e */
  goto L_11cc9e0e;
L_11cc9e0a:;
  /* 11cc9e0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cc9e0c jmp 0x11cc9e25 */
  goto L_11cc9e25;
L_11cc9e0e:;
  /* 11cc9e0e jmp 0x11cc9e20 */
  goto L_11cc9e20;
L_11cc9e10:;
  /* 11cc9e10 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9e14 jne 0x11cc9e20 */
  if (!C.zf) goto L_11cc9e20;
  /* 11cc9e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc9e18 call 0x11cce260 */
  push32(0x11cc9e1du); f_11cce260();
  /* 11cc9e1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cc9e20:;
  /* 11cc9e20 mov eax, 1 */
  EAX = (0x1u);
L_11cc9e25:;
  /* 11cc9e25 pop ebp */
  EBP = (pop32());
  /* 11cc9e26 ret 0xc */
  ESPCHK(0x11cc9cf0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11cc9e30 (243 bytes, 86 insns) */
void f_11cc9e30(void) {
  FTRACE(0x11cc9e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9e31 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9e33 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc9e34 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cc9e3b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9e3f jne 0x11cc9e51 */
  if (!C.zf) goto L_11cc9e51;
  /* 11cc9e41 cmp dword ptr [0x11cff434], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff434))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9e48 jne 0x11cc9e51 */
  if (!C.zf) goto L_11cc9e51;
  /* 11cc9e4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cc9e4c jmp 0x11cc9f1d */
  goto L_11cc9f1d;
L_11cc9e51:;
  /* 11cc9e51 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9e55 je 0x11cc9e5d */
  if (C.zf) goto L_11cc9e5d;
  /* 11cc9e57 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9e5b jne 0x11cc9e9f */
  if (!C.zf) goto L_11cc9e9f;
L_11cc9e5d:;
  /* 11cc9e5d cmp dword ptr [0x11d00fa4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d00fa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9e64 je 0x11cc9e7b */
  if (C.zf) goto L_11cc9e7b;
  /* 11cc9e66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc9e69 push eax */
  push32((uint32_t)(EAX));
  /* 11cc9e6a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc9e6d push ecx */
  push32((uint32_t)(ECX));
  /* 11cc9e6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9e71 push edx */
  push32((uint32_t)(EDX));
  /* 11cc9e72 call dword ptr [0x11d00fa4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d00fa4))), 0x11cc9e78u);
  /* 11cc9e78 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cc9e7b:;
  /* 11cc9e7b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9e7f je 0x11cc9e95 */
  if (C.zf) goto L_11cc9e95;
  /* 11cc9e81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc9e84 push eax */
  push32((uint32_t)(EAX));
  /* 11cc9e85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc9e88 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc9e89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9e8c push edx */
  push32((uint32_t)(EDX));
  /* 11cc9e8d call 0x11cc9cf0 */
  push32(0x11cc9e92u); f_11cc9cf0();
  /* 11cc9e92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cc9e95:;
  /* 11cc9e95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9e99 jne 0x11cc9e9f */
  if (!C.zf) goto L_11cc9e9f;
  /* 11cc9e9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cc9e9d jmp 0x11cc9f1d */
  goto L_11cc9f1d;
L_11cc9e9f:;
  /* 11cc9e9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc9ea2 push eax */
  push32((uint32_t)(EAX));
  /* 11cc9ea3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc9ea6 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc9ea7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9eaa push edx */
  push32((uint32_t)(EDX));
  /* 11cc9eab call 0x11cc1064 */
  push32(0x11cc9eb0u); f_11cc1064();
  /* 11cc9eb0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cc9eb3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9eb7 jne 0x11cc9ece */
  if (!C.zf) goto L_11cc9ece;
  /* 11cc9eb9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9ebd jne 0x11cc9ece */
  if (!C.zf) goto L_11cc9ece;
  /* 11cc9ebf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc9ec2 push eax */
  push32((uint32_t)(EAX));
  /* 11cc9ec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc9ec5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9ec8 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc9ec9 call 0x11cc9cf0 */
  push32(0x11cc9eceu); f_11cc9cf0();
L_11cc9ece:;
  /* 11cc9ece cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9ed2 je 0x11cc9eda */
  if (C.zf) goto L_11cc9eda;
  /* 11cc9ed4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9ed8 jne 0x11cc9f1a */
  if (!C.zf) goto L_11cc9f1a;
L_11cc9eda:;
  /* 11cc9eda mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc9edd push edx */
  push32((uint32_t)(EDX));
  /* 11cc9ede mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc9ee1 push eax */
  push32((uint32_t)(EAX));
  /* 11cc9ee2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9ee5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc9ee6 call 0x11cc9cf0 */
  push32(0x11cc9eebu); f_11cc9cf0();
  /* 11cc9eeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc9eed jne 0x11cc9ef6 */
  if (!C.zf) goto L_11cc9ef6;
  /* 11cc9eef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11cc9ef6:;
  /* 11cc9ef6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9efa je 0x11cc9f1a */
  if (C.zf) goto L_11cc9f1a;
  /* 11cc9efc cmp dword ptr [0x11d00fa4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d00fa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9f03 je 0x11cc9f1a */
  if (C.zf) goto L_11cc9f1a;
  /* 11cc9f05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc9f08 push edx */
  push32((uint32_t)(EDX));
  /* 11cc9f09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc9f0c push eax */
  push32((uint32_t)(EAX));
  /* 11cc9f0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9f10 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc9f11 call dword ptr [0x11d00fa4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d00fa4))), 0x11cc9f17u);
  /* 11cc9f17 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cc9f1a:;
  /* 11cc9f1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11cc9f1d:;
  /* 11cc9f1d mov esp, ebp */
  ESP = (EBP);
  /* 11cc9f1f pop ebp */
  EBP = (pop32());
  /* 11cc9f20 ret 0xc */
  ESPCHK(0x11cc9e30u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11cc9f30 (58 bytes, 18 insns) */
void f_11cc9f30(void) {
  FTRACE(0x11cc9f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9f31 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9f33 cmp dword ptr [0x11cff440], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cff440))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9f3a je 0x11cc9f4e */
  if (C.zf) goto L_11cc9f4e;
  /* 11cc9f3c cmp dword ptr [0x11cff440], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff440))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9f43 jne 0x11cc9f53 */
  if (!C.zf) goto L_11cc9f53;
  /* 11cc9f45 cmp dword ptr [0x11cff444], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cff444))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9f4c jne 0x11cc9f53 */
  if (!C.zf) goto L_11cc9f53;
L_11cc9f4e:;
  /* 11cc9f4e call 0x11cd0530 */
  push32(0x11cc9f53u); f_11cd0530();
L_11cc9f53:;
  /* 11cc9f53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9f56 push eax */
  push32((uint32_t)(EAX));
  /* 11cc9f57 call 0x11cd0580 */
  push32(0x11cc9f5cu); f_11cd0580();
  /* 11cc9f5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9f5f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11cc9f64 call dword ptr [0x11cfcdcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cfcdcc))), 0x11cc9f6au);
  /* 11cc9f6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9f6d pop ebp */
  EBP = (pop32());
  /* 11cc9f6e ret  */
  ESPCHK(0x11cc9f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f70 @ 0x11cc9f70 (11 bytes, 5 insns) */
void f_11cc9f70(void) {
  FTRACE(0x11cc9f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9f71 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9f73 call dword ptr [0x11d013cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013cc))), 0x11cc9f79u);
  /* 11cc9f79 pop ebp */
  EBP = (pop32());
  /* 11cc9f7a ret  */
  ESPCHK(0x11cc9f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f80 @ 0x11cc9f80 (87 bytes, 30 insns) */
void f_11cc9f80(void) {
  FTRACE(0x11cc9f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9f81 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9f83 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc9f84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9f88 jl 0x11cc9f90 */
  if ((C.sf!=C.of)) goto L_11cc9f90;
  /* 11cc9f8a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9f8e jl 0x11cc9f95 */
  if ((C.sf!=C.of)) goto L_11cc9f95;
L_11cc9f90:;
  /* 11cc9f90 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc9f93 jmp 0x11cc9fd3 */
  goto L_11cc9fd3;
L_11cc9f95:;
  /* 11cc9f95 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9f99 jne 0x11cc9fa7 */
  if (!C.zf) goto L_11cc9fa7;
  /* 11cc9f9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9f9e mov eax, dword ptr [eax*4 + 0x11cfcdd4] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11cfcdd4)));
  /* 11cc9fa5 jmp 0x11cc9fd3 */
  goto L_11cc9fd3;
L_11cc9fa7:;
  /* 11cc9fa7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc9faa and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11cc9fad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cc9faf je 0x11cc9fb6 */
  if (C.zf) goto L_11cc9fb6;
  /* 11cc9fb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc9fb4 jmp 0x11cc9fd3 */
  goto L_11cc9fd3;
L_11cc9fb6:;
  /* 11cc9fb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9fb9 mov eax, dword ptr [edx*4 + 0x11cfcdd4] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11cfcdd4)));
  /* 11cc9fc0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cc9fc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9fc6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc9fc9 mov dword ptr [ecx*4 + 0x11cfcdd4], edx */
  w32((uint32_t)(ECX*4 + 0x11cfcdd4), (EDX));
  /* 11cc9fd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11cc9fd3:;
  /* 11cc9fd3 mov esp, ebp */
  ESP = (EBP);
  /* 11cc9fd5 pop ebp */
  EBP = (pop32());
  /* 11cc9fd6 ret  */
  ESPCHK(0x11cc9f80u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11cc9fe0 (126 bytes, 38 insns) */
void f_11cc9fe0(void) {
  FTRACE(0x11cc9fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc9fe4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9fe8 jl 0x11cc9ff0 */
  if ((C.sf!=C.of)) goto L_11cc9ff0;
  /* 11cc9fea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9fee jl 0x11cc9ff7 */
  if ((C.sf!=C.of)) goto L_11cc9ff7;
L_11cc9ff0:;
  /* 11cc9ff0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11cc9ff5 jmp 0x11cca05a */
  goto L_11cca05a;
L_11cc9ff7:;
  /* 11cc9ff7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9ffb jne 0x11cca009 */
  if (!C.zf) goto L_11cca009;
  /* 11cc9ffd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cca000 mov eax, dword ptr [eax*4 + 0x11cfcde0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11cfcde0)));
  /* 11cca007 jmp 0x11cca05a */
  goto L_11cca05a;
L_11cca009:;
  /* 11cca009 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cca00c mov edx, dword ptr [ecx*4 + 0x11cfcde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11cfcde0)));
  /* 11cca013 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cca016 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca01a jne 0x11cca030 */
  if (!C.zf) goto L_11cca030;
  /* 11cca01c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11cca01e call dword ptr [0x11d013d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013d0))), 0x11cca024u);
  /* 11cca024 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cca027 mov dword ptr [ecx*4 + 0x11cfcde0], eax */
  w32((uint32_t)(ECX*4 + 0x11cfcde0), (EAX));
  /* 11cca02e jmp 0x11cca057 */
  goto L_11cca057;
L_11cca030:;
  /* 11cca030 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca034 jne 0x11cca04a */
  if (!C.zf) goto L_11cca04a;
  /* 11cca036 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11cca038 call dword ptr [0x11d013d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013d0))), 0x11cca03eu);
  /* 11cca03e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cca041 mov dword ptr [edx*4 + 0x11cfcde0], eax */
  w32((uint32_t)(EDX*4 + 0x11cfcde0), (EAX));
  /* 11cca048 jmp 0x11cca057 */
  goto L_11cca057;
L_11cca04a:;
  /* 11cca04a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cca04d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cca050 mov dword ptr [eax*4 + 0x11cfcde0], ecx */
  w32((uint32_t)(EAX*4 + 0x11cfcde0), (ECX));
L_11cca057:;
  /* 11cca057 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11cca05a:;
  /* 11cca05a mov esp, ebp */
  ESP = (EBP);
  /* 11cca05c pop ebp */
  EBP = (pop32());
  /* 11cca05d ret  */
  ESPCHK(0x11cc9fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a060 @ 0x11cca060 (28 bytes, 11 insns) */
void f_11cca060(void) {
  FTRACE(0x11cca060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cca060 push ebp */
  push32((uint32_t)(EBP));
  /* 11cca061 mov ebp, esp */
  EBP = (ESP);
  /* 11cca063 push ecx */
  push32((uint32_t)(ECX));
  /* 11cca064 mov eax, dword ptr [0x11d00f88] */
  EAX = (r32((uint32_t)(0x11d00f88)));
  /* 11cca069 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cca06c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cca06f mov dword ptr [0x11d00f88], ecx */
  w32((uint32_t)(0x11d00f88), (ECX));
  /* 11cca075 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cca078 mov esp, ebp */
  ESP = (EBP);
  /* 11cca07a pop ebp */
  EBP = (pop32());
  /* 11cca07b ret  */
  ESPCHK(0x11cca060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a080 @ 0x11cca080 (912 bytes, 248 insns) */
void f_11cca080(void) {
  FTRACE(0x11cca080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cca080 push ebp */
  push32((uint32_t)(EBP));
  /* 11cca081 mov ebp, esp */
  EBP = (ESP);
  /* 11cca083 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11cca088 call 0x11cd0df0 */
  push32(0x11cca08du); f_11cd0df0();
  /* 11cca08d push edi */
  push32((uint32_t)(EDI));
  /* 11cca08e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11cca095 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11cca09a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cca09c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11cca0a2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cca0a4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11cca0a6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11cca0a7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 11cca0ae mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11cca0b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cca0b5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 11cca0bb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cca0bd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11cca0bf stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11cca0c0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11cca0c7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11cca0cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cca0ce lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11cca0d4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cca0d6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11cca0d8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11cca0d9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 11cca0dc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11cca0e2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca0e6 jl 0x11cca0ee */
  if ((C.sf!=C.of)) goto L_11cca0ee;
  /* 11cca0e8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca0ec jl 0x11cca0f6 */
  if ((C.sf!=C.of)) goto L_11cca0f6;
L_11cca0ee:;
  /* 11cca0ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cca0f1 jmp 0x11cca40b */
  goto L_11cca40b;
L_11cca0f6:;
  /* 11cca0f6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca0fa jne 0x11cca1a0 */
  if (!C.zf) goto L_11cca1a0;
  /* 11cca100 push 0x11cfcdd0 */
  push32((uint32_t)(0x11cfcdd0u));
  /* 11cca105 call dword ptr [0x11d013e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013e8))), 0x11cca10bu);
  /* 11cca10b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cca10d jle 0x11cca1a0 */
  if ((C.zf||C.sf!=C.of)) goto L_11cca1a0;
  /* 11cca113 cmp dword ptr [0x11cff448], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff448))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca11a jne 0x11cca15e */
  if (!C.zf) goto L_11cca15e;
  /* 11cca11c push 0x11cf95a0 */
  push32((uint32_t)(0x11cf95a0u));
  /* 11cca121 call dword ptr [0x11d013e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013e4))), 0x11cca127u);
  /* 11cca127 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 11cca12d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca134 je 0x11cca156 */
  if (C.zf) goto L_11cca156;
  /* 11cca136 push 0x11cf9594 */
  push32((uint32_t)(0x11cf9594u));
  /* 11cca13b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 11cca141 push ecx */
  push32((uint32_t)(ECX));
  /* 11cca142 call dword ptr [0x11d013e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013e0))), 0x11cca148u);
  /* 11cca148 mov dword ptr [0x11cff448], eax */
  w32((uint32_t)(0x11cff448), (EAX));
  /* 11cca14d cmp dword ptr [0x11cff448], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff448))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca154 jne 0x11cca15e */
  if (!C.zf) goto L_11cca15e;
L_11cca156:;
  /* 11cca156 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cca159 jmp 0x11cca40b */
  goto L_11cca40b;
L_11cca15e:;
  /* 11cca15e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cca161 push edx */
  push32((uint32_t)(EDX));
  /* 11cca162 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cca165 push eax */
  push32((uint32_t)(EAX));
  /* 11cca166 push 0x11cf9560 */
  push32((uint32_t)(0x11cf9560u));
  /* 11cca16b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11cca171 push ecx */
  push32((uint32_t)(ECX));
  /* 11cca172 call dword ptr [0x11cff448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cff448))), 0x11cca178u);
  /* 11cca178 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cca17b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11cca181 push edx */
  push32((uint32_t)(EDX));
  /* 11cca182 call dword ptr [0x11d013dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013dc))), 0x11cca188u);
  /* 11cca188 push 0x11cfcdd0 */
  push32((uint32_t)(0x11cfcdd0u));
  /* 11cca18d call dword ptr [0x11d013d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013d8))), 0x11cca193u);
  /* 11cca193 call 0x11cc9f70 */
  push32(0x11cca198u); f_11cc9f70();
  /* 11cca198 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cca19b jmp 0x11cca40b */
  goto L_11cca40b;
L_11cca1a0:;
  /* 11cca1a0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca1a4 je 0x11cca1dd */
  if (C.zf) goto L_11cca1dd;
  /* 11cca1a6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 11cca1ac push eax */
  push32((uint32_t)(EAX));
  /* 11cca1ad mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cca1b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11cca1b1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11cca1b6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 11cca1bc push edx */
  push32((uint32_t)(EDX));
  /* 11cca1bd call 0x11cd0cf0 */
  push32(0x11cca1c2u); f_11cd0cf0();
  /* 11cca1c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cca1c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cca1c7 jge 0x11cca1dd */
  if ((C.sf==C.of)) goto L_11cca1dd;
  /* 11cca1c9 push 0x11cf9534 */
  push32((uint32_t)(0x11cf9534u));
  /* 11cca1ce lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11cca1d4 push eax */
  push32((uint32_t)(EAX));
  /* 11cca1d5 call 0x11cd0c00 */
  push32(0x11cca1dau); f_11cd0c00();
  /* 11cca1da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cca1dd:;
  /* 11cca1dd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca1e1 jne 0x11cca215 */
  if (!C.zf) goto L_11cca215;
  /* 11cca1e3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca1e7 je 0x11cca1f5 */
  if (C.zf) goto L_11cca1f5;
  /* 11cca1e9 mov dword ptr [ebp - 0x3028], 0x11cf9520 */
  w32((uint32_t)(EBP + -0x3028), (0x11cf9520u));
  /* 11cca1f3 jmp 0x11cca1ff */
  goto L_11cca1ff;
L_11cca1f5:;
  /* 11cca1f5 mov dword ptr [ebp - 0x3028], 0x11cf950c */
  w32((uint32_t)(EBP + -0x3028), (0x11cf950cu));
L_11cca1ff:;
  /* 11cca1ff mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11cca205 push ecx */
  push32((uint32_t)(ECX));
  /* 11cca206 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11cca20c push edx */
  push32((uint32_t)(EDX));
  /* 11cca20d call 0x11cd0c00 */
  push32(0x11cca212u); f_11cd0c00();
  /* 11cca212 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cca215:;
  /* 11cca215 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11cca21b push eax */
  push32((uint32_t)(EAX));
  /* 11cca21c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11cca222 push ecx */
  push32((uint32_t)(ECX));
  /* 11cca223 call 0x11cd0c10 */
  push32(0x11cca228u); f_11cd0c10();
  /* 11cca228 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cca22b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca22f jne 0x11cca26a */
  if (!C.zf) goto L_11cca26a;
  /* 11cca231 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cca234 mov eax, dword ptr [edx*4 + 0x11cfcdd4] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11cfcdd4)));
  /* 11cca23b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11cca23e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cca240 je 0x11cca256 */
  if (C.zf) goto L_11cca256;
  /* 11cca242 push 0x11cf9508 */
  push32((uint32_t)(0x11cf9508u));
  /* 11cca247 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11cca24d push ecx */
  push32((uint32_t)(ECX));
  /* 11cca24e call 0x11cd0c10 */
  push32(0x11cca253u); f_11cd0c10();
  /* 11cca253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cca256:;
  /* 11cca256 push 0x11cf9504 */
  push32((uint32_t)(0x11cf9504u));
  /* 11cca25b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11cca261 push edx */
  push32((uint32_t)(EDX));
  /* 11cca262 call 0x11cd0c10 */
  push32(0x11cca267u); f_11cd0c10();
  /* 11cca267 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cca26a:;
  /* 11cca26a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca26e je 0x11cca2b2 */
  if (C.zf) goto L_11cca2b2;
  /* 11cca270 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11cca276 push eax */
  push32((uint32_t)(EAX));
  /* 11cca277 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cca27a push ecx */
  push32((uint32_t)(ECX));
  /* 11cca27b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cca27e push edx */
  push32((uint32_t)(EDX));
  /* 11cca27f push 0x11cf94f8 */
  push32((uint32_t)(0x11cf94f8u));
  /* 11cca284 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11cca289 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11cca28f push eax */
  push32((uint32_t)(EAX));
  /* 11cca290 call 0x11cd0b00 */
  push32(0x11cca295u); f_11cd0b00();
  /* 11cca295 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cca298 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cca29a jge 0x11cca2b0 */
  if ((C.sf==C.of)) goto L_11cca2b0;
  /* 11cca29c push 0x11cf9534 */
  push32((uint32_t)(0x11cf9534u));
  /* 11cca2a1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11cca2a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cca2a8 call 0x11cd0c00 */
  push32(0x11cca2adu); f_11cd0c00();
  /* 11cca2ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cca2b0:;
  /* 11cca2b0 jmp 0x11cca2c8 */
  goto L_11cca2c8;
L_11cca2b2:;
  /* 11cca2b2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11cca2b8 push edx */
  push32((uint32_t)(EDX));
  /* 11cca2b9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11cca2bf push eax */
  push32((uint32_t)(EAX));
  /* 11cca2c0 call 0x11cd0c00 */
  push32(0x11cca2c5u); f_11cd0c00();
  /* 11cca2c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cca2c8:;
  /* 11cca2c8 cmp dword ptr [0x11d00f88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d00f88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca2cf je 0x11cca30c */
  if (C.zf) goto L_11cca30c;
  /* 11cca2d1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11cca2d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cca2d8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11cca2de push edx */
  push32((uint32_t)(EDX));
  /* 11cca2df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cca2e2 push eax */
  push32((uint32_t)(EAX));
  /* 11cca2e3 call dword ptr [0x11d00f88] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d00f88))), 0x11cca2e9u);
  /* 11cca2e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cca2ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cca2ee je 0x11cca30c */
  if (C.zf) goto L_11cca30c;
  /* 11cca2f0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca2f4 jne 0x11cca301 */
  if (!C.zf) goto L_11cca301;
  /* 11cca2f6 push 0x11cfcdd0 */
  push32((uint32_t)(0x11cfcdd0u));
  /* 11cca2fb call dword ptr [0x11d013d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013d8))), 0x11cca301u);
L_11cca301:;
  /* 11cca301 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11cca307 jmp 0x11cca40b */
  goto L_11cca40b;
L_11cca30c:;
  /* 11cca30c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cca30f mov edx, dword ptr [ecx*4 + 0x11cfcdd4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11cfcdd4)));
  /* 11cca316 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cca319 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cca31b je 0x11cca35b */
  if (C.zf) goto L_11cca35b;
  /* 11cca31d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cca320 cmp dword ptr [eax*4 + 0x11cfcde0], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11cfcde0))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca328 je 0x11cca35b */
  if (C.zf) goto L_11cca35b;
  /* 11cca32a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cca32c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11cca332 push ecx */
  push32((uint32_t)(ECX));
  /* 11cca333 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11cca339 push edx */
  push32((uint32_t)(EDX));
  /* 11cca33a call 0x11cd0a80 */
  push32(0x11cca33fu); f_11cd0a80();
  /* 11cca33f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cca342 push eax */
  push32((uint32_t)(EAX));
  /* 11cca343 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11cca349 push eax */
  push32((uint32_t)(EAX));
  /* 11cca34a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cca34d mov edx, dword ptr [ecx*4 + 0x11cfcde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11cfcde0)));
  /* 11cca354 push edx */
  push32((uint32_t)(EDX));
  /* 11cca355 call dword ptr [0x11d013d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013d4))), 0x11cca35bu);
L_11cca35b:;
  /* 11cca35b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cca35e mov ecx, dword ptr [eax*4 + 0x11cfcdd4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11cfcdd4)));
  /* 11cca365 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11cca368 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cca36a je 0x11cca379 */
  if (C.zf) goto L_11cca379;
  /* 11cca36c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11cca372 push edx */
  push32((uint32_t)(EDX));
  /* 11cca373 call dword ptr [0x11d013dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013dc))), 0x11cca379u);
L_11cca379:;
  /* 11cca379 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cca37c mov ecx, dword ptr [eax*4 + 0x11cfcdd4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11cfcdd4)));
  /* 11cca383 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11cca386 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cca388 je 0x11cca3f8 */
  if (C.zf) goto L_11cca3f8;
  /* 11cca38a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca38e je 0x11cca3ad */
  if (C.zf) goto L_11cca3ad;
  /* 11cca390 push 0xa */
  push32((uint32_t)(0xau));
  /* 11cca392 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11cca398 push edx */
  push32((uint32_t)(EDX));
  /* 11cca399 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cca39c push eax */
  push32((uint32_t)(EAX));
  /* 11cca39d call 0x11cd0790 */
  push32(0x11cca3a2u); f_11cd0790();
  /* 11cca3a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cca3a5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 11cca3ab jmp 0x11cca3b7 */
  goto L_11cca3b7;
L_11cca3ad:;
  /* 11cca3ad mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11cca3b7:;
  /* 11cca3b7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 11cca3bd push ecx */
  push32((uint32_t)(ECX));
  /* 11cca3be mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cca3c1 push edx */
  push32((uint32_t)(EDX));
  /* 11cca3c2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11cca3c8 push eax */
  push32((uint32_t)(EAX));
  /* 11cca3c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cca3cc push ecx */
  push32((uint32_t)(ECX));
  /* 11cca3cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cca3d0 push edx */
  push32((uint32_t)(EDX));
  /* 11cca3d1 call 0x11cca410 */
  push32(0x11cca3d6u); f_11cca410();
  /* 11cca3d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cca3d9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 11cca3df cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca3e3 jne 0x11cca3f0 */
  if (!C.zf) goto L_11cca3f0;
  /* 11cca3e5 push 0x11cfcdd0 */
  push32((uint32_t)(0x11cfcdd0u));
  /* 11cca3ea call dword ptr [0x11d013d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013d8))), 0x11cca3f0u);
L_11cca3f0:;
  /* 11cca3f0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11cca3f6 jmp 0x11cca40b */
  goto L_11cca40b;
L_11cca3f8:;
  /* 11cca3f8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca3fc jne 0x11cca409 */
  if (!C.zf) goto L_11cca409;
  /* 11cca3fe push 0x11cfcdd0 */
  push32((uint32_t)(0x11cfcdd0u));
  /* 11cca403 call dword ptr [0x11d013d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013d8))), 0x11cca409u);
L_11cca409:;
  /* 11cca409 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cca40b:;
  /* 11cca40b pop edi */
  EDI = (pop32());
  /* 11cca40c mov esp, ebp */
  ESP = (EBP);
  /* 11cca40e pop ebp */
  EBP = (pop32());
  /* 11cca40f ret  */
  ESPCHK(0x11cca080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a410 @ 0x11cca410 (780 bytes, 197 insns) */
void f_11cca410(void) {
  FTRACE(0x11cca410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cca410 push ebp */
  push32((uint32_t)(EBP));
  /* 11cca411 mov ebp, esp */
  EBP = (ESP);
  /* 11cca413 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11cca418 call 0x11cd0df0 */
  push32(0x11cca41du); f_11cd0df0();
L_11cca41d:;
  /* 11cca41d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca421 jne 0x11cca448 */
  if (!C.zf) goto L_11cca448;
  /* 11cca423 push 0x11cf96f0 */
  push32((uint32_t)(0x11cf96f0u));
  /* 11cca428 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cca42a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 11cca42f push 0x11cf96e4 */
  push32((uint32_t)(0x11cf96e4u));
  /* 11cca434 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cca436 call 0x11cca080 */
  push32(0x11cca43bu); f_11cca080();
  /* 11cca43b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cca43e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca441 jne 0x11cca448 */
  if (!C.zf) goto L_11cca448;
  /* 11cca443 call 0x11cc9f70 */
  push32(0x11cca448u); f_11cc9f70();
L_11cca448:;
  /* 11cca448 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cca44a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cca44c jne 0x11cca41d */
  if (!C.zf) goto L_11cca41d;
  /* 11cca44e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11cca453 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 11cca459 push ecx */
  push32((uint32_t)(ECX));
  /* 11cca45a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cca45c call dword ptr [0x11d013ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013ec))), 0x11cca462u);
  /* 11cca462 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cca464 jne 0x11cca47a */
  if (!C.zf) goto L_11cca47a;
  /* 11cca466 push 0x11cf96cc */
  push32((uint32_t)(0x11cf96ccu));
  /* 11cca46b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11cca471 push edx */
  push32((uint32_t)(EDX));
  /* 11cca472 call 0x11cd0c00 */
  push32(0x11cca477u); f_11cd0c00();
  /* 11cca477 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cca47a:;
  /* 11cca47a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11cca480 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cca483 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cca486 push ecx */
  push32((uint32_t)(ECX));
  /* 11cca487 call 0x11cd0a80 */
  push32(0x11cca48cu); f_11cd0a80();
  /* 11cca48c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cca48f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca492 jbe 0x11cca4bd */
  if ((C.cf||C.zf)) goto L_11cca4bd;
  /* 11cca494 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cca497 push edx */
  push32((uint32_t)(EDX));
  /* 11cca498 call 0x11cd0a80 */
  push32(0x11cca49du); f_11cd0a80();
  /* 11cca49d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cca4a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cca4a3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11cca4a7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cca4aa push 3 */
  push32((uint32_t)(0x3u));
  /* 11cca4ac push 0x11cf96c8 */
  push32((uint32_t)(0x11cf96c8u));
  /* 11cca4b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cca4b4 push eax */
  push32((uint32_t)(EAX));
  /* 11cca4b5 call 0x11cd1470 */
  push32(0x11cca4bau); f_11cd1470();
  /* 11cca4ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cca4bd:;
  /* 11cca4bd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cca4c0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11cca4c6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca4cd je 0x11cca518 */
  if (C.zf) goto L_11cca518;
  /* 11cca4cf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11cca4d5 push edx */
  push32((uint32_t)(EDX));
  /* 11cca4d6 call 0x11cd0a80 */
  push32(0x11cca4dbu); f_11cd0a80();
  /* 11cca4db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cca4de cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca4e1 jbe 0x11cca518 */
  if ((C.cf||C.zf)) goto L_11cca518;
  /* 11cca4e3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11cca4e9 push eax */
  push32((uint32_t)(EAX));
  /* 11cca4ea call 0x11cd0a80 */
  push32(0x11cca4efu); f_11cd0a80();
  /* 11cca4ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cca4f2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11cca4f8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11cca4fc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11cca502 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cca504 push 0x11cf96c8 */
  push32((uint32_t)(0x11cf96c8u));
  /* 11cca509 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11cca50f push eax */
  push32((uint32_t)(EAX));
  /* 11cca510 call 0x11cd1470 */
  push32(0x11cca515u); f_11cd1470();
  /* 11cca515 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cca518:;
  /* 11cca518 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca51c jne 0x11cca52a */
  if (!C.zf) goto L_11cca52a;
  /* 11cca51e mov dword ptr [ebp - 0x1114], 0x11cf9654 */
  w32((uint32_t)(EBP + -0x1114), (0x11cf9654u));
  /* 11cca528 jmp 0x11cca534 */
  goto L_11cca534;
L_11cca52a:;
  /* 11cca52a mov dword ptr [ebp - 0x1114], 0x11cf9388 */
  w32((uint32_t)(EBP + -0x1114), (0x11cf9388u));
L_11cca534:;
  /* 11cca534 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cca537 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cca53a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cca53c je 0x11cca549 */
  if (C.zf) goto L_11cca549;
  /* 11cca53e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cca541 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11cca547 jmp 0x11cca553 */
  goto L_11cca553;
L_11cca549:;
  /* 11cca549 mov dword ptr [ebp - 0x1118], 0x11cf9388 */
  w32((uint32_t)(EBP + -0x1118), (0x11cf9388u));
L_11cca553:;
  /* 11cca553 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cca556 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cca559 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cca55b je 0x11cca56f */
  if (C.zf) goto L_11cca56f;
  /* 11cca55d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca561 jne 0x11cca56f */
  if (!C.zf) goto L_11cca56f;
  /* 11cca563 mov dword ptr [ebp - 0x111c], 0x11cf9644 */
  w32((uint32_t)(EBP + -0x111c), (0x11cf9644u));
  /* 11cca56d jmp 0x11cca579 */
  goto L_11cca579;
L_11cca56f:;
  /* 11cca56f mov dword ptr [ebp - 0x111c], 0x11cf9388 */
  w32((uint32_t)(EBP + -0x111c), (0x11cf9388u));
L_11cca579:;
  /* 11cca579 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cca57c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cca57f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cca581 je 0x11cca58f */
  if (C.zf) goto L_11cca58f;
  /* 11cca583 mov dword ptr [ebp - 0x1120], 0x11cf9640 */
  w32((uint32_t)(EBP + -0x1120), (0x11cf9640u));
  /* 11cca58d jmp 0x11cca599 */
  goto L_11cca599;
L_11cca58f:;
  /* 11cca58f mov dword ptr [ebp - 0x1120], 0x11cf9388 */
  w32((uint32_t)(EBP + -0x1120), (0x11cf9388u));
L_11cca599:;
  /* 11cca599 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca59d je 0x11cca5aa */
  if (C.zf) goto L_11cca5aa;
  /* 11cca59f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cca5a2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11cca5a8 jmp 0x11cca5b4 */
  goto L_11cca5b4;
L_11cca5aa:;
  /* 11cca5aa mov dword ptr [ebp - 0x1124], 0x11cf9388 */
  w32((uint32_t)(EBP + -0x1124), (0x11cf9388u));
L_11cca5b4:;
  /* 11cca5b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca5b8 je 0x11cca5c6 */
  if (C.zf) goto L_11cca5c6;
  /* 11cca5ba mov dword ptr [ebp - 0x1128], 0x11cf9638 */
  w32((uint32_t)(EBP + -0x1128), (0x11cf9638u));
  /* 11cca5c4 jmp 0x11cca5d0 */
  goto L_11cca5d0;
L_11cca5c6:;
  /* 11cca5c6 mov dword ptr [ebp - 0x1128], 0x11cf9388 */
  w32((uint32_t)(EBP + -0x1128), (0x11cf9388u));
L_11cca5d0:;
  /* 11cca5d0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca5d4 je 0x11cca5e1 */
  if (C.zf) goto L_11cca5e1;
  /* 11cca5d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cca5d9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11cca5df jmp 0x11cca5eb */
  goto L_11cca5eb;
L_11cca5e1:;
  /* 11cca5e1 mov dword ptr [ebp - 0x112c], 0x11cf9388 */
  w32((uint32_t)(EBP + -0x112c), (0x11cf9388u));
L_11cca5eb:;
  /* 11cca5eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca5ef je 0x11cca5fd */
  if (C.zf) goto L_11cca5fd;
  /* 11cca5f1 mov dword ptr [ebp - 0x1130], 0x11cf9630 */
  w32((uint32_t)(EBP + -0x1130), (0x11cf9630u));
  /* 11cca5fb jmp 0x11cca607 */
  goto L_11cca607;
L_11cca5fd:;
  /* 11cca5fd mov dword ptr [ebp - 0x1130], 0x11cf9388 */
  w32((uint32_t)(EBP + -0x1130), (0x11cf9388u));
L_11cca607:;
  /* 11cca607 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca60e je 0x11cca61e */
  if (C.zf) goto L_11cca61e;
  /* 11cca610 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11cca616 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11cca61c jmp 0x11cca628 */
  goto L_11cca628;
L_11cca61e:;
  /* 11cca61e mov dword ptr [ebp - 0x1134], 0x11cf9388 */
  w32((uint32_t)(EBP + -0x1134), (0x11cf9388u));
L_11cca628:;
  /* 11cca628 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca62f je 0x11cca63d */
  if (C.zf) goto L_11cca63d;
  /* 11cca631 mov dword ptr [ebp - 0x1138], 0x11cf9624 */
  w32((uint32_t)(EBP + -0x1138), (0x11cf9624u));
  /* 11cca63b jmp 0x11cca647 */
  goto L_11cca647;
L_11cca63d:;
  /* 11cca63d mov dword ptr [ebp - 0x1138], 0x11cf9388 */
  w32((uint32_t)(EBP + -0x1138), (0x11cf9388u));
L_11cca647:;
  /* 11cca647 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11cca64d push edx */
  push32((uint32_t)(EDX));
  /* 11cca64e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11cca654 push eax */
  push32((uint32_t)(EAX));
  /* 11cca655 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11cca65b push ecx */
  push32((uint32_t)(ECX));
  /* 11cca65c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11cca662 push edx */
  push32((uint32_t)(EDX));
  /* 11cca663 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11cca669 push eax */
  push32((uint32_t)(EAX));
  /* 11cca66a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11cca670 push ecx */
  push32((uint32_t)(ECX));
  /* 11cca671 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11cca677 push edx */
  push32((uint32_t)(EDX));
  /* 11cca678 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11cca67e push eax */
  push32((uint32_t)(EAX));
  /* 11cca67f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11cca685 push ecx */
  push32((uint32_t)(ECX));
  /* 11cca686 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11cca68c push edx */
  push32((uint32_t)(EDX));
  /* 11cca68d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cca690 push eax */
  push32((uint32_t)(EAX));
  /* 11cca691 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cca694 mov edx, dword ptr [ecx*4 + 0x11cfcdec] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11cfcdec)));
  /* 11cca69b push edx */
  push32((uint32_t)(EDX));
  /* 11cca69c push 0x11cf95d0 */
  push32((uint32_t)(0x11cf95d0u));
  /* 11cca6a1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11cca6a6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11cca6ac push eax */
  push32((uint32_t)(EAX));
  /* 11cca6ad call 0x11cd0b00 */
  push32(0x11cca6b2u); f_11cd0b00();
  /* 11cca6b2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cca6b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cca6b7 jge 0x11cca6cd */
  if ((C.sf==C.of)) goto L_11cca6cd;
  /* 11cca6b9 push 0x11cf9534 */
  push32((uint32_t)(0x11cf9534u));
  /* 11cca6be lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11cca6c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11cca6c5 call 0x11cd0c00 */
  push32(0x11cca6cau); f_11cd0c00();
  /* 11cca6ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cca6cd:;
  /* 11cca6cd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11cca6d2 push 0x11cf95ac */
  push32((uint32_t)(0x11cf95acu));
  /* 11cca6d7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11cca6dd push edx */
  push32((uint32_t)(EDX));
  /* 11cca6de call 0x11cd13b0 */
  push32(0x11cca6e3u); f_11cd13b0();
  /* 11cca6e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cca6e6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11cca6ec cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca6f3 jne 0x11cca706 */
  if (!C.zf) goto L_11cca706;
  /* 11cca6f5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11cca6f7 call 0x11cd10f0 */
  push32(0x11cca6fcu); f_11cd10f0();
  /* 11cca6fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cca6ff push 3 */
  push32((uint32_t)(0x3u));
  /* 11cca701 call 0x11cce530 */
  push32(0x11cca706u); f_11cce530();
L_11cca706:;
  /* 11cca706 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca70d jne 0x11cca716 */
  if (!C.zf) goto L_11cca716;
  /* 11cca70f mov eax, 1 */
  EAX = (0x1u);
  /* 11cca714 jmp 0x11cca718 */
  goto L_11cca718;
L_11cca716:;
  /* 11cca716 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cca718:;
  /* 11cca718 mov esp, ebp */
  ESP = (EBP);
  /* 11cca71a pop ebp */
  EBP = (pop32());
  /* 11cca71b ret  */
  ESPCHK(0x11cca410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a91c @ 0x11cca91c (25 bytes, 7 insns) */
void f_11cca91c(void) {
  FTRACE(0x11cca91cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cca91c test eax, 0x80000 */
  { uint32_t _r=(EAX)&(0x80000u); fl_logic(_r,32); }
  /* 11cca921 je 0x11cca929 */
  if (C.zf) goto L_11cca929;
  /* 11cca923 mov eax, 7 */
  EAX = (0x7u);
  /* 11cca928 ret  */
  ESPCHK(0x11cca91cu, _esp0);
  ESP += 4; return;
L_11cca929:;
  /* 11cca929 fadd qword ptr [0x11cf9710] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x11cf9710)));
  /* 11cca92f mov eax, 1 */
  EAX = (0x1u);
  /* 11cca934 ret  */
  ESPCHK(0x11cca91cu, _esp0);
  ESP += 4; return;
}

/* __fload_withFB @ 0x11cca935 (67 bytes, 21 insns) */
void f_11cca935(void) {
  FTRACE(0x11cca935u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cca935 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cca938 and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 11cca93d cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca942 je 0x11cca947 */
  if (C.zf) goto L_11cca947;
  /* 11cca944 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 11cca946 ret  */
  ESPCHK(0x11cca935u, _esp0);
  ESP += 4; return;
L_11cca947:;
  /* 11cca947 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cca94a sub esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cca94d or eax, 0x7fff0000 */
  { uint32_t _r=(EAX)|(0x7fff0000u); EAX = (_r); fl_logic(_r,32); }
  /* 11cca952 mov dword ptr [esp + 6], eax */
  w32((uint32_t)(ESP + 0x6), (EAX));
  /* 11cca956 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cca959 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11cca95b shld eax, ecx, 0xb */
  EAX = (sh_shld((uint32_t)(EAX),(uint32_t)(ECX),(0xbu)&0x1f,32));
  /* 11cca95f shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 11cca962 mov dword ptr [esp + 4], eax */
  w32((uint32_t)(ESP + 0x4), (EAX));
  /* 11cca966 mov dword ptr [esp], ecx */
  w32((uint32_t)(ESP), (ECX));
  /* 11cca969 fld xword ptr [esp] */
  fpu_push(rf80((uint32_t)(ESP)));
  /* 11cca96c add esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cca96f test eax, 0 */
  { uint32_t _r=(EAX)&(0x0u); fl_logic(_r,32); }
  /* 11cca974 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cca977 ret  */
  ESPCHK(0x11cca935u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a978 @ 0x11cca978 (22 bytes, 7 insns) */
void f_11cca978(void) {
  FTRACE(0x11cca978u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cca978 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cca97c and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 11cca981 cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cca986 je 0x11cca989 */
  if (C.zf) goto L_11cca989;
  /* 11cca988 ret  */
  ESPCHK(0x11cca978u, _esp0);
  ESP += 4; return;
L_11cca989:;
  /* 11cca989 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cca98d ret  */
  ESPCHK(0x11cca978u, _esp0);
  ESP += 4; return;
}

/* __math_exit @ 0x11cca99b (42 bytes, 16 insns) */
void f_11cca99b(void) {
  FTRACE(0x11cca99bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cca99b mov ax, word ptr [esp] */
  AX = (r16((uint32_t)(ESP)));
  /* 11cca99f cmp ax, 0x27f */
  { uint32_t _a=(AX),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11cca9a3 je 0x11cca9c3 */
  if (C.zf) goto L_11cca9c3;
  /* 11cca9a5 and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 11cca9a9 je 0x11cca9c0 */
  if (C.zf) goto L_11cca9c0;
  /* 11cca9ab wait  */
  /* wait (no observable integer/reg state) */
  /* 11cca9ac fnstsw ax */
  AX = fpu_status();
  /* 11cca9ae and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 11cca9b2 je 0x11cca9c0 */
  if (C.zf) goto L_11cca9c0;
  /* 11cca9b4 mov eax, 8 */
  EAX = (0x8u);
  /* 11cca9b9 call 0x11ccaa97 */
  push32(0x11cca9beu); f_11ccaa97();
  /* 11cca9be pop edx */
  EDX = (pop32());
  /* 11cca9bf ret  */
  ESPCHK(0x11cca99bu, _esp0);
  ESP += 4; return;
L_11cca9c0:;
  /* 11cca9c0 fldcw word ptr [esp] */
  C.fcw = r16((uint32_t)(ESP));
L_11cca9c3:;
  /* 11cca9c3 pop edx */
  EDX = (pop32());
  /* 11cca9c4 ret  */
  ESPCHK(0x11cca99bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa80 @ 0x11ccaa80 (23 bytes, 9 insns) */
void f_11ccaa80(void) {
  FTRACE(0x11ccaa80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccaa80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccaa81 mov ebp, esp */
  EBP = (ESP);
  /* 11ccaa83 add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccaa86 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ccaa89 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccaa8c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ccaa8f mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ccaa92 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ccaa95 jmp 0x11ccaaa0 */
  jmp_ind(0x11ccaaa0u); return;
}

/* __startOneArgErrorHandling @ 0x11ccaa97 (60 bytes, 23 insns) */
void f_11ccaa97(void) {
  FTRACE(0x11ccaa97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccaa97 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccaa98 mov ebp, esp */
  EBP = (ESP);
  /* 11ccaa9a add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccaa9d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ccaaa0 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11ccaaa3 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11ccaaa6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccaaa9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccaaac mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ccaaaf mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ccaab2 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11ccaab5 lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 11ccaab8 push eax */
  push32((uint32_t)(EAX));
  /* 11ccaab9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccaaba push edx */
  push32((uint32_t)(EDX));
  /* 11ccaabb call 0x11cd1570 */
  push32(0x11ccaac0u); f_11cd1570();
  /* 11ccaac0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccaac3 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11ccaac6 cmp word ptr [ebp + 8], 0x27f */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ccaacc je 0x11ccaad1 */
  if (C.zf) goto L_11ccaad1;
  /* 11ccaace fldcw word ptr [ebp + 8] */
  C.fcw = r16((uint32_t)(EBP + 0x8));
L_11ccaad1:;
  /* 11ccaad1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ccaad2 ret  */
  ESPCHK(0x11ccaa97u, _esp0);
  ESP += 4; return;
}

/* __setdefaultprecision @ 0x11ccaae0 (23 bytes, 8 insns) */
void f_11ccaae0(void) {
  FTRACE(0x11ccaae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccaae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccaae1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccaae3 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 11ccaae8 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 11ccaaed call 0x11cd1780 */
  push32(0x11ccaaf2u); f_11cd1780();
  /* 11ccaaf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccaaf5 pop ebp */
  EBP = (pop32());
  /* 11ccaaf6 ret  */
  ESPCHK(0x11ccaae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab00 @ 0x11ccab00 (94 bytes, 30 insns) */
void f_11ccab00(void) {
  FTRACE(0x11ccab00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccab00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccab01 mov ebp, esp */
  EBP = (ESP);
  /* 11ccab03 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccab06 push ebx */
  push32((uint32_t)(EBX));
  /* 11ccab07 push esi */
  push32((uint32_t)(ESI));
  /* 11ccab08 push edi */
  push32((uint32_t)(EDI));
  /* 11ccab09 mov dword ptr [ebp - 0x18], 0x80000000 */
  w32((uint32_t)(EBP + -0x18), (0x80000000u));
  /* 11ccab10 mov dword ptr [ebp - 0x14], 0x4147ffff */
  w32((uint32_t)(EBP + -0x14), (0x4147ffffu));
  /* 11ccab17 mov dword ptr [ebp - 8], 0xc0000000 */
  w32((uint32_t)(EBP + -0x8), (0xc0000000u));
  /* 11ccab1e mov dword ptr [ebp - 4], 0x4150017e */
  w32((uint32_t)(EBP + -0x4), (0x4150017eu));
  /* 11ccab25 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11ccab28 fdiv qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x18)));
  /* 11ccab2b fmul qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x18)));
  /* 11ccab2e fsubr qword ptr [ebp - 8] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x8))) - FPU_ST(0);
  /* 11ccab31 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11ccab34 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11ccab37 fcomp qword ptr [0x11cf9758] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11cf9758)));
  (void)fpu_pop();
  /* 11ccab3d fnstsw ax */
  AX = fpu_status();
  /* 11ccab3f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11ccab42 jne 0x11ccab4d */
  if (!C.zf) goto L_11ccab4d;
  /* 11ccab44 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11ccab4b jmp 0x11ccab54 */
  goto L_11ccab54;
L_11ccab4d:;
  /* 11ccab4d mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_11ccab54:;
  /* 11ccab54 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccab57 pop edi */
  EDI = (pop32());
  /* 11ccab58 pop esi */
  ESI = (pop32());
  /* 11ccab59 pop ebx */
  EBX = (pop32());
  /* 11ccab5a mov esp, ebp */
  ESP = (EBP);
  /* 11ccab5c pop ebp */
  EBP = (pop32());
  /* 11ccab5d ret  */
  ESPCHK(0x11ccab00u, _esp0);
  ESP += 4; return;
}

/* __ms_p5_mp_test_fdiv @ 0x11ccab60 (66 bytes, 22 insns) */
void f_11ccab60(void) {
  FTRACE(0x11ccab60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccab60 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccab61 mov ebp, esp */
  EBP = (ESP);
  /* 11ccab63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccab66 push 0x11cf977c */
  push32((uint32_t)(0x11cf977cu));
  /* 11ccab6b call dword ptr [0x11d012f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d012f4))), 0x11ccab71u);
  /* 11ccab71 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccab74 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccab78 je 0x11ccab99 */
  if (C.zf) goto L_11ccab99;
  /* 11ccab7a push 0x11cf9760 */
  push32((uint32_t)(0x11cf9760u));
  /* 11ccab7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccab82 push eax */
  push32((uint32_t)(EAX));
  /* 11ccab83 call dword ptr [0x11d013e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013e0))), 0x11ccab89u);
  /* 11ccab89 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ccab8c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccab90 je 0x11ccab99 */
  if (C.zf) goto L_11ccab99;
  /* 11ccab92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccab94 call dword ptr [ebp - 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x8))), 0x11ccab97u);
  /* 11ccab97 jmp 0x11ccab9e */
  goto L_11ccab9e;
L_11ccab99:;
  /* 11ccab99 call 0x11ccab00 */
  push32(0x11ccab9eu); f_11ccab00();
L_11ccab9e:;
  /* 11ccab9e mov esp, ebp */
  ESP = (EBP);
  /* 11ccaba0 pop ebp */
  EBP = (pop32());
  /* 11ccaba1 ret  */
  ESPCHK(0x11ccab60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abb0 @ 0x11ccabb0 (168 bytes, 59 insns) */
void f_11ccabb0(void) {
  FTRACE(0x11ccabb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccabb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccabb1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccabb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccabb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccabb9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ccabbc push ecx */
  push32((uint32_t)(ECX));
  /* 11ccabbd call 0x11cd1c60 */
  push32(0x11ccabc2u); f_11cd1c60();
  /* 11ccabc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccabc5 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccabc8 je 0x11ccac10 */
  if (C.zf) goto L_11ccac10;
L_11ccabca:;
  /* 11ccabca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccabcd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccabd0 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ccabd3 cmp dword ptr [0x11cfd000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccabda jle 0x11ccabf2 */
  if ((C.zf||C.sf!=C.of)) goto L_11ccabf2;
  /* 11ccabdc push 4 */
  push32((uint32_t)(0x4u));
  /* 11ccabde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccabe1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ccabe4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccabe5 call 0x11cd1b90 */
  push32(0x11ccabeau); f_11cd1b90();
  /* 11ccabea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccabed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ccabf0 jmp 0x11ccac0a */
  goto L_11ccac0a;
L_11ccabf2:;
  /* 11ccabf2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccabf5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ccabf8 mov ecx, dword ptr [0x11cfd00c] */
  ECX = (r32((uint32_t)(0x11cfd00c)));
  /* 11ccabfe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccac00 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ccac04 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ccac07 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ccac0a:;
  /* 11ccac0a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccac0e jne 0x11ccabca */
  if (!C.zf) goto L_11ccabca;
L_11ccac10:;
  /* 11ccac10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccac13 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ccac15 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11ccac18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccac1b mov al, byte ptr [0x11cfd004] */
  AL = (r8((uint32_t)(0x11cfd004)));
  /* 11ccac20 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11ccac22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccac25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccac28 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11ccac2b:;
  /* 11ccac2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccac2e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ccac30 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11ccac33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccac36 mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ccac39 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11ccac3b mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 11ccac3e mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11ccac41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccac44 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ccac47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccac4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccac4d mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ccac50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccac52 jne 0x11ccac2b */
  if (!C.zf) goto L_11ccac2b;
  /* 11ccac54 mov esp, ebp */
  ESP = (EBP);
  /* 11ccac56 pop ebp */
  EBP = (pop32());
  /* 11ccac57 ret  */
  ESPCHK(0x11ccabb0u, _esp0);
  ESP += 4; return;
}

/* __cropzeros @ 0x11ccac60 (215 bytes, 78 insns) */
void f_11ccac60(void) {
  FTRACE(0x11ccac60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccac60 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccac61 mov ebp, esp */
  EBP = (ESP);
  /* 11ccac63 push ecx */
  push32((uint32_t)(ECX));
L_11ccac64:;
  /* 11ccac64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccac67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ccac6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccac6c je 0x11ccac8a */
  if (C.zf) goto L_11ccac8a;
  /* 11ccac6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccac71 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ccac74 movsx ecx, byte ptr [0x11cfd004] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11cfd004))));
  /* 11ccac7b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccac7d je 0x11ccac8a */
  if (C.zf) goto L_11ccac8a;
  /* 11ccac7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccac82 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccac85 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ccac88 jmp 0x11ccac64 */
  goto L_11ccac64;
L_11ccac8a:;
  /* 11ccac8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccac8d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ccac90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccac93 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccac96 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ccac99 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccac9b je 0x11ccad33 */
  if (C.zf) goto L_11ccad33;
L_11ccaca1:;
  /* 11ccaca1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccaca4 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ccaca7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccaca9 je 0x11ccaccc */
  if (C.zf) goto L_11ccaccc;
  /* 11ccacab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccacae movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ccacb1 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccacb4 je 0x11ccaccc */
  if (C.zf) goto L_11ccaccc;
  /* 11ccacb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccacb9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ccacbc cmp edx, 0x45 */
  { uint32_t _a=(EDX),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccacbf je 0x11ccaccc */
  if (C.zf) goto L_11ccaccc;
  /* 11ccacc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccacc4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccacc7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ccacca jmp 0x11ccaca1 */
  goto L_11ccaca1;
L_11ccaccc:;
  /* 11ccaccc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccaccf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ccacd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccacd5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccacd8 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11ccacdb:;
  /* 11ccacdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccacde movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ccace1 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccace4 jne 0x11ccacf1 */
  if (!C.zf) goto L_11ccacf1;
  /* 11ccace6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccace9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccacec mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ccacef jmp 0x11ccacdb */
  goto L_11ccacdb;
L_11ccacf1:;
  /* 11ccacf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccacf4 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ccacf7 movsx edx, byte ptr [0x11cfd004] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11cfd004))));
  /* 11ccacfe cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccad00 jne 0x11ccad0b */
  if (!C.zf) goto L_11ccad0b;
  /* 11ccad02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccad05 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccad08 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11ccad0b:;
  /* 11ccad0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccad0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccad11 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11ccad14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccad17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccad1a mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ccad1c mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11ccad1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccad21 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ccad24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccad27 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccad2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ccad2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccad2f je 0x11ccad33 */
  if (C.zf) goto L_11ccad33;
  /* 11ccad31 jmp 0x11ccad0b */
  goto L_11ccad0b;
L_11ccad33:;
  /* 11ccad33 mov esp, ebp */
  ESP = (EBP);
  /* 11ccad35 pop ebp */
  EBP = (pop32());
  /* 11ccad36 ret  */
  ESPCHK(0x11ccac60u, _esp0);
  ESP += 4; return;
}

/* __positive @ 0x11ccad40 (45 bytes, 16 insns) */
void f_11ccad40(void) {
  FTRACE(0x11ccad40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccad40 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccad41 mov ebp, esp */
  EBP = (ESP);
  /* 11ccad43 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccad44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccad47 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11ccad49 fcomp qword ptr [0x11cf9788] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11cf9788)));
  (void)fpu_pop();
  /* 11ccad4f fnstsw ax */
  AX = fpu_status();
  /* 11ccad51 test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11ccad54 jne 0x11ccad5f */
  if (!C.zf) goto L_11ccad5f;
  /* 11ccad56 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ccad5d jmp 0x11ccad66 */
  goto L_11ccad66;
L_11ccad5f:;
  /* 11ccad5f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ccad66:;
  /* 11ccad66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccad69 mov esp, ebp */
  ESP = (EBP);
  /* 11ccad6b pop ebp */
  EBP = (pop32());
  /* 11ccad6c ret  */
  ESPCHK(0x11ccad40u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x11ccad70 (72 bytes, 29 insns) */
void f_11ccad70(void) {
  FTRACE(0x11ccad70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccad70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccad71 mov ebp, esp */
  EBP = (ESP);
  /* 11ccad73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccad76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccad7a je 0x11ccad9c */
  if (C.zf) goto L_11ccad9c;
  /* 11ccad7c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccad7f push eax */
  push32((uint32_t)(EAX));
  /* 11ccad80 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11ccad83 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccad84 call 0x11cd2550 */
  push32(0x11ccad89u); f_11cd2550();
  /* 11ccad89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccad8c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccad8f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccad92 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ccad94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccad97 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ccad9a jmp 0x11ccadb4 */
  goto L_11ccadb4;
L_11ccad9c:;
  /* 11ccad9c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccad9f push edx */
  push32((uint32_t)(EDX));
  /* 11ccada0 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11ccada3 push eax */
  push32((uint32_t)(EAX));
  /* 11ccada4 call 0x11cd25d0 */
  push32(0x11ccada9u); f_11cd25d0();
  /* 11ccada9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccadac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccadaf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccadb2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
L_11ccadb4:;
  /* 11ccadb4 mov esp, ebp */
  ESP = (EBP);
  /* 11ccadb6 pop ebp */
  EBP = (pop32());
  /* 11ccadb7 ret  */
  ESPCHK(0x11ccad70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000adc0 @ 0x11ccadc0 (118 bytes, 49 insns) */
void f_11ccadc0(void) {
  FTRACE(0x11ccadc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccadc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccadc1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccadc3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccadc6 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11ccadc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccadcc lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11ccadcf push ecx */
  push32((uint32_t)(ECX));
  /* 11ccadd0 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11ccadd3 push edx */
  push32((uint32_t)(EDX));
  /* 11ccadd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccadd7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ccadda push ecx */
  push32((uint32_t)(ECX));
  /* 11ccaddb mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11ccaddd push edx */
  push32((uint32_t)(EDX));
  /* 11ccadde call 0x11cd2710 */
  push32(0x11ccade3u); f_11cd2710();
  /* 11ccade3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccade6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccade9 push eax */
  push32((uint32_t)(EAX));
  /* 11ccadea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccaded add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccadf0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccadf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccadf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccadf6 cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccadf9 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11ccadfc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccadff add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccae01 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccae03 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccae07 setg dl */
  DL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11ccae0a add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccae0c push ecx */
  push32((uint32_t)(ECX));
  /* 11ccae0d call 0x11cd2610 */
  push32(0x11ccae12u); f_11cd2610();
  /* 11ccae12 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccae15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccae17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccae1a push eax */
  push32((uint32_t)(EAX));
  /* 11ccae1b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccae1e push ecx */
  push32((uint32_t)(ECX));
  /* 11ccae1f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccae22 push edx */
  push32((uint32_t)(EDX));
  /* 11ccae23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccae26 push eax */
  push32((uint32_t)(EAX));
  /* 11ccae27 call 0x11ccae40 */
  push32(0x11ccae2cu); f_11ccae40();
  /* 11ccae2c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccae2f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccae32 mov esp, ebp */
  ESP = (EBP);
  /* 11ccae34 pop ebp */
  EBP = (pop32());
  /* 11ccae35 ret  */
  ESPCHK(0x11ccadc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae40 @ 0x11ccae40 (358 bytes, 128 insns) */
void f_11ccae40(void) {
  FTRACE(0x11ccae40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccae40 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccae41 mov ebp, esp */
  EBP = (ESP);
  /* 11ccae43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccae46 movsx eax, byte ptr [ebp + 0x18] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 11ccae4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccae4c je 0x11ccae77 */
  if (C.zf) goto L_11ccae77;
  /* 11ccae4e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccae51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccae53 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccae56 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11ccae59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccae5c add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccae5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccae61 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccae63 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccae67 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11ccae6a push ecx */
  push32((uint32_t)(ECX));
  /* 11ccae6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccae6e push edx */
  push32((uint32_t)(EDX));
  /* 11ccae6f call 0x11ccb2b0 */
  push32(0x11ccae74u); f_11ccb2b0();
  /* 11ccae74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccae77:;
  /* 11ccae77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccae7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccae7d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccae80 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccae83 jne 0x11ccae94 */
  if (!C.zf) goto L_11ccae94;
  /* 11ccae85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccae88 mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
  /* 11ccae8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccae8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccae91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ccae94:;
  /* 11ccae94 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccae98 jle 0x11ccaeb8 */
  if ((C.zf||C.sf!=C.of)) goto L_11ccaeb8;
  /* 11ccae9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccae9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccaea0 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ccaea3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ccaea5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccaea8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccaeab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ccaeae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccaeb1 mov al, byte ptr [0x11cfd004] */
  AL = (r8((uint32_t)(0x11cfd004)));
  /* 11ccaeb6 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
L_11ccaeb8:;
  /* 11ccaeb8 push 0x11cf9790 */
  push32((uint32_t)(0x11cf9790u));
  /* 11ccaebd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccaec0 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccaec3 movsx edx, byte ptr [ebp + 0x18] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 11ccaec7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ccaec9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccaecb inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ccaecc add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccaece push ecx */
  push32((uint32_t)(ECX));
  /* 11ccaecf call 0x11cd0c00 */
  push32(0x11ccaed4u); f_11cd0c00();
  /* 11ccaed4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccaed7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccaeda cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccaede je 0x11ccaee6 */
  if (C.zf) goto L_11ccaee6;
  /* 11ccaee0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccaee3 mov byte ptr [eax], 0x45 */
  w8((uint32_t)(EAX), (0x45u));
L_11ccaee6:;
  /* 11ccaee6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccaee9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccaeec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ccaeef mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccaef2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ccaef5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ccaef8 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccaefb je 0x11ccaf9f */
  if (C.zf) goto L_11ccaf9f;
  /* 11ccaf01 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccaf04 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ccaf07 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccaf0a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ccaf0d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccaf11 jge 0x11ccaf21 */
  if ((C.sf==C.of)) goto L_11ccaf21;
  /* 11ccaf13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccaf16 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ccaf18 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ccaf1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccaf1e mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
L_11ccaf21:;
  /* 11ccaf21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccaf24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccaf27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccaf2a cmp dword ptr [ebp - 8], 0x64 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccaf2e jl 0x11ccaf55 */
  if ((C.sf!=C.of)) goto L_11ccaf55;
  /* 11ccaf30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccaf33 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ccaf34 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11ccaf39 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ccaf3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccaf3e mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11ccaf40 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ccaf42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccaf45 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11ccaf47 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccaf4a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ccaf4b mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11ccaf50 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ccaf52 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11ccaf55:;
  /* 11ccaf55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccaf58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccaf5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ccaf5e cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccaf62 jl 0x11ccaf89 */
  if ((C.sf!=C.of)) goto L_11ccaf89;
  /* 11ccaf64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccaf67 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ccaf68 mov ecx, 0xa */
  ECX = (0xau);
  /* 11ccaf6d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ccaf6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccaf72 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11ccaf74 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ccaf76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccaf79 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11ccaf7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccaf7e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ccaf7f mov ecx, 0xa */
  ECX = (0xau);
  /* 11ccaf84 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ccaf86 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11ccaf89:;
  /* 11ccaf89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccaf8c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccaf8f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ccaf92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccaf95 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ccaf97 add cl, byte ptr [ebp - 8] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + -0x8))),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ccaf9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccaf9d mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
L_11ccaf9f:;
  /* 11ccaf9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccafa2 mov esp, ebp */
  ESP = (EBP);
  /* 11ccafa4 pop ebp */
  EBP = (pop32());
  /* 11ccafa5 ret  */
  ESPCHK(0x11ccae40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afb0 @ 0x11ccafb0 (106 bytes, 44 insns) */
void f_11ccafb0(void) {
  FTRACE(0x11ccafb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccafb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccafb1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccafb3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccafb6 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11ccafb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccafbc lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11ccafbf push ecx */
  push32((uint32_t)(ECX));
  /* 11ccafc0 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11ccafc3 push edx */
  push32((uint32_t)(EDX));
  /* 11ccafc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccafc7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ccafca push ecx */
  push32((uint32_t)(ECX));
  /* 11ccafcb mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11ccafcd push edx */
  push32((uint32_t)(EDX));
  /* 11ccafce call 0x11cd2710 */
  push32(0x11ccafd3u); f_11cd2710();
  /* 11ccafd3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccafd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccafd9 push eax */
  push32((uint32_t)(EAX));
  /* 11ccafda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccafdd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccafe0 add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccafe3 push edx */
  push32((uint32_t)(EDX));
  /* 11ccafe4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccafe7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccafe9 cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccafec sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11ccafef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccaff2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccaff4 push edx */
  push32((uint32_t)(EDX));
  /* 11ccaff5 call 0x11cd2610 */
  push32(0x11ccaffau); f_11cd2610();
  /* 11ccaffa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccaffd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccafff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb002 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb003 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb006 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb007 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb00a push edx */
  push32((uint32_t)(EDX));
  /* 11ccb00b call 0x11ccb020 */
  push32(0x11ccb010u); f_11ccb020();
  /* 11ccb010 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb013 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb016 mov esp, ebp */
  ESP = (EBP);
  /* 11ccb018 pop ebp */
  EBP = (pop32());
  /* 11ccb019 ret  */
  ESPCHK(0x11ccafb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b020 @ 0x11ccb020 (317 bytes, 113 insns) */
void f_11ccb020(void) {
  FTRACE(0x11ccb020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb020 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb021 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb023 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccb026 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb029 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ccb02c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccb02f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ccb032 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 11ccb036 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccb038 je 0x11ccb073 */
  if (C.zf) goto L_11ccb073;
  /* 11ccb03a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb03d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccb03f cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb042 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11ccb045 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb048 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb04a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ccb04d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccb050 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb053 jne 0x11ccb073 */
  if (!C.zf) goto L_11ccb073;
  /* 11ccb055 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb058 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb05b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ccb05e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccb061 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11ccb064 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccb067 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb06a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ccb06d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccb070 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11ccb073:;
  /* 11ccb073 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb076 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ccb079 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb07c cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb07f jne 0x11ccb090 */
  if (!C.zf) goto L_11ccb090;
  /* 11ccb081 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb084 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11ccb087 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb08a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb08d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ccb090:;
  /* 11ccb090 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb093 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb097 jg 0x11ccb0b8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ccb0b8;
  /* 11ccb099 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccb09b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb09e push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb09f call 0x11ccb2b0 */
  push32(0x11ccb0a4u); f_11ccb2b0();
  /* 11ccb0a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb0a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb0aa mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11ccb0ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb0b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb0b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccb0b6 jmp 0x11ccb0c4 */
  goto L_11ccb0c4;
L_11ccb0b8:;
  /* 11ccb0b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb0bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb0be add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb0c1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ccb0c4:;
  /* 11ccb0c4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb0c8 jle 0x11ccb156 */
  if ((C.zf||C.sf!=C.of)) goto L_11ccb156;
  /* 11ccb0ce push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccb0d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb0d3 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb0d4 call 0x11ccb2b0 */
  push32(0x11ccb0d9u); f_11ccb2b0();
  /* 11ccb0d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb0dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb0df mov dl, byte ptr [0x11cfd004] */
  DL = (r8((uint32_t)(0x11cfd004)));
  /* 11ccb0e5 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11ccb0e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb0ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb0ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccb0f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb0f3 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb0f7 jge 0x11ccb156 */
  if ((C.sf==C.of)) goto L_11ccb156;
  /* 11ccb0f9 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 11ccb0fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccb0ff je 0x11ccb10e */
  if (C.zf) goto L_11ccb10e;
  /* 11ccb101 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb104 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ccb107 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ccb109 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ccb10c jmp 0x11ccb134 */
  goto L_11ccb134;
L_11ccb10e:;
  /* 11ccb10e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb111 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ccb114 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ccb116 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb119 jge 0x11ccb123 */
  if ((C.sf==C.of)) goto L_11ccb123;
  /* 11ccb11b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb11e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ccb121 jmp 0x11ccb12e */
  goto L_11ccb12e;
L_11ccb123:;
  /* 11ccb123 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb126 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ccb129 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ccb12b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11ccb12e:;
  /* 11ccb12e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ccb131 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11ccb134:;
  /* 11ccb134 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb137 push edx */
  push32((uint32_t)(EDX));
  /* 11ccb138 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb13b push eax */
  push32((uint32_t)(EAX));
  /* 11ccb13c call 0x11ccb2b0 */
  push32(0x11ccb141u); f_11ccb2b0();
  /* 11ccb141 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb144 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb147 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb148 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11ccb14a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb14d push edx */
  push32((uint32_t)(EDX));
  /* 11ccb14e call 0x11cd2900 */
  push32(0x11ccb153u); f_11cd2900();
  /* 11ccb153 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccb156:;
  /* 11ccb156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb159 mov esp, ebp */
  ESP = (EBP);
  /* 11ccb15b pop ebp */
  EBP = (pop32());
  /* 11ccb15c ret  */
  ESPCHK(0x11ccb020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b160 @ 0x11ccb160 (229 bytes, 89 insns) */
void f_11ccb160(void) {
  FTRACE(0x11ccb160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb160 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb161 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb163 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccb166 mov byte ptr [ebp - 0x30], 0 */
  w8((uint32_t)(EBP + -0x30), (0x0u));
  /* 11ccb16a lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11ccb16d mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11ccb170 lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11ccb173 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb174 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11ccb177 push edx */
  push32((uint32_t)(EDX));
  /* 11ccb178 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb17b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ccb17e push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb17f mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11ccb181 push edx */
  push32((uint32_t)(EDX));
  /* 11ccb182 call 0x11cd2710 */
  push32(0x11ccb187u); f_11cd2710();
  /* 11ccb187 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb18a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ccb18d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ccb190 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccb193 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 11ccb196 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ccb199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccb19b cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb19e sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11ccb1a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb1a4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb1a6 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ccb1a9 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ccb1ac push edx */
  push32((uint32_t)(EDX));
  /* 11ccb1ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb1b0 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb1b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb1b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb1b5 call 0x11cd2610 */
  push32(0x11ccb1bau); f_11cd2610();
  /* 11ccb1ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb1bd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ccb1c0 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ccb1c3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccb1c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccb1c8 cmp dword ptr [ebp - 0x34], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb1cb setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11ccb1ce mov byte ptr [ebp - 0x30], cl */
  w8((uint32_t)(EBP + -0x30), (CL));
  /* 11ccb1d1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ccb1d4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ccb1d7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccb1da mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11ccb1dd cmp dword ptr [ebp - 0x34], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb1e1 jl 0x11ccb1eb */
  if ((C.sf!=C.of)) goto L_11ccb1eb;
  /* 11ccb1e3 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ccb1e6 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb1e9 jl 0x11ccb207 */
  if ((C.sf!=C.of)) goto L_11ccb207;
L_11ccb1eb:;
  /* 11ccb1eb push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccb1ed mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ccb1f0 push edx */
  push32((uint32_t)(EDX));
  /* 11ccb1f1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccb1f4 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb1f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb1f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb1f9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb1fc push edx */
  push32((uint32_t)(EDX));
  /* 11ccb1fd call 0x11ccae40 */
  push32(0x11ccb202u); f_11ccae40();
  /* 11ccb202 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb205 jmp 0x11ccb241 */
  goto L_11ccb241;
L_11ccb207:;
  /* 11ccb207 movsx eax, byte ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x30))));
  /* 11ccb20b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccb20d je 0x11ccb22b */
  if (C.zf) goto L_11ccb22b;
L_11ccb20f:;
  /* 11ccb20f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb212 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ccb215 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb218 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb21b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccb21e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccb220 je 0x11ccb224 */
  if (C.zf) goto L_11ccb224;
  /* 11ccb222 jmp 0x11ccb20f */
  goto L_11ccb20f;
L_11ccb224:;
  /* 11ccb224 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb227 mov byte ptr [ecx - 2], 0 */
  w8((uint32_t)(ECX + -0x2), (0x0u));
L_11ccb22b:;
  /* 11ccb22b push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccb22d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ccb230 push edx */
  push32((uint32_t)(EDX));
  /* 11ccb231 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb234 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb235 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb238 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb239 call 0x11ccb020 */
  push32(0x11ccb23eu); f_11ccb020();
  /* 11ccb23e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccb241:;
  /* 11ccb241 mov esp, ebp */
  ESP = (EBP);
  /* 11ccb243 pop ebp */
  EBP = (pop32());
  /* 11ccb244 ret  */
  ESPCHK(0x11ccb160u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x11ccb250 (95 bytes, 40 insns) */
void f_11ccb250(void) {
  FTRACE(0x11ccb250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb250 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb251 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb253 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb257 je 0x11ccb25f */
  if (C.zf) goto L_11ccb25f;
  /* 11ccb259 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb25d jne 0x11ccb279 */
  if (!C.zf) goto L_11ccb279;
L_11ccb25f:;
  /* 11ccb25f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccb262 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb263 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccb266 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb267 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb26a push edx */
  push32((uint32_t)(EDX));
  /* 11ccb26b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb26e push eax */
  push32((uint32_t)(EAX));
  /* 11ccb26f call 0x11ccadc0 */
  push32(0x11ccb274u); f_11ccadc0();
  /* 11ccb274 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb277 jmp 0x11ccb2ad */
  goto L_11ccb2ad;
L_11ccb279:;
  /* 11ccb279 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb27d jne 0x11ccb295 */
  if (!C.zf) goto L_11ccb295;
  /* 11ccb27f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccb282 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb283 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb286 push edx */
  push32((uint32_t)(EDX));
  /* 11ccb287 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb28a push eax */
  push32((uint32_t)(EAX));
  /* 11ccb28b call 0x11ccafb0 */
  push32(0x11ccb290u); f_11ccafb0();
  /* 11ccb290 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb293 jmp 0x11ccb2ad */
  goto L_11ccb2ad;
L_11ccb295:;
  /* 11ccb295 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccb298 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb299 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccb29c push edx */
  push32((uint32_t)(EDX));
  /* 11ccb29d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb2a0 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb2a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb2a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb2a5 call 0x11ccb160 */
  push32(0x11ccb2aau); f_11ccb160();
  /* 11ccb2aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccb2ad:;
  /* 11ccb2ad pop ebp */
  EBP = (pop32());
  /* 11ccb2ae ret  */
  ESPCHK(0x11ccb250u, _esp0);
  ESP += 4; return;
}

/* __shift @ 0x11ccb2b0 (46 bytes, 19 insns) */
void f_11ccb2b0(void) {
  FTRACE(0x11ccb2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb2b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb2b3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb2b7 je 0x11ccb2dc */
  if (C.zf) goto L_11ccb2dc;
  /* 11ccb2b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb2bc push eax */
  push32((uint32_t)(EAX));
  /* 11ccb2bd call 0x11cd0a80 */
  push32(0x11ccb2c2u); f_11cd0a80();
  /* 11ccb2c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb2c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb2c8 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb2c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb2cc push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb2cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb2d0 add edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb2d3 push edx */
  push32((uint32_t)(EDX));
  /* 11ccb2d4 call 0x11cd2960 */
  push32(0x11ccb2d9u); f_11cd2960();
  /* 11ccb2d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccb2dc:;
  /* 11ccb2dc pop ebp */
  EBP = (pop32());
  /* 11ccb2dd ret  */
  ESPCHK(0x11ccb2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2e0 @ 0x11ccb2e0 (55 bytes, 16 insns) */
void f_11ccb2e0(void) {
  FTRACE(0x11ccb2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb2e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb2e3 mov eax, dword ptr [0x11cfce8c] */
  EAX = (r32((uint32_t)(0x11cfce8c)));
  /* 11ccb2e8 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb2e9 call dword ptr [0x11d012f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d012f8))), 0x11ccb2efu);
  /* 11ccb2ef mov ecx, dword ptr [0x11cfce7c] */
  ECX = (r32((uint32_t)(0x11cfce7c)));
  /* 11ccb2f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb2f6 call dword ptr [0x11d012f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d012f8))), 0x11ccb2fcu);
  /* 11ccb2fc mov edx, dword ptr [0x11cfce6c] */
  EDX = (r32((uint32_t)(0x11cfce6c)));
  /* 11ccb302 push edx */
  push32((uint32_t)(EDX));
  /* 11ccb303 call dword ptr [0x11d012f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d012f8))), 0x11ccb309u);
  /* 11ccb309 mov eax, dword ptr [0x11cfce4c] */
  EAX = (r32((uint32_t)(0x11cfce4c)));
  /* 11ccb30e push eax */
  push32((uint32_t)(EAX));
  /* 11ccb30f call dword ptr [0x11d012f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d012f8))), 0x11ccb315u);
  /* 11ccb315 pop ebp */
  EBP = (pop32());
  /* 11ccb316 ret  */
  ESPCHK(0x11ccb2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b320 @ 0x11ccb320 (159 bytes, 47 insns) */
void f_11ccb320(void) {
  FTRACE(0x11ccb320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb320 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb321 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb323 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb324 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ccb32b jmp 0x11ccb336 */
  goto L_11ccb336;
L_11ccb32d:;
  /* 11ccb32d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb330 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb333 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ccb336:;
  /* 11ccb336 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb33a jge 0x11ccb389 */
  if ((C.sf==C.of)) goto L_11ccb389;
  /* 11ccb33c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb33f cmp dword ptr [ecx*4 + 0x11cfce48], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11cfce48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb347 je 0x11ccb387 */
  if (C.zf) goto L_11ccb387;
  /* 11ccb349 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb34d je 0x11ccb387 */
  if (C.zf) goto L_11ccb387;
  /* 11ccb34f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb353 je 0x11ccb387 */
  if (C.zf) goto L_11ccb387;
  /* 11ccb355 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb359 je 0x11ccb387 */
  if (C.zf) goto L_11ccb387;
  /* 11ccb35b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb35f je 0x11ccb387 */
  if (C.zf) goto L_11ccb387;
  /* 11ccb361 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb364 mov eax, dword ptr [edx*4 + 0x11cfce48] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11cfce48)));
  /* 11ccb36b push eax */
  push32((uint32_t)(EAX));
  /* 11ccb36c call dword ptr [0x11d013f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f8))), 0x11ccb372u);
  /* 11ccb372 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccb374 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb377 mov edx, dword ptr [ecx*4 + 0x11cfce48] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11cfce48)));
  /* 11ccb37e push edx */
  push32((uint32_t)(EDX));
  /* 11ccb37f call 0x11ccbf50 */
  push32(0x11ccb384u); f_11ccbf50();
  /* 11ccb384 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccb387:;
  /* 11ccb387 jmp 0x11ccb32d */
  goto L_11ccb32d;
L_11ccb389:;
  /* 11ccb389 mov eax, dword ptr [0x11cfce6c] */
  EAX = (r32((uint32_t)(0x11cfce6c)));
  /* 11ccb38e push eax */
  push32((uint32_t)(EAX));
  /* 11ccb38f call dword ptr [0x11d013f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f8))), 0x11ccb395u);
  /* 11ccb395 mov ecx, dword ptr [0x11cfce7c] */
  ECX = (r32((uint32_t)(0x11cfce7c)));
  /* 11ccb39b push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb39c call dword ptr [0x11d013f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f8))), 0x11ccb3a2u);
  /* 11ccb3a2 mov edx, dword ptr [0x11cfce8c] */
  EDX = (r32((uint32_t)(0x11cfce8c)));
  /* 11ccb3a8 push edx */
  push32((uint32_t)(EDX));
  /* 11ccb3a9 call dword ptr [0x11d013f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f8))), 0x11ccb3afu);
  /* 11ccb3af mov eax, dword ptr [0x11cfce4c] */
  EAX = (r32((uint32_t)(0x11cfce4c)));
  /* 11ccb3b4 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb3b5 call dword ptr [0x11d013f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f8))), 0x11ccb3bbu);
  /* 11ccb3bb mov esp, ebp */
  ESP = (EBP);
  /* 11ccb3bd pop ebp */
  EBP = (pop32());
  /* 11ccb3be ret  */
  ESPCHK(0x11ccb320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3c0 @ 0x11ccb3c0 (151 bytes, 46 insns) */
void f_11ccb3c0(void) {
  FTRACE(0x11ccb3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb3c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb3c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb3c7 cmp dword ptr [eax*4 + 0x11cfce48], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11cfce48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb3cf jne 0x11ccb442 */
  if (!C.zf) goto L_11ccb442;
  /* 11ccb3d1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11ccb3d6 push 0x11cf9798 */
  push32((uint32_t)(0x11cf9798u));
  /* 11ccb3db push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccb3dd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11ccb3df call 0x11ccb4c0 */
  push32(0x11ccb3e4u); f_11ccb4c0();
  /* 11ccb3e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb3e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccb3ea cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb3ee jne 0x11ccb3fa */
  if (!C.zf) goto L_11ccb3fa;
  /* 11ccb3f0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ccb3f2 call 0x11cc9f30 */
  push32(0x11ccb3f7u); f_11cc9f30();
  /* 11ccb3f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccb3fa:;
  /* 11ccb3fa push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ccb3fc call 0x11ccb3c0 */
  push32(0x11ccb401u); f_11ccb3c0();
  /* 11ccb401 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb404 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb407 cmp dword ptr [ecx*4 + 0x11cfce48], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11cfce48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb40f jne 0x11ccb42a */
  if (!C.zf) goto L_11ccb42a;
  /* 11ccb411 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb414 push edx */
  push32((uint32_t)(EDX));
  /* 11ccb415 call dword ptr [0x11d012f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d012f8))), 0x11ccb41bu);
  /* 11ccb41b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb41e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb421 mov dword ptr [eax*4 + 0x11cfce48], ecx */
  w32((uint32_t)(EAX*4 + 0x11cfce48), (ECX));
  /* 11ccb428 jmp 0x11ccb438 */
  goto L_11ccb438;
L_11ccb42a:;
  /* 11ccb42a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccb42c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb42f push edx */
  push32((uint32_t)(EDX));
  /* 11ccb430 call 0x11ccbf50 */
  push32(0x11ccb435u); f_11ccbf50();
  /* 11ccb435 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccb438:;
  /* 11ccb438 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ccb43a call 0x11ccb460 */
  push32(0x11ccb43fu); f_11ccb460();
  /* 11ccb43f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccb442:;
  /* 11ccb442 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb445 mov ecx, dword ptr [eax*4 + 0x11cfce48] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11cfce48)));
  /* 11ccb44c push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb44d call dword ptr [0x11d013fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013fc))), 0x11ccb453u);
  /* 11ccb453 mov esp, ebp */
  ESP = (EBP);
  /* 11ccb455 pop ebp */
  EBP = (pop32());
  /* 11ccb456 ret  */
  ESPCHK(0x11ccb3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b460 @ 0x11ccb460 (22 bytes, 8 insns) */
void f_11ccb460(void) {
  FTRACE(0x11ccb460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb460 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb461 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb463 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb466 mov ecx, dword ptr [eax*4 + 0x11cfce48] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11cfce48)));
  /* 11ccb46d push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb46e call dword ptr [0x11d01400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01400))), 0x11ccb474u);
  /* 11ccb474 pop ebp */
  EBP = (pop32());
  /* 11ccb475 ret  */
  ESPCHK(0x11ccb460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b480 @ 0x11ccb480 (26 bytes, 10 insns) */
void f_11ccb480(void) {
  FTRACE(0x11ccb480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb480 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb481 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb486 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb487 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb489 call dword ptr [0x11d01408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01408))), 0x11ccb48fu);
  /* 11ccb48f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11ccb494 call dword ptr [0x11d01404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01404))), 0x11ccb49au);
  /* 11ccb49a pop ebp */
  EBP = (pop32());
  /* 11ccb49b ret  */
  ESPCHK(0x11ccb480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4a0 @ 0x11ccb4a0 (29 bytes, 13 insns) */
void f_11ccb4a0(void) {
  FTRACE(0x11ccb4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb4a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb4a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb4a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb4a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccb4a9 mov eax, dword ptr [0x11cff638] */
  EAX = (r32((uint32_t)(0x11cff638)));
  /* 11ccb4ae push eax */
  push32((uint32_t)(EAX));
  /* 11ccb4af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb4b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb4b3 call 0x11ccb510 */
  push32(0x11ccb4b8u); f_11ccb510();
  /* 11ccb4b8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb4bb pop ebp */
  EBP = (pop32());
  /* 11ccb4bc ret  */
  ESPCHK(0x11ccb4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4c0 @ 0x11ccb4c0 (35 bytes, 16 insns) */
void f_11ccb4c0(void) {
  FTRACE(0x11ccb4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb4c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb4c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccb4c6 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb4c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb4ca push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb4cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb4ce push edx */
  push32((uint32_t)(EDX));
  /* 11ccb4cf mov eax, dword ptr [0x11cff638] */
  EAX = (r32((uint32_t)(0x11cff638)));
  /* 11ccb4d4 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb4d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb4d8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb4d9 call 0x11ccb510 */
  push32(0x11ccb4deu); f_11ccb510();
  /* 11ccb4de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb4e1 pop ebp */
  EBP = (pop32());
  /* 11ccb4e2 ret  */
  ESPCHK(0x11ccb4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4f0 @ 0x11ccb4f0 (27 bytes, 13 insns) */
void f_11ccb4f0(void) {
  FTRACE(0x11ccb4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb4f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb4f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb4f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb4f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccb4f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb4fc push eax */
  push32((uint32_t)(EAX));
  /* 11ccb4fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb500 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb501 call 0x11ccb510 */
  push32(0x11ccb506u); f_11ccb510();
  /* 11ccb506 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb509 pop ebp */
  EBP = (pop32());
  /* 11ccb50a ret  */
  ESPCHK(0x11ccb4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b510 @ 0x11ccb510 (94 bytes, 38 insns) */
void f_11ccb510(void) {
  FTRACE(0x11ccb510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb510 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb511 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb513 push ecx */
  push32((uint32_t)(ECX));
L_11ccb514:;
  /* 11ccb514 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccb516 call 0x11ccb3c0 */
  push32(0x11ccb51bu); f_11ccb3c0();
  /* 11ccb51b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb51e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccb521 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb522 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccb525 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb526 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb529 push edx */
  push32((uint32_t)(EDX));
  /* 11ccb52a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb52d push eax */
  push32((uint32_t)(EAX));
  /* 11ccb52e call 0x11ccb590 */
  push32(0x11ccb533u); f_11ccb590();
  /* 11ccb533 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb536 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccb539 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccb53b call 0x11ccb460 */
  push32(0x11ccb540u); f_11ccb460();
  /* 11ccb540 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb543 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb547 jne 0x11ccb54f */
  if (!C.zf) goto L_11ccb54f;
  /* 11ccb549 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb54d jne 0x11ccb554 */
  if (!C.zf) goto L_11ccb554;
L_11ccb54f:;
  /* 11ccb54f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb552 jmp 0x11ccb56a */
  goto L_11ccb56a;
L_11ccb554:;
  /* 11ccb554 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb557 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb558 call 0x11cd2cf0 */
  push32(0x11ccb55du); f_11cd2cf0();
  /* 11ccb55d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb560 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccb562 jne 0x11ccb568 */
  if (!C.zf) goto L_11ccb568;
  /* 11ccb564 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccb566 jmp 0x11ccb56a */
  goto L_11ccb56a;
L_11ccb568:;
  /* 11ccb568 jmp 0x11ccb514 */
  goto L_11ccb514;
L_11ccb56a:;
  /* 11ccb56a mov esp, ebp */
  ESP = (EBP);
  /* 11ccb56c pop ebp */
  EBP = (pop32());
  /* 11ccb56d ret  */
  ESPCHK(0x11ccb510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b570 @ 0x11ccb570 (23 bytes, 11 insns) */
void f_11ccb570(void) {
  FTRACE(0x11ccb570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb570 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb571 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb573 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb575 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb577 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccb579 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb57c push eax */
  push32((uint32_t)(EAX));
  /* 11ccb57d call 0x11ccb590 */
  push32(0x11ccb582u); f_11ccb590();
  /* 11ccb582 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb585 pop ebp */
  EBP = (pop32());
  /* 11ccb586 ret  */
  ESPCHK(0x11ccb570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b590 @ 0x11ccb590 (787 bytes, 254 insns) */
void f_11ccb590(void) {
  FTRACE(0x11ccb590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb590 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb591 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb593 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccb596 push ebx */
  push32((uint32_t)(EBX));
  /* 11ccb597 push esi */
  push32((uint32_t)(ESI));
  /* 11ccb598 push edi */
  push32((uint32_t)(EDI));
  /* 11ccb599 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ccb5a0 mov eax, dword ptr [0x11cfcf08] */
  EAX = (r32((uint32_t)(0x11cfcf08)));
  /* 11ccb5a5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccb5a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccb5aa je 0x11ccb5dc */
  if (C.zf) goto L_11ccb5dc;
L_11ccb5ac:;
  /* 11ccb5ac call 0x11ccc660 */
  push32(0x11ccb5b1u); f_11ccc660();
  /* 11ccb5b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccb5b3 jne 0x11ccb5d6 */
  if (!C.zf) goto L_11ccb5d6;
  /* 11ccb5b5 push 0x11cf9888 */
  push32((uint32_t)(0x11cf9888u));
  /* 11ccb5ba push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb5bc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11ccb5c1 push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccb5c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccb5c8 call 0x11cca080 */
  push32(0x11ccb5cdu); f_11cca080();
  /* 11ccb5cd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb5d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb5d3 jne 0x11ccb5d6 */
  if (!C.zf) goto L_11ccb5d6;
  /* 11ccb5d5 int3  */
  x86_unimpl("int3 @ 0x11ccb5d5");
L_11ccb5d6:;
  /* 11ccb5d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccb5d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccb5da jne 0x11ccb5ac */
  if (!C.zf) goto L_11ccb5ac;
L_11ccb5dc:;
  /* 11ccb5dc mov edx, dword ptr [0x11cfcf0c] */
  EDX = (r32((uint32_t)(0x11cfcf0c)));
  /* 11ccb5e2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ccb5e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccb5e8 cmp eax, dword ptr [0x11cfcf10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cfcf10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb5ee jne 0x11ccb5f1 */
  if (!C.zf) goto L_11ccb5f1;
  /* 11ccb5f0 int3  */
  x86_unimpl("int3 @ 0x11ccb5f0");
L_11ccb5f1:;
  /* 11ccb5f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccb5f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb5f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb5f8 push edx */
  push32((uint32_t)(EDX));
  /* 11ccb5f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccb5fc push eax */
  push32((uint32_t)(EAX));
  /* 11ccb5fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb600 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb601 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb604 push edx */
  push32((uint32_t)(EDX));
  /* 11ccb605 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb607 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccb609 call dword ptr [0x11cfd250] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cfd250))), 0x11ccb60fu);
  /* 11ccb60f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb612 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccb614 jne 0x11ccb674 */
  if (!C.zf) goto L_11ccb674;
  /* 11ccb616 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb61a je 0x11ccb647 */
  if (C.zf) goto L_11ccb647;
L_11ccb61c:;
  /* 11ccb61c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccb61f push eax */
  push32((uint32_t)(EAX));
  /* 11ccb620 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb623 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb624 push 0x11cf9844 */
  push32((uint32_t)(0x11cf9844u));
  /* 11ccb629 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb62b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb62d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb62f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb631 call 0x11cca080 */
  push32(0x11ccb636u); f_11cca080();
  /* 11ccb636 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb639 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb63c jne 0x11ccb63f */
  if (!C.zf) goto L_11ccb63f;
  /* 11ccb63e int3  */
  x86_unimpl("int3 @ 0x11ccb63e");
L_11ccb63f:;
  /* 11ccb63f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccb641 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccb643 jne 0x11ccb61c */
  if (!C.zf) goto L_11ccb61c;
  /* 11ccb645 jmp 0x11ccb66d */
  goto L_11ccb66d;
L_11ccb647:;
  /* 11ccb647 push 0x11cf9820 */
  push32((uint32_t)(0x11cf9820u));
  /* 11ccb64c push 0x11cf981c */
  push32((uint32_t)(0x11cf981cu));
  /* 11ccb651 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb653 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb655 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb657 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb659 call 0x11cca080 */
  push32(0x11ccb65eu); f_11cca080();
  /* 11ccb65e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb661 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb664 jne 0x11ccb667 */
  if (!C.zf) goto L_11ccb667;
  /* 11ccb666 int3  */
  x86_unimpl("int3 @ 0x11ccb666");
L_11ccb667:;
  /* 11ccb667 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccb669 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccb66b jne 0x11ccb647 */
  if (!C.zf) goto L_11ccb647;
L_11ccb66d:;
  /* 11ccb66d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccb66f jmp 0x11ccb89c */
  goto L_11ccb89c;
L_11ccb674:;
  /* 11ccb674 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb677 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccb67d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb680 je 0x11ccb696 */
  if (C.zf) goto L_11ccb696;
  /* 11ccb682 mov edx, dword ptr [0x11cfcf08] */
  EDX = (r32((uint32_t)(0x11cfcf08)));
  /* 11ccb688 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ccb68b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccb68d jne 0x11ccb696 */
  if (!C.zf) goto L_11ccb696;
  /* 11ccb68f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11ccb696:;
  /* 11ccb696 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb69a ja 0x11ccb6a7 */
  if ((!C.cf&&!C.zf)) goto L_11ccb6a7;
  /* 11ccb69c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb69f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb6a2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb6a5 jbe 0x11ccb6d3 */
  if ((C.cf||C.zf)) goto L_11ccb6d3;
L_11ccb6a7:;
  /* 11ccb6a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb6aa push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb6ab push 0x11cf97f8 */
  push32((uint32_t)(0x11cf97f8u));
  /* 11ccb6b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb6b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb6b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb6b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccb6b8 call 0x11cca080 */
  push32(0x11ccb6bdu); f_11cca080();
  /* 11ccb6bd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb6c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb6c3 jne 0x11ccb6c6 */
  if (!C.zf) goto L_11ccb6c6;
  /* 11ccb6c5 int3  */
  x86_unimpl("int3 @ 0x11ccb6c5");
L_11ccb6c6:;
  /* 11ccb6c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccb6c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccb6ca jne 0x11ccb6a7 */
  if (!C.zf) goto L_11ccb6a7;
  /* 11ccb6cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccb6ce jmp 0x11ccb89c */
  goto L_11ccb89c;
L_11ccb6d3:;
  /* 11ccb6d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb6d6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ccb6db cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb6de je 0x11ccb720 */
  if (C.zf) goto L_11ccb720;
  /* 11ccb6e0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb6e4 je 0x11ccb720 */
  if (C.zf) goto L_11ccb720;
  /* 11ccb6e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb6e9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccb6ef cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb6f2 je 0x11ccb720 */
  if (C.zf) goto L_11ccb720;
  /* 11ccb6f4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb6f8 je 0x11ccb720 */
  if (C.zf) goto L_11ccb720;
L_11ccb6fa:;
  /* 11ccb6fa push 0x11cf97c4 */
  push32((uint32_t)(0x11cf97c4u));
  /* 11ccb6ff push 0x11cf981c */
  push32((uint32_t)(0x11cf981cu));
  /* 11ccb704 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb706 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb708 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb70a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccb70c call 0x11cca080 */
  push32(0x11ccb711u); f_11cca080();
  /* 11ccb711 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb714 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb717 jne 0x11ccb71a */
  if (!C.zf) goto L_11ccb71a;
  /* 11ccb719 int3  */
  x86_unimpl("int3 @ 0x11ccb719");
L_11ccb71a:;
  /* 11ccb71a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccb71c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccb71e jne 0x11ccb6fa */
  if (!C.zf) goto L_11ccb6fa;
L_11ccb720:;
  /* 11ccb720 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb723 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb726 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ccb729 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ccb72c push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb72d call 0x11cd2da0 */
  push32(0x11ccb732u); f_11cd2da0();
  /* 11ccb732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb735 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccb738 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb73c jne 0x11ccb745 */
  if (!C.zf) goto L_11ccb745;
  /* 11ccb73e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccb740 jmp 0x11ccb89c */
  goto L_11ccb89c;
L_11ccb745:;
  /* 11ccb745 mov edx, dword ptr [0x11cfcf0c] */
  EDX = (r32((uint32_t)(0x11cfcf0c)));
  /* 11ccb74b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb74e mov dword ptr [0x11cfcf0c], edx */
  w32((uint32_t)(0x11cfcf0c), (EDX));
  /* 11ccb754 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb758 je 0x11ccb7a3 */
  if (C.zf) goto L_11ccb7a3;
  /* 11ccb75a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb75d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ccb763 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb766 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11ccb76d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb770 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11ccb777 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb77a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11ccb781 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb784 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb787 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11ccb78a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb78d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11ccb794 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb797 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 11ccb79e jmp 0x11ccb843 */
  goto L_11ccb843;
L_11ccb7a3:;
  /* 11ccb7a3 mov edx, dword ptr [0x11cff4b4] */
  EDX = (r32((uint32_t)(0x11cff4b4)));
  /* 11ccb7a9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb7ac mov dword ptr [0x11cff4b4], edx */
  w32((uint32_t)(0x11cff4b4), (EDX));
  /* 11ccb7b2 mov eax, dword ptr [0x11cff4bc] */
  EAX = (r32((uint32_t)(0x11cff4bc)));
  /* 11ccb7b7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb7ba mov dword ptr [0x11cff4bc], eax */
  w32((uint32_t)(0x11cff4bc), (EAX));
  /* 11ccb7bf mov ecx, dword ptr [0x11cff4bc] */
  ECX = (r32((uint32_t)(0x11cff4bc)));
  /* 11ccb7c5 cmp ecx, dword ptr [0x11cff4c0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11cff4c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb7cb jbe 0x11ccb7d9 */
  if ((C.cf||C.zf)) goto L_11ccb7d9;
  /* 11ccb7cd mov edx, dword ptr [0x11cff4bc] */
  EDX = (r32((uint32_t)(0x11cff4bc)));
  /* 11ccb7d3 mov dword ptr [0x11cff4c0], edx */
  w32((uint32_t)(0x11cff4c0), (EDX));
L_11ccb7d9:;
  /* 11ccb7d9 cmp dword ptr [0x11cff4b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff4b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb7e0 je 0x11ccb7ef */
  if (C.zf) goto L_11ccb7ef;
  /* 11ccb7e2 mov eax, dword ptr [0x11cff4b8] */
  EAX = (r32((uint32_t)(0x11cff4b8)));
  /* 11ccb7e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb7ea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11ccb7ed jmp 0x11ccb7f8 */
  goto L_11ccb7f8;
L_11ccb7ef:;
  /* 11ccb7ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb7f2 mov dword ptr [0x11cff4b0], edx */
  w32((uint32_t)(0x11cff4b0), (EDX));
L_11ccb7f8:;
  /* 11ccb7f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb7fb mov ecx, dword ptr [0x11cff4b8] */
  ECX = (r32((uint32_t)(0x11cff4b8)));
  /* 11ccb801 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ccb803 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb806 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11ccb80d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb810 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb813 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11ccb816 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb819 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccb81c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 11ccb81f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb822 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb825 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11ccb828 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb82b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb82e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11ccb831 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb834 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccb837 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 11ccb83a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb83d mov dword ptr [0x11cff4b8], ecx */
  w32((uint32_t)(0x11cff4b8), (ECX));
L_11ccb843:;
  /* 11ccb843 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ccb845 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccb847 mov dl, byte ptr [0x11cfcf14] */
  DL = (r8((uint32_t)(0x11cfcf14)));
  /* 11ccb84d push edx */
  push32((uint32_t)(EDX));
  /* 11ccb84e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb851 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb854 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb855 call 0x11cd2900 */
  push32(0x11ccb85au); f_11cd2900();
  /* 11ccb85a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb85d push 4 */
  push32((uint32_t)(0x4u));
  /* 11ccb85f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccb861 mov cl, byte ptr [0x11cfcf14] */
  CL = (r8((uint32_t)(0x11cfcf14)));
  /* 11ccb867 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb868 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb86b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb86e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11ccb872 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb873 call 0x11cd2900 */
  push32(0x11ccb878u); f_11cd2900();
  /* 11ccb878 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb87b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb87e push edx */
  push32((uint32_t)(EDX));
  /* 11ccb87f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccb881 mov al, byte ptr [0x11cfcf16] */
  AL = (r8((uint32_t)(0x11cfcf16)));
  /* 11ccb886 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb887 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb88a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb88d push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb88e call 0x11cd2900 */
  push32(0x11ccb893u); f_11cd2900();
  /* 11ccb893 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb896 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb899 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11ccb89c:;
  /* 11ccb89c pop edi */
  EDI = (pop32());
  /* 11ccb89d pop esi */
  ESI = (pop32());
  /* 11ccb89e pop ebx */
  EBX = (pop32());
  /* 11ccb89f mov esp, ebp */
  ESP = (EBP);
  /* 11ccb8a1 pop ebp */
  EBP = (pop32());
  /* 11ccb8a2 ret  */
  ESPCHK(0x11ccb590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8b0 @ 0x11ccb8b0 (27 bytes, 13 insns) */
void f_11ccb8b0(void) {
  FTRACE(0x11ccb8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb8b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb8b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb8b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb8b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccb8b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb8bc push eax */
  push32((uint32_t)(EAX));
  /* 11ccb8bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb8c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb8c1 call 0x11ccb8d0 */
  push32(0x11ccb8c6u); f_11ccb8d0();
  /* 11ccb8c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb8c9 pop ebp */
  EBP = (pop32());
  /* 11ccb8ca ret  */
  ESPCHK(0x11ccb8b0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11ccb8d0 (96 bytes, 37 insns) */
void f_11ccb8d0(void) {
  FTRACE(0x11ccb8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb8d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb8d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccb8d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb8d9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ccb8dd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11ccb8e0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccb8e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb8e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccb8e7 push edx */
  push32((uint32_t)(EDX));
  /* 11ccb8e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb8eb push eax */
  push32((uint32_t)(EAX));
  /* 11ccb8ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb8ef push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb8f0 call 0x11ccb4c0 */
  push32(0x11ccb8f5u); f_11ccb4c0();
  /* 11ccb8f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb8f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ccb8fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb8ff je 0x11ccb929 */
  if (C.zf) goto L_11ccb929;
  /* 11ccb901 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccb904 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ccb907 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccb90a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb90d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ccb910:;
  /* 11ccb910 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccb913 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb916 jae 0x11ccb929 */
  if (!C.cf) goto L_11ccb929;
  /* 11ccb918 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccb91b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11ccb91e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccb921 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb924 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ccb927 jmp 0x11ccb910 */
  goto L_11ccb910;
L_11ccb929:;
  /* 11ccb929 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccb92c mov esp, ebp */
  ESP = (EBP);
  /* 11ccb92e pop ebp */
  EBP = (pop32());
  /* 11ccb92f ret  */
  ESPCHK(0x11ccb8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b930 @ 0x11ccb930 (27 bytes, 13 insns) */
void f_11ccb930(void) {
  FTRACE(0x11ccb930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb930 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb931 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb933 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb935 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccb937 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccb939 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb93c push eax */
  push32((uint32_t)(EAX));
  /* 11ccb93d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb940 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb941 call 0x11ccb950 */
  push32(0x11ccb946u); f_11ccb950();
  /* 11ccb946 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb949 pop ebp */
  EBP = (pop32());
  /* 11ccb94a ret  */
  ESPCHK(0x11ccb930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b950 @ 0x11ccb950 (64 bytes, 27 insns) */
void f_11ccb950(void) {
  FTRACE(0x11ccb950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb950 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb951 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb953 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb954 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccb956 call 0x11ccb3c0 */
  push32(0x11ccb95bu); f_11ccb3c0();
  /* 11ccb95b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb95e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccb960 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccb963 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb964 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccb967 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb968 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb96b push edx */
  push32((uint32_t)(EDX));
  /* 11ccb96c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb96f push eax */
  push32((uint32_t)(EAX));
  /* 11ccb970 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb973 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb974 call 0x11ccb990 */
  push32(0x11ccb979u); f_11ccb990();
  /* 11ccb979 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb97c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccb97f push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccb981 call 0x11ccb460 */
  push32(0x11ccb986u); f_11ccb460();
  /* 11ccb986 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb989 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccb98c mov esp, ebp */
  ESP = (EBP);
  /* 11ccb98e pop ebp */
  EBP = (pop32());
  /* 11ccb98f ret  */
  ESPCHK(0x11ccb950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b990 @ 0x11ccb990 (1297 bytes, 431 insns) */
void f_11ccb990(void) {
  FTRACE(0x11ccb990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccb990 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccb991 mov ebp, esp */
  EBP = (ESP);
  /* 11ccb993 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccb996 push ebx */
  push32((uint32_t)(EBX));
  /* 11ccb997 push esi */
  push32((uint32_t)(ESI));
  /* 11ccb998 push edi */
  push32((uint32_t)(EDI));
  /* 11ccb999 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11ccb9a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb9a4 jne 0x11ccb9c3 */
  if (!C.zf) goto L_11ccb9c3;
  /* 11ccb9a6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccb9a9 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb9aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccb9ad push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb9ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb9b1 push edx */
  push32((uint32_t)(EDX));
  /* 11ccb9b2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccb9b5 push eax */
  push32((uint32_t)(EAX));
  /* 11ccb9b6 call 0x11ccb4c0 */
  push32(0x11ccb9bbu); f_11ccb4c0();
  /* 11ccb9bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb9be jmp 0x11ccbe9a */
  goto L_11ccbe9a;
L_11ccb9c3:;
  /* 11ccb9c3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb9c7 je 0x11ccb9e6 */
  if (C.zf) goto L_11ccb9e6;
  /* 11ccb9c9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccb9cd jne 0x11ccb9e6 */
  if (!C.zf) goto L_11ccb9e6;
  /* 11ccb9cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccb9d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccb9d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccb9d6 push edx */
  push32((uint32_t)(EDX));
  /* 11ccb9d7 call 0x11ccbf50 */
  push32(0x11ccb9dcu); f_11ccbf50();
  /* 11ccb9dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccb9df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccb9e1 jmp 0x11ccbe9a */
  goto L_11ccbe9a;
L_11ccb9e6:;
  /* 11ccb9e6 mov eax, dword ptr [0x11cfcf08] */
  EAX = (r32((uint32_t)(0x11cfcf08)));
  /* 11ccb9eb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccb9ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccb9f0 je 0x11ccba22 */
  if (C.zf) goto L_11ccba22;
L_11ccb9f2:;
  /* 11ccb9f2 call 0x11ccc660 */
  push32(0x11ccb9f7u); f_11ccc660();
  /* 11ccb9f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccb9f9 jne 0x11ccba1c */
  if (!C.zf) goto L_11ccba1c;
  /* 11ccb9fb push 0x11cf9888 */
  push32((uint32_t)(0x11cf9888u));
  /* 11ccba00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccba02 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11ccba07 push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccba0c push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccba0e call 0x11cca080 */
  push32(0x11ccba13u); f_11cca080();
  /* 11ccba13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccba16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccba19 jne 0x11ccba1c */
  if (!C.zf) goto L_11ccba1c;
  /* 11ccba1b int3  */
  x86_unimpl("int3 @ 0x11ccba1b");
L_11ccba1c:;
  /* 11ccba1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccba1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccba20 jne 0x11ccb9f2 */
  if (!C.zf) goto L_11ccb9f2;
L_11ccba22:;
  /* 11ccba22 mov edx, dword ptr [0x11cfcf0c] */
  EDX = (r32((uint32_t)(0x11cfcf0c)));
  /* 11ccba28 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ccba2b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ccba2e cmp eax, dword ptr [0x11cfcf10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cfcf10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccba34 jne 0x11ccba37 */
  if (!C.zf) goto L_11ccba37;
  /* 11ccba36 int3  */
  x86_unimpl("int3 @ 0x11ccba36");
L_11ccba37:;
  /* 11ccba37 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccba3a push ecx */
  push32((uint32_t)(ECX));
  /* 11ccba3b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccba3e push edx */
  push32((uint32_t)(EDX));
  /* 11ccba3f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ccba42 push eax */
  push32((uint32_t)(EAX));
  /* 11ccba43 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccba46 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccba47 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccba4a push edx */
  push32((uint32_t)(EDX));
  /* 11ccba4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccba4e push eax */
  push32((uint32_t)(EAX));
  /* 11ccba4f push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccba51 call dword ptr [0x11cfd250] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cfd250))), 0x11ccba57u);
  /* 11ccba57 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccba5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccba5c jne 0x11ccbabc */
  if (!C.zf) goto L_11ccbabc;
  /* 11ccba5e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccba62 je 0x11ccba8f */
  if (C.zf) goto L_11ccba8f;
L_11ccba64:;
  /* 11ccba64 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccba67 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccba68 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccba6b push edx */
  push32((uint32_t)(EDX));
  /* 11ccba6c push 0x11cf9a04 */
  push32((uint32_t)(0x11cf9a04u));
  /* 11ccba71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccba73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccba75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccba77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccba79 call 0x11cca080 */
  push32(0x11ccba7eu); f_11cca080();
  /* 11ccba7e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccba81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccba84 jne 0x11ccba87 */
  if (!C.zf) goto L_11ccba87;
  /* 11ccba86 int3  */
  x86_unimpl("int3 @ 0x11ccba86");
L_11ccba87:;
  /* 11ccba87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccba89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccba8b jne 0x11ccba64 */
  if (!C.zf) goto L_11ccba64;
  /* 11ccba8d jmp 0x11ccbab5 */
  goto L_11ccbab5;
L_11ccba8f:;
  /* 11ccba8f push 0x11cf99e0 */
  push32((uint32_t)(0x11cf99e0u));
  /* 11ccba94 push 0x11cf981c */
  push32((uint32_t)(0x11cf981cu));
  /* 11ccba99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccba9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccba9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccba9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbaa1 call 0x11cca080 */
  push32(0x11ccbaa6u); f_11cca080();
  /* 11ccbaa6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbaa9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbaac jne 0x11ccbaaf */
  if (!C.zf) goto L_11ccbaaf;
  /* 11ccbaae int3  */
  x86_unimpl("int3 @ 0x11ccbaae");
L_11ccbaaf:;
  /* 11ccbaaf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccbab1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccbab3 jne 0x11ccba8f */
  if (!C.zf) goto L_11ccba8f;
L_11ccbab5:;
  /* 11ccbab5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccbab7 jmp 0x11ccbe9a */
  goto L_11ccbe9a;
L_11ccbabc:;
  /* 11ccbabc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbac0 jbe 0x11ccbaee */
  if ((C.cf||C.zf)) goto L_11ccbaee;
L_11ccbac2:;
  /* 11ccbac2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccbac5 push edx */
  push32((uint32_t)(EDX));
  /* 11ccbac6 push 0x11cf99b0 */
  push32((uint32_t)(0x11cf99b0u));
  /* 11ccbacb push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbacd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbacf push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbad1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccbad3 call 0x11cca080 */
  push32(0x11ccbad8u); f_11cca080();
  /* 11ccbad8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbadb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbade jne 0x11ccbae1 */
  if (!C.zf) goto L_11ccbae1;
  /* 11ccbae0 int3  */
  x86_unimpl("int3 @ 0x11ccbae0");
L_11ccbae1:;
  /* 11ccbae1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccbae3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccbae5 jne 0x11ccbac2 */
  if (!C.zf) goto L_11ccbac2;
  /* 11ccbae7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccbae9 jmp 0x11ccbe9a */
  goto L_11ccbe9a;
L_11ccbaee:;
  /* 11ccbaee cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbaf2 je 0x11ccbb36 */
  if (C.zf) goto L_11ccbb36;
  /* 11ccbaf4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccbaf7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccbafd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbb00 je 0x11ccbb36 */
  if (C.zf) goto L_11ccbb36;
  /* 11ccbb02 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccbb05 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ccbb0b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbb0e je 0x11ccbb36 */
  if (C.zf) goto L_11ccbb36;
L_11ccbb10:;
  /* 11ccbb10 push 0x11cf97c4 */
  push32((uint32_t)(0x11cf97c4u));
  /* 11ccbb15 push 0x11cf981c */
  push32((uint32_t)(0x11cf981cu));
  /* 11ccbb1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbb1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbb1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbb20 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccbb22 call 0x11cca080 */
  push32(0x11ccbb27u); f_11cca080();
  /* 11ccbb27 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbb2a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbb2d jne 0x11ccbb30 */
  if (!C.zf) goto L_11ccbb30;
  /* 11ccbb2f int3  */
  x86_unimpl("int3 @ 0x11ccbb2f");
L_11ccbb30:;
  /* 11ccbb30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccbb32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccbb34 jne 0x11ccbb10 */
  if (!C.zf) goto L_11ccbb10;
L_11ccbb36:;
  /* 11ccbb36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccbb39 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccbb3a call 0x11cccac0 */
  push32(0x11ccbb3fu); f_11cccac0();
  /* 11ccbb3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbb42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccbb44 jne 0x11ccbb67 */
  if (!C.zf) goto L_11ccbb67;
  /* 11ccbb46 push 0x11cf998c */
  push32((uint32_t)(0x11cf998cu));
  /* 11ccbb4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbb4d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11ccbb52 push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccbb57 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccbb59 call 0x11cca080 */
  push32(0x11ccbb5eu); f_11cca080();
  /* 11ccbb5e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbb61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbb64 jne 0x11ccbb67 */
  if (!C.zf) goto L_11ccbb67;
  /* 11ccbb66 int3  */
  x86_unimpl("int3 @ 0x11ccbb66");
L_11ccbb67:;
  /* 11ccbb67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccbb69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccbb6b jne 0x11ccbb36 */
  if (!C.zf) goto L_11ccbb36;
  /* 11ccbb6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccbb70 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccbb73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ccbb76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccbb79 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbb7d jne 0x11ccbb86 */
  if (!C.zf) goto L_11ccbb86;
  /* 11ccbb7f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11ccbb86:;
  /* 11ccbb86 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbb8a je 0x11ccbbca */
  if (C.zf) goto L_11ccbbca;
L_11ccbb8c:;
  /* 11ccbb8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccbb8f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbb96 jne 0x11ccbba1 */
  if (!C.zf) goto L_11ccbba1;
  /* 11ccbb98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccbb9b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbb9f je 0x11ccbbc2 */
  if (C.zf) goto L_11ccbbc2;
L_11ccbba1:;
  /* 11ccbba1 push 0x11cf9944 */
  push32((uint32_t)(0x11cf9944u));
  /* 11ccbba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbba8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11ccbbad push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccbbb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccbbb4 call 0x11cca080 */
  push32(0x11ccbbb9u); f_11cca080();
  /* 11ccbbb9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbbbc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbbbf jne 0x11ccbbc2 */
  if (!C.zf) goto L_11ccbbc2;
  /* 11ccbbc1 int3  */
  x86_unimpl("int3 @ 0x11ccbbc1");
L_11ccbbc2:;
  /* 11ccbbc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccbbc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccbbc6 jne 0x11ccbb8c */
  if (!C.zf) goto L_11ccbb8c;
  /* 11ccbbc8 jmp 0x11ccbc2e */
  goto L_11ccbc2e;
L_11ccbbca:;
  /* 11ccbbca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccbbcd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ccbbd0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ccbbd5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbbd8 jne 0x11ccbbef */
  if (!C.zf) goto L_11ccbbef;
  /* 11ccbbda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccbbdd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccbbe3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbbe6 jne 0x11ccbbef */
  if (!C.zf) goto L_11ccbbef;
  /* 11ccbbe8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11ccbbef:;
  /* 11ccbbef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccbbf2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ccbbf5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ccbbfa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccbbfd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccbc03 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbc05 je 0x11ccbc28 */
  if (C.zf) goto L_11ccbc28;
  /* 11ccbc07 push 0x11cf9908 */
  push32((uint32_t)(0x11cf9908u));
  /* 11ccbc0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbc0e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11ccbc13 push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccbc18 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccbc1a call 0x11cca080 */
  push32(0x11ccbc1fu); f_11cca080();
  /* 11ccbc1f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbc22 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbc25 jne 0x11ccbc28 */
  if (!C.zf) goto L_11ccbc28;
  /* 11ccbc27 int3  */
  x86_unimpl("int3 @ 0x11ccbc27");
L_11ccbc28:;
  /* 11ccbc28 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccbc2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccbc2c jne 0x11ccbbef */
  if (!C.zf) goto L_11ccbbef;
L_11ccbc2e:;
  /* 11ccbc2e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbc32 je 0x11ccbc59 */
  if (C.zf) goto L_11ccbc59;
  /* 11ccbc34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccbc37 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbc3a push eax */
  push32((uint32_t)(EAX));
  /* 11ccbc3b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccbc3e push ecx */
  push32((uint32_t)(ECX));
  /* 11ccbc3f call 0x11cd2ed0 */
  push32(0x11ccbc44u); f_11cd2ed0();
  /* 11ccbc44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbc47 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ccbc4a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbc4e jne 0x11ccbc57 */
  if (!C.zf) goto L_11ccbc57;
  /* 11ccbc50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccbc52 jmp 0x11ccbe9a */
  goto L_11ccbe9a;
L_11ccbc57:;
  /* 11ccbc57 jmp 0x11ccbc7c */
  goto L_11ccbc7c;
L_11ccbc59:;
  /* 11ccbc59 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccbc5c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbc5f push edx */
  push32((uint32_t)(EDX));
  /* 11ccbc60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccbc63 push eax */
  push32((uint32_t)(EAX));
  /* 11ccbc64 call 0x11cd2e20 */
  push32(0x11ccbc69u); f_11cd2e20();
  /* 11ccbc69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbc6c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ccbc6f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbc73 jne 0x11ccbc7c */
  if (!C.zf) goto L_11ccbc7c;
  /* 11ccbc75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccbc77 jmp 0x11ccbe9a */
  goto L_11ccbe9a;
L_11ccbc7c:;
  /* 11ccbc7c mov ecx, dword ptr [0x11cfcf0c] */
  ECX = (r32((uint32_t)(0x11cfcf0c)));
  /* 11ccbc82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbc85 mov dword ptr [0x11cfcf0c], ecx */
  w32((uint32_t)(0x11cfcf0c), (ECX));
  /* 11ccbc8b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbc8f jne 0x11ccbce7 */
  if (!C.zf) goto L_11ccbce7;
  /* 11ccbc91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbc94 mov eax, dword ptr [0x11cff4b4] */
  EAX = (r32((uint32_t)(0x11cff4b4)));
  /* 11ccbc99 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccbc9c mov dword ptr [0x11cff4b4], eax */
  w32((uint32_t)(0x11cff4b4), (EAX));
  /* 11ccbca1 mov ecx, dword ptr [0x11cff4b4] */
  ECX = (r32((uint32_t)(0x11cff4b4)));
  /* 11ccbca7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbcaa mov dword ptr [0x11cff4b4], ecx */
  w32((uint32_t)(0x11cff4b4), (ECX));
  /* 11ccbcb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbcb3 mov eax, dword ptr [0x11cff4bc] */
  EAX = (r32((uint32_t)(0x11cff4bc)));
  /* 11ccbcb8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccbcbb mov dword ptr [0x11cff4bc], eax */
  w32((uint32_t)(0x11cff4bc), (EAX));
  /* 11ccbcc0 mov ecx, dword ptr [0x11cff4bc] */
  ECX = (r32((uint32_t)(0x11cff4bc)));
  /* 11ccbcc6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbcc9 mov dword ptr [0x11cff4bc], ecx */
  w32((uint32_t)(0x11cff4bc), (ECX));
  /* 11ccbccf mov edx, dword ptr [0x11cff4bc] */
  EDX = (r32((uint32_t)(0x11cff4bc)));
  /* 11ccbcd5 cmp edx, dword ptr [0x11cff4c0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11cff4c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbcdb jbe 0x11ccbce7 */
  if ((C.cf||C.zf)) goto L_11ccbce7;
  /* 11ccbcdd mov eax, dword ptr [0x11cff4bc] */
  EAX = (r32((uint32_t)(0x11cff4bc)));
  /* 11ccbce2 mov dword ptr [0x11cff4c0], eax */
  w32((uint32_t)(0x11cff4c0), (EAX));
L_11ccbce7:;
  /* 11ccbce7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbcea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbced mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ccbcf0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbcf3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccbcf6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbcf9 jbe 0x11ccbd1f */
  if ((C.cf||C.zf)) goto L_11ccbd1f;
  /* 11ccbcfb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbcfe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccbd01 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccbd04 push edx */
  push32((uint32_t)(EDX));
  /* 11ccbd05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccbd07 mov al, byte ptr [0x11cfcf16] */
  AL = (r8((uint32_t)(0x11cfcf16)));
  /* 11ccbd0c push eax */
  push32((uint32_t)(EAX));
  /* 11ccbd0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbd10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccbd13 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbd16 push edx */
  push32((uint32_t)(EDX));
  /* 11ccbd17 call 0x11cd2900 */
  push32(0x11ccbd1cu); f_11cd2900();
  /* 11ccbd1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccbd1f:;
  /* 11ccbd1f push 4 */
  push32((uint32_t)(0x4u));
  /* 11ccbd21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccbd23 mov al, byte ptr [0x11cfcf14] */
  AL = (r8((uint32_t)(0x11cfcf14)));
  /* 11ccbd28 push eax */
  push32((uint32_t)(EAX));
  /* 11ccbd29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccbd2c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbd2f push ecx */
  push32((uint32_t)(ECX));
  /* 11ccbd30 call 0x11cd2900 */
  push32(0x11ccbd35u); f_11cd2900();
  /* 11ccbd35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbd38 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbd3c jne 0x11ccbd59 */
  if (!C.zf) goto L_11ccbd59;
  /* 11ccbd3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbd41 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccbd44 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ccbd47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbd4a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccbd4d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11ccbd50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbd53 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ccbd56 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11ccbd59:;
  /* 11ccbd59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbd5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccbd5f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11ccbd62:;
  /* 11ccbd62 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbd66 jne 0x11ccbd97 */
  if (!C.zf) goto L_11ccbd97;
  /* 11ccbd68 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbd6c jne 0x11ccbd76 */
  if (!C.zf) goto L_11ccbd76;
  /* 11ccbd6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbd71 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbd74 je 0x11ccbd97 */
  if (C.zf) goto L_11ccbd97;
L_11ccbd76:;
  /* 11ccbd76 push 0x11cf98d4 */
  push32((uint32_t)(0x11cf98d4u));
  /* 11ccbd7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbd7d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11ccbd82 push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccbd87 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccbd89 call 0x11cca080 */
  push32(0x11ccbd8eu); f_11cca080();
  /* 11ccbd8e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbd91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbd94 jne 0x11ccbd97 */
  if (!C.zf) goto L_11ccbd97;
  /* 11ccbd96 int3  */
  x86_unimpl("int3 @ 0x11ccbd96");
L_11ccbd97:;
  /* 11ccbd97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccbd99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccbd9b jne 0x11ccbd62 */
  if (!C.zf) goto L_11ccbd62;
  /* 11ccbd9d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbda0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbda3 je 0x11ccbdab */
  if (C.zf) goto L_11ccbdab;
  /* 11ccbda5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbda9 je 0x11ccbdb3 */
  if (C.zf) goto L_11ccbdb3;
L_11ccbdab:;
  /* 11ccbdab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccbdae jmp 0x11ccbe9a */
  goto L_11ccbe9a;
L_11ccbdb3:;
  /* 11ccbdb3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbdb6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbdb9 je 0x11ccbdcb */
  if (C.zf) goto L_11ccbdcb;
  /* 11ccbdbb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbdbe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ccbdc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbdc3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ccbdc6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ccbdc9 jmp 0x11ccbe07 */
  goto L_11ccbe07;
L_11ccbdcb:;
  /* 11ccbdcb mov eax, dword ptr [0x11cff4b0] */
  EAX = (r32((uint32_t)(0x11cff4b0)));
  /* 11ccbdd0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbdd3 je 0x11ccbdf6 */
  if (C.zf) goto L_11ccbdf6;
  /* 11ccbdd5 push 0x11cf98b8 */
  push32((uint32_t)(0x11cf98b8u));
  /* 11ccbdda push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbddc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11ccbde1 push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccbde6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccbde8 call 0x11cca080 */
  push32(0x11ccbdedu); f_11cca080();
  /* 11ccbded add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbdf0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbdf3 jne 0x11ccbdf6 */
  if (!C.zf) goto L_11ccbdf6;
  /* 11ccbdf5 int3  */
  x86_unimpl("int3 @ 0x11ccbdf5");
L_11ccbdf6:;
  /* 11ccbdf6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccbdf8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccbdfa jne 0x11ccbdcb */
  if (!C.zf) goto L_11ccbdcb;
  /* 11ccbdfc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbdff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ccbe02 mov dword ptr [0x11cff4b0], eax */
  w32((uint32_t)(0x11cff4b0), (EAX));
L_11ccbe07:;
  /* 11ccbe07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbe0a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbe0e je 0x11ccbe1f */
  if (C.zf) goto L_11ccbe1f;
  /* 11ccbe10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbe13 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ccbe16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbe19 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ccbe1b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ccbe1d jmp 0x11ccbe5a */
  goto L_11ccbe5a;
L_11ccbe1f:;
  /* 11ccbe1f mov eax, dword ptr [0x11cff4b8] */
  EAX = (r32((uint32_t)(0x11cff4b8)));
  /* 11ccbe24 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbe27 je 0x11ccbe4a */
  if (C.zf) goto L_11ccbe4a;
  /* 11ccbe29 push 0x11cf989c */
  push32((uint32_t)(0x11cf989cu));
  /* 11ccbe2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbe30 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11ccbe35 push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccbe3a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccbe3c call 0x11cca080 */
  push32(0x11ccbe41u); f_11cca080();
  /* 11ccbe41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbe44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbe47 jne 0x11ccbe4a */
  if (!C.zf) goto L_11ccbe4a;
  /* 11ccbe49 int3  */
  x86_unimpl("int3 @ 0x11ccbe49");
L_11ccbe4a:;
  /* 11ccbe4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccbe4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccbe4e jne 0x11ccbe1f */
  if (!C.zf) goto L_11ccbe1f;
  /* 11ccbe50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbe53 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ccbe55 mov dword ptr [0x11cff4b8], eax */
  w32((uint32_t)(0x11cff4b8), (EAX));
L_11ccbe5a:;
  /* 11ccbe5a cmp dword ptr [0x11cff4b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff4b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbe61 je 0x11ccbe71 */
  if (C.zf) goto L_11ccbe71;
  /* 11ccbe63 mov ecx, dword ptr [0x11cff4b8] */
  ECX = (r32((uint32_t)(0x11cff4b8)));
  /* 11ccbe69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbe6c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11ccbe6f jmp 0x11ccbe79 */
  goto L_11ccbe79;
L_11ccbe71:;
  /* 11ccbe71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbe74 mov dword ptr [0x11cff4b0], eax */
  w32((uint32_t)(0x11cff4b0), (EAX));
L_11ccbe79:;
  /* 11ccbe79 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbe7c mov edx, dword ptr [0x11cff4b8] */
  EDX = (r32((uint32_t)(0x11cff4b8)));
  /* 11ccbe82 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ccbe84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbe87 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11ccbe8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccbe91 mov dword ptr [0x11cff4b8], ecx */
  w32((uint32_t)(0x11cff4b8), (ECX));
  /* 11ccbe97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ccbe9a:;
  /* 11ccbe9a pop edi */
  EDI = (pop32());
  /* 11ccbe9b pop esi */
  ESI = (pop32());
  /* 11ccbe9c pop ebx */
  EBX = (pop32());
  /* 11ccbe9d mov esp, ebp */
  ESP = (EBP);
  /* 11ccbe9f pop ebp */
  EBP = (pop32());
  /* 11ccbea0 ret  */
  ESPCHK(0x11ccb990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000beb0 @ 0x11ccbeb0 (27 bytes, 13 insns) */
void f_11ccbeb0(void) {
  FTRACE(0x11ccbeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccbeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccbeb1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccbeb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbeb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbeb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccbeb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccbebc push eax */
  push32((uint32_t)(EAX));
  /* 11ccbebd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccbec0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccbec1 call 0x11ccbed0 */
  push32(0x11ccbec6u); f_11ccbed0();
  /* 11ccbec6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbec9 pop ebp */
  EBP = (pop32());
  /* 11ccbeca ret  */
  ESPCHK(0x11ccbeb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bed0 @ 0x11ccbed0 (64 bytes, 27 insns) */
void f_11ccbed0(void) {
  FTRACE(0x11ccbed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccbed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccbed1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccbed3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccbed4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccbed6 call 0x11ccb3c0 */
  push32(0x11ccbedbu); f_11ccb3c0();
  /* 11ccbedb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbede push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbee0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccbee3 push eax */
  push32((uint32_t)(EAX));
  /* 11ccbee4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccbee7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccbee8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccbeeb push edx */
  push32((uint32_t)(EDX));
  /* 11ccbeec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccbeef push eax */
  push32((uint32_t)(EAX));
  /* 11ccbef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccbef3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccbef4 call 0x11ccb990 */
  push32(0x11ccbef9u); f_11ccb990();
  /* 11ccbef9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbefc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccbeff push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccbf01 call 0x11ccb460 */
  push32(0x11ccbf06u); f_11ccb460();
  /* 11ccbf06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbf09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccbf0c mov esp, ebp */
  ESP = (EBP);
  /* 11ccbf0e pop ebp */
  EBP = (pop32());
  /* 11ccbf0f ret  */
  ESPCHK(0x11ccbed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf10 @ 0x11ccbf10 (19 bytes, 9 insns) */
void f_11ccbf10(void) {
  FTRACE(0x11ccbf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccbf10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccbf11 mov ebp, esp */
  EBP = (ESP);
  /* 11ccbf13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccbf15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccbf18 push eax */
  push32((uint32_t)(EAX));
  /* 11ccbf19 call 0x11ccbf50 */
  push32(0x11ccbf1eu); f_11ccbf50();
  /* 11ccbf1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbf21 pop ebp */
  EBP = (pop32());
  /* 11ccbf22 ret  */
  ESPCHK(0x11ccbf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf30 @ 0x11ccbf30 (19 bytes, 9 insns) */
void f_11ccbf30(void) {
  FTRACE(0x11ccbf30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccbf30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccbf31 mov ebp, esp */
  EBP = (ESP);
  /* 11ccbf33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccbf35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccbf38 push eax */
  push32((uint32_t)(EAX));
  /* 11ccbf39 call 0x11ccbf80 */
  push32(0x11ccbf3eu); f_11ccbf80();
  /* 11ccbf3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbf41 pop ebp */
  EBP = (pop32());
  /* 11ccbf42 ret  */
  ESPCHK(0x11ccbf30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf50 @ 0x11ccbf50 (41 bytes, 16 insns) */
void f_11ccbf50(void) {
  FTRACE(0x11ccbf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccbf50 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccbf51 mov ebp, esp */
  EBP = (ESP);
  /* 11ccbf53 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccbf55 call 0x11ccb3c0 */
  push32(0x11ccbf5au); f_11ccb3c0();
  /* 11ccbf5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbf5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccbf60 push eax */
  push32((uint32_t)(EAX));
  /* 11ccbf61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccbf64 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccbf65 call 0x11ccbf80 */
  push32(0x11ccbf6au); f_11ccbf80();
  /* 11ccbf6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbf6d push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccbf6f call 0x11ccb460 */
  push32(0x11ccbf74u); f_11ccb460();
  /* 11ccbf74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbf77 pop ebp */
  EBP = (pop32());
  /* 11ccbf78 ret  */
  ESPCHK(0x11ccbf50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf80 @ 0x11ccbf80 (1004 bytes, 342 insns) */
void f_11ccbf80(void) {
  FTRACE(0x11ccbf80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccbf80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccbf81 mov ebp, esp */
  EBP = (ESP);
  /* 11ccbf83 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccbf84 push ebx */
  push32((uint32_t)(EBX));
  /* 11ccbf85 push esi */
  push32((uint32_t)(ESI));
  /* 11ccbf86 push edi */
  push32((uint32_t)(EDI));
  /* 11ccbf87 mov eax, dword ptr [0x11cfcf08] */
  EAX = (r32((uint32_t)(0x11cfcf08)));
  /* 11ccbf8c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccbf8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccbf91 je 0x11ccbfc3 */
  if (C.zf) goto L_11ccbfc3;
L_11ccbf93:;
  /* 11ccbf93 call 0x11ccc660 */
  push32(0x11ccbf98u); f_11ccc660();
  /* 11ccbf98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccbf9a jne 0x11ccbfbd */
  if (!C.zf) goto L_11ccbfbd;
  /* 11ccbf9c push 0x11cf9888 */
  push32((uint32_t)(0x11cf9888u));
  /* 11ccbfa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbfa3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11ccbfa8 push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccbfad push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccbfaf call 0x11cca080 */
  push32(0x11ccbfb4u); f_11cca080();
  /* 11ccbfb4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbfb7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbfba jne 0x11ccbfbd */
  if (!C.zf) goto L_11ccbfbd;
  /* 11ccbfbc int3  */
  x86_unimpl("int3 @ 0x11ccbfbc");
L_11ccbfbd:;
  /* 11ccbfbd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccbfbf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccbfc1 jne 0x11ccbf93 */
  if (!C.zf) goto L_11ccbf93;
L_11ccbfc3:;
  /* 11ccbfc3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccbfc7 jne 0x11ccbfce */
  if (!C.zf) goto L_11ccbfce;
  /* 11ccbfc9 jmp 0x11ccc365 */
  goto L_11ccc365;
L_11ccbfce:;
  /* 11ccbfce push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbfd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbfd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbfd4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccbfd7 push edx */
  push32((uint32_t)(EDX));
  /* 11ccbfd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbfda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccbfdd push eax */
  push32((uint32_t)(EAX));
  /* 11ccbfde push 3 */
  push32((uint32_t)(0x3u));
  /* 11ccbfe0 call dword ptr [0x11cfd250] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cfd250))), 0x11ccbfe6u);
  /* 11ccbfe6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccbfe9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccbfeb jne 0x11ccc018 */
  if (!C.zf) goto L_11ccc018;
L_11ccbfed:;
  /* 11ccbfed push 0x11cf9b24 */
  push32((uint32_t)(0x11cf9b24u));
  /* 11ccbff2 push 0x11cf981c */
  push32((uint32_t)(0x11cf981cu));
  /* 11ccbff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbff9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbffb push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbffd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccbfff call 0x11cca080 */
  push32(0x11ccc004u); f_11cca080();
  /* 11ccc004 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc007 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc00a jne 0x11ccc00d */
  if (!C.zf) goto L_11ccc00d;
  /* 11ccc00c int3  */
  x86_unimpl("int3 @ 0x11ccc00c");
L_11ccc00d:;
  /* 11ccc00d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc00f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccc011 jne 0x11ccbfed */
  if (!C.zf) goto L_11ccbfed;
  /* 11ccc013 jmp 0x11ccc365 */
  goto L_11ccc365;
L_11ccc018:;
  /* 11ccc018 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccc01b push edx */
  push32((uint32_t)(EDX));
  /* 11ccc01c call 0x11cccac0 */
  push32(0x11ccc021u); f_11cccac0();
  /* 11ccc021 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc024 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc026 jne 0x11ccc049 */
  if (!C.zf) goto L_11ccc049;
  /* 11ccc028 push 0x11cf998c */
  push32((uint32_t)(0x11cf998cu));
  /* 11ccc02d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc02f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11ccc034 push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccc039 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccc03b call 0x11cca080 */
  push32(0x11ccc040u); f_11cca080();
  /* 11ccc040 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc043 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc046 jne 0x11ccc049 */
  if (!C.zf) goto L_11ccc049;
  /* 11ccc048 int3  */
  x86_unimpl("int3 @ 0x11ccc048");
L_11ccc049:;
  /* 11ccc049 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc04b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc04d jne 0x11ccc018 */
  if (!C.zf) goto L_11ccc018;
  /* 11ccc04f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccc052 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccc055 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ccc058:;
  /* 11ccc058 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc05b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ccc05e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc063 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc066 je 0x11ccc0ab */
  if (C.zf) goto L_11ccc0ab;
  /* 11ccc068 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc06b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc06f je 0x11ccc0ab */
  if (C.zf) goto L_11ccc0ab;
  /* 11ccc071 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc074 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ccc077 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc07c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc07f je 0x11ccc0ab */
  if (C.zf) goto L_11ccc0ab;
  /* 11ccc081 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc084 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc088 je 0x11ccc0ab */
  if (C.zf) goto L_11ccc0ab;
  /* 11ccc08a push 0x11cf9474 */
  push32((uint32_t)(0x11cf9474u));
  /* 11ccc08f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc091 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11ccc096 push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccc09b push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccc09d call 0x11cca080 */
  push32(0x11ccc0a2u); f_11cca080();
  /* 11ccc0a2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc0a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc0a8 jne 0x11ccc0ab */
  if (!C.zf) goto L_11ccc0ab;
  /* 11ccc0aa int3  */
  x86_unimpl("int3 @ 0x11ccc0aa");
L_11ccc0ab:;
  /* 11ccc0ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccc0ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccc0af jne 0x11ccc058 */
  if (!C.zf) goto L_11ccc058;
  /* 11ccc0b1 mov eax, dword ptr [0x11cfcf08] */
  EAX = (r32((uint32_t)(0x11cfcf08)));
  /* 11ccc0b6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc0b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc0bb jne 0x11ccc186 */
  if (!C.zf) goto L_11ccc186;
  /* 11ccc0c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ccc0c3 mov cl, byte ptr [0x11cfcf14] */
  CL = (r8((uint32_t)(0x11cfcf14)));
  /* 11ccc0c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccc0ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc0cd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc0d0 push edx */
  push32((uint32_t)(EDX));
  /* 11ccc0d1 call 0x11ccc5d0 */
  push32(0x11ccc0d6u); f_11ccc5d0();
  /* 11ccc0d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc0d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc0db jne 0x11ccc120 */
  if (!C.zf) goto L_11ccc120;
L_11ccc0dd:;
  /* 11ccc0dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc0e0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc0e3 push eax */
  push32((uint32_t)(EAX));
  /* 11ccc0e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc0e7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ccc0ea push edx */
  push32((uint32_t)(EDX));
  /* 11ccc0eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc0ee mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ccc0f1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc0f7 mov edx, dword ptr [ecx*4 + 0x11cfcf18] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11cfcf18)));
  /* 11ccc0fe push edx */
  push32((uint32_t)(EDX));
  /* 11ccc0ff push 0x11cf9af8 */
  push32((uint32_t)(0x11cf9af8u));
  /* 11ccc104 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc106 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc108 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc10a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccc10c call 0x11cca080 */
  push32(0x11ccc111u); f_11cca080();
  /* 11ccc111 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc114 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc117 jne 0x11ccc11a */
  if (!C.zf) goto L_11ccc11a;
  /* 11ccc119 int3  */
  x86_unimpl("int3 @ 0x11ccc119");
L_11ccc11a:;
  /* 11ccc11a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc11c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc11e jne 0x11ccc0dd */
  if (!C.zf) goto L_11ccc0dd;
L_11ccc120:;
  /* 11ccc120 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ccc122 mov cl, byte ptr [0x11cfcf14] */
  CL = (r8((uint32_t)(0x11cfcf14)));
  /* 11ccc128 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccc129 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc12c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ccc12f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc132 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11ccc136 push edx */
  push32((uint32_t)(EDX));
  /* 11ccc137 call 0x11ccc5d0 */
  push32(0x11ccc13cu); f_11ccc5d0();
  /* 11ccc13c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc13f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc141 jne 0x11ccc186 */
  if (!C.zf) goto L_11ccc186;
L_11ccc143:;
  /* 11ccc143 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc146 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc149 push eax */
  push32((uint32_t)(EAX));
  /* 11ccc14a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc14d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ccc150 push edx */
  push32((uint32_t)(EDX));
  /* 11ccc151 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc154 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ccc157 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc15d mov edx, dword ptr [ecx*4 + 0x11cfcf18] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11cfcf18)));
  /* 11ccc164 push edx */
  push32((uint32_t)(EDX));
  /* 11ccc165 push 0x11cf9acc */
  push32((uint32_t)(0x11cf9accu));
  /* 11ccc16a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc16c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc16e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc170 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccc172 call 0x11cca080 */
  push32(0x11ccc177u); f_11cca080();
  /* 11ccc177 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc17a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc17d jne 0x11ccc180 */
  if (!C.zf) goto L_11ccc180;
  /* 11ccc17f int3  */
  x86_unimpl("int3 @ 0x11ccc17f");
L_11ccc180:;
  /* 11ccc180 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc184 jne 0x11ccc143 */
  if (!C.zf) goto L_11ccc143;
L_11ccc186:;
  /* 11ccc186 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc189 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc18d jne 0x11ccc1fb */
  if (!C.zf) goto L_11ccc1fb;
L_11ccc18f:;
  /* 11ccc18f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc192 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc199 jne 0x11ccc1a4 */
  if (!C.zf) goto L_11ccc1a4;
  /* 11ccc19b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc19e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc1a2 je 0x11ccc1c5 */
  if (C.zf) goto L_11ccc1c5;
L_11ccc1a4:;
  /* 11ccc1a4 push 0x11cf9a8c */
  push32((uint32_t)(0x11cf9a8cu));
  /* 11ccc1a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc1ab push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11ccc1b0 push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccc1b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccc1b7 call 0x11cca080 */
  push32(0x11ccc1bcu); f_11cca080();
  /* 11ccc1bc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc1bf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc1c2 jne 0x11ccc1c5 */
  if (!C.zf) goto L_11ccc1c5;
  /* 11ccc1c4 int3  */
  x86_unimpl("int3 @ 0x11ccc1c4");
L_11ccc1c5:;
  /* 11ccc1c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc1c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccc1c9 jne 0x11ccc18f */
  if (!C.zf) goto L_11ccc18f;
  /* 11ccc1cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc1ce mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ccc1d1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc1d4 push eax */
  push32((uint32_t)(EAX));
  /* 11ccc1d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc1d7 mov cl, byte ptr [0x11cfcf15] */
  CL = (r8((uint32_t)(0x11cfcf15)));
  /* 11ccc1dd push ecx */
  push32((uint32_t)(ECX));
  /* 11ccc1de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc1e1 push edx */
  push32((uint32_t)(EDX));
  /* 11ccc1e2 call 0x11cd2900 */
  push32(0x11ccc1e7u); f_11cd2900();
  /* 11ccc1e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc1ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc1ed push eax */
  push32((uint32_t)(EAX));
  /* 11ccc1ee call 0x11cd30c0 */
  push32(0x11ccc1f3u); f_11cd30c0();
  /* 11ccc1f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc1f6 jmp 0x11ccc365 */
  goto L_11ccc365;
L_11ccc1fb:;
  /* 11ccc1fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc1fe cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc202 jne 0x11ccc211 */
  if (!C.zf) goto L_11ccc211;
  /* 11ccc204 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc208 jne 0x11ccc211 */
  if (!C.zf) goto L_11ccc211;
  /* 11ccc20a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11ccc211:;
  /* 11ccc211 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc214 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ccc217 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc21a je 0x11ccc23d */
  if (C.zf) goto L_11ccc23d;
  /* 11ccc21c push 0x11cf9a6c */
  push32((uint32_t)(0x11cf9a6cu));
  /* 11ccc221 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc223 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11ccc228 push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccc22d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccc22f call 0x11cca080 */
  push32(0x11ccc234u); f_11cca080();
  /* 11ccc234 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc237 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc23a jne 0x11ccc23d */
  if (!C.zf) goto L_11ccc23d;
  /* 11ccc23c int3  */
  x86_unimpl("int3 @ 0x11ccc23c");
L_11ccc23d:;
  /* 11ccc23d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc23f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccc241 jne 0x11ccc211 */
  if (!C.zf) goto L_11ccc211;
  /* 11ccc243 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc246 mov eax, dword ptr [0x11cff4bc] */
  EAX = (r32((uint32_t)(0x11cff4bc)));
  /* 11ccc24b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccc24e mov dword ptr [0x11cff4bc], eax */
  w32((uint32_t)(0x11cff4bc), (EAX));
  /* 11ccc253 mov ecx, dword ptr [0x11cfcf08] */
  ECX = (r32((uint32_t)(0x11cfcf08)));
  /* 11ccc259 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc25c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccc25e jne 0x11ccc33c */
  if (!C.zf) goto L_11ccc33c;
  /* 11ccc264 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc267 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc26a je 0x11ccc27c */
  if (C.zf) goto L_11ccc27c;
  /* 11ccc26c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc26f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccc271 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc274 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ccc277 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ccc27a jmp 0x11ccc2ba */
  goto L_11ccc2ba;
L_11ccc27c:;
  /* 11ccc27c mov ecx, dword ptr [0x11cff4b0] */
  ECX = (r32((uint32_t)(0x11cff4b0)));
  /* 11ccc282 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc285 je 0x11ccc2a8 */
  if (C.zf) goto L_11ccc2a8;
  /* 11ccc287 push 0x11cf9a54 */
  push32((uint32_t)(0x11cf9a54u));
  /* 11ccc28c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc28e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11ccc293 push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccc298 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccc29a call 0x11cca080 */
  push32(0x11ccc29fu); f_11cca080();
  /* 11ccc29f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc2a2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc2a5 jne 0x11ccc2a8 */
  if (!C.zf) goto L_11ccc2a8;
  /* 11ccc2a7 int3  */
  x86_unimpl("int3 @ 0x11ccc2a7");
L_11ccc2a8:;
  /* 11ccc2a8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccc2aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccc2ac jne 0x11ccc27c */
  if (!C.zf) goto L_11ccc27c;
  /* 11ccc2ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc2b1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ccc2b4 mov dword ptr [0x11cff4b0], ecx */
  w32((uint32_t)(0x11cff4b0), (ECX));
L_11ccc2ba:;
  /* 11ccc2ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc2bd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc2c1 je 0x11ccc2d2 */
  if (C.zf) goto L_11ccc2d2;
  /* 11ccc2c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc2c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ccc2c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc2cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ccc2ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ccc2d0 jmp 0x11ccc30f */
  goto L_11ccc30f;
L_11ccc2d2:;
  /* 11ccc2d2 mov ecx, dword ptr [0x11cff4b8] */
  ECX = (r32((uint32_t)(0x11cff4b8)));
  /* 11ccc2d8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc2db je 0x11ccc2fe */
  if (C.zf) goto L_11ccc2fe;
  /* 11ccc2dd push 0x11cf9a3c */
  push32((uint32_t)(0x11cf9a3cu));
  /* 11ccc2e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc2e4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11ccc2e9 push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccc2ee push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccc2f0 call 0x11cca080 */
  push32(0x11ccc2f5u); f_11cca080();
  /* 11ccc2f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc2f8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc2fb jne 0x11ccc2fe */
  if (!C.zf) goto L_11ccc2fe;
  /* 11ccc2fd int3  */
  x86_unimpl("int3 @ 0x11ccc2fd");
L_11ccc2fe:;
  /* 11ccc2fe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccc300 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccc302 jne 0x11ccc2d2 */
  if (!C.zf) goto L_11ccc2d2;
  /* 11ccc304 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc307 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccc309 mov dword ptr [0x11cff4b8], ecx */
  w32((uint32_t)(0x11cff4b8), (ECX));
L_11ccc30f:;
  /* 11ccc30f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc312 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ccc315 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc318 push eax */
  push32((uint32_t)(EAX));
  /* 11ccc319 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc31b mov cl, byte ptr [0x11cfcf15] */
  CL = (r8((uint32_t)(0x11cfcf15)));
  /* 11ccc321 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccc322 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc325 push edx */
  push32((uint32_t)(EDX));
  /* 11ccc326 call 0x11cd2900 */
  push32(0x11ccc32bu); f_11cd2900();
  /* 11ccc32b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc32e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc331 push eax */
  push32((uint32_t)(EAX));
  /* 11ccc332 call 0x11cd30c0 */
  push32(0x11ccc337u); f_11cd30c0();
  /* 11ccc337 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc33a jmp 0x11ccc365 */
  goto L_11ccc365;
L_11ccc33c:;
  /* 11ccc33c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc33f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11ccc346 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc349 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ccc34c push eax */
  push32((uint32_t)(EAX));
  /* 11ccc34d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc34f mov cl, byte ptr [0x11cfcf15] */
  CL = (r8((uint32_t)(0x11cfcf15)));
  /* 11ccc355 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccc356 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc359 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc35c push edx */
  push32((uint32_t)(EDX));
  /* 11ccc35d call 0x11cd2900 */
  push32(0x11ccc362u); f_11cd2900();
  /* 11ccc362 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccc365:;
  /* 11ccc365 pop edi */
  EDI = (pop32());
  /* 11ccc366 pop esi */
  ESI = (pop32());
  /* 11ccc367 pop ebx */
  EBX = (pop32());
  /* 11ccc368 mov esp, ebp */
  ESP = (EBP);
  /* 11ccc36a pop ebp */
  EBP = (pop32());
  /* 11ccc36b ret  */
  ESPCHK(0x11ccbf80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c370 @ 0x11ccc370 (19 bytes, 9 insns) */
void f_11ccc370(void) {
  FTRACE(0x11ccc370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccc370 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccc371 mov ebp, esp */
  EBP = (ESP);
  /* 11ccc373 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccc375 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccc378 push eax */
  push32((uint32_t)(EAX));
  /* 11ccc379 call 0x11ccc390 */
  push32(0x11ccc37eu); f_11ccc390();
  /* 11ccc37e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc381 pop ebp */
  EBP = (pop32());
  /* 11ccc382 ret  */
  ESPCHK(0x11ccc370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c390 @ 0x11ccc390 (342 bytes, 119 insns) */
void f_11ccc390(void) {
  FTRACE(0x11ccc390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccc390 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccc391 mov ebp, esp */
  EBP = (ESP);
  /* 11ccc393 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccc396 push ebx */
  push32((uint32_t)(EBX));
  /* 11ccc397 push esi */
  push32((uint32_t)(ESI));
  /* 11ccc398 push edi */
  push32((uint32_t)(EDI));
  /* 11ccc399 mov eax, dword ptr [0x11cfcf08] */
  EAX = (r32((uint32_t)(0x11cfcf08)));
  /* 11ccc39e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc3a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc3a3 je 0x11ccc3d5 */
  if (C.zf) goto L_11ccc3d5;
L_11ccc3a5:;
  /* 11ccc3a5 call 0x11ccc660 */
  push32(0x11ccc3aau); f_11ccc660();
  /* 11ccc3aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc3ac jne 0x11ccc3cf */
  if (!C.zf) goto L_11ccc3cf;
  /* 11ccc3ae push 0x11cf9888 */
  push32((uint32_t)(0x11cf9888u));
  /* 11ccc3b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc3b5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 11ccc3ba push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccc3bf push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccc3c1 call 0x11cca080 */
  push32(0x11ccc3c6u); f_11cca080();
  /* 11ccc3c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc3c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc3cc jne 0x11ccc3cf */
  if (!C.zf) goto L_11ccc3cf;
  /* 11ccc3ce int3  */
  x86_unimpl("int3 @ 0x11ccc3ce");
L_11ccc3cf:;
  /* 11ccc3cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc3d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccc3d3 jne 0x11ccc3a5 */
  if (!C.zf) goto L_11ccc3a5;
L_11ccc3d5:;
  /* 11ccc3d5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccc3d7 call 0x11ccb3c0 */
  push32(0x11ccc3dcu); f_11ccb3c0();
  /* 11ccc3dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccc3df:;
  /* 11ccc3df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccc3e2 push edx */
  push32((uint32_t)(EDX));
  /* 11ccc3e3 call 0x11cccac0 */
  push32(0x11ccc3e8u); f_11cccac0();
  /* 11ccc3e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc3eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc3ed jne 0x11ccc410 */
  if (!C.zf) goto L_11ccc410;
  /* 11ccc3ef push 0x11cf998c */
  push32((uint32_t)(0x11cf998cu));
  /* 11ccc3f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc3f6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 11ccc3fb push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccc400 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccc402 call 0x11cca080 */
  push32(0x11ccc407u); f_11cca080();
  /* 11ccc407 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc40a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc40d jne 0x11ccc410 */
  if (!C.zf) goto L_11ccc410;
  /* 11ccc40f int3  */
  x86_unimpl("int3 @ 0x11ccc40f");
L_11ccc410:;
  /* 11ccc410 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc412 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc414 jne 0x11ccc3df */
  if (!C.zf) goto L_11ccc3df;
  /* 11ccc416 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccc419 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccc41c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ccc41f:;
  /* 11ccc41f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc422 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ccc425 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc42a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc42d je 0x11ccc472 */
  if (C.zf) goto L_11ccc472;
  /* 11ccc42f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc432 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc436 je 0x11ccc472 */
  if (C.zf) goto L_11ccc472;
  /* 11ccc438 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc43b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ccc43e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc443 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc446 je 0x11ccc472 */
  if (C.zf) goto L_11ccc472;
  /* 11ccc448 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc44b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc44f je 0x11ccc472 */
  if (C.zf) goto L_11ccc472;
  /* 11ccc451 push 0x11cf9474 */
  push32((uint32_t)(0x11cf9474u));
  /* 11ccc456 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc458 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 11ccc45d push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccc462 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccc464 call 0x11cca080 */
  push32(0x11ccc469u); f_11cca080();
  /* 11ccc469 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc46c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc46f jne 0x11ccc472 */
  if (!C.zf) goto L_11ccc472;
  /* 11ccc471 int3  */
  x86_unimpl("int3 @ 0x11ccc471");
L_11ccc472:;
  /* 11ccc472 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccc474 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccc476 jne 0x11ccc41f */
  if (!C.zf) goto L_11ccc41f;
  /* 11ccc478 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc47b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc47f jne 0x11ccc48e */
  if (!C.zf) goto L_11ccc48e;
  /* 11ccc481 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc485 jne 0x11ccc48e */
  if (!C.zf) goto L_11ccc48e;
  /* 11ccc487 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11ccc48e:;
  /* 11ccc48e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc491 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc495 je 0x11ccc4c9 */
  if (C.zf) goto L_11ccc4c9;
L_11ccc497:;
  /* 11ccc497 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc49a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ccc49d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc4a0 je 0x11ccc4c3 */
  if (C.zf) goto L_11ccc4c3;
  /* 11ccc4a2 push 0x11cf9a6c */
  push32((uint32_t)(0x11cf9a6cu));
  /* 11ccc4a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc4a9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 11ccc4ae push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccc4b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccc4b5 call 0x11cca080 */
  push32(0x11ccc4bau); f_11cca080();
  /* 11ccc4ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc4bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc4c0 jne 0x11ccc4c3 */
  if (!C.zf) goto L_11ccc4c3;
  /* 11ccc4c2 int3  */
  x86_unimpl("int3 @ 0x11ccc4c2");
L_11ccc4c3:;
  /* 11ccc4c3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc4c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccc4c7 jne 0x11ccc497 */
  if (!C.zf) goto L_11ccc497;
L_11ccc4c9:;
  /* 11ccc4c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc4cc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ccc4cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccc4d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccc4d4 call 0x11ccb460 */
  push32(0x11ccc4d9u); f_11ccb460();
  /* 11ccc4d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc4dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc4df pop edi */
  EDI = (pop32());
  /* 11ccc4e0 pop esi */
  ESI = (pop32());
  /* 11ccc4e1 pop ebx */
  EBX = (pop32());
  /* 11ccc4e2 mov esp, ebp */
  ESP = (EBP);
  /* 11ccc4e4 pop ebp */
  EBP = (pop32());
  /* 11ccc4e5 ret  */
  ESPCHK(0x11ccc390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4f0 @ 0x11ccc4f0 (28 bytes, 11 insns) */
void f_11ccc4f0(void) {
  FTRACE(0x11ccc4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccc4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccc4f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccc4f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccc4f4 mov eax, dword ptr [0x11cfcf10] */
  EAX = (r32((uint32_t)(0x11cfcf10)));
  /* 11ccc4f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccc4fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccc4ff mov dword ptr [0x11cfcf10], ecx */
  w32((uint32_t)(0x11cfcf10), (ECX));
  /* 11ccc505 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc508 mov esp, ebp */
  ESP = (EBP);
  /* 11ccc50a pop ebp */
  EBP = (pop32());
  /* 11ccc50b ret  */
  ESPCHK(0x11ccc4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c510 @ 0x11ccc510 (157 bytes, 59 insns) */
void f_11ccc510(void) {
  FTRACE(0x11ccc510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccc510 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccc511 mov ebp, esp */
  EBP = (ESP);
  /* 11ccc513 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccc514 push ebx */
  push32((uint32_t)(EBX));
  /* 11ccc515 push esi */
  push32((uint32_t)(ESI));
  /* 11ccc516 push edi */
  push32((uint32_t)(EDI));
  /* 11ccc517 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccc519 call 0x11ccb3c0 */
  push32(0x11ccc51eu); f_11ccb3c0();
  /* 11ccc51e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc521 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccc524 push eax */
  push32((uint32_t)(EAX));
  /* 11ccc525 call 0x11cccac0 */
  push32(0x11ccc52au); f_11cccac0();
  /* 11ccc52a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc52d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc52f je 0x11ccc59c */
  if (C.zf) goto L_11ccc59c;
  /* 11ccc531 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccc534 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccc537 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ccc53a:;
  /* 11ccc53a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc53d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ccc540 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc545 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc548 je 0x11ccc58d */
  if (C.zf) goto L_11ccc58d;
  /* 11ccc54a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc54d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc551 je 0x11ccc58d */
  if (C.zf) goto L_11ccc58d;
  /* 11ccc553 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc556 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ccc559 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc55e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc561 je 0x11ccc58d */
  if (C.zf) goto L_11ccc58d;
  /* 11ccc563 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc566 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc56a je 0x11ccc58d */
  if (C.zf) goto L_11ccc58d;
  /* 11ccc56c push 0x11cf9474 */
  push32((uint32_t)(0x11cf9474u));
  /* 11ccc571 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc573 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11ccc578 push 0x11cf987c */
  push32((uint32_t)(0x11cf987cu));
  /* 11ccc57d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccc57f call 0x11cca080 */
  push32(0x11ccc584u); f_11cca080();
  /* 11ccc584 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc587 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc58a jne 0x11ccc58d */
  if (!C.zf) goto L_11ccc58d;
  /* 11ccc58c int3  */
  x86_unimpl("int3 @ 0x11ccc58c");
L_11ccc58d:;
  /* 11ccc58d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccc58f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccc591 jne 0x11ccc53a */
  if (!C.zf) goto L_11ccc53a;
  /* 11ccc593 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc596 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccc599 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_11ccc59c:;
  /* 11ccc59c push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccc59e call 0x11ccb460 */
  push32(0x11ccc5a3u); f_11ccb460();
  /* 11ccc5a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc5a6 pop edi */
  EDI = (pop32());
  /* 11ccc5a7 pop esi */
  ESI = (pop32());
  /* 11ccc5a8 pop ebx */
  EBX = (pop32());
  /* 11ccc5a9 mov esp, ebp */
  ESP = (EBP);
  /* 11ccc5ab pop ebp */
  EBP = (pop32());
  /* 11ccc5ac ret  */
  ESPCHK(0x11ccc510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5b0 @ 0x11ccc5b0 (28 bytes, 11 insns) */
void f_11ccc5b0(void) {
  FTRACE(0x11ccc5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccc5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccc5b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccc5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccc5b4 mov eax, dword ptr [0x11cfd250] */
  EAX = (r32((uint32_t)(0x11cfd250)));
  /* 11ccc5b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccc5bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccc5bf mov dword ptr [0x11cfd250], ecx */
  w32((uint32_t)(0x11cfd250), (ECX));
  /* 11ccc5c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc5c8 mov esp, ebp */
  ESP = (EBP);
  /* 11ccc5ca pop ebp */
  EBP = (pop32());
  /* 11ccc5cb ret  */
  ESPCHK(0x11ccc5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5d0 @ 0x11ccc5d0 (136 bytes, 55 insns) */
void f_11ccc5d0(void) {
  FTRACE(0x11ccc5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccc5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccc5d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccc5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccc5d4 push ebx */
  push32((uint32_t)(EBX));
  /* 11ccc5d5 push esi */
  push32((uint32_t)(ESI));
  /* 11ccc5d6 push edi */
  push32((uint32_t)(EDI));
  /* 11ccc5d7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11ccc5de:;
  /* 11ccc5de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccc5e1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccc5e4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccc5e7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11ccc5ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc5ec je 0x11ccc64e */
  if (C.zf) goto L_11ccc64e;
  /* 11ccc5ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccc5f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc5f3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ccc5f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccc5f8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc5fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccc601 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc604 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ccc607 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc609 je 0x11ccc64c */
  if (C.zf) goto L_11ccc64c;
L_11ccc60b:;
  /* 11ccc60b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccc60e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc613 push eax */
  push32((uint32_t)(EAX));
  /* 11ccc614 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccc617 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccc619 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 11ccc61c push edx */
  push32((uint32_t)(EDX));
  /* 11ccc61d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccc620 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccc623 push eax */
  push32((uint32_t)(EAX));
  /* 11ccc624 push 0x11cf9b40 */
  push32((uint32_t)(0x11cf9b40u));
  /* 11ccc629 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc62b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc62d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc62f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc631 call 0x11cca080 */
  push32(0x11ccc636u); f_11cca080();
  /* 11ccc636 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc639 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc63c jne 0x11ccc63f */
  if (!C.zf) goto L_11ccc63f;
  /* 11ccc63e int3  */
  x86_unimpl("int3 @ 0x11ccc63e");
L_11ccc63f:;
  /* 11ccc63f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc641 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccc643 jne 0x11ccc60b */
  if (!C.zf) goto L_11ccc60b;
  /* 11ccc645 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ccc64c:;
  /* 11ccc64c jmp 0x11ccc5de */
  goto L_11ccc5de;
L_11ccc64e:;
  /* 11ccc64e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc651 pop edi */
  EDI = (pop32());
  /* 11ccc652 pop esi */
  ESI = (pop32());
  /* 11ccc653 pop ebx */
  EBX = (pop32());
  /* 11ccc654 mov esp, ebp */
  ESP = (EBP);
  /* 11ccc656 pop ebp */
  EBP = (pop32());
  /* 11ccc657 ret  */
  ESPCHK(0x11ccc5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c660 @ 0x11ccc660 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11ccc660(void) {
  FTRACE(0x11ccc660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccc660 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccc661 mov ebp, esp */
  EBP = (ESP);
  /* 11ccc663 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccc666 push ebx */
  push32((uint32_t)(EBX));
  /* 11ccc667 push esi */
  push32((uint32_t)(ESI));
  /* 11ccc668 push edi */
  push32((uint32_t)(EDI));
  /* 11ccc669 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ccc670 mov eax, dword ptr [0x11cfcf08] */
  EAX = (r32((uint32_t)(0x11cfcf08)));
  /* 11ccc675 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc678 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc67a jne 0x11ccc686 */
  if (!C.zf) goto L_11ccc686;
  /* 11ccc67c mov eax, 1 */
  EAX = (0x1u);
  /* 11ccc681 jmp 0x11ccc9b8 */
  goto L_11ccc9b8;
L_11ccc686:;
  /* 11ccc686 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccc688 call 0x11ccb3c0 */
  push32(0x11ccc68du); f_11ccb3c0();
  /* 11ccc68d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc690 call 0x11cd3130 */
  push32(0x11ccc695u); f_11cd3130();
  /* 11ccc695 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ccc698 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc69c je 0x11ccc7a9 */
  if (C.zf) goto L_11ccc7a9;
  /* 11ccc6a2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc6a6 je 0x11ccc7a9 */
  if (C.zf) goto L_11ccc7a9;
  /* 11ccc6ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccc6af mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ccc6b2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ccc6b5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc6b8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ccc6bb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc6bf ja 0x11ccc772 */
  if ((!C.cf&&!C.zf)) goto L_11ccc772;
  /* 11ccc6c5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ccc6c8 jmp dword ptr [eax*4 + 0x11ccc9bf] */
  switch (EAX) {
    case 0: goto L_11ccc74a;
    case 1: goto L_11ccc722;
    case 2: goto L_11ccc6fa;
    case 3: goto L_11ccc6cf;
    default: x86_unimpl("switch@0x11ccc6c8 out of table"); return;
  }
L_11ccc6cf:;
  /* 11ccc6cf push 0x11cf9c94 */
  push32((uint32_t)(0x11cf9c94u));
  /* 11ccc6d4 push 0x11cf981c */
  push32((uint32_t)(0x11cf981cu));
  /* 11ccc6d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc6db push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc6dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc6df push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc6e1 call 0x11cca080 */
  push32(0x11ccc6e6u); f_11cca080();
  /* 11ccc6e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc6e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc6ec jne 0x11ccc6ef */
  if (!C.zf) goto L_11ccc6ef;
  /* 11ccc6ee int3  */
  x86_unimpl("int3 @ 0x11ccc6ee");
L_11ccc6ef:;
  /* 11ccc6ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc6f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccc6f3 jne 0x11ccc6cf */
  if (!C.zf) goto L_11ccc6cf;
  /* 11ccc6f5 jmp 0x11ccc798 */
  goto L_11ccc798;
L_11ccc6fa:;
  /* 11ccc6fa push 0x11cf9c70 */
  push32((uint32_t)(0x11cf9c70u));
  /* 11ccc6ff push 0x11cf981c */
  push32((uint32_t)(0x11cf981cu));
  /* 11ccc704 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc706 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc708 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc70a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc70c call 0x11cca080 */
  push32(0x11ccc711u); f_11cca080();
  /* 11ccc711 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc714 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc717 jne 0x11ccc71a */
  if (!C.zf) goto L_11ccc71a;
  /* 11ccc719 int3  */
  x86_unimpl("int3 @ 0x11ccc719");
L_11ccc71a:;
  /* 11ccc71a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccc71c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccc71e jne 0x11ccc6fa */
  if (!C.zf) goto L_11ccc6fa;
  /* 11ccc720 jmp 0x11ccc798 */
  goto L_11ccc798;
L_11ccc722:;
  /* 11ccc722 push 0x11cf9c4c */
  push32((uint32_t)(0x11cf9c4cu));
  /* 11ccc727 push 0x11cf981c */
  push32((uint32_t)(0x11cf981cu));
  /* 11ccc72c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc72e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc730 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc732 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc734 call 0x11cca080 */
  push32(0x11ccc739u); f_11cca080();
  /* 11ccc739 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc73c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc73f jne 0x11ccc742 */
  if (!C.zf) goto L_11ccc742;
  /* 11ccc741 int3  */
  x86_unimpl("int3 @ 0x11ccc741");
L_11ccc742:;
  /* 11ccc742 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc744 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc746 jne 0x11ccc722 */
  if (!C.zf) goto L_11ccc722;
  /* 11ccc748 jmp 0x11ccc798 */
  goto L_11ccc798;
L_11ccc74a:;
  /* 11ccc74a push 0x11cf9c28 */
  push32((uint32_t)(0x11cf9c28u));
  /* 11ccc74f push 0x11cf981c */
  push32((uint32_t)(0x11cf981cu));
  /* 11ccc754 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc756 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc758 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc75a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc75c call 0x11cca080 */
  push32(0x11ccc761u); f_11cca080();
  /* 11ccc761 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc764 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc767 jne 0x11ccc76a */
  if (!C.zf) goto L_11ccc76a;
  /* 11ccc769 int3  */
  x86_unimpl("int3 @ 0x11ccc769");
L_11ccc76a:;
  /* 11ccc76a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc76c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccc76e jne 0x11ccc74a */
  if (!C.zf) goto L_11ccc74a;
  /* 11ccc770 jmp 0x11ccc798 */
  goto L_11ccc798;
L_11ccc772:;
  /* 11ccc772 push 0x11cf9bfc */
  push32((uint32_t)(0x11cf9bfcu));
  /* 11ccc777 push 0x11cf981c */
  push32((uint32_t)(0x11cf981cu));
  /* 11ccc77c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc77e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc780 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc782 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc784 call 0x11cca080 */
  push32(0x11ccc789u); f_11cca080();
  /* 11ccc789 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc78c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc78f jne 0x11ccc792 */
  if (!C.zf) goto L_11ccc792;
  /* 11ccc791 int3  */
  x86_unimpl("int3 @ 0x11ccc791");
L_11ccc792:;
  /* 11ccc792 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccc794 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccc796 jne 0x11ccc772 */
  if (!C.zf) goto L_11ccc772;
L_11ccc798:;
  /* 11ccc798 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccc79a call 0x11ccb460 */
  push32(0x11ccc79fu); f_11ccb460();
  /* 11ccc79f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc7a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc7a4 jmp 0x11ccc9b8 */
  goto L_11ccc9b8;
L_11ccc7a9:;
  /* 11ccc7a9 mov eax, dword ptr [0x11cff4b8] */
  EAX = (r32((uint32_t)(0x11cff4b8)));
  /* 11ccc7ae mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ccc7b1 jmp 0x11ccc7bb */
  goto L_11ccc7bb;
L_11ccc7b3:;
  /* 11ccc7b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc7b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ccc7b8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11ccc7bb:;
  /* 11ccc7bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc7bf je 0x11ccc9ab */
  if (C.zf) goto L_11ccc9ab;
  /* 11ccc7c5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11ccc7cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc7cf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ccc7d2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc7d8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc7db je 0x11ccc800 */
  if (C.zf) goto L_11ccc800;
  /* 11ccc7dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc7e0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc7e4 je 0x11ccc800 */
  if (C.zf) goto L_11ccc800;
  /* 11ccc7e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc7e9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ccc7ec and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc7f2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc7f5 je 0x11ccc800 */
  if (C.zf) goto L_11ccc800;
  /* 11ccc7f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc7fa cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc7fe jne 0x11ccc818 */
  if (!C.zf) goto L_11ccc818;
L_11ccc800:;
  /* 11ccc800 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc803 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ccc806 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc80c mov edx, dword ptr [ecx*4 + 0x11cfcf18] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11cfcf18)));
  /* 11ccc813 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ccc816 jmp 0x11ccc81f */
  goto L_11ccc81f;
L_11ccc818:;
  /* 11ccc818 mov dword ptr [ebp - 0x14], 0x11cf9bf4 */
  w32((uint32_t)(EBP + -0x14), (0x11cf9bf4u));
L_11ccc81f:;
  /* 11ccc81f push 4 */
  push32((uint32_t)(0x4u));
  /* 11ccc821 mov al, byte ptr [0x11cfcf14] */
  AL = (r8((uint32_t)(0x11cfcf14)));
  /* 11ccc826 push eax */
  push32((uint32_t)(EAX));
  /* 11ccc827 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc82a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc82d push ecx */
  push32((uint32_t)(ECX));
  /* 11ccc82e call 0x11ccc5d0 */
  push32(0x11ccc833u); f_11ccc5d0();
  /* 11ccc833 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc836 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc838 jne 0x11ccc874 */
  if (!C.zf) goto L_11ccc874;
L_11ccc83a:;
  /* 11ccc83a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc83d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc840 push edx */
  push32((uint32_t)(EDX));
  /* 11ccc841 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc844 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11ccc847 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccc848 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ccc84b push edx */
  push32((uint32_t)(EDX));
  /* 11ccc84c push 0x11cf9af8 */
  push32((uint32_t)(0x11cf9af8u));
  /* 11ccc851 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc853 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc855 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc857 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc859 call 0x11cca080 */
  push32(0x11ccc85eu); f_11cca080();
  /* 11ccc85e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc861 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc864 jne 0x11ccc867 */
  if (!C.zf) goto L_11ccc867;
  /* 11ccc866 int3  */
  x86_unimpl("int3 @ 0x11ccc866");
L_11ccc867:;
  /* 11ccc867 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc869 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc86b jne 0x11ccc83a */
  if (!C.zf) goto L_11ccc83a;
  /* 11ccc86d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11ccc874:;
  /* 11ccc874 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ccc876 mov cl, byte ptr [0x11cfcf14] */
  CL = (r8((uint32_t)(0x11cfcf14)));
  /* 11ccc87c push ecx */
  push32((uint32_t)(ECX));
  /* 11ccc87d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc880 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ccc883 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc886 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11ccc88a push edx */
  push32((uint32_t)(EDX));
  /* 11ccc88b call 0x11ccc5d0 */
  push32(0x11ccc890u); f_11ccc5d0();
  /* 11ccc890 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc893 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc895 jne 0x11ccc8d1 */
  if (!C.zf) goto L_11ccc8d1;
L_11ccc897:;
  /* 11ccc897 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc89a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc89d push eax */
  push32((uint32_t)(EAX));
  /* 11ccc89e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc8a1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ccc8a4 push edx */
  push32((uint32_t)(EDX));
  /* 11ccc8a5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ccc8a8 push eax */
  push32((uint32_t)(EAX));
  /* 11ccc8a9 push 0x11cf9acc */
  push32((uint32_t)(0x11cf9accu));
  /* 11ccc8ae push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc8b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc8b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc8b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc8b6 call 0x11cca080 */
  push32(0x11ccc8bbu); f_11cca080();
  /* 11ccc8bb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc8be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc8c1 jne 0x11ccc8c4 */
  if (!C.zf) goto L_11ccc8c4;
  /* 11ccc8c3 int3  */
  x86_unimpl("int3 @ 0x11ccc8c3");
L_11ccc8c4:;
  /* 11ccc8c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccc8c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccc8c8 jne 0x11ccc897 */
  if (!C.zf) goto L_11ccc897;
  /* 11ccc8ca mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11ccc8d1:;
  /* 11ccc8d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc8d4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc8d8 jne 0x11ccc92a */
  if (!C.zf) goto L_11ccc92a;
  /* 11ccc8da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc8dd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ccc8e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccc8e1 mov dl, byte ptr [0x11cfcf15] */
  DL = (r8((uint32_t)(0x11cfcf15)));
  /* 11ccc8e7 push edx */
  push32((uint32_t)(EDX));
  /* 11ccc8e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc8eb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc8ee push eax */
  push32((uint32_t)(EAX));
  /* 11ccc8ef call 0x11ccc5d0 */
  push32(0x11ccc8f4u); f_11ccc5d0();
  /* 11ccc8f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc8f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc8f9 jne 0x11ccc92a */
  if (!C.zf) goto L_11ccc92a;
L_11ccc8fb:;
  /* 11ccc8fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc8fe add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc901 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccc902 push 0x11cf9bc8 */
  push32((uint32_t)(0x11cf9bc8u));
  /* 11ccc907 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc909 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc90b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc90d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc90f call 0x11cca080 */
  push32(0x11ccc914u); f_11cca080();
  /* 11ccc914 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc917 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc91a jne 0x11ccc91d */
  if (!C.zf) goto L_11ccc91d;
  /* 11ccc91c int3  */
  x86_unimpl("int3 @ 0x11ccc91c");
L_11ccc91d:;
  /* 11ccc91d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccc91f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccc921 jne 0x11ccc8fb */
  if (!C.zf) goto L_11ccc8fb;
  /* 11ccc923 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11ccc92a:;
  /* 11ccc92a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc92e jne 0x11ccc9a6 */
  if (!C.zf) goto L_11ccc9a6;
  /* 11ccc930 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc933 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc937 je 0x11ccc96c */
  if (C.zf) goto L_11ccc96c;
L_11ccc939:;
  /* 11ccc939 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc93c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ccc93f push edx */
  push32((uint32_t)(EDX));
  /* 11ccc940 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc943 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ccc946 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccc947 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ccc94a push edx */
  push32((uint32_t)(EDX));
  /* 11ccc94b push 0x11cf9ba8 */
  push32((uint32_t)(0x11cf9ba8u));
  /* 11ccc950 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc952 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc954 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc956 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc958 call 0x11cca080 */
  push32(0x11ccc95du); f_11cca080();
  /* 11ccc95d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc960 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc963 jne 0x11ccc966 */
  if (!C.zf) goto L_11ccc966;
  /* 11ccc965 int3  */
  x86_unimpl("int3 @ 0x11ccc965");
L_11ccc966:;
  /* 11ccc966 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccc968 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccc96a jne 0x11ccc939 */
  if (!C.zf) goto L_11ccc939;
L_11ccc96c:;
  /* 11ccc96c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc96f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ccc972 push edx */
  push32((uint32_t)(EDX));
  /* 11ccc973 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccc976 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc979 push eax */
  push32((uint32_t)(EAX));
  /* 11ccc97a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ccc97d push ecx */
  push32((uint32_t)(ECX));
  /* 11ccc97e push 0x11cf9b7c */
  push32((uint32_t)(0x11cf9b7cu));
  /* 11ccc983 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc985 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc987 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc989 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccc98b call 0x11cca080 */
  push32(0x11ccc990u); f_11cca080();
  /* 11ccc990 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc993 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc996 jne 0x11ccc999 */
  if (!C.zf) goto L_11ccc999;
  /* 11ccc998 int3  */
  x86_unimpl("int3 @ 0x11ccc998");
L_11ccc999:;
  /* 11ccc999 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccc99b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccc99d jne 0x11ccc96c */
  if (!C.zf) goto L_11ccc96c;
  /* 11ccc99f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ccc9a6:;
  /* 11ccc9a6 jmp 0x11ccc7b3 */
  goto L_11ccc7b3;
L_11ccc9ab:;
  /* 11ccc9ab push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccc9ad call 0x11ccb460 */
  push32(0x11ccc9b2u); f_11ccb460();
  /* 11ccc9b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccc9b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ccc9b8:;
  /* 11ccc9b8 pop edi */
  EDI = (pop32());
  /* 11ccc9b9 pop esi */
  ESI = (pop32());
  /* 11ccc9ba pop ebx */
  EBX = (pop32());
  /* 11ccc9bb mov esp, ebp */
  ESP = (EBP);
  /* 11ccc9bd pop ebp */
  EBP = (pop32());
  /* 11ccc9be ret  */
  ESPCHK(0x11ccc660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9d0 @ 0x11ccc9d0 (34 bytes, 13 insns) */
void f_11ccc9d0(void) {
  FTRACE(0x11ccc9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccc9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccc9d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccc9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccc9d4 mov eax, dword ptr [0x11cfcf08] */
  EAX = (r32((uint32_t)(0x11cfcf08)));
  /* 11ccc9d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccc9dc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccc9e0 je 0x11ccc9eb */
  if (C.zf) goto L_11ccc9eb;
  /* 11ccc9e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccc9e5 mov dword ptr [0x11cfcf08], ecx */
  w32((uint32_t)(0x11cfcf08), (ECX));
L_11ccc9eb:;
  /* 11ccc9eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccc9ee mov esp, ebp */
  ESP = (EBP);
  /* 11ccc9f0 pop ebp */
  EBP = (pop32());
  /* 11ccc9f1 ret  */
  ESPCHK(0x11ccc9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca00 @ 0x11ccca00 (103 bytes, 38 insns) */
void f_11ccca00(void) {
  FTRACE(0x11ccca00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccca00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccca01 mov ebp, esp */
  EBP = (ESP);
  /* 11ccca03 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccca04 mov eax, dword ptr [0x11cfcf08] */
  EAX = (r32((uint32_t)(0x11cfcf08)));
  /* 11ccca09 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccca0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccca0e jne 0x11ccca12 */
  if (!C.zf) goto L_11ccca12;
  /* 11ccca10 jmp 0x11ccca63 */
  goto L_11ccca63;
L_11ccca12:;
  /* 11ccca12 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccca14 call 0x11ccb3c0 */
  push32(0x11ccca19u); f_11ccb3c0();
  /* 11ccca19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccca1c mov ecx, dword ptr [0x11cff4b8] */
  ECX = (r32((uint32_t)(0x11cff4b8)));
  /* 11ccca22 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ccca25 jmp 0x11ccca2f */
  goto L_11ccca2f;
L_11ccca27:;
  /* 11ccca27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccca2a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ccca2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ccca2f:;
  /* 11ccca2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccca33 je 0x11ccca59 */
  if (C.zf) goto L_11ccca59;
  /* 11ccca35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccca38 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11ccca3b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ccca41 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccca44 jne 0x11ccca57 */
  if (!C.zf) goto L_11ccca57;
  /* 11ccca46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccca49 push eax */
  push32((uint32_t)(EAX));
  /* 11ccca4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccca4d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccca50 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccca51 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11ccca54u);
  /* 11ccca54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccca57:;
  /* 11ccca57 jmp 0x11ccca27 */
  goto L_11ccca27;
L_11ccca59:;
  /* 11ccca59 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccca5b call 0x11ccb460 */
  push32(0x11ccca60u); f_11ccb460();
  /* 11ccca60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccca63:;
  /* 11ccca63 mov esp, ebp */
  ESP = (EBP);
  /* 11ccca65 pop ebp */
  EBP = (pop32());
  /* 11ccca66 ret  */
  ESPCHK(0x11ccca00u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11ccca70 (75 bytes, 28 insns) */
void f_11ccca70(void) {
  FTRACE(0x11ccca70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccca70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccca71 mov ebp, esp */
  EBP = (ESP);
  /* 11ccca73 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccca74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccca78 je 0x11cccaad */
  if (C.zf) goto L_11cccaad;
  /* 11ccca7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccca7d push eax */
  push32((uint32_t)(EAX));
  /* 11ccca7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccca81 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccca82 call dword ptr [0x11d0140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0140c))), 0x11ccca88u);
  /* 11ccca88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccca8a jne 0x11cccaad */
  if (!C.zf) goto L_11cccaad;
  /* 11ccca8c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccca90 je 0x11cccaa4 */
  if (C.zf) goto L_11cccaa4;
  /* 11ccca92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccca95 push edx */
  push32((uint32_t)(EDX));
  /* 11ccca96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccca99 push eax */
  push32((uint32_t)(EAX));
  /* 11ccca9a call dword ptr [0x11d013f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f0))), 0x11cccaa0u);
  /* 11cccaa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cccaa2 jne 0x11cccaad */
  if (!C.zf) goto L_11cccaad;
L_11cccaa4:;
  /* 11cccaa4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cccaab jmp 0x11cccab4 */
  goto L_11cccab4;
L_11cccaad:;
  /* 11cccaad mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11cccab4:;
  /* 11cccab4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccab7 mov esp, ebp */
  ESP = (EBP);
  /* 11cccab9 pop ebp */
  EBP = (pop32());
  /* 11cccaba ret  */
  ESPCHK(0x11ccca70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cac0 @ 0x11cccac0 (134 bytes, 50 insns) */
void f_11cccac0(void) {
  FTRACE(0x11cccac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cccac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cccac1 mov ebp, esp */
  EBP = (ESP);
  /* 11cccac3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cccac4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccac8 jne 0x11cccace */
  if (!C.zf) goto L_11cccace;
  /* 11cccaca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cccacc jmp 0x11cccb42 */
  goto L_11cccb42;
L_11cccace:;
  /* 11cccace push 1 */
  push32((uint32_t)(0x1u));
  /* 11cccad0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11cccad2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccad5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cccad8 push eax */
  push32((uint32_t)(EAX));
  /* 11cccad9 call 0x11ccca70 */
  push32(0x11cccadeu); f_11ccca70();
  /* 11cccade add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cccae1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cccae3 jne 0x11cccae9 */
  if (!C.zf) goto L_11cccae9;
  /* 11cccae5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cccae7 jmp 0x11cccb42 */
  goto L_11cccb42;
L_11cccae9:;
  /* 11cccae9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccaec sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cccaef push ecx */
  push32((uint32_t)(ECX));
  /* 11cccaf0 call 0x11cd3250 */
  push32(0x11cccaf5u); f_11cd3250();
  /* 11cccaf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cccaf8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cccafb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccaff je 0x11cccb16 */
  if (C.zf) goto L_11cccb16;
  /* 11cccb01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccb04 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cccb07 push edx */
  push32((uint32_t)(EDX));
  /* 11cccb08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccb0b push eax */
  push32((uint32_t)(EAX));
  /* 11cccb0c call 0x11cd32b0 */
  push32(0x11cccb11u); f_11cd32b0();
  /* 11cccb11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cccb14 jmp 0x11cccb42 */
  goto L_11cccb42;
L_11cccb16:;
  /* 11cccb16 mov ecx, dword ptr [0x11cff4c8] */
  ECX = (r32((uint32_t)(0x11cff4c8)));
  /* 11cccb1c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11cccb22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cccb24 je 0x11cccb2d */
  if (C.zf) goto L_11cccb2d;
  /* 11cccb26 mov eax, 1 */
  EAX = (0x1u);
  /* 11cccb2b jmp 0x11cccb42 */
  goto L_11cccb42;
L_11cccb2d:;
  /* 11cccb2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccb30 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cccb33 push edx */
  push32((uint32_t)(EDX));
  /* 11cccb34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccb36 mov eax, dword ptr [0x11d00e08] */
  EAX = (r32((uint32_t)(0x11d00e08)));
  /* 11cccb3b push eax */
  push32((uint32_t)(EAX));
  /* 11cccb3c call dword ptr [0x11d01410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01410))), 0x11cccb42u);
L_11cccb42:;
  /* 11cccb42 mov esp, ebp */
  ESP = (EBP);
  /* 11cccb44 pop ebp */
  EBP = (pop32());
  /* 11cccb45 ret  */
  ESPCHK(0x11cccac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb50 @ 0x11cccb50 (227 bytes, 80 insns) */
void f_11cccb50(void) {
  FTRACE(0x11cccb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cccb50 push ebp */
  push32((uint32_t)(EBP));
  /* 11cccb51 mov ebp, esp */
  EBP = (ESP);
  /* 11cccb53 push ecx */
  push32((uint32_t)(ECX));
  /* 11cccb54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccb57 push eax */
  push32((uint32_t)(EAX));
  /* 11cccb58 call 0x11cccac0 */
  push32(0x11cccb5du); f_11cccac0();
  /* 11cccb5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cccb60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cccb62 jne 0x11cccb6b */
  if (!C.zf) goto L_11cccb6b;
  /* 11cccb64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cccb66 jmp 0x11cccc2f */
  goto L_11cccc2f;
L_11cccb6b:;
  /* 11cccb6b push 9 */
  push32((uint32_t)(0x9u));
  /* 11cccb6d call 0x11ccb3c0 */
  push32(0x11cccb72u); f_11ccb3c0();
  /* 11cccb72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cccb75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccb78 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cccb7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cccb7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccb81 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11cccb84 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cccb89 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccb8c je 0x11cccbb0 */
  if (C.zf) goto L_11cccbb0;
  /* 11cccb8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccb91 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccb95 je 0x11cccbb0 */
  if (C.zf) goto L_11cccbb0;
  /* 11cccb97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccb9a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11cccb9d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cccba2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccba5 je 0x11cccbb0 */
  if (C.zf) goto L_11cccbb0;
  /* 11cccba7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccbaa cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccbae jne 0x11cccc23 */
  if (!C.zf) goto L_11cccc23;
L_11cccbb0:;
  /* 11cccbb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cccbb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cccbb5 push edx */
  push32((uint32_t)(EDX));
  /* 11cccbb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccbb9 push eax */
  push32((uint32_t)(EAX));
  /* 11cccbba call 0x11ccca70 */
  push32(0x11cccbbfu); f_11ccca70();
  /* 11cccbbf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cccbc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cccbc4 je 0x11cccc23 */
  if (C.zf) goto L_11cccc23;
  /* 11cccbc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccbc9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11cccbcc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccbcf jne 0x11cccc23 */
  if (!C.zf) goto L_11cccc23;
  /* 11cccbd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccbd4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11cccbd7 cmp ecx, dword ptr [0x11cfcf0c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11cfcf0c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccbdd jg 0x11cccc23 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cccc23;
  /* 11cccbdf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccbe3 je 0x11cccbf0 */
  if (C.zf) goto L_11cccbf0;
  /* 11cccbe5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cccbe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccbeb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11cccbee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11cccbf0:;
  /* 11cccbf0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccbf4 je 0x11cccc01 */
  if (C.zf) goto L_11cccc01;
  /* 11cccbf6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cccbf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccbfc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cccbff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11cccc01:;
  /* 11cccc01 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccc05 je 0x11cccc12 */
  if (C.zf) goto L_11cccc12;
  /* 11cccc07 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cccc0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccc0d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11cccc10 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11cccc12:;
  /* 11cccc12 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cccc14 call 0x11ccb460 */
  push32(0x11cccc19u); f_11ccb460();
  /* 11cccc19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cccc1c mov eax, 1 */
  EAX = (0x1u);
  /* 11cccc21 jmp 0x11cccc2f */
  goto L_11cccc2f;
L_11cccc23:;
  /* 11cccc23 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cccc25 call 0x11ccb460 */
  push32(0x11cccc2au); f_11ccb460();
  /* 11cccc2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cccc2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cccc2f:;
  /* 11cccc2f mov esp, ebp */
  ESP = (EBP);
  /* 11cccc31 pop ebp */
  EBP = (pop32());
  /* 11cccc32 ret  */
  ESPCHK(0x11cccb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc40 @ 0x11cccc40 (28 bytes, 11 insns) */
void f_11cccc40(void) {
  FTRACE(0x11cccc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cccc40 push ebp */
  push32((uint32_t)(EBP));
  /* 11cccc41 mov ebp, esp */
  EBP = (ESP);
  /* 11cccc43 push ecx */
  push32((uint32_t)(ECX));
  /* 11cccc44 mov eax, dword ptr [0x11d00f7c] */
  EAX = (r32((uint32_t)(0x11d00f7c)));
  /* 11cccc49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cccc4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccc4f mov dword ptr [0x11d00f7c], ecx */
  w32((uint32_t)(0x11d00f7c), (ECX));
  /* 11cccc55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccc58 mov esp, ebp */
  ESP = (EBP);
  /* 11cccc5a pop ebp */
  EBP = (pop32());
  /* 11cccc5b ret  */
  ESPCHK(0x11cccc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc60 @ 0x11cccc60 (362 bytes, 116 insns) */
void f_11cccc60(void) {
  FTRACE(0x11cccc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cccc60 push ebp */
  push32((uint32_t)(EBP));
  /* 11cccc61 mov ebp, esp */
  EBP = (ESP);
  /* 11cccc63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cccc66 push ebx */
  push32((uint32_t)(EBX));
  /* 11cccc67 push esi */
  push32((uint32_t)(ESI));
  /* 11cccc68 push edi */
  push32((uint32_t)(EDI));
  /* 11cccc69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccc6d jne 0x11cccc9a */
  if (!C.zf) goto L_11cccc9a;
L_11cccc6f:;
  /* 11cccc6f push 0x11cf9cdc */
  push32((uint32_t)(0x11cf9cdcu));
  /* 11cccc74 push 0x11cf981c */
  push32((uint32_t)(0x11cf981cu));
  /* 11cccc79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccc7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccc7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccc7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccc81 call 0x11cca080 */
  push32(0x11cccc86u); f_11cca080();
  /* 11cccc86 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cccc89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccc8c jne 0x11cccc8f */
  if (!C.zf) goto L_11cccc8f;
  /* 11cccc8e int3  */
  x86_unimpl("int3 @ 0x11cccc8e");
L_11cccc8f:;
  /* 11cccc8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cccc91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cccc93 jne 0x11cccc6f */
  if (!C.zf) goto L_11cccc6f;
  /* 11cccc95 jmp 0x11cccdc3 */
  goto L_11cccdc3;
L_11cccc9a:;
  /* 11cccc9a push 9 */
  push32((uint32_t)(0x9u));
  /* 11cccc9c call 0x11ccb3c0 */
  push32(0x11cccca1u); f_11ccb3c0();
  /* 11cccca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cccca4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccca7 mov edx, dword ptr [0x11cff4b8] */
  EDX = (r32((uint32_t)(0x11cff4b8)));
  /* 11ccccad mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ccccaf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ccccb6 jmp 0x11ccccc1 */
  goto L_11ccccc1;
L_11ccccb8:;
  /* 11ccccb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccccbb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccccbe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ccccc1:;
  /* 11ccccc1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccccc5 jge 0x11cccce5 */
  if ((C.sf==C.of)) goto L_11cccce5;
  /* 11ccccc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccccca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccccd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11ccccd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccccd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccccdb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11cccce3 jmp 0x11ccccb8 */
  goto L_11ccccb8;
L_11cccce5:;
  /* 11cccce5 mov edx, dword ptr [0x11cff4b8] */
  EDX = (r32((uint32_t)(0x11cff4b8)));
  /* 11cccceb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ccccee jmp 0x11ccccf8 */
  goto L_11ccccf8;
L_11ccccf0:;
  /* 11ccccf0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccccf3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccccf5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ccccf8:;
  /* 11ccccf8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccccfc je 0x11cccda1 */
  if (C.zf) goto L_11cccda1;
  /* 11cccd02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cccd05 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11cccd08 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cccd0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cccd0f jl 0x11cccd77 */
  if ((C.sf!=C.of)) goto L_11cccd77;
  /* 11cccd11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cccd14 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11cccd17 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cccd1d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccd20 jge 0x11cccd77 */
  if ((C.sf==C.of)) goto L_11cccd77;
  /* 11cccd22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cccd25 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11cccd28 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cccd2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccd31 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11cccd35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cccd38 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cccd3b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11cccd3e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cccd44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccd47 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11cccd4b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cccd4e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11cccd51 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cccd56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccd59 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11cccd5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cccd60 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cccd63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cccd66 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11cccd69 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cccd6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccd71 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11cccd75 jmp 0x11cccd9c */
  goto L_11cccd9c;
L_11cccd77:;
  /* 11cccd77 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cccd7a push edx */
  push32((uint32_t)(EDX));
  /* 11cccd7b push 0x11cf9cb8 */
  push32((uint32_t)(0x11cf9cb8u));
  /* 11cccd80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccd82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccd84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccd86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccd88 call 0x11cca080 */
  push32(0x11cccd8du); f_11cca080();
  /* 11cccd8d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cccd90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccd93 jne 0x11cccd96 */
  if (!C.zf) goto L_11cccd96;
  /* 11cccd95 int3  */
  x86_unimpl("int3 @ 0x11cccd95");
L_11cccd96:;
  /* 11cccd96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cccd98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cccd9a jne 0x11cccd77 */
  if (!C.zf) goto L_11cccd77;
L_11cccd9c:;
  /* 11cccd9c jmp 0x11ccccf0 */
  goto L_11ccccf0;
L_11cccda1:;
  /* 11cccda1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccda4 mov edx, dword ptr [0x11cff4c0] */
  EDX = (r32((uint32_t)(0x11cff4c0)));
  /* 11cccdaa mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11cccdad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccdb0 mov ecx, dword ptr [0x11cff4b4] */
  ECX = (r32((uint32_t)(0x11cff4b4)));
  /* 11cccdb6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11cccdb9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cccdbb call 0x11ccb460 */
  push32(0x11cccdc0u); f_11ccb460();
  /* 11cccdc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cccdc3:;
  /* 11cccdc3 pop edi */
  EDI = (pop32());
  /* 11cccdc4 pop esi */
  ESI = (pop32());
  /* 11cccdc5 pop ebx */
  EBX = (pop32());
  /* 11cccdc6 mov esp, ebp */
  ESP = (EBP);
  /* 11cccdc8 pop ebp */
  EBP = (pop32());
  /* 11cccdc9 ret  */
  ESPCHK(0x11cccc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdd0 @ 0x11cccdd0 (291 bytes, 95 insns) */
void f_11cccdd0(void) {
  FTRACE(0x11cccdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cccdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cccdd1 mov ebp, esp */
  EBP = (ESP);
  /* 11cccdd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cccdd6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cccdd7 push esi */
  push32((uint32_t)(ESI));
  /* 11cccdd8 push edi */
  push32((uint32_t)(EDI));
  /* 11cccdd9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cccde0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccde4 je 0x11cccdf2 */
  if (C.zf) goto L_11cccdf2;
  /* 11cccde6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccdea je 0x11cccdf2 */
  if (C.zf) goto L_11cccdf2;
  /* 11cccdec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccdf0 jne 0x11ccce20 */
  if (!C.zf) goto L_11ccce20;
L_11cccdf2:;
  /* 11cccdf2 push 0x11cf9d04 */
  push32((uint32_t)(0x11cf9d04u));
  /* 11cccdf7 push 0x11cf981c */
  push32((uint32_t)(0x11cf981cu));
  /* 11cccdfc push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccdfe push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccce00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccce02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccce04 call 0x11cca080 */
  push32(0x11ccce09u); f_11cca080();
  /* 11ccce09 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccce0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccce0f jne 0x11ccce12 */
  if (!C.zf) goto L_11ccce12;
  /* 11ccce11 int3  */
  x86_unimpl("int3 @ 0x11ccce11");
L_11ccce12:;
  /* 11ccce12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccce14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccce16 jne 0x11cccdf2 */
  if (!C.zf) goto L_11cccdf2;
  /* 11ccce18 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccce1b jmp 0x11ccceec */
  goto L_11ccceec;
L_11ccce20:;
  /* 11ccce20 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ccce27 jmp 0x11ccce32 */
  goto L_11ccce32;
L_11ccce29:;
  /* 11ccce29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccce2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccce2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ccce32:;
  /* 11ccce32 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccce36 jge 0x11cccebc */
  if ((C.sf==C.of)) goto L_11cccebc;
  /* 11ccce3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccce3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccce42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccce45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccce48 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11ccce4c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccce50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccce53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccce56 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11ccce5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccce5d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccce60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccce63 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccce66 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11ccce6a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccce6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccce71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccce74 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11ccce78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccce7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccce7e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccce83 jne 0x11ccce92 */
  if (!C.zf) goto L_11ccce92;
  /* 11ccce85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccce88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccce8b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccce90 je 0x11ccceb7 */
  if (C.zf) goto L_11ccceb7;
L_11ccce92:;
  /* 11ccce92 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccce96 je 0x11ccceb7 */
  if (C.zf) goto L_11ccceb7;
  /* 11ccce98 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccce9c jne 0x11ccceb0 */
  if (!C.zf) goto L_11ccceb0;
  /* 11ccce9e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccea2 jne 0x11ccceb7 */
  if (!C.zf) goto L_11ccceb7;
  /* 11cccea4 mov eax, dword ptr [0x11cfcf08] */
  EAX = (r32((uint32_t)(0x11cfcf08)));
  /* 11cccea9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccceac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccceae je 0x11ccceb7 */
  if (C.zf) goto L_11ccceb7;
L_11ccceb0:;
  /* 11ccceb0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11ccceb7:;
  /* 11ccceb7 jmp 0x11ccce29 */
  goto L_11ccce29;
L_11cccebc:;
  /* 11cccebc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cccebf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cccec2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11cccec5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cccec8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccecb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11cccece mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccced1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccced4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11ccced7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccceda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccedd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11cccee0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccee3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11cccee9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11ccceec:;
  /* 11ccceec pop edi */
  EDI = (pop32());
  /* 11ccceed pop esi */
  ESI = (pop32());
  /* 11ccceee pop ebx */
  EBX = (pop32());
  /* 11ccceef mov esp, ebp */
  ESP = (EBP);
  /* 11cccef1 pop ebp */
  EBP = (pop32());
  /* 11cccef2 ret  */
  ESPCHK(0x11cccdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf00 @ 0x11cccf00 (697 bytes, 253 insns) */
void f_11cccf00(void) {
  FTRACE(0x11cccf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cccf00 push ebp */
  push32((uint32_t)(EBP));
  /* 11cccf01 mov ebp, esp */
  EBP = (ESP);
  /* 11cccf03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cccf06 push ebx */
  push32((uint32_t)(EBX));
  /* 11cccf07 push esi */
  push32((uint32_t)(ESI));
  /* 11cccf08 push edi */
  push32((uint32_t)(EDI));
  /* 11cccf09 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cccf10 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cccf12 call 0x11ccb3c0 */
  push32(0x11cccf17u); f_11ccb3c0();
  /* 11cccf17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cccf1a:;
  /* 11cccf1a push 0x11cf9dfc */
  push32((uint32_t)(0x11cf9dfcu));
  /* 11cccf1f push 0x11cf981c */
  push32((uint32_t)(0x11cf981cu));
  /* 11cccf24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccf26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccf28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccf2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccf2c call 0x11cca080 */
  push32(0x11cccf31u); f_11cca080();
  /* 11cccf31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cccf34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccf37 jne 0x11cccf3a */
  if (!C.zf) goto L_11cccf3a;
  /* 11cccf39 int3  */
  x86_unimpl("int3 @ 0x11cccf39");
L_11cccf3a:;
  /* 11cccf3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cccf3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cccf3e jne 0x11cccf1a */
  if (!C.zf) goto L_11cccf1a;
  /* 11cccf40 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccf44 je 0x11cccf4e */
  if (C.zf) goto L_11cccf4e;
  /* 11cccf46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cccf49 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cccf4b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11cccf4e:;
  /* 11cccf4e mov eax, dword ptr [0x11cff4b8] */
  EAX = (r32((uint32_t)(0x11cff4b8)));
  /* 11cccf53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cccf56 jmp 0x11cccf60 */
  goto L_11cccf60;
L_11cccf58:;
  /* 11cccf58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccf5b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cccf5d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cccf60:;
  /* 11cccf60 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccf64 je 0x11ccd182 */
  if (C.zf) goto L_11ccd182;
  /* 11cccf6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccf6d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccf70 je 0x11ccd182 */
  if (C.zf) goto L_11ccd182;
  /* 11cccf76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccf79 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11cccf7c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cccf82 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccf85 je 0x11cccfb4 */
  if (C.zf) goto L_11cccfb4;
  /* 11cccf87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccf8a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11cccf8d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cccf93 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cccf95 je 0x11cccfb4 */
  if (C.zf) goto L_11cccfb4;
  /* 11cccf97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccf9a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11cccf9d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cccfa2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccfa5 jne 0x11cccfb9 */
  if (!C.zf) goto L_11cccfb9;
  /* 11cccfa7 mov ecx, dword ptr [0x11cfcf08] */
  ECX = (r32((uint32_t)(0x11cfcf08)));
  /* 11cccfad and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11cccfb0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cccfb2 jne 0x11cccfb9 */
  if (!C.zf) goto L_11cccfb9;
L_11cccfb4:;
  /* 11cccfb4 jmp 0x11ccd17d */
  goto L_11ccd17d;
L_11cccfb9:;
  /* 11cccfb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccfbc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccfc0 je 0x11ccd032 */
  if (C.zf) goto L_11ccd032;
  /* 11cccfc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccfc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cccfc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccfc9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cccfcc push ecx */
  push32((uint32_t)(ECX));
  /* 11cccfcd call 0x11ccca70 */
  push32(0x11cccfd2u); f_11ccca70();
  /* 11cccfd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cccfd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cccfd7 jne 0x11ccd003 */
  if (!C.zf) goto L_11ccd003;
L_11cccfd9:;
  /* 11cccfd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cccfdc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11cccfdf push eax */
  push32((uint32_t)(EAX));
  /* 11cccfe0 push 0x11cf9de8 */
  push32((uint32_t)(0x11cf9de8u));
  /* 11cccfe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccfe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccfe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccfeb push 0 */
  push32((uint32_t)(0x0u));
  /* 11cccfed call 0x11cca080 */
  push32(0x11cccff2u); f_11cca080();
  /* 11cccff2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cccff5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cccff8 jne 0x11cccffb */
  if (!C.zf) goto L_11cccffb;
  /* 11cccffa int3  */
  x86_unimpl("int3 @ 0x11cccffa");
L_11cccffb:;
  /* 11cccffb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cccffd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cccfff jne 0x11cccfd9 */
  if (!C.zf) goto L_11cccfd9;
  /* 11ccd001 jmp 0x11ccd032 */
  goto L_11ccd032;
L_11ccd003:;
  /* 11ccd003 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd006 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ccd009 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd00a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd00d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ccd010 push edx */
  push32((uint32_t)(EDX));
  /* 11ccd011 push 0x11cf9ddc */
  push32((uint32_t)(0x11cf9ddcu));
  /* 11ccd016 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd018 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd01a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd01c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd01e call 0x11cca080 */
  push32(0x11ccd023u); f_11cca080();
  /* 11ccd023 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd026 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd029 jne 0x11ccd02c */
  if (!C.zf) goto L_11ccd02c;
  /* 11ccd02b int3  */
  x86_unimpl("int3 @ 0x11ccd02b");
L_11ccd02c:;
  /* 11ccd02c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccd02e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccd030 jne 0x11ccd003 */
  if (!C.zf) goto L_11ccd003;
L_11ccd032:;
  /* 11ccd032 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd035 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ccd038 push edx */
  push32((uint32_t)(EDX));
  /* 11ccd039 push 0x11cf9dd4 */
  push32((uint32_t)(0x11cf9dd4u));
  /* 11ccd03e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd040 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd042 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd044 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd046 call 0x11cca080 */
  push32(0x11ccd04bu); f_11cca080();
  /* 11ccd04b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd04e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd051 jne 0x11ccd054 */
  if (!C.zf) goto L_11ccd054;
  /* 11ccd053 int3  */
  x86_unimpl("int3 @ 0x11ccd053");
L_11ccd054:;
  /* 11ccd054 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccd056 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccd058 jne 0x11ccd032 */
  if (!C.zf) goto L_11ccd032;
  /* 11ccd05a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd05d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11ccd060 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ccd066 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd069 jne 0x11ccd0dc */
  if (!C.zf) goto L_11ccd0dc;
L_11ccd06b:;
  /* 11ccd06b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd06e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ccd071 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd072 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd075 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ccd078 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ccd07b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ccd080 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd081 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd084 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd087 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd088 push 0x11cf9da0 */
  push32((uint32_t)(0x11cf9da0u));
  /* 11ccd08d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd08f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd091 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd093 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd095 call 0x11cca080 */
  push32(0x11ccd09au); f_11cca080();
  /* 11ccd09a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd09d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd0a0 jne 0x11ccd0a3 */
  if (!C.zf) goto L_11ccd0a3;
  /* 11ccd0a2 int3  */
  x86_unimpl("int3 @ 0x11ccd0a2");
L_11ccd0a3:;
  /* 11ccd0a3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccd0a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccd0a7 jne 0x11ccd06b */
  if (!C.zf) goto L_11ccd06b;
  /* 11ccd0a9 cmp dword ptr [0x11d00f7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d00f7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd0b0 je 0x11ccd0cb */
  if (C.zf) goto L_11ccd0cb;
  /* 11ccd0b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd0b5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ccd0b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd0b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd0bc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd0bf push edx */
  push32((uint32_t)(EDX));
  /* 11ccd0c0 call dword ptr [0x11d00f7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d00f7c))), 0x11ccd0c6u);
  /* 11ccd0c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd0c9 jmp 0x11ccd0d7 */
  goto L_11ccd0d7;
L_11ccd0cb:;
  /* 11ccd0cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd0ce push eax */
  push32((uint32_t)(EAX));
  /* 11ccd0cf call 0x11ccd1c0 */
  push32(0x11ccd0d4u); f_11ccd1c0();
  /* 11ccd0d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccd0d7:;
  /* 11ccd0d7 jmp 0x11ccd17d */
  goto L_11ccd17d;
L_11ccd0dc:;
  /* 11ccd0dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd0df cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd0e3 jne 0x11ccd122 */
  if (!C.zf) goto L_11ccd122;
L_11ccd0e5:;
  /* 11ccd0e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd0e8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ccd0eb push eax */
  push32((uint32_t)(EAX));
  /* 11ccd0ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd0ef add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd0f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd0f3 push 0x11cf9d78 */
  push32((uint32_t)(0x11cf9d78u));
  /* 11ccd0f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd0fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd0fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd0fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd100 call 0x11cca080 */
  push32(0x11ccd105u); f_11cca080();
  /* 11ccd105 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd108 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd10b jne 0x11ccd10e */
  if (!C.zf) goto L_11ccd10e;
  /* 11ccd10d int3  */
  x86_unimpl("int3 @ 0x11ccd10d");
L_11ccd10e:;
  /* 11ccd10e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccd110 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccd112 jne 0x11ccd0e5 */
  if (!C.zf) goto L_11ccd0e5;
  /* 11ccd114 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd117 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd118 call 0x11ccd1c0 */
  push32(0x11ccd11du); f_11ccd1c0();
  /* 11ccd11d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd120 jmp 0x11ccd17d */
  goto L_11ccd17d;
L_11ccd122:;
  /* 11ccd122 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd125 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11ccd128 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ccd12e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd131 jne 0x11ccd17d */
  if (!C.zf) goto L_11ccd17d;
L_11ccd133:;
  /* 11ccd133 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd136 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ccd139 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd13a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd13d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ccd140 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ccd143 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ccd148 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd149 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd14c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd14f push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd150 push 0x11cf9d44 */
  push32((uint32_t)(0x11cf9d44u));
  /* 11ccd155 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd157 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd159 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd15b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd15d call 0x11cca080 */
  push32(0x11ccd162u); f_11cca080();
  /* 11ccd162 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd165 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd168 jne 0x11ccd16b */
  if (!C.zf) goto L_11ccd16b;
  /* 11ccd16a int3  */
  x86_unimpl("int3 @ 0x11ccd16a");
L_11ccd16b:;
  /* 11ccd16b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccd16d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccd16f jne 0x11ccd133 */
  if (!C.zf) goto L_11ccd133;
  /* 11ccd171 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd174 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd175 call 0x11ccd1c0 */
  push32(0x11ccd17au); f_11ccd1c0();
  /* 11ccd17a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccd17d:;
  /* 11ccd17d jmp 0x11cccf58 */
  goto L_11cccf58;
L_11ccd182:;
  /* 11ccd182 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccd184 call 0x11ccb460 */
  push32(0x11ccd189u); f_11ccb460();
  /* 11ccd189 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccd18c:;
  /* 11ccd18c push 0x11cf9d2c */
  push32((uint32_t)(0x11cf9d2cu));
  /* 11ccd191 push 0x11cf981c */
  push32((uint32_t)(0x11cf981cu));
  /* 11ccd196 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd198 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd19a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd19c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd19e call 0x11cca080 */
  push32(0x11ccd1a3u); f_11cca080();
  /* 11ccd1a3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd1a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd1a9 jne 0x11ccd1ac */
  if (!C.zf) goto L_11ccd1ac;
  /* 11ccd1ab int3  */
  x86_unimpl("int3 @ 0x11ccd1ab");
L_11ccd1ac:;
  /* 11ccd1ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccd1ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccd1b0 jne 0x11ccd18c */
  if (!C.zf) goto L_11ccd18c;
  /* 11ccd1b2 pop edi */
  EDI = (pop32());
  /* 11ccd1b3 pop esi */
  ESI = (pop32());
  /* 11ccd1b4 pop ebx */
  EBX = (pop32());
  /* 11ccd1b5 mov esp, ebp */
  ESP = (EBP);
  /* 11ccd1b7 pop ebp */
  EBP = (pop32());
  /* 11ccd1b8 ret  */
  ESPCHK(0x11cccf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1c0 @ 0x11ccd1c0 (276 bytes, 89 insns) */
void f_11ccd1c0(void) {
  FTRACE(0x11ccd1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccd1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccd1c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccd1c3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccd1c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ccd1c7 push esi */
  push32((uint32_t)(ESI));
  /* 11ccd1c8 push edi */
  push32((uint32_t)(EDI));
  /* 11ccd1c9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11ccd1d0 jmp 0x11ccd1db */
  goto L_11ccd1db;
L_11ccd1d2:;
  /* 11ccd1d2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11ccd1d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd1d8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_11ccd1db:;
  /* 11ccd1db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd1de cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd1e2 jge 0x11ccd1ef */
  if ((C.sf==C.of)) goto L_11ccd1ef;
  /* 11ccd1e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd1e7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ccd1ea mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11ccd1ed jmp 0x11ccd1f6 */
  goto L_11ccd1f6;
L_11ccd1ef:;
  /* 11ccd1ef mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11ccd1f6:;
  /* 11ccd1f6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11ccd1f9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd1fc jge 0x11ccd29c */
  if ((C.sf==C.of)) goto L_11ccd29c;
  /* 11ccd202 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd205 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd208 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 11ccd20b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 11ccd20e cmp dword ptr [0x11cfd000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd215 jle 0x11ccd233 */
  if ((C.zf||C.sf!=C.of)) goto L_11ccd233;
  /* 11ccd217 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 11ccd21c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccd21f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccd225 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd226 call 0x11cd1b90 */
  push32(0x11ccd22bu); f_11cd1b90();
  /* 11ccd22b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd22e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11ccd231 jmp 0x11ccd250 */
  goto L_11ccd250;
L_11ccd233:;
  /* 11ccd233 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccd236 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ccd23c mov eax, dword ptr [0x11cfd00c] */
  EAX = (r32((uint32_t)(0x11cfd00c)));
  /* 11ccd241 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccd243 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11ccd247 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 11ccd24d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11ccd250:;
  /* 11ccd250 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd254 je 0x11ccd264 */
  if (C.zf) goto L_11ccd264;
  /* 11ccd256 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccd259 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ccd25f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11ccd262 jmp 0x11ccd26b */
  goto L_11ccd26b;
L_11ccd264:;
  /* 11ccd264 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_11ccd26b:;
  /* 11ccd26b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11ccd26e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11ccd271 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11ccd275 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccd278 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ccd27e push edx */
  push32((uint32_t)(EDX));
  /* 11ccd27f push 0x11cf9e20 */
  push32((uint32_t)(0x11cf9e20u));
  /* 11ccd284 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11ccd287 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ccd28a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 11ccd28e push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd28f call 0x11cc9bf0 */
  push32(0x11ccd294u); f_11cc9bf0();
  /* 11ccd294 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd297 jmp 0x11ccd1d2 */
  goto L_11ccd1d2;
L_11ccd29c:;
  /* 11ccd29c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11ccd29f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11ccd2a4:;
  /* 11ccd2a4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11ccd2a7 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd2a8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11ccd2ab push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd2ac push 0x11cf9e10 */
  push32((uint32_t)(0x11cf9e10u));
  /* 11ccd2b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd2b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd2b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd2b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd2b9 call 0x11cca080 */
  push32(0x11ccd2beu); f_11cca080();
  /* 11ccd2be add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd2c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd2c4 jne 0x11ccd2c7 */
  if (!C.zf) goto L_11ccd2c7;
  /* 11ccd2c6 int3  */
  x86_unimpl("int3 @ 0x11ccd2c6");
L_11ccd2c7:;
  /* 11ccd2c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccd2c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccd2cb jne 0x11ccd2a4 */
  if (!C.zf) goto L_11ccd2a4;
  /* 11ccd2cd pop edi */
  EDI = (pop32());
  /* 11ccd2ce pop esi */
  ESI = (pop32());
  /* 11ccd2cf pop ebx */
  EBX = (pop32());
  /* 11ccd2d0 mov esp, ebp */
  ESP = (EBP);
  /* 11ccd2d2 pop ebp */
  EBP = (pop32());
  /* 11ccd2d3 ret  */
  ESPCHK(0x11ccd1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2e0 @ 0x11ccd2e0 (116 bytes, 46 insns) */
void f_11ccd2e0(void) {
  FTRACE(0x11ccd2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccd2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccd2e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccd2e3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccd2e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ccd2e7 push esi */
  push32((uint32_t)(ESI));
  /* 11ccd2e8 push edi */
  push32((uint32_t)(EDI));
  /* 11ccd2e9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11ccd2ec push eax */
  push32((uint32_t)(EAX));
  /* 11ccd2ed call 0x11cccc60 */
  push32(0x11ccd2f2u); f_11cccc60();
  /* 11ccd2f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd2f5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd2f9 jne 0x11ccd314 */
  if (!C.zf) goto L_11ccd314;
  /* 11ccd2fb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd2ff jne 0x11ccd314 */
  if (!C.zf) goto L_11ccd314;
  /* 11ccd301 mov ecx, dword ptr [0x11cfcf08] */
  ECX = (r32((uint32_t)(0x11cfcf08)));
  /* 11ccd307 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11ccd30a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccd30c je 0x11ccd34b */
  if (C.zf) goto L_11ccd34b;
  /* 11ccd30e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd312 je 0x11ccd34b */
  if (C.zf) goto L_11ccd34b;
L_11ccd314:;
  /* 11ccd314 push 0x11cf9e28 */
  push32((uint32_t)(0x11cf9e28u));
  /* 11ccd319 push 0x11cf981c */
  push32((uint32_t)(0x11cf981cu));
  /* 11ccd31e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd320 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd322 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd324 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd326 call 0x11cca080 */
  push32(0x11ccd32bu); f_11cca080();
  /* 11ccd32b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd32e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd331 jne 0x11ccd334 */
  if (!C.zf) goto L_11ccd334;
  /* 11ccd333 int3  */
  x86_unimpl("int3 @ 0x11ccd333");
L_11ccd334:;
  /* 11ccd334 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccd336 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccd338 jne 0x11ccd314 */
  if (!C.zf) goto L_11ccd314;
  /* 11ccd33a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd33c call 0x11cccf00 */
  push32(0x11ccd341u); f_11cccf00();
  /* 11ccd341 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd344 mov eax, 1 */
  EAX = (0x1u);
  /* 11ccd349 jmp 0x11ccd34d */
  goto L_11ccd34d;
L_11ccd34b:;
  /* 11ccd34b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ccd34d:;
  /* 11ccd34d pop edi */
  EDI = (pop32());
  /* 11ccd34e pop esi */
  ESI = (pop32());
  /* 11ccd34f pop ebx */
  EBX = (pop32());
  /* 11ccd350 mov esp, ebp */
  ESP = (EBP);
  /* 11ccd352 pop ebp */
  EBP = (pop32());
  /* 11ccd353 ret  */
  ESPCHK(0x11ccd2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d360 @ 0x11ccd360 (197 bytes, 79 insns) */
void f_11ccd360(void) {
  FTRACE(0x11ccd360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccd360 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccd361 mov ebp, esp */
  EBP = (ESP);
  /* 11ccd363 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd364 push ebx */
  push32((uint32_t)(EBX));
  /* 11ccd365 push esi */
  push32((uint32_t)(ESI));
  /* 11ccd366 push edi */
  push32((uint32_t)(EDI));
  /* 11ccd367 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd36b jne 0x11ccd372 */
  if (!C.zf) goto L_11ccd372;
  /* 11ccd36d jmp 0x11ccd41e */
  goto L_11ccd41e;
L_11ccd372:;
  /* 11ccd372 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ccd379 jmp 0x11ccd384 */
  goto L_11ccd384;
L_11ccd37b:;
  /* 11ccd37b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd37e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd381 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ccd384:;
  /* 11ccd384 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd388 jge 0x11ccd3ce */
  if ((C.sf==C.of)) goto L_11ccd3ce;
L_11ccd38a:;
  /* 11ccd38a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd38d mov edx, dword ptr [ecx*4 + 0x11cfcf18] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11cfcf18)));
  /* 11ccd394 push edx */
  push32((uint32_t)(EDX));
  /* 11ccd395 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd398 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd39b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 11ccd39f push edx */
  push32((uint32_t)(EDX));
  /* 11ccd3a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd3a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd3a6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11ccd3aa push edx */
  push32((uint32_t)(EDX));
  /* 11ccd3ab push 0x11cf9e84 */
  push32((uint32_t)(0x11cf9e84u));
  /* 11ccd3b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd3b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd3b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd3b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd3b8 call 0x11cca080 */
  push32(0x11ccd3bdu); f_11cca080();
  /* 11ccd3bd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd3c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd3c3 jne 0x11ccd3c6 */
  if (!C.zf) goto L_11ccd3c6;
  /* 11ccd3c5 int3  */
  x86_unimpl("int3 @ 0x11ccd3c5");
L_11ccd3c6:;
  /* 11ccd3c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccd3c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccd3ca jne 0x11ccd38a */
  if (!C.zf) goto L_11ccd38a;
  /* 11ccd3cc jmp 0x11ccd37b */
  goto L_11ccd37b;
L_11ccd3ce:;
  /* 11ccd3ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd3d1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11ccd3d4 push edx */
  push32((uint32_t)(EDX));
  /* 11ccd3d5 push 0x11cf9e60 */
  push32((uint32_t)(0x11cf9e60u));
  /* 11ccd3da push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd3dc push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd3de push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd3e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd3e2 call 0x11cca080 */
  push32(0x11ccd3e7u); f_11cca080();
  /* 11ccd3e7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd3ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd3ed jne 0x11ccd3f0 */
  if (!C.zf) goto L_11ccd3f0;
  /* 11ccd3ef int3  */
  x86_unimpl("int3 @ 0x11ccd3ef");
L_11ccd3f0:;
  /* 11ccd3f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccd3f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccd3f4 jne 0x11ccd3ce */
  if (!C.zf) goto L_11ccd3ce;
L_11ccd3f6:;
  /* 11ccd3f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd3f9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11ccd3fc push edx */
  push32((uint32_t)(EDX));
  /* 11ccd3fd push 0x11cf9e40 */
  push32((uint32_t)(0x11cf9e40u));
  /* 11ccd402 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd404 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd406 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd408 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd40a call 0x11cca080 */
  push32(0x11ccd40fu); f_11cca080();
  /* 11ccd40f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd412 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd415 jne 0x11ccd418 */
  if (!C.zf) goto L_11ccd418;
  /* 11ccd417 int3  */
  x86_unimpl("int3 @ 0x11ccd417");
L_11ccd418:;
  /* 11ccd418 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccd41a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccd41c jne 0x11ccd3f6 */
  if (!C.zf) goto L_11ccd3f6;
L_11ccd41e:;
  /* 11ccd41e pop edi */
  EDI = (pop32());
  /* 11ccd41f pop esi */
  ESI = (pop32());
  /* 11ccd420 pop ebx */
  EBX = (pop32());
  /* 11ccd421 mov esp, ebp */
  ESP = (EBP);
  /* 11ccd423 pop ebp */
  EBP = (pop32());
  /* 11ccd424 ret  */
  ESPCHK(0x11ccd360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d430 @ 0x11ccd430 (239 bytes, 88 insns) */
void f_11ccd430(void) {
  FTRACE(0x11ccd430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccd430 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccd431 mov ebp, esp */
  EBP = (ESP);
  /* 11ccd433 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccd436 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccd439 cmp dword ptr [eax], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd43f jne 0x11ccd44a */
  if (!C.zf) goto L_11ccd44a;
  /* 11ccd441 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ccd448 jmp 0x11ccd452 */
  goto L_11ccd452;
L_11ccd44a:;
  /* 11ccd44a call 0x11cce440 */
  push32(0x11ccd44fu); f_11cce440();
  /* 11ccd44f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ccd452:;
  /* 11ccd452 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd455 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ccd458 and edx, 0x66 */
  { uint32_t _r=(EDX)&(0x66u); EDX = (_r); fl_logic(_r,32); }
  /* 11ccd45b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccd45d je 0x11ccd48e */
  if (C.zf) goto L_11ccd48e;
  /* 11ccd45f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccd462 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd466 je 0x11ccd484 */
  if (C.zf) goto L_11ccd484;
  /* 11ccd468 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd46c jne 0x11ccd484 */
  if (!C.zf) goto L_11ccd484;
  /* 11ccd46e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ccd470 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccd473 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd474 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccd477 push edx */
  push32((uint32_t)(EDX));
  /* 11ccd478 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccd47b push eax */
  push32((uint32_t)(EAX));
  /* 11ccd47c call 0x11ccd9a0 */
  push32(0x11ccd481u); f_11ccd9a0();
  /* 11ccd481 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccd484:;
  /* 11ccd484 mov eax, 1 */
  EAX = (0x1u);
  /* 11ccd489 jmp 0x11ccd51b */
  goto L_11ccd51b;
L_11ccd48e:;
  /* 11ccd48e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccd491 cmp dword ptr [ecx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd495 je 0x11ccd516 */
  if (C.zf) goto L_11ccd516;
  /* 11ccd497 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd49a cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd4a0 jne 0x11ccd4ee */
  if (!C.zf) goto L_11ccd4ee;
  /* 11ccd4a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd4a5 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd4ac jbe 0x11ccd4ee */
  if ((C.cf||C.zf)) goto L_11ccd4ee;
  /* 11ccd4ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd4b1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ccd4b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ccd4b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccd4ba cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd4be je 0x11ccd4ee */
  if (C.zf) goto L_11ccd4ee;
  /* 11ccd4c0 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ccd4c3 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccd4c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd4ca mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ccd4cd push edx */
  push32((uint32_t)(EDX));
  /* 11ccd4ce mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ccd4d1 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd4d2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccd4d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd4d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccd4d9 push edx */
  push32((uint32_t)(EDX));
  /* 11ccd4da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccd4dd push eax */
  push32((uint32_t)(EAX));
  /* 11ccd4de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccd4e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd4e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd4e5 push edx */
  push32((uint32_t)(EDX));
  /* 11ccd4e6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11ccd4e9u);
  /* 11ccd4e9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd4ec jmp 0x11ccd51b */
  goto L_11ccd51b;
L_11ccd4ee:;
  /* 11ccd4ee mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ccd4f1 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd4f2 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ccd4f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd4f6 mov dl, byte ptr [ebp + 0x24] */
  DL = (r8((uint32_t)(EBP + 0x24)));
  /* 11ccd4f9 push edx */
  push32((uint32_t)(EDX));
  /* 11ccd4fa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccd4fd push eax */
  push32((uint32_t)(EAX));
  /* 11ccd4fe mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccd501 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd502 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccd505 push edx */
  push32((uint32_t)(EDX));
  /* 11ccd506 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccd509 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd50a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd50d push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd50e call 0x11ccd520 */
  push32(0x11ccd513u); f_11ccd520();
  /* 11ccd513 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccd516:;
  /* 11ccd516 mov eax, 1 */
  EAX = (0x1u);
L_11ccd51b:;
  /* 11ccd51b mov esp, ebp */
  ESP = (EBP);
  /* 11ccd51d pop ebp */
  EBP = (pop32());
  /* 11ccd51e ret  */
  ESPCHK(0x11ccd430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d520 @ 0x11ccd520 (672 bytes, 222 insns) */
void f_11ccd520(void) {
  FTRACE(0x11ccd520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccd520 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccd521 mov ebp, esp */
  EBP = (ESP);
  /* 11ccd523 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccd526 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ccd52a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccd52d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ccd530 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ccd533 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd537 jl 0x11ccd54d */
  if ((C.sf!=C.of)) goto L_11ccd54d;
  /* 11ccd539 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccd53c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd53f cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd542 jge 0x11ccd54d */
  if ((C.sf==C.of)) goto L_11ccd54d;
  /* 11ccd544 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11ccd54b jmp 0x11ccd555 */
  goto L_11ccd555;
L_11ccd54d:;
  /* 11ccd54d call 0x11cce440 */
  push32(0x11ccd552u); f_11cce440();
  /* 11ccd552 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
L_11ccd555:;
  /* 11ccd555 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd558 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd55e jne 0x11ccd615 */
  if (!C.zf) goto L_11ccd615;
  /* 11ccd564 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd567 cmp dword ptr [edx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd56b jne 0x11ccd615 */
  if (!C.zf) goto L_11ccd615;
  /* 11ccd571 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd574 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd57b jne 0x11ccd615 */
  if (!C.zf) goto L_11ccd615;
  /* 11ccd581 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd584 cmp dword ptr [ecx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd588 jne 0x11ccd615 */
  if (!C.zf) goto L_11ccd615;
  /* 11ccd58e call 0x11cce1c0 */
  push32(0x11ccd593u); f_11cce1c0();
  /* 11ccd593 cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd597 jne 0x11ccd59e */
  if (!C.zf) goto L_11ccd59e;
  /* 11ccd599 jmp 0x11ccd7bc */
  goto L_11ccd7bc;
L_11ccd59e:;
  /* 11ccd59e call 0x11cce1c0 */
  push32(0x11ccd5a3u); f_11cce1c0();
  /* 11ccd5a3 mov edx, dword ptr [eax + 0x6c] */
  EDX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11ccd5a6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ccd5a9 call 0x11cce1c0 */
  push32(0x11ccd5aeu); f_11cce1c0();
  /* 11ccd5ae mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 11ccd5b1 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11ccd5b4 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
  /* 11ccd5b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccd5ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd5bd push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd5be call 0x11cd4f00 */
  push32(0x11ccd5c3u); f_11cd4f00();
  /* 11ccd5c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd5c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccd5c8 je 0x11ccd5d3 */
  if (C.zf) goto L_11ccd5d3;
  /* 11ccd5ca mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11ccd5d1 jmp 0x11ccd5db */
  goto L_11ccd5db;
L_11ccd5d3:;
  /* 11ccd5d3 call 0x11cce440 */
  push32(0x11ccd5d8u); f_11cce440();
  /* 11ccd5d8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11ccd5db:;
  /* 11ccd5db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd5de cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd5e4 jne 0x11ccd60e */
  if (!C.zf) goto L_11ccd60e;
  /* 11ccd5e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd5e9 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd5ed jne 0x11ccd60e */
  if (!C.zf) goto L_11ccd60e;
  /* 11ccd5ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd5f2 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd5f9 jne 0x11ccd60e */
  if (!C.zf) goto L_11ccd60e;
  /* 11ccd5fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd5fe cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd602 jne 0x11ccd60e */
  if (!C.zf) goto L_11ccd60e;
  /* 11ccd604 call 0x11cce440 */
  push32(0x11ccd609u); f_11cce440();
  /* 11ccd609 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11ccd60c jmp 0x11ccd615 */
  goto L_11ccd615;
L_11ccd60e:;
  /* 11ccd60e mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11ccd615:;
  /* 11ccd615 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd618 cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd61e jne 0x11ccd77c */
  if (!C.zf) goto L_11ccd77c;
  /* 11ccd624 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd627 cmp dword ptr [ecx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd62b jne 0x11ccd77c */
  if (!C.zf) goto L_11ccd77c;
  /* 11ccd631 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd634 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd63b jne 0x11ccd77c */
  if (!C.zf) goto L_11ccd77c;
  /* 11ccd641 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11ccd644 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd645 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11ccd648 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd649 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd64c push edx */
  push32((uint32_t)(EDX));
  /* 11ccd64d mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ccd650 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd651 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccd654 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd655 call 0x11cc9940 */
  push32(0x11ccd65au); f_11cc9940();
  /* 11ccd65a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd65d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ccd660 jmp 0x11ccd674 */
  goto L_11ccd674;
L_11ccd662:;
  /* 11ccd662 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ccd665 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd668 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ccd66b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ccd66e add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd671 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11ccd674:;
  /* 11ccd674 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ccd677 cmp ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd67a jae 0x11ccd75f */
  if (!C.cf) goto L_11ccd75f;
  /* 11ccd680 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ccd683 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ccd685 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd688 jg 0x11ccd695 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ccd695;
  /* 11ccd68a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ccd68d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd690 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd693 jle 0x11ccd697 */
  if ((C.zf||C.sf!=C.of)) goto L_11ccd697;
L_11ccd695:;
  /* 11ccd695 jmp 0x11ccd662 */
  goto L_11ccd662;
L_11ccd697:;
  /* 11ccd697 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ccd69a mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ccd69d mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11ccd6a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ccd6a3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ccd6a6 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ccd6a9 jmp 0x11ccd6bd */
  goto L_11ccd6bd;
L_11ccd6ab:;
  /* 11ccd6ab mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ccd6ae sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccd6b1 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ccd6b4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccd6b7 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd6ba mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11ccd6bd:;
  /* 11ccd6bd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd6c1 jle 0x11ccd75a */
  if ((C.zf||C.sf!=C.of)) goto L_11ccd75a;
  /* 11ccd6c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd6ca mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ccd6cd mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ccd6d0 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd6d3 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ccd6d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd6d9 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ccd6dc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ccd6df mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ccd6e1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ccd6e4 jmp 0x11ccd6f8 */
  goto L_11ccd6f8;
L_11ccd6e6:;
  /* 11ccd6e6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ccd6e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccd6ec mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ccd6ef mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ccd6f2 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd6f5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11ccd6f8:;
  /* 11ccd6f8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd6fc jle 0x11ccd755 */
  if ((C.zf||C.sf!=C.of)) goto L_11ccd755;
  /* 11ccd6fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd701 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ccd704 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd705 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ccd708 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ccd70a push eax */
  push32((uint32_t)(EAX));
  /* 11ccd70b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccd70e push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd70f call 0x11ccd8e0 */
  push32(0x11ccd714u); f_11ccd8e0();
  /* 11ccd714 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd717 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccd719 jne 0x11ccd71d */
  if (!C.zf) goto L_11ccd71d;
  /* 11ccd71b jmp 0x11ccd6e6 */
  goto L_11ccd6e6;
L_11ccd71d:;
  /* 11ccd71d mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ccd720 push edx */
  push32((uint32_t)(EDX));
  /* 11ccd721 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ccd724 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd725 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ccd728 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd729 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ccd72c push edx */
  push32((uint32_t)(EDX));
  /* 11ccd72d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ccd730 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccd732 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd733 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccd736 push edx */
  push32((uint32_t)(EDX));
  /* 11ccd737 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccd73a push eax */
  push32((uint32_t)(EAX));
  /* 11ccd73b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccd73e push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd73f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccd742 push edx */
  push32((uint32_t)(EDX));
  /* 11ccd743 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccd746 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd747 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd74a push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd74b call 0x11ccdad0 */
  push32(0x11ccd750u); f_11ccdad0();
  /* 11ccd750 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd753 jmp 0x11ccd7ba */
  goto L_11ccd7ba;
L_11ccd755:;
  /* 11ccd755 jmp 0x11ccd6ab */
  goto L_11ccd6ab;
L_11ccd75a:;
  /* 11ccd75a jmp 0x11ccd662 */
  goto L_11ccd662;
L_11ccd75f:;
  /* 11ccd75f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ccd762 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ccd768 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccd76a je 0x11ccd77a */
  if (C.zf) goto L_11ccd77a;
  /* 11ccd76c push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccd76e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd771 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd772 call 0x11ccdfb0 */
  push32(0x11ccd777u); f_11ccdfb0();
  /* 11ccd777 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccd77a:;
  /* 11ccd77a jmp 0x11ccd7b8 */
  goto L_11ccd7b8;
L_11ccd77c:;
  /* 11ccd77c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ccd77f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccd785 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccd787 jne 0x11ccd7b3 */
  if (!C.zf) goto L_11ccd7b3;
  /* 11ccd789 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ccd78c push edx */
  push32((uint32_t)(EDX));
  /* 11ccd78d mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ccd790 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd791 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccd794 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd795 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccd798 push edx */
  push32((uint32_t)(EDX));
  /* 11ccd799 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccd79c push eax */
  push32((uint32_t)(EAX));
  /* 11ccd79d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccd7a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd7a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccd7a4 push edx */
  push32((uint32_t)(EDX));
  /* 11ccd7a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd7a8 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd7a9 call 0x11ccd7c0 */
  push32(0x11ccd7aeu); f_11ccd7c0();
  /* 11ccd7ae add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd7b1 jmp 0x11ccd7b8 */
  goto L_11ccd7b8;
L_11ccd7b3:;
  /* 11ccd7b3 call 0x11cce390 */
  push32(0x11ccd7b8u); f_11cce390();
L_11ccd7b8:;
  /* 11ccd7b8 jmp 0x11ccd7bc */
  goto L_11ccd7bc;
L_11ccd7ba:;
  /* 11ccd7ba jmp 0x11ccd75a */
  goto L_11ccd75a;
L_11ccd7bc:;
  /* 11ccd7bc mov esp, ebp */
  ESP = (EBP);
  /* 11ccd7be pop ebp */
  EBP = (pop32());
  /* 11ccd7bf ret  */
  ESPCHK(0x11ccd520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7c0 @ 0x11ccd7c0 (277 bytes, 107 insns) */
void f_11ccd7c0(void) {
  FTRACE(0x11ccd7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccd7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccd7c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccd7c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccd7c6 call 0x11cce1c0 */
  push32(0x11ccd7cbu); f_11cce1c0();
  /* 11ccd7cb cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd7cf je 0x11ccd7fe */
  if (C.zf) goto L_11ccd7fe;
  /* 11ccd7d1 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ccd7d4 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd7d5 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ccd7d8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd7d9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccd7dc push edx */
  push32((uint32_t)(EDX));
  /* 11ccd7dd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccd7e0 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd7e1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccd7e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd7e5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccd7e8 push edx */
  push32((uint32_t)(EDX));
  /* 11ccd7e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd7ec push eax */
  push32((uint32_t)(EAX));
  /* 11ccd7ed call 0x11cc97e0 */
  push32(0x11ccd7f2u); f_11cc97e0();
  /* 11ccd7f2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd7f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccd7f7 je 0x11ccd7fe */
  if (C.zf) goto L_11ccd7fe;
  /* 11ccd7f9 jmp 0x11ccd8d1 */
  goto L_11ccd8d1;
L_11ccd7fe:;
  /* 11ccd7fe lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11ccd801 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd802 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11ccd805 push edx */
  push32((uint32_t)(EDX));
  /* 11ccd806 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ccd809 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd80a mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ccd80d push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd80e mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccd811 push edx */
  push32((uint32_t)(EDX));
  /* 11ccd812 call 0x11cc9940 */
  push32(0x11ccd817u); f_11cc9940();
  /* 11ccd817 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd81a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ccd81d jmp 0x11ccd831 */
  goto L_11ccd831;
L_11ccd81f:;
  /* 11ccd81f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccd822 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd825 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ccd828 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccd82b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd82e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ccd831:;
  /* 11ccd831 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccd834 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd837 jae 0x11ccd8d1 */
  if (!C.cf) goto L_11ccd8d1;
  /* 11ccd83d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccd840 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ccd843 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd845 jl 0x11ccd889 */
  if ((C.sf!=C.of)) goto L_11ccd889;
  /* 11ccd847 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccd84a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ccd84d cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd850 jg 0x11ccd889 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ccd889;
  /* 11ccd852 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccd855 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ccd858 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccd85b shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ccd85e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccd861 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ccd864 cmp dword ptr [ecx + edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + EDX*1 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd869 je 0x11ccd88b */
  if (C.zf) goto L_11ccd88b;
  /* 11ccd86b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccd86e mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ccd871 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccd874 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ccd877 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccd87a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ccd87d mov eax, dword ptr [edx + eax + 4] */
  EAX = (r32((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11ccd881 movsx ecx, byte ptr [eax + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x8))));
  /* 11ccd885 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccd887 je 0x11ccd88b */
  if (C.zf) goto L_11ccd88b;
L_11ccd889:;
  /* 11ccd889 jmp 0x11ccd81f */
  goto L_11ccd81f;
L_11ccd88b:;
  /* 11ccd88b push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccd88d mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ccd890 push edx */
  push32((uint32_t)(EDX));
  /* 11ccd891 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ccd894 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd895 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccd898 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd899 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccd89b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccd89e mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ccd8a1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccd8a4 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ccd8a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccd8aa mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ccd8ad add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd8af push edx */
  push32((uint32_t)(EDX));
  /* 11ccd8b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccd8b3 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd8b4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccd8b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd8b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccd8bb push edx */
  push32((uint32_t)(EDX));
  /* 11ccd8bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccd8bf push eax */
  push32((uint32_t)(EAX));
  /* 11ccd8c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd8c4 call 0x11ccdad0 */
  push32(0x11ccd8c9u); f_11ccdad0();
  /* 11ccd8c9 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd8cc jmp 0x11ccd81f */
  goto L_11ccd81f;
L_11ccd8d1:;
  /* 11ccd8d1 mov esp, ebp */
  ESP = (EBP);
  /* 11ccd8d3 pop ebp */
  EBP = (pop32());
  /* 11ccd8d4 ret  */
  ESPCHK(0x11ccd7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8e0 @ 0x11ccd8e0 (182 bytes, 69 insns) */
void f_11ccd8e0(void) {
  FTRACE(0x11ccd8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccd8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccd8e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccd8e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd8e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd8e7 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd8eb je 0x11ccd8fb */
  if (C.zf) goto L_11ccd8fb;
  /* 11ccd8ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd8f0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ccd8f3 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 11ccd8f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccd8f9 jne 0x11ccd905 */
  if (!C.zf) goto L_11ccd905;
L_11ccd8fb:;
  /* 11ccd8fb mov eax, 1 */
  EAX = (0x1u);
  /* 11ccd900 jmp 0x11ccd992 */
  goto L_11ccd992;
L_11ccd905:;
  /* 11ccd905 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd908 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccd90b mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ccd90e cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd911 je 0x11ccd937 */
  if (C.zf) goto L_11ccd937;
  /* 11ccd913 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccd916 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ccd919 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd91c push edx */
  push32((uint32_t)(EDX));
  /* 11ccd91d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd920 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ccd923 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd926 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccd927 call 0x11cd4f90 */
  push32(0x11ccd92cu); f_11cd4f90();
  /* 11ccd92c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd92f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccd931 je 0x11ccd937 */
  if (C.zf) goto L_11ccd937;
  /* 11ccd933 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccd935 jmp 0x11ccd992 */
  goto L_11ccd992;
L_11ccd937:;
  /* 11ccd937 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccd93a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ccd93c and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccd93f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccd941 je 0x11ccd94f */
  if (C.zf) goto L_11ccd94f;
  /* 11ccd943 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd946 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ccd948 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ccd94b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccd94d je 0x11ccd988 */
  if (C.zf) goto L_11ccd988;
L_11ccd94f:;
  /* 11ccd94f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccd952 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccd954 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ccd957 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccd959 je 0x11ccd967 */
  if (C.zf) goto L_11ccd967;
  /* 11ccd95b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd95e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ccd960 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccd963 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccd965 je 0x11ccd988 */
  if (C.zf) goto L_11ccd988;
L_11ccd967:;
  /* 11ccd967 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccd96a mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ccd96c and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11ccd96f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccd971 je 0x11ccd97f */
  if (C.zf) goto L_11ccd97f;
  /* 11ccd973 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd976 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccd978 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ccd97b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccd97d je 0x11ccd988 */
  if (C.zf) goto L_11ccd988;
L_11ccd97f:;
  /* 11ccd97f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ccd986 jmp 0x11ccd98f */
  goto L_11ccd98f;
L_11ccd988:;
  /* 11ccd988 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ccd98f:;
  /* 11ccd98f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ccd992:;
  /* 11ccd992 mov esp, ebp */
  ESP = (EBP);
  /* 11ccd994 pop ebp */
  EBP = (pop32());
  /* 11ccd995 ret  */
  ESPCHK(0x11ccd8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9a0 @ 0x11ccd9a0 (224 bytes, 77 insns) */
void f_11ccd9a0(void) {
  FTRACE(0x11ccd9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccd9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccd9a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccd9a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ccd9a5 push 0x11cf9ea8 */
  push32((uint32_t)(0x11cf9ea8u));
  /* 11ccd9aa push 0x11cd501c */
  push32((uint32_t)(0x11cd501cu));
  /* 11ccd9af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ccd9b5 push eax */
  push32((uint32_t)(EAX));
  /* 11ccd9b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ccd9bd add esp, -0x14 */
  { uint32_t _a=(ESP),_b=(0xffffffecu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccd9c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11ccd9c1 push esi */
  push32((uint32_t)(ESI));
  /* 11ccd9c2 push edi */
  push32((uint32_t)(EDI));
  /* 11ccd9c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ccd9c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccd9c9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ccd9cc mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_11ccd9cf:;
  /* 11ccd9cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccd9d2 cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd9d5 je 0x11ccda64 */
  if (C.zf) goto L_11ccda64;
  /* 11ccd9db cmp dword ptr [ebp - 0x1c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd9df jle 0x11ccd9f5 */
  if ((C.zf||C.sf!=C.of)) goto L_11ccd9f5;
  /* 11ccd9e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccd9e4 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccd9e7 cmp ecx, dword ptr [eax + 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccd9ea jge 0x11ccd9f5 */
  if ((C.sf==C.of)) goto L_11ccd9f5;
  /* 11ccd9ec mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11ccd9f3 jmp 0x11ccd9fd */
  goto L_11ccd9fd;
L_11ccd9f5:;
  /* 11ccd9f5 call 0x11cce440 */
  push32(0x11ccd9fau); f_11cce440();
  /* 11ccd9fa mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11ccd9fd:;
  /* 11ccd9fd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ccda04 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccda07 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ccda0a mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccda0d cmp dword ptr [eax + ecx*8 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*8 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccda12 je 0x11ccda30 */
  if (C.zf) goto L_11ccda30;
  /* 11ccda14 push 0x103 */
  push32((uint32_t)(0x103u));
  /* 11ccda19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccda1c push edx */
  push32((uint32_t)(EDX));
  /* 11ccda1d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccda20 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ccda23 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccda26 mov eax, dword ptr [ecx + edx*8 + 4] */
  EAX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11ccda2a push eax */
  push32((uint32_t)(EAX));
  /* 11ccda2b call 0x11cce090 */
  push32(0x11ccda30u); f_11cce090();
L_11ccda30:;
  /* 11ccda30 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ccda37 jmp 0x11ccda50 */
  goto L_11ccda50;
  /* 11ccda39 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ccda3c push ecx */
  push32((uint32_t)(ECX));
  /* 11ccda3d call 0x11ccdaa0 */
  push32(0x11ccda42u); f_11ccdaa0();
  /* 11ccda42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccda45 ret  */
  ESPCHK(0x11ccd9a0u, _esp0);
  ESP += 4; return;
  /* 11ccda46 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ccda49 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ccda50:;
  /* 11ccda50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccda53 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ccda56 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccda59 mov edx, dword ptr [eax + ecx*8] */
  EDX = (r32((uint32_t)(EAX + ECX*8)));
  /* 11ccda5c mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ccda5f jmp 0x11ccd9cf */
  goto L_11ccd9cf;
L_11ccda64:;
  /* 11ccda64 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccda67 cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccda6a jne 0x11ccda75 */
  if (!C.zf) goto L_11ccda75;
  /* 11ccda6c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ccda73 jmp 0x11ccda7d */
  goto L_11ccda7d;
L_11ccda75:;
  /* 11ccda75 call 0x11cce440 */
  push32(0x11ccda7au); f_11cce440();
  /* 11ccda7a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ccda7d:;
  /* 11ccda7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccda80 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccda83 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11ccda86 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ccda89 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ccda90 pop edi */
  EDI = (pop32());
  /* 11ccda91 pop esi */
  ESI = (pop32());
  /* 11ccda92 pop ebx */
  EBX = (pop32());
  /* 11ccda93 mov esp, ebp */
  ESP = (EBP);
  /* 11ccda95 pop ebp */
  EBP = (pop32());
  /* 11ccda96 ret  */
  ESPCHK(0x11ccd9a0u, _esp0);
  ESP += 4; return;
}

/* ArrayUnwindFilter @ 0x11ccdaa0 (44 bytes, 17 insns) */
void f_11ccdaa0(void) {
  FTRACE(0x11ccdaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccdaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccdaa1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccdaa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccdaa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdaa9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccdaab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ccdaae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccdab1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ccdab3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ccdab6 cmp dword ptr [ebp - 8], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccdabd je 0x11ccdac1 */
  if (C.zf) goto L_11ccdac1;
  /* 11ccdabf jmp 0x11ccdac6 */
  goto L_11ccdac6;
L_11ccdac1:;
  /* 11ccdac1 call 0x11cce390 */
  push32(0x11ccdac6u); f_11cce390();
L_11ccdac6:;
  /* 11ccdac6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccdac8 mov esp, ebp */
  ESP = (EBP);
  /* 11ccdaca pop ebp */
  EBP = (pop32());
  /* 11ccdacb ret  */
  ESPCHK(0x11ccdaa0u, _esp0);
  ESP += 4; return;
}

/* CatchIt @ 0x11ccdad0 (183 bytes, 73 insns) */
void f_11ccdad0(void) {
  FTRACE(0x11ccdad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccdad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccdad1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccdad3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccdad6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccdad9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccdadc cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccdae0 je 0x11ccdafa */
  if (C.zf) goto L_11ccdafa;
  /* 11ccdae2 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ccdae5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdae6 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ccdae9 push edx */
  push32((uint32_t)(EDX));
  /* 11ccdaea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccdaed push eax */
  push32((uint32_t)(EAX));
  /* 11ccdaee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdaf1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdaf2 call 0x11ccdd30 */
  push32(0x11ccdaf7u); f_11ccdd30();
  /* 11ccdaf7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccdafa:;
  /* 11ccdafa cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccdafe jne 0x11ccdb0f */
  if (!C.zf) goto L_11ccdb0f;
  /* 11ccdb00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdb03 push edx */
  push32((uint32_t)(EDX));
  /* 11ccdb04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccdb07 push eax */
  push32((uint32_t)(EAX));
  /* 11ccdb08 call 0x11cc9660 */
  push32(0x11ccdb0du); f_11cc9660();
  /* 11ccdb0d jmp 0x11ccdb1c */
  goto L_11ccdb1c;
L_11ccdb0f:;
  /* 11ccdb0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdb12 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdb13 mov edx, dword ptr [ebp + 0x2c] */
  EDX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11ccdb16 push edx */
  push32((uint32_t)(EDX));
  /* 11ccdb17 call 0x11cc9660 */
  push32(0x11ccdb1cu); f_11cc9660();
L_11ccdb1c:;
  /* 11ccdb1c mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ccdb1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccdb21 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdb22 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccdb25 push edx */
  push32((uint32_t)(EDX));
  /* 11ccdb26 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccdb29 push eax */
  push32((uint32_t)(EAX));
  /* 11ccdb2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccdb2d push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdb2e call 0x11ccd9a0 */
  push32(0x11ccdb33u); f_11ccd9a0();
  /* 11ccdb33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdb36 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ccdb39 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ccdb3c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdb3f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccdb42 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11ccdb45 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ccdb4a mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11ccdb4d push edx */
  push32((uint32_t)(EDX));
  /* 11ccdb4e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ccdb51 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ccdb54 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdb55 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccdb58 push edx */
  push32((uint32_t)(EDX));
  /* 11ccdb59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccdb5c push eax */
  push32((uint32_t)(EAX));
  /* 11ccdb5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccdb60 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdb61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdb64 push edx */
  push32((uint32_t)(EDX));
  /* 11ccdb65 call 0x11ccdb90 */
  push32(0x11ccdb6au); f_11ccdb90();
  /* 11ccdb6a add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdb6d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ccdb70 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccdb74 je 0x11ccdb83 */
  if (C.zf) goto L_11ccdb83;
  /* 11ccdb76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccdb79 push eax */
  push32((uint32_t)(EAX));
  /* 11ccdb7a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccdb7d push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdb7e call 0x11cc95f0 */
  push32(0x11ccdb83u); f_11cc95f0();
L_11ccdb83:;
  /* 11ccdb83 mov esp, ebp */
  ESP = (EBP);
  /* 11ccdb85 pop ebp */
  EBP = (pop32());
  /* 11ccdb86 ret  */
  ESPCHK(0x11ccdad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db90 @ 0x11ccdb90 (172 bytes, 66 insns) */
void f_11ccdb90(void) {
  FTRACE(0x11ccdb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccdb90 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccdb91 mov ebp, esp */
  EBP = (ESP);
  /* 11ccdb93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ccdb95 push 0x11cf9eb8 */
  push32((uint32_t)(0x11cf9eb8u));
  /* 11ccdb9a push 0x11cd501c */
  push32((uint32_t)(0x11cd501cu));
  /* 11ccdb9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ccdba5 push eax */
  push32((uint32_t)(EAX));
  /* 11ccdba6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ccdbad add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdbb0 push ebx */
  push32((uint32_t)(EBX));
  /* 11ccdbb1 push esi */
  push32((uint32_t)(ESI));
  /* 11ccdbb2 push edi */
  push32((uint32_t)(EDI));
  /* 11ccdbb3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ccdbb6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccdbb9 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11ccdbbc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ccdbc3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccdbc6 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11ccdbc9 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11ccdbcc call 0x11cce1c0 */
  push32(0x11ccdbd1u); f_11cce1c0();
  /* 11ccdbd1 mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11ccdbd4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ccdbd7 call 0x11cce1c0 */
  push32(0x11ccdbdcu); f_11cce1c0();
  /* 11ccdbdc mov ecx, dword ptr [eax + 0x70] */
  ECX = (r32((uint32_t)(EAX + 0x70)));
  /* 11ccdbdf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ccdbe2 call 0x11cce1c0 */
  push32(0x11ccdbe7u); f_11cce1c0();
  /* 11ccdbe7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdbea mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 11ccdbed call 0x11cce1c0 */
  push32(0x11ccdbf2u); f_11cce1c0();
  /* 11ccdbf2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccdbf5 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11ccdbf8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ccdbff mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ccdc06 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ccdc09 push edx */
  push32((uint32_t)(EDX));
  /* 11ccdc0a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ccdc0d push eax */
  push32((uint32_t)(EAX));
  /* 11ccdc0e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccdc11 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdc12 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccdc15 push edx */
  push32((uint32_t)(EDX));
  /* 11ccdc16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccdc19 push eax */
  push32((uint32_t)(EAX));
  /* 11ccdc1a call 0x11cc9730 */
  push32(0x11ccdc1fu); f_11cc9730();
  /* 11ccdc1f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdc22 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11ccdc25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ccdc2c jmp 0x11ccdc5f */
  goto L_11ccdc5f;
  /* 11ccdc2e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ccdc31 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdc32 call 0x11ccdce0 */
  push32(0x11ccdc37u); f_11ccdce0();
  /* 11ccdc37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdc3a ret  */
  ESPCHK(0x11ccdb90u, _esp0);
  ESP += 4; return;
  /* 11ccdc3b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ccdc3e mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11ccdc45 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ccdc47 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
  /* 11ccdc4e lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 11ccdc51 push edx */
  push32((uint32_t)(EDX));
  /* 11ccdc52 call 0x11cc9a12 */
  push32(0x11ccdc57u); f_11cc9a12();
  /* 11ccdc57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdc5a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ccdc5d jmp 0x11ccdcce */
  jmp_ind(0x11ccdcceu); return;
L_11ccdc5f:;
  /* 11ccdc5f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ccdc66 call 0x11ccdc6d */
  push32(0x11ccdc6bu); f_11ccdc6d();
  /* 11ccdc6b jmp 0x11ccdccb */
  f_11ccdccb(); return;
}

/* FUN_1000dc6d @ 0x11ccdc6d (94 bytes, 29 insns) */
void f_11ccdc6d(void) {
  FTRACE(0x11ccdc6du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccdc6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccdc70 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ccdc73 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11ccdc76 call 0x11cce1c0 */
  push32(0x11ccdc7bu); f_11cce1c0();
  /* 11ccdc7b mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccdc7e mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 11ccdc81 call 0x11cce1c0 */
  push32(0x11ccdc86u); f_11cce1c0();
  /* 11ccdc86 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ccdc89 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11ccdc8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdc8f cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccdc95 jne 0x11ccdcca */
  if (!C.zf) goto L_11ccdcca;
  /* 11ccdc97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdc9a cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccdc9e jne 0x11ccdcca */
  if (!C.zf) goto L_11ccdcca;
  /* 11ccdca0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdca3 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccdcaa jne 0x11ccdcca */
  if (!C.zf) goto L_11ccdcca;
  /* 11ccdcac cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccdcb0 jne 0x11ccdcca */
  if (!C.zf) goto L_11ccdcca;
  /* 11ccdcb2 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccdcb6 je 0x11ccdcca */
  if (C.zf) goto L_11ccdcca;
  /* 11ccdcb8 call 0x11cc9a7a */
  push32(0x11ccdcbdu); f_11cc9a7a();
  /* 11ccdcbd push eax */
  push32((uint32_t)(EAX));
  /* 11ccdcbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdcc1 push edx */
  push32((uint32_t)(EDX));
  /* 11ccdcc2 call 0x11ccdfb0 */
  push32(0x11ccdcc7u); f_11ccdfb0();
  /* 11ccdcc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccdcca:;
  /* 11ccdcca ret  */
  ESPCHK(0x11ccdc6du, _esp0);
  ESP += 4; return;
}

/* FUN_1000dccb @ 0x11ccdccb (20 bytes, 9 insns) */
void f_11ccdccb(void) {
  FTRACE(0x11ccdccbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccdccb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ccdcce mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ccdcd1 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ccdcd8 pop edi */
  EDI = (pop32());
  /* 11ccdcd9 pop esi */
  ESI = (pop32());
  /* 11ccdcda pop ebx */
  EBX = (pop32());
  /* 11ccdcdb mov esp, ebp */
  ESP = (EBP);
  /* 11ccdcdd pop ebp */
  EBP = (pop32());
  /* 11ccdcde ret  */
  ESPCHK(0x11ccdccbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000dce0 @ 0x11ccdce0 (66 bytes, 24 insns) */
void f_11ccdce0(void) {
  FTRACE(0x11ccdce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccdce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccdce1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccdce3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdce4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdce7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccdce9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ccdcec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccdcef cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccdcf5 jne 0x11ccdd1c */
  if (!C.zf) goto L_11ccdd1c;
  /* 11ccdcf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccdcfa cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccdcfe jne 0x11ccdd1c */
  if (!C.zf) goto L_11ccdd1c;
  /* 11ccdd00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccdd03 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccdd0a jne 0x11ccdd1c */
  if (!C.zf) goto L_11ccdd1c;
  /* 11ccdd0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccdd0f cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccdd13 jne 0x11ccdd1c */
  if (!C.zf) goto L_11ccdd1c;
  /* 11ccdd15 mov eax, 1 */
  EAX = (0x1u);
  /* 11ccdd1a jmp 0x11ccdd1e */
  goto L_11ccdd1e;
L_11ccdd1c:;
  /* 11ccdd1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ccdd1e:;
  /* 11ccdd1e mov esp, ebp */
  ESP = (EBP);
  /* 11ccdd20 pop ebp */
  EBP = (pop32());
  /* 11ccdd21 ret  */
  ESPCHK(0x11ccdce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd30 @ 0x11ccdd30 (621 bytes, 229 insns) */
void f_11ccdd30(void) {
  FTRACE(0x11ccdd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccdd30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccdd31 mov ebp, esp */
  EBP = (ESP);
  /* 11ccdd33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ccdd35 push 0x11cf9ed0 */
  push32((uint32_t)(0x11cf9ed0u));
  /* 11ccdd3a push 0x11cd501c */
  push32((uint32_t)(0x11cd501cu));
  /* 11ccdd3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ccdd45 push eax */
  push32((uint32_t)(EAX));
  /* 11ccdd46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ccdd4d add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdd50 push ebx */
  push32((uint32_t)(EBX));
  /* 11ccdd51 push esi */
  push32((uint32_t)(ESI));
  /* 11ccdd52 push edi */
  push32((uint32_t)(EDI));
  /* 11ccdd53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ccdd56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccdd59 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccdd5d je 0x11ccdd76 */
  if (C.zf) goto L_11ccdd76;
  /* 11ccdd5f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccdd62 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ccdd65 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 11ccdd69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccdd6b je 0x11ccdd76 */
  if (C.zf) goto L_11ccdd76;
  /* 11ccdd6d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccdd70 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccdd74 jne 0x11ccdd7b */
  if (!C.zf) goto L_11ccdd7b;
L_11ccdd76:;
  /* 11ccdd76 jmp 0x11ccdf9a */
  goto L_11ccdf9a;
L_11ccdd7b:;
  /* 11ccdd7b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccdd7e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ccdd81 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccdd84 lea edx, [ecx + eax + 0xc] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0xc));
  /* 11ccdd88 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ccdd8b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ccdd92 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccdd95 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccdd97 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ccdd9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccdd9c je 0x11ccddf6 */
  if (C.zf) goto L_11ccddf6;
  /* 11ccdd9e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccdda0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdda3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11ccdda6 push eax */
  push32((uint32_t)(EAX));
  /* 11ccdda7 call 0x11cd4f00 */
  push32(0x11ccddacu); f_11cd4f00();
  /* 11ccddac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccddaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccddb1 je 0x11ccddec */
  if (C.zf) goto L_11ccddec;
  /* 11ccddb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccddb5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccddb8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccddb9 call 0x11cd4f30 */
  push32(0x11ccddbeu); f_11cd4f30();
  /* 11ccddbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccddc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccddc3 je 0x11ccddec */
  if (C.zf) goto L_11ccddec;
  /* 11ccddc5 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccddc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccddcb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11ccddce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ccddd0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccddd3 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccddd6 push edx */
  push32((uint32_t)(EDX));
  /* 11ccddd7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccddda mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccdddc push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdddd call 0x11cce040 */
  push32(0x11ccdde2u); f_11cce040();
  /* 11ccdde2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdde5 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccdde8 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ccddea jmp 0x11ccddf1 */
  goto L_11ccddf1;
L_11ccddec:;
  /* 11ccddec call 0x11cce440 */
  push32(0x11ccddf1u); f_11cce440();
L_11ccddf1:;
  /* 11ccddf1 jmp 0x11ccdf83 */
  goto L_11ccdf83;
L_11ccddf6:;
  /* 11ccddf6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccddf9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccddfb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ccddfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccde00 je 0x11ccde7a */
  if (C.zf) goto L_11ccde7a;
  /* 11ccde02 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccde04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccde07 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11ccde0a push eax */
  push32((uint32_t)(EAX));
  /* 11ccde0b call 0x11cd4f00 */
  push32(0x11ccde10u); f_11cd4f00();
  /* 11ccde10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccde13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccde15 je 0x11ccde70 */
  if (C.zf) goto L_11ccde70;
  /* 11ccde17 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccde19 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccde1c push ecx */
  push32((uint32_t)(ECX));
  /* 11ccde1d call 0x11cd4f30 */
  push32(0x11ccde22u); f_11cd4f30();
  /* 11ccde22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccde25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccde27 je 0x11ccde70 */
  if (C.zf) goto L_11ccde70;
  /* 11ccde29 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccde2c mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ccde2f push eax */
  push32((uint32_t)(EAX));
  /* 11ccde30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccde33 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ccde36 push edx */
  push32((uint32_t)(EDX));
  /* 11ccde37 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccde3a push eax */
  push32((uint32_t)(EAX));
  /* 11ccde3b call 0x11cd2960 */
  push32(0x11ccde40u); f_11cd2960();
  /* 11ccde40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccde43 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccde46 cmp dword ptr [ecx + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccde4a jne 0x11ccde6e */
  if (!C.zf) goto L_11ccde6e;
  /* 11ccde4c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccde4f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccde52 je 0x11ccde6e */
  if (C.zf) goto L_11ccde6e;
  /* 11ccde54 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccde57 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccde5a push eax */
  push32((uint32_t)(EAX));
  /* 11ccde5b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccde5e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ccde60 push edx */
  push32((uint32_t)(EDX));
  /* 11ccde61 call 0x11cce040 */
  push32(0x11ccde66u); f_11cce040();
  /* 11ccde66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccde69 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccde6c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11ccde6e:;
  /* 11ccde6e jmp 0x11ccde75 */
  goto L_11ccde75;
L_11ccde70:;
  /* 11ccde70 call 0x11cce440 */
  push32(0x11ccde75u); f_11cce440();
L_11ccde75:;
  /* 11ccde75 jmp 0x11ccdf83 */
  goto L_11ccdf83;
L_11ccde7a:;
  /* 11ccde7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccde7d cmp dword ptr [edx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccde81 jne 0x11ccdee0 */
  if (!C.zf) goto L_11ccdee0;
  /* 11ccde83 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccde85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccde88 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11ccde8b push ecx */
  push32((uint32_t)(ECX));
  /* 11ccde8c call 0x11cd4f00 */
  push32(0x11ccde91u); f_11cd4f00();
  /* 11ccde91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccde94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccde96 je 0x11ccded6 */
  if (C.zf) goto L_11ccded6;
  /* 11ccde98 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccde9a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccde9d push edx */
  push32((uint32_t)(EDX));
  /* 11ccde9e call 0x11cd4f30 */
  push32(0x11ccdea3u); f_11cd4f30();
  /* 11ccdea3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdea6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccdea8 je 0x11ccded6 */
  if (C.zf) goto L_11ccded6;
  /* 11ccdeaa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccdead mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ccdeb0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdeb1 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccdeb4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdeb7 push edx */
  push32((uint32_t)(EDX));
  /* 11ccdeb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdebb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11ccdebe push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdebf call 0x11cce040 */
  push32(0x11ccdec4u); f_11cce040();
  /* 11ccdec4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdec7 push eax */
  push32((uint32_t)(EAX));
  /* 11ccdec8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccdecb push edx */
  push32((uint32_t)(EDX));
  /* 11ccdecc call 0x11cd2960 */
  push32(0x11ccded1u); f_11cd2960();
  /* 11ccded1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccded4 jmp 0x11ccdedb */
  goto L_11ccdedb;
L_11ccded6:;
  /* 11ccded6 call 0x11cce440 */
  push32(0x11ccdedbu); f_11cce440();
L_11ccdedb:;
  /* 11ccdedb jmp 0x11ccdf83 */
  goto L_11ccdf83;
L_11ccdee0:;
  /* 11ccdee0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccdee2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdee5 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11ccdee8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdee9 call 0x11cd4f00 */
  push32(0x11ccdeeeu); f_11cd4f00();
  /* 11ccdeee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdef1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccdef3 je 0x11ccdf7e */
  if (C.zf) goto L_11ccdf7e;
  /* 11ccdef9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccdefb mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccdefe push edx */
  push32((uint32_t)(EDX));
  /* 11ccdeff call 0x11cd4f30 */
  push32(0x11ccdf04u); f_11cd4f30();
  /* 11ccdf04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdf07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccdf09 je 0x11ccdf7e */
  if (C.zf) goto L_11ccdf7e;
  /* 11ccdf0b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccdf0e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11ccdf11 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdf12 call 0x11cd4f60 */
  push32(0x11ccdf17u); f_11cd4f60();
  /* 11ccdf17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdf1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccdf1c je 0x11ccdf7e */
  if (C.zf) goto L_11ccdf7e;
  /* 11ccdf1e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccdf21 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ccdf23 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccdf26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccdf28 je 0x11ccdf55 */
  if (C.zf) goto L_11ccdf55;
  /* 11ccdf2a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ccdf2c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccdf2f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdf32 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdf33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdf36 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11ccdf39 push eax */
  push32((uint32_t)(EAX));
  /* 11ccdf3a call 0x11cce040 */
  push32(0x11ccdf3fu); f_11cce040();
  /* 11ccdf3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdf42 push eax */
  push32((uint32_t)(EAX));
  /* 11ccdf43 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccdf46 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ccdf49 push edx */
  push32((uint32_t)(EDX));
  /* 11ccdf4a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccdf4d push eax */
  push32((uint32_t)(EAX));
  /* 11ccdf4e call 0x11cc9650 */
  push32(0x11ccdf53u); f_11cc9650();
  /* 11ccdf53 jmp 0x11ccdf7c */
  goto L_11ccdf7c;
L_11ccdf55:;
  /* 11ccdf55 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccdf58 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdf5b push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdf5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdf5f mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11ccdf62 push eax */
  push32((uint32_t)(EAX));
  /* 11ccdf63 call 0x11cce040 */
  push32(0x11ccdf68u); f_11cce040();
  /* 11ccdf68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccdf6b push eax */
  push32((uint32_t)(EAX));
  /* 11ccdf6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccdf6f mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ccdf72 push edx */
  push32((uint32_t)(EDX));
  /* 11ccdf73 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ccdf76 push eax */
  push32((uint32_t)(EAX));
  /* 11ccdf77 call 0x11cc9640 */
  push32(0x11ccdf7cu); f_11cc9640();
L_11ccdf7c:;
  /* 11ccdf7c jmp 0x11ccdf83 */
  goto L_11ccdf83;
L_11ccdf7e:;
  /* 11ccdf7e call 0x11cce440 */
  push32(0x11ccdf83u); f_11cce440();
L_11ccdf83:;
  /* 11ccdf83 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ccdf8a jmp 0x11ccdf9a */
  goto L_11ccdf9a;
  /* 11ccdf8c mov eax, 1 */
  EAX = (0x1u);
  /* 11ccdf91 ret  */
  ESPCHK(0x11ccdd30u, _esp0);
  ESP += 4; return;
  /* 11ccdf92 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ccdf95 call 0x11cce390 */
  push32(0x11ccdf9au); f_11cce390();
L_11ccdf9a:;
  /* 11ccdf9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ccdf9d mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ccdfa4 pop edi */
  EDI = (pop32());
  /* 11ccdfa5 pop esi */
  ESI = (pop32());
  /* 11ccdfa6 pop ebx */
  EBX = (pop32());
  /* 11ccdfa7 mov esp, ebp */
  ESP = (EBP);
  /* 11ccdfa9 pop ebp */
  EBP = (pop32());
  /* 11ccdfaa ret  */
  ESPCHK(0x11ccdd30u, _esp0);
  ESP += 4; return;
}

/* ___DestructExceptionObject @ 0x11ccdfb0 (111 bytes, 46 insns) */
void f_11ccdfb0(void) {
  FTRACE(0x11ccdfb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccdfb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccdfb1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccdfb3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ccdfb5 push 0x11cf9ee0 */
  push32((uint32_t)(0x11cf9ee0u));
  /* 11ccdfba push 0x11cd501c */
  push32((uint32_t)(0x11cd501cu));
  /* 11ccdfbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ccdfc5 push eax */
  push32((uint32_t)(EAX));
  /* 11ccdfc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ccdfcd sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccdfd0 push ebx */
  push32((uint32_t)(EBX));
  /* 11ccdfd1 push esi */
  push32((uint32_t)(ESI));
  /* 11ccdfd2 push edi */
  push32((uint32_t)(EDI));
  /* 11ccdfd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ccdfd6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccdfda je 0x11cce025 */
  if (C.zf) goto L_11cce025;
  /* 11ccdfdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdfdf mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ccdfe2 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccdfe6 je 0x11cce025 */
  if (C.zf) goto L_11cce025;
  /* 11ccdfe8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ccdfef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdff2 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ccdff5 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ccdff8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccdff9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccdffc mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11ccdfff push eax */
  push32((uint32_t)(EAX));
  /* 11cce000 call 0x11cc9630 */
  push32(0x11cce005u); f_11cc9630();
  /* 11cce005 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11cce00c jmp 0x11cce025 */
  goto L_11cce025;
  /* 11cce00e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cce011 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cce016 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cce018 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cce01a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cce01c ret  */
  ESPCHK(0x11ccdfb0u, _esp0);
  ESP += 4; return;
  /* 11cce01d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11cce020 call 0x11cce390 */
  push32(0x11cce025u); f_11cce390();
L_11cce025:;
  /* 11cce025 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cce028 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11cce02f pop edi */
  EDI = (pop32());
  /* 11cce030 pop esi */
  ESI = (pop32());
  /* 11cce031 pop ebx */
  EBX = (pop32());
  /* 11cce032 mov esp, ebp */
  ESP = (EBP);
  /* 11cce034 pop ebp */
  EBP = (pop32());
  /* 11cce035 ret  */
  ESPCHK(0x11ccdfb0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:___AdjustPointer @ 0x11cce040 (70 bytes, 27 insns) */
void f_11cce040(void) {
  FTRACE(0x11cce040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce040 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce041 mov ebp, esp */
  EBP = (ESP);
  /* 11cce043 push ecx */
  push32((uint32_t)(ECX));
  /* 11cce044 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cce047 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce04a add ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce04c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cce04f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cce052 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce056 jl 0x11cce07f */
  if ((C.sf!=C.of)) goto L_11cce07f;
  /* 11cce058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cce05b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cce05e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce061 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11cce064 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cce067 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cce06a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce06d add ecx, dword ptr [eax + edx] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*1))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce070 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cce073 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cce076 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce079 add eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce07c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cce07f:;
  /* 11cce07f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce082 mov esp, ebp */
  ESP = (EBP);
  /* 11cce084 pop ebp */
  EBP = (pop32());
  /* 11cce085 ret  */
  ESPCHK(0x11cce040u, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x11cce090 (76 bytes, 34 insns) */
void f_11cce090(void) {
  FTRACE(0x11cce090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce090 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce091 mov ebp, esp */
  EBP = (ESP);
  /* 11cce093 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cce096 push ebx */
  push32((uint32_t)(EBX));
  /* 11cce097 push ecx */
  push32((uint32_t)(ECX));
  /* 11cce098 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cce09b add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce09e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cce0a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce0a4 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce0a5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11cce0a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cce0ab mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce0ae call 0x11cc9a9d */
  push32(0x11cce0b3u); f_11cc9a9d();
  /* 11cce0b3 push esi */
  push32((uint32_t)(ESI));
  /* 11cce0b4 push edi */
  push32((uint32_t)(EDI));
  /* 11cce0b5 call eax */
  call_ind((uint32_t)(EAX), 0x11cce0b7u);
  /* 11cce0b7 pop edi */
  EDI = (pop32());
  /* 11cce0b8 pop esi */
  ESI = (pop32());
  /* 11cce0b9 mov ebx, ebp */
  EBX = (EBP);
  /* 11cce0bb pop ebp */
  EBP = (pop32());
  /* 11cce0bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cce0bf push ebp */
  push32((uint32_t)(EBP));
  /* 11cce0c0 mov ebp, ebx */
  EBP = (EBX);
  /* 11cce0c2 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce0c8 jne 0x11cce0cf */
  if (!C.zf) goto L_11cce0cf;
  /* 11cce0ca mov ecx, 2 */
  ECX = (0x2u);
L_11cce0cf:;
  /* 11cce0cf push ecx */
  push32((uint32_t)(ECX));
  /* 11cce0d0 call 0x11cc9a9d */
  push32(0x11cce0d5u); f_11cc9a9d();
  /* 11cce0d5 pop ebp */
  EBP = (pop32());
  /* 11cce0d6 pop ecx */
  ECX = (pop32());
  /* 11cce0d7 pop ebx */
  EBX = (pop32());
  /* 11cce0d8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cce0d9 ret 0xc */
  ESPCHK(0x11cce090u, _esp0);
  ESP += 16; return;
}

/* FUN_1000e0e0 @ 0x11cce0e0 (130 bytes, 42 insns) */
void f_11cce0e0(void) {
  FTRACE(0x11cce0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce0e1 mov ebp, esp */
  EBP = (ESP);
  /* 11cce0e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cce0e4 call 0x11ccb2e0 */
  push32(0x11cce0e9u); f_11ccb2e0();
  /* 11cce0e9 call dword ptr [0x11d0141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0141c))), 0x11cce0efu);
  /* 11cce0ef mov dword ptr [0x11cfcf30], eax */
  w32((uint32_t)(0x11cfcf30), (EAX));
  /* 11cce0f4 cmp dword ptr [0x11cfcf30], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11cfcf30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce0fb jne 0x11cce101 */
  if (!C.zf) goto L_11cce101;
  /* 11cce0fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cce0ff jmp 0x11cce15e */
  goto L_11cce15e;
L_11cce101:;
  /* 11cce101 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11cce103 push 0x11cf9eec */
  push32((uint32_t)(0x11cf9eecu));
  /* 11cce108 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cce10a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11cce10c push 1 */
  push32((uint32_t)(0x1u));
  /* 11cce10e call 0x11ccb8d0 */
  push32(0x11cce113u); f_11ccb8d0();
  /* 11cce113 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce116 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cce119 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce11d je 0x11cce134 */
  if (C.zf) goto L_11cce134;
  /* 11cce11f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce122 push eax */
  push32((uint32_t)(EAX));
  /* 11cce123 mov ecx, dword ptr [0x11cfcf30] */
  ECX = (r32((uint32_t)(0x11cfcf30)));
  /* 11cce129 push ecx */
  push32((uint32_t)(ECX));
  /* 11cce12a call dword ptr [0x11d01418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01418))), 0x11cce130u);
  /* 11cce130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cce132 jne 0x11cce138 */
  if (!C.zf) goto L_11cce138;
L_11cce134:;
  /* 11cce134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cce136 jmp 0x11cce15e */
  goto L_11cce15e;
L_11cce138:;
  /* 11cce138 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce13b push edx */
  push32((uint32_t)(EDX));
  /* 11cce13c call 0x11cce1a0 */
  push32(0x11cce141u); f_11cce1a0();
  /* 11cce141 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce144 call dword ptr [0x11d01414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01414))), 0x11cce14au);
  /* 11cce14a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce14d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cce14f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce152 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11cce159 mov eax, 1 */
  EAX = (0x1u);
L_11cce15e:;
  /* 11cce15e mov esp, ebp */
  ESP = (EBP);
  /* 11cce160 pop ebp */
  EBP = (pop32());
  /* 11cce161 ret  */
  ESPCHK(0x11cce0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e170 @ 0x11cce170 (41 bytes, 11 insns) */
void f_11cce170(void) {
  FTRACE(0x11cce170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce170 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce171 mov ebp, esp */
  EBP = (ESP);
  /* 11cce173 call 0x11ccb320 */
  push32(0x11cce178u); f_11ccb320();
  /* 11cce178 cmp dword ptr [0x11cfcf30], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11cfcf30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce17f je 0x11cce197 */
  if (C.zf) goto L_11cce197;
  /* 11cce181 mov eax, dword ptr [0x11cfcf30] */
  EAX = (r32((uint32_t)(0x11cfcf30)));
  /* 11cce186 push eax */
  push32((uint32_t)(EAX));
  /* 11cce187 call dword ptr [0x11d01420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01420))), 0x11cce18du);
  /* 11cce18d mov dword ptr [0x11cfcf30], 0xffffffff */
  w32((uint32_t)(0x11cfcf30), (0xffffffffu));
L_11cce197:;
  /* 11cce197 pop ebp */
  EBP = (pop32());
  /* 11cce198 ret  */
  ESPCHK(0x11cce170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1a0 @ 0x11cce1a0 (25 bytes, 8 insns) */
void f_11cce1a0(void) {
  FTRACE(0x11cce1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce1a1 mov ebp, esp */
  EBP = (ESP);
  /* 11cce1a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce1a6 mov dword ptr [eax + 0x50], 0x11cfd260 */
  w32((uint32_t)(EAX + 0x50), (0x11cfd260u));
  /* 11cce1ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce1b0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11cce1b7 pop ebp */
  EBP = (pop32());
  /* 11cce1b8 ret  */
  ESPCHK(0x11cce1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1c0 @ 0x11cce1c0 (152 bytes, 48 insns) */
void f_11cce1c0(void) {
  FTRACE(0x11cce1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce1c1 mov ebp, esp */
  EBP = (ESP);
  /* 11cce1c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cce1c6 call dword ptr [0x11d013f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f4))), 0x11cce1ccu);
  /* 11cce1cc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cce1cf mov eax, dword ptr [0x11cfcf30] */
  EAX = (r32((uint32_t)(0x11cfcf30)));
  /* 11cce1d4 push eax */
  push32((uint32_t)(EAX));
  /* 11cce1d5 call dword ptr [0x11d013b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013b8))), 0x11cce1dbu);
  /* 11cce1db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cce1de cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce1e2 jne 0x11cce247 */
  if (!C.zf) goto L_11cce247;
  /* 11cce1e4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11cce1e9 push 0x11cf9eec */
  push32((uint32_t)(0x11cf9eecu));
  /* 11cce1ee push 2 */
  push32((uint32_t)(0x2u));
  /* 11cce1f0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11cce1f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cce1f4 call 0x11ccb8d0 */
  push32(0x11cce1f9u); f_11ccb8d0();
  /* 11cce1f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce1fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cce1ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce203 je 0x11cce23d */
  if (C.zf) goto L_11cce23d;
  /* 11cce205 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce208 push ecx */
  push32((uint32_t)(ECX));
  /* 11cce209 mov edx, dword ptr [0x11cfcf30] */
  EDX = (r32((uint32_t)(0x11cfcf30)));
  /* 11cce20f push edx */
  push32((uint32_t)(EDX));
  /* 11cce210 call dword ptr [0x11d01418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01418))), 0x11cce216u);
  /* 11cce216 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cce218 je 0x11cce23d */
  if (C.zf) goto L_11cce23d;
  /* 11cce21a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce21d push eax */
  push32((uint32_t)(EAX));
  /* 11cce21e call 0x11cce1a0 */
  push32(0x11cce223u); f_11cce1a0();
  /* 11cce223 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce226 call dword ptr [0x11d01414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01414))), 0x11cce22cu);
  /* 11cce22c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce22f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cce231 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce234 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11cce23b jmp 0x11cce247 */
  goto L_11cce247;
L_11cce23d:;
  /* 11cce23d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11cce23f call 0x11cc9f30 */
  push32(0x11cce244u); f_11cc9f30();
  /* 11cce244 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cce247:;
  /* 11cce247 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce24a push eax */
  push32((uint32_t)(EAX));
  /* 11cce24b call dword ptr [0x11d013bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013bc))), 0x11cce251u);
  /* 11cce251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce254 mov esp, ebp */
  ESP = (EBP);
  /* 11cce256 pop ebp */
  EBP = (pop32());
  /* 11cce257 ret  */
  ESPCHK(0x11cce1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e260 @ 0x11cce260 (263 bytes, 86 insns) */
void f_11cce260(void) {
  FTRACE(0x11cce260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce260 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce261 mov ebp, esp */
  EBP = (ESP);
  /* 11cce263 cmp dword ptr [0x11cfcf30], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11cfcf30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce26a je 0x11cce365 */
  if (C.zf) goto L_11cce365;
  /* 11cce270 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce274 jne 0x11cce285 */
  if (!C.zf) goto L_11cce285;
  /* 11cce276 mov eax, dword ptr [0x11cfcf30] */
  EAX = (r32((uint32_t)(0x11cfcf30)));
  /* 11cce27b push eax */
  push32((uint32_t)(EAX));
  /* 11cce27c call dword ptr [0x11d013b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013b8))), 0x11cce282u);
  /* 11cce282 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11cce285:;
  /* 11cce285 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce289 je 0x11cce356 */
  if (C.zf) goto L_11cce356;
  /* 11cce28f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce292 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce296 je 0x11cce2a9 */
  if (C.zf) goto L_11cce2a9;
  /* 11cce298 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cce29a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce29d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11cce2a0 push eax */
  push32((uint32_t)(EAX));
  /* 11cce2a1 call 0x11ccbf50 */
  push32(0x11cce2a6u); f_11ccbf50();
  /* 11cce2a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cce2a9:;
  /* 11cce2a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce2ac cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce2b0 je 0x11cce2c3 */
  if (C.zf) goto L_11cce2c3;
  /* 11cce2b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cce2b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce2b7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11cce2ba push eax */
  push32((uint32_t)(EAX));
  /* 11cce2bb call 0x11ccbf50 */
  push32(0x11cce2c0u); f_11ccbf50();
  /* 11cce2c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cce2c3:;
  /* 11cce2c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce2c6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce2ca je 0x11cce2dd */
  if (C.zf) goto L_11cce2dd;
  /* 11cce2cc push 2 */
  push32((uint32_t)(0x2u));
  /* 11cce2ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce2d1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11cce2d4 push eax */
  push32((uint32_t)(EAX));
  /* 11cce2d5 call 0x11ccbf50 */
  push32(0x11cce2dau); f_11ccbf50();
  /* 11cce2da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cce2dd:;
  /* 11cce2dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce2e0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce2e4 je 0x11cce2f7 */
  if (C.zf) goto L_11cce2f7;
  /* 11cce2e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cce2e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce2eb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11cce2ee push eax */
  push32((uint32_t)(EAX));
  /* 11cce2ef call 0x11ccbf50 */
  push32(0x11cce2f4u); f_11ccbf50();
  /* 11cce2f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cce2f7:;
  /* 11cce2f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce2fa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce2fe je 0x11cce311 */
  if (C.zf) goto L_11cce311;
  /* 11cce300 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cce302 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce305 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11cce308 push eax */
  push32((uint32_t)(EAX));
  /* 11cce309 call 0x11ccbf50 */
  push32(0x11cce30eu); f_11ccbf50();
  /* 11cce30e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cce311:;
  /* 11cce311 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce314 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce318 je 0x11cce32b */
  if (C.zf) goto L_11cce32b;
  /* 11cce31a push 2 */
  push32((uint32_t)(0x2u));
  /* 11cce31c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce31f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11cce322 push eax */
  push32((uint32_t)(EAX));
  /* 11cce323 call 0x11ccbf50 */
  push32(0x11cce328u); f_11ccbf50();
  /* 11cce328 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cce32b:;
  /* 11cce32b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce32e cmp dword ptr [ecx + 0x50], 0x11cfd260 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x11cfd260u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce335 je 0x11cce348 */
  if (C.zf) goto L_11cce348;
  /* 11cce337 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cce339 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce33c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11cce33f push eax */
  push32((uint32_t)(EAX));
  /* 11cce340 call 0x11ccbf50 */
  push32(0x11cce345u); f_11ccbf50();
  /* 11cce345 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cce348:;
  /* 11cce348 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cce34a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce34d push ecx */
  push32((uint32_t)(ECX));
  /* 11cce34e call 0x11ccbf50 */
  push32(0x11cce353u); f_11ccbf50();
  /* 11cce353 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cce356:;
  /* 11cce356 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cce358 mov edx, dword ptr [0x11cfcf30] */
  EDX = (r32((uint32_t)(0x11cfcf30)));
  /* 11cce35e push edx */
  push32((uint32_t)(EDX));
  /* 11cce35f call dword ptr [0x11d01418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01418))), 0x11cce365u);
L_11cce365:;
  /* 11cce365 pop ebp */
  EBP = (pop32());
  /* 11cce366 ret  */
  ESPCHK(0x11cce260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e370 @ 0x11cce370 (11 bytes, 5 insns) */
void f_11cce370(void) {
  FTRACE(0x11cce370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce370 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce371 mov ebp, esp */
  EBP = (ESP);
  /* 11cce373 call dword ptr [0x11d01414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01414))), 0x11cce379u);
  /* 11cce379 pop ebp */
  EBP = (pop32());
  /* 11cce37a ret  */
  ESPCHK(0x11cce370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e380 @ 0x11cce380 (11 bytes, 5 insns) */
void f_11cce380(void) {
  FTRACE(0x11cce380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce380 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce381 mov ebp, esp */
  EBP = (ESP);
  /* 11cce383 call dword ptr [0x11d013b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013b0))), 0x11cce389u);
  /* 11cce389 pop ebp */
  EBP = (pop32());
  /* 11cce38a ret  */
  ESPCHK(0x11cce380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e390 @ 0x11cce390 (92 bytes, 29 insns) */
void f_11cce390(void) {
  FTRACE(0x11cce390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce390 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce391 mov ebp, esp */
  EBP = (ESP);
  /* 11cce393 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cce395 push 0x11cf9ef8 */
  push32((uint32_t)(0x11cf9ef8u));
  /* 11cce39a push 0x11cd501c */
  push32((uint32_t)(0x11cd501cu));
  /* 11cce39f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11cce3a5 push eax */
  push32((uint32_t)(EAX));
  /* 11cce3a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11cce3ad sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cce3b0 push ebx */
  push32((uint32_t)(EBX));
  /* 11cce3b1 push esi */
  push32((uint32_t)(ESI));
  /* 11cce3b2 push edi */
  push32((uint32_t)(EDI));
  /* 11cce3b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cce3b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cce3bd call 0x11cce1c0 */
  push32(0x11cce3c2u); f_11cce1c0();
  /* 11cce3c2 cmp dword ptr [eax + 0x60], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce3c6 je 0x11cce3f0 */
  if (C.zf) goto L_11cce3f0;
  /* 11cce3c8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cce3cf call 0x11cce1c0 */
  push32(0x11cce3d4u); f_11cce1c0();
  /* 11cce3d4 call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x11cce3d7u);
  /* 11cce3d7 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cce3de jmp 0x11cce3f0 */
  goto L_11cce3f0;
  /* 11cce3e0 mov eax, 1 */
  EAX = (0x1u);
  /* 11cce3e5 ret  */
  ESPCHK(0x11cce390u, _esp0);
  ESP += 4; return;
  /* 11cce3e6 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11cce3e9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11cce3f0:;
  /* 11cce3f0 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11cce3f7 call 0x11cce3fe */
  push32(0x11cce3fcu); f_11cce3fe();
  /* 11cce3fc jmp 0x11cce404 */
  jmp_ind(0x11cce404u); return;
}

/* _abort @ 0x11cce3fe (5 bytes, 2 insns) */
void f_11cce3fe(void) {
  FTRACE(0x11cce3feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce3fe call 0x11cd5320 */
  push32(0x11cce403u); f_11cd5320();
  /* 11cce403 ret  */
  ESPCHK(0x11cce3feu, _esp0);
  ESP += 4; return;
}

/* FUN_1000e420 @ 0x11cce420 (29 bytes, 10 insns) */
void f_11cce420(void) {
  FTRACE(0x11cce420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce420 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce421 mov ebp, esp */
  EBP = (ESP);
  /* 11cce423 call 0x11cce1c0 */
  push32(0x11cce428u); f_11cce1c0();
  /* 11cce428 cmp dword ptr [eax + 0x64], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce42c je 0x11cce436 */
  if (C.zf) goto L_11cce436;
  /* 11cce42e call 0x11cce1c0 */
  push32(0x11cce433u); f_11cce1c0();
  /* 11cce433 call dword ptr [eax + 0x64] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x64))), 0x11cce436u);
L_11cce436:;
  /* 11cce436 call 0x11cce390 */
  push32(0x11cce43bu); f_11cce390();
  /* 11cce43b pop ebp */
  EBP = (pop32());
  /* 11cce43c ret  */
  ESPCHK(0x11cce420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e440 @ 0x11cce440 (90 bytes, 27 insns) */
void f_11cce440(void) {
  FTRACE(0x11cce440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce440 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce441 mov ebp, esp */
  EBP = (ESP);
  /* 11cce443 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cce445 push 0x11cf9f10 */
  push32((uint32_t)(0x11cf9f10u));
  /* 11cce44a push 0x11cd501c */
  push32((uint32_t)(0x11cd501cu));
  /* 11cce44f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11cce455 push eax */
  push32((uint32_t)(EAX));
  /* 11cce456 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11cce45d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cce460 push ebx */
  push32((uint32_t)(EBX));
  /* 11cce461 push esi */
  push32((uint32_t)(ESI));
  /* 11cce462 push edi */
  push32((uint32_t)(EDI));
  /* 11cce463 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cce466 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cce46d cmp dword ptr [0x11cfcf34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cfcf34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce474 je 0x11cce49c */
  if (C.zf) goto L_11cce49c;
  /* 11cce476 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cce47d call dword ptr [0x11cfcf34] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cfcf34))), 0x11cce483u);
  /* 11cce483 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cce48a jmp 0x11cce49c */
  goto L_11cce49c;
  /* 11cce48c mov eax, 1 */
  EAX = (0x1u);
  /* 11cce491 ret  */
  ESPCHK(0x11cce440u, _esp0);
  ESP += 4; return;
  /* 11cce492 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11cce495 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11cce49c:;
  /* 11cce49c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11cce4a3 call 0x11cce4aa */
  push32(0x11cce4a8u); f_11cce4aa();
  /* 11cce4a8 jmp 0x11cce4b0 */
  f_11cce4b0(); return;
}

/* FUN_1000e4aa @ 0x11cce4aa (6 bytes, 2 insns) */
void f_11cce4aa(void) {
  FTRACE(0x11cce4aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce4aa call 0x11cce390 */
  push32(0x11cce4afu); f_11cce390();
  /* 11cce4af ret  */
  ESPCHK(0x11cce4aau, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4b0 @ 0x11cce4b0 (17 bytes, 8 insns) */
void f_11cce4b0(void) {
  FTRACE(0x11cce4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce4b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cce4b3 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11cce4ba pop edi */
  EDI = (pop32());
  /* 11cce4bb pop esi */
  ESI = (pop32());
  /* 11cce4bc pop ebx */
  EBX = (pop32());
  /* 11cce4bd mov esp, ebp */
  ESP = (EBP);
  /* 11cce4bf pop ebp */
  EBP = (pop32());
  /* 11cce4c0 ret  */
  ESPCHK(0x11cce4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4d0 @ 0x11cce4d0 (56 bytes, 15 insns) */
void f_11cce4d0(void) {
  FTRACE(0x11cce4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce4d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cce4d3 cmp dword ptr [0x11cfcdb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cfcdb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce4da je 0x11cce4e2 */
  if (C.zf) goto L_11cce4e2;
  /* 11cce4dc call dword ptr [0x11cfcdb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cfcdb0))), 0x11cce4e2u);
L_11cce4e2:;
  /* 11cce4e2 push 0x11cfc63c */
  push32((uint32_t)(0x11cfc63cu));
  /* 11cce4e7 push 0x11cfc324 */
  push32((uint32_t)(0x11cfc324u));
  /* 11cce4ec call 0x11cce6a0 */
  push32(0x11cce4f1u); f_11cce6a0();
  /* 11cce4f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce4f4 push 0x11cfc220 */
  push32((uint32_t)(0x11cfc220u));
  /* 11cce4f9 push 0x11cfc000 */
  push32((uint32_t)(0x11cfc000u));
  /* 11cce4fe call 0x11cce6a0 */
  push32(0x11cce503u); f_11cce6a0();
  /* 11cce503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce506 pop ebp */
  EBP = (pop32());
  /* 11cce507 ret  */
  ESPCHK(0x11cce4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e510 @ 0x11cce510 (21 bytes, 10 insns) */
void f_11cce510(void) {
  FTRACE(0x11cce510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce510 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce511 mov ebp, esp */
  EBP = (ESP);
  /* 11cce513 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cce515 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cce517 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce51a push eax */
  push32((uint32_t)(EAX));
  /* 11cce51b call 0x11cce590 */
  push32(0x11cce520u); f_11cce590();
  /* 11cce520 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce523 pop ebp */
  EBP = (pop32());
  /* 11cce524 ret  */
  ESPCHK(0x11cce510u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11cce530 (21 bytes, 10 insns) */
void f_11cce530(void) {
  FTRACE(0x11cce530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce530 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce531 mov ebp, esp */
  EBP = (ESP);
  /* 11cce533 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cce535 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cce537 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce53a push eax */
  push32((uint32_t)(EAX));
  /* 11cce53b call 0x11cce590 */
  push32(0x11cce540u); f_11cce590();
  /* 11cce540 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce543 pop ebp */
  EBP = (pop32());
  /* 11cce544 ret  */
  ESPCHK(0x11cce530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e550 @ 0x11cce550 (19 bytes, 9 insns) */
void f_11cce550(void) {
  FTRACE(0x11cce550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce550 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce551 mov ebp, esp */
  EBP = (ESP);
  /* 11cce553 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cce555 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cce557 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cce559 call 0x11cce590 */
  push32(0x11cce55eu); f_11cce590();
  /* 11cce55e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce561 pop ebp */
  EBP = (pop32());
  /* 11cce562 ret  */
  ESPCHK(0x11cce550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e570 @ 0x11cce570 (19 bytes, 9 insns) */
void f_11cce570(void) {
  FTRACE(0x11cce570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce570 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce571 mov ebp, esp */
  EBP = (ESP);
  /* 11cce573 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cce575 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cce577 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cce579 call 0x11cce590 */
  push32(0x11cce57eu); f_11cce590();
  /* 11cce57e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce581 pop ebp */
  EBP = (pop32());
  /* 11cce582 ret  */
  ESPCHK(0x11cce570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e590 @ 0x11cce590 (227 bytes, 61 insns) */
void f_11cce590(void) {
  FTRACE(0x11cce590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce590 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce591 mov ebp, esp */
  EBP = (ESP);
  /* 11cce593 push ecx */
  push32((uint32_t)(ECX));
  /* 11cce594 call 0x11cce680 */
  push32(0x11cce599u); f_11cce680();
  /* 11cce599 cmp dword ptr [0x11cff504], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cff504))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce5a0 jne 0x11cce5b3 */
  if (!C.zf) goto L_11cce5b3;
  /* 11cce5a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce5a5 push eax */
  push32((uint32_t)(EAX));
  /* 11cce5a6 call dword ptr [0x11d013b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013b4))), 0x11cce5acu);
  /* 11cce5ac push eax */
  push32((uint32_t)(EAX));
  /* 11cce5ad call dword ptr [0x11d013ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013ac))), 0x11cce5b3u);
L_11cce5b3:;
  /* 11cce5b3 mov dword ptr [0x11cff500], 1 */
  w32((uint32_t)(0x11cff500), (0x1u));
  /* 11cce5bd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11cce5c0 mov byte ptr [0x11cff4fc], cl */
  w8((uint32_t)(0x11cff4fc), (CL));
  /* 11cce5c6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce5ca jne 0x11cce613 */
  if (!C.zf) goto L_11cce613;
  /* 11cce5cc cmp dword ptr [0x11d00f78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d00f78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce5d3 je 0x11cce601 */
  if (C.zf) goto L_11cce601;
  /* 11cce5d5 mov edx, dword ptr [0x11d00f74] */
  EDX = (r32((uint32_t)(0x11d00f74)));
  /* 11cce5db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cce5de:;
  /* 11cce5de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce5e1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cce5e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cce5e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce5ea cmp ecx, dword ptr [0x11d00f78] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d00f78))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce5f0 jb 0x11cce601 */
  if (C.cf) goto L_11cce601;
  /* 11cce5f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce5f5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce5f8 je 0x11cce5ff */
  if (C.zf) goto L_11cce5ff;
  /* 11cce5fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce5fd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11cce5ffu);
L_11cce5ff:;
  /* 11cce5ff jmp 0x11cce5de */
  goto L_11cce5de;
L_11cce601:;
  /* 11cce601 push 0x11cfc948 */
  push32((uint32_t)(0x11cfc948u));
  /* 11cce606 push 0x11cfc740 */
  push32((uint32_t)(0x11cfc740u));
  /* 11cce60b call 0x11cce6a0 */
  push32(0x11cce610u); f_11cce6a0();
  /* 11cce610 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cce613:;
  /* 11cce613 push 0x11cfcc54 */
  push32((uint32_t)(0x11cfcc54u));
  /* 11cce618 push 0x11cfca4c */
  push32((uint32_t)(0x11cfca4cu));
  /* 11cce61d call 0x11cce6a0 */
  push32(0x11cce622u); f_11cce6a0();
  /* 11cce622 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce625 cmp dword ptr [0x11cff508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce62c jne 0x11cce64e */
  if (!C.zf) goto L_11cce64e;
  /* 11cce62e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cce630 call 0x11ccc9d0 */
  push32(0x11cce635u); f_11ccc9d0();
  /* 11cce635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce638 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11cce63b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cce63d je 0x11cce64e */
  if (C.zf) goto L_11cce64e;
  /* 11cce63f mov dword ptr [0x11cff508], 1 */
  w32((uint32_t)(0x11cff508), (0x1u));
  /* 11cce649 call 0x11ccd2e0 */
  push32(0x11cce64eu); f_11ccd2e0();
L_11cce64e:;
  /* 11cce64e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce652 je 0x11cce65b */
  if (C.zf) goto L_11cce65b;
  /* 11cce654 call 0x11cce690 */
  push32(0x11cce659u); f_11cce690();
  /* 11cce659 jmp 0x11cce66f */
  goto L_11cce66f;
L_11cce65b:;
  /* 11cce65b mov dword ptr [0x11cff504], 1 */
  w32((uint32_t)(0x11cff504), (0x1u));
  /* 11cce665 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce668 push ecx */
  push32((uint32_t)(ECX));
  /* 11cce669 call dword ptr [0x11d01404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01404))), 0x11cce66fu);
L_11cce66f:;
  /* 11cce66f mov esp, ebp */
  ESP = (EBP);
  /* 11cce671 pop ebp */
  EBP = (pop32());
  /* 11cce672 ret  */
  ESPCHK(0x11cce590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e680 @ 0x11cce680 (15 bytes, 7 insns) */
void f_11cce680(void) {
  FTRACE(0x11cce680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce680 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce681 mov ebp, esp */
  EBP = (ESP);
  /* 11cce683 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11cce685 call 0x11ccb3c0 */
  push32(0x11cce68au); f_11ccb3c0();
  /* 11cce68a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce68d pop ebp */
  EBP = (pop32());
  /* 11cce68e ret  */
  ESPCHK(0x11cce680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e690 @ 0x11cce690 (15 bytes, 7 insns) */
void f_11cce690(void) {
  FTRACE(0x11cce690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce690 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce691 mov ebp, esp */
  EBP = (ESP);
  /* 11cce693 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11cce695 call 0x11ccb460 */
  push32(0x11cce69au); f_11ccb460();
  /* 11cce69a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce69d pop ebp */
  EBP = (pop32());
  /* 11cce69e ret  */
  ESPCHK(0x11cce690u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11cce6a0 (37 bytes, 16 insns) */
void f_11cce6a0(void) {
  FTRACE(0x11cce6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce6a1 mov ebp, esp */
  EBP = (ESP);
L_11cce6a3:;
  /* 11cce6a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce6a6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce6a9 jae 0x11cce6c3 */
  if (!C.cf) goto L_11cce6c3;
  /* 11cce6ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce6ae cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce6b1 je 0x11cce6b8 */
  if (C.zf) goto L_11cce6b8;
  /* 11cce6b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce6b6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11cce6b8u);
L_11cce6b8:;
  /* 11cce6b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce6bb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce6be mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cce6c1 jmp 0x11cce6a3 */
  goto L_11cce6a3;
L_11cce6c3:;
  /* 11cce6c3 pop ebp */
  EBP = (pop32());
  /* 11cce6c4 ret  */
  ESPCHK(0x11cce6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6d0 @ 0x11cce6d0 (628 bytes, 214 insns) */
void f_11cce6d0(void) {
  FTRACE(0x11cce6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce6d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cce6d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cce6d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cce6d7 push esi */
  push32((uint32_t)(ESI));
  /* 11cce6d8 push edi */
  push32((uint32_t)(EDI));
L_11cce6d9:;
  /* 11cce6d9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce6dd jne 0x11cce6fd */
  if (!C.zf) goto L_11cce6fd;
  /* 11cce6df push 0x11cf9f74 */
  push32((uint32_t)(0x11cf9f74u));
  /* 11cce6e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cce6e6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 11cce6e8 push 0x11cf9f68 */
  push32((uint32_t)(0x11cf9f68u));
  /* 11cce6ed push 2 */
  push32((uint32_t)(0x2u));
  /* 11cce6ef call 0x11cca080 */
  push32(0x11cce6f4u); f_11cca080();
  /* 11cce6f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce6f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce6fa jne 0x11cce6fd */
  if (!C.zf) goto L_11cce6fd;
  /* 11cce6fc int3  */
  x86_unimpl("int3 @ 0x11cce6fc");
L_11cce6fd:;
  /* 11cce6fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cce6ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cce701 jne 0x11cce6d9 */
  if (!C.zf) goto L_11cce6d9;
  /* 11cce703 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cce706 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cce709 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce70c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11cce70f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cce712 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce715 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cce718 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 11cce71e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cce720 je 0x11cce72f */
  if (C.zf) goto L_11cce72f;
  /* 11cce722 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce725 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11cce728 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11cce72b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cce72d je 0x11cce745 */
  if (C.zf) goto L_11cce745;
L_11cce72f:;
  /* 11cce72f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce732 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11cce735 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11cce737 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce73a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11cce73d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cce740 jmp 0x11cce93d */
  goto L_11cce93d;
L_11cce745:;
  /* 11cce745 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce748 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11cce74b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11cce74e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cce750 je 0x11cce79c */
  if (C.zf) goto L_11cce79c;
  /* 11cce752 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce755 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11cce75c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce75f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11cce762 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11cce765 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cce767 je 0x11cce785 */
  if (C.zf) goto L_11cce785;
  /* 11cce769 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce76c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce76f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cce772 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cce774 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce777 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cce77a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 11cce77d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce780 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11cce783 jmp 0x11cce79c */
  goto L_11cce79c;
L_11cce785:;
  /* 11cce785 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce788 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cce78b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11cce78e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce791 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11cce794 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cce797 jmp 0x11cce93d */
  goto L_11cce93d;
L_11cce79c:;
  /* 11cce79c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce79f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cce7a2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11cce7a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce7a8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11cce7ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce7ae mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cce7b1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11cce7b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce7b7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11cce7ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce7bd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11cce7c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cce7cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce7ce mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11cce7d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce7d4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11cce7d7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 11cce7dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cce7df jne 0x11cce80f */
  if (!C.zf) goto L_11cce80f;
  /* 11cce7e1 cmp dword ptr [ebp - 8], 0x11cfd308 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11cfd308u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce7e8 je 0x11cce7f3 */
  if (C.zf) goto L_11cce7f3;
  /* 11cce7ea cmp dword ptr [ebp - 8], 0x11cfd328 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11cfd328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce7f1 jne 0x11cce803 */
  if (!C.zf) goto L_11cce803;
L_11cce7f3:;
  /* 11cce7f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cce7f6 push edx */
  push32((uint32_t)(EDX));
  /* 11cce7f7 call 0x11cd5870 */
  push32(0x11cce7fcu); f_11cd5870();
  /* 11cce7fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce7ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cce801 jne 0x11cce80f */
  if (!C.zf) goto L_11cce80f;
L_11cce803:;
  /* 11cce803 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce806 push eax */
  push32((uint32_t)(EAX));
  /* 11cce807 call 0x11cd57a0 */
  push32(0x11cce80cu); f_11cd57a0();
  /* 11cce80c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cce80f:;
  /* 11cce80f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce812 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cce815 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 11cce81b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cce81d je 0x11cce8fb */
  if (C.zf) goto L_11cce8fb;
L_11cce823:;
  /* 11cce823 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce826 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce829 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11cce82b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cce82e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cce830 jge 0x11cce853 */
  if ((C.sf==C.of)) goto L_11cce853;
  /* 11cce832 push 0x11cf9f28 */
  push32((uint32_t)(0x11cf9f28u));
  /* 11cce837 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cce839 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11cce83e push 0x11cf9f68 */
  push32((uint32_t)(0x11cf9f68u));
  /* 11cce843 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cce845 call 0x11cca080 */
  push32(0x11cce84au); f_11cca080();
  /* 11cce84a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce84d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce850 jne 0x11cce853 */
  if (!C.zf) goto L_11cce853;
  /* 11cce852 int3  */
  x86_unimpl("int3 @ 0x11cce852");
L_11cce853:;
  /* 11cce853 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cce855 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cce857 jne 0x11cce823 */
  if (!C.zf) goto L_11cce823;
  /* 11cce859 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce85c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce85f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11cce861 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cce864 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cce867 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce86a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cce86d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce870 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce873 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cce875 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce878 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11cce87b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cce87e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce881 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11cce884 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce888 jle 0x11cce8a6 */
  if ((C.zf||C.sf!=C.of)) goto L_11cce8a6;
  /* 11cce88a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce88d push ecx */
  push32((uint32_t)(ECX));
  /* 11cce88e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce891 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cce894 push eax */
  push32((uint32_t)(EAX));
  /* 11cce895 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cce898 push ecx */
  push32((uint32_t)(ECX));
  /* 11cce899 call 0x11cd5490 */
  push32(0x11cce89eu); f_11cd5490();
  /* 11cce89e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce8a1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cce8a4 jmp 0x11cce8ee */
  goto L_11cce8ee;
L_11cce8a6:;
  /* 11cce8a6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce8aa je 0x11cce8c9 */
  if (C.zf) goto L_11cce8c9;
  /* 11cce8ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cce8af sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11cce8b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cce8b5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11cce8b8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cce8bb mov ecx, dword ptr [edx*4 + 0x11d00e20] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11d00e20)));
  /* 11cce8c2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce8c4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11cce8c7 jmp 0x11cce8d0 */
  goto L_11cce8d0;
L_11cce8c9:;
  /* 11cce8c9 mov dword ptr [ebp - 0x14], 0x11cfcf40 */
  w32((uint32_t)(EBP + -0x14), (0x11cfcf40u));
L_11cce8d0:;
  /* 11cce8d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cce8d3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 11cce8d7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11cce8da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cce8dc je 0x11cce8ee */
  if (C.zf) goto L_11cce8ee;
  /* 11cce8de push 2 */
  push32((uint32_t)(0x2u));
  /* 11cce8e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cce8e2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cce8e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cce8e6 call 0x11cd5340 */
  push32(0x11cce8ebu); f_11cd5340();
  /* 11cce8eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cce8ee:;
  /* 11cce8ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce8f1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cce8f4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11cce8f7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11cce8f9 jmp 0x11cce919 */
  goto L_11cce919;
L_11cce8fb:;
  /* 11cce8fb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cce902 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cce905 push edx */
  push32((uint32_t)(EDX));
  /* 11cce906 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11cce909 push eax */
  push32((uint32_t)(EAX));
  /* 11cce90a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cce90d push ecx */
  push32((uint32_t)(ECX));
  /* 11cce90e call 0x11cd5490 */
  push32(0x11cce913u); f_11cd5490();
  /* 11cce913 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce916 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11cce919:;
  /* 11cce919 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cce91c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce91f je 0x11cce935 */
  if (C.zf) goto L_11cce935;
  /* 11cce921 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce924 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11cce927 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11cce92a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cce92d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11cce930 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cce933 jmp 0x11cce93d */
  goto L_11cce93d;
L_11cce935:;
  /* 11cce935 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cce938 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_11cce93d:;
  /* 11cce93d pop edi */
  EDI = (pop32());
  /* 11cce93e pop esi */
  ESI = (pop32());
  /* 11cce93f pop ebx */
  EBX = (pop32());
  /* 11cce940 mov esp, ebp */
  ESP = (EBP);
  /* 11cce942 pop ebp */
  EBP = (pop32());
  /* 11cce943 ret  */
  ESPCHK(0x11cce6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e950 @ 0x11cce950 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_11cce950(void) {
  FTRACE(0x11cce950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cce950 push ebp */
  push32((uint32_t)(EBP));
  /* 11cce951 mov ebp, esp */
  EBP = (ESP);
  /* 11cce953 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cce959 push ebx */
  push32((uint32_t)(EBX));
  /* 11cce95a push esi */
  push32((uint32_t)(ESI));
  /* 11cce95b push edi */
  push32((uint32_t)(EDI));
  /* 11cce95c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11cce963 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 11cce96d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11cce974:;
  /* 11cce974 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cce977 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11cce979 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11cce97c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11cce980 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cce983 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cce986 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11cce989 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cce98b je 0x11ccf567 */
  if (C.zf) goto L_11ccf567;
  /* 11cce991 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce998 jl 0x11ccf567 */
  if ((C.sf!=C.of)) goto L_11ccf567;
  /* 11cce99e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11cce9a2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce9a5 jl 0x11cce9c6 */
  if ((C.sf!=C.of)) goto L_11cce9c6;
  /* 11cce9a7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11cce9ab cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce9ae jg 0x11cce9c6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cce9c6;
  /* 11cce9b0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11cce9b4 movsx ecx, byte ptr [eax + 0x11cf9f60] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x11cf9f60))));
  /* 11cce9bb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 11cce9be mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 11cce9c4 jmp 0x11cce9d0 */
  goto L_11cce9d0;
L_11cce9c6:;
  /* 11cce9c6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_11cce9d0:;
  /* 11cce9d0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 11cce9d6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11cce9d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cce9dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cce9df movsx edx, byte ptr [ecx + eax*8 + 0x11cf9f80] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x11cf9f80))));
  /* 11cce9e7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11cce9ea mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11cce9ed mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cce9f0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 11cce9f6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cce9fd ja 0x11ccf562 */
  if ((!C.cf&&!C.zf)) goto L_11ccf562;
  /* 11ccea03 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 11ccea09 jmp dword ptr [ecx*4 + 0x11ccf574] */
  switch (ECX) {
    case 0: goto L_11ccea10;
    case 1: goto L_11cceaaa;
    case 2: goto L_11cceaec;
    case 3: goto L_11cceb5b;
    case 4: goto L_11ccebb3;
    case 5: goto L_11ccebc2;
    case 6: goto L_11ccec0e;
    case 7: goto L_11cceca1;
    case 8: goto L_11cceb38;
    case 9: goto L_11cceb43;
    case 10: goto L_11cceb2e;
    case 11: goto L_11cceb23;
    case 12: goto L_11cceb4e;
    case 13: goto L_11cceb56;
    default: x86_unimpl("switch@0x11ccea09 out of table"); return;
  }
L_11ccea10:;
  /* 11ccea10 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11ccea17 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ccea1a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ccea20 mov eax, dword ptr [0x11cfd00c] */
  EAX = (r32((uint32_t)(0x11cfd00c)));
  /* 11ccea25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccea27 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11ccea2b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ccea31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccea33 je 0x11ccea8d */
  if (C.zf) goto L_11ccea8d;
  /* 11ccea35 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 11ccea3b push edx */
  push32((uint32_t)(EDX));
  /* 11ccea3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccea3f push eax */
  push32((uint32_t)(EAX));
  /* 11ccea40 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ccea44 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccea45 call 0x11ccf680 */
  push32(0x11ccea4au); f_11ccf680();
  /* 11ccea4a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccea4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccea50 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ccea52 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 11ccea55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccea58 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccea5b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11ccea5e:;
  /* 11ccea5e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ccea62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccea64 jne 0x11ccea87 */
  if (!C.zf) goto L_11ccea87;
  /* 11ccea66 push 0x11cfa000 */
  push32((uint32_t)(0x11cfa000u));
  /* 11ccea6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccea6d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 11ccea72 push 0x11cf9ff4 */
  push32((uint32_t)(0x11cf9ff4u));
  /* 11ccea77 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccea79 call 0x11cca080 */
  push32(0x11ccea7eu); f_11cca080();
  /* 11ccea7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccea81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccea84 jne 0x11ccea87 */
  if (!C.zf) goto L_11ccea87;
  /* 11ccea86 int3  */
  x86_unimpl("int3 @ 0x11ccea86");
L_11ccea87:;
  /* 11ccea87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccea89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccea8b jne 0x11ccea5e */
  if (!C.zf) goto L_11ccea5e;
L_11ccea8d:;
  /* 11ccea8d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11ccea93 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccea94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccea97 push edx */
  push32((uint32_t)(EDX));
  /* 11ccea98 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ccea9c push eax */
  push32((uint32_t)(EAX));
  /* 11ccea9d call 0x11ccf680 */
  push32(0x11cceaa2u); f_11ccf680();
  /* 11cceaa2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cceaa5 jmp 0x11ccf562 */
  goto L_11ccf562;
L_11cceaaa:;
  /* 11cceaaa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cceab1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cceab4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 11cceaba mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 11cceac0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 11cceac6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 11cceacc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cceacf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ccead6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 11cceae0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11cceae7 jmp 0x11ccf562 */
  goto L_11ccf562;
L_11cceaec:;
  /* 11cceaec movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11cceaf0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 11cceaf6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 11cceafc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cceaff mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 11cceb05 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cceb0c ja 0x11cceb56 */
  if ((!C.cf&&!C.zf)) goto L_11cceb56;
  /* 11cceb0e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 11cceb14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cceb16 mov al, byte ptr [ecx + 0x11ccf5ac] */
  AL = (r8((uint32_t)(ECX + 0x11ccf5ac)));
  /* 11cceb1c jmp dword ptr [eax*4 + 0x11ccf594] */
  switch (EAX) {
    case 0: goto L_11cceb38;
    case 1: goto L_11cceb43;
    case 2: goto L_11cceb2e;
    case 3: goto L_11cceb23;
    case 4: goto L_11cceb4e;
    case 5: goto L_11cceb56;
    default: x86_unimpl("switch@0x11cceb1c out of table"); return;
  }
L_11cceb23:;
  /* 11cceb23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cceb26 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11cceb29 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cceb2c jmp 0x11cceb56 */
  goto L_11cceb56;
L_11cceb2e:;
  /* 11cceb2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cceb31 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11cceb33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cceb36 jmp 0x11cceb56 */
  goto L_11cceb56;
L_11cceb38:;
  /* 11cceb38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cceb3b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11cceb3e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cceb41 jmp 0x11cceb56 */
  goto L_11cceb56;
L_11cceb43:;
  /* 11cceb43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cceb46 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 11cceb49 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cceb4c jmp 0x11cceb56 */
  goto L_11cceb56;
L_11cceb4e:;
  /* 11cceb4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cceb51 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11cceb53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cceb56:;
  /* 11cceb56 jmp 0x11ccf562 */
  goto L_11ccf562;
L_11cceb5b:;
  /* 11cceb5b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11cceb5f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cceb62 jne 0x11cceb97 */
  if (!C.zf) goto L_11cceb97;
  /* 11cceb64 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11cceb67 push edx */
  push32((uint32_t)(EDX));
  /* 11cceb68 call 0x11ccf790 */
  push32(0x11cceb6du); f_11ccf790();
  /* 11cceb6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cceb70 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 11cceb76 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cceb7d jge 0x11cceb95 */
  if ((C.sf==C.of)) goto L_11cceb95;
  /* 11cceb7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cceb82 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11cceb84 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cceb87 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11cceb8d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cceb8f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11cceb95:;
  /* 11cceb95 jmp 0x11ccebae */
  goto L_11ccebae;
L_11cceb97:;
  /* 11cceb97 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 11cceb9d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cceba0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11cceba4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 11cceba8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11ccebae:;
  /* 11ccebae jmp 0x11ccf562 */
  goto L_11ccf562;
L_11ccebb3:;
  /* 11ccebb3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 11ccebbd jmp 0x11ccf562 */
  goto L_11ccf562;
L_11ccebc2:;
  /* 11ccebc2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ccebc6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccebc9 jne 0x11ccebf2 */
  if (!C.zf) goto L_11ccebf2;
  /* 11ccebcb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11ccebce push eax */
  push32((uint32_t)(EAX));
  /* 11ccebcf call 0x11ccf790 */
  push32(0x11ccebd4u); f_11ccf790();
  /* 11ccebd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccebd7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11ccebdd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccebe4 jge 0x11ccebf0 */
  if ((C.sf==C.of)) goto L_11ccebf0;
  /* 11ccebe6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_11ccebf0:;
  /* 11ccebf0 jmp 0x11ccec09 */
  goto L_11ccec09;
L_11ccebf2:;
  /* 11ccebf2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 11ccebf8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ccebfb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ccebff lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11ccec03 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_11ccec09:;
  /* 11ccec09 jmp 0x11ccf562 */
  goto L_11ccf562;
L_11ccec0e:;
  /* 11ccec0e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ccec12 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 11ccec18 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11ccec1e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccec21 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 11ccec27 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccec2e ja 0x11ccec9c */
  if ((!C.cf&&!C.zf)) goto L_11ccec9c;
  /* 11ccec30 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11ccec36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccec38 mov al, byte ptr [ecx + 0x11ccf5d1] */
  AL = (r8((uint32_t)(ECX + 0x11ccf5d1)));
  /* 11ccec3e jmp dword ptr [eax*4 + 0x11ccf5bd] */
  switch (EAX) {
    case 0: goto L_11ccec50;
    case 1: goto L_11ccec89;
    case 2: goto L_11ccec45;
    case 3: goto L_11ccec93;
    case 4: goto L_11ccec9c;
    default: x86_unimpl("switch@0x11ccec3e out of table"); return;
  }
L_11ccec45:;
  /* 11ccec45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccec48 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11ccec4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ccec4e jmp 0x11ccec9c */
  goto L_11ccec9c;
L_11ccec50:;
  /* 11ccec50 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccec53 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ccec56 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccec59 jne 0x11ccec7b */
  if (!C.zf) goto L_11ccec7b;
  /* 11ccec5b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccec5e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11ccec62 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccec65 jne 0x11ccec7b */
  if (!C.zf) goto L_11ccec7b;
  /* 11ccec67 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccec6a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccec6d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ccec70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccec73 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ccec76 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ccec79 jmp 0x11ccec87 */
  goto L_11ccec87;
L_11ccec7b:;
  /* 11ccec7b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11ccec82 jmp 0x11ccea10 */
  goto L_11ccea10;
L_11ccec87:;
  /* 11ccec87 jmp 0x11ccec9c */
  goto L_11ccec9c;
L_11ccec89:;
  /* 11ccec89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccec8c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11ccec8e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccec91 jmp 0x11ccec9c */
  goto L_11ccec9c;
L_11ccec93:;
  /* 11ccec93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccec96 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ccec99 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ccec9c:;
  /* 11ccec9c jmp 0x11ccf562 */
  goto L_11ccf562;
L_11cceca1:;
  /* 11cceca1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11cceca5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 11ccecab mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11ccecb1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccecb4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 11ccecba cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccecc1 ja 0x11ccf387 */
  if ((!C.cf&&!C.zf)) goto L_11ccf387;
  /* 11ccecc7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11cceccd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cceccf mov cl, byte ptr [edx + 0x11ccf63c] */
  CL = (r8((uint32_t)(EDX + 0x11ccf63c)));
  /* 11ccecd5 jmp dword ptr [ecx*4 + 0x11ccf600] */
  switch (ECX) {
    case 0: goto L_11ccecdc;
    case 1: goto L_11ccef70;
    case 2: goto L_11ccee00;
    case 3: goto L_11ccf0a9;
    case 4: goto L_11cced6b;
    case 5: goto L_11ccecf1;
    case 6: goto L_11ccf07b;
    case 7: goto L_11ccef80;
    case 8: goto L_11ccef25;
    case 9: goto L_11ccf0f5;
    case 10: goto L_11ccf09f;
    case 11: goto L_11ccee16;
    case 12: goto L_11ccf093;
    case 13: goto L_11ccf0b5;
    case 14: goto L_11ccf387;
    default: x86_unimpl("switch@0x11ccecd5 out of table"); return;
  }
L_11ccecdc:;
  /* 11ccecdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccecdf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccece4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccece6 jne 0x11ccecf1 */
  if (!C.zf) goto L_11ccecf1;
  /* 11ccece8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cceceb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ccecee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ccecf1:;
  /* 11ccecf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccecf4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 11ccecfa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccecfc je 0x11cced37 */
  if (C.zf) goto L_11cced37;
  /* 11ccecfe lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11cced01 push eax */
  push32((uint32_t)(EAX));
  /* 11cced02 call 0x11ccf7d0 */
  push32(0x11cced07u); f_11ccf7d0();
  /* 11cced07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cced0a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 11cced0e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11cced12 push ecx */
  push32((uint32_t)(ECX));
  /* 11cced13 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11cced19 push edx */
  push32((uint32_t)(EDX));
  /* 11cced1a call 0x11cd5ae0 */
  push32(0x11cced1fu); f_11cd5ae0();
  /* 11cced1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cced22 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11cced25 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cced29 jge 0x11cced35 */
  if ((C.sf==C.of)) goto L_11cced35;
  /* 11cced2b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_11cced35:;
  /* 11cced35 jmp 0x11cced5d */
  goto L_11cced5d;
L_11cced37:;
  /* 11cced37 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11cced3a push eax */
  push32((uint32_t)(EAX));
  /* 11cced3b call 0x11ccf790 */
  push32(0x11cced40u); f_11ccf790();
  /* 11cced40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cced43 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 11cced4a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 11cced50 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 11cced56 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_11cced5d:;
  /* 11cced5d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11cced63 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11cced66 jmp 0x11ccf387 */
  goto L_11ccf387;
L_11cced6b:;
  /* 11cced6b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11cced6e push eax */
  push32((uint32_t)(EAX));
  /* 11cced6f call 0x11ccf790 */
  push32(0x11cced74u); f_11ccf790();
  /* 11cced74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cced77 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 11cced7d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cced84 je 0x11cced92 */
  if (C.zf) goto L_11cced92;
  /* 11cced86 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11cced8c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cced90 jne 0x11ccedac */
  if (!C.zf) goto L_11ccedac;
L_11cced92:;
  /* 11cced92 mov edx, dword ptr [0x11cfcf38] */
  EDX = (r32((uint32_t)(0x11cfcf38)));
  /* 11cced98 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11cced9b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cced9e push eax */
  push32((uint32_t)(EAX));
  /* 11cced9f call 0x11cd0a80 */
  push32(0x11cceda4u); f_11cd0a80();
  /* 11cceda4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cceda7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ccedaa jmp 0x11ccedfb */
  goto L_11ccedfb;
L_11ccedac:;
  /* 11ccedac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccedaf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 11ccedb5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccedb7 je 0x11cceddc */
  if (C.zf) goto L_11cceddc;
  /* 11ccedb9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11ccedbf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ccedc2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ccedc5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11ccedcb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 11ccedce shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ccedd0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11ccedd3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11ccedda jmp 0x11ccedfb */
  goto L_11ccedfb;
L_11cceddc:;
  /* 11cceddc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11ccede3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11ccede9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ccedec mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ccedef mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11ccedf5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 11ccedf8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ccedfb:;
  /* 11ccedfb jmp 0x11ccf387 */
  goto L_11ccf387;
L_11ccee00:;
  /* 11ccee00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccee03 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 11ccee09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccee0b jne 0x11ccee16 */
  if (!C.zf) goto L_11ccee16;
  /* 11ccee0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccee10 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ccee13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ccee16:;
  /* 11ccee16 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccee1d jne 0x11ccee2b */
  if (!C.zf) goto L_11ccee2b;
  /* 11ccee1f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 11ccee29 jmp 0x11ccee37 */
  goto L_11ccee37;
L_11ccee2b:;
  /* 11ccee2b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11ccee31 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_11ccee37:;
  /* 11ccee37 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 11ccee3d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11ccee43 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11ccee46 push edx */
  push32((uint32_t)(EDX));
  /* 11ccee47 call 0x11ccf790 */
  push32(0x11ccee4cu); f_11ccf790();
  /* 11ccee4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccee4f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ccee52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccee55 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccee5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccee5c je 0x11cceec6 */
  if (C.zf) goto L_11cceec6;
  /* 11ccee5e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccee62 jne 0x11ccee6d */
  if (!C.zf) goto L_11ccee6d;
  /* 11ccee64 mov ecx, dword ptr [0x11cfcf3c] */
  ECX = (r32((uint32_t)(0x11cfcf3c)));
  /* 11ccee6a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11ccee6d:;
  /* 11ccee6d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11ccee74 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ccee77 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_11ccee7d:;
  /* 11ccee7d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11ccee83 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 11ccee89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccee8c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11ccee92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccee94 je 0x11cceeb6 */
  if (C.zf) goto L_11cceeb6;
  /* 11ccee96 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11ccee9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccee9e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11cceea1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cceea3 je 0x11cceeb6 */
  if (C.zf) goto L_11cceeb6;
  /* 11cceea5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 11cceeab add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cceeae mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 11cceeb4 jmp 0x11ccee7d */
  goto L_11ccee7d;
L_11cceeb6:;
  /* 11cceeb6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11cceebc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cceebf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11cceec1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11cceec4 jmp 0x11ccef20 */
  goto L_11ccef20;
L_11cceec6:;
  /* 11cceec6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cceeca jne 0x11cceed4 */
  if (!C.zf) goto L_11cceed4;
  /* 11cceecc mov eax, dword ptr [0x11cfcf38] */
  EAX = (r32((uint32_t)(0x11cfcf38)));
  /* 11cceed1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11cceed4:;
  /* 11cceed4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cceed7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_11cceedd:;
  /* 11cceedd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 11cceee3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11cceee9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cceeec mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 11cceef2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cceef4 je 0x11ccef14 */
  if (C.zf) goto L_11ccef14;
  /* 11cceef6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11cceefc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cceeff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccef01 je 0x11ccef14 */
  if (C.zf) goto L_11ccef14;
  /* 11ccef03 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 11ccef09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccef0c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 11ccef12 jmp 0x11cceedd */
  goto L_11cceedd;
L_11ccef14:;
  /* 11ccef14 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11ccef1a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccef1d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11ccef20:;
  /* 11ccef20 jmp 0x11ccf387 */
  goto L_11ccf387;
L_11ccef25:;
  /* 11ccef25 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11ccef28 push edx */
  push32((uint32_t)(EDX));
  /* 11ccef29 call 0x11ccf790 */
  push32(0x11ccef2eu); f_11ccf790();
  /* 11ccef2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccef31 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 11ccef37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccef3a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccef3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccef3f je 0x11ccef53 */
  if (C.zf) goto L_11ccef53;
  /* 11ccef41 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11ccef47 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 11ccef4e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11ccef51 jmp 0x11ccef61 */
  goto L_11ccef61;
L_11ccef53:;
  /* 11ccef53 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11ccef59 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11ccef5f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11ccef61:;
  /* 11ccef61 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 11ccef6b jmp 0x11ccf387 */
  goto L_11ccf387;
L_11ccef70:;
  /* 11ccef70 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11ccef77 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 11ccef7a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ccef7d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_11ccef80:;
  /* 11ccef80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccef83 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11ccef85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccef88 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 11ccef8e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ccef91 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccef98 jge 0x11ccefa6 */
  if ((C.sf==C.of)) goto L_11ccefa6;
  /* 11ccef9a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 11ccefa4 jmp 0x11ccefc2 */
  goto L_11ccefc2;
L_11ccefa6:;
  /* 11ccefa6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccefad jne 0x11ccefc2 */
  if (!C.zf) goto L_11ccefc2;
  /* 11ccefaf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ccefb3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccefb6 jne 0x11ccefc2 */
  if (!C.zf) goto L_11ccefc2;
  /* 11ccefb8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_11ccefc2:;
  /* 11ccefc2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccefc5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccefc8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11ccefcb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccefce sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccefd1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ccefd3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ccefd6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 11ccefdc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 11ccefe2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccefe5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccefe6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11ccefec push edx */
  push32((uint32_t)(EDX));
  /* 11ccefed movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11cceff1 push eax */
  push32((uint32_t)(EAX));
  /* 11cceff2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cceff5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cceff6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 11cceffc push edx */
  push32((uint32_t)(EDX));
  /* 11cceffd call dword ptr [0x11cfce30] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cfce30))), 0x11ccf003u);
  /* 11ccf003 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf006 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf009 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccf00e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccf010 je 0x11ccf028 */
  if (C.zf) goto L_11ccf028;
  /* 11ccf012 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf019 jne 0x11ccf028 */
  if (!C.zf) goto L_11ccf028;
  /* 11ccf01b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ccf01e push ecx */
  push32((uint32_t)(ECX));
  /* 11ccf01f call dword ptr [0x11cfce3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cfce3c))), 0x11ccf025u);
  /* 11ccf025 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccf028:;
  /* 11ccf028 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ccf02c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf02f jne 0x11ccf04a */
  if (!C.zf) goto L_11ccf04a;
  /* 11ccf031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf034 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccf039 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccf03b jne 0x11ccf04a */
  if (!C.zf) goto L_11ccf04a;
  /* 11ccf03d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ccf040 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccf041 call dword ptr [0x11cfce34] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cfce34))), 0x11ccf047u);
  /* 11ccf047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccf04a:;
  /* 11ccf04a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ccf04d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ccf050 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf053 jne 0x11ccf067 */
  if (!C.zf) goto L_11ccf067;
  /* 11ccf055 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf058 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ccf05b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ccf05e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ccf061 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf064 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11ccf067:;
  /* 11ccf067 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ccf06a push eax */
  push32((uint32_t)(EAX));
  /* 11ccf06b call 0x11cd0a80 */
  push32(0x11ccf070u); f_11cd0a80();
  /* 11ccf070 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf073 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ccf076 jmp 0x11ccf387 */
  goto L_11ccf387;
L_11ccf07b:;
  /* 11ccf07b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf07e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11ccf081 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ccf084 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11ccf08e jmp 0x11ccf115 */
  goto L_11ccf115;
L_11ccf093:;
  /* 11ccf093 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11ccf09d jmp 0x11ccf115 */
  goto L_11ccf115;
L_11ccf09f:;
  /* 11ccf09f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_11ccf0a9:;
  /* 11ccf0a9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 11ccf0b3 jmp 0x11ccf0bf */
  goto L_11ccf0bf;
L_11ccf0b5:;
  /* 11ccf0b5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_11ccf0bf:;
  /* 11ccf0bf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 11ccf0c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf0cc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11ccf0d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccf0d4 je 0x11ccf0f3 */
  if (C.zf) goto L_11ccf0f3;
  /* 11ccf0d6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 11ccf0dd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 11ccf0e3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf0e6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 11ccf0ec mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_11ccf0f3:;
  /* 11ccf0f3 jmp 0x11ccf115 */
  goto L_11ccf115;
L_11ccf0f5:;
  /* 11ccf0f5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 11ccf0ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf102 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11ccf108 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccf10a je 0x11ccf115 */
  if (C.zf) goto L_11ccf115;
  /* 11ccf10c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf10f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ccf112 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ccf115:;
  /* 11ccf115 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf118 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccf11d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccf11f je 0x11ccf13e */
  if (C.zf) goto L_11ccf13e;
  /* 11ccf121 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11ccf124 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccf125 call 0x11ccf7b0 */
  push32(0x11ccf12au); f_11ccf7b0();
  /* 11ccf12a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf12d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11ccf133 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11ccf139 jmp 0x11ccf1cf */
  goto L_11ccf1cf;
L_11ccf13e:;
  /* 11ccf13e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf141 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11ccf144 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccf146 je 0x11ccf190 */
  if (C.zf) goto L_11ccf190;
  /* 11ccf148 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf14b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccf14e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccf150 je 0x11ccf170 */
  if (C.zf) goto L_11ccf170;
  /* 11ccf152 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11ccf155 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccf156 call 0x11ccf790 */
  push32(0x11ccf15bu); f_11ccf790();
  /* 11ccf15b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf15e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11ccf161 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ccf162 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11ccf168 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11ccf16e jmp 0x11ccf18e */
  goto L_11ccf18e;
L_11ccf170:;
  /* 11ccf170 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11ccf173 push edx */
  push32((uint32_t)(EDX));
  /* 11ccf174 call 0x11ccf790 */
  push32(0x11ccf179u); f_11ccf790();
  /* 11ccf179 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf17c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ccf181 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ccf182 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11ccf188 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_11ccf18e:;
  /* 11ccf18e jmp 0x11ccf1cf */
  goto L_11ccf1cf;
L_11ccf190:;
  /* 11ccf190 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf193 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccf196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccf198 je 0x11ccf1b5 */
  if (C.zf) goto L_11ccf1b5;
  /* 11ccf19a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11ccf19d push ecx */
  push32((uint32_t)(ECX));
  /* 11ccf19e call 0x11ccf790 */
  push32(0x11ccf1a3u); f_11ccf790();
  /* 11ccf1a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf1a6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ccf1a7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11ccf1ad mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11ccf1b3 jmp 0x11ccf1cf */
  goto L_11ccf1cf;
L_11ccf1b5:;
  /* 11ccf1b5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11ccf1b8 push edx */
  push32((uint32_t)(EDX));
  /* 11ccf1b9 call 0x11ccf790 */
  push32(0x11ccf1beu); f_11ccf790();
  /* 11ccf1be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf1c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ccf1c3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11ccf1c9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_11ccf1cf:;
  /* 11ccf1cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf1d2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11ccf1d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccf1d7 je 0x11ccf217 */
  if (C.zf) goto L_11ccf217;
  /* 11ccf1d9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf1e0 jg 0x11ccf217 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ccf217;
  /* 11ccf1e2 jl 0x11ccf1ed */
  if ((C.sf!=C.of)) goto L_11ccf1ed;
  /* 11ccf1e4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf1eb jae 0x11ccf217 */
  if (!C.cf) goto L_11ccf217;
L_11ccf1ed:;
  /* 11ccf1ed mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11ccf1f3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ccf1f5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11ccf1fb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf1fe neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ccf200 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11ccf206 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 11ccf20c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf20f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ccf212 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ccf215 jmp 0x11ccf22f */
  goto L_11ccf22f;
L_11ccf217:;
  /* 11ccf217 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11ccf21d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11ccf223 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11ccf229 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11ccf22f:;
  /* 11ccf22f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf232 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ccf238 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccf23a jne 0x11ccf257 */
  if (!C.zf) goto L_11ccf257;
  /* 11ccf23c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11ccf242 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11ccf248 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 11ccf24b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11ccf251 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11ccf257:;
  /* 11ccf257 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf25e jge 0x11ccf26c */
  if ((C.sf==C.of)) goto L_11ccf26c;
  /* 11ccf260 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 11ccf26a jmp 0x11ccf275 */
  goto L_11ccf275;
L_11ccf26c:;
  /* 11ccf26c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf26f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11ccf272 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ccf275:;
  /* 11ccf275 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11ccf27b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 11ccf281 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccf283 jne 0x11ccf28c */
  if (!C.zf) goto L_11ccf28c;
  /* 11ccf285 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11ccf28c:;
  /* 11ccf28c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11ccf28f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11ccf292:;
  /* 11ccf292 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11ccf298 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11ccf29e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccf2a1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11ccf2a7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccf2a9 jg 0x11ccf2bf */
  if ((!C.zf&&C.sf==C.of)) goto L_11ccf2bf;
  /* 11ccf2ab mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11ccf2b1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 11ccf2b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccf2b9 je 0x11ccf340 */
  if (C.zf) goto L_11ccf340;
L_11ccf2bf:;
  /* 11ccf2bf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11ccf2c5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ccf2c6 push edx */
  push32((uint32_t)(EDX));
  /* 11ccf2c7 push eax */
  push32((uint32_t)(EAX));
  /* 11ccf2c8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 11ccf2ce push edx */
  push32((uint32_t)(EDX));
  /* 11ccf2cf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11ccf2d5 push eax */
  push32((uint32_t)(EAX));
  /* 11ccf2d6 call 0x11cd5c70 */
  push32(0x11ccf2dbu); f_11cd5c70();
  /* 11ccf2db add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf2de mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11ccf2e4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11ccf2ea cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ccf2eb push edx */
  push32((uint32_t)(EDX));
  /* 11ccf2ec push eax */
  push32((uint32_t)(EAX));
  /* 11ccf2ed mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11ccf2f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccf2f4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11ccf2fa push edx */
  push32((uint32_t)(EDX));
  /* 11ccf2fb call 0x11cd5c00 */
  push32(0x11ccf300u); f_11cd5c00();
  /* 11ccf300 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11ccf306 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 11ccf30c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf313 jle 0x11ccf327 */
  if ((C.zf||C.sf!=C.of)) goto L_11ccf327;
  /* 11ccf315 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 11ccf31b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf321 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11ccf327:;
  /* 11ccf327 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ccf32a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11ccf330 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11ccf332 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ccf335 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccf338 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ccf33b jmp 0x11ccf292 */
  goto L_11ccf292;
L_11ccf340:;
  /* 11ccf340 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11ccf343 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccf346 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ccf349 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ccf34c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf34f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11ccf352 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf355 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccf35a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccf35c je 0x11ccf387 */
  if (C.zf) goto L_11ccf387;
  /* 11ccf35e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ccf361 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ccf364 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf367 jne 0x11ccf36f */
  if (!C.zf) goto L_11ccf36f;
  /* 11ccf369 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf36d jne 0x11ccf387 */
  if (!C.zf) goto L_11ccf387;
L_11ccf36f:;
  /* 11ccf36f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ccf372 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccf375 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ccf378 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ccf37b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 11ccf37e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ccf381 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf384 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11ccf387:;
  /* 11ccf387 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf38e jne 0x11ccf562 */
  if (!C.zf) goto L_11ccf562;
  /* 11ccf394 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf397 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccf39a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccf39c je 0x11ccf3ed */
  if (C.zf) goto L_11ccf3ed;
  /* 11ccf39e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf3a1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11ccf3a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccf3a9 je 0x11ccf3bb */
  if (C.zf) goto L_11ccf3bb;
  /* 11ccf3ab mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 11ccf3b2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11ccf3b9 jmp 0x11ccf3ed */
  goto L_11ccf3ed;
L_11ccf3bb:;
  /* 11ccf3bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf3be and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ccf3c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccf3c3 je 0x11ccf3d5 */
  if (C.zf) goto L_11ccf3d5;
  /* 11ccf3c5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 11ccf3cc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11ccf3d3 jmp 0x11ccf3ed */
  goto L_11ccf3ed;
L_11ccf3d5:;
  /* 11ccf3d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf3d8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccf3db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccf3dd je 0x11ccf3ed */
  if (C.zf) goto L_11ccf3ed;
  /* 11ccf3df mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11ccf3e6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_11ccf3ed:;
  /* 11ccf3ed mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11ccf3f3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccf3f6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccf3f9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 11ccf3ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf402 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11ccf405 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccf407 jne 0x11ccf425 */
  if (!C.zf) goto L_11ccf425;
  /* 11ccf409 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11ccf40f push eax */
  push32((uint32_t)(EAX));
  /* 11ccf410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf413 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccf414 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11ccf41a push edx */
  push32((uint32_t)(EDX));
  /* 11ccf41b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11ccf41d call 0x11ccf700 */
  push32(0x11ccf422u); f_11ccf700();
  /* 11ccf422 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccf425:;
  /* 11ccf425 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11ccf42b push eax */
  push32((uint32_t)(EAX));
  /* 11ccf42c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf42f push ecx */
  push32((uint32_t)(ECX));
  /* 11ccf430 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ccf433 push edx */
  push32((uint32_t)(EDX));
  /* 11ccf434 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 11ccf43a push eax */
  push32((uint32_t)(EAX));
  /* 11ccf43b call 0x11ccf740 */
  push32(0x11ccf440u); f_11ccf740();
  /* 11ccf440 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf443 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf446 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ccf449 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccf44b je 0x11ccf473 */
  if (C.zf) goto L_11ccf473;
  /* 11ccf44d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf450 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ccf453 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccf455 jne 0x11ccf473 */
  if (!C.zf) goto L_11ccf473;
  /* 11ccf457 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11ccf45d push eax */
  push32((uint32_t)(EAX));
  /* 11ccf45e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf461 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccf462 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11ccf468 push edx */
  push32((uint32_t)(EDX));
  /* 11ccf469 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11ccf46b call 0x11ccf700 */
  push32(0x11ccf470u); f_11ccf700();
  /* 11ccf470 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccf473:;
  /* 11ccf473 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf477 je 0x11ccf521 */
  if (C.zf) goto L_11ccf521;
  /* 11ccf47d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf481 jle 0x11ccf521 */
  if ((C.zf||C.sf!=C.of)) goto L_11ccf521;
  /* 11ccf487 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ccf48a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 11ccf490 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ccf493 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_11ccf499:;
  /* 11ccf499 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 11ccf49f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 11ccf4a5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccf4a8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 11ccf4ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccf4b0 je 0x11ccf51f */
  if (C.zf) goto L_11ccf51f;
  /* 11ccf4b2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 11ccf4b8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11ccf4bb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 11ccf4c2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 11ccf4c9 push eax */
  push32((uint32_t)(EAX));
  /* 11ccf4ca lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 11ccf4d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccf4d1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 11ccf4d7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf4da mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11ccf4e0 call 0x11cd5ae0 */
  push32(0x11ccf4e5u); f_11cd5ae0();
  /* 11ccf4e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf4e8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 11ccf4ee cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf4f5 jg 0x11ccf4f9 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ccf4f9;
  /* 11ccf4f7 jmp 0x11ccf51f */
  goto L_11ccf51f;
L_11ccf4f9:;
  /* 11ccf4f9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11ccf4ff push eax */
  push32((uint32_t)(EAX));
  /* 11ccf500 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf503 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccf504 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 11ccf50a push edx */
  push32((uint32_t)(EDX));
  /* 11ccf50b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11ccf511 push eax */
  push32((uint32_t)(EAX));
  /* 11ccf512 call 0x11ccf740 */
  push32(0x11ccf517u); f_11ccf740();
  /* 11ccf517 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf51a jmp 0x11ccf499 */
  goto L_11ccf499;
L_11ccf51f:;
  /* 11ccf51f jmp 0x11ccf53c */
  goto L_11ccf53c;
L_11ccf521:;
  /* 11ccf521 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11ccf527 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccf528 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf52b push edx */
  push32((uint32_t)(EDX));
  /* 11ccf52c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ccf52f push eax */
  push32((uint32_t)(EAX));
  /* 11ccf530 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ccf533 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccf534 call 0x11ccf740 */
  push32(0x11ccf539u); f_11ccf740();
  /* 11ccf539 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccf53c:;
  /* 11ccf53c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf53f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ccf542 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccf544 je 0x11ccf562 */
  if (C.zf) goto L_11ccf562;
  /* 11ccf546 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11ccf54c push eax */
  push32((uint32_t)(EAX));
  /* 11ccf54d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf550 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccf551 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11ccf557 push edx */
  push32((uint32_t)(EDX));
  /* 11ccf558 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11ccf55a call 0x11ccf700 */
  push32(0x11ccf55fu); f_11ccf700();
  /* 11ccf55f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccf562:;
  /* 11ccf562 jmp 0x11cce974 */
  goto L_11cce974;
L_11ccf567:;
  /* 11ccf567 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11ccf56d pop edi */
  EDI = (pop32());
  /* 11ccf56e pop esi */
  ESI = (pop32());
  /* 11ccf56f pop ebx */
  EBX = (pop32());
  /* 11ccf570 mov esp, ebp */
  ESP = (EBP);
  /* 11ccf572 pop ebp */
  EBP = (pop32());
  /* 11ccf573 ret  */
  ESPCHK(0x11cce950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f680 @ 0x11ccf680 (119 bytes, 44 insns) */
void f_11ccf680(void) {
  FTRACE(0x11ccf680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccf680 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccf681 mov ebp, esp */
  EBP = (ESP);
  /* 11ccf683 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccf684 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccf687 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ccf68a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccf68d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccf690 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ccf693 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccf696 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf69a jl 0x11ccf6c2 */
  if ((C.sf!=C.of)) goto L_11ccf6c2;
  /* 11ccf69c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccf69f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ccf6a1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ccf6a4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11ccf6a6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11ccf6aa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccf6b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ccf6b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccf6b6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ccf6b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf6bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccf6be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ccf6c0 jmp 0x11ccf6d5 */
  goto L_11ccf6d5;
L_11ccf6c2:;
  /* 11ccf6c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccf6c5 push edx */
  push32((uint32_t)(EDX));
  /* 11ccf6c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf6c9 push eax */
  push32((uint32_t)(EAX));
  /* 11ccf6ca call 0x11cce6d0 */
  push32(0x11ccf6cfu); f_11cce6d0();
  /* 11ccf6cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf6d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ccf6d5:;
  /* 11ccf6d5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf6d9 jne 0x11ccf6e6 */
  if (!C.zf) goto L_11ccf6e6;
  /* 11ccf6db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccf6de mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11ccf6e4 jmp 0x11ccf6f3 */
  goto L_11ccf6f3;
L_11ccf6e6:;
  /* 11ccf6e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccf6e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ccf6eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf6ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccf6f1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11ccf6f3:;
  /* 11ccf6f3 mov esp, ebp */
  ESP = (EBP);
  /* 11ccf6f5 pop ebp */
  EBP = (pop32());
  /* 11ccf6f6 ret  */
  ESPCHK(0x11ccf680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f700 @ 0x11ccf700 (53 bytes, 23 insns) */
void f_11ccf700(void) {
  FTRACE(0x11ccf700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccf700 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccf701 mov ebp, esp */
  EBP = (ESP);
L_11ccf703:;
  /* 11ccf703 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccf706 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccf709 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccf70c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ccf70f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccf711 jle 0x11ccf733 */
  if ((C.zf||C.sf!=C.of)) goto L_11ccf733;
  /* 11ccf713 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccf716 push edx */
  push32((uint32_t)(EDX));
  /* 11ccf717 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccf71a push eax */
  push32((uint32_t)(EAX));
  /* 11ccf71b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf71e push ecx */
  push32((uint32_t)(ECX));
  /* 11ccf71f call 0x11ccf680 */
  push32(0x11ccf724u); f_11ccf680();
  /* 11ccf724 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf727 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccf72a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf72d jne 0x11ccf731 */
  if (!C.zf) goto L_11ccf731;
  /* 11ccf72f jmp 0x11ccf733 */
  goto L_11ccf733;
L_11ccf731:;
  /* 11ccf731 jmp 0x11ccf703 */
  goto L_11ccf703;
L_11ccf733:;
  /* 11ccf733 pop ebp */
  EBP = (pop32());
  /* 11ccf734 ret  */
  ESPCHK(0x11ccf700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f740 @ 0x11ccf740 (74 bytes, 31 insns) */
void f_11ccf740(void) {
  FTRACE(0x11ccf740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccf740 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccf741 mov ebp, esp */
  EBP = (ESP);
  /* 11ccf743 push ecx */
  push32((uint32_t)(ECX));
L_11ccf744:;
  /* 11ccf744 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccf747 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccf74a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccf74d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ccf750 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccf752 jle 0x11ccf786 */
  if ((C.zf||C.sf!=C.of)) goto L_11ccf786;
  /* 11ccf754 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccf757 push edx */
  push32((uint32_t)(EDX));
  /* 11ccf758 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccf75b push eax */
  push32((uint32_t)(EAX));
  /* 11ccf75c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf75f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ccf762 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ccf765 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf768 push eax */
  push32((uint32_t)(EAX));
  /* 11ccf769 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf76c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf76f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11ccf772 call 0x11ccf680 */
  push32(0x11ccf777u); f_11ccf680();
  /* 11ccf777 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf77a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccf77d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf780 jne 0x11ccf784 */
  if (!C.zf) goto L_11ccf784;
  /* 11ccf782 jmp 0x11ccf786 */
  goto L_11ccf786;
L_11ccf784:;
  /* 11ccf784 jmp 0x11ccf744 */
  goto L_11ccf744;
L_11ccf786:;
  /* 11ccf786 mov esp, ebp */
  ESP = (EBP);
  /* 11ccf788 pop ebp */
  EBP = (pop32());
  /* 11ccf789 ret  */
  ESPCHK(0x11ccf740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f790 @ 0x11ccf790 (26 bytes, 12 insns) */
void f_11ccf790(void) {
  FTRACE(0x11ccf790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccf790 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccf791 mov ebp, esp */
  EBP = (ESP);
  /* 11ccf793 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf796 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccf798 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf79b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf79e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ccf7a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf7a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccf7a5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11ccf7a8 pop ebp */
  EBP = (pop32());
  /* 11ccf7a9 ret  */
  ESPCHK(0x11ccf790u, _esp0);
  ESP += 4; return;
}

